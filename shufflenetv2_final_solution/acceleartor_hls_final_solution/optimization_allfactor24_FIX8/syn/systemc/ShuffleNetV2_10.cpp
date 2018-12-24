#include "ShuffleNetV2.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void ShuffleNetV2::thread_tmp_690_fu_16278_p3() {
    tmp_690_fu_16278_p3 = esl_concat<5,4>(co19_reg_9827.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_691_fu_16290_p3() {
    tmp_691_fu_16290_p3 = esl_concat<5,1>(co19_reg_9827.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_692_fu_16302_p2() {
    tmp_692_fu_16302_p2 = (!p_shl292_cast_fu_16298_p1.read().is_01() || !p_shl291_cast_fu_16286_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl292_cast_fu_16298_p1.read()) + sc_biguint<10>(p_shl291_cast_fu_16286_p1.read()));
}

void ShuffleNetV2::thread_tmp_693_fu_16330_p3() {
    tmp_693_fu_16330_p3 = esl_concat<6,4>(tmp_s_fu_16324_p2.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_694_fu_16342_p3() {
    tmp_694_fu_16342_p3 = esl_concat<6,1>(tmp_s_fu_16324_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_695_fu_16354_p2() {
    tmp_695_fu_16354_p2 = (!p_shl294_cast_fu_16350_p1.read().is_01() || !p_shl293_cast_fu_16338_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl294_cast_fu_16350_p1.read()) + sc_biguint<11>(p_shl293_cast_fu_16338_p1.read()));
}

void ShuffleNetV2::thread_tmp_696_fu_16503_p3() {
    tmp_696_fu_16503_p3 = esl_concat<7,5>(sum_fu_16497_p2.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_697_fu_16515_p3() {
    tmp_697_fu_16515_p3 = esl_concat<7,3>(sum_fu_16497_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_698_fu_16527_p2() {
    tmp_698_fu_16527_p2 = (!p_shl299_cast_fu_16511_p1.read().is_01() || !p_shl300_cast_fu_16523_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl299_cast_fu_16511_p1.read()) - sc_biguint<13>(p_shl300_cast_fu_16523_p1.read()));
}

void ShuffleNetV2::thread_tmp_699_fu_16380_p2() {
    tmp_699_fu_16380_p2 = (!h_47_cast_cast_fu_16376_p1.read().is_01() || !tmp_695_reg_40938.read().is_01())? sc_lv<11>(): (sc_biguint<11>(h_47_cast_cast_fu_16376_p1.read()) + sc_biguint<11>(tmp_695_reg_40938.read()));
}

void ShuffleNetV2::thread_tmp_700_fu_16405_p2() {
    tmp_700_fu_16405_p2 = (!p_shl297_cast_fu_16385_p3.read().is_01() || !p_shl298_cast_fu_16401_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl297_cast_fu_16385_p3.read()) + sc_biguint<15>(p_shl298_cast_fu_16401_p1.read()));
}

void ShuffleNetV2::thread_tmp_701_fu_16411_p2() {
    tmp_701_fu_16411_p2 = (!h_47_cast_cast1_fu_16372_p1.read().is_01() || !tmp_692_reg_40925.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h_47_cast_cast1_fu_16372_p1.read()) + sc_biguint<10>(tmp_692_reg_40925.read()));
}

void ShuffleNetV2::thread_tmp_702_fu_16436_p2() {
    tmp_702_fu_16436_p2 = (!p_shl295_cast_fu_16416_p3.read().is_01() || !p_shl296_cast_fu_16432_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl295_cast_fu_16416_p3.read()) + sc_biguint<14>(p_shl296_cast_fu_16432_p1.read()));
}

void ShuffleNetV2::thread_tmp_703_fu_16462_p2() {
    tmp_703_fu_16462_p2 = (!tmp_700_reg_40951.read().is_01() || !w_48_cast_cast_fu_16458_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_700_reg_40951.read()) + sc_biguint<15>(w_48_cast_cast_fu_16458_p1.read()));
}

void ShuffleNetV2::thread_tmp_704_fu_16472_p2() {
    tmp_704_fu_16472_p2 = (!tmp_702_reg_40956.read().is_01() || !w_48_cast_cast1_fu_16454_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_702_reg_40956.read()) + sc_biguint<14>(w_48_cast_cast1_fu_16454_p1.read()));
}

void ShuffleNetV2::thread_tmp_705_fu_16623_p3() {
    tmp_705_fu_16623_p3 = esl_concat<5,2>(co25_reg_9894.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_706_fu_16635_p2() {
    tmp_706_fu_16635_p2 = (!p_shl301_cast_fu_16631_p1.read().is_01() || !co25_cast1_cast_fu_16619_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl301_cast_fu_16631_p1.read()) - sc_biguint<8>(co25_cast1_cast_fu_16619_p1.read()));
}

void ShuffleNetV2::thread_tmp_707_fu_16667_p3() {
    tmp_707_fu_16667_p3 = esl_concat<7,2>(sum1_fu_16657_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_708_fu_16679_p2() {
    tmp_708_fu_16679_p2 = (!p_shl302_cast_fu_16675_p1.read().is_01() || !sum11_cast_cast_fu_16663_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl302_cast_fu_16675_p1.read()) - sc_biguint<10>(sum11_cast_cast_fu_16663_p1.read()));
}

void ShuffleNetV2::thread_tmp_709_fu_16704_p2() {
    tmp_709_fu_16704_p2 = (!w26_cast_cast_fu_16700_p1.read().is_01() || !tmp_708_reg_41153.read().is_01())? sc_lv<10>(): (sc_biguint<10>(w26_cast_cast_fu_16700_p1.read()) + sc_biguint<10>(tmp_708_reg_41153.read()));
}

void ShuffleNetV2::thread_tmp_710_fu_16725_p2() {
    tmp_710_fu_16725_p2 = (!p_shl202_fu_16721_p1.read().is_01() || !tmp_872_cast_fu_16709_p1.read().is_01())? sc_lv<32>(): (sc_bigint<32>(p_shl202_fu_16721_p1.read()) - sc_bigint<32>(tmp_872_cast_fu_16709_p1.read()));
}

void ShuffleNetV2::thread_tmp_711_fu_16731_p2() {
    tmp_711_fu_16731_p2 = (!w26_cast_cast1_fu_16696_p1.read().is_01() || !tmp_869_cast_reg_41140.read().is_01())? sc_lv<9>(): (sc_biguint<9>(w26_cast_cast1_fu_16696_p1.read()) + sc_bigint<9>(tmp_869_cast_reg_41140.read()));
}

void ShuffleNetV2::thread_tmp_712_fu_16742_p2() {
    tmp_712_fu_16742_p2 = (!tmp_2190_fu_16736_p2.read().is_01() || !tmp_711_fu_16731_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_2190_fu_16736_p2.read()) - sc_biguint<9>(tmp_711_fu_16731_p2.read()));
}

void ShuffleNetV2::thread_tmp_713_fu_16775_p2() {
    tmp_713_fu_16775_p2 = (!tmp_712_reg_41164.read().is_01() || !h27_cast_cast_fu_16771_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_712_reg_41164.read()) + sc_biguint<9>(h27_cast_cast_fu_16771_p1.read()));
}

void ShuffleNetV2::thread_tmp_714_fu_16825_p4() {
    tmp_714_fu_16825_p4 = esl_concat<6,5>(esl_concat<1,5>(ap_const_lv1_1, co29_reg_9938.read()), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_715_fu_16835_p1() {
    tmp_715_fu_16835_p1 = esl_sext<12,11>(tmp_714_fu_16825_p4.read());
}

void ShuffleNetV2::thread_tmp_716_fu_16843_p4() {
    tmp_716_fu_16843_p4 = esl_concat<6,3>(esl_concat<1,5>(ap_const_lv1_1, co29_reg_9938.read()), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_717_fu_16853_p1() {
    tmp_717_fu_16853_p1 = esl_sext<10,9>(tmp_716_fu_16843_p4.read());
}

void ShuffleNetV2::thread_tmp_718_fu_16861_p2() {
    tmp_718_fu_16861_p2 = (!p_shl305_cast_fu_16839_p1.read().is_01() || !p_shl306_cast_fu_16857_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl305_cast_fu_16839_p1.read()) - sc_biguint<13>(p_shl306_cast_fu_16857_p1.read()));
}

void ShuffleNetV2::thread_tmp_719_fu_16965_p3() {
    tmp_719_fu_16965_p3 = esl_concat<5,4>(co32_reg_9972.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_720_fu_16977_p3() {
    tmp_720_fu_16977_p3 = esl_concat<5,1>(co32_reg_9972.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_721_fu_16989_p2() {
    tmp_721_fu_16989_p2 = (!p_shl308_cast_fu_16985_p1.read().is_01() || !p_shl307_cast_fu_16973_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl308_cast_fu_16985_p1.read()) + sc_biguint<10>(p_shl307_cast_fu_16973_p1.read()));
}

void ShuffleNetV2::thread_tmp_722_fu_17084_p3() {
    tmp_722_fu_17084_p3 = esl_concat<5,4>(co35_reg_10005.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_723_fu_17096_p3() {
    tmp_723_fu_17096_p3 = esl_concat<5,1>(co35_reg_10005.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_724_fu_17108_p2() {
    tmp_724_fu_17108_p2 = (!p_shl312_cast_fu_17104_p1.read().is_01() || !p_shl311_cast_fu_17092_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl312_cast_fu_17104_p1.read()) + sc_biguint<10>(p_shl311_cast_fu_17092_p1.read()));
}

void ShuffleNetV2::thread_tmp_725_fu_17136_p3() {
    tmp_725_fu_17136_p3 = esl_concat<6,4>(tmp_165_fu_17130_p2.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_726_fu_17148_p3() {
    tmp_726_fu_17148_p3 = esl_concat<6,1>(tmp_165_fu_17130_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_727_fu_17160_p2() {
    tmp_727_fu_17160_p2 = (!p_shl314_cast_fu_17156_p1.read().is_01() || !p_shl313_cast_fu_17144_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl314_cast_fu_17156_p1.read()) + sc_biguint<11>(p_shl313_cast_fu_17144_p1.read()));
}

void ShuffleNetV2::thread_tmp_728_fu_17023_p2() {
    tmp_728_fu_17023_p2 = (!h_49_cast_cast_fu_17019_p1.read().is_01() || !tmp_721_reg_41370.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h_49_cast_cast_fu_17019_p1.read()) + sc_biguint<10>(tmp_721_reg_41370.read()));
}

void ShuffleNetV2::thread_tmp_729_fu_17052_p2() {
    tmp_729_fu_17052_p2 = (!p_shl309_cast_fu_17036_p1.read().is_01() || !p_shl310_cast_fu_17048_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl309_cast_fu_17036_p1.read()) + sc_biguint<15>(p_shl310_cast_fu_17048_p1.read()));
}

void ShuffleNetV2::thread_tmp_730_fu_17309_p3() {
    tmp_730_fu_17309_p3 = esl_concat<8,5>(sum2_fu_17303_p2.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_731_fu_17321_p3() {
    tmp_731_fu_17321_p3 = esl_concat<8,3>(sum2_fu_17303_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_732_fu_17333_p2() {
    tmp_732_fu_17333_p2 = (!p_shl319_cast_fu_17317_p1.read().is_01() || !p_shl320_cast_fu_17329_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl319_cast_fu_17317_p1.read()) - sc_biguint<14>(p_shl320_cast_fu_17329_p1.read()));
}

void ShuffleNetV2::thread_tmp_733_fu_17186_p2() {
    tmp_733_fu_17186_p2 = (!h_50_cast_cast_fu_17182_p1.read().is_01() || !tmp_727_reg_41427.read().is_01())? sc_lv<11>(): (sc_biguint<11>(h_50_cast_cast_fu_17182_p1.read()) + sc_biguint<11>(tmp_727_reg_41427.read()));
}

void ShuffleNetV2::thread_tmp_734_fu_17211_p2() {
    tmp_734_fu_17211_p2 = (!p_shl317_cast_fu_17191_p3.read().is_01() || !p_shl318_cast_fu_17207_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl317_cast_fu_17191_p3.read()) + sc_biguint<15>(p_shl318_cast_fu_17207_p1.read()));
}

void ShuffleNetV2::thread_tmp_735_fu_17217_p2() {
    tmp_735_fu_17217_p2 = (!h_50_cast_cast1_fu_17178_p1.read().is_01() || !tmp_724_reg_41414.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h_50_cast_cast1_fu_17178_p1.read()) + sc_biguint<10>(tmp_724_reg_41414.read()));
}

void ShuffleNetV2::thread_tmp_736_fu_17242_p2() {
    tmp_736_fu_17242_p2 = (!p_shl315_cast_fu_17222_p3.read().is_01() || !p_shl316_cast_fu_17238_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl315_cast_fu_17222_p3.read()) + sc_biguint<14>(p_shl316_cast_fu_17238_p1.read()));
}

void ShuffleNetV2::thread_tmp_737_fu_17074_p2() {
    tmp_737_fu_17074_p2 = (!tmp_729_reg_41391.read().is_01() || !w_50_cast_cast_fu_17070_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_729_reg_41391.read()) + sc_biguint<15>(w_50_cast_cast_fu_17070_p1.read()));
}

void ShuffleNetV2::thread_tmp_738_fu_17268_p2() {
    tmp_738_fu_17268_p2 = (!tmp_734_reg_41440.read().is_01() || !w_51_cast_cast_fu_17264_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_734_reg_41440.read()) + sc_biguint<15>(w_51_cast_cast_fu_17264_p1.read()));
}

void ShuffleNetV2::thread_tmp_739_fu_17278_p2() {
    tmp_739_fu_17278_p2 = (!tmp_736_reg_41445.read().is_01() || !w_51_cast_cast1_fu_17260_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_736_reg_41445.read()) + sc_biguint<14>(w_51_cast_cast1_fu_17260_p1.read()));
}

void ShuffleNetV2::thread_tmp_740_fu_17429_p3() {
    tmp_740_fu_17429_p3 = esl_concat<5,2>(co41_reg_10072.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_741_fu_17441_p2() {
    tmp_741_fu_17441_p2 = (!p_shl321_cast_fu_17437_p1.read().is_01() || !co41_cast1_cast_fu_17425_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl321_cast_fu_17437_p1.read()) - sc_biguint<8>(co41_cast1_cast_fu_17425_p1.read()));
}

void ShuffleNetV2::thread_tmp_742_fu_17473_p3() {
    tmp_742_fu_17473_p3 = esl_concat<7,2>(sum3_fu_17463_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_743_fu_17485_p2() {
    tmp_743_fu_17485_p2 = (!p_shl322_cast_fu_17481_p1.read().is_01() || !sum13_cast_cast_fu_17469_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl322_cast_fu_17481_p1.read()) - sc_biguint<10>(sum13_cast_cast_fu_17469_p1.read()));
}

void ShuffleNetV2::thread_tmp_744_fu_17510_p2() {
    tmp_744_fu_17510_p2 = (!w42_cast_cast_fu_17506_p1.read().is_01() || !tmp_743_reg_41642.read().is_01())? sc_lv<10>(): (sc_biguint<10>(w42_cast_cast_fu_17506_p1.read()) + sc_biguint<10>(tmp_743_reg_41642.read()));
}

void ShuffleNetV2::thread_tmp_745_fu_17531_p2() {
    tmp_745_fu_17531_p2 = (!p_shl208_fu_17527_p1.read().is_01() || !tmp_918_cast_fu_17515_p1.read().is_01())? sc_lv<32>(): (sc_bigint<32>(p_shl208_fu_17527_p1.read()) - sc_bigint<32>(tmp_918_cast_fu_17515_p1.read()));
}

void ShuffleNetV2::thread_tmp_746_fu_17537_p2() {
    tmp_746_fu_17537_p2 = (!w42_cast_cast1_fu_17502_p1.read().is_01() || !tmp_915_cast_reg_41629.read().is_01())? sc_lv<9>(): (sc_biguint<9>(w42_cast_cast1_fu_17502_p1.read()) + sc_bigint<9>(tmp_915_cast_reg_41629.read()));
}

void ShuffleNetV2::thread_tmp_747_fu_17548_p2() {
    tmp_747_fu_17548_p2 = (!tmp_2208_fu_17542_p2.read().is_01() || !tmp_746_fu_17537_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_2208_fu_17542_p2.read()) - sc_biguint<9>(tmp_746_fu_17537_p2.read()));
}

void ShuffleNetV2::thread_tmp_748_fu_17581_p2() {
    tmp_748_fu_17581_p2 = (!tmp_747_reg_41653.read().is_01() || !h43_cast_cast_fu_17577_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_747_reg_41653.read()) + sc_biguint<9>(h43_cast_cast_fu_17577_p1.read()));
}

void ShuffleNetV2::thread_tmp_749_fu_17641_p3() {
    tmp_749_fu_17641_p3 = esl_concat<8,5>(sum4_fu_17635_p2.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_750_fu_17653_p3() {
    tmp_750_fu_17653_p3 = esl_concat<8,3>(sum4_fu_17635_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_751_fu_17665_p2() {
    tmp_751_fu_17665_p2 = (!p_shl325_cast_fu_17649_p1.read().is_01() || !p_shl326_cast_fu_17661_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl325_cast_fu_17649_p1.read()) - sc_biguint<14>(p_shl326_cast_fu_17661_p1.read()));
}

void ShuffleNetV2::thread_tmp_752_fu_17753_p3() {
    tmp_752_fu_17753_p3 = esl_concat<5,4>(co47_reg_10150.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_753_fu_17765_p3() {
    tmp_753_fu_17765_p3 = esl_concat<5,1>(co47_reg_10150.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_754_fu_17777_p2() {
    tmp_754_fu_17777_p2 = (!p_shl328_cast_fu_17773_p1.read().is_01() || !p_shl327_cast_fu_17761_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl328_cast_fu_17773_p1.read()) + sc_biguint<10>(p_shl327_cast_fu_17761_p1.read()));
}

void ShuffleNetV2::thread_tmp_755_fu_17872_p3() {
    tmp_755_fu_17872_p3 = esl_concat<5,4>(co48_reg_10183.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_756_fu_17884_p3() {
    tmp_756_fu_17884_p3 = esl_concat<5,1>(co48_reg_10183.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_757_fu_17896_p2() {
    tmp_757_fu_17896_p2 = (!p_shl332_cast_fu_17892_p1.read().is_01() || !p_shl331_cast_fu_17880_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl332_cast_fu_17892_p1.read()) + sc_biguint<10>(p_shl331_cast_fu_17880_p1.read()));
}

void ShuffleNetV2::thread_tmp_758_fu_17924_p3() {
    tmp_758_fu_17924_p3 = esl_concat<6,4>(tmp_166_fu_17918_p2.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_759_fu_17936_p3() {
    tmp_759_fu_17936_p3 = esl_concat<6,1>(tmp_166_fu_17918_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_760_fu_17948_p2() {
    tmp_760_fu_17948_p2 = (!p_shl334_cast_fu_17944_p1.read().is_01() || !p_shl333_cast_fu_17932_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl334_cast_fu_17944_p1.read()) + sc_biguint<11>(p_shl333_cast_fu_17932_p1.read()));
}

void ShuffleNetV2::thread_tmp_761_fu_17811_p2() {
    tmp_761_fu_17811_p2 = (!h_52_cast_cast_fu_17807_p1.read().is_01() || !tmp_754_reg_41859.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h_52_cast_cast_fu_17807_p1.read()) + sc_biguint<10>(tmp_754_reg_41859.read()));
}

void ShuffleNetV2::thread_tmp_762_fu_17840_p2() {
    tmp_762_fu_17840_p2 = (!p_shl329_cast_fu_17824_p1.read().is_01() || !p_shl330_cast_fu_17836_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl329_cast_fu_17824_p1.read()) + sc_biguint<15>(p_shl330_cast_fu_17836_p1.read()));
}

void ShuffleNetV2::thread_tmp_763_fu_18097_p3() {
    tmp_763_fu_18097_p3 = esl_concat<8,5>(sum7_fu_18091_p2.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_764_fu_18109_p3() {
    tmp_764_fu_18109_p3 = esl_concat<8,3>(sum7_fu_18091_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_765_fu_18121_p2() {
    tmp_765_fu_18121_p2 = (!p_shl339_cast_fu_18105_p1.read().is_01() || !p_shl340_cast_fu_18117_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl339_cast_fu_18105_p1.read()) - sc_biguint<14>(p_shl340_cast_fu_18117_p1.read()));
}

void ShuffleNetV2::thread_tmp_766_fu_17974_p2() {
    tmp_766_fu_17974_p2 = (!h_53_cast_cast_fu_17970_p1.read().is_01() || !tmp_760_reg_41916.read().is_01())? sc_lv<11>(): (sc_biguint<11>(h_53_cast_cast_fu_17970_p1.read()) + sc_biguint<11>(tmp_760_reg_41916.read()));
}

void ShuffleNetV2::thread_tmp_767_fu_17999_p2() {
    tmp_767_fu_17999_p2 = (!p_shl337_cast_fu_17979_p3.read().is_01() || !p_shl338_cast_fu_17995_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl337_cast_fu_17979_p3.read()) + sc_biguint<15>(p_shl338_cast_fu_17995_p1.read()));
}

void ShuffleNetV2::thread_tmp_768_fu_18005_p2() {
    tmp_768_fu_18005_p2 = (!h_53_cast_cast1_fu_17966_p1.read().is_01() || !tmp_757_reg_41903.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h_53_cast_cast1_fu_17966_p1.read()) + sc_biguint<10>(tmp_757_reg_41903.read()));
}

void ShuffleNetV2::thread_tmp_769_fu_18030_p2() {
    tmp_769_fu_18030_p2 = (!p_shl335_cast_fu_18010_p3.read().is_01() || !p_shl336_cast_fu_18026_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl335_cast_fu_18010_p3.read()) + sc_biguint<14>(p_shl336_cast_fu_18026_p1.read()));
}

void ShuffleNetV2::thread_tmp_770_fu_17862_p2() {
    tmp_770_fu_17862_p2 = (!tmp_762_reg_41880.read().is_01() || !w_53_cast_cast_fu_17858_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_762_reg_41880.read()) + sc_biguint<15>(w_53_cast_cast_fu_17858_p1.read()));
}

void ShuffleNetV2::thread_tmp_771_fu_18056_p2() {
    tmp_771_fu_18056_p2 = (!tmp_767_reg_41929.read().is_01() || !w_54_cast_cast_fu_18052_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_767_reg_41929.read()) + sc_biguint<15>(w_54_cast_cast_fu_18052_p1.read()));
}

void ShuffleNetV2::thread_tmp_772_fu_18066_p2() {
    tmp_772_fu_18066_p2 = (!tmp_769_reg_41934.read().is_01() || !w_54_cast_cast1_fu_18048_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_769_reg_41934.read()) + sc_biguint<14>(w_54_cast_cast1_fu_18048_p1.read()));
}

void ShuffleNetV2::thread_tmp_773_fu_18225_p3() {
    tmp_773_fu_18225_p3 = esl_concat<5,2>(co53_reg_10250.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_774_fu_18237_p2() {
    tmp_774_fu_18237_p2 = (!p_shl341_cast_fu_18233_p1.read().is_01() || !co53_cast_cast_fu_18221_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl341_cast_fu_18233_p1.read()) - sc_biguint<8>(co53_cast_cast_fu_18221_p1.read()));
}

void ShuffleNetV2::thread_tmp_775_fu_18275_p4() {
    tmp_775_fu_18275_p4 = esl_concat<6,2>(esl_concat<1,5>(ap_const_lv1_1, co53_reg_10250.read()), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_776_fu_18285_p1() {
    tmp_776_fu_18285_p1 = esl_sext<9,8>(tmp_775_fu_18275_p4.read());
}

void ShuffleNetV2::thread_tmp_777_fu_18293_p2() {
    tmp_777_fu_18293_p2 = (!p_shl342_cast_fu_18289_p1.read().is_01() || !sum15_cast_cast_fu_18271_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl342_cast_fu_18289_p1.read()) - sc_biguint<10>(sum15_cast_cast_fu_18271_p1.read()));
}

void ShuffleNetV2::thread_tmp_778_fu_18322_p2() {
    tmp_778_fu_18322_p2 = (!w55_cast_cast_fu_18318_p1.read().is_01() || !tmp_962_cast_reg_42131.read().is_01())? sc_lv<11>(): (sc_biguint<11>(w55_cast_cast_fu_18318_p1.read()) + sc_bigint<11>(tmp_962_cast_reg_42131.read()));
}

void ShuffleNetV2::thread_tmp_779_fu_18343_p2() {
    tmp_779_fu_18343_p2 = (!p_shl213_fu_18339_p1.read().is_01() || !tmp_963_cast_fu_18327_p1.read().is_01())? sc_lv<32>(): (sc_bigint<32>(p_shl213_fu_18339_p1.read()) - sc_bigint<32>(tmp_963_cast_fu_18327_p1.read()));
}

void ShuffleNetV2::thread_tmp_780_fu_18349_p2() {
    tmp_780_fu_18349_p2 = (!w55_cast_cast1_fu_18314_p1.read().is_01() || !tmp_959_cast_reg_42118.read().is_01())? sc_lv<9>(): (sc_biguint<9>(w55_cast_cast1_fu_18314_p1.read()) + sc_bigint<9>(tmp_959_cast_reg_42118.read()));
}

void ShuffleNetV2::thread_tmp_781_fu_18360_p2() {
    tmp_781_fu_18360_p2 = (!tmp_2225_fu_18354_p2.read().is_01() || !tmp_780_fu_18349_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_2225_fu_18354_p2.read()) - sc_biguint<9>(tmp_780_fu_18349_p2.read()));
}

void ShuffleNetV2::thread_tmp_782_fu_18393_p2() {
    tmp_782_fu_18393_p2 = (!tmp_781_reg_42142.read().is_01() || !h54_cast_cast_fu_18389_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_781_reg_42142.read()) + sc_biguint<9>(h54_cast_cast_fu_18389_p1.read()));
}

void ShuffleNetV2::thread_tmp_783_fu_18443_p4() {
    tmp_783_fu_18443_p4 = esl_concat<7,5>(esl_concat<2,5>(ap_const_lv2_2, co55_reg_10294.read()), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_784_fu_18453_p1() {
    tmp_784_fu_18453_p1 = esl_sext<13,12>(tmp_783_fu_18443_p4.read());
}

void ShuffleNetV2::thread_tmp_785_fu_18461_p4() {
    tmp_785_fu_18461_p4 = esl_concat<7,3>(esl_concat<2,5>(ap_const_lv2_2, co55_reg_10294.read()), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_786_fu_18471_p1() {
    tmp_786_fu_18471_p1 = esl_sext<11,10>(tmp_785_fu_18461_p4.read());
}

void ShuffleNetV2::thread_tmp_787_fu_18479_p2() {
    tmp_787_fu_18479_p2 = (!p_shl345_cast_fu_18457_p1.read().is_01() || !p_shl346_cast_fu_18475_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl345_cast_fu_18457_p1.read()) - sc_biguint<14>(p_shl346_cast_fu_18475_p1.read()));
}

void ShuffleNetV2::thread_tmp_788_fu_18567_p3() {
    tmp_788_fu_18567_p3 = esl_concat<5,4>(co57_reg_10328.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_789_fu_18579_p3() {
    tmp_789_fu_18579_p3 = esl_concat<5,1>(co57_reg_10328.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_790_fu_18591_p2() {
    tmp_790_fu_18591_p2 = (!p_shl348_cast_fu_18587_p1.read().is_01() || !p_shl347_cast_fu_18575_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl348_cast_fu_18587_p1.read()) + sc_biguint<10>(p_shl347_cast_fu_18575_p1.read()));
}

void ShuffleNetV2::thread_tmp_791_fu_18625_p2() {
    tmp_791_fu_18625_p2 = (!h_57_cast_cast_fu_18621_p1.read().is_01() || !tmp_790_reg_42348.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h_57_cast_cast_fu_18621_p1.read()) + sc_biguint<10>(tmp_790_reg_42348.read()));
}

void ShuffleNetV2::thread_tmp_792_fu_18654_p2() {
    tmp_792_fu_18654_p2 = (!p_shl349_cast_fu_18638_p1.read().is_01() || !p_shl350_cast_fu_18650_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl349_cast_fu_18638_p1.read()) + sc_biguint<15>(p_shl350_cast_fu_18650_p1.read()));
}

void ShuffleNetV2::thread_tmp_793_fu_18676_p2() {
    tmp_793_fu_18676_p2 = (!tmp_792_reg_42369.read().is_01() || !w_58_cast_cast_fu_18672_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_792_reg_42369.read()) + sc_biguint<15>(w_58_cast_cast_fu_18672_p1.read()));
}

void ShuffleNetV2::thread_tmp_794_fu_18888_p3() {
    tmp_794_fu_18888_p3 = esl_concat<9,5>(sum11_reg_42447.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_795_fu_18899_p3() {
    tmp_795_fu_18899_p3 = esl_concat<9,3>(sum11_reg_42447.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_796_fu_18910_p2() {
    tmp_796_fu_18910_p2 = (!p_shl353_cast_fu_18895_p1.read().is_01() || !p_shl354_cast_fu_18906_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl353_cast_fu_18895_p1.read()) - sc_biguint<15>(p_shl354_cast_fu_18906_p1.read()));
}

void ShuffleNetV2::thread_tmp_797_fu_18920_p2() {
    tmp_797_fu_18920_p2 = (!ci34_cast1_cast_reg_42415.read().is_01() || !tmp_995_cast_fu_18916_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(ci34_cast1_cast_reg_42415.read()) + sc_bigint<16>(tmp_995_cast_fu_18916_p1.read()));
}

void ShuffleNetV2::thread_tmp_798_fu_18976_p2() {
    tmp_798_fu_18976_p2 = (!p_shl351_cast_fu_18962_p3.read().is_01() || !p_shl352_cast_fu_18969_p3.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl351_cast_fu_18962_p3.read()) - sc_biguint<8>(p_shl352_cast_fu_18969_p3.read()));
}

void ShuffleNetV2::thread_tmp_799_fu_18982_p2() {
    tmp_799_fu_18982_p2 = (!tmp_173_cast_cast_reg_42428.read().is_01() || !tmp_798_fu_18976_p2.read().is_01())? sc_lv<8>(): (sc_bigint<8>(tmp_173_cast_cast_reg_42428.read()) + sc_biguint<8>(tmp_798_fu_18976_p2.read()));
}

void ShuffleNetV2::thread_tmp_800_fu_19241_p3() {
    tmp_800_fu_19241_p3 = esl_concat<7,2>(tmp_185_fu_19232_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_801_fu_19253_p2() {
    tmp_801_fu_19253_p2 = (!p_shl358_cast_fu_19249_p1.read().is_01() || !tmp_185_cast_cast_fu_19237_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(p_shl358_cast_fu_19249_p1.read()) - sc_bigint<10>(tmp_185_cast_cast_fu_19237_p1.read()));
}

void ShuffleNetV2::thread_tmp_802_fu_19259_p2() {
    tmp_802_fu_19259_p2 = (!w59_cast_cast_reg_42542.read().is_01() || !tmp_801_fu_19253_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(w59_cast_cast_reg_42542.read()) + sc_biguint<10>(tmp_801_fu_19253_p2.read()));
}

void ShuffleNetV2::thread_tmp_803_fu_19280_p2() {
    tmp_803_fu_19280_p2 = (!tmp_2243_fu_19275_p2.read().is_01() || !tmp_802_reg_42581.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_2243_fu_19275_p2.read()) - sc_biguint<10>(tmp_802_reg_42581.read()));
}

void ShuffleNetV2::thread_tmp_804_fu_19285_p2() {
    tmp_804_fu_19285_p2 = (!h58_cast_cast_reg_42560.read().is_01() || !tmp_803_fu_19280_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h58_cast_cast_reg_42560.read()) + sc_biguint<10>(tmp_803_fu_19280_p2.read()));
}

void ShuffleNetV2::thread_tmp_805_cast_fu_15399_p1() {
    tmp_805_cast_fu_15399_p1 = esl_zext<8,7>(tmp_fu_15391_p3.read());
}

void ShuffleNetV2::thread_tmp_805_fu_19293_p3() {
    tmp_805_fu_19293_p3 = esl_concat<8,2>(sum13_reg_42587.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_806_fu_19304_p2() {
    tmp_806_fu_19304_p2 = (!p_shl356_cast_fu_19300_p1.read().is_01() || !sum17_cast_cast_fu_19290_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl356_cast_fu_19300_p1.read()) - sc_biguint<11>(sum17_cast_cast_fu_19290_p1.read()));
}

void ShuffleNetV2::thread_tmp_807_fu_19314_p2() {
    tmp_807_fu_19314_p2 = (!w59_cast_cast1_reg_42537.read().is_01() || !tmp_1016_cast_fu_19310_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(w59_cast_cast1_reg_42537.read()) + sc_bigint<12>(tmp_1016_cast_fu_19310_p1.read()));
}

void ShuffleNetV2::thread_tmp_808_fu_19333_p2() {
    tmp_808_fu_19333_p2 = (!p_shl219_fu_19329_p1.read().is_01() || !tmp_1017_cast_fu_19319_p1.read().is_01())? sc_lv<32>(): (sc_bigint<32>(p_shl219_fu_19329_p1.read()) - sc_bigint<32>(tmp_1017_cast_fu_19319_p1.read()));
}

void ShuffleNetV2::thread_tmp_809_fu_19339_p2() {
    tmp_809_fu_19339_p2 = (!h58_cast_reg_42555.read().is_01() || !tmp_808_fu_19333_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(h58_cast_reg_42555.read()) + sc_biguint<32>(tmp_808_fu_19333_p2.read()));
}

void ShuffleNetV2::thread_tmp_810_fu_19669_p3() {
    tmp_810_fu_19669_p3 = esl_concat<9,5>(sum15_reg_42707.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_811_fu_19680_p3() {
    tmp_811_fu_19680_p3 = esl_concat<9,3>(sum15_reg_42707.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_812_fu_19691_p2() {
    tmp_812_fu_19691_p2 = (!p_shl361_cast_fu_19676_p1.read().is_01() || !p_shl362_cast_fu_19687_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl361_cast_fu_19676_p1.read()) - sc_biguint<15>(p_shl362_cast_fu_19687_p1.read()));
}

void ShuffleNetV2::thread_tmp_813_fu_19701_p2() {
    tmp_813_fu_19701_p2 = (!ci36_cast1_cast_reg_42675.read().is_01() || !tmp_1029_cast_fu_19697_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(ci36_cast1_cast_reg_42675.read()) + sc_bigint<16>(tmp_1029_cast_fu_19697_p1.read()));
}

void ShuffleNetV2::thread_tmp_814_fu_19757_p2() {
    tmp_814_fu_19757_p2 = (!p_shl359_cast_fu_19743_p3.read().is_01() || !p_shl360_cast_fu_19750_p3.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl359_cast_fu_19743_p3.read()) - sc_biguint<8>(p_shl360_cast_fu_19750_p3.read()));
}

void ShuffleNetV2::thread_tmp_815_fu_19763_p2() {
    tmp_815_fu_19763_p2 = (!tmp_190_cast_cast_reg_42688.read().is_01() || !tmp_814_fu_19757_p2.read().is_01())? sc_lv<8>(): (sc_bigint<8>(tmp_190_cast_cast_reg_42688.read()) + sc_biguint<8>(tmp_814_fu_19757_p2.read()));
}

void ShuffleNetV2::thread_tmp_816_fu_20026_p3() {
    tmp_816_fu_20026_p3 = esl_concat<7,2>(tmp_202_fu_20017_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_817_fu_20038_p2() {
    tmp_817_fu_20038_p2 = (!p_shl363_cast_fu_20034_p1.read().is_01() || !tmp_202_cast_cast_fu_20022_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(p_shl363_cast_fu_20034_p1.read()) - sc_bigint<10>(tmp_202_cast_cast_fu_20022_p1.read()));
}

void ShuffleNetV2::thread_tmp_818_fu_20044_p2() {
    tmp_818_fu_20044_p2 = (!w61_cast_cast_reg_42802.read().is_01() || !tmp_817_fu_20038_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(w61_cast_cast_reg_42802.read()) + sc_biguint<10>(tmp_817_fu_20038_p2.read()));
}

void ShuffleNetV2::thread_tmp_819_fu_20065_p2() {
    tmp_819_fu_20065_p2 = (!tmp_2254_fu_20060_p2.read().is_01() || !tmp_818_reg_42841.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_2254_fu_20060_p2.read()) - sc_biguint<10>(tmp_818_reg_42841.read()));
}

void ShuffleNetV2::thread_tmp_820_fu_20070_p2() {
    tmp_820_fu_20070_p2 = (!h60_cast_cast_reg_42820.read().is_01() || !tmp_819_fu_20065_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h60_cast_cast_reg_42820.read()) + sc_biguint<10>(tmp_819_fu_20065_p2.read()));
}

void ShuffleNetV2::thread_tmp_821_cast_fu_15531_p1() {
    tmp_821_cast_fu_15531_p1 = esl_zext<32,13>(tmp_669_reg_40299.read());
}

void ShuffleNetV2::thread_tmp_821_fu_20078_p3() {
    tmp_821_fu_20078_p3 = esl_concat<8,2>(sum17_reg_42847.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_822_fu_20089_p2() {
    tmp_822_fu_20089_p2 = (!p_shl365_cast_fu_20085_p1.read().is_01() || !sum19_cast_cast_fu_20075_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl365_cast_fu_20085_p1.read()) - sc_biguint<11>(sum19_cast_cast_fu_20075_p1.read()));
}

void ShuffleNetV2::thread_tmp_823_cast_fu_15681_p1() {
    tmp_823_cast_fu_15681_p1 = esl_sext<9,8>(tmp_671_fu_15675_p2.read());
}

void ShuffleNetV2::thread_tmp_823_fu_20095_p2() {
    tmp_823_fu_20095_p2 = (!w61_cast_cast1_reg_42797.read().is_01() || !tmp_822_fu_20089_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(w61_cast_cast1_reg_42797.read()) + sc_biguint<11>(tmp_822_fu_20089_p2.read()));
}

void ShuffleNetV2::thread_tmp_824_cast_fu_15717_p1() {
    tmp_824_cast_fu_15717_p1 = esl_sext<32,9>(tmp_672_fu_15712_p2.read());
}

void ShuffleNetV2::thread_tmp_824_fu_20114_p2() {
    tmp_824_fu_20114_p2 = (!p_shl221_fu_20110_p1.read().is_01() || !tmp_1051_cast_fu_20100_p1.read().is_01())? sc_lv<32>(): (sc_bigint<32>(p_shl221_fu_20110_p1.read()) - sc_bigint<32>(tmp_1051_cast_fu_20100_p1.read()));
}

void ShuffleNetV2::thread_tmp_825_fu_20120_p2() {
    tmp_825_fu_20120_p2 = (!h60_cast_reg_42815.read().is_01() || !tmp_824_fu_20114_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(h60_cast_reg_42815.read()) + sc_biguint<32>(tmp_824_fu_20114_p2.read()));
}

void ShuffleNetV2::thread_tmp_826_fu_20684_p3() {
    tmp_826_fu_20684_p3 = esl_concat<6,3>(co68_reg_10658.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_827_fu_20696_p3() {
    tmp_827_fu_20696_p3 = esl_concat<6,1>(co68_reg_10658.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_828_fu_20708_p2() {
    tmp_828_fu_20708_p2 = (!p_shl368_cast_fu_20704_p1.read().is_01() || !p_shl367_cast_fu_20692_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl368_cast_fu_20704_p1.read()) + sc_biguint<10>(p_shl367_cast_fu_20692_p1.read()));
}

void ShuffleNetV2::thread_tmp_829_fu_20736_p3() {
    tmp_829_fu_20736_p3 = esl_concat<7,3>(tmp_208_fu_20730_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_830_fu_20748_p3() {
    tmp_830_fu_20748_p3 = esl_concat<7,1>(tmp_208_fu_20730_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_831_fu_20760_p2() {
    tmp_831_fu_20760_p2 = (!p_shl372_cast_fu_20756_p1.read().is_01() || !p_shl369_cast_fu_20744_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl372_cast_fu_20756_p1.read()) + sc_biguint<11>(p_shl369_cast_fu_20744_p1.read()));
}

void ShuffleNetV2::thread_tmp_832_fu_20450_p3() {
    tmp_832_fu_20450_p3 = esl_concat<10,5>(sum19_reg_42967.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_833_cast_fu_15956_p1() {
    tmp_833_cast_fu_15956_p1 = esl_sext<9,8>(tmp_679_fu_15950_p2.read());
}

void ShuffleNetV2::thread_tmp_833_fu_20461_p3() {
    tmp_833_fu_20461_p3 = esl_concat<10,3>(sum19_reg_42967.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_834_fu_20472_p2() {
    tmp_834_fu_20472_p2 = (!p_shl373_cast_fu_20457_p1.read().is_01() || !p_shl374_cast_fu_20468_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(p_shl373_cast_fu_20457_p1.read()) - sc_biguint<16>(p_shl374_cast_fu_20468_p1.read()));
}

void ShuffleNetV2::thread_tmp_835_fu_20482_p2() {
    tmp_835_fu_20482_p2 = (!ci38_cast1_cast_reg_42935.read().is_01() || !tmp_1069_cast_fu_20478_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(ci38_cast1_cast_reg_42935.read()) + sc_bigint<17>(tmp_1069_cast_fu_20478_p1.read()));
}

void ShuffleNetV2::thread_tmp_836_cast_fu_16013_p1() {
    tmp_836_cast_fu_16013_p1 = esl_sext<32,9>(tmp_682_fu_16008_p2.read());
}

void ShuffleNetV2::thread_tmp_836_fu_20538_p2() {
    tmp_836_fu_20538_p2 = (!p_shl370_cast_fu_20524_p3.read().is_01() || !p_shl371_cast_fu_20531_p3.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl370_cast_fu_20524_p3.read()) - sc_biguint<8>(p_shl371_cast_fu_20531_p3.read()));
}

void ShuffleNetV2::thread_tmp_837_fu_20544_p2() {
    tmp_837_fu_20544_p2 = (!tmp_207_cast_cast_reg_42948.read().is_01() || !tmp_836_fu_20538_p2.read().is_01())? sc_lv<8>(): (sc_bigint<8>(tmp_207_cast_cast_reg_42948.read()) + sc_biguint<8>(tmp_836_fu_20538_p2.read()));
}

void ShuffleNetV2::thread_tmp_838_fu_20786_p2() {
    tmp_838_fu_20786_p2 = (!h_63_cast_cast_fu_20782_p1.read().is_01() || !tmp_831_reg_43052.read().is_01())? sc_lv<11>(): (sc_biguint<11>(h_63_cast_cast_fu_20782_p1.read()) + sc_biguint<11>(tmp_831_reg_43052.read()));
}

void ShuffleNetV2::thread_tmp_839_fu_20815_p2() {
    tmp_839_fu_20815_p2 = (!p_shl375_cast_fu_20799_p1.read().is_01() || !p_shl376_cast_fu_20811_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl375_cast_fu_20799_p1.read()) + sc_biguint<15>(p_shl376_cast_fu_20811_p1.read()));
}

void ShuffleNetV2::thread_tmp_840_fu_20821_p2() {
    tmp_840_fu_20821_p2 = (!h_63_cast_cast1_fu_20778_p1.read().is_01() || !tmp_828_reg_43039.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h_63_cast_cast1_fu_20778_p1.read()) + sc_biguint<10>(tmp_828_reg_43039.read()));
}

void ShuffleNetV2::thread_tmp_841_fu_20850_p2() {
    tmp_841_fu_20850_p2 = (!p_shl377_cast_fu_20834_p1.read().is_01() || !p_shl378_cast_fu_20846_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl377_cast_fu_20834_p1.read()) + sc_biguint<14>(p_shl378_cast_fu_20846_p1.read()));
}

void ShuffleNetV2::thread_tmp_842_fu_20876_p2() {
    tmp_842_fu_20876_p2 = (!tmp_839_reg_43065.read().is_01() || !w_64_cast_cast_fu_20872_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_839_reg_43065.read()) + sc_biguint<15>(w_64_cast_cast_fu_20872_p1.read()));
}

void ShuffleNetV2::thread_tmp_843_cast_fu_16084_p1() {
    tmp_843_cast_fu_16084_p1 = esl_zext<32,9>(tmp_686_fu_16079_p2.read());
}

void ShuffleNetV2::thread_tmp_843_fu_20886_p2() {
    tmp_843_fu_20886_p2 = (!tmp_841_reg_43070.read().is_01() || !w_64_cast_cast1_fu_20868_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_841_reg_43070.read()) + sc_biguint<14>(w_64_cast_cast1_fu_20868_p1.read()));
}

void ShuffleNetV2::thread_tmp_844_fu_21097_p3() {
    tmp_844_fu_21097_p3 = esl_concat<10,5>(sum22_reg_43148.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_845_fu_21108_p3() {
    tmp_845_fu_21108_p3 = esl_concat<10,3>(sum22_reg_43148.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_846_fu_21119_p2() {
    tmp_846_fu_21119_p2 = (!p_shl379_cast_fu_21104_p1.read().is_01() || !p_shl380_cast_fu_21115_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(p_shl379_cast_fu_21104_p1.read()) - sc_biguint<16>(p_shl380_cast_fu_21115_p1.read()));
}

void ShuffleNetV2::thread_tmp_847_fu_21129_p2() {
    tmp_847_fu_21129_p2 = (!ci40_cast1_cast_reg_43116.read().is_01() || !tmp_1097_cast_fu_21125_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(ci40_cast1_cast_reg_43116.read()) + sc_bigint<17>(tmp_1097_cast_fu_21125_p1.read()));
}

void ShuffleNetV2::thread_tmp_848_fu_21185_p2() {
    tmp_848_fu_21185_p2 = (!p_shl381_cast_fu_21171_p3.read().is_01() || !p_shl382_cast_fu_21178_p3.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl381_cast_fu_21171_p3.read()) - sc_biguint<8>(p_shl382_cast_fu_21178_p3.read()));
}

void ShuffleNetV2::thread_tmp_849_fu_21191_p2() {
    tmp_849_fu_21191_p2 = (!tmp_219_cast_cast_reg_43129.read().is_01() || !tmp_848_fu_21185_p2.read().is_01())? sc_lv<8>(): (sc_bigint<8>(tmp_219_cast_cast_reg_43129.read()) + sc_biguint<8>(tmp_848_fu_21185_p2.read()));
}

void ShuffleNetV2::thread_tmp_850_fu_21446_p3() {
    tmp_850_fu_21446_p3 = esl_concat<7,2>(tmp_231_fu_21437_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_851_fu_21458_p2() {
    tmp_851_fu_21458_p2 = (!p_shl383_cast_fu_21454_p1.read().is_01() || !tmp_231_cast_cast_fu_21442_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(p_shl383_cast_fu_21454_p1.read()) - sc_bigint<10>(tmp_231_cast_cast_fu_21442_p1.read()));
}

void ShuffleNetV2::thread_tmp_852_fu_21464_p2() {
    tmp_852_fu_21464_p2 = (!w65_cast_cast_reg_43243.read().is_01() || !tmp_851_fu_21458_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(w65_cast_cast_reg_43243.read()) + sc_biguint<10>(tmp_851_fu_21458_p2.read()));
}

void ShuffleNetV2::thread_tmp_853_fu_21493_p2() {
    tmp_853_fu_21493_p2 = (!tmp_2276_fu_21488_p2.read().is_01() || !tmp_852_reg_43282.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_2276_fu_21488_p2.read()) - sc_biguint<10>(tmp_852_reg_43282.read()));
}

void ShuffleNetV2::thread_tmp_854_fu_21498_p2() {
    tmp_854_fu_21498_p2 = (!h64_cast_cast_reg_43261.read().is_01() || !tmp_853_fu_21493_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h64_cast_cast_reg_43261.read()) + sc_biguint<10>(tmp_853_fu_21493_p2.read()));
}

void ShuffleNetV2::thread_tmp_855_fu_21506_p3() {
    tmp_855_fu_21506_p3 = esl_concat<9,2>(sum21_reg_43288.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_856_fu_21517_p2() {
    tmp_856_fu_21517_p2 = (!p_shl385_cast_fu_21513_p1.read().is_01() || !sum21_cast_cast_fu_21503_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(p_shl385_cast_fu_21513_p1.read()) - sc_biguint<12>(sum21_cast_cast_fu_21503_p1.read()));
}

void ShuffleNetV2::thread_tmp_857_fu_21527_p2() {
    tmp_857_fu_21527_p2 = (!w65_cast_cast1_reg_43238.read().is_01() || !tmp_1118_cast_fu_21523_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(w65_cast_cast1_reg_43238.read()) + sc_bigint<13>(tmp_1118_cast_fu_21523_p1.read()));
}

void ShuffleNetV2::thread_tmp_858_fu_21546_p2() {
    tmp_858_fu_21546_p2 = (!p_shl226_fu_21542_p1.read().is_01() || !tmp_1119_cast_fu_21532_p1.read().is_01())? sc_lv<32>(): (sc_bigint<32>(p_shl226_fu_21542_p1.read()) - sc_bigint<32>(tmp_1119_cast_fu_21532_p1.read()));
}

void ShuffleNetV2::thread_tmp_859_fu_21552_p2() {
    tmp_859_fu_21552_p2 = (!h64_cast_reg_43256.read().is_01() || !tmp_858_fu_21546_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(h64_cast_reg_43256.read()) + sc_biguint<32>(tmp_858_fu_21546_p2.read()));
}

void ShuffleNetV2::thread_tmp_860_fu_22112_p3() {
    tmp_860_fu_22112_p3 = esl_concat<6,3>(co75_reg_10867.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_861_fu_22124_p3() {
    tmp_861_fu_22124_p3 = esl_concat<6,1>(co75_reg_10867.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_862_fu_22136_p2() {
    tmp_862_fu_22136_p2 = (!p_shl388_cast_fu_22132_p1.read().is_01() || !p_shl387_cast_fu_22120_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl388_cast_fu_22132_p1.read()) + sc_biguint<10>(p_shl387_cast_fu_22120_p1.read()));
}

void ShuffleNetV2::thread_tmp_863_fu_21878_p3() {
    tmp_863_fu_21878_p3 = esl_concat<10,5>(sum28_reg_43408.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_864_fu_21889_p3() {
    tmp_864_fu_21889_p3 = esl_concat<10,3>(sum28_reg_43408.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_865_fu_21900_p2() {
    tmp_865_fu_21900_p2 = (!p_shl389_cast_fu_21885_p1.read().is_01() || !p_shl390_cast_fu_21896_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(p_shl389_cast_fu_21885_p1.read()) - sc_biguint<16>(p_shl390_cast_fu_21896_p1.read()));
}

void ShuffleNetV2::thread_tmp_866_cast_fu_16467_p1() {
    tmp_866_cast_fu_16467_p1 = esl_zext<32,15>(tmp_703_fu_16462_p2.read());
}

void ShuffleNetV2::thread_tmp_866_fu_21910_p2() {
    tmp_866_fu_21910_p2 = (!ci42_cast1_cast_reg_43376.read().is_01() || !tmp_1134_cast_fu_21906_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(ci42_cast1_cast_reg_43376.read()) + sc_bigint<17>(tmp_1134_cast_fu_21906_p1.read()));
}

void ShuffleNetV2::thread_tmp_867_cast_fu_16477_p1() {
    tmp_867_cast_fu_16477_p1 = esl_zext<32,14>(tmp_704_reg_40974.read());
}

void ShuffleNetV2::thread_tmp_867_fu_21966_p2() {
    tmp_867_fu_21966_p2 = (!p_shl391_cast_fu_21952_p3.read().is_01() || !p_shl392_cast_fu_21959_p3.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl391_cast_fu_21952_p3.read()) - sc_biguint<8>(p_shl392_cast_fu_21959_p3.read()));
}

void ShuffleNetV2::thread_tmp_868_fu_21972_p2() {
    tmp_868_fu_21972_p2 = (!tmp_236_cast_cast_reg_43389.read().is_01() || !tmp_867_fu_21966_p2.read().is_01())? sc_lv<8>(): (sc_bigint<8>(tmp_236_cast_cast_reg_43389.read()) + sc_biguint<8>(tmp_867_fu_21966_p2.read()));
}

void ShuffleNetV2::thread_tmp_869_cast_fu_16641_p1() {
    tmp_869_cast_fu_16641_p1 = esl_sext<9,8>(tmp_706_fu_16635_p2.read());
}

void ShuffleNetV2::thread_tmp_869_fu_22231_p3() {
    tmp_869_fu_22231_p3 = esl_concat<6,3>(co77_reg_10900.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_870_fu_22243_p3() {
    tmp_870_fu_22243_p3 = esl_concat<6,1>(co77_reg_10900.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_871_fu_22255_p2() {
    tmp_871_fu_22255_p2 = (!p_shl394_cast_fu_22251_p1.read().is_01() || !p_shl393_cast_fu_22239_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl394_cast_fu_22251_p1.read()) + sc_biguint<10>(p_shl393_cast_fu_22239_p1.read()));
}

void ShuffleNetV2::thread_tmp_872_cast_fu_16709_p1() {
    tmp_872_cast_fu_16709_p1 = esl_sext<32,10>(tmp_709_fu_16704_p2.read());
}

void ShuffleNetV2::thread_tmp_872_fu_22283_p3() {
    tmp_872_fu_22283_p3 = esl_concat<7,3>(tmp_241_fu_22277_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_873_fu_22295_p3() {
    tmp_873_fu_22295_p3 = esl_concat<7,1>(tmp_241_fu_22277_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_874_fu_22307_p2() {
    tmp_874_fu_22307_p2 = (!p_shl396_cast_fu_22303_p1.read().is_01() || !p_shl395_cast_fu_22291_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl396_cast_fu_22303_p1.read()) + sc_biguint<11>(p_shl395_cast_fu_22291_p1.read()));
}

void ShuffleNetV2::thread_tmp_875_fu_22170_p2() {
    tmp_875_fu_22170_p2 = (!h_67_cast_cast_fu_22166_p1.read().is_01() || !tmp_862_reg_43480.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h_67_cast_cast_fu_22166_p1.read()) + sc_biguint<10>(tmp_862_reg_43480.read()));
}

void ShuffleNetV2::thread_tmp_876_fu_22199_p2() {
    tmp_876_fu_22199_p2 = (!p_shl397_cast_fu_22183_p1.read().is_01() || !p_shl398_cast_fu_22195_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl397_cast_fu_22183_p1.read()) + sc_biguint<15>(p_shl398_cast_fu_22195_p1.read()));
}

void ShuffleNetV2::thread_tmp_877_fu_22333_p2() {
    tmp_877_fu_22333_p2 = (!h_69_cast_cast_fu_22329_p1.read().is_01() || !tmp_874_reg_43537.read().is_01())? sc_lv<11>(): (sc_biguint<11>(h_69_cast_cast_fu_22329_p1.read()) + sc_biguint<11>(tmp_874_reg_43537.read()));
}

void ShuffleNetV2::thread_tmp_878_fu_22362_p2() {
    tmp_878_fu_22362_p2 = (!p_shl399_cast_fu_22346_p1.read().is_01() || !p_shl400_cast_fu_22358_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl399_cast_fu_22346_p1.read()) + sc_biguint<15>(p_shl400_cast_fu_22358_p1.read()));
}

void ShuffleNetV2::thread_tmp_879_cast_fu_16780_p1() {
    tmp_879_cast_fu_16780_p1 = esl_zext<32,9>(tmp_713_fu_16775_p2.read());
}

void ShuffleNetV2::thread_tmp_879_fu_22368_p2() {
    tmp_879_fu_22368_p2 = (!h_69_cast_cast1_fu_22325_p1.read().is_01() || !tmp_871_reg_43524.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h_69_cast_cast1_fu_22325_p1.read()) + sc_biguint<10>(tmp_871_reg_43524.read()));
}

void ShuffleNetV2::thread_tmp_880_fu_22397_p2() {
    tmp_880_fu_22397_p2 = (!p_shl401_cast_fu_22381_p1.read().is_01() || !p_shl402_cast_fu_22393_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl401_cast_fu_22381_p1.read()) + sc_biguint<14>(p_shl402_cast_fu_22393_p1.read()));
}

void ShuffleNetV2::thread_tmp_881_fu_22221_p2() {
    tmp_881_fu_22221_p2 = (!tmp_876_reg_43501.read().is_01() || !w_68_cast_cast_fu_22217_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_876_reg_43501.read()) + sc_biguint<15>(w_68_cast_cast_fu_22217_p1.read()));
}

void ShuffleNetV2::thread_tmp_882_fu_22423_p2() {
    tmp_882_fu_22423_p2 = (!tmp_878_reg_43550.read().is_01() || !w_70_cast_cast_fu_22419_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_878_reg_43550.read()) + sc_biguint<15>(w_70_cast_cast_fu_22419_p1.read()));
}

void ShuffleNetV2::thread_tmp_883_fu_22433_p2() {
    tmp_883_fu_22433_p2 = (!tmp_880_reg_43555.read().is_01() || !w_70_cast_cast1_fu_22415_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_880_reg_43555.read()) + sc_biguint<14>(w_70_cast_cast1_fu_22415_p1.read()));
}

void ShuffleNetV2::thread_tmp_884_fu_22644_p3() {
    tmp_884_fu_22644_p3 = esl_concat<10,5>(sum32_reg_43633.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_885_fu_22655_p3() {
    tmp_885_fu_22655_p3 = esl_concat<10,3>(sum32_reg_43633.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_886_fu_22666_p2() {
    tmp_886_fu_22666_p2 = (!p_shl403_cast_fu_22651_p1.read().is_01() || !p_shl404_cast_fu_22662_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(p_shl403_cast_fu_22651_p1.read()) - sc_biguint<16>(p_shl404_cast_fu_22662_p1.read()));
}

void ShuffleNetV2::thread_tmp_887_fu_22676_p2() {
    tmp_887_fu_22676_p2 = (!ci44_cast1_cast_reg_43601.read().is_01() || !tmp_1173_cast_fu_22672_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(ci44_cast1_cast_reg_43601.read()) + sc_bigint<17>(tmp_1173_cast_fu_22672_p1.read()));
}

void ShuffleNetV2::thread_tmp_888_fu_22732_p2() {
    tmp_888_fu_22732_p2 = (!p_shl405_cast_fu_22718_p3.read().is_01() || !p_shl406_cast_fu_22725_p3.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl405_cast_fu_22718_p3.read()) - sc_biguint<8>(p_shl406_cast_fu_22725_p3.read()));
}

void ShuffleNetV2::thread_tmp_889_fu_22738_p2() {
    tmp_889_fu_22738_p2 = (!tmp_248_cast_cast_reg_43614.read().is_01() || !tmp_888_fu_22732_p2.read().is_01())? sc_lv<8>(): (sc_bigint<8>(tmp_248_cast_cast_reg_43614.read()) + sc_biguint<8>(tmp_888_fu_22732_p2.read()));
}

void ShuffleNetV2::thread_tmp_890_fu_22997_p3() {
    tmp_890_fu_22997_p3 = esl_concat<7,2>(tmp_258_fu_22988_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_891_fu_23009_p2() {
    tmp_891_fu_23009_p2 = (!p_shl407_cast_fu_23005_p1.read().is_01() || !tmp_260_cast_cast_fu_22993_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(p_shl407_cast_fu_23005_p1.read()) - sc_bigint<10>(tmp_260_cast_cast_fu_22993_p1.read()));
}

void ShuffleNetV2::thread_tmp_892_fu_23015_p2() {
    tmp_892_fu_23015_p2 = (!w71_cast_cast_reg_43728.read().is_01() || !tmp_891_fu_23009_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(w71_cast_cast_reg_43728.read()) + sc_biguint<10>(tmp_891_fu_23009_p2.read()));
}

void ShuffleNetV2::thread_tmp_893_fu_23036_p2() {
    tmp_893_fu_23036_p2 = (!tmp_2300_fu_23031_p2.read().is_01() || !tmp_892_reg_43767.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_2300_fu_23031_p2.read()) - sc_biguint<10>(tmp_892_reg_43767.read()));
}

void ShuffleNetV2::thread_tmp_894_fu_23041_p2() {
    tmp_894_fu_23041_p2 = (!h70_cast_cast_reg_43746.read().is_01() || !tmp_893_fu_23036_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h70_cast_cast_reg_43746.read()) + sc_biguint<10>(tmp_893_fu_23036_p2.read()));
}

void ShuffleNetV2::thread_tmp_895_fu_23049_p3() {
    tmp_895_fu_23049_p3 = esl_concat<9,2>(sum23_reg_43773.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_896_fu_23060_p2() {
    tmp_896_fu_23060_p2 = (!p_shl409_cast_fu_23056_p1.read().is_01() || !sum23_cast_cast_fu_23046_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(p_shl409_cast_fu_23056_p1.read()) - sc_biguint<12>(sum23_cast_cast_fu_23046_p1.read()));
}

void ShuffleNetV2::thread_tmp_897_fu_23070_p2() {
    tmp_897_fu_23070_p2 = (!w71_cast_cast1_reg_43723.read().is_01() || !tmp_1194_cast_fu_23066_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(w71_cast_cast1_reg_43723.read()) + sc_bigint<13>(tmp_1194_cast_fu_23066_p1.read()));
}

void ShuffleNetV2::thread_tmp_898_fu_23089_p2() {
    tmp_898_fu_23089_p2 = (!p_shl231_fu_23085_p1.read().is_01() || !tmp_1195_cast_fu_23075_p1.read().is_01())? sc_lv<32>(): (sc_bigint<32>(p_shl231_fu_23085_p1.read()) - sc_bigint<32>(tmp_1195_cast_fu_23075_p1.read()));
}

void ShuffleNetV2::thread_tmp_899_fu_23095_p2() {
    tmp_899_fu_23095_p2 = (!h70_cast_reg_43741.read().is_01() || !tmp_898_fu_23089_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(h70_cast_reg_43741.read()) + sc_biguint<32>(tmp_898_fu_23089_p2.read()));
}

void ShuffleNetV2::thread_tmp_900_fu_23663_p3() {
    tmp_900_fu_23663_p3 = esl_concat<6,3>(co85_reg_11109.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_901_fu_23675_p3() {
    tmp_901_fu_23675_p3 = esl_concat<6,1>(co85_reg_11109.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_902_fu_23687_p2() {
    tmp_902_fu_23687_p2 = (!p_shl412_cast_fu_23683_p1.read().is_01() || !p_shl411_cast_fu_23671_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl412_cast_fu_23683_p1.read()) + sc_biguint<10>(p_shl411_cast_fu_23671_p1.read()));
}

void ShuffleNetV2::thread_tmp_903_fu_23425_p3() {
    tmp_903_fu_23425_p3 = esl_concat<10,5>(sum38_reg_43893.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_904_fu_23436_p3() {
    tmp_904_fu_23436_p3 = esl_concat<10,3>(sum38_reg_43893.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_905_fu_23447_p2() {
    tmp_905_fu_23447_p2 = (!p_shl413_cast_fu_23432_p1.read().is_01() || !p_shl414_cast_fu_23443_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(p_shl413_cast_fu_23432_p1.read()) - sc_biguint<16>(p_shl414_cast_fu_23443_p1.read()));
}

void ShuffleNetV2::thread_tmp_906_fu_23457_p2() {
    tmp_906_fu_23457_p2 = (!ci46_cast1_cast_reg_43861.read().is_01() || !tmp_1210_cast_fu_23453_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(ci46_cast1_cast_reg_43861.read()) + sc_bigint<17>(tmp_1210_cast_fu_23453_p1.read()));
}

void ShuffleNetV2::thread_tmp_907_fu_23513_p2() {
    tmp_907_fu_23513_p2 = (!p_shl415_cast_fu_23499_p3.read().is_01() || !p_shl416_cast_fu_23506_p3.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl415_cast_fu_23499_p3.read()) - sc_biguint<8>(p_shl416_cast_fu_23506_p3.read()));
}

void ShuffleNetV2::thread_tmp_908_fu_23519_p2() {
    tmp_908_fu_23519_p2 = (!tmp_265_cast_cast_reg_43874.read().is_01() || !tmp_907_fu_23513_p2.read().is_01())? sc_lv<8>(): (sc_bigint<8>(tmp_265_cast_cast_reg_43874.read()) + sc_biguint<8>(tmp_907_fu_23513_p2.read()));
}

void ShuffleNetV2::thread_tmp_909_fu_23782_p3() {
    tmp_909_fu_23782_p3 = esl_concat<6,3>(co87_reg_11142.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_910_cast_fu_17079_p1() {
    tmp_910_cast_fu_17079_p1 = esl_zext<32,15>(tmp_737_fu_17074_p2.read());
}

void ShuffleNetV2::thread_tmp_910_fu_23794_p3() {
    tmp_910_fu_23794_p3 = esl_concat<6,1>(co87_reg_11142.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_911_fu_23806_p2() {
    tmp_911_fu_23806_p2 = (!p_shl418_cast_fu_23802_p1.read().is_01() || !p_shl417_cast_fu_23790_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl418_cast_fu_23802_p1.read()) + sc_biguint<10>(p_shl417_cast_fu_23790_p1.read()));
}

void ShuffleNetV2::thread_tmp_912_cast_fu_17273_p1() {
    tmp_912_cast_fu_17273_p1 = esl_zext<32,15>(tmp_738_fu_17268_p2.read());
}

void ShuffleNetV2::thread_tmp_912_fu_23834_p3() {
    tmp_912_fu_23834_p3 = esl_concat<7,3>(tmp_264_fu_23828_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_913_cast_fu_17283_p1() {
    tmp_913_cast_fu_17283_p1 = esl_zext<32,14>(tmp_739_reg_41463.read());
}

void ShuffleNetV2::thread_tmp_913_fu_23846_p3() {
    tmp_913_fu_23846_p3 = esl_concat<7,1>(tmp_264_fu_23828_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_914_fu_23858_p2() {
    tmp_914_fu_23858_p2 = (!p_shl420_cast_fu_23854_p1.read().is_01() || !p_shl419_cast_fu_23842_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl420_cast_fu_23854_p1.read()) + sc_biguint<11>(p_shl419_cast_fu_23842_p1.read()));
}

void ShuffleNetV2::thread_tmp_915_cast_fu_17447_p1() {
    tmp_915_cast_fu_17447_p1 = esl_sext<9,8>(tmp_741_fu_17441_p2.read());
}

void ShuffleNetV2::thread_tmp_915_fu_23721_p2() {
    tmp_915_fu_23721_p2 = (!h_73_cast_cast_fu_23717_p1.read().is_01() || !tmp_902_reg_43965.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h_73_cast_cast_fu_23717_p1.read()) + sc_biguint<10>(tmp_902_reg_43965.read()));
}

void ShuffleNetV2::thread_tmp_916_fu_23750_p2() {
    tmp_916_fu_23750_p2 = (!p_shl421_cast_fu_23734_p1.read().is_01() || !p_shl422_cast_fu_23746_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl421_cast_fu_23734_p1.read()) + sc_biguint<15>(p_shl422_cast_fu_23746_p1.read()));
}

void ShuffleNetV2::thread_tmp_917_fu_23884_p2() {
    tmp_917_fu_23884_p2 = (!h_75_cast_cast_fu_23880_p1.read().is_01() || !tmp_914_reg_44022.read().is_01())? sc_lv<11>(): (sc_biguint<11>(h_75_cast_cast_fu_23880_p1.read()) + sc_biguint<11>(tmp_914_reg_44022.read()));
}

void ShuffleNetV2::thread_tmp_918_cast_fu_17515_p1() {
    tmp_918_cast_fu_17515_p1 = esl_sext<32,10>(tmp_744_fu_17510_p2.read());
}

void ShuffleNetV2::thread_tmp_918_fu_23913_p2() {
    tmp_918_fu_23913_p2 = (!p_shl423_cast_fu_23897_p1.read().is_01() || !p_shl424_cast_fu_23909_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl423_cast_fu_23897_p1.read()) + sc_biguint<15>(p_shl424_cast_fu_23909_p1.read()));
}

void ShuffleNetV2::thread_tmp_919_fu_23919_p2() {
    tmp_919_fu_23919_p2 = (!h_75_cast_cast1_fu_23876_p1.read().is_01() || !tmp_911_reg_44009.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h_75_cast_cast1_fu_23876_p1.read()) + sc_biguint<10>(tmp_911_reg_44009.read()));
}

void ShuffleNetV2::thread_tmp_920_fu_23948_p2() {
    tmp_920_fu_23948_p2 = (!p_shl425_cast_fu_23932_p1.read().is_01() || !p_shl426_cast_fu_23944_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl425_cast_fu_23932_p1.read()) + sc_biguint<14>(p_shl426_cast_fu_23944_p1.read()));
}

void ShuffleNetV2::thread_tmp_921_fu_23772_p2() {
    tmp_921_fu_23772_p2 = (!tmp_916_reg_43986.read().is_01() || !w_74_cast_cast_fu_23768_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_916_reg_43986.read()) + sc_biguint<15>(w_74_cast_cast_fu_23768_p1.read()));
}

void ShuffleNetV2::thread_tmp_922_fu_23974_p2() {
    tmp_922_fu_23974_p2 = (!tmp_918_reg_44035.read().is_01() || !w_76_cast_cast_fu_23970_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_918_reg_44035.read()) + sc_biguint<15>(w_76_cast_cast_fu_23970_p1.read()));
}

void ShuffleNetV2::thread_tmp_923_fu_23984_p2() {
    tmp_923_fu_23984_p2 = (!tmp_920_reg_44040.read().is_01() || !w_76_cast_cast1_fu_23966_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_920_reg_44040.read()) + sc_biguint<14>(w_76_cast_cast1_fu_23966_p1.read()));
}

void ShuffleNetV2::thread_tmp_924_fu_24195_p3() {
    tmp_924_fu_24195_p3 = esl_concat<9,5>(sum42_reg_44118.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_925_cast_fu_17586_p1() {
    tmp_925_cast_fu_17586_p1 = esl_zext<32,9>(tmp_748_fu_17581_p2.read());
}

void ShuffleNetV2::thread_tmp_925_fu_24202_p1() {
    tmp_925_fu_24202_p1 = esl_sext<15,14>(tmp_924_fu_24195_p3.read());
}

void ShuffleNetV2::thread_tmp_926_fu_24210_p3() {
    tmp_926_fu_24210_p3 = esl_concat<9,3>(sum42_reg_44118.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_927_fu_24217_p1() {
    tmp_927_fu_24217_p1 = esl_sext<13,12>(tmp_926_fu_24210_p3.read());
}

void ShuffleNetV2::thread_tmp_928_fu_24225_p2() {
    tmp_928_fu_24225_p2 = (!p_shl427_cast_fu_24206_p1.read().is_01() || !p_shl428_cast_fu_24221_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(p_shl427_cast_fu_24206_p1.read()) - sc_biguint<16>(p_shl428_cast_fu_24221_p1.read()));
}

void ShuffleNetV2::thread_tmp_929_fu_24235_p2() {
    tmp_929_fu_24235_p2 = (!tmp_1251_cast_fu_24231_p1.read().is_01() || !ci48_cast1_cast_reg_44086.read().is_01())? sc_lv<17>(): (sc_bigint<17>(tmp_1251_cast_fu_24231_p1.read()) + sc_biguint<17>(ci48_cast1_cast_reg_44086.read()));
}

void ShuffleNetV2::thread_tmp_930_fu_24291_p2() {
    tmp_930_fu_24291_p2 = (!p_shl429_cast_fu_24277_p3.read().is_01() || !p_shl430_cast_fu_24284_p3.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl429_cast_fu_24277_p3.read()) - sc_biguint<8>(p_shl430_cast_fu_24284_p3.read()));
}

void ShuffleNetV2::thread_tmp_931_fu_24297_p2() {
    tmp_931_fu_24297_p2 = (!tmp_930_fu_24291_p2.read().is_01() || !tmp_277_cast_cast_reg_44099.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_930_fu_24291_p2.read()) + sc_bigint<8>(tmp_277_cast_cast_reg_44099.read()));
}

void ShuffleNetV2::thread_tmp_932_fu_24560_p3() {
    tmp_932_fu_24560_p3 = esl_concat<7,2>(tmp_277_fu_24551_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_933_fu_24572_p2() {
    tmp_933_fu_24572_p2 = (!p_shl431_cast_fu_24568_p1.read().is_01() || !tmp_289_cast_cast_fu_24556_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(p_shl431_cast_fu_24568_p1.read()) - sc_bigint<10>(tmp_289_cast_cast_fu_24556_p1.read()));
}

void ShuffleNetV2::thread_tmp_934_fu_24578_p2() {
    tmp_934_fu_24578_p2 = (!w77_cast_cast_reg_44213.read().is_01() || !tmp_933_fu_24572_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(w77_cast_cast_reg_44213.read()) + sc_biguint<10>(tmp_933_fu_24572_p2.read()));
}

void ShuffleNetV2::thread_tmp_935_fu_24599_p2() {
    tmp_935_fu_24599_p2 = (!tmp_2324_fu_24594_p2.read().is_01() || !tmp_934_reg_44252.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_2324_fu_24594_p2.read()) - sc_biguint<10>(tmp_934_reg_44252.read()));
}

void ShuffleNetV2::thread_tmp_936_fu_24604_p2() {
    tmp_936_fu_24604_p2 = (!h76_cast_cast_reg_44231.read().is_01() || !tmp_935_fu_24599_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h76_cast_cast_reg_44231.read()) + sc_biguint<10>(tmp_935_fu_24599_p2.read()));
}

void ShuffleNetV2::thread_tmp_937_fu_24612_p3() {
    tmp_937_fu_24612_p3 = esl_concat<9,2>(sum25_reg_44258.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_938_fu_24623_p2() {
    tmp_938_fu_24623_p2 = (!p_shl433_cast_fu_24619_p1.read().is_01() || !sum25_cast_cast_fu_24609_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(p_shl433_cast_fu_24619_p1.read()) - sc_biguint<12>(sum25_cast_cast_fu_24609_p1.read()));
}

void ShuffleNetV2::thread_tmp_939_fu_24629_p2() {
    tmp_939_fu_24629_p2 = (!w77_cast_cast1_reg_44208.read().is_01() || !tmp_938_fu_24623_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(w77_cast_cast1_reg_44208.read()) + sc_biguint<12>(tmp_938_fu_24623_p2.read()));
}

void ShuffleNetV2::thread_tmp_940_fu_24648_p2() {
    tmp_940_fu_24648_p2 = (!p_shl237_fu_24644_p1.read().is_01() || !tmp_1273_cast_fu_24634_p1.read().is_01())? sc_lv<32>(): (sc_bigint<32>(p_shl237_fu_24644_p1.read()) - sc_bigint<32>(tmp_1273_cast_fu_24634_p1.read()));
}

void ShuffleNetV2::thread_tmp_941_fu_24654_p2() {
    tmp_941_fu_24654_p2 = (!h76_cast_reg_44226.read().is_01() || !tmp_940_fu_24648_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(h76_cast_reg_44226.read()) + sc_biguint<32>(tmp_940_fu_24648_p2.read()));
}

void ShuffleNetV2::thread_tmp_942_fu_25222_p3() {
    tmp_942_fu_25222_p3 = esl_concat<6,3>(co95_reg_11351.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_943_fu_25234_p3() {
    tmp_943_fu_25234_p3 = esl_concat<6,1>(co95_reg_11351.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_944_fu_25246_p2() {
    tmp_944_fu_25246_p2 = (!p_shl436_cast_fu_25242_p1.read().is_01() || !p_shl435_cast_fu_25230_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl436_cast_fu_25242_p1.read()) + sc_biguint<10>(p_shl435_cast_fu_25230_p1.read()));
}

void ShuffleNetV2::thread_tmp_945_fu_24984_p3() {
    tmp_945_fu_24984_p3 = esl_concat<11,5>(sum47_reg_44378.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_946_fu_24995_p3() {
    tmp_946_fu_24995_p3 = esl_concat<11,3>(sum47_reg_44378.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_947_fu_25006_p2() {
    tmp_947_fu_25006_p2 = (!p_shl437_cast_fu_24991_p1.read().is_01() || !p_shl438_cast_fu_25002_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(p_shl437_cast_fu_24991_p1.read()) - sc_biguint<17>(p_shl438_cast_fu_25002_p1.read()));
}

void ShuffleNetV2::thread_tmp_948_fu_25016_p2() {
    tmp_948_fu_25016_p2 = (!ci50_cast1_cast_reg_44346.read().is_01() || !tmp_1288_cast_fu_25012_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(ci50_cast1_cast_reg_44346.read()) + sc_bigint<18>(tmp_1288_cast_fu_25012_p1.read()));
}

void ShuffleNetV2::thread_tmp_949_fu_25072_p2() {
    tmp_949_fu_25072_p2 = (!p_shl439_cast_fu_25058_p3.read().is_01() || !p_shl440_cast_fu_25065_p3.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl439_cast_fu_25058_p3.read()) - sc_biguint<8>(p_shl440_cast_fu_25065_p3.read()));
}

void ShuffleNetV2::thread_tmp_950_fu_25078_p2() {
    tmp_950_fu_25078_p2 = (!tmp_294_cast_cast_reg_44359.read().is_01() || !tmp_949_fu_25072_p2.read().is_01())? sc_lv<8>(): (sc_bigint<8>(tmp_294_cast_cast_reg_44359.read()) + sc_biguint<8>(tmp_949_fu_25072_p2.read()));
}

void ShuffleNetV2::thread_tmp_951_fu_25341_p3() {
    tmp_951_fu_25341_p3 = esl_concat<6,3>(co97_reg_11384.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_952_fu_25353_p3() {
    tmp_952_fu_25353_p3 = esl_concat<6,1>(co97_reg_11384.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_953_fu_25365_p2() {
    tmp_953_fu_25365_p2 = (!p_shl442_cast_fu_25361_p1.read().is_01() || !p_shl441_cast_fu_25349_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl442_cast_fu_25361_p1.read()) + sc_biguint<10>(p_shl441_cast_fu_25349_p1.read()));
}

void ShuffleNetV2::thread_tmp_954_cast_fu_17867_p1() {
    tmp_954_cast_fu_17867_p1 = esl_zext<32,15>(tmp_770_fu_17862_p2.read());
}

void ShuffleNetV2::thread_tmp_954_fu_25393_p3() {
    tmp_954_fu_25393_p3 = esl_concat<7,3>(tmp_283_fu_25387_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_955_fu_25405_p3() {
    tmp_955_fu_25405_p3 = esl_concat<7,1>(tmp_283_fu_25387_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_956_cast_fu_18061_p1() {
    tmp_956_cast_fu_18061_p1 = esl_zext<32,15>(tmp_771_fu_18056_p2.read());
}

void ShuffleNetV2::thread_tmp_956_fu_25417_p2() {
    tmp_956_fu_25417_p2 = (!p_shl444_cast_fu_25413_p1.read().is_01() || !p_shl443_cast_fu_25401_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl444_cast_fu_25413_p1.read()) + sc_biguint<11>(p_shl443_cast_fu_25401_p1.read()));
}

void ShuffleNetV2::thread_tmp_957_cast_fu_18071_p1() {
    tmp_957_cast_fu_18071_p1 = esl_zext<32,14>(tmp_772_reg_41952.read());
}

void ShuffleNetV2::thread_tmp_957_fu_25280_p2() {
    tmp_957_fu_25280_p2 = (!h_79_cast_cast_fu_25276_p1.read().is_01() || !tmp_944_reg_44450.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h_79_cast_cast_fu_25276_p1.read()) + sc_biguint<10>(tmp_944_reg_44450.read()));
}

void ShuffleNetV2::thread_tmp_958_fu_25309_p2() {
    tmp_958_fu_25309_p2 = (!p_shl445_cast_fu_25293_p1.read().is_01() || !p_shl446_cast_fu_25305_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl445_cast_fu_25293_p1.read()) + sc_biguint<15>(p_shl446_cast_fu_25305_p1.read()));
}

void ShuffleNetV2::thread_tmp_959_cast_fu_18243_p1() {
    tmp_959_cast_fu_18243_p1 = esl_sext<9,8>(tmp_774_fu_18237_p2.read());
}

void ShuffleNetV2::thread_tmp_959_fu_25443_p2() {
    tmp_959_fu_25443_p2 = (!h_81_cast_cast_fu_25439_p1.read().is_01() || !tmp_956_reg_44507.read().is_01())? sc_lv<11>(): (sc_biguint<11>(h_81_cast_cast_fu_25439_p1.read()) + sc_biguint<11>(tmp_956_reg_44507.read()));
}

void ShuffleNetV2::thread_tmp_960_fu_25472_p2() {
    tmp_960_fu_25472_p2 = (!p_shl447_cast_fu_25456_p1.read().is_01() || !p_shl448_cast_fu_25468_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl447_cast_fu_25456_p1.read()) + sc_biguint<15>(p_shl448_cast_fu_25468_p1.read()));
}

void ShuffleNetV2::thread_tmp_961_fu_25478_p2() {
    tmp_961_fu_25478_p2 = (!h_81_cast_cast1_fu_25435_p1.read().is_01() || !tmp_953_reg_44494.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h_81_cast_cast1_fu_25435_p1.read()) + sc_biguint<10>(tmp_953_reg_44494.read()));
}

void ShuffleNetV2::thread_tmp_962_cast_fu_18299_p1() {
    tmp_962_cast_fu_18299_p1 = esl_sext<11,10>(tmp_777_fu_18293_p2.read());
}

void ShuffleNetV2::thread_tmp_962_fu_25507_p2() {
    tmp_962_fu_25507_p2 = (!p_shl449_cast_fu_25491_p1.read().is_01() || !p_shl450_cast_fu_25503_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl449_cast_fu_25491_p1.read()) + sc_biguint<14>(p_shl450_cast_fu_25503_p1.read()));
}

void ShuffleNetV2::thread_tmp_963_cast_fu_18327_p1() {
    tmp_963_cast_fu_18327_p1 = esl_sext<32,11>(tmp_778_fu_18322_p2.read());
}

void ShuffleNetV2::thread_tmp_963_fu_25331_p2() {
    tmp_963_fu_25331_p2 = (!tmp_958_reg_44471.read().is_01() || !w_80_cast_cast_fu_25327_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_958_reg_44471.read()) + sc_biguint<15>(w_80_cast_cast_fu_25327_p1.read()));
}

void ShuffleNetV2::thread_tmp_964_fu_25533_p2() {
    tmp_964_fu_25533_p2 = (!tmp_960_reg_44520.read().is_01() || !w_82_cast_cast_fu_25529_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_960_reg_44520.read()) + sc_biguint<15>(w_82_cast_cast_fu_25529_p1.read()));
}

void ShuffleNetV2::thread_tmp_965_fu_25543_p2() {
    tmp_965_fu_25543_p2 = (!tmp_962_reg_44525.read().is_01() || !w_82_cast_cast1_fu_25525_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_962_reg_44525.read()) + sc_biguint<14>(w_82_cast_cast1_fu_25525_p1.read()));
}

void ShuffleNetV2::thread_tmp_966_fu_25754_p3() {
    tmp_966_fu_25754_p3 = esl_concat<11,5>(sum49_reg_44603.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_967_fu_25765_p3() {
    tmp_967_fu_25765_p3 = esl_concat<11,3>(sum49_reg_44603.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_968_fu_25776_p2() {
    tmp_968_fu_25776_p2 = (!p_shl451_cast_fu_25761_p1.read().is_01() || !p_shl452_cast_fu_25772_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(p_shl451_cast_fu_25761_p1.read()) - sc_biguint<17>(p_shl452_cast_fu_25772_p1.read()));
}

void ShuffleNetV2::thread_tmp_969_fu_25786_p2() {
    tmp_969_fu_25786_p2 = (!ci52_cast1_cast_reg_44571.read().is_01() || !tmp_1327_cast_fu_25782_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(ci52_cast1_cast_reg_44571.read()) + sc_bigint<18>(tmp_1327_cast_fu_25782_p1.read()));
}

void ShuffleNetV2::thread_tmp_970_cast_fu_18398_p1() {
    tmp_970_cast_fu_18398_p1 = esl_zext<32,9>(tmp_782_fu_18393_p2.read());
}

void ShuffleNetV2::thread_tmp_970_fu_25842_p2() {
    tmp_970_fu_25842_p2 = (!p_shl453_cast_fu_25828_p3.read().is_01() || !p_shl454_cast_fu_25835_p3.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl453_cast_fu_25828_p3.read()) - sc_biguint<8>(p_shl454_cast_fu_25835_p3.read()));
}

void ShuffleNetV2::thread_tmp_971_fu_25848_p2() {
    tmp_971_fu_25848_p2 = (!tmp_306_cast_cast_reg_44584.read().is_01() || !tmp_970_fu_25842_p2.read().is_01())? sc_lv<8>(): (sc_bigint<8>(tmp_306_cast_cast_reg_44584.read()) + sc_biguint<8>(tmp_970_fu_25842_p2.read()));
}

void ShuffleNetV2::thread_tmp_972_fu_26107_p3() {
    tmp_972_fu_26107_p3 = esl_concat<7,2>(tmp_296_fu_26098_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_973_fu_26119_p2() {
    tmp_973_fu_26119_p2 = (!p_shl455_cast_fu_26115_p1.read().is_01() || !tmp_318_cast_cast_fu_26103_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(p_shl455_cast_fu_26115_p1.read()) - sc_bigint<10>(tmp_318_cast_cast_fu_26103_p1.read()));
}

void ShuffleNetV2::thread_tmp_974_fu_26125_p2() {
    tmp_974_fu_26125_p2 = (!w83_cast_cast_reg_44698.read().is_01() || !tmp_973_fu_26119_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(w83_cast_cast_reg_44698.read()) + sc_biguint<10>(tmp_973_fu_26119_p2.read()));
}

void ShuffleNetV2::thread_tmp_975_fu_26146_p2() {
    tmp_975_fu_26146_p2 = (!tmp_2348_fu_26141_p2.read().is_01() || !tmp_974_reg_44737.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_2348_fu_26141_p2.read()) - sc_biguint<10>(tmp_974_reg_44737.read()));
}

void ShuffleNetV2::thread_tmp_976_fu_26151_p2() {
    tmp_976_fu_26151_p2 = (!h82_cast_cast_reg_44716.read().is_01() || !tmp_975_fu_26146_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h82_cast_cast_reg_44716.read()) + sc_biguint<10>(tmp_975_fu_26146_p2.read()));
}

void ShuffleNetV2::thread_tmp_977_fu_26159_p3() {
    tmp_977_fu_26159_p3 = esl_concat<9,2>(sum27_reg_44743.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_978_fu_26170_p2() {
    tmp_978_fu_26170_p2 = (!p_shl457_cast_fu_26166_p1.read().is_01() || !sum27_cast_cast_fu_26156_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(p_shl457_cast_fu_26166_p1.read()) - sc_biguint<12>(sum27_cast_cast_fu_26156_p1.read()));
}

void ShuffleNetV2::thread_tmp_979_fu_26176_p2() {
    tmp_979_fu_26176_p2 = (!w83_cast_cast1_reg_44693.read().is_01() || !tmp_978_fu_26170_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(w83_cast_cast1_reg_44693.read()) + sc_biguint<12>(tmp_978_fu_26170_p2.read()));
}

void ShuffleNetV2::thread_tmp_980_fu_26195_p2() {
    tmp_980_fu_26195_p2 = (!p_shl240_fu_26191_p1.read().is_01() || !tmp_1349_cast_fu_26181_p1.read().is_01())? sc_lv<32>(): (sc_bigint<32>(p_shl240_fu_26191_p1.read()) - sc_bigint<32>(tmp_1349_cast_fu_26181_p1.read()));
}

void ShuffleNetV2::thread_tmp_981_fu_26201_p2() {
    tmp_981_fu_26201_p2 = (!h82_cast_reg_44711.read().is_01() || !tmp_980_fu_26195_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(h82_cast_reg_44711.read()) + sc_biguint<32>(tmp_980_fu_26195_p2.read()));
}

void ShuffleNetV2::thread_tmp_982_fu_26761_p3() {
    tmp_982_fu_26761_p3 = esl_concat<6,3>(co105_reg_11593.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_983_fu_26773_p3() {
    tmp_983_fu_26773_p3 = esl_concat<6,1>(co105_reg_11593.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_984_fu_26785_p2() {
    tmp_984_fu_26785_p2 = (!p_shl460_cast_fu_26781_p1.read().is_01() || !p_shl459_cast_fu_26769_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl460_cast_fu_26781_p1.read()) + sc_biguint<10>(p_shl459_cast_fu_26769_p1.read()));
}

void ShuffleNetV2::thread_tmp_985_fu_26527_p3() {
    tmp_985_fu_26527_p3 = esl_concat<11,5>(sum52_reg_44863.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_986_cast_fu_18681_p1() {
    tmp_986_cast_fu_18681_p1 = esl_zext<32,15>(tmp_793_fu_18676_p2.read());
}

void ShuffleNetV2::thread_tmp_986_fu_26538_p3() {
    tmp_986_fu_26538_p3 = esl_concat<11,3>(sum52_reg_44863.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_987_fu_26549_p2() {
    tmp_987_fu_26549_p2 = (!p_shl461_cast_fu_26534_p1.read().is_01() || !p_shl462_cast_fu_26545_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(p_shl461_cast_fu_26534_p1.read()) - sc_biguint<17>(p_shl462_cast_fu_26545_p1.read()));
}

void ShuffleNetV2::thread_tmp_988_fu_26559_p2() {
    tmp_988_fu_26559_p2 = (!ci54_cast1_cast_reg_44831.read().is_01() || !tmp_1364_cast_fu_26555_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(ci54_cast1_cast_reg_44831.read()) + sc_bigint<18>(tmp_1364_cast_fu_26555_p1.read()));
}

void ShuffleNetV2::thread_tmp_989_fu_26615_p2() {
    tmp_989_fu_26615_p2 = (!p_shl463_cast_fu_26601_p3.read().is_01() || !p_shl464_cast_fu_26608_p3.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl463_cast_fu_26601_p3.read()) - sc_biguint<8>(p_shl464_cast_fu_26608_p3.read()));
}

void ShuffleNetV2::thread_tmp_990_fu_26621_p2() {
    tmp_990_fu_26621_p2 = (!tmp_323_cast_cast_reg_44844.read().is_01() || !tmp_989_fu_26615_p2.read().is_01())? sc_lv<8>(): (sc_bigint<8>(tmp_323_cast_cast_reg_44844.read()) + sc_biguint<8>(tmp_989_fu_26615_p2.read()));
}

void ShuffleNetV2::thread_tmp_991_fu_26880_p3() {
    tmp_991_fu_26880_p3 = esl_concat<6,3>(co107_reg_11626.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_992_fu_26892_p3() {
    tmp_992_fu_26892_p3 = esl_concat<6,1>(co107_reg_11626.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_993_fu_26904_p2() {
    tmp_993_fu_26904_p2 = (!p_shl466_cast_fu_26900_p1.read().is_01() || !p_shl465_cast_fu_26888_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl466_cast_fu_26900_p1.read()) + sc_biguint<10>(p_shl465_cast_fu_26888_p1.read()));
}

void ShuffleNetV2::thread_tmp_994_fu_26932_p3() {
    tmp_994_fu_26932_p3 = esl_concat<7,3>(tmp_302_fu_26926_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_995_cast_fu_18916_p1() {
    tmp_995_cast_fu_18916_p1 = esl_sext<16,15>(tmp_796_fu_18910_p2.read());
}

void ShuffleNetV2::thread_tmp_995_fu_26944_p3() {
    tmp_995_fu_26944_p3 = esl_concat<7,1>(tmp_302_fu_26926_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_996_cast_fu_18925_p1() {
    tmp_996_cast_fu_18925_p1 = esl_sext<32,16>(tmp_797_fu_18920_p2.read());
}

void ShuffleNetV2::thread_tmp_996_fu_26956_p2() {
    tmp_996_fu_26956_p2 = (!p_shl468_cast_fu_26952_p1.read().is_01() || !p_shl467_cast_fu_26940_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl468_cast_fu_26952_p1.read()) + sc_biguint<11>(p_shl467_cast_fu_26940_p1.read()));
}

void ShuffleNetV2::thread_tmp_997_fu_26819_p2() {
    tmp_997_fu_26819_p2 = (!h_85_cast_cast_fu_26815_p1.read().is_01() || !tmp_984_reg_44935.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h_85_cast_cast_fu_26815_p1.read()) + sc_biguint<10>(tmp_984_reg_44935.read()));
}

void ShuffleNetV2::thread_tmp_998_fu_26848_p2() {
    tmp_998_fu_26848_p2 = (!p_shl469_cast_fu_26832_p1.read().is_01() || !p_shl470_cast_fu_26844_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl469_cast_fu_26832_p1.read()) + sc_biguint<15>(p_shl470_cast_fu_26844_p1.read()));
}

void ShuffleNetV2::thread_tmp_999_fu_26982_p2() {
    tmp_999_fu_26982_p2 = (!h_87_cast_cast_fu_26978_p1.read().is_01() || !tmp_996_reg_44992.read().is_01())? sc_lv<11>(): (sc_biguint<11>(h_87_cast_cast_fu_26978_p1.read()) + sc_biguint<11>(tmp_996_reg_44992.read()));
}

void ShuffleNetV2::thread_tmp_fu_15391_p3() {
    tmp_fu_15391_p3 = esl_concat<2,5>(ci_reg_9604.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_s_fu_16324_p2() {
    tmp_s_fu_16324_p2 = (!co19_cast_fu_16308_p1.read().is_01() || !ap_const_lv6_18.is_01())? sc_lv<6>(): (sc_biguint<6>(co19_cast_fu_16308_p1.read()) + sc_biguint<6>(ap_const_lv6_18));
}

void ShuffleNetV2::thread_w101_cast_cast1_fu_30653_p1() {
    w101_cast_cast1_fu_30653_p1 = esl_zext<14,2>(w101_reg_12209.read());
}

void ShuffleNetV2::thread_w101_cast_cast_fu_30657_p1() {
    w101_cast_cast_fu_30657_p1 = esl_zext<10,2>(w101_reg_12209.read());
}

void ShuffleNetV2::thread_w107_cast_cast1_fu_32220_p1() {
    w107_cast_cast1_fu_32220_p1 = esl_zext<13,2>(w107_reg_12451.read());
}

void ShuffleNetV2::thread_w107_cast_cast_fu_32224_p1() {
    w107_cast_cast_fu_32224_p1 = esl_zext<10,2>(w107_reg_12451.read());
}

void ShuffleNetV2::thread_w111_cast_cast1_fu_33556_p1() {
    w111_cast_cast1_fu_33556_p1 = esl_zext<13,2>(w111_reg_12660.read());
}

void ShuffleNetV2::thread_w111_cast_cast_fu_33560_p1() {
    w111_cast_cast_fu_33560_p1 = esl_zext<11,2>(w111_reg_12660.read());
}

void ShuffleNetV2::thread_w113_cast_cast1_fu_34329_p1() {
    w113_cast_cast1_fu_34329_p1 = esl_zext<13,2>(w113_reg_12781.read());
}

void ShuffleNetV2::thread_w113_cast_cast_fu_34333_p1() {
    w113_cast_cast_fu_34333_p1 = esl_zext<11,2>(w113_reg_12781.read());
}

void ShuffleNetV2::thread_w117_cast_cast1_fu_35725_p1() {
    w117_cast_cast1_fu_35725_p1 = esl_zext<13,2>(w117_reg_12990.read());
}

void ShuffleNetV2::thread_w117_cast_cast_fu_35729_p1() {
    w117_cast_cast_fu_35729_p1 = esl_zext<11,2>(w117_reg_12990.read());
}

void ShuffleNetV2::thread_w123_cast_cast1_fu_37252_p1() {
    w123_cast_cast1_fu_37252_p1 = esl_zext<14,2>(w123_reg_13232.read());
}

void ShuffleNetV2::thread_w123_cast_cast_fu_37256_p1() {
    w123_cast_cast_fu_37256_p1 = esl_zext<11,2>(w123_reg_13232.read());
}

void ShuffleNetV2::thread_w129_cast_cast1_fu_38783_p1() {
    w129_cast_cast1_fu_38783_p1 = esl_zext<15,2>(w129_reg_13474.read());
}

void ShuffleNetV2::thread_w129_cast_cast_fu_38787_p1() {
    w129_cast_cast_fu_38787_p1 = esl_zext<11,2>(w129_reg_13474.read());
}

void ShuffleNetV2::thread_w131_cast_cast_fu_39709_p1() {
    w131_cast_cast_fu_39709_p1 = esl_zext<11,3>(w131_reg_13628.read());
}

void ShuffleNetV2::thread_w13_cast_cast_fu_16004_p1() {
    w13_cast_cast_fu_16004_p1 = esl_zext<9,2>(w13_reg_9760.read());
}

void ShuffleNetV2::thread_w26_cast_cast1_fu_16696_p1() {
    w26_cast_cast1_fu_16696_p1 = esl_zext<9,2>(w26_reg_9905.read());
}

void ShuffleNetV2::thread_w26_cast_cast_fu_16700_p1() {
    w26_cast_cast_fu_16700_p1 = esl_zext<10,2>(w26_reg_9905.read());
}

void ShuffleNetV2::thread_w42_cast_cast1_fu_17502_p1() {
    w42_cast_cast1_fu_17502_p1 = esl_zext<9,2>(w42_reg_10083.read());
}

void ShuffleNetV2::thread_w42_cast_cast_fu_17506_p1() {
    w42_cast_cast_fu_17506_p1 = esl_zext<10,2>(w42_reg_10083.read());
}

void ShuffleNetV2::thread_w55_cast_cast1_fu_18314_p1() {
    w55_cast_cast1_fu_18314_p1 = esl_zext<9,2>(w55_reg_10261.read());
}

void ShuffleNetV2::thread_w55_cast_cast_fu_18318_p1() {
    w55_cast_cast_fu_18318_p1 = esl_zext<11,2>(w55_reg_10261.read());
}

void ShuffleNetV2::thread_w59_cast_cast1_fu_19142_p1() {
    w59_cast_cast1_fu_19142_p1 = esl_zext<12,2>(w59_reg_10427.read());
}

void ShuffleNetV2::thread_w59_cast_cast_fu_19146_p1() {
    w59_cast_cast_fu_19146_p1 = esl_zext<10,2>(w59_reg_10427.read());
}

void ShuffleNetV2::thread_w61_cast_cast1_fu_19927_p1() {
    w61_cast_cast1_fu_19927_p1 = esl_zext<11,2>(w61_reg_10548.read());
}

void ShuffleNetV2::thread_w61_cast_cast_fu_19931_p1() {
    w61_cast_cast_fu_19931_p1 = esl_zext<10,2>(w61_reg_10548.read());
}

void ShuffleNetV2::thread_w65_cast_cast1_fu_21351_p1() {
    w65_cast_cast1_fu_21351_p1 = esl_zext<13,2>(w65_reg_10757.read());
}

void ShuffleNetV2::thread_w65_cast_cast_fu_21355_p1() {
    w65_cast_cast_fu_21355_p1 = esl_zext<10,2>(w65_reg_10757.read());
}

void ShuffleNetV2::thread_w6_cast_cast_fu_15708_p1() {
    w6_cast_cast_fu_15708_p1 = esl_zext<9,2>(w6_reg_9682.read());
}

void ShuffleNetV2::thread_w71_cast_cast1_fu_22898_p1() {
    w71_cast_cast1_fu_22898_p1 = esl_zext<13,2>(w71_reg_10999.read());
}

void ShuffleNetV2::thread_w71_cast_cast_fu_22902_p1() {
    w71_cast_cast_fu_22902_p1 = esl_zext<10,2>(w71_reg_10999.read());
}

void ShuffleNetV2::thread_w77_cast_cast1_fu_24461_p1() {
    w77_cast_cast1_fu_24461_p1 = esl_zext<12,2>(w77_reg_11241.read());
}

void ShuffleNetV2::thread_w77_cast_cast_fu_24465_p1() {
    w77_cast_cast_fu_24465_p1 = esl_zext<10,2>(w77_reg_11241.read());
}

void ShuffleNetV2::thread_w83_cast_cast1_fu_26008_p1() {
    w83_cast_cast1_fu_26008_p1 = esl_zext<12,2>(w83_reg_11483.read());
}

void ShuffleNetV2::thread_w83_cast_cast_fu_26012_p1() {
    w83_cast_cast_fu_26012_p1 = esl_zext<10,2>(w83_reg_11483.read());
}

void ShuffleNetV2::thread_w89_cast_cast1_fu_27547_p1() {
    w89_cast_cast1_fu_27547_p1 = esl_zext<12,2>(w89_reg_11725.read());
}

void ShuffleNetV2::thread_w89_cast_cast_fu_27551_p1() {
    w89_cast_cast_fu_27551_p1 = esl_zext<10,2>(w89_reg_11725.read());
}

void ShuffleNetV2::thread_w95_cast_cast1_fu_29094_p1() {
    w95_cast_cast1_fu_29094_p1 = esl_zext<13,2>(w95_reg_11967.read());
}

void ShuffleNetV2::thread_w95_cast_cast_fu_29098_p1() {
    w95_cast_cast_fu_29098_p1 = esl_zext<10,2>(w95_reg_11967.read());
}

void ShuffleNetV2::thread_w_100_cast_cast1_fu_30162_p1() {
    w_100_cast_cast1_fu_30162_p1 = esl_zext<14,4>(w_100_fu_30156_p2.read());
}

void ShuffleNetV2::thread_w_100_cast_cast_fu_30166_p1() {
    w_100_cast_cast_fu_30166_p1 = esl_zext<15,4>(w_100_fu_30156_p2.read());
}

void ShuffleNetV2::thread_w_100_fu_30156_p2() {
    w_100_fu_30156_p2 = (!w99_reg_12132.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w99_reg_12132.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_102_fu_30667_p2() {
    w_102_fu_30667_p2 = (!w101_reg_12209.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w101_reg_12209.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_104_cast_cast_fu_31527_p1() {
    w_104_cast_cast_fu_31527_p1 = esl_zext<15,4>(w_104_fu_31521_p2.read());
}

void ShuffleNetV2::thread_w_104_fu_31521_p2() {
    w_104_fu_31521_p2 = (!w103_reg_12341.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w103_reg_12341.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_106_cast_cast1_fu_31725_p1() {
    w_106_cast_cast1_fu_31725_p1 = esl_zext<14,4>(w_106_fu_31719_p2.read());
}

void ShuffleNetV2::thread_w_106_cast_cast_fu_31729_p1() {
    w_106_cast_cast_fu_31729_p1 = esl_zext<15,4>(w_106_fu_31719_p2.read());
}

void ShuffleNetV2::thread_w_106_fu_31719_p2() {
    w_106_fu_31719_p2 = (!w105_reg_12374.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w105_reg_12374.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_108_fu_32234_p2() {
    w_108_fu_32234_p2 = (!w107_reg_12451.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w107_reg_12451.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_110_cast_cast_fu_33094_p1() {
    w_110_cast_cast_fu_33094_p1 = esl_zext<15,4>(w_110_fu_33088_p2.read());
}

void ShuffleNetV2::thread_w_110_fu_33088_p2() {
    w_110_fu_33088_p2 = (!w109_reg_12583.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w109_reg_12583.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_112_fu_33570_p2() {
    w_112_fu_33570_p2 = (!w111_reg_12660.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w111_reg_12660.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_114_fu_34343_p2() {
    w_114_fu_34343_p2 = (!w113_reg_12781.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w113_reg_12781.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_116_cast_cast1_fu_35254_p1() {
    w_116_cast_cast1_fu_35254_p1 = esl_zext<13,3>(w_116_fu_35248_p2.read());
}

void ShuffleNetV2::thread_w_116_cast_cast_fu_35258_p1() {
    w_116_cast_cast_fu_35258_p1 = esl_zext<14,3>(w_116_fu_35248_p2.read());
}

void ShuffleNetV2::thread_w_116_fu_35248_p2() {
    w_116_fu_35248_p2 = (!w115_reg_12913.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(w115_reg_12913.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_w_118_fu_35739_p2() {
    w_118_fu_35739_p2 = (!w117_reg_12990.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w117_reg_12990.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_120_cast_cast_fu_36583_p1() {
    w_120_cast_cast_fu_36583_p1 = esl_zext<14,3>(w_120_fu_36577_p2.read());
}

void ShuffleNetV2::thread_w_120_fu_36577_p2() {
    w_120_fu_36577_p2 = (!w119_reg_13122.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(w119_reg_13122.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_w_122_cast_cast1_fu_36781_p1() {
    w_122_cast_cast1_fu_36781_p1 = esl_zext<13,3>(w_122_fu_36775_p2.read());
}

void ShuffleNetV2::thread_w_122_cast_cast_fu_36785_p1() {
    w_122_cast_cast_fu_36785_p1 = esl_zext<14,3>(w_122_fu_36775_p2.read());
}

void ShuffleNetV2::thread_w_122_fu_36775_p2() {
    w_122_fu_36775_p2 = (!w121_reg_13155.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(w121_reg_13155.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_w_124_fu_37266_p2() {
    w_124_fu_37266_p2 = (!w123_reg_13232.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w123_reg_13232.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_126_cast_cast_fu_38114_p1() {
    w_126_cast_cast_fu_38114_p1 = esl_zext<14,3>(w_126_fu_38108_p2.read());
}

void ShuffleNetV2::thread_w_126_fu_38108_p2() {
    w_126_fu_38108_p2 = (!w125_reg_13364.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(w125_reg_13364.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_w_128_cast_cast1_fu_38312_p1() {
    w_128_cast_cast1_fu_38312_p1 = esl_zext<13,3>(w_128_fu_38306_p2.read());
}

void ShuffleNetV2::thread_w_128_cast_cast_fu_38316_p1() {
    w_128_cast_cast_fu_38316_p1 = esl_zext<14,3>(w_128_fu_38306_p2.read());
}

void ShuffleNetV2::thread_w_128_fu_38306_p2() {
    w_128_fu_38306_p2 = (!w127_reg_13397.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(w127_reg_13397.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_w_130_fu_38797_p2() {
    w_130_fu_38797_p2 = (!w129_reg_13474.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w129_reg_13474.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_133_cast_cast_fu_39738_p1() {
    w_133_cast_cast_fu_39738_p1 = esl_zext<13,3>(w_133_fu_39732_p2.read());
}

void ShuffleNetV2::thread_w_133_fu_39732_p2() {
    w_133_fu_39732_p2 = (!w131_reg_13628.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(w131_reg_13628.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_w_134_cast_cast_fu_39637_p1() {
    w_134_cast_cast_fu_39637_p1 = esl_zext<14,3>(w_1_fu_39631_p2.read());
}

void ShuffleNetV2::thread_w_1_fu_39631_p2() {
    w_1_fu_39631_p2 = (!w132_reg_13606.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(w132_reg_13606.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_w_45_cast_cast_fu_15466_p1() {
    w_45_cast_cast_fu_15466_p1 = esl_zext<8,6>(w_46_fu_15460_p2.read());
}

void ShuffleNetV2::thread_w_46_fu_15460_p2() {
    w_46_fu_15460_p2 = (!w_reg_9615.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(w_reg_9615.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void ShuffleNetV2::thread_w_47_fu_15745_p2() {
    w_47_fu_15745_p2 = (!w6_reg_9682.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w6_reg_9682.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_48_cast_cast1_fu_16454_p1() {
    w_48_cast_cast1_fu_16454_p1 = esl_zext<14,5>(w_49_fu_16448_p2.read());
}

void ShuffleNetV2::thread_w_48_cast_cast_fu_16458_p1() {
    w_48_cast_cast_fu_16458_p1 = esl_zext<15,5>(w_49_fu_16448_p2.read());
}

void ShuffleNetV2::thread_w_48_fu_16058_p2() {
    w_48_fu_16058_p2 = (!ap_const_lv2_1.is_01() || !w13_reg_9760.read().is_01())? sc_lv<2>(): (sc_biguint<2>(ap_const_lv2_1) + sc_biguint<2>(w13_reg_9760.read()));
}

void ShuffleNetV2::thread_w_49_fu_16448_p2() {
    w_49_fu_16448_p2 = (!w21_reg_9849.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(w21_reg_9849.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_w_50_cast_cast_fu_17070_p1() {
    w_50_cast_cast_fu_17070_p1 = esl_zext<15,5>(w_51_fu_17064_p2.read());
}

void ShuffleNetV2::thread_w_50_fu_16754_p2() {
    w_50_fu_16754_p2 = (!ap_const_lv2_1.is_01() || !w26_reg_9905.read().is_01())? sc_lv<2>(): (sc_biguint<2>(ap_const_lv2_1) + sc_biguint<2>(w26_reg_9905.read()));
}

void ShuffleNetV2::thread_w_51_cast_cast1_fu_17260_p1() {
    w_51_cast_cast1_fu_17260_p1 = esl_zext<14,5>(w_52_fu_17254_p2.read());
}

void ShuffleNetV2::thread_w_51_cast_cast_fu_17264_p1() {
    w_51_cast_cast_fu_17264_p1 = esl_zext<15,5>(w_52_fu_17254_p2.read());
}

void ShuffleNetV2::thread_w_51_fu_17064_p2() {
    w_51_fu_17064_p2 = (!w34_reg_9994.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(w34_reg_9994.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_w_52_fu_17254_p2() {
    w_52_fu_17254_p2 = (!w37_reg_10027.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(w37_reg_10027.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_w_53_cast_cast_fu_17858_p1() {
    w_53_cast_cast_fu_17858_p1 = esl_zext<15,5>(w_54_fu_17852_p2.read());
}

void ShuffleNetV2::thread_w_53_fu_17560_p2() {
    w_53_fu_17560_p2 = (!ap_const_lv2_1.is_01() || !w42_reg_10083.read().is_01())? sc_lv<2>(): (sc_biguint<2>(ap_const_lv2_1) + sc_biguint<2>(w42_reg_10083.read()));
}

void ShuffleNetV2::thread_w_54_cast_cast1_fu_18048_p1() {
    w_54_cast_cast1_fu_18048_p1 = esl_zext<14,5>(w_55_fu_18042_p2.read());
}

void ShuffleNetV2::thread_w_54_cast_cast_fu_18052_p1() {
    w_54_cast_cast_fu_18052_p1 = esl_zext<15,5>(w_55_fu_18042_p2.read());
}

void ShuffleNetV2::thread_w_54_fu_17852_p2() {
    w_54_fu_17852_p2 = (!w50_reg_10172.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(w50_reg_10172.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_w_55_fu_18042_p2() {
    w_55_fu_18042_p2 = (!w53_reg_10205.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(w53_reg_10205.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_w_56_fu_18372_p2() {
    w_56_fu_18372_p2 = (!ap_const_lv2_1.is_01() || !w55_reg_10261.read().is_01())? sc_lv<2>(): (sc_biguint<2>(ap_const_lv2_1) + sc_biguint<2>(w55_reg_10261.read()));
}

void ShuffleNetV2::thread_w_58_cast_cast_fu_18672_p1() {
    w_58_cast_cast_fu_18672_p1 = esl_zext<15,5>(w_58_fu_18666_p2.read());
}

void ShuffleNetV2::thread_w_58_fu_18666_p2() {
    w_58_fu_18666_p2 = (!w57_reg_10350.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(w57_reg_10350.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_w_60_fu_19156_p2() {
    w_60_fu_19156_p2 = (!w59_reg_10427.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w59_reg_10427.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_62_fu_19941_p2() {
    w_62_fu_19941_p2 = (!w61_reg_10548.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w61_reg_10548.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_64_cast_cast1_fu_20868_p1() {
    w_64_cast_cast1_fu_20868_p1 = esl_zext<14,4>(w_64_fu_20862_p2.read());
}

void ShuffleNetV2::thread_w_64_cast_cast_fu_20872_p1() {
    w_64_cast_cast_fu_20872_p1 = esl_zext<15,4>(w_64_fu_20862_p2.read());
}

void ShuffleNetV2::thread_w_64_fu_20862_p2() {
    w_64_fu_20862_p2 = (!w63_reg_10680.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w63_reg_10680.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_66_fu_21365_p2() {
    w_66_fu_21365_p2 = (!w65_reg_10757.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w65_reg_10757.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_68_cast_cast_fu_22217_p1() {
    w_68_cast_cast_fu_22217_p1 = esl_zext<15,4>(w_68_fu_22211_p2.read());
}

void ShuffleNetV2::thread_w_68_fu_22211_p2() {
    w_68_fu_22211_p2 = (!w67_reg_10889.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w67_reg_10889.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_70_cast_cast1_fu_22415_p1() {
    w_70_cast_cast1_fu_22415_p1 = esl_zext<14,4>(w_70_fu_22409_p2.read());
}

void ShuffleNetV2::thread_w_70_cast_cast_fu_22419_p1() {
    w_70_cast_cast_fu_22419_p1 = esl_zext<15,4>(w_70_fu_22409_p2.read());
}

void ShuffleNetV2::thread_w_70_fu_22409_p2() {
    w_70_fu_22409_p2 = (!w69_reg_10922.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w69_reg_10922.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_72_fu_22912_p2() {
    w_72_fu_22912_p2 = (!w71_reg_10999.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w71_reg_10999.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_74_cast_cast_fu_23768_p1() {
    w_74_cast_cast_fu_23768_p1 = esl_zext<15,4>(w_74_fu_23762_p2.read());
}

void ShuffleNetV2::thread_w_74_fu_23762_p2() {
    w_74_fu_23762_p2 = (!w73_reg_11131.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w73_reg_11131.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_76_cast_cast1_fu_23966_p1() {
    w_76_cast_cast1_fu_23966_p1 = esl_zext<14,4>(w_76_fu_23960_p2.read());
}

void ShuffleNetV2::thread_w_76_cast_cast_fu_23970_p1() {
    w_76_cast_cast_fu_23970_p1 = esl_zext<15,4>(w_76_fu_23960_p2.read());
}

void ShuffleNetV2::thread_w_76_fu_23960_p2() {
    w_76_fu_23960_p2 = (!w75_reg_11164.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w75_reg_11164.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_78_fu_24475_p2() {
    w_78_fu_24475_p2 = (!w77_reg_11241.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w77_reg_11241.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_80_cast_cast_fu_25327_p1() {
    w_80_cast_cast_fu_25327_p1 = esl_zext<15,4>(w_80_fu_25321_p2.read());
}

void ShuffleNetV2::thread_w_80_fu_25321_p2() {
    w_80_fu_25321_p2 = (!w79_reg_11373.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w79_reg_11373.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_82_cast_cast1_fu_25525_p1() {
    w_82_cast_cast1_fu_25525_p1 = esl_zext<14,4>(w_82_fu_25519_p2.read());
}

void ShuffleNetV2::thread_w_82_cast_cast_fu_25529_p1() {
    w_82_cast_cast_fu_25529_p1 = esl_zext<15,4>(w_82_fu_25519_p2.read());
}

void ShuffleNetV2::thread_w_82_fu_25519_p2() {
    w_82_fu_25519_p2 = (!w81_reg_11406.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w81_reg_11406.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_84_fu_26022_p2() {
    w_84_fu_26022_p2 = (!w83_reg_11483.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w83_reg_11483.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_86_cast_cast_fu_26866_p1() {
    w_86_cast_cast_fu_26866_p1 = esl_zext<15,4>(w_86_fu_26860_p2.read());
}

void ShuffleNetV2::thread_w_86_fu_26860_p2() {
    w_86_fu_26860_p2 = (!w85_reg_11615.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w85_reg_11615.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_88_cast_cast1_fu_27064_p1() {
    w_88_cast_cast1_fu_27064_p1 = esl_zext<14,4>(w_88_fu_27058_p2.read());
}

void ShuffleNetV2::thread_w_88_cast_cast_fu_27068_p1() {
    w_88_cast_cast_fu_27068_p1 = esl_zext<15,4>(w_88_fu_27058_p2.read());
}

void ShuffleNetV2::thread_w_88_fu_27058_p2() {
    w_88_fu_27058_p2 = (!w87_reg_11648.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w87_reg_11648.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_90_fu_27561_p2() {
    w_90_fu_27561_p2 = (!w89_reg_11725.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w89_reg_11725.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_92_cast_cast_fu_28413_p1() {
    w_92_cast_cast_fu_28413_p1 = esl_zext<15,4>(w_92_fu_28407_p2.read());
}

void ShuffleNetV2::thread_w_92_fu_28407_p2() {
    w_92_fu_28407_p2 = (!w91_reg_11857.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w91_reg_11857.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_94_cast_cast1_fu_28611_p1() {
    w_94_cast_cast1_fu_28611_p1 = esl_zext<14,4>(w_94_fu_28605_p2.read());
}

void ShuffleNetV2::thread_w_94_cast_cast_fu_28615_p1() {
    w_94_cast_cast_fu_28615_p1 = esl_zext<15,4>(w_94_fu_28605_p2.read());
}

void ShuffleNetV2::thread_w_94_fu_28605_p2() {
    w_94_fu_28605_p2 = (!w93_reg_11890.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w93_reg_11890.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_96_fu_29108_p2() {
    w_96_fu_29108_p2 = (!w95_reg_11967.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w95_reg_11967.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_98_cast_cast_fu_29964_p1() {
    w_98_cast_cast_fu_29964_p1 = esl_zext<15,4>(w_98_fu_29958_p2.read());
}

void ShuffleNetV2::thread_w_98_fu_29958_p2() {
    w_98_fu_29958_p2 = (!w97_reg_12099.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w97_reg_12099.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_cast_cast_fu_15433_p1() {
    w_cast_cast_fu_15433_p1 = esl_zext<8,6>(w_reg_9615.read());
}

void ShuffleNetV2::thread_weights_24_1_3x3_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state332.read())) {
        weights_24_1_3x3_V_address0 = weights_24_1_3x3_V_a_4_reg_42161.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state259.read())) {
        weights_24_1_3x3_V_address0 = weights_24_1_3x3_V_a_3_reg_41672.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state186.read())) {
        weights_24_1_3x3_V_address0 = weights_24_1_3x3_V_a_2_reg_41183.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read())) {
        weights_24_1_3x3_V_address0 = weights_24_1_3x3_V_a_1_reg_40732.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read())) {
        weights_24_1_3x3_V_address0 = weights_24_1_3x3_V_a_reg_40508.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read())) {
        weights_24_1_3x3_V_address0 = grp_subconv_3x3_32_strid_1_fu_14774_weight_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state196.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state269.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state342.read()))) {
        weights_24_1_3x3_V_address0 = grp_subconv_3x3_16_no_re_fu_14604_weight_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        weights_24_1_3x3_V_address0 = grp_subconv_3x3_32_strid_fu_14546_weight_V_address0.read();
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
        weights_24_1_3x3_V_ce0 = grp_subconv_3x3_32_strid_1_fu_14774_weight_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state196.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state269.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state342.read()))) {
        weights_24_1_3x3_V_ce0 = grp_subconv_3x3_16_no_re_fu_14604_weight_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        weights_24_1_3x3_V_ce0 = grp_subconv_3x3_32_strid_fu_14546_weight_V_ce0.read();
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
        weights_24_24_1x1_V_10_address0 = weights_24_24_1x1_V_211_reg_42302.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read())) {
        weights_24_24_1x1_V_10_address0 = weights_24_24_1x1_V_187_reg_42066.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read())) {
        weights_24_24_1x1_V_10_address0 = weights_24_24_1x1_V_163_reg_41813.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read())) {
        weights_24_24_1x1_V_10_address0 = weights_24_24_1x1_V_139_reg_41583.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        weights_24_24_1x1_V_10_address0 = weights_24_24_1x1_V_115_reg_41318.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read())) {
        weights_24_24_1x1_V_10_address0 = weights_24_24_1x1_V_91_reg_41094.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read())) {
        weights_24_24_1x1_V_10_address0 = weights_24_24_1x1_V_67_reg_40879.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        weights_24_24_1x1_V_10_address0 = weights_24_24_1x1_V_43_reg_40649.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        weights_24_24_1x1_V_10_address0 = weights_24_24_1x1_V_19_reg_40424.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_10_address0 = grp_subconv_1x1_16_p_fu_14170_weight_10_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_10_address0 = grp_subconv_1x1_32_p_fu_14066_weight_10_V_address0.read();
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
        weights_24_24_1x1_V_10_ce0 = grp_subconv_1x1_16_p_fu_14170_weight_10_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_10_ce0 = grp_subconv_1x1_32_p_fu_14066_weight_10_V_ce0.read();
    } else {
        weights_24_24_1x1_V_10_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_10_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && 
          esl_seteq<1,5,5>(co_reg_9637.read(), ap_const_lv5_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) && 
          esl_seteq<1,5,5>(co9_reg_9715.read(), ap_const_lv5_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) && 
          esl_seteq<1,5,5>(co16_reg_9793.read(), ap_const_lv5_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) && 
          esl_seteq<1,5,5>(co22_reg_9860.read(), ap_const_lv5_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) && 
          esl_seteq<1,5,5>(co29_reg_9938.read(), ap_const_lv5_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) && 
          esl_seteq<1,5,5>(co38_reg_10038.read(), ap_const_lv5_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) && 
          esl_seteq<1,5,5>(co45_reg_10116.read(), ap_const_lv5_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) && 
          esl_seteq<1,5,5>(co50_reg_10216.read(), ap_const_lv5_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()) && 
          esl_seteq<1,5,5>(co55_reg_10294.read(), ap_const_lv5_A)))) {
        weights_24_24_1x1_V_10_we0 = ap_const_logic_1;
    } else {
        weights_24_24_1x1_V_10_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_11_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read())) {
        weights_24_24_1x1_V_11_address0 = weights_24_24_1x1_V_213_reg_42312.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read())) {
        weights_24_24_1x1_V_11_address0 = weights_24_24_1x1_V_189_reg_42076.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read())) {
        weights_24_24_1x1_V_11_address0 = weights_24_24_1x1_V_165_reg_41823.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read())) {
        weights_24_24_1x1_V_11_address0 = weights_24_24_1x1_V_141_reg_41593.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        weights_24_24_1x1_V_11_address0 = weights_24_24_1x1_V_117_reg_41328.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read())) {
        weights_24_24_1x1_V_11_address0 = weights_24_24_1x1_V_93_reg_41104.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read())) {
        weights_24_24_1x1_V_11_address0 = weights_24_24_1x1_V_69_reg_40889.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        weights_24_24_1x1_V_11_address0 = weights_24_24_1x1_V_45_reg_40659.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        weights_24_24_1x1_V_11_address0 = weights_24_24_1x1_V_21_reg_40434.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_11_address0 = grp_subconv_1x1_16_p_fu_14170_weight_11_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_11_address0 = grp_subconv_1x1_32_p_fu_14066_weight_11_V_address0.read();
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
        weights_24_24_1x1_V_11_ce0 = grp_subconv_1x1_16_p_fu_14170_weight_11_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_11_ce0 = grp_subconv_1x1_32_p_fu_14066_weight_11_V_ce0.read();
    } else {
        weights_24_24_1x1_V_11_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_11_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && 
          esl_seteq<1,5,5>(co_reg_9637.read(), ap_const_lv5_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) && 
          esl_seteq<1,5,5>(co9_reg_9715.read(), ap_const_lv5_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) && 
          esl_seteq<1,5,5>(co16_reg_9793.read(), ap_const_lv5_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) && 
          esl_seteq<1,5,5>(co22_reg_9860.read(), ap_const_lv5_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) && 
          esl_seteq<1,5,5>(co29_reg_9938.read(), ap_const_lv5_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) && 
          esl_seteq<1,5,5>(co38_reg_10038.read(), ap_const_lv5_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) && 
          esl_seteq<1,5,5>(co45_reg_10116.read(), ap_const_lv5_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) && 
          esl_seteq<1,5,5>(co50_reg_10216.read(), ap_const_lv5_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()) && 
          esl_seteq<1,5,5>(co55_reg_10294.read(), ap_const_lv5_B)))) {
        weights_24_24_1x1_V_11_we0 = ap_const_logic_1;
    } else {
        weights_24_24_1x1_V_11_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_12_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read())) {
        weights_24_24_1x1_V_12_address0 = weights_24_24_1x1_V_215_reg_42322.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read())) {
        weights_24_24_1x1_V_12_address0 = weights_24_24_1x1_V_191_reg_42086.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read())) {
        weights_24_24_1x1_V_12_address0 = weights_24_24_1x1_V_167_reg_41833.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read())) {
        weights_24_24_1x1_V_12_address0 = weights_24_24_1x1_V_143_reg_41603.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        weights_24_24_1x1_V_12_address0 = weights_24_24_1x1_V_119_reg_41338.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read())) {
        weights_24_24_1x1_V_12_address0 = weights_24_24_1x1_V_95_reg_41114.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read())) {
        weights_24_24_1x1_V_12_address0 = weights_24_24_1x1_V_71_reg_40899.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        weights_24_24_1x1_V_12_address0 = weights_24_24_1x1_V_47_reg_40669.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        weights_24_24_1x1_V_12_address0 = weights_24_24_1x1_V_23_reg_40444.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_12_address0 = grp_subconv_1x1_16_p_fu_14170_weight_12_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_12_address0 = grp_subconv_1x1_32_p_fu_14066_weight_12_V_address0.read();
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
        weights_24_24_1x1_V_12_ce0 = grp_subconv_1x1_16_p_fu_14170_weight_12_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_12_ce0 = grp_subconv_1x1_32_p_fu_14066_weight_12_V_ce0.read();
    } else {
        weights_24_24_1x1_V_12_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_12_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && 
          esl_seteq<1,5,5>(co_reg_9637.read(), ap_const_lv5_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) && 
          esl_seteq<1,5,5>(co9_reg_9715.read(), ap_const_lv5_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) && 
          esl_seteq<1,5,5>(co16_reg_9793.read(), ap_const_lv5_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) && 
          esl_seteq<1,5,5>(co22_reg_9860.read(), ap_const_lv5_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) && 
          esl_seteq<1,5,5>(co29_reg_9938.read(), ap_const_lv5_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) && 
          esl_seteq<1,5,5>(co38_reg_10038.read(), ap_const_lv5_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) && 
          esl_seteq<1,5,5>(co45_reg_10116.read(), ap_const_lv5_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) && 
          esl_seteq<1,5,5>(co50_reg_10216.read(), ap_const_lv5_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()) && 
          esl_seteq<1,5,5>(co55_reg_10294.read(), ap_const_lv5_C)))) {
        weights_24_24_1x1_V_12_we0 = ap_const_logic_1;
    } else {
        weights_24_24_1x1_V_12_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_13_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read())) {
        weights_24_24_1x1_V_13_address0 = weights_24_24_1x1_V_214_reg_42317.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read())) {
        weights_24_24_1x1_V_13_address0 = weights_24_24_1x1_V_190_reg_42081.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read())) {
        weights_24_24_1x1_V_13_address0 = weights_24_24_1x1_V_166_reg_41828.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read())) {
        weights_24_24_1x1_V_13_address0 = weights_24_24_1x1_V_142_reg_41598.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        weights_24_24_1x1_V_13_address0 = weights_24_24_1x1_V_118_reg_41333.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read())) {
        weights_24_24_1x1_V_13_address0 = weights_24_24_1x1_V_94_reg_41109.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read())) {
        weights_24_24_1x1_V_13_address0 = weights_24_24_1x1_V_70_reg_40894.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        weights_24_24_1x1_V_13_address0 = weights_24_24_1x1_V_46_reg_40664.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        weights_24_24_1x1_V_13_address0 = weights_24_24_1x1_V_22_reg_40439.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_13_address0 = grp_subconv_1x1_16_p_fu_14170_weight_13_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_13_address0 = grp_subconv_1x1_32_p_fu_14066_weight_13_V_address0.read();
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
        weights_24_24_1x1_V_13_ce0 = grp_subconv_1x1_16_p_fu_14170_weight_13_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_13_ce0 = grp_subconv_1x1_32_p_fu_14066_weight_13_V_ce0.read();
    } else {
        weights_24_24_1x1_V_13_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_13_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && 
          esl_seteq<1,5,5>(co_reg_9637.read(), ap_const_lv5_D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) && 
          esl_seteq<1,5,5>(co9_reg_9715.read(), ap_const_lv5_D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) && 
          esl_seteq<1,5,5>(co16_reg_9793.read(), ap_const_lv5_D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) && 
          esl_seteq<1,5,5>(co22_reg_9860.read(), ap_const_lv5_D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) && 
          esl_seteq<1,5,5>(co29_reg_9938.read(), ap_const_lv5_D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) && 
          esl_seteq<1,5,5>(co38_reg_10038.read(), ap_const_lv5_D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) && 
          esl_seteq<1,5,5>(co45_reg_10116.read(), ap_const_lv5_D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) && 
          esl_seteq<1,5,5>(co50_reg_10216.read(), ap_const_lv5_D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()) && 
          esl_seteq<1,5,5>(co55_reg_10294.read(), ap_const_lv5_D)))) {
        weights_24_24_1x1_V_13_we0 = ap_const_logic_1;
    } else {
        weights_24_24_1x1_V_13_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_14_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read())) {
        weights_24_24_1x1_V_14_address0 = weights_24_24_1x1_V_201_reg_42252.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read())) {
        weights_24_24_1x1_V_14_address0 = weights_24_24_1x1_V_177_reg_42016.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read())) {
        weights_24_24_1x1_V_14_address0 = weights_24_24_1x1_V_153_reg_41763.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read())) {
        weights_24_24_1x1_V_14_address0 = weights_24_24_1x1_V_129_reg_41533.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        weights_24_24_1x1_V_14_address0 = weights_24_24_1x1_V_105_reg_41268.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read())) {
        weights_24_24_1x1_V_14_address0 = weights_24_24_1x1_V_81_reg_41044.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read())) {
        weights_24_24_1x1_V_14_address0 = weights_24_24_1x1_V_57_reg_40829.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        weights_24_24_1x1_V_14_address0 = weights_24_24_1x1_V_33_reg_40599.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        weights_24_24_1x1_V_14_address0 = weights_24_24_1x1_V_9_reg_40374.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_14_address0 = grp_subconv_1x1_16_p_fu_14170_weight_14_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_14_address0 = grp_subconv_1x1_32_p_fu_14066_weight_14_V_address0.read();
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
        weights_24_24_1x1_V_14_ce0 = grp_subconv_1x1_16_p_fu_14170_weight_14_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_14_ce0 = grp_subconv_1x1_32_p_fu_14066_weight_14_V_ce0.read();
    } else {
        weights_24_24_1x1_V_14_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_14_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && 
          esl_seteq<1,5,5>(co_reg_9637.read(), ap_const_lv5_E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) && 
          esl_seteq<1,5,5>(co9_reg_9715.read(), ap_const_lv5_E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) && 
          esl_seteq<1,5,5>(co16_reg_9793.read(), ap_const_lv5_E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) && 
          esl_seteq<1,5,5>(co22_reg_9860.read(), ap_const_lv5_E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) && 
          esl_seteq<1,5,5>(co29_reg_9938.read(), ap_const_lv5_E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) && 
          esl_seteq<1,5,5>(co38_reg_10038.read(), ap_const_lv5_E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) && 
          esl_seteq<1,5,5>(co45_reg_10116.read(), ap_const_lv5_E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) && 
          esl_seteq<1,5,5>(co50_reg_10216.read(), ap_const_lv5_E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()) && 
          esl_seteq<1,5,5>(co55_reg_10294.read(), ap_const_lv5_E)))) {
        weights_24_24_1x1_V_14_we0 = ap_const_logic_1;
    } else {
        weights_24_24_1x1_V_14_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_15_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read())) {
        weights_24_24_1x1_V_15_address0 = weights_24_24_1x1_V_203_reg_42262.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read())) {
        weights_24_24_1x1_V_15_address0 = weights_24_24_1x1_V_179_reg_42026.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read())) {
        weights_24_24_1x1_V_15_address0 = weights_24_24_1x1_V_155_reg_41773.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read())) {
        weights_24_24_1x1_V_15_address0 = weights_24_24_1x1_V_131_reg_41543.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        weights_24_24_1x1_V_15_address0 = weights_24_24_1x1_V_107_reg_41278.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read())) {
        weights_24_24_1x1_V_15_address0 = weights_24_24_1x1_V_83_reg_41054.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read())) {
        weights_24_24_1x1_V_15_address0 = weights_24_24_1x1_V_59_reg_40839.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        weights_24_24_1x1_V_15_address0 = weights_24_24_1x1_V_35_reg_40609.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        weights_24_24_1x1_V_15_address0 = weights_24_24_1x1_V_11_reg_40384.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_15_address0 = grp_subconv_1x1_16_p_fu_14170_weight_15_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_15_address0 = grp_subconv_1x1_32_p_fu_14066_weight_15_V_address0.read();
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
        weights_24_24_1x1_V_15_ce0 = grp_subconv_1x1_16_p_fu_14170_weight_15_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_15_ce0 = grp_subconv_1x1_32_p_fu_14066_weight_15_V_ce0.read();
    } else {
        weights_24_24_1x1_V_15_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_15_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && 
          esl_seteq<1,5,5>(co_reg_9637.read(), ap_const_lv5_F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) && 
          esl_seteq<1,5,5>(co9_reg_9715.read(), ap_const_lv5_F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) && 
          esl_seteq<1,5,5>(co16_reg_9793.read(), ap_const_lv5_F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) && 
          esl_seteq<1,5,5>(co22_reg_9860.read(), ap_const_lv5_F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) && 
          esl_seteq<1,5,5>(co29_reg_9938.read(), ap_const_lv5_F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) && 
          esl_seteq<1,5,5>(co38_reg_10038.read(), ap_const_lv5_F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) && 
          esl_seteq<1,5,5>(co45_reg_10116.read(), ap_const_lv5_F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) && 
          esl_seteq<1,5,5>(co50_reg_10216.read(), ap_const_lv5_F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()) && 
          esl_seteq<1,5,5>(co55_reg_10294.read(), ap_const_lv5_F)))) {
        weights_24_24_1x1_V_15_we0 = ap_const_logic_1;
    } else {
        weights_24_24_1x1_V_15_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_16_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read())) {
        weights_24_24_1x1_V_16_address0 = weights_24_24_1x1_V_205_reg_42272.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read())) {
        weights_24_24_1x1_V_16_address0 = weights_24_24_1x1_V_181_reg_42036.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read())) {
        weights_24_24_1x1_V_16_address0 = weights_24_24_1x1_V_157_reg_41783.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read())) {
        weights_24_24_1x1_V_16_address0 = weights_24_24_1x1_V_133_reg_41553.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        weights_24_24_1x1_V_16_address0 = weights_24_24_1x1_V_109_reg_41288.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read())) {
        weights_24_24_1x1_V_16_address0 = weights_24_24_1x1_V_85_reg_41064.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read())) {
        weights_24_24_1x1_V_16_address0 = weights_24_24_1x1_V_61_reg_40849.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        weights_24_24_1x1_V_16_address0 = weights_24_24_1x1_V_37_reg_40619.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        weights_24_24_1x1_V_16_address0 = weights_24_24_1x1_V_13_reg_40394.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_16_address0 = grp_subconv_1x1_16_p_fu_14170_weight_16_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_16_address0 = grp_subconv_1x1_32_p_fu_14066_weight_16_V_address0.read();
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
        weights_24_24_1x1_V_16_ce0 = grp_subconv_1x1_16_p_fu_14170_weight_16_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_16_ce0 = grp_subconv_1x1_32_p_fu_14066_weight_16_V_ce0.read();
    } else {
        weights_24_24_1x1_V_16_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_16_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && 
          esl_seteq<1,5,5>(co_reg_9637.read(), ap_const_lv5_10)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) && 
          esl_seteq<1,5,5>(co9_reg_9715.read(), ap_const_lv5_10)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) && 
          esl_seteq<1,5,5>(co16_reg_9793.read(), ap_const_lv5_10)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) && 
          esl_seteq<1,5,5>(co22_reg_9860.read(), ap_const_lv5_10)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) && 
          esl_seteq<1,5,5>(co29_reg_9938.read(), ap_const_lv5_10)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) && 
          esl_seteq<1,5,5>(co38_reg_10038.read(), ap_const_lv5_10)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) && 
          esl_seteq<1,5,5>(co45_reg_10116.read(), ap_const_lv5_10)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) && 
          esl_seteq<1,5,5>(co50_reg_10216.read(), ap_const_lv5_10)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()) && 
          esl_seteq<1,5,5>(co55_reg_10294.read(), ap_const_lv5_10)))) {
        weights_24_24_1x1_V_16_we0 = ap_const_logic_1;
    } else {
        weights_24_24_1x1_V_16_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_17_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read())) {
        weights_24_24_1x1_V_17_address0 = weights_24_24_1x1_V_206_reg_42277.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read())) {
        weights_24_24_1x1_V_17_address0 = weights_24_24_1x1_V_182_reg_42041.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read())) {
        weights_24_24_1x1_V_17_address0 = weights_24_24_1x1_V_158_reg_41788.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read())) {
        weights_24_24_1x1_V_17_address0 = weights_24_24_1x1_V_134_reg_41558.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        weights_24_24_1x1_V_17_address0 = weights_24_24_1x1_V_110_reg_41293.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read())) {
        weights_24_24_1x1_V_17_address0 = weights_24_24_1x1_V_86_reg_41069.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read())) {
        weights_24_24_1x1_V_17_address0 = weights_24_24_1x1_V_62_reg_40854.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        weights_24_24_1x1_V_17_address0 = weights_24_24_1x1_V_38_reg_40624.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        weights_24_24_1x1_V_17_address0 = weights_24_24_1x1_V_14_reg_40399.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_17_address0 = grp_subconv_1x1_16_p_fu_14170_weight_17_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_17_address0 = grp_subconv_1x1_32_p_fu_14066_weight_17_V_address0.read();
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
        weights_24_24_1x1_V_17_ce0 = grp_subconv_1x1_16_p_fu_14170_weight_17_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_17_ce0 = grp_subconv_1x1_32_p_fu_14066_weight_17_V_ce0.read();
    } else {
        weights_24_24_1x1_V_17_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_17_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && 
          esl_seteq<1,5,5>(co_reg_9637.read(), ap_const_lv5_11)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) && 
          esl_seteq<1,5,5>(co9_reg_9715.read(), ap_const_lv5_11)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) && 
          esl_seteq<1,5,5>(co16_reg_9793.read(), ap_const_lv5_11)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) && 
          esl_seteq<1,5,5>(co22_reg_9860.read(), ap_const_lv5_11)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) && 
          esl_seteq<1,5,5>(co29_reg_9938.read(), ap_const_lv5_11)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) && 
          esl_seteq<1,5,5>(co38_reg_10038.read(), ap_const_lv5_11)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) && 
          esl_seteq<1,5,5>(co45_reg_10116.read(), ap_const_lv5_11)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) && 
          esl_seteq<1,5,5>(co50_reg_10216.read(), ap_const_lv5_11)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()) && 
          esl_seteq<1,5,5>(co55_reg_10294.read(), ap_const_lv5_11)))) {
        weights_24_24_1x1_V_17_we0 = ap_const_logic_1;
    } else {
        weights_24_24_1x1_V_17_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_18_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read())) {
        weights_24_24_1x1_V_18_address0 = weights_24_24_1x1_V_197_reg_42232.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read())) {
        weights_24_24_1x1_V_18_address0 = weights_24_24_1x1_V_173_reg_41996.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read())) {
        weights_24_24_1x1_V_18_address0 = weights_24_24_1x1_V_149_reg_41743.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read())) {
        weights_24_24_1x1_V_18_address0 = weights_24_24_1x1_V_125_reg_41513.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        weights_24_24_1x1_V_18_address0 = weights_24_24_1x1_V_101_reg_41248.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read())) {
        weights_24_24_1x1_V_18_address0 = weights_24_24_1x1_V_77_reg_41024.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read())) {
        weights_24_24_1x1_V_18_address0 = weights_24_24_1x1_V_53_reg_40809.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        weights_24_24_1x1_V_18_address0 = weights_24_24_1x1_V_29_reg_40579.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        weights_24_24_1x1_V_18_address0 = weights_24_24_1x1_V_5_reg_40354.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_18_address0 = grp_subconv_1x1_16_p_fu_14170_weight_18_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_18_address0 = grp_subconv_1x1_32_p_fu_14066_weight_18_V_address0.read();
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
        weights_24_24_1x1_V_18_ce0 = grp_subconv_1x1_16_p_fu_14170_weight_18_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_18_ce0 = grp_subconv_1x1_32_p_fu_14066_weight_18_V_ce0.read();
    } else {
        weights_24_24_1x1_V_18_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_18_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && 
          esl_seteq<1,5,5>(co_reg_9637.read(), ap_const_lv5_12)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) && 
          esl_seteq<1,5,5>(co9_reg_9715.read(), ap_const_lv5_12)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) && 
          esl_seteq<1,5,5>(co16_reg_9793.read(), ap_const_lv5_12)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) && 
          esl_seteq<1,5,5>(co22_reg_9860.read(), ap_const_lv5_12)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) && 
          esl_seteq<1,5,5>(co29_reg_9938.read(), ap_const_lv5_12)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) && 
          esl_seteq<1,5,5>(co38_reg_10038.read(), ap_const_lv5_12)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) && 
          esl_seteq<1,5,5>(co45_reg_10116.read(), ap_const_lv5_12)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) && 
          esl_seteq<1,5,5>(co50_reg_10216.read(), ap_const_lv5_12)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()) && 
          esl_seteq<1,5,5>(co55_reg_10294.read(), ap_const_lv5_12)))) {
        weights_24_24_1x1_V_18_we0 = ap_const_logic_1;
    } else {
        weights_24_24_1x1_V_18_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_19_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read())) {
        weights_24_24_1x1_V_19_address0 = weights_24_24_1x1_V_202_reg_42257.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read())) {
        weights_24_24_1x1_V_19_address0 = weights_24_24_1x1_V_178_reg_42021.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read())) {
        weights_24_24_1x1_V_19_address0 = weights_24_24_1x1_V_154_reg_41768.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read())) {
        weights_24_24_1x1_V_19_address0 = weights_24_24_1x1_V_130_reg_41538.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        weights_24_24_1x1_V_19_address0 = weights_24_24_1x1_V_106_reg_41273.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read())) {
        weights_24_24_1x1_V_19_address0 = weights_24_24_1x1_V_82_reg_41049.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read())) {
        weights_24_24_1x1_V_19_address0 = weights_24_24_1x1_V_58_reg_40834.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        weights_24_24_1x1_V_19_address0 = weights_24_24_1x1_V_34_reg_40604.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        weights_24_24_1x1_V_19_address0 = weights_24_24_1x1_V_10_reg_40379.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_19_address0 = grp_subconv_1x1_16_p_fu_14170_weight_19_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_19_address0 = grp_subconv_1x1_32_p_fu_14066_weight_19_V_address0.read();
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
        weights_24_24_1x1_V_19_ce0 = grp_subconv_1x1_16_p_fu_14170_weight_19_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_19_ce0 = grp_subconv_1x1_32_p_fu_14066_weight_19_V_ce0.read();
    } else {
        weights_24_24_1x1_V_19_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_19_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && 
          esl_seteq<1,5,5>(co_reg_9637.read(), ap_const_lv5_13)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) && 
          esl_seteq<1,5,5>(co9_reg_9715.read(), ap_const_lv5_13)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) && 
          esl_seteq<1,5,5>(co16_reg_9793.read(), ap_const_lv5_13)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) && 
          esl_seteq<1,5,5>(co22_reg_9860.read(), ap_const_lv5_13)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) && 
          esl_seteq<1,5,5>(co29_reg_9938.read(), ap_const_lv5_13)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) && 
          esl_seteq<1,5,5>(co38_reg_10038.read(), ap_const_lv5_13)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) && 
          esl_seteq<1,5,5>(co45_reg_10116.read(), ap_const_lv5_13)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) && 
          esl_seteq<1,5,5>(co50_reg_10216.read(), ap_const_lv5_13)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()) && 
          esl_seteq<1,5,5>(co55_reg_10294.read(), ap_const_lv5_13)))) {
        weights_24_24_1x1_V_19_we0 = ap_const_logic_1;
    } else {
        weights_24_24_1x1_V_19_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read())) {
        weights_24_24_1x1_V_1_address0 = weights_24_24_1x1_V_210_reg_42297.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read())) {
        weights_24_24_1x1_V_1_address0 = weights_24_24_1x1_V_186_reg_42061.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read())) {
        weights_24_24_1x1_V_1_address0 = weights_24_24_1x1_V_162_reg_41808.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read())) {
        weights_24_24_1x1_V_1_address0 = weights_24_24_1x1_V_138_reg_41578.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        weights_24_24_1x1_V_1_address0 = weights_24_24_1x1_V_114_reg_41313.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read())) {
        weights_24_24_1x1_V_1_address0 = weights_24_24_1x1_V_90_reg_41089.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read())) {
        weights_24_24_1x1_V_1_address0 = weights_24_24_1x1_V_66_reg_40874.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        weights_24_24_1x1_V_1_address0 = weights_24_24_1x1_V_42_reg_40644.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        weights_24_24_1x1_V_1_address0 = weights_24_24_1x1_V_18_reg_40419.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_1_address0 = grp_subconv_1x1_16_p_fu_14170_weight_1_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_1_address0 = grp_subconv_1x1_32_p_fu_14066_weight_1_V_address0.read();
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
        weights_24_24_1x1_V_1_ce0 = grp_subconv_1x1_16_p_fu_14170_weight_1_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_1_ce0 = grp_subconv_1x1_32_p_fu_14066_weight_1_V_ce0.read();
    } else {
        weights_24_24_1x1_V_1_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_1_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && 
          esl_seteq<1,5,5>(co_reg_9637.read(), ap_const_lv5_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) && 
          esl_seteq<1,5,5>(co9_reg_9715.read(), ap_const_lv5_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) && 
          esl_seteq<1,5,5>(co16_reg_9793.read(), ap_const_lv5_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) && 
          esl_seteq<1,5,5>(co22_reg_9860.read(), ap_const_lv5_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) && 
          esl_seteq<1,5,5>(co29_reg_9938.read(), ap_const_lv5_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) && 
          esl_seteq<1,5,5>(co38_reg_10038.read(), ap_const_lv5_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) && 
          esl_seteq<1,5,5>(co45_reg_10116.read(), ap_const_lv5_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) && 
          esl_seteq<1,5,5>(co50_reg_10216.read(), ap_const_lv5_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()) && 
          esl_seteq<1,5,5>(co55_reg_10294.read(), ap_const_lv5_1)))) {
        weights_24_24_1x1_V_1_we0 = ap_const_logic_1;
    } else {
        weights_24_24_1x1_V_1_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_20_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read())) {
        weights_24_24_1x1_V_20_address0 = weights_24_24_1x1_V_194_reg_42217.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read())) {
        weights_24_24_1x1_V_20_address0 = weights_24_24_1x1_V_170_reg_41981.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read())) {
        weights_24_24_1x1_V_20_address0 = weights_24_24_1x1_V_146_reg_41728.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read())) {
        weights_24_24_1x1_V_20_address0 = weights_24_24_1x1_V_122_reg_41498.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        weights_24_24_1x1_V_20_address0 = weights_24_24_1x1_V_98_reg_41233.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read())) {
        weights_24_24_1x1_V_20_address0 = weights_24_24_1x1_V_74_reg_41009.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read())) {
        weights_24_24_1x1_V_20_address0 = weights_24_24_1x1_V_50_reg_40794.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        weights_24_24_1x1_V_20_address0 = weights_24_24_1x1_V_26_reg_40564.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        weights_24_24_1x1_V_20_address0 = weights_24_24_1x1_V_2_reg_40339.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_20_address0 = grp_subconv_1x1_16_p_fu_14170_weight_20_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_20_address0 = grp_subconv_1x1_32_p_fu_14066_weight_20_V_address0.read();
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
        weights_24_24_1x1_V_20_ce0 = grp_subconv_1x1_16_p_fu_14170_weight_20_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_20_ce0 = grp_subconv_1x1_32_p_fu_14066_weight_20_V_ce0.read();
    } else {
        weights_24_24_1x1_V_20_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_20_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && 
          esl_seteq<1,5,5>(co_reg_9637.read(), ap_const_lv5_14)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) && 
          esl_seteq<1,5,5>(co9_reg_9715.read(), ap_const_lv5_14)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) && 
          esl_seteq<1,5,5>(co16_reg_9793.read(), ap_const_lv5_14)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) && 
          esl_seteq<1,5,5>(co22_reg_9860.read(), ap_const_lv5_14)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) && 
          esl_seteq<1,5,5>(co29_reg_9938.read(), ap_const_lv5_14)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) && 
          esl_seteq<1,5,5>(co38_reg_10038.read(), ap_const_lv5_14)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) && 
          esl_seteq<1,5,5>(co45_reg_10116.read(), ap_const_lv5_14)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) && 
          esl_seteq<1,5,5>(co50_reg_10216.read(), ap_const_lv5_14)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()) && 
          esl_seteq<1,5,5>(co55_reg_10294.read(), ap_const_lv5_14)))) {
        weights_24_24_1x1_V_20_we0 = ap_const_logic_1;
    } else {
        weights_24_24_1x1_V_20_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_21_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read())) {
        weights_24_24_1x1_V_21_address0 = weights_24_24_1x1_V_204_reg_42267.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read())) {
        weights_24_24_1x1_V_21_address0 = weights_24_24_1x1_V_180_reg_42031.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read())) {
        weights_24_24_1x1_V_21_address0 = weights_24_24_1x1_V_156_reg_41778.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read())) {
        weights_24_24_1x1_V_21_address0 = weights_24_24_1x1_V_132_reg_41548.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        weights_24_24_1x1_V_21_address0 = weights_24_24_1x1_V_108_reg_41283.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read())) {
        weights_24_24_1x1_V_21_address0 = weights_24_24_1x1_V_84_reg_41059.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read())) {
        weights_24_24_1x1_V_21_address0 = weights_24_24_1x1_V_60_reg_40844.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        weights_24_24_1x1_V_21_address0 = weights_24_24_1x1_V_36_reg_40614.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        weights_24_24_1x1_V_21_address0 = weights_24_24_1x1_V_12_reg_40389.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_21_address0 = grp_subconv_1x1_16_p_fu_14170_weight_21_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_21_address0 = grp_subconv_1x1_32_p_fu_14066_weight_21_V_address0.read();
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
        weights_24_24_1x1_V_21_ce0 = grp_subconv_1x1_16_p_fu_14170_weight_21_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_21_ce0 = grp_subconv_1x1_32_p_fu_14066_weight_21_V_ce0.read();
    } else {
        weights_24_24_1x1_V_21_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_21_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && 
          esl_seteq<1,5,5>(co_reg_9637.read(), ap_const_lv5_15)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) && 
          esl_seteq<1,5,5>(co9_reg_9715.read(), ap_const_lv5_15)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) && 
          esl_seteq<1,5,5>(co16_reg_9793.read(), ap_const_lv5_15)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) && 
          esl_seteq<1,5,5>(co22_reg_9860.read(), ap_const_lv5_15)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) && 
          esl_seteq<1,5,5>(co29_reg_9938.read(), ap_const_lv5_15)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) && 
          esl_seteq<1,5,5>(co38_reg_10038.read(), ap_const_lv5_15)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) && 
          esl_seteq<1,5,5>(co45_reg_10116.read(), ap_const_lv5_15)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) && 
          esl_seteq<1,5,5>(co50_reg_10216.read(), ap_const_lv5_15)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()) && 
          esl_seteq<1,5,5>(co55_reg_10294.read(), ap_const_lv5_15)))) {
        weights_24_24_1x1_V_21_we0 = ap_const_logic_1;
    } else {
        weights_24_24_1x1_V_21_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_22_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read())) {
        weights_24_24_1x1_V_22_address0 = weights_24_24_1x1_V_195_reg_42222.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read())) {
        weights_24_24_1x1_V_22_address0 = weights_24_24_1x1_V_171_reg_41986.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read())) {
        weights_24_24_1x1_V_22_address0 = weights_24_24_1x1_V_147_reg_41733.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read())) {
        weights_24_24_1x1_V_22_address0 = weights_24_24_1x1_V_123_reg_41503.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        weights_24_24_1x1_V_22_address0 = weights_24_24_1x1_V_99_reg_41238.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read())) {
        weights_24_24_1x1_V_22_address0 = weights_24_24_1x1_V_75_reg_41014.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read())) {
        weights_24_24_1x1_V_22_address0 = weights_24_24_1x1_V_51_reg_40799.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        weights_24_24_1x1_V_22_address0 = weights_24_24_1x1_V_27_reg_40569.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        weights_24_24_1x1_V_22_address0 = weights_24_24_1x1_V_3_reg_40344.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_22_address0 = grp_subconv_1x1_16_p_fu_14170_weight_22_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_22_address0 = grp_subconv_1x1_32_p_fu_14066_weight_22_V_address0.read();
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
        weights_24_24_1x1_V_22_ce0 = grp_subconv_1x1_16_p_fu_14170_weight_22_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_22_ce0 = grp_subconv_1x1_32_p_fu_14066_weight_22_V_ce0.read();
    } else {
        weights_24_24_1x1_V_22_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_22_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && 
          esl_seteq<1,5,5>(co_reg_9637.read(), ap_const_lv5_16)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) && 
          esl_seteq<1,5,5>(co9_reg_9715.read(), ap_const_lv5_16)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) && 
          esl_seteq<1,5,5>(co16_reg_9793.read(), ap_const_lv5_16)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) && 
          esl_seteq<1,5,5>(co22_reg_9860.read(), ap_const_lv5_16)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) && 
          esl_seteq<1,5,5>(co29_reg_9938.read(), ap_const_lv5_16)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) && 
          esl_seteq<1,5,5>(co38_reg_10038.read(), ap_const_lv5_16)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) && 
          esl_seteq<1,5,5>(co45_reg_10116.read(), ap_const_lv5_16)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) && 
          esl_seteq<1,5,5>(co50_reg_10216.read(), ap_const_lv5_16)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()) && 
          esl_seteq<1,5,5>(co55_reg_10294.read(), ap_const_lv5_16)))) {
        weights_24_24_1x1_V_22_we0 = ap_const_logic_1;
    } else {
        weights_24_24_1x1_V_22_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_23_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read())) {
        weights_24_24_1x1_V_23_address0 = weights_24_24_1x1_V_198_reg_42237.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read())) {
        weights_24_24_1x1_V_23_address0 = weights_24_24_1x1_V_174_reg_42001.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read())) {
        weights_24_24_1x1_V_23_address0 = weights_24_24_1x1_V_150_reg_41748.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read())) {
        weights_24_24_1x1_V_23_address0 = weights_24_24_1x1_V_126_reg_41518.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        weights_24_24_1x1_V_23_address0 = weights_24_24_1x1_V_102_reg_41253.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read())) {
        weights_24_24_1x1_V_23_address0 = weights_24_24_1x1_V_78_reg_41029.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read())) {
        weights_24_24_1x1_V_23_address0 = weights_24_24_1x1_V_54_reg_40814.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        weights_24_24_1x1_V_23_address0 = weights_24_24_1x1_V_30_reg_40584.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        weights_24_24_1x1_V_23_address0 = weights_24_24_1x1_V_6_reg_40359.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_23_address0 = grp_subconv_1x1_16_p_fu_14170_weight_23_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_23_address0 = grp_subconv_1x1_32_p_fu_14066_weight_23_V_address0.read();
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
        weights_24_24_1x1_V_23_ce0 = grp_subconv_1x1_16_p_fu_14170_weight_23_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_23_ce0 = grp_subconv_1x1_32_p_fu_14066_weight_23_V_ce0.read();
    } else {
        weights_24_24_1x1_V_23_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_23_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && 
          !esl_seteq<1,5,5>(ap_const_lv5_0, co_reg_9637.read()) && 
          !esl_seteq<1,5,5>(co_reg_9637.read(), ap_const_lv5_1) && 
          !esl_seteq<1,5,5>(co_reg_9637.read(), ap_const_lv5_2) && 
          !esl_seteq<1,5,5>(co_reg_9637.read(), ap_const_lv5_3) && 
          !esl_seteq<1,5,5>(co_reg_9637.read(), ap_const_lv5_4) && 
          !esl_seteq<1,5,5>(co_reg_9637.read(), ap_const_lv5_5) && 
          !esl_seteq<1,5,5>(co_reg_9637.read(), ap_const_lv5_6) && 
          !esl_seteq<1,5,5>(co_reg_9637.read(), ap_const_lv5_7) && 
          !esl_seteq<1,5,5>(co_reg_9637.read(), ap_const_lv5_8) && 
          !esl_seteq<1,5,5>(co_reg_9637.read(), ap_const_lv5_9) && 
          !esl_seteq<1,5,5>(co_reg_9637.read(), ap_const_lv5_A) && 
          !esl_seteq<1,5,5>(co_reg_9637.read(), ap_const_lv5_B) && 
          !esl_seteq<1,5,5>(co_reg_9637.read(), ap_const_lv5_C) && 
          !esl_seteq<1,5,5>(co_reg_9637.read(), ap_const_lv5_D) && 
          !esl_seteq<1,5,5>(co_reg_9637.read(), ap_const_lv5_E) && 
          !esl_seteq<1,5,5>(co_reg_9637.read(), ap_const_lv5_F) && 
          !esl_seteq<1,5,5>(co_reg_9637.read(), ap_const_lv5_10) && 
          !esl_seteq<1,5,5>(co_reg_9637.read(), ap_const_lv5_11) && 
          !esl_seteq<1,5,5>(co_reg_9637.read(), ap_const_lv5_12) && 
          !esl_seteq<1,5,5>(co_reg_9637.read(), ap_const_lv5_13) && 
          !esl_seteq<1,5,5>(co_reg_9637.read(), ap_const_lv5_14) && 
          !esl_seteq<1,5,5>(co_reg_9637.read(), ap_const_lv5_15) && 
          !esl_seteq<1,5,5>(co_reg_9637.read(), ap_const_lv5_16)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) && 
          !esl_seteq<1,5,5>(ap_const_lv5_0, co9_reg_9715.read()) && 
          !esl_seteq<1,5,5>(co9_reg_9715.read(), ap_const_lv5_1) && 
          !esl_seteq<1,5,5>(co9_reg_9715.read(), ap_const_lv5_2) && 
          !esl_seteq<1,5,5>(co9_reg_9715.read(), ap_const_lv5_3) && 
          !esl_seteq<1,5,5>(co9_reg_9715.read(), ap_const_lv5_4) && 
          !esl_seteq<1,5,5>(co9_reg_9715.read(), ap_const_lv5_5) && 
          !esl_seteq<1,5,5>(co9_reg_9715.read(), ap_const_lv5_6) && 
          !esl_seteq<1,5,5>(co9_reg_9715.read(), ap_const_lv5_7) && 
          !esl_seteq<1,5,5>(co9_reg_9715.read(), ap_const_lv5_8) && 
          !esl_seteq<1,5,5>(co9_reg_9715.read(), ap_const_lv5_9) && 
          !esl_seteq<1,5,5>(co9_reg_9715.read(), ap_const_lv5_A) && 
          !esl_seteq<1,5,5>(co9_reg_9715.read(), ap_const_lv5_B) && 
          !esl_seteq<1,5,5>(co9_reg_9715.read(), ap_const_lv5_C) && 
          !esl_seteq<1,5,5>(co9_reg_9715.read(), ap_const_lv5_D) && 
          !esl_seteq<1,5,5>(co9_reg_9715.read(), ap_const_lv5_E) && 
          !esl_seteq<1,5,5>(co9_reg_9715.read(), ap_const_lv5_F) && 
          !esl_seteq<1,5,5>(co9_reg_9715.read(), ap_const_lv5_10) && 
          !esl_seteq<1,5,5>(co9_reg_9715.read(), ap_const_lv5_11) && 
          !esl_seteq<1,5,5>(co9_reg_9715.read(), ap_const_lv5_12) && 
          !esl_seteq<1,5,5>(co9_reg_9715.read(), ap_const_lv5_13) && 
          !esl_seteq<1,5,5>(co9_reg_9715.read(), ap_const_lv5_14) && 
          !esl_seteq<1,5,5>(co9_reg_9715.read(), ap_const_lv5_15) && 
          !esl_seteq<1,5,5>(co9_reg_9715.read(), ap_const_lv5_16)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) && 
          !esl_seteq<1,5,5>(ap_const_lv5_0, co16_reg_9793.read()) && 
          !esl_seteq<1,5,5>(co16_reg_9793.read(), ap_const_lv5_1) && 
          !esl_seteq<1,5,5>(co16_reg_9793.read(), ap_const_lv5_2) && 
          !esl_seteq<1,5,5>(co16_reg_9793.read(), ap_const_lv5_3) && 
          !esl_seteq<1,5,5>(co16_reg_9793.read(), ap_const_lv5_4) && 
          !esl_seteq<1,5,5>(co16_reg_9793.read(), ap_const_lv5_5) && 
          !esl_seteq<1,5,5>(co16_reg_9793.read(), ap_const_lv5_6) && 
          !esl_seteq<1,5,5>(co16_reg_9793.read(), ap_const_lv5_7) && 
          !esl_seteq<1,5,5>(co16_reg_9793.read(), ap_const_lv5_8) && 
          !esl_seteq<1,5,5>(co16_reg_9793.read(), ap_const_lv5_9) && 
          !esl_seteq<1,5,5>(co16_reg_9793.read(), ap_const_lv5_A) && 
          !esl_seteq<1,5,5>(co16_reg_9793.read(), ap_const_lv5_B) && 
          !esl_seteq<1,5,5>(co16_reg_9793.read(), ap_const_lv5_C) && 
          !esl_seteq<1,5,5>(co16_reg_9793.read(), ap_const_lv5_D) && 
          !esl_seteq<1,5,5>(co16_reg_9793.read(), ap_const_lv5_E) && 
          !esl_seteq<1,5,5>(co16_reg_9793.read(), ap_const_lv5_F) && 
          !esl_seteq<1,5,5>(co16_reg_9793.read(), ap_const_lv5_10) && 
          !esl_seteq<1,5,5>(co16_reg_9793.read(), ap_const_lv5_11) && 
          !esl_seteq<1,5,5>(co16_reg_9793.read(), ap_const_lv5_12) && 
          !esl_seteq<1,5,5>(co16_reg_9793.read(), ap_const_lv5_13) && 
          !esl_seteq<1,5,5>(co16_reg_9793.read(), ap_const_lv5_14) && 
          !esl_seteq<1,5,5>(co16_reg_9793.read(), ap_const_lv5_15) && 
          !esl_seteq<1,5,5>(co16_reg_9793.read(), ap_const_lv5_16)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) && 
          !esl_seteq<1,5,5>(ap_const_lv5_0, co22_reg_9860.read()) && 
          !esl_seteq<1,5,5>(co22_reg_9860.read(), ap_const_lv5_1) && 
          !esl_seteq<1,5,5>(co22_reg_9860.read(), ap_const_lv5_2) && 
          !esl_seteq<1,5,5>(co22_reg_9860.read(), ap_const_lv5_3) && 
          !esl_seteq<1,5,5>(co22_reg_9860.read(), ap_const_lv5_4) && 
          !esl_seteq<1,5,5>(co22_reg_9860.read(), ap_const_lv5_5) && 
          !esl_seteq<1,5,5>(co22_reg_9860.read(), ap_const_lv5_6) && 
          !esl_seteq<1,5,5>(co22_reg_9860.read(), ap_const_lv5_7) && 
          !esl_seteq<1,5,5>(co22_reg_9860.read(), ap_const_lv5_8) && 
          !esl_seteq<1,5,5>(co22_reg_9860.read(), ap_const_lv5_9) && 
          !esl_seteq<1,5,5>(co22_reg_9860.read(), ap_const_lv5_A) && 
          !esl_seteq<1,5,5>(co22_reg_9860.read(), ap_const_lv5_B) && 
          !esl_seteq<1,5,5>(co22_reg_9860.read(), ap_const_lv5_C) && 
          !esl_seteq<1,5,5>(co22_reg_9860.read(), ap_const_lv5_D) && 
          !esl_seteq<1,5,5>(co22_reg_9860.read(), ap_const_lv5_E) && 
          !esl_seteq<1,5,5>(co22_reg_9860.read(), ap_const_lv5_F) && 
          !esl_seteq<1,5,5>(co22_reg_9860.read(), ap_const_lv5_10) && 
          !esl_seteq<1,5,5>(co22_reg_9860.read(), ap_const_lv5_11) && 
          !esl_seteq<1,5,5>(co22_reg_9860.read(), ap_const_lv5_12) && 
          !esl_seteq<1,5,5>(co22_reg_9860.read(), ap_const_lv5_13) && 
          !esl_seteq<1,5,5>(co22_reg_9860.read(), ap_const_lv5_14) && 
          !esl_seteq<1,5,5>(co22_reg_9860.read(), ap_const_lv5_15) && 
          !esl_seteq<1,5,5>(co22_reg_9860.read(), ap_const_lv5_16)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) && 
          !esl_seteq<1,5,5>(ap_const_lv5_0, co29_reg_9938.read()) && 
          !esl_seteq<1,5,5>(co29_reg_9938.read(), ap_const_lv5_1) && 
          !esl_seteq<1,5,5>(co29_reg_9938.read(), ap_const_lv5_2) && 
          !esl_seteq<1,5,5>(co29_reg_9938.read(), ap_const_lv5_3) && 
          !esl_seteq<1,5,5>(co29_reg_9938.read(), ap_const_lv5_4) && 
          !esl_seteq<1,5,5>(co29_reg_9938.read(), ap_const_lv5_5) && 
          !esl_seteq<1,5,5>(co29_reg_9938.read(), ap_const_lv5_6) && 
          !esl_seteq<1,5,5>(co29_reg_9938.read(), ap_const_lv5_7) && 
          !esl_seteq<1,5,5>(co29_reg_9938.read(), ap_const_lv5_8) && 
          !esl_seteq<1,5,5>(co29_reg_9938.read(), ap_const_lv5_9) && 
          !esl_seteq<1,5,5>(co29_reg_9938.read(), ap_const_lv5_A) && 
          !esl_seteq<1,5,5>(co29_reg_9938.read(), ap_const_lv5_B) && 
          !esl_seteq<1,5,5>(co29_reg_9938.read(), ap_const_lv5_C) && 
          !esl_seteq<1,5,5>(co29_reg_9938.read(), ap_const_lv5_D) && 
          !esl_seteq<1,5,5>(co29_reg_9938.read(), ap_const_lv5_E) && 
          !esl_seteq<1,5,5>(co29_reg_9938.read(), ap_const_lv5_F) && 
          !esl_seteq<1,5,5>(co29_reg_9938.read(), ap_const_lv5_10) && 
          !esl_seteq<1,5,5>(co29_reg_9938.read(), ap_const_lv5_11) && 
          !esl_seteq<1,5,5>(co29_reg_9938.read(), ap_const_lv5_12) && 
          !esl_seteq<1,5,5>(co29_reg_9938.read(), ap_const_lv5_13) && 
          !esl_seteq<1,5,5>(co29_reg_9938.read(), ap_const_lv5_14) && 
          !esl_seteq<1,5,5>(co29_reg_9938.read(), ap_const_lv5_15) && 
          !esl_seteq<1,5,5>(co29_reg_9938.read(), ap_const_lv5_16)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) && 
          !esl_seteq<1,5,5>(ap_const_lv5_0, co38_reg_10038.read()) && 
          !esl_seteq<1,5,5>(co38_reg_10038.read(), ap_const_lv5_1) && 
          !esl_seteq<1,5,5>(co38_reg_10038.read(), ap_const_lv5_2) && 
          !esl_seteq<1,5,5>(co38_reg_10038.read(), ap_const_lv5_3) && 
          !esl_seteq<1,5,5>(co38_reg_10038.read(), ap_const_lv5_4) && 
          !esl_seteq<1,5,5>(co38_reg_10038.read(), ap_const_lv5_5) && 
          !esl_seteq<1,5,5>(co38_reg_10038.read(), ap_const_lv5_6) && 
          !esl_seteq<1,5,5>(co38_reg_10038.read(), ap_const_lv5_7) && 
          !esl_seteq<1,5,5>(co38_reg_10038.read(), ap_const_lv5_8) && 
          !esl_seteq<1,5,5>(co38_reg_10038.read(), ap_const_lv5_9) && 
          !esl_seteq<1,5,5>(co38_reg_10038.read(), ap_const_lv5_A) && 
          !esl_seteq<1,5,5>(co38_reg_10038.read(), ap_const_lv5_B) && 
          !esl_seteq<1,5,5>(co38_reg_10038.read(), ap_const_lv5_C) && 
          !esl_seteq<1,5,5>(co38_reg_10038.read(), ap_const_lv5_D) && 
          !esl_seteq<1,5,5>(co38_reg_10038.read(), ap_const_lv5_E) && 
          !esl_seteq<1,5,5>(co38_reg_10038.read(), ap_const_lv5_F) && 
          !esl_seteq<1,5,5>(co38_reg_10038.read(), ap_const_lv5_10) && 
          !esl_seteq<1,5,5>(co38_reg_10038.read(), ap_const_lv5_11) && 
          !esl_seteq<1,5,5>(co38_reg_10038.read(), ap_const_lv5_12) && 
          !esl_seteq<1,5,5>(co38_reg_10038.read(), ap_const_lv5_13) && 
          !esl_seteq<1,5,5>(co38_reg_10038.read(), ap_const_lv5_14) && 
          !esl_seteq<1,5,5>(co38_reg_10038.read(), ap_const_lv5_15) && 
          !esl_seteq<1,5,5>(co38_reg_10038.read(), ap_const_lv5_16)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) && 
          !esl_seteq<1,5,5>(ap_const_lv5_0, co45_reg_10116.read()) && 
          !esl_seteq<1,5,5>(co45_reg_10116.read(), ap_const_lv5_1) && 
          !esl_seteq<1,5,5>(co45_reg_10116.read(), ap_const_lv5_2) && 
          !esl_seteq<1,5,5>(co45_reg_10116.read(), ap_const_lv5_3) && 
          !esl_seteq<1,5,5>(co45_reg_10116.read(), ap_const_lv5_4) && 
          !esl_seteq<1,5,5>(co45_reg_10116.read(), ap_const_lv5_5) && 
          !esl_seteq<1,5,5>(co45_reg_10116.read(), ap_const_lv5_6) && 
          !esl_seteq<1,5,5>(co45_reg_10116.read(), ap_const_lv5_7) && 
          !esl_seteq<1,5,5>(co45_reg_10116.read(), ap_const_lv5_8) && 
          !esl_seteq<1,5,5>(co45_reg_10116.read(), ap_const_lv5_9) && 
          !esl_seteq<1,5,5>(co45_reg_10116.read(), ap_const_lv5_A) && 
          !esl_seteq<1,5,5>(co45_reg_10116.read(), ap_const_lv5_B) && 
          !esl_seteq<1,5,5>(co45_reg_10116.read(), ap_const_lv5_C) && 
          !esl_seteq<1,5,5>(co45_reg_10116.read(), ap_const_lv5_D) && 
          !esl_seteq<1,5,5>(co45_reg_10116.read(), ap_const_lv5_E) && 
          !esl_seteq<1,5,5>(co45_reg_10116.read(), ap_const_lv5_F) && 
          !esl_seteq<1,5,5>(co45_reg_10116.read(), ap_const_lv5_10) && 
          !esl_seteq<1,5,5>(co45_reg_10116.read(), ap_const_lv5_11) && 
          !esl_seteq<1,5,5>(co45_reg_10116.read(), ap_const_lv5_12) && 
          !esl_seteq<1,5,5>(co45_reg_10116.read(), ap_const_lv5_13) && 
          !esl_seteq<1,5,5>(co45_reg_10116.read(), ap_const_lv5_14) && 
          !esl_seteq<1,5,5>(co45_reg_10116.read(), ap_const_lv5_15) && 
          !esl_seteq<1,5,5>(co45_reg_10116.read(), ap_const_lv5_16)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) && 
          !esl_seteq<1,5,5>(ap_const_lv5_0, co50_reg_10216.read()) && 
          !esl_seteq<1,5,5>(co50_reg_10216.read(), ap_const_lv5_1) && 
          !esl_seteq<1,5,5>(co50_reg_10216.read(), ap_const_lv5_2) && 
          !esl_seteq<1,5,5>(co50_reg_10216.read(), ap_const_lv5_3) && 
          !esl_seteq<1,5,5>(co50_reg_10216.read(), ap_const_lv5_4) && 
          !esl_seteq<1,5,5>(co50_reg_10216.read(), ap_const_lv5_5) && 
          !esl_seteq<1,5,5>(co50_reg_10216.read(), ap_const_lv5_6) && 
          !esl_seteq<1,5,5>(co50_reg_10216.read(), ap_const_lv5_7) && 
          !esl_seteq<1,5,5>(co50_reg_10216.read(), ap_const_lv5_8) && 
          !esl_seteq<1,5,5>(co50_reg_10216.read(), ap_const_lv5_9) && 
          !esl_seteq<1,5,5>(co50_reg_10216.read(), ap_const_lv5_A) && 
          !esl_seteq<1,5,5>(co50_reg_10216.read(), ap_const_lv5_B) && 
          !esl_seteq<1,5,5>(co50_reg_10216.read(), ap_const_lv5_C) && 
          !esl_seteq<1,5,5>(co50_reg_10216.read(), ap_const_lv5_D) && 
          !esl_seteq<1,5,5>(co50_reg_10216.read(), ap_const_lv5_E) && 
          !esl_seteq<1,5,5>(co50_reg_10216.read(), ap_const_lv5_F) && 
          !esl_seteq<1,5,5>(co50_reg_10216.read(), ap_const_lv5_10) && 
          !esl_seteq<1,5,5>(co50_reg_10216.read(), ap_const_lv5_11) && 
          !esl_seteq<1,5,5>(co50_reg_10216.read(), ap_const_lv5_12) && 
          !esl_seteq<1,5,5>(co50_reg_10216.read(), ap_const_lv5_13) && 
          !esl_seteq<1,5,5>(co50_reg_10216.read(), ap_const_lv5_14) && 
          !esl_seteq<1,5,5>(co50_reg_10216.read(), ap_const_lv5_15) && 
          !esl_seteq<1,5,5>(co50_reg_10216.read(), ap_const_lv5_16)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()) && 
          !esl_seteq<1,5,5>(ap_const_lv5_0, co55_reg_10294.read()) && 
          !esl_seteq<1,5,5>(co55_reg_10294.read(), ap_const_lv5_1) && 
          !esl_seteq<1,5,5>(co55_reg_10294.read(), ap_const_lv5_2) && 
          !esl_seteq<1,5,5>(co55_reg_10294.read(), ap_const_lv5_3) && 
          !esl_seteq<1,5,5>(co55_reg_10294.read(), ap_const_lv5_4) && 
          !esl_seteq<1,5,5>(co55_reg_10294.read(), ap_const_lv5_5) && 
          !esl_seteq<1,5,5>(co55_reg_10294.read(), ap_const_lv5_6) && 
          !esl_seteq<1,5,5>(co55_reg_10294.read(), ap_const_lv5_7) && 
          !esl_seteq<1,5,5>(co55_reg_10294.read(), ap_const_lv5_8) && 
          !esl_seteq<1,5,5>(co55_reg_10294.read(), ap_const_lv5_9) && 
          !esl_seteq<1,5,5>(co55_reg_10294.read(), ap_const_lv5_A) && 
          !esl_seteq<1,5,5>(co55_reg_10294.read(), ap_const_lv5_B) && 
          !esl_seteq<1,5,5>(co55_reg_10294.read(), ap_const_lv5_C) && 
          !esl_seteq<1,5,5>(co55_reg_10294.read(), ap_const_lv5_D) && 
          !esl_seteq<1,5,5>(co55_reg_10294.read(), ap_const_lv5_E) && 
          !esl_seteq<1,5,5>(co55_reg_10294.read(), ap_const_lv5_F) && 
          !esl_seteq<1,5,5>(co55_reg_10294.read(), ap_const_lv5_10) && 
          !esl_seteq<1,5,5>(co55_reg_10294.read(), ap_const_lv5_11) && 
          !esl_seteq<1,5,5>(co55_reg_10294.read(), ap_const_lv5_12) && 
          !esl_seteq<1,5,5>(co55_reg_10294.read(), ap_const_lv5_13) && 
          !esl_seteq<1,5,5>(co55_reg_10294.read(), ap_const_lv5_14) && 
          !esl_seteq<1,5,5>(co55_reg_10294.read(), ap_const_lv5_15) && 
          !esl_seteq<1,5,5>(co55_reg_10294.read(), ap_const_lv5_16)))) {
        weights_24_24_1x1_V_23_we0 = ap_const_logic_1;
    } else {
        weights_24_24_1x1_V_23_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read())) {
        weights_24_24_1x1_V_2_address0 = weights_24_24_1x1_V_193_reg_42212.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read())) {
        weights_24_24_1x1_V_2_address0 = weights_24_24_1x1_V_169_reg_41976.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read())) {
        weights_24_24_1x1_V_2_address0 = weights_24_24_1x1_V_145_reg_41723.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read())) {
        weights_24_24_1x1_V_2_address0 = weights_24_24_1x1_V_121_reg_41493.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        weights_24_24_1x1_V_2_address0 = weights_24_24_1x1_V_97_reg_41228.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read())) {
        weights_24_24_1x1_V_2_address0 = weights_24_24_1x1_V_73_reg_41004.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read())) {
        weights_24_24_1x1_V_2_address0 = weights_24_24_1x1_V_49_reg_40789.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        weights_24_24_1x1_V_2_address0 = weights_24_24_1x1_V_25_reg_40559.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        weights_24_24_1x1_V_2_address0 = weights_24_24_1x1_V_1_reg_40334.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_2_address0 = grp_subconv_1x1_16_p_fu_14170_weight_2_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_2_address0 = grp_subconv_1x1_32_p_fu_14066_weight_2_V_address0.read();
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
        weights_24_24_1x1_V_2_ce0 = grp_subconv_1x1_16_p_fu_14170_weight_2_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_2_ce0 = grp_subconv_1x1_32_p_fu_14066_weight_2_V_ce0.read();
    } else {
        weights_24_24_1x1_V_2_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_2_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && 
          esl_seteq<1,5,5>(co_reg_9637.read(), ap_const_lv5_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) && 
          esl_seteq<1,5,5>(co9_reg_9715.read(), ap_const_lv5_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) && 
          esl_seteq<1,5,5>(co16_reg_9793.read(), ap_const_lv5_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) && 
          esl_seteq<1,5,5>(co22_reg_9860.read(), ap_const_lv5_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) && 
          esl_seteq<1,5,5>(co29_reg_9938.read(), ap_const_lv5_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) && 
          esl_seteq<1,5,5>(co38_reg_10038.read(), ap_const_lv5_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) && 
          esl_seteq<1,5,5>(co45_reg_10116.read(), ap_const_lv5_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) && 
          esl_seteq<1,5,5>(co50_reg_10216.read(), ap_const_lv5_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()) && 
          esl_seteq<1,5,5>(co55_reg_10294.read(), ap_const_lv5_2)))) {
        weights_24_24_1x1_V_2_we0 = ap_const_logic_1;
    } else {
        weights_24_24_1x1_V_2_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read())) {
        weights_24_24_1x1_V_3_address0 = weights_24_24_1x1_V_199_reg_42242.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read())) {
        weights_24_24_1x1_V_3_address0 = weights_24_24_1x1_V_175_reg_42006.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read())) {
        weights_24_24_1x1_V_3_address0 = weights_24_24_1x1_V_151_reg_41753.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read())) {
        weights_24_24_1x1_V_3_address0 = weights_24_24_1x1_V_127_reg_41523.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        weights_24_24_1x1_V_3_address0 = weights_24_24_1x1_V_103_reg_41258.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read())) {
        weights_24_24_1x1_V_3_address0 = weights_24_24_1x1_V_79_reg_41034.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read())) {
        weights_24_24_1x1_V_3_address0 = weights_24_24_1x1_V_55_reg_40819.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        weights_24_24_1x1_V_3_address0 = weights_24_24_1x1_V_31_reg_40589.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        weights_24_24_1x1_V_3_address0 = weights_24_24_1x1_V_7_reg_40364.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_3_address0 = grp_subconv_1x1_16_p_fu_14170_weight_3_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_3_address0 = grp_subconv_1x1_32_p_fu_14066_weight_3_V_address0.read();
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
        weights_24_24_1x1_V_3_ce0 = grp_subconv_1x1_16_p_fu_14170_weight_3_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_3_ce0 = grp_subconv_1x1_32_p_fu_14066_weight_3_V_ce0.read();
    } else {
        weights_24_24_1x1_V_3_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_3_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && 
          esl_seteq<1,5,5>(co_reg_9637.read(), ap_const_lv5_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) && 
          esl_seteq<1,5,5>(co9_reg_9715.read(), ap_const_lv5_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) && 
          esl_seteq<1,5,5>(co16_reg_9793.read(), ap_const_lv5_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) && 
          esl_seteq<1,5,5>(co22_reg_9860.read(), ap_const_lv5_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) && 
          esl_seteq<1,5,5>(co29_reg_9938.read(), ap_const_lv5_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) && 
          esl_seteq<1,5,5>(co38_reg_10038.read(), ap_const_lv5_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) && 
          esl_seteq<1,5,5>(co45_reg_10116.read(), ap_const_lv5_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) && 
          esl_seteq<1,5,5>(co50_reg_10216.read(), ap_const_lv5_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()) && 
          esl_seteq<1,5,5>(co55_reg_10294.read(), ap_const_lv5_3)))) {
        weights_24_24_1x1_V_3_we0 = ap_const_logic_1;
    } else {
        weights_24_24_1x1_V_3_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read())) {
        weights_24_24_1x1_V_4_address0 = weights_24_24_1x1_V_200_reg_42247.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read())) {
        weights_24_24_1x1_V_4_address0 = weights_24_24_1x1_V_176_reg_42011.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read())) {
        weights_24_24_1x1_V_4_address0 = weights_24_24_1x1_V_152_reg_41758.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read())) {
        weights_24_24_1x1_V_4_address0 = weights_24_24_1x1_V_128_reg_41528.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        weights_24_24_1x1_V_4_address0 = weights_24_24_1x1_V_104_reg_41263.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read())) {
        weights_24_24_1x1_V_4_address0 = weights_24_24_1x1_V_80_reg_41039.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read())) {
        weights_24_24_1x1_V_4_address0 = weights_24_24_1x1_V_56_reg_40824.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        weights_24_24_1x1_V_4_address0 = weights_24_24_1x1_V_32_reg_40594.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        weights_24_24_1x1_V_4_address0 = weights_24_24_1x1_V_8_reg_40369.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_4_address0 = grp_subconv_1x1_16_p_fu_14170_weight_4_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_4_address0 = grp_subconv_1x1_32_p_fu_14066_weight_4_V_address0.read();
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
        weights_24_24_1x1_V_4_ce0 = grp_subconv_1x1_16_p_fu_14170_weight_4_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_4_ce0 = grp_subconv_1x1_32_p_fu_14066_weight_4_V_ce0.read();
    } else {
        weights_24_24_1x1_V_4_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_4_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && 
          esl_seteq<1,5,5>(co_reg_9637.read(), ap_const_lv5_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) && 
          esl_seteq<1,5,5>(co9_reg_9715.read(), ap_const_lv5_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) && 
          esl_seteq<1,5,5>(co16_reg_9793.read(), ap_const_lv5_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) && 
          esl_seteq<1,5,5>(co22_reg_9860.read(), ap_const_lv5_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) && 
          esl_seteq<1,5,5>(co29_reg_9938.read(), ap_const_lv5_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) && 
          esl_seteq<1,5,5>(co38_reg_10038.read(), ap_const_lv5_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) && 
          esl_seteq<1,5,5>(co45_reg_10116.read(), ap_const_lv5_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) && 
          esl_seteq<1,5,5>(co50_reg_10216.read(), ap_const_lv5_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()) && 
          esl_seteq<1,5,5>(co55_reg_10294.read(), ap_const_lv5_4)))) {
        weights_24_24_1x1_V_4_we0 = ap_const_logic_1;
    } else {
        weights_24_24_1x1_V_4_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read())) {
        weights_24_24_1x1_V_5_address0 = weights_24_24_1x1_V_196_reg_42227.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read())) {
        weights_24_24_1x1_V_5_address0 = weights_24_24_1x1_V_172_reg_41991.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read())) {
        weights_24_24_1x1_V_5_address0 = weights_24_24_1x1_V_148_reg_41738.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read())) {
        weights_24_24_1x1_V_5_address0 = weights_24_24_1x1_V_124_reg_41508.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        weights_24_24_1x1_V_5_address0 = weights_24_24_1x1_V_100_reg_41243.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read())) {
        weights_24_24_1x1_V_5_address0 = weights_24_24_1x1_V_76_reg_41019.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read())) {
        weights_24_24_1x1_V_5_address0 = weights_24_24_1x1_V_52_reg_40804.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        weights_24_24_1x1_V_5_address0 = weights_24_24_1x1_V_28_reg_40574.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        weights_24_24_1x1_V_5_address0 = weights_24_24_1x1_V_4_reg_40349.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_5_address0 = grp_subconv_1x1_16_p_fu_14170_weight_5_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_5_address0 = grp_subconv_1x1_32_p_fu_14066_weight_5_V_address0.read();
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
        weights_24_24_1x1_V_5_ce0 = grp_subconv_1x1_16_p_fu_14170_weight_5_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_5_ce0 = grp_subconv_1x1_32_p_fu_14066_weight_5_V_ce0.read();
    } else {
        weights_24_24_1x1_V_5_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_5_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && 
          esl_seteq<1,5,5>(co_reg_9637.read(), ap_const_lv5_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) && 
          esl_seteq<1,5,5>(co9_reg_9715.read(), ap_const_lv5_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) && 
          esl_seteq<1,5,5>(co16_reg_9793.read(), ap_const_lv5_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) && 
          esl_seteq<1,5,5>(co22_reg_9860.read(), ap_const_lv5_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) && 
          esl_seteq<1,5,5>(co29_reg_9938.read(), ap_const_lv5_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) && 
          esl_seteq<1,5,5>(co38_reg_10038.read(), ap_const_lv5_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) && 
          esl_seteq<1,5,5>(co45_reg_10116.read(), ap_const_lv5_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) && 
          esl_seteq<1,5,5>(co50_reg_10216.read(), ap_const_lv5_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()) && 
          esl_seteq<1,5,5>(co55_reg_10294.read(), ap_const_lv5_5)))) {
        weights_24_24_1x1_V_5_we0 = ap_const_logic_1;
    } else {
        weights_24_24_1x1_V_5_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read())) {
        weights_24_24_1x1_V_6_address0 = weights_24_24_1x1_V_209_reg_42292.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read())) {
        weights_24_24_1x1_V_6_address0 = weights_24_24_1x1_V_185_reg_42056.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read())) {
        weights_24_24_1x1_V_6_address0 = weights_24_24_1x1_V_161_reg_41803.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read())) {
        weights_24_24_1x1_V_6_address0 = weights_24_24_1x1_V_137_reg_41573.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        weights_24_24_1x1_V_6_address0 = weights_24_24_1x1_V_113_reg_41308.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read())) {
        weights_24_24_1x1_V_6_address0 = weights_24_24_1x1_V_89_reg_41084.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read())) {
        weights_24_24_1x1_V_6_address0 = weights_24_24_1x1_V_65_reg_40869.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        weights_24_24_1x1_V_6_address0 = weights_24_24_1x1_V_41_reg_40639.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        weights_24_24_1x1_V_6_address0 = weights_24_24_1x1_V_17_reg_40414.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_6_address0 = grp_subconv_1x1_16_p_fu_14170_weight_6_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_6_address0 = grp_subconv_1x1_32_p_fu_14066_weight_6_V_address0.read();
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
        weights_24_24_1x1_V_6_ce0 = grp_subconv_1x1_16_p_fu_14170_weight_6_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_6_ce0 = grp_subconv_1x1_32_p_fu_14066_weight_6_V_ce0.read();
    } else {
        weights_24_24_1x1_V_6_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_6_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && 
          esl_seteq<1,5,5>(co_reg_9637.read(), ap_const_lv5_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) && 
          esl_seteq<1,5,5>(co9_reg_9715.read(), ap_const_lv5_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) && 
          esl_seteq<1,5,5>(co16_reg_9793.read(), ap_const_lv5_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) && 
          esl_seteq<1,5,5>(co22_reg_9860.read(), ap_const_lv5_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) && 
          esl_seteq<1,5,5>(co29_reg_9938.read(), ap_const_lv5_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) && 
          esl_seteq<1,5,5>(co38_reg_10038.read(), ap_const_lv5_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) && 
          esl_seteq<1,5,5>(co45_reg_10116.read(), ap_const_lv5_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) && 
          esl_seteq<1,5,5>(co50_reg_10216.read(), ap_const_lv5_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()) && 
          esl_seteq<1,5,5>(co55_reg_10294.read(), ap_const_lv5_6)))) {
        weights_24_24_1x1_V_6_we0 = ap_const_logic_1;
    } else {
        weights_24_24_1x1_V_6_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_7_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read())) {
        weights_24_24_1x1_V_7_address0 = weights_24_24_1x1_V_192_reg_42207.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read())) {
        weights_24_24_1x1_V_7_address0 = weights_24_24_1x1_V_168_reg_41971.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read())) {
        weights_24_24_1x1_V_7_address0 = weights_24_24_1x1_V_144_reg_41718.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read())) {
        weights_24_24_1x1_V_7_address0 = weights_24_24_1x1_V_120_reg_41488.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        weights_24_24_1x1_V_7_address0 = weights_24_24_1x1_V_96_reg_41223.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read())) {
        weights_24_24_1x1_V_7_address0 = weights_24_24_1x1_V_72_reg_40999.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read())) {
        weights_24_24_1x1_V_7_address0 = weights_24_24_1x1_V_48_reg_40784.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        weights_24_24_1x1_V_7_address0 = weights_24_24_1x1_V_24_reg_40554.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        weights_24_24_1x1_V_7_address0 = weights_24_24_1x1_V_s_reg_40329.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_7_address0 = grp_subconv_1x1_16_p_fu_14170_weight_7_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_7_address0 = grp_subconv_1x1_32_p_fu_14066_weight_7_V_address0.read();
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
        weights_24_24_1x1_V_7_ce0 = grp_subconv_1x1_16_p_fu_14170_weight_7_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_7_ce0 = grp_subconv_1x1_32_p_fu_14066_weight_7_V_ce0.read();
    } else {
        weights_24_24_1x1_V_7_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_7_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && 
          esl_seteq<1,5,5>(co_reg_9637.read(), ap_const_lv5_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) && 
          esl_seteq<1,5,5>(co9_reg_9715.read(), ap_const_lv5_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) && 
          esl_seteq<1,5,5>(co16_reg_9793.read(), ap_const_lv5_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) && 
          esl_seteq<1,5,5>(co22_reg_9860.read(), ap_const_lv5_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) && 
          esl_seteq<1,5,5>(co29_reg_9938.read(), ap_const_lv5_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) && 
          esl_seteq<1,5,5>(co38_reg_10038.read(), ap_const_lv5_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) && 
          esl_seteq<1,5,5>(co45_reg_10116.read(), ap_const_lv5_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) && 
          esl_seteq<1,5,5>(co50_reg_10216.read(), ap_const_lv5_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()) && 
          esl_seteq<1,5,5>(co55_reg_10294.read(), ap_const_lv5_7)))) {
        weights_24_24_1x1_V_7_we0 = ap_const_logic_1;
    } else {
        weights_24_24_1x1_V_7_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_8_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read())) {
        weights_24_24_1x1_V_8_address0 = weights_24_24_1x1_V_207_reg_42282.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read())) {
        weights_24_24_1x1_V_8_address0 = weights_24_24_1x1_V_183_reg_42046.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read())) {
        weights_24_24_1x1_V_8_address0 = weights_24_24_1x1_V_159_reg_41793.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read())) {
        weights_24_24_1x1_V_8_address0 = weights_24_24_1x1_V_135_reg_41563.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        weights_24_24_1x1_V_8_address0 = weights_24_24_1x1_V_111_reg_41298.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read())) {
        weights_24_24_1x1_V_8_address0 = weights_24_24_1x1_V_87_reg_41074.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read())) {
        weights_24_24_1x1_V_8_address0 = weights_24_24_1x1_V_63_reg_40859.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        weights_24_24_1x1_V_8_address0 = weights_24_24_1x1_V_39_reg_40629.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        weights_24_24_1x1_V_8_address0 = weights_24_24_1x1_V_15_reg_40404.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_8_address0 = grp_subconv_1x1_16_p_fu_14170_weight_8_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_8_address0 = grp_subconv_1x1_32_p_fu_14066_weight_8_V_address0.read();
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
        weights_24_24_1x1_V_8_ce0 = grp_subconv_1x1_16_p_fu_14170_weight_8_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_8_ce0 = grp_subconv_1x1_32_p_fu_14066_weight_8_V_ce0.read();
    } else {
        weights_24_24_1x1_V_8_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_8_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && 
          esl_seteq<1,5,5>(co_reg_9637.read(), ap_const_lv5_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) && 
          esl_seteq<1,5,5>(co9_reg_9715.read(), ap_const_lv5_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) && 
          esl_seteq<1,5,5>(co16_reg_9793.read(), ap_const_lv5_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) && 
          esl_seteq<1,5,5>(co22_reg_9860.read(), ap_const_lv5_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) && 
          esl_seteq<1,5,5>(co29_reg_9938.read(), ap_const_lv5_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) && 
          esl_seteq<1,5,5>(co38_reg_10038.read(), ap_const_lv5_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) && 
          esl_seteq<1,5,5>(co45_reg_10116.read(), ap_const_lv5_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) && 
          esl_seteq<1,5,5>(co50_reg_10216.read(), ap_const_lv5_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()) && 
          esl_seteq<1,5,5>(co55_reg_10294.read(), ap_const_lv5_8)))) {
        weights_24_24_1x1_V_8_we0 = ap_const_logic_1;
    } else {
        weights_24_24_1x1_V_8_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_9_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read())) {
        weights_24_24_1x1_V_9_address0 = weights_24_24_1x1_V_208_reg_42287.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read())) {
        weights_24_24_1x1_V_9_address0 = weights_24_24_1x1_V_184_reg_42051.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read())) {
        weights_24_24_1x1_V_9_address0 = weights_24_24_1x1_V_160_reg_41798.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read())) {
        weights_24_24_1x1_V_9_address0 = weights_24_24_1x1_V_136_reg_41568.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        weights_24_24_1x1_V_9_address0 = weights_24_24_1x1_V_112_reg_41303.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read())) {
        weights_24_24_1x1_V_9_address0 = weights_24_24_1x1_V_88_reg_41079.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read())) {
        weights_24_24_1x1_V_9_address0 = weights_24_24_1x1_V_64_reg_40864.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        weights_24_24_1x1_V_9_address0 = weights_24_24_1x1_V_40_reg_40634.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        weights_24_24_1x1_V_9_address0 = weights_24_24_1x1_V_16_reg_40409.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_9_address0 = grp_subconv_1x1_16_p_fu_14170_weight_9_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_9_address0 = grp_subconv_1x1_32_p_fu_14066_weight_9_V_address0.read();
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
        weights_24_24_1x1_V_9_ce0 = grp_subconv_1x1_16_p_fu_14170_weight_9_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_9_ce0 = grp_subconv_1x1_32_p_fu_14066_weight_9_V_ce0.read();
    } else {
        weights_24_24_1x1_V_9_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_9_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && 
          esl_seteq<1,5,5>(co_reg_9637.read(), ap_const_lv5_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) && 
          esl_seteq<1,5,5>(co9_reg_9715.read(), ap_const_lv5_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) && 
          esl_seteq<1,5,5>(co16_reg_9793.read(), ap_const_lv5_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) && 
          esl_seteq<1,5,5>(co22_reg_9860.read(), ap_const_lv5_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) && 
          esl_seteq<1,5,5>(co29_reg_9938.read(), ap_const_lv5_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) && 
          esl_seteq<1,5,5>(co38_reg_10038.read(), ap_const_lv5_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) && 
          esl_seteq<1,5,5>(co45_reg_10116.read(), ap_const_lv5_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) && 
          esl_seteq<1,5,5>(co50_reg_10216.read(), ap_const_lv5_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()) && 
          esl_seteq<1,5,5>(co55_reg_10294.read(), ap_const_lv5_9)))) {
        weights_24_24_1x1_V_9_we0 = ap_const_logic_1;
    } else {
        weights_24_24_1x1_V_9_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_s_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read())) {
        weights_24_24_1x1_V_s_address0 = weights_24_24_1x1_V_212_reg_42307.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read())) {
        weights_24_24_1x1_V_s_address0 = weights_24_24_1x1_V_188_reg_42071.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read())) {
        weights_24_24_1x1_V_s_address0 = weights_24_24_1x1_V_164_reg_41818.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read())) {
        weights_24_24_1x1_V_s_address0 = weights_24_24_1x1_V_140_reg_41588.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        weights_24_24_1x1_V_s_address0 = weights_24_24_1x1_V_116_reg_41323.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read())) {
        weights_24_24_1x1_V_s_address0 = weights_24_24_1x1_V_92_reg_41099.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read())) {
        weights_24_24_1x1_V_s_address0 = weights_24_24_1x1_V_68_reg_40884.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        weights_24_24_1x1_V_s_address0 = weights_24_24_1x1_V_44_reg_40654.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        weights_24_24_1x1_V_s_address0 = weights_24_24_1x1_V_20_reg_40429.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_s_address0 = grp_subconv_1x1_16_p_fu_14170_weight_0_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_s_address0 = grp_subconv_1x1_32_p_fu_14066_weight_0_V_address0.read();
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
        weights_24_24_1x1_V_s_ce0 = grp_subconv_1x1_16_p_fu_14170_weight_0_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_s_ce0 = grp_subconv_1x1_32_p_fu_14066_weight_0_V_ce0.read();
    } else {
        weights_24_24_1x1_V_s_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_s_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && 
          esl_seteq<1,5,5>(ap_const_lv5_0, co_reg_9637.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) && 
          esl_seteq<1,5,5>(ap_const_lv5_0, co9_reg_9715.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) && 
          esl_seteq<1,5,5>(ap_const_lv5_0, co16_reg_9793.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) && 
          esl_seteq<1,5,5>(ap_const_lv5_0, co22_reg_9860.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) && 
          esl_seteq<1,5,5>(ap_const_lv5_0, co29_reg_9938.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) && 
          esl_seteq<1,5,5>(ap_const_lv5_0, co38_reg_10038.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) && 
          esl_seteq<1,5,5>(ap_const_lv5_0, co45_reg_10116.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) && 
          esl_seteq<1,5,5>(ap_const_lv5_0, co50_reg_10216.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()) && 
          esl_seteq<1,5,5>(ap_const_lv5_0, co55_reg_10294.read())))) {
        weights_24_24_1x1_V_s_we0 = ap_const_logic_1;
    } else {
        weights_24_24_1x1_V_s_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_1_3x3_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1228.read())) {
        weights_48_1_3x3_V_address0 =  (sc_lv<9>) (tmp_1658_cast_fu_32429_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1133.read())) {
        weights_48_1_3x3_V_address0 =  (sc_lv<9>) (tmp_1578_cast_fu_30866_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1038.read())) {
        weights_48_1_3x3_V_address0 =  (sc_lv<9>) (tmp_1499_cast_fu_29315_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state943.read())) {
        weights_48_1_3x3_V_address0 =  (sc_lv<9>) (tmp_1422_cast_fu_27764_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state848.read())) {
        weights_48_1_3x3_V_address0 =  (sc_lv<9>) (tmp_1346_cast_fu_26217_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state753.read())) {
        weights_48_1_3x3_V_address0 =  (sc_lv<9>) (tmp_1270_cast_fu_24670_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state658.read())) {
        weights_48_1_3x3_V_address0 =  (sc_lv<9>) (tmp_1192_cast_fu_23111_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state563.read())) {
        weights_48_1_3x3_V_address0 =  (sc_lv<9>) (tmp_1116_cast_fu_21568_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state471.read())) {
        weights_48_1_3x3_V_address0 =  (sc_lv<9>) (tmp_1048_cast_fu_20136_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state412.read())) {
        weights_48_1_3x3_V_address0 =  (sc_lv<9>) (tmp_1014_cast_fu_19355_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state484.read())) {
        weights_48_1_3x3_V_address0 = grp_subconv_3x3_16_strid_1_fu_14798_weight_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state576.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state671.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state766.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state861.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state956.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1051.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1146.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1241.read()))) {
        weights_48_1_3x3_V_address0 = grp_subconv_3x3_8_no_rel_fu_14488_weight_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state425.read())) {
        weights_48_1_3x3_V_address0 = grp_subconv_3x3_16_strid_fu_14430_weight_V_address0.read();
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
        weights_48_1_3x3_V_ce0 = grp_subconv_3x3_16_strid_1_fu_14798_weight_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state576.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state671.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state766.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state861.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state956.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1051.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1146.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1241.read()))) {
        weights_48_1_3x3_V_ce0 = grp_subconv_3x3_8_no_rel_fu_14488_weight_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state425.read())) {
        weights_48_1_3x3_V_ce0 = grp_subconv_3x3_16_strid_fu_14430_weight_V_ce0.read();
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
        weights_48_48_1x1_V_10_address0 =  (sc_lv<7>) (tmp_1683_cast_fu_32854_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read())) {
        weights_48_48_1x1_V_10_address0 =  (sc_lv<7>) (tmp_1646_cast_fu_32065_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read())) {
        weights_48_48_1x1_V_10_address0 =  (sc_lv<7>) (tmp_1605_cast_fu_31287_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read())) {
        weights_48_48_1x1_V_10_address0 =  (sc_lv<7>) (tmp_1566_cast_fu_30502_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read())) {
        weights_48_48_1x1_V_10_address0 =  (sc_lv<7>) (tmp_1525_cast_fu_29728_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read())) {
        weights_48_48_1x1_V_10_address0 =  (sc_lv<7>) (tmp_1487_cast_fu_28943_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read())) {
        weights_48_48_1x1_V_10_address0 =  (sc_lv<7>) (tmp_1448_cast_fu_28177_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read())) {
        weights_48_48_1x1_V_10_address0 =  (sc_lv<7>) (tmp_1410_cast_fu_27396_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read())) {
        weights_48_48_1x1_V_10_address0 =  (sc_lv<7>) (tmp_1371_cast_fu_26630_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read())) {
        weights_48_48_1x1_V_10_address0 =  (sc_lv<7>) (tmp_1334_cast_fu_25857_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read())) {
        weights_48_48_1x1_V_10_address0 =  (sc_lv<7>) (tmp_1295_cast_fu_25087_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read())) {
        weights_48_48_1x1_V_10_address0 =  (sc_lv<7>) (tmp_1258_cast_fu_24306_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read())) {
        weights_48_48_1x1_V_10_address0 =  (sc_lv<7>) (tmp_1217_cast_fu_23528_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read())) {
        weights_48_48_1x1_V_10_address0 =  (sc_lv<7>) (tmp_1180_cast_fu_22747_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read())) {
        weights_48_48_1x1_V_10_address0 =  (sc_lv<7>) (tmp_1141_cast_fu_21981_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read())) {
        weights_48_48_1x1_V_10_address0 =  (sc_lv<7>) (tmp_1104_cast_fu_21200_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read())) {
        weights_48_48_1x1_V_10_address0 =  (sc_lv<7>) (tmp_1076_cast_fu_20553_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read())) {
        weights_48_48_1x1_V_10_address0 =  (sc_lv<7>) (tmp_1036_cast_fu_19772_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read())) {
        weights_48_48_1x1_V_10_address0 =  (sc_lv<7>) (tmp_1002_cast_fu_18991_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_10_address0 = grp_subconv_1x1_16p_p_fu_13962_weight_10_V_address0.read();
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
        weights_48_48_1x1_V_10_address0 = grp_subconv_1x1_8_p_fu_13858_weight_10_V_address0.read();
    } else {
        weights_48_48_1x1_V_10_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_10_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_10_address1 = grp_subconv_1x1_16p_p_fu_13962_weight_10_V_address1.read();
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
        weights_48_48_1x1_V_10_address1 = grp_subconv_1x1_8_p_fu_13858_weight_10_V_address1.read();
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
        weights_48_48_1x1_V_10_ce0 = grp_subconv_1x1_16p_p_fu_13962_weight_10_V_ce0.read();
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
        weights_48_48_1x1_V_10_ce0 = grp_subconv_1x1_8_p_fu_13858_weight_10_V_ce0.read();
    } else {
        weights_48_48_1x1_V_10_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_10_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_10_ce1 = grp_subconv_1x1_16p_p_fu_13962_weight_10_V_ce1.read();
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
        weights_48_48_1x1_V_10_ce1 = grp_subconv_1x1_8_p_fu_13858_weight_10_V_ce1.read();
    } else {
        weights_48_48_1x1_V_10_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_10_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read()) && 
          esl_seteq<1,6,6>(tmp_2236_fu_18987_p1.read(), ap_const_lv6_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read()) && 
          esl_seteq<1,6,6>(tmp_2247_fu_19768_p1.read(), ap_const_lv6_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read()) && 
          esl_seteq<1,6,6>(tmp_2258_fu_20549_p1.read(), ap_const_lv6_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read()) && 
          esl_seteq<1,6,6>(tmp_2269_fu_21196_p1.read(), ap_const_lv6_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read()) && 
          esl_seteq<1,6,6>(tmp_2280_fu_21977_p1.read(), ap_const_lv6_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read()) && 
          esl_seteq<1,6,6>(tmp_2293_fu_22743_p1.read(), ap_const_lv6_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) && 
          esl_seteq<1,6,6>(tmp_2304_fu_23524_p1.read(), ap_const_lv6_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read()) && 
          esl_seteq<1,6,6>(tmp_2317_fu_24302_p1.read(), ap_const_lv6_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read()) && 
          esl_seteq<1,6,6>(tmp_2328_fu_25083_p1.read(), ap_const_lv6_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read()) && 
          esl_seteq<1,6,6>(tmp_2341_fu_25853_p1.read(), ap_const_lv6_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read()) && 
          esl_seteq<1,6,6>(tmp_2352_fu_26626_p1.read(), ap_const_lv6_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read()) && 
          esl_seteq<1,6,6>(tmp_2365_fu_27392_p1.read(), ap_const_lv6_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read()) && 
          esl_seteq<1,6,6>(tmp_2376_fu_28173_p1.read(), ap_const_lv6_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read()) && 
          esl_seteq<1,6,6>(tmp_2389_fu_28939_p1.read(), ap_const_lv6_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read()) && 
          esl_seteq<1,6,6>(tmp_2400_fu_29724_p1.read(), ap_const_lv6_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read()) && 
          esl_seteq<1,6,6>(tmp_2413_fu_30498_p1.read(), ap_const_lv6_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read()) && 
          esl_seteq<1,6,6>(tmp_2424_fu_31283_p1.read(), ap_const_lv6_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read()) && 
          esl_seteq<1,6,6>(tmp_2437_fu_32061_p1.read(), ap_const_lv6_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read()) && 
          esl_seteq<1,6,6>(tmp_2448_fu_32850_p1.read(), ap_const_lv6_A)))) {
        weights_48_48_1x1_V_10_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_10_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_11_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read())) {
        weights_48_48_1x1_V_11_address0 =  (sc_lv<7>) (tmp_1683_cast_fu_32854_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read())) {
        weights_48_48_1x1_V_11_address0 =  (sc_lv<7>) (tmp_1646_cast_fu_32065_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read())) {
        weights_48_48_1x1_V_11_address0 =  (sc_lv<7>) (tmp_1605_cast_fu_31287_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read())) {
        weights_48_48_1x1_V_11_address0 =  (sc_lv<7>) (tmp_1566_cast_fu_30502_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read())) {
        weights_48_48_1x1_V_11_address0 =  (sc_lv<7>) (tmp_1525_cast_fu_29728_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read())) {
        weights_48_48_1x1_V_11_address0 =  (sc_lv<7>) (tmp_1487_cast_fu_28943_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read())) {
        weights_48_48_1x1_V_11_address0 =  (sc_lv<7>) (tmp_1448_cast_fu_28177_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read())) {
        weights_48_48_1x1_V_11_address0 =  (sc_lv<7>) (tmp_1410_cast_fu_27396_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read())) {
        weights_48_48_1x1_V_11_address0 =  (sc_lv<7>) (tmp_1371_cast_fu_26630_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read())) {
        weights_48_48_1x1_V_11_address0 =  (sc_lv<7>) (tmp_1334_cast_fu_25857_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read())) {
        weights_48_48_1x1_V_11_address0 =  (sc_lv<7>) (tmp_1295_cast_fu_25087_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read())) {
        weights_48_48_1x1_V_11_address0 =  (sc_lv<7>) (tmp_1258_cast_fu_24306_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read())) {
        weights_48_48_1x1_V_11_address0 =  (sc_lv<7>) (tmp_1217_cast_fu_23528_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read())) {
        weights_48_48_1x1_V_11_address0 =  (sc_lv<7>) (tmp_1180_cast_fu_22747_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read())) {
        weights_48_48_1x1_V_11_address0 =  (sc_lv<7>) (tmp_1141_cast_fu_21981_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read())) {
        weights_48_48_1x1_V_11_address0 =  (sc_lv<7>) (tmp_1104_cast_fu_21200_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read())) {
        weights_48_48_1x1_V_11_address0 =  (sc_lv<7>) (tmp_1076_cast_fu_20553_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read())) {
        weights_48_48_1x1_V_11_address0 =  (sc_lv<7>) (tmp_1036_cast_fu_19772_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read())) {
        weights_48_48_1x1_V_11_address0 =  (sc_lv<7>) (tmp_1002_cast_fu_18991_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_11_address0 = grp_subconv_1x1_16p_p_fu_13962_weight_11_V_address0.read();
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
        weights_48_48_1x1_V_11_address0 = grp_subconv_1x1_8_p_fu_13858_weight_11_V_address0.read();
    } else {
        weights_48_48_1x1_V_11_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_11_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_11_address1 = grp_subconv_1x1_16p_p_fu_13962_weight_11_V_address1.read();
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
        weights_48_48_1x1_V_11_address1 = grp_subconv_1x1_8_p_fu_13858_weight_11_V_address1.read();
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
        weights_48_48_1x1_V_11_ce0 = grp_subconv_1x1_16p_p_fu_13962_weight_11_V_ce0.read();
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
        weights_48_48_1x1_V_11_ce0 = grp_subconv_1x1_8_p_fu_13858_weight_11_V_ce0.read();
    } else {
        weights_48_48_1x1_V_11_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_11_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_11_ce1 = grp_subconv_1x1_16p_p_fu_13962_weight_11_V_ce1.read();
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
        weights_48_48_1x1_V_11_ce1 = grp_subconv_1x1_8_p_fu_13858_weight_11_V_ce1.read();
    } else {
        weights_48_48_1x1_V_11_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_11_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read()) && 
          esl_seteq<1,6,6>(tmp_2236_fu_18987_p1.read(), ap_const_lv6_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read()) && 
          esl_seteq<1,6,6>(tmp_2247_fu_19768_p1.read(), ap_const_lv6_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read()) && 
          esl_seteq<1,6,6>(tmp_2258_fu_20549_p1.read(), ap_const_lv6_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read()) && 
          esl_seteq<1,6,6>(tmp_2269_fu_21196_p1.read(), ap_const_lv6_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read()) && 
          esl_seteq<1,6,6>(tmp_2280_fu_21977_p1.read(), ap_const_lv6_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read()) && 
          esl_seteq<1,6,6>(tmp_2293_fu_22743_p1.read(), ap_const_lv6_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) && 
          esl_seteq<1,6,6>(tmp_2304_fu_23524_p1.read(), ap_const_lv6_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read()) && 
          esl_seteq<1,6,6>(tmp_2317_fu_24302_p1.read(), ap_const_lv6_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read()) && 
          esl_seteq<1,6,6>(tmp_2328_fu_25083_p1.read(), ap_const_lv6_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read()) && 
          esl_seteq<1,6,6>(tmp_2341_fu_25853_p1.read(), ap_const_lv6_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read()) && 
          esl_seteq<1,6,6>(tmp_2352_fu_26626_p1.read(), ap_const_lv6_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read()) && 
          esl_seteq<1,6,6>(tmp_2365_fu_27392_p1.read(), ap_const_lv6_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read()) && 
          esl_seteq<1,6,6>(tmp_2376_fu_28173_p1.read(), ap_const_lv6_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read()) && 
          esl_seteq<1,6,6>(tmp_2389_fu_28939_p1.read(), ap_const_lv6_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read()) && 
          esl_seteq<1,6,6>(tmp_2400_fu_29724_p1.read(), ap_const_lv6_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read()) && 
          esl_seteq<1,6,6>(tmp_2413_fu_30498_p1.read(), ap_const_lv6_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read()) && 
          esl_seteq<1,6,6>(tmp_2424_fu_31283_p1.read(), ap_const_lv6_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read()) && 
          esl_seteq<1,6,6>(tmp_2437_fu_32061_p1.read(), ap_const_lv6_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read()) && 
          esl_seteq<1,6,6>(tmp_2448_fu_32850_p1.read(), ap_const_lv6_B)))) {
        weights_48_48_1x1_V_11_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_11_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_12_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read())) {
        weights_48_48_1x1_V_12_address0 =  (sc_lv<7>) (tmp_1683_cast_fu_32854_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read())) {
        weights_48_48_1x1_V_12_address0 =  (sc_lv<7>) (tmp_1646_cast_fu_32065_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read())) {
        weights_48_48_1x1_V_12_address0 =  (sc_lv<7>) (tmp_1605_cast_fu_31287_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read())) {
        weights_48_48_1x1_V_12_address0 =  (sc_lv<7>) (tmp_1566_cast_fu_30502_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read())) {
        weights_48_48_1x1_V_12_address0 =  (sc_lv<7>) (tmp_1525_cast_fu_29728_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read())) {
        weights_48_48_1x1_V_12_address0 =  (sc_lv<7>) (tmp_1487_cast_fu_28943_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read())) {
        weights_48_48_1x1_V_12_address0 =  (sc_lv<7>) (tmp_1448_cast_fu_28177_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read())) {
        weights_48_48_1x1_V_12_address0 =  (sc_lv<7>) (tmp_1410_cast_fu_27396_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read())) {
        weights_48_48_1x1_V_12_address0 =  (sc_lv<7>) (tmp_1371_cast_fu_26630_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read())) {
        weights_48_48_1x1_V_12_address0 =  (sc_lv<7>) (tmp_1334_cast_fu_25857_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read())) {
        weights_48_48_1x1_V_12_address0 =  (sc_lv<7>) (tmp_1295_cast_fu_25087_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read())) {
        weights_48_48_1x1_V_12_address0 =  (sc_lv<7>) (tmp_1258_cast_fu_24306_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read())) {
        weights_48_48_1x1_V_12_address0 =  (sc_lv<7>) (tmp_1217_cast_fu_23528_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read())) {
        weights_48_48_1x1_V_12_address0 =  (sc_lv<7>) (tmp_1180_cast_fu_22747_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read())) {
        weights_48_48_1x1_V_12_address0 =  (sc_lv<7>) (tmp_1141_cast_fu_21981_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read())) {
        weights_48_48_1x1_V_12_address0 =  (sc_lv<7>) (tmp_1104_cast_fu_21200_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read())) {
        weights_48_48_1x1_V_12_address0 =  (sc_lv<7>) (tmp_1076_cast_fu_20553_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read())) {
        weights_48_48_1x1_V_12_address0 =  (sc_lv<7>) (tmp_1036_cast_fu_19772_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read())) {
        weights_48_48_1x1_V_12_address0 =  (sc_lv<7>) (tmp_1002_cast_fu_18991_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_12_address0 = grp_subconv_1x1_16p_p_fu_13962_weight_12_V_address0.read();
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
        weights_48_48_1x1_V_12_address0 = grp_subconv_1x1_8_p_fu_13858_weight_12_V_address0.read();
    } else {
        weights_48_48_1x1_V_12_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_12_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_12_address1 = grp_subconv_1x1_16p_p_fu_13962_weight_12_V_address1.read();
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
        weights_48_48_1x1_V_12_address1 = grp_subconv_1x1_8_p_fu_13858_weight_12_V_address1.read();
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
        weights_48_48_1x1_V_12_ce0 = grp_subconv_1x1_16p_p_fu_13962_weight_12_V_ce0.read();
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
        weights_48_48_1x1_V_12_ce0 = grp_subconv_1x1_8_p_fu_13858_weight_12_V_ce0.read();
    } else {
        weights_48_48_1x1_V_12_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_12_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_12_ce1 = grp_subconv_1x1_16p_p_fu_13962_weight_12_V_ce1.read();
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
        weights_48_48_1x1_V_12_ce1 = grp_subconv_1x1_8_p_fu_13858_weight_12_V_ce1.read();
    } else {
        weights_48_48_1x1_V_12_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_12_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read()) && 
          esl_seteq<1,6,6>(tmp_2236_fu_18987_p1.read(), ap_const_lv6_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read()) && 
          esl_seteq<1,6,6>(tmp_2247_fu_19768_p1.read(), ap_const_lv6_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read()) && 
          esl_seteq<1,6,6>(tmp_2258_fu_20549_p1.read(), ap_const_lv6_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read()) && 
          esl_seteq<1,6,6>(tmp_2269_fu_21196_p1.read(), ap_const_lv6_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read()) && 
          esl_seteq<1,6,6>(tmp_2280_fu_21977_p1.read(), ap_const_lv6_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read()) && 
          esl_seteq<1,6,6>(tmp_2293_fu_22743_p1.read(), ap_const_lv6_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) && 
          esl_seteq<1,6,6>(tmp_2304_fu_23524_p1.read(), ap_const_lv6_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read()) && 
          esl_seteq<1,6,6>(tmp_2317_fu_24302_p1.read(), ap_const_lv6_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read()) && 
          esl_seteq<1,6,6>(tmp_2328_fu_25083_p1.read(), ap_const_lv6_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read()) && 
          esl_seteq<1,6,6>(tmp_2341_fu_25853_p1.read(), ap_const_lv6_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read()) && 
          esl_seteq<1,6,6>(tmp_2352_fu_26626_p1.read(), ap_const_lv6_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read()) && 
          esl_seteq<1,6,6>(tmp_2365_fu_27392_p1.read(), ap_const_lv6_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read()) && 
          esl_seteq<1,6,6>(tmp_2376_fu_28173_p1.read(), ap_const_lv6_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read()) && 
          esl_seteq<1,6,6>(tmp_2389_fu_28939_p1.read(), ap_const_lv6_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read()) && 
          esl_seteq<1,6,6>(tmp_2400_fu_29724_p1.read(), ap_const_lv6_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read()) && 
          esl_seteq<1,6,6>(tmp_2413_fu_30498_p1.read(), ap_const_lv6_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read()) && 
          esl_seteq<1,6,6>(tmp_2424_fu_31283_p1.read(), ap_const_lv6_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read()) && 
          esl_seteq<1,6,6>(tmp_2437_fu_32061_p1.read(), ap_const_lv6_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read()) && 
          esl_seteq<1,6,6>(tmp_2448_fu_32850_p1.read(), ap_const_lv6_C)))) {
        weights_48_48_1x1_V_12_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_12_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_13_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read())) {
        weights_48_48_1x1_V_13_address0 =  (sc_lv<7>) (tmp_1683_cast_fu_32854_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read())) {
        weights_48_48_1x1_V_13_address0 =  (sc_lv<7>) (tmp_1646_cast_fu_32065_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read())) {
        weights_48_48_1x1_V_13_address0 =  (sc_lv<7>) (tmp_1605_cast_fu_31287_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read())) {
        weights_48_48_1x1_V_13_address0 =  (sc_lv<7>) (tmp_1566_cast_fu_30502_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read())) {
        weights_48_48_1x1_V_13_address0 =  (sc_lv<7>) (tmp_1525_cast_fu_29728_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read())) {
        weights_48_48_1x1_V_13_address0 =  (sc_lv<7>) (tmp_1487_cast_fu_28943_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read())) {
        weights_48_48_1x1_V_13_address0 =  (sc_lv<7>) (tmp_1448_cast_fu_28177_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read())) {
        weights_48_48_1x1_V_13_address0 =  (sc_lv<7>) (tmp_1410_cast_fu_27396_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read())) {
        weights_48_48_1x1_V_13_address0 =  (sc_lv<7>) (tmp_1371_cast_fu_26630_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read())) {
        weights_48_48_1x1_V_13_address0 =  (sc_lv<7>) (tmp_1334_cast_fu_25857_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read())) {
        weights_48_48_1x1_V_13_address0 =  (sc_lv<7>) (tmp_1295_cast_fu_25087_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read())) {
        weights_48_48_1x1_V_13_address0 =  (sc_lv<7>) (tmp_1258_cast_fu_24306_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read())) {
        weights_48_48_1x1_V_13_address0 =  (sc_lv<7>) (tmp_1217_cast_fu_23528_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read())) {
        weights_48_48_1x1_V_13_address0 =  (sc_lv<7>) (tmp_1180_cast_fu_22747_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read())) {
        weights_48_48_1x1_V_13_address0 =  (sc_lv<7>) (tmp_1141_cast_fu_21981_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read())) {
        weights_48_48_1x1_V_13_address0 =  (sc_lv<7>) (tmp_1104_cast_fu_21200_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read())) {
        weights_48_48_1x1_V_13_address0 =  (sc_lv<7>) (tmp_1076_cast_fu_20553_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read())) {
        weights_48_48_1x1_V_13_address0 =  (sc_lv<7>) (tmp_1036_cast_fu_19772_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read())) {
        weights_48_48_1x1_V_13_address0 =  (sc_lv<7>) (tmp_1002_cast_fu_18991_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_13_address0 = grp_subconv_1x1_16p_p_fu_13962_weight_13_V_address0.read();
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
        weights_48_48_1x1_V_13_address0 = grp_subconv_1x1_8_p_fu_13858_weight_13_V_address0.read();
    } else {
        weights_48_48_1x1_V_13_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_13_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_13_address1 = grp_subconv_1x1_16p_p_fu_13962_weight_13_V_address1.read();
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
        weights_48_48_1x1_V_13_address1 = grp_subconv_1x1_8_p_fu_13858_weight_13_V_address1.read();
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
        weights_48_48_1x1_V_13_ce0 = grp_subconv_1x1_16p_p_fu_13962_weight_13_V_ce0.read();
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
        weights_48_48_1x1_V_13_ce0 = grp_subconv_1x1_8_p_fu_13858_weight_13_V_ce0.read();
    } else {
        weights_48_48_1x1_V_13_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_13_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_13_ce1 = grp_subconv_1x1_16p_p_fu_13962_weight_13_V_ce1.read();
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
        weights_48_48_1x1_V_13_ce1 = grp_subconv_1x1_8_p_fu_13858_weight_13_V_ce1.read();
    } else {
        weights_48_48_1x1_V_13_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_13_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read()) && 
          esl_seteq<1,6,6>(tmp_2236_fu_18987_p1.read(), ap_const_lv6_D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read()) && 
          esl_seteq<1,6,6>(tmp_2247_fu_19768_p1.read(), ap_const_lv6_D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read()) && 
          esl_seteq<1,6,6>(tmp_2258_fu_20549_p1.read(), ap_const_lv6_D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read()) && 
          esl_seteq<1,6,6>(tmp_2269_fu_21196_p1.read(), ap_const_lv6_D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read()) && 
          esl_seteq<1,6,6>(tmp_2280_fu_21977_p1.read(), ap_const_lv6_D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read()) && 
          esl_seteq<1,6,6>(tmp_2293_fu_22743_p1.read(), ap_const_lv6_D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) && 
          esl_seteq<1,6,6>(tmp_2304_fu_23524_p1.read(), ap_const_lv6_D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read()) && 
          esl_seteq<1,6,6>(tmp_2317_fu_24302_p1.read(), ap_const_lv6_D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read()) && 
          esl_seteq<1,6,6>(tmp_2328_fu_25083_p1.read(), ap_const_lv6_D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read()) && 
          esl_seteq<1,6,6>(tmp_2341_fu_25853_p1.read(), ap_const_lv6_D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read()) && 
          esl_seteq<1,6,6>(tmp_2352_fu_26626_p1.read(), ap_const_lv6_D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read()) && 
          esl_seteq<1,6,6>(tmp_2365_fu_27392_p1.read(), ap_const_lv6_D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read()) && 
          esl_seteq<1,6,6>(tmp_2376_fu_28173_p1.read(), ap_const_lv6_D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read()) && 
          esl_seteq<1,6,6>(tmp_2389_fu_28939_p1.read(), ap_const_lv6_D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read()) && 
          esl_seteq<1,6,6>(tmp_2400_fu_29724_p1.read(), ap_const_lv6_D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read()) && 
          esl_seteq<1,6,6>(tmp_2413_fu_30498_p1.read(), ap_const_lv6_D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read()) && 
          esl_seteq<1,6,6>(tmp_2424_fu_31283_p1.read(), ap_const_lv6_D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read()) && 
          esl_seteq<1,6,6>(tmp_2437_fu_32061_p1.read(), ap_const_lv6_D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read()) && 
          esl_seteq<1,6,6>(tmp_2448_fu_32850_p1.read(), ap_const_lv6_D)))) {
        weights_48_48_1x1_V_13_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_13_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_14_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read())) {
        weights_48_48_1x1_V_14_address0 =  (sc_lv<7>) (tmp_1683_cast_fu_32854_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read())) {
        weights_48_48_1x1_V_14_address0 =  (sc_lv<7>) (tmp_1646_cast_fu_32065_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read())) {
        weights_48_48_1x1_V_14_address0 =  (sc_lv<7>) (tmp_1605_cast_fu_31287_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read())) {
        weights_48_48_1x1_V_14_address0 =  (sc_lv<7>) (tmp_1566_cast_fu_30502_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read())) {
        weights_48_48_1x1_V_14_address0 =  (sc_lv<7>) (tmp_1525_cast_fu_29728_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read())) {
        weights_48_48_1x1_V_14_address0 =  (sc_lv<7>) (tmp_1487_cast_fu_28943_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read())) {
        weights_48_48_1x1_V_14_address0 =  (sc_lv<7>) (tmp_1448_cast_fu_28177_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read())) {
        weights_48_48_1x1_V_14_address0 =  (sc_lv<7>) (tmp_1410_cast_fu_27396_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read())) {
        weights_48_48_1x1_V_14_address0 =  (sc_lv<7>) (tmp_1371_cast_fu_26630_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read())) {
        weights_48_48_1x1_V_14_address0 =  (sc_lv<7>) (tmp_1334_cast_fu_25857_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read())) {
        weights_48_48_1x1_V_14_address0 =  (sc_lv<7>) (tmp_1295_cast_fu_25087_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read())) {
        weights_48_48_1x1_V_14_address0 =  (sc_lv<7>) (tmp_1258_cast_fu_24306_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read())) {
        weights_48_48_1x1_V_14_address0 =  (sc_lv<7>) (tmp_1217_cast_fu_23528_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read())) {
        weights_48_48_1x1_V_14_address0 =  (sc_lv<7>) (tmp_1180_cast_fu_22747_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read())) {
        weights_48_48_1x1_V_14_address0 =  (sc_lv<7>) (tmp_1141_cast_fu_21981_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read())) {
        weights_48_48_1x1_V_14_address0 =  (sc_lv<7>) (tmp_1104_cast_fu_21200_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read())) {
        weights_48_48_1x1_V_14_address0 =  (sc_lv<7>) (tmp_1076_cast_fu_20553_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read())) {
        weights_48_48_1x1_V_14_address0 =  (sc_lv<7>) (tmp_1036_cast_fu_19772_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read())) {
        weights_48_48_1x1_V_14_address0 =  (sc_lv<7>) (tmp_1002_cast_fu_18991_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_14_address0 = grp_subconv_1x1_16p_p_fu_13962_weight_14_V_address0.read();
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
        weights_48_48_1x1_V_14_address0 = grp_subconv_1x1_8_p_fu_13858_weight_14_V_address0.read();
    } else {
        weights_48_48_1x1_V_14_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_14_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_14_address1 = grp_subconv_1x1_16p_p_fu_13962_weight_14_V_address1.read();
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
        weights_48_48_1x1_V_14_address1 = grp_subconv_1x1_8_p_fu_13858_weight_14_V_address1.read();
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
        weights_48_48_1x1_V_14_ce0 = grp_subconv_1x1_16p_p_fu_13962_weight_14_V_ce0.read();
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
        weights_48_48_1x1_V_14_ce0 = grp_subconv_1x1_8_p_fu_13858_weight_14_V_ce0.read();
    } else {
        weights_48_48_1x1_V_14_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_14_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_14_ce1 = grp_subconv_1x1_16p_p_fu_13962_weight_14_V_ce1.read();
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
        weights_48_48_1x1_V_14_ce1 = grp_subconv_1x1_8_p_fu_13858_weight_14_V_ce1.read();
    } else {
        weights_48_48_1x1_V_14_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_14_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read()) && 
          esl_seteq<1,6,6>(tmp_2236_fu_18987_p1.read(), ap_const_lv6_E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read()) && 
          esl_seteq<1,6,6>(tmp_2247_fu_19768_p1.read(), ap_const_lv6_E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read()) && 
          esl_seteq<1,6,6>(tmp_2258_fu_20549_p1.read(), ap_const_lv6_E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read()) && 
          esl_seteq<1,6,6>(tmp_2269_fu_21196_p1.read(), ap_const_lv6_E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read()) && 
          esl_seteq<1,6,6>(tmp_2280_fu_21977_p1.read(), ap_const_lv6_E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read()) && 
          esl_seteq<1,6,6>(tmp_2293_fu_22743_p1.read(), ap_const_lv6_E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) && 
          esl_seteq<1,6,6>(tmp_2304_fu_23524_p1.read(), ap_const_lv6_E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read()) && 
          esl_seteq<1,6,6>(tmp_2317_fu_24302_p1.read(), ap_const_lv6_E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read()) && 
          esl_seteq<1,6,6>(tmp_2328_fu_25083_p1.read(), ap_const_lv6_E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read()) && 
          esl_seteq<1,6,6>(tmp_2341_fu_25853_p1.read(), ap_const_lv6_E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read()) && 
          esl_seteq<1,6,6>(tmp_2352_fu_26626_p1.read(), ap_const_lv6_E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read()) && 
          esl_seteq<1,6,6>(tmp_2365_fu_27392_p1.read(), ap_const_lv6_E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read()) && 
          esl_seteq<1,6,6>(tmp_2376_fu_28173_p1.read(), ap_const_lv6_E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read()) && 
          esl_seteq<1,6,6>(tmp_2389_fu_28939_p1.read(), ap_const_lv6_E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read()) && 
          esl_seteq<1,6,6>(tmp_2400_fu_29724_p1.read(), ap_const_lv6_E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read()) && 
          esl_seteq<1,6,6>(tmp_2413_fu_30498_p1.read(), ap_const_lv6_E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read()) && 
          esl_seteq<1,6,6>(tmp_2424_fu_31283_p1.read(), ap_const_lv6_E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read()) && 
          esl_seteq<1,6,6>(tmp_2437_fu_32061_p1.read(), ap_const_lv6_E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read()) && 
          esl_seteq<1,6,6>(tmp_2448_fu_32850_p1.read(), ap_const_lv6_E)))) {
        weights_48_48_1x1_V_14_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_14_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_15_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read())) {
        weights_48_48_1x1_V_15_address0 =  (sc_lv<7>) (tmp_1683_cast_fu_32854_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read())) {
        weights_48_48_1x1_V_15_address0 =  (sc_lv<7>) (tmp_1646_cast_fu_32065_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read())) {
        weights_48_48_1x1_V_15_address0 =  (sc_lv<7>) (tmp_1605_cast_fu_31287_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read())) {
        weights_48_48_1x1_V_15_address0 =  (sc_lv<7>) (tmp_1566_cast_fu_30502_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read())) {
        weights_48_48_1x1_V_15_address0 =  (sc_lv<7>) (tmp_1525_cast_fu_29728_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read())) {
        weights_48_48_1x1_V_15_address0 =  (sc_lv<7>) (tmp_1487_cast_fu_28943_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read())) {
        weights_48_48_1x1_V_15_address0 =  (sc_lv<7>) (tmp_1448_cast_fu_28177_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read())) {
        weights_48_48_1x1_V_15_address0 =  (sc_lv<7>) (tmp_1410_cast_fu_27396_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read())) {
        weights_48_48_1x1_V_15_address0 =  (sc_lv<7>) (tmp_1371_cast_fu_26630_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read())) {
        weights_48_48_1x1_V_15_address0 =  (sc_lv<7>) (tmp_1334_cast_fu_25857_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read())) {
        weights_48_48_1x1_V_15_address0 =  (sc_lv<7>) (tmp_1295_cast_fu_25087_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read())) {
        weights_48_48_1x1_V_15_address0 =  (sc_lv<7>) (tmp_1258_cast_fu_24306_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read())) {
        weights_48_48_1x1_V_15_address0 =  (sc_lv<7>) (tmp_1217_cast_fu_23528_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read())) {
        weights_48_48_1x1_V_15_address0 =  (sc_lv<7>) (tmp_1180_cast_fu_22747_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read())) {
        weights_48_48_1x1_V_15_address0 =  (sc_lv<7>) (tmp_1141_cast_fu_21981_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read())) {
        weights_48_48_1x1_V_15_address0 =  (sc_lv<7>) (tmp_1104_cast_fu_21200_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read())) {
        weights_48_48_1x1_V_15_address0 =  (sc_lv<7>) (tmp_1076_cast_fu_20553_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read())) {
        weights_48_48_1x1_V_15_address0 =  (sc_lv<7>) (tmp_1036_cast_fu_19772_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read())) {
        weights_48_48_1x1_V_15_address0 =  (sc_lv<7>) (tmp_1002_cast_fu_18991_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_15_address0 = grp_subconv_1x1_16p_p_fu_13962_weight_15_V_address0.read();
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
        weights_48_48_1x1_V_15_address0 = grp_subconv_1x1_8_p_fu_13858_weight_15_V_address0.read();
    } else {
        weights_48_48_1x1_V_15_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_15_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_15_address1 = grp_subconv_1x1_16p_p_fu_13962_weight_15_V_address1.read();
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
        weights_48_48_1x1_V_15_address1 = grp_subconv_1x1_8_p_fu_13858_weight_15_V_address1.read();
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
        weights_48_48_1x1_V_15_ce0 = grp_subconv_1x1_16p_p_fu_13962_weight_15_V_ce0.read();
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
        weights_48_48_1x1_V_15_ce0 = grp_subconv_1x1_8_p_fu_13858_weight_15_V_ce0.read();
    } else {
        weights_48_48_1x1_V_15_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_15_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_15_ce1 = grp_subconv_1x1_16p_p_fu_13962_weight_15_V_ce1.read();
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
        weights_48_48_1x1_V_15_ce1 = grp_subconv_1x1_8_p_fu_13858_weight_15_V_ce1.read();
    } else {
        weights_48_48_1x1_V_15_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_15_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read()) && 
          esl_seteq<1,6,6>(tmp_2236_fu_18987_p1.read(), ap_const_lv6_F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read()) && 
          esl_seteq<1,6,6>(tmp_2247_fu_19768_p1.read(), ap_const_lv6_F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read()) && 
          esl_seteq<1,6,6>(tmp_2258_fu_20549_p1.read(), ap_const_lv6_F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read()) && 
          esl_seteq<1,6,6>(tmp_2269_fu_21196_p1.read(), ap_const_lv6_F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read()) && 
          esl_seteq<1,6,6>(tmp_2280_fu_21977_p1.read(), ap_const_lv6_F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read()) && 
          esl_seteq<1,6,6>(tmp_2293_fu_22743_p1.read(), ap_const_lv6_F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) && 
          esl_seteq<1,6,6>(tmp_2304_fu_23524_p1.read(), ap_const_lv6_F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read()) && 
          esl_seteq<1,6,6>(tmp_2317_fu_24302_p1.read(), ap_const_lv6_F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read()) && 
          esl_seteq<1,6,6>(tmp_2328_fu_25083_p1.read(), ap_const_lv6_F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read()) && 
          esl_seteq<1,6,6>(tmp_2341_fu_25853_p1.read(), ap_const_lv6_F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read()) && 
          esl_seteq<1,6,6>(tmp_2352_fu_26626_p1.read(), ap_const_lv6_F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read()) && 
          esl_seteq<1,6,6>(tmp_2365_fu_27392_p1.read(), ap_const_lv6_F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read()) && 
          esl_seteq<1,6,6>(tmp_2376_fu_28173_p1.read(), ap_const_lv6_F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read()) && 
          esl_seteq<1,6,6>(tmp_2389_fu_28939_p1.read(), ap_const_lv6_F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read()) && 
          esl_seteq<1,6,6>(tmp_2400_fu_29724_p1.read(), ap_const_lv6_F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read()) && 
          esl_seteq<1,6,6>(tmp_2413_fu_30498_p1.read(), ap_const_lv6_F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read()) && 
          esl_seteq<1,6,6>(tmp_2424_fu_31283_p1.read(), ap_const_lv6_F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read()) && 
          esl_seteq<1,6,6>(tmp_2437_fu_32061_p1.read(), ap_const_lv6_F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read()) && 
          esl_seteq<1,6,6>(tmp_2448_fu_32850_p1.read(), ap_const_lv6_F)))) {
        weights_48_48_1x1_V_15_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_15_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_16_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read())) {
        weights_48_48_1x1_V_16_address0 =  (sc_lv<7>) (tmp_1683_cast_fu_32854_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read())) {
        weights_48_48_1x1_V_16_address0 =  (sc_lv<7>) (tmp_1646_cast_fu_32065_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read())) {
        weights_48_48_1x1_V_16_address0 =  (sc_lv<7>) (tmp_1605_cast_fu_31287_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read())) {
        weights_48_48_1x1_V_16_address0 =  (sc_lv<7>) (tmp_1566_cast_fu_30502_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read())) {
        weights_48_48_1x1_V_16_address0 =  (sc_lv<7>) (tmp_1525_cast_fu_29728_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read())) {
        weights_48_48_1x1_V_16_address0 =  (sc_lv<7>) (tmp_1487_cast_fu_28943_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read())) {
        weights_48_48_1x1_V_16_address0 =  (sc_lv<7>) (tmp_1448_cast_fu_28177_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read())) {
        weights_48_48_1x1_V_16_address0 =  (sc_lv<7>) (tmp_1410_cast_fu_27396_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read())) {
        weights_48_48_1x1_V_16_address0 =  (sc_lv<7>) (tmp_1371_cast_fu_26630_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read())) {
        weights_48_48_1x1_V_16_address0 =  (sc_lv<7>) (tmp_1334_cast_fu_25857_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read())) {
        weights_48_48_1x1_V_16_address0 =  (sc_lv<7>) (tmp_1295_cast_fu_25087_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read())) {
        weights_48_48_1x1_V_16_address0 =  (sc_lv<7>) (tmp_1258_cast_fu_24306_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read())) {
        weights_48_48_1x1_V_16_address0 =  (sc_lv<7>) (tmp_1217_cast_fu_23528_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read())) {
        weights_48_48_1x1_V_16_address0 =  (sc_lv<7>) (tmp_1180_cast_fu_22747_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read())) {
        weights_48_48_1x1_V_16_address0 =  (sc_lv<7>) (tmp_1141_cast_fu_21981_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read())) {
        weights_48_48_1x1_V_16_address0 =  (sc_lv<7>) (tmp_1104_cast_fu_21200_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read())) {
        weights_48_48_1x1_V_16_address0 =  (sc_lv<7>) (tmp_1076_cast_fu_20553_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read())) {
        weights_48_48_1x1_V_16_address0 =  (sc_lv<7>) (tmp_1036_cast_fu_19772_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read())) {
        weights_48_48_1x1_V_16_address0 =  (sc_lv<7>) (tmp_1002_cast_fu_18991_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_16_address0 = grp_subconv_1x1_16p_p_fu_13962_weight_16_V_address0.read();
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
        weights_48_48_1x1_V_16_address0 = grp_subconv_1x1_8_p_fu_13858_weight_16_V_address0.read();
    } else {
        weights_48_48_1x1_V_16_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_16_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_16_address1 = grp_subconv_1x1_16p_p_fu_13962_weight_16_V_address1.read();
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
        weights_48_48_1x1_V_16_address1 = grp_subconv_1x1_8_p_fu_13858_weight_16_V_address1.read();
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
        weights_48_48_1x1_V_16_ce0 = grp_subconv_1x1_16p_p_fu_13962_weight_16_V_ce0.read();
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
        weights_48_48_1x1_V_16_ce0 = grp_subconv_1x1_8_p_fu_13858_weight_16_V_ce0.read();
    } else {
        weights_48_48_1x1_V_16_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_16_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_16_ce1 = grp_subconv_1x1_16p_p_fu_13962_weight_16_V_ce1.read();
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
        weights_48_48_1x1_V_16_ce1 = grp_subconv_1x1_8_p_fu_13858_weight_16_V_ce1.read();
    } else {
        weights_48_48_1x1_V_16_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_16_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read()) && 
          esl_seteq<1,6,6>(tmp_2236_fu_18987_p1.read(), ap_const_lv6_10)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read()) && 
          esl_seteq<1,6,6>(tmp_2247_fu_19768_p1.read(), ap_const_lv6_10)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read()) && 
          esl_seteq<1,6,6>(tmp_2258_fu_20549_p1.read(), ap_const_lv6_10)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read()) && 
          esl_seteq<1,6,6>(tmp_2269_fu_21196_p1.read(), ap_const_lv6_10)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read()) && 
          esl_seteq<1,6,6>(tmp_2280_fu_21977_p1.read(), ap_const_lv6_10)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read()) && 
          esl_seteq<1,6,6>(tmp_2293_fu_22743_p1.read(), ap_const_lv6_10)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) && 
          esl_seteq<1,6,6>(tmp_2304_fu_23524_p1.read(), ap_const_lv6_10)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read()) && 
          esl_seteq<1,6,6>(tmp_2317_fu_24302_p1.read(), ap_const_lv6_10)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read()) && 
          esl_seteq<1,6,6>(tmp_2328_fu_25083_p1.read(), ap_const_lv6_10)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read()) && 
          esl_seteq<1,6,6>(tmp_2341_fu_25853_p1.read(), ap_const_lv6_10)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read()) && 
          esl_seteq<1,6,6>(tmp_2352_fu_26626_p1.read(), ap_const_lv6_10)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read()) && 
          esl_seteq<1,6,6>(tmp_2365_fu_27392_p1.read(), ap_const_lv6_10)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read()) && 
          esl_seteq<1,6,6>(tmp_2376_fu_28173_p1.read(), ap_const_lv6_10)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read()) && 
          esl_seteq<1,6,6>(tmp_2389_fu_28939_p1.read(), ap_const_lv6_10)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read()) && 
          esl_seteq<1,6,6>(tmp_2400_fu_29724_p1.read(), ap_const_lv6_10)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read()) && 
          esl_seteq<1,6,6>(tmp_2413_fu_30498_p1.read(), ap_const_lv6_10)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read()) && 
          esl_seteq<1,6,6>(tmp_2424_fu_31283_p1.read(), ap_const_lv6_10)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read()) && 
          esl_seteq<1,6,6>(tmp_2437_fu_32061_p1.read(), ap_const_lv6_10)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read()) && 
          esl_seteq<1,6,6>(tmp_2448_fu_32850_p1.read(), ap_const_lv6_10)))) {
        weights_48_48_1x1_V_16_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_16_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_17_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read())) {
        weights_48_48_1x1_V_17_address0 =  (sc_lv<7>) (tmp_1683_cast_fu_32854_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read())) {
        weights_48_48_1x1_V_17_address0 =  (sc_lv<7>) (tmp_1646_cast_fu_32065_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read())) {
        weights_48_48_1x1_V_17_address0 =  (sc_lv<7>) (tmp_1605_cast_fu_31287_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read())) {
        weights_48_48_1x1_V_17_address0 =  (sc_lv<7>) (tmp_1566_cast_fu_30502_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read())) {
        weights_48_48_1x1_V_17_address0 =  (sc_lv<7>) (tmp_1525_cast_fu_29728_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read())) {
        weights_48_48_1x1_V_17_address0 =  (sc_lv<7>) (tmp_1487_cast_fu_28943_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read())) {
        weights_48_48_1x1_V_17_address0 =  (sc_lv<7>) (tmp_1448_cast_fu_28177_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read())) {
        weights_48_48_1x1_V_17_address0 =  (sc_lv<7>) (tmp_1410_cast_fu_27396_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read())) {
        weights_48_48_1x1_V_17_address0 =  (sc_lv<7>) (tmp_1371_cast_fu_26630_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read())) {
        weights_48_48_1x1_V_17_address0 =  (sc_lv<7>) (tmp_1334_cast_fu_25857_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read())) {
        weights_48_48_1x1_V_17_address0 =  (sc_lv<7>) (tmp_1295_cast_fu_25087_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read())) {
        weights_48_48_1x1_V_17_address0 =  (sc_lv<7>) (tmp_1258_cast_fu_24306_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read())) {
        weights_48_48_1x1_V_17_address0 =  (sc_lv<7>) (tmp_1217_cast_fu_23528_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read())) {
        weights_48_48_1x1_V_17_address0 =  (sc_lv<7>) (tmp_1180_cast_fu_22747_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read())) {
        weights_48_48_1x1_V_17_address0 =  (sc_lv<7>) (tmp_1141_cast_fu_21981_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read())) {
        weights_48_48_1x1_V_17_address0 =  (sc_lv<7>) (tmp_1104_cast_fu_21200_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read())) {
        weights_48_48_1x1_V_17_address0 =  (sc_lv<7>) (tmp_1076_cast_fu_20553_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read())) {
        weights_48_48_1x1_V_17_address0 =  (sc_lv<7>) (tmp_1036_cast_fu_19772_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read())) {
        weights_48_48_1x1_V_17_address0 =  (sc_lv<7>) (tmp_1002_cast_fu_18991_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_17_address0 = grp_subconv_1x1_16p_p_fu_13962_weight_17_V_address0.read();
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
        weights_48_48_1x1_V_17_address0 = grp_subconv_1x1_8_p_fu_13858_weight_17_V_address0.read();
    } else {
        weights_48_48_1x1_V_17_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_17_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_17_address1 = grp_subconv_1x1_16p_p_fu_13962_weight_17_V_address1.read();
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
        weights_48_48_1x1_V_17_address1 = grp_subconv_1x1_8_p_fu_13858_weight_17_V_address1.read();
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
        weights_48_48_1x1_V_17_ce0 = grp_subconv_1x1_16p_p_fu_13962_weight_17_V_ce0.read();
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
        weights_48_48_1x1_V_17_ce0 = grp_subconv_1x1_8_p_fu_13858_weight_17_V_ce0.read();
    } else {
        weights_48_48_1x1_V_17_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_17_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_17_ce1 = grp_subconv_1x1_16p_p_fu_13962_weight_17_V_ce1.read();
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
        weights_48_48_1x1_V_17_ce1 = grp_subconv_1x1_8_p_fu_13858_weight_17_V_ce1.read();
    } else {
        weights_48_48_1x1_V_17_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_17_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read()) && 
          esl_seteq<1,6,6>(tmp_2236_fu_18987_p1.read(), ap_const_lv6_11)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read()) && 
          esl_seteq<1,6,6>(tmp_2247_fu_19768_p1.read(), ap_const_lv6_11)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read()) && 
          esl_seteq<1,6,6>(tmp_2258_fu_20549_p1.read(), ap_const_lv6_11)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read()) && 
          esl_seteq<1,6,6>(tmp_2269_fu_21196_p1.read(), ap_const_lv6_11)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read()) && 
          esl_seteq<1,6,6>(tmp_2280_fu_21977_p1.read(), ap_const_lv6_11)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read()) && 
          esl_seteq<1,6,6>(tmp_2293_fu_22743_p1.read(), ap_const_lv6_11)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) && 
          esl_seteq<1,6,6>(tmp_2304_fu_23524_p1.read(), ap_const_lv6_11)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read()) && 
          esl_seteq<1,6,6>(tmp_2317_fu_24302_p1.read(), ap_const_lv6_11)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read()) && 
          esl_seteq<1,6,6>(tmp_2328_fu_25083_p1.read(), ap_const_lv6_11)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read()) && 
          esl_seteq<1,6,6>(tmp_2341_fu_25853_p1.read(), ap_const_lv6_11)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read()) && 
          esl_seteq<1,6,6>(tmp_2352_fu_26626_p1.read(), ap_const_lv6_11)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read()) && 
          esl_seteq<1,6,6>(tmp_2365_fu_27392_p1.read(), ap_const_lv6_11)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read()) && 
          esl_seteq<1,6,6>(tmp_2376_fu_28173_p1.read(), ap_const_lv6_11)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read()) && 
          esl_seteq<1,6,6>(tmp_2389_fu_28939_p1.read(), ap_const_lv6_11)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read()) && 
          esl_seteq<1,6,6>(tmp_2400_fu_29724_p1.read(), ap_const_lv6_11)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read()) && 
          esl_seteq<1,6,6>(tmp_2413_fu_30498_p1.read(), ap_const_lv6_11)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read()) && 
          esl_seteq<1,6,6>(tmp_2424_fu_31283_p1.read(), ap_const_lv6_11)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read()) && 
          esl_seteq<1,6,6>(tmp_2437_fu_32061_p1.read(), ap_const_lv6_11)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read()) && 
          esl_seteq<1,6,6>(tmp_2448_fu_32850_p1.read(), ap_const_lv6_11)))) {
        weights_48_48_1x1_V_17_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_17_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_18_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read())) {
        weights_48_48_1x1_V_18_address0 =  (sc_lv<7>) (tmp_1683_cast_fu_32854_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read())) {
        weights_48_48_1x1_V_18_address0 =  (sc_lv<7>) (tmp_1646_cast_fu_32065_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read())) {
        weights_48_48_1x1_V_18_address0 =  (sc_lv<7>) (tmp_1605_cast_fu_31287_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read())) {
        weights_48_48_1x1_V_18_address0 =  (sc_lv<7>) (tmp_1566_cast_fu_30502_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read())) {
        weights_48_48_1x1_V_18_address0 =  (sc_lv<7>) (tmp_1525_cast_fu_29728_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read())) {
        weights_48_48_1x1_V_18_address0 =  (sc_lv<7>) (tmp_1487_cast_fu_28943_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read())) {
        weights_48_48_1x1_V_18_address0 =  (sc_lv<7>) (tmp_1448_cast_fu_28177_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read())) {
        weights_48_48_1x1_V_18_address0 =  (sc_lv<7>) (tmp_1410_cast_fu_27396_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read())) {
        weights_48_48_1x1_V_18_address0 =  (sc_lv<7>) (tmp_1371_cast_fu_26630_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read())) {
        weights_48_48_1x1_V_18_address0 =  (sc_lv<7>) (tmp_1334_cast_fu_25857_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read())) {
        weights_48_48_1x1_V_18_address0 =  (sc_lv<7>) (tmp_1295_cast_fu_25087_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read())) {
        weights_48_48_1x1_V_18_address0 =  (sc_lv<7>) (tmp_1258_cast_fu_24306_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read())) {
        weights_48_48_1x1_V_18_address0 =  (sc_lv<7>) (tmp_1217_cast_fu_23528_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read())) {
        weights_48_48_1x1_V_18_address0 =  (sc_lv<7>) (tmp_1180_cast_fu_22747_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read())) {
        weights_48_48_1x1_V_18_address0 =  (sc_lv<7>) (tmp_1141_cast_fu_21981_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read())) {
        weights_48_48_1x1_V_18_address0 =  (sc_lv<7>) (tmp_1104_cast_fu_21200_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read())) {
        weights_48_48_1x1_V_18_address0 =  (sc_lv<7>) (tmp_1076_cast_fu_20553_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read())) {
        weights_48_48_1x1_V_18_address0 =  (sc_lv<7>) (tmp_1036_cast_fu_19772_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read())) {
        weights_48_48_1x1_V_18_address0 =  (sc_lv<7>) (tmp_1002_cast_fu_18991_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_18_address0 = grp_subconv_1x1_16p_p_fu_13962_weight_18_V_address0.read();
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
        weights_48_48_1x1_V_18_address0 = grp_subconv_1x1_8_p_fu_13858_weight_18_V_address0.read();
    } else {
        weights_48_48_1x1_V_18_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_18_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_18_address1 = grp_subconv_1x1_16p_p_fu_13962_weight_18_V_address1.read();
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
        weights_48_48_1x1_V_18_address1 = grp_subconv_1x1_8_p_fu_13858_weight_18_V_address1.read();
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
        weights_48_48_1x1_V_18_ce0 = grp_subconv_1x1_16p_p_fu_13962_weight_18_V_ce0.read();
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
        weights_48_48_1x1_V_18_ce0 = grp_subconv_1x1_8_p_fu_13858_weight_18_V_ce0.read();
    } else {
        weights_48_48_1x1_V_18_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_18_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_18_ce1 = grp_subconv_1x1_16p_p_fu_13962_weight_18_V_ce1.read();
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
        weights_48_48_1x1_V_18_ce1 = grp_subconv_1x1_8_p_fu_13858_weight_18_V_ce1.read();
    } else {
        weights_48_48_1x1_V_18_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_18_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read()) && 
          esl_seteq<1,6,6>(tmp_2236_fu_18987_p1.read(), ap_const_lv6_12)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read()) && 
          esl_seteq<1,6,6>(tmp_2247_fu_19768_p1.read(), ap_const_lv6_12)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read()) && 
          esl_seteq<1,6,6>(tmp_2258_fu_20549_p1.read(), ap_const_lv6_12)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read()) && 
          esl_seteq<1,6,6>(tmp_2269_fu_21196_p1.read(), ap_const_lv6_12)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read()) && 
          esl_seteq<1,6,6>(tmp_2280_fu_21977_p1.read(), ap_const_lv6_12)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read()) && 
          esl_seteq<1,6,6>(tmp_2293_fu_22743_p1.read(), ap_const_lv6_12)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) && 
          esl_seteq<1,6,6>(tmp_2304_fu_23524_p1.read(), ap_const_lv6_12)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read()) && 
          esl_seteq<1,6,6>(tmp_2317_fu_24302_p1.read(), ap_const_lv6_12)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read()) && 
          esl_seteq<1,6,6>(tmp_2328_fu_25083_p1.read(), ap_const_lv6_12)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read()) && 
          esl_seteq<1,6,6>(tmp_2341_fu_25853_p1.read(), ap_const_lv6_12)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read()) && 
          esl_seteq<1,6,6>(tmp_2352_fu_26626_p1.read(), ap_const_lv6_12)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read()) && 
          esl_seteq<1,6,6>(tmp_2365_fu_27392_p1.read(), ap_const_lv6_12)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read()) && 
          esl_seteq<1,6,6>(tmp_2376_fu_28173_p1.read(), ap_const_lv6_12)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read()) && 
          esl_seteq<1,6,6>(tmp_2389_fu_28939_p1.read(), ap_const_lv6_12)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read()) && 
          esl_seteq<1,6,6>(tmp_2400_fu_29724_p1.read(), ap_const_lv6_12)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read()) && 
          esl_seteq<1,6,6>(tmp_2413_fu_30498_p1.read(), ap_const_lv6_12)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read()) && 
          esl_seteq<1,6,6>(tmp_2424_fu_31283_p1.read(), ap_const_lv6_12)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read()) && 
          esl_seteq<1,6,6>(tmp_2437_fu_32061_p1.read(), ap_const_lv6_12)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read()) && 
          esl_seteq<1,6,6>(tmp_2448_fu_32850_p1.read(), ap_const_lv6_12)))) {
        weights_48_48_1x1_V_18_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_18_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_19_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read())) {
        weights_48_48_1x1_V_19_address0 =  (sc_lv<7>) (tmp_1683_cast_fu_32854_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read())) {
        weights_48_48_1x1_V_19_address0 =  (sc_lv<7>) (tmp_1646_cast_fu_32065_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read())) {
        weights_48_48_1x1_V_19_address0 =  (sc_lv<7>) (tmp_1605_cast_fu_31287_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read())) {
        weights_48_48_1x1_V_19_address0 =  (sc_lv<7>) (tmp_1566_cast_fu_30502_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read())) {
        weights_48_48_1x1_V_19_address0 =  (sc_lv<7>) (tmp_1525_cast_fu_29728_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read())) {
        weights_48_48_1x1_V_19_address0 =  (sc_lv<7>) (tmp_1487_cast_fu_28943_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read())) {
        weights_48_48_1x1_V_19_address0 =  (sc_lv<7>) (tmp_1448_cast_fu_28177_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read())) {
        weights_48_48_1x1_V_19_address0 =  (sc_lv<7>) (tmp_1410_cast_fu_27396_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read())) {
        weights_48_48_1x1_V_19_address0 =  (sc_lv<7>) (tmp_1371_cast_fu_26630_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read())) {
        weights_48_48_1x1_V_19_address0 =  (sc_lv<7>) (tmp_1334_cast_fu_25857_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read())) {
        weights_48_48_1x1_V_19_address0 =  (sc_lv<7>) (tmp_1295_cast_fu_25087_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read())) {
        weights_48_48_1x1_V_19_address0 =  (sc_lv<7>) (tmp_1258_cast_fu_24306_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read())) {
        weights_48_48_1x1_V_19_address0 =  (sc_lv<7>) (tmp_1217_cast_fu_23528_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read())) {
        weights_48_48_1x1_V_19_address0 =  (sc_lv<7>) (tmp_1180_cast_fu_22747_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read())) {
        weights_48_48_1x1_V_19_address0 =  (sc_lv<7>) (tmp_1141_cast_fu_21981_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read())) {
        weights_48_48_1x1_V_19_address0 =  (sc_lv<7>) (tmp_1104_cast_fu_21200_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read())) {
        weights_48_48_1x1_V_19_address0 =  (sc_lv<7>) (tmp_1076_cast_fu_20553_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read())) {
        weights_48_48_1x1_V_19_address0 =  (sc_lv<7>) (tmp_1036_cast_fu_19772_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read())) {
        weights_48_48_1x1_V_19_address0 =  (sc_lv<7>) (tmp_1002_cast_fu_18991_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_19_address0 = grp_subconv_1x1_16p_p_fu_13962_weight_19_V_address0.read();
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
        weights_48_48_1x1_V_19_address0 = grp_subconv_1x1_8_p_fu_13858_weight_19_V_address0.read();
    } else {
        weights_48_48_1x1_V_19_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_19_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_19_address1 = grp_subconv_1x1_16p_p_fu_13962_weight_19_V_address1.read();
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
        weights_48_48_1x1_V_19_address1 = grp_subconv_1x1_8_p_fu_13858_weight_19_V_address1.read();
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
        weights_48_48_1x1_V_19_ce0 = grp_subconv_1x1_16p_p_fu_13962_weight_19_V_ce0.read();
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
        weights_48_48_1x1_V_19_ce0 = grp_subconv_1x1_8_p_fu_13858_weight_19_V_ce0.read();
    } else {
        weights_48_48_1x1_V_19_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_19_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_19_ce1 = grp_subconv_1x1_16p_p_fu_13962_weight_19_V_ce1.read();
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
        weights_48_48_1x1_V_19_ce1 = grp_subconv_1x1_8_p_fu_13858_weight_19_V_ce1.read();
    } else {
        weights_48_48_1x1_V_19_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_19_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read()) && 
          esl_seteq<1,6,6>(tmp_2236_fu_18987_p1.read(), ap_const_lv6_13)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read()) && 
          esl_seteq<1,6,6>(tmp_2247_fu_19768_p1.read(), ap_const_lv6_13)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read()) && 
          esl_seteq<1,6,6>(tmp_2258_fu_20549_p1.read(), ap_const_lv6_13)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read()) && 
          esl_seteq<1,6,6>(tmp_2269_fu_21196_p1.read(), ap_const_lv6_13)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read()) && 
          esl_seteq<1,6,6>(tmp_2280_fu_21977_p1.read(), ap_const_lv6_13)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read()) && 
          esl_seteq<1,6,6>(tmp_2293_fu_22743_p1.read(), ap_const_lv6_13)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) && 
          esl_seteq<1,6,6>(tmp_2304_fu_23524_p1.read(), ap_const_lv6_13)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read()) && 
          esl_seteq<1,6,6>(tmp_2317_fu_24302_p1.read(), ap_const_lv6_13)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read()) && 
          esl_seteq<1,6,6>(tmp_2328_fu_25083_p1.read(), ap_const_lv6_13)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read()) && 
          esl_seteq<1,6,6>(tmp_2341_fu_25853_p1.read(), ap_const_lv6_13)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read()) && 
          esl_seteq<1,6,6>(tmp_2352_fu_26626_p1.read(), ap_const_lv6_13)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read()) && 
          esl_seteq<1,6,6>(tmp_2365_fu_27392_p1.read(), ap_const_lv6_13)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read()) && 
          esl_seteq<1,6,6>(tmp_2376_fu_28173_p1.read(), ap_const_lv6_13)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read()) && 
          esl_seteq<1,6,6>(tmp_2389_fu_28939_p1.read(), ap_const_lv6_13)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read()) && 
          esl_seteq<1,6,6>(tmp_2400_fu_29724_p1.read(), ap_const_lv6_13)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read()) && 
          esl_seteq<1,6,6>(tmp_2413_fu_30498_p1.read(), ap_const_lv6_13)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read()) && 
          esl_seteq<1,6,6>(tmp_2424_fu_31283_p1.read(), ap_const_lv6_13)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read()) && 
          esl_seteq<1,6,6>(tmp_2437_fu_32061_p1.read(), ap_const_lv6_13)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read()) && 
          esl_seteq<1,6,6>(tmp_2448_fu_32850_p1.read(), ap_const_lv6_13)))) {
        weights_48_48_1x1_V_19_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_19_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read())) {
        weights_48_48_1x1_V_1_address0 =  (sc_lv<7>) (tmp_1683_cast_fu_32854_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read())) {
        weights_48_48_1x1_V_1_address0 =  (sc_lv<7>) (tmp_1646_cast_fu_32065_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read())) {
        weights_48_48_1x1_V_1_address0 =  (sc_lv<7>) (tmp_1605_cast_fu_31287_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read())) {
        weights_48_48_1x1_V_1_address0 =  (sc_lv<7>) (tmp_1566_cast_fu_30502_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read())) {
        weights_48_48_1x1_V_1_address0 =  (sc_lv<7>) (tmp_1525_cast_fu_29728_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read())) {
        weights_48_48_1x1_V_1_address0 =  (sc_lv<7>) (tmp_1487_cast_fu_28943_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read())) {
        weights_48_48_1x1_V_1_address0 =  (sc_lv<7>) (tmp_1448_cast_fu_28177_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read())) {
        weights_48_48_1x1_V_1_address0 =  (sc_lv<7>) (tmp_1410_cast_fu_27396_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read())) {
        weights_48_48_1x1_V_1_address0 =  (sc_lv<7>) (tmp_1371_cast_fu_26630_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read())) {
        weights_48_48_1x1_V_1_address0 =  (sc_lv<7>) (tmp_1334_cast_fu_25857_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read())) {
        weights_48_48_1x1_V_1_address0 =  (sc_lv<7>) (tmp_1295_cast_fu_25087_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read())) {
        weights_48_48_1x1_V_1_address0 =  (sc_lv<7>) (tmp_1258_cast_fu_24306_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read())) {
        weights_48_48_1x1_V_1_address0 =  (sc_lv<7>) (tmp_1217_cast_fu_23528_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read())) {
        weights_48_48_1x1_V_1_address0 =  (sc_lv<7>) (tmp_1180_cast_fu_22747_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read())) {
        weights_48_48_1x1_V_1_address0 =  (sc_lv<7>) (tmp_1141_cast_fu_21981_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read())) {
        weights_48_48_1x1_V_1_address0 =  (sc_lv<7>) (tmp_1104_cast_fu_21200_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read())) {
        weights_48_48_1x1_V_1_address0 =  (sc_lv<7>) (tmp_1076_cast_fu_20553_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read())) {
        weights_48_48_1x1_V_1_address0 =  (sc_lv<7>) (tmp_1036_cast_fu_19772_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read())) {
        weights_48_48_1x1_V_1_address0 =  (sc_lv<7>) (tmp_1002_cast_fu_18991_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_1_address0 = grp_subconv_1x1_16p_p_fu_13962_weight_1_V_address0.read();
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
        weights_48_48_1x1_V_1_address0 = grp_subconv_1x1_8_p_fu_13858_weight_1_V_address0.read();
    } else {
        weights_48_48_1x1_V_1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_1_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_1_address1 = grp_subconv_1x1_16p_p_fu_13962_weight_1_V_address1.read();
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
        weights_48_48_1x1_V_1_address1 = grp_subconv_1x1_8_p_fu_13858_weight_1_V_address1.read();
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
        weights_48_48_1x1_V_1_ce0 = grp_subconv_1x1_16p_p_fu_13962_weight_1_V_ce0.read();
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
        weights_48_48_1x1_V_1_ce0 = grp_subconv_1x1_8_p_fu_13858_weight_1_V_ce0.read();
    } else {
        weights_48_48_1x1_V_1_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_1_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_1_ce1 = grp_subconv_1x1_16p_p_fu_13962_weight_1_V_ce1.read();
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
        weights_48_48_1x1_V_1_ce1 = grp_subconv_1x1_8_p_fu_13858_weight_1_V_ce1.read();
    } else {
        weights_48_48_1x1_V_1_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_1_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read()) && 
          esl_seteq<1,6,6>(tmp_2236_fu_18987_p1.read(), ap_const_lv6_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read()) && 
          esl_seteq<1,6,6>(tmp_2247_fu_19768_p1.read(), ap_const_lv6_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read()) && 
          esl_seteq<1,6,6>(tmp_2258_fu_20549_p1.read(), ap_const_lv6_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read()) && 
          esl_seteq<1,6,6>(tmp_2269_fu_21196_p1.read(), ap_const_lv6_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read()) && 
          esl_seteq<1,6,6>(tmp_2280_fu_21977_p1.read(), ap_const_lv6_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read()) && 
          esl_seteq<1,6,6>(tmp_2293_fu_22743_p1.read(), ap_const_lv6_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) && 
          esl_seteq<1,6,6>(tmp_2304_fu_23524_p1.read(), ap_const_lv6_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read()) && 
          esl_seteq<1,6,6>(tmp_2317_fu_24302_p1.read(), ap_const_lv6_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read()) && 
          esl_seteq<1,6,6>(tmp_2328_fu_25083_p1.read(), ap_const_lv6_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read()) && 
          esl_seteq<1,6,6>(tmp_2341_fu_25853_p1.read(), ap_const_lv6_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read()) && 
          esl_seteq<1,6,6>(tmp_2352_fu_26626_p1.read(), ap_const_lv6_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read()) && 
          esl_seteq<1,6,6>(tmp_2365_fu_27392_p1.read(), ap_const_lv6_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read()) && 
          esl_seteq<1,6,6>(tmp_2376_fu_28173_p1.read(), ap_const_lv6_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read()) && 
          esl_seteq<1,6,6>(tmp_2389_fu_28939_p1.read(), ap_const_lv6_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read()) && 
          esl_seteq<1,6,6>(tmp_2400_fu_29724_p1.read(), ap_const_lv6_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read()) && 
          esl_seteq<1,6,6>(tmp_2413_fu_30498_p1.read(), ap_const_lv6_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read()) && 
          esl_seteq<1,6,6>(tmp_2424_fu_31283_p1.read(), ap_const_lv6_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read()) && 
          esl_seteq<1,6,6>(tmp_2437_fu_32061_p1.read(), ap_const_lv6_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read()) && 
          esl_seteq<1,6,6>(tmp_2448_fu_32850_p1.read(), ap_const_lv6_1)))) {
        weights_48_48_1x1_V_1_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_1_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_20_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read())) {
        weights_48_48_1x1_V_20_address0 =  (sc_lv<7>) (tmp_1683_cast_fu_32854_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read())) {
        weights_48_48_1x1_V_20_address0 =  (sc_lv<7>) (tmp_1646_cast_fu_32065_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read())) {
        weights_48_48_1x1_V_20_address0 =  (sc_lv<7>) (tmp_1605_cast_fu_31287_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read())) {
        weights_48_48_1x1_V_20_address0 =  (sc_lv<7>) (tmp_1566_cast_fu_30502_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read())) {
        weights_48_48_1x1_V_20_address0 =  (sc_lv<7>) (tmp_1525_cast_fu_29728_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read())) {
        weights_48_48_1x1_V_20_address0 =  (sc_lv<7>) (tmp_1487_cast_fu_28943_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read())) {
        weights_48_48_1x1_V_20_address0 =  (sc_lv<7>) (tmp_1448_cast_fu_28177_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read())) {
        weights_48_48_1x1_V_20_address0 =  (sc_lv<7>) (tmp_1410_cast_fu_27396_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read())) {
        weights_48_48_1x1_V_20_address0 =  (sc_lv<7>) (tmp_1371_cast_fu_26630_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read())) {
        weights_48_48_1x1_V_20_address0 =  (sc_lv<7>) (tmp_1334_cast_fu_25857_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read())) {
        weights_48_48_1x1_V_20_address0 =  (sc_lv<7>) (tmp_1295_cast_fu_25087_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read())) {
        weights_48_48_1x1_V_20_address0 =  (sc_lv<7>) (tmp_1258_cast_fu_24306_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read())) {
        weights_48_48_1x1_V_20_address0 =  (sc_lv<7>) (tmp_1217_cast_fu_23528_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read())) {
        weights_48_48_1x1_V_20_address0 =  (sc_lv<7>) (tmp_1180_cast_fu_22747_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read())) {
        weights_48_48_1x1_V_20_address0 =  (sc_lv<7>) (tmp_1141_cast_fu_21981_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read())) {
        weights_48_48_1x1_V_20_address0 =  (sc_lv<7>) (tmp_1104_cast_fu_21200_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read())) {
        weights_48_48_1x1_V_20_address0 =  (sc_lv<7>) (tmp_1076_cast_fu_20553_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read())) {
        weights_48_48_1x1_V_20_address0 =  (sc_lv<7>) (tmp_1036_cast_fu_19772_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read())) {
        weights_48_48_1x1_V_20_address0 =  (sc_lv<7>) (tmp_1002_cast_fu_18991_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_20_address0 = grp_subconv_1x1_16p_p_fu_13962_weight_20_V_address0.read();
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
        weights_48_48_1x1_V_20_address0 = grp_subconv_1x1_8_p_fu_13858_weight_20_V_address0.read();
    } else {
        weights_48_48_1x1_V_20_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_20_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_20_address1 = grp_subconv_1x1_16p_p_fu_13962_weight_20_V_address1.read();
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
        weights_48_48_1x1_V_20_address1 = grp_subconv_1x1_8_p_fu_13858_weight_20_V_address1.read();
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
        weights_48_48_1x1_V_20_ce0 = grp_subconv_1x1_16p_p_fu_13962_weight_20_V_ce0.read();
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
        weights_48_48_1x1_V_20_ce0 = grp_subconv_1x1_8_p_fu_13858_weight_20_V_ce0.read();
    } else {
        weights_48_48_1x1_V_20_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_20_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_20_ce1 = grp_subconv_1x1_16p_p_fu_13962_weight_20_V_ce1.read();
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
        weights_48_48_1x1_V_20_ce1 = grp_subconv_1x1_8_p_fu_13858_weight_20_V_ce1.read();
    } else {
        weights_48_48_1x1_V_20_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_20_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read()) && 
          esl_seteq<1,6,6>(tmp_2236_fu_18987_p1.read(), ap_const_lv6_14)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read()) && 
          esl_seteq<1,6,6>(tmp_2247_fu_19768_p1.read(), ap_const_lv6_14)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read()) && 
          esl_seteq<1,6,6>(tmp_2258_fu_20549_p1.read(), ap_const_lv6_14)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read()) && 
          esl_seteq<1,6,6>(tmp_2269_fu_21196_p1.read(), ap_const_lv6_14)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read()) && 
          esl_seteq<1,6,6>(tmp_2280_fu_21977_p1.read(), ap_const_lv6_14)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read()) && 
          esl_seteq<1,6,6>(tmp_2293_fu_22743_p1.read(), ap_const_lv6_14)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) && 
          esl_seteq<1,6,6>(tmp_2304_fu_23524_p1.read(), ap_const_lv6_14)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read()) && 
          esl_seteq<1,6,6>(tmp_2317_fu_24302_p1.read(), ap_const_lv6_14)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read()) && 
          esl_seteq<1,6,6>(tmp_2328_fu_25083_p1.read(), ap_const_lv6_14)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read()) && 
          esl_seteq<1,6,6>(tmp_2341_fu_25853_p1.read(), ap_const_lv6_14)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read()) && 
          esl_seteq<1,6,6>(tmp_2352_fu_26626_p1.read(), ap_const_lv6_14)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read()) && 
          esl_seteq<1,6,6>(tmp_2365_fu_27392_p1.read(), ap_const_lv6_14)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read()) && 
          esl_seteq<1,6,6>(tmp_2376_fu_28173_p1.read(), ap_const_lv6_14)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read()) && 
          esl_seteq<1,6,6>(tmp_2389_fu_28939_p1.read(), ap_const_lv6_14)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read()) && 
          esl_seteq<1,6,6>(tmp_2400_fu_29724_p1.read(), ap_const_lv6_14)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read()) && 
          esl_seteq<1,6,6>(tmp_2413_fu_30498_p1.read(), ap_const_lv6_14)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read()) && 
          esl_seteq<1,6,6>(tmp_2424_fu_31283_p1.read(), ap_const_lv6_14)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read()) && 
          esl_seteq<1,6,6>(tmp_2437_fu_32061_p1.read(), ap_const_lv6_14)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read()) && 
          esl_seteq<1,6,6>(tmp_2448_fu_32850_p1.read(), ap_const_lv6_14)))) {
        weights_48_48_1x1_V_20_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_20_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_21_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read())) {
        weights_48_48_1x1_V_21_address0 =  (sc_lv<7>) (tmp_1683_cast_fu_32854_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read())) {
        weights_48_48_1x1_V_21_address0 =  (sc_lv<7>) (tmp_1646_cast_fu_32065_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read())) {
        weights_48_48_1x1_V_21_address0 =  (sc_lv<7>) (tmp_1605_cast_fu_31287_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read())) {
        weights_48_48_1x1_V_21_address0 =  (sc_lv<7>) (tmp_1566_cast_fu_30502_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read())) {
        weights_48_48_1x1_V_21_address0 =  (sc_lv<7>) (tmp_1525_cast_fu_29728_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read())) {
        weights_48_48_1x1_V_21_address0 =  (sc_lv<7>) (tmp_1487_cast_fu_28943_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read())) {
        weights_48_48_1x1_V_21_address0 =  (sc_lv<7>) (tmp_1448_cast_fu_28177_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read())) {
        weights_48_48_1x1_V_21_address0 =  (sc_lv<7>) (tmp_1410_cast_fu_27396_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read())) {
        weights_48_48_1x1_V_21_address0 =  (sc_lv<7>) (tmp_1371_cast_fu_26630_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read())) {
        weights_48_48_1x1_V_21_address0 =  (sc_lv<7>) (tmp_1334_cast_fu_25857_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read())) {
        weights_48_48_1x1_V_21_address0 =  (sc_lv<7>) (tmp_1295_cast_fu_25087_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read())) {
        weights_48_48_1x1_V_21_address0 =  (sc_lv<7>) (tmp_1258_cast_fu_24306_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read())) {
        weights_48_48_1x1_V_21_address0 =  (sc_lv<7>) (tmp_1217_cast_fu_23528_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read())) {
        weights_48_48_1x1_V_21_address0 =  (sc_lv<7>) (tmp_1180_cast_fu_22747_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read())) {
        weights_48_48_1x1_V_21_address0 =  (sc_lv<7>) (tmp_1141_cast_fu_21981_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read())) {
        weights_48_48_1x1_V_21_address0 =  (sc_lv<7>) (tmp_1104_cast_fu_21200_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read())) {
        weights_48_48_1x1_V_21_address0 =  (sc_lv<7>) (tmp_1076_cast_fu_20553_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read())) {
        weights_48_48_1x1_V_21_address0 =  (sc_lv<7>) (tmp_1036_cast_fu_19772_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read())) {
        weights_48_48_1x1_V_21_address0 =  (sc_lv<7>) (tmp_1002_cast_fu_18991_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_21_address0 = grp_subconv_1x1_16p_p_fu_13962_weight_21_V_address0.read();
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
        weights_48_48_1x1_V_21_address0 = grp_subconv_1x1_8_p_fu_13858_weight_21_V_address0.read();
    } else {
        weights_48_48_1x1_V_21_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_21_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_21_address1 = grp_subconv_1x1_16p_p_fu_13962_weight_21_V_address1.read();
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
        weights_48_48_1x1_V_21_address1 = grp_subconv_1x1_8_p_fu_13858_weight_21_V_address1.read();
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
        weights_48_48_1x1_V_21_ce0 = grp_subconv_1x1_16p_p_fu_13962_weight_21_V_ce0.read();
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
        weights_48_48_1x1_V_21_ce0 = grp_subconv_1x1_8_p_fu_13858_weight_21_V_ce0.read();
    } else {
        weights_48_48_1x1_V_21_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_21_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_21_ce1 = grp_subconv_1x1_16p_p_fu_13962_weight_21_V_ce1.read();
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
        weights_48_48_1x1_V_21_ce1 = grp_subconv_1x1_8_p_fu_13858_weight_21_V_ce1.read();
    } else {
        weights_48_48_1x1_V_21_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_21_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read()) && 
          esl_seteq<1,6,6>(tmp_2236_fu_18987_p1.read(), ap_const_lv6_15)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read()) && 
          esl_seteq<1,6,6>(tmp_2247_fu_19768_p1.read(), ap_const_lv6_15)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read()) && 
          esl_seteq<1,6,6>(tmp_2258_fu_20549_p1.read(), ap_const_lv6_15)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read()) && 
          esl_seteq<1,6,6>(tmp_2269_fu_21196_p1.read(), ap_const_lv6_15)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read()) && 
          esl_seteq<1,6,6>(tmp_2280_fu_21977_p1.read(), ap_const_lv6_15)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read()) && 
          esl_seteq<1,6,6>(tmp_2293_fu_22743_p1.read(), ap_const_lv6_15)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) && 
          esl_seteq<1,6,6>(tmp_2304_fu_23524_p1.read(), ap_const_lv6_15)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read()) && 
          esl_seteq<1,6,6>(tmp_2317_fu_24302_p1.read(), ap_const_lv6_15)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read()) && 
          esl_seteq<1,6,6>(tmp_2328_fu_25083_p1.read(), ap_const_lv6_15)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read()) && 
          esl_seteq<1,6,6>(tmp_2341_fu_25853_p1.read(), ap_const_lv6_15)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read()) && 
          esl_seteq<1,6,6>(tmp_2352_fu_26626_p1.read(), ap_const_lv6_15)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read()) && 
          esl_seteq<1,6,6>(tmp_2365_fu_27392_p1.read(), ap_const_lv6_15)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read()) && 
          esl_seteq<1,6,6>(tmp_2376_fu_28173_p1.read(), ap_const_lv6_15)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read()) && 
          esl_seteq<1,6,6>(tmp_2389_fu_28939_p1.read(), ap_const_lv6_15)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read()) && 
          esl_seteq<1,6,6>(tmp_2400_fu_29724_p1.read(), ap_const_lv6_15)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read()) && 
          esl_seteq<1,6,6>(tmp_2413_fu_30498_p1.read(), ap_const_lv6_15)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read()) && 
          esl_seteq<1,6,6>(tmp_2424_fu_31283_p1.read(), ap_const_lv6_15)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read()) && 
          esl_seteq<1,6,6>(tmp_2437_fu_32061_p1.read(), ap_const_lv6_15)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read()) && 
          esl_seteq<1,6,6>(tmp_2448_fu_32850_p1.read(), ap_const_lv6_15)))) {
        weights_48_48_1x1_V_21_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_21_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_22_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read())) {
        weights_48_48_1x1_V_22_address0 =  (sc_lv<7>) (tmp_1683_cast_fu_32854_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read())) {
        weights_48_48_1x1_V_22_address0 =  (sc_lv<7>) (tmp_1646_cast_fu_32065_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read())) {
        weights_48_48_1x1_V_22_address0 =  (sc_lv<7>) (tmp_1605_cast_fu_31287_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read())) {
        weights_48_48_1x1_V_22_address0 =  (sc_lv<7>) (tmp_1566_cast_fu_30502_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read())) {
        weights_48_48_1x1_V_22_address0 =  (sc_lv<7>) (tmp_1525_cast_fu_29728_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read())) {
        weights_48_48_1x1_V_22_address0 =  (sc_lv<7>) (tmp_1487_cast_fu_28943_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read())) {
        weights_48_48_1x1_V_22_address0 =  (sc_lv<7>) (tmp_1448_cast_fu_28177_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read())) {
        weights_48_48_1x1_V_22_address0 =  (sc_lv<7>) (tmp_1410_cast_fu_27396_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read())) {
        weights_48_48_1x1_V_22_address0 =  (sc_lv<7>) (tmp_1371_cast_fu_26630_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read())) {
        weights_48_48_1x1_V_22_address0 =  (sc_lv<7>) (tmp_1334_cast_fu_25857_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read())) {
        weights_48_48_1x1_V_22_address0 =  (sc_lv<7>) (tmp_1295_cast_fu_25087_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read())) {
        weights_48_48_1x1_V_22_address0 =  (sc_lv<7>) (tmp_1258_cast_fu_24306_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read())) {
        weights_48_48_1x1_V_22_address0 =  (sc_lv<7>) (tmp_1217_cast_fu_23528_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read())) {
        weights_48_48_1x1_V_22_address0 =  (sc_lv<7>) (tmp_1180_cast_fu_22747_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read())) {
        weights_48_48_1x1_V_22_address0 =  (sc_lv<7>) (tmp_1141_cast_fu_21981_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read())) {
        weights_48_48_1x1_V_22_address0 =  (sc_lv<7>) (tmp_1104_cast_fu_21200_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read())) {
        weights_48_48_1x1_V_22_address0 =  (sc_lv<7>) (tmp_1076_cast_fu_20553_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read())) {
        weights_48_48_1x1_V_22_address0 =  (sc_lv<7>) (tmp_1036_cast_fu_19772_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read())) {
        weights_48_48_1x1_V_22_address0 =  (sc_lv<7>) (tmp_1002_cast_fu_18991_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_22_address0 = grp_subconv_1x1_16p_p_fu_13962_weight_22_V_address0.read();
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
        weights_48_48_1x1_V_22_address0 = grp_subconv_1x1_8_p_fu_13858_weight_22_V_address0.read();
    } else {
        weights_48_48_1x1_V_22_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_22_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_22_address1 = grp_subconv_1x1_16p_p_fu_13962_weight_22_V_address1.read();
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
        weights_48_48_1x1_V_22_address1 = grp_subconv_1x1_8_p_fu_13858_weight_22_V_address1.read();
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
        weights_48_48_1x1_V_22_ce0 = grp_subconv_1x1_16p_p_fu_13962_weight_22_V_ce0.read();
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
        weights_48_48_1x1_V_22_ce0 = grp_subconv_1x1_8_p_fu_13858_weight_22_V_ce0.read();
    } else {
        weights_48_48_1x1_V_22_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_22_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_22_ce1 = grp_subconv_1x1_16p_p_fu_13962_weight_22_V_ce1.read();
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
        weights_48_48_1x1_V_22_ce1 = grp_subconv_1x1_8_p_fu_13858_weight_22_V_ce1.read();
    } else {
        weights_48_48_1x1_V_22_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_22_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read()) && 
          esl_seteq<1,6,6>(tmp_2236_fu_18987_p1.read(), ap_const_lv6_16)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_16, tmp_2247_fu_19768_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_16, tmp_2258_fu_20549_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_16, tmp_2269_fu_21196_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_16, tmp_2280_fu_21977_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_16, tmp_2293_fu_22743_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_16, tmp_2304_fu_23524_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_16, tmp_2317_fu_24302_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_16, tmp_2328_fu_25083_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_16, tmp_2341_fu_25853_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_16, tmp_2352_fu_26626_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_16, tmp_2365_fu_27392_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_16, tmp_2376_fu_28173_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_16, tmp_2389_fu_28939_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_16, tmp_2400_fu_29724_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_16, tmp_2413_fu_30498_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_16, tmp_2424_fu_31283_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_16, tmp_2437_fu_32061_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_16, tmp_2448_fu_32850_p1.read())))) {
        weights_48_48_1x1_V_22_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_22_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_23_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read())) {
        weights_48_48_1x1_V_23_address0 =  (sc_lv<7>) (tmp_1683_cast_fu_32854_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read())) {
        weights_48_48_1x1_V_23_address0 =  (sc_lv<7>) (tmp_1646_cast_fu_32065_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read())) {
        weights_48_48_1x1_V_23_address0 =  (sc_lv<7>) (tmp_1605_cast_fu_31287_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read())) {
        weights_48_48_1x1_V_23_address0 =  (sc_lv<7>) (tmp_1566_cast_fu_30502_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read())) {
        weights_48_48_1x1_V_23_address0 =  (sc_lv<7>) (tmp_1525_cast_fu_29728_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read())) {
        weights_48_48_1x1_V_23_address0 =  (sc_lv<7>) (tmp_1487_cast_fu_28943_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read())) {
        weights_48_48_1x1_V_23_address0 =  (sc_lv<7>) (tmp_1448_cast_fu_28177_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read())) {
        weights_48_48_1x1_V_23_address0 =  (sc_lv<7>) (tmp_1410_cast_fu_27396_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read())) {
        weights_48_48_1x1_V_23_address0 =  (sc_lv<7>) (tmp_1371_cast_fu_26630_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read())) {
        weights_48_48_1x1_V_23_address0 =  (sc_lv<7>) (tmp_1334_cast_fu_25857_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read())) {
        weights_48_48_1x1_V_23_address0 =  (sc_lv<7>) (tmp_1295_cast_fu_25087_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read())) {
        weights_48_48_1x1_V_23_address0 =  (sc_lv<7>) (tmp_1258_cast_fu_24306_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read())) {
        weights_48_48_1x1_V_23_address0 =  (sc_lv<7>) (tmp_1217_cast_fu_23528_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read())) {
        weights_48_48_1x1_V_23_address0 =  (sc_lv<7>) (tmp_1180_cast_fu_22747_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read())) {
        weights_48_48_1x1_V_23_address0 =  (sc_lv<7>) (tmp_1141_cast_fu_21981_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read())) {
        weights_48_48_1x1_V_23_address0 =  (sc_lv<7>) (tmp_1104_cast_fu_21200_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read())) {
        weights_48_48_1x1_V_23_address0 =  (sc_lv<7>) (tmp_1076_cast_fu_20553_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read())) {
        weights_48_48_1x1_V_23_address0 =  (sc_lv<7>) (tmp_1036_cast_fu_19772_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read())) {
        weights_48_48_1x1_V_23_address0 =  (sc_lv<7>) (tmp_1002_cast_fu_18991_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_23_address0 = grp_subconv_1x1_16p_p_fu_13962_weight_23_V_address0.read();
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
        weights_48_48_1x1_V_23_address0 = grp_subconv_1x1_8_p_fu_13858_weight_23_V_address0.read();
    } else {
        weights_48_48_1x1_V_23_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_23_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_23_address1 = grp_subconv_1x1_16p_p_fu_13962_weight_23_V_address1.read();
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
        weights_48_48_1x1_V_23_address1 = grp_subconv_1x1_8_p_fu_13858_weight_23_V_address1.read();
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
        weights_48_48_1x1_V_23_ce0 = grp_subconv_1x1_16p_p_fu_13962_weight_23_V_ce0.read();
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
        weights_48_48_1x1_V_23_ce0 = grp_subconv_1x1_8_p_fu_13858_weight_23_V_ce0.read();
    } else {
        weights_48_48_1x1_V_23_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_23_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_23_ce1 = grp_subconv_1x1_16p_p_fu_13962_weight_23_V_ce1.read();
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
        weights_48_48_1x1_V_23_ce1 = grp_subconv_1x1_8_p_fu_13858_weight_23_V_ce1.read();
    } else {
        weights_48_48_1x1_V_23_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_23_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_0, tmp_2236_fu_18987_p1.read()) && 
          !esl_seteq<1,6,6>(tmp_2236_fu_18987_p1.read(), ap_const_lv6_1) && 
          !esl_seteq<1,6,6>(tmp_2236_fu_18987_p1.read(), ap_const_lv6_2) && 
          !esl_seteq<1,6,6>(tmp_2236_fu_18987_p1.read(), ap_const_lv6_3) && 
          !esl_seteq<1,6,6>(tmp_2236_fu_18987_p1.read(), ap_const_lv6_4) && 
          !esl_seteq<1,6,6>(tmp_2236_fu_18987_p1.read(), ap_const_lv6_5) && 
          !esl_seteq<1,6,6>(tmp_2236_fu_18987_p1.read(), ap_const_lv6_6) && 
          !esl_seteq<1,6,6>(tmp_2236_fu_18987_p1.read(), ap_const_lv6_7) && 
          !esl_seteq<1,6,6>(tmp_2236_fu_18987_p1.read(), ap_const_lv6_8) && 
          !esl_seteq<1,6,6>(tmp_2236_fu_18987_p1.read(), ap_const_lv6_9) && 
          !esl_seteq<1,6,6>(tmp_2236_fu_18987_p1.read(), ap_const_lv6_A) && 
          !esl_seteq<1,6,6>(tmp_2236_fu_18987_p1.read(), ap_const_lv6_B) && 
          !esl_seteq<1,6,6>(tmp_2236_fu_18987_p1.read(), ap_const_lv6_C) && 
          !esl_seteq<1,6,6>(tmp_2236_fu_18987_p1.read(), ap_const_lv6_D) && 
          !esl_seteq<1,6,6>(tmp_2236_fu_18987_p1.read(), ap_const_lv6_E) && 
          !esl_seteq<1,6,6>(tmp_2236_fu_18987_p1.read(), ap_const_lv6_F) && 
          !esl_seteq<1,6,6>(tmp_2236_fu_18987_p1.read(), ap_const_lv6_10) && 
          !esl_seteq<1,6,6>(tmp_2236_fu_18987_p1.read(), ap_const_lv6_11) && 
          !esl_seteq<1,6,6>(tmp_2236_fu_18987_p1.read(), ap_const_lv6_12) && 
          !esl_seteq<1,6,6>(tmp_2236_fu_18987_p1.read(), ap_const_lv6_13) && 
          !esl_seteq<1,6,6>(tmp_2236_fu_18987_p1.read(), ap_const_lv6_14) && 
          !esl_seteq<1,6,6>(tmp_2236_fu_18987_p1.read(), ap_const_lv6_15) && 
          !esl_seteq<1,6,6>(tmp_2236_fu_18987_p1.read(), ap_const_lv6_16)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_0, tmp_2247_fu_19768_p1.read()) && 
          !esl_seteq<1,6,6>(tmp_2247_fu_19768_p1.read(), ap_const_lv6_1) && 
          !esl_seteq<1,6,6>(tmp_2247_fu_19768_p1.read(), ap_const_lv6_2) && 
          !esl_seteq<1,6,6>(tmp_2247_fu_19768_p1.read(), ap_const_lv6_3) && 
          !esl_seteq<1,6,6>(tmp_2247_fu_19768_p1.read(), ap_const_lv6_4) && 
          !esl_seteq<1,6,6>(tmp_2247_fu_19768_p1.read(), ap_const_lv6_5) && 
          !esl_seteq<1,6,6>(tmp_2247_fu_19768_p1.read(), ap_const_lv6_6) && 
          !esl_seteq<1,6,6>(tmp_2247_fu_19768_p1.read(), ap_const_lv6_7) && 
          !esl_seteq<1,6,6>(tmp_2247_fu_19768_p1.read(), ap_const_lv6_8) && 
          !esl_seteq<1,6,6>(tmp_2247_fu_19768_p1.read(), ap_const_lv6_9) && 
          !esl_seteq<1,6,6>(tmp_2247_fu_19768_p1.read(), ap_const_lv6_A) && 
          !esl_seteq<1,6,6>(tmp_2247_fu_19768_p1.read(), ap_const_lv6_B) && 
          !esl_seteq<1,6,6>(tmp_2247_fu_19768_p1.read(), ap_const_lv6_C) && 
          !esl_seteq<1,6,6>(tmp_2247_fu_19768_p1.read(), ap_const_lv6_D) && 
          !esl_seteq<1,6,6>(tmp_2247_fu_19768_p1.read(), ap_const_lv6_E) && 
          !esl_seteq<1,6,6>(tmp_2247_fu_19768_p1.read(), ap_const_lv6_F) && 
          !esl_seteq<1,6,6>(tmp_2247_fu_19768_p1.read(), ap_const_lv6_10) && 
          !esl_seteq<1,6,6>(tmp_2247_fu_19768_p1.read(), ap_const_lv6_11) && 
          !esl_seteq<1,6,6>(tmp_2247_fu_19768_p1.read(), ap_const_lv6_12) && 
          !esl_seteq<1,6,6>(tmp_2247_fu_19768_p1.read(), ap_const_lv6_13) && 
          !esl_seteq<1,6,6>(tmp_2247_fu_19768_p1.read(), ap_const_lv6_14) && 
          !esl_seteq<1,6,6>(tmp_2247_fu_19768_p1.read(), ap_const_lv6_15) && 
          !esl_seteq<1,6,6>(ap_const_lv6_16, tmp_2247_fu_19768_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_0, tmp_2258_fu_20549_p1.read()) && 
          !esl_seteq<1,6,6>(tmp_2258_fu_20549_p1.read(), ap_const_lv6_1) && 
          !esl_seteq<1,6,6>(tmp_2258_fu_20549_p1.read(), ap_const_lv6_2) && 
          !esl_seteq<1,6,6>(tmp_2258_fu_20549_p1.read(), ap_const_lv6_3) && 
          !esl_seteq<1,6,6>(tmp_2258_fu_20549_p1.read(), ap_const_lv6_4) && 
          !esl_seteq<1,6,6>(tmp_2258_fu_20549_p1.read(), ap_const_lv6_5) && 
          !esl_seteq<1,6,6>(tmp_2258_fu_20549_p1.read(), ap_const_lv6_6) && 
          !esl_seteq<1,6,6>(tmp_2258_fu_20549_p1.read(), ap_const_lv6_7) && 
          !esl_seteq<1,6,6>(tmp_2258_fu_20549_p1.read(), ap_const_lv6_8) && 
          !esl_seteq<1,6,6>(tmp_2258_fu_20549_p1.read(), ap_const_lv6_9) && 
          !esl_seteq<1,6,6>(tmp_2258_fu_20549_p1.read(), ap_const_lv6_A) && 
          !esl_seteq<1,6,6>(tmp_2258_fu_20549_p1.read(), ap_const_lv6_B) && 
          !esl_seteq<1,6,6>(tmp_2258_fu_20549_p1.read(), ap_const_lv6_C) && 
          !esl_seteq<1,6,6>(tmp_2258_fu_20549_p1.read(), ap_const_lv6_D) && 
          !esl_seteq<1,6,6>(tmp_2258_fu_20549_p1.read(), ap_const_lv6_E) && 
          !esl_seteq<1,6,6>(tmp_2258_fu_20549_p1.read(), ap_const_lv6_F) && 
          !esl_seteq<1,6,6>(tmp_2258_fu_20549_p1.read(), ap_const_lv6_10) && 
          !esl_seteq<1,6,6>(tmp_2258_fu_20549_p1.read(), ap_const_lv6_11) && 
          !esl_seteq<1,6,6>(tmp_2258_fu_20549_p1.read(), ap_const_lv6_12) && 
          !esl_seteq<1,6,6>(tmp_2258_fu_20549_p1.read(), ap_const_lv6_13) && 
          !esl_seteq<1,6,6>(tmp_2258_fu_20549_p1.read(), ap_const_lv6_14) && 
          !esl_seteq<1,6,6>(tmp_2258_fu_20549_p1.read(), ap_const_lv6_15) && 
          !esl_seteq<1,6,6>(ap_const_lv6_16, tmp_2258_fu_20549_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_0, tmp_2269_fu_21196_p1.read()) && 
          !esl_seteq<1,6,6>(tmp_2269_fu_21196_p1.read(), ap_const_lv6_1) && 
          !esl_seteq<1,6,6>(tmp_2269_fu_21196_p1.read(), ap_const_lv6_2) && 
          !esl_seteq<1,6,6>(tmp_2269_fu_21196_p1.read(), ap_const_lv6_3) && 
          !esl_seteq<1,6,6>(tmp_2269_fu_21196_p1.read(), ap_const_lv6_4) && 
          !esl_seteq<1,6,6>(tmp_2269_fu_21196_p1.read(), ap_const_lv6_5) && 
          !esl_seteq<1,6,6>(tmp_2269_fu_21196_p1.read(), ap_const_lv6_6) && 
          !esl_seteq<1,6,6>(tmp_2269_fu_21196_p1.read(), ap_const_lv6_7) && 
          !esl_seteq<1,6,6>(tmp_2269_fu_21196_p1.read(), ap_const_lv6_8) && 
          !esl_seteq<1,6,6>(tmp_2269_fu_21196_p1.read(), ap_const_lv6_9) && 
          !esl_seteq<1,6,6>(tmp_2269_fu_21196_p1.read(), ap_const_lv6_A) && 
          !esl_seteq<1,6,6>(tmp_2269_fu_21196_p1.read(), ap_const_lv6_B) && 
          !esl_seteq<1,6,6>(tmp_2269_fu_21196_p1.read(), ap_const_lv6_C) && 
          !esl_seteq<1,6,6>(tmp_2269_fu_21196_p1.read(), ap_const_lv6_D) && 
          !esl_seteq<1,6,6>(tmp_2269_fu_21196_p1.read(), ap_const_lv6_E) && 
          !esl_seteq<1,6,6>(tmp_2269_fu_21196_p1.read(), ap_const_lv6_F) && 
          !esl_seteq<1,6,6>(tmp_2269_fu_21196_p1.read(), ap_const_lv6_10) && 
          !esl_seteq<1,6,6>(tmp_2269_fu_21196_p1.read(), ap_const_lv6_11) && 
          !esl_seteq<1,6,6>(tmp_2269_fu_21196_p1.read(), ap_const_lv6_12) && 
          !esl_seteq<1,6,6>(tmp_2269_fu_21196_p1.read(), ap_const_lv6_13) && 
          !esl_seteq<1,6,6>(tmp_2269_fu_21196_p1.read(), ap_const_lv6_14) && 
          !esl_seteq<1,6,6>(tmp_2269_fu_21196_p1.read(), ap_const_lv6_15) && 
          !esl_seteq<1,6,6>(ap_const_lv6_16, tmp_2269_fu_21196_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_0, tmp_2280_fu_21977_p1.read()) && 
          !esl_seteq<1,6,6>(tmp_2280_fu_21977_p1.read(), ap_const_lv6_1) && 
          !esl_seteq<1,6,6>(tmp_2280_fu_21977_p1.read(), ap_const_lv6_2) && 
          !esl_seteq<1,6,6>(tmp_2280_fu_21977_p1.read(), ap_const_lv6_3) && 
          !esl_seteq<1,6,6>(tmp_2280_fu_21977_p1.read(), ap_const_lv6_4) && 
          !esl_seteq<1,6,6>(tmp_2280_fu_21977_p1.read(), ap_const_lv6_5) && 
          !esl_seteq<1,6,6>(tmp_2280_fu_21977_p1.read(), ap_const_lv6_6) && 
          !esl_seteq<1,6,6>(tmp_2280_fu_21977_p1.read(), ap_const_lv6_7) && 
          !esl_seteq<1,6,6>(tmp_2280_fu_21977_p1.read(), ap_const_lv6_8) && 
          !esl_seteq<1,6,6>(tmp_2280_fu_21977_p1.read(), ap_const_lv6_9) && 
          !esl_seteq<1,6,6>(tmp_2280_fu_21977_p1.read(), ap_const_lv6_A) && 
          !esl_seteq<1,6,6>(tmp_2280_fu_21977_p1.read(), ap_const_lv6_B) && 
          !esl_seteq<1,6,6>(tmp_2280_fu_21977_p1.read(), ap_const_lv6_C) && 
          !esl_seteq<1,6,6>(tmp_2280_fu_21977_p1.read(), ap_const_lv6_D) && 
          !esl_seteq<1,6,6>(tmp_2280_fu_21977_p1.read(), ap_const_lv6_E) && 
          !esl_seteq<1,6,6>(tmp_2280_fu_21977_p1.read(), ap_const_lv6_F) && 
          !esl_seteq<1,6,6>(tmp_2280_fu_21977_p1.read(), ap_const_lv6_10) && 
          !esl_seteq<1,6,6>(tmp_2280_fu_21977_p1.read(), ap_const_lv6_11) && 
          !esl_seteq<1,6,6>(tmp_2280_fu_21977_p1.read(), ap_const_lv6_12) && 
          !esl_seteq<1,6,6>(tmp_2280_fu_21977_p1.read(), ap_const_lv6_13) && 
          !esl_seteq<1,6,6>(tmp_2280_fu_21977_p1.read(), ap_const_lv6_14) && 
          !esl_seteq<1,6,6>(tmp_2280_fu_21977_p1.read(), ap_const_lv6_15) && 
          !esl_seteq<1,6,6>(ap_const_lv6_16, tmp_2280_fu_21977_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_0, tmp_2293_fu_22743_p1.read()) && 
          !esl_seteq<1,6,6>(tmp_2293_fu_22743_p1.read(), ap_const_lv6_1) && 
          !esl_seteq<1,6,6>(tmp_2293_fu_22743_p1.read(), ap_const_lv6_2) && 
          !esl_seteq<1,6,6>(tmp_2293_fu_22743_p1.read(), ap_const_lv6_3) && 
          !esl_seteq<1,6,6>(tmp_2293_fu_22743_p1.read(), ap_const_lv6_4) && 
          !esl_seteq<1,6,6>(tmp_2293_fu_22743_p1.read(), ap_const_lv6_5) && 
          !esl_seteq<1,6,6>(tmp_2293_fu_22743_p1.read(), ap_const_lv6_6) && 
          !esl_seteq<1,6,6>(tmp_2293_fu_22743_p1.read(), ap_const_lv6_7) && 
          !esl_seteq<1,6,6>(tmp_2293_fu_22743_p1.read(), ap_const_lv6_8) && 
          !esl_seteq<1,6,6>(tmp_2293_fu_22743_p1.read(), ap_const_lv6_9) && 
          !esl_seteq<1,6,6>(tmp_2293_fu_22743_p1.read(), ap_const_lv6_A) && 
          !esl_seteq<1,6,6>(tmp_2293_fu_22743_p1.read(), ap_const_lv6_B) && 
          !esl_seteq<1,6,6>(tmp_2293_fu_22743_p1.read(), ap_const_lv6_C) && 
          !esl_seteq<1,6,6>(tmp_2293_fu_22743_p1.read(), ap_const_lv6_D) && 
          !esl_seteq<1,6,6>(tmp_2293_fu_22743_p1.read(), ap_const_lv6_E) && 
          !esl_seteq<1,6,6>(tmp_2293_fu_22743_p1.read(), ap_const_lv6_F) && 
          !esl_seteq<1,6,6>(tmp_2293_fu_22743_p1.read(), ap_const_lv6_10) && 
          !esl_seteq<1,6,6>(tmp_2293_fu_22743_p1.read(), ap_const_lv6_11) && 
          !esl_seteq<1,6,6>(tmp_2293_fu_22743_p1.read(), ap_const_lv6_12) && 
          !esl_seteq<1,6,6>(tmp_2293_fu_22743_p1.read(), ap_const_lv6_13) && 
          !esl_seteq<1,6,6>(tmp_2293_fu_22743_p1.read(), ap_const_lv6_14) && 
          !esl_seteq<1,6,6>(tmp_2293_fu_22743_p1.read(), ap_const_lv6_15) && 
          !esl_seteq<1,6,6>(ap_const_lv6_16, tmp_2293_fu_22743_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_0, tmp_2304_fu_23524_p1.read()) && 
          !esl_seteq<1,6,6>(tmp_2304_fu_23524_p1.read(), ap_const_lv6_1) && 
          !esl_seteq<1,6,6>(tmp_2304_fu_23524_p1.read(), ap_const_lv6_2) && 
          !esl_seteq<1,6,6>(tmp_2304_fu_23524_p1.read(), ap_const_lv6_3) && 
          !esl_seteq<1,6,6>(tmp_2304_fu_23524_p1.read(), ap_const_lv6_4) && 
          !esl_seteq<1,6,6>(tmp_2304_fu_23524_p1.read(), ap_const_lv6_5) && 
          !esl_seteq<1,6,6>(tmp_2304_fu_23524_p1.read(), ap_const_lv6_6) && 
          !esl_seteq<1,6,6>(tmp_2304_fu_23524_p1.read(), ap_const_lv6_7) && 
          !esl_seteq<1,6,6>(tmp_2304_fu_23524_p1.read(), ap_const_lv6_8) && 
          !esl_seteq<1,6,6>(tmp_2304_fu_23524_p1.read(), ap_const_lv6_9) && 
          !esl_seteq<1,6,6>(tmp_2304_fu_23524_p1.read(), ap_const_lv6_A) && 
          !esl_seteq<1,6,6>(tmp_2304_fu_23524_p1.read(), ap_const_lv6_B) && 
          !esl_seteq<1,6,6>(tmp_2304_fu_23524_p1.read(), ap_const_lv6_C) && 
          !esl_seteq<1,6,6>(tmp_2304_fu_23524_p1.read(), ap_const_lv6_D) && 
          !esl_seteq<1,6,6>(tmp_2304_fu_23524_p1.read(), ap_const_lv6_E) && 
          !esl_seteq<1,6,6>(tmp_2304_fu_23524_p1.read(), ap_const_lv6_F) && 
          !esl_seteq<1,6,6>(tmp_2304_fu_23524_p1.read(), ap_const_lv6_10) && 
          !esl_seteq<1,6,6>(tmp_2304_fu_23524_p1.read(), ap_const_lv6_11) && 
          !esl_seteq<1,6,6>(tmp_2304_fu_23524_p1.read(), ap_const_lv6_12) && 
          !esl_seteq<1,6,6>(tmp_2304_fu_23524_p1.read(), ap_const_lv6_13) && 
          !esl_seteq<1,6,6>(tmp_2304_fu_23524_p1.read(), ap_const_lv6_14) && 
          !esl_seteq<1,6,6>(tmp_2304_fu_23524_p1.read(), ap_const_lv6_15) && 
          !esl_seteq<1,6,6>(ap_const_lv6_16, tmp_2304_fu_23524_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_0, tmp_2317_fu_24302_p1.read()) && 
          !esl_seteq<1,6,6>(tmp_2317_fu_24302_p1.read(), ap_const_lv6_1) && 
          !esl_seteq<1,6,6>(tmp_2317_fu_24302_p1.read(), ap_const_lv6_2) && 
          !esl_seteq<1,6,6>(tmp_2317_fu_24302_p1.read(), ap_const_lv6_3) && 
          !esl_seteq<1,6,6>(tmp_2317_fu_24302_p1.read(), ap_const_lv6_4) && 
          !esl_seteq<1,6,6>(tmp_2317_fu_24302_p1.read(), ap_const_lv6_5) && 
          !esl_seteq<1,6,6>(tmp_2317_fu_24302_p1.read(), ap_const_lv6_6) && 
          !esl_seteq<1,6,6>(tmp_2317_fu_24302_p1.read(), ap_const_lv6_7) && 
          !esl_seteq<1,6,6>(tmp_2317_fu_24302_p1.read(), ap_const_lv6_8) && 
          !esl_seteq<1,6,6>(tmp_2317_fu_24302_p1.read(), ap_const_lv6_9) && 
          !esl_seteq<1,6,6>(tmp_2317_fu_24302_p1.read(), ap_const_lv6_A) && 
          !esl_seteq<1,6,6>(tmp_2317_fu_24302_p1.read(), ap_const_lv6_B) && 
          !esl_seteq<1,6,6>(tmp_2317_fu_24302_p1.read(), ap_const_lv6_C) && 
          !esl_seteq<1,6,6>(tmp_2317_fu_24302_p1.read(), ap_const_lv6_D) && 
          !esl_seteq<1,6,6>(tmp_2317_fu_24302_p1.read(), ap_const_lv6_E) && 
          !esl_seteq<1,6,6>(tmp_2317_fu_24302_p1.read(), ap_const_lv6_F) && 
          !esl_seteq<1,6,6>(tmp_2317_fu_24302_p1.read(), ap_const_lv6_10) && 
          !esl_seteq<1,6,6>(tmp_2317_fu_24302_p1.read(), ap_const_lv6_11) && 
          !esl_seteq<1,6,6>(tmp_2317_fu_24302_p1.read(), ap_const_lv6_12) && 
          !esl_seteq<1,6,6>(tmp_2317_fu_24302_p1.read(), ap_const_lv6_13) && 
          !esl_seteq<1,6,6>(tmp_2317_fu_24302_p1.read(), ap_const_lv6_14) && 
          !esl_seteq<1,6,6>(tmp_2317_fu_24302_p1.read(), ap_const_lv6_15) && 
          !esl_seteq<1,6,6>(ap_const_lv6_16, tmp_2317_fu_24302_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_0, tmp_2328_fu_25083_p1.read()) && 
          !esl_seteq<1,6,6>(tmp_2328_fu_25083_p1.read(), ap_const_lv6_1) && 
          !esl_seteq<1,6,6>(tmp_2328_fu_25083_p1.read(), ap_const_lv6_2) && 
          !esl_seteq<1,6,6>(tmp_2328_fu_25083_p1.read(), ap_const_lv6_3) && 
          !esl_seteq<1,6,6>(tmp_2328_fu_25083_p1.read(), ap_const_lv6_4) && 
          !esl_seteq<1,6,6>(tmp_2328_fu_25083_p1.read(), ap_const_lv6_5) && 
          !esl_seteq<1,6,6>(tmp_2328_fu_25083_p1.read(), ap_const_lv6_6) && 
          !esl_seteq<1,6,6>(tmp_2328_fu_25083_p1.read(), ap_const_lv6_7) && 
          !esl_seteq<1,6,6>(tmp_2328_fu_25083_p1.read(), ap_const_lv6_8) && 
          !esl_seteq<1,6,6>(tmp_2328_fu_25083_p1.read(), ap_const_lv6_9) && 
          !esl_seteq<1,6,6>(tmp_2328_fu_25083_p1.read(), ap_const_lv6_A) && 
          !esl_seteq<1,6,6>(tmp_2328_fu_25083_p1.read(), ap_const_lv6_B) && 
          !esl_seteq<1,6,6>(tmp_2328_fu_25083_p1.read(), ap_const_lv6_C) && 
          !esl_seteq<1,6,6>(tmp_2328_fu_25083_p1.read(), ap_const_lv6_D) && 
          !esl_seteq<1,6,6>(tmp_2328_fu_25083_p1.read(), ap_const_lv6_E) && 
          !esl_seteq<1,6,6>(tmp_2328_fu_25083_p1.read(), ap_const_lv6_F) && 
          !esl_seteq<1,6,6>(tmp_2328_fu_25083_p1.read(), ap_const_lv6_10) && 
          !esl_seteq<1,6,6>(tmp_2328_fu_25083_p1.read(), ap_const_lv6_11) && 
          !esl_seteq<1,6,6>(tmp_2328_fu_25083_p1.read(), ap_const_lv6_12) && 
          !esl_seteq<1,6,6>(tmp_2328_fu_25083_p1.read(), ap_const_lv6_13) && 
          !esl_seteq<1,6,6>(tmp_2328_fu_25083_p1.read(), ap_const_lv6_14) && 
          !esl_seteq<1,6,6>(tmp_2328_fu_25083_p1.read(), ap_const_lv6_15) && 
          !esl_seteq<1,6,6>(ap_const_lv6_16, tmp_2328_fu_25083_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_0, tmp_2341_fu_25853_p1.read()) && 
          !esl_seteq<1,6,6>(tmp_2341_fu_25853_p1.read(), ap_const_lv6_1) && 
          !esl_seteq<1,6,6>(tmp_2341_fu_25853_p1.read(), ap_const_lv6_2) && 
          !esl_seteq<1,6,6>(tmp_2341_fu_25853_p1.read(), ap_const_lv6_3) && 
          !esl_seteq<1,6,6>(tmp_2341_fu_25853_p1.read(), ap_const_lv6_4) && 
          !esl_seteq<1,6,6>(tmp_2341_fu_25853_p1.read(), ap_const_lv6_5) && 
          !esl_seteq<1,6,6>(tmp_2341_fu_25853_p1.read(), ap_const_lv6_6) && 
          !esl_seteq<1,6,6>(tmp_2341_fu_25853_p1.read(), ap_const_lv6_7) && 
          !esl_seteq<1,6,6>(tmp_2341_fu_25853_p1.read(), ap_const_lv6_8) && 
          !esl_seteq<1,6,6>(tmp_2341_fu_25853_p1.read(), ap_const_lv6_9) && 
          !esl_seteq<1,6,6>(tmp_2341_fu_25853_p1.read(), ap_const_lv6_A) && 
          !esl_seteq<1,6,6>(tmp_2341_fu_25853_p1.read(), ap_const_lv6_B) && 
          !esl_seteq<1,6,6>(tmp_2341_fu_25853_p1.read(), ap_const_lv6_C) && 
          !esl_seteq<1,6,6>(tmp_2341_fu_25853_p1.read(), ap_const_lv6_D) && 
          !esl_seteq<1,6,6>(tmp_2341_fu_25853_p1.read(), ap_const_lv6_E) && 
          !esl_seteq<1,6,6>(tmp_2341_fu_25853_p1.read(), ap_const_lv6_F) && 
          !esl_seteq<1,6,6>(tmp_2341_fu_25853_p1.read(), ap_const_lv6_10) && 
          !esl_seteq<1,6,6>(tmp_2341_fu_25853_p1.read(), ap_const_lv6_11) && 
          !esl_seteq<1,6,6>(tmp_2341_fu_25853_p1.read(), ap_const_lv6_12) && 
          !esl_seteq<1,6,6>(tmp_2341_fu_25853_p1.read(), ap_const_lv6_13) && 
          !esl_seteq<1,6,6>(tmp_2341_fu_25853_p1.read(), ap_const_lv6_14) && 
          !esl_seteq<1,6,6>(tmp_2341_fu_25853_p1.read(), ap_const_lv6_15) && 
          !esl_seteq<1,6,6>(ap_const_lv6_16, tmp_2341_fu_25853_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_0, tmp_2352_fu_26626_p1.read()) && 
          !esl_seteq<1,6,6>(tmp_2352_fu_26626_p1.read(), ap_const_lv6_1) && 
          !esl_seteq<1,6,6>(tmp_2352_fu_26626_p1.read(), ap_const_lv6_2) && 
          !esl_seteq<1,6,6>(tmp_2352_fu_26626_p1.read(), ap_const_lv6_3) && 
          !esl_seteq<1,6,6>(tmp_2352_fu_26626_p1.read(), ap_const_lv6_4) && 
          !esl_seteq<1,6,6>(tmp_2352_fu_26626_p1.read(), ap_const_lv6_5) && 
          !esl_seteq<1,6,6>(tmp_2352_fu_26626_p1.read(), ap_const_lv6_6) && 
          !esl_seteq<1,6,6>(tmp_2352_fu_26626_p1.read(), ap_const_lv6_7) && 
          !esl_seteq<1,6,6>(tmp_2352_fu_26626_p1.read(), ap_const_lv6_8) && 
          !esl_seteq<1,6,6>(tmp_2352_fu_26626_p1.read(), ap_const_lv6_9) && 
          !esl_seteq<1,6,6>(tmp_2352_fu_26626_p1.read(), ap_const_lv6_A) && 
          !esl_seteq<1,6,6>(tmp_2352_fu_26626_p1.read(), ap_const_lv6_B) && 
          !esl_seteq<1,6,6>(tmp_2352_fu_26626_p1.read(), ap_const_lv6_C) && 
          !esl_seteq<1,6,6>(tmp_2352_fu_26626_p1.read(), ap_const_lv6_D) && 
          !esl_seteq<1,6,6>(tmp_2352_fu_26626_p1.read(), ap_const_lv6_E) && 
          !esl_seteq<1,6,6>(tmp_2352_fu_26626_p1.read(), ap_const_lv6_F) && 
          !esl_seteq<1,6,6>(tmp_2352_fu_26626_p1.read(), ap_const_lv6_10) && 
          !esl_seteq<1,6,6>(tmp_2352_fu_26626_p1.read(), ap_const_lv6_11) && 
          !esl_seteq<1,6,6>(tmp_2352_fu_26626_p1.read(), ap_const_lv6_12) && 
          !esl_seteq<1,6,6>(tmp_2352_fu_26626_p1.read(), ap_const_lv6_13) && 
          !esl_seteq<1,6,6>(tmp_2352_fu_26626_p1.read(), ap_const_lv6_14) && 
          !esl_seteq<1,6,6>(tmp_2352_fu_26626_p1.read(), ap_const_lv6_15) && 
          !esl_seteq<1,6,6>(ap_const_lv6_16, tmp_2352_fu_26626_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_0, tmp_2365_fu_27392_p1.read()) && 
          !esl_seteq<1,6,6>(tmp_2365_fu_27392_p1.read(), ap_const_lv6_1) && 
          !esl_seteq<1,6,6>(tmp_2365_fu_27392_p1.read(), ap_const_lv6_2) && 
          !esl_seteq<1,6,6>(tmp_2365_fu_27392_p1.read(), ap_const_lv6_3) && 
          !esl_seteq<1,6,6>(tmp_2365_fu_27392_p1.read(), ap_const_lv6_4) && 
          !esl_seteq<1,6,6>(tmp_2365_fu_27392_p1.read(), ap_const_lv6_5) && 
          !esl_seteq<1,6,6>(tmp_2365_fu_27392_p1.read(), ap_const_lv6_6) && 
          !esl_seteq<1,6,6>(tmp_2365_fu_27392_p1.read(), ap_const_lv6_7) && 
          !esl_seteq<1,6,6>(tmp_2365_fu_27392_p1.read(), ap_const_lv6_8) && 
          !esl_seteq<1,6,6>(tmp_2365_fu_27392_p1.read(), ap_const_lv6_9) && 
          !esl_seteq<1,6,6>(tmp_2365_fu_27392_p1.read(), ap_const_lv6_A) && 
          !esl_seteq<1,6,6>(tmp_2365_fu_27392_p1.read(), ap_const_lv6_B) && 
          !esl_seteq<1,6,6>(tmp_2365_fu_27392_p1.read(), ap_const_lv6_C) && 
          !esl_seteq<1,6,6>(tmp_2365_fu_27392_p1.read(), ap_const_lv6_D) && 
          !esl_seteq<1,6,6>(tmp_2365_fu_27392_p1.read(), ap_const_lv6_E) && 
          !esl_seteq<1,6,6>(tmp_2365_fu_27392_p1.read(), ap_const_lv6_F) && 
          !esl_seteq<1,6,6>(tmp_2365_fu_27392_p1.read(), ap_const_lv6_10) && 
          !esl_seteq<1,6,6>(tmp_2365_fu_27392_p1.read(), ap_const_lv6_11) && 
          !esl_seteq<1,6,6>(tmp_2365_fu_27392_p1.read(), ap_const_lv6_12) && 
          !esl_seteq<1,6,6>(tmp_2365_fu_27392_p1.read(), ap_const_lv6_13) && 
          !esl_seteq<1,6,6>(tmp_2365_fu_27392_p1.read(), ap_const_lv6_14) && 
          !esl_seteq<1,6,6>(tmp_2365_fu_27392_p1.read(), ap_const_lv6_15) && 
          !esl_seteq<1,6,6>(ap_const_lv6_16, tmp_2365_fu_27392_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_0, tmp_2376_fu_28173_p1.read()) && 
          !esl_seteq<1,6,6>(tmp_2376_fu_28173_p1.read(), ap_const_lv6_1) && 
          !esl_seteq<1,6,6>(tmp_2376_fu_28173_p1.read(), ap_const_lv6_2) && 
          !esl_seteq<1,6,6>(tmp_2376_fu_28173_p1.read(), ap_const_lv6_3) && 
          !esl_seteq<1,6,6>(tmp_2376_fu_28173_p1.read(), ap_const_lv6_4) && 
          !esl_seteq<1,6,6>(tmp_2376_fu_28173_p1.read(), ap_const_lv6_5) && 
          !esl_seteq<1,6,6>(tmp_2376_fu_28173_p1.read(), ap_const_lv6_6) && 
          !esl_seteq<1,6,6>(tmp_2376_fu_28173_p1.read(), ap_const_lv6_7) && 
          !esl_seteq<1,6,6>(tmp_2376_fu_28173_p1.read(), ap_const_lv6_8) && 
          !esl_seteq<1,6,6>(tmp_2376_fu_28173_p1.read(), ap_const_lv6_9) && 
          !esl_seteq<1,6,6>(tmp_2376_fu_28173_p1.read(), ap_const_lv6_A) && 
          !esl_seteq<1,6,6>(tmp_2376_fu_28173_p1.read(), ap_const_lv6_B) && 
          !esl_seteq<1,6,6>(tmp_2376_fu_28173_p1.read(), ap_const_lv6_C) && 
          !esl_seteq<1,6,6>(tmp_2376_fu_28173_p1.read(), ap_const_lv6_D) && 
          !esl_seteq<1,6,6>(tmp_2376_fu_28173_p1.read(), ap_const_lv6_E) && 
          !esl_seteq<1,6,6>(tmp_2376_fu_28173_p1.read(), ap_const_lv6_F) && 
          !esl_seteq<1,6,6>(tmp_2376_fu_28173_p1.read(), ap_const_lv6_10) && 
          !esl_seteq<1,6,6>(tmp_2376_fu_28173_p1.read(), ap_const_lv6_11) && 
          !esl_seteq<1,6,6>(tmp_2376_fu_28173_p1.read(), ap_const_lv6_12) && 
          !esl_seteq<1,6,6>(tmp_2376_fu_28173_p1.read(), ap_const_lv6_13) && 
          !esl_seteq<1,6,6>(tmp_2376_fu_28173_p1.read(), ap_const_lv6_14) && 
          !esl_seteq<1,6,6>(tmp_2376_fu_28173_p1.read(), ap_const_lv6_15) && 
          !esl_seteq<1,6,6>(ap_const_lv6_16, tmp_2376_fu_28173_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_0, tmp_2389_fu_28939_p1.read()) && 
          !esl_seteq<1,6,6>(tmp_2389_fu_28939_p1.read(), ap_const_lv6_1) && 
          !esl_seteq<1,6,6>(tmp_2389_fu_28939_p1.read(), ap_const_lv6_2) && 
          !esl_seteq<1,6,6>(tmp_2389_fu_28939_p1.read(), ap_const_lv6_3) && 
          !esl_seteq<1,6,6>(tmp_2389_fu_28939_p1.read(), ap_const_lv6_4) && 
          !esl_seteq<1,6,6>(tmp_2389_fu_28939_p1.read(), ap_const_lv6_5) && 
          !esl_seteq<1,6,6>(tmp_2389_fu_28939_p1.read(), ap_const_lv6_6) && 
          !esl_seteq<1,6,6>(tmp_2389_fu_28939_p1.read(), ap_const_lv6_7) && 
          !esl_seteq<1,6,6>(tmp_2389_fu_28939_p1.read(), ap_const_lv6_8) && 
          !esl_seteq<1,6,6>(tmp_2389_fu_28939_p1.read(), ap_const_lv6_9) && 
          !esl_seteq<1,6,6>(tmp_2389_fu_28939_p1.read(), ap_const_lv6_A) && 
          !esl_seteq<1,6,6>(tmp_2389_fu_28939_p1.read(), ap_const_lv6_B) && 
          !esl_seteq<1,6,6>(tmp_2389_fu_28939_p1.read(), ap_const_lv6_C) && 
          !esl_seteq<1,6,6>(tmp_2389_fu_28939_p1.read(), ap_const_lv6_D) && 
          !esl_seteq<1,6,6>(tmp_2389_fu_28939_p1.read(), ap_const_lv6_E) && 
          !esl_seteq<1,6,6>(tmp_2389_fu_28939_p1.read(), ap_const_lv6_F) && 
          !esl_seteq<1,6,6>(tmp_2389_fu_28939_p1.read(), ap_const_lv6_10) && 
          !esl_seteq<1,6,6>(tmp_2389_fu_28939_p1.read(), ap_const_lv6_11) && 
          !esl_seteq<1,6,6>(tmp_2389_fu_28939_p1.read(), ap_const_lv6_12) && 
          !esl_seteq<1,6,6>(tmp_2389_fu_28939_p1.read(), ap_const_lv6_13) && 
          !esl_seteq<1,6,6>(tmp_2389_fu_28939_p1.read(), ap_const_lv6_14) && 
          !esl_seteq<1,6,6>(tmp_2389_fu_28939_p1.read(), ap_const_lv6_15) && 
          !esl_seteq<1,6,6>(ap_const_lv6_16, tmp_2389_fu_28939_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_0, tmp_2400_fu_29724_p1.read()) && 
          !esl_seteq<1,6,6>(tmp_2400_fu_29724_p1.read(), ap_const_lv6_1) && 
          !esl_seteq<1,6,6>(tmp_2400_fu_29724_p1.read(), ap_const_lv6_2) && 
          !esl_seteq<1,6,6>(tmp_2400_fu_29724_p1.read(), ap_const_lv6_3) && 
          !esl_seteq<1,6,6>(tmp_2400_fu_29724_p1.read(), ap_const_lv6_4) && 
          !esl_seteq<1,6,6>(tmp_2400_fu_29724_p1.read(), ap_const_lv6_5) && 
          !esl_seteq<1,6,6>(tmp_2400_fu_29724_p1.read(), ap_const_lv6_6) && 
          !esl_seteq<1,6,6>(tmp_2400_fu_29724_p1.read(), ap_const_lv6_7) && 
          !esl_seteq<1,6,6>(tmp_2400_fu_29724_p1.read(), ap_const_lv6_8) && 
          !esl_seteq<1,6,6>(tmp_2400_fu_29724_p1.read(), ap_const_lv6_9) && 
          !esl_seteq<1,6,6>(tmp_2400_fu_29724_p1.read(), ap_const_lv6_A) && 
          !esl_seteq<1,6,6>(tmp_2400_fu_29724_p1.read(), ap_const_lv6_B) && 
          !esl_seteq<1,6,6>(tmp_2400_fu_29724_p1.read(), ap_const_lv6_C) && 
          !esl_seteq<1,6,6>(tmp_2400_fu_29724_p1.read(), ap_const_lv6_D) && 
          !esl_seteq<1,6,6>(tmp_2400_fu_29724_p1.read(), ap_const_lv6_E) && 
          !esl_seteq<1,6,6>(tmp_2400_fu_29724_p1.read(), ap_const_lv6_F) && 
          !esl_seteq<1,6,6>(tmp_2400_fu_29724_p1.read(), ap_const_lv6_10) && 
          !esl_seteq<1,6,6>(tmp_2400_fu_29724_p1.read(), ap_const_lv6_11) && 
          !esl_seteq<1,6,6>(tmp_2400_fu_29724_p1.read(), ap_const_lv6_12) && 
          !esl_seteq<1,6,6>(tmp_2400_fu_29724_p1.read(), ap_const_lv6_13) && 
          !esl_seteq<1,6,6>(tmp_2400_fu_29724_p1.read(), ap_const_lv6_14) && 
          !esl_seteq<1,6,6>(tmp_2400_fu_29724_p1.read(), ap_const_lv6_15) && 
          !esl_seteq<1,6,6>(ap_const_lv6_16, tmp_2400_fu_29724_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_0, tmp_2413_fu_30498_p1.read()) && 
          !esl_seteq<1,6,6>(tmp_2413_fu_30498_p1.read(), ap_const_lv6_1) && 
          !esl_seteq<1,6,6>(tmp_2413_fu_30498_p1.read(), ap_const_lv6_2) && 
          !esl_seteq<1,6,6>(tmp_2413_fu_30498_p1.read(), ap_const_lv6_3) && 
          !esl_seteq<1,6,6>(tmp_2413_fu_30498_p1.read(), ap_const_lv6_4) && 
          !esl_seteq<1,6,6>(tmp_2413_fu_30498_p1.read(), ap_const_lv6_5) && 
          !esl_seteq<1,6,6>(tmp_2413_fu_30498_p1.read(), ap_const_lv6_6) && 
          !esl_seteq<1,6,6>(tmp_2413_fu_30498_p1.read(), ap_const_lv6_7) && 
          !esl_seteq<1,6,6>(tmp_2413_fu_30498_p1.read(), ap_const_lv6_8) && 
          !esl_seteq<1,6,6>(tmp_2413_fu_30498_p1.read(), ap_const_lv6_9) && 
          !esl_seteq<1,6,6>(tmp_2413_fu_30498_p1.read(), ap_const_lv6_A) && 
          !esl_seteq<1,6,6>(tmp_2413_fu_30498_p1.read(), ap_const_lv6_B) && 
          !esl_seteq<1,6,6>(tmp_2413_fu_30498_p1.read(), ap_const_lv6_C) && 
          !esl_seteq<1,6,6>(tmp_2413_fu_30498_p1.read(), ap_const_lv6_D) && 
          !esl_seteq<1,6,6>(tmp_2413_fu_30498_p1.read(), ap_const_lv6_E) && 
          !esl_seteq<1,6,6>(tmp_2413_fu_30498_p1.read(), ap_const_lv6_F) && 
          !esl_seteq<1,6,6>(tmp_2413_fu_30498_p1.read(), ap_const_lv6_10) && 
          !esl_seteq<1,6,6>(tmp_2413_fu_30498_p1.read(), ap_const_lv6_11) && 
          !esl_seteq<1,6,6>(tmp_2413_fu_30498_p1.read(), ap_const_lv6_12) && 
          !esl_seteq<1,6,6>(tmp_2413_fu_30498_p1.read(), ap_const_lv6_13) && 
          !esl_seteq<1,6,6>(tmp_2413_fu_30498_p1.read(), ap_const_lv6_14) && 
          !esl_seteq<1,6,6>(tmp_2413_fu_30498_p1.read(), ap_const_lv6_15) && 
          !esl_seteq<1,6,6>(ap_const_lv6_16, tmp_2413_fu_30498_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_0, tmp_2424_fu_31283_p1.read()) && 
          !esl_seteq<1,6,6>(tmp_2424_fu_31283_p1.read(), ap_const_lv6_1) && 
          !esl_seteq<1,6,6>(tmp_2424_fu_31283_p1.read(), ap_const_lv6_2) && 
          !esl_seteq<1,6,6>(tmp_2424_fu_31283_p1.read(), ap_const_lv6_3) && 
          !esl_seteq<1,6,6>(tmp_2424_fu_31283_p1.read(), ap_const_lv6_4) && 
          !esl_seteq<1,6,6>(tmp_2424_fu_31283_p1.read(), ap_const_lv6_5) && 
          !esl_seteq<1,6,6>(tmp_2424_fu_31283_p1.read(), ap_const_lv6_6) && 
          !esl_seteq<1,6,6>(tmp_2424_fu_31283_p1.read(), ap_const_lv6_7) && 
          !esl_seteq<1,6,6>(tmp_2424_fu_31283_p1.read(), ap_const_lv6_8) && 
          !esl_seteq<1,6,6>(tmp_2424_fu_31283_p1.read(), ap_const_lv6_9) && 
          !esl_seteq<1,6,6>(tmp_2424_fu_31283_p1.read(), ap_const_lv6_A) && 
          !esl_seteq<1,6,6>(tmp_2424_fu_31283_p1.read(), ap_const_lv6_B) && 
          !esl_seteq<1,6,6>(tmp_2424_fu_31283_p1.read(), ap_const_lv6_C) && 
          !esl_seteq<1,6,6>(tmp_2424_fu_31283_p1.read(), ap_const_lv6_D) && 
          !esl_seteq<1,6,6>(tmp_2424_fu_31283_p1.read(), ap_const_lv6_E) && 
          !esl_seteq<1,6,6>(tmp_2424_fu_31283_p1.read(), ap_const_lv6_F) && 
          !esl_seteq<1,6,6>(tmp_2424_fu_31283_p1.read(), ap_const_lv6_10) && 
          !esl_seteq<1,6,6>(tmp_2424_fu_31283_p1.read(), ap_const_lv6_11) && 
          !esl_seteq<1,6,6>(tmp_2424_fu_31283_p1.read(), ap_const_lv6_12) && 
          !esl_seteq<1,6,6>(tmp_2424_fu_31283_p1.read(), ap_const_lv6_13) && 
          !esl_seteq<1,6,6>(tmp_2424_fu_31283_p1.read(), ap_const_lv6_14) && 
          !esl_seteq<1,6,6>(tmp_2424_fu_31283_p1.read(), ap_const_lv6_15) && 
          !esl_seteq<1,6,6>(ap_const_lv6_16, tmp_2424_fu_31283_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_0, tmp_2437_fu_32061_p1.read()) && 
          !esl_seteq<1,6,6>(tmp_2437_fu_32061_p1.read(), ap_const_lv6_1) && 
          !esl_seteq<1,6,6>(tmp_2437_fu_32061_p1.read(), ap_const_lv6_2) && 
          !esl_seteq<1,6,6>(tmp_2437_fu_32061_p1.read(), ap_const_lv6_3) && 
          !esl_seteq<1,6,6>(tmp_2437_fu_32061_p1.read(), ap_const_lv6_4) && 
          !esl_seteq<1,6,6>(tmp_2437_fu_32061_p1.read(), ap_const_lv6_5) && 
          !esl_seteq<1,6,6>(tmp_2437_fu_32061_p1.read(), ap_const_lv6_6) && 
          !esl_seteq<1,6,6>(tmp_2437_fu_32061_p1.read(), ap_const_lv6_7) && 
          !esl_seteq<1,6,6>(tmp_2437_fu_32061_p1.read(), ap_const_lv6_8) && 
          !esl_seteq<1,6,6>(tmp_2437_fu_32061_p1.read(), ap_const_lv6_9) && 
          !esl_seteq<1,6,6>(tmp_2437_fu_32061_p1.read(), ap_const_lv6_A) && 
          !esl_seteq<1,6,6>(tmp_2437_fu_32061_p1.read(), ap_const_lv6_B) && 
          !esl_seteq<1,6,6>(tmp_2437_fu_32061_p1.read(), ap_const_lv6_C) && 
          !esl_seteq<1,6,6>(tmp_2437_fu_32061_p1.read(), ap_const_lv6_D) && 
          !esl_seteq<1,6,6>(tmp_2437_fu_32061_p1.read(), ap_const_lv6_E) && 
          !esl_seteq<1,6,6>(tmp_2437_fu_32061_p1.read(), ap_const_lv6_F) && 
          !esl_seteq<1,6,6>(tmp_2437_fu_32061_p1.read(), ap_const_lv6_10) && 
          !esl_seteq<1,6,6>(tmp_2437_fu_32061_p1.read(), ap_const_lv6_11) && 
          !esl_seteq<1,6,6>(tmp_2437_fu_32061_p1.read(), ap_const_lv6_12) && 
          !esl_seteq<1,6,6>(tmp_2437_fu_32061_p1.read(), ap_const_lv6_13) && 
          !esl_seteq<1,6,6>(tmp_2437_fu_32061_p1.read(), ap_const_lv6_14) && 
          !esl_seteq<1,6,6>(tmp_2437_fu_32061_p1.read(), ap_const_lv6_15) && 
          !esl_seteq<1,6,6>(ap_const_lv6_16, tmp_2437_fu_32061_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_0, tmp_2448_fu_32850_p1.read()) && 
          !esl_seteq<1,6,6>(tmp_2448_fu_32850_p1.read(), ap_const_lv6_1) && 
          !esl_seteq<1,6,6>(tmp_2448_fu_32850_p1.read(), ap_const_lv6_2) && 
          !esl_seteq<1,6,6>(tmp_2448_fu_32850_p1.read(), ap_const_lv6_3) && 
          !esl_seteq<1,6,6>(tmp_2448_fu_32850_p1.read(), ap_const_lv6_4) && 
          !esl_seteq<1,6,6>(tmp_2448_fu_32850_p1.read(), ap_const_lv6_5) && 
          !esl_seteq<1,6,6>(tmp_2448_fu_32850_p1.read(), ap_const_lv6_6) && 
          !esl_seteq<1,6,6>(tmp_2448_fu_32850_p1.read(), ap_const_lv6_7) && 
          !esl_seteq<1,6,6>(tmp_2448_fu_32850_p1.read(), ap_const_lv6_8) && 
          !esl_seteq<1,6,6>(tmp_2448_fu_32850_p1.read(), ap_const_lv6_9) && 
          !esl_seteq<1,6,6>(tmp_2448_fu_32850_p1.read(), ap_const_lv6_A) && 
          !esl_seteq<1,6,6>(tmp_2448_fu_32850_p1.read(), ap_const_lv6_B) && 
          !esl_seteq<1,6,6>(tmp_2448_fu_32850_p1.read(), ap_const_lv6_C) && 
          !esl_seteq<1,6,6>(tmp_2448_fu_32850_p1.read(), ap_const_lv6_D) && 
          !esl_seteq<1,6,6>(tmp_2448_fu_32850_p1.read(), ap_const_lv6_E) && 
          !esl_seteq<1,6,6>(tmp_2448_fu_32850_p1.read(), ap_const_lv6_F) && 
          !esl_seteq<1,6,6>(tmp_2448_fu_32850_p1.read(), ap_const_lv6_10) && 
          !esl_seteq<1,6,6>(tmp_2448_fu_32850_p1.read(), ap_const_lv6_11) && 
          !esl_seteq<1,6,6>(tmp_2448_fu_32850_p1.read(), ap_const_lv6_12) && 
          !esl_seteq<1,6,6>(tmp_2448_fu_32850_p1.read(), ap_const_lv6_13) && 
          !esl_seteq<1,6,6>(tmp_2448_fu_32850_p1.read(), ap_const_lv6_14) && 
          !esl_seteq<1,6,6>(tmp_2448_fu_32850_p1.read(), ap_const_lv6_15) && 
          !esl_seteq<1,6,6>(ap_const_lv6_16, tmp_2448_fu_32850_p1.read())))) {
        weights_48_48_1x1_V_23_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_23_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read())) {
        weights_48_48_1x1_V_2_address0 =  (sc_lv<7>) (tmp_1683_cast_fu_32854_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read())) {
        weights_48_48_1x1_V_2_address0 =  (sc_lv<7>) (tmp_1646_cast_fu_32065_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read())) {
        weights_48_48_1x1_V_2_address0 =  (sc_lv<7>) (tmp_1605_cast_fu_31287_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read())) {
        weights_48_48_1x1_V_2_address0 =  (sc_lv<7>) (tmp_1566_cast_fu_30502_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read())) {
        weights_48_48_1x1_V_2_address0 =  (sc_lv<7>) (tmp_1525_cast_fu_29728_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read())) {
        weights_48_48_1x1_V_2_address0 =  (sc_lv<7>) (tmp_1487_cast_fu_28943_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read())) {
        weights_48_48_1x1_V_2_address0 =  (sc_lv<7>) (tmp_1448_cast_fu_28177_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read())) {
        weights_48_48_1x1_V_2_address0 =  (sc_lv<7>) (tmp_1410_cast_fu_27396_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read())) {
        weights_48_48_1x1_V_2_address0 =  (sc_lv<7>) (tmp_1371_cast_fu_26630_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read())) {
        weights_48_48_1x1_V_2_address0 =  (sc_lv<7>) (tmp_1334_cast_fu_25857_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read())) {
        weights_48_48_1x1_V_2_address0 =  (sc_lv<7>) (tmp_1295_cast_fu_25087_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read())) {
        weights_48_48_1x1_V_2_address0 =  (sc_lv<7>) (tmp_1258_cast_fu_24306_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read())) {
        weights_48_48_1x1_V_2_address0 =  (sc_lv<7>) (tmp_1217_cast_fu_23528_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read())) {
        weights_48_48_1x1_V_2_address0 =  (sc_lv<7>) (tmp_1180_cast_fu_22747_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read())) {
        weights_48_48_1x1_V_2_address0 =  (sc_lv<7>) (tmp_1141_cast_fu_21981_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read())) {
        weights_48_48_1x1_V_2_address0 =  (sc_lv<7>) (tmp_1104_cast_fu_21200_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read())) {
        weights_48_48_1x1_V_2_address0 =  (sc_lv<7>) (tmp_1076_cast_fu_20553_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read())) {
        weights_48_48_1x1_V_2_address0 =  (sc_lv<7>) (tmp_1036_cast_fu_19772_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read())) {
        weights_48_48_1x1_V_2_address0 =  (sc_lv<7>) (tmp_1002_cast_fu_18991_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_2_address0 = grp_subconv_1x1_16p_p_fu_13962_weight_2_V_address0.read();
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
        weights_48_48_1x1_V_2_address0 = grp_subconv_1x1_8_p_fu_13858_weight_2_V_address0.read();
    } else {
        weights_48_48_1x1_V_2_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_2_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_2_address1 = grp_subconv_1x1_16p_p_fu_13962_weight_2_V_address1.read();
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
        weights_48_48_1x1_V_2_address1 = grp_subconv_1x1_8_p_fu_13858_weight_2_V_address1.read();
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
        weights_48_48_1x1_V_2_ce0 = grp_subconv_1x1_16p_p_fu_13962_weight_2_V_ce0.read();
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
        weights_48_48_1x1_V_2_ce0 = grp_subconv_1x1_8_p_fu_13858_weight_2_V_ce0.read();
    } else {
        weights_48_48_1x1_V_2_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_2_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_2_ce1 = grp_subconv_1x1_16p_p_fu_13962_weight_2_V_ce1.read();
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
        weights_48_48_1x1_V_2_ce1 = grp_subconv_1x1_8_p_fu_13858_weight_2_V_ce1.read();
    } else {
        weights_48_48_1x1_V_2_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_2_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read()) && 
          esl_seteq<1,6,6>(tmp_2236_fu_18987_p1.read(), ap_const_lv6_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read()) && 
          esl_seteq<1,6,6>(tmp_2247_fu_19768_p1.read(), ap_const_lv6_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read()) && 
          esl_seteq<1,6,6>(tmp_2258_fu_20549_p1.read(), ap_const_lv6_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read()) && 
          esl_seteq<1,6,6>(tmp_2269_fu_21196_p1.read(), ap_const_lv6_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read()) && 
          esl_seteq<1,6,6>(tmp_2280_fu_21977_p1.read(), ap_const_lv6_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read()) && 
          esl_seteq<1,6,6>(tmp_2293_fu_22743_p1.read(), ap_const_lv6_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) && 
          esl_seteq<1,6,6>(tmp_2304_fu_23524_p1.read(), ap_const_lv6_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read()) && 
          esl_seteq<1,6,6>(tmp_2317_fu_24302_p1.read(), ap_const_lv6_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read()) && 
          esl_seteq<1,6,6>(tmp_2328_fu_25083_p1.read(), ap_const_lv6_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read()) && 
          esl_seteq<1,6,6>(tmp_2341_fu_25853_p1.read(), ap_const_lv6_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read()) && 
          esl_seteq<1,6,6>(tmp_2352_fu_26626_p1.read(), ap_const_lv6_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read()) && 
          esl_seteq<1,6,6>(tmp_2365_fu_27392_p1.read(), ap_const_lv6_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read()) && 
          esl_seteq<1,6,6>(tmp_2376_fu_28173_p1.read(), ap_const_lv6_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read()) && 
          esl_seteq<1,6,6>(tmp_2389_fu_28939_p1.read(), ap_const_lv6_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read()) && 
          esl_seteq<1,6,6>(tmp_2400_fu_29724_p1.read(), ap_const_lv6_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read()) && 
          esl_seteq<1,6,6>(tmp_2413_fu_30498_p1.read(), ap_const_lv6_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read()) && 
          esl_seteq<1,6,6>(tmp_2424_fu_31283_p1.read(), ap_const_lv6_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read()) && 
          esl_seteq<1,6,6>(tmp_2437_fu_32061_p1.read(), ap_const_lv6_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read()) && 
          esl_seteq<1,6,6>(tmp_2448_fu_32850_p1.read(), ap_const_lv6_2)))) {
        weights_48_48_1x1_V_2_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_2_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read())) {
        weights_48_48_1x1_V_3_address0 =  (sc_lv<7>) (tmp_1683_cast_fu_32854_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read())) {
        weights_48_48_1x1_V_3_address0 =  (sc_lv<7>) (tmp_1646_cast_fu_32065_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read())) {
        weights_48_48_1x1_V_3_address0 =  (sc_lv<7>) (tmp_1605_cast_fu_31287_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read())) {
        weights_48_48_1x1_V_3_address0 =  (sc_lv<7>) (tmp_1566_cast_fu_30502_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read())) {
        weights_48_48_1x1_V_3_address0 =  (sc_lv<7>) (tmp_1525_cast_fu_29728_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read())) {
        weights_48_48_1x1_V_3_address0 =  (sc_lv<7>) (tmp_1487_cast_fu_28943_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read())) {
        weights_48_48_1x1_V_3_address0 =  (sc_lv<7>) (tmp_1448_cast_fu_28177_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read())) {
        weights_48_48_1x1_V_3_address0 =  (sc_lv<7>) (tmp_1410_cast_fu_27396_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read())) {
        weights_48_48_1x1_V_3_address0 =  (sc_lv<7>) (tmp_1371_cast_fu_26630_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read())) {
        weights_48_48_1x1_V_3_address0 =  (sc_lv<7>) (tmp_1334_cast_fu_25857_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read())) {
        weights_48_48_1x1_V_3_address0 =  (sc_lv<7>) (tmp_1295_cast_fu_25087_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read())) {
        weights_48_48_1x1_V_3_address0 =  (sc_lv<7>) (tmp_1258_cast_fu_24306_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read())) {
        weights_48_48_1x1_V_3_address0 =  (sc_lv<7>) (tmp_1217_cast_fu_23528_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read())) {
        weights_48_48_1x1_V_3_address0 =  (sc_lv<7>) (tmp_1180_cast_fu_22747_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read())) {
        weights_48_48_1x1_V_3_address0 =  (sc_lv<7>) (tmp_1141_cast_fu_21981_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read())) {
        weights_48_48_1x1_V_3_address0 =  (sc_lv<7>) (tmp_1104_cast_fu_21200_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read())) {
        weights_48_48_1x1_V_3_address0 =  (sc_lv<7>) (tmp_1076_cast_fu_20553_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read())) {
        weights_48_48_1x1_V_3_address0 =  (sc_lv<7>) (tmp_1036_cast_fu_19772_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read())) {
        weights_48_48_1x1_V_3_address0 =  (sc_lv<7>) (tmp_1002_cast_fu_18991_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_3_address0 = grp_subconv_1x1_16p_p_fu_13962_weight_3_V_address0.read();
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
        weights_48_48_1x1_V_3_address0 = grp_subconv_1x1_8_p_fu_13858_weight_3_V_address0.read();
    } else {
        weights_48_48_1x1_V_3_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_3_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_3_address1 = grp_subconv_1x1_16p_p_fu_13962_weight_3_V_address1.read();
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
        weights_48_48_1x1_V_3_address1 = grp_subconv_1x1_8_p_fu_13858_weight_3_V_address1.read();
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
        weights_48_48_1x1_V_3_ce0 = grp_subconv_1x1_16p_p_fu_13962_weight_3_V_ce0.read();
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
        weights_48_48_1x1_V_3_ce0 = grp_subconv_1x1_8_p_fu_13858_weight_3_V_ce0.read();
    } else {
        weights_48_48_1x1_V_3_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_3_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_3_ce1 = grp_subconv_1x1_16p_p_fu_13962_weight_3_V_ce1.read();
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
        weights_48_48_1x1_V_3_ce1 = grp_subconv_1x1_8_p_fu_13858_weight_3_V_ce1.read();
    } else {
        weights_48_48_1x1_V_3_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_3_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read()) && 
          esl_seteq<1,6,6>(tmp_2236_fu_18987_p1.read(), ap_const_lv6_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read()) && 
          esl_seteq<1,6,6>(tmp_2247_fu_19768_p1.read(), ap_const_lv6_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read()) && 
          esl_seteq<1,6,6>(tmp_2258_fu_20549_p1.read(), ap_const_lv6_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read()) && 
          esl_seteq<1,6,6>(tmp_2269_fu_21196_p1.read(), ap_const_lv6_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read()) && 
          esl_seteq<1,6,6>(tmp_2280_fu_21977_p1.read(), ap_const_lv6_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read()) && 
          esl_seteq<1,6,6>(tmp_2293_fu_22743_p1.read(), ap_const_lv6_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) && 
          esl_seteq<1,6,6>(tmp_2304_fu_23524_p1.read(), ap_const_lv6_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read()) && 
          esl_seteq<1,6,6>(tmp_2317_fu_24302_p1.read(), ap_const_lv6_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read()) && 
          esl_seteq<1,6,6>(tmp_2328_fu_25083_p1.read(), ap_const_lv6_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read()) && 
          esl_seteq<1,6,6>(tmp_2341_fu_25853_p1.read(), ap_const_lv6_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read()) && 
          esl_seteq<1,6,6>(tmp_2352_fu_26626_p1.read(), ap_const_lv6_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read()) && 
          esl_seteq<1,6,6>(tmp_2365_fu_27392_p1.read(), ap_const_lv6_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read()) && 
          esl_seteq<1,6,6>(tmp_2376_fu_28173_p1.read(), ap_const_lv6_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read()) && 
          esl_seteq<1,6,6>(tmp_2389_fu_28939_p1.read(), ap_const_lv6_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read()) && 
          esl_seteq<1,6,6>(tmp_2400_fu_29724_p1.read(), ap_const_lv6_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read()) && 
          esl_seteq<1,6,6>(tmp_2413_fu_30498_p1.read(), ap_const_lv6_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read()) && 
          esl_seteq<1,6,6>(tmp_2424_fu_31283_p1.read(), ap_const_lv6_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read()) && 
          esl_seteq<1,6,6>(tmp_2437_fu_32061_p1.read(), ap_const_lv6_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read()) && 
          esl_seteq<1,6,6>(tmp_2448_fu_32850_p1.read(), ap_const_lv6_3)))) {
        weights_48_48_1x1_V_3_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_3_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read())) {
        weights_48_48_1x1_V_4_address0 =  (sc_lv<7>) (tmp_1683_cast_fu_32854_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read())) {
        weights_48_48_1x1_V_4_address0 =  (sc_lv<7>) (tmp_1646_cast_fu_32065_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read())) {
        weights_48_48_1x1_V_4_address0 =  (sc_lv<7>) (tmp_1605_cast_fu_31287_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read())) {
        weights_48_48_1x1_V_4_address0 =  (sc_lv<7>) (tmp_1566_cast_fu_30502_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read())) {
        weights_48_48_1x1_V_4_address0 =  (sc_lv<7>) (tmp_1525_cast_fu_29728_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read())) {
        weights_48_48_1x1_V_4_address0 =  (sc_lv<7>) (tmp_1487_cast_fu_28943_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read())) {
        weights_48_48_1x1_V_4_address0 =  (sc_lv<7>) (tmp_1448_cast_fu_28177_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read())) {
        weights_48_48_1x1_V_4_address0 =  (sc_lv<7>) (tmp_1410_cast_fu_27396_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read())) {
        weights_48_48_1x1_V_4_address0 =  (sc_lv<7>) (tmp_1371_cast_fu_26630_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read())) {
        weights_48_48_1x1_V_4_address0 =  (sc_lv<7>) (tmp_1334_cast_fu_25857_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read())) {
        weights_48_48_1x1_V_4_address0 =  (sc_lv<7>) (tmp_1295_cast_fu_25087_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read())) {
        weights_48_48_1x1_V_4_address0 =  (sc_lv<7>) (tmp_1258_cast_fu_24306_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read())) {
        weights_48_48_1x1_V_4_address0 =  (sc_lv<7>) (tmp_1217_cast_fu_23528_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read())) {
        weights_48_48_1x1_V_4_address0 =  (sc_lv<7>) (tmp_1180_cast_fu_22747_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read())) {
        weights_48_48_1x1_V_4_address0 =  (sc_lv<7>) (tmp_1141_cast_fu_21981_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read())) {
        weights_48_48_1x1_V_4_address0 =  (sc_lv<7>) (tmp_1104_cast_fu_21200_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read())) {
        weights_48_48_1x1_V_4_address0 =  (sc_lv<7>) (tmp_1076_cast_fu_20553_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read())) {
        weights_48_48_1x1_V_4_address0 =  (sc_lv<7>) (tmp_1036_cast_fu_19772_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read())) {
        weights_48_48_1x1_V_4_address0 =  (sc_lv<7>) (tmp_1002_cast_fu_18991_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_4_address0 = grp_subconv_1x1_16p_p_fu_13962_weight_4_V_address0.read();
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
        weights_48_48_1x1_V_4_address0 = grp_subconv_1x1_8_p_fu_13858_weight_4_V_address0.read();
    } else {
        weights_48_48_1x1_V_4_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_4_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_4_address1 = grp_subconv_1x1_16p_p_fu_13962_weight_4_V_address1.read();
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
        weights_48_48_1x1_V_4_address1 = grp_subconv_1x1_8_p_fu_13858_weight_4_V_address1.read();
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
        weights_48_48_1x1_V_4_ce0 = grp_subconv_1x1_16p_p_fu_13962_weight_4_V_ce0.read();
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
        weights_48_48_1x1_V_4_ce0 = grp_subconv_1x1_8_p_fu_13858_weight_4_V_ce0.read();
    } else {
        weights_48_48_1x1_V_4_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_4_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_4_ce1 = grp_subconv_1x1_16p_p_fu_13962_weight_4_V_ce1.read();
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
        weights_48_48_1x1_V_4_ce1 = grp_subconv_1x1_8_p_fu_13858_weight_4_V_ce1.read();
    } else {
        weights_48_48_1x1_V_4_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_4_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read()) && 
          esl_seteq<1,6,6>(tmp_2236_fu_18987_p1.read(), ap_const_lv6_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read()) && 
          esl_seteq<1,6,6>(tmp_2247_fu_19768_p1.read(), ap_const_lv6_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read()) && 
          esl_seteq<1,6,6>(tmp_2258_fu_20549_p1.read(), ap_const_lv6_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read()) && 
          esl_seteq<1,6,6>(tmp_2269_fu_21196_p1.read(), ap_const_lv6_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read()) && 
          esl_seteq<1,6,6>(tmp_2280_fu_21977_p1.read(), ap_const_lv6_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read()) && 
          esl_seteq<1,6,6>(tmp_2293_fu_22743_p1.read(), ap_const_lv6_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) && 
          esl_seteq<1,6,6>(tmp_2304_fu_23524_p1.read(), ap_const_lv6_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read()) && 
          esl_seteq<1,6,6>(tmp_2317_fu_24302_p1.read(), ap_const_lv6_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read()) && 
          esl_seteq<1,6,6>(tmp_2328_fu_25083_p1.read(), ap_const_lv6_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read()) && 
          esl_seteq<1,6,6>(tmp_2341_fu_25853_p1.read(), ap_const_lv6_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read()) && 
          esl_seteq<1,6,6>(tmp_2352_fu_26626_p1.read(), ap_const_lv6_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read()) && 
          esl_seteq<1,6,6>(tmp_2365_fu_27392_p1.read(), ap_const_lv6_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read()) && 
          esl_seteq<1,6,6>(tmp_2376_fu_28173_p1.read(), ap_const_lv6_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read()) && 
          esl_seteq<1,6,6>(tmp_2389_fu_28939_p1.read(), ap_const_lv6_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read()) && 
          esl_seteq<1,6,6>(tmp_2400_fu_29724_p1.read(), ap_const_lv6_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read()) && 
          esl_seteq<1,6,6>(tmp_2413_fu_30498_p1.read(), ap_const_lv6_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read()) && 
          esl_seteq<1,6,6>(tmp_2424_fu_31283_p1.read(), ap_const_lv6_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read()) && 
          esl_seteq<1,6,6>(tmp_2437_fu_32061_p1.read(), ap_const_lv6_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read()) && 
          esl_seteq<1,6,6>(tmp_2448_fu_32850_p1.read(), ap_const_lv6_4)))) {
        weights_48_48_1x1_V_4_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_4_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read())) {
        weights_48_48_1x1_V_5_address0 =  (sc_lv<7>) (tmp_1683_cast_fu_32854_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read())) {
        weights_48_48_1x1_V_5_address0 =  (sc_lv<7>) (tmp_1646_cast_fu_32065_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read())) {
        weights_48_48_1x1_V_5_address0 =  (sc_lv<7>) (tmp_1605_cast_fu_31287_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read())) {
        weights_48_48_1x1_V_5_address0 =  (sc_lv<7>) (tmp_1566_cast_fu_30502_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read())) {
        weights_48_48_1x1_V_5_address0 =  (sc_lv<7>) (tmp_1525_cast_fu_29728_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read())) {
        weights_48_48_1x1_V_5_address0 =  (sc_lv<7>) (tmp_1487_cast_fu_28943_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read())) {
        weights_48_48_1x1_V_5_address0 =  (sc_lv<7>) (tmp_1448_cast_fu_28177_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read())) {
        weights_48_48_1x1_V_5_address0 =  (sc_lv<7>) (tmp_1410_cast_fu_27396_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read())) {
        weights_48_48_1x1_V_5_address0 =  (sc_lv<7>) (tmp_1371_cast_fu_26630_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read())) {
        weights_48_48_1x1_V_5_address0 =  (sc_lv<7>) (tmp_1334_cast_fu_25857_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read())) {
        weights_48_48_1x1_V_5_address0 =  (sc_lv<7>) (tmp_1295_cast_fu_25087_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read())) {
        weights_48_48_1x1_V_5_address0 =  (sc_lv<7>) (tmp_1258_cast_fu_24306_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read())) {
        weights_48_48_1x1_V_5_address0 =  (sc_lv<7>) (tmp_1217_cast_fu_23528_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read())) {
        weights_48_48_1x1_V_5_address0 =  (sc_lv<7>) (tmp_1180_cast_fu_22747_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read())) {
        weights_48_48_1x1_V_5_address0 =  (sc_lv<7>) (tmp_1141_cast_fu_21981_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read())) {
        weights_48_48_1x1_V_5_address0 =  (sc_lv<7>) (tmp_1104_cast_fu_21200_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read())) {
        weights_48_48_1x1_V_5_address0 =  (sc_lv<7>) (tmp_1076_cast_fu_20553_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read())) {
        weights_48_48_1x1_V_5_address0 =  (sc_lv<7>) (tmp_1036_cast_fu_19772_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read())) {
        weights_48_48_1x1_V_5_address0 =  (sc_lv<7>) (tmp_1002_cast_fu_18991_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_5_address0 = grp_subconv_1x1_16p_p_fu_13962_weight_5_V_address0.read();
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
        weights_48_48_1x1_V_5_address0 = grp_subconv_1x1_8_p_fu_13858_weight_5_V_address0.read();
    } else {
        weights_48_48_1x1_V_5_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_5_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_5_address1 = grp_subconv_1x1_16p_p_fu_13962_weight_5_V_address1.read();
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
        weights_48_48_1x1_V_5_address1 = grp_subconv_1x1_8_p_fu_13858_weight_5_V_address1.read();
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
        weights_48_48_1x1_V_5_ce0 = grp_subconv_1x1_16p_p_fu_13962_weight_5_V_ce0.read();
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
        weights_48_48_1x1_V_5_ce0 = grp_subconv_1x1_8_p_fu_13858_weight_5_V_ce0.read();
    } else {
        weights_48_48_1x1_V_5_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_5_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_5_ce1 = grp_subconv_1x1_16p_p_fu_13962_weight_5_V_ce1.read();
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
        weights_48_48_1x1_V_5_ce1 = grp_subconv_1x1_8_p_fu_13858_weight_5_V_ce1.read();
    } else {
        weights_48_48_1x1_V_5_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_5_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read()) && 
          esl_seteq<1,6,6>(tmp_2236_fu_18987_p1.read(), ap_const_lv6_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read()) && 
          esl_seteq<1,6,6>(tmp_2247_fu_19768_p1.read(), ap_const_lv6_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read()) && 
          esl_seteq<1,6,6>(tmp_2258_fu_20549_p1.read(), ap_const_lv6_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read()) && 
          esl_seteq<1,6,6>(tmp_2269_fu_21196_p1.read(), ap_const_lv6_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read()) && 
          esl_seteq<1,6,6>(tmp_2280_fu_21977_p1.read(), ap_const_lv6_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read()) && 
          esl_seteq<1,6,6>(tmp_2293_fu_22743_p1.read(), ap_const_lv6_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) && 
          esl_seteq<1,6,6>(tmp_2304_fu_23524_p1.read(), ap_const_lv6_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read()) && 
          esl_seteq<1,6,6>(tmp_2317_fu_24302_p1.read(), ap_const_lv6_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read()) && 
          esl_seteq<1,6,6>(tmp_2328_fu_25083_p1.read(), ap_const_lv6_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read()) && 
          esl_seteq<1,6,6>(tmp_2341_fu_25853_p1.read(), ap_const_lv6_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read()) && 
          esl_seteq<1,6,6>(tmp_2352_fu_26626_p1.read(), ap_const_lv6_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read()) && 
          esl_seteq<1,6,6>(tmp_2365_fu_27392_p1.read(), ap_const_lv6_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read()) && 
          esl_seteq<1,6,6>(tmp_2376_fu_28173_p1.read(), ap_const_lv6_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read()) && 
          esl_seteq<1,6,6>(tmp_2389_fu_28939_p1.read(), ap_const_lv6_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read()) && 
          esl_seteq<1,6,6>(tmp_2400_fu_29724_p1.read(), ap_const_lv6_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read()) && 
          esl_seteq<1,6,6>(tmp_2413_fu_30498_p1.read(), ap_const_lv6_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read()) && 
          esl_seteq<1,6,6>(tmp_2424_fu_31283_p1.read(), ap_const_lv6_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read()) && 
          esl_seteq<1,6,6>(tmp_2437_fu_32061_p1.read(), ap_const_lv6_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read()) && 
          esl_seteq<1,6,6>(tmp_2448_fu_32850_p1.read(), ap_const_lv6_5)))) {
        weights_48_48_1x1_V_5_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_5_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read())) {
        weights_48_48_1x1_V_6_address0 =  (sc_lv<7>) (tmp_1683_cast_fu_32854_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read())) {
        weights_48_48_1x1_V_6_address0 =  (sc_lv<7>) (tmp_1646_cast_fu_32065_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read())) {
        weights_48_48_1x1_V_6_address0 =  (sc_lv<7>) (tmp_1605_cast_fu_31287_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read())) {
        weights_48_48_1x1_V_6_address0 =  (sc_lv<7>) (tmp_1566_cast_fu_30502_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read())) {
        weights_48_48_1x1_V_6_address0 =  (sc_lv<7>) (tmp_1525_cast_fu_29728_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read())) {
        weights_48_48_1x1_V_6_address0 =  (sc_lv<7>) (tmp_1487_cast_fu_28943_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read())) {
        weights_48_48_1x1_V_6_address0 =  (sc_lv<7>) (tmp_1448_cast_fu_28177_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read())) {
        weights_48_48_1x1_V_6_address0 =  (sc_lv<7>) (tmp_1410_cast_fu_27396_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read())) {
        weights_48_48_1x1_V_6_address0 =  (sc_lv<7>) (tmp_1371_cast_fu_26630_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read())) {
        weights_48_48_1x1_V_6_address0 =  (sc_lv<7>) (tmp_1334_cast_fu_25857_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read())) {
        weights_48_48_1x1_V_6_address0 =  (sc_lv<7>) (tmp_1295_cast_fu_25087_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read())) {
        weights_48_48_1x1_V_6_address0 =  (sc_lv<7>) (tmp_1258_cast_fu_24306_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read())) {
        weights_48_48_1x1_V_6_address0 =  (sc_lv<7>) (tmp_1217_cast_fu_23528_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read())) {
        weights_48_48_1x1_V_6_address0 =  (sc_lv<7>) (tmp_1180_cast_fu_22747_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read())) {
        weights_48_48_1x1_V_6_address0 =  (sc_lv<7>) (tmp_1141_cast_fu_21981_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read())) {
        weights_48_48_1x1_V_6_address0 =  (sc_lv<7>) (tmp_1104_cast_fu_21200_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read())) {
        weights_48_48_1x1_V_6_address0 =  (sc_lv<7>) (tmp_1076_cast_fu_20553_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read())) {
        weights_48_48_1x1_V_6_address0 =  (sc_lv<7>) (tmp_1036_cast_fu_19772_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read())) {
        weights_48_48_1x1_V_6_address0 =  (sc_lv<7>) (tmp_1002_cast_fu_18991_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_6_address0 = grp_subconv_1x1_16p_p_fu_13962_weight_6_V_address0.read();
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
        weights_48_48_1x1_V_6_address0 = grp_subconv_1x1_8_p_fu_13858_weight_6_V_address0.read();
    } else {
        weights_48_48_1x1_V_6_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_6_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_6_address1 = grp_subconv_1x1_16p_p_fu_13962_weight_6_V_address1.read();
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
        weights_48_48_1x1_V_6_address1 = grp_subconv_1x1_8_p_fu_13858_weight_6_V_address1.read();
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
        weights_48_48_1x1_V_6_ce0 = grp_subconv_1x1_16p_p_fu_13962_weight_6_V_ce0.read();
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
        weights_48_48_1x1_V_6_ce0 = grp_subconv_1x1_8_p_fu_13858_weight_6_V_ce0.read();
    } else {
        weights_48_48_1x1_V_6_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_6_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_6_ce1 = grp_subconv_1x1_16p_p_fu_13962_weight_6_V_ce1.read();
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
        weights_48_48_1x1_V_6_ce1 = grp_subconv_1x1_8_p_fu_13858_weight_6_V_ce1.read();
    } else {
        weights_48_48_1x1_V_6_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_6_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read()) && 
          esl_seteq<1,6,6>(tmp_2236_fu_18987_p1.read(), ap_const_lv6_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read()) && 
          esl_seteq<1,6,6>(tmp_2247_fu_19768_p1.read(), ap_const_lv6_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read()) && 
          esl_seteq<1,6,6>(tmp_2258_fu_20549_p1.read(), ap_const_lv6_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read()) && 
          esl_seteq<1,6,6>(tmp_2269_fu_21196_p1.read(), ap_const_lv6_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read()) && 
          esl_seteq<1,6,6>(tmp_2280_fu_21977_p1.read(), ap_const_lv6_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read()) && 
          esl_seteq<1,6,6>(tmp_2293_fu_22743_p1.read(), ap_const_lv6_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) && 
          esl_seteq<1,6,6>(tmp_2304_fu_23524_p1.read(), ap_const_lv6_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read()) && 
          esl_seteq<1,6,6>(tmp_2317_fu_24302_p1.read(), ap_const_lv6_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read()) && 
          esl_seteq<1,6,6>(tmp_2328_fu_25083_p1.read(), ap_const_lv6_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read()) && 
          esl_seteq<1,6,6>(tmp_2341_fu_25853_p1.read(), ap_const_lv6_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read()) && 
          esl_seteq<1,6,6>(tmp_2352_fu_26626_p1.read(), ap_const_lv6_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read()) && 
          esl_seteq<1,6,6>(tmp_2365_fu_27392_p1.read(), ap_const_lv6_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read()) && 
          esl_seteq<1,6,6>(tmp_2376_fu_28173_p1.read(), ap_const_lv6_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read()) && 
          esl_seteq<1,6,6>(tmp_2389_fu_28939_p1.read(), ap_const_lv6_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read()) && 
          esl_seteq<1,6,6>(tmp_2400_fu_29724_p1.read(), ap_const_lv6_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read()) && 
          esl_seteq<1,6,6>(tmp_2413_fu_30498_p1.read(), ap_const_lv6_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read()) && 
          esl_seteq<1,6,6>(tmp_2424_fu_31283_p1.read(), ap_const_lv6_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read()) && 
          esl_seteq<1,6,6>(tmp_2437_fu_32061_p1.read(), ap_const_lv6_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read()) && 
          esl_seteq<1,6,6>(tmp_2448_fu_32850_p1.read(), ap_const_lv6_6)))) {
        weights_48_48_1x1_V_6_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_6_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_7_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read())) {
        weights_48_48_1x1_V_7_address0 =  (sc_lv<7>) (tmp_1683_cast_fu_32854_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read())) {
        weights_48_48_1x1_V_7_address0 =  (sc_lv<7>) (tmp_1646_cast_fu_32065_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read())) {
        weights_48_48_1x1_V_7_address0 =  (sc_lv<7>) (tmp_1605_cast_fu_31287_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read())) {
        weights_48_48_1x1_V_7_address0 =  (sc_lv<7>) (tmp_1566_cast_fu_30502_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read())) {
        weights_48_48_1x1_V_7_address0 =  (sc_lv<7>) (tmp_1525_cast_fu_29728_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read())) {
        weights_48_48_1x1_V_7_address0 =  (sc_lv<7>) (tmp_1487_cast_fu_28943_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read())) {
        weights_48_48_1x1_V_7_address0 =  (sc_lv<7>) (tmp_1448_cast_fu_28177_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read())) {
        weights_48_48_1x1_V_7_address0 =  (sc_lv<7>) (tmp_1410_cast_fu_27396_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read())) {
        weights_48_48_1x1_V_7_address0 =  (sc_lv<7>) (tmp_1371_cast_fu_26630_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read())) {
        weights_48_48_1x1_V_7_address0 =  (sc_lv<7>) (tmp_1334_cast_fu_25857_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read())) {
        weights_48_48_1x1_V_7_address0 =  (sc_lv<7>) (tmp_1295_cast_fu_25087_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read())) {
        weights_48_48_1x1_V_7_address0 =  (sc_lv<7>) (tmp_1258_cast_fu_24306_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read())) {
        weights_48_48_1x1_V_7_address0 =  (sc_lv<7>) (tmp_1217_cast_fu_23528_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read())) {
        weights_48_48_1x1_V_7_address0 =  (sc_lv<7>) (tmp_1180_cast_fu_22747_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read())) {
        weights_48_48_1x1_V_7_address0 =  (sc_lv<7>) (tmp_1141_cast_fu_21981_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read())) {
        weights_48_48_1x1_V_7_address0 =  (sc_lv<7>) (tmp_1104_cast_fu_21200_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read())) {
        weights_48_48_1x1_V_7_address0 =  (sc_lv<7>) (tmp_1076_cast_fu_20553_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read())) {
        weights_48_48_1x1_V_7_address0 =  (sc_lv<7>) (tmp_1036_cast_fu_19772_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read())) {
        weights_48_48_1x1_V_7_address0 =  (sc_lv<7>) (tmp_1002_cast_fu_18991_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_7_address0 = grp_subconv_1x1_16p_p_fu_13962_weight_7_V_address0.read();
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
        weights_48_48_1x1_V_7_address0 = grp_subconv_1x1_8_p_fu_13858_weight_7_V_address0.read();
    } else {
        weights_48_48_1x1_V_7_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_7_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_7_address1 = grp_subconv_1x1_16p_p_fu_13962_weight_7_V_address1.read();
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
        weights_48_48_1x1_V_7_address1 = grp_subconv_1x1_8_p_fu_13858_weight_7_V_address1.read();
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
        weights_48_48_1x1_V_7_ce0 = grp_subconv_1x1_16p_p_fu_13962_weight_7_V_ce0.read();
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
        weights_48_48_1x1_V_7_ce0 = grp_subconv_1x1_8_p_fu_13858_weight_7_V_ce0.read();
    } else {
        weights_48_48_1x1_V_7_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_7_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_7_ce1 = grp_subconv_1x1_16p_p_fu_13962_weight_7_V_ce1.read();
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
        weights_48_48_1x1_V_7_ce1 = grp_subconv_1x1_8_p_fu_13858_weight_7_V_ce1.read();
    } else {
        weights_48_48_1x1_V_7_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_7_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read()) && 
          esl_seteq<1,6,6>(tmp_2236_fu_18987_p1.read(), ap_const_lv6_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read()) && 
          esl_seteq<1,6,6>(tmp_2247_fu_19768_p1.read(), ap_const_lv6_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read()) && 
          esl_seteq<1,6,6>(tmp_2258_fu_20549_p1.read(), ap_const_lv6_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read()) && 
          esl_seteq<1,6,6>(tmp_2269_fu_21196_p1.read(), ap_const_lv6_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read()) && 
          esl_seteq<1,6,6>(tmp_2280_fu_21977_p1.read(), ap_const_lv6_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read()) && 
          esl_seteq<1,6,6>(tmp_2293_fu_22743_p1.read(), ap_const_lv6_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) && 
          esl_seteq<1,6,6>(tmp_2304_fu_23524_p1.read(), ap_const_lv6_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read()) && 
          esl_seteq<1,6,6>(tmp_2317_fu_24302_p1.read(), ap_const_lv6_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read()) && 
          esl_seteq<1,6,6>(tmp_2328_fu_25083_p1.read(), ap_const_lv6_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read()) && 
          esl_seteq<1,6,6>(tmp_2341_fu_25853_p1.read(), ap_const_lv6_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read()) && 
          esl_seteq<1,6,6>(tmp_2352_fu_26626_p1.read(), ap_const_lv6_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read()) && 
          esl_seteq<1,6,6>(tmp_2365_fu_27392_p1.read(), ap_const_lv6_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read()) && 
          esl_seteq<1,6,6>(tmp_2376_fu_28173_p1.read(), ap_const_lv6_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read()) && 
          esl_seteq<1,6,6>(tmp_2389_fu_28939_p1.read(), ap_const_lv6_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read()) && 
          esl_seteq<1,6,6>(tmp_2400_fu_29724_p1.read(), ap_const_lv6_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read()) && 
          esl_seteq<1,6,6>(tmp_2413_fu_30498_p1.read(), ap_const_lv6_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read()) && 
          esl_seteq<1,6,6>(tmp_2424_fu_31283_p1.read(), ap_const_lv6_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read()) && 
          esl_seteq<1,6,6>(tmp_2437_fu_32061_p1.read(), ap_const_lv6_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read()) && 
          esl_seteq<1,6,6>(tmp_2448_fu_32850_p1.read(), ap_const_lv6_7)))) {
        weights_48_48_1x1_V_7_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_7_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_8_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read())) {
        weights_48_48_1x1_V_8_address0 =  (sc_lv<7>) (tmp_1683_cast_fu_32854_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read())) {
        weights_48_48_1x1_V_8_address0 =  (sc_lv<7>) (tmp_1646_cast_fu_32065_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read())) {
        weights_48_48_1x1_V_8_address0 =  (sc_lv<7>) (tmp_1605_cast_fu_31287_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read())) {
        weights_48_48_1x1_V_8_address0 =  (sc_lv<7>) (tmp_1566_cast_fu_30502_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read())) {
        weights_48_48_1x1_V_8_address0 =  (sc_lv<7>) (tmp_1525_cast_fu_29728_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read())) {
        weights_48_48_1x1_V_8_address0 =  (sc_lv<7>) (tmp_1487_cast_fu_28943_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read())) {
        weights_48_48_1x1_V_8_address0 =  (sc_lv<7>) (tmp_1448_cast_fu_28177_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read())) {
        weights_48_48_1x1_V_8_address0 =  (sc_lv<7>) (tmp_1410_cast_fu_27396_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read())) {
        weights_48_48_1x1_V_8_address0 =  (sc_lv<7>) (tmp_1371_cast_fu_26630_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read())) {
        weights_48_48_1x1_V_8_address0 =  (sc_lv<7>) (tmp_1334_cast_fu_25857_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read())) {
        weights_48_48_1x1_V_8_address0 =  (sc_lv<7>) (tmp_1295_cast_fu_25087_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read())) {
        weights_48_48_1x1_V_8_address0 =  (sc_lv<7>) (tmp_1258_cast_fu_24306_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read())) {
        weights_48_48_1x1_V_8_address0 =  (sc_lv<7>) (tmp_1217_cast_fu_23528_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read())) {
        weights_48_48_1x1_V_8_address0 =  (sc_lv<7>) (tmp_1180_cast_fu_22747_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read())) {
        weights_48_48_1x1_V_8_address0 =  (sc_lv<7>) (tmp_1141_cast_fu_21981_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read())) {
        weights_48_48_1x1_V_8_address0 =  (sc_lv<7>) (tmp_1104_cast_fu_21200_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read())) {
        weights_48_48_1x1_V_8_address0 =  (sc_lv<7>) (tmp_1076_cast_fu_20553_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read())) {
        weights_48_48_1x1_V_8_address0 =  (sc_lv<7>) (tmp_1036_cast_fu_19772_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read())) {
        weights_48_48_1x1_V_8_address0 =  (sc_lv<7>) (tmp_1002_cast_fu_18991_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_8_address0 = grp_subconv_1x1_16p_p_fu_13962_weight_8_V_address0.read();
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
        weights_48_48_1x1_V_8_address0 = grp_subconv_1x1_8_p_fu_13858_weight_8_V_address0.read();
    } else {
        weights_48_48_1x1_V_8_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_8_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_8_address1 = grp_subconv_1x1_16p_p_fu_13962_weight_8_V_address1.read();
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
        weights_48_48_1x1_V_8_address1 = grp_subconv_1x1_8_p_fu_13858_weight_8_V_address1.read();
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
        weights_48_48_1x1_V_8_ce0 = grp_subconv_1x1_16p_p_fu_13962_weight_8_V_ce0.read();
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
        weights_48_48_1x1_V_8_ce0 = grp_subconv_1x1_8_p_fu_13858_weight_8_V_ce0.read();
    } else {
        weights_48_48_1x1_V_8_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_8_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_8_ce1 = grp_subconv_1x1_16p_p_fu_13962_weight_8_V_ce1.read();
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
        weights_48_48_1x1_V_8_ce1 = grp_subconv_1x1_8_p_fu_13858_weight_8_V_ce1.read();
    } else {
        weights_48_48_1x1_V_8_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_8_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read()) && 
          esl_seteq<1,6,6>(tmp_2236_fu_18987_p1.read(), ap_const_lv6_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read()) && 
          esl_seteq<1,6,6>(tmp_2247_fu_19768_p1.read(), ap_const_lv6_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read()) && 
          esl_seteq<1,6,6>(tmp_2258_fu_20549_p1.read(), ap_const_lv6_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read()) && 
          esl_seteq<1,6,6>(tmp_2269_fu_21196_p1.read(), ap_const_lv6_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read()) && 
          esl_seteq<1,6,6>(tmp_2280_fu_21977_p1.read(), ap_const_lv6_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read()) && 
          esl_seteq<1,6,6>(tmp_2293_fu_22743_p1.read(), ap_const_lv6_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) && 
          esl_seteq<1,6,6>(tmp_2304_fu_23524_p1.read(), ap_const_lv6_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read()) && 
          esl_seteq<1,6,6>(tmp_2317_fu_24302_p1.read(), ap_const_lv6_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read()) && 
          esl_seteq<1,6,6>(tmp_2328_fu_25083_p1.read(), ap_const_lv6_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read()) && 
          esl_seteq<1,6,6>(tmp_2341_fu_25853_p1.read(), ap_const_lv6_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read()) && 
          esl_seteq<1,6,6>(tmp_2352_fu_26626_p1.read(), ap_const_lv6_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read()) && 
          esl_seteq<1,6,6>(tmp_2365_fu_27392_p1.read(), ap_const_lv6_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read()) && 
          esl_seteq<1,6,6>(tmp_2376_fu_28173_p1.read(), ap_const_lv6_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read()) && 
          esl_seteq<1,6,6>(tmp_2389_fu_28939_p1.read(), ap_const_lv6_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read()) && 
          esl_seteq<1,6,6>(tmp_2400_fu_29724_p1.read(), ap_const_lv6_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read()) && 
          esl_seteq<1,6,6>(tmp_2413_fu_30498_p1.read(), ap_const_lv6_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read()) && 
          esl_seteq<1,6,6>(tmp_2424_fu_31283_p1.read(), ap_const_lv6_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read()) && 
          esl_seteq<1,6,6>(tmp_2437_fu_32061_p1.read(), ap_const_lv6_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read()) && 
          esl_seteq<1,6,6>(tmp_2448_fu_32850_p1.read(), ap_const_lv6_8)))) {
        weights_48_48_1x1_V_8_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_8_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_9_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read())) {
        weights_48_48_1x1_V_9_address0 =  (sc_lv<7>) (tmp_1683_cast_fu_32854_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read())) {
        weights_48_48_1x1_V_9_address0 =  (sc_lv<7>) (tmp_1646_cast_fu_32065_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read())) {
        weights_48_48_1x1_V_9_address0 =  (sc_lv<7>) (tmp_1605_cast_fu_31287_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read())) {
        weights_48_48_1x1_V_9_address0 =  (sc_lv<7>) (tmp_1566_cast_fu_30502_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read())) {
        weights_48_48_1x1_V_9_address0 =  (sc_lv<7>) (tmp_1525_cast_fu_29728_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read())) {
        weights_48_48_1x1_V_9_address0 =  (sc_lv<7>) (tmp_1487_cast_fu_28943_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read())) {
        weights_48_48_1x1_V_9_address0 =  (sc_lv<7>) (tmp_1448_cast_fu_28177_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read())) {
        weights_48_48_1x1_V_9_address0 =  (sc_lv<7>) (tmp_1410_cast_fu_27396_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read())) {
        weights_48_48_1x1_V_9_address0 =  (sc_lv<7>) (tmp_1371_cast_fu_26630_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read())) {
        weights_48_48_1x1_V_9_address0 =  (sc_lv<7>) (tmp_1334_cast_fu_25857_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read())) {
        weights_48_48_1x1_V_9_address0 =  (sc_lv<7>) (tmp_1295_cast_fu_25087_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read())) {
        weights_48_48_1x1_V_9_address0 =  (sc_lv<7>) (tmp_1258_cast_fu_24306_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read())) {
        weights_48_48_1x1_V_9_address0 =  (sc_lv<7>) (tmp_1217_cast_fu_23528_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read())) {
        weights_48_48_1x1_V_9_address0 =  (sc_lv<7>) (tmp_1180_cast_fu_22747_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read())) {
        weights_48_48_1x1_V_9_address0 =  (sc_lv<7>) (tmp_1141_cast_fu_21981_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read())) {
        weights_48_48_1x1_V_9_address0 =  (sc_lv<7>) (tmp_1104_cast_fu_21200_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read())) {
        weights_48_48_1x1_V_9_address0 =  (sc_lv<7>) (tmp_1076_cast_fu_20553_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read())) {
        weights_48_48_1x1_V_9_address0 =  (sc_lv<7>) (tmp_1036_cast_fu_19772_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read())) {
        weights_48_48_1x1_V_9_address0 =  (sc_lv<7>) (tmp_1002_cast_fu_18991_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_9_address0 = grp_subconv_1x1_16p_p_fu_13962_weight_9_V_address0.read();
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
        weights_48_48_1x1_V_9_address0 = grp_subconv_1x1_8_p_fu_13858_weight_9_V_address0.read();
    } else {
        weights_48_48_1x1_V_9_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_9_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_9_address1 = grp_subconv_1x1_16p_p_fu_13962_weight_9_V_address1.read();
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
        weights_48_48_1x1_V_9_address1 = grp_subconv_1x1_8_p_fu_13858_weight_9_V_address1.read();
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
        weights_48_48_1x1_V_9_ce0 = grp_subconv_1x1_16p_p_fu_13962_weight_9_V_ce0.read();
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
        weights_48_48_1x1_V_9_ce0 = grp_subconv_1x1_8_p_fu_13858_weight_9_V_ce0.read();
    } else {
        weights_48_48_1x1_V_9_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_9_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_9_ce1 = grp_subconv_1x1_16p_p_fu_13962_weight_9_V_ce1.read();
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
        weights_48_48_1x1_V_9_ce1 = grp_subconv_1x1_8_p_fu_13858_weight_9_V_ce1.read();
    } else {
        weights_48_48_1x1_V_9_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_9_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read()) && 
          esl_seteq<1,6,6>(tmp_2236_fu_18987_p1.read(), ap_const_lv6_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read()) && 
          esl_seteq<1,6,6>(tmp_2247_fu_19768_p1.read(), ap_const_lv6_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read()) && 
          esl_seteq<1,6,6>(tmp_2258_fu_20549_p1.read(), ap_const_lv6_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read()) && 
          esl_seteq<1,6,6>(tmp_2269_fu_21196_p1.read(), ap_const_lv6_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read()) && 
          esl_seteq<1,6,6>(tmp_2280_fu_21977_p1.read(), ap_const_lv6_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read()) && 
          esl_seteq<1,6,6>(tmp_2293_fu_22743_p1.read(), ap_const_lv6_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) && 
          esl_seteq<1,6,6>(tmp_2304_fu_23524_p1.read(), ap_const_lv6_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read()) && 
          esl_seteq<1,6,6>(tmp_2317_fu_24302_p1.read(), ap_const_lv6_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read()) && 
          esl_seteq<1,6,6>(tmp_2328_fu_25083_p1.read(), ap_const_lv6_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read()) && 
          esl_seteq<1,6,6>(tmp_2341_fu_25853_p1.read(), ap_const_lv6_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read()) && 
          esl_seteq<1,6,6>(tmp_2352_fu_26626_p1.read(), ap_const_lv6_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read()) && 
          esl_seteq<1,6,6>(tmp_2365_fu_27392_p1.read(), ap_const_lv6_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read()) && 
          esl_seteq<1,6,6>(tmp_2376_fu_28173_p1.read(), ap_const_lv6_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read()) && 
          esl_seteq<1,6,6>(tmp_2389_fu_28939_p1.read(), ap_const_lv6_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read()) && 
          esl_seteq<1,6,6>(tmp_2400_fu_29724_p1.read(), ap_const_lv6_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read()) && 
          esl_seteq<1,6,6>(tmp_2413_fu_30498_p1.read(), ap_const_lv6_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read()) && 
          esl_seteq<1,6,6>(tmp_2424_fu_31283_p1.read(), ap_const_lv6_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read()) && 
          esl_seteq<1,6,6>(tmp_2437_fu_32061_p1.read(), ap_const_lv6_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read()) && 
          esl_seteq<1,6,6>(tmp_2448_fu_32850_p1.read(), ap_const_lv6_9)))) {
        weights_48_48_1x1_V_9_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_9_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_s_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read())) {
        weights_48_48_1x1_V_s_address0 =  (sc_lv<7>) (tmp_1683_cast_fu_32854_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read())) {
        weights_48_48_1x1_V_s_address0 =  (sc_lv<7>) (tmp_1646_cast_fu_32065_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read())) {
        weights_48_48_1x1_V_s_address0 =  (sc_lv<7>) (tmp_1605_cast_fu_31287_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read())) {
        weights_48_48_1x1_V_s_address0 =  (sc_lv<7>) (tmp_1566_cast_fu_30502_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read())) {
        weights_48_48_1x1_V_s_address0 =  (sc_lv<7>) (tmp_1525_cast_fu_29728_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read())) {
        weights_48_48_1x1_V_s_address0 =  (sc_lv<7>) (tmp_1487_cast_fu_28943_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read())) {
        weights_48_48_1x1_V_s_address0 =  (sc_lv<7>) (tmp_1448_cast_fu_28177_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read())) {
        weights_48_48_1x1_V_s_address0 =  (sc_lv<7>) (tmp_1410_cast_fu_27396_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read())) {
        weights_48_48_1x1_V_s_address0 =  (sc_lv<7>) (tmp_1371_cast_fu_26630_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read())) {
        weights_48_48_1x1_V_s_address0 =  (sc_lv<7>) (tmp_1334_cast_fu_25857_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read())) {
        weights_48_48_1x1_V_s_address0 =  (sc_lv<7>) (tmp_1295_cast_fu_25087_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read())) {
        weights_48_48_1x1_V_s_address0 =  (sc_lv<7>) (tmp_1258_cast_fu_24306_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read())) {
        weights_48_48_1x1_V_s_address0 =  (sc_lv<7>) (tmp_1217_cast_fu_23528_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read())) {
        weights_48_48_1x1_V_s_address0 =  (sc_lv<7>) (tmp_1180_cast_fu_22747_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read())) {
        weights_48_48_1x1_V_s_address0 =  (sc_lv<7>) (tmp_1141_cast_fu_21981_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read())) {
        weights_48_48_1x1_V_s_address0 =  (sc_lv<7>) (tmp_1104_cast_fu_21200_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read())) {
        weights_48_48_1x1_V_s_address0 =  (sc_lv<7>) (tmp_1076_cast_fu_20553_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read())) {
        weights_48_48_1x1_V_s_address0 =  (sc_lv<7>) (tmp_1036_cast_fu_19772_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read())) {
        weights_48_48_1x1_V_s_address0 =  (sc_lv<7>) (tmp_1002_cast_fu_18991_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_s_address0 = grp_subconv_1x1_16p_p_fu_13962_weight_0_V_address0.read();
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
        weights_48_48_1x1_V_s_address0 = grp_subconv_1x1_8_p_fu_13858_weight_0_V_address0.read();
    } else {
        weights_48_48_1x1_V_s_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_s_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_s_address1 = grp_subconv_1x1_16p_p_fu_13962_weight_0_V_address1.read();
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
        weights_48_48_1x1_V_s_address1 = grp_subconv_1x1_8_p_fu_13858_weight_0_V_address1.read();
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
        weights_48_48_1x1_V_s_ce0 = grp_subconv_1x1_16p_p_fu_13962_weight_0_V_ce0.read();
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
        weights_48_48_1x1_V_s_ce0 = grp_subconv_1x1_8_p_fu_13858_weight_0_V_ce0.read();
    } else {
        weights_48_48_1x1_V_s_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_s_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_s_ce1 = grp_subconv_1x1_16p_p_fu_13962_weight_0_V_ce1.read();
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
        weights_48_48_1x1_V_s_ce1 = grp_subconv_1x1_8_p_fu_13858_weight_0_V_ce1.read();
    } else {
        weights_48_48_1x1_V_s_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_s_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_0, tmp_2236_fu_18987_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_0, tmp_2247_fu_19768_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_0, tmp_2258_fu_20549_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_0, tmp_2269_fu_21196_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_0, tmp_2280_fu_21977_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_0, tmp_2293_fu_22743_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_0, tmp_2304_fu_23524_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_0, tmp_2317_fu_24302_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_0, tmp_2328_fu_25083_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_0, tmp_2341_fu_25853_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_0, tmp_2352_fu_26626_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_0, tmp_2365_fu_27392_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_0, tmp_2376_fu_28173_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_0, tmp_2389_fu_28939_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_0, tmp_2400_fu_29724_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_0, tmp_2413_fu_30498_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_0, tmp_2424_fu_31283_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_0, tmp_2437_fu_32061_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_0, tmp_2448_fu_32850_p1.read())))) {
        weights_48_48_1x1_V_s_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_s_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_1_3x3_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1668.read())) {
        weights_96_1_3x3_V_address0 =  (sc_lv<10>) (tmp_1967_cast_fu_38996_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1571.read())) {
        weights_96_1_3x3_V_address0 =  (sc_lv<10>) (tmp_1892_cast_fu_37473_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1474.read())) {
        weights_96_1_3x3_V_address0 =  (sc_lv<10>) (tmp_1816_cast_fu_35934_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1380.read())) {
        weights_96_1_3x3_V_address0 =  (sc_lv<10>) (tmp_1750_cast_fu_34538_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1320.read())) {
        weights_96_1_3x3_V_address0 =  (sc_lv<10>) (tmp_1717_cast_fu_33765_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1393.read())) {
        weights_96_1_3x3_V_address0 = grp_subconv_3x3_8_stride_1_fu_14786_weight_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1333.read())) {
        weights_96_1_3x3_V_address0 = grp_subconv_3x3_8_stride_fu_14372_weight_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1487.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1584.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1681.read()))) {
        weights_96_1_3x3_V_address0 = grp_subconv_3x3_4_no_rel_fu_14314_weight_V_address0.read();
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
        weights_96_1_3x3_V_ce0 = grp_subconv_3x3_8_stride_1_fu_14786_weight_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1333.read())) {
        weights_96_1_3x3_V_ce0 = grp_subconv_3x3_8_stride_fu_14372_weight_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1487.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1584.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1681.read()))) {
        weights_96_1_3x3_V_ce0 = grp_subconv_3x3_4_no_rel_fu_14314_weight_V_ce0.read();
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
        weights_96_96_1x1_V_10_address0 =  (sc_lv<9>) (tmp_1991_cast_fu_39397_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read())) {
        weights_96_96_1x1_V_10_address0 =  (sc_lv<9>) (tmp_1955_cast_fu_38632_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read())) {
        weights_96_96_1x1_V_10_address0 =  (sc_lv<9>) (tmp_1917_cast_fu_37874_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read())) {
        weights_96_96_1x1_V_10_address0 =  (sc_lv<9>) (tmp_1880_cast_fu_37101_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read())) {
        weights_96_96_1x1_V_10_address0 =  (sc_lv<9>) (tmp_1842_cast_fu_36343_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read())) {
        weights_96_96_1x1_V_10_address0 =  (sc_lv<9>) (tmp_1804_cast_fu_35574_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read())) {
        weights_96_96_1x1_V_10_address0 =  (sc_lv<9>) (tmp_1777_cast_fu_34939_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read())) {
        weights_96_96_1x1_V_10_address0 =  (sc_lv<9>) (tmp_1738_cast_fu_34170_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read())) {
        weights_96_96_1x1_V_10_address0 =  (sc_lv<9>) (tmp_1705_cast_fu_33401_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_10_address0 = grp_subconv_1x1_8p_p_fu_13754_weight_10_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_10_address0 = grp_subconv_1x1_4_p_fu_13650_weight_10_V_address0.read();
    } else {
        weights_96_96_1x1_V_10_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_10_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_10_address1 = grp_subconv_1x1_8p_p_fu_13754_weight_10_V_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_10_address1 = grp_subconv_1x1_4_p_fu_13650_weight_10_V_address1.read();
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
        weights_96_96_1x1_V_10_ce0 = grp_subconv_1x1_8p_p_fu_13754_weight_10_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_10_ce0 = grp_subconv_1x1_4_p_fu_13650_weight_10_V_ce0.read();
    } else {
        weights_96_96_1x1_V_10_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_10_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_10_ce1 = grp_subconv_1x1_8p_p_fu_13754_weight_10_V_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_10_ce1 = grp_subconv_1x1_4_p_fu_13650_weight_10_V_ce1.read();
    } else {
        weights_96_96_1x1_V_10_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_10_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_A, tmp_2459_fu_33397_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_A, tmp_2472_fu_34166_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_A, tmp_2485_fu_34935_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_A, tmp_2496_fu_35570_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_A, tmp_2509_fu_36339_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_A, tmp_2522_fu_37097_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_A, tmp_2535_fu_37870_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_A, tmp_2548_fu_38628_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_A, tmp_2561_fu_39393_p1.read())))) {
        weights_96_96_1x1_V_10_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_10_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_11_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read())) {
        weights_96_96_1x1_V_11_address0 =  (sc_lv<9>) (tmp_1991_cast_fu_39397_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read())) {
        weights_96_96_1x1_V_11_address0 =  (sc_lv<9>) (tmp_1955_cast_fu_38632_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read())) {
        weights_96_96_1x1_V_11_address0 =  (sc_lv<9>) (tmp_1917_cast_fu_37874_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read())) {
        weights_96_96_1x1_V_11_address0 =  (sc_lv<9>) (tmp_1880_cast_fu_37101_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read())) {
        weights_96_96_1x1_V_11_address0 =  (sc_lv<9>) (tmp_1842_cast_fu_36343_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read())) {
        weights_96_96_1x1_V_11_address0 =  (sc_lv<9>) (tmp_1804_cast_fu_35574_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read())) {
        weights_96_96_1x1_V_11_address0 =  (sc_lv<9>) (tmp_1777_cast_fu_34939_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read())) {
        weights_96_96_1x1_V_11_address0 =  (sc_lv<9>) (tmp_1738_cast_fu_34170_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read())) {
        weights_96_96_1x1_V_11_address0 =  (sc_lv<9>) (tmp_1705_cast_fu_33401_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_11_address0 = grp_subconv_1x1_8p_p_fu_13754_weight_11_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_11_address0 = grp_subconv_1x1_4_p_fu_13650_weight_11_V_address0.read();
    } else {
        weights_96_96_1x1_V_11_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_11_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_11_address1 = grp_subconv_1x1_8p_p_fu_13754_weight_11_V_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_11_address1 = grp_subconv_1x1_4_p_fu_13650_weight_11_V_address1.read();
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
        weights_96_96_1x1_V_11_ce0 = grp_subconv_1x1_8p_p_fu_13754_weight_11_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_11_ce0 = grp_subconv_1x1_4_p_fu_13650_weight_11_V_ce0.read();
    } else {
        weights_96_96_1x1_V_11_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_11_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_11_ce1 = grp_subconv_1x1_8p_p_fu_13754_weight_11_V_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_11_ce1 = grp_subconv_1x1_4_p_fu_13650_weight_11_V_ce1.read();
    } else {
        weights_96_96_1x1_V_11_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_11_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_B, tmp_2459_fu_33397_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_B, tmp_2472_fu_34166_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_B, tmp_2485_fu_34935_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_B, tmp_2496_fu_35570_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_B, tmp_2509_fu_36339_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_B, tmp_2522_fu_37097_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_B, tmp_2535_fu_37870_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_B, tmp_2548_fu_38628_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_B, tmp_2561_fu_39393_p1.read())))) {
        weights_96_96_1x1_V_11_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_11_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_12_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read())) {
        weights_96_96_1x1_V_12_address0 =  (sc_lv<9>) (tmp_1991_cast_fu_39397_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read())) {
        weights_96_96_1x1_V_12_address0 =  (sc_lv<9>) (tmp_1955_cast_fu_38632_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read())) {
        weights_96_96_1x1_V_12_address0 =  (sc_lv<9>) (tmp_1917_cast_fu_37874_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read())) {
        weights_96_96_1x1_V_12_address0 =  (sc_lv<9>) (tmp_1880_cast_fu_37101_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read())) {
        weights_96_96_1x1_V_12_address0 =  (sc_lv<9>) (tmp_1842_cast_fu_36343_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read())) {
        weights_96_96_1x1_V_12_address0 =  (sc_lv<9>) (tmp_1804_cast_fu_35574_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read())) {
        weights_96_96_1x1_V_12_address0 =  (sc_lv<9>) (tmp_1777_cast_fu_34939_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read())) {
        weights_96_96_1x1_V_12_address0 =  (sc_lv<9>) (tmp_1738_cast_fu_34170_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read())) {
        weights_96_96_1x1_V_12_address0 =  (sc_lv<9>) (tmp_1705_cast_fu_33401_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_12_address0 = grp_subconv_1x1_8p_p_fu_13754_weight_12_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_12_address0 = grp_subconv_1x1_4_p_fu_13650_weight_12_V_address0.read();
    } else {
        weights_96_96_1x1_V_12_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_12_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_12_address1 = grp_subconv_1x1_8p_p_fu_13754_weight_12_V_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_12_address1 = grp_subconv_1x1_4_p_fu_13650_weight_12_V_address1.read();
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
        weights_96_96_1x1_V_12_ce0 = grp_subconv_1x1_8p_p_fu_13754_weight_12_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_12_ce0 = grp_subconv_1x1_4_p_fu_13650_weight_12_V_ce0.read();
    } else {
        weights_96_96_1x1_V_12_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_12_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_12_ce1 = grp_subconv_1x1_8p_p_fu_13754_weight_12_V_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_12_ce1 = grp_subconv_1x1_4_p_fu_13650_weight_12_V_ce1.read();
    } else {
        weights_96_96_1x1_V_12_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_12_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_C, tmp_2459_fu_33397_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_C, tmp_2472_fu_34166_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_C, tmp_2485_fu_34935_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_C, tmp_2496_fu_35570_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_C, tmp_2509_fu_36339_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_C, tmp_2522_fu_37097_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_C, tmp_2535_fu_37870_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_C, tmp_2548_fu_38628_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_C, tmp_2561_fu_39393_p1.read())))) {
        weights_96_96_1x1_V_12_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_12_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_13_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read())) {
        weights_96_96_1x1_V_13_address0 =  (sc_lv<9>) (tmp_1991_cast_fu_39397_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read())) {
        weights_96_96_1x1_V_13_address0 =  (sc_lv<9>) (tmp_1955_cast_fu_38632_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read())) {
        weights_96_96_1x1_V_13_address0 =  (sc_lv<9>) (tmp_1917_cast_fu_37874_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read())) {
        weights_96_96_1x1_V_13_address0 =  (sc_lv<9>) (tmp_1880_cast_fu_37101_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read())) {
        weights_96_96_1x1_V_13_address0 =  (sc_lv<9>) (tmp_1842_cast_fu_36343_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read())) {
        weights_96_96_1x1_V_13_address0 =  (sc_lv<9>) (tmp_1804_cast_fu_35574_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read())) {
        weights_96_96_1x1_V_13_address0 =  (sc_lv<9>) (tmp_1777_cast_fu_34939_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read())) {
        weights_96_96_1x1_V_13_address0 =  (sc_lv<9>) (tmp_1738_cast_fu_34170_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read())) {
        weights_96_96_1x1_V_13_address0 =  (sc_lv<9>) (tmp_1705_cast_fu_33401_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_13_address0 = grp_subconv_1x1_8p_p_fu_13754_weight_13_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_13_address0 = grp_subconv_1x1_4_p_fu_13650_weight_13_V_address0.read();
    } else {
        weights_96_96_1x1_V_13_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_13_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_13_address1 = grp_subconv_1x1_8p_p_fu_13754_weight_13_V_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_13_address1 = grp_subconv_1x1_4_p_fu_13650_weight_13_V_address1.read();
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
        weights_96_96_1x1_V_13_ce0 = grp_subconv_1x1_8p_p_fu_13754_weight_13_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_13_ce0 = grp_subconv_1x1_4_p_fu_13650_weight_13_V_ce0.read();
    } else {
        weights_96_96_1x1_V_13_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_13_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_13_ce1 = grp_subconv_1x1_8p_p_fu_13754_weight_13_V_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_13_ce1 = grp_subconv_1x1_4_p_fu_13650_weight_13_V_ce1.read();
    } else {
        weights_96_96_1x1_V_13_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_13_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_D, tmp_2459_fu_33397_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_D, tmp_2472_fu_34166_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_D, tmp_2485_fu_34935_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_D, tmp_2496_fu_35570_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_D, tmp_2509_fu_36339_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_D, tmp_2522_fu_37097_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_D, tmp_2535_fu_37870_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_D, tmp_2548_fu_38628_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_D, tmp_2561_fu_39393_p1.read())))) {
        weights_96_96_1x1_V_13_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_13_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_14_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read())) {
        weights_96_96_1x1_V_14_address0 =  (sc_lv<9>) (tmp_1991_cast_fu_39397_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read())) {
        weights_96_96_1x1_V_14_address0 =  (sc_lv<9>) (tmp_1955_cast_fu_38632_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read())) {
        weights_96_96_1x1_V_14_address0 =  (sc_lv<9>) (tmp_1917_cast_fu_37874_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read())) {
        weights_96_96_1x1_V_14_address0 =  (sc_lv<9>) (tmp_1880_cast_fu_37101_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read())) {
        weights_96_96_1x1_V_14_address0 =  (sc_lv<9>) (tmp_1842_cast_fu_36343_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read())) {
        weights_96_96_1x1_V_14_address0 =  (sc_lv<9>) (tmp_1804_cast_fu_35574_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read())) {
        weights_96_96_1x1_V_14_address0 =  (sc_lv<9>) (tmp_1777_cast_fu_34939_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read())) {
        weights_96_96_1x1_V_14_address0 =  (sc_lv<9>) (tmp_1738_cast_fu_34170_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read())) {
        weights_96_96_1x1_V_14_address0 =  (sc_lv<9>) (tmp_1705_cast_fu_33401_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_14_address0 = grp_subconv_1x1_8p_p_fu_13754_weight_14_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_14_address0 = grp_subconv_1x1_4_p_fu_13650_weight_14_V_address0.read();
    } else {
        weights_96_96_1x1_V_14_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_14_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_14_address1 = grp_subconv_1x1_8p_p_fu_13754_weight_14_V_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_14_address1 = grp_subconv_1x1_4_p_fu_13650_weight_14_V_address1.read();
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
        weights_96_96_1x1_V_14_ce0 = grp_subconv_1x1_8p_p_fu_13754_weight_14_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_14_ce0 = grp_subconv_1x1_4_p_fu_13650_weight_14_V_ce0.read();
    } else {
        weights_96_96_1x1_V_14_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_14_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_14_ce1 = grp_subconv_1x1_8p_p_fu_13754_weight_14_V_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_14_ce1 = grp_subconv_1x1_4_p_fu_13650_weight_14_V_ce1.read();
    } else {
        weights_96_96_1x1_V_14_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_14_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_E, tmp_2459_fu_33397_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_E, tmp_2472_fu_34166_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_E, tmp_2485_fu_34935_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_E, tmp_2496_fu_35570_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_E, tmp_2509_fu_36339_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_E, tmp_2522_fu_37097_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_E, tmp_2535_fu_37870_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_E, tmp_2548_fu_38628_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_E, tmp_2561_fu_39393_p1.read())))) {
        weights_96_96_1x1_V_14_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_14_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_15_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read())) {
        weights_96_96_1x1_V_15_address0 =  (sc_lv<9>) (tmp_1991_cast_fu_39397_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read())) {
        weights_96_96_1x1_V_15_address0 =  (sc_lv<9>) (tmp_1955_cast_fu_38632_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read())) {
        weights_96_96_1x1_V_15_address0 =  (sc_lv<9>) (tmp_1917_cast_fu_37874_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read())) {
        weights_96_96_1x1_V_15_address0 =  (sc_lv<9>) (tmp_1880_cast_fu_37101_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read())) {
        weights_96_96_1x1_V_15_address0 =  (sc_lv<9>) (tmp_1842_cast_fu_36343_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read())) {
        weights_96_96_1x1_V_15_address0 =  (sc_lv<9>) (tmp_1804_cast_fu_35574_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read())) {
        weights_96_96_1x1_V_15_address0 =  (sc_lv<9>) (tmp_1777_cast_fu_34939_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read())) {
        weights_96_96_1x1_V_15_address0 =  (sc_lv<9>) (tmp_1738_cast_fu_34170_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read())) {
        weights_96_96_1x1_V_15_address0 =  (sc_lv<9>) (tmp_1705_cast_fu_33401_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_15_address0 = grp_subconv_1x1_8p_p_fu_13754_weight_15_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_15_address0 = grp_subconv_1x1_4_p_fu_13650_weight_15_V_address0.read();
    } else {
        weights_96_96_1x1_V_15_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_15_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_15_address1 = grp_subconv_1x1_8p_p_fu_13754_weight_15_V_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_15_address1 = grp_subconv_1x1_4_p_fu_13650_weight_15_V_address1.read();
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
        weights_96_96_1x1_V_15_ce0 = grp_subconv_1x1_8p_p_fu_13754_weight_15_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_15_ce0 = grp_subconv_1x1_4_p_fu_13650_weight_15_V_ce0.read();
    } else {
        weights_96_96_1x1_V_15_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_15_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_15_ce1 = grp_subconv_1x1_8p_p_fu_13754_weight_15_V_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_15_ce1 = grp_subconv_1x1_4_p_fu_13650_weight_15_V_ce1.read();
    } else {
        weights_96_96_1x1_V_15_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_15_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_F, tmp_2459_fu_33397_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_F, tmp_2472_fu_34166_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_F, tmp_2485_fu_34935_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_F, tmp_2496_fu_35570_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_F, tmp_2509_fu_36339_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_F, tmp_2522_fu_37097_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_F, tmp_2535_fu_37870_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_F, tmp_2548_fu_38628_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_F, tmp_2561_fu_39393_p1.read())))) {
        weights_96_96_1x1_V_15_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_15_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_16_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read())) {
        weights_96_96_1x1_V_16_address0 =  (sc_lv<9>) (tmp_1991_cast_fu_39397_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read())) {
        weights_96_96_1x1_V_16_address0 =  (sc_lv<9>) (tmp_1955_cast_fu_38632_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read())) {
        weights_96_96_1x1_V_16_address0 =  (sc_lv<9>) (tmp_1917_cast_fu_37874_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read())) {
        weights_96_96_1x1_V_16_address0 =  (sc_lv<9>) (tmp_1880_cast_fu_37101_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read())) {
        weights_96_96_1x1_V_16_address0 =  (sc_lv<9>) (tmp_1842_cast_fu_36343_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read())) {
        weights_96_96_1x1_V_16_address0 =  (sc_lv<9>) (tmp_1804_cast_fu_35574_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read())) {
        weights_96_96_1x1_V_16_address0 =  (sc_lv<9>) (tmp_1777_cast_fu_34939_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read())) {
        weights_96_96_1x1_V_16_address0 =  (sc_lv<9>) (tmp_1738_cast_fu_34170_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read())) {
        weights_96_96_1x1_V_16_address0 =  (sc_lv<9>) (tmp_1705_cast_fu_33401_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_16_address0 = grp_subconv_1x1_8p_p_fu_13754_weight_16_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_16_address0 = grp_subconv_1x1_4_p_fu_13650_weight_16_V_address0.read();
    } else {
        weights_96_96_1x1_V_16_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_16_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_16_address1 = grp_subconv_1x1_8p_p_fu_13754_weight_16_V_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_16_address1 = grp_subconv_1x1_4_p_fu_13650_weight_16_V_address1.read();
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
        weights_96_96_1x1_V_16_ce0 = grp_subconv_1x1_8p_p_fu_13754_weight_16_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_16_ce0 = grp_subconv_1x1_4_p_fu_13650_weight_16_V_ce0.read();
    } else {
        weights_96_96_1x1_V_16_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_16_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_16_ce1 = grp_subconv_1x1_8p_p_fu_13754_weight_16_V_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_16_ce1 = grp_subconv_1x1_4_p_fu_13650_weight_16_V_ce1.read();
    } else {
        weights_96_96_1x1_V_16_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_16_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_10, tmp_2459_fu_33397_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_10, tmp_2472_fu_34166_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_10, tmp_2485_fu_34935_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_10, tmp_2496_fu_35570_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_10, tmp_2509_fu_36339_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_10, tmp_2522_fu_37097_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_10, tmp_2535_fu_37870_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_10, tmp_2548_fu_38628_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_10, tmp_2561_fu_39393_p1.read())))) {
        weights_96_96_1x1_V_16_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_16_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_17_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read())) {
        weights_96_96_1x1_V_17_address0 =  (sc_lv<9>) (tmp_1991_cast_fu_39397_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read())) {
        weights_96_96_1x1_V_17_address0 =  (sc_lv<9>) (tmp_1955_cast_fu_38632_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read())) {
        weights_96_96_1x1_V_17_address0 =  (sc_lv<9>) (tmp_1917_cast_fu_37874_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read())) {
        weights_96_96_1x1_V_17_address0 =  (sc_lv<9>) (tmp_1880_cast_fu_37101_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read())) {
        weights_96_96_1x1_V_17_address0 =  (sc_lv<9>) (tmp_1842_cast_fu_36343_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read())) {
        weights_96_96_1x1_V_17_address0 =  (sc_lv<9>) (tmp_1804_cast_fu_35574_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read())) {
        weights_96_96_1x1_V_17_address0 =  (sc_lv<9>) (tmp_1777_cast_fu_34939_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read())) {
        weights_96_96_1x1_V_17_address0 =  (sc_lv<9>) (tmp_1738_cast_fu_34170_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read())) {
        weights_96_96_1x1_V_17_address0 =  (sc_lv<9>) (tmp_1705_cast_fu_33401_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_17_address0 = grp_subconv_1x1_8p_p_fu_13754_weight_17_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_17_address0 = grp_subconv_1x1_4_p_fu_13650_weight_17_V_address0.read();
    } else {
        weights_96_96_1x1_V_17_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_17_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_17_address1 = grp_subconv_1x1_8p_p_fu_13754_weight_17_V_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_17_address1 = grp_subconv_1x1_4_p_fu_13650_weight_17_V_address1.read();
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
        weights_96_96_1x1_V_17_ce0 = grp_subconv_1x1_8p_p_fu_13754_weight_17_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_17_ce0 = grp_subconv_1x1_4_p_fu_13650_weight_17_V_ce0.read();
    } else {
        weights_96_96_1x1_V_17_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_17_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_17_ce1 = grp_subconv_1x1_8p_p_fu_13754_weight_17_V_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_17_ce1 = grp_subconv_1x1_4_p_fu_13650_weight_17_V_ce1.read();
    } else {
        weights_96_96_1x1_V_17_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_17_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_11, tmp_2459_fu_33397_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_11, tmp_2472_fu_34166_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_11, tmp_2485_fu_34935_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_11, tmp_2496_fu_35570_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_11, tmp_2509_fu_36339_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_11, tmp_2522_fu_37097_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_11, tmp_2535_fu_37870_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_11, tmp_2548_fu_38628_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_11, tmp_2561_fu_39393_p1.read())))) {
        weights_96_96_1x1_V_17_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_17_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_18_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read())) {
        weights_96_96_1x1_V_18_address0 =  (sc_lv<9>) (tmp_1991_cast_fu_39397_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read())) {
        weights_96_96_1x1_V_18_address0 =  (sc_lv<9>) (tmp_1955_cast_fu_38632_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read())) {
        weights_96_96_1x1_V_18_address0 =  (sc_lv<9>) (tmp_1917_cast_fu_37874_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read())) {
        weights_96_96_1x1_V_18_address0 =  (sc_lv<9>) (tmp_1880_cast_fu_37101_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read())) {
        weights_96_96_1x1_V_18_address0 =  (sc_lv<9>) (tmp_1842_cast_fu_36343_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read())) {
        weights_96_96_1x1_V_18_address0 =  (sc_lv<9>) (tmp_1804_cast_fu_35574_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read())) {
        weights_96_96_1x1_V_18_address0 =  (sc_lv<9>) (tmp_1777_cast_fu_34939_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read())) {
        weights_96_96_1x1_V_18_address0 =  (sc_lv<9>) (tmp_1738_cast_fu_34170_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read())) {
        weights_96_96_1x1_V_18_address0 =  (sc_lv<9>) (tmp_1705_cast_fu_33401_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_18_address0 = grp_subconv_1x1_8p_p_fu_13754_weight_18_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_18_address0 = grp_subconv_1x1_4_p_fu_13650_weight_18_V_address0.read();
    } else {
        weights_96_96_1x1_V_18_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_18_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_18_address1 = grp_subconv_1x1_8p_p_fu_13754_weight_18_V_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_18_address1 = grp_subconv_1x1_4_p_fu_13650_weight_18_V_address1.read();
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
        weights_96_96_1x1_V_18_ce0 = grp_subconv_1x1_8p_p_fu_13754_weight_18_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_18_ce0 = grp_subconv_1x1_4_p_fu_13650_weight_18_V_ce0.read();
    } else {
        weights_96_96_1x1_V_18_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_18_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_18_ce1 = grp_subconv_1x1_8p_p_fu_13754_weight_18_V_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_18_ce1 = grp_subconv_1x1_4_p_fu_13650_weight_18_V_ce1.read();
    } else {
        weights_96_96_1x1_V_18_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_18_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_12, tmp_2459_fu_33397_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_12, tmp_2472_fu_34166_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_12, tmp_2485_fu_34935_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_12, tmp_2496_fu_35570_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_12, tmp_2509_fu_36339_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_12, tmp_2522_fu_37097_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_12, tmp_2535_fu_37870_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_12, tmp_2548_fu_38628_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_12, tmp_2561_fu_39393_p1.read())))) {
        weights_96_96_1x1_V_18_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_18_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_19_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read())) {
        weights_96_96_1x1_V_19_address0 =  (sc_lv<9>) (tmp_1991_cast_fu_39397_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read())) {
        weights_96_96_1x1_V_19_address0 =  (sc_lv<9>) (tmp_1955_cast_fu_38632_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read())) {
        weights_96_96_1x1_V_19_address0 =  (sc_lv<9>) (tmp_1917_cast_fu_37874_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read())) {
        weights_96_96_1x1_V_19_address0 =  (sc_lv<9>) (tmp_1880_cast_fu_37101_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read())) {
        weights_96_96_1x1_V_19_address0 =  (sc_lv<9>) (tmp_1842_cast_fu_36343_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read())) {
        weights_96_96_1x1_V_19_address0 =  (sc_lv<9>) (tmp_1804_cast_fu_35574_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read())) {
        weights_96_96_1x1_V_19_address0 =  (sc_lv<9>) (tmp_1777_cast_fu_34939_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read())) {
        weights_96_96_1x1_V_19_address0 =  (sc_lv<9>) (tmp_1738_cast_fu_34170_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read())) {
        weights_96_96_1x1_V_19_address0 =  (sc_lv<9>) (tmp_1705_cast_fu_33401_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_19_address0 = grp_subconv_1x1_8p_p_fu_13754_weight_19_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_19_address0 = grp_subconv_1x1_4_p_fu_13650_weight_19_V_address0.read();
    } else {
        weights_96_96_1x1_V_19_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_19_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_19_address1 = grp_subconv_1x1_8p_p_fu_13754_weight_19_V_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_19_address1 = grp_subconv_1x1_4_p_fu_13650_weight_19_V_address1.read();
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
        weights_96_96_1x1_V_19_ce0 = grp_subconv_1x1_8p_p_fu_13754_weight_19_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_19_ce0 = grp_subconv_1x1_4_p_fu_13650_weight_19_V_ce0.read();
    } else {
        weights_96_96_1x1_V_19_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_19_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_19_ce1 = grp_subconv_1x1_8p_p_fu_13754_weight_19_V_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_19_ce1 = grp_subconv_1x1_4_p_fu_13650_weight_19_V_ce1.read();
    } else {
        weights_96_96_1x1_V_19_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_19_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_13, tmp_2459_fu_33397_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_13, tmp_2472_fu_34166_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_13, tmp_2485_fu_34935_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_13, tmp_2496_fu_35570_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_13, tmp_2509_fu_36339_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_13, tmp_2522_fu_37097_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_13, tmp_2535_fu_37870_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_13, tmp_2548_fu_38628_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_13, tmp_2561_fu_39393_p1.read())))) {
        weights_96_96_1x1_V_19_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_19_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read())) {
        weights_96_96_1x1_V_1_address0 =  (sc_lv<9>) (tmp_1991_cast_fu_39397_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read())) {
        weights_96_96_1x1_V_1_address0 =  (sc_lv<9>) (tmp_1955_cast_fu_38632_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read())) {
        weights_96_96_1x1_V_1_address0 =  (sc_lv<9>) (tmp_1917_cast_fu_37874_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read())) {
        weights_96_96_1x1_V_1_address0 =  (sc_lv<9>) (tmp_1880_cast_fu_37101_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read())) {
        weights_96_96_1x1_V_1_address0 =  (sc_lv<9>) (tmp_1842_cast_fu_36343_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read())) {
        weights_96_96_1x1_V_1_address0 =  (sc_lv<9>) (tmp_1804_cast_fu_35574_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read())) {
        weights_96_96_1x1_V_1_address0 =  (sc_lv<9>) (tmp_1777_cast_fu_34939_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read())) {
        weights_96_96_1x1_V_1_address0 =  (sc_lv<9>) (tmp_1738_cast_fu_34170_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read())) {
        weights_96_96_1x1_V_1_address0 =  (sc_lv<9>) (tmp_1705_cast_fu_33401_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_1_address0 = grp_subconv_1x1_8p_p_fu_13754_weight_1_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_1_address0 = grp_subconv_1x1_4_p_fu_13650_weight_1_V_address0.read();
    } else {
        weights_96_96_1x1_V_1_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_1_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_1_address1 = grp_subconv_1x1_8p_p_fu_13754_weight_1_V_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_1_address1 = grp_subconv_1x1_4_p_fu_13650_weight_1_V_address1.read();
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
        weights_96_96_1x1_V_1_ce0 = grp_subconv_1x1_8p_p_fu_13754_weight_1_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_1_ce0 = grp_subconv_1x1_4_p_fu_13650_weight_1_V_ce0.read();
    } else {
        weights_96_96_1x1_V_1_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_1_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_1_ce1 = grp_subconv_1x1_8p_p_fu_13754_weight_1_V_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_1_ce1 = grp_subconv_1x1_4_p_fu_13650_weight_1_V_ce1.read();
    } else {
        weights_96_96_1x1_V_1_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_1_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_1, tmp_2459_fu_33397_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_1, tmp_2472_fu_34166_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_1, tmp_2485_fu_34935_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_1, tmp_2496_fu_35570_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_1, tmp_2509_fu_36339_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_1, tmp_2522_fu_37097_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_1, tmp_2535_fu_37870_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_1, tmp_2548_fu_38628_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_1, tmp_2561_fu_39393_p1.read())))) {
        weights_96_96_1x1_V_1_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_1_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_20_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read())) {
        weights_96_96_1x1_V_20_address0 =  (sc_lv<9>) (tmp_1991_cast_fu_39397_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read())) {
        weights_96_96_1x1_V_20_address0 =  (sc_lv<9>) (tmp_1955_cast_fu_38632_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read())) {
        weights_96_96_1x1_V_20_address0 =  (sc_lv<9>) (tmp_1917_cast_fu_37874_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read())) {
        weights_96_96_1x1_V_20_address0 =  (sc_lv<9>) (tmp_1880_cast_fu_37101_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read())) {
        weights_96_96_1x1_V_20_address0 =  (sc_lv<9>) (tmp_1842_cast_fu_36343_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read())) {
        weights_96_96_1x1_V_20_address0 =  (sc_lv<9>) (tmp_1804_cast_fu_35574_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read())) {
        weights_96_96_1x1_V_20_address0 =  (sc_lv<9>) (tmp_1777_cast_fu_34939_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read())) {
        weights_96_96_1x1_V_20_address0 =  (sc_lv<9>) (tmp_1738_cast_fu_34170_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read())) {
        weights_96_96_1x1_V_20_address0 =  (sc_lv<9>) (tmp_1705_cast_fu_33401_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_20_address0 = grp_subconv_1x1_8p_p_fu_13754_weight_20_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_20_address0 = grp_subconv_1x1_4_p_fu_13650_weight_20_V_address0.read();
    } else {
        weights_96_96_1x1_V_20_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_20_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_20_address1 = grp_subconv_1x1_8p_p_fu_13754_weight_20_V_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_20_address1 = grp_subconv_1x1_4_p_fu_13650_weight_20_V_address1.read();
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
        weights_96_96_1x1_V_20_ce0 = grp_subconv_1x1_8p_p_fu_13754_weight_20_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_20_ce0 = grp_subconv_1x1_4_p_fu_13650_weight_20_V_ce0.read();
    } else {
        weights_96_96_1x1_V_20_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_20_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_20_ce1 = grp_subconv_1x1_8p_p_fu_13754_weight_20_V_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_20_ce1 = grp_subconv_1x1_4_p_fu_13650_weight_20_V_ce1.read();
    } else {
        weights_96_96_1x1_V_20_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_20_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_14, tmp_2459_fu_33397_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_14, tmp_2472_fu_34166_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_14, tmp_2485_fu_34935_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_14, tmp_2496_fu_35570_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_14, tmp_2509_fu_36339_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_14, tmp_2522_fu_37097_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_14, tmp_2535_fu_37870_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_14, tmp_2548_fu_38628_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_14, tmp_2561_fu_39393_p1.read())))) {
        weights_96_96_1x1_V_20_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_20_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_21_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read())) {
        weights_96_96_1x1_V_21_address0 =  (sc_lv<9>) (tmp_1991_cast_fu_39397_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read())) {
        weights_96_96_1x1_V_21_address0 =  (sc_lv<9>) (tmp_1955_cast_fu_38632_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read())) {
        weights_96_96_1x1_V_21_address0 =  (sc_lv<9>) (tmp_1917_cast_fu_37874_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read())) {
        weights_96_96_1x1_V_21_address0 =  (sc_lv<9>) (tmp_1880_cast_fu_37101_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read())) {
        weights_96_96_1x1_V_21_address0 =  (sc_lv<9>) (tmp_1842_cast_fu_36343_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read())) {
        weights_96_96_1x1_V_21_address0 =  (sc_lv<9>) (tmp_1804_cast_fu_35574_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read())) {
        weights_96_96_1x1_V_21_address0 =  (sc_lv<9>) (tmp_1777_cast_fu_34939_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read())) {
        weights_96_96_1x1_V_21_address0 =  (sc_lv<9>) (tmp_1738_cast_fu_34170_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read())) {
        weights_96_96_1x1_V_21_address0 =  (sc_lv<9>) (tmp_1705_cast_fu_33401_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_21_address0 = grp_subconv_1x1_8p_p_fu_13754_weight_21_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_21_address0 = grp_subconv_1x1_4_p_fu_13650_weight_21_V_address0.read();
    } else {
        weights_96_96_1x1_V_21_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_21_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_21_address1 = grp_subconv_1x1_8p_p_fu_13754_weight_21_V_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_21_address1 = grp_subconv_1x1_4_p_fu_13650_weight_21_V_address1.read();
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
        weights_96_96_1x1_V_21_ce0 = grp_subconv_1x1_8p_p_fu_13754_weight_21_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_21_ce0 = grp_subconv_1x1_4_p_fu_13650_weight_21_V_ce0.read();
    } else {
        weights_96_96_1x1_V_21_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_21_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_21_ce1 = grp_subconv_1x1_8p_p_fu_13754_weight_21_V_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_21_ce1 = grp_subconv_1x1_4_p_fu_13650_weight_21_V_ce1.read();
    } else {
        weights_96_96_1x1_V_21_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_21_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_15, tmp_2459_fu_33397_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_15, tmp_2472_fu_34166_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_15, tmp_2485_fu_34935_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_15, tmp_2496_fu_35570_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_15, tmp_2509_fu_36339_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_15, tmp_2522_fu_37097_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_15, tmp_2535_fu_37870_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_15, tmp_2548_fu_38628_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_15, tmp_2561_fu_39393_p1.read())))) {
        weights_96_96_1x1_V_21_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_21_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_22_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read())) {
        weights_96_96_1x1_V_22_address0 =  (sc_lv<9>) (tmp_1991_cast_fu_39397_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read())) {
        weights_96_96_1x1_V_22_address0 =  (sc_lv<9>) (tmp_1955_cast_fu_38632_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read())) {
        weights_96_96_1x1_V_22_address0 =  (sc_lv<9>) (tmp_1917_cast_fu_37874_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read())) {
        weights_96_96_1x1_V_22_address0 =  (sc_lv<9>) (tmp_1880_cast_fu_37101_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read())) {
        weights_96_96_1x1_V_22_address0 =  (sc_lv<9>) (tmp_1842_cast_fu_36343_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read())) {
        weights_96_96_1x1_V_22_address0 =  (sc_lv<9>) (tmp_1804_cast_fu_35574_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read())) {
        weights_96_96_1x1_V_22_address0 =  (sc_lv<9>) (tmp_1777_cast_fu_34939_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read())) {
        weights_96_96_1x1_V_22_address0 =  (sc_lv<9>) (tmp_1738_cast_fu_34170_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read())) {
        weights_96_96_1x1_V_22_address0 =  (sc_lv<9>) (tmp_1705_cast_fu_33401_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_22_address0 = grp_subconv_1x1_8p_p_fu_13754_weight_22_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_22_address0 = grp_subconv_1x1_4_p_fu_13650_weight_22_V_address0.read();
    } else {
        weights_96_96_1x1_V_22_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_22_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_22_address1 = grp_subconv_1x1_8p_p_fu_13754_weight_22_V_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_22_address1 = grp_subconv_1x1_4_p_fu_13650_weight_22_V_address1.read();
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
        weights_96_96_1x1_V_22_ce0 = grp_subconv_1x1_8p_p_fu_13754_weight_22_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_22_ce0 = grp_subconv_1x1_4_p_fu_13650_weight_22_V_ce0.read();
    } else {
        weights_96_96_1x1_V_22_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_22_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_22_ce1 = grp_subconv_1x1_8p_p_fu_13754_weight_22_V_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_22_ce1 = grp_subconv_1x1_4_p_fu_13650_weight_22_V_ce1.read();
    } else {
        weights_96_96_1x1_V_22_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_22_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_16, tmp_2459_fu_33397_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_16, tmp_2472_fu_34166_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_16, tmp_2485_fu_34935_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_16, tmp_2496_fu_35570_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_16, tmp_2509_fu_36339_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_16, tmp_2522_fu_37097_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_16, tmp_2535_fu_37870_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_16, tmp_2548_fu_38628_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_16, tmp_2561_fu_39393_p1.read())))) {
        weights_96_96_1x1_V_22_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_22_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_23_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read())) {
        weights_96_96_1x1_V_23_address0 =  (sc_lv<9>) (tmp_1991_cast_fu_39397_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read())) {
        weights_96_96_1x1_V_23_address0 =  (sc_lv<9>) (tmp_1955_cast_fu_38632_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read())) {
        weights_96_96_1x1_V_23_address0 =  (sc_lv<9>) (tmp_1917_cast_fu_37874_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read())) {
        weights_96_96_1x1_V_23_address0 =  (sc_lv<9>) (tmp_1880_cast_fu_37101_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read())) {
        weights_96_96_1x1_V_23_address0 =  (sc_lv<9>) (tmp_1842_cast_fu_36343_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read())) {
        weights_96_96_1x1_V_23_address0 =  (sc_lv<9>) (tmp_1804_cast_fu_35574_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read())) {
        weights_96_96_1x1_V_23_address0 =  (sc_lv<9>) (tmp_1777_cast_fu_34939_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read())) {
        weights_96_96_1x1_V_23_address0 =  (sc_lv<9>) (tmp_1738_cast_fu_34170_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read())) {
        weights_96_96_1x1_V_23_address0 =  (sc_lv<9>) (tmp_1705_cast_fu_33401_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_23_address0 = grp_subconv_1x1_8p_p_fu_13754_weight_23_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_23_address0 = grp_subconv_1x1_4_p_fu_13650_weight_23_V_address0.read();
    } else {
        weights_96_96_1x1_V_23_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_23_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_23_address1 = grp_subconv_1x1_8p_p_fu_13754_weight_23_V_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_23_address1 = grp_subconv_1x1_4_p_fu_13650_weight_23_V_address1.read();
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
        weights_96_96_1x1_V_23_ce0 = grp_subconv_1x1_8p_p_fu_13754_weight_23_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_23_ce0 = grp_subconv_1x1_4_p_fu_13650_weight_23_V_ce0.read();
    } else {
        weights_96_96_1x1_V_23_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_23_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_23_ce1 = grp_subconv_1x1_8p_p_fu_13754_weight_23_V_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_23_ce1 = grp_subconv_1x1_4_p_fu_13650_weight_23_V_ce1.read();
    } else {
        weights_96_96_1x1_V_23_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_23_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_0, tmp_2459_fu_33397_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_1, tmp_2459_fu_33397_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_2, tmp_2459_fu_33397_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_3, tmp_2459_fu_33397_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_4, tmp_2459_fu_33397_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_5, tmp_2459_fu_33397_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_6, tmp_2459_fu_33397_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_7, tmp_2459_fu_33397_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_8, tmp_2459_fu_33397_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_9, tmp_2459_fu_33397_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_A, tmp_2459_fu_33397_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_B, tmp_2459_fu_33397_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_C, tmp_2459_fu_33397_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_D, tmp_2459_fu_33397_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_E, tmp_2459_fu_33397_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_F, tmp_2459_fu_33397_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_10, tmp_2459_fu_33397_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_11, tmp_2459_fu_33397_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_12, tmp_2459_fu_33397_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_13, tmp_2459_fu_33397_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_14, tmp_2459_fu_33397_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_15, tmp_2459_fu_33397_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_16, tmp_2459_fu_33397_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_0, tmp_2472_fu_34166_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_1, tmp_2472_fu_34166_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_2, tmp_2472_fu_34166_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_3, tmp_2472_fu_34166_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_4, tmp_2472_fu_34166_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_5, tmp_2472_fu_34166_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_6, tmp_2472_fu_34166_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_7, tmp_2472_fu_34166_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_8, tmp_2472_fu_34166_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_9, tmp_2472_fu_34166_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_A, tmp_2472_fu_34166_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_B, tmp_2472_fu_34166_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_C, tmp_2472_fu_34166_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_D, tmp_2472_fu_34166_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_E, tmp_2472_fu_34166_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_F, tmp_2472_fu_34166_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_10, tmp_2472_fu_34166_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_11, tmp_2472_fu_34166_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_12, tmp_2472_fu_34166_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_13, tmp_2472_fu_34166_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_14, tmp_2472_fu_34166_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_15, tmp_2472_fu_34166_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_16, tmp_2472_fu_34166_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_0, tmp_2485_fu_34935_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_1, tmp_2485_fu_34935_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_2, tmp_2485_fu_34935_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_3, tmp_2485_fu_34935_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_4, tmp_2485_fu_34935_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_5, tmp_2485_fu_34935_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_6, tmp_2485_fu_34935_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_7, tmp_2485_fu_34935_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_8, tmp_2485_fu_34935_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_9, tmp_2485_fu_34935_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_A, tmp_2485_fu_34935_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_B, tmp_2485_fu_34935_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_C, tmp_2485_fu_34935_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_D, tmp_2485_fu_34935_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_E, tmp_2485_fu_34935_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_F, tmp_2485_fu_34935_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_10, tmp_2485_fu_34935_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_11, tmp_2485_fu_34935_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_12, tmp_2485_fu_34935_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_13, tmp_2485_fu_34935_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_14, tmp_2485_fu_34935_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_15, tmp_2485_fu_34935_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_16, tmp_2485_fu_34935_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_0, tmp_2496_fu_35570_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_1, tmp_2496_fu_35570_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_2, tmp_2496_fu_35570_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_3, tmp_2496_fu_35570_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_4, tmp_2496_fu_35570_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_5, tmp_2496_fu_35570_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_6, tmp_2496_fu_35570_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_7, tmp_2496_fu_35570_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_8, tmp_2496_fu_35570_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_9, tmp_2496_fu_35570_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_A, tmp_2496_fu_35570_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_B, tmp_2496_fu_35570_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_C, tmp_2496_fu_35570_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_D, tmp_2496_fu_35570_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_E, tmp_2496_fu_35570_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_F, tmp_2496_fu_35570_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_10, tmp_2496_fu_35570_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_11, tmp_2496_fu_35570_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_12, tmp_2496_fu_35570_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_13, tmp_2496_fu_35570_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_14, tmp_2496_fu_35570_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_15, tmp_2496_fu_35570_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_16, tmp_2496_fu_35570_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_0, tmp_2509_fu_36339_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_1, tmp_2509_fu_36339_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_2, tmp_2509_fu_36339_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_3, tmp_2509_fu_36339_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_4, tmp_2509_fu_36339_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_5, tmp_2509_fu_36339_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_6, tmp_2509_fu_36339_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_7, tmp_2509_fu_36339_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_8, tmp_2509_fu_36339_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_9, tmp_2509_fu_36339_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_A, tmp_2509_fu_36339_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_B, tmp_2509_fu_36339_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_C, tmp_2509_fu_36339_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_D, tmp_2509_fu_36339_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_E, tmp_2509_fu_36339_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_F, tmp_2509_fu_36339_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_10, tmp_2509_fu_36339_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_11, tmp_2509_fu_36339_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_12, tmp_2509_fu_36339_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_13, tmp_2509_fu_36339_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_14, tmp_2509_fu_36339_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_15, tmp_2509_fu_36339_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_16, tmp_2509_fu_36339_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_0, tmp_2522_fu_37097_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_1, tmp_2522_fu_37097_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_2, tmp_2522_fu_37097_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_3, tmp_2522_fu_37097_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_4, tmp_2522_fu_37097_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_5, tmp_2522_fu_37097_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_6, tmp_2522_fu_37097_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_7, tmp_2522_fu_37097_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_8, tmp_2522_fu_37097_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_9, tmp_2522_fu_37097_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_A, tmp_2522_fu_37097_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_B, tmp_2522_fu_37097_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_C, tmp_2522_fu_37097_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_D, tmp_2522_fu_37097_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_E, tmp_2522_fu_37097_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_F, tmp_2522_fu_37097_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_10, tmp_2522_fu_37097_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_11, tmp_2522_fu_37097_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_12, tmp_2522_fu_37097_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_13, tmp_2522_fu_37097_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_14, tmp_2522_fu_37097_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_15, tmp_2522_fu_37097_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_16, tmp_2522_fu_37097_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_0, tmp_2535_fu_37870_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_1, tmp_2535_fu_37870_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_2, tmp_2535_fu_37870_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_3, tmp_2535_fu_37870_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_4, tmp_2535_fu_37870_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_5, tmp_2535_fu_37870_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_6, tmp_2535_fu_37870_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_7, tmp_2535_fu_37870_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_8, tmp_2535_fu_37870_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_9, tmp_2535_fu_37870_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_A, tmp_2535_fu_37870_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_B, tmp_2535_fu_37870_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_C, tmp_2535_fu_37870_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_D, tmp_2535_fu_37870_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_E, tmp_2535_fu_37870_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_F, tmp_2535_fu_37870_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_10, tmp_2535_fu_37870_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_11, tmp_2535_fu_37870_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_12, tmp_2535_fu_37870_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_13, tmp_2535_fu_37870_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_14, tmp_2535_fu_37870_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_15, tmp_2535_fu_37870_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_16, tmp_2535_fu_37870_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_0, tmp_2548_fu_38628_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_1, tmp_2548_fu_38628_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_2, tmp_2548_fu_38628_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_3, tmp_2548_fu_38628_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_4, tmp_2548_fu_38628_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_5, tmp_2548_fu_38628_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_6, tmp_2548_fu_38628_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_7, tmp_2548_fu_38628_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_8, tmp_2548_fu_38628_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_9, tmp_2548_fu_38628_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_A, tmp_2548_fu_38628_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_B, tmp_2548_fu_38628_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_C, tmp_2548_fu_38628_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_D, tmp_2548_fu_38628_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_E, tmp_2548_fu_38628_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_F, tmp_2548_fu_38628_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_10, tmp_2548_fu_38628_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_11, tmp_2548_fu_38628_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_12, tmp_2548_fu_38628_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_13, tmp_2548_fu_38628_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_14, tmp_2548_fu_38628_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_15, tmp_2548_fu_38628_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_16, tmp_2548_fu_38628_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_0, tmp_2561_fu_39393_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_1, tmp_2561_fu_39393_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_2, tmp_2561_fu_39393_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_3, tmp_2561_fu_39393_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_4, tmp_2561_fu_39393_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_5, tmp_2561_fu_39393_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_6, tmp_2561_fu_39393_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_7, tmp_2561_fu_39393_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_8, tmp_2561_fu_39393_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_9, tmp_2561_fu_39393_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_A, tmp_2561_fu_39393_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_B, tmp_2561_fu_39393_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_C, tmp_2561_fu_39393_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_D, tmp_2561_fu_39393_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_E, tmp_2561_fu_39393_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_F, tmp_2561_fu_39393_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_10, tmp_2561_fu_39393_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_11, tmp_2561_fu_39393_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_12, tmp_2561_fu_39393_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_13, tmp_2561_fu_39393_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_14, tmp_2561_fu_39393_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_15, tmp_2561_fu_39393_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_16, tmp_2561_fu_39393_p1.read())))) {
        weights_96_96_1x1_V_23_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_23_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read())) {
        weights_96_96_1x1_V_2_address0 =  (sc_lv<9>) (tmp_1991_cast_fu_39397_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read())) {
        weights_96_96_1x1_V_2_address0 =  (sc_lv<9>) (tmp_1955_cast_fu_38632_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read())) {
        weights_96_96_1x1_V_2_address0 =  (sc_lv<9>) (tmp_1917_cast_fu_37874_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read())) {
        weights_96_96_1x1_V_2_address0 =  (sc_lv<9>) (tmp_1880_cast_fu_37101_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read())) {
        weights_96_96_1x1_V_2_address0 =  (sc_lv<9>) (tmp_1842_cast_fu_36343_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read())) {
        weights_96_96_1x1_V_2_address0 =  (sc_lv<9>) (tmp_1804_cast_fu_35574_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read())) {
        weights_96_96_1x1_V_2_address0 =  (sc_lv<9>) (tmp_1777_cast_fu_34939_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read())) {
        weights_96_96_1x1_V_2_address0 =  (sc_lv<9>) (tmp_1738_cast_fu_34170_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read())) {
        weights_96_96_1x1_V_2_address0 =  (sc_lv<9>) (tmp_1705_cast_fu_33401_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_2_address0 = grp_subconv_1x1_8p_p_fu_13754_weight_2_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_2_address0 = grp_subconv_1x1_4_p_fu_13650_weight_2_V_address0.read();
    } else {
        weights_96_96_1x1_V_2_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_2_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_2_address1 = grp_subconv_1x1_8p_p_fu_13754_weight_2_V_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_2_address1 = grp_subconv_1x1_4_p_fu_13650_weight_2_V_address1.read();
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
        weights_96_96_1x1_V_2_ce0 = grp_subconv_1x1_8p_p_fu_13754_weight_2_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_2_ce0 = grp_subconv_1x1_4_p_fu_13650_weight_2_V_ce0.read();
    } else {
        weights_96_96_1x1_V_2_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_2_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_2_ce1 = grp_subconv_1x1_8p_p_fu_13754_weight_2_V_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_2_ce1 = grp_subconv_1x1_4_p_fu_13650_weight_2_V_ce1.read();
    } else {
        weights_96_96_1x1_V_2_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_2_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_2, tmp_2459_fu_33397_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_2, tmp_2472_fu_34166_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_2, tmp_2485_fu_34935_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_2, tmp_2496_fu_35570_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_2, tmp_2509_fu_36339_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_2, tmp_2522_fu_37097_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_2, tmp_2535_fu_37870_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_2, tmp_2548_fu_38628_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_2, tmp_2561_fu_39393_p1.read())))) {
        weights_96_96_1x1_V_2_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_2_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read())) {
        weights_96_96_1x1_V_3_address0 =  (sc_lv<9>) (tmp_1991_cast_fu_39397_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read())) {
        weights_96_96_1x1_V_3_address0 =  (sc_lv<9>) (tmp_1955_cast_fu_38632_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read())) {
        weights_96_96_1x1_V_3_address0 =  (sc_lv<9>) (tmp_1917_cast_fu_37874_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read())) {
        weights_96_96_1x1_V_3_address0 =  (sc_lv<9>) (tmp_1880_cast_fu_37101_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read())) {
        weights_96_96_1x1_V_3_address0 =  (sc_lv<9>) (tmp_1842_cast_fu_36343_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read())) {
        weights_96_96_1x1_V_3_address0 =  (sc_lv<9>) (tmp_1804_cast_fu_35574_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read())) {
        weights_96_96_1x1_V_3_address0 =  (sc_lv<9>) (tmp_1777_cast_fu_34939_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read())) {
        weights_96_96_1x1_V_3_address0 =  (sc_lv<9>) (tmp_1738_cast_fu_34170_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read())) {
        weights_96_96_1x1_V_3_address0 =  (sc_lv<9>) (tmp_1705_cast_fu_33401_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_3_address0 = grp_subconv_1x1_8p_p_fu_13754_weight_3_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_3_address0 = grp_subconv_1x1_4_p_fu_13650_weight_3_V_address0.read();
    } else {
        weights_96_96_1x1_V_3_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_3_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_3_address1 = grp_subconv_1x1_8p_p_fu_13754_weight_3_V_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_3_address1 = grp_subconv_1x1_4_p_fu_13650_weight_3_V_address1.read();
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
        weights_96_96_1x1_V_3_ce0 = grp_subconv_1x1_8p_p_fu_13754_weight_3_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_3_ce0 = grp_subconv_1x1_4_p_fu_13650_weight_3_V_ce0.read();
    } else {
        weights_96_96_1x1_V_3_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_3_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_3_ce1 = grp_subconv_1x1_8p_p_fu_13754_weight_3_V_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_3_ce1 = grp_subconv_1x1_4_p_fu_13650_weight_3_V_ce1.read();
    } else {
        weights_96_96_1x1_V_3_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_3_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_3, tmp_2459_fu_33397_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_3, tmp_2472_fu_34166_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_3, tmp_2485_fu_34935_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_3, tmp_2496_fu_35570_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_3, tmp_2509_fu_36339_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_3, tmp_2522_fu_37097_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_3, tmp_2535_fu_37870_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_3, tmp_2548_fu_38628_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_3, tmp_2561_fu_39393_p1.read())))) {
        weights_96_96_1x1_V_3_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_3_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read())) {
        weights_96_96_1x1_V_4_address0 =  (sc_lv<9>) (tmp_1991_cast_fu_39397_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read())) {
        weights_96_96_1x1_V_4_address0 =  (sc_lv<9>) (tmp_1955_cast_fu_38632_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read())) {
        weights_96_96_1x1_V_4_address0 =  (sc_lv<9>) (tmp_1917_cast_fu_37874_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read())) {
        weights_96_96_1x1_V_4_address0 =  (sc_lv<9>) (tmp_1880_cast_fu_37101_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read())) {
        weights_96_96_1x1_V_4_address0 =  (sc_lv<9>) (tmp_1842_cast_fu_36343_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read())) {
        weights_96_96_1x1_V_4_address0 =  (sc_lv<9>) (tmp_1804_cast_fu_35574_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read())) {
        weights_96_96_1x1_V_4_address0 =  (sc_lv<9>) (tmp_1777_cast_fu_34939_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read())) {
        weights_96_96_1x1_V_4_address0 =  (sc_lv<9>) (tmp_1738_cast_fu_34170_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read())) {
        weights_96_96_1x1_V_4_address0 =  (sc_lv<9>) (tmp_1705_cast_fu_33401_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_4_address0 = grp_subconv_1x1_8p_p_fu_13754_weight_4_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_4_address0 = grp_subconv_1x1_4_p_fu_13650_weight_4_V_address0.read();
    } else {
        weights_96_96_1x1_V_4_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_4_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_4_address1 = grp_subconv_1x1_8p_p_fu_13754_weight_4_V_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_4_address1 = grp_subconv_1x1_4_p_fu_13650_weight_4_V_address1.read();
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
        weights_96_96_1x1_V_4_ce0 = grp_subconv_1x1_8p_p_fu_13754_weight_4_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_4_ce0 = grp_subconv_1x1_4_p_fu_13650_weight_4_V_ce0.read();
    } else {
        weights_96_96_1x1_V_4_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_4_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_4_ce1 = grp_subconv_1x1_8p_p_fu_13754_weight_4_V_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_4_ce1 = grp_subconv_1x1_4_p_fu_13650_weight_4_V_ce1.read();
    } else {
        weights_96_96_1x1_V_4_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_4_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_4, tmp_2459_fu_33397_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_4, tmp_2472_fu_34166_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_4, tmp_2485_fu_34935_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_4, tmp_2496_fu_35570_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_4, tmp_2509_fu_36339_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_4, tmp_2522_fu_37097_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_4, tmp_2535_fu_37870_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_4, tmp_2548_fu_38628_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_4, tmp_2561_fu_39393_p1.read())))) {
        weights_96_96_1x1_V_4_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_4_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read())) {
        weights_96_96_1x1_V_5_address0 =  (sc_lv<9>) (tmp_1991_cast_fu_39397_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read())) {
        weights_96_96_1x1_V_5_address0 =  (sc_lv<9>) (tmp_1955_cast_fu_38632_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read())) {
        weights_96_96_1x1_V_5_address0 =  (sc_lv<9>) (tmp_1917_cast_fu_37874_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read())) {
        weights_96_96_1x1_V_5_address0 =  (sc_lv<9>) (tmp_1880_cast_fu_37101_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read())) {
        weights_96_96_1x1_V_5_address0 =  (sc_lv<9>) (tmp_1842_cast_fu_36343_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read())) {
        weights_96_96_1x1_V_5_address0 =  (sc_lv<9>) (tmp_1804_cast_fu_35574_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read())) {
        weights_96_96_1x1_V_5_address0 =  (sc_lv<9>) (tmp_1777_cast_fu_34939_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read())) {
        weights_96_96_1x1_V_5_address0 =  (sc_lv<9>) (tmp_1738_cast_fu_34170_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read())) {
        weights_96_96_1x1_V_5_address0 =  (sc_lv<9>) (tmp_1705_cast_fu_33401_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_5_address0 = grp_subconv_1x1_8p_p_fu_13754_weight_5_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_5_address0 = grp_subconv_1x1_4_p_fu_13650_weight_5_V_address0.read();
    } else {
        weights_96_96_1x1_V_5_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_5_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_5_address1 = grp_subconv_1x1_8p_p_fu_13754_weight_5_V_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_5_address1 = grp_subconv_1x1_4_p_fu_13650_weight_5_V_address1.read();
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
        weights_96_96_1x1_V_5_ce0 = grp_subconv_1x1_8p_p_fu_13754_weight_5_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_5_ce0 = grp_subconv_1x1_4_p_fu_13650_weight_5_V_ce0.read();
    } else {
        weights_96_96_1x1_V_5_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_5_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_5_ce1 = grp_subconv_1x1_8p_p_fu_13754_weight_5_V_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_5_ce1 = grp_subconv_1x1_4_p_fu_13650_weight_5_V_ce1.read();
    } else {
        weights_96_96_1x1_V_5_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_5_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_5, tmp_2459_fu_33397_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_5, tmp_2472_fu_34166_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_5, tmp_2485_fu_34935_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_5, tmp_2496_fu_35570_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_5, tmp_2509_fu_36339_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_5, tmp_2522_fu_37097_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_5, tmp_2535_fu_37870_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_5, tmp_2548_fu_38628_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_5, tmp_2561_fu_39393_p1.read())))) {
        weights_96_96_1x1_V_5_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_5_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read())) {
        weights_96_96_1x1_V_6_address0 =  (sc_lv<9>) (tmp_1991_cast_fu_39397_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read())) {
        weights_96_96_1x1_V_6_address0 =  (sc_lv<9>) (tmp_1955_cast_fu_38632_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read())) {
        weights_96_96_1x1_V_6_address0 =  (sc_lv<9>) (tmp_1917_cast_fu_37874_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read())) {
        weights_96_96_1x1_V_6_address0 =  (sc_lv<9>) (tmp_1880_cast_fu_37101_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read())) {
        weights_96_96_1x1_V_6_address0 =  (sc_lv<9>) (tmp_1842_cast_fu_36343_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read())) {
        weights_96_96_1x1_V_6_address0 =  (sc_lv<9>) (tmp_1804_cast_fu_35574_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read())) {
        weights_96_96_1x1_V_6_address0 =  (sc_lv<9>) (tmp_1777_cast_fu_34939_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read())) {
        weights_96_96_1x1_V_6_address0 =  (sc_lv<9>) (tmp_1738_cast_fu_34170_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read())) {
        weights_96_96_1x1_V_6_address0 =  (sc_lv<9>) (tmp_1705_cast_fu_33401_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_6_address0 = grp_subconv_1x1_8p_p_fu_13754_weight_6_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_6_address0 = grp_subconv_1x1_4_p_fu_13650_weight_6_V_address0.read();
    } else {
        weights_96_96_1x1_V_6_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_6_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_6_address1 = grp_subconv_1x1_8p_p_fu_13754_weight_6_V_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_6_address1 = grp_subconv_1x1_4_p_fu_13650_weight_6_V_address1.read();
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
        weights_96_96_1x1_V_6_ce0 = grp_subconv_1x1_8p_p_fu_13754_weight_6_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_6_ce0 = grp_subconv_1x1_4_p_fu_13650_weight_6_V_ce0.read();
    } else {
        weights_96_96_1x1_V_6_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_6_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_6_ce1 = grp_subconv_1x1_8p_p_fu_13754_weight_6_V_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_6_ce1 = grp_subconv_1x1_4_p_fu_13650_weight_6_V_ce1.read();
    } else {
        weights_96_96_1x1_V_6_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_6_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_6, tmp_2459_fu_33397_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_6, tmp_2472_fu_34166_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_6, tmp_2485_fu_34935_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_6, tmp_2496_fu_35570_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_6, tmp_2509_fu_36339_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_6, tmp_2522_fu_37097_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_6, tmp_2535_fu_37870_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_6, tmp_2548_fu_38628_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_6, tmp_2561_fu_39393_p1.read())))) {
        weights_96_96_1x1_V_6_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_6_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_7_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read())) {
        weights_96_96_1x1_V_7_address0 =  (sc_lv<9>) (tmp_1991_cast_fu_39397_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read())) {
        weights_96_96_1x1_V_7_address0 =  (sc_lv<9>) (tmp_1955_cast_fu_38632_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read())) {
        weights_96_96_1x1_V_7_address0 =  (sc_lv<9>) (tmp_1917_cast_fu_37874_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read())) {
        weights_96_96_1x1_V_7_address0 =  (sc_lv<9>) (tmp_1880_cast_fu_37101_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read())) {
        weights_96_96_1x1_V_7_address0 =  (sc_lv<9>) (tmp_1842_cast_fu_36343_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read())) {
        weights_96_96_1x1_V_7_address0 =  (sc_lv<9>) (tmp_1804_cast_fu_35574_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read())) {
        weights_96_96_1x1_V_7_address0 =  (sc_lv<9>) (tmp_1777_cast_fu_34939_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read())) {
        weights_96_96_1x1_V_7_address0 =  (sc_lv<9>) (tmp_1738_cast_fu_34170_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read())) {
        weights_96_96_1x1_V_7_address0 =  (sc_lv<9>) (tmp_1705_cast_fu_33401_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_7_address0 = grp_subconv_1x1_8p_p_fu_13754_weight_7_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_7_address0 = grp_subconv_1x1_4_p_fu_13650_weight_7_V_address0.read();
    } else {
        weights_96_96_1x1_V_7_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_7_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_7_address1 = grp_subconv_1x1_8p_p_fu_13754_weight_7_V_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_7_address1 = grp_subconv_1x1_4_p_fu_13650_weight_7_V_address1.read();
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
        weights_96_96_1x1_V_7_ce0 = grp_subconv_1x1_8p_p_fu_13754_weight_7_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_7_ce0 = grp_subconv_1x1_4_p_fu_13650_weight_7_V_ce0.read();
    } else {
        weights_96_96_1x1_V_7_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_7_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_7_ce1 = grp_subconv_1x1_8p_p_fu_13754_weight_7_V_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_7_ce1 = grp_subconv_1x1_4_p_fu_13650_weight_7_V_ce1.read();
    } else {
        weights_96_96_1x1_V_7_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_7_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_7, tmp_2459_fu_33397_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_7, tmp_2472_fu_34166_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_7, tmp_2485_fu_34935_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_7, tmp_2496_fu_35570_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_7, tmp_2509_fu_36339_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_7, tmp_2522_fu_37097_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_7, tmp_2535_fu_37870_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_7, tmp_2548_fu_38628_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_7, tmp_2561_fu_39393_p1.read())))) {
        weights_96_96_1x1_V_7_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_7_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_8_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read())) {
        weights_96_96_1x1_V_8_address0 =  (sc_lv<9>) (tmp_1991_cast_fu_39397_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read())) {
        weights_96_96_1x1_V_8_address0 =  (sc_lv<9>) (tmp_1955_cast_fu_38632_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read())) {
        weights_96_96_1x1_V_8_address0 =  (sc_lv<9>) (tmp_1917_cast_fu_37874_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read())) {
        weights_96_96_1x1_V_8_address0 =  (sc_lv<9>) (tmp_1880_cast_fu_37101_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read())) {
        weights_96_96_1x1_V_8_address0 =  (sc_lv<9>) (tmp_1842_cast_fu_36343_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read())) {
        weights_96_96_1x1_V_8_address0 =  (sc_lv<9>) (tmp_1804_cast_fu_35574_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read())) {
        weights_96_96_1x1_V_8_address0 =  (sc_lv<9>) (tmp_1777_cast_fu_34939_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read())) {
        weights_96_96_1x1_V_8_address0 =  (sc_lv<9>) (tmp_1738_cast_fu_34170_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read())) {
        weights_96_96_1x1_V_8_address0 =  (sc_lv<9>) (tmp_1705_cast_fu_33401_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_8_address0 = grp_subconv_1x1_8p_p_fu_13754_weight_8_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_8_address0 = grp_subconv_1x1_4_p_fu_13650_weight_8_V_address0.read();
    } else {
        weights_96_96_1x1_V_8_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_8_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_8_address1 = grp_subconv_1x1_8p_p_fu_13754_weight_8_V_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_8_address1 = grp_subconv_1x1_4_p_fu_13650_weight_8_V_address1.read();
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
        weights_96_96_1x1_V_8_ce0 = grp_subconv_1x1_8p_p_fu_13754_weight_8_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_8_ce0 = grp_subconv_1x1_4_p_fu_13650_weight_8_V_ce0.read();
    } else {
        weights_96_96_1x1_V_8_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_8_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_8_ce1 = grp_subconv_1x1_8p_p_fu_13754_weight_8_V_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_8_ce1 = grp_subconv_1x1_4_p_fu_13650_weight_8_V_ce1.read();
    } else {
        weights_96_96_1x1_V_8_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_8_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_8, tmp_2459_fu_33397_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_8, tmp_2472_fu_34166_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_8, tmp_2485_fu_34935_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_8, tmp_2496_fu_35570_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_8, tmp_2509_fu_36339_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_8, tmp_2522_fu_37097_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_8, tmp_2535_fu_37870_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_8, tmp_2548_fu_38628_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_8, tmp_2561_fu_39393_p1.read())))) {
        weights_96_96_1x1_V_8_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_8_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_9_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read())) {
        weights_96_96_1x1_V_9_address0 =  (sc_lv<9>) (tmp_1991_cast_fu_39397_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read())) {
        weights_96_96_1x1_V_9_address0 =  (sc_lv<9>) (tmp_1955_cast_fu_38632_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read())) {
        weights_96_96_1x1_V_9_address0 =  (sc_lv<9>) (tmp_1917_cast_fu_37874_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read())) {
        weights_96_96_1x1_V_9_address0 =  (sc_lv<9>) (tmp_1880_cast_fu_37101_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read())) {
        weights_96_96_1x1_V_9_address0 =  (sc_lv<9>) (tmp_1842_cast_fu_36343_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read())) {
        weights_96_96_1x1_V_9_address0 =  (sc_lv<9>) (tmp_1804_cast_fu_35574_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read())) {
        weights_96_96_1x1_V_9_address0 =  (sc_lv<9>) (tmp_1777_cast_fu_34939_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read())) {
        weights_96_96_1x1_V_9_address0 =  (sc_lv<9>) (tmp_1738_cast_fu_34170_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read())) {
        weights_96_96_1x1_V_9_address0 =  (sc_lv<9>) (tmp_1705_cast_fu_33401_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_9_address0 = grp_subconv_1x1_8p_p_fu_13754_weight_9_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_9_address0 = grp_subconv_1x1_4_p_fu_13650_weight_9_V_address0.read();
    } else {
        weights_96_96_1x1_V_9_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_9_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_9_address1 = grp_subconv_1x1_8p_p_fu_13754_weight_9_V_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_9_address1 = grp_subconv_1x1_4_p_fu_13650_weight_9_V_address1.read();
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
        weights_96_96_1x1_V_9_ce0 = grp_subconv_1x1_8p_p_fu_13754_weight_9_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_9_ce0 = grp_subconv_1x1_4_p_fu_13650_weight_9_V_ce0.read();
    } else {
        weights_96_96_1x1_V_9_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_9_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_9_ce1 = grp_subconv_1x1_8p_p_fu_13754_weight_9_V_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_9_ce1 = grp_subconv_1x1_4_p_fu_13650_weight_9_V_ce1.read();
    } else {
        weights_96_96_1x1_V_9_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_9_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_9, tmp_2459_fu_33397_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_9, tmp_2472_fu_34166_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_9, tmp_2485_fu_34935_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_9, tmp_2496_fu_35570_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_9, tmp_2509_fu_36339_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_9, tmp_2522_fu_37097_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_9, tmp_2535_fu_37870_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_9, tmp_2548_fu_38628_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_9, tmp_2561_fu_39393_p1.read())))) {
        weights_96_96_1x1_V_9_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_9_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_s_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read())) {
        weights_96_96_1x1_V_s_address0 =  (sc_lv<9>) (tmp_1991_cast_fu_39397_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read())) {
        weights_96_96_1x1_V_s_address0 =  (sc_lv<9>) (tmp_1955_cast_fu_38632_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read())) {
        weights_96_96_1x1_V_s_address0 =  (sc_lv<9>) (tmp_1917_cast_fu_37874_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read())) {
        weights_96_96_1x1_V_s_address0 =  (sc_lv<9>) (tmp_1880_cast_fu_37101_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read())) {
        weights_96_96_1x1_V_s_address0 =  (sc_lv<9>) (tmp_1842_cast_fu_36343_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read())) {
        weights_96_96_1x1_V_s_address0 =  (sc_lv<9>) (tmp_1804_cast_fu_35574_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read())) {
        weights_96_96_1x1_V_s_address0 =  (sc_lv<9>) (tmp_1777_cast_fu_34939_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read())) {
        weights_96_96_1x1_V_s_address0 =  (sc_lv<9>) (tmp_1738_cast_fu_34170_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read())) {
        weights_96_96_1x1_V_s_address0 =  (sc_lv<9>) (tmp_1705_cast_fu_33401_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_s_address0 = grp_subconv_1x1_8p_p_fu_13754_weight_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_s_address0 = grp_subconv_1x1_4_p_fu_13650_weight_0_V_address0.read();
    } else {
        weights_96_96_1x1_V_s_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_s_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_s_address1 = grp_subconv_1x1_8p_p_fu_13754_weight_0_V_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_s_address1 = grp_subconv_1x1_4_p_fu_13650_weight_0_V_address1.read();
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
        weights_96_96_1x1_V_s_ce0 = grp_subconv_1x1_8p_p_fu_13754_weight_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_s_ce0 = grp_subconv_1x1_4_p_fu_13650_weight_0_V_ce0.read();
    } else {
        weights_96_96_1x1_V_s_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_s_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_s_ce1 = grp_subconv_1x1_8p_p_fu_13754_weight_0_V_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_s_ce1 = grp_subconv_1x1_4_p_fu_13650_weight_0_V_ce1.read();
    } else {
        weights_96_96_1x1_V_s_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_s_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_0, tmp_2459_fu_33397_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_0, tmp_2472_fu_34166_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_0, tmp_2485_fu_34935_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_0, tmp_2496_fu_35570_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_0, tmp_2509_fu_36339_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_0, tmp_2522_fu_37097_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_0, tmp_2535_fu_37870_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_0, tmp_2548_fu_38628_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_0, tmp_2561_fu_39393_p1.read())))) {
        weights_96_96_1x1_V_s_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_s_we0 = ap_const_logic_0;
    }
}

}

