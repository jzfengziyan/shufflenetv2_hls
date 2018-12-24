#include "ShuffleNetV2.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void ShuffleNetV2::thread_tmp_749_fu_16592_p3() {
    tmp_749_fu_16592_p3 = esl_concat<8,3>(sum16_fu_16574_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_750_fu_16604_p2() {
    tmp_750_fu_16604_p2 = (!p_shl325_cast_fu_16588_p1.read().is_01() || !p_shl326_cast_fu_16600_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl325_cast_fu_16588_p1.read()) - sc_biguint<14>(p_shl326_cast_fu_16600_p1.read()));
}

void ShuffleNetV2::thread_tmp_751_fu_16692_p3() {
    tmp_751_fu_16692_p3 = esl_concat<5,4>(co45_reg_9244.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_752_fu_16704_p3() {
    tmp_752_fu_16704_p3 = esl_concat<5,1>(co45_reg_9244.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_753_fu_16716_p2() {
    tmp_753_fu_16716_p2 = (!p_shl328_cast_fu_16712_p1.read().is_01() || !p_shl327_cast_fu_16700_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl328_cast_fu_16712_p1.read()) + sc_biguint<10>(p_shl327_cast_fu_16700_p1.read()));
}

void ShuffleNetV2::thread_tmp_754_fu_16811_p3() {
    tmp_754_fu_16811_p3 = esl_concat<5,4>(co46_reg_9277.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_755_fu_16823_p3() {
    tmp_755_fu_16823_p3 = esl_concat<5,1>(co46_reg_9277.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_756_fu_16835_p2() {
    tmp_756_fu_16835_p2 = (!p_shl332_cast_fu_16831_p1.read().is_01() || !p_shl331_cast_fu_16819_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl332_cast_fu_16831_p1.read()) + sc_biguint<10>(p_shl331_cast_fu_16819_p1.read()));
}

void ShuffleNetV2::thread_tmp_757_fu_16863_p3() {
    tmp_757_fu_16863_p3 = esl_concat<6,4>(tmp_155_fu_16857_p2.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_758_fu_16875_p3() {
    tmp_758_fu_16875_p3 = esl_concat<6,1>(tmp_155_fu_16857_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_759_fu_16887_p2() {
    tmp_759_fu_16887_p2 = (!p_shl334_cast_fu_16883_p1.read().is_01() || !p_shl333_cast_fu_16871_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl334_cast_fu_16883_p1.read()) + sc_biguint<11>(p_shl333_cast_fu_16871_p1.read()));
}

void ShuffleNetV2::thread_tmp_760_fu_16750_p2() {
    tmp_760_fu_16750_p2 = (!h_47_cast_cast_fu_16746_p1.read().is_01() || !tmp_753_reg_40725.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h_47_cast_cast_fu_16746_p1.read()) + sc_biguint<10>(tmp_753_reg_40725.read()));
}

void ShuffleNetV2::thread_tmp_761_fu_16779_p2() {
    tmp_761_fu_16779_p2 = (!p_shl329_cast_fu_16763_p1.read().is_01() || !p_shl330_cast_fu_16775_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl329_cast_fu_16763_p1.read()) + sc_biguint<15>(p_shl330_cast_fu_16775_p1.read()));
}

void ShuffleNetV2::thread_tmp_762_fu_17036_p3() {
    tmp_762_fu_17036_p3 = esl_concat<8,5>(sum18_fu_17030_p2.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_763_fu_17048_p3() {
    tmp_763_fu_17048_p3 = esl_concat<8,3>(sum18_fu_17030_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_764_fu_17060_p2() {
    tmp_764_fu_17060_p2 = (!p_shl339_cast_fu_17044_p1.read().is_01() || !p_shl340_cast_fu_17056_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl339_cast_fu_17044_p1.read()) - sc_biguint<14>(p_shl340_cast_fu_17056_p1.read()));
}

void ShuffleNetV2::thread_tmp_765_fu_16913_p2() {
    tmp_765_fu_16913_p2 = (!h_49_cast_cast_fu_16909_p1.read().is_01() || !tmp_756_reg_40769.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h_49_cast_cast_fu_16909_p1.read()) + sc_biguint<10>(tmp_756_reg_40769.read()));
}

void ShuffleNetV2::thread_tmp_766_fu_16938_p2() {
    tmp_766_fu_16938_p2 = (!p_shl337_cast_fu_16918_p3.read().is_01() || !p_shl338_cast_fu_16934_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl337_cast_fu_16918_p3.read()) + sc_biguint<14>(p_shl338_cast_fu_16934_p1.read()));
}

void ShuffleNetV2::thread_tmp_767_fu_16944_p2() {
    tmp_767_fu_16944_p2 = (!h_49_cast_cast1_fu_16905_p1.read().is_01() || !tmp_759_reg_40782.read().is_01())? sc_lv<11>(): (sc_biguint<11>(h_49_cast_cast1_fu_16905_p1.read()) + sc_biguint<11>(tmp_759_reg_40782.read()));
}

void ShuffleNetV2::thread_tmp_768_fu_16969_p2() {
    tmp_768_fu_16969_p2 = (!p_shl335_cast_fu_16949_p3.read().is_01() || !p_shl336_cast_fu_16965_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl335_cast_fu_16949_p3.read()) + sc_biguint<15>(p_shl336_cast_fu_16965_p1.read()));
}

void ShuffleNetV2::thread_tmp_769_fu_16801_p2() {
    tmp_769_fu_16801_p2 = (!tmp_761_reg_40746.read().is_01() || !w_47_cast_cast_fu_16797_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_761_reg_40746.read()) + sc_biguint<15>(w_47_cast_cast_fu_16797_p1.read()));
}

void ShuffleNetV2::thread_tmp_770_fu_16995_p2() {
    tmp_770_fu_16995_p2 = (!tmp_766_reg_40795.read().is_01() || !w_49_cast_cast_fu_16991_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_766_reg_40795.read()) + sc_biguint<14>(w_49_cast_cast_fu_16991_p1.read()));
}

void ShuffleNetV2::thread_tmp_771_fu_17000_p2() {
    tmp_771_fu_17000_p2 = (!tmp_768_reg_40800.read().is_01() || !w_49_cast_cast1_fu_16987_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_768_reg_40800.read()) + sc_biguint<15>(w_49_cast_cast1_fu_16987_p1.read()));
}

void ShuffleNetV2::thread_tmp_772_fu_17164_p3() {
    tmp_772_fu_17164_p3 = esl_concat<5,2>(co51_reg_9344.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_773_fu_17176_p2() {
    tmp_773_fu_17176_p2 = (!p_shl341_cast_fu_17172_p1.read().is_01() || !co51_cast_cast_fu_17160_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl341_cast_fu_17172_p1.read()) - sc_biguint<8>(co51_cast_cast_fu_17160_p1.read()));
}

void ShuffleNetV2::thread_tmp_774_fu_17214_p4() {
    tmp_774_fu_17214_p4 = esl_concat<6,2>(esl_concat<1,5>(ap_const_lv1_1, co51_reg_9344.read()), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_775_fu_17224_p1() {
    tmp_775_fu_17224_p1 = esl_sext<9,8>(tmp_774_fu_17214_p4.read());
}

void ShuffleNetV2::thread_tmp_776_fu_17232_p2() {
    tmp_776_fu_17232_p2 = (!p_shl342_cast_fu_17228_p1.read().is_01() || !sum15_cast_cast_fu_17210_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl342_cast_fu_17228_p1.read()) - sc_biguint<10>(sum15_cast_cast_fu_17210_p1.read()));
}

void ShuffleNetV2::thread_tmp_777_fu_17261_p2() {
    tmp_777_fu_17261_p2 = (!w50_cast_cast_fu_17257_p1.read().is_01() || !tmp_1866_cast_reg_40997.read().is_01())? sc_lv<11>(): (sc_biguint<11>(w50_cast_cast_fu_17257_p1.read()) + sc_bigint<11>(tmp_1866_cast_reg_40997.read()));
}

void ShuffleNetV2::thread_tmp_778_fu_17282_p2() {
    tmp_778_fu_17282_p2 = (!p_shl213_fu_17278_p1.read().is_01() || !tmp_1867_cast_fu_17266_p1.read().is_01())? sc_lv<32>(): (sc_bigint<32>(p_shl213_fu_17278_p1.read()) - sc_bigint<32>(tmp_1867_cast_fu_17266_p1.read()));
}

void ShuffleNetV2::thread_tmp_779_fu_17288_p2() {
    tmp_779_fu_17288_p2 = (!w50_cast_cast1_fu_17253_p1.read().is_01() || !tmp_1863_cast_reg_40984.read().is_01())? sc_lv<9>(): (sc_biguint<9>(w50_cast_cast1_fu_17253_p1.read()) + sc_bigint<9>(tmp_1863_cast_reg_40984.read()));
}

void ShuffleNetV2::thread_tmp_780_fu_17299_p2() {
    tmp_780_fu_17299_p2 = (!tmp_1945_fu_17293_p2.read().is_01() || !tmp_779_fu_17288_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_1945_fu_17293_p2.read()) - sc_biguint<9>(tmp_779_fu_17288_p2.read()));
}

void ShuffleNetV2::thread_tmp_781_fu_17332_p2() {
    tmp_781_fu_17332_p2 = (!tmp_780_reg_41008.read().is_01() || !h50_cast_cast_fu_17328_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_780_reg_41008.read()) + sc_biguint<9>(h50_cast_cast_fu_17328_p1.read()));
}

void ShuffleNetV2::thread_tmp_782_fu_17382_p4() {
    tmp_782_fu_17382_p4 = esl_concat<7,5>(esl_concat<2,5>(ap_const_lv2_2, co53_reg_9388.read()), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_783_fu_17392_p1() {
    tmp_783_fu_17392_p1 = esl_sext<13,12>(tmp_782_fu_17382_p4.read());
}

void ShuffleNetV2::thread_tmp_784_fu_17400_p4() {
    tmp_784_fu_17400_p4 = esl_concat<7,3>(esl_concat<2,5>(ap_const_lv2_2, co53_reg_9388.read()), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_785_fu_17410_p1() {
    tmp_785_fu_17410_p1 = esl_sext<11,10>(tmp_784_fu_17400_p4.read());
}

void ShuffleNetV2::thread_tmp_786_fu_17418_p2() {
    tmp_786_fu_17418_p2 = (!p_shl345_cast_fu_17396_p1.read().is_01() || !p_shl346_cast_fu_17414_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl345_cast_fu_17396_p1.read()) - sc_biguint<14>(p_shl346_cast_fu_17414_p1.read()));
}

void ShuffleNetV2::thread_tmp_787_fu_17506_p3() {
    tmp_787_fu_17506_p3 = esl_concat<5,4>(co55_reg_9422.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_788_fu_17518_p3() {
    tmp_788_fu_17518_p3 = esl_concat<5,1>(co55_reg_9422.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_789_fu_17530_p2() {
    tmp_789_fu_17530_p2 = (!p_shl348_cast_fu_17526_p1.read().is_01() || !p_shl347_cast_fu_17514_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl348_cast_fu_17526_p1.read()) + sc_biguint<10>(p_shl347_cast_fu_17514_p1.read()));
}

void ShuffleNetV2::thread_tmp_790_fu_17564_p2() {
    tmp_790_fu_17564_p2 = (!h_53_cast_cast_fu_17560_p1.read().is_01() || !tmp_789_reg_41214.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h_53_cast_cast_fu_17560_p1.read()) + sc_biguint<10>(tmp_789_reg_41214.read()));
}

void ShuffleNetV2::thread_tmp_791_fu_17593_p2() {
    tmp_791_fu_17593_p2 = (!p_shl349_cast_fu_17577_p1.read().is_01() || !p_shl350_cast_fu_17589_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl349_cast_fu_17577_p1.read()) + sc_biguint<15>(p_shl350_cast_fu_17589_p1.read()));
}

void ShuffleNetV2::thread_tmp_792_fu_17615_p2() {
    tmp_792_fu_17615_p2 = (!tmp_791_reg_41235.read().is_01() || !w_53_cast_cast_fu_17611_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_791_reg_41235.read()) + sc_biguint<15>(w_53_cast_cast_fu_17611_p1.read()));
}

void ShuffleNetV2::thread_tmp_793_fu_17827_p3() {
    tmp_793_fu_17827_p3 = esl_concat<9,5>(sum24_reg_41313.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_794_fu_17838_p3() {
    tmp_794_fu_17838_p3 = esl_concat<9,3>(sum24_reg_41313.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_795_fu_17849_p2() {
    tmp_795_fu_17849_p2 = (!p_shl353_cast_fu_17834_p1.read().is_01() || !p_shl354_cast_fu_17845_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl353_cast_fu_17834_p1.read()) - sc_biguint<15>(p_shl354_cast_fu_17845_p1.read()));
}

void ShuffleNetV2::thread_tmp_796_fu_17859_p2() {
    tmp_796_fu_17859_p2 = (!ci28_cast1_cast_reg_41281.read().is_01() || !tmp_1899_cast_fu_17855_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(ci28_cast1_cast_reg_41281.read()) + sc_bigint<16>(tmp_1899_cast_fu_17855_p1.read()));
}

void ShuffleNetV2::thread_tmp_797_fu_17915_p2() {
    tmp_797_fu_17915_p2 = (!p_shl351_cast_fu_17901_p3.read().is_01() || !p_shl352_cast_fu_17908_p3.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl351_cast_fu_17901_p3.read()) - sc_biguint<8>(p_shl352_cast_fu_17908_p3.read()));
}

void ShuffleNetV2::thread_tmp_798_fu_17921_p2() {
    tmp_798_fu_17921_p2 = (!tmp_162_cast_cast_reg_41294.read().is_01() || !tmp_797_fu_17915_p2.read().is_01())? sc_lv<8>(): (sc_bigint<8>(tmp_162_cast_cast_reg_41294.read()) + sc_biguint<8>(tmp_797_fu_17915_p2.read()));
}

void ShuffleNetV2::thread_tmp_799_fu_18180_p3() {
    tmp_799_fu_18180_p3 = esl_concat<7,2>(tmp_174_fu_18171_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_800_fu_18192_p2() {
    tmp_800_fu_18192_p2 = (!p_shl358_cast_fu_18188_p1.read().is_01() || !tmp_174_cast_cast_fu_18176_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(p_shl358_cast_fu_18188_p1.read()) - sc_bigint<10>(tmp_174_cast_cast_fu_18176_p1.read()));
}

void ShuffleNetV2::thread_tmp_801_fu_18198_p2() {
    tmp_801_fu_18198_p2 = (!w54_cast_cast_reg_41408.read().is_01() || !tmp_800_fu_18192_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(w54_cast_cast_reg_41408.read()) + sc_biguint<10>(tmp_800_fu_18192_p2.read()));
}

void ShuffleNetV2::thread_tmp_802_fu_18219_p2() {
    tmp_802_fu_18219_p2 = (!tmp_1988_fu_18214_p2.read().is_01() || !tmp_801_reg_41447.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_1988_fu_18214_p2.read()) - sc_biguint<10>(tmp_801_reg_41447.read()));
}

void ShuffleNetV2::thread_tmp_803_fu_18224_p2() {
    tmp_803_fu_18224_p2 = (!h54_cast_cast_reg_41426.read().is_01() || !tmp_802_fu_18219_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h54_cast_cast_reg_41426.read()) + sc_biguint<10>(tmp_802_fu_18219_p2.read()));
}

void ShuffleNetV2::thread_tmp_804_fu_18232_p3() {
    tmp_804_fu_18232_p3 = esl_concat<8,2>(sum17_reg_41453.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_805_fu_18243_p2() {
    tmp_805_fu_18243_p2 = (!p_shl356_cast_fu_18239_p1.read().is_01() || !sum17_cast_cast_fu_18229_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl356_cast_fu_18239_p1.read()) - sc_biguint<11>(sum17_cast_cast_fu_18229_p1.read()));
}

void ShuffleNetV2::thread_tmp_806_fu_18253_p2() {
    tmp_806_fu_18253_p2 = (!w54_cast_cast1_reg_41403.read().is_01() || !tmp_1920_cast_fu_18249_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(w54_cast_cast1_reg_41403.read()) + sc_bigint<12>(tmp_1920_cast_fu_18249_p1.read()));
}

void ShuffleNetV2::thread_tmp_807_fu_18272_p2() {
    tmp_807_fu_18272_p2 = (!p_shl219_fu_18268_p1.read().is_01() || !tmp_1921_cast_fu_18258_p1.read().is_01())? sc_lv<32>(): (sc_bigint<32>(p_shl219_fu_18268_p1.read()) - sc_bigint<32>(tmp_1921_cast_fu_18258_p1.read()));
}

void ShuffleNetV2::thread_tmp_808_fu_18278_p2() {
    tmp_808_fu_18278_p2 = (!h54_cast_reg_41421.read().is_01() || !tmp_807_fu_18272_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(h54_cast_reg_41421.read()) + sc_biguint<32>(tmp_807_fu_18272_p2.read()));
}

void ShuffleNetV2::thread_tmp_809_fu_18608_p3() {
    tmp_809_fu_18608_p3 = esl_concat<9,5>(sum30_reg_41573.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_810_fu_18619_p3() {
    tmp_810_fu_18619_p3 = esl_concat<9,3>(sum30_reg_41573.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_811_fu_18630_p2() {
    tmp_811_fu_18630_p2 = (!p_shl361_cast_fu_18615_p1.read().is_01() || !p_shl362_cast_fu_18626_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl361_cast_fu_18615_p1.read()) - sc_biguint<15>(p_shl362_cast_fu_18626_p1.read()));
}

void ShuffleNetV2::thread_tmp_812_fu_18640_p2() {
    tmp_812_fu_18640_p2 = (!ci30_cast1_cast_reg_41541.read().is_01() || !tmp_1933_cast_fu_18636_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(ci30_cast1_cast_reg_41541.read()) + sc_bigint<16>(tmp_1933_cast_fu_18636_p1.read()));
}

void ShuffleNetV2::thread_tmp_813_fu_18696_p2() {
    tmp_813_fu_18696_p2 = (!p_shl359_cast_fu_18682_p3.read().is_01() || !p_shl360_cast_fu_18689_p3.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl359_cast_fu_18682_p3.read()) - sc_biguint<8>(p_shl360_cast_fu_18689_p3.read()));
}

void ShuffleNetV2::thread_tmp_814_fu_18702_p2() {
    tmp_814_fu_18702_p2 = (!tmp_179_cast_cast_reg_41554.read().is_01() || !tmp_813_fu_18696_p2.read().is_01())? sc_lv<8>(): (sc_bigint<8>(tmp_179_cast_cast_reg_41554.read()) + sc_biguint<8>(tmp_813_fu_18696_p2.read()));
}

void ShuffleNetV2::thread_tmp_815_fu_18965_p3() {
    tmp_815_fu_18965_p3 = esl_concat<7,2>(tmp_191_fu_18956_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_816_fu_18977_p2() {
    tmp_816_fu_18977_p2 = (!p_shl363_cast_fu_18973_p1.read().is_01() || !tmp_191_cast_cast_fu_18961_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(p_shl363_cast_fu_18973_p1.read()) - sc_bigint<10>(tmp_191_cast_cast_fu_18961_p1.read()));
}

void ShuffleNetV2::thread_tmp_817_fu_18983_p2() {
    tmp_817_fu_18983_p2 = (!w56_cast_cast_reg_41668.read().is_01() || !tmp_816_fu_18977_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(w56_cast_cast_reg_41668.read()) + sc_biguint<10>(tmp_816_fu_18977_p2.read()));
}

void ShuffleNetV2::thread_tmp_818_fu_19004_p2() {
    tmp_818_fu_19004_p2 = (!tmp_2006_fu_18999_p2.read().is_01() || !tmp_817_reg_41707.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_2006_fu_18999_p2.read()) - sc_biguint<10>(tmp_817_reg_41707.read()));
}

void ShuffleNetV2::thread_tmp_819_fu_19009_p2() {
    tmp_819_fu_19009_p2 = (!h56_cast_cast_reg_41686.read().is_01() || !tmp_818_fu_19004_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h56_cast_cast_reg_41686.read()) + sc_biguint<10>(tmp_818_fu_19004_p2.read()));
}

void ShuffleNetV2::thread_tmp_820_fu_19017_p3() {
    tmp_820_fu_19017_p3 = esl_concat<8,2>(sum19_reg_41713.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_821_fu_19028_p2() {
    tmp_821_fu_19028_p2 = (!p_shl365_cast_fu_19024_p1.read().is_01() || !sum19_cast_cast_fu_19014_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl365_cast_fu_19024_p1.read()) - sc_biguint<11>(sum19_cast_cast_fu_19014_p1.read()));
}

void ShuffleNetV2::thread_tmp_822_fu_19034_p2() {
    tmp_822_fu_19034_p2 = (!w56_cast_cast1_reg_41663.read().is_01() || !tmp_821_fu_19028_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(w56_cast_cast1_reg_41663.read()) + sc_biguint<11>(tmp_821_fu_19028_p2.read()));
}

void ShuffleNetV2::thread_tmp_823_fu_19053_p2() {
    tmp_823_fu_19053_p2 = (!p_shl221_fu_19049_p1.read().is_01() || !tmp_1955_cast_fu_19039_p1.read().is_01())? sc_lv<32>(): (sc_bigint<32>(p_shl221_fu_19049_p1.read()) - sc_bigint<32>(tmp_1955_cast_fu_19039_p1.read()));
}

void ShuffleNetV2::thread_tmp_824_fu_19059_p2() {
    tmp_824_fu_19059_p2 = (!h56_cast_reg_41681.read().is_01() || !tmp_823_fu_19053_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(h56_cast_reg_41681.read()) + sc_biguint<32>(tmp_823_fu_19053_p2.read()));
}

void ShuffleNetV2::thread_tmp_825_fu_19623_p3() {
    tmp_825_fu_19623_p3 = esl_concat<6,3>(co66_reg_9752.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_826_fu_19635_p3() {
    tmp_826_fu_19635_p3 = esl_concat<6,1>(co66_reg_9752.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_827_fu_19647_p2() {
    tmp_827_fu_19647_p2 = (!p_shl368_cast_fu_19643_p1.read().is_01() || !p_shl367_cast_fu_19631_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl368_cast_fu_19643_p1.read()) + sc_biguint<10>(p_shl367_cast_fu_19631_p1.read()));
}

void ShuffleNetV2::thread_tmp_828_fu_19675_p3() {
    tmp_828_fu_19675_p3 = esl_concat<7,3>(tmp_192_fu_19669_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_829_fu_19687_p3() {
    tmp_829_fu_19687_p3 = esl_concat<7,1>(tmp_192_fu_19669_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_830_fu_19699_p2() {
    tmp_830_fu_19699_p2 = (!p_shl372_cast_fu_19695_p1.read().is_01() || !p_shl369_cast_fu_19683_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl372_cast_fu_19695_p1.read()) + sc_biguint<11>(p_shl369_cast_fu_19683_p1.read()));
}

void ShuffleNetV2::thread_tmp_831_fu_19389_p3() {
    tmp_831_fu_19389_p3 = esl_concat<10,5>(sum36_reg_41833.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_832_fu_19400_p3() {
    tmp_832_fu_19400_p3 = esl_concat<10,3>(sum36_reg_41833.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_833_fu_19411_p2() {
    tmp_833_fu_19411_p2 = (!p_shl373_cast_fu_19396_p1.read().is_01() || !p_shl374_cast_fu_19407_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(p_shl373_cast_fu_19396_p1.read()) - sc_biguint<16>(p_shl374_cast_fu_19407_p1.read()));
}

void ShuffleNetV2::thread_tmp_834_fu_19421_p2() {
    tmp_834_fu_19421_p2 = (!ci32_cast1_cast_reg_41801.read().is_01() || !tmp_1973_cast_fu_19417_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(ci32_cast1_cast_reg_41801.read()) + sc_bigint<17>(tmp_1973_cast_fu_19417_p1.read()));
}

void ShuffleNetV2::thread_tmp_835_fu_19477_p2() {
    tmp_835_fu_19477_p2 = (!p_shl370_cast_fu_19463_p3.read().is_01() || !p_shl371_cast_fu_19470_p3.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl370_cast_fu_19463_p3.read()) - sc_biguint<8>(p_shl371_cast_fu_19470_p3.read()));
}

void ShuffleNetV2::thread_tmp_836_fu_19483_p2() {
    tmp_836_fu_19483_p2 = (!tmp_196_cast_cast_reg_41814.read().is_01() || !tmp_835_fu_19477_p2.read().is_01())? sc_lv<8>(): (sc_bigint<8>(tmp_196_cast_cast_reg_41814.read()) + sc_biguint<8>(tmp_835_fu_19477_p2.read()));
}

void ShuffleNetV2::thread_tmp_837_fu_19725_p2() {
    tmp_837_fu_19725_p2 = (!h_59_cast_cast_fu_19721_p1.read().is_01() || !tmp_827_reg_41905.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h_59_cast_cast_fu_19721_p1.read()) + sc_biguint<10>(tmp_827_reg_41905.read()));
}

void ShuffleNetV2::thread_tmp_838_fu_19754_p2() {
    tmp_838_fu_19754_p2 = (!p_shl375_cast_fu_19738_p1.read().is_01() || !p_shl376_cast_fu_19750_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl375_cast_fu_19738_p1.read()) + sc_biguint<14>(p_shl376_cast_fu_19750_p1.read()));
}

void ShuffleNetV2::thread_tmp_839_fu_19760_p2() {
    tmp_839_fu_19760_p2 = (!h_59_cast_cast1_fu_19717_p1.read().is_01() || !tmp_830_reg_41918.read().is_01())? sc_lv<11>(): (sc_biguint<11>(h_59_cast_cast1_fu_19717_p1.read()) + sc_biguint<11>(tmp_830_reg_41918.read()));
}

void ShuffleNetV2::thread_tmp_840_fu_19789_p2() {
    tmp_840_fu_19789_p2 = (!p_shl377_cast_fu_19773_p1.read().is_01() || !p_shl378_cast_fu_19785_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl377_cast_fu_19773_p1.read()) + sc_biguint<15>(p_shl378_cast_fu_19785_p1.read()));
}

void ShuffleNetV2::thread_tmp_841_fu_19815_p2() {
    tmp_841_fu_19815_p2 = (!tmp_838_reg_41931.read().is_01() || !w_59_cast_cast_fu_19811_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_838_reg_41931.read()) + sc_biguint<14>(w_59_cast_cast_fu_19811_p1.read()));
}

void ShuffleNetV2::thread_tmp_842_fu_19820_p2() {
    tmp_842_fu_19820_p2 = (!tmp_840_reg_41936.read().is_01() || !w_59_cast_cast1_fu_19807_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_840_reg_41936.read()) + sc_biguint<15>(w_59_cast_cast1_fu_19807_p1.read()));
}

void ShuffleNetV2::thread_tmp_843_fu_20036_p3() {
    tmp_843_fu_20036_p3 = esl_concat<10,5>(sum40_reg_42014.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_844_fu_20047_p3() {
    tmp_844_fu_20047_p3 = esl_concat<10,3>(sum40_reg_42014.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_845_fu_20058_p2() {
    tmp_845_fu_20058_p2 = (!p_shl379_cast_fu_20043_p1.read().is_01() || !p_shl380_cast_fu_20054_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(p_shl379_cast_fu_20043_p1.read()) - sc_biguint<16>(p_shl380_cast_fu_20054_p1.read()));
}

void ShuffleNetV2::thread_tmp_846_fu_20068_p2() {
    tmp_846_fu_20068_p2 = (!ci34_cast1_cast_reg_41982.read().is_01() || !tmp_2001_cast_fu_20064_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(ci34_cast1_cast_reg_41982.read()) + sc_bigint<17>(tmp_2001_cast_fu_20064_p1.read()));
}

void ShuffleNetV2::thread_tmp_847_fu_20124_p2() {
    tmp_847_fu_20124_p2 = (!p_shl381_cast_fu_20110_p3.read().is_01() || !p_shl382_cast_fu_20117_p3.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl381_cast_fu_20110_p3.read()) - sc_biguint<8>(p_shl382_cast_fu_20117_p3.read()));
}

void ShuffleNetV2::thread_tmp_848_fu_20130_p2() {
    tmp_848_fu_20130_p2 = (!tmp_208_cast_cast_reg_41995.read().is_01() || !tmp_847_fu_20124_p2.read().is_01())? sc_lv<8>(): (sc_bigint<8>(tmp_208_cast_cast_reg_41995.read()) + sc_biguint<8>(tmp_847_fu_20124_p2.read()));
}

void ShuffleNetV2::thread_tmp_849_fu_20385_p3() {
    tmp_849_fu_20385_p3 = esl_concat<7,2>(tmp_210_fu_20376_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_850_fu_20397_p2() {
    tmp_850_fu_20397_p2 = (!p_shl383_cast_fu_20393_p1.read().is_01() || !tmp_220_cast_cast_fu_20381_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(p_shl383_cast_fu_20393_p1.read()) - sc_bigint<10>(tmp_220_cast_cast_fu_20381_p1.read()));
}

void ShuffleNetV2::thread_tmp_851_fu_20403_p2() {
    tmp_851_fu_20403_p2 = (!w60_cast_cast_reg_42109.read().is_01() || !tmp_850_fu_20397_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(w60_cast_cast_reg_42109.read()) + sc_biguint<10>(tmp_850_fu_20397_p2.read()));
}

void ShuffleNetV2::thread_tmp_852_fu_20432_p2() {
    tmp_852_fu_20432_p2 = (!tmp_2057_fu_20427_p2.read().is_01() || !tmp_851_reg_42148.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_2057_fu_20427_p2.read()) - sc_biguint<10>(tmp_851_reg_42148.read()));
}

void ShuffleNetV2::thread_tmp_853_fu_20437_p2() {
    tmp_853_fu_20437_p2 = (!h60_cast_cast_reg_42127.read().is_01() || !tmp_852_fu_20432_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h60_cast_cast_reg_42127.read()) + sc_biguint<10>(tmp_852_fu_20432_p2.read()));
}

void ShuffleNetV2::thread_tmp_854_fu_20445_p3() {
    tmp_854_fu_20445_p3 = esl_concat<9,2>(sum21_reg_42154.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_855_fu_20456_p2() {
    tmp_855_fu_20456_p2 = (!p_shl385_cast_fu_20452_p1.read().is_01() || !sum21_cast_cast_fu_20442_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(p_shl385_cast_fu_20452_p1.read()) - sc_biguint<12>(sum21_cast_cast_fu_20442_p1.read()));
}

void ShuffleNetV2::thread_tmp_856_fu_20466_p2() {
    tmp_856_fu_20466_p2 = (!w60_cast_cast1_reg_42104.read().is_01() || !tmp_2022_cast_fu_20462_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(w60_cast_cast1_reg_42104.read()) + sc_bigint<13>(tmp_2022_cast_fu_20462_p1.read()));
}

void ShuffleNetV2::thread_tmp_857_fu_20485_p2() {
    tmp_857_fu_20485_p2 = (!p_shl226_fu_20481_p1.read().is_01() || !tmp_2023_cast_fu_20471_p1.read().is_01())? sc_lv<32>(): (sc_bigint<32>(p_shl226_fu_20481_p1.read()) - sc_bigint<32>(tmp_2023_cast_fu_20471_p1.read()));
}

void ShuffleNetV2::thread_tmp_858_fu_20491_p2() {
    tmp_858_fu_20491_p2 = (!h60_cast_reg_42122.read().is_01() || !tmp_857_fu_20485_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(h60_cast_reg_42122.read()) + sc_biguint<32>(tmp_857_fu_20485_p2.read()));
}

void ShuffleNetV2::thread_tmp_859_fu_21051_p3() {
    tmp_859_fu_21051_p3 = esl_concat<6,3>(co73_reg_9961.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_860_fu_21063_p3() {
    tmp_860_fu_21063_p3 = esl_concat<6,1>(co73_reg_9961.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_861_fu_21075_p2() {
    tmp_861_fu_21075_p2 = (!p_shl388_cast_fu_21071_p1.read().is_01() || !p_shl387_cast_fu_21059_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl388_cast_fu_21071_p1.read()) + sc_biguint<10>(p_shl387_cast_fu_21059_p1.read()));
}

void ShuffleNetV2::thread_tmp_862_fu_20817_p3() {
    tmp_862_fu_20817_p3 = esl_concat<10,5>(sum46_reg_42274.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_863_fu_20828_p3() {
    tmp_863_fu_20828_p3 = esl_concat<10,3>(sum46_reg_42274.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_864_fu_20839_p2() {
    tmp_864_fu_20839_p2 = (!p_shl389_cast_fu_20824_p1.read().is_01() || !p_shl390_cast_fu_20835_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(p_shl389_cast_fu_20824_p1.read()) - sc_biguint<16>(p_shl390_cast_fu_20835_p1.read()));
}

void ShuffleNetV2::thread_tmp_865_fu_20849_p2() {
    tmp_865_fu_20849_p2 = (!ci36_cast1_cast_reg_42242.read().is_01() || !tmp_2038_cast_fu_20845_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(ci36_cast1_cast_reg_42242.read()) + sc_bigint<17>(tmp_2038_cast_fu_20845_p1.read()));
}

void ShuffleNetV2::thread_tmp_866_fu_20905_p2() {
    tmp_866_fu_20905_p2 = (!p_shl391_cast_fu_20891_p3.read().is_01() || !p_shl392_cast_fu_20898_p3.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl391_cast_fu_20891_p3.read()) - sc_biguint<8>(p_shl392_cast_fu_20898_p3.read()));
}

void ShuffleNetV2::thread_tmp_867_fu_20911_p2() {
    tmp_867_fu_20911_p2 = (!tmp_225_cast_cast_reg_42255.read().is_01() || !tmp_866_fu_20905_p2.read().is_01())? sc_lv<8>(): (sc_bigint<8>(tmp_225_cast_cast_reg_42255.read()) + sc_biguint<8>(tmp_866_fu_20905_p2.read()));
}

void ShuffleNetV2::thread_tmp_868_fu_21170_p3() {
    tmp_868_fu_21170_p3 = esl_concat<6,3>(co75_reg_9994.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_869_fu_21182_p3() {
    tmp_869_fu_21182_p3 = esl_concat<6,1>(co75_reg_9994.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_870_fu_21194_p2() {
    tmp_870_fu_21194_p2 = (!p_shl394_cast_fu_21190_p1.read().is_01() || !p_shl393_cast_fu_21178_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl394_cast_fu_21190_p1.read()) + sc_biguint<10>(p_shl393_cast_fu_21178_p1.read()));
}

void ShuffleNetV2::thread_tmp_871_fu_21222_p3() {
    tmp_871_fu_21222_p3 = esl_concat<7,3>(tmp_216_fu_21216_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_872_fu_21234_p3() {
    tmp_872_fu_21234_p3 = esl_concat<7,1>(tmp_216_fu_21216_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_873_fu_21246_p2() {
    tmp_873_fu_21246_p2 = (!p_shl396_cast_fu_21242_p1.read().is_01() || !p_shl395_cast_fu_21230_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl396_cast_fu_21242_p1.read()) + sc_biguint<11>(p_shl395_cast_fu_21230_p1.read()));
}

void ShuffleNetV2::thread_tmp_874_fu_21109_p2() {
    tmp_874_fu_21109_p2 = (!h_63_cast_cast_fu_21105_p1.read().is_01() || !tmp_861_reg_42346.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h_63_cast_cast_fu_21105_p1.read()) + sc_biguint<10>(tmp_861_reg_42346.read()));
}

void ShuffleNetV2::thread_tmp_875_fu_21138_p2() {
    tmp_875_fu_21138_p2 = (!p_shl397_cast_fu_21122_p1.read().is_01() || !p_shl398_cast_fu_21134_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl397_cast_fu_21122_p1.read()) + sc_biguint<15>(p_shl398_cast_fu_21134_p1.read()));
}

void ShuffleNetV2::thread_tmp_876_fu_21272_p2() {
    tmp_876_fu_21272_p2 = (!h_65_cast_cast_fu_21268_p1.read().is_01() || !tmp_870_reg_42390.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h_65_cast_cast_fu_21268_p1.read()) + sc_biguint<10>(tmp_870_reg_42390.read()));
}

void ShuffleNetV2::thread_tmp_877_fu_21301_p2() {
    tmp_877_fu_21301_p2 = (!p_shl399_cast_fu_21285_p1.read().is_01() || !p_shl400_cast_fu_21297_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl399_cast_fu_21285_p1.read()) + sc_biguint<14>(p_shl400_cast_fu_21297_p1.read()));
}

void ShuffleNetV2::thread_tmp_878_fu_21307_p2() {
    tmp_878_fu_21307_p2 = (!h_65_cast_cast1_fu_21264_p1.read().is_01() || !tmp_873_reg_42403.read().is_01())? sc_lv<11>(): (sc_biguint<11>(h_65_cast_cast1_fu_21264_p1.read()) + sc_biguint<11>(tmp_873_reg_42403.read()));
}

void ShuffleNetV2::thread_tmp_879_fu_21336_p2() {
    tmp_879_fu_21336_p2 = (!p_shl401_cast_fu_21320_p1.read().is_01() || !p_shl402_cast_fu_21332_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl401_cast_fu_21320_p1.read()) + sc_biguint<15>(p_shl402_cast_fu_21332_p1.read()));
}

void ShuffleNetV2::thread_tmp_880_fu_21160_p2() {
    tmp_880_fu_21160_p2 = (!tmp_875_reg_42367.read().is_01() || !w_63_cast_cast_fu_21156_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_875_reg_42367.read()) + sc_biguint<15>(w_63_cast_cast_fu_21156_p1.read()));
}

void ShuffleNetV2::thread_tmp_881_fu_21362_p2() {
    tmp_881_fu_21362_p2 = (!tmp_877_reg_42416.read().is_01() || !w_65_cast_cast_fu_21358_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_877_reg_42416.read()) + sc_biguint<14>(w_65_cast_cast_fu_21358_p1.read()));
}

void ShuffleNetV2::thread_tmp_882_fu_21367_p2() {
    tmp_882_fu_21367_p2 = (!tmp_879_reg_42421.read().is_01() || !w_65_cast_cast1_fu_21354_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_879_reg_42421.read()) + sc_biguint<15>(w_65_cast_cast1_fu_21354_p1.read()));
}

void ShuffleNetV2::thread_tmp_883_fu_21583_p3() {
    tmp_883_fu_21583_p3 = esl_concat<10,5>(sum48_reg_42499.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_884_fu_21594_p3() {
    tmp_884_fu_21594_p3 = esl_concat<10,3>(sum48_reg_42499.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_885_fu_21605_p2() {
    tmp_885_fu_21605_p2 = (!p_shl403_cast_fu_21590_p1.read().is_01() || !p_shl404_cast_fu_21601_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(p_shl403_cast_fu_21590_p1.read()) - sc_biguint<16>(p_shl404_cast_fu_21601_p1.read()));
}

void ShuffleNetV2::thread_tmp_886_fu_21615_p2() {
    tmp_886_fu_21615_p2 = (!ci38_cast1_cast_reg_42467.read().is_01() || !tmp_2077_cast_fu_21611_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(ci38_cast1_cast_reg_42467.read()) + sc_bigint<17>(tmp_2077_cast_fu_21611_p1.read()));
}

void ShuffleNetV2::thread_tmp_887_fu_21671_p2() {
    tmp_887_fu_21671_p2 = (!p_shl405_cast_fu_21657_p3.read().is_01() || !p_shl406_cast_fu_21664_p3.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl405_cast_fu_21657_p3.read()) - sc_biguint<8>(p_shl406_cast_fu_21664_p3.read()));
}

void ShuffleNetV2::thread_tmp_888_fu_21677_p2() {
    tmp_888_fu_21677_p2 = (!tmp_237_cast_cast_reg_42480.read().is_01() || !tmp_887_fu_21671_p2.read().is_01())? sc_lv<8>(): (sc_bigint<8>(tmp_237_cast_cast_reg_42480.read()) + sc_biguint<8>(tmp_887_fu_21671_p2.read()));
}

void ShuffleNetV2::thread_tmp_889_fu_21936_p3() {
    tmp_889_fu_21936_p3 = esl_concat<7,2>(tmp_229_fu_21927_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_890_fu_21948_p2() {
    tmp_890_fu_21948_p2 = (!p_shl407_cast_fu_21944_p1.read().is_01() || !tmp_249_cast_cast_fu_21932_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(p_shl407_cast_fu_21944_p1.read()) - sc_bigint<10>(tmp_249_cast_cast_fu_21932_p1.read()));
}

void ShuffleNetV2::thread_tmp_891_fu_21954_p2() {
    tmp_891_fu_21954_p2 = (!w66_cast_cast_reg_42594.read().is_01() || !tmp_890_fu_21948_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(w66_cast_cast_reg_42594.read()) + sc_biguint<10>(tmp_890_fu_21948_p2.read()));
}

void ShuffleNetV2::thread_tmp_892_fu_21975_p2() {
    tmp_892_fu_21975_p2 = (!tmp_2107_fu_21970_p2.read().is_01() || !tmp_891_reg_42633.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_2107_fu_21970_p2.read()) - sc_biguint<10>(tmp_891_reg_42633.read()));
}

void ShuffleNetV2::thread_tmp_893_fu_21980_p2() {
    tmp_893_fu_21980_p2 = (!h66_cast_cast_reg_42612.read().is_01() || !tmp_892_fu_21975_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h66_cast_cast_reg_42612.read()) + sc_biguint<10>(tmp_892_fu_21975_p2.read()));
}

void ShuffleNetV2::thread_tmp_894_fu_21988_p3() {
    tmp_894_fu_21988_p3 = esl_concat<9,2>(sum23_reg_42639.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_895_fu_21999_p2() {
    tmp_895_fu_21999_p2 = (!p_shl409_cast_fu_21995_p1.read().is_01() || !sum23_cast_cast_fu_21985_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(p_shl409_cast_fu_21995_p1.read()) - sc_biguint<12>(sum23_cast_cast_fu_21985_p1.read()));
}

void ShuffleNetV2::thread_tmp_896_fu_22009_p2() {
    tmp_896_fu_22009_p2 = (!w66_cast_cast1_reg_42589.read().is_01() || !tmp_2098_cast_fu_22005_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(w66_cast_cast1_reg_42589.read()) + sc_bigint<13>(tmp_2098_cast_fu_22005_p1.read()));
}

void ShuffleNetV2::thread_tmp_897_fu_22028_p2() {
    tmp_897_fu_22028_p2 = (!p_shl231_fu_22024_p1.read().is_01() || !tmp_2099_cast_fu_22014_p1.read().is_01())? sc_lv<32>(): (sc_bigint<32>(p_shl231_fu_22024_p1.read()) - sc_bigint<32>(tmp_2099_cast_fu_22014_p1.read()));
}

void ShuffleNetV2::thread_tmp_898_fu_22034_p2() {
    tmp_898_fu_22034_p2 = (!h66_cast_reg_42607.read().is_01() || !tmp_897_fu_22028_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(h66_cast_reg_42607.read()) + sc_biguint<32>(tmp_897_fu_22028_p2.read()));
}

void ShuffleNetV2::thread_tmp_899_fu_22602_p3() {
    tmp_899_fu_22602_p3 = esl_concat<6,3>(co83_reg_10203.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_900_fu_22614_p3() {
    tmp_900_fu_22614_p3 = esl_concat<6,1>(co83_reg_10203.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_901_fu_22626_p2() {
    tmp_901_fu_22626_p2 = (!p_shl412_cast_fu_22622_p1.read().is_01() || !p_shl411_cast_fu_22610_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl412_cast_fu_22622_p1.read()) + sc_biguint<10>(p_shl411_cast_fu_22610_p1.read()));
}

void ShuffleNetV2::thread_tmp_902_fu_22364_p3() {
    tmp_902_fu_22364_p3 = esl_concat<10,5>(sum51_reg_42759.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_903_fu_22375_p3() {
    tmp_903_fu_22375_p3 = esl_concat<10,3>(sum51_reg_42759.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_904_fu_22386_p2() {
    tmp_904_fu_22386_p2 = (!p_shl413_cast_fu_22371_p1.read().is_01() || !p_shl414_cast_fu_22382_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(p_shl413_cast_fu_22371_p1.read()) - sc_biguint<16>(p_shl414_cast_fu_22382_p1.read()));
}

void ShuffleNetV2::thread_tmp_905_fu_22396_p2() {
    tmp_905_fu_22396_p2 = (!ci40_cast1_cast_reg_42727.read().is_01() || !tmp_2114_cast_fu_22392_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(ci40_cast1_cast_reg_42727.read()) + sc_bigint<17>(tmp_2114_cast_fu_22392_p1.read()));
}

void ShuffleNetV2::thread_tmp_906_fu_22452_p2() {
    tmp_906_fu_22452_p2 = (!p_shl415_cast_fu_22438_p3.read().is_01() || !p_shl416_cast_fu_22445_p3.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl415_cast_fu_22438_p3.read()) - sc_biguint<8>(p_shl416_cast_fu_22445_p3.read()));
}

void ShuffleNetV2::thread_tmp_907_fu_22458_p2() {
    tmp_907_fu_22458_p2 = (!tmp_254_cast_cast_reg_42740.read().is_01() || !tmp_906_fu_22452_p2.read().is_01())? sc_lv<8>(): (sc_bigint<8>(tmp_254_cast_cast_reg_42740.read()) + sc_biguint<8>(tmp_906_fu_22452_p2.read()));
}

void ShuffleNetV2::thread_tmp_908_fu_22721_p3() {
    tmp_908_fu_22721_p3 = esl_concat<6,3>(co85_reg_10236.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_909_fu_22733_p3() {
    tmp_909_fu_22733_p3 = esl_concat<6,1>(co85_reg_10236.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_910_fu_22745_p2() {
    tmp_910_fu_22745_p2 = (!p_shl418_cast_fu_22741_p1.read().is_01() || !p_shl417_cast_fu_22729_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl418_cast_fu_22741_p1.read()) + sc_biguint<10>(p_shl417_cast_fu_22729_p1.read()));
}

void ShuffleNetV2::thread_tmp_911_fu_22773_p3() {
    tmp_911_fu_22773_p3 = esl_concat<7,3>(tmp_235_fu_22767_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_912_fu_22785_p3() {
    tmp_912_fu_22785_p3 = esl_concat<7,1>(tmp_235_fu_22767_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_913_fu_22797_p2() {
    tmp_913_fu_22797_p2 = (!p_shl420_cast_fu_22793_p1.read().is_01() || !p_shl419_cast_fu_22781_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl420_cast_fu_22793_p1.read()) + sc_biguint<11>(p_shl419_cast_fu_22781_p1.read()));
}

void ShuffleNetV2::thread_tmp_914_fu_22660_p2() {
    tmp_914_fu_22660_p2 = (!h_69_cast_cast_fu_22656_p1.read().is_01() || !tmp_901_reg_42831.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h_69_cast_cast_fu_22656_p1.read()) + sc_biguint<10>(tmp_901_reg_42831.read()));
}

void ShuffleNetV2::thread_tmp_915_fu_22689_p2() {
    tmp_915_fu_22689_p2 = (!p_shl421_cast_fu_22673_p1.read().is_01() || !p_shl422_cast_fu_22685_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl421_cast_fu_22673_p1.read()) + sc_biguint<15>(p_shl422_cast_fu_22685_p1.read()));
}

void ShuffleNetV2::thread_tmp_916_fu_22823_p2() {
    tmp_916_fu_22823_p2 = (!h_71_cast_cast_fu_22819_p1.read().is_01() || !tmp_910_reg_42875.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h_71_cast_cast_fu_22819_p1.read()) + sc_biguint<10>(tmp_910_reg_42875.read()));
}

void ShuffleNetV2::thread_tmp_917_fu_22852_p2() {
    tmp_917_fu_22852_p2 = (!p_shl423_cast_fu_22836_p1.read().is_01() || !p_shl424_cast_fu_22848_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl423_cast_fu_22836_p1.read()) + sc_biguint<14>(p_shl424_cast_fu_22848_p1.read()));
}

void ShuffleNetV2::thread_tmp_918_fu_22858_p2() {
    tmp_918_fu_22858_p2 = (!h_71_cast_cast1_fu_22815_p1.read().is_01() || !tmp_913_reg_42888.read().is_01())? sc_lv<11>(): (sc_biguint<11>(h_71_cast_cast1_fu_22815_p1.read()) + sc_biguint<11>(tmp_913_reg_42888.read()));
}

void ShuffleNetV2::thread_tmp_919_fu_22887_p2() {
    tmp_919_fu_22887_p2 = (!p_shl425_cast_fu_22871_p1.read().is_01() || !p_shl426_cast_fu_22883_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl425_cast_fu_22871_p1.read()) + sc_biguint<15>(p_shl426_cast_fu_22883_p1.read()));
}

void ShuffleNetV2::thread_tmp_920_fu_22711_p2() {
    tmp_920_fu_22711_p2 = (!tmp_915_reg_42852.read().is_01() || !w_69_cast_cast_fu_22707_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_915_reg_42852.read()) + sc_biguint<15>(w_69_cast_cast_fu_22707_p1.read()));
}

void ShuffleNetV2::thread_tmp_921_fu_22913_p2() {
    tmp_921_fu_22913_p2 = (!tmp_917_reg_42901.read().is_01() || !w_71_cast_cast_fu_22909_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_917_reg_42901.read()) + sc_biguint<14>(w_71_cast_cast_fu_22909_p1.read()));
}

void ShuffleNetV2::thread_tmp_922_fu_22918_p2() {
    tmp_922_fu_22918_p2 = (!tmp_919_reg_42906.read().is_01() || !w_71_cast_cast1_fu_22905_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_919_reg_42906.read()) + sc_biguint<15>(w_71_cast_cast1_fu_22905_p1.read()));
}

void ShuffleNetV2::thread_tmp_923_fu_23134_p3() {
    tmp_923_fu_23134_p3 = esl_concat<9,5>(sum53_reg_42984.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_924_fu_23141_p1() {
    tmp_924_fu_23141_p1 = esl_sext<15,14>(tmp_923_fu_23134_p3.read());
}

void ShuffleNetV2::thread_tmp_925_fu_23149_p3() {
    tmp_925_fu_23149_p3 = esl_concat<9,3>(sum53_reg_42984.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_926_fu_23156_p1() {
    tmp_926_fu_23156_p1 = esl_sext<13,12>(tmp_925_fu_23149_p3.read());
}

void ShuffleNetV2::thread_tmp_927_fu_23164_p2() {
    tmp_927_fu_23164_p2 = (!p_shl427_cast_fu_23145_p1.read().is_01() || !p_shl428_cast_fu_23160_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(p_shl427_cast_fu_23145_p1.read()) - sc_biguint<16>(p_shl428_cast_fu_23160_p1.read()));
}

void ShuffleNetV2::thread_tmp_928_fu_23174_p2() {
    tmp_928_fu_23174_p2 = (!tmp_2155_cast_fu_23170_p1.read().is_01() || !ci42_cast1_cast_reg_42952.read().is_01())? sc_lv<17>(): (sc_bigint<17>(tmp_2155_cast_fu_23170_p1.read()) + sc_biguint<17>(ci42_cast1_cast_reg_42952.read()));
}

void ShuffleNetV2::thread_tmp_929_fu_23230_p2() {
    tmp_929_fu_23230_p2 = (!p_shl429_cast_fu_23216_p3.read().is_01() || !p_shl430_cast_fu_23223_p3.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl429_cast_fu_23216_p3.read()) - sc_biguint<8>(p_shl430_cast_fu_23223_p3.read()));
}

void ShuffleNetV2::thread_tmp_930_fu_23236_p2() {
    tmp_930_fu_23236_p2 = (!tmp_929_fu_23230_p2.read().is_01() || !tmp_266_cast_cast_reg_42965.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_929_fu_23230_p2.read()) + sc_bigint<8>(tmp_266_cast_cast_reg_42965.read()));
}

void ShuffleNetV2::thread_tmp_931_fu_23499_p3() {
    tmp_931_fu_23499_p3 = esl_concat<7,2>(tmp_248_fu_23490_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_932_fu_23511_p2() {
    tmp_932_fu_23511_p2 = (!p_shl431_cast_fu_23507_p1.read().is_01() || !tmp_278_cast_cast_fu_23495_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(p_shl431_cast_fu_23507_p1.read()) - sc_bigint<10>(tmp_278_cast_cast_fu_23495_p1.read()));
}

void ShuffleNetV2::thread_tmp_933_fu_23517_p2() {
    tmp_933_fu_23517_p2 = (!w72_cast_cast_reg_43079.read().is_01() || !tmp_932_fu_23511_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(w72_cast_cast_reg_43079.read()) + sc_biguint<10>(tmp_932_fu_23511_p2.read()));
}

void ShuffleNetV2::thread_tmp_934_fu_23538_p2() {
    tmp_934_fu_23538_p2 = (!tmp_2131_fu_23533_p2.read().is_01() || !tmp_933_reg_43118.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_2131_fu_23533_p2.read()) - sc_biguint<10>(tmp_933_reg_43118.read()));
}

void ShuffleNetV2::thread_tmp_935_fu_23543_p2() {
    tmp_935_fu_23543_p2 = (!h72_cast_cast_reg_43097.read().is_01() || !tmp_934_fu_23538_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h72_cast_cast_reg_43097.read()) + sc_biguint<10>(tmp_934_fu_23538_p2.read()));
}

void ShuffleNetV2::thread_tmp_936_fu_23551_p3() {
    tmp_936_fu_23551_p3 = esl_concat<9,2>(sum25_reg_43124.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_937_fu_23562_p2() {
    tmp_937_fu_23562_p2 = (!p_shl433_cast_fu_23558_p1.read().is_01() || !sum25_cast_cast_fu_23548_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(p_shl433_cast_fu_23558_p1.read()) - sc_biguint<12>(sum25_cast_cast_fu_23548_p1.read()));
}

void ShuffleNetV2::thread_tmp_938_fu_23568_p2() {
    tmp_938_fu_23568_p2 = (!w72_cast_cast1_reg_43074.read().is_01() || !tmp_937_fu_23562_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(w72_cast_cast1_reg_43074.read()) + sc_biguint<12>(tmp_937_fu_23562_p2.read()));
}

void ShuffleNetV2::thread_tmp_939_fu_23587_p2() {
    tmp_939_fu_23587_p2 = (!p_shl237_fu_23583_p1.read().is_01() || !tmp_2177_cast_fu_23573_p1.read().is_01())? sc_lv<32>(): (sc_bigint<32>(p_shl237_fu_23583_p1.read()) - sc_bigint<32>(tmp_2177_cast_fu_23573_p1.read()));
}

void ShuffleNetV2::thread_tmp_940_fu_23593_p2() {
    tmp_940_fu_23593_p2 = (!h72_cast_reg_43092.read().is_01() || !tmp_939_fu_23587_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(h72_cast_reg_43092.read()) + sc_biguint<32>(tmp_939_fu_23587_p2.read()));
}

void ShuffleNetV2::thread_tmp_941_fu_24161_p3() {
    tmp_941_fu_24161_p3 = esl_concat<6,3>(co93_reg_10445.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_942_fu_24173_p3() {
    tmp_942_fu_24173_p3 = esl_concat<6,1>(co93_reg_10445.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_943_fu_24185_p2() {
    tmp_943_fu_24185_p2 = (!p_shl436_cast_fu_24181_p1.read().is_01() || !p_shl435_cast_fu_24169_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl436_cast_fu_24181_p1.read()) + sc_biguint<10>(p_shl435_cast_fu_24169_p1.read()));
}

void ShuffleNetV2::thread_tmp_944_fu_23923_p3() {
    tmp_944_fu_23923_p3 = esl_concat<11,5>(sum56_reg_43244.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_945_fu_23934_p3() {
    tmp_945_fu_23934_p3 = esl_concat<11,3>(sum56_reg_43244.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_946_fu_23945_p2() {
    tmp_946_fu_23945_p2 = (!p_shl437_cast_fu_23930_p1.read().is_01() || !p_shl438_cast_fu_23941_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(p_shl437_cast_fu_23930_p1.read()) - sc_biguint<17>(p_shl438_cast_fu_23941_p1.read()));
}

void ShuffleNetV2::thread_tmp_947_fu_23955_p2() {
    tmp_947_fu_23955_p2 = (!ci44_cast1_cast_reg_43212.read().is_01() || !tmp_2192_cast_fu_23951_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(ci44_cast1_cast_reg_43212.read()) + sc_bigint<18>(tmp_2192_cast_fu_23951_p1.read()));
}

void ShuffleNetV2::thread_tmp_948_fu_24011_p2() {
    tmp_948_fu_24011_p2 = (!p_shl439_cast_fu_23997_p3.read().is_01() || !p_shl440_cast_fu_24004_p3.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl439_cast_fu_23997_p3.read()) - sc_biguint<8>(p_shl440_cast_fu_24004_p3.read()));
}

void ShuffleNetV2::thread_tmp_949_fu_24017_p2() {
    tmp_949_fu_24017_p2 = (!tmp_283_cast_cast_reg_43225.read().is_01() || !tmp_948_fu_24011_p2.read().is_01())? sc_lv<8>(): (sc_bigint<8>(tmp_283_cast_cast_reg_43225.read()) + sc_biguint<8>(tmp_948_fu_24011_p2.read()));
}

void ShuffleNetV2::thread_tmp_950_fu_24280_p3() {
    tmp_950_fu_24280_p3 = esl_concat<6,3>(co95_reg_10478.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_951_fu_24292_p3() {
    tmp_951_fu_24292_p3 = esl_concat<6,1>(co95_reg_10478.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_952_fu_24304_p2() {
    tmp_952_fu_24304_p2 = (!p_shl442_cast_fu_24300_p1.read().is_01() || !p_shl441_cast_fu_24288_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl442_cast_fu_24300_p1.read()) + sc_biguint<10>(p_shl441_cast_fu_24288_p1.read()));
}

void ShuffleNetV2::thread_tmp_953_fu_24332_p3() {
    tmp_953_fu_24332_p3 = esl_concat<7,3>(tmp_254_fu_24326_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_954_fu_24344_p3() {
    tmp_954_fu_24344_p3 = esl_concat<7,1>(tmp_254_fu_24326_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_955_fu_24356_p2() {
    tmp_955_fu_24356_p2 = (!p_shl444_cast_fu_24352_p1.read().is_01() || !p_shl443_cast_fu_24340_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl444_cast_fu_24352_p1.read()) + sc_biguint<11>(p_shl443_cast_fu_24340_p1.read()));
}

void ShuffleNetV2::thread_tmp_956_fu_24219_p2() {
    tmp_956_fu_24219_p2 = (!h_75_cast_cast_fu_24215_p1.read().is_01() || !tmp_943_reg_43316.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h_75_cast_cast_fu_24215_p1.read()) + sc_biguint<10>(tmp_943_reg_43316.read()));
}

void ShuffleNetV2::thread_tmp_957_fu_24248_p2() {
    tmp_957_fu_24248_p2 = (!p_shl445_cast_fu_24232_p1.read().is_01() || !p_shl446_cast_fu_24244_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl445_cast_fu_24232_p1.read()) + sc_biguint<15>(p_shl446_cast_fu_24244_p1.read()));
}

void ShuffleNetV2::thread_tmp_958_fu_24382_p2() {
    tmp_958_fu_24382_p2 = (!h_77_cast_cast_fu_24378_p1.read().is_01() || !tmp_952_reg_43360.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h_77_cast_cast_fu_24378_p1.read()) + sc_biguint<10>(tmp_952_reg_43360.read()));
}

void ShuffleNetV2::thread_tmp_959_fu_24411_p2() {
    tmp_959_fu_24411_p2 = (!p_shl447_cast_fu_24395_p1.read().is_01() || !p_shl448_cast_fu_24407_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl447_cast_fu_24395_p1.read()) + sc_biguint<14>(p_shl448_cast_fu_24407_p1.read()));
}

void ShuffleNetV2::thread_tmp_960_fu_24417_p2() {
    tmp_960_fu_24417_p2 = (!h_77_cast_cast1_fu_24374_p1.read().is_01() || !tmp_955_reg_43373.read().is_01())? sc_lv<11>(): (sc_biguint<11>(h_77_cast_cast1_fu_24374_p1.read()) + sc_biguint<11>(tmp_955_reg_43373.read()));
}

void ShuffleNetV2::thread_tmp_961_fu_24446_p2() {
    tmp_961_fu_24446_p2 = (!p_shl449_cast_fu_24430_p1.read().is_01() || !p_shl450_cast_fu_24442_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl449_cast_fu_24430_p1.read()) + sc_biguint<15>(p_shl450_cast_fu_24442_p1.read()));
}

void ShuffleNetV2::thread_tmp_962_fu_24270_p2() {
    tmp_962_fu_24270_p2 = (!tmp_957_reg_43337.read().is_01() || !w_75_cast_cast_fu_24266_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_957_reg_43337.read()) + sc_biguint<15>(w_75_cast_cast_fu_24266_p1.read()));
}

void ShuffleNetV2::thread_tmp_963_fu_24472_p2() {
    tmp_963_fu_24472_p2 = (!tmp_959_reg_43386.read().is_01() || !w_77_cast_cast_fu_24468_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_959_reg_43386.read()) + sc_biguint<14>(w_77_cast_cast_fu_24468_p1.read()));
}

void ShuffleNetV2::thread_tmp_964_fu_24477_p2() {
    tmp_964_fu_24477_p2 = (!tmp_961_reg_43391.read().is_01() || !w_77_cast_cast1_fu_24464_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_961_reg_43391.read()) + sc_biguint<15>(w_77_cast_cast1_fu_24464_p1.read()));
}

void ShuffleNetV2::thread_tmp_965_fu_24693_p3() {
    tmp_965_fu_24693_p3 = esl_concat<11,5>(sum58_reg_43469.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_966_fu_24704_p3() {
    tmp_966_fu_24704_p3 = esl_concat<11,3>(sum58_reg_43469.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_967_fu_24715_p2() {
    tmp_967_fu_24715_p2 = (!p_shl451_cast_fu_24700_p1.read().is_01() || !p_shl452_cast_fu_24711_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(p_shl451_cast_fu_24700_p1.read()) - sc_biguint<17>(p_shl452_cast_fu_24711_p1.read()));
}

void ShuffleNetV2::thread_tmp_968_fu_24725_p2() {
    tmp_968_fu_24725_p2 = (!ci46_cast1_cast_reg_43437.read().is_01() || !tmp_2231_cast_fu_24721_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(ci46_cast1_cast_reg_43437.read()) + sc_bigint<18>(tmp_2231_cast_fu_24721_p1.read()));
}

void ShuffleNetV2::thread_tmp_969_fu_24781_p2() {
    tmp_969_fu_24781_p2 = (!p_shl453_cast_fu_24767_p3.read().is_01() || !p_shl454_cast_fu_24774_p3.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl453_cast_fu_24767_p3.read()) - sc_biguint<8>(p_shl454_cast_fu_24774_p3.read()));
}

void ShuffleNetV2::thread_tmp_970_fu_24787_p2() {
    tmp_970_fu_24787_p2 = (!tmp_295_cast_cast_reg_43450.read().is_01() || !tmp_969_fu_24781_p2.read().is_01())? sc_lv<8>(): (sc_bigint<8>(tmp_295_cast_cast_reg_43450.read()) + sc_biguint<8>(tmp_969_fu_24781_p2.read()));
}

void ShuffleNetV2::thread_tmp_971_fu_25046_p3() {
    tmp_971_fu_25046_p3 = esl_concat<7,2>(tmp_267_fu_25037_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_972_fu_25058_p2() {
    tmp_972_fu_25058_p2 = (!p_shl455_cast_fu_25054_p1.read().is_01() || !tmp_307_cast_cast_fu_25042_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(p_shl455_cast_fu_25054_p1.read()) - sc_bigint<10>(tmp_307_cast_cast_fu_25042_p1.read()));
}

void ShuffleNetV2::thread_tmp_973_fu_25064_p2() {
    tmp_973_fu_25064_p2 = (!w78_cast_cast_reg_43564.read().is_01() || !tmp_972_fu_25058_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(w78_cast_cast_reg_43564.read()) + sc_biguint<10>(tmp_972_fu_25058_p2.read()));
}

void ShuffleNetV2::thread_tmp_974_fu_25085_p2() {
    tmp_974_fu_25085_p2 = (!tmp_2155_fu_25080_p2.read().is_01() || !tmp_973_reg_43603.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_2155_fu_25080_p2.read()) - sc_biguint<10>(tmp_973_reg_43603.read()));
}

void ShuffleNetV2::thread_tmp_975_fu_25090_p2() {
    tmp_975_fu_25090_p2 = (!h78_cast_cast_reg_43582.read().is_01() || !tmp_974_fu_25085_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h78_cast_cast_reg_43582.read()) + sc_biguint<10>(tmp_974_fu_25085_p2.read()));
}

void ShuffleNetV2::thread_tmp_976_fu_25098_p3() {
    tmp_976_fu_25098_p3 = esl_concat<9,2>(sum27_reg_43609.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_977_fu_25109_p2() {
    tmp_977_fu_25109_p2 = (!p_shl457_cast_fu_25105_p1.read().is_01() || !sum27_cast_cast_fu_25095_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(p_shl457_cast_fu_25105_p1.read()) - sc_biguint<12>(sum27_cast_cast_fu_25095_p1.read()));
}

void ShuffleNetV2::thread_tmp_978_fu_25115_p2() {
    tmp_978_fu_25115_p2 = (!w78_cast_cast1_reg_43559.read().is_01() || !tmp_977_fu_25109_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(w78_cast_cast1_reg_43559.read()) + sc_biguint<12>(tmp_977_fu_25109_p2.read()));
}

void ShuffleNetV2::thread_tmp_979_fu_25134_p2() {
    tmp_979_fu_25134_p2 = (!p_shl240_fu_25130_p1.read().is_01() || !tmp_2253_cast_fu_25120_p1.read().is_01())? sc_lv<32>(): (sc_bigint<32>(p_shl240_fu_25130_p1.read()) - sc_bigint<32>(tmp_2253_cast_fu_25120_p1.read()));
}

void ShuffleNetV2::thread_tmp_980_fu_25140_p2() {
    tmp_980_fu_25140_p2 = (!h78_cast_reg_43577.read().is_01() || !tmp_979_fu_25134_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(h78_cast_reg_43577.read()) + sc_biguint<32>(tmp_979_fu_25134_p2.read()));
}

void ShuffleNetV2::thread_tmp_981_fu_25700_p3() {
    tmp_981_fu_25700_p3 = esl_concat<6,3>(co103_reg_10687.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_982_fu_25712_p3() {
    tmp_982_fu_25712_p3 = esl_concat<6,1>(co103_reg_10687.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_983_fu_25724_p2() {
    tmp_983_fu_25724_p2 = (!p_shl460_cast_fu_25720_p1.read().is_01() || !p_shl459_cast_fu_25708_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl460_cast_fu_25720_p1.read()) + sc_biguint<10>(p_shl459_cast_fu_25708_p1.read()));
}

void ShuffleNetV2::thread_tmp_984_fu_25466_p3() {
    tmp_984_fu_25466_p3 = esl_concat<11,5>(sum61_reg_43729.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_985_fu_25477_p3() {
    tmp_985_fu_25477_p3 = esl_concat<11,3>(sum61_reg_43729.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_986_fu_25488_p2() {
    tmp_986_fu_25488_p2 = (!p_shl461_cast_fu_25473_p1.read().is_01() || !p_shl462_cast_fu_25484_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(p_shl461_cast_fu_25473_p1.read()) - sc_biguint<17>(p_shl462_cast_fu_25484_p1.read()));
}

void ShuffleNetV2::thread_tmp_987_fu_25498_p2() {
    tmp_987_fu_25498_p2 = (!ci48_cast1_cast_reg_43697.read().is_01() || !tmp_2268_cast_fu_25494_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(ci48_cast1_cast_reg_43697.read()) + sc_bigint<18>(tmp_2268_cast_fu_25494_p1.read()));
}

void ShuffleNetV2::thread_tmp_988_fu_25554_p2() {
    tmp_988_fu_25554_p2 = (!p_shl463_cast_fu_25540_p3.read().is_01() || !p_shl464_cast_fu_25547_p3.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl463_cast_fu_25540_p3.read()) - sc_biguint<8>(p_shl464_cast_fu_25547_p3.read()));
}

void ShuffleNetV2::thread_tmp_989_fu_25560_p2() {
    tmp_989_fu_25560_p2 = (!tmp_312_cast_cast_reg_43710.read().is_01() || !tmp_988_fu_25554_p2.read().is_01())? sc_lv<8>(): (sc_bigint<8>(tmp_312_cast_cast_reg_43710.read()) + sc_biguint<8>(tmp_988_fu_25554_p2.read()));
}

void ShuffleNetV2::thread_tmp_990_fu_25819_p3() {
    tmp_990_fu_25819_p3 = esl_concat<6,3>(co105_reg_10720.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_991_fu_25831_p3() {
    tmp_991_fu_25831_p3 = esl_concat<6,1>(co105_reg_10720.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_992_fu_25843_p2() {
    tmp_992_fu_25843_p2 = (!p_shl466_cast_fu_25839_p1.read().is_01() || !p_shl465_cast_fu_25827_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl466_cast_fu_25839_p1.read()) + sc_biguint<10>(p_shl465_cast_fu_25827_p1.read()));
}

void ShuffleNetV2::thread_tmp_993_fu_25871_p3() {
    tmp_993_fu_25871_p3 = esl_concat<7,3>(tmp_273_fu_25865_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_994_fu_25883_p3() {
    tmp_994_fu_25883_p3 = esl_concat<7,1>(tmp_273_fu_25865_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_995_fu_25895_p2() {
    tmp_995_fu_25895_p2 = (!p_shl468_cast_fu_25891_p1.read().is_01() || !p_shl467_cast_fu_25879_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl468_cast_fu_25891_p1.read()) + sc_biguint<11>(p_shl467_cast_fu_25879_p1.read()));
}

void ShuffleNetV2::thread_tmp_996_fu_25758_p2() {
    tmp_996_fu_25758_p2 = (!h_81_cast_cast_fu_25754_p1.read().is_01() || !tmp_983_reg_43801.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h_81_cast_cast_fu_25754_p1.read()) + sc_biguint<10>(tmp_983_reg_43801.read()));
}

void ShuffleNetV2::thread_tmp_997_fu_25787_p2() {
    tmp_997_fu_25787_p2 = (!p_shl469_cast_fu_25771_p1.read().is_01() || !p_shl470_cast_fu_25783_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl469_cast_fu_25771_p1.read()) + sc_biguint<15>(p_shl470_cast_fu_25783_p1.read()));
}

void ShuffleNetV2::thread_tmp_998_fu_25921_p2() {
    tmp_998_fu_25921_p2 = (!h_83_cast_cast_fu_25917_p1.read().is_01() || !tmp_992_reg_43845.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h_83_cast_cast_fu_25917_p1.read()) + sc_biguint<10>(tmp_992_reg_43845.read()));
}

void ShuffleNetV2::thread_tmp_999_fu_25950_p2() {
    tmp_999_fu_25950_p2 = (!p_shl471_cast_fu_25934_p1.read().is_01() || !p_shl472_cast_fu_25946_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl471_cast_fu_25934_p1.read()) + sc_biguint<14>(p_shl472_cast_fu_25946_p1.read()));
}

void ShuffleNetV2::thread_tmp_fu_14330_p3() {
    tmp_fu_14330_p3 = esl_concat<2,5>(ci_reg_8698.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_s_fu_15263_p2() {
    tmp_s_fu_15263_p2 = (!co19_cast_fu_15247_p1.read().is_01() || !ap_const_lv6_18.is_01())? sc_lv<6>(): (sc_biguint<6>(co19_cast_fu_15247_p1.read()) + sc_biguint<6>(ap_const_lv6_18));
}

void ShuffleNetV2::thread_w102_cast_cast1_fu_31159_p1() {
    w102_cast_cast1_fu_31159_p1 = esl_zext<13,2>(w102_reg_11545.read());
}

void ShuffleNetV2::thread_w102_cast_cast_fu_31163_p1() {
    w102_cast_cast_fu_31163_p1 = esl_zext<10,2>(w102_reg_11545.read());
}

void ShuffleNetV2::thread_w106_cast_cast1_fu_32483_p1() {
    w106_cast_cast1_fu_32483_p1 = esl_zext<13,2>(w106_reg_11754.read());
}

void ShuffleNetV2::thread_w106_cast_cast_fu_32487_p1() {
    w106_cast_cast_fu_32487_p1 = esl_zext<11,2>(w106_reg_11754.read());
}

void ShuffleNetV2::thread_w108_cast_cast1_fu_33244_p1() {
    w108_cast_cast1_fu_33244_p1 = esl_zext<13,2>(w108_reg_11875.read());
}

void ShuffleNetV2::thread_w108_cast_cast_fu_33248_p1() {
    w108_cast_cast_fu_33248_p1 = esl_zext<11,2>(w108_reg_11875.read());
}

void ShuffleNetV2::thread_w112_cast_cast1_fu_34616_p1() {
    w112_cast_cast1_fu_34616_p1 = esl_zext<13,2>(w112_reg_12084.read());
}

void ShuffleNetV2::thread_w112_cast_cast_fu_34620_p1() {
    w112_cast_cast_fu_34620_p1 = esl_zext<11,2>(w112_reg_12084.read());
}

void ShuffleNetV2::thread_w118_cast_cast1_fu_36119_p1() {
    w118_cast_cast1_fu_36119_p1 = esl_zext<14,2>(w118_reg_12326.read());
}

void ShuffleNetV2::thread_w118_cast_cast_fu_36123_p1() {
    w118_cast_cast_fu_36123_p1 = esl_zext<11,2>(w118_reg_12326.read());
}

void ShuffleNetV2::thread_w124_cast_cast1_fu_37626_p1() {
    w124_cast_cast1_fu_37626_p1 = esl_zext<15,2>(w124_reg_12568.read());
}

void ShuffleNetV2::thread_w124_cast_cast_fu_37630_p1() {
    w124_cast_cast_fu_37630_p1 = esl_zext<11,2>(w124_reg_12568.read());
}

void ShuffleNetV2::thread_w126_cast_cast_fu_38540_p1() {
    w126_cast_cast_fu_38540_p1 = esl_zext<11,3>(w126_reg_12722.read());
}

void ShuffleNetV2::thread_w13_cast_cast_fu_14943_p1() {
    w13_cast_cast_fu_14943_p1 = esl_zext<9,2>(w13_reg_8854.read());
}

void ShuffleNetV2::thread_w26_cast_cast1_fu_15635_p1() {
    w26_cast_cast1_fu_15635_p1 = esl_zext<9,2>(w26_reg_8999.read());
}

void ShuffleNetV2::thread_w26_cast_cast_fu_15639_p1() {
    w26_cast_cast_fu_15639_p1 = esl_zext<10,2>(w26_reg_8999.read());
}

void ShuffleNetV2::thread_w42_cast_cast1_fu_16441_p1() {
    w42_cast_cast1_fu_16441_p1 = esl_zext<9,2>(w42_reg_9177.read());
}

void ShuffleNetV2::thread_w42_cast_cast_fu_16445_p1() {
    w42_cast_cast_fu_16445_p1 = esl_zext<10,2>(w42_reg_9177.read());
}

void ShuffleNetV2::thread_w50_cast_cast1_fu_17253_p1() {
    w50_cast_cast1_fu_17253_p1 = esl_zext<9,2>(w50_reg_9355.read());
}

void ShuffleNetV2::thread_w50_cast_cast_fu_17257_p1() {
    w50_cast_cast_fu_17257_p1 = esl_zext<11,2>(w50_reg_9355.read());
}

void ShuffleNetV2::thread_w54_cast_cast1_fu_18081_p1() {
    w54_cast_cast1_fu_18081_p1 = esl_zext<12,2>(w54_reg_9521.read());
}

void ShuffleNetV2::thread_w54_cast_cast_fu_18085_p1() {
    w54_cast_cast_fu_18085_p1 = esl_zext<10,2>(w54_reg_9521.read());
}

void ShuffleNetV2::thread_w56_cast_cast1_fu_18866_p1() {
    w56_cast_cast1_fu_18866_p1 = esl_zext<11,2>(w56_reg_9642.read());
}

void ShuffleNetV2::thread_w56_cast_cast_fu_18870_p1() {
    w56_cast_cast_fu_18870_p1 = esl_zext<10,2>(w56_reg_9642.read());
}

void ShuffleNetV2::thread_w60_cast_cast1_fu_20290_p1() {
    w60_cast_cast1_fu_20290_p1 = esl_zext<13,2>(w60_reg_9851.read());
}

void ShuffleNetV2::thread_w60_cast_cast_fu_20294_p1() {
    w60_cast_cast_fu_20294_p1 = esl_zext<10,2>(w60_reg_9851.read());
}

void ShuffleNetV2::thread_w66_cast_cast1_fu_21837_p1() {
    w66_cast_cast1_fu_21837_p1 = esl_zext<13,2>(w66_reg_10093.read());
}

void ShuffleNetV2::thread_w66_cast_cast_fu_21841_p1() {
    w66_cast_cast_fu_21841_p1 = esl_zext<10,2>(w66_reg_10093.read());
}

void ShuffleNetV2::thread_w6_cast_cast_fu_14647_p1() {
    w6_cast_cast_fu_14647_p1 = esl_zext<9,2>(w6_reg_8776.read());
}

void ShuffleNetV2::thread_w72_cast_cast1_fu_23400_p1() {
    w72_cast_cast1_fu_23400_p1 = esl_zext<12,2>(w72_reg_10335.read());
}

void ShuffleNetV2::thread_w72_cast_cast_fu_23404_p1() {
    w72_cast_cast_fu_23404_p1 = esl_zext<10,2>(w72_reg_10335.read());
}

void ShuffleNetV2::thread_w78_cast_cast1_fu_24947_p1() {
    w78_cast_cast1_fu_24947_p1 = esl_zext<12,2>(w78_reg_10577.read());
}

void ShuffleNetV2::thread_w78_cast_cast_fu_24951_p1() {
    w78_cast_cast_fu_24951_p1 = esl_zext<10,2>(w78_reg_10577.read());
}

void ShuffleNetV2::thread_w84_cast_cast1_fu_26486_p1() {
    w84_cast_cast1_fu_26486_p1 = esl_zext<12,2>(w84_reg_10819.read());
}

void ShuffleNetV2::thread_w84_cast_cast_fu_26490_p1() {
    w84_cast_cast_fu_26490_p1 = esl_zext<10,2>(w84_reg_10819.read());
}

void ShuffleNetV2::thread_w90_cast_cast1_fu_28033_p1() {
    w90_cast_cast1_fu_28033_p1 = esl_zext<13,2>(w90_reg_11061.read());
}

void ShuffleNetV2::thread_w90_cast_cast_fu_28037_p1() {
    w90_cast_cast_fu_28037_p1 = esl_zext<10,2>(w90_reg_11061.read());
}

void ShuffleNetV2::thread_w96_cast_cast1_fu_29592_p1() {
    w96_cast_cast1_fu_29592_p1 = esl_zext<14,2>(w96_reg_11303.read());
}

void ShuffleNetV2::thread_w96_cast_cast_fu_29596_p1() {
    w96_cast_cast_fu_29596_p1 = esl_zext<10,2>(w96_reg_11303.read());
}

void ShuffleNetV2::thread_w_101_cast_cast1_fu_30664_p1() {
    w_101_cast_cast1_fu_30664_p1 = esl_zext<15,4>(w_101_fu_30658_p2.read());
}

void ShuffleNetV2::thread_w_101_cast_cast_fu_30668_p1() {
    w_101_cast_cast_fu_30668_p1 = esl_zext<14,4>(w_101_fu_30658_p2.read());
}

void ShuffleNetV2::thread_w_101_fu_30658_p2() {
    w_101_fu_30658_p2 = (!w100_reg_11468.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w100_reg_11468.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_103_fu_31173_p2() {
    w_103_fu_31173_p2 = (!w102_reg_11545.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w102_reg_11545.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_105_cast_cast_fu_32033_p1() {
    w_105_cast_cast_fu_32033_p1 = esl_zext<15,4>(w_105_fu_32027_p2.read());
}

void ShuffleNetV2::thread_w_105_fu_32027_p2() {
    w_105_fu_32027_p2 = (!w104_reg_11677.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w104_reg_11677.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_107_fu_32497_p2() {
    w_107_fu_32497_p2 = (!w106_reg_11754.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w106_reg_11754.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_109_fu_33258_p2() {
    w_109_fu_33258_p2 = (!w108_reg_11875.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w108_reg_11875.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_111_cast_cast1_fu_34157_p1() {
    w_111_cast_cast1_fu_34157_p1 = esl_zext<14,3>(w_111_fu_34151_p2.read());
}

void ShuffleNetV2::thread_w_111_cast_cast_fu_34161_p1() {
    w_111_cast_cast_fu_34161_p1 = esl_zext<13,3>(w_111_fu_34151_p2.read());
}

void ShuffleNetV2::thread_w_111_fu_34151_p2() {
    w_111_fu_34151_p2 = (!w110_reg_12007.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(w110_reg_12007.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_w_113_fu_34630_p2() {
    w_113_fu_34630_p2 = (!w112_reg_12084.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w112_reg_12084.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_115_cast_cast_fu_35462_p1() {
    w_115_cast_cast_fu_35462_p1 = esl_zext<14,3>(w_115_fu_35456_p2.read());
}

void ShuffleNetV2::thread_w_115_fu_35456_p2() {
    w_115_fu_35456_p2 = (!w114_reg_12216.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(w114_reg_12216.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_w_117_cast_cast1_fu_35660_p1() {
    w_117_cast_cast1_fu_35660_p1 = esl_zext<14,3>(w_117_fu_35654_p2.read());
}

void ShuffleNetV2::thread_w_117_cast_cast_fu_35664_p1() {
    w_117_cast_cast_fu_35664_p1 = esl_zext<13,3>(w_117_fu_35654_p2.read());
}

void ShuffleNetV2::thread_w_117_fu_35654_p2() {
    w_117_fu_35654_p2 = (!w116_reg_12249.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(w116_reg_12249.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_w_119_fu_36133_p2() {
    w_119_fu_36133_p2 = (!w118_reg_12326.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w118_reg_12326.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_121_cast_cast_fu_36969_p1() {
    w_121_cast_cast_fu_36969_p1 = esl_zext<14,3>(w_121_fu_36963_p2.read());
}

void ShuffleNetV2::thread_w_121_fu_36963_p2() {
    w_121_fu_36963_p2 = (!w120_reg_12458.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(w120_reg_12458.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_w_123_cast_cast1_fu_37167_p1() {
    w_123_cast_cast1_fu_37167_p1 = esl_zext<14,3>(w_123_fu_37161_p2.read());
}

void ShuffleNetV2::thread_w_123_cast_cast_fu_37171_p1() {
    w_123_cast_cast_fu_37171_p1 = esl_zext<13,3>(w_123_fu_37161_p2.read());
}

void ShuffleNetV2::thread_w_123_fu_37161_p2() {
    w_123_fu_37161_p2 = (!w122_reg_12491.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(w122_reg_12491.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_w_125_fu_37640_p2() {
    w_125_fu_37640_p2 = (!w124_reg_12568.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w124_reg_12568.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_128_cast_cast_fu_38569_p1() {
    w_128_cast_cast_fu_38569_p1 = esl_zext<13,3>(w_128_fu_38563_p2.read());
}

void ShuffleNetV2::thread_w_128_fu_38563_p2() {
    w_128_fu_38563_p2 = (!w126_reg_12722.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(w126_reg_12722.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_w_129_cast_cast_fu_38468_p1() {
    w_129_cast_cast_fu_38468_p1 = esl_zext<14,3>(w_1_fu_38462_p2.read());
}

void ShuffleNetV2::thread_w_1_fu_38462_p2() {
    w_1_fu_38462_p2 = (!w127_reg_12700.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(w127_reg_12700.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_w_38_cast_cast_fu_14405_p1() {
    w_38_cast_cast_fu_14405_p1 = esl_zext<8,6>(w_38_fu_14399_p2.read());
}

void ShuffleNetV2::thread_w_38_fu_14399_p2() {
    w_38_fu_14399_p2 = (!w_reg_8709.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(w_reg_8709.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void ShuffleNetV2::thread_w_39_fu_14684_p2() {
    w_39_fu_14684_p2 = (!w6_reg_8776.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w6_reg_8776.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_40_fu_14997_p2() {
    w_40_fu_14997_p2 = (!ap_const_lv2_1.is_01() || !w13_reg_8854.read().is_01())? sc_lv<2>(): (sc_biguint<2>(ap_const_lv2_1) + sc_biguint<2>(w13_reg_8854.read()));
}

void ShuffleNetV2::thread_w_41_cast_cast1_fu_15393_p1() {
    w_41_cast_cast1_fu_15393_p1 = esl_zext<15,5>(w_41_fu_15387_p2.read());
}

void ShuffleNetV2::thread_w_41_cast_cast_fu_15397_p1() {
    w_41_cast_cast_fu_15397_p1 = esl_zext<14,5>(w_41_fu_15387_p2.read());
}

void ShuffleNetV2::thread_w_41_fu_15387_p2() {
    w_41_fu_15387_p2 = (!w21_reg_8943.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(w21_reg_8943.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_w_42_fu_15693_p2() {
    w_42_fu_15693_p2 = (!ap_const_lv2_1.is_01() || !w26_reg_8999.read().is_01())? sc_lv<2>(): (sc_biguint<2>(ap_const_lv2_1) + sc_biguint<2>(w26_reg_8999.read()));
}

void ShuffleNetV2::thread_w_43_cast_cast_fu_16009_p1() {
    w_43_cast_cast_fu_16009_p1 = esl_zext<15,5>(w_43_fu_16003_p2.read());
}

void ShuffleNetV2::thread_w_43_fu_16003_p2() {
    w_43_fu_16003_p2 = (!w34_reg_9088.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(w34_reg_9088.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_w_44_cast_cast1_fu_16199_p1() {
    w_44_cast_cast1_fu_16199_p1 = esl_zext<15,5>(w_44_fu_16193_p2.read());
}

void ShuffleNetV2::thread_w_44_cast_cast_fu_16203_p1() {
    w_44_cast_cast_fu_16203_p1 = esl_zext<14,5>(w_44_fu_16193_p2.read());
}

void ShuffleNetV2::thread_w_44_fu_16193_p2() {
    w_44_fu_16193_p2 = (!w37_reg_9121.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(w37_reg_9121.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_w_45_fu_16499_p2() {
    w_45_fu_16499_p2 = (!ap_const_lv2_1.is_01() || !w42_reg_9177.read().is_01())? sc_lv<2>(): (sc_biguint<2>(ap_const_lv2_1) + sc_biguint<2>(w42_reg_9177.read()));
}

void ShuffleNetV2::thread_w_47_cast_cast_fu_16797_p1() {
    w_47_cast_cast_fu_16797_p1 = esl_zext<15,5>(w_47_fu_16791_p2.read());
}

void ShuffleNetV2::thread_w_47_fu_16791_p2() {
    w_47_fu_16791_p2 = (!w46_reg_9266.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(w46_reg_9266.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_w_49_cast_cast1_fu_16987_p1() {
    w_49_cast_cast1_fu_16987_p1 = esl_zext<15,5>(w_49_fu_16981_p2.read());
}

void ShuffleNetV2::thread_w_49_cast_cast_fu_16991_p1() {
    w_49_cast_cast_fu_16991_p1 = esl_zext<14,5>(w_49_fu_16981_p2.read());
}

void ShuffleNetV2::thread_w_49_fu_16981_p2() {
    w_49_fu_16981_p2 = (!w48_reg_9299.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(w48_reg_9299.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_w_51_fu_17311_p2() {
    w_51_fu_17311_p2 = (!ap_const_lv2_1.is_01() || !w50_reg_9355.read().is_01())? sc_lv<2>(): (sc_biguint<2>(ap_const_lv2_1) + sc_biguint<2>(w50_reg_9355.read()));
}

void ShuffleNetV2::thread_w_53_cast_cast_fu_17611_p1() {
    w_53_cast_cast_fu_17611_p1 = esl_zext<15,5>(w_53_fu_17605_p2.read());
}

void ShuffleNetV2::thread_w_53_fu_17605_p2() {
    w_53_fu_17605_p2 = (!w52_reg_9444.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(w52_reg_9444.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_w_55_fu_18095_p2() {
    w_55_fu_18095_p2 = (!w54_reg_9521.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w54_reg_9521.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_57_fu_18880_p2() {
    w_57_fu_18880_p2 = (!w56_reg_9642.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w56_reg_9642.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_59_cast_cast1_fu_19807_p1() {
    w_59_cast_cast1_fu_19807_p1 = esl_zext<15,4>(w_59_fu_19801_p2.read());
}

void ShuffleNetV2::thread_w_59_cast_cast_fu_19811_p1() {
    w_59_cast_cast_fu_19811_p1 = esl_zext<14,4>(w_59_fu_19801_p2.read());
}

void ShuffleNetV2::thread_w_59_fu_19801_p2() {
    w_59_fu_19801_p2 = (!w58_reg_9774.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w58_reg_9774.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_61_fu_20304_p2() {
    w_61_fu_20304_p2 = (!w60_reg_9851.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w60_reg_9851.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_63_cast_cast_fu_21156_p1() {
    w_63_cast_cast_fu_21156_p1 = esl_zext<15,4>(w_63_fu_21150_p2.read());
}

void ShuffleNetV2::thread_w_63_fu_21150_p2() {
    w_63_fu_21150_p2 = (!w62_reg_9983.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w62_reg_9983.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_65_cast_cast1_fu_21354_p1() {
    w_65_cast_cast1_fu_21354_p1 = esl_zext<15,4>(w_65_fu_21348_p2.read());
}

void ShuffleNetV2::thread_w_65_cast_cast_fu_21358_p1() {
    w_65_cast_cast_fu_21358_p1 = esl_zext<14,4>(w_65_fu_21348_p2.read());
}

void ShuffleNetV2::thread_w_65_fu_21348_p2() {
    w_65_fu_21348_p2 = (!w64_reg_10016.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w64_reg_10016.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_67_fu_21851_p2() {
    w_67_fu_21851_p2 = (!w66_reg_10093.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w66_reg_10093.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_69_cast_cast_fu_22707_p1() {
    w_69_cast_cast_fu_22707_p1 = esl_zext<15,4>(w_69_fu_22701_p2.read());
}

void ShuffleNetV2::thread_w_69_fu_22701_p2() {
    w_69_fu_22701_p2 = (!w68_reg_10225.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w68_reg_10225.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_71_cast_cast1_fu_22905_p1() {
    w_71_cast_cast1_fu_22905_p1 = esl_zext<15,4>(w_71_fu_22899_p2.read());
}

void ShuffleNetV2::thread_w_71_cast_cast_fu_22909_p1() {
    w_71_cast_cast_fu_22909_p1 = esl_zext<14,4>(w_71_fu_22899_p2.read());
}

void ShuffleNetV2::thread_w_71_fu_22899_p2() {
    w_71_fu_22899_p2 = (!w70_reg_10258.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w70_reg_10258.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_73_fu_23414_p2() {
    w_73_fu_23414_p2 = (!w72_reg_10335.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w72_reg_10335.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_75_cast_cast_fu_24266_p1() {
    w_75_cast_cast_fu_24266_p1 = esl_zext<15,4>(w_75_fu_24260_p2.read());
}

void ShuffleNetV2::thread_w_75_fu_24260_p2() {
    w_75_fu_24260_p2 = (!w74_reg_10467.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w74_reg_10467.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_77_cast_cast1_fu_24464_p1() {
    w_77_cast_cast1_fu_24464_p1 = esl_zext<15,4>(w_77_fu_24458_p2.read());
}

void ShuffleNetV2::thread_w_77_cast_cast_fu_24468_p1() {
    w_77_cast_cast_fu_24468_p1 = esl_zext<14,4>(w_77_fu_24458_p2.read());
}

void ShuffleNetV2::thread_w_77_fu_24458_p2() {
    w_77_fu_24458_p2 = (!w76_reg_10500.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w76_reg_10500.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_79_fu_24961_p2() {
    w_79_fu_24961_p2 = (!w78_reg_10577.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w78_reg_10577.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_81_cast_cast_fu_25805_p1() {
    w_81_cast_cast_fu_25805_p1 = esl_zext<15,4>(w_81_fu_25799_p2.read());
}

void ShuffleNetV2::thread_w_81_fu_25799_p2() {
    w_81_fu_25799_p2 = (!w80_reg_10709.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w80_reg_10709.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_83_cast_cast1_fu_26003_p1() {
    w_83_cast_cast1_fu_26003_p1 = esl_zext<15,4>(w_83_fu_25997_p2.read());
}

void ShuffleNetV2::thread_w_83_cast_cast_fu_26007_p1() {
    w_83_cast_cast_fu_26007_p1 = esl_zext<14,4>(w_83_fu_25997_p2.read());
}

void ShuffleNetV2::thread_w_83_fu_25997_p2() {
    w_83_fu_25997_p2 = (!w82_reg_10742.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w82_reg_10742.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_85_fu_26500_p2() {
    w_85_fu_26500_p2 = (!w84_reg_10819.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w84_reg_10819.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_87_cast_cast_fu_27352_p1() {
    w_87_cast_cast_fu_27352_p1 = esl_zext<15,4>(w_87_fu_27346_p2.read());
}

void ShuffleNetV2::thread_w_87_fu_27346_p2() {
    w_87_fu_27346_p2 = (!w86_reg_10951.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w86_reg_10951.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_89_cast_cast1_fu_27550_p1() {
    w_89_cast_cast1_fu_27550_p1 = esl_zext<15,4>(w_89_fu_27544_p2.read());
}

void ShuffleNetV2::thread_w_89_cast_cast_fu_27554_p1() {
    w_89_cast_cast_fu_27554_p1 = esl_zext<14,4>(w_89_fu_27544_p2.read());
}

void ShuffleNetV2::thread_w_89_fu_27544_p2() {
    w_89_fu_27544_p2 = (!w88_reg_10984.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w88_reg_10984.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_91_fu_28047_p2() {
    w_91_fu_28047_p2 = (!w90_reg_11061.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w90_reg_11061.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_93_cast_cast_fu_28903_p1() {
    w_93_cast_cast_fu_28903_p1 = esl_zext<15,4>(w_93_fu_28897_p2.read());
}

void ShuffleNetV2::thread_w_93_fu_28897_p2() {
    w_93_fu_28897_p2 = (!w92_reg_11193.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w92_reg_11193.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_95_cast_cast1_fu_29101_p1() {
    w_95_cast_cast1_fu_29101_p1 = esl_zext<15,4>(w_95_fu_29095_p2.read());
}

void ShuffleNetV2::thread_w_95_cast_cast_fu_29105_p1() {
    w_95_cast_cast_fu_29105_p1 = esl_zext<14,4>(w_95_fu_29095_p2.read());
}

void ShuffleNetV2::thread_w_95_fu_29095_p2() {
    w_95_fu_29095_p2 = (!w94_reg_11226.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w94_reg_11226.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_97_fu_29606_p2() {
    w_97_fu_29606_p2 = (!w96_reg_11303.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w96_reg_11303.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_99_cast_cast_fu_30466_p1() {
    w_99_cast_cast_fu_30466_p1 = esl_zext<15,4>(w_99_fu_30460_p2.read());
}

void ShuffleNetV2::thread_w_99_fu_30460_p2() {
    w_99_fu_30460_p2 = (!w98_reg_11435.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w98_reg_11435.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_cast_cast_fu_14372_p1() {
    w_cast_cast_fu_14372_p1 = esl_zext<8,6>(w_reg_8709.read());
}

void ShuffleNetV2::thread_weights_24_1_3x3_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state332.read())) {
        weights_24_1_3x3_V_address0 = weights_24_1_3x3_V_a_4_reg_41027.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state259.read())) {
        weights_24_1_3x3_V_address0 = weights_24_1_3x3_V_a_3_reg_40538.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state186.read())) {
        weights_24_1_3x3_V_address0 = weights_24_1_3x3_V_a_2_reg_40049.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read())) {
        weights_24_1_3x3_V_address0 = weights_24_1_3x3_V_a_1_reg_39598.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read())) {
        weights_24_1_3x3_V_address0 = weights_24_1_3x3_V_a_reg_39374.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state196.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state269.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state342.read()))) {
        weights_24_1_3x3_V_address0 = grp_subconv_3x3_16_no_re_fu_13639_weight_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        weights_24_1_3x3_V_address0 = grp_subconv_3x3_32_strid_1_fu_13581_weight_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read())) {
        weights_24_1_3x3_V_address0 = grp_subconv_3x3_32_strid_fu_13547_weight_V_address0.read();
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
        weights_24_1_3x3_V_ce0 = grp_subconv_3x3_16_no_re_fu_13639_weight_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        weights_24_1_3x3_V_ce0 = grp_subconv_3x3_32_strid_1_fu_13581_weight_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read())) {
        weights_24_1_3x3_V_ce0 = grp_subconv_3x3_32_strid_fu_13547_weight_V_ce0.read();
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
        weights_24_24_1x1_V_10_address0 = weights_24_24_1x1_V_201_reg_41118.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read())) {
        weights_24_24_1x1_V_10_address0 = weights_24_24_1x1_V_177_reg_40882.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read())) {
        weights_24_24_1x1_V_10_address0 = weights_24_24_1x1_V_153_reg_40629.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read())) {
        weights_24_24_1x1_V_10_address0 = weights_24_24_1x1_V_129_reg_40399.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        weights_24_24_1x1_V_10_address0 = weights_24_24_1x1_V_105_reg_40134.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read())) {
        weights_24_24_1x1_V_10_address0 = weights_24_24_1x1_V_81_reg_39910.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read())) {
        weights_24_24_1x1_V_10_address0 = weights_24_24_1x1_V_57_reg_39695.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        weights_24_24_1x1_V_10_address0 = weights_24_24_1x1_V_33_reg_39465.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        weights_24_24_1x1_V_10_address0 = weights_24_24_1x1_V_9_reg_39240.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_10_address0 = grp_subconv_1x1_16_p_fu_13225_weight_10_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_10_address0 = grp_subconv_1x1_32_p_fu_13099_weight_10_V_address0.read();
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
        weights_24_24_1x1_V_10_ce0 = grp_subconv_1x1_16_p_fu_13225_weight_10_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_10_ce0 = grp_subconv_1x1_32_p_fu_13099_weight_10_V_ce0.read();
    } else {
        weights_24_24_1x1_V_10_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_10_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && 
          esl_seteq<1,5,5>(co_reg_8731.read(), ap_const_lv5_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) && 
          esl_seteq<1,5,5>(co9_reg_8809.read(), ap_const_lv5_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) && 
          esl_seteq<1,5,5>(co16_reg_8887.read(), ap_const_lv5_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) && 
          esl_seteq<1,5,5>(co22_reg_8954.read(), ap_const_lv5_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) && 
          esl_seteq<1,5,5>(co29_reg_9032.read(), ap_const_lv5_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) && 
          esl_seteq<1,5,5>(co38_reg_9132.read(), ap_const_lv5_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) && 
          esl_seteq<1,5,5>(co43_reg_9210.read(), ap_const_lv5_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) && 
          esl_seteq<1,5,5>(co48_reg_9310.read(), ap_const_lv5_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()) && 
          esl_seteq<1,5,5>(co53_reg_9388.read(), ap_const_lv5_A)))) {
        weights_24_24_1x1_V_10_we0 = ap_const_logic_1;
    } else {
        weights_24_24_1x1_V_10_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_11_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read())) {
        weights_24_24_1x1_V_11_address0 = weights_24_24_1x1_V_206_reg_41143.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read())) {
        weights_24_24_1x1_V_11_address0 = weights_24_24_1x1_V_182_reg_40907.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read())) {
        weights_24_24_1x1_V_11_address0 = weights_24_24_1x1_V_158_reg_40654.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read())) {
        weights_24_24_1x1_V_11_address0 = weights_24_24_1x1_V_134_reg_40424.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        weights_24_24_1x1_V_11_address0 = weights_24_24_1x1_V_110_reg_40159.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read())) {
        weights_24_24_1x1_V_11_address0 = weights_24_24_1x1_V_86_reg_39935.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read())) {
        weights_24_24_1x1_V_11_address0 = weights_24_24_1x1_V_62_reg_39720.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        weights_24_24_1x1_V_11_address0 = weights_24_24_1x1_V_38_reg_39490.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        weights_24_24_1x1_V_11_address0 = weights_24_24_1x1_V_14_reg_39265.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_11_address0 = grp_subconv_1x1_16_p_fu_13225_weight_11_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_11_address0 = grp_subconv_1x1_32_p_fu_13099_weight_11_V_address0.read();
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
        weights_24_24_1x1_V_11_ce0 = grp_subconv_1x1_16_p_fu_13225_weight_11_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_11_ce0 = grp_subconv_1x1_32_p_fu_13099_weight_11_V_ce0.read();
    } else {
        weights_24_24_1x1_V_11_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_11_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && 
          esl_seteq<1,5,5>(co_reg_8731.read(), ap_const_lv5_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) && 
          esl_seteq<1,5,5>(co9_reg_8809.read(), ap_const_lv5_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) && 
          esl_seteq<1,5,5>(co16_reg_8887.read(), ap_const_lv5_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) && 
          esl_seteq<1,5,5>(co22_reg_8954.read(), ap_const_lv5_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) && 
          esl_seteq<1,5,5>(co29_reg_9032.read(), ap_const_lv5_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) && 
          esl_seteq<1,5,5>(co38_reg_9132.read(), ap_const_lv5_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) && 
          esl_seteq<1,5,5>(co43_reg_9210.read(), ap_const_lv5_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) && 
          esl_seteq<1,5,5>(co48_reg_9310.read(), ap_const_lv5_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()) && 
          esl_seteq<1,5,5>(co53_reg_9388.read(), ap_const_lv5_B)))) {
        weights_24_24_1x1_V_11_we0 = ap_const_logic_1;
    } else {
        weights_24_24_1x1_V_11_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_12_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read())) {
        weights_24_24_1x1_V_12_address0 = weights_24_24_1x1_V_209_reg_41158.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read())) {
        weights_24_24_1x1_V_12_address0 = weights_24_24_1x1_V_185_reg_40922.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read())) {
        weights_24_24_1x1_V_12_address0 = weights_24_24_1x1_V_161_reg_40669.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read())) {
        weights_24_24_1x1_V_12_address0 = weights_24_24_1x1_V_137_reg_40439.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        weights_24_24_1x1_V_12_address0 = weights_24_24_1x1_V_113_reg_40174.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read())) {
        weights_24_24_1x1_V_12_address0 = weights_24_24_1x1_V_89_reg_39950.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read())) {
        weights_24_24_1x1_V_12_address0 = weights_24_24_1x1_V_65_reg_39735.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        weights_24_24_1x1_V_12_address0 = weights_24_24_1x1_V_41_reg_39505.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        weights_24_24_1x1_V_12_address0 = weights_24_24_1x1_V_17_reg_39280.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_12_address0 = grp_subconv_1x1_16_p_fu_13225_weight_12_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_12_address0 = grp_subconv_1x1_32_p_fu_13099_weight_12_V_address0.read();
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
        weights_24_24_1x1_V_12_ce0 = grp_subconv_1x1_16_p_fu_13225_weight_12_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_12_ce0 = grp_subconv_1x1_32_p_fu_13099_weight_12_V_ce0.read();
    } else {
        weights_24_24_1x1_V_12_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_12_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && 
          esl_seteq<1,5,5>(co_reg_8731.read(), ap_const_lv5_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) && 
          esl_seteq<1,5,5>(co9_reg_8809.read(), ap_const_lv5_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) && 
          esl_seteq<1,5,5>(co16_reg_8887.read(), ap_const_lv5_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) && 
          esl_seteq<1,5,5>(co22_reg_8954.read(), ap_const_lv5_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) && 
          esl_seteq<1,5,5>(co29_reg_9032.read(), ap_const_lv5_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) && 
          esl_seteq<1,5,5>(co38_reg_9132.read(), ap_const_lv5_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) && 
          esl_seteq<1,5,5>(co43_reg_9210.read(), ap_const_lv5_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) && 
          esl_seteq<1,5,5>(co48_reg_9310.read(), ap_const_lv5_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()) && 
          esl_seteq<1,5,5>(co53_reg_9388.read(), ap_const_lv5_C)))) {
        weights_24_24_1x1_V_12_we0 = ap_const_logic_1;
    } else {
        weights_24_24_1x1_V_12_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_13_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read())) {
        weights_24_24_1x1_V_13_address0 = weights_24_24_1x1_V_199_reg_41108.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read())) {
        weights_24_24_1x1_V_13_address0 = weights_24_24_1x1_V_175_reg_40872.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read())) {
        weights_24_24_1x1_V_13_address0 = weights_24_24_1x1_V_151_reg_40619.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read())) {
        weights_24_24_1x1_V_13_address0 = weights_24_24_1x1_V_127_reg_40389.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        weights_24_24_1x1_V_13_address0 = weights_24_24_1x1_V_103_reg_40124.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read())) {
        weights_24_24_1x1_V_13_address0 = weights_24_24_1x1_V_79_reg_39900.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read())) {
        weights_24_24_1x1_V_13_address0 = weights_24_24_1x1_V_55_reg_39685.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        weights_24_24_1x1_V_13_address0 = weights_24_24_1x1_V_31_reg_39455.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        weights_24_24_1x1_V_13_address0 = weights_24_24_1x1_V_7_reg_39230.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_13_address0 = grp_subconv_1x1_16_p_fu_13225_weight_13_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_13_address0 = grp_subconv_1x1_32_p_fu_13099_weight_13_V_address0.read();
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
        weights_24_24_1x1_V_13_ce0 = grp_subconv_1x1_16_p_fu_13225_weight_13_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_13_ce0 = grp_subconv_1x1_32_p_fu_13099_weight_13_V_ce0.read();
    } else {
        weights_24_24_1x1_V_13_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_13_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && 
          esl_seteq<1,5,5>(co_reg_8731.read(), ap_const_lv5_D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) && 
          esl_seteq<1,5,5>(co9_reg_8809.read(), ap_const_lv5_D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) && 
          esl_seteq<1,5,5>(co16_reg_8887.read(), ap_const_lv5_D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) && 
          esl_seteq<1,5,5>(co22_reg_8954.read(), ap_const_lv5_D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) && 
          esl_seteq<1,5,5>(co29_reg_9032.read(), ap_const_lv5_D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) && 
          esl_seteq<1,5,5>(co38_reg_9132.read(), ap_const_lv5_D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) && 
          esl_seteq<1,5,5>(co43_reg_9210.read(), ap_const_lv5_D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) && 
          esl_seteq<1,5,5>(co48_reg_9310.read(), ap_const_lv5_D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()) && 
          esl_seteq<1,5,5>(co53_reg_9388.read(), ap_const_lv5_D)))) {
        weights_24_24_1x1_V_13_we0 = ap_const_logic_1;
    } else {
        weights_24_24_1x1_V_13_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_14_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read())) {
        weights_24_24_1x1_V_14_address0 = weights_24_24_1x1_V_202_reg_41123.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read())) {
        weights_24_24_1x1_V_14_address0 = weights_24_24_1x1_V_178_reg_40887.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read())) {
        weights_24_24_1x1_V_14_address0 = weights_24_24_1x1_V_154_reg_40634.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read())) {
        weights_24_24_1x1_V_14_address0 = weights_24_24_1x1_V_130_reg_40404.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        weights_24_24_1x1_V_14_address0 = weights_24_24_1x1_V_106_reg_40139.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read())) {
        weights_24_24_1x1_V_14_address0 = weights_24_24_1x1_V_82_reg_39915.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read())) {
        weights_24_24_1x1_V_14_address0 = weights_24_24_1x1_V_58_reg_39700.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        weights_24_24_1x1_V_14_address0 = weights_24_24_1x1_V_34_reg_39470.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        weights_24_24_1x1_V_14_address0 = weights_24_24_1x1_V_10_reg_39245.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_14_address0 = grp_subconv_1x1_16_p_fu_13225_weight_14_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_14_address0 = grp_subconv_1x1_32_p_fu_13099_weight_14_V_address0.read();
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
        weights_24_24_1x1_V_14_ce0 = grp_subconv_1x1_16_p_fu_13225_weight_14_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_14_ce0 = grp_subconv_1x1_32_p_fu_13099_weight_14_V_ce0.read();
    } else {
        weights_24_24_1x1_V_14_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_14_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && 
          esl_seteq<1,5,5>(co_reg_8731.read(), ap_const_lv5_E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) && 
          esl_seteq<1,5,5>(co9_reg_8809.read(), ap_const_lv5_E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) && 
          esl_seteq<1,5,5>(co16_reg_8887.read(), ap_const_lv5_E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) && 
          esl_seteq<1,5,5>(co22_reg_8954.read(), ap_const_lv5_E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) && 
          esl_seteq<1,5,5>(co29_reg_9032.read(), ap_const_lv5_E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) && 
          esl_seteq<1,5,5>(co38_reg_9132.read(), ap_const_lv5_E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) && 
          esl_seteq<1,5,5>(co43_reg_9210.read(), ap_const_lv5_E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) && 
          esl_seteq<1,5,5>(co48_reg_9310.read(), ap_const_lv5_E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()) && 
          esl_seteq<1,5,5>(co53_reg_9388.read(), ap_const_lv5_E)))) {
        weights_24_24_1x1_V_14_we0 = ap_const_logic_1;
    } else {
        weights_24_24_1x1_V_14_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_15_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read())) {
        weights_24_24_1x1_V_15_address0 = weights_24_24_1x1_V_204_reg_41133.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read())) {
        weights_24_24_1x1_V_15_address0 = weights_24_24_1x1_V_180_reg_40897.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read())) {
        weights_24_24_1x1_V_15_address0 = weights_24_24_1x1_V_156_reg_40644.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read())) {
        weights_24_24_1x1_V_15_address0 = weights_24_24_1x1_V_132_reg_40414.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        weights_24_24_1x1_V_15_address0 = weights_24_24_1x1_V_108_reg_40149.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read())) {
        weights_24_24_1x1_V_15_address0 = weights_24_24_1x1_V_84_reg_39925.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read())) {
        weights_24_24_1x1_V_15_address0 = weights_24_24_1x1_V_60_reg_39710.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        weights_24_24_1x1_V_15_address0 = weights_24_24_1x1_V_36_reg_39480.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        weights_24_24_1x1_V_15_address0 = weights_24_24_1x1_V_12_reg_39255.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_15_address0 = grp_subconv_1x1_16_p_fu_13225_weight_15_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_15_address0 = grp_subconv_1x1_32_p_fu_13099_weight_15_V_address0.read();
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
        weights_24_24_1x1_V_15_ce0 = grp_subconv_1x1_16_p_fu_13225_weight_15_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_15_ce0 = grp_subconv_1x1_32_p_fu_13099_weight_15_V_ce0.read();
    } else {
        weights_24_24_1x1_V_15_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_15_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && 
          esl_seteq<1,5,5>(co_reg_8731.read(), ap_const_lv5_F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) && 
          esl_seteq<1,5,5>(co9_reg_8809.read(), ap_const_lv5_F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) && 
          esl_seteq<1,5,5>(co16_reg_8887.read(), ap_const_lv5_F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) && 
          esl_seteq<1,5,5>(co22_reg_8954.read(), ap_const_lv5_F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) && 
          esl_seteq<1,5,5>(co29_reg_9032.read(), ap_const_lv5_F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) && 
          esl_seteq<1,5,5>(co38_reg_9132.read(), ap_const_lv5_F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) && 
          esl_seteq<1,5,5>(co43_reg_9210.read(), ap_const_lv5_F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) && 
          esl_seteq<1,5,5>(co48_reg_9310.read(), ap_const_lv5_F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()) && 
          esl_seteq<1,5,5>(co53_reg_9388.read(), ap_const_lv5_F)))) {
        weights_24_24_1x1_V_15_we0 = ap_const_logic_1;
    } else {
        weights_24_24_1x1_V_15_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_16_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read())) {
        weights_24_24_1x1_V_16_address0 = weights_24_24_1x1_V_192_reg_41073.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read())) {
        weights_24_24_1x1_V_16_address0 = weights_24_24_1x1_V_168_reg_40837.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read())) {
        weights_24_24_1x1_V_16_address0 = weights_24_24_1x1_V_144_reg_40584.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read())) {
        weights_24_24_1x1_V_16_address0 = weights_24_24_1x1_V_120_reg_40354.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        weights_24_24_1x1_V_16_address0 = weights_24_24_1x1_V_96_reg_40089.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read())) {
        weights_24_24_1x1_V_16_address0 = weights_24_24_1x1_V_72_reg_39865.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read())) {
        weights_24_24_1x1_V_16_address0 = weights_24_24_1x1_V_48_reg_39650.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        weights_24_24_1x1_V_16_address0 = weights_24_24_1x1_V_24_reg_39420.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        weights_24_24_1x1_V_16_address0 = weights_24_24_1x1_V_s_reg_39195.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_16_address0 = grp_subconv_1x1_16_p_fu_13225_weight_16_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_16_address0 = grp_subconv_1x1_32_p_fu_13099_weight_16_V_address0.read();
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
        weights_24_24_1x1_V_16_ce0 = grp_subconv_1x1_16_p_fu_13225_weight_16_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_16_ce0 = grp_subconv_1x1_32_p_fu_13099_weight_16_V_ce0.read();
    } else {
        weights_24_24_1x1_V_16_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_16_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && 
          esl_seteq<1,5,5>(co_reg_8731.read(), ap_const_lv5_10)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) && 
          esl_seteq<1,5,5>(co9_reg_8809.read(), ap_const_lv5_10)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) && 
          esl_seteq<1,5,5>(co16_reg_8887.read(), ap_const_lv5_10)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) && 
          esl_seteq<1,5,5>(co22_reg_8954.read(), ap_const_lv5_10)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) && 
          esl_seteq<1,5,5>(co29_reg_9032.read(), ap_const_lv5_10)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) && 
          esl_seteq<1,5,5>(co38_reg_9132.read(), ap_const_lv5_10)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) && 
          esl_seteq<1,5,5>(co43_reg_9210.read(), ap_const_lv5_10)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) && 
          esl_seteq<1,5,5>(co48_reg_9310.read(), ap_const_lv5_10)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()) && 
          esl_seteq<1,5,5>(co53_reg_9388.read(), ap_const_lv5_10)))) {
        weights_24_24_1x1_V_16_we0 = ap_const_logic_1;
    } else {
        weights_24_24_1x1_V_16_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_17_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read())) {
        weights_24_24_1x1_V_17_address0 = weights_24_24_1x1_V_208_reg_41153.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read())) {
        weights_24_24_1x1_V_17_address0 = weights_24_24_1x1_V_184_reg_40917.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read())) {
        weights_24_24_1x1_V_17_address0 = weights_24_24_1x1_V_160_reg_40664.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read())) {
        weights_24_24_1x1_V_17_address0 = weights_24_24_1x1_V_136_reg_40434.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        weights_24_24_1x1_V_17_address0 = weights_24_24_1x1_V_112_reg_40169.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read())) {
        weights_24_24_1x1_V_17_address0 = weights_24_24_1x1_V_88_reg_39945.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read())) {
        weights_24_24_1x1_V_17_address0 = weights_24_24_1x1_V_64_reg_39730.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        weights_24_24_1x1_V_17_address0 = weights_24_24_1x1_V_40_reg_39500.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        weights_24_24_1x1_V_17_address0 = weights_24_24_1x1_V_16_reg_39275.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_17_address0 = grp_subconv_1x1_16_p_fu_13225_weight_17_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_17_address0 = grp_subconv_1x1_32_p_fu_13099_weight_17_V_address0.read();
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
        weights_24_24_1x1_V_17_ce0 = grp_subconv_1x1_16_p_fu_13225_weight_17_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_17_ce0 = grp_subconv_1x1_32_p_fu_13099_weight_17_V_ce0.read();
    } else {
        weights_24_24_1x1_V_17_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_17_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && 
          esl_seteq<1,5,5>(co_reg_8731.read(), ap_const_lv5_11)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) && 
          esl_seteq<1,5,5>(co9_reg_8809.read(), ap_const_lv5_11)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) && 
          esl_seteq<1,5,5>(co16_reg_8887.read(), ap_const_lv5_11)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) && 
          esl_seteq<1,5,5>(co22_reg_8954.read(), ap_const_lv5_11)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) && 
          esl_seteq<1,5,5>(co29_reg_9032.read(), ap_const_lv5_11)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) && 
          esl_seteq<1,5,5>(co38_reg_9132.read(), ap_const_lv5_11)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) && 
          esl_seteq<1,5,5>(co43_reg_9210.read(), ap_const_lv5_11)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) && 
          esl_seteq<1,5,5>(co48_reg_9310.read(), ap_const_lv5_11)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()) && 
          esl_seteq<1,5,5>(co53_reg_9388.read(), ap_const_lv5_11)))) {
        weights_24_24_1x1_V_17_we0 = ap_const_logic_1;
    } else {
        weights_24_24_1x1_V_17_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_18_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read())) {
        weights_24_24_1x1_V_18_address0 = weights_24_24_1x1_V_214_reg_41183.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read())) {
        weights_24_24_1x1_V_18_address0 = weights_24_24_1x1_V_190_reg_40947.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read())) {
        weights_24_24_1x1_V_18_address0 = weights_24_24_1x1_V_166_reg_40694.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read())) {
        weights_24_24_1x1_V_18_address0 = weights_24_24_1x1_V_142_reg_40464.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        weights_24_24_1x1_V_18_address0 = weights_24_24_1x1_V_118_reg_40199.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read())) {
        weights_24_24_1x1_V_18_address0 = weights_24_24_1x1_V_94_reg_39975.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read())) {
        weights_24_24_1x1_V_18_address0 = weights_24_24_1x1_V_70_reg_39760.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        weights_24_24_1x1_V_18_address0 = weights_24_24_1x1_V_46_reg_39530.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        weights_24_24_1x1_V_18_address0 = weights_24_24_1x1_V_22_reg_39305.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_18_address0 = grp_subconv_1x1_16_p_fu_13225_weight_18_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_18_address0 = grp_subconv_1x1_32_p_fu_13099_weight_18_V_address0.read();
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
        weights_24_24_1x1_V_18_ce0 = grp_subconv_1x1_16_p_fu_13225_weight_18_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_18_ce0 = grp_subconv_1x1_32_p_fu_13099_weight_18_V_ce0.read();
    } else {
        weights_24_24_1x1_V_18_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_18_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && 
          esl_seteq<1,5,5>(co_reg_8731.read(), ap_const_lv5_12)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) && 
          esl_seteq<1,5,5>(co9_reg_8809.read(), ap_const_lv5_12)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) && 
          esl_seteq<1,5,5>(co16_reg_8887.read(), ap_const_lv5_12)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) && 
          esl_seteq<1,5,5>(co22_reg_8954.read(), ap_const_lv5_12)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) && 
          esl_seteq<1,5,5>(co29_reg_9032.read(), ap_const_lv5_12)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) && 
          esl_seteq<1,5,5>(co38_reg_9132.read(), ap_const_lv5_12)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) && 
          esl_seteq<1,5,5>(co43_reg_9210.read(), ap_const_lv5_12)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) && 
          esl_seteq<1,5,5>(co48_reg_9310.read(), ap_const_lv5_12)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()) && 
          esl_seteq<1,5,5>(co53_reg_9388.read(), ap_const_lv5_12)))) {
        weights_24_24_1x1_V_18_we0 = ap_const_logic_1;
    } else {
        weights_24_24_1x1_V_18_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_19_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read())) {
        weights_24_24_1x1_V_19_address0 = weights_24_24_1x1_V_200_reg_41113.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read())) {
        weights_24_24_1x1_V_19_address0 = weights_24_24_1x1_V_176_reg_40877.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read())) {
        weights_24_24_1x1_V_19_address0 = weights_24_24_1x1_V_152_reg_40624.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read())) {
        weights_24_24_1x1_V_19_address0 = weights_24_24_1x1_V_128_reg_40394.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        weights_24_24_1x1_V_19_address0 = weights_24_24_1x1_V_104_reg_40129.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read())) {
        weights_24_24_1x1_V_19_address0 = weights_24_24_1x1_V_80_reg_39905.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read())) {
        weights_24_24_1x1_V_19_address0 = weights_24_24_1x1_V_56_reg_39690.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        weights_24_24_1x1_V_19_address0 = weights_24_24_1x1_V_32_reg_39460.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        weights_24_24_1x1_V_19_address0 = weights_24_24_1x1_V_8_reg_39235.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_19_address0 = grp_subconv_1x1_16_p_fu_13225_weight_19_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_19_address0 = grp_subconv_1x1_32_p_fu_13099_weight_19_V_address0.read();
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
        weights_24_24_1x1_V_19_ce0 = grp_subconv_1x1_16_p_fu_13225_weight_19_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_19_ce0 = grp_subconv_1x1_32_p_fu_13099_weight_19_V_ce0.read();
    } else {
        weights_24_24_1x1_V_19_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_19_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && 
          esl_seteq<1,5,5>(co_reg_8731.read(), ap_const_lv5_13)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) && 
          esl_seteq<1,5,5>(co9_reg_8809.read(), ap_const_lv5_13)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) && 
          esl_seteq<1,5,5>(co16_reg_8887.read(), ap_const_lv5_13)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) && 
          esl_seteq<1,5,5>(co22_reg_8954.read(), ap_const_lv5_13)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) && 
          esl_seteq<1,5,5>(co29_reg_9032.read(), ap_const_lv5_13)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) && 
          esl_seteq<1,5,5>(co38_reg_9132.read(), ap_const_lv5_13)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) && 
          esl_seteq<1,5,5>(co43_reg_9210.read(), ap_const_lv5_13)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) && 
          esl_seteq<1,5,5>(co48_reg_9310.read(), ap_const_lv5_13)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()) && 
          esl_seteq<1,5,5>(co53_reg_9388.read(), ap_const_lv5_13)))) {
        weights_24_24_1x1_V_19_we0 = ap_const_logic_1;
    } else {
        weights_24_24_1x1_V_19_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read())) {
        weights_24_24_1x1_V_1_address0 = weights_24_24_1x1_V_207_reg_41148.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read())) {
        weights_24_24_1x1_V_1_address0 = weights_24_24_1x1_V_183_reg_40912.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read())) {
        weights_24_24_1x1_V_1_address0 = weights_24_24_1x1_V_159_reg_40659.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read())) {
        weights_24_24_1x1_V_1_address0 = weights_24_24_1x1_V_135_reg_40429.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        weights_24_24_1x1_V_1_address0 = weights_24_24_1x1_V_111_reg_40164.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read())) {
        weights_24_24_1x1_V_1_address0 = weights_24_24_1x1_V_87_reg_39940.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read())) {
        weights_24_24_1x1_V_1_address0 = weights_24_24_1x1_V_63_reg_39725.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        weights_24_24_1x1_V_1_address0 = weights_24_24_1x1_V_39_reg_39495.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        weights_24_24_1x1_V_1_address0 = weights_24_24_1x1_V_15_reg_39270.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_1_address0 = grp_subconv_1x1_16_p_fu_13225_weight_1_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_1_address0 = grp_subconv_1x1_32_p_fu_13099_weight_1_V_address0.read();
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
        weights_24_24_1x1_V_1_ce0 = grp_subconv_1x1_16_p_fu_13225_weight_1_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_1_ce0 = grp_subconv_1x1_32_p_fu_13099_weight_1_V_ce0.read();
    } else {
        weights_24_24_1x1_V_1_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_1_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && 
          esl_seteq<1,5,5>(co_reg_8731.read(), ap_const_lv5_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) && 
          esl_seteq<1,5,5>(co9_reg_8809.read(), ap_const_lv5_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) && 
          esl_seteq<1,5,5>(co16_reg_8887.read(), ap_const_lv5_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) && 
          esl_seteq<1,5,5>(co22_reg_8954.read(), ap_const_lv5_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) && 
          esl_seteq<1,5,5>(co29_reg_9032.read(), ap_const_lv5_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) && 
          esl_seteq<1,5,5>(co38_reg_9132.read(), ap_const_lv5_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) && 
          esl_seteq<1,5,5>(co43_reg_9210.read(), ap_const_lv5_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) && 
          esl_seteq<1,5,5>(co48_reg_9310.read(), ap_const_lv5_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()) && 
          esl_seteq<1,5,5>(co53_reg_9388.read(), ap_const_lv5_1)))) {
        weights_24_24_1x1_V_1_we0 = ap_const_logic_1;
    } else {
        weights_24_24_1x1_V_1_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_20_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read())) {
        weights_24_24_1x1_V_20_address0 = weights_24_24_1x1_V_198_reg_41103.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read())) {
        weights_24_24_1x1_V_20_address0 = weights_24_24_1x1_V_174_reg_40867.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read())) {
        weights_24_24_1x1_V_20_address0 = weights_24_24_1x1_V_150_reg_40614.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read())) {
        weights_24_24_1x1_V_20_address0 = weights_24_24_1x1_V_126_reg_40384.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        weights_24_24_1x1_V_20_address0 = weights_24_24_1x1_V_102_reg_40119.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read())) {
        weights_24_24_1x1_V_20_address0 = weights_24_24_1x1_V_78_reg_39895.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read())) {
        weights_24_24_1x1_V_20_address0 = weights_24_24_1x1_V_54_reg_39680.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        weights_24_24_1x1_V_20_address0 = weights_24_24_1x1_V_30_reg_39450.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        weights_24_24_1x1_V_20_address0 = weights_24_24_1x1_V_6_reg_39225.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_20_address0 = grp_subconv_1x1_16_p_fu_13225_weight_20_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_20_address0 = grp_subconv_1x1_32_p_fu_13099_weight_20_V_address0.read();
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
        weights_24_24_1x1_V_20_ce0 = grp_subconv_1x1_16_p_fu_13225_weight_20_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_20_ce0 = grp_subconv_1x1_32_p_fu_13099_weight_20_V_ce0.read();
    } else {
        weights_24_24_1x1_V_20_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_20_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && 
          esl_seteq<1,5,5>(co_reg_8731.read(), ap_const_lv5_14)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) && 
          esl_seteq<1,5,5>(co9_reg_8809.read(), ap_const_lv5_14)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) && 
          esl_seteq<1,5,5>(co16_reg_8887.read(), ap_const_lv5_14)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) && 
          esl_seteq<1,5,5>(co22_reg_8954.read(), ap_const_lv5_14)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) && 
          esl_seteq<1,5,5>(co29_reg_9032.read(), ap_const_lv5_14)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) && 
          esl_seteq<1,5,5>(co38_reg_9132.read(), ap_const_lv5_14)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) && 
          esl_seteq<1,5,5>(co43_reg_9210.read(), ap_const_lv5_14)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) && 
          esl_seteq<1,5,5>(co48_reg_9310.read(), ap_const_lv5_14)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()) && 
          esl_seteq<1,5,5>(co53_reg_9388.read(), ap_const_lv5_14)))) {
        weights_24_24_1x1_V_20_we0 = ap_const_logic_1;
    } else {
        weights_24_24_1x1_V_20_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_21_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read())) {
        weights_24_24_1x1_V_21_address0 = weights_24_24_1x1_V_215_reg_41188.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read())) {
        weights_24_24_1x1_V_21_address0 = weights_24_24_1x1_V_191_reg_40952.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read())) {
        weights_24_24_1x1_V_21_address0 = weights_24_24_1x1_V_167_reg_40699.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read())) {
        weights_24_24_1x1_V_21_address0 = weights_24_24_1x1_V_143_reg_40469.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        weights_24_24_1x1_V_21_address0 = weights_24_24_1x1_V_119_reg_40204.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read())) {
        weights_24_24_1x1_V_21_address0 = weights_24_24_1x1_V_95_reg_39980.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read())) {
        weights_24_24_1x1_V_21_address0 = weights_24_24_1x1_V_71_reg_39765.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        weights_24_24_1x1_V_21_address0 = weights_24_24_1x1_V_47_reg_39535.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        weights_24_24_1x1_V_21_address0 = weights_24_24_1x1_V_23_reg_39310.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_21_address0 = grp_subconv_1x1_16_p_fu_13225_weight_21_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_21_address0 = grp_subconv_1x1_32_p_fu_13099_weight_21_V_address0.read();
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
        weights_24_24_1x1_V_21_ce0 = grp_subconv_1x1_16_p_fu_13225_weight_21_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_21_ce0 = grp_subconv_1x1_32_p_fu_13099_weight_21_V_ce0.read();
    } else {
        weights_24_24_1x1_V_21_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_21_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && 
          esl_seteq<1,5,5>(co_reg_8731.read(), ap_const_lv5_15)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) && 
          esl_seteq<1,5,5>(co9_reg_8809.read(), ap_const_lv5_15)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) && 
          esl_seteq<1,5,5>(co16_reg_8887.read(), ap_const_lv5_15)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) && 
          esl_seteq<1,5,5>(co22_reg_8954.read(), ap_const_lv5_15)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) && 
          esl_seteq<1,5,5>(co29_reg_9032.read(), ap_const_lv5_15)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) && 
          esl_seteq<1,5,5>(co38_reg_9132.read(), ap_const_lv5_15)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) && 
          esl_seteq<1,5,5>(co43_reg_9210.read(), ap_const_lv5_15)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) && 
          esl_seteq<1,5,5>(co48_reg_9310.read(), ap_const_lv5_15)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()) && 
          esl_seteq<1,5,5>(co53_reg_9388.read(), ap_const_lv5_15)))) {
        weights_24_24_1x1_V_21_we0 = ap_const_logic_1;
    } else {
        weights_24_24_1x1_V_21_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_22_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read())) {
        weights_24_24_1x1_V_22_address0 = weights_24_24_1x1_V_197_reg_41098.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read())) {
        weights_24_24_1x1_V_22_address0 = weights_24_24_1x1_V_173_reg_40862.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read())) {
        weights_24_24_1x1_V_22_address0 = weights_24_24_1x1_V_149_reg_40609.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read())) {
        weights_24_24_1x1_V_22_address0 = weights_24_24_1x1_V_125_reg_40379.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        weights_24_24_1x1_V_22_address0 = weights_24_24_1x1_V_101_reg_40114.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read())) {
        weights_24_24_1x1_V_22_address0 = weights_24_24_1x1_V_77_reg_39890.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read())) {
        weights_24_24_1x1_V_22_address0 = weights_24_24_1x1_V_53_reg_39675.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        weights_24_24_1x1_V_22_address0 = weights_24_24_1x1_V_29_reg_39445.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        weights_24_24_1x1_V_22_address0 = weights_24_24_1x1_V_5_reg_39220.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_22_address0 = grp_subconv_1x1_16_p_fu_13225_weight_22_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_22_address0 = grp_subconv_1x1_32_p_fu_13099_weight_22_V_address0.read();
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
        weights_24_24_1x1_V_22_ce0 = grp_subconv_1x1_16_p_fu_13225_weight_22_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_22_ce0 = grp_subconv_1x1_32_p_fu_13099_weight_22_V_ce0.read();
    } else {
        weights_24_24_1x1_V_22_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_22_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && 
          esl_seteq<1,5,5>(co_reg_8731.read(), ap_const_lv5_16)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) && 
          esl_seteq<1,5,5>(co9_reg_8809.read(), ap_const_lv5_16)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) && 
          esl_seteq<1,5,5>(co16_reg_8887.read(), ap_const_lv5_16)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) && 
          esl_seteq<1,5,5>(co22_reg_8954.read(), ap_const_lv5_16)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) && 
          esl_seteq<1,5,5>(co29_reg_9032.read(), ap_const_lv5_16)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) && 
          esl_seteq<1,5,5>(co38_reg_9132.read(), ap_const_lv5_16)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) && 
          esl_seteq<1,5,5>(co43_reg_9210.read(), ap_const_lv5_16)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) && 
          esl_seteq<1,5,5>(co48_reg_9310.read(), ap_const_lv5_16)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()) && 
          esl_seteq<1,5,5>(co53_reg_9388.read(), ap_const_lv5_16)))) {
        weights_24_24_1x1_V_22_we0 = ap_const_logic_1;
    } else {
        weights_24_24_1x1_V_22_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_23_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read())) {
        weights_24_24_1x1_V_23_address0 = weights_24_24_1x1_V_203_reg_41128.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read())) {
        weights_24_24_1x1_V_23_address0 = weights_24_24_1x1_V_179_reg_40892.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read())) {
        weights_24_24_1x1_V_23_address0 = weights_24_24_1x1_V_155_reg_40639.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read())) {
        weights_24_24_1x1_V_23_address0 = weights_24_24_1x1_V_131_reg_40409.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        weights_24_24_1x1_V_23_address0 = weights_24_24_1x1_V_107_reg_40144.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read())) {
        weights_24_24_1x1_V_23_address0 = weights_24_24_1x1_V_83_reg_39920.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read())) {
        weights_24_24_1x1_V_23_address0 = weights_24_24_1x1_V_59_reg_39705.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        weights_24_24_1x1_V_23_address0 = weights_24_24_1x1_V_35_reg_39475.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        weights_24_24_1x1_V_23_address0 = weights_24_24_1x1_V_11_reg_39250.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_23_address0 = grp_subconv_1x1_16_p_fu_13225_weight_23_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_23_address0 = grp_subconv_1x1_32_p_fu_13099_weight_23_V_address0.read();
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
        weights_24_24_1x1_V_23_ce0 = grp_subconv_1x1_16_p_fu_13225_weight_23_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_23_ce0 = grp_subconv_1x1_32_p_fu_13099_weight_23_V_ce0.read();
    } else {
        weights_24_24_1x1_V_23_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_23_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && 
          !esl_seteq<1,5,5>(ap_const_lv5_0, co_reg_8731.read()) && 
          !esl_seteq<1,5,5>(co_reg_8731.read(), ap_const_lv5_1) && 
          !esl_seteq<1,5,5>(co_reg_8731.read(), ap_const_lv5_2) && 
          !esl_seteq<1,5,5>(co_reg_8731.read(), ap_const_lv5_3) && 
          !esl_seteq<1,5,5>(co_reg_8731.read(), ap_const_lv5_4) && 
          !esl_seteq<1,5,5>(co_reg_8731.read(), ap_const_lv5_5) && 
          !esl_seteq<1,5,5>(co_reg_8731.read(), ap_const_lv5_6) && 
          !esl_seteq<1,5,5>(co_reg_8731.read(), ap_const_lv5_7) && 
          !esl_seteq<1,5,5>(co_reg_8731.read(), ap_const_lv5_8) && 
          !esl_seteq<1,5,5>(co_reg_8731.read(), ap_const_lv5_9) && 
          !esl_seteq<1,5,5>(co_reg_8731.read(), ap_const_lv5_A) && 
          !esl_seteq<1,5,5>(co_reg_8731.read(), ap_const_lv5_B) && 
          !esl_seteq<1,5,5>(co_reg_8731.read(), ap_const_lv5_C) && 
          !esl_seteq<1,5,5>(co_reg_8731.read(), ap_const_lv5_D) && 
          !esl_seteq<1,5,5>(co_reg_8731.read(), ap_const_lv5_E) && 
          !esl_seteq<1,5,5>(co_reg_8731.read(), ap_const_lv5_F) && 
          !esl_seteq<1,5,5>(co_reg_8731.read(), ap_const_lv5_10) && 
          !esl_seteq<1,5,5>(co_reg_8731.read(), ap_const_lv5_11) && 
          !esl_seteq<1,5,5>(co_reg_8731.read(), ap_const_lv5_12) && 
          !esl_seteq<1,5,5>(co_reg_8731.read(), ap_const_lv5_13) && 
          !esl_seteq<1,5,5>(co_reg_8731.read(), ap_const_lv5_14) && 
          !esl_seteq<1,5,5>(co_reg_8731.read(), ap_const_lv5_15) && 
          !esl_seteq<1,5,5>(co_reg_8731.read(), ap_const_lv5_16)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) && 
          !esl_seteq<1,5,5>(ap_const_lv5_0, co9_reg_8809.read()) && 
          !esl_seteq<1,5,5>(co9_reg_8809.read(), ap_const_lv5_1) && 
          !esl_seteq<1,5,5>(co9_reg_8809.read(), ap_const_lv5_2) && 
          !esl_seteq<1,5,5>(co9_reg_8809.read(), ap_const_lv5_3) && 
          !esl_seteq<1,5,5>(co9_reg_8809.read(), ap_const_lv5_4) && 
          !esl_seteq<1,5,5>(co9_reg_8809.read(), ap_const_lv5_5) && 
          !esl_seteq<1,5,5>(co9_reg_8809.read(), ap_const_lv5_6) && 
          !esl_seteq<1,5,5>(co9_reg_8809.read(), ap_const_lv5_7) && 
          !esl_seteq<1,5,5>(co9_reg_8809.read(), ap_const_lv5_8) && 
          !esl_seteq<1,5,5>(co9_reg_8809.read(), ap_const_lv5_9) && 
          !esl_seteq<1,5,5>(co9_reg_8809.read(), ap_const_lv5_A) && 
          !esl_seteq<1,5,5>(co9_reg_8809.read(), ap_const_lv5_B) && 
          !esl_seteq<1,5,5>(co9_reg_8809.read(), ap_const_lv5_C) && 
          !esl_seteq<1,5,5>(co9_reg_8809.read(), ap_const_lv5_D) && 
          !esl_seteq<1,5,5>(co9_reg_8809.read(), ap_const_lv5_E) && 
          !esl_seteq<1,5,5>(co9_reg_8809.read(), ap_const_lv5_F) && 
          !esl_seteq<1,5,5>(co9_reg_8809.read(), ap_const_lv5_10) && 
          !esl_seteq<1,5,5>(co9_reg_8809.read(), ap_const_lv5_11) && 
          !esl_seteq<1,5,5>(co9_reg_8809.read(), ap_const_lv5_12) && 
          !esl_seteq<1,5,5>(co9_reg_8809.read(), ap_const_lv5_13) && 
          !esl_seteq<1,5,5>(co9_reg_8809.read(), ap_const_lv5_14) && 
          !esl_seteq<1,5,5>(co9_reg_8809.read(), ap_const_lv5_15) && 
          !esl_seteq<1,5,5>(co9_reg_8809.read(), ap_const_lv5_16)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) && 
          !esl_seteq<1,5,5>(ap_const_lv5_0, co16_reg_8887.read()) && 
          !esl_seteq<1,5,5>(co16_reg_8887.read(), ap_const_lv5_1) && 
          !esl_seteq<1,5,5>(co16_reg_8887.read(), ap_const_lv5_2) && 
          !esl_seteq<1,5,5>(co16_reg_8887.read(), ap_const_lv5_3) && 
          !esl_seteq<1,5,5>(co16_reg_8887.read(), ap_const_lv5_4) && 
          !esl_seteq<1,5,5>(co16_reg_8887.read(), ap_const_lv5_5) && 
          !esl_seteq<1,5,5>(co16_reg_8887.read(), ap_const_lv5_6) && 
          !esl_seteq<1,5,5>(co16_reg_8887.read(), ap_const_lv5_7) && 
          !esl_seteq<1,5,5>(co16_reg_8887.read(), ap_const_lv5_8) && 
          !esl_seteq<1,5,5>(co16_reg_8887.read(), ap_const_lv5_9) && 
          !esl_seteq<1,5,5>(co16_reg_8887.read(), ap_const_lv5_A) && 
          !esl_seteq<1,5,5>(co16_reg_8887.read(), ap_const_lv5_B) && 
          !esl_seteq<1,5,5>(co16_reg_8887.read(), ap_const_lv5_C) && 
          !esl_seteq<1,5,5>(co16_reg_8887.read(), ap_const_lv5_D) && 
          !esl_seteq<1,5,5>(co16_reg_8887.read(), ap_const_lv5_E) && 
          !esl_seteq<1,5,5>(co16_reg_8887.read(), ap_const_lv5_F) && 
          !esl_seteq<1,5,5>(co16_reg_8887.read(), ap_const_lv5_10) && 
          !esl_seteq<1,5,5>(co16_reg_8887.read(), ap_const_lv5_11) && 
          !esl_seteq<1,5,5>(co16_reg_8887.read(), ap_const_lv5_12) && 
          !esl_seteq<1,5,5>(co16_reg_8887.read(), ap_const_lv5_13) && 
          !esl_seteq<1,5,5>(co16_reg_8887.read(), ap_const_lv5_14) && 
          !esl_seteq<1,5,5>(co16_reg_8887.read(), ap_const_lv5_15) && 
          !esl_seteq<1,5,5>(co16_reg_8887.read(), ap_const_lv5_16)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) && 
          !esl_seteq<1,5,5>(ap_const_lv5_0, co22_reg_8954.read()) && 
          !esl_seteq<1,5,5>(co22_reg_8954.read(), ap_const_lv5_1) && 
          !esl_seteq<1,5,5>(co22_reg_8954.read(), ap_const_lv5_2) && 
          !esl_seteq<1,5,5>(co22_reg_8954.read(), ap_const_lv5_3) && 
          !esl_seteq<1,5,5>(co22_reg_8954.read(), ap_const_lv5_4) && 
          !esl_seteq<1,5,5>(co22_reg_8954.read(), ap_const_lv5_5) && 
          !esl_seteq<1,5,5>(co22_reg_8954.read(), ap_const_lv5_6) && 
          !esl_seteq<1,5,5>(co22_reg_8954.read(), ap_const_lv5_7) && 
          !esl_seteq<1,5,5>(co22_reg_8954.read(), ap_const_lv5_8) && 
          !esl_seteq<1,5,5>(co22_reg_8954.read(), ap_const_lv5_9) && 
          !esl_seteq<1,5,5>(co22_reg_8954.read(), ap_const_lv5_A) && 
          !esl_seteq<1,5,5>(co22_reg_8954.read(), ap_const_lv5_B) && 
          !esl_seteq<1,5,5>(co22_reg_8954.read(), ap_const_lv5_C) && 
          !esl_seteq<1,5,5>(co22_reg_8954.read(), ap_const_lv5_D) && 
          !esl_seteq<1,5,5>(co22_reg_8954.read(), ap_const_lv5_E) && 
          !esl_seteq<1,5,5>(co22_reg_8954.read(), ap_const_lv5_F) && 
          !esl_seteq<1,5,5>(co22_reg_8954.read(), ap_const_lv5_10) && 
          !esl_seteq<1,5,5>(co22_reg_8954.read(), ap_const_lv5_11) && 
          !esl_seteq<1,5,5>(co22_reg_8954.read(), ap_const_lv5_12) && 
          !esl_seteq<1,5,5>(co22_reg_8954.read(), ap_const_lv5_13) && 
          !esl_seteq<1,5,5>(co22_reg_8954.read(), ap_const_lv5_14) && 
          !esl_seteq<1,5,5>(co22_reg_8954.read(), ap_const_lv5_15) && 
          !esl_seteq<1,5,5>(co22_reg_8954.read(), ap_const_lv5_16)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) && 
          !esl_seteq<1,5,5>(ap_const_lv5_0, co29_reg_9032.read()) && 
          !esl_seteq<1,5,5>(co29_reg_9032.read(), ap_const_lv5_1) && 
          !esl_seteq<1,5,5>(co29_reg_9032.read(), ap_const_lv5_2) && 
          !esl_seteq<1,5,5>(co29_reg_9032.read(), ap_const_lv5_3) && 
          !esl_seteq<1,5,5>(co29_reg_9032.read(), ap_const_lv5_4) && 
          !esl_seteq<1,5,5>(co29_reg_9032.read(), ap_const_lv5_5) && 
          !esl_seteq<1,5,5>(co29_reg_9032.read(), ap_const_lv5_6) && 
          !esl_seteq<1,5,5>(co29_reg_9032.read(), ap_const_lv5_7) && 
          !esl_seteq<1,5,5>(co29_reg_9032.read(), ap_const_lv5_8) && 
          !esl_seteq<1,5,5>(co29_reg_9032.read(), ap_const_lv5_9) && 
          !esl_seteq<1,5,5>(co29_reg_9032.read(), ap_const_lv5_A) && 
          !esl_seteq<1,5,5>(co29_reg_9032.read(), ap_const_lv5_B) && 
          !esl_seteq<1,5,5>(co29_reg_9032.read(), ap_const_lv5_C) && 
          !esl_seteq<1,5,5>(co29_reg_9032.read(), ap_const_lv5_D) && 
          !esl_seteq<1,5,5>(co29_reg_9032.read(), ap_const_lv5_E) && 
          !esl_seteq<1,5,5>(co29_reg_9032.read(), ap_const_lv5_F) && 
          !esl_seteq<1,5,5>(co29_reg_9032.read(), ap_const_lv5_10) && 
          !esl_seteq<1,5,5>(co29_reg_9032.read(), ap_const_lv5_11) && 
          !esl_seteq<1,5,5>(co29_reg_9032.read(), ap_const_lv5_12) && 
          !esl_seteq<1,5,5>(co29_reg_9032.read(), ap_const_lv5_13) && 
          !esl_seteq<1,5,5>(co29_reg_9032.read(), ap_const_lv5_14) && 
          !esl_seteq<1,5,5>(co29_reg_9032.read(), ap_const_lv5_15) && 
          !esl_seteq<1,5,5>(co29_reg_9032.read(), ap_const_lv5_16)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) && 
          !esl_seteq<1,5,5>(ap_const_lv5_0, co38_reg_9132.read()) && 
          !esl_seteq<1,5,5>(co38_reg_9132.read(), ap_const_lv5_1) && 
          !esl_seteq<1,5,5>(co38_reg_9132.read(), ap_const_lv5_2) && 
          !esl_seteq<1,5,5>(co38_reg_9132.read(), ap_const_lv5_3) && 
          !esl_seteq<1,5,5>(co38_reg_9132.read(), ap_const_lv5_4) && 
          !esl_seteq<1,5,5>(co38_reg_9132.read(), ap_const_lv5_5) && 
          !esl_seteq<1,5,5>(co38_reg_9132.read(), ap_const_lv5_6) && 
          !esl_seteq<1,5,5>(co38_reg_9132.read(), ap_const_lv5_7) && 
          !esl_seteq<1,5,5>(co38_reg_9132.read(), ap_const_lv5_8) && 
          !esl_seteq<1,5,5>(co38_reg_9132.read(), ap_const_lv5_9) && 
          !esl_seteq<1,5,5>(co38_reg_9132.read(), ap_const_lv5_A) && 
          !esl_seteq<1,5,5>(co38_reg_9132.read(), ap_const_lv5_B) && 
          !esl_seteq<1,5,5>(co38_reg_9132.read(), ap_const_lv5_C) && 
          !esl_seteq<1,5,5>(co38_reg_9132.read(), ap_const_lv5_D) && 
          !esl_seteq<1,5,5>(co38_reg_9132.read(), ap_const_lv5_E) && 
          !esl_seteq<1,5,5>(co38_reg_9132.read(), ap_const_lv5_F) && 
          !esl_seteq<1,5,5>(co38_reg_9132.read(), ap_const_lv5_10) && 
          !esl_seteq<1,5,5>(co38_reg_9132.read(), ap_const_lv5_11) && 
          !esl_seteq<1,5,5>(co38_reg_9132.read(), ap_const_lv5_12) && 
          !esl_seteq<1,5,5>(co38_reg_9132.read(), ap_const_lv5_13) && 
          !esl_seteq<1,5,5>(co38_reg_9132.read(), ap_const_lv5_14) && 
          !esl_seteq<1,5,5>(co38_reg_9132.read(), ap_const_lv5_15) && 
          !esl_seteq<1,5,5>(co38_reg_9132.read(), ap_const_lv5_16)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) && 
          !esl_seteq<1,5,5>(ap_const_lv5_0, co43_reg_9210.read()) && 
          !esl_seteq<1,5,5>(co43_reg_9210.read(), ap_const_lv5_1) && 
          !esl_seteq<1,5,5>(co43_reg_9210.read(), ap_const_lv5_2) && 
          !esl_seteq<1,5,5>(co43_reg_9210.read(), ap_const_lv5_3) && 
          !esl_seteq<1,5,5>(co43_reg_9210.read(), ap_const_lv5_4) && 
          !esl_seteq<1,5,5>(co43_reg_9210.read(), ap_const_lv5_5) && 
          !esl_seteq<1,5,5>(co43_reg_9210.read(), ap_const_lv5_6) && 
          !esl_seteq<1,5,5>(co43_reg_9210.read(), ap_const_lv5_7) && 
          !esl_seteq<1,5,5>(co43_reg_9210.read(), ap_const_lv5_8) && 
          !esl_seteq<1,5,5>(co43_reg_9210.read(), ap_const_lv5_9) && 
          !esl_seteq<1,5,5>(co43_reg_9210.read(), ap_const_lv5_A) && 
          !esl_seteq<1,5,5>(co43_reg_9210.read(), ap_const_lv5_B) && 
          !esl_seteq<1,5,5>(co43_reg_9210.read(), ap_const_lv5_C) && 
          !esl_seteq<1,5,5>(co43_reg_9210.read(), ap_const_lv5_D) && 
          !esl_seteq<1,5,5>(co43_reg_9210.read(), ap_const_lv5_E) && 
          !esl_seteq<1,5,5>(co43_reg_9210.read(), ap_const_lv5_F) && 
          !esl_seteq<1,5,5>(co43_reg_9210.read(), ap_const_lv5_10) && 
          !esl_seteq<1,5,5>(co43_reg_9210.read(), ap_const_lv5_11) && 
          !esl_seteq<1,5,5>(co43_reg_9210.read(), ap_const_lv5_12) && 
          !esl_seteq<1,5,5>(co43_reg_9210.read(), ap_const_lv5_13) && 
          !esl_seteq<1,5,5>(co43_reg_9210.read(), ap_const_lv5_14) && 
          !esl_seteq<1,5,5>(co43_reg_9210.read(), ap_const_lv5_15) && 
          !esl_seteq<1,5,5>(co43_reg_9210.read(), ap_const_lv5_16)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) && 
          !esl_seteq<1,5,5>(ap_const_lv5_0, co48_reg_9310.read()) && 
          !esl_seteq<1,5,5>(co48_reg_9310.read(), ap_const_lv5_1) && 
          !esl_seteq<1,5,5>(co48_reg_9310.read(), ap_const_lv5_2) && 
          !esl_seteq<1,5,5>(co48_reg_9310.read(), ap_const_lv5_3) && 
          !esl_seteq<1,5,5>(co48_reg_9310.read(), ap_const_lv5_4) && 
          !esl_seteq<1,5,5>(co48_reg_9310.read(), ap_const_lv5_5) && 
          !esl_seteq<1,5,5>(co48_reg_9310.read(), ap_const_lv5_6) && 
          !esl_seteq<1,5,5>(co48_reg_9310.read(), ap_const_lv5_7) && 
          !esl_seteq<1,5,5>(co48_reg_9310.read(), ap_const_lv5_8) && 
          !esl_seteq<1,5,5>(co48_reg_9310.read(), ap_const_lv5_9) && 
          !esl_seteq<1,5,5>(co48_reg_9310.read(), ap_const_lv5_A) && 
          !esl_seteq<1,5,5>(co48_reg_9310.read(), ap_const_lv5_B) && 
          !esl_seteq<1,5,5>(co48_reg_9310.read(), ap_const_lv5_C) && 
          !esl_seteq<1,5,5>(co48_reg_9310.read(), ap_const_lv5_D) && 
          !esl_seteq<1,5,5>(co48_reg_9310.read(), ap_const_lv5_E) && 
          !esl_seteq<1,5,5>(co48_reg_9310.read(), ap_const_lv5_F) && 
          !esl_seteq<1,5,5>(co48_reg_9310.read(), ap_const_lv5_10) && 
          !esl_seteq<1,5,5>(co48_reg_9310.read(), ap_const_lv5_11) && 
          !esl_seteq<1,5,5>(co48_reg_9310.read(), ap_const_lv5_12) && 
          !esl_seteq<1,5,5>(co48_reg_9310.read(), ap_const_lv5_13) && 
          !esl_seteq<1,5,5>(co48_reg_9310.read(), ap_const_lv5_14) && 
          !esl_seteq<1,5,5>(co48_reg_9310.read(), ap_const_lv5_15) && 
          !esl_seteq<1,5,5>(co48_reg_9310.read(), ap_const_lv5_16)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()) && 
          !esl_seteq<1,5,5>(ap_const_lv5_0, co53_reg_9388.read()) && 
          !esl_seteq<1,5,5>(co53_reg_9388.read(), ap_const_lv5_1) && 
          !esl_seteq<1,5,5>(co53_reg_9388.read(), ap_const_lv5_2) && 
          !esl_seteq<1,5,5>(co53_reg_9388.read(), ap_const_lv5_3) && 
          !esl_seteq<1,5,5>(co53_reg_9388.read(), ap_const_lv5_4) && 
          !esl_seteq<1,5,5>(co53_reg_9388.read(), ap_const_lv5_5) && 
          !esl_seteq<1,5,5>(co53_reg_9388.read(), ap_const_lv5_6) && 
          !esl_seteq<1,5,5>(co53_reg_9388.read(), ap_const_lv5_7) && 
          !esl_seteq<1,5,5>(co53_reg_9388.read(), ap_const_lv5_8) && 
          !esl_seteq<1,5,5>(co53_reg_9388.read(), ap_const_lv5_9) && 
          !esl_seteq<1,5,5>(co53_reg_9388.read(), ap_const_lv5_A) && 
          !esl_seteq<1,5,5>(co53_reg_9388.read(), ap_const_lv5_B) && 
          !esl_seteq<1,5,5>(co53_reg_9388.read(), ap_const_lv5_C) && 
          !esl_seteq<1,5,5>(co53_reg_9388.read(), ap_const_lv5_D) && 
          !esl_seteq<1,5,5>(co53_reg_9388.read(), ap_const_lv5_E) && 
          !esl_seteq<1,5,5>(co53_reg_9388.read(), ap_const_lv5_F) && 
          !esl_seteq<1,5,5>(co53_reg_9388.read(), ap_const_lv5_10) && 
          !esl_seteq<1,5,5>(co53_reg_9388.read(), ap_const_lv5_11) && 
          !esl_seteq<1,5,5>(co53_reg_9388.read(), ap_const_lv5_12) && 
          !esl_seteq<1,5,5>(co53_reg_9388.read(), ap_const_lv5_13) && 
          !esl_seteq<1,5,5>(co53_reg_9388.read(), ap_const_lv5_14) && 
          !esl_seteq<1,5,5>(co53_reg_9388.read(), ap_const_lv5_15) && 
          !esl_seteq<1,5,5>(co53_reg_9388.read(), ap_const_lv5_16)))) {
        weights_24_24_1x1_V_23_we0 = ap_const_logic_1;
    } else {
        weights_24_24_1x1_V_23_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read())) {
        weights_24_24_1x1_V_2_address0 = weights_24_24_1x1_V_212_reg_41173.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read())) {
        weights_24_24_1x1_V_2_address0 = weights_24_24_1x1_V_188_reg_40937.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read())) {
        weights_24_24_1x1_V_2_address0 = weights_24_24_1x1_V_164_reg_40684.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read())) {
        weights_24_24_1x1_V_2_address0 = weights_24_24_1x1_V_140_reg_40454.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        weights_24_24_1x1_V_2_address0 = weights_24_24_1x1_V_116_reg_40189.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read())) {
        weights_24_24_1x1_V_2_address0 = weights_24_24_1x1_V_92_reg_39965.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read())) {
        weights_24_24_1x1_V_2_address0 = weights_24_24_1x1_V_68_reg_39750.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        weights_24_24_1x1_V_2_address0 = weights_24_24_1x1_V_44_reg_39520.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        weights_24_24_1x1_V_2_address0 = weights_24_24_1x1_V_20_reg_39295.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_2_address0 = grp_subconv_1x1_16_p_fu_13225_weight_2_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_2_address0 = grp_subconv_1x1_32_p_fu_13099_weight_2_V_address0.read();
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
        weights_24_24_1x1_V_2_ce0 = grp_subconv_1x1_16_p_fu_13225_weight_2_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_2_ce0 = grp_subconv_1x1_32_p_fu_13099_weight_2_V_ce0.read();
    } else {
        weights_24_24_1x1_V_2_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_2_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && 
          esl_seteq<1,5,5>(co_reg_8731.read(), ap_const_lv5_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) && 
          esl_seteq<1,5,5>(co9_reg_8809.read(), ap_const_lv5_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) && 
          esl_seteq<1,5,5>(co16_reg_8887.read(), ap_const_lv5_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) && 
          esl_seteq<1,5,5>(co22_reg_8954.read(), ap_const_lv5_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) && 
          esl_seteq<1,5,5>(co29_reg_9032.read(), ap_const_lv5_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) && 
          esl_seteq<1,5,5>(co38_reg_9132.read(), ap_const_lv5_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) && 
          esl_seteq<1,5,5>(co43_reg_9210.read(), ap_const_lv5_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) && 
          esl_seteq<1,5,5>(co48_reg_9310.read(), ap_const_lv5_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()) && 
          esl_seteq<1,5,5>(co53_reg_9388.read(), ap_const_lv5_2)))) {
        weights_24_24_1x1_V_2_we0 = ap_const_logic_1;
    } else {
        weights_24_24_1x1_V_2_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read())) {
        weights_24_24_1x1_V_3_address0 = weights_24_24_1x1_V_210_reg_41163.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read())) {
        weights_24_24_1x1_V_3_address0 = weights_24_24_1x1_V_186_reg_40927.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read())) {
        weights_24_24_1x1_V_3_address0 = weights_24_24_1x1_V_162_reg_40674.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read())) {
        weights_24_24_1x1_V_3_address0 = weights_24_24_1x1_V_138_reg_40444.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        weights_24_24_1x1_V_3_address0 = weights_24_24_1x1_V_114_reg_40179.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read())) {
        weights_24_24_1x1_V_3_address0 = weights_24_24_1x1_V_90_reg_39955.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read())) {
        weights_24_24_1x1_V_3_address0 = weights_24_24_1x1_V_66_reg_39740.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        weights_24_24_1x1_V_3_address0 = weights_24_24_1x1_V_42_reg_39510.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        weights_24_24_1x1_V_3_address0 = weights_24_24_1x1_V_18_reg_39285.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_3_address0 = grp_subconv_1x1_16_p_fu_13225_weight_3_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_3_address0 = grp_subconv_1x1_32_p_fu_13099_weight_3_V_address0.read();
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
        weights_24_24_1x1_V_3_ce0 = grp_subconv_1x1_16_p_fu_13225_weight_3_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_3_ce0 = grp_subconv_1x1_32_p_fu_13099_weight_3_V_ce0.read();
    } else {
        weights_24_24_1x1_V_3_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_3_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && 
          esl_seteq<1,5,5>(co_reg_8731.read(), ap_const_lv5_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) && 
          esl_seteq<1,5,5>(co9_reg_8809.read(), ap_const_lv5_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) && 
          esl_seteq<1,5,5>(co16_reg_8887.read(), ap_const_lv5_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) && 
          esl_seteq<1,5,5>(co22_reg_8954.read(), ap_const_lv5_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) && 
          esl_seteq<1,5,5>(co29_reg_9032.read(), ap_const_lv5_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) && 
          esl_seteq<1,5,5>(co38_reg_9132.read(), ap_const_lv5_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) && 
          esl_seteq<1,5,5>(co43_reg_9210.read(), ap_const_lv5_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) && 
          esl_seteq<1,5,5>(co48_reg_9310.read(), ap_const_lv5_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()) && 
          esl_seteq<1,5,5>(co53_reg_9388.read(), ap_const_lv5_3)))) {
        weights_24_24_1x1_V_3_we0 = ap_const_logic_1;
    } else {
        weights_24_24_1x1_V_3_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read())) {
        weights_24_24_1x1_V_4_address0 = weights_24_24_1x1_V_211_reg_41168.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read())) {
        weights_24_24_1x1_V_4_address0 = weights_24_24_1x1_V_187_reg_40932.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read())) {
        weights_24_24_1x1_V_4_address0 = weights_24_24_1x1_V_163_reg_40679.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read())) {
        weights_24_24_1x1_V_4_address0 = weights_24_24_1x1_V_139_reg_40449.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        weights_24_24_1x1_V_4_address0 = weights_24_24_1x1_V_115_reg_40184.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read())) {
        weights_24_24_1x1_V_4_address0 = weights_24_24_1x1_V_91_reg_39960.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read())) {
        weights_24_24_1x1_V_4_address0 = weights_24_24_1x1_V_67_reg_39745.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        weights_24_24_1x1_V_4_address0 = weights_24_24_1x1_V_43_reg_39515.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        weights_24_24_1x1_V_4_address0 = weights_24_24_1x1_V_19_reg_39290.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_4_address0 = grp_subconv_1x1_16_p_fu_13225_weight_4_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_4_address0 = grp_subconv_1x1_32_p_fu_13099_weight_4_V_address0.read();
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
        weights_24_24_1x1_V_4_ce0 = grp_subconv_1x1_16_p_fu_13225_weight_4_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_4_ce0 = grp_subconv_1x1_32_p_fu_13099_weight_4_V_ce0.read();
    } else {
        weights_24_24_1x1_V_4_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_4_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && 
          esl_seteq<1,5,5>(co_reg_8731.read(), ap_const_lv5_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) && 
          esl_seteq<1,5,5>(co9_reg_8809.read(), ap_const_lv5_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) && 
          esl_seteq<1,5,5>(co16_reg_8887.read(), ap_const_lv5_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) && 
          esl_seteq<1,5,5>(co22_reg_8954.read(), ap_const_lv5_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) && 
          esl_seteq<1,5,5>(co29_reg_9032.read(), ap_const_lv5_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) && 
          esl_seteq<1,5,5>(co38_reg_9132.read(), ap_const_lv5_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) && 
          esl_seteq<1,5,5>(co43_reg_9210.read(), ap_const_lv5_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) && 
          esl_seteq<1,5,5>(co48_reg_9310.read(), ap_const_lv5_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()) && 
          esl_seteq<1,5,5>(co53_reg_9388.read(), ap_const_lv5_4)))) {
        weights_24_24_1x1_V_4_we0 = ap_const_logic_1;
    } else {
        weights_24_24_1x1_V_4_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read())) {
        weights_24_24_1x1_V_5_address0 = weights_24_24_1x1_V_205_reg_41138.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read())) {
        weights_24_24_1x1_V_5_address0 = weights_24_24_1x1_V_181_reg_40902.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read())) {
        weights_24_24_1x1_V_5_address0 = weights_24_24_1x1_V_157_reg_40649.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read())) {
        weights_24_24_1x1_V_5_address0 = weights_24_24_1x1_V_133_reg_40419.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        weights_24_24_1x1_V_5_address0 = weights_24_24_1x1_V_109_reg_40154.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read())) {
        weights_24_24_1x1_V_5_address0 = weights_24_24_1x1_V_85_reg_39930.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read())) {
        weights_24_24_1x1_V_5_address0 = weights_24_24_1x1_V_61_reg_39715.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        weights_24_24_1x1_V_5_address0 = weights_24_24_1x1_V_37_reg_39485.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        weights_24_24_1x1_V_5_address0 = weights_24_24_1x1_V_13_reg_39260.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_5_address0 = grp_subconv_1x1_16_p_fu_13225_weight_5_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_5_address0 = grp_subconv_1x1_32_p_fu_13099_weight_5_V_address0.read();
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
        weights_24_24_1x1_V_5_ce0 = grp_subconv_1x1_16_p_fu_13225_weight_5_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_5_ce0 = grp_subconv_1x1_32_p_fu_13099_weight_5_V_ce0.read();
    } else {
        weights_24_24_1x1_V_5_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_5_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && 
          esl_seteq<1,5,5>(co_reg_8731.read(), ap_const_lv5_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) && 
          esl_seteq<1,5,5>(co9_reg_8809.read(), ap_const_lv5_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) && 
          esl_seteq<1,5,5>(co16_reg_8887.read(), ap_const_lv5_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) && 
          esl_seteq<1,5,5>(co22_reg_8954.read(), ap_const_lv5_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) && 
          esl_seteq<1,5,5>(co29_reg_9032.read(), ap_const_lv5_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) && 
          esl_seteq<1,5,5>(co38_reg_9132.read(), ap_const_lv5_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) && 
          esl_seteq<1,5,5>(co43_reg_9210.read(), ap_const_lv5_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) && 
          esl_seteq<1,5,5>(co48_reg_9310.read(), ap_const_lv5_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()) && 
          esl_seteq<1,5,5>(co53_reg_9388.read(), ap_const_lv5_5)))) {
        weights_24_24_1x1_V_5_we0 = ap_const_logic_1;
    } else {
        weights_24_24_1x1_V_5_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read())) {
        weights_24_24_1x1_V_6_address0 = weights_24_24_1x1_V_193_reg_41078.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read())) {
        weights_24_24_1x1_V_6_address0 = weights_24_24_1x1_V_169_reg_40842.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read())) {
        weights_24_24_1x1_V_6_address0 = weights_24_24_1x1_V_145_reg_40589.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read())) {
        weights_24_24_1x1_V_6_address0 = weights_24_24_1x1_V_121_reg_40359.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        weights_24_24_1x1_V_6_address0 = weights_24_24_1x1_V_97_reg_40094.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read())) {
        weights_24_24_1x1_V_6_address0 = weights_24_24_1x1_V_73_reg_39870.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read())) {
        weights_24_24_1x1_V_6_address0 = weights_24_24_1x1_V_49_reg_39655.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        weights_24_24_1x1_V_6_address0 = weights_24_24_1x1_V_25_reg_39425.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        weights_24_24_1x1_V_6_address0 = weights_24_24_1x1_V_1_reg_39200.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_6_address0 = grp_subconv_1x1_16_p_fu_13225_weight_6_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_6_address0 = grp_subconv_1x1_32_p_fu_13099_weight_6_V_address0.read();
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
        weights_24_24_1x1_V_6_ce0 = grp_subconv_1x1_16_p_fu_13225_weight_6_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_6_ce0 = grp_subconv_1x1_32_p_fu_13099_weight_6_V_ce0.read();
    } else {
        weights_24_24_1x1_V_6_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_6_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && 
          esl_seteq<1,5,5>(co_reg_8731.read(), ap_const_lv5_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) && 
          esl_seteq<1,5,5>(co9_reg_8809.read(), ap_const_lv5_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) && 
          esl_seteq<1,5,5>(co16_reg_8887.read(), ap_const_lv5_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) && 
          esl_seteq<1,5,5>(co22_reg_8954.read(), ap_const_lv5_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) && 
          esl_seteq<1,5,5>(co29_reg_9032.read(), ap_const_lv5_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) && 
          esl_seteq<1,5,5>(co38_reg_9132.read(), ap_const_lv5_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) && 
          esl_seteq<1,5,5>(co43_reg_9210.read(), ap_const_lv5_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) && 
          esl_seteq<1,5,5>(co48_reg_9310.read(), ap_const_lv5_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()) && 
          esl_seteq<1,5,5>(co53_reg_9388.read(), ap_const_lv5_6)))) {
        weights_24_24_1x1_V_6_we0 = ap_const_logic_1;
    } else {
        weights_24_24_1x1_V_6_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_7_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read())) {
        weights_24_24_1x1_V_7_address0 = weights_24_24_1x1_V_194_reg_41083.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read())) {
        weights_24_24_1x1_V_7_address0 = weights_24_24_1x1_V_170_reg_40847.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read())) {
        weights_24_24_1x1_V_7_address0 = weights_24_24_1x1_V_146_reg_40594.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read())) {
        weights_24_24_1x1_V_7_address0 = weights_24_24_1x1_V_122_reg_40364.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        weights_24_24_1x1_V_7_address0 = weights_24_24_1x1_V_98_reg_40099.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read())) {
        weights_24_24_1x1_V_7_address0 = weights_24_24_1x1_V_74_reg_39875.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read())) {
        weights_24_24_1x1_V_7_address0 = weights_24_24_1x1_V_50_reg_39660.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        weights_24_24_1x1_V_7_address0 = weights_24_24_1x1_V_26_reg_39430.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        weights_24_24_1x1_V_7_address0 = weights_24_24_1x1_V_2_reg_39205.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_7_address0 = grp_subconv_1x1_16_p_fu_13225_weight_7_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_7_address0 = grp_subconv_1x1_32_p_fu_13099_weight_7_V_address0.read();
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
        weights_24_24_1x1_V_7_ce0 = grp_subconv_1x1_16_p_fu_13225_weight_7_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_7_ce0 = grp_subconv_1x1_32_p_fu_13099_weight_7_V_ce0.read();
    } else {
        weights_24_24_1x1_V_7_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_7_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && 
          esl_seteq<1,5,5>(co_reg_8731.read(), ap_const_lv5_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) && 
          esl_seteq<1,5,5>(co9_reg_8809.read(), ap_const_lv5_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) && 
          esl_seteq<1,5,5>(co16_reg_8887.read(), ap_const_lv5_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) && 
          esl_seteq<1,5,5>(co22_reg_8954.read(), ap_const_lv5_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) && 
          esl_seteq<1,5,5>(co29_reg_9032.read(), ap_const_lv5_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) && 
          esl_seteq<1,5,5>(co38_reg_9132.read(), ap_const_lv5_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) && 
          esl_seteq<1,5,5>(co43_reg_9210.read(), ap_const_lv5_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) && 
          esl_seteq<1,5,5>(co48_reg_9310.read(), ap_const_lv5_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()) && 
          esl_seteq<1,5,5>(co53_reg_9388.read(), ap_const_lv5_7)))) {
        weights_24_24_1x1_V_7_we0 = ap_const_logic_1;
    } else {
        weights_24_24_1x1_V_7_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_8_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read())) {
        weights_24_24_1x1_V_8_address0 = weights_24_24_1x1_V_195_reg_41088.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read())) {
        weights_24_24_1x1_V_8_address0 = weights_24_24_1x1_V_171_reg_40852.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read())) {
        weights_24_24_1x1_V_8_address0 = weights_24_24_1x1_V_147_reg_40599.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read())) {
        weights_24_24_1x1_V_8_address0 = weights_24_24_1x1_V_123_reg_40369.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        weights_24_24_1x1_V_8_address0 = weights_24_24_1x1_V_99_reg_40104.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read())) {
        weights_24_24_1x1_V_8_address0 = weights_24_24_1x1_V_75_reg_39880.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read())) {
        weights_24_24_1x1_V_8_address0 = weights_24_24_1x1_V_51_reg_39665.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        weights_24_24_1x1_V_8_address0 = weights_24_24_1x1_V_27_reg_39435.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        weights_24_24_1x1_V_8_address0 = weights_24_24_1x1_V_3_reg_39210.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_8_address0 = grp_subconv_1x1_16_p_fu_13225_weight_8_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_8_address0 = grp_subconv_1x1_32_p_fu_13099_weight_8_V_address0.read();
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
        weights_24_24_1x1_V_8_ce0 = grp_subconv_1x1_16_p_fu_13225_weight_8_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_8_ce0 = grp_subconv_1x1_32_p_fu_13099_weight_8_V_ce0.read();
    } else {
        weights_24_24_1x1_V_8_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_8_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && 
          esl_seteq<1,5,5>(co_reg_8731.read(), ap_const_lv5_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) && 
          esl_seteq<1,5,5>(co9_reg_8809.read(), ap_const_lv5_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) && 
          esl_seteq<1,5,5>(co16_reg_8887.read(), ap_const_lv5_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) && 
          esl_seteq<1,5,5>(co22_reg_8954.read(), ap_const_lv5_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) && 
          esl_seteq<1,5,5>(co29_reg_9032.read(), ap_const_lv5_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) && 
          esl_seteq<1,5,5>(co38_reg_9132.read(), ap_const_lv5_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) && 
          esl_seteq<1,5,5>(co43_reg_9210.read(), ap_const_lv5_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) && 
          esl_seteq<1,5,5>(co48_reg_9310.read(), ap_const_lv5_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()) && 
          esl_seteq<1,5,5>(co53_reg_9388.read(), ap_const_lv5_8)))) {
        weights_24_24_1x1_V_8_we0 = ap_const_logic_1;
    } else {
        weights_24_24_1x1_V_8_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_9_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read())) {
        weights_24_24_1x1_V_9_address0 = weights_24_24_1x1_V_196_reg_41093.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read())) {
        weights_24_24_1x1_V_9_address0 = weights_24_24_1x1_V_172_reg_40857.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read())) {
        weights_24_24_1x1_V_9_address0 = weights_24_24_1x1_V_148_reg_40604.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read())) {
        weights_24_24_1x1_V_9_address0 = weights_24_24_1x1_V_124_reg_40374.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        weights_24_24_1x1_V_9_address0 = weights_24_24_1x1_V_100_reg_40109.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read())) {
        weights_24_24_1x1_V_9_address0 = weights_24_24_1x1_V_76_reg_39885.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read())) {
        weights_24_24_1x1_V_9_address0 = weights_24_24_1x1_V_52_reg_39670.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        weights_24_24_1x1_V_9_address0 = weights_24_24_1x1_V_28_reg_39440.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        weights_24_24_1x1_V_9_address0 = weights_24_24_1x1_V_4_reg_39215.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_9_address0 = grp_subconv_1x1_16_p_fu_13225_weight_9_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_9_address0 = grp_subconv_1x1_32_p_fu_13099_weight_9_V_address0.read();
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
        weights_24_24_1x1_V_9_ce0 = grp_subconv_1x1_16_p_fu_13225_weight_9_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_9_ce0 = grp_subconv_1x1_32_p_fu_13099_weight_9_V_ce0.read();
    } else {
        weights_24_24_1x1_V_9_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_9_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && 
          esl_seteq<1,5,5>(co_reg_8731.read(), ap_const_lv5_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) && 
          esl_seteq<1,5,5>(co9_reg_8809.read(), ap_const_lv5_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) && 
          esl_seteq<1,5,5>(co16_reg_8887.read(), ap_const_lv5_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) && 
          esl_seteq<1,5,5>(co22_reg_8954.read(), ap_const_lv5_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) && 
          esl_seteq<1,5,5>(co29_reg_9032.read(), ap_const_lv5_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) && 
          esl_seteq<1,5,5>(co38_reg_9132.read(), ap_const_lv5_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) && 
          esl_seteq<1,5,5>(co43_reg_9210.read(), ap_const_lv5_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) && 
          esl_seteq<1,5,5>(co48_reg_9310.read(), ap_const_lv5_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()) && 
          esl_seteq<1,5,5>(co53_reg_9388.read(), ap_const_lv5_9)))) {
        weights_24_24_1x1_V_9_we0 = ap_const_logic_1;
    } else {
        weights_24_24_1x1_V_9_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_s_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read())) {
        weights_24_24_1x1_V_s_address0 = weights_24_24_1x1_V_213_reg_41178.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read())) {
        weights_24_24_1x1_V_s_address0 = weights_24_24_1x1_V_189_reg_40942.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read())) {
        weights_24_24_1x1_V_s_address0 = weights_24_24_1x1_V_165_reg_40689.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read())) {
        weights_24_24_1x1_V_s_address0 = weights_24_24_1x1_V_141_reg_40459.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        weights_24_24_1x1_V_s_address0 = weights_24_24_1x1_V_117_reg_40194.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read())) {
        weights_24_24_1x1_V_s_address0 = weights_24_24_1x1_V_93_reg_39970.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read())) {
        weights_24_24_1x1_V_s_address0 = weights_24_24_1x1_V_69_reg_39755.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        weights_24_24_1x1_V_s_address0 = weights_24_24_1x1_V_45_reg_39525.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        weights_24_24_1x1_V_s_address0 = weights_24_24_1x1_V_21_reg_39300.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_s_address0 = grp_subconv_1x1_16_p_fu_13225_weight_0_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_s_address0 = grp_subconv_1x1_32_p_fu_13099_weight_0_V_address0.read();
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
        weights_24_24_1x1_V_s_ce0 = grp_subconv_1x1_16_p_fu_13225_weight_0_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_s_ce0 = grp_subconv_1x1_32_p_fu_13099_weight_0_V_ce0.read();
    } else {
        weights_24_24_1x1_V_s_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_s_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && 
          esl_seteq<1,5,5>(ap_const_lv5_0, co_reg_8731.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) && 
          esl_seteq<1,5,5>(ap_const_lv5_0, co9_reg_8809.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) && 
          esl_seteq<1,5,5>(ap_const_lv5_0, co16_reg_8887.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) && 
          esl_seteq<1,5,5>(ap_const_lv5_0, co22_reg_8954.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) && 
          esl_seteq<1,5,5>(ap_const_lv5_0, co29_reg_9032.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) && 
          esl_seteq<1,5,5>(ap_const_lv5_0, co38_reg_9132.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) && 
          esl_seteq<1,5,5>(ap_const_lv5_0, co43_reg_9210.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) && 
          esl_seteq<1,5,5>(ap_const_lv5_0, co48_reg_9310.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()) && 
          esl_seteq<1,5,5>(ap_const_lv5_0, co53_reg_9388.read())))) {
        weights_24_24_1x1_V_s_we0 = ap_const_logic_1;
    } else {
        weights_24_24_1x1_V_s_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_1_3x3_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1228.read())) {
        weights_48_1_3x3_V_address0 =  (sc_lv<9>) (tmp_2562_cast_fu_31368_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1133.read())) {
        weights_48_1_3x3_V_address0 =  (sc_lv<9>) (tmp_2482_cast_fu_29805_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1038.read())) {
        weights_48_1_3x3_V_address0 =  (sc_lv<9>) (tmp_2403_cast_fu_28254_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state943.read())) {
        weights_48_1_3x3_V_address0 =  (sc_lv<9>) (tmp_2326_cast_fu_26703_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state848.read())) {
        weights_48_1_3x3_V_address0 =  (sc_lv<9>) (tmp_2250_cast_fu_25156_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state753.read())) {
        weights_48_1_3x3_V_address0 =  (sc_lv<9>) (tmp_2174_cast_fu_23609_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state658.read())) {
        weights_48_1_3x3_V_address0 =  (sc_lv<9>) (tmp_2096_cast_fu_22050_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state563.read())) {
        weights_48_1_3x3_V_address0 =  (sc_lv<9>) (tmp_2020_cast_fu_20507_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state471.read())) {
        weights_48_1_3x3_V_address0 =  (sc_lv<9>) (tmp_1952_cast_fu_19075_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state412.read())) {
        weights_48_1_3x3_V_address0 =  (sc_lv<9>) (tmp_1918_cast_fu_18294_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state484.read())) {
        weights_48_1_3x3_V_address0 = grp_subconv_3x3_16_strid_fu_13797_weight_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state576.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state671.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state766.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state861.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state956.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1051.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1146.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1241.read()))) {
        weights_48_1_3x3_V_address0 = grp_subconv_3x3_8_no_rel_fu_13421_weight_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state425.read())) {
        weights_48_1_3x3_V_address0 = grp_subconv_3x3_16_strid_1_fu_13363_weight_V_address0.read();
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
        weights_48_1_3x3_V_ce0 = grp_subconv_3x3_16_strid_fu_13797_weight_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state576.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state671.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state766.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state861.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state956.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1051.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1146.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1241.read()))) {
        weights_48_1_3x3_V_ce0 = grp_subconv_3x3_8_no_rel_fu_13421_weight_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state425.read())) {
        weights_48_1_3x3_V_ce0 = grp_subconv_3x3_16_strid_1_fu_13363_weight_V_ce0.read();
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
        weights_48_48_1x1_V_10_address0 =  (sc_lv<7>) (tmp_2587_cast_fu_31793_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read())) {
        weights_48_48_1x1_V_10_address0 =  (sc_lv<7>) (tmp_2550_cast_fu_31004_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read())) {
        weights_48_48_1x1_V_10_address0 =  (sc_lv<7>) (tmp_2509_cast_fu_30226_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read())) {
        weights_48_48_1x1_V_10_address0 =  (sc_lv<7>) (tmp_2470_cast_fu_29441_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read())) {
        weights_48_48_1x1_V_10_address0 =  (sc_lv<7>) (tmp_2429_cast_fu_28667_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read())) {
        weights_48_48_1x1_V_10_address0 =  (sc_lv<7>) (tmp_2391_cast_fu_27882_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read())) {
        weights_48_48_1x1_V_10_address0 =  (sc_lv<7>) (tmp_2352_cast_fu_27116_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read())) {
        weights_48_48_1x1_V_10_address0 =  (sc_lv<7>) (tmp_2314_cast_fu_26335_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read())) {
        weights_48_48_1x1_V_10_address0 =  (sc_lv<7>) (tmp_2275_cast_fu_25569_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read())) {
        weights_48_48_1x1_V_10_address0 =  (sc_lv<7>) (tmp_2238_cast_fu_24796_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read())) {
        weights_48_48_1x1_V_10_address0 =  (sc_lv<7>) (tmp_2199_cast_fu_24026_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read())) {
        weights_48_48_1x1_V_10_address0 =  (sc_lv<7>) (tmp_2162_cast_fu_23245_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read())) {
        weights_48_48_1x1_V_10_address0 =  (sc_lv<7>) (tmp_2121_cast_fu_22467_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read())) {
        weights_48_48_1x1_V_10_address0 =  (sc_lv<7>) (tmp_2084_cast_fu_21686_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read())) {
        weights_48_48_1x1_V_10_address0 =  (sc_lv<7>) (tmp_2045_cast_fu_20920_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read())) {
        weights_48_48_1x1_V_10_address0 =  (sc_lv<7>) (tmp_2008_cast_fu_20139_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read())) {
        weights_48_48_1x1_V_10_address0 =  (sc_lv<7>) (tmp_1980_cast_fu_19492_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read())) {
        weights_48_48_1x1_V_10_address0 =  (sc_lv<7>) (tmp_1940_cast_fu_18711_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read())) {
        weights_48_48_1x1_V_10_address0 =  (sc_lv<7>) (tmp_1906_cast_fu_17930_p1.read());
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
        weights_48_48_1x1_V_10_address0 = grp_subconv_1x1_8_p_fu_12848_weight_10_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_10_address0 = grp_subconv_1x1_16p_p_fu_12744_weight_10_V_address0.read();
    } else {
        weights_48_48_1x1_V_10_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_10_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read()) || 
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
        weights_48_48_1x1_V_10_address1 = grp_subconv_1x1_8_p_fu_12848_weight_10_V_address1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_10_address1 = grp_subconv_1x1_16p_p_fu_12744_weight_10_V_address1.read();
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
        weights_48_48_1x1_V_10_ce0 = grp_subconv_1x1_8_p_fu_12848_weight_10_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_10_ce0 = grp_subconv_1x1_16p_p_fu_12744_weight_10_V_ce0.read();
    } else {
        weights_48_48_1x1_V_10_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_10_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read()) || 
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
        weights_48_48_1x1_V_10_ce1 = grp_subconv_1x1_8_p_fu_12848_weight_10_V_ce1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_10_ce1 = grp_subconv_1x1_16p_p_fu_12744_weight_10_V_ce1.read();
    } else {
        weights_48_48_1x1_V_10_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_10_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read()) && 
          esl_seteq<1,6,6>(tmp_1976_fu_17926_p1.read(), ap_const_lv6_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read()) && 
          esl_seteq<1,6,6>(tmp_1995_fu_18707_p1.read(), ap_const_lv6_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read()) && 
          esl_seteq<1,6,6>(tmp_2012_fu_19488_p1.read(), ap_const_lv6_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read()) && 
          esl_seteq<1,6,6>(tmp_2040_fu_20135_p1.read(), ap_const_lv6_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read()) && 
          esl_seteq<1,6,6>(tmp_2064_fu_20916_p1.read(), ap_const_lv6_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read()) && 
          esl_seteq<1,6,6>(tmp_2087_fu_21682_p1.read(), ap_const_lv6_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) && 
          esl_seteq<1,6,6>(tmp_2111_fu_22463_p1.read(), ap_const_lv6_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read()) && 
          esl_seteq<1,6,6>(tmp_2124_fu_23241_p1.read(), ap_const_lv6_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read()) && 
          esl_seteq<1,6,6>(tmp_2135_fu_24022_p1.read(), ap_const_lv6_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read()) && 
          esl_seteq<1,6,6>(tmp_2148_fu_24792_p1.read(), ap_const_lv6_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read()) && 
          esl_seteq<1,6,6>(tmp_2159_fu_25565_p1.read(), ap_const_lv6_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read()) && 
          esl_seteq<1,6,6>(tmp_2172_fu_26331_p1.read(), ap_const_lv6_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read()) && 
          esl_seteq<1,6,6>(tmp_2183_fu_27112_p1.read(), ap_const_lv6_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read()) && 
          esl_seteq<1,6,6>(tmp_2196_fu_27878_p1.read(), ap_const_lv6_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read()) && 
          esl_seteq<1,6,6>(tmp_2207_fu_28663_p1.read(), ap_const_lv6_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read()) && 
          esl_seteq<1,6,6>(tmp_2220_fu_29437_p1.read(), ap_const_lv6_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read()) && 
          esl_seteq<1,6,6>(tmp_2231_fu_30222_p1.read(), ap_const_lv6_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read()) && 
          esl_seteq<1,6,6>(tmp_2244_fu_31000_p1.read(), ap_const_lv6_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read()) && 
          esl_seteq<1,6,6>(tmp_2255_fu_31789_p1.read(), ap_const_lv6_A)))) {
        weights_48_48_1x1_V_10_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_10_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_11_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read())) {
        weights_48_48_1x1_V_11_address0 =  (sc_lv<7>) (tmp_2587_cast_fu_31793_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read())) {
        weights_48_48_1x1_V_11_address0 =  (sc_lv<7>) (tmp_2550_cast_fu_31004_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read())) {
        weights_48_48_1x1_V_11_address0 =  (sc_lv<7>) (tmp_2509_cast_fu_30226_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read())) {
        weights_48_48_1x1_V_11_address0 =  (sc_lv<7>) (tmp_2470_cast_fu_29441_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read())) {
        weights_48_48_1x1_V_11_address0 =  (sc_lv<7>) (tmp_2429_cast_fu_28667_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read())) {
        weights_48_48_1x1_V_11_address0 =  (sc_lv<7>) (tmp_2391_cast_fu_27882_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read())) {
        weights_48_48_1x1_V_11_address0 =  (sc_lv<7>) (tmp_2352_cast_fu_27116_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read())) {
        weights_48_48_1x1_V_11_address0 =  (sc_lv<7>) (tmp_2314_cast_fu_26335_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read())) {
        weights_48_48_1x1_V_11_address0 =  (sc_lv<7>) (tmp_2275_cast_fu_25569_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read())) {
        weights_48_48_1x1_V_11_address0 =  (sc_lv<7>) (tmp_2238_cast_fu_24796_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read())) {
        weights_48_48_1x1_V_11_address0 =  (sc_lv<7>) (tmp_2199_cast_fu_24026_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read())) {
        weights_48_48_1x1_V_11_address0 =  (sc_lv<7>) (tmp_2162_cast_fu_23245_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read())) {
        weights_48_48_1x1_V_11_address0 =  (sc_lv<7>) (tmp_2121_cast_fu_22467_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read())) {
        weights_48_48_1x1_V_11_address0 =  (sc_lv<7>) (tmp_2084_cast_fu_21686_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read())) {
        weights_48_48_1x1_V_11_address0 =  (sc_lv<7>) (tmp_2045_cast_fu_20920_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read())) {
        weights_48_48_1x1_V_11_address0 =  (sc_lv<7>) (tmp_2008_cast_fu_20139_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read())) {
        weights_48_48_1x1_V_11_address0 =  (sc_lv<7>) (tmp_1980_cast_fu_19492_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read())) {
        weights_48_48_1x1_V_11_address0 =  (sc_lv<7>) (tmp_1940_cast_fu_18711_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read())) {
        weights_48_48_1x1_V_11_address0 =  (sc_lv<7>) (tmp_1906_cast_fu_17930_p1.read());
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
        weights_48_48_1x1_V_11_address0 = grp_subconv_1x1_8_p_fu_12848_weight_11_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_11_address0 = grp_subconv_1x1_16p_p_fu_12744_weight_11_V_address0.read();
    } else {
        weights_48_48_1x1_V_11_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_11_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read()) || 
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
        weights_48_48_1x1_V_11_address1 = grp_subconv_1x1_8_p_fu_12848_weight_11_V_address1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_11_address1 = grp_subconv_1x1_16p_p_fu_12744_weight_11_V_address1.read();
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
        weights_48_48_1x1_V_11_ce0 = grp_subconv_1x1_8_p_fu_12848_weight_11_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_11_ce0 = grp_subconv_1x1_16p_p_fu_12744_weight_11_V_ce0.read();
    } else {
        weights_48_48_1x1_V_11_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_11_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read()) || 
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
        weights_48_48_1x1_V_11_ce1 = grp_subconv_1x1_8_p_fu_12848_weight_11_V_ce1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_11_ce1 = grp_subconv_1x1_16p_p_fu_12744_weight_11_V_ce1.read();
    } else {
        weights_48_48_1x1_V_11_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_11_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read()) && 
          esl_seteq<1,6,6>(tmp_1976_fu_17926_p1.read(), ap_const_lv6_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read()) && 
          esl_seteq<1,6,6>(tmp_1995_fu_18707_p1.read(), ap_const_lv6_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read()) && 
          esl_seteq<1,6,6>(tmp_2012_fu_19488_p1.read(), ap_const_lv6_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read()) && 
          esl_seteq<1,6,6>(tmp_2040_fu_20135_p1.read(), ap_const_lv6_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read()) && 
          esl_seteq<1,6,6>(tmp_2064_fu_20916_p1.read(), ap_const_lv6_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read()) && 
          esl_seteq<1,6,6>(tmp_2087_fu_21682_p1.read(), ap_const_lv6_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) && 
          esl_seteq<1,6,6>(tmp_2111_fu_22463_p1.read(), ap_const_lv6_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read()) && 
          esl_seteq<1,6,6>(tmp_2124_fu_23241_p1.read(), ap_const_lv6_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read()) && 
          esl_seteq<1,6,6>(tmp_2135_fu_24022_p1.read(), ap_const_lv6_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read()) && 
          esl_seteq<1,6,6>(tmp_2148_fu_24792_p1.read(), ap_const_lv6_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read()) && 
          esl_seteq<1,6,6>(tmp_2159_fu_25565_p1.read(), ap_const_lv6_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read()) && 
          esl_seteq<1,6,6>(tmp_2172_fu_26331_p1.read(), ap_const_lv6_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read()) && 
          esl_seteq<1,6,6>(tmp_2183_fu_27112_p1.read(), ap_const_lv6_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read()) && 
          esl_seteq<1,6,6>(tmp_2196_fu_27878_p1.read(), ap_const_lv6_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read()) && 
          esl_seteq<1,6,6>(tmp_2207_fu_28663_p1.read(), ap_const_lv6_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read()) && 
          esl_seteq<1,6,6>(tmp_2220_fu_29437_p1.read(), ap_const_lv6_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read()) && 
          esl_seteq<1,6,6>(tmp_2231_fu_30222_p1.read(), ap_const_lv6_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read()) && 
          esl_seteq<1,6,6>(tmp_2244_fu_31000_p1.read(), ap_const_lv6_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read()) && 
          esl_seteq<1,6,6>(tmp_2255_fu_31789_p1.read(), ap_const_lv6_B)))) {
        weights_48_48_1x1_V_11_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_11_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_12_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read())) {
        weights_48_48_1x1_V_12_address0 =  (sc_lv<7>) (tmp_2587_cast_fu_31793_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read())) {
        weights_48_48_1x1_V_12_address0 =  (sc_lv<7>) (tmp_2550_cast_fu_31004_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read())) {
        weights_48_48_1x1_V_12_address0 =  (sc_lv<7>) (tmp_2509_cast_fu_30226_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read())) {
        weights_48_48_1x1_V_12_address0 =  (sc_lv<7>) (tmp_2470_cast_fu_29441_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read())) {
        weights_48_48_1x1_V_12_address0 =  (sc_lv<7>) (tmp_2429_cast_fu_28667_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read())) {
        weights_48_48_1x1_V_12_address0 =  (sc_lv<7>) (tmp_2391_cast_fu_27882_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read())) {
        weights_48_48_1x1_V_12_address0 =  (sc_lv<7>) (tmp_2352_cast_fu_27116_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read())) {
        weights_48_48_1x1_V_12_address0 =  (sc_lv<7>) (tmp_2314_cast_fu_26335_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read())) {
        weights_48_48_1x1_V_12_address0 =  (sc_lv<7>) (tmp_2275_cast_fu_25569_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read())) {
        weights_48_48_1x1_V_12_address0 =  (sc_lv<7>) (tmp_2238_cast_fu_24796_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read())) {
        weights_48_48_1x1_V_12_address0 =  (sc_lv<7>) (tmp_2199_cast_fu_24026_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read())) {
        weights_48_48_1x1_V_12_address0 =  (sc_lv<7>) (tmp_2162_cast_fu_23245_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read())) {
        weights_48_48_1x1_V_12_address0 =  (sc_lv<7>) (tmp_2121_cast_fu_22467_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read())) {
        weights_48_48_1x1_V_12_address0 =  (sc_lv<7>) (tmp_2084_cast_fu_21686_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read())) {
        weights_48_48_1x1_V_12_address0 =  (sc_lv<7>) (tmp_2045_cast_fu_20920_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read())) {
        weights_48_48_1x1_V_12_address0 =  (sc_lv<7>) (tmp_2008_cast_fu_20139_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read())) {
        weights_48_48_1x1_V_12_address0 =  (sc_lv<7>) (tmp_1980_cast_fu_19492_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read())) {
        weights_48_48_1x1_V_12_address0 =  (sc_lv<7>) (tmp_1940_cast_fu_18711_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read())) {
        weights_48_48_1x1_V_12_address0 =  (sc_lv<7>) (tmp_1906_cast_fu_17930_p1.read());
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
        weights_48_48_1x1_V_12_address0 = grp_subconv_1x1_8_p_fu_12848_weight_12_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_12_address0 = grp_subconv_1x1_16p_p_fu_12744_weight_12_V_address0.read();
    } else {
        weights_48_48_1x1_V_12_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_12_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read()) || 
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
        weights_48_48_1x1_V_12_address1 = grp_subconv_1x1_8_p_fu_12848_weight_12_V_address1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_12_address1 = grp_subconv_1x1_16p_p_fu_12744_weight_12_V_address1.read();
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
        weights_48_48_1x1_V_12_ce0 = grp_subconv_1x1_8_p_fu_12848_weight_12_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_12_ce0 = grp_subconv_1x1_16p_p_fu_12744_weight_12_V_ce0.read();
    } else {
        weights_48_48_1x1_V_12_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_12_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read()) || 
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
        weights_48_48_1x1_V_12_ce1 = grp_subconv_1x1_8_p_fu_12848_weight_12_V_ce1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_12_ce1 = grp_subconv_1x1_16p_p_fu_12744_weight_12_V_ce1.read();
    } else {
        weights_48_48_1x1_V_12_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_12_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read()) && 
          esl_seteq<1,6,6>(tmp_1976_fu_17926_p1.read(), ap_const_lv6_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read()) && 
          esl_seteq<1,6,6>(tmp_1995_fu_18707_p1.read(), ap_const_lv6_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read()) && 
          esl_seteq<1,6,6>(tmp_2012_fu_19488_p1.read(), ap_const_lv6_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read()) && 
          esl_seteq<1,6,6>(tmp_2040_fu_20135_p1.read(), ap_const_lv6_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read()) && 
          esl_seteq<1,6,6>(tmp_2064_fu_20916_p1.read(), ap_const_lv6_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read()) && 
          esl_seteq<1,6,6>(tmp_2087_fu_21682_p1.read(), ap_const_lv6_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) && 
          esl_seteq<1,6,6>(tmp_2111_fu_22463_p1.read(), ap_const_lv6_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read()) && 
          esl_seteq<1,6,6>(tmp_2124_fu_23241_p1.read(), ap_const_lv6_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read()) && 
          esl_seteq<1,6,6>(tmp_2135_fu_24022_p1.read(), ap_const_lv6_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read()) && 
          esl_seteq<1,6,6>(tmp_2148_fu_24792_p1.read(), ap_const_lv6_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read()) && 
          esl_seteq<1,6,6>(tmp_2159_fu_25565_p1.read(), ap_const_lv6_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read()) && 
          esl_seteq<1,6,6>(tmp_2172_fu_26331_p1.read(), ap_const_lv6_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read()) && 
          esl_seteq<1,6,6>(tmp_2183_fu_27112_p1.read(), ap_const_lv6_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read()) && 
          esl_seteq<1,6,6>(tmp_2196_fu_27878_p1.read(), ap_const_lv6_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read()) && 
          esl_seteq<1,6,6>(tmp_2207_fu_28663_p1.read(), ap_const_lv6_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read()) && 
          esl_seteq<1,6,6>(tmp_2220_fu_29437_p1.read(), ap_const_lv6_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read()) && 
          esl_seteq<1,6,6>(tmp_2231_fu_30222_p1.read(), ap_const_lv6_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read()) && 
          esl_seteq<1,6,6>(tmp_2244_fu_31000_p1.read(), ap_const_lv6_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read()) && 
          esl_seteq<1,6,6>(tmp_2255_fu_31789_p1.read(), ap_const_lv6_C)))) {
        weights_48_48_1x1_V_12_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_12_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_13_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read())) {
        weights_48_48_1x1_V_13_address0 =  (sc_lv<7>) (tmp_2587_cast_fu_31793_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read())) {
        weights_48_48_1x1_V_13_address0 =  (sc_lv<7>) (tmp_2550_cast_fu_31004_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read())) {
        weights_48_48_1x1_V_13_address0 =  (sc_lv<7>) (tmp_2509_cast_fu_30226_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read())) {
        weights_48_48_1x1_V_13_address0 =  (sc_lv<7>) (tmp_2470_cast_fu_29441_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read())) {
        weights_48_48_1x1_V_13_address0 =  (sc_lv<7>) (tmp_2429_cast_fu_28667_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read())) {
        weights_48_48_1x1_V_13_address0 =  (sc_lv<7>) (tmp_2391_cast_fu_27882_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read())) {
        weights_48_48_1x1_V_13_address0 =  (sc_lv<7>) (tmp_2352_cast_fu_27116_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read())) {
        weights_48_48_1x1_V_13_address0 =  (sc_lv<7>) (tmp_2314_cast_fu_26335_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read())) {
        weights_48_48_1x1_V_13_address0 =  (sc_lv<7>) (tmp_2275_cast_fu_25569_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read())) {
        weights_48_48_1x1_V_13_address0 =  (sc_lv<7>) (tmp_2238_cast_fu_24796_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read())) {
        weights_48_48_1x1_V_13_address0 =  (sc_lv<7>) (tmp_2199_cast_fu_24026_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read())) {
        weights_48_48_1x1_V_13_address0 =  (sc_lv<7>) (tmp_2162_cast_fu_23245_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read())) {
        weights_48_48_1x1_V_13_address0 =  (sc_lv<7>) (tmp_2121_cast_fu_22467_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read())) {
        weights_48_48_1x1_V_13_address0 =  (sc_lv<7>) (tmp_2084_cast_fu_21686_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read())) {
        weights_48_48_1x1_V_13_address0 =  (sc_lv<7>) (tmp_2045_cast_fu_20920_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read())) {
        weights_48_48_1x1_V_13_address0 =  (sc_lv<7>) (tmp_2008_cast_fu_20139_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read())) {
        weights_48_48_1x1_V_13_address0 =  (sc_lv<7>) (tmp_1980_cast_fu_19492_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read())) {
        weights_48_48_1x1_V_13_address0 =  (sc_lv<7>) (tmp_1940_cast_fu_18711_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read())) {
        weights_48_48_1x1_V_13_address0 =  (sc_lv<7>) (tmp_1906_cast_fu_17930_p1.read());
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
        weights_48_48_1x1_V_13_address0 = grp_subconv_1x1_8_p_fu_12848_weight_13_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_13_address0 = grp_subconv_1x1_16p_p_fu_12744_weight_13_V_address0.read();
    } else {
        weights_48_48_1x1_V_13_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_13_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read()) || 
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
        weights_48_48_1x1_V_13_address1 = grp_subconv_1x1_8_p_fu_12848_weight_13_V_address1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_13_address1 = grp_subconv_1x1_16p_p_fu_12744_weight_13_V_address1.read();
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
        weights_48_48_1x1_V_13_ce0 = grp_subconv_1x1_8_p_fu_12848_weight_13_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_13_ce0 = grp_subconv_1x1_16p_p_fu_12744_weight_13_V_ce0.read();
    } else {
        weights_48_48_1x1_V_13_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_13_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read()) || 
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
        weights_48_48_1x1_V_13_ce1 = grp_subconv_1x1_8_p_fu_12848_weight_13_V_ce1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_13_ce1 = grp_subconv_1x1_16p_p_fu_12744_weight_13_V_ce1.read();
    } else {
        weights_48_48_1x1_V_13_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_13_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read()) && 
          esl_seteq<1,6,6>(tmp_1976_fu_17926_p1.read(), ap_const_lv6_D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read()) && 
          esl_seteq<1,6,6>(tmp_1995_fu_18707_p1.read(), ap_const_lv6_D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read()) && 
          esl_seteq<1,6,6>(tmp_2012_fu_19488_p1.read(), ap_const_lv6_D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read()) && 
          esl_seteq<1,6,6>(tmp_2040_fu_20135_p1.read(), ap_const_lv6_D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read()) && 
          esl_seteq<1,6,6>(tmp_2064_fu_20916_p1.read(), ap_const_lv6_D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read()) && 
          esl_seteq<1,6,6>(tmp_2087_fu_21682_p1.read(), ap_const_lv6_D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) && 
          esl_seteq<1,6,6>(tmp_2111_fu_22463_p1.read(), ap_const_lv6_D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read()) && 
          esl_seteq<1,6,6>(tmp_2124_fu_23241_p1.read(), ap_const_lv6_D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read()) && 
          esl_seteq<1,6,6>(tmp_2135_fu_24022_p1.read(), ap_const_lv6_D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read()) && 
          esl_seteq<1,6,6>(tmp_2148_fu_24792_p1.read(), ap_const_lv6_D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read()) && 
          esl_seteq<1,6,6>(tmp_2159_fu_25565_p1.read(), ap_const_lv6_D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read()) && 
          esl_seteq<1,6,6>(tmp_2172_fu_26331_p1.read(), ap_const_lv6_D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read()) && 
          esl_seteq<1,6,6>(tmp_2183_fu_27112_p1.read(), ap_const_lv6_D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read()) && 
          esl_seteq<1,6,6>(tmp_2196_fu_27878_p1.read(), ap_const_lv6_D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read()) && 
          esl_seteq<1,6,6>(tmp_2207_fu_28663_p1.read(), ap_const_lv6_D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read()) && 
          esl_seteq<1,6,6>(tmp_2220_fu_29437_p1.read(), ap_const_lv6_D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read()) && 
          esl_seteq<1,6,6>(tmp_2231_fu_30222_p1.read(), ap_const_lv6_D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read()) && 
          esl_seteq<1,6,6>(tmp_2244_fu_31000_p1.read(), ap_const_lv6_D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read()) && 
          esl_seteq<1,6,6>(tmp_2255_fu_31789_p1.read(), ap_const_lv6_D)))) {
        weights_48_48_1x1_V_13_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_13_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_14_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read())) {
        weights_48_48_1x1_V_14_address0 =  (sc_lv<7>) (tmp_2587_cast_fu_31793_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read())) {
        weights_48_48_1x1_V_14_address0 =  (sc_lv<7>) (tmp_2550_cast_fu_31004_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read())) {
        weights_48_48_1x1_V_14_address0 =  (sc_lv<7>) (tmp_2509_cast_fu_30226_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read())) {
        weights_48_48_1x1_V_14_address0 =  (sc_lv<7>) (tmp_2470_cast_fu_29441_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read())) {
        weights_48_48_1x1_V_14_address0 =  (sc_lv<7>) (tmp_2429_cast_fu_28667_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read())) {
        weights_48_48_1x1_V_14_address0 =  (sc_lv<7>) (tmp_2391_cast_fu_27882_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read())) {
        weights_48_48_1x1_V_14_address0 =  (sc_lv<7>) (tmp_2352_cast_fu_27116_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read())) {
        weights_48_48_1x1_V_14_address0 =  (sc_lv<7>) (tmp_2314_cast_fu_26335_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read())) {
        weights_48_48_1x1_V_14_address0 =  (sc_lv<7>) (tmp_2275_cast_fu_25569_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read())) {
        weights_48_48_1x1_V_14_address0 =  (sc_lv<7>) (tmp_2238_cast_fu_24796_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read())) {
        weights_48_48_1x1_V_14_address0 =  (sc_lv<7>) (tmp_2199_cast_fu_24026_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read())) {
        weights_48_48_1x1_V_14_address0 =  (sc_lv<7>) (tmp_2162_cast_fu_23245_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read())) {
        weights_48_48_1x1_V_14_address0 =  (sc_lv<7>) (tmp_2121_cast_fu_22467_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read())) {
        weights_48_48_1x1_V_14_address0 =  (sc_lv<7>) (tmp_2084_cast_fu_21686_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read())) {
        weights_48_48_1x1_V_14_address0 =  (sc_lv<7>) (tmp_2045_cast_fu_20920_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read())) {
        weights_48_48_1x1_V_14_address0 =  (sc_lv<7>) (tmp_2008_cast_fu_20139_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read())) {
        weights_48_48_1x1_V_14_address0 =  (sc_lv<7>) (tmp_1980_cast_fu_19492_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read())) {
        weights_48_48_1x1_V_14_address0 =  (sc_lv<7>) (tmp_1940_cast_fu_18711_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read())) {
        weights_48_48_1x1_V_14_address0 =  (sc_lv<7>) (tmp_1906_cast_fu_17930_p1.read());
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
        weights_48_48_1x1_V_14_address0 = grp_subconv_1x1_8_p_fu_12848_weight_14_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_14_address0 = grp_subconv_1x1_16p_p_fu_12744_weight_14_V_address0.read();
    } else {
        weights_48_48_1x1_V_14_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_14_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read()) || 
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
        weights_48_48_1x1_V_14_address1 = grp_subconv_1x1_8_p_fu_12848_weight_14_V_address1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_14_address1 = grp_subconv_1x1_16p_p_fu_12744_weight_14_V_address1.read();
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
        weights_48_48_1x1_V_14_ce0 = grp_subconv_1x1_8_p_fu_12848_weight_14_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_14_ce0 = grp_subconv_1x1_16p_p_fu_12744_weight_14_V_ce0.read();
    } else {
        weights_48_48_1x1_V_14_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_14_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read()) || 
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
        weights_48_48_1x1_V_14_ce1 = grp_subconv_1x1_8_p_fu_12848_weight_14_V_ce1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_14_ce1 = grp_subconv_1x1_16p_p_fu_12744_weight_14_V_ce1.read();
    } else {
        weights_48_48_1x1_V_14_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_14_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read()) && 
          esl_seteq<1,6,6>(tmp_1976_fu_17926_p1.read(), ap_const_lv6_E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read()) && 
          esl_seteq<1,6,6>(tmp_1995_fu_18707_p1.read(), ap_const_lv6_E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read()) && 
          esl_seteq<1,6,6>(tmp_2012_fu_19488_p1.read(), ap_const_lv6_E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read()) && 
          esl_seteq<1,6,6>(tmp_2040_fu_20135_p1.read(), ap_const_lv6_E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read()) && 
          esl_seteq<1,6,6>(tmp_2064_fu_20916_p1.read(), ap_const_lv6_E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read()) && 
          esl_seteq<1,6,6>(tmp_2087_fu_21682_p1.read(), ap_const_lv6_E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) && 
          esl_seteq<1,6,6>(tmp_2111_fu_22463_p1.read(), ap_const_lv6_E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read()) && 
          esl_seteq<1,6,6>(tmp_2124_fu_23241_p1.read(), ap_const_lv6_E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read()) && 
          esl_seteq<1,6,6>(tmp_2135_fu_24022_p1.read(), ap_const_lv6_E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read()) && 
          esl_seteq<1,6,6>(tmp_2148_fu_24792_p1.read(), ap_const_lv6_E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read()) && 
          esl_seteq<1,6,6>(tmp_2159_fu_25565_p1.read(), ap_const_lv6_E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read()) && 
          esl_seteq<1,6,6>(tmp_2172_fu_26331_p1.read(), ap_const_lv6_E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read()) && 
          esl_seteq<1,6,6>(tmp_2183_fu_27112_p1.read(), ap_const_lv6_E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read()) && 
          esl_seteq<1,6,6>(tmp_2196_fu_27878_p1.read(), ap_const_lv6_E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read()) && 
          esl_seteq<1,6,6>(tmp_2207_fu_28663_p1.read(), ap_const_lv6_E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read()) && 
          esl_seteq<1,6,6>(tmp_2220_fu_29437_p1.read(), ap_const_lv6_E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read()) && 
          esl_seteq<1,6,6>(tmp_2231_fu_30222_p1.read(), ap_const_lv6_E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read()) && 
          esl_seteq<1,6,6>(tmp_2244_fu_31000_p1.read(), ap_const_lv6_E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read()) && 
          esl_seteq<1,6,6>(tmp_2255_fu_31789_p1.read(), ap_const_lv6_E)))) {
        weights_48_48_1x1_V_14_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_14_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_15_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read())) {
        weights_48_48_1x1_V_15_address0 =  (sc_lv<7>) (tmp_2587_cast_fu_31793_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read())) {
        weights_48_48_1x1_V_15_address0 =  (sc_lv<7>) (tmp_2550_cast_fu_31004_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read())) {
        weights_48_48_1x1_V_15_address0 =  (sc_lv<7>) (tmp_2509_cast_fu_30226_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read())) {
        weights_48_48_1x1_V_15_address0 =  (sc_lv<7>) (tmp_2470_cast_fu_29441_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read())) {
        weights_48_48_1x1_V_15_address0 =  (sc_lv<7>) (tmp_2429_cast_fu_28667_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read())) {
        weights_48_48_1x1_V_15_address0 =  (sc_lv<7>) (tmp_2391_cast_fu_27882_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read())) {
        weights_48_48_1x1_V_15_address0 =  (sc_lv<7>) (tmp_2352_cast_fu_27116_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read())) {
        weights_48_48_1x1_V_15_address0 =  (sc_lv<7>) (tmp_2314_cast_fu_26335_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read())) {
        weights_48_48_1x1_V_15_address0 =  (sc_lv<7>) (tmp_2275_cast_fu_25569_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read())) {
        weights_48_48_1x1_V_15_address0 =  (sc_lv<7>) (tmp_2238_cast_fu_24796_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read())) {
        weights_48_48_1x1_V_15_address0 =  (sc_lv<7>) (tmp_2199_cast_fu_24026_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read())) {
        weights_48_48_1x1_V_15_address0 =  (sc_lv<7>) (tmp_2162_cast_fu_23245_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read())) {
        weights_48_48_1x1_V_15_address0 =  (sc_lv<7>) (tmp_2121_cast_fu_22467_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read())) {
        weights_48_48_1x1_V_15_address0 =  (sc_lv<7>) (tmp_2084_cast_fu_21686_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read())) {
        weights_48_48_1x1_V_15_address0 =  (sc_lv<7>) (tmp_2045_cast_fu_20920_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read())) {
        weights_48_48_1x1_V_15_address0 =  (sc_lv<7>) (tmp_2008_cast_fu_20139_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read())) {
        weights_48_48_1x1_V_15_address0 =  (sc_lv<7>) (tmp_1980_cast_fu_19492_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read())) {
        weights_48_48_1x1_V_15_address0 =  (sc_lv<7>) (tmp_1940_cast_fu_18711_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read())) {
        weights_48_48_1x1_V_15_address0 =  (sc_lv<7>) (tmp_1906_cast_fu_17930_p1.read());
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
        weights_48_48_1x1_V_15_address0 = grp_subconv_1x1_8_p_fu_12848_weight_15_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_15_address0 = grp_subconv_1x1_16p_p_fu_12744_weight_15_V_address0.read();
    } else {
        weights_48_48_1x1_V_15_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_15_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read()) || 
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
        weights_48_48_1x1_V_15_address1 = grp_subconv_1x1_8_p_fu_12848_weight_15_V_address1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_15_address1 = grp_subconv_1x1_16p_p_fu_12744_weight_15_V_address1.read();
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
        weights_48_48_1x1_V_15_ce0 = grp_subconv_1x1_8_p_fu_12848_weight_15_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_15_ce0 = grp_subconv_1x1_16p_p_fu_12744_weight_15_V_ce0.read();
    } else {
        weights_48_48_1x1_V_15_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_15_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read()) || 
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
        weights_48_48_1x1_V_15_ce1 = grp_subconv_1x1_8_p_fu_12848_weight_15_V_ce1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_15_ce1 = grp_subconv_1x1_16p_p_fu_12744_weight_15_V_ce1.read();
    } else {
        weights_48_48_1x1_V_15_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_15_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read()) && 
          esl_seteq<1,6,6>(tmp_1976_fu_17926_p1.read(), ap_const_lv6_F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read()) && 
          esl_seteq<1,6,6>(tmp_1995_fu_18707_p1.read(), ap_const_lv6_F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read()) && 
          esl_seteq<1,6,6>(tmp_2012_fu_19488_p1.read(), ap_const_lv6_F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read()) && 
          esl_seteq<1,6,6>(tmp_2040_fu_20135_p1.read(), ap_const_lv6_F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read()) && 
          esl_seteq<1,6,6>(tmp_2064_fu_20916_p1.read(), ap_const_lv6_F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read()) && 
          esl_seteq<1,6,6>(tmp_2087_fu_21682_p1.read(), ap_const_lv6_F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) && 
          esl_seteq<1,6,6>(tmp_2111_fu_22463_p1.read(), ap_const_lv6_F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read()) && 
          esl_seteq<1,6,6>(tmp_2124_fu_23241_p1.read(), ap_const_lv6_F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read()) && 
          esl_seteq<1,6,6>(tmp_2135_fu_24022_p1.read(), ap_const_lv6_F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read()) && 
          esl_seteq<1,6,6>(tmp_2148_fu_24792_p1.read(), ap_const_lv6_F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read()) && 
          esl_seteq<1,6,6>(tmp_2159_fu_25565_p1.read(), ap_const_lv6_F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read()) && 
          esl_seteq<1,6,6>(tmp_2172_fu_26331_p1.read(), ap_const_lv6_F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read()) && 
          esl_seteq<1,6,6>(tmp_2183_fu_27112_p1.read(), ap_const_lv6_F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read()) && 
          esl_seteq<1,6,6>(tmp_2196_fu_27878_p1.read(), ap_const_lv6_F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read()) && 
          esl_seteq<1,6,6>(tmp_2207_fu_28663_p1.read(), ap_const_lv6_F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read()) && 
          esl_seteq<1,6,6>(tmp_2220_fu_29437_p1.read(), ap_const_lv6_F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read()) && 
          esl_seteq<1,6,6>(tmp_2231_fu_30222_p1.read(), ap_const_lv6_F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read()) && 
          esl_seteq<1,6,6>(tmp_2244_fu_31000_p1.read(), ap_const_lv6_F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read()) && 
          esl_seteq<1,6,6>(tmp_2255_fu_31789_p1.read(), ap_const_lv6_F)))) {
        weights_48_48_1x1_V_15_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_15_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_16_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read())) {
        weights_48_48_1x1_V_16_address0 =  (sc_lv<7>) (tmp_2587_cast_fu_31793_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read())) {
        weights_48_48_1x1_V_16_address0 =  (sc_lv<7>) (tmp_2550_cast_fu_31004_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read())) {
        weights_48_48_1x1_V_16_address0 =  (sc_lv<7>) (tmp_2509_cast_fu_30226_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read())) {
        weights_48_48_1x1_V_16_address0 =  (sc_lv<7>) (tmp_2470_cast_fu_29441_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read())) {
        weights_48_48_1x1_V_16_address0 =  (sc_lv<7>) (tmp_2429_cast_fu_28667_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read())) {
        weights_48_48_1x1_V_16_address0 =  (sc_lv<7>) (tmp_2391_cast_fu_27882_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read())) {
        weights_48_48_1x1_V_16_address0 =  (sc_lv<7>) (tmp_2352_cast_fu_27116_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read())) {
        weights_48_48_1x1_V_16_address0 =  (sc_lv<7>) (tmp_2314_cast_fu_26335_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read())) {
        weights_48_48_1x1_V_16_address0 =  (sc_lv<7>) (tmp_2275_cast_fu_25569_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read())) {
        weights_48_48_1x1_V_16_address0 =  (sc_lv<7>) (tmp_2238_cast_fu_24796_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read())) {
        weights_48_48_1x1_V_16_address0 =  (sc_lv<7>) (tmp_2199_cast_fu_24026_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read())) {
        weights_48_48_1x1_V_16_address0 =  (sc_lv<7>) (tmp_2162_cast_fu_23245_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read())) {
        weights_48_48_1x1_V_16_address0 =  (sc_lv<7>) (tmp_2121_cast_fu_22467_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read())) {
        weights_48_48_1x1_V_16_address0 =  (sc_lv<7>) (tmp_2084_cast_fu_21686_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read())) {
        weights_48_48_1x1_V_16_address0 =  (sc_lv<7>) (tmp_2045_cast_fu_20920_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read())) {
        weights_48_48_1x1_V_16_address0 =  (sc_lv<7>) (tmp_2008_cast_fu_20139_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read())) {
        weights_48_48_1x1_V_16_address0 =  (sc_lv<7>) (tmp_1980_cast_fu_19492_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read())) {
        weights_48_48_1x1_V_16_address0 =  (sc_lv<7>) (tmp_1940_cast_fu_18711_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read())) {
        weights_48_48_1x1_V_16_address0 =  (sc_lv<7>) (tmp_1906_cast_fu_17930_p1.read());
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
        weights_48_48_1x1_V_16_address0 = grp_subconv_1x1_8_p_fu_12848_weight_16_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_16_address0 = grp_subconv_1x1_16p_p_fu_12744_weight_16_V_address0.read();
    } else {
        weights_48_48_1x1_V_16_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_16_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read()) || 
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
        weights_48_48_1x1_V_16_address1 = grp_subconv_1x1_8_p_fu_12848_weight_16_V_address1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_16_address1 = grp_subconv_1x1_16p_p_fu_12744_weight_16_V_address1.read();
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
        weights_48_48_1x1_V_16_ce0 = grp_subconv_1x1_8_p_fu_12848_weight_16_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_16_ce0 = grp_subconv_1x1_16p_p_fu_12744_weight_16_V_ce0.read();
    } else {
        weights_48_48_1x1_V_16_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_16_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read()) || 
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
        weights_48_48_1x1_V_16_ce1 = grp_subconv_1x1_8_p_fu_12848_weight_16_V_ce1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_16_ce1 = grp_subconv_1x1_16p_p_fu_12744_weight_16_V_ce1.read();
    } else {
        weights_48_48_1x1_V_16_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_16_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read()) && 
          esl_seteq<1,6,6>(tmp_1976_fu_17926_p1.read(), ap_const_lv6_10)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read()) && 
          esl_seteq<1,6,6>(tmp_1995_fu_18707_p1.read(), ap_const_lv6_10)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read()) && 
          esl_seteq<1,6,6>(tmp_2012_fu_19488_p1.read(), ap_const_lv6_10)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read()) && 
          esl_seteq<1,6,6>(tmp_2040_fu_20135_p1.read(), ap_const_lv6_10)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read()) && 
          esl_seteq<1,6,6>(tmp_2064_fu_20916_p1.read(), ap_const_lv6_10)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read()) && 
          esl_seteq<1,6,6>(tmp_2087_fu_21682_p1.read(), ap_const_lv6_10)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) && 
          esl_seteq<1,6,6>(tmp_2111_fu_22463_p1.read(), ap_const_lv6_10)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read()) && 
          esl_seteq<1,6,6>(tmp_2124_fu_23241_p1.read(), ap_const_lv6_10)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read()) && 
          esl_seteq<1,6,6>(tmp_2135_fu_24022_p1.read(), ap_const_lv6_10)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read()) && 
          esl_seteq<1,6,6>(tmp_2148_fu_24792_p1.read(), ap_const_lv6_10)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read()) && 
          esl_seteq<1,6,6>(tmp_2159_fu_25565_p1.read(), ap_const_lv6_10)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read()) && 
          esl_seteq<1,6,6>(tmp_2172_fu_26331_p1.read(), ap_const_lv6_10)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read()) && 
          esl_seteq<1,6,6>(tmp_2183_fu_27112_p1.read(), ap_const_lv6_10)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read()) && 
          esl_seteq<1,6,6>(tmp_2196_fu_27878_p1.read(), ap_const_lv6_10)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read()) && 
          esl_seteq<1,6,6>(tmp_2207_fu_28663_p1.read(), ap_const_lv6_10)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read()) && 
          esl_seteq<1,6,6>(tmp_2220_fu_29437_p1.read(), ap_const_lv6_10)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read()) && 
          esl_seteq<1,6,6>(tmp_2231_fu_30222_p1.read(), ap_const_lv6_10)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read()) && 
          esl_seteq<1,6,6>(tmp_2244_fu_31000_p1.read(), ap_const_lv6_10)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read()) && 
          esl_seteq<1,6,6>(tmp_2255_fu_31789_p1.read(), ap_const_lv6_10)))) {
        weights_48_48_1x1_V_16_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_16_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_17_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read())) {
        weights_48_48_1x1_V_17_address0 =  (sc_lv<7>) (tmp_2587_cast_fu_31793_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read())) {
        weights_48_48_1x1_V_17_address0 =  (sc_lv<7>) (tmp_2550_cast_fu_31004_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read())) {
        weights_48_48_1x1_V_17_address0 =  (sc_lv<7>) (tmp_2509_cast_fu_30226_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read())) {
        weights_48_48_1x1_V_17_address0 =  (sc_lv<7>) (tmp_2470_cast_fu_29441_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read())) {
        weights_48_48_1x1_V_17_address0 =  (sc_lv<7>) (tmp_2429_cast_fu_28667_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read())) {
        weights_48_48_1x1_V_17_address0 =  (sc_lv<7>) (tmp_2391_cast_fu_27882_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read())) {
        weights_48_48_1x1_V_17_address0 =  (sc_lv<7>) (tmp_2352_cast_fu_27116_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read())) {
        weights_48_48_1x1_V_17_address0 =  (sc_lv<7>) (tmp_2314_cast_fu_26335_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read())) {
        weights_48_48_1x1_V_17_address0 =  (sc_lv<7>) (tmp_2275_cast_fu_25569_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read())) {
        weights_48_48_1x1_V_17_address0 =  (sc_lv<7>) (tmp_2238_cast_fu_24796_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read())) {
        weights_48_48_1x1_V_17_address0 =  (sc_lv<7>) (tmp_2199_cast_fu_24026_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read())) {
        weights_48_48_1x1_V_17_address0 =  (sc_lv<7>) (tmp_2162_cast_fu_23245_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read())) {
        weights_48_48_1x1_V_17_address0 =  (sc_lv<7>) (tmp_2121_cast_fu_22467_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read())) {
        weights_48_48_1x1_V_17_address0 =  (sc_lv<7>) (tmp_2084_cast_fu_21686_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read())) {
        weights_48_48_1x1_V_17_address0 =  (sc_lv<7>) (tmp_2045_cast_fu_20920_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read())) {
        weights_48_48_1x1_V_17_address0 =  (sc_lv<7>) (tmp_2008_cast_fu_20139_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read())) {
        weights_48_48_1x1_V_17_address0 =  (sc_lv<7>) (tmp_1980_cast_fu_19492_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read())) {
        weights_48_48_1x1_V_17_address0 =  (sc_lv<7>) (tmp_1940_cast_fu_18711_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read())) {
        weights_48_48_1x1_V_17_address0 =  (sc_lv<7>) (tmp_1906_cast_fu_17930_p1.read());
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
        weights_48_48_1x1_V_17_address0 = grp_subconv_1x1_8_p_fu_12848_weight_17_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_17_address0 = grp_subconv_1x1_16p_p_fu_12744_weight_17_V_address0.read();
    } else {
        weights_48_48_1x1_V_17_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_17_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read()) || 
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
        weights_48_48_1x1_V_17_address1 = grp_subconv_1x1_8_p_fu_12848_weight_17_V_address1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_17_address1 = grp_subconv_1x1_16p_p_fu_12744_weight_17_V_address1.read();
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
        weights_48_48_1x1_V_17_ce0 = grp_subconv_1x1_8_p_fu_12848_weight_17_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_17_ce0 = grp_subconv_1x1_16p_p_fu_12744_weight_17_V_ce0.read();
    } else {
        weights_48_48_1x1_V_17_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_17_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read()) || 
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
        weights_48_48_1x1_V_17_ce1 = grp_subconv_1x1_8_p_fu_12848_weight_17_V_ce1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_17_ce1 = grp_subconv_1x1_16p_p_fu_12744_weight_17_V_ce1.read();
    } else {
        weights_48_48_1x1_V_17_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_17_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read()) && 
          esl_seteq<1,6,6>(tmp_1976_fu_17926_p1.read(), ap_const_lv6_11)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read()) && 
          esl_seteq<1,6,6>(tmp_1995_fu_18707_p1.read(), ap_const_lv6_11)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read()) && 
          esl_seteq<1,6,6>(tmp_2012_fu_19488_p1.read(), ap_const_lv6_11)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read()) && 
          esl_seteq<1,6,6>(tmp_2040_fu_20135_p1.read(), ap_const_lv6_11)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read()) && 
          esl_seteq<1,6,6>(tmp_2064_fu_20916_p1.read(), ap_const_lv6_11)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read()) && 
          esl_seteq<1,6,6>(tmp_2087_fu_21682_p1.read(), ap_const_lv6_11)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) && 
          esl_seteq<1,6,6>(tmp_2111_fu_22463_p1.read(), ap_const_lv6_11)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read()) && 
          esl_seteq<1,6,6>(tmp_2124_fu_23241_p1.read(), ap_const_lv6_11)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read()) && 
          esl_seteq<1,6,6>(tmp_2135_fu_24022_p1.read(), ap_const_lv6_11)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read()) && 
          esl_seteq<1,6,6>(tmp_2148_fu_24792_p1.read(), ap_const_lv6_11)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read()) && 
          esl_seteq<1,6,6>(tmp_2159_fu_25565_p1.read(), ap_const_lv6_11)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read()) && 
          esl_seteq<1,6,6>(tmp_2172_fu_26331_p1.read(), ap_const_lv6_11)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read()) && 
          esl_seteq<1,6,6>(tmp_2183_fu_27112_p1.read(), ap_const_lv6_11)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read()) && 
          esl_seteq<1,6,6>(tmp_2196_fu_27878_p1.read(), ap_const_lv6_11)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read()) && 
          esl_seteq<1,6,6>(tmp_2207_fu_28663_p1.read(), ap_const_lv6_11)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read()) && 
          esl_seteq<1,6,6>(tmp_2220_fu_29437_p1.read(), ap_const_lv6_11)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read()) && 
          esl_seteq<1,6,6>(tmp_2231_fu_30222_p1.read(), ap_const_lv6_11)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read()) && 
          esl_seteq<1,6,6>(tmp_2244_fu_31000_p1.read(), ap_const_lv6_11)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read()) && 
          esl_seteq<1,6,6>(tmp_2255_fu_31789_p1.read(), ap_const_lv6_11)))) {
        weights_48_48_1x1_V_17_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_17_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_18_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read())) {
        weights_48_48_1x1_V_18_address0 =  (sc_lv<7>) (tmp_2587_cast_fu_31793_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read())) {
        weights_48_48_1x1_V_18_address0 =  (sc_lv<7>) (tmp_2550_cast_fu_31004_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read())) {
        weights_48_48_1x1_V_18_address0 =  (sc_lv<7>) (tmp_2509_cast_fu_30226_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read())) {
        weights_48_48_1x1_V_18_address0 =  (sc_lv<7>) (tmp_2470_cast_fu_29441_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read())) {
        weights_48_48_1x1_V_18_address0 =  (sc_lv<7>) (tmp_2429_cast_fu_28667_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read())) {
        weights_48_48_1x1_V_18_address0 =  (sc_lv<7>) (tmp_2391_cast_fu_27882_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read())) {
        weights_48_48_1x1_V_18_address0 =  (sc_lv<7>) (tmp_2352_cast_fu_27116_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read())) {
        weights_48_48_1x1_V_18_address0 =  (sc_lv<7>) (tmp_2314_cast_fu_26335_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read())) {
        weights_48_48_1x1_V_18_address0 =  (sc_lv<7>) (tmp_2275_cast_fu_25569_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read())) {
        weights_48_48_1x1_V_18_address0 =  (sc_lv<7>) (tmp_2238_cast_fu_24796_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read())) {
        weights_48_48_1x1_V_18_address0 =  (sc_lv<7>) (tmp_2199_cast_fu_24026_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read())) {
        weights_48_48_1x1_V_18_address0 =  (sc_lv<7>) (tmp_2162_cast_fu_23245_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read())) {
        weights_48_48_1x1_V_18_address0 =  (sc_lv<7>) (tmp_2121_cast_fu_22467_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read())) {
        weights_48_48_1x1_V_18_address0 =  (sc_lv<7>) (tmp_2084_cast_fu_21686_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read())) {
        weights_48_48_1x1_V_18_address0 =  (sc_lv<7>) (tmp_2045_cast_fu_20920_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read())) {
        weights_48_48_1x1_V_18_address0 =  (sc_lv<7>) (tmp_2008_cast_fu_20139_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read())) {
        weights_48_48_1x1_V_18_address0 =  (sc_lv<7>) (tmp_1980_cast_fu_19492_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read())) {
        weights_48_48_1x1_V_18_address0 =  (sc_lv<7>) (tmp_1940_cast_fu_18711_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read())) {
        weights_48_48_1x1_V_18_address0 =  (sc_lv<7>) (tmp_1906_cast_fu_17930_p1.read());
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
        weights_48_48_1x1_V_18_address0 = grp_subconv_1x1_8_p_fu_12848_weight_18_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_18_address0 = grp_subconv_1x1_16p_p_fu_12744_weight_18_V_address0.read();
    } else {
        weights_48_48_1x1_V_18_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_18_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read()) || 
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
        weights_48_48_1x1_V_18_address1 = grp_subconv_1x1_8_p_fu_12848_weight_18_V_address1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_18_address1 = grp_subconv_1x1_16p_p_fu_12744_weight_18_V_address1.read();
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
        weights_48_48_1x1_V_18_ce0 = grp_subconv_1x1_8_p_fu_12848_weight_18_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_18_ce0 = grp_subconv_1x1_16p_p_fu_12744_weight_18_V_ce0.read();
    } else {
        weights_48_48_1x1_V_18_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_18_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read()) || 
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
        weights_48_48_1x1_V_18_ce1 = grp_subconv_1x1_8_p_fu_12848_weight_18_V_ce1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_18_ce1 = grp_subconv_1x1_16p_p_fu_12744_weight_18_V_ce1.read();
    } else {
        weights_48_48_1x1_V_18_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_18_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read()) && 
          esl_seteq<1,6,6>(tmp_1976_fu_17926_p1.read(), ap_const_lv6_12)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read()) && 
          esl_seteq<1,6,6>(tmp_1995_fu_18707_p1.read(), ap_const_lv6_12)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read()) && 
          esl_seteq<1,6,6>(tmp_2012_fu_19488_p1.read(), ap_const_lv6_12)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read()) && 
          esl_seteq<1,6,6>(tmp_2040_fu_20135_p1.read(), ap_const_lv6_12)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read()) && 
          esl_seteq<1,6,6>(tmp_2064_fu_20916_p1.read(), ap_const_lv6_12)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read()) && 
          esl_seteq<1,6,6>(tmp_2087_fu_21682_p1.read(), ap_const_lv6_12)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) && 
          esl_seteq<1,6,6>(tmp_2111_fu_22463_p1.read(), ap_const_lv6_12)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read()) && 
          esl_seteq<1,6,6>(tmp_2124_fu_23241_p1.read(), ap_const_lv6_12)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read()) && 
          esl_seteq<1,6,6>(tmp_2135_fu_24022_p1.read(), ap_const_lv6_12)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read()) && 
          esl_seteq<1,6,6>(tmp_2148_fu_24792_p1.read(), ap_const_lv6_12)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read()) && 
          esl_seteq<1,6,6>(tmp_2159_fu_25565_p1.read(), ap_const_lv6_12)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read()) && 
          esl_seteq<1,6,6>(tmp_2172_fu_26331_p1.read(), ap_const_lv6_12)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read()) && 
          esl_seteq<1,6,6>(tmp_2183_fu_27112_p1.read(), ap_const_lv6_12)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read()) && 
          esl_seteq<1,6,6>(tmp_2196_fu_27878_p1.read(), ap_const_lv6_12)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read()) && 
          esl_seteq<1,6,6>(tmp_2207_fu_28663_p1.read(), ap_const_lv6_12)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read()) && 
          esl_seteq<1,6,6>(tmp_2220_fu_29437_p1.read(), ap_const_lv6_12)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read()) && 
          esl_seteq<1,6,6>(tmp_2231_fu_30222_p1.read(), ap_const_lv6_12)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read()) && 
          esl_seteq<1,6,6>(tmp_2244_fu_31000_p1.read(), ap_const_lv6_12)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read()) && 
          esl_seteq<1,6,6>(tmp_2255_fu_31789_p1.read(), ap_const_lv6_12)))) {
        weights_48_48_1x1_V_18_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_18_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_19_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read())) {
        weights_48_48_1x1_V_19_address0 =  (sc_lv<7>) (tmp_2587_cast_fu_31793_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read())) {
        weights_48_48_1x1_V_19_address0 =  (sc_lv<7>) (tmp_2550_cast_fu_31004_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read())) {
        weights_48_48_1x1_V_19_address0 =  (sc_lv<7>) (tmp_2509_cast_fu_30226_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read())) {
        weights_48_48_1x1_V_19_address0 =  (sc_lv<7>) (tmp_2470_cast_fu_29441_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read())) {
        weights_48_48_1x1_V_19_address0 =  (sc_lv<7>) (tmp_2429_cast_fu_28667_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read())) {
        weights_48_48_1x1_V_19_address0 =  (sc_lv<7>) (tmp_2391_cast_fu_27882_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read())) {
        weights_48_48_1x1_V_19_address0 =  (sc_lv<7>) (tmp_2352_cast_fu_27116_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read())) {
        weights_48_48_1x1_V_19_address0 =  (sc_lv<7>) (tmp_2314_cast_fu_26335_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read())) {
        weights_48_48_1x1_V_19_address0 =  (sc_lv<7>) (tmp_2275_cast_fu_25569_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read())) {
        weights_48_48_1x1_V_19_address0 =  (sc_lv<7>) (tmp_2238_cast_fu_24796_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read())) {
        weights_48_48_1x1_V_19_address0 =  (sc_lv<7>) (tmp_2199_cast_fu_24026_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read())) {
        weights_48_48_1x1_V_19_address0 =  (sc_lv<7>) (tmp_2162_cast_fu_23245_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read())) {
        weights_48_48_1x1_V_19_address0 =  (sc_lv<7>) (tmp_2121_cast_fu_22467_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read())) {
        weights_48_48_1x1_V_19_address0 =  (sc_lv<7>) (tmp_2084_cast_fu_21686_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read())) {
        weights_48_48_1x1_V_19_address0 =  (sc_lv<7>) (tmp_2045_cast_fu_20920_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read())) {
        weights_48_48_1x1_V_19_address0 =  (sc_lv<7>) (tmp_2008_cast_fu_20139_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read())) {
        weights_48_48_1x1_V_19_address0 =  (sc_lv<7>) (tmp_1980_cast_fu_19492_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read())) {
        weights_48_48_1x1_V_19_address0 =  (sc_lv<7>) (tmp_1940_cast_fu_18711_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read())) {
        weights_48_48_1x1_V_19_address0 =  (sc_lv<7>) (tmp_1906_cast_fu_17930_p1.read());
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
        weights_48_48_1x1_V_19_address0 = grp_subconv_1x1_8_p_fu_12848_weight_19_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_19_address0 = grp_subconv_1x1_16p_p_fu_12744_weight_19_V_address0.read();
    } else {
        weights_48_48_1x1_V_19_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_19_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read()) || 
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
        weights_48_48_1x1_V_19_address1 = grp_subconv_1x1_8_p_fu_12848_weight_19_V_address1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_19_address1 = grp_subconv_1x1_16p_p_fu_12744_weight_19_V_address1.read();
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
        weights_48_48_1x1_V_19_ce0 = grp_subconv_1x1_8_p_fu_12848_weight_19_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_19_ce0 = grp_subconv_1x1_16p_p_fu_12744_weight_19_V_ce0.read();
    } else {
        weights_48_48_1x1_V_19_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_19_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read()) || 
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
        weights_48_48_1x1_V_19_ce1 = grp_subconv_1x1_8_p_fu_12848_weight_19_V_ce1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_19_ce1 = grp_subconv_1x1_16p_p_fu_12744_weight_19_V_ce1.read();
    } else {
        weights_48_48_1x1_V_19_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_19_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read()) && 
          esl_seteq<1,6,6>(tmp_1976_fu_17926_p1.read(), ap_const_lv6_13)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read()) && 
          esl_seteq<1,6,6>(tmp_1995_fu_18707_p1.read(), ap_const_lv6_13)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read()) && 
          esl_seteq<1,6,6>(tmp_2012_fu_19488_p1.read(), ap_const_lv6_13)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read()) && 
          esl_seteq<1,6,6>(tmp_2040_fu_20135_p1.read(), ap_const_lv6_13)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read()) && 
          esl_seteq<1,6,6>(tmp_2064_fu_20916_p1.read(), ap_const_lv6_13)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read()) && 
          esl_seteq<1,6,6>(tmp_2087_fu_21682_p1.read(), ap_const_lv6_13)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) && 
          esl_seteq<1,6,6>(tmp_2111_fu_22463_p1.read(), ap_const_lv6_13)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read()) && 
          esl_seteq<1,6,6>(tmp_2124_fu_23241_p1.read(), ap_const_lv6_13)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read()) && 
          esl_seteq<1,6,6>(tmp_2135_fu_24022_p1.read(), ap_const_lv6_13)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read()) && 
          esl_seteq<1,6,6>(tmp_2148_fu_24792_p1.read(), ap_const_lv6_13)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read()) && 
          esl_seteq<1,6,6>(tmp_2159_fu_25565_p1.read(), ap_const_lv6_13)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read()) && 
          esl_seteq<1,6,6>(tmp_2172_fu_26331_p1.read(), ap_const_lv6_13)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read()) && 
          esl_seteq<1,6,6>(tmp_2183_fu_27112_p1.read(), ap_const_lv6_13)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read()) && 
          esl_seteq<1,6,6>(tmp_2196_fu_27878_p1.read(), ap_const_lv6_13)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read()) && 
          esl_seteq<1,6,6>(tmp_2207_fu_28663_p1.read(), ap_const_lv6_13)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read()) && 
          esl_seteq<1,6,6>(tmp_2220_fu_29437_p1.read(), ap_const_lv6_13)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read()) && 
          esl_seteq<1,6,6>(tmp_2231_fu_30222_p1.read(), ap_const_lv6_13)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read()) && 
          esl_seteq<1,6,6>(tmp_2244_fu_31000_p1.read(), ap_const_lv6_13)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read()) && 
          esl_seteq<1,6,6>(tmp_2255_fu_31789_p1.read(), ap_const_lv6_13)))) {
        weights_48_48_1x1_V_19_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_19_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read())) {
        weights_48_48_1x1_V_1_address0 =  (sc_lv<7>) (tmp_2587_cast_fu_31793_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read())) {
        weights_48_48_1x1_V_1_address0 =  (sc_lv<7>) (tmp_2550_cast_fu_31004_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read())) {
        weights_48_48_1x1_V_1_address0 =  (sc_lv<7>) (tmp_2509_cast_fu_30226_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read())) {
        weights_48_48_1x1_V_1_address0 =  (sc_lv<7>) (tmp_2470_cast_fu_29441_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read())) {
        weights_48_48_1x1_V_1_address0 =  (sc_lv<7>) (tmp_2429_cast_fu_28667_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read())) {
        weights_48_48_1x1_V_1_address0 =  (sc_lv<7>) (tmp_2391_cast_fu_27882_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read())) {
        weights_48_48_1x1_V_1_address0 =  (sc_lv<7>) (tmp_2352_cast_fu_27116_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read())) {
        weights_48_48_1x1_V_1_address0 =  (sc_lv<7>) (tmp_2314_cast_fu_26335_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read())) {
        weights_48_48_1x1_V_1_address0 =  (sc_lv<7>) (tmp_2275_cast_fu_25569_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read())) {
        weights_48_48_1x1_V_1_address0 =  (sc_lv<7>) (tmp_2238_cast_fu_24796_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read())) {
        weights_48_48_1x1_V_1_address0 =  (sc_lv<7>) (tmp_2199_cast_fu_24026_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read())) {
        weights_48_48_1x1_V_1_address0 =  (sc_lv<7>) (tmp_2162_cast_fu_23245_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read())) {
        weights_48_48_1x1_V_1_address0 =  (sc_lv<7>) (tmp_2121_cast_fu_22467_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read())) {
        weights_48_48_1x1_V_1_address0 =  (sc_lv<7>) (tmp_2084_cast_fu_21686_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read())) {
        weights_48_48_1x1_V_1_address0 =  (sc_lv<7>) (tmp_2045_cast_fu_20920_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read())) {
        weights_48_48_1x1_V_1_address0 =  (sc_lv<7>) (tmp_2008_cast_fu_20139_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read())) {
        weights_48_48_1x1_V_1_address0 =  (sc_lv<7>) (tmp_1980_cast_fu_19492_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read())) {
        weights_48_48_1x1_V_1_address0 =  (sc_lv<7>) (tmp_1940_cast_fu_18711_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read())) {
        weights_48_48_1x1_V_1_address0 =  (sc_lv<7>) (tmp_1906_cast_fu_17930_p1.read());
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
        weights_48_48_1x1_V_1_address0 = grp_subconv_1x1_8_p_fu_12848_weight_1_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_1_address0 = grp_subconv_1x1_16p_p_fu_12744_weight_1_V_address0.read();
    } else {
        weights_48_48_1x1_V_1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_1_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read()) || 
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
        weights_48_48_1x1_V_1_address1 = grp_subconv_1x1_8_p_fu_12848_weight_1_V_address1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_1_address1 = grp_subconv_1x1_16p_p_fu_12744_weight_1_V_address1.read();
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
        weights_48_48_1x1_V_1_ce0 = grp_subconv_1x1_8_p_fu_12848_weight_1_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_1_ce0 = grp_subconv_1x1_16p_p_fu_12744_weight_1_V_ce0.read();
    } else {
        weights_48_48_1x1_V_1_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_1_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read()) || 
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
        weights_48_48_1x1_V_1_ce1 = grp_subconv_1x1_8_p_fu_12848_weight_1_V_ce1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_1_ce1 = grp_subconv_1x1_16p_p_fu_12744_weight_1_V_ce1.read();
    } else {
        weights_48_48_1x1_V_1_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_1_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read()) && 
          esl_seteq<1,6,6>(tmp_1976_fu_17926_p1.read(), ap_const_lv6_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read()) && 
          esl_seteq<1,6,6>(tmp_1995_fu_18707_p1.read(), ap_const_lv6_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read()) && 
          esl_seteq<1,6,6>(tmp_2012_fu_19488_p1.read(), ap_const_lv6_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read()) && 
          esl_seteq<1,6,6>(tmp_2040_fu_20135_p1.read(), ap_const_lv6_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read()) && 
          esl_seteq<1,6,6>(tmp_2064_fu_20916_p1.read(), ap_const_lv6_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read()) && 
          esl_seteq<1,6,6>(tmp_2087_fu_21682_p1.read(), ap_const_lv6_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) && 
          esl_seteq<1,6,6>(tmp_2111_fu_22463_p1.read(), ap_const_lv6_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read()) && 
          esl_seteq<1,6,6>(tmp_2124_fu_23241_p1.read(), ap_const_lv6_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read()) && 
          esl_seteq<1,6,6>(tmp_2135_fu_24022_p1.read(), ap_const_lv6_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read()) && 
          esl_seteq<1,6,6>(tmp_2148_fu_24792_p1.read(), ap_const_lv6_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read()) && 
          esl_seteq<1,6,6>(tmp_2159_fu_25565_p1.read(), ap_const_lv6_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read()) && 
          esl_seteq<1,6,6>(tmp_2172_fu_26331_p1.read(), ap_const_lv6_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read()) && 
          esl_seteq<1,6,6>(tmp_2183_fu_27112_p1.read(), ap_const_lv6_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read()) && 
          esl_seteq<1,6,6>(tmp_2196_fu_27878_p1.read(), ap_const_lv6_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read()) && 
          esl_seteq<1,6,6>(tmp_2207_fu_28663_p1.read(), ap_const_lv6_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read()) && 
          esl_seteq<1,6,6>(tmp_2220_fu_29437_p1.read(), ap_const_lv6_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read()) && 
          esl_seteq<1,6,6>(tmp_2231_fu_30222_p1.read(), ap_const_lv6_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read()) && 
          esl_seteq<1,6,6>(tmp_2244_fu_31000_p1.read(), ap_const_lv6_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read()) && 
          esl_seteq<1,6,6>(tmp_2255_fu_31789_p1.read(), ap_const_lv6_1)))) {
        weights_48_48_1x1_V_1_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_1_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_20_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read())) {
        weights_48_48_1x1_V_20_address0 =  (sc_lv<7>) (tmp_2587_cast_fu_31793_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read())) {
        weights_48_48_1x1_V_20_address0 =  (sc_lv<7>) (tmp_2550_cast_fu_31004_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read())) {
        weights_48_48_1x1_V_20_address0 =  (sc_lv<7>) (tmp_2509_cast_fu_30226_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read())) {
        weights_48_48_1x1_V_20_address0 =  (sc_lv<7>) (tmp_2470_cast_fu_29441_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read())) {
        weights_48_48_1x1_V_20_address0 =  (sc_lv<7>) (tmp_2429_cast_fu_28667_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read())) {
        weights_48_48_1x1_V_20_address0 =  (sc_lv<7>) (tmp_2391_cast_fu_27882_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read())) {
        weights_48_48_1x1_V_20_address0 =  (sc_lv<7>) (tmp_2352_cast_fu_27116_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read())) {
        weights_48_48_1x1_V_20_address0 =  (sc_lv<7>) (tmp_2314_cast_fu_26335_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read())) {
        weights_48_48_1x1_V_20_address0 =  (sc_lv<7>) (tmp_2275_cast_fu_25569_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read())) {
        weights_48_48_1x1_V_20_address0 =  (sc_lv<7>) (tmp_2238_cast_fu_24796_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read())) {
        weights_48_48_1x1_V_20_address0 =  (sc_lv<7>) (tmp_2199_cast_fu_24026_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read())) {
        weights_48_48_1x1_V_20_address0 =  (sc_lv<7>) (tmp_2162_cast_fu_23245_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read())) {
        weights_48_48_1x1_V_20_address0 =  (sc_lv<7>) (tmp_2121_cast_fu_22467_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read())) {
        weights_48_48_1x1_V_20_address0 =  (sc_lv<7>) (tmp_2084_cast_fu_21686_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read())) {
        weights_48_48_1x1_V_20_address0 =  (sc_lv<7>) (tmp_2045_cast_fu_20920_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read())) {
        weights_48_48_1x1_V_20_address0 =  (sc_lv<7>) (tmp_2008_cast_fu_20139_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read())) {
        weights_48_48_1x1_V_20_address0 =  (sc_lv<7>) (tmp_1980_cast_fu_19492_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read())) {
        weights_48_48_1x1_V_20_address0 =  (sc_lv<7>) (tmp_1940_cast_fu_18711_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read())) {
        weights_48_48_1x1_V_20_address0 =  (sc_lv<7>) (tmp_1906_cast_fu_17930_p1.read());
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
        weights_48_48_1x1_V_20_address0 = grp_subconv_1x1_8_p_fu_12848_weight_20_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_20_address0 = grp_subconv_1x1_16p_p_fu_12744_weight_20_V_address0.read();
    } else {
        weights_48_48_1x1_V_20_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_20_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read()) || 
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
        weights_48_48_1x1_V_20_address1 = grp_subconv_1x1_8_p_fu_12848_weight_20_V_address1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_20_address1 = grp_subconv_1x1_16p_p_fu_12744_weight_20_V_address1.read();
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
        weights_48_48_1x1_V_20_ce0 = grp_subconv_1x1_8_p_fu_12848_weight_20_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_20_ce0 = grp_subconv_1x1_16p_p_fu_12744_weight_20_V_ce0.read();
    } else {
        weights_48_48_1x1_V_20_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_20_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read()) || 
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
        weights_48_48_1x1_V_20_ce1 = grp_subconv_1x1_8_p_fu_12848_weight_20_V_ce1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_20_ce1 = grp_subconv_1x1_16p_p_fu_12744_weight_20_V_ce1.read();
    } else {
        weights_48_48_1x1_V_20_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_20_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read()) && 
          esl_seteq<1,6,6>(tmp_1976_fu_17926_p1.read(), ap_const_lv6_14)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read()) && 
          esl_seteq<1,6,6>(tmp_1995_fu_18707_p1.read(), ap_const_lv6_14)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read()) && 
          esl_seteq<1,6,6>(tmp_2012_fu_19488_p1.read(), ap_const_lv6_14)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read()) && 
          esl_seteq<1,6,6>(tmp_2040_fu_20135_p1.read(), ap_const_lv6_14)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read()) && 
          esl_seteq<1,6,6>(tmp_2064_fu_20916_p1.read(), ap_const_lv6_14)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read()) && 
          esl_seteq<1,6,6>(tmp_2087_fu_21682_p1.read(), ap_const_lv6_14)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) && 
          esl_seteq<1,6,6>(tmp_2111_fu_22463_p1.read(), ap_const_lv6_14)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read()) && 
          esl_seteq<1,6,6>(tmp_2124_fu_23241_p1.read(), ap_const_lv6_14)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read()) && 
          esl_seteq<1,6,6>(tmp_2135_fu_24022_p1.read(), ap_const_lv6_14)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read()) && 
          esl_seteq<1,6,6>(tmp_2148_fu_24792_p1.read(), ap_const_lv6_14)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read()) && 
          esl_seteq<1,6,6>(tmp_2159_fu_25565_p1.read(), ap_const_lv6_14)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read()) && 
          esl_seteq<1,6,6>(tmp_2172_fu_26331_p1.read(), ap_const_lv6_14)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read()) && 
          esl_seteq<1,6,6>(tmp_2183_fu_27112_p1.read(), ap_const_lv6_14)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read()) && 
          esl_seteq<1,6,6>(tmp_2196_fu_27878_p1.read(), ap_const_lv6_14)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read()) && 
          esl_seteq<1,6,6>(tmp_2207_fu_28663_p1.read(), ap_const_lv6_14)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read()) && 
          esl_seteq<1,6,6>(tmp_2220_fu_29437_p1.read(), ap_const_lv6_14)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read()) && 
          esl_seteq<1,6,6>(tmp_2231_fu_30222_p1.read(), ap_const_lv6_14)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read()) && 
          esl_seteq<1,6,6>(tmp_2244_fu_31000_p1.read(), ap_const_lv6_14)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read()) && 
          esl_seteq<1,6,6>(tmp_2255_fu_31789_p1.read(), ap_const_lv6_14)))) {
        weights_48_48_1x1_V_20_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_20_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_21_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read())) {
        weights_48_48_1x1_V_21_address0 =  (sc_lv<7>) (tmp_2587_cast_fu_31793_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read())) {
        weights_48_48_1x1_V_21_address0 =  (sc_lv<7>) (tmp_2550_cast_fu_31004_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read())) {
        weights_48_48_1x1_V_21_address0 =  (sc_lv<7>) (tmp_2509_cast_fu_30226_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read())) {
        weights_48_48_1x1_V_21_address0 =  (sc_lv<7>) (tmp_2470_cast_fu_29441_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read())) {
        weights_48_48_1x1_V_21_address0 =  (sc_lv<7>) (tmp_2429_cast_fu_28667_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read())) {
        weights_48_48_1x1_V_21_address0 =  (sc_lv<7>) (tmp_2391_cast_fu_27882_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read())) {
        weights_48_48_1x1_V_21_address0 =  (sc_lv<7>) (tmp_2352_cast_fu_27116_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read())) {
        weights_48_48_1x1_V_21_address0 =  (sc_lv<7>) (tmp_2314_cast_fu_26335_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read())) {
        weights_48_48_1x1_V_21_address0 =  (sc_lv<7>) (tmp_2275_cast_fu_25569_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read())) {
        weights_48_48_1x1_V_21_address0 =  (sc_lv<7>) (tmp_2238_cast_fu_24796_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read())) {
        weights_48_48_1x1_V_21_address0 =  (sc_lv<7>) (tmp_2199_cast_fu_24026_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read())) {
        weights_48_48_1x1_V_21_address0 =  (sc_lv<7>) (tmp_2162_cast_fu_23245_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read())) {
        weights_48_48_1x1_V_21_address0 =  (sc_lv<7>) (tmp_2121_cast_fu_22467_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read())) {
        weights_48_48_1x1_V_21_address0 =  (sc_lv<7>) (tmp_2084_cast_fu_21686_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read())) {
        weights_48_48_1x1_V_21_address0 =  (sc_lv<7>) (tmp_2045_cast_fu_20920_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read())) {
        weights_48_48_1x1_V_21_address0 =  (sc_lv<7>) (tmp_2008_cast_fu_20139_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read())) {
        weights_48_48_1x1_V_21_address0 =  (sc_lv<7>) (tmp_1980_cast_fu_19492_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read())) {
        weights_48_48_1x1_V_21_address0 =  (sc_lv<7>) (tmp_1940_cast_fu_18711_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read())) {
        weights_48_48_1x1_V_21_address0 =  (sc_lv<7>) (tmp_1906_cast_fu_17930_p1.read());
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
        weights_48_48_1x1_V_21_address0 = grp_subconv_1x1_8_p_fu_12848_weight_21_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_21_address0 = grp_subconv_1x1_16p_p_fu_12744_weight_21_V_address0.read();
    } else {
        weights_48_48_1x1_V_21_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_21_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read()) || 
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
        weights_48_48_1x1_V_21_address1 = grp_subconv_1x1_8_p_fu_12848_weight_21_V_address1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_21_address1 = grp_subconv_1x1_16p_p_fu_12744_weight_21_V_address1.read();
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
        weights_48_48_1x1_V_21_ce0 = grp_subconv_1x1_8_p_fu_12848_weight_21_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_21_ce0 = grp_subconv_1x1_16p_p_fu_12744_weight_21_V_ce0.read();
    } else {
        weights_48_48_1x1_V_21_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_21_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read()) || 
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
        weights_48_48_1x1_V_21_ce1 = grp_subconv_1x1_8_p_fu_12848_weight_21_V_ce1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_21_ce1 = grp_subconv_1x1_16p_p_fu_12744_weight_21_V_ce1.read();
    } else {
        weights_48_48_1x1_V_21_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_21_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read()) && 
          esl_seteq<1,6,6>(tmp_1976_fu_17926_p1.read(), ap_const_lv6_15)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read()) && 
          esl_seteq<1,6,6>(tmp_1995_fu_18707_p1.read(), ap_const_lv6_15)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read()) && 
          esl_seteq<1,6,6>(tmp_2012_fu_19488_p1.read(), ap_const_lv6_15)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read()) && 
          esl_seteq<1,6,6>(tmp_2040_fu_20135_p1.read(), ap_const_lv6_15)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read()) && 
          esl_seteq<1,6,6>(tmp_2064_fu_20916_p1.read(), ap_const_lv6_15)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read()) && 
          esl_seteq<1,6,6>(tmp_2087_fu_21682_p1.read(), ap_const_lv6_15)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) && 
          esl_seteq<1,6,6>(tmp_2111_fu_22463_p1.read(), ap_const_lv6_15)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read()) && 
          esl_seteq<1,6,6>(tmp_2124_fu_23241_p1.read(), ap_const_lv6_15)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read()) && 
          esl_seteq<1,6,6>(tmp_2135_fu_24022_p1.read(), ap_const_lv6_15)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read()) && 
          esl_seteq<1,6,6>(tmp_2148_fu_24792_p1.read(), ap_const_lv6_15)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read()) && 
          esl_seteq<1,6,6>(tmp_2159_fu_25565_p1.read(), ap_const_lv6_15)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read()) && 
          esl_seteq<1,6,6>(tmp_2172_fu_26331_p1.read(), ap_const_lv6_15)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read()) && 
          esl_seteq<1,6,6>(tmp_2183_fu_27112_p1.read(), ap_const_lv6_15)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read()) && 
          esl_seteq<1,6,6>(tmp_2196_fu_27878_p1.read(), ap_const_lv6_15)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read()) && 
          esl_seteq<1,6,6>(tmp_2207_fu_28663_p1.read(), ap_const_lv6_15)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read()) && 
          esl_seteq<1,6,6>(tmp_2220_fu_29437_p1.read(), ap_const_lv6_15)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read()) && 
          esl_seteq<1,6,6>(tmp_2231_fu_30222_p1.read(), ap_const_lv6_15)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read()) && 
          esl_seteq<1,6,6>(tmp_2244_fu_31000_p1.read(), ap_const_lv6_15)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read()) && 
          esl_seteq<1,6,6>(tmp_2255_fu_31789_p1.read(), ap_const_lv6_15)))) {
        weights_48_48_1x1_V_21_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_21_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_22_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read())) {
        weights_48_48_1x1_V_22_address0 =  (sc_lv<7>) (tmp_2587_cast_fu_31793_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read())) {
        weights_48_48_1x1_V_22_address0 =  (sc_lv<7>) (tmp_2550_cast_fu_31004_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read())) {
        weights_48_48_1x1_V_22_address0 =  (sc_lv<7>) (tmp_2509_cast_fu_30226_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read())) {
        weights_48_48_1x1_V_22_address0 =  (sc_lv<7>) (tmp_2470_cast_fu_29441_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read())) {
        weights_48_48_1x1_V_22_address0 =  (sc_lv<7>) (tmp_2429_cast_fu_28667_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read())) {
        weights_48_48_1x1_V_22_address0 =  (sc_lv<7>) (tmp_2391_cast_fu_27882_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read())) {
        weights_48_48_1x1_V_22_address0 =  (sc_lv<7>) (tmp_2352_cast_fu_27116_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read())) {
        weights_48_48_1x1_V_22_address0 =  (sc_lv<7>) (tmp_2314_cast_fu_26335_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read())) {
        weights_48_48_1x1_V_22_address0 =  (sc_lv<7>) (tmp_2275_cast_fu_25569_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read())) {
        weights_48_48_1x1_V_22_address0 =  (sc_lv<7>) (tmp_2238_cast_fu_24796_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read())) {
        weights_48_48_1x1_V_22_address0 =  (sc_lv<7>) (tmp_2199_cast_fu_24026_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read())) {
        weights_48_48_1x1_V_22_address0 =  (sc_lv<7>) (tmp_2162_cast_fu_23245_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read())) {
        weights_48_48_1x1_V_22_address0 =  (sc_lv<7>) (tmp_2121_cast_fu_22467_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read())) {
        weights_48_48_1x1_V_22_address0 =  (sc_lv<7>) (tmp_2084_cast_fu_21686_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read())) {
        weights_48_48_1x1_V_22_address0 =  (sc_lv<7>) (tmp_2045_cast_fu_20920_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read())) {
        weights_48_48_1x1_V_22_address0 =  (sc_lv<7>) (tmp_2008_cast_fu_20139_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read())) {
        weights_48_48_1x1_V_22_address0 =  (sc_lv<7>) (tmp_1980_cast_fu_19492_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read())) {
        weights_48_48_1x1_V_22_address0 =  (sc_lv<7>) (tmp_1940_cast_fu_18711_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read())) {
        weights_48_48_1x1_V_22_address0 =  (sc_lv<7>) (tmp_1906_cast_fu_17930_p1.read());
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
        weights_48_48_1x1_V_22_address0 = grp_subconv_1x1_8_p_fu_12848_weight_22_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_22_address0 = grp_subconv_1x1_16p_p_fu_12744_weight_22_V_address0.read();
    } else {
        weights_48_48_1x1_V_22_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_22_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read()) || 
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
        weights_48_48_1x1_V_22_address1 = grp_subconv_1x1_8_p_fu_12848_weight_22_V_address1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_22_address1 = grp_subconv_1x1_16p_p_fu_12744_weight_22_V_address1.read();
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
        weights_48_48_1x1_V_22_ce0 = grp_subconv_1x1_8_p_fu_12848_weight_22_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_22_ce0 = grp_subconv_1x1_16p_p_fu_12744_weight_22_V_ce0.read();
    } else {
        weights_48_48_1x1_V_22_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_22_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read()) || 
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
        weights_48_48_1x1_V_22_ce1 = grp_subconv_1x1_8_p_fu_12848_weight_22_V_ce1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_22_ce1 = grp_subconv_1x1_16p_p_fu_12744_weight_22_V_ce1.read();
    } else {
        weights_48_48_1x1_V_22_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_22_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read()) && 
          esl_seteq<1,6,6>(tmp_1976_fu_17926_p1.read(), ap_const_lv6_16)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_16, tmp_1995_fu_18707_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_16, tmp_2012_fu_19488_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_16, tmp_2040_fu_20135_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_16, tmp_2064_fu_20916_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_16, tmp_2087_fu_21682_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_16, tmp_2111_fu_22463_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_16, tmp_2124_fu_23241_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_16, tmp_2135_fu_24022_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_16, tmp_2148_fu_24792_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_16, tmp_2159_fu_25565_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_16, tmp_2172_fu_26331_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_16, tmp_2183_fu_27112_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_16, tmp_2196_fu_27878_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_16, tmp_2207_fu_28663_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_16, tmp_2220_fu_29437_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_16, tmp_2231_fu_30222_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_16, tmp_2244_fu_31000_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_16, tmp_2255_fu_31789_p1.read())))) {
        weights_48_48_1x1_V_22_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_22_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_23_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read())) {
        weights_48_48_1x1_V_23_address0 =  (sc_lv<7>) (tmp_2587_cast_fu_31793_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read())) {
        weights_48_48_1x1_V_23_address0 =  (sc_lv<7>) (tmp_2550_cast_fu_31004_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read())) {
        weights_48_48_1x1_V_23_address0 =  (sc_lv<7>) (tmp_2509_cast_fu_30226_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read())) {
        weights_48_48_1x1_V_23_address0 =  (sc_lv<7>) (tmp_2470_cast_fu_29441_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read())) {
        weights_48_48_1x1_V_23_address0 =  (sc_lv<7>) (tmp_2429_cast_fu_28667_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read())) {
        weights_48_48_1x1_V_23_address0 =  (sc_lv<7>) (tmp_2391_cast_fu_27882_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read())) {
        weights_48_48_1x1_V_23_address0 =  (sc_lv<7>) (tmp_2352_cast_fu_27116_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read())) {
        weights_48_48_1x1_V_23_address0 =  (sc_lv<7>) (tmp_2314_cast_fu_26335_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read())) {
        weights_48_48_1x1_V_23_address0 =  (sc_lv<7>) (tmp_2275_cast_fu_25569_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read())) {
        weights_48_48_1x1_V_23_address0 =  (sc_lv<7>) (tmp_2238_cast_fu_24796_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read())) {
        weights_48_48_1x1_V_23_address0 =  (sc_lv<7>) (tmp_2199_cast_fu_24026_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read())) {
        weights_48_48_1x1_V_23_address0 =  (sc_lv<7>) (tmp_2162_cast_fu_23245_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read())) {
        weights_48_48_1x1_V_23_address0 =  (sc_lv<7>) (tmp_2121_cast_fu_22467_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read())) {
        weights_48_48_1x1_V_23_address0 =  (sc_lv<7>) (tmp_2084_cast_fu_21686_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read())) {
        weights_48_48_1x1_V_23_address0 =  (sc_lv<7>) (tmp_2045_cast_fu_20920_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read())) {
        weights_48_48_1x1_V_23_address0 =  (sc_lv<7>) (tmp_2008_cast_fu_20139_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read())) {
        weights_48_48_1x1_V_23_address0 =  (sc_lv<7>) (tmp_1980_cast_fu_19492_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read())) {
        weights_48_48_1x1_V_23_address0 =  (sc_lv<7>) (tmp_1940_cast_fu_18711_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read())) {
        weights_48_48_1x1_V_23_address0 =  (sc_lv<7>) (tmp_1906_cast_fu_17930_p1.read());
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
        weights_48_48_1x1_V_23_address0 = grp_subconv_1x1_8_p_fu_12848_weight_23_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_23_address0 = grp_subconv_1x1_16p_p_fu_12744_weight_23_V_address0.read();
    } else {
        weights_48_48_1x1_V_23_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_23_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read()) || 
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
        weights_48_48_1x1_V_23_address1 = grp_subconv_1x1_8_p_fu_12848_weight_23_V_address1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_23_address1 = grp_subconv_1x1_16p_p_fu_12744_weight_23_V_address1.read();
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
        weights_48_48_1x1_V_23_ce0 = grp_subconv_1x1_8_p_fu_12848_weight_23_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_23_ce0 = grp_subconv_1x1_16p_p_fu_12744_weight_23_V_ce0.read();
    } else {
        weights_48_48_1x1_V_23_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_23_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read()) || 
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
        weights_48_48_1x1_V_23_ce1 = grp_subconv_1x1_8_p_fu_12848_weight_23_V_ce1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_23_ce1 = grp_subconv_1x1_16p_p_fu_12744_weight_23_V_ce1.read();
    } else {
        weights_48_48_1x1_V_23_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_23_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_0, tmp_1976_fu_17926_p1.read()) && 
          !esl_seteq<1,6,6>(tmp_1976_fu_17926_p1.read(), ap_const_lv6_1) && 
          !esl_seteq<1,6,6>(tmp_1976_fu_17926_p1.read(), ap_const_lv6_2) && 
          !esl_seteq<1,6,6>(tmp_1976_fu_17926_p1.read(), ap_const_lv6_3) && 
          !esl_seteq<1,6,6>(tmp_1976_fu_17926_p1.read(), ap_const_lv6_4) && 
          !esl_seteq<1,6,6>(tmp_1976_fu_17926_p1.read(), ap_const_lv6_5) && 
          !esl_seteq<1,6,6>(tmp_1976_fu_17926_p1.read(), ap_const_lv6_6) && 
          !esl_seteq<1,6,6>(tmp_1976_fu_17926_p1.read(), ap_const_lv6_7) && 
          !esl_seteq<1,6,6>(tmp_1976_fu_17926_p1.read(), ap_const_lv6_8) && 
          !esl_seteq<1,6,6>(tmp_1976_fu_17926_p1.read(), ap_const_lv6_9) && 
          !esl_seteq<1,6,6>(tmp_1976_fu_17926_p1.read(), ap_const_lv6_A) && 
          !esl_seteq<1,6,6>(tmp_1976_fu_17926_p1.read(), ap_const_lv6_B) && 
          !esl_seteq<1,6,6>(tmp_1976_fu_17926_p1.read(), ap_const_lv6_C) && 
          !esl_seteq<1,6,6>(tmp_1976_fu_17926_p1.read(), ap_const_lv6_D) && 
          !esl_seteq<1,6,6>(tmp_1976_fu_17926_p1.read(), ap_const_lv6_E) && 
          !esl_seteq<1,6,6>(tmp_1976_fu_17926_p1.read(), ap_const_lv6_F) && 
          !esl_seteq<1,6,6>(tmp_1976_fu_17926_p1.read(), ap_const_lv6_10) && 
          !esl_seteq<1,6,6>(tmp_1976_fu_17926_p1.read(), ap_const_lv6_11) && 
          !esl_seteq<1,6,6>(tmp_1976_fu_17926_p1.read(), ap_const_lv6_12) && 
          !esl_seteq<1,6,6>(tmp_1976_fu_17926_p1.read(), ap_const_lv6_13) && 
          !esl_seteq<1,6,6>(tmp_1976_fu_17926_p1.read(), ap_const_lv6_14) && 
          !esl_seteq<1,6,6>(tmp_1976_fu_17926_p1.read(), ap_const_lv6_15) && 
          !esl_seteq<1,6,6>(tmp_1976_fu_17926_p1.read(), ap_const_lv6_16)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_0, tmp_1995_fu_18707_p1.read()) && 
          !esl_seteq<1,6,6>(tmp_1995_fu_18707_p1.read(), ap_const_lv6_1) && 
          !esl_seteq<1,6,6>(tmp_1995_fu_18707_p1.read(), ap_const_lv6_2) && 
          !esl_seteq<1,6,6>(tmp_1995_fu_18707_p1.read(), ap_const_lv6_3) && 
          !esl_seteq<1,6,6>(tmp_1995_fu_18707_p1.read(), ap_const_lv6_4) && 
          !esl_seteq<1,6,6>(tmp_1995_fu_18707_p1.read(), ap_const_lv6_5) && 
          !esl_seteq<1,6,6>(tmp_1995_fu_18707_p1.read(), ap_const_lv6_6) && 
          !esl_seteq<1,6,6>(tmp_1995_fu_18707_p1.read(), ap_const_lv6_7) && 
          !esl_seteq<1,6,6>(tmp_1995_fu_18707_p1.read(), ap_const_lv6_8) && 
          !esl_seteq<1,6,6>(tmp_1995_fu_18707_p1.read(), ap_const_lv6_9) && 
          !esl_seteq<1,6,6>(tmp_1995_fu_18707_p1.read(), ap_const_lv6_A) && 
          !esl_seteq<1,6,6>(tmp_1995_fu_18707_p1.read(), ap_const_lv6_B) && 
          !esl_seteq<1,6,6>(tmp_1995_fu_18707_p1.read(), ap_const_lv6_C) && 
          !esl_seteq<1,6,6>(tmp_1995_fu_18707_p1.read(), ap_const_lv6_D) && 
          !esl_seteq<1,6,6>(tmp_1995_fu_18707_p1.read(), ap_const_lv6_E) && 
          !esl_seteq<1,6,6>(tmp_1995_fu_18707_p1.read(), ap_const_lv6_F) && 
          !esl_seteq<1,6,6>(tmp_1995_fu_18707_p1.read(), ap_const_lv6_10) && 
          !esl_seteq<1,6,6>(tmp_1995_fu_18707_p1.read(), ap_const_lv6_11) && 
          !esl_seteq<1,6,6>(tmp_1995_fu_18707_p1.read(), ap_const_lv6_12) && 
          !esl_seteq<1,6,6>(tmp_1995_fu_18707_p1.read(), ap_const_lv6_13) && 
          !esl_seteq<1,6,6>(tmp_1995_fu_18707_p1.read(), ap_const_lv6_14) && 
          !esl_seteq<1,6,6>(tmp_1995_fu_18707_p1.read(), ap_const_lv6_15) && 
          !esl_seteq<1,6,6>(ap_const_lv6_16, tmp_1995_fu_18707_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_0, tmp_2012_fu_19488_p1.read()) && 
          !esl_seteq<1,6,6>(tmp_2012_fu_19488_p1.read(), ap_const_lv6_1) && 
          !esl_seteq<1,6,6>(tmp_2012_fu_19488_p1.read(), ap_const_lv6_2) && 
          !esl_seteq<1,6,6>(tmp_2012_fu_19488_p1.read(), ap_const_lv6_3) && 
          !esl_seteq<1,6,6>(tmp_2012_fu_19488_p1.read(), ap_const_lv6_4) && 
          !esl_seteq<1,6,6>(tmp_2012_fu_19488_p1.read(), ap_const_lv6_5) && 
          !esl_seteq<1,6,6>(tmp_2012_fu_19488_p1.read(), ap_const_lv6_6) && 
          !esl_seteq<1,6,6>(tmp_2012_fu_19488_p1.read(), ap_const_lv6_7) && 
          !esl_seteq<1,6,6>(tmp_2012_fu_19488_p1.read(), ap_const_lv6_8) && 
          !esl_seteq<1,6,6>(tmp_2012_fu_19488_p1.read(), ap_const_lv6_9) && 
          !esl_seteq<1,6,6>(tmp_2012_fu_19488_p1.read(), ap_const_lv6_A) && 
          !esl_seteq<1,6,6>(tmp_2012_fu_19488_p1.read(), ap_const_lv6_B) && 
          !esl_seteq<1,6,6>(tmp_2012_fu_19488_p1.read(), ap_const_lv6_C) && 
          !esl_seteq<1,6,6>(tmp_2012_fu_19488_p1.read(), ap_const_lv6_D) && 
          !esl_seteq<1,6,6>(tmp_2012_fu_19488_p1.read(), ap_const_lv6_E) && 
          !esl_seteq<1,6,6>(tmp_2012_fu_19488_p1.read(), ap_const_lv6_F) && 
          !esl_seteq<1,6,6>(tmp_2012_fu_19488_p1.read(), ap_const_lv6_10) && 
          !esl_seteq<1,6,6>(tmp_2012_fu_19488_p1.read(), ap_const_lv6_11) && 
          !esl_seteq<1,6,6>(tmp_2012_fu_19488_p1.read(), ap_const_lv6_12) && 
          !esl_seteq<1,6,6>(tmp_2012_fu_19488_p1.read(), ap_const_lv6_13) && 
          !esl_seteq<1,6,6>(tmp_2012_fu_19488_p1.read(), ap_const_lv6_14) && 
          !esl_seteq<1,6,6>(tmp_2012_fu_19488_p1.read(), ap_const_lv6_15) && 
          !esl_seteq<1,6,6>(ap_const_lv6_16, tmp_2012_fu_19488_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_0, tmp_2040_fu_20135_p1.read()) && 
          !esl_seteq<1,6,6>(tmp_2040_fu_20135_p1.read(), ap_const_lv6_1) && 
          !esl_seteq<1,6,6>(tmp_2040_fu_20135_p1.read(), ap_const_lv6_2) && 
          !esl_seteq<1,6,6>(tmp_2040_fu_20135_p1.read(), ap_const_lv6_3) && 
          !esl_seteq<1,6,6>(tmp_2040_fu_20135_p1.read(), ap_const_lv6_4) && 
          !esl_seteq<1,6,6>(tmp_2040_fu_20135_p1.read(), ap_const_lv6_5) && 
          !esl_seteq<1,6,6>(tmp_2040_fu_20135_p1.read(), ap_const_lv6_6) && 
          !esl_seteq<1,6,6>(tmp_2040_fu_20135_p1.read(), ap_const_lv6_7) && 
          !esl_seteq<1,6,6>(tmp_2040_fu_20135_p1.read(), ap_const_lv6_8) && 
          !esl_seteq<1,6,6>(tmp_2040_fu_20135_p1.read(), ap_const_lv6_9) && 
          !esl_seteq<1,6,6>(tmp_2040_fu_20135_p1.read(), ap_const_lv6_A) && 
          !esl_seteq<1,6,6>(tmp_2040_fu_20135_p1.read(), ap_const_lv6_B) && 
          !esl_seteq<1,6,6>(tmp_2040_fu_20135_p1.read(), ap_const_lv6_C) && 
          !esl_seteq<1,6,6>(tmp_2040_fu_20135_p1.read(), ap_const_lv6_D) && 
          !esl_seteq<1,6,6>(tmp_2040_fu_20135_p1.read(), ap_const_lv6_E) && 
          !esl_seteq<1,6,6>(tmp_2040_fu_20135_p1.read(), ap_const_lv6_F) && 
          !esl_seteq<1,6,6>(tmp_2040_fu_20135_p1.read(), ap_const_lv6_10) && 
          !esl_seteq<1,6,6>(tmp_2040_fu_20135_p1.read(), ap_const_lv6_11) && 
          !esl_seteq<1,6,6>(tmp_2040_fu_20135_p1.read(), ap_const_lv6_12) && 
          !esl_seteq<1,6,6>(tmp_2040_fu_20135_p1.read(), ap_const_lv6_13) && 
          !esl_seteq<1,6,6>(tmp_2040_fu_20135_p1.read(), ap_const_lv6_14) && 
          !esl_seteq<1,6,6>(tmp_2040_fu_20135_p1.read(), ap_const_lv6_15) && 
          !esl_seteq<1,6,6>(ap_const_lv6_16, tmp_2040_fu_20135_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_0, tmp_2064_fu_20916_p1.read()) && 
          !esl_seteq<1,6,6>(tmp_2064_fu_20916_p1.read(), ap_const_lv6_1) && 
          !esl_seteq<1,6,6>(tmp_2064_fu_20916_p1.read(), ap_const_lv6_2) && 
          !esl_seteq<1,6,6>(tmp_2064_fu_20916_p1.read(), ap_const_lv6_3) && 
          !esl_seteq<1,6,6>(tmp_2064_fu_20916_p1.read(), ap_const_lv6_4) && 
          !esl_seteq<1,6,6>(tmp_2064_fu_20916_p1.read(), ap_const_lv6_5) && 
          !esl_seteq<1,6,6>(tmp_2064_fu_20916_p1.read(), ap_const_lv6_6) && 
          !esl_seteq<1,6,6>(tmp_2064_fu_20916_p1.read(), ap_const_lv6_7) && 
          !esl_seteq<1,6,6>(tmp_2064_fu_20916_p1.read(), ap_const_lv6_8) && 
          !esl_seteq<1,6,6>(tmp_2064_fu_20916_p1.read(), ap_const_lv6_9) && 
          !esl_seteq<1,6,6>(tmp_2064_fu_20916_p1.read(), ap_const_lv6_A) && 
          !esl_seteq<1,6,6>(tmp_2064_fu_20916_p1.read(), ap_const_lv6_B) && 
          !esl_seteq<1,6,6>(tmp_2064_fu_20916_p1.read(), ap_const_lv6_C) && 
          !esl_seteq<1,6,6>(tmp_2064_fu_20916_p1.read(), ap_const_lv6_D) && 
          !esl_seteq<1,6,6>(tmp_2064_fu_20916_p1.read(), ap_const_lv6_E) && 
          !esl_seteq<1,6,6>(tmp_2064_fu_20916_p1.read(), ap_const_lv6_F) && 
          !esl_seteq<1,6,6>(tmp_2064_fu_20916_p1.read(), ap_const_lv6_10) && 
          !esl_seteq<1,6,6>(tmp_2064_fu_20916_p1.read(), ap_const_lv6_11) && 
          !esl_seteq<1,6,6>(tmp_2064_fu_20916_p1.read(), ap_const_lv6_12) && 
          !esl_seteq<1,6,6>(tmp_2064_fu_20916_p1.read(), ap_const_lv6_13) && 
          !esl_seteq<1,6,6>(tmp_2064_fu_20916_p1.read(), ap_const_lv6_14) && 
          !esl_seteq<1,6,6>(tmp_2064_fu_20916_p1.read(), ap_const_lv6_15) && 
          !esl_seteq<1,6,6>(ap_const_lv6_16, tmp_2064_fu_20916_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_0, tmp_2087_fu_21682_p1.read()) && 
          !esl_seteq<1,6,6>(tmp_2087_fu_21682_p1.read(), ap_const_lv6_1) && 
          !esl_seteq<1,6,6>(tmp_2087_fu_21682_p1.read(), ap_const_lv6_2) && 
          !esl_seteq<1,6,6>(tmp_2087_fu_21682_p1.read(), ap_const_lv6_3) && 
          !esl_seteq<1,6,6>(tmp_2087_fu_21682_p1.read(), ap_const_lv6_4) && 
          !esl_seteq<1,6,6>(tmp_2087_fu_21682_p1.read(), ap_const_lv6_5) && 
          !esl_seteq<1,6,6>(tmp_2087_fu_21682_p1.read(), ap_const_lv6_6) && 
          !esl_seteq<1,6,6>(tmp_2087_fu_21682_p1.read(), ap_const_lv6_7) && 
          !esl_seteq<1,6,6>(tmp_2087_fu_21682_p1.read(), ap_const_lv6_8) && 
          !esl_seteq<1,6,6>(tmp_2087_fu_21682_p1.read(), ap_const_lv6_9) && 
          !esl_seteq<1,6,6>(tmp_2087_fu_21682_p1.read(), ap_const_lv6_A) && 
          !esl_seteq<1,6,6>(tmp_2087_fu_21682_p1.read(), ap_const_lv6_B) && 
          !esl_seteq<1,6,6>(tmp_2087_fu_21682_p1.read(), ap_const_lv6_C) && 
          !esl_seteq<1,6,6>(tmp_2087_fu_21682_p1.read(), ap_const_lv6_D) && 
          !esl_seteq<1,6,6>(tmp_2087_fu_21682_p1.read(), ap_const_lv6_E) && 
          !esl_seteq<1,6,6>(tmp_2087_fu_21682_p1.read(), ap_const_lv6_F) && 
          !esl_seteq<1,6,6>(tmp_2087_fu_21682_p1.read(), ap_const_lv6_10) && 
          !esl_seteq<1,6,6>(tmp_2087_fu_21682_p1.read(), ap_const_lv6_11) && 
          !esl_seteq<1,6,6>(tmp_2087_fu_21682_p1.read(), ap_const_lv6_12) && 
          !esl_seteq<1,6,6>(tmp_2087_fu_21682_p1.read(), ap_const_lv6_13) && 
          !esl_seteq<1,6,6>(tmp_2087_fu_21682_p1.read(), ap_const_lv6_14) && 
          !esl_seteq<1,6,6>(tmp_2087_fu_21682_p1.read(), ap_const_lv6_15) && 
          !esl_seteq<1,6,6>(ap_const_lv6_16, tmp_2087_fu_21682_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_0, tmp_2111_fu_22463_p1.read()) && 
          !esl_seteq<1,6,6>(tmp_2111_fu_22463_p1.read(), ap_const_lv6_1) && 
          !esl_seteq<1,6,6>(tmp_2111_fu_22463_p1.read(), ap_const_lv6_2) && 
          !esl_seteq<1,6,6>(tmp_2111_fu_22463_p1.read(), ap_const_lv6_3) && 
          !esl_seteq<1,6,6>(tmp_2111_fu_22463_p1.read(), ap_const_lv6_4) && 
          !esl_seteq<1,6,6>(tmp_2111_fu_22463_p1.read(), ap_const_lv6_5) && 
          !esl_seteq<1,6,6>(tmp_2111_fu_22463_p1.read(), ap_const_lv6_6) && 
          !esl_seteq<1,6,6>(tmp_2111_fu_22463_p1.read(), ap_const_lv6_7) && 
          !esl_seteq<1,6,6>(tmp_2111_fu_22463_p1.read(), ap_const_lv6_8) && 
          !esl_seteq<1,6,6>(tmp_2111_fu_22463_p1.read(), ap_const_lv6_9) && 
          !esl_seteq<1,6,6>(tmp_2111_fu_22463_p1.read(), ap_const_lv6_A) && 
          !esl_seteq<1,6,6>(tmp_2111_fu_22463_p1.read(), ap_const_lv6_B) && 
          !esl_seteq<1,6,6>(tmp_2111_fu_22463_p1.read(), ap_const_lv6_C) && 
          !esl_seteq<1,6,6>(tmp_2111_fu_22463_p1.read(), ap_const_lv6_D) && 
          !esl_seteq<1,6,6>(tmp_2111_fu_22463_p1.read(), ap_const_lv6_E) && 
          !esl_seteq<1,6,6>(tmp_2111_fu_22463_p1.read(), ap_const_lv6_F) && 
          !esl_seteq<1,6,6>(tmp_2111_fu_22463_p1.read(), ap_const_lv6_10) && 
          !esl_seteq<1,6,6>(tmp_2111_fu_22463_p1.read(), ap_const_lv6_11) && 
          !esl_seteq<1,6,6>(tmp_2111_fu_22463_p1.read(), ap_const_lv6_12) && 
          !esl_seteq<1,6,6>(tmp_2111_fu_22463_p1.read(), ap_const_lv6_13) && 
          !esl_seteq<1,6,6>(tmp_2111_fu_22463_p1.read(), ap_const_lv6_14) && 
          !esl_seteq<1,6,6>(tmp_2111_fu_22463_p1.read(), ap_const_lv6_15) && 
          !esl_seteq<1,6,6>(ap_const_lv6_16, tmp_2111_fu_22463_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_0, tmp_2124_fu_23241_p1.read()) && 
          !esl_seteq<1,6,6>(tmp_2124_fu_23241_p1.read(), ap_const_lv6_1) && 
          !esl_seteq<1,6,6>(tmp_2124_fu_23241_p1.read(), ap_const_lv6_2) && 
          !esl_seteq<1,6,6>(tmp_2124_fu_23241_p1.read(), ap_const_lv6_3) && 
          !esl_seteq<1,6,6>(tmp_2124_fu_23241_p1.read(), ap_const_lv6_4) && 
          !esl_seteq<1,6,6>(tmp_2124_fu_23241_p1.read(), ap_const_lv6_5) && 
          !esl_seteq<1,6,6>(tmp_2124_fu_23241_p1.read(), ap_const_lv6_6) && 
          !esl_seteq<1,6,6>(tmp_2124_fu_23241_p1.read(), ap_const_lv6_7) && 
          !esl_seteq<1,6,6>(tmp_2124_fu_23241_p1.read(), ap_const_lv6_8) && 
          !esl_seteq<1,6,6>(tmp_2124_fu_23241_p1.read(), ap_const_lv6_9) && 
          !esl_seteq<1,6,6>(tmp_2124_fu_23241_p1.read(), ap_const_lv6_A) && 
          !esl_seteq<1,6,6>(tmp_2124_fu_23241_p1.read(), ap_const_lv6_B) && 
          !esl_seteq<1,6,6>(tmp_2124_fu_23241_p1.read(), ap_const_lv6_C) && 
          !esl_seteq<1,6,6>(tmp_2124_fu_23241_p1.read(), ap_const_lv6_D) && 
          !esl_seteq<1,6,6>(tmp_2124_fu_23241_p1.read(), ap_const_lv6_E) && 
          !esl_seteq<1,6,6>(tmp_2124_fu_23241_p1.read(), ap_const_lv6_F) && 
          !esl_seteq<1,6,6>(tmp_2124_fu_23241_p1.read(), ap_const_lv6_10) && 
          !esl_seteq<1,6,6>(tmp_2124_fu_23241_p1.read(), ap_const_lv6_11) && 
          !esl_seteq<1,6,6>(tmp_2124_fu_23241_p1.read(), ap_const_lv6_12) && 
          !esl_seteq<1,6,6>(tmp_2124_fu_23241_p1.read(), ap_const_lv6_13) && 
          !esl_seteq<1,6,6>(tmp_2124_fu_23241_p1.read(), ap_const_lv6_14) && 
          !esl_seteq<1,6,6>(tmp_2124_fu_23241_p1.read(), ap_const_lv6_15) && 
          !esl_seteq<1,6,6>(ap_const_lv6_16, tmp_2124_fu_23241_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_0, tmp_2135_fu_24022_p1.read()) && 
          !esl_seteq<1,6,6>(tmp_2135_fu_24022_p1.read(), ap_const_lv6_1) && 
          !esl_seteq<1,6,6>(tmp_2135_fu_24022_p1.read(), ap_const_lv6_2) && 
          !esl_seteq<1,6,6>(tmp_2135_fu_24022_p1.read(), ap_const_lv6_3) && 
          !esl_seteq<1,6,6>(tmp_2135_fu_24022_p1.read(), ap_const_lv6_4) && 
          !esl_seteq<1,6,6>(tmp_2135_fu_24022_p1.read(), ap_const_lv6_5) && 
          !esl_seteq<1,6,6>(tmp_2135_fu_24022_p1.read(), ap_const_lv6_6) && 
          !esl_seteq<1,6,6>(tmp_2135_fu_24022_p1.read(), ap_const_lv6_7) && 
          !esl_seteq<1,6,6>(tmp_2135_fu_24022_p1.read(), ap_const_lv6_8) && 
          !esl_seteq<1,6,6>(tmp_2135_fu_24022_p1.read(), ap_const_lv6_9) && 
          !esl_seteq<1,6,6>(tmp_2135_fu_24022_p1.read(), ap_const_lv6_A) && 
          !esl_seteq<1,6,6>(tmp_2135_fu_24022_p1.read(), ap_const_lv6_B) && 
          !esl_seteq<1,6,6>(tmp_2135_fu_24022_p1.read(), ap_const_lv6_C) && 
          !esl_seteq<1,6,6>(tmp_2135_fu_24022_p1.read(), ap_const_lv6_D) && 
          !esl_seteq<1,6,6>(tmp_2135_fu_24022_p1.read(), ap_const_lv6_E) && 
          !esl_seteq<1,6,6>(tmp_2135_fu_24022_p1.read(), ap_const_lv6_F) && 
          !esl_seteq<1,6,6>(tmp_2135_fu_24022_p1.read(), ap_const_lv6_10) && 
          !esl_seteq<1,6,6>(tmp_2135_fu_24022_p1.read(), ap_const_lv6_11) && 
          !esl_seteq<1,6,6>(tmp_2135_fu_24022_p1.read(), ap_const_lv6_12) && 
          !esl_seteq<1,6,6>(tmp_2135_fu_24022_p1.read(), ap_const_lv6_13) && 
          !esl_seteq<1,6,6>(tmp_2135_fu_24022_p1.read(), ap_const_lv6_14) && 
          !esl_seteq<1,6,6>(tmp_2135_fu_24022_p1.read(), ap_const_lv6_15) && 
          !esl_seteq<1,6,6>(ap_const_lv6_16, tmp_2135_fu_24022_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_0, tmp_2148_fu_24792_p1.read()) && 
          !esl_seteq<1,6,6>(tmp_2148_fu_24792_p1.read(), ap_const_lv6_1) && 
          !esl_seteq<1,6,6>(tmp_2148_fu_24792_p1.read(), ap_const_lv6_2) && 
          !esl_seteq<1,6,6>(tmp_2148_fu_24792_p1.read(), ap_const_lv6_3) && 
          !esl_seteq<1,6,6>(tmp_2148_fu_24792_p1.read(), ap_const_lv6_4) && 
          !esl_seteq<1,6,6>(tmp_2148_fu_24792_p1.read(), ap_const_lv6_5) && 
          !esl_seteq<1,6,6>(tmp_2148_fu_24792_p1.read(), ap_const_lv6_6) && 
          !esl_seteq<1,6,6>(tmp_2148_fu_24792_p1.read(), ap_const_lv6_7) && 
          !esl_seteq<1,6,6>(tmp_2148_fu_24792_p1.read(), ap_const_lv6_8) && 
          !esl_seteq<1,6,6>(tmp_2148_fu_24792_p1.read(), ap_const_lv6_9) && 
          !esl_seteq<1,6,6>(tmp_2148_fu_24792_p1.read(), ap_const_lv6_A) && 
          !esl_seteq<1,6,6>(tmp_2148_fu_24792_p1.read(), ap_const_lv6_B) && 
          !esl_seteq<1,6,6>(tmp_2148_fu_24792_p1.read(), ap_const_lv6_C) && 
          !esl_seteq<1,6,6>(tmp_2148_fu_24792_p1.read(), ap_const_lv6_D) && 
          !esl_seteq<1,6,6>(tmp_2148_fu_24792_p1.read(), ap_const_lv6_E) && 
          !esl_seteq<1,6,6>(tmp_2148_fu_24792_p1.read(), ap_const_lv6_F) && 
          !esl_seteq<1,6,6>(tmp_2148_fu_24792_p1.read(), ap_const_lv6_10) && 
          !esl_seteq<1,6,6>(tmp_2148_fu_24792_p1.read(), ap_const_lv6_11) && 
          !esl_seteq<1,6,6>(tmp_2148_fu_24792_p1.read(), ap_const_lv6_12) && 
          !esl_seteq<1,6,6>(tmp_2148_fu_24792_p1.read(), ap_const_lv6_13) && 
          !esl_seteq<1,6,6>(tmp_2148_fu_24792_p1.read(), ap_const_lv6_14) && 
          !esl_seteq<1,6,6>(tmp_2148_fu_24792_p1.read(), ap_const_lv6_15) && 
          !esl_seteq<1,6,6>(ap_const_lv6_16, tmp_2148_fu_24792_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_0, tmp_2159_fu_25565_p1.read()) && 
          !esl_seteq<1,6,6>(tmp_2159_fu_25565_p1.read(), ap_const_lv6_1) && 
          !esl_seteq<1,6,6>(tmp_2159_fu_25565_p1.read(), ap_const_lv6_2) && 
          !esl_seteq<1,6,6>(tmp_2159_fu_25565_p1.read(), ap_const_lv6_3) && 
          !esl_seteq<1,6,6>(tmp_2159_fu_25565_p1.read(), ap_const_lv6_4) && 
          !esl_seteq<1,6,6>(tmp_2159_fu_25565_p1.read(), ap_const_lv6_5) && 
          !esl_seteq<1,6,6>(tmp_2159_fu_25565_p1.read(), ap_const_lv6_6) && 
          !esl_seteq<1,6,6>(tmp_2159_fu_25565_p1.read(), ap_const_lv6_7) && 
          !esl_seteq<1,6,6>(tmp_2159_fu_25565_p1.read(), ap_const_lv6_8) && 
          !esl_seteq<1,6,6>(tmp_2159_fu_25565_p1.read(), ap_const_lv6_9) && 
          !esl_seteq<1,6,6>(tmp_2159_fu_25565_p1.read(), ap_const_lv6_A) && 
          !esl_seteq<1,6,6>(tmp_2159_fu_25565_p1.read(), ap_const_lv6_B) && 
          !esl_seteq<1,6,6>(tmp_2159_fu_25565_p1.read(), ap_const_lv6_C) && 
          !esl_seteq<1,6,6>(tmp_2159_fu_25565_p1.read(), ap_const_lv6_D) && 
          !esl_seteq<1,6,6>(tmp_2159_fu_25565_p1.read(), ap_const_lv6_E) && 
          !esl_seteq<1,6,6>(tmp_2159_fu_25565_p1.read(), ap_const_lv6_F) && 
          !esl_seteq<1,6,6>(tmp_2159_fu_25565_p1.read(), ap_const_lv6_10) && 
          !esl_seteq<1,6,6>(tmp_2159_fu_25565_p1.read(), ap_const_lv6_11) && 
          !esl_seteq<1,6,6>(tmp_2159_fu_25565_p1.read(), ap_const_lv6_12) && 
          !esl_seteq<1,6,6>(tmp_2159_fu_25565_p1.read(), ap_const_lv6_13) && 
          !esl_seteq<1,6,6>(tmp_2159_fu_25565_p1.read(), ap_const_lv6_14) && 
          !esl_seteq<1,6,6>(tmp_2159_fu_25565_p1.read(), ap_const_lv6_15) && 
          !esl_seteq<1,6,6>(ap_const_lv6_16, tmp_2159_fu_25565_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_0, tmp_2172_fu_26331_p1.read()) && 
          !esl_seteq<1,6,6>(tmp_2172_fu_26331_p1.read(), ap_const_lv6_1) && 
          !esl_seteq<1,6,6>(tmp_2172_fu_26331_p1.read(), ap_const_lv6_2) && 
          !esl_seteq<1,6,6>(tmp_2172_fu_26331_p1.read(), ap_const_lv6_3) && 
          !esl_seteq<1,6,6>(tmp_2172_fu_26331_p1.read(), ap_const_lv6_4) && 
          !esl_seteq<1,6,6>(tmp_2172_fu_26331_p1.read(), ap_const_lv6_5) && 
          !esl_seteq<1,6,6>(tmp_2172_fu_26331_p1.read(), ap_const_lv6_6) && 
          !esl_seteq<1,6,6>(tmp_2172_fu_26331_p1.read(), ap_const_lv6_7) && 
          !esl_seteq<1,6,6>(tmp_2172_fu_26331_p1.read(), ap_const_lv6_8) && 
          !esl_seteq<1,6,6>(tmp_2172_fu_26331_p1.read(), ap_const_lv6_9) && 
          !esl_seteq<1,6,6>(tmp_2172_fu_26331_p1.read(), ap_const_lv6_A) && 
          !esl_seteq<1,6,6>(tmp_2172_fu_26331_p1.read(), ap_const_lv6_B) && 
          !esl_seteq<1,6,6>(tmp_2172_fu_26331_p1.read(), ap_const_lv6_C) && 
          !esl_seteq<1,6,6>(tmp_2172_fu_26331_p1.read(), ap_const_lv6_D) && 
          !esl_seteq<1,6,6>(tmp_2172_fu_26331_p1.read(), ap_const_lv6_E) && 
          !esl_seteq<1,6,6>(tmp_2172_fu_26331_p1.read(), ap_const_lv6_F) && 
          !esl_seteq<1,6,6>(tmp_2172_fu_26331_p1.read(), ap_const_lv6_10) && 
          !esl_seteq<1,6,6>(tmp_2172_fu_26331_p1.read(), ap_const_lv6_11) && 
          !esl_seteq<1,6,6>(tmp_2172_fu_26331_p1.read(), ap_const_lv6_12) && 
          !esl_seteq<1,6,6>(tmp_2172_fu_26331_p1.read(), ap_const_lv6_13) && 
          !esl_seteq<1,6,6>(tmp_2172_fu_26331_p1.read(), ap_const_lv6_14) && 
          !esl_seteq<1,6,6>(tmp_2172_fu_26331_p1.read(), ap_const_lv6_15) && 
          !esl_seteq<1,6,6>(ap_const_lv6_16, tmp_2172_fu_26331_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_0, tmp_2183_fu_27112_p1.read()) && 
          !esl_seteq<1,6,6>(tmp_2183_fu_27112_p1.read(), ap_const_lv6_1) && 
          !esl_seteq<1,6,6>(tmp_2183_fu_27112_p1.read(), ap_const_lv6_2) && 
          !esl_seteq<1,6,6>(tmp_2183_fu_27112_p1.read(), ap_const_lv6_3) && 
          !esl_seteq<1,6,6>(tmp_2183_fu_27112_p1.read(), ap_const_lv6_4) && 
          !esl_seteq<1,6,6>(tmp_2183_fu_27112_p1.read(), ap_const_lv6_5) && 
          !esl_seteq<1,6,6>(tmp_2183_fu_27112_p1.read(), ap_const_lv6_6) && 
          !esl_seteq<1,6,6>(tmp_2183_fu_27112_p1.read(), ap_const_lv6_7) && 
          !esl_seteq<1,6,6>(tmp_2183_fu_27112_p1.read(), ap_const_lv6_8) && 
          !esl_seteq<1,6,6>(tmp_2183_fu_27112_p1.read(), ap_const_lv6_9) && 
          !esl_seteq<1,6,6>(tmp_2183_fu_27112_p1.read(), ap_const_lv6_A) && 
          !esl_seteq<1,6,6>(tmp_2183_fu_27112_p1.read(), ap_const_lv6_B) && 
          !esl_seteq<1,6,6>(tmp_2183_fu_27112_p1.read(), ap_const_lv6_C) && 
          !esl_seteq<1,6,6>(tmp_2183_fu_27112_p1.read(), ap_const_lv6_D) && 
          !esl_seteq<1,6,6>(tmp_2183_fu_27112_p1.read(), ap_const_lv6_E) && 
          !esl_seteq<1,6,6>(tmp_2183_fu_27112_p1.read(), ap_const_lv6_F) && 
          !esl_seteq<1,6,6>(tmp_2183_fu_27112_p1.read(), ap_const_lv6_10) && 
          !esl_seteq<1,6,6>(tmp_2183_fu_27112_p1.read(), ap_const_lv6_11) && 
          !esl_seteq<1,6,6>(tmp_2183_fu_27112_p1.read(), ap_const_lv6_12) && 
          !esl_seteq<1,6,6>(tmp_2183_fu_27112_p1.read(), ap_const_lv6_13) && 
          !esl_seteq<1,6,6>(tmp_2183_fu_27112_p1.read(), ap_const_lv6_14) && 
          !esl_seteq<1,6,6>(tmp_2183_fu_27112_p1.read(), ap_const_lv6_15) && 
          !esl_seteq<1,6,6>(ap_const_lv6_16, tmp_2183_fu_27112_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_0, tmp_2196_fu_27878_p1.read()) && 
          !esl_seteq<1,6,6>(tmp_2196_fu_27878_p1.read(), ap_const_lv6_1) && 
          !esl_seteq<1,6,6>(tmp_2196_fu_27878_p1.read(), ap_const_lv6_2) && 
          !esl_seteq<1,6,6>(tmp_2196_fu_27878_p1.read(), ap_const_lv6_3) && 
          !esl_seteq<1,6,6>(tmp_2196_fu_27878_p1.read(), ap_const_lv6_4) && 
          !esl_seteq<1,6,6>(tmp_2196_fu_27878_p1.read(), ap_const_lv6_5) && 
          !esl_seteq<1,6,6>(tmp_2196_fu_27878_p1.read(), ap_const_lv6_6) && 
          !esl_seteq<1,6,6>(tmp_2196_fu_27878_p1.read(), ap_const_lv6_7) && 
          !esl_seteq<1,6,6>(tmp_2196_fu_27878_p1.read(), ap_const_lv6_8) && 
          !esl_seteq<1,6,6>(tmp_2196_fu_27878_p1.read(), ap_const_lv6_9) && 
          !esl_seteq<1,6,6>(tmp_2196_fu_27878_p1.read(), ap_const_lv6_A) && 
          !esl_seteq<1,6,6>(tmp_2196_fu_27878_p1.read(), ap_const_lv6_B) && 
          !esl_seteq<1,6,6>(tmp_2196_fu_27878_p1.read(), ap_const_lv6_C) && 
          !esl_seteq<1,6,6>(tmp_2196_fu_27878_p1.read(), ap_const_lv6_D) && 
          !esl_seteq<1,6,6>(tmp_2196_fu_27878_p1.read(), ap_const_lv6_E) && 
          !esl_seteq<1,6,6>(tmp_2196_fu_27878_p1.read(), ap_const_lv6_F) && 
          !esl_seteq<1,6,6>(tmp_2196_fu_27878_p1.read(), ap_const_lv6_10) && 
          !esl_seteq<1,6,6>(tmp_2196_fu_27878_p1.read(), ap_const_lv6_11) && 
          !esl_seteq<1,6,6>(tmp_2196_fu_27878_p1.read(), ap_const_lv6_12) && 
          !esl_seteq<1,6,6>(tmp_2196_fu_27878_p1.read(), ap_const_lv6_13) && 
          !esl_seteq<1,6,6>(tmp_2196_fu_27878_p1.read(), ap_const_lv6_14) && 
          !esl_seteq<1,6,6>(tmp_2196_fu_27878_p1.read(), ap_const_lv6_15) && 
          !esl_seteq<1,6,6>(ap_const_lv6_16, tmp_2196_fu_27878_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_0, tmp_2207_fu_28663_p1.read()) && 
          !esl_seteq<1,6,6>(tmp_2207_fu_28663_p1.read(), ap_const_lv6_1) && 
          !esl_seteq<1,6,6>(tmp_2207_fu_28663_p1.read(), ap_const_lv6_2) && 
          !esl_seteq<1,6,6>(tmp_2207_fu_28663_p1.read(), ap_const_lv6_3) && 
          !esl_seteq<1,6,6>(tmp_2207_fu_28663_p1.read(), ap_const_lv6_4) && 
          !esl_seteq<1,6,6>(tmp_2207_fu_28663_p1.read(), ap_const_lv6_5) && 
          !esl_seteq<1,6,6>(tmp_2207_fu_28663_p1.read(), ap_const_lv6_6) && 
          !esl_seteq<1,6,6>(tmp_2207_fu_28663_p1.read(), ap_const_lv6_7) && 
          !esl_seteq<1,6,6>(tmp_2207_fu_28663_p1.read(), ap_const_lv6_8) && 
          !esl_seteq<1,6,6>(tmp_2207_fu_28663_p1.read(), ap_const_lv6_9) && 
          !esl_seteq<1,6,6>(tmp_2207_fu_28663_p1.read(), ap_const_lv6_A) && 
          !esl_seteq<1,6,6>(tmp_2207_fu_28663_p1.read(), ap_const_lv6_B) && 
          !esl_seteq<1,6,6>(tmp_2207_fu_28663_p1.read(), ap_const_lv6_C) && 
          !esl_seteq<1,6,6>(tmp_2207_fu_28663_p1.read(), ap_const_lv6_D) && 
          !esl_seteq<1,6,6>(tmp_2207_fu_28663_p1.read(), ap_const_lv6_E) && 
          !esl_seteq<1,6,6>(tmp_2207_fu_28663_p1.read(), ap_const_lv6_F) && 
          !esl_seteq<1,6,6>(tmp_2207_fu_28663_p1.read(), ap_const_lv6_10) && 
          !esl_seteq<1,6,6>(tmp_2207_fu_28663_p1.read(), ap_const_lv6_11) && 
          !esl_seteq<1,6,6>(tmp_2207_fu_28663_p1.read(), ap_const_lv6_12) && 
          !esl_seteq<1,6,6>(tmp_2207_fu_28663_p1.read(), ap_const_lv6_13) && 
          !esl_seteq<1,6,6>(tmp_2207_fu_28663_p1.read(), ap_const_lv6_14) && 
          !esl_seteq<1,6,6>(tmp_2207_fu_28663_p1.read(), ap_const_lv6_15) && 
          !esl_seteq<1,6,6>(ap_const_lv6_16, tmp_2207_fu_28663_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_0, tmp_2220_fu_29437_p1.read()) && 
          !esl_seteq<1,6,6>(tmp_2220_fu_29437_p1.read(), ap_const_lv6_1) && 
          !esl_seteq<1,6,6>(tmp_2220_fu_29437_p1.read(), ap_const_lv6_2) && 
          !esl_seteq<1,6,6>(tmp_2220_fu_29437_p1.read(), ap_const_lv6_3) && 
          !esl_seteq<1,6,6>(tmp_2220_fu_29437_p1.read(), ap_const_lv6_4) && 
          !esl_seteq<1,6,6>(tmp_2220_fu_29437_p1.read(), ap_const_lv6_5) && 
          !esl_seteq<1,6,6>(tmp_2220_fu_29437_p1.read(), ap_const_lv6_6) && 
          !esl_seteq<1,6,6>(tmp_2220_fu_29437_p1.read(), ap_const_lv6_7) && 
          !esl_seteq<1,6,6>(tmp_2220_fu_29437_p1.read(), ap_const_lv6_8) && 
          !esl_seteq<1,6,6>(tmp_2220_fu_29437_p1.read(), ap_const_lv6_9) && 
          !esl_seteq<1,6,6>(tmp_2220_fu_29437_p1.read(), ap_const_lv6_A) && 
          !esl_seteq<1,6,6>(tmp_2220_fu_29437_p1.read(), ap_const_lv6_B) && 
          !esl_seteq<1,6,6>(tmp_2220_fu_29437_p1.read(), ap_const_lv6_C) && 
          !esl_seteq<1,6,6>(tmp_2220_fu_29437_p1.read(), ap_const_lv6_D) && 
          !esl_seteq<1,6,6>(tmp_2220_fu_29437_p1.read(), ap_const_lv6_E) && 
          !esl_seteq<1,6,6>(tmp_2220_fu_29437_p1.read(), ap_const_lv6_F) && 
          !esl_seteq<1,6,6>(tmp_2220_fu_29437_p1.read(), ap_const_lv6_10) && 
          !esl_seteq<1,6,6>(tmp_2220_fu_29437_p1.read(), ap_const_lv6_11) && 
          !esl_seteq<1,6,6>(tmp_2220_fu_29437_p1.read(), ap_const_lv6_12) && 
          !esl_seteq<1,6,6>(tmp_2220_fu_29437_p1.read(), ap_const_lv6_13) && 
          !esl_seteq<1,6,6>(tmp_2220_fu_29437_p1.read(), ap_const_lv6_14) && 
          !esl_seteq<1,6,6>(tmp_2220_fu_29437_p1.read(), ap_const_lv6_15) && 
          !esl_seteq<1,6,6>(ap_const_lv6_16, tmp_2220_fu_29437_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_0, tmp_2231_fu_30222_p1.read()) && 
          !esl_seteq<1,6,6>(tmp_2231_fu_30222_p1.read(), ap_const_lv6_1) && 
          !esl_seteq<1,6,6>(tmp_2231_fu_30222_p1.read(), ap_const_lv6_2) && 
          !esl_seteq<1,6,6>(tmp_2231_fu_30222_p1.read(), ap_const_lv6_3) && 
          !esl_seteq<1,6,6>(tmp_2231_fu_30222_p1.read(), ap_const_lv6_4) && 
          !esl_seteq<1,6,6>(tmp_2231_fu_30222_p1.read(), ap_const_lv6_5) && 
          !esl_seteq<1,6,6>(tmp_2231_fu_30222_p1.read(), ap_const_lv6_6) && 
          !esl_seteq<1,6,6>(tmp_2231_fu_30222_p1.read(), ap_const_lv6_7) && 
          !esl_seteq<1,6,6>(tmp_2231_fu_30222_p1.read(), ap_const_lv6_8) && 
          !esl_seteq<1,6,6>(tmp_2231_fu_30222_p1.read(), ap_const_lv6_9) && 
          !esl_seteq<1,6,6>(tmp_2231_fu_30222_p1.read(), ap_const_lv6_A) && 
          !esl_seteq<1,6,6>(tmp_2231_fu_30222_p1.read(), ap_const_lv6_B) && 
          !esl_seteq<1,6,6>(tmp_2231_fu_30222_p1.read(), ap_const_lv6_C) && 
          !esl_seteq<1,6,6>(tmp_2231_fu_30222_p1.read(), ap_const_lv6_D) && 
          !esl_seteq<1,6,6>(tmp_2231_fu_30222_p1.read(), ap_const_lv6_E) && 
          !esl_seteq<1,6,6>(tmp_2231_fu_30222_p1.read(), ap_const_lv6_F) && 
          !esl_seteq<1,6,6>(tmp_2231_fu_30222_p1.read(), ap_const_lv6_10) && 
          !esl_seteq<1,6,6>(tmp_2231_fu_30222_p1.read(), ap_const_lv6_11) && 
          !esl_seteq<1,6,6>(tmp_2231_fu_30222_p1.read(), ap_const_lv6_12) && 
          !esl_seteq<1,6,6>(tmp_2231_fu_30222_p1.read(), ap_const_lv6_13) && 
          !esl_seteq<1,6,6>(tmp_2231_fu_30222_p1.read(), ap_const_lv6_14) && 
          !esl_seteq<1,6,6>(tmp_2231_fu_30222_p1.read(), ap_const_lv6_15) && 
          !esl_seteq<1,6,6>(ap_const_lv6_16, tmp_2231_fu_30222_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_0, tmp_2244_fu_31000_p1.read()) && 
          !esl_seteq<1,6,6>(tmp_2244_fu_31000_p1.read(), ap_const_lv6_1) && 
          !esl_seteq<1,6,6>(tmp_2244_fu_31000_p1.read(), ap_const_lv6_2) && 
          !esl_seteq<1,6,6>(tmp_2244_fu_31000_p1.read(), ap_const_lv6_3) && 
          !esl_seteq<1,6,6>(tmp_2244_fu_31000_p1.read(), ap_const_lv6_4) && 
          !esl_seteq<1,6,6>(tmp_2244_fu_31000_p1.read(), ap_const_lv6_5) && 
          !esl_seteq<1,6,6>(tmp_2244_fu_31000_p1.read(), ap_const_lv6_6) && 
          !esl_seteq<1,6,6>(tmp_2244_fu_31000_p1.read(), ap_const_lv6_7) && 
          !esl_seteq<1,6,6>(tmp_2244_fu_31000_p1.read(), ap_const_lv6_8) && 
          !esl_seteq<1,6,6>(tmp_2244_fu_31000_p1.read(), ap_const_lv6_9) && 
          !esl_seteq<1,6,6>(tmp_2244_fu_31000_p1.read(), ap_const_lv6_A) && 
          !esl_seteq<1,6,6>(tmp_2244_fu_31000_p1.read(), ap_const_lv6_B) && 
          !esl_seteq<1,6,6>(tmp_2244_fu_31000_p1.read(), ap_const_lv6_C) && 
          !esl_seteq<1,6,6>(tmp_2244_fu_31000_p1.read(), ap_const_lv6_D) && 
          !esl_seteq<1,6,6>(tmp_2244_fu_31000_p1.read(), ap_const_lv6_E) && 
          !esl_seteq<1,6,6>(tmp_2244_fu_31000_p1.read(), ap_const_lv6_F) && 
          !esl_seteq<1,6,6>(tmp_2244_fu_31000_p1.read(), ap_const_lv6_10) && 
          !esl_seteq<1,6,6>(tmp_2244_fu_31000_p1.read(), ap_const_lv6_11) && 
          !esl_seteq<1,6,6>(tmp_2244_fu_31000_p1.read(), ap_const_lv6_12) && 
          !esl_seteq<1,6,6>(tmp_2244_fu_31000_p1.read(), ap_const_lv6_13) && 
          !esl_seteq<1,6,6>(tmp_2244_fu_31000_p1.read(), ap_const_lv6_14) && 
          !esl_seteq<1,6,6>(tmp_2244_fu_31000_p1.read(), ap_const_lv6_15) && 
          !esl_seteq<1,6,6>(ap_const_lv6_16, tmp_2244_fu_31000_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_0, tmp_2255_fu_31789_p1.read()) && 
          !esl_seteq<1,6,6>(tmp_2255_fu_31789_p1.read(), ap_const_lv6_1) && 
          !esl_seteq<1,6,6>(tmp_2255_fu_31789_p1.read(), ap_const_lv6_2) && 
          !esl_seteq<1,6,6>(tmp_2255_fu_31789_p1.read(), ap_const_lv6_3) && 
          !esl_seteq<1,6,6>(tmp_2255_fu_31789_p1.read(), ap_const_lv6_4) && 
          !esl_seteq<1,6,6>(tmp_2255_fu_31789_p1.read(), ap_const_lv6_5) && 
          !esl_seteq<1,6,6>(tmp_2255_fu_31789_p1.read(), ap_const_lv6_6) && 
          !esl_seteq<1,6,6>(tmp_2255_fu_31789_p1.read(), ap_const_lv6_7) && 
          !esl_seteq<1,6,6>(tmp_2255_fu_31789_p1.read(), ap_const_lv6_8) && 
          !esl_seteq<1,6,6>(tmp_2255_fu_31789_p1.read(), ap_const_lv6_9) && 
          !esl_seteq<1,6,6>(tmp_2255_fu_31789_p1.read(), ap_const_lv6_A) && 
          !esl_seteq<1,6,6>(tmp_2255_fu_31789_p1.read(), ap_const_lv6_B) && 
          !esl_seteq<1,6,6>(tmp_2255_fu_31789_p1.read(), ap_const_lv6_C) && 
          !esl_seteq<1,6,6>(tmp_2255_fu_31789_p1.read(), ap_const_lv6_D) && 
          !esl_seteq<1,6,6>(tmp_2255_fu_31789_p1.read(), ap_const_lv6_E) && 
          !esl_seteq<1,6,6>(tmp_2255_fu_31789_p1.read(), ap_const_lv6_F) && 
          !esl_seteq<1,6,6>(tmp_2255_fu_31789_p1.read(), ap_const_lv6_10) && 
          !esl_seteq<1,6,6>(tmp_2255_fu_31789_p1.read(), ap_const_lv6_11) && 
          !esl_seteq<1,6,6>(tmp_2255_fu_31789_p1.read(), ap_const_lv6_12) && 
          !esl_seteq<1,6,6>(tmp_2255_fu_31789_p1.read(), ap_const_lv6_13) && 
          !esl_seteq<1,6,6>(tmp_2255_fu_31789_p1.read(), ap_const_lv6_14) && 
          !esl_seteq<1,6,6>(tmp_2255_fu_31789_p1.read(), ap_const_lv6_15) && 
          !esl_seteq<1,6,6>(ap_const_lv6_16, tmp_2255_fu_31789_p1.read())))) {
        weights_48_48_1x1_V_23_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_23_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read())) {
        weights_48_48_1x1_V_2_address0 =  (sc_lv<7>) (tmp_2587_cast_fu_31793_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read())) {
        weights_48_48_1x1_V_2_address0 =  (sc_lv<7>) (tmp_2550_cast_fu_31004_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read())) {
        weights_48_48_1x1_V_2_address0 =  (sc_lv<7>) (tmp_2509_cast_fu_30226_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read())) {
        weights_48_48_1x1_V_2_address0 =  (sc_lv<7>) (tmp_2470_cast_fu_29441_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read())) {
        weights_48_48_1x1_V_2_address0 =  (sc_lv<7>) (tmp_2429_cast_fu_28667_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read())) {
        weights_48_48_1x1_V_2_address0 =  (sc_lv<7>) (tmp_2391_cast_fu_27882_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read())) {
        weights_48_48_1x1_V_2_address0 =  (sc_lv<7>) (tmp_2352_cast_fu_27116_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read())) {
        weights_48_48_1x1_V_2_address0 =  (sc_lv<7>) (tmp_2314_cast_fu_26335_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read())) {
        weights_48_48_1x1_V_2_address0 =  (sc_lv<7>) (tmp_2275_cast_fu_25569_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read())) {
        weights_48_48_1x1_V_2_address0 =  (sc_lv<7>) (tmp_2238_cast_fu_24796_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read())) {
        weights_48_48_1x1_V_2_address0 =  (sc_lv<7>) (tmp_2199_cast_fu_24026_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read())) {
        weights_48_48_1x1_V_2_address0 =  (sc_lv<7>) (tmp_2162_cast_fu_23245_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read())) {
        weights_48_48_1x1_V_2_address0 =  (sc_lv<7>) (tmp_2121_cast_fu_22467_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read())) {
        weights_48_48_1x1_V_2_address0 =  (sc_lv<7>) (tmp_2084_cast_fu_21686_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read())) {
        weights_48_48_1x1_V_2_address0 =  (sc_lv<7>) (tmp_2045_cast_fu_20920_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read())) {
        weights_48_48_1x1_V_2_address0 =  (sc_lv<7>) (tmp_2008_cast_fu_20139_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read())) {
        weights_48_48_1x1_V_2_address0 =  (sc_lv<7>) (tmp_1980_cast_fu_19492_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read())) {
        weights_48_48_1x1_V_2_address0 =  (sc_lv<7>) (tmp_1940_cast_fu_18711_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read())) {
        weights_48_48_1x1_V_2_address0 =  (sc_lv<7>) (tmp_1906_cast_fu_17930_p1.read());
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
        weights_48_48_1x1_V_2_address0 = grp_subconv_1x1_8_p_fu_12848_weight_2_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_2_address0 = grp_subconv_1x1_16p_p_fu_12744_weight_2_V_address0.read();
    } else {
        weights_48_48_1x1_V_2_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_2_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read()) || 
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
        weights_48_48_1x1_V_2_address1 = grp_subconv_1x1_8_p_fu_12848_weight_2_V_address1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_2_address1 = grp_subconv_1x1_16p_p_fu_12744_weight_2_V_address1.read();
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
        weights_48_48_1x1_V_2_ce0 = grp_subconv_1x1_8_p_fu_12848_weight_2_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_2_ce0 = grp_subconv_1x1_16p_p_fu_12744_weight_2_V_ce0.read();
    } else {
        weights_48_48_1x1_V_2_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_2_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read()) || 
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
        weights_48_48_1x1_V_2_ce1 = grp_subconv_1x1_8_p_fu_12848_weight_2_V_ce1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_2_ce1 = grp_subconv_1x1_16p_p_fu_12744_weight_2_V_ce1.read();
    } else {
        weights_48_48_1x1_V_2_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_2_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read()) && 
          esl_seteq<1,6,6>(tmp_1976_fu_17926_p1.read(), ap_const_lv6_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read()) && 
          esl_seteq<1,6,6>(tmp_1995_fu_18707_p1.read(), ap_const_lv6_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read()) && 
          esl_seteq<1,6,6>(tmp_2012_fu_19488_p1.read(), ap_const_lv6_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read()) && 
          esl_seteq<1,6,6>(tmp_2040_fu_20135_p1.read(), ap_const_lv6_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read()) && 
          esl_seteq<1,6,6>(tmp_2064_fu_20916_p1.read(), ap_const_lv6_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read()) && 
          esl_seteq<1,6,6>(tmp_2087_fu_21682_p1.read(), ap_const_lv6_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) && 
          esl_seteq<1,6,6>(tmp_2111_fu_22463_p1.read(), ap_const_lv6_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read()) && 
          esl_seteq<1,6,6>(tmp_2124_fu_23241_p1.read(), ap_const_lv6_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read()) && 
          esl_seteq<1,6,6>(tmp_2135_fu_24022_p1.read(), ap_const_lv6_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read()) && 
          esl_seteq<1,6,6>(tmp_2148_fu_24792_p1.read(), ap_const_lv6_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read()) && 
          esl_seteq<1,6,6>(tmp_2159_fu_25565_p1.read(), ap_const_lv6_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read()) && 
          esl_seteq<1,6,6>(tmp_2172_fu_26331_p1.read(), ap_const_lv6_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read()) && 
          esl_seteq<1,6,6>(tmp_2183_fu_27112_p1.read(), ap_const_lv6_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read()) && 
          esl_seteq<1,6,6>(tmp_2196_fu_27878_p1.read(), ap_const_lv6_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read()) && 
          esl_seteq<1,6,6>(tmp_2207_fu_28663_p1.read(), ap_const_lv6_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read()) && 
          esl_seteq<1,6,6>(tmp_2220_fu_29437_p1.read(), ap_const_lv6_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read()) && 
          esl_seteq<1,6,6>(tmp_2231_fu_30222_p1.read(), ap_const_lv6_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read()) && 
          esl_seteq<1,6,6>(tmp_2244_fu_31000_p1.read(), ap_const_lv6_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read()) && 
          esl_seteq<1,6,6>(tmp_2255_fu_31789_p1.read(), ap_const_lv6_2)))) {
        weights_48_48_1x1_V_2_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_2_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read())) {
        weights_48_48_1x1_V_3_address0 =  (sc_lv<7>) (tmp_2587_cast_fu_31793_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read())) {
        weights_48_48_1x1_V_3_address0 =  (sc_lv<7>) (tmp_2550_cast_fu_31004_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read())) {
        weights_48_48_1x1_V_3_address0 =  (sc_lv<7>) (tmp_2509_cast_fu_30226_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read())) {
        weights_48_48_1x1_V_3_address0 =  (sc_lv<7>) (tmp_2470_cast_fu_29441_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read())) {
        weights_48_48_1x1_V_3_address0 =  (sc_lv<7>) (tmp_2429_cast_fu_28667_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read())) {
        weights_48_48_1x1_V_3_address0 =  (sc_lv<7>) (tmp_2391_cast_fu_27882_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read())) {
        weights_48_48_1x1_V_3_address0 =  (sc_lv<7>) (tmp_2352_cast_fu_27116_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read())) {
        weights_48_48_1x1_V_3_address0 =  (sc_lv<7>) (tmp_2314_cast_fu_26335_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read())) {
        weights_48_48_1x1_V_3_address0 =  (sc_lv<7>) (tmp_2275_cast_fu_25569_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read())) {
        weights_48_48_1x1_V_3_address0 =  (sc_lv<7>) (tmp_2238_cast_fu_24796_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read())) {
        weights_48_48_1x1_V_3_address0 =  (sc_lv<7>) (tmp_2199_cast_fu_24026_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read())) {
        weights_48_48_1x1_V_3_address0 =  (sc_lv<7>) (tmp_2162_cast_fu_23245_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read())) {
        weights_48_48_1x1_V_3_address0 =  (sc_lv<7>) (tmp_2121_cast_fu_22467_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read())) {
        weights_48_48_1x1_V_3_address0 =  (sc_lv<7>) (tmp_2084_cast_fu_21686_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read())) {
        weights_48_48_1x1_V_3_address0 =  (sc_lv<7>) (tmp_2045_cast_fu_20920_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read())) {
        weights_48_48_1x1_V_3_address0 =  (sc_lv<7>) (tmp_2008_cast_fu_20139_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read())) {
        weights_48_48_1x1_V_3_address0 =  (sc_lv<7>) (tmp_1980_cast_fu_19492_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read())) {
        weights_48_48_1x1_V_3_address0 =  (sc_lv<7>) (tmp_1940_cast_fu_18711_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read())) {
        weights_48_48_1x1_V_3_address0 =  (sc_lv<7>) (tmp_1906_cast_fu_17930_p1.read());
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
        weights_48_48_1x1_V_3_address0 = grp_subconv_1x1_8_p_fu_12848_weight_3_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_3_address0 = grp_subconv_1x1_16p_p_fu_12744_weight_3_V_address0.read();
    } else {
        weights_48_48_1x1_V_3_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_3_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read()) || 
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
        weights_48_48_1x1_V_3_address1 = grp_subconv_1x1_8_p_fu_12848_weight_3_V_address1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_3_address1 = grp_subconv_1x1_16p_p_fu_12744_weight_3_V_address1.read();
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
        weights_48_48_1x1_V_3_ce0 = grp_subconv_1x1_8_p_fu_12848_weight_3_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_3_ce0 = grp_subconv_1x1_16p_p_fu_12744_weight_3_V_ce0.read();
    } else {
        weights_48_48_1x1_V_3_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_3_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read()) || 
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
        weights_48_48_1x1_V_3_ce1 = grp_subconv_1x1_8_p_fu_12848_weight_3_V_ce1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_3_ce1 = grp_subconv_1x1_16p_p_fu_12744_weight_3_V_ce1.read();
    } else {
        weights_48_48_1x1_V_3_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_3_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read()) && 
          esl_seteq<1,6,6>(tmp_1976_fu_17926_p1.read(), ap_const_lv6_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read()) && 
          esl_seteq<1,6,6>(tmp_1995_fu_18707_p1.read(), ap_const_lv6_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read()) && 
          esl_seteq<1,6,6>(tmp_2012_fu_19488_p1.read(), ap_const_lv6_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read()) && 
          esl_seteq<1,6,6>(tmp_2040_fu_20135_p1.read(), ap_const_lv6_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read()) && 
          esl_seteq<1,6,6>(tmp_2064_fu_20916_p1.read(), ap_const_lv6_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read()) && 
          esl_seteq<1,6,6>(tmp_2087_fu_21682_p1.read(), ap_const_lv6_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) && 
          esl_seteq<1,6,6>(tmp_2111_fu_22463_p1.read(), ap_const_lv6_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read()) && 
          esl_seteq<1,6,6>(tmp_2124_fu_23241_p1.read(), ap_const_lv6_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read()) && 
          esl_seteq<1,6,6>(tmp_2135_fu_24022_p1.read(), ap_const_lv6_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read()) && 
          esl_seteq<1,6,6>(tmp_2148_fu_24792_p1.read(), ap_const_lv6_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read()) && 
          esl_seteq<1,6,6>(tmp_2159_fu_25565_p1.read(), ap_const_lv6_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read()) && 
          esl_seteq<1,6,6>(tmp_2172_fu_26331_p1.read(), ap_const_lv6_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read()) && 
          esl_seteq<1,6,6>(tmp_2183_fu_27112_p1.read(), ap_const_lv6_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read()) && 
          esl_seteq<1,6,6>(tmp_2196_fu_27878_p1.read(), ap_const_lv6_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read()) && 
          esl_seteq<1,6,6>(tmp_2207_fu_28663_p1.read(), ap_const_lv6_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read()) && 
          esl_seteq<1,6,6>(tmp_2220_fu_29437_p1.read(), ap_const_lv6_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read()) && 
          esl_seteq<1,6,6>(tmp_2231_fu_30222_p1.read(), ap_const_lv6_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read()) && 
          esl_seteq<1,6,6>(tmp_2244_fu_31000_p1.read(), ap_const_lv6_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read()) && 
          esl_seteq<1,6,6>(tmp_2255_fu_31789_p1.read(), ap_const_lv6_3)))) {
        weights_48_48_1x1_V_3_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_3_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read())) {
        weights_48_48_1x1_V_4_address0 =  (sc_lv<7>) (tmp_2587_cast_fu_31793_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read())) {
        weights_48_48_1x1_V_4_address0 =  (sc_lv<7>) (tmp_2550_cast_fu_31004_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read())) {
        weights_48_48_1x1_V_4_address0 =  (sc_lv<7>) (tmp_2509_cast_fu_30226_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read())) {
        weights_48_48_1x1_V_4_address0 =  (sc_lv<7>) (tmp_2470_cast_fu_29441_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read())) {
        weights_48_48_1x1_V_4_address0 =  (sc_lv<7>) (tmp_2429_cast_fu_28667_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read())) {
        weights_48_48_1x1_V_4_address0 =  (sc_lv<7>) (tmp_2391_cast_fu_27882_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read())) {
        weights_48_48_1x1_V_4_address0 =  (sc_lv<7>) (tmp_2352_cast_fu_27116_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read())) {
        weights_48_48_1x1_V_4_address0 =  (sc_lv<7>) (tmp_2314_cast_fu_26335_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read())) {
        weights_48_48_1x1_V_4_address0 =  (sc_lv<7>) (tmp_2275_cast_fu_25569_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read())) {
        weights_48_48_1x1_V_4_address0 =  (sc_lv<7>) (tmp_2238_cast_fu_24796_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read())) {
        weights_48_48_1x1_V_4_address0 =  (sc_lv<7>) (tmp_2199_cast_fu_24026_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read())) {
        weights_48_48_1x1_V_4_address0 =  (sc_lv<7>) (tmp_2162_cast_fu_23245_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read())) {
        weights_48_48_1x1_V_4_address0 =  (sc_lv<7>) (tmp_2121_cast_fu_22467_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read())) {
        weights_48_48_1x1_V_4_address0 =  (sc_lv<7>) (tmp_2084_cast_fu_21686_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read())) {
        weights_48_48_1x1_V_4_address0 =  (sc_lv<7>) (tmp_2045_cast_fu_20920_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read())) {
        weights_48_48_1x1_V_4_address0 =  (sc_lv<7>) (tmp_2008_cast_fu_20139_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read())) {
        weights_48_48_1x1_V_4_address0 =  (sc_lv<7>) (tmp_1980_cast_fu_19492_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read())) {
        weights_48_48_1x1_V_4_address0 =  (sc_lv<7>) (tmp_1940_cast_fu_18711_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read())) {
        weights_48_48_1x1_V_4_address0 =  (sc_lv<7>) (tmp_1906_cast_fu_17930_p1.read());
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
        weights_48_48_1x1_V_4_address0 = grp_subconv_1x1_8_p_fu_12848_weight_4_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_4_address0 = grp_subconv_1x1_16p_p_fu_12744_weight_4_V_address0.read();
    } else {
        weights_48_48_1x1_V_4_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_4_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read()) || 
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
        weights_48_48_1x1_V_4_address1 = grp_subconv_1x1_8_p_fu_12848_weight_4_V_address1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_4_address1 = grp_subconv_1x1_16p_p_fu_12744_weight_4_V_address1.read();
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
        weights_48_48_1x1_V_4_ce0 = grp_subconv_1x1_8_p_fu_12848_weight_4_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_4_ce0 = grp_subconv_1x1_16p_p_fu_12744_weight_4_V_ce0.read();
    } else {
        weights_48_48_1x1_V_4_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_4_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read()) || 
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
        weights_48_48_1x1_V_4_ce1 = grp_subconv_1x1_8_p_fu_12848_weight_4_V_ce1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_4_ce1 = grp_subconv_1x1_16p_p_fu_12744_weight_4_V_ce1.read();
    } else {
        weights_48_48_1x1_V_4_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_4_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read()) && 
          esl_seteq<1,6,6>(tmp_1976_fu_17926_p1.read(), ap_const_lv6_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read()) && 
          esl_seteq<1,6,6>(tmp_1995_fu_18707_p1.read(), ap_const_lv6_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read()) && 
          esl_seteq<1,6,6>(tmp_2012_fu_19488_p1.read(), ap_const_lv6_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read()) && 
          esl_seteq<1,6,6>(tmp_2040_fu_20135_p1.read(), ap_const_lv6_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read()) && 
          esl_seteq<1,6,6>(tmp_2064_fu_20916_p1.read(), ap_const_lv6_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read()) && 
          esl_seteq<1,6,6>(tmp_2087_fu_21682_p1.read(), ap_const_lv6_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) && 
          esl_seteq<1,6,6>(tmp_2111_fu_22463_p1.read(), ap_const_lv6_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read()) && 
          esl_seteq<1,6,6>(tmp_2124_fu_23241_p1.read(), ap_const_lv6_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read()) && 
          esl_seteq<1,6,6>(tmp_2135_fu_24022_p1.read(), ap_const_lv6_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read()) && 
          esl_seteq<1,6,6>(tmp_2148_fu_24792_p1.read(), ap_const_lv6_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read()) && 
          esl_seteq<1,6,6>(tmp_2159_fu_25565_p1.read(), ap_const_lv6_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read()) && 
          esl_seteq<1,6,6>(tmp_2172_fu_26331_p1.read(), ap_const_lv6_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read()) && 
          esl_seteq<1,6,6>(tmp_2183_fu_27112_p1.read(), ap_const_lv6_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read()) && 
          esl_seteq<1,6,6>(tmp_2196_fu_27878_p1.read(), ap_const_lv6_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read()) && 
          esl_seteq<1,6,6>(tmp_2207_fu_28663_p1.read(), ap_const_lv6_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read()) && 
          esl_seteq<1,6,6>(tmp_2220_fu_29437_p1.read(), ap_const_lv6_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read()) && 
          esl_seteq<1,6,6>(tmp_2231_fu_30222_p1.read(), ap_const_lv6_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read()) && 
          esl_seteq<1,6,6>(tmp_2244_fu_31000_p1.read(), ap_const_lv6_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read()) && 
          esl_seteq<1,6,6>(tmp_2255_fu_31789_p1.read(), ap_const_lv6_4)))) {
        weights_48_48_1x1_V_4_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_4_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read())) {
        weights_48_48_1x1_V_5_address0 =  (sc_lv<7>) (tmp_2587_cast_fu_31793_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read())) {
        weights_48_48_1x1_V_5_address0 =  (sc_lv<7>) (tmp_2550_cast_fu_31004_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read())) {
        weights_48_48_1x1_V_5_address0 =  (sc_lv<7>) (tmp_2509_cast_fu_30226_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read())) {
        weights_48_48_1x1_V_5_address0 =  (sc_lv<7>) (tmp_2470_cast_fu_29441_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read())) {
        weights_48_48_1x1_V_5_address0 =  (sc_lv<7>) (tmp_2429_cast_fu_28667_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read())) {
        weights_48_48_1x1_V_5_address0 =  (sc_lv<7>) (tmp_2391_cast_fu_27882_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read())) {
        weights_48_48_1x1_V_5_address0 =  (sc_lv<7>) (tmp_2352_cast_fu_27116_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read())) {
        weights_48_48_1x1_V_5_address0 =  (sc_lv<7>) (tmp_2314_cast_fu_26335_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read())) {
        weights_48_48_1x1_V_5_address0 =  (sc_lv<7>) (tmp_2275_cast_fu_25569_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read())) {
        weights_48_48_1x1_V_5_address0 =  (sc_lv<7>) (tmp_2238_cast_fu_24796_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read())) {
        weights_48_48_1x1_V_5_address0 =  (sc_lv<7>) (tmp_2199_cast_fu_24026_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read())) {
        weights_48_48_1x1_V_5_address0 =  (sc_lv<7>) (tmp_2162_cast_fu_23245_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read())) {
        weights_48_48_1x1_V_5_address0 =  (sc_lv<7>) (tmp_2121_cast_fu_22467_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read())) {
        weights_48_48_1x1_V_5_address0 =  (sc_lv<7>) (tmp_2084_cast_fu_21686_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read())) {
        weights_48_48_1x1_V_5_address0 =  (sc_lv<7>) (tmp_2045_cast_fu_20920_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read())) {
        weights_48_48_1x1_V_5_address0 =  (sc_lv<7>) (tmp_2008_cast_fu_20139_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read())) {
        weights_48_48_1x1_V_5_address0 =  (sc_lv<7>) (tmp_1980_cast_fu_19492_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read())) {
        weights_48_48_1x1_V_5_address0 =  (sc_lv<7>) (tmp_1940_cast_fu_18711_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read())) {
        weights_48_48_1x1_V_5_address0 =  (sc_lv<7>) (tmp_1906_cast_fu_17930_p1.read());
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
        weights_48_48_1x1_V_5_address0 = grp_subconv_1x1_8_p_fu_12848_weight_5_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_5_address0 = grp_subconv_1x1_16p_p_fu_12744_weight_5_V_address0.read();
    } else {
        weights_48_48_1x1_V_5_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_5_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read()) || 
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
        weights_48_48_1x1_V_5_address1 = grp_subconv_1x1_8_p_fu_12848_weight_5_V_address1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_5_address1 = grp_subconv_1x1_16p_p_fu_12744_weight_5_V_address1.read();
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
        weights_48_48_1x1_V_5_ce0 = grp_subconv_1x1_8_p_fu_12848_weight_5_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_5_ce0 = grp_subconv_1x1_16p_p_fu_12744_weight_5_V_ce0.read();
    } else {
        weights_48_48_1x1_V_5_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_5_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read()) || 
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
        weights_48_48_1x1_V_5_ce1 = grp_subconv_1x1_8_p_fu_12848_weight_5_V_ce1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_5_ce1 = grp_subconv_1x1_16p_p_fu_12744_weight_5_V_ce1.read();
    } else {
        weights_48_48_1x1_V_5_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_5_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read()) && 
          esl_seteq<1,6,6>(tmp_1976_fu_17926_p1.read(), ap_const_lv6_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read()) && 
          esl_seteq<1,6,6>(tmp_1995_fu_18707_p1.read(), ap_const_lv6_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read()) && 
          esl_seteq<1,6,6>(tmp_2012_fu_19488_p1.read(), ap_const_lv6_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read()) && 
          esl_seteq<1,6,6>(tmp_2040_fu_20135_p1.read(), ap_const_lv6_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read()) && 
          esl_seteq<1,6,6>(tmp_2064_fu_20916_p1.read(), ap_const_lv6_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read()) && 
          esl_seteq<1,6,6>(tmp_2087_fu_21682_p1.read(), ap_const_lv6_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) && 
          esl_seteq<1,6,6>(tmp_2111_fu_22463_p1.read(), ap_const_lv6_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read()) && 
          esl_seteq<1,6,6>(tmp_2124_fu_23241_p1.read(), ap_const_lv6_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read()) && 
          esl_seteq<1,6,6>(tmp_2135_fu_24022_p1.read(), ap_const_lv6_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read()) && 
          esl_seteq<1,6,6>(tmp_2148_fu_24792_p1.read(), ap_const_lv6_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read()) && 
          esl_seteq<1,6,6>(tmp_2159_fu_25565_p1.read(), ap_const_lv6_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read()) && 
          esl_seteq<1,6,6>(tmp_2172_fu_26331_p1.read(), ap_const_lv6_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read()) && 
          esl_seteq<1,6,6>(tmp_2183_fu_27112_p1.read(), ap_const_lv6_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read()) && 
          esl_seteq<1,6,6>(tmp_2196_fu_27878_p1.read(), ap_const_lv6_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read()) && 
          esl_seteq<1,6,6>(tmp_2207_fu_28663_p1.read(), ap_const_lv6_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read()) && 
          esl_seteq<1,6,6>(tmp_2220_fu_29437_p1.read(), ap_const_lv6_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read()) && 
          esl_seteq<1,6,6>(tmp_2231_fu_30222_p1.read(), ap_const_lv6_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read()) && 
          esl_seteq<1,6,6>(tmp_2244_fu_31000_p1.read(), ap_const_lv6_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read()) && 
          esl_seteq<1,6,6>(tmp_2255_fu_31789_p1.read(), ap_const_lv6_5)))) {
        weights_48_48_1x1_V_5_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_5_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read())) {
        weights_48_48_1x1_V_6_address0 =  (sc_lv<7>) (tmp_2587_cast_fu_31793_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read())) {
        weights_48_48_1x1_V_6_address0 =  (sc_lv<7>) (tmp_2550_cast_fu_31004_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read())) {
        weights_48_48_1x1_V_6_address0 =  (sc_lv<7>) (tmp_2509_cast_fu_30226_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read())) {
        weights_48_48_1x1_V_6_address0 =  (sc_lv<7>) (tmp_2470_cast_fu_29441_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read())) {
        weights_48_48_1x1_V_6_address0 =  (sc_lv<7>) (tmp_2429_cast_fu_28667_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read())) {
        weights_48_48_1x1_V_6_address0 =  (sc_lv<7>) (tmp_2391_cast_fu_27882_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read())) {
        weights_48_48_1x1_V_6_address0 =  (sc_lv<7>) (tmp_2352_cast_fu_27116_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read())) {
        weights_48_48_1x1_V_6_address0 =  (sc_lv<7>) (tmp_2314_cast_fu_26335_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read())) {
        weights_48_48_1x1_V_6_address0 =  (sc_lv<7>) (tmp_2275_cast_fu_25569_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read())) {
        weights_48_48_1x1_V_6_address0 =  (sc_lv<7>) (tmp_2238_cast_fu_24796_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read())) {
        weights_48_48_1x1_V_6_address0 =  (sc_lv<7>) (tmp_2199_cast_fu_24026_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read())) {
        weights_48_48_1x1_V_6_address0 =  (sc_lv<7>) (tmp_2162_cast_fu_23245_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read())) {
        weights_48_48_1x1_V_6_address0 =  (sc_lv<7>) (tmp_2121_cast_fu_22467_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read())) {
        weights_48_48_1x1_V_6_address0 =  (sc_lv<7>) (tmp_2084_cast_fu_21686_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read())) {
        weights_48_48_1x1_V_6_address0 =  (sc_lv<7>) (tmp_2045_cast_fu_20920_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read())) {
        weights_48_48_1x1_V_6_address0 =  (sc_lv<7>) (tmp_2008_cast_fu_20139_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read())) {
        weights_48_48_1x1_V_6_address0 =  (sc_lv<7>) (tmp_1980_cast_fu_19492_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read())) {
        weights_48_48_1x1_V_6_address0 =  (sc_lv<7>) (tmp_1940_cast_fu_18711_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read())) {
        weights_48_48_1x1_V_6_address0 =  (sc_lv<7>) (tmp_1906_cast_fu_17930_p1.read());
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
        weights_48_48_1x1_V_6_address0 = grp_subconv_1x1_8_p_fu_12848_weight_6_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_6_address0 = grp_subconv_1x1_16p_p_fu_12744_weight_6_V_address0.read();
    } else {
        weights_48_48_1x1_V_6_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_6_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read()) || 
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
        weights_48_48_1x1_V_6_address1 = grp_subconv_1x1_8_p_fu_12848_weight_6_V_address1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_6_address1 = grp_subconv_1x1_16p_p_fu_12744_weight_6_V_address1.read();
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
        weights_48_48_1x1_V_6_ce0 = grp_subconv_1x1_8_p_fu_12848_weight_6_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_6_ce0 = grp_subconv_1x1_16p_p_fu_12744_weight_6_V_ce0.read();
    } else {
        weights_48_48_1x1_V_6_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_6_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read()) || 
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
        weights_48_48_1x1_V_6_ce1 = grp_subconv_1x1_8_p_fu_12848_weight_6_V_ce1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_6_ce1 = grp_subconv_1x1_16p_p_fu_12744_weight_6_V_ce1.read();
    } else {
        weights_48_48_1x1_V_6_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_6_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read()) && 
          esl_seteq<1,6,6>(tmp_1976_fu_17926_p1.read(), ap_const_lv6_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read()) && 
          esl_seteq<1,6,6>(tmp_1995_fu_18707_p1.read(), ap_const_lv6_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read()) && 
          esl_seteq<1,6,6>(tmp_2012_fu_19488_p1.read(), ap_const_lv6_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read()) && 
          esl_seteq<1,6,6>(tmp_2040_fu_20135_p1.read(), ap_const_lv6_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read()) && 
          esl_seteq<1,6,6>(tmp_2064_fu_20916_p1.read(), ap_const_lv6_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read()) && 
          esl_seteq<1,6,6>(tmp_2087_fu_21682_p1.read(), ap_const_lv6_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) && 
          esl_seteq<1,6,6>(tmp_2111_fu_22463_p1.read(), ap_const_lv6_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read()) && 
          esl_seteq<1,6,6>(tmp_2124_fu_23241_p1.read(), ap_const_lv6_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read()) && 
          esl_seteq<1,6,6>(tmp_2135_fu_24022_p1.read(), ap_const_lv6_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read()) && 
          esl_seteq<1,6,6>(tmp_2148_fu_24792_p1.read(), ap_const_lv6_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read()) && 
          esl_seteq<1,6,6>(tmp_2159_fu_25565_p1.read(), ap_const_lv6_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read()) && 
          esl_seteq<1,6,6>(tmp_2172_fu_26331_p1.read(), ap_const_lv6_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read()) && 
          esl_seteq<1,6,6>(tmp_2183_fu_27112_p1.read(), ap_const_lv6_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read()) && 
          esl_seteq<1,6,6>(tmp_2196_fu_27878_p1.read(), ap_const_lv6_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read()) && 
          esl_seteq<1,6,6>(tmp_2207_fu_28663_p1.read(), ap_const_lv6_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read()) && 
          esl_seteq<1,6,6>(tmp_2220_fu_29437_p1.read(), ap_const_lv6_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read()) && 
          esl_seteq<1,6,6>(tmp_2231_fu_30222_p1.read(), ap_const_lv6_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read()) && 
          esl_seteq<1,6,6>(tmp_2244_fu_31000_p1.read(), ap_const_lv6_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read()) && 
          esl_seteq<1,6,6>(tmp_2255_fu_31789_p1.read(), ap_const_lv6_6)))) {
        weights_48_48_1x1_V_6_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_6_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_7_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read())) {
        weights_48_48_1x1_V_7_address0 =  (sc_lv<7>) (tmp_2587_cast_fu_31793_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read())) {
        weights_48_48_1x1_V_7_address0 =  (sc_lv<7>) (tmp_2550_cast_fu_31004_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read())) {
        weights_48_48_1x1_V_7_address0 =  (sc_lv<7>) (tmp_2509_cast_fu_30226_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read())) {
        weights_48_48_1x1_V_7_address0 =  (sc_lv<7>) (tmp_2470_cast_fu_29441_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read())) {
        weights_48_48_1x1_V_7_address0 =  (sc_lv<7>) (tmp_2429_cast_fu_28667_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read())) {
        weights_48_48_1x1_V_7_address0 =  (sc_lv<7>) (tmp_2391_cast_fu_27882_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read())) {
        weights_48_48_1x1_V_7_address0 =  (sc_lv<7>) (tmp_2352_cast_fu_27116_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read())) {
        weights_48_48_1x1_V_7_address0 =  (sc_lv<7>) (tmp_2314_cast_fu_26335_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read())) {
        weights_48_48_1x1_V_7_address0 =  (sc_lv<7>) (tmp_2275_cast_fu_25569_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read())) {
        weights_48_48_1x1_V_7_address0 =  (sc_lv<7>) (tmp_2238_cast_fu_24796_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read())) {
        weights_48_48_1x1_V_7_address0 =  (sc_lv<7>) (tmp_2199_cast_fu_24026_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read())) {
        weights_48_48_1x1_V_7_address0 =  (sc_lv<7>) (tmp_2162_cast_fu_23245_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read())) {
        weights_48_48_1x1_V_7_address0 =  (sc_lv<7>) (tmp_2121_cast_fu_22467_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read())) {
        weights_48_48_1x1_V_7_address0 =  (sc_lv<7>) (tmp_2084_cast_fu_21686_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read())) {
        weights_48_48_1x1_V_7_address0 =  (sc_lv<7>) (tmp_2045_cast_fu_20920_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read())) {
        weights_48_48_1x1_V_7_address0 =  (sc_lv<7>) (tmp_2008_cast_fu_20139_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read())) {
        weights_48_48_1x1_V_7_address0 =  (sc_lv<7>) (tmp_1980_cast_fu_19492_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read())) {
        weights_48_48_1x1_V_7_address0 =  (sc_lv<7>) (tmp_1940_cast_fu_18711_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read())) {
        weights_48_48_1x1_V_7_address0 =  (sc_lv<7>) (tmp_1906_cast_fu_17930_p1.read());
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
        weights_48_48_1x1_V_7_address0 = grp_subconv_1x1_8_p_fu_12848_weight_7_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_7_address0 = grp_subconv_1x1_16p_p_fu_12744_weight_7_V_address0.read();
    } else {
        weights_48_48_1x1_V_7_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_7_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read()) || 
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
        weights_48_48_1x1_V_7_address1 = grp_subconv_1x1_8_p_fu_12848_weight_7_V_address1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_7_address1 = grp_subconv_1x1_16p_p_fu_12744_weight_7_V_address1.read();
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
        weights_48_48_1x1_V_7_ce0 = grp_subconv_1x1_8_p_fu_12848_weight_7_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_7_ce0 = grp_subconv_1x1_16p_p_fu_12744_weight_7_V_ce0.read();
    } else {
        weights_48_48_1x1_V_7_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_7_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read()) || 
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
        weights_48_48_1x1_V_7_ce1 = grp_subconv_1x1_8_p_fu_12848_weight_7_V_ce1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_7_ce1 = grp_subconv_1x1_16p_p_fu_12744_weight_7_V_ce1.read();
    } else {
        weights_48_48_1x1_V_7_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_7_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read()) && 
          esl_seteq<1,6,6>(tmp_1976_fu_17926_p1.read(), ap_const_lv6_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read()) && 
          esl_seteq<1,6,6>(tmp_1995_fu_18707_p1.read(), ap_const_lv6_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read()) && 
          esl_seteq<1,6,6>(tmp_2012_fu_19488_p1.read(), ap_const_lv6_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read()) && 
          esl_seteq<1,6,6>(tmp_2040_fu_20135_p1.read(), ap_const_lv6_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read()) && 
          esl_seteq<1,6,6>(tmp_2064_fu_20916_p1.read(), ap_const_lv6_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read()) && 
          esl_seteq<1,6,6>(tmp_2087_fu_21682_p1.read(), ap_const_lv6_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) && 
          esl_seteq<1,6,6>(tmp_2111_fu_22463_p1.read(), ap_const_lv6_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read()) && 
          esl_seteq<1,6,6>(tmp_2124_fu_23241_p1.read(), ap_const_lv6_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read()) && 
          esl_seteq<1,6,6>(tmp_2135_fu_24022_p1.read(), ap_const_lv6_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read()) && 
          esl_seteq<1,6,6>(tmp_2148_fu_24792_p1.read(), ap_const_lv6_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read()) && 
          esl_seteq<1,6,6>(tmp_2159_fu_25565_p1.read(), ap_const_lv6_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read()) && 
          esl_seteq<1,6,6>(tmp_2172_fu_26331_p1.read(), ap_const_lv6_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read()) && 
          esl_seteq<1,6,6>(tmp_2183_fu_27112_p1.read(), ap_const_lv6_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read()) && 
          esl_seteq<1,6,6>(tmp_2196_fu_27878_p1.read(), ap_const_lv6_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read()) && 
          esl_seteq<1,6,6>(tmp_2207_fu_28663_p1.read(), ap_const_lv6_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read()) && 
          esl_seteq<1,6,6>(tmp_2220_fu_29437_p1.read(), ap_const_lv6_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read()) && 
          esl_seteq<1,6,6>(tmp_2231_fu_30222_p1.read(), ap_const_lv6_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read()) && 
          esl_seteq<1,6,6>(tmp_2244_fu_31000_p1.read(), ap_const_lv6_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read()) && 
          esl_seteq<1,6,6>(tmp_2255_fu_31789_p1.read(), ap_const_lv6_7)))) {
        weights_48_48_1x1_V_7_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_7_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_8_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read())) {
        weights_48_48_1x1_V_8_address0 =  (sc_lv<7>) (tmp_2587_cast_fu_31793_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read())) {
        weights_48_48_1x1_V_8_address0 =  (sc_lv<7>) (tmp_2550_cast_fu_31004_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read())) {
        weights_48_48_1x1_V_8_address0 =  (sc_lv<7>) (tmp_2509_cast_fu_30226_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read())) {
        weights_48_48_1x1_V_8_address0 =  (sc_lv<7>) (tmp_2470_cast_fu_29441_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read())) {
        weights_48_48_1x1_V_8_address0 =  (sc_lv<7>) (tmp_2429_cast_fu_28667_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read())) {
        weights_48_48_1x1_V_8_address0 =  (sc_lv<7>) (tmp_2391_cast_fu_27882_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read())) {
        weights_48_48_1x1_V_8_address0 =  (sc_lv<7>) (tmp_2352_cast_fu_27116_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read())) {
        weights_48_48_1x1_V_8_address0 =  (sc_lv<7>) (tmp_2314_cast_fu_26335_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read())) {
        weights_48_48_1x1_V_8_address0 =  (sc_lv<7>) (tmp_2275_cast_fu_25569_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read())) {
        weights_48_48_1x1_V_8_address0 =  (sc_lv<7>) (tmp_2238_cast_fu_24796_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read())) {
        weights_48_48_1x1_V_8_address0 =  (sc_lv<7>) (tmp_2199_cast_fu_24026_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read())) {
        weights_48_48_1x1_V_8_address0 =  (sc_lv<7>) (tmp_2162_cast_fu_23245_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read())) {
        weights_48_48_1x1_V_8_address0 =  (sc_lv<7>) (tmp_2121_cast_fu_22467_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read())) {
        weights_48_48_1x1_V_8_address0 =  (sc_lv<7>) (tmp_2084_cast_fu_21686_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read())) {
        weights_48_48_1x1_V_8_address0 =  (sc_lv<7>) (tmp_2045_cast_fu_20920_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read())) {
        weights_48_48_1x1_V_8_address0 =  (sc_lv<7>) (tmp_2008_cast_fu_20139_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read())) {
        weights_48_48_1x1_V_8_address0 =  (sc_lv<7>) (tmp_1980_cast_fu_19492_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read())) {
        weights_48_48_1x1_V_8_address0 =  (sc_lv<7>) (tmp_1940_cast_fu_18711_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read())) {
        weights_48_48_1x1_V_8_address0 =  (sc_lv<7>) (tmp_1906_cast_fu_17930_p1.read());
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
        weights_48_48_1x1_V_8_address0 = grp_subconv_1x1_8_p_fu_12848_weight_8_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_8_address0 = grp_subconv_1x1_16p_p_fu_12744_weight_8_V_address0.read();
    } else {
        weights_48_48_1x1_V_8_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_8_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read()) || 
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
        weights_48_48_1x1_V_8_address1 = grp_subconv_1x1_8_p_fu_12848_weight_8_V_address1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_8_address1 = grp_subconv_1x1_16p_p_fu_12744_weight_8_V_address1.read();
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
        weights_48_48_1x1_V_8_ce0 = grp_subconv_1x1_8_p_fu_12848_weight_8_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_8_ce0 = grp_subconv_1x1_16p_p_fu_12744_weight_8_V_ce0.read();
    } else {
        weights_48_48_1x1_V_8_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_8_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read()) || 
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
        weights_48_48_1x1_V_8_ce1 = grp_subconv_1x1_8_p_fu_12848_weight_8_V_ce1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_8_ce1 = grp_subconv_1x1_16p_p_fu_12744_weight_8_V_ce1.read();
    } else {
        weights_48_48_1x1_V_8_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_8_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read()) && 
          esl_seteq<1,6,6>(tmp_1976_fu_17926_p1.read(), ap_const_lv6_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read()) && 
          esl_seteq<1,6,6>(tmp_1995_fu_18707_p1.read(), ap_const_lv6_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read()) && 
          esl_seteq<1,6,6>(tmp_2012_fu_19488_p1.read(), ap_const_lv6_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read()) && 
          esl_seteq<1,6,6>(tmp_2040_fu_20135_p1.read(), ap_const_lv6_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read()) && 
          esl_seteq<1,6,6>(tmp_2064_fu_20916_p1.read(), ap_const_lv6_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read()) && 
          esl_seteq<1,6,6>(tmp_2087_fu_21682_p1.read(), ap_const_lv6_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) && 
          esl_seteq<1,6,6>(tmp_2111_fu_22463_p1.read(), ap_const_lv6_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read()) && 
          esl_seteq<1,6,6>(tmp_2124_fu_23241_p1.read(), ap_const_lv6_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read()) && 
          esl_seteq<1,6,6>(tmp_2135_fu_24022_p1.read(), ap_const_lv6_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read()) && 
          esl_seteq<1,6,6>(tmp_2148_fu_24792_p1.read(), ap_const_lv6_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read()) && 
          esl_seteq<1,6,6>(tmp_2159_fu_25565_p1.read(), ap_const_lv6_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read()) && 
          esl_seteq<1,6,6>(tmp_2172_fu_26331_p1.read(), ap_const_lv6_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read()) && 
          esl_seteq<1,6,6>(tmp_2183_fu_27112_p1.read(), ap_const_lv6_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read()) && 
          esl_seteq<1,6,6>(tmp_2196_fu_27878_p1.read(), ap_const_lv6_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read()) && 
          esl_seteq<1,6,6>(tmp_2207_fu_28663_p1.read(), ap_const_lv6_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read()) && 
          esl_seteq<1,6,6>(tmp_2220_fu_29437_p1.read(), ap_const_lv6_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read()) && 
          esl_seteq<1,6,6>(tmp_2231_fu_30222_p1.read(), ap_const_lv6_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read()) && 
          esl_seteq<1,6,6>(tmp_2244_fu_31000_p1.read(), ap_const_lv6_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read()) && 
          esl_seteq<1,6,6>(tmp_2255_fu_31789_p1.read(), ap_const_lv6_8)))) {
        weights_48_48_1x1_V_8_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_8_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_9_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read())) {
        weights_48_48_1x1_V_9_address0 =  (sc_lv<7>) (tmp_2587_cast_fu_31793_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read())) {
        weights_48_48_1x1_V_9_address0 =  (sc_lv<7>) (tmp_2550_cast_fu_31004_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read())) {
        weights_48_48_1x1_V_9_address0 =  (sc_lv<7>) (tmp_2509_cast_fu_30226_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read())) {
        weights_48_48_1x1_V_9_address0 =  (sc_lv<7>) (tmp_2470_cast_fu_29441_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read())) {
        weights_48_48_1x1_V_9_address0 =  (sc_lv<7>) (tmp_2429_cast_fu_28667_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read())) {
        weights_48_48_1x1_V_9_address0 =  (sc_lv<7>) (tmp_2391_cast_fu_27882_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read())) {
        weights_48_48_1x1_V_9_address0 =  (sc_lv<7>) (tmp_2352_cast_fu_27116_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read())) {
        weights_48_48_1x1_V_9_address0 =  (sc_lv<7>) (tmp_2314_cast_fu_26335_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read())) {
        weights_48_48_1x1_V_9_address0 =  (sc_lv<7>) (tmp_2275_cast_fu_25569_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read())) {
        weights_48_48_1x1_V_9_address0 =  (sc_lv<7>) (tmp_2238_cast_fu_24796_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read())) {
        weights_48_48_1x1_V_9_address0 =  (sc_lv<7>) (tmp_2199_cast_fu_24026_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read())) {
        weights_48_48_1x1_V_9_address0 =  (sc_lv<7>) (tmp_2162_cast_fu_23245_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read())) {
        weights_48_48_1x1_V_9_address0 =  (sc_lv<7>) (tmp_2121_cast_fu_22467_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read())) {
        weights_48_48_1x1_V_9_address0 =  (sc_lv<7>) (tmp_2084_cast_fu_21686_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read())) {
        weights_48_48_1x1_V_9_address0 =  (sc_lv<7>) (tmp_2045_cast_fu_20920_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read())) {
        weights_48_48_1x1_V_9_address0 =  (sc_lv<7>) (tmp_2008_cast_fu_20139_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read())) {
        weights_48_48_1x1_V_9_address0 =  (sc_lv<7>) (tmp_1980_cast_fu_19492_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read())) {
        weights_48_48_1x1_V_9_address0 =  (sc_lv<7>) (tmp_1940_cast_fu_18711_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read())) {
        weights_48_48_1x1_V_9_address0 =  (sc_lv<7>) (tmp_1906_cast_fu_17930_p1.read());
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
        weights_48_48_1x1_V_9_address0 = grp_subconv_1x1_8_p_fu_12848_weight_9_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_9_address0 = grp_subconv_1x1_16p_p_fu_12744_weight_9_V_address0.read();
    } else {
        weights_48_48_1x1_V_9_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_9_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read()) || 
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
        weights_48_48_1x1_V_9_address1 = grp_subconv_1x1_8_p_fu_12848_weight_9_V_address1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_9_address1 = grp_subconv_1x1_16p_p_fu_12744_weight_9_V_address1.read();
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
        weights_48_48_1x1_V_9_ce0 = grp_subconv_1x1_8_p_fu_12848_weight_9_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_9_ce0 = grp_subconv_1x1_16p_p_fu_12744_weight_9_V_ce0.read();
    } else {
        weights_48_48_1x1_V_9_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_9_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read()) || 
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
        weights_48_48_1x1_V_9_ce1 = grp_subconv_1x1_8_p_fu_12848_weight_9_V_ce1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_9_ce1 = grp_subconv_1x1_16p_p_fu_12744_weight_9_V_ce1.read();
    } else {
        weights_48_48_1x1_V_9_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_9_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read()) && 
          esl_seteq<1,6,6>(tmp_1976_fu_17926_p1.read(), ap_const_lv6_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read()) && 
          esl_seteq<1,6,6>(tmp_1995_fu_18707_p1.read(), ap_const_lv6_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read()) && 
          esl_seteq<1,6,6>(tmp_2012_fu_19488_p1.read(), ap_const_lv6_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read()) && 
          esl_seteq<1,6,6>(tmp_2040_fu_20135_p1.read(), ap_const_lv6_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read()) && 
          esl_seteq<1,6,6>(tmp_2064_fu_20916_p1.read(), ap_const_lv6_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read()) && 
          esl_seteq<1,6,6>(tmp_2087_fu_21682_p1.read(), ap_const_lv6_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) && 
          esl_seteq<1,6,6>(tmp_2111_fu_22463_p1.read(), ap_const_lv6_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read()) && 
          esl_seteq<1,6,6>(tmp_2124_fu_23241_p1.read(), ap_const_lv6_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read()) && 
          esl_seteq<1,6,6>(tmp_2135_fu_24022_p1.read(), ap_const_lv6_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read()) && 
          esl_seteq<1,6,6>(tmp_2148_fu_24792_p1.read(), ap_const_lv6_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read()) && 
          esl_seteq<1,6,6>(tmp_2159_fu_25565_p1.read(), ap_const_lv6_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read()) && 
          esl_seteq<1,6,6>(tmp_2172_fu_26331_p1.read(), ap_const_lv6_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read()) && 
          esl_seteq<1,6,6>(tmp_2183_fu_27112_p1.read(), ap_const_lv6_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read()) && 
          esl_seteq<1,6,6>(tmp_2196_fu_27878_p1.read(), ap_const_lv6_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read()) && 
          esl_seteq<1,6,6>(tmp_2207_fu_28663_p1.read(), ap_const_lv6_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read()) && 
          esl_seteq<1,6,6>(tmp_2220_fu_29437_p1.read(), ap_const_lv6_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read()) && 
          esl_seteq<1,6,6>(tmp_2231_fu_30222_p1.read(), ap_const_lv6_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read()) && 
          esl_seteq<1,6,6>(tmp_2244_fu_31000_p1.read(), ap_const_lv6_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read()) && 
          esl_seteq<1,6,6>(tmp_2255_fu_31789_p1.read(), ap_const_lv6_9)))) {
        weights_48_48_1x1_V_9_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_9_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_s_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read())) {
        weights_48_48_1x1_V_s_address0 =  (sc_lv<7>) (tmp_2587_cast_fu_31793_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read())) {
        weights_48_48_1x1_V_s_address0 =  (sc_lv<7>) (tmp_2550_cast_fu_31004_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read())) {
        weights_48_48_1x1_V_s_address0 =  (sc_lv<7>) (tmp_2509_cast_fu_30226_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read())) {
        weights_48_48_1x1_V_s_address0 =  (sc_lv<7>) (tmp_2470_cast_fu_29441_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read())) {
        weights_48_48_1x1_V_s_address0 =  (sc_lv<7>) (tmp_2429_cast_fu_28667_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read())) {
        weights_48_48_1x1_V_s_address0 =  (sc_lv<7>) (tmp_2391_cast_fu_27882_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read())) {
        weights_48_48_1x1_V_s_address0 =  (sc_lv<7>) (tmp_2352_cast_fu_27116_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read())) {
        weights_48_48_1x1_V_s_address0 =  (sc_lv<7>) (tmp_2314_cast_fu_26335_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read())) {
        weights_48_48_1x1_V_s_address0 =  (sc_lv<7>) (tmp_2275_cast_fu_25569_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read())) {
        weights_48_48_1x1_V_s_address0 =  (sc_lv<7>) (tmp_2238_cast_fu_24796_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read())) {
        weights_48_48_1x1_V_s_address0 =  (sc_lv<7>) (tmp_2199_cast_fu_24026_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read())) {
        weights_48_48_1x1_V_s_address0 =  (sc_lv<7>) (tmp_2162_cast_fu_23245_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read())) {
        weights_48_48_1x1_V_s_address0 =  (sc_lv<7>) (tmp_2121_cast_fu_22467_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read())) {
        weights_48_48_1x1_V_s_address0 =  (sc_lv<7>) (tmp_2084_cast_fu_21686_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read())) {
        weights_48_48_1x1_V_s_address0 =  (sc_lv<7>) (tmp_2045_cast_fu_20920_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read())) {
        weights_48_48_1x1_V_s_address0 =  (sc_lv<7>) (tmp_2008_cast_fu_20139_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read())) {
        weights_48_48_1x1_V_s_address0 =  (sc_lv<7>) (tmp_1980_cast_fu_19492_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read())) {
        weights_48_48_1x1_V_s_address0 =  (sc_lv<7>) (tmp_1940_cast_fu_18711_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read())) {
        weights_48_48_1x1_V_s_address0 =  (sc_lv<7>) (tmp_1906_cast_fu_17930_p1.read());
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
        weights_48_48_1x1_V_s_address0 = grp_subconv_1x1_8_p_fu_12848_weight_0_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_s_address0 = grp_subconv_1x1_16p_p_fu_12744_weight_0_V_address0.read();
    } else {
        weights_48_48_1x1_V_s_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_s_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read()) || 
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
        weights_48_48_1x1_V_s_address1 = grp_subconv_1x1_8_p_fu_12848_weight_0_V_address1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_s_address1 = grp_subconv_1x1_16p_p_fu_12744_weight_0_V_address1.read();
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
        weights_48_48_1x1_V_s_ce0 = grp_subconv_1x1_8_p_fu_12848_weight_0_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_s_ce0 = grp_subconv_1x1_16p_p_fu_12744_weight_0_V_ce0.read();
    } else {
        weights_48_48_1x1_V_s_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_s_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read()) || 
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
        weights_48_48_1x1_V_s_ce1 = grp_subconv_1x1_8_p_fu_12848_weight_0_V_ce1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_s_ce1 = grp_subconv_1x1_16p_p_fu_12744_weight_0_V_ce1.read();
    } else {
        weights_48_48_1x1_V_s_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_s_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_0, tmp_1976_fu_17926_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_0, tmp_1995_fu_18707_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_0, tmp_2012_fu_19488_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_0, tmp_2040_fu_20135_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_0, tmp_2064_fu_20916_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_0, tmp_2087_fu_21682_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_0, tmp_2111_fu_22463_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_0, tmp_2124_fu_23241_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_0, tmp_2135_fu_24022_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_0, tmp_2148_fu_24792_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_0, tmp_2159_fu_25565_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_0, tmp_2172_fu_26331_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_0, tmp_2183_fu_27112_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_0, tmp_2196_fu_27878_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_0, tmp_2207_fu_28663_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_0, tmp_2220_fu_29437_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_0, tmp_2231_fu_30222_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_0, tmp_2244_fu_31000_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_0, tmp_2255_fu_31789_p1.read())))) {
        weights_48_48_1x1_V_s_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_s_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_1_3x3_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1668.read())) {
        weights_96_1_3x3_V_address0 =  (sc_lv<10>) (tmp_2871_cast_fu_37839_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1571.read())) {
        weights_96_1_3x3_V_address0 =  (sc_lv<10>) (tmp_2796_cast_fu_36340_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1474.read())) {
        weights_96_1_3x3_V_address0 =  (sc_lv<10>) (tmp_2720_cast_fu_34825_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1380.read())) {
        weights_96_1_3x3_V_address0 =  (sc_lv<10>) (tmp_2654_cast_fu_33453_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1320.read())) {
        weights_96_1_3x3_V_address0 =  (sc_lv<10>) (tmp_2621_cast_fu_32692_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1393.read())) {
        weights_96_1_3x3_V_address0 = grp_subconv_3x3_8_stride_fu_13785_weight_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1333.read())) {
        weights_96_1_3x3_V_address0 = grp_subconv_3x3_8_stride_1_fu_13513_weight_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1487.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1584.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1681.read()))) {
        weights_96_1_3x3_V_address0 = grp_subconv_3x3_4_no_rel_fu_13479_weight_V_address0.read();
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
        weights_96_1_3x3_V_ce0 = grp_subconv_3x3_8_stride_fu_13785_weight_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1333.read())) {
        weights_96_1_3x3_V_ce0 = grp_subconv_3x3_8_stride_1_fu_13513_weight_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1487.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1584.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1681.read()))) {
        weights_96_1_3x3_V_ce0 = grp_subconv_3x3_4_no_rel_fu_13479_weight_V_ce0.read();
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
        weights_96_96_1x1_V_10_address0 =  (sc_lv<10>) (tmp_2895_cast_fu_38240_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read())) {
        weights_96_96_1x1_V_10_address0 =  (sc_lv<10>) (tmp_2859_cast_fu_37487_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read())) {
        weights_96_96_1x1_V_10_address0 =  (sc_lv<10>) (tmp_2821_cast_fu_36741_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read())) {
        weights_96_96_1x1_V_10_address0 =  (sc_lv<10>) (tmp_2784_cast_fu_35980_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read())) {
        weights_96_96_1x1_V_10_address0 =  (sc_lv<10>) (tmp_2746_cast_fu_35234_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read())) {
        weights_96_96_1x1_V_10_address0 =  (sc_lv<10>) (tmp_2708_cast_fu_34477_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read())) {
        weights_96_96_1x1_V_10_address0 =  (sc_lv<10>) (tmp_2681_cast_fu_33854_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read())) {
        weights_96_96_1x1_V_10_address0 =  (sc_lv<10>) (tmp_2642_cast_fu_33097_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read())) {
        weights_96_96_1x1_V_10_address0 =  (sc_lv<10>) (tmp_2609_cast_fu_32340_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_10_address0 = grp_subconv_1x1_8p_p_fu_13043_weight_10_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_10_address0 = grp_subconv_1x1_4_p_fu_12952_weight_10_V_address0.read();
    } else {
        weights_96_96_1x1_V_10_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_10_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_10_address1 = grp_subconv_1x1_8p_p_fu_13043_weight_10_V_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_10_address1 = grp_subconv_1x1_4_p_fu_12952_weight_10_V_address1.read();
    } else {
        weights_96_96_1x1_V_10_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
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
        weights_96_96_1x1_V_10_ce0 = grp_subconv_1x1_8p_p_fu_13043_weight_10_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_10_ce0 = grp_subconv_1x1_4_p_fu_12952_weight_10_V_ce0.read();
    } else {
        weights_96_96_1x1_V_10_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_10_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_10_ce1 = grp_subconv_1x1_8p_p_fu_13043_weight_10_V_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_10_ce1 = grp_subconv_1x1_4_p_fu_12952_weight_10_V_ce1.read();
    } else {
        weights_96_96_1x1_V_10_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_10_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read()) && 
          esl_seteq<1,5,5>(ap_const_lv5_A, tmp_2266_fu_32336_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read()) && 
          esl_seteq<1,5,5>(ap_const_lv5_A, tmp_2279_fu_33093_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) && 
          esl_seteq<1,5,5>(ap_const_lv5_A, tmp_2292_fu_33850_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read()) && 
          esl_seteq<1,5,5>(ap_const_lv5_A, tmp_2303_fu_34473_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read()) && 
          esl_seteq<1,5,5>(ap_const_lv5_A, tmp_2316_fu_35230_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read()) && 
          esl_seteq<1,5,5>(ap_const_lv5_A, tmp_2329_fu_35976_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read()) && 
          esl_seteq<1,5,5>(ap_const_lv5_A, tmp_2342_fu_36737_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read()) && 
          esl_seteq<1,5,5>(ap_const_lv5_A, tmp_2355_fu_37483_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read()) && 
          esl_seteq<1,5,5>(ap_const_lv5_A, tmp_2368_fu_38236_p1.read())))) {
        weights_96_96_1x1_V_10_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_10_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_11_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read())) {
        weights_96_96_1x1_V_11_address0 =  (sc_lv<10>) (tmp_2895_cast_fu_38240_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read())) {
        weights_96_96_1x1_V_11_address0 =  (sc_lv<10>) (tmp_2859_cast_fu_37487_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read())) {
        weights_96_96_1x1_V_11_address0 =  (sc_lv<10>) (tmp_2821_cast_fu_36741_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read())) {
        weights_96_96_1x1_V_11_address0 =  (sc_lv<10>) (tmp_2784_cast_fu_35980_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read())) {
        weights_96_96_1x1_V_11_address0 =  (sc_lv<10>) (tmp_2746_cast_fu_35234_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read())) {
        weights_96_96_1x1_V_11_address0 =  (sc_lv<10>) (tmp_2708_cast_fu_34477_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read())) {
        weights_96_96_1x1_V_11_address0 =  (sc_lv<10>) (tmp_2681_cast_fu_33854_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read())) {
        weights_96_96_1x1_V_11_address0 =  (sc_lv<10>) (tmp_2642_cast_fu_33097_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read())) {
        weights_96_96_1x1_V_11_address0 =  (sc_lv<10>) (tmp_2609_cast_fu_32340_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_11_address0 = grp_subconv_1x1_8p_p_fu_13043_weight_11_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_11_address0 = grp_subconv_1x1_4_p_fu_12952_weight_11_V_address0.read();
    } else {
        weights_96_96_1x1_V_11_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_11_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_11_address1 = grp_subconv_1x1_8p_p_fu_13043_weight_11_V_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_11_address1 = grp_subconv_1x1_4_p_fu_12952_weight_11_V_address1.read();
    } else {
        weights_96_96_1x1_V_11_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
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
        weights_96_96_1x1_V_11_ce0 = grp_subconv_1x1_8p_p_fu_13043_weight_11_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_11_ce0 = grp_subconv_1x1_4_p_fu_12952_weight_11_V_ce0.read();
    } else {
        weights_96_96_1x1_V_11_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_11_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_11_ce1 = grp_subconv_1x1_8p_p_fu_13043_weight_11_V_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_11_ce1 = grp_subconv_1x1_4_p_fu_12952_weight_11_V_ce1.read();
    } else {
        weights_96_96_1x1_V_11_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_11_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read()) && 
          !esl_seteq<1,5,5>(ap_const_lv5_0, tmp_2266_fu_32336_p1.read()) && 
          !esl_seteq<1,5,5>(ap_const_lv5_1, tmp_2266_fu_32336_p1.read()) && 
          !esl_seteq<1,5,5>(ap_const_lv5_2, tmp_2266_fu_32336_p1.read()) && 
          !esl_seteq<1,5,5>(ap_const_lv5_3, tmp_2266_fu_32336_p1.read()) && 
          !esl_seteq<1,5,5>(ap_const_lv5_4, tmp_2266_fu_32336_p1.read()) && 
          !esl_seteq<1,5,5>(ap_const_lv5_5, tmp_2266_fu_32336_p1.read()) && 
          !esl_seteq<1,5,5>(ap_const_lv5_6, tmp_2266_fu_32336_p1.read()) && 
          !esl_seteq<1,5,5>(ap_const_lv5_7, tmp_2266_fu_32336_p1.read()) && 
          !esl_seteq<1,5,5>(ap_const_lv5_8, tmp_2266_fu_32336_p1.read()) && 
          !esl_seteq<1,5,5>(ap_const_lv5_9, tmp_2266_fu_32336_p1.read()) && 
          !esl_seteq<1,5,5>(ap_const_lv5_A, tmp_2266_fu_32336_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read()) && 
          !esl_seteq<1,5,5>(ap_const_lv5_0, tmp_2279_fu_33093_p1.read()) && 
          !esl_seteq<1,5,5>(ap_const_lv5_1, tmp_2279_fu_33093_p1.read()) && 
          !esl_seteq<1,5,5>(ap_const_lv5_2, tmp_2279_fu_33093_p1.read()) && 
          !esl_seteq<1,5,5>(ap_const_lv5_3, tmp_2279_fu_33093_p1.read()) && 
          !esl_seteq<1,5,5>(ap_const_lv5_4, tmp_2279_fu_33093_p1.read()) && 
          !esl_seteq<1,5,5>(ap_const_lv5_5, tmp_2279_fu_33093_p1.read()) && 
          !esl_seteq<1,5,5>(ap_const_lv5_6, tmp_2279_fu_33093_p1.read()) && 
          !esl_seteq<1,5,5>(ap_const_lv5_7, tmp_2279_fu_33093_p1.read()) && 
          !esl_seteq<1,5,5>(ap_const_lv5_8, tmp_2279_fu_33093_p1.read()) && 
          !esl_seteq<1,5,5>(ap_const_lv5_9, tmp_2279_fu_33093_p1.read()) && 
          !esl_seteq<1,5,5>(ap_const_lv5_A, tmp_2279_fu_33093_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) && 
          !esl_seteq<1,5,5>(ap_const_lv5_0, tmp_2292_fu_33850_p1.read()) && 
          !esl_seteq<1,5,5>(ap_const_lv5_1, tmp_2292_fu_33850_p1.read()) && 
          !esl_seteq<1,5,5>(ap_const_lv5_2, tmp_2292_fu_33850_p1.read()) && 
          !esl_seteq<1,5,5>(ap_const_lv5_3, tmp_2292_fu_33850_p1.read()) && 
          !esl_seteq<1,5,5>(ap_const_lv5_4, tmp_2292_fu_33850_p1.read()) && 
          !esl_seteq<1,5,5>(ap_const_lv5_5, tmp_2292_fu_33850_p1.read()) && 
          !esl_seteq<1,5,5>(ap_const_lv5_6, tmp_2292_fu_33850_p1.read()) && 
          !esl_seteq<1,5,5>(ap_const_lv5_7, tmp_2292_fu_33850_p1.read()) && 
          !esl_seteq<1,5,5>(ap_const_lv5_8, tmp_2292_fu_33850_p1.read()) && 
          !esl_seteq<1,5,5>(ap_const_lv5_9, tmp_2292_fu_33850_p1.read()) && 
          !esl_seteq<1,5,5>(ap_const_lv5_A, tmp_2292_fu_33850_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read()) && 
          !esl_seteq<1,5,5>(ap_const_lv5_0, tmp_2303_fu_34473_p1.read()) && 
          !esl_seteq<1,5,5>(ap_const_lv5_1, tmp_2303_fu_34473_p1.read()) && 
          !esl_seteq<1,5,5>(ap_const_lv5_2, tmp_2303_fu_34473_p1.read()) && 
          !esl_seteq<1,5,5>(ap_const_lv5_3, tmp_2303_fu_34473_p1.read()) && 
          !esl_seteq<1,5,5>(ap_const_lv5_4, tmp_2303_fu_34473_p1.read()) && 
          !esl_seteq<1,5,5>(ap_const_lv5_5, tmp_2303_fu_34473_p1.read()) && 
          !esl_seteq<1,5,5>(ap_const_lv5_6, tmp_2303_fu_34473_p1.read()) && 
          !esl_seteq<1,5,5>(ap_const_lv5_7, tmp_2303_fu_34473_p1.read()) && 
          !esl_seteq<1,5,5>(ap_const_lv5_8, tmp_2303_fu_34473_p1.read()) && 
          !esl_seteq<1,5,5>(ap_const_lv5_9, tmp_2303_fu_34473_p1.read()) && 
          !esl_seteq<1,5,5>(ap_const_lv5_A, tmp_2303_fu_34473_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read()) && 
          !esl_seteq<1,5,5>(ap_const_lv5_0, tmp_2316_fu_35230_p1.read()) && 
          !esl_seteq<1,5,5>(ap_const_lv5_1, tmp_2316_fu_35230_p1.read()) && 
          !esl_seteq<1,5,5>(ap_const_lv5_2, tmp_2316_fu_35230_p1.read()) && 
          !esl_seteq<1,5,5>(ap_const_lv5_3, tmp_2316_fu_35230_p1.read()) && 
          !esl_seteq<1,5,5>(ap_const_lv5_4, tmp_2316_fu_35230_p1.read()) && 
          !esl_seteq<1,5,5>(ap_const_lv5_5, tmp_2316_fu_35230_p1.read()) && 
          !esl_seteq<1,5,5>(ap_const_lv5_6, tmp_2316_fu_35230_p1.read()) && 
          !esl_seteq<1,5,5>(ap_const_lv5_7, tmp_2316_fu_35230_p1.read()) && 
          !esl_seteq<1,5,5>(ap_const_lv5_8, tmp_2316_fu_35230_p1.read()) && 
          !esl_seteq<1,5,5>(ap_const_lv5_9, tmp_2316_fu_35230_p1.read()) && 
          !esl_seteq<1,5,5>(ap_const_lv5_A, tmp_2316_fu_35230_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read()) && 
          !esl_seteq<1,5,5>(ap_const_lv5_0, tmp_2329_fu_35976_p1.read()) && 
          !esl_seteq<1,5,5>(ap_const_lv5_1, tmp_2329_fu_35976_p1.read()) && 
          !esl_seteq<1,5,5>(ap_const_lv5_2, tmp_2329_fu_35976_p1.read()) && 
          !esl_seteq<1,5,5>(ap_const_lv5_3, tmp_2329_fu_35976_p1.read()) && 
          !esl_seteq<1,5,5>(ap_const_lv5_4, tmp_2329_fu_35976_p1.read()) && 
          !esl_seteq<1,5,5>(ap_const_lv5_5, tmp_2329_fu_35976_p1.read()) && 
          !esl_seteq<1,5,5>(ap_const_lv5_6, tmp_2329_fu_35976_p1.read()) && 
          !esl_seteq<1,5,5>(ap_const_lv5_7, tmp_2329_fu_35976_p1.read()) && 
          !esl_seteq<1,5,5>(ap_const_lv5_8, tmp_2329_fu_35976_p1.read()) && 
          !esl_seteq<1,5,5>(ap_const_lv5_9, tmp_2329_fu_35976_p1.read()) && 
          !esl_seteq<1,5,5>(ap_const_lv5_A, tmp_2329_fu_35976_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read()) && 
          !esl_seteq<1,5,5>(ap_const_lv5_0, tmp_2342_fu_36737_p1.read()) && 
          !esl_seteq<1,5,5>(ap_const_lv5_1, tmp_2342_fu_36737_p1.read()) && 
          !esl_seteq<1,5,5>(ap_const_lv5_2, tmp_2342_fu_36737_p1.read()) && 
          !esl_seteq<1,5,5>(ap_const_lv5_3, tmp_2342_fu_36737_p1.read()) && 
          !esl_seteq<1,5,5>(ap_const_lv5_4, tmp_2342_fu_36737_p1.read()) && 
          !esl_seteq<1,5,5>(ap_const_lv5_5, tmp_2342_fu_36737_p1.read()) && 
          !esl_seteq<1,5,5>(ap_const_lv5_6, tmp_2342_fu_36737_p1.read()) && 
          !esl_seteq<1,5,5>(ap_const_lv5_7, tmp_2342_fu_36737_p1.read()) && 
          !esl_seteq<1,5,5>(ap_const_lv5_8, tmp_2342_fu_36737_p1.read()) && 
          !esl_seteq<1,5,5>(ap_const_lv5_9, tmp_2342_fu_36737_p1.read()) && 
          !esl_seteq<1,5,5>(ap_const_lv5_A, tmp_2342_fu_36737_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read()) && 
          !esl_seteq<1,5,5>(ap_const_lv5_0, tmp_2355_fu_37483_p1.read()) && 
          !esl_seteq<1,5,5>(ap_const_lv5_1, tmp_2355_fu_37483_p1.read()) && 
          !esl_seteq<1,5,5>(ap_const_lv5_2, tmp_2355_fu_37483_p1.read()) && 
          !esl_seteq<1,5,5>(ap_const_lv5_3, tmp_2355_fu_37483_p1.read()) && 
          !esl_seteq<1,5,5>(ap_const_lv5_4, tmp_2355_fu_37483_p1.read()) && 
          !esl_seteq<1,5,5>(ap_const_lv5_5, tmp_2355_fu_37483_p1.read()) && 
          !esl_seteq<1,5,5>(ap_const_lv5_6, tmp_2355_fu_37483_p1.read()) && 
          !esl_seteq<1,5,5>(ap_const_lv5_7, tmp_2355_fu_37483_p1.read()) && 
          !esl_seteq<1,5,5>(ap_const_lv5_8, tmp_2355_fu_37483_p1.read()) && 
          !esl_seteq<1,5,5>(ap_const_lv5_9, tmp_2355_fu_37483_p1.read()) && 
          !esl_seteq<1,5,5>(ap_const_lv5_A, tmp_2355_fu_37483_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read()) && 
          !esl_seteq<1,5,5>(ap_const_lv5_0, tmp_2368_fu_38236_p1.read()) && 
          !esl_seteq<1,5,5>(ap_const_lv5_1, tmp_2368_fu_38236_p1.read()) && 
          !esl_seteq<1,5,5>(ap_const_lv5_2, tmp_2368_fu_38236_p1.read()) && 
          !esl_seteq<1,5,5>(ap_const_lv5_3, tmp_2368_fu_38236_p1.read()) && 
          !esl_seteq<1,5,5>(ap_const_lv5_4, tmp_2368_fu_38236_p1.read()) && 
          !esl_seteq<1,5,5>(ap_const_lv5_5, tmp_2368_fu_38236_p1.read()) && 
          !esl_seteq<1,5,5>(ap_const_lv5_6, tmp_2368_fu_38236_p1.read()) && 
          !esl_seteq<1,5,5>(ap_const_lv5_7, tmp_2368_fu_38236_p1.read()) && 
          !esl_seteq<1,5,5>(ap_const_lv5_8, tmp_2368_fu_38236_p1.read()) && 
          !esl_seteq<1,5,5>(ap_const_lv5_9, tmp_2368_fu_38236_p1.read()) && 
          !esl_seteq<1,5,5>(ap_const_lv5_A, tmp_2368_fu_38236_p1.read())))) {
        weights_96_96_1x1_V_11_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_11_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read())) {
        weights_96_96_1x1_V_1_address0 =  (sc_lv<10>) (tmp_2895_cast_fu_38240_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read())) {
        weights_96_96_1x1_V_1_address0 =  (sc_lv<10>) (tmp_2859_cast_fu_37487_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read())) {
        weights_96_96_1x1_V_1_address0 =  (sc_lv<10>) (tmp_2821_cast_fu_36741_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read())) {
        weights_96_96_1x1_V_1_address0 =  (sc_lv<10>) (tmp_2784_cast_fu_35980_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read())) {
        weights_96_96_1x1_V_1_address0 =  (sc_lv<10>) (tmp_2746_cast_fu_35234_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read())) {
        weights_96_96_1x1_V_1_address0 =  (sc_lv<10>) (tmp_2708_cast_fu_34477_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read())) {
        weights_96_96_1x1_V_1_address0 =  (sc_lv<10>) (tmp_2681_cast_fu_33854_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read())) {
        weights_96_96_1x1_V_1_address0 =  (sc_lv<10>) (tmp_2642_cast_fu_33097_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read())) {
        weights_96_96_1x1_V_1_address0 =  (sc_lv<10>) (tmp_2609_cast_fu_32340_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_1_address0 = grp_subconv_1x1_8p_p_fu_13043_weight_1_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_1_address0 = grp_subconv_1x1_4_p_fu_12952_weight_1_V_address0.read();
    } else {
        weights_96_96_1x1_V_1_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_1_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_1_address1 = grp_subconv_1x1_8p_p_fu_13043_weight_1_V_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_1_address1 = grp_subconv_1x1_4_p_fu_12952_weight_1_V_address1.read();
    } else {
        weights_96_96_1x1_V_1_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
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
        weights_96_96_1x1_V_1_ce0 = grp_subconv_1x1_8p_p_fu_13043_weight_1_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_1_ce0 = grp_subconv_1x1_4_p_fu_12952_weight_1_V_ce0.read();
    } else {
        weights_96_96_1x1_V_1_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_1_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_1_ce1 = grp_subconv_1x1_8p_p_fu_13043_weight_1_V_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_1_ce1 = grp_subconv_1x1_4_p_fu_12952_weight_1_V_ce1.read();
    } else {
        weights_96_96_1x1_V_1_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_1_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read()) && 
          esl_seteq<1,5,5>(ap_const_lv5_1, tmp_2266_fu_32336_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read()) && 
          esl_seteq<1,5,5>(ap_const_lv5_1, tmp_2279_fu_33093_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) && 
          esl_seteq<1,5,5>(ap_const_lv5_1, tmp_2292_fu_33850_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read()) && 
          esl_seteq<1,5,5>(ap_const_lv5_1, tmp_2303_fu_34473_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read()) && 
          esl_seteq<1,5,5>(ap_const_lv5_1, tmp_2316_fu_35230_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read()) && 
          esl_seteq<1,5,5>(ap_const_lv5_1, tmp_2329_fu_35976_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read()) && 
          esl_seteq<1,5,5>(ap_const_lv5_1, tmp_2342_fu_36737_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read()) && 
          esl_seteq<1,5,5>(ap_const_lv5_1, tmp_2355_fu_37483_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read()) && 
          esl_seteq<1,5,5>(ap_const_lv5_1, tmp_2368_fu_38236_p1.read())))) {
        weights_96_96_1x1_V_1_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_1_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read())) {
        weights_96_96_1x1_V_2_address0 =  (sc_lv<10>) (tmp_2895_cast_fu_38240_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read())) {
        weights_96_96_1x1_V_2_address0 =  (sc_lv<10>) (tmp_2859_cast_fu_37487_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read())) {
        weights_96_96_1x1_V_2_address0 =  (sc_lv<10>) (tmp_2821_cast_fu_36741_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read())) {
        weights_96_96_1x1_V_2_address0 =  (sc_lv<10>) (tmp_2784_cast_fu_35980_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read())) {
        weights_96_96_1x1_V_2_address0 =  (sc_lv<10>) (tmp_2746_cast_fu_35234_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read())) {
        weights_96_96_1x1_V_2_address0 =  (sc_lv<10>) (tmp_2708_cast_fu_34477_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read())) {
        weights_96_96_1x1_V_2_address0 =  (sc_lv<10>) (tmp_2681_cast_fu_33854_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read())) {
        weights_96_96_1x1_V_2_address0 =  (sc_lv<10>) (tmp_2642_cast_fu_33097_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read())) {
        weights_96_96_1x1_V_2_address0 =  (sc_lv<10>) (tmp_2609_cast_fu_32340_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_2_address0 = grp_subconv_1x1_8p_p_fu_13043_weight_2_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_2_address0 = grp_subconv_1x1_4_p_fu_12952_weight_2_V_address0.read();
    } else {
        weights_96_96_1x1_V_2_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_2_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_2_address1 = grp_subconv_1x1_8p_p_fu_13043_weight_2_V_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_2_address1 = grp_subconv_1x1_4_p_fu_12952_weight_2_V_address1.read();
    } else {
        weights_96_96_1x1_V_2_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
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
        weights_96_96_1x1_V_2_ce0 = grp_subconv_1x1_8p_p_fu_13043_weight_2_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_2_ce0 = grp_subconv_1x1_4_p_fu_12952_weight_2_V_ce0.read();
    } else {
        weights_96_96_1x1_V_2_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_2_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_2_ce1 = grp_subconv_1x1_8p_p_fu_13043_weight_2_V_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_2_ce1 = grp_subconv_1x1_4_p_fu_12952_weight_2_V_ce1.read();
    } else {
        weights_96_96_1x1_V_2_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_2_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read()) && 
          esl_seteq<1,5,5>(ap_const_lv5_2, tmp_2266_fu_32336_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read()) && 
          esl_seteq<1,5,5>(ap_const_lv5_2, tmp_2279_fu_33093_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) && 
          esl_seteq<1,5,5>(ap_const_lv5_2, tmp_2292_fu_33850_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read()) && 
          esl_seteq<1,5,5>(ap_const_lv5_2, tmp_2303_fu_34473_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read()) && 
          esl_seteq<1,5,5>(ap_const_lv5_2, tmp_2316_fu_35230_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read()) && 
          esl_seteq<1,5,5>(ap_const_lv5_2, tmp_2329_fu_35976_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read()) && 
          esl_seteq<1,5,5>(ap_const_lv5_2, tmp_2342_fu_36737_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read()) && 
          esl_seteq<1,5,5>(ap_const_lv5_2, tmp_2355_fu_37483_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read()) && 
          esl_seteq<1,5,5>(ap_const_lv5_2, tmp_2368_fu_38236_p1.read())))) {
        weights_96_96_1x1_V_2_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_2_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read())) {
        weights_96_96_1x1_V_3_address0 =  (sc_lv<10>) (tmp_2895_cast_fu_38240_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read())) {
        weights_96_96_1x1_V_3_address0 =  (sc_lv<10>) (tmp_2859_cast_fu_37487_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read())) {
        weights_96_96_1x1_V_3_address0 =  (sc_lv<10>) (tmp_2821_cast_fu_36741_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read())) {
        weights_96_96_1x1_V_3_address0 =  (sc_lv<10>) (tmp_2784_cast_fu_35980_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read())) {
        weights_96_96_1x1_V_3_address0 =  (sc_lv<10>) (tmp_2746_cast_fu_35234_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read())) {
        weights_96_96_1x1_V_3_address0 =  (sc_lv<10>) (tmp_2708_cast_fu_34477_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read())) {
        weights_96_96_1x1_V_3_address0 =  (sc_lv<10>) (tmp_2681_cast_fu_33854_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read())) {
        weights_96_96_1x1_V_3_address0 =  (sc_lv<10>) (tmp_2642_cast_fu_33097_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read())) {
        weights_96_96_1x1_V_3_address0 =  (sc_lv<10>) (tmp_2609_cast_fu_32340_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_3_address0 = grp_subconv_1x1_8p_p_fu_13043_weight_3_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_3_address0 = grp_subconv_1x1_4_p_fu_12952_weight_3_V_address0.read();
    } else {
        weights_96_96_1x1_V_3_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_3_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_3_address1 = grp_subconv_1x1_8p_p_fu_13043_weight_3_V_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_3_address1 = grp_subconv_1x1_4_p_fu_12952_weight_3_V_address1.read();
    } else {
        weights_96_96_1x1_V_3_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
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
        weights_96_96_1x1_V_3_ce0 = grp_subconv_1x1_8p_p_fu_13043_weight_3_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_3_ce0 = grp_subconv_1x1_4_p_fu_12952_weight_3_V_ce0.read();
    } else {
        weights_96_96_1x1_V_3_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_3_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_3_ce1 = grp_subconv_1x1_8p_p_fu_13043_weight_3_V_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_3_ce1 = grp_subconv_1x1_4_p_fu_12952_weight_3_V_ce1.read();
    } else {
        weights_96_96_1x1_V_3_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_3_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read()) && 
          esl_seteq<1,5,5>(ap_const_lv5_3, tmp_2266_fu_32336_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read()) && 
          esl_seteq<1,5,5>(ap_const_lv5_3, tmp_2279_fu_33093_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) && 
          esl_seteq<1,5,5>(ap_const_lv5_3, tmp_2292_fu_33850_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read()) && 
          esl_seteq<1,5,5>(ap_const_lv5_3, tmp_2303_fu_34473_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read()) && 
          esl_seteq<1,5,5>(ap_const_lv5_3, tmp_2316_fu_35230_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read()) && 
          esl_seteq<1,5,5>(ap_const_lv5_3, tmp_2329_fu_35976_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read()) && 
          esl_seteq<1,5,5>(ap_const_lv5_3, tmp_2342_fu_36737_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read()) && 
          esl_seteq<1,5,5>(ap_const_lv5_3, tmp_2355_fu_37483_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read()) && 
          esl_seteq<1,5,5>(ap_const_lv5_3, tmp_2368_fu_38236_p1.read())))) {
        weights_96_96_1x1_V_3_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_3_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read())) {
        weights_96_96_1x1_V_4_address0 =  (sc_lv<10>) (tmp_2895_cast_fu_38240_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read())) {
        weights_96_96_1x1_V_4_address0 =  (sc_lv<10>) (tmp_2859_cast_fu_37487_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read())) {
        weights_96_96_1x1_V_4_address0 =  (sc_lv<10>) (tmp_2821_cast_fu_36741_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read())) {
        weights_96_96_1x1_V_4_address0 =  (sc_lv<10>) (tmp_2784_cast_fu_35980_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read())) {
        weights_96_96_1x1_V_4_address0 =  (sc_lv<10>) (tmp_2746_cast_fu_35234_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read())) {
        weights_96_96_1x1_V_4_address0 =  (sc_lv<10>) (tmp_2708_cast_fu_34477_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read())) {
        weights_96_96_1x1_V_4_address0 =  (sc_lv<10>) (tmp_2681_cast_fu_33854_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read())) {
        weights_96_96_1x1_V_4_address0 =  (sc_lv<10>) (tmp_2642_cast_fu_33097_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read())) {
        weights_96_96_1x1_V_4_address0 =  (sc_lv<10>) (tmp_2609_cast_fu_32340_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_4_address0 = grp_subconv_1x1_8p_p_fu_13043_weight_4_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_4_address0 = grp_subconv_1x1_4_p_fu_12952_weight_4_V_address0.read();
    } else {
        weights_96_96_1x1_V_4_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_4_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_4_address1 = grp_subconv_1x1_8p_p_fu_13043_weight_4_V_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_4_address1 = grp_subconv_1x1_4_p_fu_12952_weight_4_V_address1.read();
    } else {
        weights_96_96_1x1_V_4_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
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
        weights_96_96_1x1_V_4_ce0 = grp_subconv_1x1_8p_p_fu_13043_weight_4_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_4_ce0 = grp_subconv_1x1_4_p_fu_12952_weight_4_V_ce0.read();
    } else {
        weights_96_96_1x1_V_4_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_4_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_4_ce1 = grp_subconv_1x1_8p_p_fu_13043_weight_4_V_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_4_ce1 = grp_subconv_1x1_4_p_fu_12952_weight_4_V_ce1.read();
    } else {
        weights_96_96_1x1_V_4_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_4_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read()) && 
          esl_seteq<1,5,5>(ap_const_lv5_4, tmp_2266_fu_32336_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read()) && 
          esl_seteq<1,5,5>(ap_const_lv5_4, tmp_2279_fu_33093_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) && 
          esl_seteq<1,5,5>(ap_const_lv5_4, tmp_2292_fu_33850_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read()) && 
          esl_seteq<1,5,5>(ap_const_lv5_4, tmp_2303_fu_34473_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read()) && 
          esl_seteq<1,5,5>(ap_const_lv5_4, tmp_2316_fu_35230_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read()) && 
          esl_seteq<1,5,5>(ap_const_lv5_4, tmp_2329_fu_35976_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read()) && 
          esl_seteq<1,5,5>(ap_const_lv5_4, tmp_2342_fu_36737_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read()) && 
          esl_seteq<1,5,5>(ap_const_lv5_4, tmp_2355_fu_37483_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read()) && 
          esl_seteq<1,5,5>(ap_const_lv5_4, tmp_2368_fu_38236_p1.read())))) {
        weights_96_96_1x1_V_4_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_4_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read())) {
        weights_96_96_1x1_V_5_address0 =  (sc_lv<10>) (tmp_2895_cast_fu_38240_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read())) {
        weights_96_96_1x1_V_5_address0 =  (sc_lv<10>) (tmp_2859_cast_fu_37487_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read())) {
        weights_96_96_1x1_V_5_address0 =  (sc_lv<10>) (tmp_2821_cast_fu_36741_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read())) {
        weights_96_96_1x1_V_5_address0 =  (sc_lv<10>) (tmp_2784_cast_fu_35980_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read())) {
        weights_96_96_1x1_V_5_address0 =  (sc_lv<10>) (tmp_2746_cast_fu_35234_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read())) {
        weights_96_96_1x1_V_5_address0 =  (sc_lv<10>) (tmp_2708_cast_fu_34477_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read())) {
        weights_96_96_1x1_V_5_address0 =  (sc_lv<10>) (tmp_2681_cast_fu_33854_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read())) {
        weights_96_96_1x1_V_5_address0 =  (sc_lv<10>) (tmp_2642_cast_fu_33097_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read())) {
        weights_96_96_1x1_V_5_address0 =  (sc_lv<10>) (tmp_2609_cast_fu_32340_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_5_address0 = grp_subconv_1x1_8p_p_fu_13043_weight_5_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_5_address0 = grp_subconv_1x1_4_p_fu_12952_weight_5_V_address0.read();
    } else {
        weights_96_96_1x1_V_5_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_5_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_5_address1 = grp_subconv_1x1_8p_p_fu_13043_weight_5_V_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_5_address1 = grp_subconv_1x1_4_p_fu_12952_weight_5_V_address1.read();
    } else {
        weights_96_96_1x1_V_5_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
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
        weights_96_96_1x1_V_5_ce0 = grp_subconv_1x1_8p_p_fu_13043_weight_5_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_5_ce0 = grp_subconv_1x1_4_p_fu_12952_weight_5_V_ce0.read();
    } else {
        weights_96_96_1x1_V_5_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_5_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_5_ce1 = grp_subconv_1x1_8p_p_fu_13043_weight_5_V_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_5_ce1 = grp_subconv_1x1_4_p_fu_12952_weight_5_V_ce1.read();
    } else {
        weights_96_96_1x1_V_5_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_5_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read()) && 
          esl_seteq<1,5,5>(ap_const_lv5_5, tmp_2266_fu_32336_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read()) && 
          esl_seteq<1,5,5>(ap_const_lv5_5, tmp_2279_fu_33093_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) && 
          esl_seteq<1,5,5>(ap_const_lv5_5, tmp_2292_fu_33850_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read()) && 
          esl_seteq<1,5,5>(ap_const_lv5_5, tmp_2303_fu_34473_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read()) && 
          esl_seteq<1,5,5>(ap_const_lv5_5, tmp_2316_fu_35230_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read()) && 
          esl_seteq<1,5,5>(ap_const_lv5_5, tmp_2329_fu_35976_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read()) && 
          esl_seteq<1,5,5>(ap_const_lv5_5, tmp_2342_fu_36737_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read()) && 
          esl_seteq<1,5,5>(ap_const_lv5_5, tmp_2355_fu_37483_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read()) && 
          esl_seteq<1,5,5>(ap_const_lv5_5, tmp_2368_fu_38236_p1.read())))) {
        weights_96_96_1x1_V_5_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_5_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read())) {
        weights_96_96_1x1_V_6_address0 =  (sc_lv<10>) (tmp_2895_cast_fu_38240_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read())) {
        weights_96_96_1x1_V_6_address0 =  (sc_lv<10>) (tmp_2859_cast_fu_37487_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read())) {
        weights_96_96_1x1_V_6_address0 =  (sc_lv<10>) (tmp_2821_cast_fu_36741_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read())) {
        weights_96_96_1x1_V_6_address0 =  (sc_lv<10>) (tmp_2784_cast_fu_35980_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read())) {
        weights_96_96_1x1_V_6_address0 =  (sc_lv<10>) (tmp_2746_cast_fu_35234_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read())) {
        weights_96_96_1x1_V_6_address0 =  (sc_lv<10>) (tmp_2708_cast_fu_34477_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read())) {
        weights_96_96_1x1_V_6_address0 =  (sc_lv<10>) (tmp_2681_cast_fu_33854_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read())) {
        weights_96_96_1x1_V_6_address0 =  (sc_lv<10>) (tmp_2642_cast_fu_33097_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read())) {
        weights_96_96_1x1_V_6_address0 =  (sc_lv<10>) (tmp_2609_cast_fu_32340_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_6_address0 = grp_subconv_1x1_8p_p_fu_13043_weight_6_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_6_address0 = grp_subconv_1x1_4_p_fu_12952_weight_6_V_address0.read();
    } else {
        weights_96_96_1x1_V_6_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_6_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_6_address1 = grp_subconv_1x1_8p_p_fu_13043_weight_6_V_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_6_address1 = grp_subconv_1x1_4_p_fu_12952_weight_6_V_address1.read();
    } else {
        weights_96_96_1x1_V_6_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
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
        weights_96_96_1x1_V_6_ce0 = grp_subconv_1x1_8p_p_fu_13043_weight_6_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_6_ce0 = grp_subconv_1x1_4_p_fu_12952_weight_6_V_ce0.read();
    } else {
        weights_96_96_1x1_V_6_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_6_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_6_ce1 = grp_subconv_1x1_8p_p_fu_13043_weight_6_V_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_6_ce1 = grp_subconv_1x1_4_p_fu_12952_weight_6_V_ce1.read();
    } else {
        weights_96_96_1x1_V_6_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_6_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read()) && 
          esl_seteq<1,5,5>(ap_const_lv5_6, tmp_2266_fu_32336_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read()) && 
          esl_seteq<1,5,5>(ap_const_lv5_6, tmp_2279_fu_33093_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) && 
          esl_seteq<1,5,5>(ap_const_lv5_6, tmp_2292_fu_33850_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read()) && 
          esl_seteq<1,5,5>(ap_const_lv5_6, tmp_2303_fu_34473_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read()) && 
          esl_seteq<1,5,5>(ap_const_lv5_6, tmp_2316_fu_35230_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read()) && 
          esl_seteq<1,5,5>(ap_const_lv5_6, tmp_2329_fu_35976_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read()) && 
          esl_seteq<1,5,5>(ap_const_lv5_6, tmp_2342_fu_36737_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read()) && 
          esl_seteq<1,5,5>(ap_const_lv5_6, tmp_2355_fu_37483_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read()) && 
          esl_seteq<1,5,5>(ap_const_lv5_6, tmp_2368_fu_38236_p1.read())))) {
        weights_96_96_1x1_V_6_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_6_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_7_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read())) {
        weights_96_96_1x1_V_7_address0 =  (sc_lv<10>) (tmp_2895_cast_fu_38240_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read())) {
        weights_96_96_1x1_V_7_address0 =  (sc_lv<10>) (tmp_2859_cast_fu_37487_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read())) {
        weights_96_96_1x1_V_7_address0 =  (sc_lv<10>) (tmp_2821_cast_fu_36741_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read())) {
        weights_96_96_1x1_V_7_address0 =  (sc_lv<10>) (tmp_2784_cast_fu_35980_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read())) {
        weights_96_96_1x1_V_7_address0 =  (sc_lv<10>) (tmp_2746_cast_fu_35234_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read())) {
        weights_96_96_1x1_V_7_address0 =  (sc_lv<10>) (tmp_2708_cast_fu_34477_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read())) {
        weights_96_96_1x1_V_7_address0 =  (sc_lv<10>) (tmp_2681_cast_fu_33854_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read())) {
        weights_96_96_1x1_V_7_address0 =  (sc_lv<10>) (tmp_2642_cast_fu_33097_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read())) {
        weights_96_96_1x1_V_7_address0 =  (sc_lv<10>) (tmp_2609_cast_fu_32340_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_7_address0 = grp_subconv_1x1_8p_p_fu_13043_weight_7_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_7_address0 = grp_subconv_1x1_4_p_fu_12952_weight_7_V_address0.read();
    } else {
        weights_96_96_1x1_V_7_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_7_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_7_address1 = grp_subconv_1x1_8p_p_fu_13043_weight_7_V_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_7_address1 = grp_subconv_1x1_4_p_fu_12952_weight_7_V_address1.read();
    } else {
        weights_96_96_1x1_V_7_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
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
        weights_96_96_1x1_V_7_ce0 = grp_subconv_1x1_8p_p_fu_13043_weight_7_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_7_ce0 = grp_subconv_1x1_4_p_fu_12952_weight_7_V_ce0.read();
    } else {
        weights_96_96_1x1_V_7_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_7_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_7_ce1 = grp_subconv_1x1_8p_p_fu_13043_weight_7_V_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_7_ce1 = grp_subconv_1x1_4_p_fu_12952_weight_7_V_ce1.read();
    } else {
        weights_96_96_1x1_V_7_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_7_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read()) && 
          esl_seteq<1,5,5>(ap_const_lv5_7, tmp_2266_fu_32336_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read()) && 
          esl_seteq<1,5,5>(ap_const_lv5_7, tmp_2279_fu_33093_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) && 
          esl_seteq<1,5,5>(ap_const_lv5_7, tmp_2292_fu_33850_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read()) && 
          esl_seteq<1,5,5>(ap_const_lv5_7, tmp_2303_fu_34473_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read()) && 
          esl_seteq<1,5,5>(ap_const_lv5_7, tmp_2316_fu_35230_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read()) && 
          esl_seteq<1,5,5>(ap_const_lv5_7, tmp_2329_fu_35976_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read()) && 
          esl_seteq<1,5,5>(ap_const_lv5_7, tmp_2342_fu_36737_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read()) && 
          esl_seteq<1,5,5>(ap_const_lv5_7, tmp_2355_fu_37483_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read()) && 
          esl_seteq<1,5,5>(ap_const_lv5_7, tmp_2368_fu_38236_p1.read())))) {
        weights_96_96_1x1_V_7_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_7_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_8_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read())) {
        weights_96_96_1x1_V_8_address0 =  (sc_lv<10>) (tmp_2895_cast_fu_38240_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read())) {
        weights_96_96_1x1_V_8_address0 =  (sc_lv<10>) (tmp_2859_cast_fu_37487_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read())) {
        weights_96_96_1x1_V_8_address0 =  (sc_lv<10>) (tmp_2821_cast_fu_36741_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read())) {
        weights_96_96_1x1_V_8_address0 =  (sc_lv<10>) (tmp_2784_cast_fu_35980_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read())) {
        weights_96_96_1x1_V_8_address0 =  (sc_lv<10>) (tmp_2746_cast_fu_35234_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read())) {
        weights_96_96_1x1_V_8_address0 =  (sc_lv<10>) (tmp_2708_cast_fu_34477_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read())) {
        weights_96_96_1x1_V_8_address0 =  (sc_lv<10>) (tmp_2681_cast_fu_33854_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read())) {
        weights_96_96_1x1_V_8_address0 =  (sc_lv<10>) (tmp_2642_cast_fu_33097_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read())) {
        weights_96_96_1x1_V_8_address0 =  (sc_lv<10>) (tmp_2609_cast_fu_32340_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_8_address0 = grp_subconv_1x1_8p_p_fu_13043_weight_8_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_8_address0 = grp_subconv_1x1_4_p_fu_12952_weight_8_V_address0.read();
    } else {
        weights_96_96_1x1_V_8_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_8_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_8_address1 = grp_subconv_1x1_8p_p_fu_13043_weight_8_V_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_8_address1 = grp_subconv_1x1_4_p_fu_12952_weight_8_V_address1.read();
    } else {
        weights_96_96_1x1_V_8_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
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
        weights_96_96_1x1_V_8_ce0 = grp_subconv_1x1_8p_p_fu_13043_weight_8_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_8_ce0 = grp_subconv_1x1_4_p_fu_12952_weight_8_V_ce0.read();
    } else {
        weights_96_96_1x1_V_8_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_8_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_8_ce1 = grp_subconv_1x1_8p_p_fu_13043_weight_8_V_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_8_ce1 = grp_subconv_1x1_4_p_fu_12952_weight_8_V_ce1.read();
    } else {
        weights_96_96_1x1_V_8_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_8_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read()) && 
          esl_seteq<1,5,5>(ap_const_lv5_8, tmp_2266_fu_32336_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read()) && 
          esl_seteq<1,5,5>(ap_const_lv5_8, tmp_2279_fu_33093_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) && 
          esl_seteq<1,5,5>(ap_const_lv5_8, tmp_2292_fu_33850_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read()) && 
          esl_seteq<1,5,5>(ap_const_lv5_8, tmp_2303_fu_34473_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read()) && 
          esl_seteq<1,5,5>(ap_const_lv5_8, tmp_2316_fu_35230_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read()) && 
          esl_seteq<1,5,5>(ap_const_lv5_8, tmp_2329_fu_35976_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read()) && 
          esl_seteq<1,5,5>(ap_const_lv5_8, tmp_2342_fu_36737_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read()) && 
          esl_seteq<1,5,5>(ap_const_lv5_8, tmp_2355_fu_37483_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read()) && 
          esl_seteq<1,5,5>(ap_const_lv5_8, tmp_2368_fu_38236_p1.read())))) {
        weights_96_96_1x1_V_8_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_8_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_9_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read())) {
        weights_96_96_1x1_V_9_address0 =  (sc_lv<10>) (tmp_2895_cast_fu_38240_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read())) {
        weights_96_96_1x1_V_9_address0 =  (sc_lv<10>) (tmp_2859_cast_fu_37487_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read())) {
        weights_96_96_1x1_V_9_address0 =  (sc_lv<10>) (tmp_2821_cast_fu_36741_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read())) {
        weights_96_96_1x1_V_9_address0 =  (sc_lv<10>) (tmp_2784_cast_fu_35980_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read())) {
        weights_96_96_1x1_V_9_address0 =  (sc_lv<10>) (tmp_2746_cast_fu_35234_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read())) {
        weights_96_96_1x1_V_9_address0 =  (sc_lv<10>) (tmp_2708_cast_fu_34477_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read())) {
        weights_96_96_1x1_V_9_address0 =  (sc_lv<10>) (tmp_2681_cast_fu_33854_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read())) {
        weights_96_96_1x1_V_9_address0 =  (sc_lv<10>) (tmp_2642_cast_fu_33097_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read())) {
        weights_96_96_1x1_V_9_address0 =  (sc_lv<10>) (tmp_2609_cast_fu_32340_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_9_address0 = grp_subconv_1x1_8p_p_fu_13043_weight_9_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_9_address0 = grp_subconv_1x1_4_p_fu_12952_weight_9_V_address0.read();
    } else {
        weights_96_96_1x1_V_9_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_9_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_9_address1 = grp_subconv_1x1_8p_p_fu_13043_weight_9_V_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_9_address1 = grp_subconv_1x1_4_p_fu_12952_weight_9_V_address1.read();
    } else {
        weights_96_96_1x1_V_9_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
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
        weights_96_96_1x1_V_9_ce0 = grp_subconv_1x1_8p_p_fu_13043_weight_9_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_9_ce0 = grp_subconv_1x1_4_p_fu_12952_weight_9_V_ce0.read();
    } else {
        weights_96_96_1x1_V_9_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_9_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_9_ce1 = grp_subconv_1x1_8p_p_fu_13043_weight_9_V_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_9_ce1 = grp_subconv_1x1_4_p_fu_12952_weight_9_V_ce1.read();
    } else {
        weights_96_96_1x1_V_9_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_9_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read()) && 
          esl_seteq<1,5,5>(ap_const_lv5_9, tmp_2266_fu_32336_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read()) && 
          esl_seteq<1,5,5>(ap_const_lv5_9, tmp_2279_fu_33093_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) && 
          esl_seteq<1,5,5>(ap_const_lv5_9, tmp_2292_fu_33850_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read()) && 
          esl_seteq<1,5,5>(ap_const_lv5_9, tmp_2303_fu_34473_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read()) && 
          esl_seteq<1,5,5>(ap_const_lv5_9, tmp_2316_fu_35230_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read()) && 
          esl_seteq<1,5,5>(ap_const_lv5_9, tmp_2329_fu_35976_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read()) && 
          esl_seteq<1,5,5>(ap_const_lv5_9, tmp_2342_fu_36737_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read()) && 
          esl_seteq<1,5,5>(ap_const_lv5_9, tmp_2355_fu_37483_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read()) && 
          esl_seteq<1,5,5>(ap_const_lv5_9, tmp_2368_fu_38236_p1.read())))) {
        weights_96_96_1x1_V_9_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_9_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_s_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read())) {
        weights_96_96_1x1_V_s_address0 =  (sc_lv<10>) (tmp_2895_cast_fu_38240_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read())) {
        weights_96_96_1x1_V_s_address0 =  (sc_lv<10>) (tmp_2859_cast_fu_37487_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read())) {
        weights_96_96_1x1_V_s_address0 =  (sc_lv<10>) (tmp_2821_cast_fu_36741_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read())) {
        weights_96_96_1x1_V_s_address0 =  (sc_lv<10>) (tmp_2784_cast_fu_35980_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read())) {
        weights_96_96_1x1_V_s_address0 =  (sc_lv<10>) (tmp_2746_cast_fu_35234_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read())) {
        weights_96_96_1x1_V_s_address0 =  (sc_lv<10>) (tmp_2708_cast_fu_34477_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read())) {
        weights_96_96_1x1_V_s_address0 =  (sc_lv<10>) (tmp_2681_cast_fu_33854_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read())) {
        weights_96_96_1x1_V_s_address0 =  (sc_lv<10>) (tmp_2642_cast_fu_33097_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read())) {
        weights_96_96_1x1_V_s_address0 =  (sc_lv<10>) (tmp_2609_cast_fu_32340_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_s_address0 = grp_subconv_1x1_8p_p_fu_13043_weight_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_s_address0 = grp_subconv_1x1_4_p_fu_12952_weight_0_V_address0.read();
    } else {
        weights_96_96_1x1_V_s_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_s_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_s_address1 = grp_subconv_1x1_8p_p_fu_13043_weight_0_V_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_s_address1 = grp_subconv_1x1_4_p_fu_12952_weight_0_V_address1.read();
    } else {
        weights_96_96_1x1_V_s_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
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
        weights_96_96_1x1_V_s_ce0 = grp_subconv_1x1_8p_p_fu_13043_weight_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_s_ce0 = grp_subconv_1x1_4_p_fu_12952_weight_0_V_ce0.read();
    } else {
        weights_96_96_1x1_V_s_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_s_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_s_ce1 = grp_subconv_1x1_8p_p_fu_13043_weight_0_V_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_s_ce1 = grp_subconv_1x1_4_p_fu_12952_weight_0_V_ce1.read();
    } else {
        weights_96_96_1x1_V_s_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_s_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read()) && 
          esl_seteq<1,5,5>(ap_const_lv5_0, tmp_2266_fu_32336_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read()) && 
          esl_seteq<1,5,5>(ap_const_lv5_0, tmp_2279_fu_33093_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) && 
          esl_seteq<1,5,5>(ap_const_lv5_0, tmp_2292_fu_33850_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read()) && 
          esl_seteq<1,5,5>(ap_const_lv5_0, tmp_2303_fu_34473_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read()) && 
          esl_seteq<1,5,5>(ap_const_lv5_0, tmp_2316_fu_35230_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read()) && 
          esl_seteq<1,5,5>(ap_const_lv5_0, tmp_2329_fu_35976_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read()) && 
          esl_seteq<1,5,5>(ap_const_lv5_0, tmp_2342_fu_36737_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read()) && 
          esl_seteq<1,5,5>(ap_const_lv5_0, tmp_2355_fu_37483_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read()) && 
          esl_seteq<1,5,5>(ap_const_lv5_0, tmp_2368_fu_38236_p1.read())))) {
        weights_96_96_1x1_V_s_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_s_we0 = ap_const_logic_0;
    }
}

}

