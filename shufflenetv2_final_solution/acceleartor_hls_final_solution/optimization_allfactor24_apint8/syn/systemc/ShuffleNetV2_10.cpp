#include "ShuffleNetV2.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void ShuffleNetV2::thread_tmp_69_cast_cast_fu_20181_p1() {
    tmp_69_cast_cast_fu_20181_p1 = esl_sext<10,7>(tmp_64_fu_20176_p2.read());
}

void ShuffleNetV2::thread_tmp_69_cast_fu_20606_p1() {
    tmp_69_cast_fu_20606_p1 = esl_sext<10,9>(tmp_69_reg_43319.read());
}

void ShuffleNetV2::thread_tmp_69_fu_20546_p2() {
    tmp_69_fu_20546_p2 = (!tmp_80_cast_cast_fu_20542_p1.read().is_01() || !tmp_65_cast_cast_reg_43288.read().is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_80_cast_cast_fu_20542_p1.read()) + sc_biguint<9>(tmp_65_cast_cast_reg_43288.read()));
}

void ShuffleNetV2::thread_tmp_700_fu_15856_p2() {
    tmp_700_fu_15856_p2 = (!bias_V_read_reg_40400.read().is_01() || !ap_const_lv32_30.is_01())? sc_lv<32>(): (sc_biguint<32>(bias_V_read_reg_40400.read()) + sc_biguint<32>(ap_const_lv32_30));
}

void ShuffleNetV2::thread_tmp_701_fu_15880_p3() {
    tmp_701_fu_15880_p3 = esl_concat<9,2>(tmp_638_fu_15871_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_702_fu_15910_p2() {
    tmp_702_fu_15910_p2 = (!tmp_639_fu_15892_p2.read().is_01() || !shuffle_conv_3x3_V_r_reg_40515.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_639_fu_15892_p2.read()) + sc_biguint<32>(shuffle_conv_3x3_V_r_reg_40515.read()));
}

void ShuffleNetV2::thread_tmp_703_fu_16026_p2() {
    tmp_703_fu_16026_p2 = (!bias_V_read_reg_40400.read().is_01() || !ap_const_lv32_48.is_01())? sc_lv<32>(): (sc_biguint<32>(bias_V_read_reg_40400.read()) + sc_biguint<32>(ap_const_lv32_48));
}

void ShuffleNetV2::thread_tmp_704_fu_16011_p1() {
    tmp_704_fu_16011_p1 = esl_sext<32,12>(tmp_643_fu_16005_p2.read());
}

void ShuffleNetV2::thread_tmp_705_fu_16015_p2() {
    tmp_705_fu_16015_p2 = (!shuffle_conv_1x1_V_r_reg_40474.read().is_01() || !tmp_704_fu_16011_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(shuffle_conv_1x1_V_r_reg_40474.read()) + sc_bigint<32>(tmp_704_fu_16011_p1.read()));
}

void ShuffleNetV2::thread_tmp_707_fu_16176_p3() {
    tmp_707_fu_16176_p3 = esl_concat<9,2>(tmp_648_fu_16167_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_708_fu_16199_p2() {
    tmp_708_fu_16199_p2 = (!ap_const_lv9_2.is_01())? sc_lv<9>(): tmp_650_fu_16194_p2.read() << (unsigned short)ap_const_lv9_2.to_uint();
}

void ShuffleNetV2::thread_tmp_709_fu_16276_p3() {
    tmp_709_fu_16276_p3 = esl_concat<1,5>(ap_const_lv1_1, tmp_706_reg_9906.read());
}

void ShuffleNetV2::thread_tmp_70_fu_20575_p2() {
    tmp_70_fu_20575_p2 = (!p_shl32_cast_fu_20559_p1.read().is_01() || !p_shl33_cast_fu_20571_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl32_cast_fu_20559_p1.read()) - sc_biguint<8>(p_shl33_cast_fu_20571_p1.read()));
}

void ShuffleNetV2::thread_tmp_710_fu_16284_p1() {
    tmp_710_fu_16284_p1 = esl_sext<7,6>(tmp_709_fu_16276_p3.read());
}

void ShuffleNetV2::thread_tmp_711_fu_16288_p1() {
    tmp_711_fu_16288_p1 = esl_zext<32,7>(tmp_710_fu_16284_p1.read());
}

void ShuffleNetV2::thread_tmp_712_fu_16292_p2() {
    tmp_712_fu_16292_p2 = (!tmp_711_fu_16288_p1.read().is_01() || !bias_V_read_reg_40400.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_711_fu_16288_p1.read()) + sc_biguint<32>(bias_V_read_reg_40400.read()));
}

void ShuffleNetV2::thread_tmp_713_fu_16223_p2() {
    tmp_713_fu_16223_p2 = (!tmp_649_fu_16188_p2.read().is_01() || !shuffle_conv_3x3_V_r_reg_40515.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_649_fu_16188_p2.read()) + sc_biguint<32>(shuffle_conv_3x3_V_r_reg_40515.read()));
}

void ShuffleNetV2::thread_tmp_714_fu_16370_p2() {
    tmp_714_fu_16370_p2 = (!bias_V_read_reg_40400.read().is_01() || !ap_const_lv32_78.is_01())? sc_lv<32>(): (sc_biguint<32>(bias_V_read_reg_40400.read()) + sc_biguint<32>(ap_const_lv32_78));
}

void ShuffleNetV2::thread_tmp_715_fu_16355_p1() {
    tmp_715_fu_16355_p1 = esl_sext<32,13>(tmp_655_fu_16349_p2.read());
}

void ShuffleNetV2::thread_tmp_716_fu_16359_p2() {
    tmp_716_fu_16359_p2 = (!shuffle_conv_1x1_V_r_reg_40474.read().is_01() || !tmp_715_fu_16355_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(shuffle_conv_1x1_V_r_reg_40474.read()) + sc_bigint<32>(tmp_715_fu_16355_p1.read()));
}

void ShuffleNetV2::thread_tmp_717_fu_16707_p2() {
    tmp_717_fu_16707_p2 = (!bias_V_read_reg_40400.read().is_01() || !ap_const_lv32_90.is_01())? sc_lv<32>(): (sc_biguint<32>(bias_V_read_reg_40400.read()) + sc_biguint<32>(ap_const_lv32_90));
}

void ShuffleNetV2::thread_tmp_718_fu_16692_p1() {
    tmp_718_fu_16692_p1 = esl_sext<32,13>(tmp_664_fu_16686_p2.read());
}

void ShuffleNetV2::thread_tmp_719_fu_16696_p2() {
    tmp_719_fu_16696_p2 = (!shuffle_conv_1x1_V_r_reg_40474.read().is_01() || !tmp_718_fu_16692_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(shuffle_conv_1x1_V_r_reg_40474.read()) + sc_bigint<32>(tmp_718_fu_16692_p1.read()));
}

void ShuffleNetV2::thread_tmp_71_cast_fu_20805_p1() {
    tmp_71_cast_fu_20805_p1 = esl_sext<10,7>(tmp_66_fu_20799_p2.read());
}

void ShuffleNetV2::thread_tmp_71_fu_21098_p2() {
    tmp_71_fu_21098_p2 = (!p_shl28_cast_fu_21082_p1.read().is_01() || !p_shl29_cast_fu_21094_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl28_cast_fu_21082_p1.read()) - sc_biguint<7>(p_shl29_cast_fu_21094_p1.read()));
}

void ShuffleNetV2::thread_tmp_720_fu_16552_p3() {
    tmp_720_fu_16552_p3 = esl_concat<11,1>(tmp_665_fu_16539_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_721_fu_16583_p3() {
    tmp_721_fu_16583_p3 = esl_concat<10,1>(tmp_667_fu_16570_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_722_fu_16844_p2() {
    tmp_722_fu_16844_p2 = (!bias_V_read_reg_40400.read().is_01() || !ap_const_lv32_A8.is_01())? sc_lv<32>(): (sc_biguint<32>(bias_V_read_reg_40400.read()) + sc_biguint<32>(ap_const_lv32_A8));
}

void ShuffleNetV2::thread_tmp_723_fu_16872_p3() {
    tmp_723_fu_16872_p3 = esl_concat<10,2>(tmp_675_fu_16863_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_724_fu_16895_p2() {
    tmp_724_fu_16895_p2 = (!ap_const_lv9_2.is_01())? sc_lv<9>(): tmp_677_fu_16890_p2.read() << (unsigned short)ap_const_lv9_2.to_uint();
}

void ShuffleNetV2::thread_tmp_725_fu_16919_p2() {
    tmp_725_fu_16919_p2 = (!tmp_676_fu_16884_p2.read().is_01() || !shuffle_conv_3x3_V_r_reg_40515.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_676_fu_16884_p2.read()) + sc_biguint<32>(shuffle_conv_3x3_V_r_reg_40515.read()));
}

void ShuffleNetV2::thread_tmp_726_fu_17026_p1() {
    tmp_726_fu_17026_p1 = esl_sext<32,13>(tmp_684_fu_17020_p2.read());
}

void ShuffleNetV2::thread_tmp_727_fu_17030_p2() {
    tmp_727_fu_17030_p2 = (!shuffle_conv_1x1_V_r_reg_40474.read().is_01() || !tmp_726_fu_17026_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(shuffle_conv_1x1_V_r_reg_40474.read()) + sc_bigint<32>(tmp_726_fu_17026_p1.read()));
}

void ShuffleNetV2::thread_tmp_729_fu_17097_p3() {
    tmp_729_fu_17097_p3 = esl_concat<2,5>(ap_const_lv2_2, tmp_728_reg_10085.read());
}

void ShuffleNetV2::thread_tmp_72_cast_fu_20839_p1() {
    tmp_72_cast_fu_20839_p1 = esl_sext<32,7>(tmp_67_reg_43381.read());
}

void ShuffleNetV2::thread_tmp_72_fu_21138_p2() {
    tmp_72_fu_21138_p2 = (!tmp_71_reg_43464.read().is_01() || !ci40_cast_fu_21118_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_71_reg_43464.read()) + sc_biguint<7>(ci40_cast_fu_21118_p1.read()));
}

void ShuffleNetV2::thread_tmp_730_fu_17105_p1() {
    tmp_730_fu_17105_p1 = esl_sext<8,7>(tmp_729_fu_17097_p3.read());
}

void ShuffleNetV2::thread_tmp_731_fu_17109_p1() {
    tmp_731_fu_17109_p1 = esl_zext<32,8>(tmp_730_fu_17105_p1.read());
}

void ShuffleNetV2::thread_tmp_732_fu_17113_p2() {
    tmp_732_fu_17113_p2 = (!tmp_731_fu_17109_p1.read().is_01() || !bias_V_read_reg_40400.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_731_fu_17109_p1.read()) + sc_biguint<32>(bias_V_read_reg_40400.read()));
}

void ShuffleNetV2::thread_tmp_733_fu_17307_p3() {
    tmp_733_fu_17307_p3 = esl_concat<6,1>(tmp_30_fu_17289_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_734_fu_17319_p2() {
    tmp_734_fu_17319_p2 = (!p_shl314_cast_fu_17315_p1.read().is_01() || !p_shl313_cast_fu_17303_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl314_cast_fu_17315_p1.read()) + sc_biguint<11>(p_shl313_cast_fu_17303_p1.read()));
}

void ShuffleNetV2::thread_tmp_735_fu_17182_p2() {
    tmp_735_fu_17182_p2 = (!h_48_cast_cast_fu_17178_p1.read().is_01() || !tmp_687_reg_41728.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h_48_cast_cast_fu_17178_p1.read()) + sc_biguint<10>(tmp_687_reg_41728.read()));
}

void ShuffleNetV2::thread_tmp_736_fu_17187_p3() {
    tmp_736_fu_17187_p3 = esl_concat<10,4>(tmp_735_fu_17182_p2.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_737_fu_17199_p3() {
    tmp_737_fu_17199_p3 = esl_concat<10,1>(tmp_735_fu_17182_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_738_fu_17211_p2() {
    tmp_738_fu_17211_p2 = (!p_shl309_cast_fu_17195_p1.read().is_01() || !p_shl310_cast_fu_17207_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl309_cast_fu_17195_p1.read()) + sc_biguint<15>(p_shl310_cast_fu_17207_p1.read()));
}

void ShuffleNetV2::thread_tmp_739_fu_17513_p2() {
    tmp_739_fu_17513_p2 = (!bias_V_read_reg_40400.read().is_01() || !ap_const_lv32_D8.is_01())? sc_lv<32>(): (sc_biguint<32>(bias_V_read_reg_40400.read()) + sc_biguint<32>(ap_const_lv32_D8));
}

void ShuffleNetV2::thread_tmp_73_fu_21446_p2() {
    tmp_73_fu_21446_p2 = (!p_shl34_cast_fu_21430_p1.read().is_01() || !p_shl35_cast_fu_21442_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl34_cast_fu_21430_p1.read()) - sc_biguint<7>(p_shl35_cast_fu_21442_p1.read()));
}

void ShuffleNetV2::thread_tmp_740_fu_17468_p3() {
    tmp_740_fu_17468_p3 = esl_concat<8,5>(sum2_fu_17462_p2.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_741_fu_17480_p3() {
    tmp_741_fu_17480_p3 = esl_concat<8,3>(sum2_fu_17462_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_742_fu_17492_p2() {
    tmp_742_fu_17492_p2 = (!p_shl319_cast_fu_17476_p1.read().is_01() || !p_shl320_cast_fu_17488_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl319_cast_fu_17476_p1.read()) - sc_biguint<14>(p_shl320_cast_fu_17488_p1.read()));
}

void ShuffleNetV2::thread_tmp_743_fu_17498_p1() {
    tmp_743_fu_17498_p1 = esl_sext<32,14>(tmp_742_fu_17492_p2.read());
}

void ShuffleNetV2::thread_tmp_744_fu_17502_p2() {
    tmp_744_fu_17502_p2 = (!shuffle_conv_1x1_V_r_reg_40474.read().is_01() || !tmp_743_fu_17498_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(shuffle_conv_1x1_V_r_reg_40474.read()) + sc_bigint<32>(tmp_743_fu_17498_p1.read()));
}

void ShuffleNetV2::thread_tmp_745_fu_17345_p2() {
    tmp_745_fu_17345_p2 = (!h_49_cast_cast_fu_17341_p1.read().is_01() || !tmp_734_reg_41785.read().is_01())? sc_lv<11>(): (sc_biguint<11>(h_49_cast_cast_fu_17341_p1.read()) + sc_biguint<11>(tmp_734_reg_41785.read()));
}

void ShuffleNetV2::thread_tmp_746_fu_17358_p3() {
    tmp_746_fu_17358_p3 = esl_concat<11,1>(tmp_745_fu_17345_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_747_fu_17370_p2() {
    tmp_747_fu_17370_p2 = (!p_shl317_cast_fu_17350_p3.read().is_01() || !p_shl318_cast_fu_17366_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl317_cast_fu_17350_p3.read()) + sc_biguint<15>(p_shl318_cast_fu_17366_p1.read()));
}

void ShuffleNetV2::thread_tmp_748_fu_17376_p2() {
    tmp_748_fu_17376_p2 = (!h_49_cast_cast1_fu_17337_p1.read().is_01() || !tmp_690_reg_41772.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h_49_cast_cast1_fu_17337_p1.read()) + sc_biguint<10>(tmp_690_reg_41772.read()));
}

void ShuffleNetV2::thread_tmp_749_fu_17389_p3() {
    tmp_749_fu_17389_p3 = esl_concat<10,1>(tmp_748_fu_17376_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_74_cast_cast_fu_20492_p1() {
    tmp_74_cast_cast_fu_20492_p1 = esl_sext<8,7>(tmp_62_fu_20487_p2.read());
}

void ShuffleNetV2::thread_tmp_74_fu_21456_p2() {
    tmp_74_fu_21456_p2 = (!tmp_73_fu_21446_p2.read().is_01() || !i56_cast1_reg_43541.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_73_fu_21446_p2.read()) + sc_biguint<7>(i56_cast1_reg_43541.read()));
}

void ShuffleNetV2::thread_tmp_750_fu_17401_p2() {
    tmp_750_fu_17401_p2 = (!p_shl315_cast_fu_17381_p3.read().is_01() || !p_shl316_cast_fu_17397_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl315_cast_fu_17381_p3.read()) + sc_biguint<14>(p_shl316_cast_fu_17397_p1.read()));
}

void ShuffleNetV2::thread_tmp_751_fu_17233_p2() {
    tmp_751_fu_17233_p2 = (!tmp_738_reg_41749.read().is_01() || !w_49_cast_cast_fu_17229_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_738_reg_41749.read()) + sc_biguint<15>(w_49_cast_cast_fu_17229_p1.read()));
}

void ShuffleNetV2::thread_tmp_752_fu_17427_p2() {
    tmp_752_fu_17427_p2 = (!tmp_747_reg_41798.read().is_01() || !w_50_cast_cast_fu_17423_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_747_reg_41798.read()) + sc_biguint<15>(w_50_cast_cast_fu_17423_p1.read()));
}

void ShuffleNetV2::thread_tmp_753_fu_17437_p2() {
    tmp_753_fu_17437_p2 = (!tmp_750_reg_41803.read().is_01() || !w_50_cast_cast1_fu_17419_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_750_reg_41803.read()) + sc_biguint<14>(w_50_cast_cast1_fu_17419_p1.read()));
}

void ShuffleNetV2::thread_tmp_754_fu_17588_p3() {
    tmp_754_fu_17588_p3 = esl_concat<5,2>(co41_reg_10196.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_755_fu_17600_p2() {
    tmp_755_fu_17600_p2 = (!p_shl321_cast_fu_17596_p1.read().is_01() || !co41_cast1_cast_fu_17584_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl321_cast_fu_17596_p1.read()) - sc_biguint<8>(co41_cast1_cast_fu_17584_p1.read()));
}

void ShuffleNetV2::thread_tmp_756_fu_17650_p2() {
    tmp_756_fu_17650_p2 = (!bias_V_read_reg_40400.read().is_01() || !ap_const_lv32_F0.is_01())? sc_lv<32>(): (sc_biguint<32>(bias_V_read_reg_40400.read()) + sc_biguint<32>(ap_const_lv32_F0));
}

void ShuffleNetV2::thread_tmp_757_fu_17632_p3() {
    tmp_757_fu_17632_p3 = esl_concat<7,2>(sum3_fu_17622_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_758_fu_17644_p2() {
    tmp_758_fu_17644_p2 = (!p_shl322_cast_fu_17640_p1.read().is_01() || !sum13_cast_cast_fu_17628_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl322_cast_fu_17640_p1.read()) - sc_biguint<10>(sum13_cast_cast_fu_17628_p1.read()));
}

void ShuffleNetV2::thread_tmp_759_fu_17669_p2() {
    tmp_759_fu_17669_p2 = (!w42_cast_cast_fu_17665_p1.read().is_01() || !tmp_758_reg_42000.read().is_01())? sc_lv<10>(): (sc_biguint<10>(w42_cast_cast_fu_17665_p1.read()) + sc_biguint<10>(tmp_758_reg_42000.read()));
}

void ShuffleNetV2::thread_tmp_75_fu_21187_p2() {
    tmp_75_fu_21187_p2 = (!p_shl36_cast_fu_21171_p1.read().is_01() || !p_shl37_cast_fu_21183_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl36_cast_fu_21171_p1.read()) - sc_biguint<7>(p_shl37_cast_fu_21183_p1.read()));
}

void ShuffleNetV2::thread_tmp_760_fu_17678_p3() {
    tmp_760_fu_17678_p3 = esl_concat<10,2>(tmp_759_fu_17669_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_761_fu_17690_p2() {
    tmp_761_fu_17690_p2 = (!p_shl208_fu_17686_p1.read().is_01() || !tmp_905_cast_fu_17674_p1.read().is_01())? sc_lv<32>(): (sc_bigint<32>(p_shl208_fu_17686_p1.read()) - sc_bigint<32>(tmp_905_cast_fu_17674_p1.read()));
}

void ShuffleNetV2::thread_tmp_762_fu_17696_p2() {
    tmp_762_fu_17696_p2 = (!w42_cast_cast1_fu_17661_p1.read().is_01() || !tmp_902_cast_reg_41987.read().is_01())? sc_lv<9>(): (sc_biguint<9>(w42_cast_cast1_fu_17661_p1.read()) + sc_bigint<9>(tmp_902_cast_reg_41987.read()));
}

void ShuffleNetV2::thread_tmp_763_fu_17701_p2() {
    tmp_763_fu_17701_p2 = (!ap_const_lv9_2.is_01())? sc_lv<9>(): tmp_762_fu_17696_p2.read() << (unsigned short)ap_const_lv9_2.to_uint();
}

void ShuffleNetV2::thread_tmp_764_fu_17707_p2() {
    tmp_764_fu_17707_p2 = (!tmp_763_fu_17701_p2.read().is_01() || !tmp_762_fu_17696_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_763_fu_17701_p2.read()) - sc_biguint<9>(tmp_762_fu_17696_p2.read()));
}

void ShuffleNetV2::thread_tmp_765_fu_17725_p2() {
    tmp_765_fu_17725_p2 = (!tmp_761_fu_17690_p2.read().is_01() || !shuffle_conv_3x3_V_r_reg_40515.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_761_fu_17690_p2.read()) + sc_biguint<32>(shuffle_conv_3x3_V_r_reg_40515.read()));
}

void ShuffleNetV2::thread_tmp_766_fu_17740_p2() {
    tmp_766_fu_17740_p2 = (!tmp_764_reg_42011.read().is_01() || !h43_cast_cast_fu_17736_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_764_reg_42011.read()) + sc_biguint<9>(h43_cast_cast_fu_17736_p1.read()));
}

void ShuffleNetV2::thread_tmp_767_fu_17845_p2() {
    tmp_767_fu_17845_p2 = (!bias_V_read_reg_40400.read().is_01() || !ap_const_lv32_108.is_01())? sc_lv<32>(): (sc_biguint<32>(bias_V_read_reg_40400.read()) + sc_biguint<32>(ap_const_lv32_108));
}

void ShuffleNetV2::thread_tmp_768_fu_17800_p3() {
    tmp_768_fu_17800_p3 = esl_concat<8,5>(sum4_fu_17794_p2.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_769_fu_17812_p3() {
    tmp_769_fu_17812_p3 = esl_concat<8,3>(sum4_fu_17794_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_76_cast_fu_21253_p1() {
    tmp_76_cast_fu_21253_p1 = esl_sext<10,9>(tmp_76_reg_43500.read());
}

void ShuffleNetV2::thread_tmp_76_fu_21197_p2() {
    tmp_76_fu_21197_p2 = (!tmp_88_cast_cast_fu_21193_p1.read().is_01() || !tmp_79_cast_cast_reg_43469.read().is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_88_cast_cast_fu_21193_p1.read()) + sc_biguint<9>(tmp_79_cast_cast_reg_43469.read()));
}

void ShuffleNetV2::thread_tmp_770_fu_17824_p2() {
    tmp_770_fu_17824_p2 = (!p_shl325_cast_fu_17808_p1.read().is_01() || !p_shl326_cast_fu_17820_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl325_cast_fu_17808_p1.read()) - sc_biguint<14>(p_shl326_cast_fu_17820_p1.read()));
}

void ShuffleNetV2::thread_tmp_771_fu_17830_p1() {
    tmp_771_fu_17830_p1 = esl_sext<32,14>(tmp_770_fu_17824_p2.read());
}

void ShuffleNetV2::thread_tmp_772_fu_17834_p2() {
    tmp_772_fu_17834_p2 = (!shuffle_conv_1x1_V_r_reg_40474.read().is_01() || !tmp_771_fu_17830_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(shuffle_conv_1x1_V_r_reg_40474.read()) + sc_bigint<32>(tmp_771_fu_17830_p1.read()));
}

void ShuffleNetV2::thread_tmp_773_fu_17912_p3() {
    tmp_773_fu_17912_p3 = esl_concat<5,4>(co46_reg_10274.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_774_fu_17924_p3() {
    tmp_774_fu_17924_p3 = esl_concat<5,1>(co46_reg_10274.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_775_fu_17936_p2() {
    tmp_775_fu_17936_p2 = (!p_shl328_cast_fu_17932_p1.read().is_01() || !p_shl327_cast_fu_17920_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl328_cast_fu_17932_p1.read()) + sc_biguint<10>(p_shl327_cast_fu_17920_p1.read()));
}

void ShuffleNetV2::thread_tmp_776_fu_18031_p3() {
    tmp_776_fu_18031_p3 = esl_concat<5,4>(co47_reg_10307.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_777_fu_18043_p3() {
    tmp_777_fu_18043_p3 = esl_concat<5,1>(co47_reg_10307.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_778_fu_18055_p2() {
    tmp_778_fu_18055_p2 = (!p_shl332_cast_fu_18051_p1.read().is_01() || !p_shl331_cast_fu_18039_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl332_cast_fu_18051_p1.read()) + sc_biguint<10>(p_shl331_cast_fu_18039_p1.read()));
}

void ShuffleNetV2::thread_tmp_779_fu_18083_p3() {
    tmp_779_fu_18083_p3 = esl_concat<6,4>(tmp_31_fu_18077_p2.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_77_fu_21226_p2() {
    tmp_77_fu_21226_p2 = (!p_shl38_cast_fu_21210_p1.read().is_01() || !p_shl39_cast_fu_21222_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl38_cast_fu_21210_p1.read()) - sc_biguint<8>(p_shl39_cast_fu_21222_p1.read()));
}

void ShuffleNetV2::thread_tmp_780_fu_18095_p3() {
    tmp_780_fu_18095_p3 = esl_concat<6,1>(tmp_31_fu_18077_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_781_fu_18107_p2() {
    tmp_781_fu_18107_p2 = (!p_shl334_cast_fu_18103_p1.read().is_01() || !p_shl333_cast_fu_18091_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl334_cast_fu_18103_p1.read()) + sc_biguint<11>(p_shl333_cast_fu_18091_p1.read()));
}

void ShuffleNetV2::thread_tmp_782_fu_17970_p2() {
    tmp_782_fu_17970_p2 = (!h_51_cast_cast_fu_17966_p1.read().is_01() || !tmp_775_reg_42217.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h_51_cast_cast_fu_17966_p1.read()) + sc_biguint<10>(tmp_775_reg_42217.read()));
}

void ShuffleNetV2::thread_tmp_783_fu_17975_p3() {
    tmp_783_fu_17975_p3 = esl_concat<10,4>(tmp_782_fu_17970_p2.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_784_fu_17987_p3() {
    tmp_784_fu_17987_p3 = esl_concat<10,1>(tmp_782_fu_17970_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_785_fu_17999_p2() {
    tmp_785_fu_17999_p2 = (!p_shl329_cast_fu_17983_p1.read().is_01() || !p_shl330_cast_fu_17995_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl329_cast_fu_17983_p1.read()) + sc_biguint<15>(p_shl330_cast_fu_17995_p1.read()));
}

void ShuffleNetV2::thread_tmp_786_fu_18256_p3() {
    tmp_786_fu_18256_p3 = esl_concat<8,5>(sum7_fu_18250_p2.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_787_fu_18268_p3() {
    tmp_787_fu_18268_p3 = esl_concat<8,3>(sum7_fu_18250_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_788_fu_18280_p2() {
    tmp_788_fu_18280_p2 = (!p_shl339_cast_fu_18264_p1.read().is_01() || !p_shl340_cast_fu_18276_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl339_cast_fu_18264_p1.read()) - sc_biguint<14>(p_shl340_cast_fu_18276_p1.read()));
}

void ShuffleNetV2::thread_tmp_789_fu_18286_p1() {
    tmp_789_fu_18286_p1 = esl_sext<32,14>(tmp_788_fu_18280_p2.read());
}

void ShuffleNetV2::thread_tmp_78_fu_21879_p2() {
    tmp_78_fu_21879_p2 = (!p_shl42_cast_fu_21863_p1.read().is_01() || !p_shl43_cast_fu_21875_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl42_cast_fu_21863_p1.read()) - sc_biguint<7>(p_shl43_cast_fu_21875_p1.read()));
}

void ShuffleNetV2::thread_tmp_790_fu_18290_p2() {
    tmp_790_fu_18290_p2 = (!shuffle_conv_1x1_V_r_reg_40474.read().is_01() || !tmp_789_fu_18286_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(shuffle_conv_1x1_V_r_reg_40474.read()) + sc_bigint<32>(tmp_789_fu_18286_p1.read()));
}

void ShuffleNetV2::thread_tmp_791_fu_18133_p2() {
    tmp_791_fu_18133_p2 = (!h_53_cast_cast_fu_18129_p1.read().is_01() || !tmp_781_reg_42274.read().is_01())? sc_lv<11>(): (sc_biguint<11>(h_53_cast_cast_fu_18129_p1.read()) + sc_biguint<11>(tmp_781_reg_42274.read()));
}

void ShuffleNetV2::thread_tmp_792_cast_fu_15558_p1() {
    tmp_792_cast_fu_15558_p1 = esl_zext<8,7>(tmp_fu_15550_p3.read());
}

void ShuffleNetV2::thread_tmp_792_fu_18146_p3() {
    tmp_792_fu_18146_p3 = esl_concat<11,1>(tmp_791_fu_18133_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_793_fu_18158_p2() {
    tmp_793_fu_18158_p2 = (!p_shl337_cast_fu_18138_p3.read().is_01() || !p_shl338_cast_fu_18154_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl337_cast_fu_18138_p3.read()) + sc_biguint<15>(p_shl338_cast_fu_18154_p1.read()));
}

void ShuffleNetV2::thread_tmp_794_fu_18164_p2() {
    tmp_794_fu_18164_p2 = (!h_53_cast_cast1_fu_18125_p1.read().is_01() || !tmp_778_reg_42261.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h_53_cast_cast1_fu_18125_p1.read()) + sc_biguint<10>(tmp_778_reg_42261.read()));
}

void ShuffleNetV2::thread_tmp_795_fu_18177_p3() {
    tmp_795_fu_18177_p3 = esl_concat<10,1>(tmp_794_fu_18164_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_796_fu_18189_p2() {
    tmp_796_fu_18189_p2 = (!p_shl335_cast_fu_18169_p3.read().is_01() || !p_shl336_cast_fu_18185_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl335_cast_fu_18169_p3.read()) + sc_biguint<14>(p_shl336_cast_fu_18185_p1.read()));
}

void ShuffleNetV2::thread_tmp_797_fu_18021_p2() {
    tmp_797_fu_18021_p2 = (!tmp_785_reg_42238.read().is_01() || !w_52_cast_cast_fu_18017_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_785_reg_42238.read()) + sc_biguint<15>(w_52_cast_cast_fu_18017_p1.read()));
}

void ShuffleNetV2::thread_tmp_799_fu_18357_p3() {
    tmp_799_fu_18357_p3 = esl_concat<4,5>(ap_const_lv4_9, tmp_798_reg_10363.read());
}

void ShuffleNetV2::thread_tmp_79_cast_cast_fu_21114_p1() {
    tmp_79_cast_cast_fu_21114_p1 = esl_zext<9,4>(tmp_908_fu_21104_p4.read());
}

void ShuffleNetV2::thread_tmp_79_fu_21791_p2() {
    tmp_79_fu_21791_p2 = (!p_shl40_cast_fu_21775_p1.read().is_01() || !p_shl41_cast_fu_21787_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl40_cast_fu_21775_p1.read()) - sc_biguint<7>(p_shl41_cast_fu_21787_p1.read()));
}

void ShuffleNetV2::thread_tmp_800_fu_18365_p1() {
    tmp_800_fu_18365_p1 = esl_zext<32,9>(tmp_799_fu_18357_p3.read());
}

void ShuffleNetV2::thread_tmp_801_fu_18369_p2() {
    tmp_801_fu_18369_p2 = (!tmp_800_fu_18365_p1.read().is_01() || !bias_V_read_reg_40400.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_800_fu_18365_p1.read()) + sc_biguint<32>(bias_V_read_reg_40400.read()));
}

void ShuffleNetV2::thread_tmp_802_fu_18215_p2() {
    tmp_802_fu_18215_p2 = (!tmp_793_reg_42287.read().is_01() || !w_54_cast_cast_fu_18211_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_793_reg_42287.read()) + sc_biguint<15>(w_54_cast_cast_fu_18211_p1.read()));
}

void ShuffleNetV2::thread_tmp_803_fu_18225_p2() {
    tmp_803_fu_18225_p2 = (!tmp_796_reg_42292.read().is_01() || !w_54_cast_cast1_fu_18207_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_796_reg_42292.read()) + sc_biguint<14>(w_54_cast_cast1_fu_18207_p1.read()));
}

void ShuffleNetV2::thread_tmp_804_fu_18384_p3() {
    tmp_804_fu_18384_p3 = esl_concat<5,2>(co52_reg_10374.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_805_fu_18396_p2() {
    tmp_805_fu_18396_p2 = (!p_shl341_cast_fu_18392_p1.read().is_01() || !co52_cast_cast_fu_18380_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl341_cast_fu_18392_p1.read()) - sc_biguint<8>(co52_cast_cast_fu_18380_p1.read()));
}

void ShuffleNetV2::thread_tmp_806_fu_18462_p2() {
    tmp_806_fu_18462_p2 = (!bias_V_read_reg_40400.read().is_01() || !ap_const_lv32_138.is_01())? sc_lv<32>(): (sc_biguint<32>(bias_V_read_reg_40400.read()) + sc_biguint<32>(ap_const_lv32_138));
}

void ShuffleNetV2::thread_tmp_807_fu_18434_p4() {
    tmp_807_fu_18434_p4 = esl_concat<6,2>(esl_concat<1,5>(ap_const_lv1_1, co52_reg_10374.read()), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_808_cast_fu_15690_p1() {
    tmp_808_cast_fu_15690_p1 = esl_zext<32,13>(tmp_635_reg_40657.read());
}

void ShuffleNetV2::thread_tmp_808_fu_18444_p1() {
    tmp_808_fu_18444_p1 = esl_sext<9,8>(tmp_807_fu_18434_p4.read());
}

void ShuffleNetV2::thread_tmp_809_fu_18452_p2() {
    tmp_809_fu_18452_p2 = (!p_shl342_cast_fu_18448_p1.read().is_01() || !sum15_cast_cast_fu_18430_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl342_cast_fu_18448_p1.read()) - sc_biguint<10>(sum15_cast_cast_fu_18430_p1.read()));
}

void ShuffleNetV2::thread_tmp_80_cast_cast_fu_20542_p1() {
    tmp_80_cast_cast_fu_20542_p1 = esl_sext<9,7>(tmp_68_fu_20536_p2.read());
}

void ShuffleNetV2::thread_tmp_80_fu_21801_p2() {
    tmp_80_fu_21801_p2 = (!tmp_79_fu_21791_p2.read().is_01() || !i59_cast1_reg_43674.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_79_fu_21791_p2.read()) + sc_biguint<7>(i59_cast1_reg_43674.read()));
}

void ShuffleNetV2::thread_tmp_810_cast_fu_15840_p1() {
    tmp_810_cast_fu_15840_p1 = esl_sext<9,8>(tmp_637_fu_15834_p2.read());
}

void ShuffleNetV2::thread_tmp_810_fu_18481_p2() {
    tmp_810_fu_18481_p2 = (!w55_cast_cast_fu_18477_p1.read().is_01() || !tmp_949_cast_reg_42489.read().is_01())? sc_lv<11>(): (sc_biguint<11>(w55_cast_cast_fu_18477_p1.read()) + sc_bigint<11>(tmp_949_cast_reg_42489.read()));
}

void ShuffleNetV2::thread_tmp_811_cast_fu_15876_p1() {
    tmp_811_cast_fu_15876_p1 = esl_sext<32,9>(tmp_638_fu_15871_p2.read());
}

void ShuffleNetV2::thread_tmp_811_fu_18490_p3() {
    tmp_811_fu_18490_p3 = esl_concat<11,2>(tmp_810_fu_18481_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_812_fu_18502_p2() {
    tmp_812_fu_18502_p2 = (!p_shl213_fu_18498_p1.read().is_01() || !tmp_950_cast_fu_18486_p1.read().is_01())? sc_lv<32>(): (sc_bigint<32>(p_shl213_fu_18498_p1.read()) - sc_bigint<32>(tmp_950_cast_fu_18486_p1.read()));
}

void ShuffleNetV2::thread_tmp_813_fu_18508_p2() {
    tmp_813_fu_18508_p2 = (!w55_cast_cast1_fu_18473_p1.read().is_01() || !tmp_946_cast_reg_42476.read().is_01())? sc_lv<9>(): (sc_biguint<9>(w55_cast_cast1_fu_18473_p1.read()) + sc_bigint<9>(tmp_946_cast_reg_42476.read()));
}

void ShuffleNetV2::thread_tmp_814_fu_18513_p2() {
    tmp_814_fu_18513_p2 = (!ap_const_lv9_2.is_01())? sc_lv<9>(): tmp_813_fu_18508_p2.read() << (unsigned short)ap_const_lv9_2.to_uint();
}

void ShuffleNetV2::thread_tmp_815_fu_18519_p2() {
    tmp_815_fu_18519_p2 = (!tmp_814_fu_18513_p2.read().is_01() || !tmp_813_fu_18508_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_814_fu_18513_p2.read()) - sc_biguint<9>(tmp_813_fu_18508_p2.read()));
}

void ShuffleNetV2::thread_tmp_816_fu_18537_p2() {
    tmp_816_fu_18537_p2 = (!tmp_812_fu_18502_p2.read().is_01() || !shuffle_conv_3x3_V_r_reg_40515.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_812_fu_18502_p2.read()) + sc_biguint<32>(shuffle_conv_3x3_V_r_reg_40515.read()));
}

void ShuffleNetV2::thread_tmp_817_fu_18552_p2() {
    tmp_817_fu_18552_p2 = (!tmp_815_reg_42500.read().is_01() || !h54_cast_cast_fu_18548_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_815_reg_42500.read()) + sc_biguint<9>(h54_cast_cast_fu_18548_p1.read()));
}

void ShuffleNetV2::thread_tmp_818_fu_18659_p2() {
    tmp_818_fu_18659_p2 = (!bias_V_read_reg_40400.read().is_01() || !ap_const_lv32_150.is_01())? sc_lv<32>(): (sc_biguint<32>(bias_V_read_reg_40400.read()) + sc_biguint<32>(ap_const_lv32_150));
}

void ShuffleNetV2::thread_tmp_819_fu_18602_p4() {
    tmp_819_fu_18602_p4 = esl_concat<7,5>(esl_concat<2,5>(ap_const_lv2_2, co54_reg_10418.read()), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_81_fu_21919_p2() {
    tmp_81_fu_21919_p2 = (!tmp_78_reg_43724.read().is_01() || !ci42_cast_fu_21899_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_78_reg_43724.read()) + sc_biguint<7>(ci42_cast_fu_21899_p1.read()));
}

void ShuffleNetV2::thread_tmp_820_cast_fu_16115_p1() {
    tmp_820_cast_fu_16115_p1 = esl_sext<9,8>(tmp_645_fu_16109_p2.read());
}

void ShuffleNetV2::thread_tmp_820_fu_18612_p1() {
    tmp_820_fu_18612_p1 = esl_sext<13,12>(tmp_819_fu_18602_p4.read());
}

void ShuffleNetV2::thread_tmp_821_fu_18620_p4() {
    tmp_821_fu_18620_p4 = esl_concat<7,3>(esl_concat<2,5>(ap_const_lv2_2, co54_reg_10418.read()), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_822_fu_18630_p1() {
    tmp_822_fu_18630_p1 = esl_sext<11,10>(tmp_821_fu_18620_p4.read());
}

void ShuffleNetV2::thread_tmp_823_cast_fu_16172_p1() {
    tmp_823_cast_fu_16172_p1 = esl_sext<32,9>(tmp_648_fu_16167_p2.read());
}

void ShuffleNetV2::thread_tmp_823_fu_18638_p2() {
    tmp_823_fu_18638_p2 = (!p_shl345_cast_fu_18616_p1.read().is_01() || !p_shl346_cast_fu_18634_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl345_cast_fu_18616_p1.read()) - sc_biguint<14>(p_shl346_cast_fu_18634_p1.read()));
}

void ShuffleNetV2::thread_tmp_824_fu_18644_p1() {
    tmp_824_fu_18644_p1 = esl_sext<32,14>(tmp_823_fu_18638_p2.read());
}

void ShuffleNetV2::thread_tmp_825_fu_18648_p2() {
    tmp_825_fu_18648_p2 = (!shuffle_conv_1x1_V_r_reg_40474.read().is_01() || !tmp_824_fu_18644_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(shuffle_conv_1x1_V_r_reg_40474.read()) + sc_bigint<32>(tmp_824_fu_18644_p1.read()));
}

void ShuffleNetV2::thread_tmp_826_fu_18726_p3() {
    tmp_826_fu_18726_p3 = esl_concat<5,4>(co56_reg_10452.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_827_fu_18738_p3() {
    tmp_827_fu_18738_p3 = esl_concat<5,1>(co56_reg_10452.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_828_fu_18750_p2() {
    tmp_828_fu_18750_p2 = (!p_shl348_cast_fu_18746_p1.read().is_01() || !p_shl347_cast_fu_18734_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl348_cast_fu_18746_p1.read()) + sc_biguint<10>(p_shl347_cast_fu_18734_p1.read()));
}

void ShuffleNetV2::thread_tmp_829_fu_18861_p1() {
    tmp_829_fu_18861_p1 = co57_reg_10485.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_82_cast_fu_20581_p1() {
    tmp_82_cast_fu_20581_p1 = esl_sext<9,8>(tmp_70_fu_20575_p2.read());
}

void ShuffleNetV2::thread_tmp_82_fu_21590_p2() {
    tmp_82_fu_21590_p2 = (!p_shl44_cast_fu_21574_p1.read().is_01() || !p_shl45_cast_fu_21586_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl44_cast_fu_21574_p1.read()) - sc_biguint<7>(p_shl45_cast_fu_21586_p1.read()));
}

void ShuffleNetV2::thread_tmp_830_cast_fu_16243_p1() {
    tmp_830_cast_fu_16243_p1 = esl_zext<32,9>(tmp_652_fu_16238_p2.read());
}

void ShuffleNetV2::thread_tmp_830_fu_18895_p4() {
    tmp_830_fu_18895_p4 = co57_reg_10485.read().range(4, 1);
}

void ShuffleNetV2::thread_tmp_831_fu_18784_p2() {
    tmp_831_fu_18784_p2 = (!h_57_cast_cast_fu_18780_p1.read().is_01() || !tmp_828_reg_42706.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h_57_cast_cast_fu_18780_p1.read()) + sc_biguint<10>(tmp_828_reg_42706.read()));
}

void ShuffleNetV2::thread_tmp_832_fu_18789_p3() {
    tmp_832_fu_18789_p3 = esl_concat<10,4>(tmp_831_fu_18784_p2.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_833_fu_18801_p3() {
    tmp_833_fu_18801_p3 = esl_concat<10,1>(tmp_831_fu_18784_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_834_fu_18813_p2() {
    tmp_834_fu_18813_p2 = (!p_shl349_cast_fu_18797_p1.read().is_01() || !p_shl350_cast_fu_18809_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl349_cast_fu_18797_p1.read()) + sc_biguint<15>(p_shl350_cast_fu_18809_p1.read()));
}

void ShuffleNetV2::thread_tmp_835_fu_18835_p2() {
    tmp_835_fu_18835_p2 = (!tmp_834_reg_42727.read().is_01() || !w_58_cast_cast_fu_18831_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_834_reg_42727.read()) + sc_biguint<15>(w_58_cast_cast_fu_18831_p1.read()));
}

void ShuffleNetV2::thread_tmp_836_fu_19209_p1() {
    tmp_836_fu_19209_p1 = k_reg_10529.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_837_fu_18950_p1() {
    tmp_837_fu_18950_p1 = i36_reg_10507.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_838_fu_19047_p3() {
    tmp_838_fu_19047_p3 = esl_concat<9,5>(sum11_reg_42805.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_839_fu_19058_p3() {
    tmp_839_fu_19058_p3 = esl_concat<9,3>(sum11_reg_42805.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_83_fu_21596_p2() {
    tmp_83_fu_21596_p2 = (!co72_cast1_reg_43583.read().is_01() || !tmp_82_fu_21590_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(co72_cast1_reg_43583.read()) + sc_biguint<7>(tmp_82_fu_21590_p2.read()));
}

void ShuffleNetV2::thread_tmp_840_fu_19069_p2() {
    tmp_840_fu_19069_p2 = (!p_shl353_cast_fu_19054_p1.read().is_01() || !p_shl354_cast_fu_19065_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl353_cast_fu_19054_p1.read()) - sc_biguint<15>(p_shl354_cast_fu_19065_p1.read()));
}

void ShuffleNetV2::thread_tmp_841_fu_19079_p2() {
    tmp_841_fu_19079_p2 = (!ci34_cast1_cast_reg_42773.read().is_01() || !tmp_982_cast_fu_19075_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(ci34_cast1_cast_reg_42773.read()) + sc_bigint<16>(tmp_982_cast_fu_19075_p1.read()));
}

void ShuffleNetV2::thread_tmp_842_fu_19146_p1() {
    tmp_842_fu_19146_p1 = grp_fu_19038_p2.read().range(6-1, 0);
}

void ShuffleNetV2::thread_tmp_845_fu_19135_p2() {
    tmp_845_fu_19135_p2 = (!p_shl351_cast_fu_19121_p3.read().is_01() || !p_shl352_cast_fu_19128_p3.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl351_cast_fu_19121_p3.read()) - sc_biguint<8>(p_shl352_cast_fu_19128_p3.read()));
}

void ShuffleNetV2::thread_tmp_846_fu_19141_p2() {
    tmp_846_fu_19141_p2 = (!tmp_38_cast_cast_reg_42786.read().is_01() || !tmp_845_fu_19135_p2.read().is_01())? sc_lv<8>(): (sc_bigint<8>(tmp_38_cast_cast_reg_42786.read()) + sc_biguint<8>(tmp_845_fu_19135_p2.read()));
}

void ShuffleNetV2::thread_tmp_847_fu_19642_p1() {
    tmp_847_fu_19642_p1 = co61_reg_10606.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_848_fu_19676_p4() {
    tmp_848_fu_19676_p4 = co61_reg_10606.read().range(4, 1);
}

void ShuffleNetV2::thread_tmp_849_fu_19550_p1() {
    tmp_849_fu_19550_p1 = k8_reg_10595.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_84_cast_fu_21452_p1() {
    tmp_84_cast_fu_21452_p1 = esl_sext<10,7>(tmp_73_fu_21446_p2.read());
}

void ShuffleNetV2::thread_tmp_84_fu_22227_p2() {
    tmp_84_fu_22227_p2 = (!p_shl46_cast_fu_22211_p1.read().is_01() || !p_shl47_cast_fu_22223_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl46_cast_fu_22211_p1.read()) - sc_biguint<7>(p_shl47_cast_fu_22223_p1.read()));
}

void ShuffleNetV2::thread_tmp_850_fu_19353_p1() {
    tmp_850_fu_19353_p1 = i41_reg_10573.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_851_fu_19400_p3() {
    tmp_851_fu_19400_p3 = esl_concat<7,2>(tmp_50_fu_19391_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_852_fu_19412_p2() {
    tmp_852_fu_19412_p2 = (!p_shl358_cast_fu_19408_p1.read().is_01() || !tmp_50_cast_cast_fu_19396_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(p_shl358_cast_fu_19408_p1.read()) - sc_bigint<10>(tmp_50_cast_cast_fu_19396_p1.read()));
}

void ShuffleNetV2::thread_tmp_853_cast_fu_16626_p1() {
    tmp_853_cast_fu_16626_p1 = esl_zext<32,15>(tmp_669_fu_16621_p2.read());
}

void ShuffleNetV2::thread_tmp_853_fu_19418_p2() {
    tmp_853_fu_19418_p2 = (!w59_cast_cast_reg_42900.read().is_01() || !tmp_852_fu_19412_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(w59_cast_cast_reg_42900.read()) + sc_biguint<10>(tmp_852_fu_19412_p2.read()));
}

void ShuffleNetV2::thread_tmp_854_cast_fu_16636_p1() {
    tmp_854_cast_fu_16636_p1 = esl_zext<32,14>(tmp_670_reg_41332.read());
}

void ShuffleNetV2::thread_tmp_854_fu_19434_p2() {
    tmp_854_fu_19434_p2 = (!ap_const_lv10_2.is_01())? sc_lv<10>(): tmp_853_reg_42939.read() << (unsigned short)ap_const_lv10_2.to_uint();
}

void ShuffleNetV2::thread_tmp_855_fu_19439_p2() {
    tmp_855_fu_19439_p2 = (!tmp_854_fu_19434_p2.read().is_01() || !tmp_853_reg_42939.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_854_fu_19434_p2.read()) - sc_biguint<10>(tmp_853_reg_42939.read()));
}

void ShuffleNetV2::thread_tmp_856_cast_fu_16800_p1() {
    tmp_856_cast_fu_16800_p1 = esl_sext<9,8>(tmp_672_fu_16794_p2.read());
}

void ShuffleNetV2::thread_tmp_856_fu_19444_p2() {
    tmp_856_fu_19444_p2 = (!h58_cast_cast_reg_42918.read().is_01() || !tmp_855_fu_19439_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h58_cast_cast_reg_42918.read()) + sc_biguint<10>(tmp_855_fu_19439_p2.read()));
}

void ShuffleNetV2::thread_tmp_857_fu_19452_p3() {
    tmp_857_fu_19452_p3 = esl_concat<8,2>(sum13_reg_42945.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_858_fu_19463_p2() {
    tmp_858_fu_19463_p2 = (!p_shl356_cast_fu_19459_p1.read().is_01() || !sum17_cast_cast_fu_19449_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl356_cast_fu_19459_p1.read()) - sc_biguint<11>(sum17_cast_cast_fu_19449_p1.read()));
}

void ShuffleNetV2::thread_tmp_859_cast_fu_16868_p1() {
    tmp_859_cast_fu_16868_p1 = esl_sext<32,10>(tmp_675_fu_16863_p2.read());
}

void ShuffleNetV2::thread_tmp_859_fu_19473_p2() {
    tmp_859_fu_19473_p2 = (!w59_cast_cast1_reg_42895.read().is_01() || !tmp_1003_cast_fu_19469_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(w59_cast_cast1_reg_42895.read()) + sc_bigint<12>(tmp_1003_cast_fu_19469_p1.read()));
}

void ShuffleNetV2::thread_tmp_85_cast_fu_21486_p1() {
    tmp_85_cast_fu_21486_p1 = esl_sext<32,7>(tmp_74_reg_43562.read());
}

void ShuffleNetV2::thread_tmp_85_fu_22237_p2() {
    tmp_85_fu_22237_p2 = (!tmp_84_fu_22227_p2.read().is_01() || !i63_cast1_reg_43801.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_84_fu_22227_p2.read()) + sc_biguint<7>(i63_cast1_reg_43801.read()));
}

void ShuffleNetV2::thread_tmp_860_fu_19481_p3() {
    tmp_860_fu_19481_p3 = esl_concat<12,2>(tmp_859_reg_42956.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_861_fu_19492_p2() {
    tmp_861_fu_19492_p2 = (!p_shl219_fu_19488_p1.read().is_01() || !tmp_1004_cast_fu_19478_p1.read().is_01())? sc_lv<32>(): (sc_bigint<32>(p_shl219_fu_19488_p1.read()) - sc_bigint<32>(tmp_1004_cast_fu_19478_p1.read()));
}

void ShuffleNetV2::thread_tmp_862_fu_19498_p2() {
    tmp_862_fu_19498_p2 = (!h58_cast_reg_42913.read().is_01() || !tmp_861_fu_19492_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(h58_cast_reg_42913.read()) + sc_biguint<32>(tmp_861_fu_19492_p2.read()));
}

void ShuffleNetV2::thread_tmp_863_fu_19990_p1() {
    tmp_863_fu_19990_p1 = k9_reg_10650.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_864_fu_19731_p1() {
    tmp_864_fu_19731_p1 = i43_reg_10628.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_865_fu_19828_p3() {
    tmp_865_fu_19828_p3 = esl_concat<9,5>(sum15_reg_43065.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_866_cast_fu_16939_p1() {
    tmp_866_cast_fu_16939_p1 = esl_zext<32,9>(tmp_679_fu_16934_p2.read());
}

void ShuffleNetV2::thread_tmp_866_fu_19839_p3() {
    tmp_866_fu_19839_p3 = esl_concat<9,3>(sum15_reg_43065.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_867_fu_19850_p2() {
    tmp_867_fu_19850_p2 = (!p_shl361_cast_fu_19835_p1.read().is_01() || !p_shl362_cast_fu_19846_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl361_cast_fu_19835_p1.read()) - sc_biguint<15>(p_shl362_cast_fu_19846_p1.read()));
}

void ShuffleNetV2::thread_tmp_868_fu_19860_p2() {
    tmp_868_fu_19860_p2 = (!ci36_cast1_cast_reg_43033.read().is_01() || !tmp_1016_cast_fu_19856_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(ci36_cast1_cast_reg_43033.read()) + sc_bigint<16>(tmp_1016_cast_fu_19856_p1.read()));
}

void ShuffleNetV2::thread_tmp_869_fu_19927_p1() {
    tmp_869_fu_19927_p1 = grp_fu_19819_p2.read().range(6-1, 0);
}

void ShuffleNetV2::thread_tmp_86_fu_21968_p2() {
    tmp_86_fu_21968_p2 = (!p_shl48_cast_fu_21952_p1.read().is_01() || !p_shl49_cast_fu_21964_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl48_cast_fu_21952_p1.read()) - sc_biguint<7>(p_shl49_cast_fu_21964_p1.read()));
}

void ShuffleNetV2::thread_tmp_872_fu_19916_p2() {
    tmp_872_fu_19916_p2 = (!p_shl359_cast_fu_19902_p3.read().is_01() || !p_shl360_cast_fu_19909_p3.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl359_cast_fu_19902_p3.read()) - sc_biguint<8>(p_shl360_cast_fu_19909_p3.read()));
}

void ShuffleNetV2::thread_tmp_873_fu_19922_p2() {
    tmp_873_fu_19922_p2 = (!tmp_55_cast_cast_reg_43046.read().is_01() || !tmp_872_fu_19916_p2.read().is_01())? sc_lv<8>(): (sc_bigint<8>(tmp_55_cast_cast_reg_43046.read()) + sc_biguint<8>(tmp_872_fu_19916_p2.read()));
}

void ShuffleNetV2::thread_tmp_874_fu_20419_p1() {
    tmp_874_fu_20419_p1 = co65_reg_10727.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_875_fu_20453_p4() {
    tmp_875_fu_20453_p4 = co65_reg_10727.read().range(4, 1);
}

void ShuffleNetV2::thread_tmp_876_fu_20331_p1() {
    tmp_876_fu_20331_p1 = k10_reg_10716.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_877_fu_20138_p1() {
    tmp_877_fu_20138_p1 = i48_reg_10694.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_878_fu_20185_p3() {
    tmp_878_fu_20185_p3 = esl_concat<7,2>(tmp_64_fu_20176_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_879_fu_20197_p2() {
    tmp_879_fu_20197_p2 = (!p_shl363_cast_fu_20193_p1.read().is_01() || !tmp_69_cast_cast_fu_20181_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(p_shl363_cast_fu_20193_p1.read()) - sc_bigint<10>(tmp_69_cast_cast_fu_20181_p1.read()));
}

void ShuffleNetV2::thread_tmp_87_cast_cast_fu_21143_p1() {
    tmp_87_cast_cast_fu_21143_p1 = esl_sext<8,7>(tmp_72_fu_21138_p2.read());
}

void ShuffleNetV2::thread_tmp_87_cast_fu_22034_p1() {
    tmp_87_cast_fu_22034_p1 = esl_sext<10,9>(tmp_87_reg_43760.read());
}

void ShuffleNetV2::thread_tmp_87_fu_21978_p2() {
    tmp_87_fu_21978_p2 = (!tmp_106_cast_cast_fu_21974_p1.read().is_01() || !tmp_98_cast_cast_reg_43729.read().is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_106_cast_cast_fu_21974_p1.read()) + sc_biguint<9>(tmp_98_cast_cast_reg_43729.read()));
}

void ShuffleNetV2::thread_tmp_880_fu_20203_p2() {
    tmp_880_fu_20203_p2 = (!w61_cast_cast_reg_43160.read().is_01() || !tmp_879_fu_20197_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(w61_cast_cast_reg_43160.read()) + sc_biguint<10>(tmp_879_fu_20197_p2.read()));
}

void ShuffleNetV2::thread_tmp_881_fu_20219_p2() {
    tmp_881_fu_20219_p2 = (!ap_const_lv10_2.is_01())? sc_lv<10>(): tmp_880_reg_43199.read() << (unsigned short)ap_const_lv10_2.to_uint();
}

void ShuffleNetV2::thread_tmp_882_fu_20224_p2() {
    tmp_882_fu_20224_p2 = (!tmp_881_fu_20219_p2.read().is_01() || !tmp_880_reg_43199.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_881_fu_20219_p2.read()) - sc_biguint<10>(tmp_880_reg_43199.read()));
}

void ShuffleNetV2::thread_tmp_883_fu_20229_p2() {
    tmp_883_fu_20229_p2 = (!h60_cast_cast_reg_43178.read().is_01() || !tmp_882_fu_20224_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h60_cast_cast_reg_43178.read()) + sc_biguint<10>(tmp_882_fu_20224_p2.read()));
}

void ShuffleNetV2::thread_tmp_884_fu_20237_p3() {
    tmp_884_fu_20237_p3 = esl_concat<8,2>(sum17_reg_43205.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_885_fu_20248_p2() {
    tmp_885_fu_20248_p2 = (!p_shl365_cast_fu_20244_p1.read().is_01() || !sum19_cast_cast_fu_20234_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl365_cast_fu_20244_p1.read()) - sc_biguint<11>(sum19_cast_cast_fu_20234_p1.read()));
}

void ShuffleNetV2::thread_tmp_886_fu_20254_p2() {
    tmp_886_fu_20254_p2 = (!w61_cast_cast1_reg_43155.read().is_01() || !tmp_885_fu_20248_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(w61_cast_cast1_reg_43155.read()) + sc_biguint<11>(tmp_885_fu_20248_p2.read()));
}

void ShuffleNetV2::thread_tmp_887_fu_20262_p3() {
    tmp_887_fu_20262_p3 = esl_concat<11,2>(tmp_886_reg_43216.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_888_fu_20273_p2() {
    tmp_888_fu_20273_p2 = (!p_shl221_fu_20269_p1.read().is_01() || !tmp_1038_cast_fu_20259_p1.read().is_01())? sc_lv<32>(): (sc_bigint<32>(p_shl221_fu_20269_p1.read()) - sc_bigint<32>(tmp_1038_cast_fu_20259_p1.read()));
}

void ShuffleNetV2::thread_tmp_889_fu_20279_p2() {
    tmp_889_fu_20279_p2 = (!h60_cast_reg_43173.read().is_01() || !tmp_888_fu_20273_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(h60_cast_reg_43173.read()) + sc_biguint<32>(tmp_888_fu_20273_p2.read()));
}

void ShuffleNetV2::thread_tmp_88_cast_cast_fu_21193_p1() {
    tmp_88_cast_cast_fu_21193_p1 = esl_sext<9,7>(tmp_75_fu_21187_p2.read());
}

void ShuffleNetV2::thread_tmp_88_fu_22007_p2() {
    tmp_88_fu_22007_p2 = (!p_shl50_cast_fu_21991_p1.read().is_01() || !p_shl51_cast_fu_22003_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl50_cast_fu_21991_p1.read()) - sc_biguint<8>(p_shl51_cast_fu_22003_p1.read()));
}

void ShuffleNetV2::thread_tmp_890_fu_20843_p3() {
    tmp_890_fu_20843_p3 = esl_concat<6,3>(co67_reg_10782.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_891_fu_20855_p3() {
    tmp_891_fu_20855_p3 = esl_concat<6,1>(co67_reg_10782.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_892_fu_20867_p2() {
    tmp_892_fu_20867_p2 = (!p_shl368_cast_fu_20863_p1.read().is_01() || !p_shl367_cast_fu_20851_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl368_cast_fu_20863_p1.read()) + sc_biguint<10>(p_shl367_cast_fu_20851_p1.read()));
}

void ShuffleNetV2::thread_tmp_893_fu_20895_p3() {
    tmp_893_fu_20895_p3 = esl_concat<7,3>(tmp_65_fu_20889_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_894_fu_20907_p3() {
    tmp_894_fu_20907_p3 = esl_concat<7,1>(tmp_65_fu_20889_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_895_fu_20919_p2() {
    tmp_895_fu_20919_p2 = (!p_shl372_cast_fu_20915_p1.read().is_01() || !p_shl369_cast_fu_20903_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl372_cast_fu_20915_p1.read()) + sc_biguint<11>(p_shl369_cast_fu_20903_p1.read()));
}

void ShuffleNetV2::thread_tmp_896_fu_20771_p1() {
    tmp_896_fu_20771_p1 = k12_reg_10771.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_897_cast_fu_17238_p1() {
    tmp_897_cast_fu_17238_p1 = esl_zext<32,15>(tmp_751_fu_17233_p2.read());
}

void ShuffleNetV2::thread_tmp_897_fu_20508_p1() {
    tmp_897_fu_20508_p1 = i50_reg_10749.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_898_fu_20609_p3() {
    tmp_898_fu_20609_p3 = esl_concat<10,5>(sum19_reg_43325.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_899_cast_fu_17432_p1() {
    tmp_899_cast_fu_17432_p1 = esl_zext<32,15>(tmp_752_fu_17427_p2.read());
}

void ShuffleNetV2::thread_tmp_899_fu_20620_p3() {
    tmp_899_fu_20620_p3 = esl_concat<10,3>(sum19_reg_43325.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_89_fu_22436_p2() {
    tmp_89_fu_22436_p2 = (!co77_cast_fu_22420_p1.read().is_01() || !ap_const_lv7_30.is_01())? sc_lv<7>(): (sc_biguint<7>(co77_cast_fu_22420_p1.read()) + sc_biguint<7>(ap_const_lv7_30));
}

void ShuffleNetV2::thread_tmp_900_cast_fu_17442_p1() {
    tmp_900_cast_fu_17442_p1 = esl_zext<32,14>(tmp_753_reg_41821.read());
}

void ShuffleNetV2::thread_tmp_900_fu_20631_p2() {
    tmp_900_fu_20631_p2 = (!p_shl373_cast_fu_20616_p1.read().is_01() || !p_shl374_cast_fu_20627_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(p_shl373_cast_fu_20616_p1.read()) - sc_biguint<16>(p_shl374_cast_fu_20627_p1.read()));
}

void ShuffleNetV2::thread_tmp_901_fu_20641_p2() {
    tmp_901_fu_20641_p2 = (!ci38_cast1_cast_reg_43293.read().is_01() || !tmp_1056_cast_fu_20637_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(ci38_cast1_cast_reg_43293.read()) + sc_bigint<17>(tmp_1056_cast_fu_20637_p1.read()));
}

void ShuffleNetV2::thread_tmp_902_cast_fu_17606_p1() {
    tmp_902_cast_fu_17606_p1 = esl_sext<9,8>(tmp_755_fu_17600_p2.read());
}

void ShuffleNetV2::thread_tmp_902_fu_20708_p1() {
    tmp_902_fu_20708_p1 = grp_fu_20600_p2.read().range(6-1, 0);
}

void ShuffleNetV2::thread_tmp_905_cast_fu_17674_p1() {
    tmp_905_cast_fu_17674_p1 = esl_sext<32,10>(tmp_759_fu_17669_p2.read());
}

void ShuffleNetV2::thread_tmp_905_fu_20697_p2() {
    tmp_905_fu_20697_p2 = (!p_shl370_cast_fu_20683_p3.read().is_01() || !p_shl371_cast_fu_20690_p3.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl370_cast_fu_20683_p3.read()) - sc_biguint<8>(p_shl371_cast_fu_20690_p3.read()));
}

void ShuffleNetV2::thread_tmp_906_fu_20703_p2() {
    tmp_906_fu_20703_p2 = (!tmp_74_cast_cast_reg_43306.read().is_01() || !tmp_905_fu_20697_p2.read().is_01())? sc_lv<8>(): (sc_bigint<8>(tmp_74_cast_cast_reg_43306.read()) + sc_biguint<8>(tmp_905_fu_20697_p2.read()));
}

void ShuffleNetV2::thread_tmp_907_fu_21070_p1() {
    tmp_907_fu_21070_p1 = co69_reg_10815.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_908_fu_21104_p4() {
    tmp_908_fu_21104_p4 = co69_reg_10815.read().range(4, 1);
}

void ShuffleNetV2::thread_tmp_909_fu_20945_p2() {
    tmp_909_fu_20945_p2 = (!h_63_cast_cast_fu_20941_p1.read().is_01() || !tmp_895_reg_43410.read().is_01())? sc_lv<11>(): (sc_biguint<11>(h_63_cast_cast_fu_20941_p1.read()) + sc_biguint<11>(tmp_895_reg_43410.read()));
}

void ShuffleNetV2::thread_tmp_90_cast_fu_21232_p1() {
    tmp_90_cast_fu_21232_p1 = esl_sext<10,8>(tmp_77_fu_21226_p2.read());
}

void ShuffleNetV2::thread_tmp_90_fu_22645_p2() {
    tmp_90_fu_22645_p2 = (!p_shl52_cast_fu_22629_p1.read().is_01() || !p_shl53_cast_fu_22641_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl52_cast_fu_22629_p1.read()) - sc_biguint<7>(p_shl53_cast_fu_22641_p1.read()));
}

void ShuffleNetV2::thread_tmp_910_fu_20950_p3() {
    tmp_910_fu_20950_p3 = esl_concat<11,3>(tmp_909_fu_20945_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_911_fu_20962_p3() {
    tmp_911_fu_20962_p3 = esl_concat<11,1>(tmp_909_fu_20945_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_912_cast_fu_17745_p1() {
    tmp_912_cast_fu_17745_p1 = esl_zext<32,9>(tmp_766_fu_17740_p2.read());
}

void ShuffleNetV2::thread_tmp_912_fu_20974_p2() {
    tmp_912_fu_20974_p2 = (!p_shl375_cast_fu_20958_p1.read().is_01() || !p_shl376_cast_fu_20970_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl375_cast_fu_20958_p1.read()) + sc_biguint<15>(p_shl376_cast_fu_20970_p1.read()));
}

void ShuffleNetV2::thread_tmp_913_fu_20980_p2() {
    tmp_913_fu_20980_p2 = (!h_63_cast_cast1_fu_20937_p1.read().is_01() || !tmp_892_reg_43397.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h_63_cast_cast1_fu_20937_p1.read()) + sc_biguint<10>(tmp_892_reg_43397.read()));
}

void ShuffleNetV2::thread_tmp_914_fu_20985_p3() {
    tmp_914_fu_20985_p3 = esl_concat<10,3>(tmp_913_fu_20980_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_915_fu_20997_p3() {
    tmp_915_fu_20997_p3 = esl_concat<10,1>(tmp_913_fu_20980_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_916_fu_21009_p2() {
    tmp_916_fu_21009_p2 = (!p_shl377_cast_fu_20993_p1.read().is_01() || !p_shl378_cast_fu_21005_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl377_cast_fu_20993_p1.read()) + sc_biguint<14>(p_shl378_cast_fu_21005_p1.read()));
}

void ShuffleNetV2::thread_tmp_917_fu_21035_p2() {
    tmp_917_fu_21035_p2 = (!tmp_912_reg_43423.read().is_01() || !w_64_cast_cast_fu_21031_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_912_reg_43423.read()) + sc_biguint<15>(w_64_cast_cast_fu_21031_p1.read()));
}

void ShuffleNetV2::thread_tmp_918_fu_21045_p2() {
    tmp_918_fu_21045_p2 = (!tmp_916_reg_43428.read().is_01() || !w_64_cast_cast1_fu_21027_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_916_reg_43428.read()) + sc_biguint<14>(w_64_cast_cast1_fu_21027_p1.read()));
}

void ShuffleNetV2::thread_tmp_919_fu_21418_p1() {
    tmp_919_fu_21418_p1 = k14_reg_10859.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_91_fu_22685_p2() {
    tmp_91_fu_22685_p2 = (!tmp_90_reg_43949.read().is_01() || !ci44_cast_fu_22665_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_90_reg_43949.read()) + sc_biguint<7>(ci44_cast_fu_22665_p1.read()));
}

void ShuffleNetV2::thread_tmp_920_fu_21159_p1() {
    tmp_920_fu_21159_p1 = i54_reg_10837.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_921_fu_21256_p3() {
    tmp_921_fu_21256_p3 = esl_concat<10,5>(sum22_reg_43506.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_922_fu_21267_p3() {
    tmp_922_fu_21267_p3 = esl_concat<10,3>(sum22_reg_43506.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_923_fu_21278_p2() {
    tmp_923_fu_21278_p2 = (!p_shl379_cast_fu_21263_p1.read().is_01() || !p_shl380_cast_fu_21274_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(p_shl379_cast_fu_21263_p1.read()) - sc_biguint<16>(p_shl380_cast_fu_21274_p1.read()));
}

void ShuffleNetV2::thread_tmp_924_fu_21288_p2() {
    tmp_924_fu_21288_p2 = (!ci40_cast1_cast_reg_43474.read().is_01() || !tmp_1084_cast_fu_21284_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(ci40_cast1_cast_reg_43474.read()) + sc_bigint<17>(tmp_1084_cast_fu_21284_p1.read()));
}

void ShuffleNetV2::thread_tmp_925_fu_21355_p1() {
    tmp_925_fu_21355_p1 = grp_fu_21247_p2.read().range(6-1, 0);
}

void ShuffleNetV2::thread_tmp_928_fu_21344_p2() {
    tmp_928_fu_21344_p2 = (!p_shl381_cast_fu_21330_p3.read().is_01() || !p_shl382_cast_fu_21337_p3.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl381_cast_fu_21330_p3.read()) - sc_biguint<8>(p_shl382_cast_fu_21337_p3.read()));
}

void ShuffleNetV2::thread_tmp_929_fu_21350_p2() {
    tmp_929_fu_21350_p2 = (!tmp_87_cast_cast_reg_43487.read().is_01() || !tmp_928_fu_21344_p2.read().is_01())? sc_lv<8>(): (sc_bigint<8>(tmp_87_cast_cast_reg_43487.read()) + sc_biguint<8>(tmp_928_fu_21344_p2.read()));
}

void ShuffleNetV2::thread_tmp_92_cast_fu_21797_p1() {
    tmp_92_cast_fu_21797_p1 = esl_sext<10,7>(tmp_79_fu_21791_p2.read());
}

void ShuffleNetV2::thread_tmp_92_fu_22993_p2() {
    tmp_92_fu_22993_p2 = (!p_shl54_cast_fu_22977_p1.read().is_01() || !p_shl55_cast_fu_22989_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl54_cast_fu_22977_p1.read()) - sc_biguint<7>(p_shl55_cast_fu_22989_p1.read()));
}

void ShuffleNetV2::thread_tmp_930_fu_21851_p1() {
    tmp_930_fu_21851_p1 = co73_reg_10936.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_931_fu_21885_p4() {
    tmp_931_fu_21885_p4 = co73_reg_10936.read().range(4, 1);
}

void ShuffleNetV2::thread_tmp_932_fu_21763_p1() {
    tmp_932_fu_21763_p1 = k16_reg_10925.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_933_fu_21562_p1() {
    tmp_933_fu_21562_p1 = i59_reg_10903.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_934_fu_21605_p3() {
    tmp_934_fu_21605_p3 = esl_concat<7,2>(tmp_83_fu_21596_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_935_fu_21617_p2() {
    tmp_935_fu_21617_p2 = (!p_shl383_cast_fu_21613_p1.read().is_01() || !tmp_100_cast_cast_fu_21601_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(p_shl383_cast_fu_21613_p1.read()) - sc_bigint<10>(tmp_100_cast_cast_fu_21601_p1.read()));
}

void ShuffleNetV2::thread_tmp_936_fu_21623_p2() {
    tmp_936_fu_21623_p2 = (!w65_cast_cast_reg_43601.read().is_01() || !tmp_935_fu_21617_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(w65_cast_cast_reg_43601.read()) + sc_biguint<10>(tmp_935_fu_21617_p2.read()));
}

void ShuffleNetV2::thread_tmp_937_fu_21647_p2() {
    tmp_937_fu_21647_p2 = (!ap_const_lv10_2.is_01())? sc_lv<10>(): tmp_936_reg_43640.read() << (unsigned short)ap_const_lv10_2.to_uint();
}

void ShuffleNetV2::thread_tmp_938_fu_21652_p2() {
    tmp_938_fu_21652_p2 = (!tmp_937_fu_21647_p2.read().is_01() || !tmp_936_reg_43640.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_937_fu_21647_p2.read()) - sc_biguint<10>(tmp_936_reg_43640.read()));
}

void ShuffleNetV2::thread_tmp_939_fu_21657_p2() {
    tmp_939_fu_21657_p2 = (!h64_cast_cast_reg_43619.read().is_01() || !tmp_938_fu_21652_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h64_cast_cast_reg_43619.read()) + sc_biguint<10>(tmp_938_fu_21652_p2.read()));
}

void ShuffleNetV2::thread_tmp_93_cast_fu_21831_p1() {
    tmp_93_cast_fu_21831_p1 = esl_sext<32,7>(tmp_80_reg_43695.read());
}

void ShuffleNetV2::thread_tmp_93_fu_23003_p2() {
    tmp_93_fu_23003_p2 = (!tmp_92_fu_22993_p2.read().is_01() || !i68_cast1_reg_44026.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_92_fu_22993_p2.read()) + sc_biguint<7>(i68_cast1_reg_44026.read()));
}

void ShuffleNetV2::thread_tmp_940_fu_21665_p3() {
    tmp_940_fu_21665_p3 = esl_concat<9,2>(sum21_reg_43646.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_941_cast_fu_18026_p1() {
    tmp_941_cast_fu_18026_p1 = esl_zext<32,15>(tmp_797_fu_18021_p2.read());
}

void ShuffleNetV2::thread_tmp_941_fu_21676_p2() {
    tmp_941_fu_21676_p2 = (!p_shl385_cast_fu_21672_p1.read().is_01() || !sum21_cast_cast_fu_21662_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(p_shl385_cast_fu_21672_p1.read()) - sc_biguint<12>(sum21_cast_cast_fu_21662_p1.read()));
}

void ShuffleNetV2::thread_tmp_942_fu_21686_p2() {
    tmp_942_fu_21686_p2 = (!w65_cast_cast1_reg_43596.read().is_01() || !tmp_1105_cast_fu_21682_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(w65_cast_cast1_reg_43596.read()) + sc_bigint<13>(tmp_1105_cast_fu_21682_p1.read()));
}

void ShuffleNetV2::thread_tmp_943_cast_fu_18220_p1() {
    tmp_943_cast_fu_18220_p1 = esl_zext<32,15>(tmp_802_fu_18215_p2.read());
}

void ShuffleNetV2::thread_tmp_943_fu_21694_p3() {
    tmp_943_fu_21694_p3 = esl_concat<13,2>(tmp_942_reg_43657.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_944_cast_fu_18230_p1() {
    tmp_944_cast_fu_18230_p1 = esl_zext<32,14>(tmp_803_reg_42310.read());
}

void ShuffleNetV2::thread_tmp_944_fu_21705_p2() {
    tmp_944_fu_21705_p2 = (!p_shl226_fu_21701_p1.read().is_01() || !tmp_1106_cast_fu_21691_p1.read().is_01())? sc_lv<32>(): (sc_bigint<32>(p_shl226_fu_21701_p1.read()) - sc_bigint<32>(tmp_1106_cast_fu_21691_p1.read()));
}

void ShuffleNetV2::thread_tmp_945_fu_21711_p2() {
    tmp_945_fu_21711_p2 = (!h64_cast_reg_43614.read().is_01() || !tmp_944_fu_21705_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(h64_cast_reg_43614.read()) + sc_biguint<32>(tmp_944_fu_21705_p2.read()));
}

void ShuffleNetV2::thread_tmp_946_cast_fu_18402_p1() {
    tmp_946_cast_fu_18402_p1 = esl_sext<9,8>(tmp_805_fu_18396_p2.read());
}

void ShuffleNetV2::thread_tmp_946_fu_22271_p3() {
    tmp_946_fu_22271_p3 = esl_concat<6,3>(co75_reg_10991.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_947_fu_22283_p3() {
    tmp_947_fu_22283_p3 = esl_concat<6,1>(co75_reg_10991.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_948_fu_22295_p2() {
    tmp_948_fu_22295_p2 = (!p_shl388_cast_fu_22291_p1.read().is_01() || !p_shl387_cast_fu_22279_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl388_cast_fu_22291_p1.read()) + sc_biguint<10>(p_shl387_cast_fu_22279_p1.read()));
}

void ShuffleNetV2::thread_tmp_949_cast_fu_18458_p1() {
    tmp_949_cast_fu_18458_p1 = esl_sext<11,10>(tmp_809_fu_18452_p2.read());
}

void ShuffleNetV2::thread_tmp_949_fu_22199_p1() {
    tmp_949_fu_22199_p1 = k18_reg_10980.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_94_fu_22734_p2() {
    tmp_94_fu_22734_p2 = (!p_shl56_cast_fu_22718_p1.read().is_01() || !p_shl57_cast_fu_22730_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl56_cast_fu_22718_p1.read()) - sc_biguint<7>(p_shl57_cast_fu_22730_p1.read()));
}

void ShuffleNetV2::thread_tmp_950_cast_fu_18486_p1() {
    tmp_950_cast_fu_18486_p1 = esl_sext<32,11>(tmp_810_fu_18481_p2.read());
}

void ShuffleNetV2::thread_tmp_950_fu_21940_p1() {
    tmp_950_fu_21940_p1 = i61_reg_10958.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_951_fu_22037_p3() {
    tmp_951_fu_22037_p3 = esl_concat<10,5>(sum28_reg_43766.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_952_fu_22048_p3() {
    tmp_952_fu_22048_p3 = esl_concat<10,3>(sum28_reg_43766.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_953_fu_22059_p2() {
    tmp_953_fu_22059_p2 = (!p_shl389_cast_fu_22044_p1.read().is_01() || !p_shl390_cast_fu_22055_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(p_shl389_cast_fu_22044_p1.read()) - sc_biguint<16>(p_shl390_cast_fu_22055_p1.read()));
}

void ShuffleNetV2::thread_tmp_954_fu_22069_p2() {
    tmp_954_fu_22069_p2 = (!ci42_cast1_cast_reg_43734.read().is_01() || !tmp_1121_cast_fu_22065_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(ci42_cast1_cast_reg_43734.read()) + sc_bigint<17>(tmp_1121_cast_fu_22065_p1.read()));
}

void ShuffleNetV2::thread_tmp_955_fu_22136_p1() {
    tmp_955_fu_22136_p1 = grp_fu_22028_p2.read().range(6-1, 0);
}

void ShuffleNetV2::thread_tmp_957_cast_fu_18557_p1() {
    tmp_957_cast_fu_18557_p1 = esl_zext<32,9>(tmp_817_fu_18552_p2.read());
}

void ShuffleNetV2::thread_tmp_958_fu_22125_p2() {
    tmp_958_fu_22125_p2 = (!p_shl391_cast_fu_22111_p3.read().is_01() || !p_shl392_cast_fu_22118_p3.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl391_cast_fu_22111_p3.read()) - sc_biguint<8>(p_shl392_cast_fu_22118_p3.read()));
}

void ShuffleNetV2::thread_tmp_959_fu_22131_p2() {
    tmp_959_fu_22131_p2 = (!tmp_105_cast_cast_reg_43747.read().is_01() || !tmp_958_fu_22125_p2.read().is_01())? sc_lv<8>(): (sc_bigint<8>(tmp_105_cast_cast_reg_43747.read()) + sc_biguint<8>(tmp_958_fu_22125_p2.read()));
}

void ShuffleNetV2::thread_tmp_95_cast_fu_22800_p1() {
    tmp_95_cast_fu_22800_p1 = esl_sext<10,9>(tmp_95_reg_43985.read());
}

void ShuffleNetV2::thread_tmp_95_fu_22744_p2() {
    tmp_95_fu_22744_p2 = (!tmp_119_cast_cast_fu_22740_p1.read().is_01() || !tmp_114_cast_cast_reg_43954.read().is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_119_cast_cast_fu_22740_p1.read()) + sc_biguint<9>(tmp_114_cast_cast_reg_43954.read()));
}

void ShuffleNetV2::thread_tmp_960_fu_22390_p3() {
    tmp_960_fu_22390_p3 = esl_concat<6,3>(co77_reg_11024.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_961_fu_22402_p3() {
    tmp_961_fu_22402_p3 = esl_concat<6,1>(co77_reg_11024.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_962_fu_22414_p2() {
    tmp_962_fu_22414_p2 = (!p_shl394_cast_fu_22410_p1.read().is_01() || !p_shl393_cast_fu_22398_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl394_cast_fu_22410_p1.read()) + sc_biguint<10>(p_shl393_cast_fu_22398_p1.read()));
}

void ShuffleNetV2::thread_tmp_963_fu_22442_p3() {
    tmp_963_fu_22442_p3 = esl_concat<7,3>(tmp_89_fu_22436_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_964_fu_22454_p3() {
    tmp_964_fu_22454_p3 = esl_concat<7,1>(tmp_89_fu_22436_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_965_fu_22466_p2() {
    tmp_965_fu_22466_p2 = (!p_shl396_cast_fu_22462_p1.read().is_01() || !p_shl395_cast_fu_22450_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl396_cast_fu_22462_p1.read()) + sc_biguint<11>(p_shl395_cast_fu_22450_p1.read()));
}

void ShuffleNetV2::thread_tmp_966_fu_22329_p2() {
    tmp_966_fu_22329_p2 = (!h_67_cast_cast_fu_22325_p1.read().is_01() || !tmp_948_reg_43838.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h_67_cast_cast_fu_22325_p1.read()) + sc_biguint<10>(tmp_948_reg_43838.read()));
}

void ShuffleNetV2::thread_tmp_967_fu_22334_p3() {
    tmp_967_fu_22334_p3 = esl_concat<10,3>(tmp_966_fu_22329_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_968_fu_22346_p3() {
    tmp_968_fu_22346_p3 = esl_concat<10,1>(tmp_966_fu_22329_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_969_fu_22358_p2() {
    tmp_969_fu_22358_p2 = (!p_shl397_cast_fu_22342_p1.read().is_01() || !p_shl398_cast_fu_22354_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl397_cast_fu_22342_p1.read()) + sc_biguint<15>(p_shl398_cast_fu_22354_p1.read()));
}

void ShuffleNetV2::thread_tmp_96_fu_22773_p2() {
    tmp_96_fu_22773_p2 = (!p_shl58_cast_fu_22757_p1.read().is_01() || !p_shl59_cast_fu_22769_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl58_cast_fu_22757_p1.read()) - sc_biguint<8>(p_shl59_cast_fu_22769_p1.read()));
}

void ShuffleNetV2::thread_tmp_970_fu_22617_p1() {
    tmp_970_fu_22617_p1 = co79_reg_11057.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_971_fu_22651_p4() {
    tmp_971_fu_22651_p4 = co79_reg_11057.read().range(4, 1);
}

void ShuffleNetV2::thread_tmp_972_fu_22492_p2() {
    tmp_972_fu_22492_p2 = (!h_69_cast_cast_fu_22488_p1.read().is_01() || !tmp_965_reg_43895.read().is_01())? sc_lv<11>(): (sc_biguint<11>(h_69_cast_cast_fu_22488_p1.read()) + sc_biguint<11>(tmp_965_reg_43895.read()));
}

void ShuffleNetV2::thread_tmp_973_cast_fu_18840_p1() {
    tmp_973_cast_fu_18840_p1 = esl_zext<32,15>(tmp_835_fu_18835_p2.read());
}

void ShuffleNetV2::thread_tmp_973_fu_22497_p3() {
    tmp_973_fu_22497_p3 = esl_concat<11,3>(tmp_972_fu_22492_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_974_fu_22509_p3() {
    tmp_974_fu_22509_p3 = esl_concat<11,1>(tmp_972_fu_22492_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_975_fu_22521_p2() {
    tmp_975_fu_22521_p2 = (!p_shl399_cast_fu_22505_p1.read().is_01() || !p_shl400_cast_fu_22517_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl399_cast_fu_22505_p1.read()) + sc_biguint<15>(p_shl400_cast_fu_22517_p1.read()));
}

void ShuffleNetV2::thread_tmp_976_fu_22527_p2() {
    tmp_976_fu_22527_p2 = (!h_69_cast_cast1_fu_22484_p1.read().is_01() || !tmp_962_reg_43882.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h_69_cast_cast1_fu_22484_p1.read()) + sc_biguint<10>(tmp_962_reg_43882.read()));
}

void ShuffleNetV2::thread_tmp_977_fu_22532_p3() {
    tmp_977_fu_22532_p3 = esl_concat<10,3>(tmp_976_fu_22527_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_978_fu_22544_p3() {
    tmp_978_fu_22544_p3 = esl_concat<10,1>(tmp_976_fu_22527_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_979_fu_22556_p2() {
    tmp_979_fu_22556_p2 = (!p_shl401_cast_fu_22540_p1.read().is_01() || !p_shl402_cast_fu_22552_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl401_cast_fu_22540_p1.read()) + sc_biguint<14>(p_shl402_cast_fu_22552_p1.read()));
}

void ShuffleNetV2::thread_tmp_97_fu_23426_p2() {
    tmp_97_fu_23426_p2 = (!p_shl62_cast_fu_23410_p1.read().is_01() || !p_shl63_cast_fu_23422_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl62_cast_fu_23410_p1.read()) - sc_biguint<7>(p_shl63_cast_fu_23422_p1.read()));
}

void ShuffleNetV2::thread_tmp_980_fu_22380_p2() {
    tmp_980_fu_22380_p2 = (!tmp_969_reg_43859.read().is_01() || !w_68_cast_cast_fu_22376_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_969_reg_43859.read()) + sc_biguint<15>(w_68_cast_cast_fu_22376_p1.read()));
}

void ShuffleNetV2::thread_tmp_981_fu_22582_p2() {
    tmp_981_fu_22582_p2 = (!tmp_975_reg_43908.read().is_01() || !w_70_cast_cast_fu_22578_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_975_reg_43908.read()) + sc_biguint<15>(w_70_cast_cast_fu_22578_p1.read()));
}

void ShuffleNetV2::thread_tmp_982_cast_fu_19075_p1() {
    tmp_982_cast_fu_19075_p1 = esl_sext<16,15>(tmp_840_fu_19069_p2.read());
}

void ShuffleNetV2::thread_tmp_982_fu_22592_p2() {
    tmp_982_fu_22592_p2 = (!tmp_979_reg_43913.read().is_01() || !w_70_cast_cast1_fu_22574_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_979_reg_43913.read()) + sc_biguint<14>(w_70_cast_cast1_fu_22574_p1.read()));
}

void ShuffleNetV2::thread_tmp_983_cast_fu_19084_p1() {
    tmp_983_cast_fu_19084_p1 = esl_sext<32,16>(tmp_841_fu_19079_p2.read());
}

void ShuffleNetV2::thread_tmp_983_fu_22965_p1() {
    tmp_983_fu_22965_p1 = k20_reg_11101.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_984_fu_22706_p1() {
    tmp_984_fu_22706_p1 = i65_reg_11079.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_985_fu_22803_p3() {
    tmp_985_fu_22803_p3 = esl_concat<10,5>(sum32_reg_43991.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_986_fu_22814_p3() {
    tmp_986_fu_22814_p3 = esl_concat<10,3>(sum32_reg_43991.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_987_fu_22825_p2() {
    tmp_987_fu_22825_p2 = (!p_shl403_cast_fu_22810_p1.read().is_01() || !p_shl404_cast_fu_22821_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(p_shl403_cast_fu_22810_p1.read()) - sc_biguint<16>(p_shl404_cast_fu_22821_p1.read()));
}

void ShuffleNetV2::thread_tmp_988_fu_22835_p2() {
    tmp_988_fu_22835_p2 = (!ci44_cast1_cast_reg_43959.read().is_01() || !tmp_1160_cast_fu_22831_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(ci44_cast1_cast_reg_43959.read()) + sc_bigint<17>(tmp_1160_cast_fu_22831_p1.read()));
}

void ShuffleNetV2::thread_tmp_989_cast_fu_19150_p1() {
    tmp_989_cast_fu_19150_p1 = esl_sext<32,8>(tmp_846_reg_42827.read());
}

void ShuffleNetV2::thread_tmp_989_fu_22902_p1() {
    tmp_989_fu_22902_p1 = grp_fu_22794_p2.read().range(6-1, 0);
}

void ShuffleNetV2::thread_tmp_98_cast_cast_fu_21895_p1() {
    tmp_98_cast_cast_fu_21895_p1 = esl_zext<9,4>(tmp_931_fu_21885_p4.read());
}

void ShuffleNetV2::thread_tmp_98_fu_23334_p2() {
    tmp_98_fu_23334_p2 = (!p_shl60_cast_fu_23318_p1.read().is_01() || !p_shl61_cast_fu_23330_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl60_cast_fu_23318_p1.read()) - sc_biguint<7>(p_shl61_cast_fu_23330_p1.read()));
}

void ShuffleNetV2::thread_tmp_992_fu_22891_p2() {
    tmp_992_fu_22891_p2 = (!p_shl405_cast_fu_22877_p3.read().is_01() || !p_shl406_cast_fu_22884_p3.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl405_cast_fu_22877_p3.read()) - sc_biguint<8>(p_shl406_cast_fu_22884_p3.read()));
}

void ShuffleNetV2::thread_tmp_993_fu_22897_p2() {
    tmp_993_fu_22897_p2 = (!tmp_118_cast_cast_reg_43972.read().is_01() || !tmp_992_fu_22891_p2.read().is_01())? sc_lv<8>(): (sc_bigint<8>(tmp_118_cast_cast_reg_43972.read()) + sc_biguint<8>(tmp_992_fu_22891_p2.read()));
}

void ShuffleNetV2::thread_tmp_994_fu_23398_p1() {
    tmp_994_fu_23398_p1 = co83_reg_11178.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_995_fu_23432_p4() {
    tmp_995_fu_23432_p4 = co83_reg_11178.read().range(4, 1);
}

void ShuffleNetV2::thread_tmp_996_fu_23306_p1() {
    tmp_996_fu_23306_p1 = k22_reg_11167.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_997_fu_23109_p1() {
    tmp_997_fu_23109_p1 = i70_reg_11145.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_998_fu_23156_p3() {
    tmp_998_fu_23156_p3 = esl_concat<7,2>(tmp_102_fu_23147_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_999_fu_23168_p2() {
    tmp_999_fu_23168_p2 = (!p_shl407_cast_fu_23164_p1.read().is_01() || !tmp_131_cast_cast_fu_23152_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(p_shl407_cast_fu_23164_p1.read()) - sc_bigint<10>(tmp_131_cast_cast_fu_23152_p1.read()));
}

void ShuffleNetV2::thread_tmp_99_fu_23344_p2() {
    tmp_99_fu_23344_p2 = (!tmp_98_fu_23334_p2.read().is_01() || !i71_cast_reg_44159.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_98_fu_23334_p2.read()) + sc_biguint<7>(i71_cast_reg_44159.read()));
}

void ShuffleNetV2::thread_tmp_fu_15550_p3() {
    tmp_fu_15550_p3 = esl_concat<2,5>(ci_reg_9728.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_s_fu_16483_p2() {
    tmp_s_fu_16483_p2 = (!co19_cast_fu_16467_p1.read().is_01() || !ap_const_lv6_18.is_01())? sc_lv<6>(): (sc_biguint<6>(co19_cast_fu_16467_p1.read()) + sc_biguint<6>(ap_const_lv6_18));
}

void ShuffleNetV2::thread_tmp_tr_i_fu_40043_p1() {
    tmp_tr_i_fu_40043_p1 = esl_sext<9,8>(p_i_reg_13785.read());
}

void ShuffleNetV2::thread_w101_cast_cast1_fu_30812_p1() {
    w101_cast_cast1_fu_30812_p1 = esl_zext<14,2>(w101_reg_12333.read());
}

void ShuffleNetV2::thread_w101_cast_cast_fu_30816_p1() {
    w101_cast_cast_fu_30816_p1 = esl_zext<10,2>(w101_reg_12333.read());
}

void ShuffleNetV2::thread_w107_cast_cast1_fu_32379_p1() {
    w107_cast_cast1_fu_32379_p1 = esl_zext<13,2>(w107_reg_12575.read());
}

void ShuffleNetV2::thread_w107_cast_cast_fu_32383_p1() {
    w107_cast_cast_fu_32383_p1 = esl_zext<10,2>(w107_reg_12575.read());
}

void ShuffleNetV2::thread_w111_cast_cast1_fu_33715_p1() {
    w111_cast_cast1_fu_33715_p1 = esl_zext<13,2>(w111_reg_12784.read());
}

void ShuffleNetV2::thread_w111_cast_cast_fu_33719_p1() {
    w111_cast_cast_fu_33719_p1 = esl_zext<11,2>(w111_reg_12784.read());
}

void ShuffleNetV2::thread_w113_cast_cast1_fu_34488_p1() {
    w113_cast_cast1_fu_34488_p1 = esl_zext<13,2>(w113_reg_12905.read());
}

void ShuffleNetV2::thread_w113_cast_cast_fu_34492_p1() {
    w113_cast_cast_fu_34492_p1 = esl_zext<11,2>(w113_reg_12905.read());
}

void ShuffleNetV2::thread_w117_cast_cast1_fu_35884_p1() {
    w117_cast_cast1_fu_35884_p1 = esl_zext<13,2>(w117_reg_13114.read());
}

void ShuffleNetV2::thread_w117_cast_cast_fu_35888_p1() {
    w117_cast_cast_fu_35888_p1 = esl_zext<11,2>(w117_reg_13114.read());
}

void ShuffleNetV2::thread_w123_cast_cast1_fu_37411_p1() {
    w123_cast_cast1_fu_37411_p1 = esl_zext<14,2>(w123_reg_13356.read());
}

void ShuffleNetV2::thread_w123_cast_cast_fu_37415_p1() {
    w123_cast_cast_fu_37415_p1 = esl_zext<11,2>(w123_reg_13356.read());
}

void ShuffleNetV2::thread_w129_cast_cast1_fu_38942_p1() {
    w129_cast_cast1_fu_38942_p1 = esl_zext<15,2>(w129_reg_13598.read());
}

void ShuffleNetV2::thread_w129_cast_cast_fu_38946_p1() {
    w129_cast_cast_fu_38946_p1 = esl_zext<11,2>(w129_reg_13598.read());
}

void ShuffleNetV2::thread_w131_cast_cast_fu_39868_p1() {
    w131_cast_cast_fu_39868_p1 = esl_zext<11,3>(w131_reg_13752.read());
}

void ShuffleNetV2::thread_w13_cast_cast_fu_16163_p1() {
    w13_cast_cast_fu_16163_p1 = esl_zext<9,2>(w13_reg_9884.read());
}

void ShuffleNetV2::thread_w26_cast_cast1_fu_16855_p1() {
    w26_cast_cast1_fu_16855_p1 = esl_zext<9,2>(w26_reg_10029.read());
}

void ShuffleNetV2::thread_w26_cast_cast_fu_16859_p1() {
    w26_cast_cast_fu_16859_p1 = esl_zext<10,2>(w26_reg_10029.read());
}

void ShuffleNetV2::thread_w42_cast_cast1_fu_17661_p1() {
    w42_cast_cast1_fu_17661_p1 = esl_zext<9,2>(w42_reg_10207.read());
}

void ShuffleNetV2::thread_w42_cast_cast_fu_17665_p1() {
    w42_cast_cast_fu_17665_p1 = esl_zext<10,2>(w42_reg_10207.read());
}

void ShuffleNetV2::thread_w55_cast_cast1_fu_18473_p1() {
    w55_cast_cast1_fu_18473_p1 = esl_zext<9,2>(w55_reg_10385.read());
}

void ShuffleNetV2::thread_w55_cast_cast_fu_18477_p1() {
    w55_cast_cast_fu_18477_p1 = esl_zext<11,2>(w55_reg_10385.read());
}

void ShuffleNetV2::thread_w59_cast_cast1_fu_19301_p1() {
    w59_cast_cast1_fu_19301_p1 = esl_zext<12,2>(w59_reg_10551.read());
}

void ShuffleNetV2::thread_w59_cast_cast_fu_19305_p1() {
    w59_cast_cast_fu_19305_p1 = esl_zext<10,2>(w59_reg_10551.read());
}

void ShuffleNetV2::thread_w61_cast_cast1_fu_20086_p1() {
    w61_cast_cast1_fu_20086_p1 = esl_zext<11,2>(w61_reg_10672.read());
}

void ShuffleNetV2::thread_w61_cast_cast_fu_20090_p1() {
    w61_cast_cast_fu_20090_p1 = esl_zext<10,2>(w61_reg_10672.read());
}

void ShuffleNetV2::thread_w65_cast_cast1_fu_21510_p1() {
    w65_cast_cast1_fu_21510_p1 = esl_zext<13,2>(w65_reg_10881.read());
}

void ShuffleNetV2::thread_w65_cast_cast_fu_21514_p1() {
    w65_cast_cast_fu_21514_p1 = esl_zext<10,2>(w65_reg_10881.read());
}

void ShuffleNetV2::thread_w6_cast_cast_fu_15867_p1() {
    w6_cast_cast_fu_15867_p1 = esl_zext<9,2>(w6_reg_9806.read());
}

void ShuffleNetV2::thread_w71_cast_cast1_fu_23057_p1() {
    w71_cast_cast1_fu_23057_p1 = esl_zext<13,2>(w71_reg_11123.read());
}

void ShuffleNetV2::thread_w71_cast_cast_fu_23061_p1() {
    w71_cast_cast_fu_23061_p1 = esl_zext<10,2>(w71_reg_11123.read());
}

void ShuffleNetV2::thread_w77_cast_cast1_fu_24620_p1() {
    w77_cast_cast1_fu_24620_p1 = esl_zext<12,2>(w77_reg_11365.read());
}

void ShuffleNetV2::thread_w77_cast_cast_fu_24624_p1() {
    w77_cast_cast_fu_24624_p1 = esl_zext<10,2>(w77_reg_11365.read());
}

void ShuffleNetV2::thread_w83_cast_cast1_fu_26167_p1() {
    w83_cast_cast1_fu_26167_p1 = esl_zext<12,2>(w83_reg_11607.read());
}

void ShuffleNetV2::thread_w83_cast_cast_fu_26171_p1() {
    w83_cast_cast_fu_26171_p1 = esl_zext<10,2>(w83_reg_11607.read());
}

void ShuffleNetV2::thread_w89_cast_cast1_fu_27706_p1() {
    w89_cast_cast1_fu_27706_p1 = esl_zext<12,2>(w89_reg_11849.read());
}

void ShuffleNetV2::thread_w89_cast_cast_fu_27710_p1() {
    w89_cast_cast_fu_27710_p1 = esl_zext<10,2>(w89_reg_11849.read());
}

void ShuffleNetV2::thread_w95_cast_cast1_fu_29253_p1() {
    w95_cast_cast1_fu_29253_p1 = esl_zext<13,2>(w95_reg_12091.read());
}

void ShuffleNetV2::thread_w95_cast_cast_fu_29257_p1() {
    w95_cast_cast_fu_29257_p1 = esl_zext<10,2>(w95_reg_12091.read());
}

void ShuffleNetV2::thread_w_100_cast_cast1_fu_30321_p1() {
    w_100_cast_cast1_fu_30321_p1 = esl_zext<14,4>(w_100_fu_30315_p2.read());
}

void ShuffleNetV2::thread_w_100_cast_cast_fu_30325_p1() {
    w_100_cast_cast_fu_30325_p1 = esl_zext<15,4>(w_100_fu_30315_p2.read());
}

void ShuffleNetV2::thread_w_100_fu_30315_p2() {
    w_100_fu_30315_p2 = (!w99_reg_12256.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w99_reg_12256.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_102_fu_30826_p2() {
    w_102_fu_30826_p2 = (!w101_reg_12333.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w101_reg_12333.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_104_cast_cast_fu_31686_p1() {
    w_104_cast_cast_fu_31686_p1 = esl_zext<15,4>(w_104_fu_31680_p2.read());
}

void ShuffleNetV2::thread_w_104_fu_31680_p2() {
    w_104_fu_31680_p2 = (!w103_reg_12465.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w103_reg_12465.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_106_cast_cast1_fu_31884_p1() {
    w_106_cast_cast1_fu_31884_p1 = esl_zext<14,4>(w_106_fu_31878_p2.read());
}

void ShuffleNetV2::thread_w_106_cast_cast_fu_31888_p1() {
    w_106_cast_cast_fu_31888_p1 = esl_zext<15,4>(w_106_fu_31878_p2.read());
}

void ShuffleNetV2::thread_w_106_fu_31878_p2() {
    w_106_fu_31878_p2 = (!w105_reg_12498.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w105_reg_12498.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_108_fu_32393_p2() {
    w_108_fu_32393_p2 = (!w107_reg_12575.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w107_reg_12575.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_110_cast_cast_fu_33253_p1() {
    w_110_cast_cast_fu_33253_p1 = esl_zext<15,4>(w_110_fu_33247_p2.read());
}

void ShuffleNetV2::thread_w_110_fu_33247_p2() {
    w_110_fu_33247_p2 = (!w109_reg_12707.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w109_reg_12707.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_112_fu_33729_p2() {
    w_112_fu_33729_p2 = (!w111_reg_12784.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w111_reg_12784.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_114_fu_34502_p2() {
    w_114_fu_34502_p2 = (!w113_reg_12905.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w113_reg_12905.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_116_cast_cast1_fu_35413_p1() {
    w_116_cast_cast1_fu_35413_p1 = esl_zext<13,3>(w_116_fu_35407_p2.read());
}

void ShuffleNetV2::thread_w_116_cast_cast_fu_35417_p1() {
    w_116_cast_cast_fu_35417_p1 = esl_zext<14,3>(w_116_fu_35407_p2.read());
}

void ShuffleNetV2::thread_w_116_fu_35407_p2() {
    w_116_fu_35407_p2 = (!w115_reg_13037.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(w115_reg_13037.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_w_118_fu_35898_p2() {
    w_118_fu_35898_p2 = (!w117_reg_13114.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w117_reg_13114.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_120_cast_cast_fu_36742_p1() {
    w_120_cast_cast_fu_36742_p1 = esl_zext<14,3>(w_120_fu_36736_p2.read());
}

void ShuffleNetV2::thread_w_120_fu_36736_p2() {
    w_120_fu_36736_p2 = (!w119_reg_13246.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(w119_reg_13246.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_w_122_cast_cast1_fu_36940_p1() {
    w_122_cast_cast1_fu_36940_p1 = esl_zext<13,3>(w_122_fu_36934_p2.read());
}

void ShuffleNetV2::thread_w_122_cast_cast_fu_36944_p1() {
    w_122_cast_cast_fu_36944_p1 = esl_zext<14,3>(w_122_fu_36934_p2.read());
}

void ShuffleNetV2::thread_w_122_fu_36934_p2() {
    w_122_fu_36934_p2 = (!w121_reg_13279.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(w121_reg_13279.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_w_124_fu_37425_p2() {
    w_124_fu_37425_p2 = (!w123_reg_13356.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w123_reg_13356.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_126_cast_cast_fu_38273_p1() {
    w_126_cast_cast_fu_38273_p1 = esl_zext<14,3>(w_126_fu_38267_p2.read());
}

void ShuffleNetV2::thread_w_126_fu_38267_p2() {
    w_126_fu_38267_p2 = (!w125_reg_13488.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(w125_reg_13488.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_w_128_cast_cast1_fu_38471_p1() {
    w_128_cast_cast1_fu_38471_p1 = esl_zext<13,3>(w_128_fu_38465_p2.read());
}

void ShuffleNetV2::thread_w_128_cast_cast_fu_38475_p1() {
    w_128_cast_cast_fu_38475_p1 = esl_zext<14,3>(w_128_fu_38465_p2.read());
}

void ShuffleNetV2::thread_w_128_fu_38465_p2() {
    w_128_fu_38465_p2 = (!w127_reg_13521.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(w127_reg_13521.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_w_130_fu_38956_p2() {
    w_130_fu_38956_p2 = (!w129_reg_13598.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w129_reg_13598.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_133_cast_cast_fu_39897_p1() {
    w_133_cast_cast_fu_39897_p1 = esl_zext<13,3>(w_133_fu_39891_p2.read());
}

void ShuffleNetV2::thread_w_133_fu_39891_p2() {
    w_133_fu_39891_p2 = (!w131_reg_13752.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(w131_reg_13752.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_w_134_cast_cast_fu_39796_p1() {
    w_134_cast_cast_fu_39796_p1 = esl_zext<14,3>(w_1_fu_39790_p2.read());
}

void ShuffleNetV2::thread_w_134_fu_40090_p2() {
    w_134_fu_40090_p2 = (!w_i_reg_13820.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(w_i_reg_13820.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_w_1_fu_39790_p2() {
    w_1_fu_39790_p2 = (!w132_reg_13730.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(w132_reg_13730.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_w_44_cast_cast_fu_15625_p1() {
    w_44_cast_cast_fu_15625_p1 = esl_zext<8,6>(w_45_fu_15619_p2.read());
}

void ShuffleNetV2::thread_w_45_fu_15619_p2() {
    w_45_fu_15619_p2 = (!w_reg_9739.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(w_reg_9739.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void ShuffleNetV2::thread_w_46_fu_15904_p2() {
    w_46_fu_15904_p2 = (!w6_reg_9806.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w6_reg_9806.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_47_cast_cast1_fu_16613_p1() {
    w_47_cast_cast1_fu_16613_p1 = esl_zext<14,5>(w_48_fu_16607_p2.read());
}

void ShuffleNetV2::thread_w_47_cast_cast_fu_16617_p1() {
    w_47_cast_cast_fu_16617_p1 = esl_zext<15,5>(w_48_fu_16607_p2.read());
}

void ShuffleNetV2::thread_w_47_fu_16217_p2() {
    w_47_fu_16217_p2 = (!ap_const_lv2_1.is_01() || !w13_reg_9884.read().is_01())? sc_lv<2>(): (sc_biguint<2>(ap_const_lv2_1) + sc_biguint<2>(w13_reg_9884.read()));
}

void ShuffleNetV2::thread_w_48_fu_16607_p2() {
    w_48_fu_16607_p2 = (!w21_reg_9973.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(w21_reg_9973.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_w_49_cast_cast_fu_17229_p1() {
    w_49_cast_cast_fu_17229_p1 = esl_zext<15,5>(w_50_fu_17223_p2.read());
}

void ShuffleNetV2::thread_w_49_fu_16913_p2() {
    w_49_fu_16913_p2 = (!ap_const_lv2_1.is_01() || !w26_reg_10029.read().is_01())? sc_lv<2>(): (sc_biguint<2>(ap_const_lv2_1) + sc_biguint<2>(w26_reg_10029.read()));
}

void ShuffleNetV2::thread_w_50_cast_cast1_fu_17419_p1() {
    w_50_cast_cast1_fu_17419_p1 = esl_zext<14,5>(w_51_fu_17413_p2.read());
}

void ShuffleNetV2::thread_w_50_cast_cast_fu_17423_p1() {
    w_50_cast_cast_fu_17423_p1 = esl_zext<15,5>(w_51_fu_17413_p2.read());
}

void ShuffleNetV2::thread_w_50_fu_17223_p2() {
    w_50_fu_17223_p2 = (!w34_reg_10118.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(w34_reg_10118.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_w_51_fu_17413_p2() {
    w_51_fu_17413_p2 = (!w37_reg_10151.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(w37_reg_10151.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_w_52_cast_cast_fu_18017_p1() {
    w_52_cast_cast_fu_18017_p1 = esl_zext<15,5>(w_53_fu_18011_p2.read());
}

void ShuffleNetV2::thread_w_52_fu_17719_p2() {
    w_52_fu_17719_p2 = (!ap_const_lv2_1.is_01() || !w42_reg_10207.read().is_01())? sc_lv<2>(): (sc_biguint<2>(ap_const_lv2_1) + sc_biguint<2>(w42_reg_10207.read()));
}

void ShuffleNetV2::thread_w_53_fu_18011_p2() {
    w_53_fu_18011_p2 = (!w50_reg_10296.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(w50_reg_10296.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_w_54_cast_cast1_fu_18207_p1() {
    w_54_cast_cast1_fu_18207_p1 = esl_zext<14,5>(w_54_fu_18201_p2.read());
}

void ShuffleNetV2::thread_w_54_cast_cast_fu_18211_p1() {
    w_54_cast_cast_fu_18211_p1 = esl_zext<15,5>(w_54_fu_18201_p2.read());
}

void ShuffleNetV2::thread_w_54_fu_18201_p2() {
    w_54_fu_18201_p2 = (!w53_reg_10329.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(w53_reg_10329.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_w_56_fu_18531_p2() {
    w_56_fu_18531_p2 = (!ap_const_lv2_1.is_01() || !w55_reg_10385.read().is_01())? sc_lv<2>(): (sc_biguint<2>(ap_const_lv2_1) + sc_biguint<2>(w55_reg_10385.read()));
}

void ShuffleNetV2::thread_w_58_cast_cast_fu_18831_p1() {
    w_58_cast_cast_fu_18831_p1 = esl_zext<15,5>(w_58_fu_18825_p2.read());
}

void ShuffleNetV2::thread_w_58_fu_18825_p2() {
    w_58_fu_18825_p2 = (!w57_reg_10474.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(w57_reg_10474.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_w_60_fu_19315_p2() {
    w_60_fu_19315_p2 = (!w59_reg_10551.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w59_reg_10551.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_62_fu_20100_p2() {
    w_62_fu_20100_p2 = (!w61_reg_10672.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w61_reg_10672.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_64_cast_cast1_fu_21027_p1() {
    w_64_cast_cast1_fu_21027_p1 = esl_zext<14,4>(w_64_fu_21021_p2.read());
}

void ShuffleNetV2::thread_w_64_cast_cast_fu_21031_p1() {
    w_64_cast_cast_fu_21031_p1 = esl_zext<15,4>(w_64_fu_21021_p2.read());
}

void ShuffleNetV2::thread_w_64_fu_21021_p2() {
    w_64_fu_21021_p2 = (!w63_reg_10804.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w63_reg_10804.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_66_fu_21524_p2() {
    w_66_fu_21524_p2 = (!w65_reg_10881.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w65_reg_10881.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_68_cast_cast_fu_22376_p1() {
    w_68_cast_cast_fu_22376_p1 = esl_zext<15,4>(w_68_fu_22370_p2.read());
}

void ShuffleNetV2::thread_w_68_fu_22370_p2() {
    w_68_fu_22370_p2 = (!w67_reg_11013.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w67_reg_11013.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_70_cast_cast1_fu_22574_p1() {
    w_70_cast_cast1_fu_22574_p1 = esl_zext<14,4>(w_70_fu_22568_p2.read());
}

void ShuffleNetV2::thread_w_70_cast_cast_fu_22578_p1() {
    w_70_cast_cast_fu_22578_p1 = esl_zext<15,4>(w_70_fu_22568_p2.read());
}

void ShuffleNetV2::thread_w_70_fu_22568_p2() {
    w_70_fu_22568_p2 = (!w69_reg_11046.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w69_reg_11046.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_72_fu_23071_p2() {
    w_72_fu_23071_p2 = (!w71_reg_11123.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w71_reg_11123.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_74_cast_cast_fu_23927_p1() {
    w_74_cast_cast_fu_23927_p1 = esl_zext<15,4>(w_74_fu_23921_p2.read());
}

void ShuffleNetV2::thread_w_74_fu_23921_p2() {
    w_74_fu_23921_p2 = (!w73_reg_11255.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w73_reg_11255.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_76_cast_cast1_fu_24125_p1() {
    w_76_cast_cast1_fu_24125_p1 = esl_zext<14,4>(w_76_fu_24119_p2.read());
}

void ShuffleNetV2::thread_w_76_cast_cast_fu_24129_p1() {
    w_76_cast_cast_fu_24129_p1 = esl_zext<15,4>(w_76_fu_24119_p2.read());
}

void ShuffleNetV2::thread_w_76_fu_24119_p2() {
    w_76_fu_24119_p2 = (!w75_reg_11288.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w75_reg_11288.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_78_fu_24634_p2() {
    w_78_fu_24634_p2 = (!w77_reg_11365.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w77_reg_11365.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_80_cast_cast_fu_25486_p1() {
    w_80_cast_cast_fu_25486_p1 = esl_zext<15,4>(w_80_fu_25480_p2.read());
}

void ShuffleNetV2::thread_w_80_fu_25480_p2() {
    w_80_fu_25480_p2 = (!w79_reg_11497.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w79_reg_11497.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_82_cast_cast1_fu_25684_p1() {
    w_82_cast_cast1_fu_25684_p1 = esl_zext<14,4>(w_82_fu_25678_p2.read());
}

void ShuffleNetV2::thread_w_82_cast_cast_fu_25688_p1() {
    w_82_cast_cast_fu_25688_p1 = esl_zext<15,4>(w_82_fu_25678_p2.read());
}

void ShuffleNetV2::thread_w_82_fu_25678_p2() {
    w_82_fu_25678_p2 = (!w81_reg_11530.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w81_reg_11530.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_84_fu_26181_p2() {
    w_84_fu_26181_p2 = (!w83_reg_11607.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w83_reg_11607.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_86_cast_cast_fu_27025_p1() {
    w_86_cast_cast_fu_27025_p1 = esl_zext<15,4>(w_86_fu_27019_p2.read());
}

void ShuffleNetV2::thread_w_86_fu_27019_p2() {
    w_86_fu_27019_p2 = (!w85_reg_11739.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w85_reg_11739.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_88_cast_cast1_fu_27223_p1() {
    w_88_cast_cast1_fu_27223_p1 = esl_zext<14,4>(w_88_fu_27217_p2.read());
}

void ShuffleNetV2::thread_w_88_cast_cast_fu_27227_p1() {
    w_88_cast_cast_fu_27227_p1 = esl_zext<15,4>(w_88_fu_27217_p2.read());
}

void ShuffleNetV2::thread_w_88_fu_27217_p2() {
    w_88_fu_27217_p2 = (!w87_reg_11772.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w87_reg_11772.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_90_fu_27720_p2() {
    w_90_fu_27720_p2 = (!w89_reg_11849.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w89_reg_11849.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_92_cast_cast_fu_28572_p1() {
    w_92_cast_cast_fu_28572_p1 = esl_zext<15,4>(w_92_fu_28566_p2.read());
}

void ShuffleNetV2::thread_w_92_fu_28566_p2() {
    w_92_fu_28566_p2 = (!w91_reg_11981.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w91_reg_11981.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_94_cast_cast1_fu_28770_p1() {
    w_94_cast_cast1_fu_28770_p1 = esl_zext<14,4>(w_94_fu_28764_p2.read());
}

void ShuffleNetV2::thread_w_94_cast_cast_fu_28774_p1() {
    w_94_cast_cast_fu_28774_p1 = esl_zext<15,4>(w_94_fu_28764_p2.read());
}

void ShuffleNetV2::thread_w_94_fu_28764_p2() {
    w_94_fu_28764_p2 = (!w93_reg_12014.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w93_reg_12014.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_96_fu_29267_p2() {
    w_96_fu_29267_p2 = (!w95_reg_12091.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w95_reg_12091.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_98_cast_cast_fu_30123_p1() {
    w_98_cast_cast_fu_30123_p1 = esl_zext<15,4>(w_98_fu_30117_p2.read());
}

void ShuffleNetV2::thread_w_98_fu_30117_p2() {
    w_98_fu_30117_p2 = (!w97_reg_12223.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w97_reg_12223.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_cast_cast_fu_15592_p1() {
    w_cast_cast_fu_15592_p1 = esl_zext<8,6>(w_reg_9739.read());
}

void ShuffleNetV2::thread_w_i_cast_cast_fu_40063_p1() {
    w_i_cast_cast_fu_40063_p1 = esl_zext<12,3>(w_i_reg_13820.read());
}

void ShuffleNetV2::thread_weights_24_1_3x3_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state332.read())) {
        weights_24_1_3x3_V_address0 = weights_24_1_3x3_V_a_4_reg_42519.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state259.read())) {
        weights_24_1_3x3_V_address0 = weights_24_1_3x3_V_a_3_reg_42030.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state186.read())) {
        weights_24_1_3x3_V_address0 = weights_24_1_3x3_V_a_2_reg_41541.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read())) {
        weights_24_1_3x3_V_address0 = weights_24_1_3x3_V_a_1_reg_41090.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read())) {
        weights_24_1_3x3_V_address0 = weights_24_1_3x3_V_a_reg_40866.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read())) {
        weights_24_1_3x3_V_address0 = grp_subconv_3x3_32_strid_fu_15335_weight_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state196.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state269.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state342.read()))) {
        weights_24_1_3x3_V_address0 = grp_subconv_3x3_16_no_re_fu_14897_weight_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        weights_24_1_3x3_V_address0 = grp_subconv_3x3_32_strid_1_fu_14839_weight_V_address0.read();
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
        weights_24_1_3x3_V_ce0 = grp_subconv_3x3_32_strid_fu_15335_weight_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state196.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state269.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state342.read()))) {
        weights_24_1_3x3_V_ce0 = grp_subconv_3x3_16_no_re_fu_14897_weight_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        weights_24_1_3x3_V_ce0 = grp_subconv_3x3_32_strid_1_fu_14839_weight_V_ce0.read();
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
        weights_24_24_1x1_V_10_address0 = weights_24_24_1x1_V_201_reg_42610.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read())) {
        weights_24_24_1x1_V_10_address0 = weights_24_24_1x1_V_177_reg_42374.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read())) {
        weights_24_24_1x1_V_10_address0 = weights_24_24_1x1_V_153_reg_42121.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read())) {
        weights_24_24_1x1_V_10_address0 = weights_24_24_1x1_V_129_reg_41891.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        weights_24_24_1x1_V_10_address0 = weights_24_24_1x1_V_105_reg_41626.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read())) {
        weights_24_24_1x1_V_10_address0 = weights_24_24_1x1_V_81_reg_41402.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read())) {
        weights_24_24_1x1_V_10_address0 = weights_24_24_1x1_V_57_reg_41187.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        weights_24_24_1x1_V_10_address0 = weights_24_24_1x1_V_33_reg_40957.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        weights_24_24_1x1_V_10_address0 = weights_24_24_1x1_V_9_reg_40732.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_10_address0 = grp_subconv_1x1_16_p_fu_14351_weight_10_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_10_address0 = grp_subconv_1x1_32_p_fu_14247_weight_10_V_address0.read();
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
        weights_24_24_1x1_V_10_ce0 = grp_subconv_1x1_16_p_fu_14351_weight_10_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_10_ce0 = grp_subconv_1x1_32_p_fu_14247_weight_10_V_ce0.read();
    } else {
        weights_24_24_1x1_V_10_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_10_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && 
          esl_seteq<1,5,5>(co_reg_9761.read(), ap_const_lv5_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) && 
          esl_seteq<1,5,5>(co9_reg_9839.read(), ap_const_lv5_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) && 
          esl_seteq<1,5,5>(co16_reg_9917.read(), ap_const_lv5_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) && 
          esl_seteq<1,5,5>(co22_reg_9984.read(), ap_const_lv5_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) && 
          esl_seteq<1,5,5>(co29_reg_10062.read(), ap_const_lv5_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) && 
          esl_seteq<1,5,5>(co38_reg_10162.read(), ap_const_lv5_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) && 
          esl_seteq<1,5,5>(co44_reg_10240.read(), ap_const_lv5_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) && 
          esl_seteq<1,5,5>(co49_reg_10340.read(), ap_const_lv5_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()) && 
          esl_seteq<1,5,5>(co54_reg_10418.read(), ap_const_lv5_A)))) {
        weights_24_24_1x1_V_10_we0 = ap_const_logic_1;
    } else {
        weights_24_24_1x1_V_10_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_11_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read())) {
        weights_24_24_1x1_V_11_address0 = weights_24_24_1x1_V_194_reg_42575.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read())) {
        weights_24_24_1x1_V_11_address0 = weights_24_24_1x1_V_170_reg_42339.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read())) {
        weights_24_24_1x1_V_11_address0 = weights_24_24_1x1_V_146_reg_42086.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read())) {
        weights_24_24_1x1_V_11_address0 = weights_24_24_1x1_V_122_reg_41856.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        weights_24_24_1x1_V_11_address0 = weights_24_24_1x1_V_98_reg_41591.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read())) {
        weights_24_24_1x1_V_11_address0 = weights_24_24_1x1_V_74_reg_41367.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read())) {
        weights_24_24_1x1_V_11_address0 = weights_24_24_1x1_V_50_reg_41152.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        weights_24_24_1x1_V_11_address0 = weights_24_24_1x1_V_26_reg_40922.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        weights_24_24_1x1_V_11_address0 = weights_24_24_1x1_V_2_reg_40697.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_11_address0 = grp_subconv_1x1_16_p_fu_14351_weight_11_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_11_address0 = grp_subconv_1x1_32_p_fu_14247_weight_11_V_address0.read();
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
        weights_24_24_1x1_V_11_ce0 = grp_subconv_1x1_16_p_fu_14351_weight_11_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_11_ce0 = grp_subconv_1x1_32_p_fu_14247_weight_11_V_ce0.read();
    } else {
        weights_24_24_1x1_V_11_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_11_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && 
          esl_seteq<1,5,5>(co_reg_9761.read(), ap_const_lv5_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) && 
          esl_seteq<1,5,5>(co9_reg_9839.read(), ap_const_lv5_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) && 
          esl_seteq<1,5,5>(co16_reg_9917.read(), ap_const_lv5_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) && 
          esl_seteq<1,5,5>(co22_reg_9984.read(), ap_const_lv5_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) && 
          esl_seteq<1,5,5>(co29_reg_10062.read(), ap_const_lv5_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) && 
          esl_seteq<1,5,5>(co38_reg_10162.read(), ap_const_lv5_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) && 
          esl_seteq<1,5,5>(co44_reg_10240.read(), ap_const_lv5_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) && 
          esl_seteq<1,5,5>(co49_reg_10340.read(), ap_const_lv5_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()) && 
          esl_seteq<1,5,5>(co54_reg_10418.read(), ap_const_lv5_B)))) {
        weights_24_24_1x1_V_11_we0 = ap_const_logic_1;
    } else {
        weights_24_24_1x1_V_11_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_12_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read())) {
        weights_24_24_1x1_V_12_address0 = weights_24_24_1x1_V_200_reg_42605.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read())) {
        weights_24_24_1x1_V_12_address0 = weights_24_24_1x1_V_176_reg_42369.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read())) {
        weights_24_24_1x1_V_12_address0 = weights_24_24_1x1_V_152_reg_42116.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read())) {
        weights_24_24_1x1_V_12_address0 = weights_24_24_1x1_V_128_reg_41886.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        weights_24_24_1x1_V_12_address0 = weights_24_24_1x1_V_104_reg_41621.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read())) {
        weights_24_24_1x1_V_12_address0 = weights_24_24_1x1_V_80_reg_41397.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read())) {
        weights_24_24_1x1_V_12_address0 = weights_24_24_1x1_V_56_reg_41182.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        weights_24_24_1x1_V_12_address0 = weights_24_24_1x1_V_32_reg_40952.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        weights_24_24_1x1_V_12_address0 = weights_24_24_1x1_V_8_reg_40727.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_12_address0 = grp_subconv_1x1_16_p_fu_14351_weight_12_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_12_address0 = grp_subconv_1x1_32_p_fu_14247_weight_12_V_address0.read();
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
        weights_24_24_1x1_V_12_ce0 = grp_subconv_1x1_16_p_fu_14351_weight_12_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_12_ce0 = grp_subconv_1x1_32_p_fu_14247_weight_12_V_ce0.read();
    } else {
        weights_24_24_1x1_V_12_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_12_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && 
          esl_seteq<1,5,5>(co_reg_9761.read(), ap_const_lv5_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) && 
          esl_seteq<1,5,5>(co9_reg_9839.read(), ap_const_lv5_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) && 
          esl_seteq<1,5,5>(co16_reg_9917.read(), ap_const_lv5_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) && 
          esl_seteq<1,5,5>(co22_reg_9984.read(), ap_const_lv5_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) && 
          esl_seteq<1,5,5>(co29_reg_10062.read(), ap_const_lv5_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) && 
          esl_seteq<1,5,5>(co38_reg_10162.read(), ap_const_lv5_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) && 
          esl_seteq<1,5,5>(co44_reg_10240.read(), ap_const_lv5_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) && 
          esl_seteq<1,5,5>(co49_reg_10340.read(), ap_const_lv5_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()) && 
          esl_seteq<1,5,5>(co54_reg_10418.read(), ap_const_lv5_C)))) {
        weights_24_24_1x1_V_12_we0 = ap_const_logic_1;
    } else {
        weights_24_24_1x1_V_12_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_13_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read())) {
        weights_24_24_1x1_V_13_address0 = weights_24_24_1x1_V_209_reg_42650.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read())) {
        weights_24_24_1x1_V_13_address0 = weights_24_24_1x1_V_185_reg_42414.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read())) {
        weights_24_24_1x1_V_13_address0 = weights_24_24_1x1_V_161_reg_42161.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read())) {
        weights_24_24_1x1_V_13_address0 = weights_24_24_1x1_V_137_reg_41931.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        weights_24_24_1x1_V_13_address0 = weights_24_24_1x1_V_113_reg_41666.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read())) {
        weights_24_24_1x1_V_13_address0 = weights_24_24_1x1_V_89_reg_41442.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read())) {
        weights_24_24_1x1_V_13_address0 = weights_24_24_1x1_V_65_reg_41227.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        weights_24_24_1x1_V_13_address0 = weights_24_24_1x1_V_41_reg_40997.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        weights_24_24_1x1_V_13_address0 = weights_24_24_1x1_V_17_reg_40772.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_13_address0 = grp_subconv_1x1_16_p_fu_14351_weight_13_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_13_address0 = grp_subconv_1x1_32_p_fu_14247_weight_13_V_address0.read();
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
        weights_24_24_1x1_V_13_ce0 = grp_subconv_1x1_16_p_fu_14351_weight_13_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_13_ce0 = grp_subconv_1x1_32_p_fu_14247_weight_13_V_ce0.read();
    } else {
        weights_24_24_1x1_V_13_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_13_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && 
          esl_seteq<1,5,5>(co_reg_9761.read(), ap_const_lv5_D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) && 
          esl_seteq<1,5,5>(co9_reg_9839.read(), ap_const_lv5_D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) && 
          esl_seteq<1,5,5>(co16_reg_9917.read(), ap_const_lv5_D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) && 
          esl_seteq<1,5,5>(co22_reg_9984.read(), ap_const_lv5_D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) && 
          esl_seteq<1,5,5>(co29_reg_10062.read(), ap_const_lv5_D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) && 
          esl_seteq<1,5,5>(co38_reg_10162.read(), ap_const_lv5_D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) && 
          esl_seteq<1,5,5>(co44_reg_10240.read(), ap_const_lv5_D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) && 
          esl_seteq<1,5,5>(co49_reg_10340.read(), ap_const_lv5_D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()) && 
          esl_seteq<1,5,5>(co54_reg_10418.read(), ap_const_lv5_D)))) {
        weights_24_24_1x1_V_13_we0 = ap_const_logic_1;
    } else {
        weights_24_24_1x1_V_13_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_14_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read())) {
        weights_24_24_1x1_V_14_address0 = weights_24_24_1x1_V_203_reg_42620.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read())) {
        weights_24_24_1x1_V_14_address0 = weights_24_24_1x1_V_179_reg_42384.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read())) {
        weights_24_24_1x1_V_14_address0 = weights_24_24_1x1_V_155_reg_42131.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read())) {
        weights_24_24_1x1_V_14_address0 = weights_24_24_1x1_V_131_reg_41901.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        weights_24_24_1x1_V_14_address0 = weights_24_24_1x1_V_107_reg_41636.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read())) {
        weights_24_24_1x1_V_14_address0 = weights_24_24_1x1_V_83_reg_41412.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read())) {
        weights_24_24_1x1_V_14_address0 = weights_24_24_1x1_V_59_reg_41197.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        weights_24_24_1x1_V_14_address0 = weights_24_24_1x1_V_35_reg_40967.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        weights_24_24_1x1_V_14_address0 = weights_24_24_1x1_V_11_reg_40742.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_14_address0 = grp_subconv_1x1_16_p_fu_14351_weight_14_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_14_address0 = grp_subconv_1x1_32_p_fu_14247_weight_14_V_address0.read();
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
        weights_24_24_1x1_V_14_ce0 = grp_subconv_1x1_16_p_fu_14351_weight_14_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_14_ce0 = grp_subconv_1x1_32_p_fu_14247_weight_14_V_ce0.read();
    } else {
        weights_24_24_1x1_V_14_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_14_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && 
          esl_seteq<1,5,5>(co_reg_9761.read(), ap_const_lv5_E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) && 
          esl_seteq<1,5,5>(co9_reg_9839.read(), ap_const_lv5_E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) && 
          esl_seteq<1,5,5>(co16_reg_9917.read(), ap_const_lv5_E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) && 
          esl_seteq<1,5,5>(co22_reg_9984.read(), ap_const_lv5_E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) && 
          esl_seteq<1,5,5>(co29_reg_10062.read(), ap_const_lv5_E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) && 
          esl_seteq<1,5,5>(co38_reg_10162.read(), ap_const_lv5_E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) && 
          esl_seteq<1,5,5>(co44_reg_10240.read(), ap_const_lv5_E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) && 
          esl_seteq<1,5,5>(co49_reg_10340.read(), ap_const_lv5_E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()) && 
          esl_seteq<1,5,5>(co54_reg_10418.read(), ap_const_lv5_E)))) {
        weights_24_24_1x1_V_14_we0 = ap_const_logic_1;
    } else {
        weights_24_24_1x1_V_14_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_15_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read())) {
        weights_24_24_1x1_V_15_address0 = weights_24_24_1x1_V_214_reg_42675.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read())) {
        weights_24_24_1x1_V_15_address0 = weights_24_24_1x1_V_190_reg_42439.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read())) {
        weights_24_24_1x1_V_15_address0 = weights_24_24_1x1_V_166_reg_42186.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read())) {
        weights_24_24_1x1_V_15_address0 = weights_24_24_1x1_V_142_reg_41956.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        weights_24_24_1x1_V_15_address0 = weights_24_24_1x1_V_118_reg_41691.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read())) {
        weights_24_24_1x1_V_15_address0 = weights_24_24_1x1_V_94_reg_41467.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read())) {
        weights_24_24_1x1_V_15_address0 = weights_24_24_1x1_V_70_reg_41252.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        weights_24_24_1x1_V_15_address0 = weights_24_24_1x1_V_46_reg_41022.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        weights_24_24_1x1_V_15_address0 = weights_24_24_1x1_V_22_reg_40797.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_15_address0 = grp_subconv_1x1_16_p_fu_14351_weight_15_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_15_address0 = grp_subconv_1x1_32_p_fu_14247_weight_15_V_address0.read();
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
        weights_24_24_1x1_V_15_ce0 = grp_subconv_1x1_16_p_fu_14351_weight_15_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_15_ce0 = grp_subconv_1x1_32_p_fu_14247_weight_15_V_ce0.read();
    } else {
        weights_24_24_1x1_V_15_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_15_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && 
          esl_seteq<1,5,5>(co_reg_9761.read(), ap_const_lv5_F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) && 
          esl_seteq<1,5,5>(co9_reg_9839.read(), ap_const_lv5_F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) && 
          esl_seteq<1,5,5>(co16_reg_9917.read(), ap_const_lv5_F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) && 
          esl_seteq<1,5,5>(co22_reg_9984.read(), ap_const_lv5_F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) && 
          esl_seteq<1,5,5>(co29_reg_10062.read(), ap_const_lv5_F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) && 
          esl_seteq<1,5,5>(co38_reg_10162.read(), ap_const_lv5_F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) && 
          esl_seteq<1,5,5>(co44_reg_10240.read(), ap_const_lv5_F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) && 
          esl_seteq<1,5,5>(co49_reg_10340.read(), ap_const_lv5_F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()) && 
          esl_seteq<1,5,5>(co54_reg_10418.read(), ap_const_lv5_F)))) {
        weights_24_24_1x1_V_15_we0 = ap_const_logic_1;
    } else {
        weights_24_24_1x1_V_15_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_16_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read())) {
        weights_24_24_1x1_V_16_address0 = weights_24_24_1x1_V_206_reg_42635.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read())) {
        weights_24_24_1x1_V_16_address0 = weights_24_24_1x1_V_182_reg_42399.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read())) {
        weights_24_24_1x1_V_16_address0 = weights_24_24_1x1_V_158_reg_42146.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read())) {
        weights_24_24_1x1_V_16_address0 = weights_24_24_1x1_V_134_reg_41916.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        weights_24_24_1x1_V_16_address0 = weights_24_24_1x1_V_110_reg_41651.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read())) {
        weights_24_24_1x1_V_16_address0 = weights_24_24_1x1_V_86_reg_41427.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read())) {
        weights_24_24_1x1_V_16_address0 = weights_24_24_1x1_V_62_reg_41212.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        weights_24_24_1x1_V_16_address0 = weights_24_24_1x1_V_38_reg_40982.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        weights_24_24_1x1_V_16_address0 = weights_24_24_1x1_V_14_reg_40757.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_16_address0 = grp_subconv_1x1_16_p_fu_14351_weight_16_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_16_address0 = grp_subconv_1x1_32_p_fu_14247_weight_16_V_address0.read();
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
        weights_24_24_1x1_V_16_ce0 = grp_subconv_1x1_16_p_fu_14351_weight_16_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_16_ce0 = grp_subconv_1x1_32_p_fu_14247_weight_16_V_ce0.read();
    } else {
        weights_24_24_1x1_V_16_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_16_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && 
          esl_seteq<1,5,5>(co_reg_9761.read(), ap_const_lv5_10)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) && 
          esl_seteq<1,5,5>(co9_reg_9839.read(), ap_const_lv5_10)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) && 
          esl_seteq<1,5,5>(co16_reg_9917.read(), ap_const_lv5_10)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) && 
          esl_seteq<1,5,5>(co22_reg_9984.read(), ap_const_lv5_10)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) && 
          esl_seteq<1,5,5>(co29_reg_10062.read(), ap_const_lv5_10)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) && 
          esl_seteq<1,5,5>(co38_reg_10162.read(), ap_const_lv5_10)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) && 
          esl_seteq<1,5,5>(co44_reg_10240.read(), ap_const_lv5_10)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) && 
          esl_seteq<1,5,5>(co49_reg_10340.read(), ap_const_lv5_10)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()) && 
          esl_seteq<1,5,5>(co54_reg_10418.read(), ap_const_lv5_10)))) {
        weights_24_24_1x1_V_16_we0 = ap_const_logic_1;
    } else {
        weights_24_24_1x1_V_16_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_17_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read())) {
        weights_24_24_1x1_V_17_address0 = weights_24_24_1x1_V_195_reg_42580.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read())) {
        weights_24_24_1x1_V_17_address0 = weights_24_24_1x1_V_171_reg_42344.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read())) {
        weights_24_24_1x1_V_17_address0 = weights_24_24_1x1_V_147_reg_42091.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read())) {
        weights_24_24_1x1_V_17_address0 = weights_24_24_1x1_V_123_reg_41861.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        weights_24_24_1x1_V_17_address0 = weights_24_24_1x1_V_99_reg_41596.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read())) {
        weights_24_24_1x1_V_17_address0 = weights_24_24_1x1_V_75_reg_41372.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read())) {
        weights_24_24_1x1_V_17_address0 = weights_24_24_1x1_V_51_reg_41157.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        weights_24_24_1x1_V_17_address0 = weights_24_24_1x1_V_27_reg_40927.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        weights_24_24_1x1_V_17_address0 = weights_24_24_1x1_V_3_reg_40702.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_17_address0 = grp_subconv_1x1_16_p_fu_14351_weight_17_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_17_address0 = grp_subconv_1x1_32_p_fu_14247_weight_17_V_address0.read();
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
        weights_24_24_1x1_V_17_ce0 = grp_subconv_1x1_16_p_fu_14351_weight_17_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_17_ce0 = grp_subconv_1x1_32_p_fu_14247_weight_17_V_ce0.read();
    } else {
        weights_24_24_1x1_V_17_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_17_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && 
          esl_seteq<1,5,5>(co_reg_9761.read(), ap_const_lv5_11)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) && 
          esl_seteq<1,5,5>(co9_reg_9839.read(), ap_const_lv5_11)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) && 
          esl_seteq<1,5,5>(co16_reg_9917.read(), ap_const_lv5_11)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) && 
          esl_seteq<1,5,5>(co22_reg_9984.read(), ap_const_lv5_11)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) && 
          esl_seteq<1,5,5>(co29_reg_10062.read(), ap_const_lv5_11)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) && 
          esl_seteq<1,5,5>(co38_reg_10162.read(), ap_const_lv5_11)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) && 
          esl_seteq<1,5,5>(co44_reg_10240.read(), ap_const_lv5_11)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) && 
          esl_seteq<1,5,5>(co49_reg_10340.read(), ap_const_lv5_11)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()) && 
          esl_seteq<1,5,5>(co54_reg_10418.read(), ap_const_lv5_11)))) {
        weights_24_24_1x1_V_17_we0 = ap_const_logic_1;
    } else {
        weights_24_24_1x1_V_17_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_18_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read())) {
        weights_24_24_1x1_V_18_address0 = weights_24_24_1x1_V_211_reg_42660.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read())) {
        weights_24_24_1x1_V_18_address0 = weights_24_24_1x1_V_187_reg_42424.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read())) {
        weights_24_24_1x1_V_18_address0 = weights_24_24_1x1_V_163_reg_42171.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read())) {
        weights_24_24_1x1_V_18_address0 = weights_24_24_1x1_V_139_reg_41941.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        weights_24_24_1x1_V_18_address0 = weights_24_24_1x1_V_115_reg_41676.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read())) {
        weights_24_24_1x1_V_18_address0 = weights_24_24_1x1_V_91_reg_41452.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read())) {
        weights_24_24_1x1_V_18_address0 = weights_24_24_1x1_V_67_reg_41237.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        weights_24_24_1x1_V_18_address0 = weights_24_24_1x1_V_43_reg_41007.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        weights_24_24_1x1_V_18_address0 = weights_24_24_1x1_V_19_reg_40782.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_18_address0 = grp_subconv_1x1_16_p_fu_14351_weight_18_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_18_address0 = grp_subconv_1x1_32_p_fu_14247_weight_18_V_address0.read();
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
        weights_24_24_1x1_V_18_ce0 = grp_subconv_1x1_16_p_fu_14351_weight_18_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_18_ce0 = grp_subconv_1x1_32_p_fu_14247_weight_18_V_ce0.read();
    } else {
        weights_24_24_1x1_V_18_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_18_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && 
          esl_seteq<1,5,5>(co_reg_9761.read(), ap_const_lv5_12)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) && 
          esl_seteq<1,5,5>(co9_reg_9839.read(), ap_const_lv5_12)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) && 
          esl_seteq<1,5,5>(co16_reg_9917.read(), ap_const_lv5_12)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) && 
          esl_seteq<1,5,5>(co22_reg_9984.read(), ap_const_lv5_12)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) && 
          esl_seteq<1,5,5>(co29_reg_10062.read(), ap_const_lv5_12)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) && 
          esl_seteq<1,5,5>(co38_reg_10162.read(), ap_const_lv5_12)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) && 
          esl_seteq<1,5,5>(co44_reg_10240.read(), ap_const_lv5_12)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) && 
          esl_seteq<1,5,5>(co49_reg_10340.read(), ap_const_lv5_12)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()) && 
          esl_seteq<1,5,5>(co54_reg_10418.read(), ap_const_lv5_12)))) {
        weights_24_24_1x1_V_18_we0 = ap_const_logic_1;
    } else {
        weights_24_24_1x1_V_18_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_19_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read())) {
        weights_24_24_1x1_V_19_address0 = weights_24_24_1x1_V_192_reg_42565.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read())) {
        weights_24_24_1x1_V_19_address0 = weights_24_24_1x1_V_168_reg_42329.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read())) {
        weights_24_24_1x1_V_19_address0 = weights_24_24_1x1_V_144_reg_42076.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read())) {
        weights_24_24_1x1_V_19_address0 = weights_24_24_1x1_V_120_reg_41846.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        weights_24_24_1x1_V_19_address0 = weights_24_24_1x1_V_96_reg_41581.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read())) {
        weights_24_24_1x1_V_19_address0 = weights_24_24_1x1_V_72_reg_41357.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read())) {
        weights_24_24_1x1_V_19_address0 = weights_24_24_1x1_V_48_reg_41142.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        weights_24_24_1x1_V_19_address0 = weights_24_24_1x1_V_24_reg_40912.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        weights_24_24_1x1_V_19_address0 = weights_24_24_1x1_V_s_reg_40687.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_19_address0 = grp_subconv_1x1_16_p_fu_14351_weight_19_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_19_address0 = grp_subconv_1x1_32_p_fu_14247_weight_19_V_address0.read();
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
        weights_24_24_1x1_V_19_ce0 = grp_subconv_1x1_16_p_fu_14351_weight_19_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_19_ce0 = grp_subconv_1x1_32_p_fu_14247_weight_19_V_ce0.read();
    } else {
        weights_24_24_1x1_V_19_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_19_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && 
          esl_seteq<1,5,5>(co_reg_9761.read(), ap_const_lv5_13)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) && 
          esl_seteq<1,5,5>(co9_reg_9839.read(), ap_const_lv5_13)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) && 
          esl_seteq<1,5,5>(co16_reg_9917.read(), ap_const_lv5_13)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) && 
          esl_seteq<1,5,5>(co22_reg_9984.read(), ap_const_lv5_13)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) && 
          esl_seteq<1,5,5>(co29_reg_10062.read(), ap_const_lv5_13)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) && 
          esl_seteq<1,5,5>(co38_reg_10162.read(), ap_const_lv5_13)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) && 
          esl_seteq<1,5,5>(co44_reg_10240.read(), ap_const_lv5_13)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) && 
          esl_seteq<1,5,5>(co49_reg_10340.read(), ap_const_lv5_13)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()) && 
          esl_seteq<1,5,5>(co54_reg_10418.read(), ap_const_lv5_13)))) {
        weights_24_24_1x1_V_19_we0 = ap_const_logic_1;
    } else {
        weights_24_24_1x1_V_19_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read())) {
        weights_24_24_1x1_V_1_address0 = weights_24_24_1x1_V_207_reg_42640.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read())) {
        weights_24_24_1x1_V_1_address0 = weights_24_24_1x1_V_183_reg_42404.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read())) {
        weights_24_24_1x1_V_1_address0 = weights_24_24_1x1_V_159_reg_42151.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read())) {
        weights_24_24_1x1_V_1_address0 = weights_24_24_1x1_V_135_reg_41921.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        weights_24_24_1x1_V_1_address0 = weights_24_24_1x1_V_111_reg_41656.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read())) {
        weights_24_24_1x1_V_1_address0 = weights_24_24_1x1_V_87_reg_41432.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read())) {
        weights_24_24_1x1_V_1_address0 = weights_24_24_1x1_V_63_reg_41217.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        weights_24_24_1x1_V_1_address0 = weights_24_24_1x1_V_39_reg_40987.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        weights_24_24_1x1_V_1_address0 = weights_24_24_1x1_V_15_reg_40762.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_1_address0 = grp_subconv_1x1_16_p_fu_14351_weight_1_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_1_address0 = grp_subconv_1x1_32_p_fu_14247_weight_1_V_address0.read();
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
        weights_24_24_1x1_V_1_ce0 = grp_subconv_1x1_16_p_fu_14351_weight_1_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_1_ce0 = grp_subconv_1x1_32_p_fu_14247_weight_1_V_ce0.read();
    } else {
        weights_24_24_1x1_V_1_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_1_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && 
          esl_seteq<1,5,5>(co_reg_9761.read(), ap_const_lv5_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) && 
          esl_seteq<1,5,5>(co9_reg_9839.read(), ap_const_lv5_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) && 
          esl_seteq<1,5,5>(co16_reg_9917.read(), ap_const_lv5_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) && 
          esl_seteq<1,5,5>(co22_reg_9984.read(), ap_const_lv5_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) && 
          esl_seteq<1,5,5>(co29_reg_10062.read(), ap_const_lv5_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) && 
          esl_seteq<1,5,5>(co38_reg_10162.read(), ap_const_lv5_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) && 
          esl_seteq<1,5,5>(co44_reg_10240.read(), ap_const_lv5_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) && 
          esl_seteq<1,5,5>(co49_reg_10340.read(), ap_const_lv5_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()) && 
          esl_seteq<1,5,5>(co54_reg_10418.read(), ap_const_lv5_1)))) {
        weights_24_24_1x1_V_1_we0 = ap_const_logic_1;
    } else {
        weights_24_24_1x1_V_1_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_20_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read())) {
        weights_24_24_1x1_V_20_address0 = weights_24_24_1x1_V_215_reg_42680.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read())) {
        weights_24_24_1x1_V_20_address0 = weights_24_24_1x1_V_191_reg_42444.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read())) {
        weights_24_24_1x1_V_20_address0 = weights_24_24_1x1_V_167_reg_42191.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read())) {
        weights_24_24_1x1_V_20_address0 = weights_24_24_1x1_V_143_reg_41961.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        weights_24_24_1x1_V_20_address0 = weights_24_24_1x1_V_119_reg_41696.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read())) {
        weights_24_24_1x1_V_20_address0 = weights_24_24_1x1_V_95_reg_41472.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read())) {
        weights_24_24_1x1_V_20_address0 = weights_24_24_1x1_V_71_reg_41257.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        weights_24_24_1x1_V_20_address0 = weights_24_24_1x1_V_47_reg_41027.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        weights_24_24_1x1_V_20_address0 = weights_24_24_1x1_V_23_reg_40802.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_20_address0 = grp_subconv_1x1_16_p_fu_14351_weight_20_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_20_address0 = grp_subconv_1x1_32_p_fu_14247_weight_20_V_address0.read();
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
        weights_24_24_1x1_V_20_ce0 = grp_subconv_1x1_16_p_fu_14351_weight_20_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_20_ce0 = grp_subconv_1x1_32_p_fu_14247_weight_20_V_ce0.read();
    } else {
        weights_24_24_1x1_V_20_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_20_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && 
          esl_seteq<1,5,5>(co_reg_9761.read(), ap_const_lv5_14)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) && 
          esl_seteq<1,5,5>(co9_reg_9839.read(), ap_const_lv5_14)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) && 
          esl_seteq<1,5,5>(co16_reg_9917.read(), ap_const_lv5_14)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) && 
          esl_seteq<1,5,5>(co22_reg_9984.read(), ap_const_lv5_14)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) && 
          esl_seteq<1,5,5>(co29_reg_10062.read(), ap_const_lv5_14)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) && 
          esl_seteq<1,5,5>(co38_reg_10162.read(), ap_const_lv5_14)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) && 
          esl_seteq<1,5,5>(co44_reg_10240.read(), ap_const_lv5_14)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) && 
          esl_seteq<1,5,5>(co49_reg_10340.read(), ap_const_lv5_14)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()) && 
          esl_seteq<1,5,5>(co54_reg_10418.read(), ap_const_lv5_14)))) {
        weights_24_24_1x1_V_20_we0 = ap_const_logic_1;
    } else {
        weights_24_24_1x1_V_20_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_21_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read())) {
        weights_24_24_1x1_V_21_address0 = weights_24_24_1x1_V_208_reg_42645.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read())) {
        weights_24_24_1x1_V_21_address0 = weights_24_24_1x1_V_184_reg_42409.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read())) {
        weights_24_24_1x1_V_21_address0 = weights_24_24_1x1_V_160_reg_42156.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read())) {
        weights_24_24_1x1_V_21_address0 = weights_24_24_1x1_V_136_reg_41926.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        weights_24_24_1x1_V_21_address0 = weights_24_24_1x1_V_112_reg_41661.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read())) {
        weights_24_24_1x1_V_21_address0 = weights_24_24_1x1_V_88_reg_41437.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read())) {
        weights_24_24_1x1_V_21_address0 = weights_24_24_1x1_V_64_reg_41222.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        weights_24_24_1x1_V_21_address0 = weights_24_24_1x1_V_40_reg_40992.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        weights_24_24_1x1_V_21_address0 = weights_24_24_1x1_V_16_reg_40767.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_21_address0 = grp_subconv_1x1_16_p_fu_14351_weight_21_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_21_address0 = grp_subconv_1x1_32_p_fu_14247_weight_21_V_address0.read();
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
        weights_24_24_1x1_V_21_ce0 = grp_subconv_1x1_16_p_fu_14351_weight_21_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_21_ce0 = grp_subconv_1x1_32_p_fu_14247_weight_21_V_ce0.read();
    } else {
        weights_24_24_1x1_V_21_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_21_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && 
          esl_seteq<1,5,5>(co_reg_9761.read(), ap_const_lv5_15)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) && 
          esl_seteq<1,5,5>(co9_reg_9839.read(), ap_const_lv5_15)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) && 
          esl_seteq<1,5,5>(co16_reg_9917.read(), ap_const_lv5_15)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) && 
          esl_seteq<1,5,5>(co22_reg_9984.read(), ap_const_lv5_15)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) && 
          esl_seteq<1,5,5>(co29_reg_10062.read(), ap_const_lv5_15)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) && 
          esl_seteq<1,5,5>(co38_reg_10162.read(), ap_const_lv5_15)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) && 
          esl_seteq<1,5,5>(co44_reg_10240.read(), ap_const_lv5_15)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) && 
          esl_seteq<1,5,5>(co49_reg_10340.read(), ap_const_lv5_15)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()) && 
          esl_seteq<1,5,5>(co54_reg_10418.read(), ap_const_lv5_15)))) {
        weights_24_24_1x1_V_21_we0 = ap_const_logic_1;
    } else {
        weights_24_24_1x1_V_21_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_22_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read())) {
        weights_24_24_1x1_V_22_address0 = weights_24_24_1x1_V_212_reg_42665.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read())) {
        weights_24_24_1x1_V_22_address0 = weights_24_24_1x1_V_188_reg_42429.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read())) {
        weights_24_24_1x1_V_22_address0 = weights_24_24_1x1_V_164_reg_42176.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read())) {
        weights_24_24_1x1_V_22_address0 = weights_24_24_1x1_V_140_reg_41946.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        weights_24_24_1x1_V_22_address0 = weights_24_24_1x1_V_116_reg_41681.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read())) {
        weights_24_24_1x1_V_22_address0 = weights_24_24_1x1_V_92_reg_41457.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read())) {
        weights_24_24_1x1_V_22_address0 = weights_24_24_1x1_V_68_reg_41242.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        weights_24_24_1x1_V_22_address0 = weights_24_24_1x1_V_44_reg_41012.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        weights_24_24_1x1_V_22_address0 = weights_24_24_1x1_V_20_reg_40787.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_22_address0 = grp_subconv_1x1_16_p_fu_14351_weight_22_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_22_address0 = grp_subconv_1x1_32_p_fu_14247_weight_22_V_address0.read();
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
        weights_24_24_1x1_V_22_ce0 = grp_subconv_1x1_16_p_fu_14351_weight_22_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_22_ce0 = grp_subconv_1x1_32_p_fu_14247_weight_22_V_ce0.read();
    } else {
        weights_24_24_1x1_V_22_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_22_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && 
          esl_seteq<1,5,5>(co_reg_9761.read(), ap_const_lv5_16)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) && 
          esl_seteq<1,5,5>(co9_reg_9839.read(), ap_const_lv5_16)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) && 
          esl_seteq<1,5,5>(co16_reg_9917.read(), ap_const_lv5_16)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) && 
          esl_seteq<1,5,5>(co22_reg_9984.read(), ap_const_lv5_16)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) && 
          esl_seteq<1,5,5>(co29_reg_10062.read(), ap_const_lv5_16)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) && 
          esl_seteq<1,5,5>(co38_reg_10162.read(), ap_const_lv5_16)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) && 
          esl_seteq<1,5,5>(co44_reg_10240.read(), ap_const_lv5_16)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) && 
          esl_seteq<1,5,5>(co49_reg_10340.read(), ap_const_lv5_16)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()) && 
          esl_seteq<1,5,5>(co54_reg_10418.read(), ap_const_lv5_16)))) {
        weights_24_24_1x1_V_22_we0 = ap_const_logic_1;
    } else {
        weights_24_24_1x1_V_22_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_23_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read())) {
        weights_24_24_1x1_V_23_address0 = weights_24_24_1x1_V_196_reg_42585.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read())) {
        weights_24_24_1x1_V_23_address0 = weights_24_24_1x1_V_172_reg_42349.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read())) {
        weights_24_24_1x1_V_23_address0 = weights_24_24_1x1_V_148_reg_42096.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read())) {
        weights_24_24_1x1_V_23_address0 = weights_24_24_1x1_V_124_reg_41866.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        weights_24_24_1x1_V_23_address0 = weights_24_24_1x1_V_100_reg_41601.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read())) {
        weights_24_24_1x1_V_23_address0 = weights_24_24_1x1_V_76_reg_41377.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read())) {
        weights_24_24_1x1_V_23_address0 = weights_24_24_1x1_V_52_reg_41162.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        weights_24_24_1x1_V_23_address0 = weights_24_24_1x1_V_28_reg_40932.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        weights_24_24_1x1_V_23_address0 = weights_24_24_1x1_V_4_reg_40707.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_23_address0 = grp_subconv_1x1_16_p_fu_14351_weight_23_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_23_address0 = grp_subconv_1x1_32_p_fu_14247_weight_23_V_address0.read();
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
        weights_24_24_1x1_V_23_ce0 = grp_subconv_1x1_16_p_fu_14351_weight_23_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_23_ce0 = grp_subconv_1x1_32_p_fu_14247_weight_23_V_ce0.read();
    } else {
        weights_24_24_1x1_V_23_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_23_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && 
          !esl_seteq<1,5,5>(ap_const_lv5_0, co_reg_9761.read()) && 
          !esl_seteq<1,5,5>(co_reg_9761.read(), ap_const_lv5_1) && 
          !esl_seteq<1,5,5>(co_reg_9761.read(), ap_const_lv5_2) && 
          !esl_seteq<1,5,5>(co_reg_9761.read(), ap_const_lv5_3) && 
          !esl_seteq<1,5,5>(co_reg_9761.read(), ap_const_lv5_4) && 
          !esl_seteq<1,5,5>(co_reg_9761.read(), ap_const_lv5_5) && 
          !esl_seteq<1,5,5>(co_reg_9761.read(), ap_const_lv5_6) && 
          !esl_seteq<1,5,5>(co_reg_9761.read(), ap_const_lv5_7) && 
          !esl_seteq<1,5,5>(co_reg_9761.read(), ap_const_lv5_8) && 
          !esl_seteq<1,5,5>(co_reg_9761.read(), ap_const_lv5_9) && 
          !esl_seteq<1,5,5>(co_reg_9761.read(), ap_const_lv5_A) && 
          !esl_seteq<1,5,5>(co_reg_9761.read(), ap_const_lv5_B) && 
          !esl_seteq<1,5,5>(co_reg_9761.read(), ap_const_lv5_C) && 
          !esl_seteq<1,5,5>(co_reg_9761.read(), ap_const_lv5_D) && 
          !esl_seteq<1,5,5>(co_reg_9761.read(), ap_const_lv5_E) && 
          !esl_seteq<1,5,5>(co_reg_9761.read(), ap_const_lv5_F) && 
          !esl_seteq<1,5,5>(co_reg_9761.read(), ap_const_lv5_10) && 
          !esl_seteq<1,5,5>(co_reg_9761.read(), ap_const_lv5_11) && 
          !esl_seteq<1,5,5>(co_reg_9761.read(), ap_const_lv5_12) && 
          !esl_seteq<1,5,5>(co_reg_9761.read(), ap_const_lv5_13) && 
          !esl_seteq<1,5,5>(co_reg_9761.read(), ap_const_lv5_14) && 
          !esl_seteq<1,5,5>(co_reg_9761.read(), ap_const_lv5_15) && 
          !esl_seteq<1,5,5>(co_reg_9761.read(), ap_const_lv5_16)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) && 
          !esl_seteq<1,5,5>(ap_const_lv5_0, co9_reg_9839.read()) && 
          !esl_seteq<1,5,5>(co9_reg_9839.read(), ap_const_lv5_1) && 
          !esl_seteq<1,5,5>(co9_reg_9839.read(), ap_const_lv5_2) && 
          !esl_seteq<1,5,5>(co9_reg_9839.read(), ap_const_lv5_3) && 
          !esl_seteq<1,5,5>(co9_reg_9839.read(), ap_const_lv5_4) && 
          !esl_seteq<1,5,5>(co9_reg_9839.read(), ap_const_lv5_5) && 
          !esl_seteq<1,5,5>(co9_reg_9839.read(), ap_const_lv5_6) && 
          !esl_seteq<1,5,5>(co9_reg_9839.read(), ap_const_lv5_7) && 
          !esl_seteq<1,5,5>(co9_reg_9839.read(), ap_const_lv5_8) && 
          !esl_seteq<1,5,5>(co9_reg_9839.read(), ap_const_lv5_9) && 
          !esl_seteq<1,5,5>(co9_reg_9839.read(), ap_const_lv5_A) && 
          !esl_seteq<1,5,5>(co9_reg_9839.read(), ap_const_lv5_B) && 
          !esl_seteq<1,5,5>(co9_reg_9839.read(), ap_const_lv5_C) && 
          !esl_seteq<1,5,5>(co9_reg_9839.read(), ap_const_lv5_D) && 
          !esl_seteq<1,5,5>(co9_reg_9839.read(), ap_const_lv5_E) && 
          !esl_seteq<1,5,5>(co9_reg_9839.read(), ap_const_lv5_F) && 
          !esl_seteq<1,5,5>(co9_reg_9839.read(), ap_const_lv5_10) && 
          !esl_seteq<1,5,5>(co9_reg_9839.read(), ap_const_lv5_11) && 
          !esl_seteq<1,5,5>(co9_reg_9839.read(), ap_const_lv5_12) && 
          !esl_seteq<1,5,5>(co9_reg_9839.read(), ap_const_lv5_13) && 
          !esl_seteq<1,5,5>(co9_reg_9839.read(), ap_const_lv5_14) && 
          !esl_seteq<1,5,5>(co9_reg_9839.read(), ap_const_lv5_15) && 
          !esl_seteq<1,5,5>(co9_reg_9839.read(), ap_const_lv5_16)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) && 
          !esl_seteq<1,5,5>(ap_const_lv5_0, co16_reg_9917.read()) && 
          !esl_seteq<1,5,5>(co16_reg_9917.read(), ap_const_lv5_1) && 
          !esl_seteq<1,5,5>(co16_reg_9917.read(), ap_const_lv5_2) && 
          !esl_seteq<1,5,5>(co16_reg_9917.read(), ap_const_lv5_3) && 
          !esl_seteq<1,5,5>(co16_reg_9917.read(), ap_const_lv5_4) && 
          !esl_seteq<1,5,5>(co16_reg_9917.read(), ap_const_lv5_5) && 
          !esl_seteq<1,5,5>(co16_reg_9917.read(), ap_const_lv5_6) && 
          !esl_seteq<1,5,5>(co16_reg_9917.read(), ap_const_lv5_7) && 
          !esl_seteq<1,5,5>(co16_reg_9917.read(), ap_const_lv5_8) && 
          !esl_seteq<1,5,5>(co16_reg_9917.read(), ap_const_lv5_9) && 
          !esl_seteq<1,5,5>(co16_reg_9917.read(), ap_const_lv5_A) && 
          !esl_seteq<1,5,5>(co16_reg_9917.read(), ap_const_lv5_B) && 
          !esl_seteq<1,5,5>(co16_reg_9917.read(), ap_const_lv5_C) && 
          !esl_seteq<1,5,5>(co16_reg_9917.read(), ap_const_lv5_D) && 
          !esl_seteq<1,5,5>(co16_reg_9917.read(), ap_const_lv5_E) && 
          !esl_seteq<1,5,5>(co16_reg_9917.read(), ap_const_lv5_F) && 
          !esl_seteq<1,5,5>(co16_reg_9917.read(), ap_const_lv5_10) && 
          !esl_seteq<1,5,5>(co16_reg_9917.read(), ap_const_lv5_11) && 
          !esl_seteq<1,5,5>(co16_reg_9917.read(), ap_const_lv5_12) && 
          !esl_seteq<1,5,5>(co16_reg_9917.read(), ap_const_lv5_13) && 
          !esl_seteq<1,5,5>(co16_reg_9917.read(), ap_const_lv5_14) && 
          !esl_seteq<1,5,5>(co16_reg_9917.read(), ap_const_lv5_15) && 
          !esl_seteq<1,5,5>(co16_reg_9917.read(), ap_const_lv5_16)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) && 
          !esl_seteq<1,5,5>(ap_const_lv5_0, co22_reg_9984.read()) && 
          !esl_seteq<1,5,5>(co22_reg_9984.read(), ap_const_lv5_1) && 
          !esl_seteq<1,5,5>(co22_reg_9984.read(), ap_const_lv5_2) && 
          !esl_seteq<1,5,5>(co22_reg_9984.read(), ap_const_lv5_3) && 
          !esl_seteq<1,5,5>(co22_reg_9984.read(), ap_const_lv5_4) && 
          !esl_seteq<1,5,5>(co22_reg_9984.read(), ap_const_lv5_5) && 
          !esl_seteq<1,5,5>(co22_reg_9984.read(), ap_const_lv5_6) && 
          !esl_seteq<1,5,5>(co22_reg_9984.read(), ap_const_lv5_7) && 
          !esl_seteq<1,5,5>(co22_reg_9984.read(), ap_const_lv5_8) && 
          !esl_seteq<1,5,5>(co22_reg_9984.read(), ap_const_lv5_9) && 
          !esl_seteq<1,5,5>(co22_reg_9984.read(), ap_const_lv5_A) && 
          !esl_seteq<1,5,5>(co22_reg_9984.read(), ap_const_lv5_B) && 
          !esl_seteq<1,5,5>(co22_reg_9984.read(), ap_const_lv5_C) && 
          !esl_seteq<1,5,5>(co22_reg_9984.read(), ap_const_lv5_D) && 
          !esl_seteq<1,5,5>(co22_reg_9984.read(), ap_const_lv5_E) && 
          !esl_seteq<1,5,5>(co22_reg_9984.read(), ap_const_lv5_F) && 
          !esl_seteq<1,5,5>(co22_reg_9984.read(), ap_const_lv5_10) && 
          !esl_seteq<1,5,5>(co22_reg_9984.read(), ap_const_lv5_11) && 
          !esl_seteq<1,5,5>(co22_reg_9984.read(), ap_const_lv5_12) && 
          !esl_seteq<1,5,5>(co22_reg_9984.read(), ap_const_lv5_13) && 
          !esl_seteq<1,5,5>(co22_reg_9984.read(), ap_const_lv5_14) && 
          !esl_seteq<1,5,5>(co22_reg_9984.read(), ap_const_lv5_15) && 
          !esl_seteq<1,5,5>(co22_reg_9984.read(), ap_const_lv5_16)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) && 
          !esl_seteq<1,5,5>(ap_const_lv5_0, co29_reg_10062.read()) && 
          !esl_seteq<1,5,5>(co29_reg_10062.read(), ap_const_lv5_1) && 
          !esl_seteq<1,5,5>(co29_reg_10062.read(), ap_const_lv5_2) && 
          !esl_seteq<1,5,5>(co29_reg_10062.read(), ap_const_lv5_3) && 
          !esl_seteq<1,5,5>(co29_reg_10062.read(), ap_const_lv5_4) && 
          !esl_seteq<1,5,5>(co29_reg_10062.read(), ap_const_lv5_5) && 
          !esl_seteq<1,5,5>(co29_reg_10062.read(), ap_const_lv5_6) && 
          !esl_seteq<1,5,5>(co29_reg_10062.read(), ap_const_lv5_7) && 
          !esl_seteq<1,5,5>(co29_reg_10062.read(), ap_const_lv5_8) && 
          !esl_seteq<1,5,5>(co29_reg_10062.read(), ap_const_lv5_9) && 
          !esl_seteq<1,5,5>(co29_reg_10062.read(), ap_const_lv5_A) && 
          !esl_seteq<1,5,5>(co29_reg_10062.read(), ap_const_lv5_B) && 
          !esl_seteq<1,5,5>(co29_reg_10062.read(), ap_const_lv5_C) && 
          !esl_seteq<1,5,5>(co29_reg_10062.read(), ap_const_lv5_D) && 
          !esl_seteq<1,5,5>(co29_reg_10062.read(), ap_const_lv5_E) && 
          !esl_seteq<1,5,5>(co29_reg_10062.read(), ap_const_lv5_F) && 
          !esl_seteq<1,5,5>(co29_reg_10062.read(), ap_const_lv5_10) && 
          !esl_seteq<1,5,5>(co29_reg_10062.read(), ap_const_lv5_11) && 
          !esl_seteq<1,5,5>(co29_reg_10062.read(), ap_const_lv5_12) && 
          !esl_seteq<1,5,5>(co29_reg_10062.read(), ap_const_lv5_13) && 
          !esl_seteq<1,5,5>(co29_reg_10062.read(), ap_const_lv5_14) && 
          !esl_seteq<1,5,5>(co29_reg_10062.read(), ap_const_lv5_15) && 
          !esl_seteq<1,5,5>(co29_reg_10062.read(), ap_const_lv5_16)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) && 
          !esl_seteq<1,5,5>(ap_const_lv5_0, co38_reg_10162.read()) && 
          !esl_seteq<1,5,5>(co38_reg_10162.read(), ap_const_lv5_1) && 
          !esl_seteq<1,5,5>(co38_reg_10162.read(), ap_const_lv5_2) && 
          !esl_seteq<1,5,5>(co38_reg_10162.read(), ap_const_lv5_3) && 
          !esl_seteq<1,5,5>(co38_reg_10162.read(), ap_const_lv5_4) && 
          !esl_seteq<1,5,5>(co38_reg_10162.read(), ap_const_lv5_5) && 
          !esl_seteq<1,5,5>(co38_reg_10162.read(), ap_const_lv5_6) && 
          !esl_seteq<1,5,5>(co38_reg_10162.read(), ap_const_lv5_7) && 
          !esl_seteq<1,5,5>(co38_reg_10162.read(), ap_const_lv5_8) && 
          !esl_seteq<1,5,5>(co38_reg_10162.read(), ap_const_lv5_9) && 
          !esl_seteq<1,5,5>(co38_reg_10162.read(), ap_const_lv5_A) && 
          !esl_seteq<1,5,5>(co38_reg_10162.read(), ap_const_lv5_B) && 
          !esl_seteq<1,5,5>(co38_reg_10162.read(), ap_const_lv5_C) && 
          !esl_seteq<1,5,5>(co38_reg_10162.read(), ap_const_lv5_D) && 
          !esl_seteq<1,5,5>(co38_reg_10162.read(), ap_const_lv5_E) && 
          !esl_seteq<1,5,5>(co38_reg_10162.read(), ap_const_lv5_F) && 
          !esl_seteq<1,5,5>(co38_reg_10162.read(), ap_const_lv5_10) && 
          !esl_seteq<1,5,5>(co38_reg_10162.read(), ap_const_lv5_11) && 
          !esl_seteq<1,5,5>(co38_reg_10162.read(), ap_const_lv5_12) && 
          !esl_seteq<1,5,5>(co38_reg_10162.read(), ap_const_lv5_13) && 
          !esl_seteq<1,5,5>(co38_reg_10162.read(), ap_const_lv5_14) && 
          !esl_seteq<1,5,5>(co38_reg_10162.read(), ap_const_lv5_15) && 
          !esl_seteq<1,5,5>(co38_reg_10162.read(), ap_const_lv5_16)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) && 
          !esl_seteq<1,5,5>(ap_const_lv5_0, co44_reg_10240.read()) && 
          !esl_seteq<1,5,5>(co44_reg_10240.read(), ap_const_lv5_1) && 
          !esl_seteq<1,5,5>(co44_reg_10240.read(), ap_const_lv5_2) && 
          !esl_seteq<1,5,5>(co44_reg_10240.read(), ap_const_lv5_3) && 
          !esl_seteq<1,5,5>(co44_reg_10240.read(), ap_const_lv5_4) && 
          !esl_seteq<1,5,5>(co44_reg_10240.read(), ap_const_lv5_5) && 
          !esl_seteq<1,5,5>(co44_reg_10240.read(), ap_const_lv5_6) && 
          !esl_seteq<1,5,5>(co44_reg_10240.read(), ap_const_lv5_7) && 
          !esl_seteq<1,5,5>(co44_reg_10240.read(), ap_const_lv5_8) && 
          !esl_seteq<1,5,5>(co44_reg_10240.read(), ap_const_lv5_9) && 
          !esl_seteq<1,5,5>(co44_reg_10240.read(), ap_const_lv5_A) && 
          !esl_seteq<1,5,5>(co44_reg_10240.read(), ap_const_lv5_B) && 
          !esl_seteq<1,5,5>(co44_reg_10240.read(), ap_const_lv5_C) && 
          !esl_seteq<1,5,5>(co44_reg_10240.read(), ap_const_lv5_D) && 
          !esl_seteq<1,5,5>(co44_reg_10240.read(), ap_const_lv5_E) && 
          !esl_seteq<1,5,5>(co44_reg_10240.read(), ap_const_lv5_F) && 
          !esl_seteq<1,5,5>(co44_reg_10240.read(), ap_const_lv5_10) && 
          !esl_seteq<1,5,5>(co44_reg_10240.read(), ap_const_lv5_11) && 
          !esl_seteq<1,5,5>(co44_reg_10240.read(), ap_const_lv5_12) && 
          !esl_seteq<1,5,5>(co44_reg_10240.read(), ap_const_lv5_13) && 
          !esl_seteq<1,5,5>(co44_reg_10240.read(), ap_const_lv5_14) && 
          !esl_seteq<1,5,5>(co44_reg_10240.read(), ap_const_lv5_15) && 
          !esl_seteq<1,5,5>(co44_reg_10240.read(), ap_const_lv5_16)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) && 
          !esl_seteq<1,5,5>(ap_const_lv5_0, co49_reg_10340.read()) && 
          !esl_seteq<1,5,5>(co49_reg_10340.read(), ap_const_lv5_1) && 
          !esl_seteq<1,5,5>(co49_reg_10340.read(), ap_const_lv5_2) && 
          !esl_seteq<1,5,5>(co49_reg_10340.read(), ap_const_lv5_3) && 
          !esl_seteq<1,5,5>(co49_reg_10340.read(), ap_const_lv5_4) && 
          !esl_seteq<1,5,5>(co49_reg_10340.read(), ap_const_lv5_5) && 
          !esl_seteq<1,5,5>(co49_reg_10340.read(), ap_const_lv5_6) && 
          !esl_seteq<1,5,5>(co49_reg_10340.read(), ap_const_lv5_7) && 
          !esl_seteq<1,5,5>(co49_reg_10340.read(), ap_const_lv5_8) && 
          !esl_seteq<1,5,5>(co49_reg_10340.read(), ap_const_lv5_9) && 
          !esl_seteq<1,5,5>(co49_reg_10340.read(), ap_const_lv5_A) && 
          !esl_seteq<1,5,5>(co49_reg_10340.read(), ap_const_lv5_B) && 
          !esl_seteq<1,5,5>(co49_reg_10340.read(), ap_const_lv5_C) && 
          !esl_seteq<1,5,5>(co49_reg_10340.read(), ap_const_lv5_D) && 
          !esl_seteq<1,5,5>(co49_reg_10340.read(), ap_const_lv5_E) && 
          !esl_seteq<1,5,5>(co49_reg_10340.read(), ap_const_lv5_F) && 
          !esl_seteq<1,5,5>(co49_reg_10340.read(), ap_const_lv5_10) && 
          !esl_seteq<1,5,5>(co49_reg_10340.read(), ap_const_lv5_11) && 
          !esl_seteq<1,5,5>(co49_reg_10340.read(), ap_const_lv5_12) && 
          !esl_seteq<1,5,5>(co49_reg_10340.read(), ap_const_lv5_13) && 
          !esl_seteq<1,5,5>(co49_reg_10340.read(), ap_const_lv5_14) && 
          !esl_seteq<1,5,5>(co49_reg_10340.read(), ap_const_lv5_15) && 
          !esl_seteq<1,5,5>(co49_reg_10340.read(), ap_const_lv5_16)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()) && 
          !esl_seteq<1,5,5>(ap_const_lv5_0, co54_reg_10418.read()) && 
          !esl_seteq<1,5,5>(co54_reg_10418.read(), ap_const_lv5_1) && 
          !esl_seteq<1,5,5>(co54_reg_10418.read(), ap_const_lv5_2) && 
          !esl_seteq<1,5,5>(co54_reg_10418.read(), ap_const_lv5_3) && 
          !esl_seteq<1,5,5>(co54_reg_10418.read(), ap_const_lv5_4) && 
          !esl_seteq<1,5,5>(co54_reg_10418.read(), ap_const_lv5_5) && 
          !esl_seteq<1,5,5>(co54_reg_10418.read(), ap_const_lv5_6) && 
          !esl_seteq<1,5,5>(co54_reg_10418.read(), ap_const_lv5_7) && 
          !esl_seteq<1,5,5>(co54_reg_10418.read(), ap_const_lv5_8) && 
          !esl_seteq<1,5,5>(co54_reg_10418.read(), ap_const_lv5_9) && 
          !esl_seteq<1,5,5>(co54_reg_10418.read(), ap_const_lv5_A) && 
          !esl_seteq<1,5,5>(co54_reg_10418.read(), ap_const_lv5_B) && 
          !esl_seteq<1,5,5>(co54_reg_10418.read(), ap_const_lv5_C) && 
          !esl_seteq<1,5,5>(co54_reg_10418.read(), ap_const_lv5_D) && 
          !esl_seteq<1,5,5>(co54_reg_10418.read(), ap_const_lv5_E) && 
          !esl_seteq<1,5,5>(co54_reg_10418.read(), ap_const_lv5_F) && 
          !esl_seteq<1,5,5>(co54_reg_10418.read(), ap_const_lv5_10) && 
          !esl_seteq<1,5,5>(co54_reg_10418.read(), ap_const_lv5_11) && 
          !esl_seteq<1,5,5>(co54_reg_10418.read(), ap_const_lv5_12) && 
          !esl_seteq<1,5,5>(co54_reg_10418.read(), ap_const_lv5_13) && 
          !esl_seteq<1,5,5>(co54_reg_10418.read(), ap_const_lv5_14) && 
          !esl_seteq<1,5,5>(co54_reg_10418.read(), ap_const_lv5_15) && 
          !esl_seteq<1,5,5>(co54_reg_10418.read(), ap_const_lv5_16)))) {
        weights_24_24_1x1_V_23_we0 = ap_const_logic_1;
    } else {
        weights_24_24_1x1_V_23_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read())) {
        weights_24_24_1x1_V_2_address0 = weights_24_24_1x1_V_205_reg_42630.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read())) {
        weights_24_24_1x1_V_2_address0 = weights_24_24_1x1_V_181_reg_42394.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read())) {
        weights_24_24_1x1_V_2_address0 = weights_24_24_1x1_V_157_reg_42141.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read())) {
        weights_24_24_1x1_V_2_address0 = weights_24_24_1x1_V_133_reg_41911.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        weights_24_24_1x1_V_2_address0 = weights_24_24_1x1_V_109_reg_41646.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read())) {
        weights_24_24_1x1_V_2_address0 = weights_24_24_1x1_V_85_reg_41422.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read())) {
        weights_24_24_1x1_V_2_address0 = weights_24_24_1x1_V_61_reg_41207.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        weights_24_24_1x1_V_2_address0 = weights_24_24_1x1_V_37_reg_40977.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        weights_24_24_1x1_V_2_address0 = weights_24_24_1x1_V_13_reg_40752.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_2_address0 = grp_subconv_1x1_16_p_fu_14351_weight_2_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_2_address0 = grp_subconv_1x1_32_p_fu_14247_weight_2_V_address0.read();
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
        weights_24_24_1x1_V_2_ce0 = grp_subconv_1x1_16_p_fu_14351_weight_2_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_2_ce0 = grp_subconv_1x1_32_p_fu_14247_weight_2_V_ce0.read();
    } else {
        weights_24_24_1x1_V_2_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_2_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && 
          esl_seteq<1,5,5>(co_reg_9761.read(), ap_const_lv5_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) && 
          esl_seteq<1,5,5>(co9_reg_9839.read(), ap_const_lv5_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) && 
          esl_seteq<1,5,5>(co16_reg_9917.read(), ap_const_lv5_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) && 
          esl_seteq<1,5,5>(co22_reg_9984.read(), ap_const_lv5_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) && 
          esl_seteq<1,5,5>(co29_reg_10062.read(), ap_const_lv5_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) && 
          esl_seteq<1,5,5>(co38_reg_10162.read(), ap_const_lv5_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) && 
          esl_seteq<1,5,5>(co44_reg_10240.read(), ap_const_lv5_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) && 
          esl_seteq<1,5,5>(co49_reg_10340.read(), ap_const_lv5_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()) && 
          esl_seteq<1,5,5>(co54_reg_10418.read(), ap_const_lv5_2)))) {
        weights_24_24_1x1_V_2_we0 = ap_const_logic_1;
    } else {
        weights_24_24_1x1_V_2_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read())) {
        weights_24_24_1x1_V_3_address0 = weights_24_24_1x1_V_193_reg_42570.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read())) {
        weights_24_24_1x1_V_3_address0 = weights_24_24_1x1_V_169_reg_42334.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read())) {
        weights_24_24_1x1_V_3_address0 = weights_24_24_1x1_V_145_reg_42081.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read())) {
        weights_24_24_1x1_V_3_address0 = weights_24_24_1x1_V_121_reg_41851.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        weights_24_24_1x1_V_3_address0 = weights_24_24_1x1_V_97_reg_41586.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read())) {
        weights_24_24_1x1_V_3_address0 = weights_24_24_1x1_V_73_reg_41362.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read())) {
        weights_24_24_1x1_V_3_address0 = weights_24_24_1x1_V_49_reg_41147.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        weights_24_24_1x1_V_3_address0 = weights_24_24_1x1_V_25_reg_40917.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        weights_24_24_1x1_V_3_address0 = weights_24_24_1x1_V_1_reg_40692.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_3_address0 = grp_subconv_1x1_16_p_fu_14351_weight_3_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_3_address0 = grp_subconv_1x1_32_p_fu_14247_weight_3_V_address0.read();
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
        weights_24_24_1x1_V_3_ce0 = grp_subconv_1x1_16_p_fu_14351_weight_3_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_3_ce0 = grp_subconv_1x1_32_p_fu_14247_weight_3_V_ce0.read();
    } else {
        weights_24_24_1x1_V_3_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_3_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && 
          esl_seteq<1,5,5>(co_reg_9761.read(), ap_const_lv5_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) && 
          esl_seteq<1,5,5>(co9_reg_9839.read(), ap_const_lv5_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) && 
          esl_seteq<1,5,5>(co16_reg_9917.read(), ap_const_lv5_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) && 
          esl_seteq<1,5,5>(co22_reg_9984.read(), ap_const_lv5_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) && 
          esl_seteq<1,5,5>(co29_reg_10062.read(), ap_const_lv5_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) && 
          esl_seteq<1,5,5>(co38_reg_10162.read(), ap_const_lv5_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) && 
          esl_seteq<1,5,5>(co44_reg_10240.read(), ap_const_lv5_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) && 
          esl_seteq<1,5,5>(co49_reg_10340.read(), ap_const_lv5_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()) && 
          esl_seteq<1,5,5>(co54_reg_10418.read(), ap_const_lv5_3)))) {
        weights_24_24_1x1_V_3_we0 = ap_const_logic_1;
    } else {
        weights_24_24_1x1_V_3_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read())) {
        weights_24_24_1x1_V_4_address0 = weights_24_24_1x1_V_210_reg_42655.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read())) {
        weights_24_24_1x1_V_4_address0 = weights_24_24_1x1_V_186_reg_42419.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read())) {
        weights_24_24_1x1_V_4_address0 = weights_24_24_1x1_V_162_reg_42166.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read())) {
        weights_24_24_1x1_V_4_address0 = weights_24_24_1x1_V_138_reg_41936.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        weights_24_24_1x1_V_4_address0 = weights_24_24_1x1_V_114_reg_41671.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read())) {
        weights_24_24_1x1_V_4_address0 = weights_24_24_1x1_V_90_reg_41447.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read())) {
        weights_24_24_1x1_V_4_address0 = weights_24_24_1x1_V_66_reg_41232.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        weights_24_24_1x1_V_4_address0 = weights_24_24_1x1_V_42_reg_41002.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        weights_24_24_1x1_V_4_address0 = weights_24_24_1x1_V_18_reg_40777.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_4_address0 = grp_subconv_1x1_16_p_fu_14351_weight_4_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_4_address0 = grp_subconv_1x1_32_p_fu_14247_weight_4_V_address0.read();
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
        weights_24_24_1x1_V_4_ce0 = grp_subconv_1x1_16_p_fu_14351_weight_4_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_4_ce0 = grp_subconv_1x1_32_p_fu_14247_weight_4_V_ce0.read();
    } else {
        weights_24_24_1x1_V_4_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_4_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && 
          esl_seteq<1,5,5>(co_reg_9761.read(), ap_const_lv5_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) && 
          esl_seteq<1,5,5>(co9_reg_9839.read(), ap_const_lv5_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) && 
          esl_seteq<1,5,5>(co16_reg_9917.read(), ap_const_lv5_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) && 
          esl_seteq<1,5,5>(co22_reg_9984.read(), ap_const_lv5_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) && 
          esl_seteq<1,5,5>(co29_reg_10062.read(), ap_const_lv5_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) && 
          esl_seteq<1,5,5>(co38_reg_10162.read(), ap_const_lv5_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) && 
          esl_seteq<1,5,5>(co44_reg_10240.read(), ap_const_lv5_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) && 
          esl_seteq<1,5,5>(co49_reg_10340.read(), ap_const_lv5_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()) && 
          esl_seteq<1,5,5>(co54_reg_10418.read(), ap_const_lv5_4)))) {
        weights_24_24_1x1_V_4_we0 = ap_const_logic_1;
    } else {
        weights_24_24_1x1_V_4_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read())) {
        weights_24_24_1x1_V_5_address0 = weights_24_24_1x1_V_198_reg_42595.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read())) {
        weights_24_24_1x1_V_5_address0 = weights_24_24_1x1_V_174_reg_42359.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read())) {
        weights_24_24_1x1_V_5_address0 = weights_24_24_1x1_V_150_reg_42106.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read())) {
        weights_24_24_1x1_V_5_address0 = weights_24_24_1x1_V_126_reg_41876.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        weights_24_24_1x1_V_5_address0 = weights_24_24_1x1_V_102_reg_41611.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read())) {
        weights_24_24_1x1_V_5_address0 = weights_24_24_1x1_V_78_reg_41387.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read())) {
        weights_24_24_1x1_V_5_address0 = weights_24_24_1x1_V_54_reg_41172.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        weights_24_24_1x1_V_5_address0 = weights_24_24_1x1_V_30_reg_40942.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        weights_24_24_1x1_V_5_address0 = weights_24_24_1x1_V_6_reg_40717.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_5_address0 = grp_subconv_1x1_16_p_fu_14351_weight_5_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_5_address0 = grp_subconv_1x1_32_p_fu_14247_weight_5_V_address0.read();
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
        weights_24_24_1x1_V_5_ce0 = grp_subconv_1x1_16_p_fu_14351_weight_5_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_5_ce0 = grp_subconv_1x1_32_p_fu_14247_weight_5_V_ce0.read();
    } else {
        weights_24_24_1x1_V_5_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_5_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && 
          esl_seteq<1,5,5>(co_reg_9761.read(), ap_const_lv5_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) && 
          esl_seteq<1,5,5>(co9_reg_9839.read(), ap_const_lv5_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) && 
          esl_seteq<1,5,5>(co16_reg_9917.read(), ap_const_lv5_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) && 
          esl_seteq<1,5,5>(co22_reg_9984.read(), ap_const_lv5_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) && 
          esl_seteq<1,5,5>(co29_reg_10062.read(), ap_const_lv5_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) && 
          esl_seteq<1,5,5>(co38_reg_10162.read(), ap_const_lv5_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) && 
          esl_seteq<1,5,5>(co44_reg_10240.read(), ap_const_lv5_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) && 
          esl_seteq<1,5,5>(co49_reg_10340.read(), ap_const_lv5_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()) && 
          esl_seteq<1,5,5>(co54_reg_10418.read(), ap_const_lv5_5)))) {
        weights_24_24_1x1_V_5_we0 = ap_const_logic_1;
    } else {
        weights_24_24_1x1_V_5_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read())) {
        weights_24_24_1x1_V_6_address0 = weights_24_24_1x1_V_197_reg_42590.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read())) {
        weights_24_24_1x1_V_6_address0 = weights_24_24_1x1_V_173_reg_42354.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read())) {
        weights_24_24_1x1_V_6_address0 = weights_24_24_1x1_V_149_reg_42101.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read())) {
        weights_24_24_1x1_V_6_address0 = weights_24_24_1x1_V_125_reg_41871.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        weights_24_24_1x1_V_6_address0 = weights_24_24_1x1_V_101_reg_41606.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read())) {
        weights_24_24_1x1_V_6_address0 = weights_24_24_1x1_V_77_reg_41382.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read())) {
        weights_24_24_1x1_V_6_address0 = weights_24_24_1x1_V_53_reg_41167.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        weights_24_24_1x1_V_6_address0 = weights_24_24_1x1_V_29_reg_40937.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        weights_24_24_1x1_V_6_address0 = weights_24_24_1x1_V_5_reg_40712.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_6_address0 = grp_subconv_1x1_16_p_fu_14351_weight_6_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_6_address0 = grp_subconv_1x1_32_p_fu_14247_weight_6_V_address0.read();
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
        weights_24_24_1x1_V_6_ce0 = grp_subconv_1x1_16_p_fu_14351_weight_6_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_6_ce0 = grp_subconv_1x1_32_p_fu_14247_weight_6_V_ce0.read();
    } else {
        weights_24_24_1x1_V_6_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_6_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && 
          esl_seteq<1,5,5>(co_reg_9761.read(), ap_const_lv5_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) && 
          esl_seteq<1,5,5>(co9_reg_9839.read(), ap_const_lv5_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) && 
          esl_seteq<1,5,5>(co16_reg_9917.read(), ap_const_lv5_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) && 
          esl_seteq<1,5,5>(co22_reg_9984.read(), ap_const_lv5_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) && 
          esl_seteq<1,5,5>(co29_reg_10062.read(), ap_const_lv5_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) && 
          esl_seteq<1,5,5>(co38_reg_10162.read(), ap_const_lv5_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) && 
          esl_seteq<1,5,5>(co44_reg_10240.read(), ap_const_lv5_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) && 
          esl_seteq<1,5,5>(co49_reg_10340.read(), ap_const_lv5_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()) && 
          esl_seteq<1,5,5>(co54_reg_10418.read(), ap_const_lv5_6)))) {
        weights_24_24_1x1_V_6_we0 = ap_const_logic_1;
    } else {
        weights_24_24_1x1_V_6_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_7_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read())) {
        weights_24_24_1x1_V_7_address0 = weights_24_24_1x1_V_204_reg_42625.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read())) {
        weights_24_24_1x1_V_7_address0 = weights_24_24_1x1_V_180_reg_42389.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read())) {
        weights_24_24_1x1_V_7_address0 = weights_24_24_1x1_V_156_reg_42136.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read())) {
        weights_24_24_1x1_V_7_address0 = weights_24_24_1x1_V_132_reg_41906.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        weights_24_24_1x1_V_7_address0 = weights_24_24_1x1_V_108_reg_41641.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read())) {
        weights_24_24_1x1_V_7_address0 = weights_24_24_1x1_V_84_reg_41417.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read())) {
        weights_24_24_1x1_V_7_address0 = weights_24_24_1x1_V_60_reg_41202.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        weights_24_24_1x1_V_7_address0 = weights_24_24_1x1_V_36_reg_40972.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        weights_24_24_1x1_V_7_address0 = weights_24_24_1x1_V_12_reg_40747.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_7_address0 = grp_subconv_1x1_16_p_fu_14351_weight_7_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_7_address0 = grp_subconv_1x1_32_p_fu_14247_weight_7_V_address0.read();
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
        weights_24_24_1x1_V_7_ce0 = grp_subconv_1x1_16_p_fu_14351_weight_7_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_7_ce0 = grp_subconv_1x1_32_p_fu_14247_weight_7_V_ce0.read();
    } else {
        weights_24_24_1x1_V_7_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_7_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && 
          esl_seteq<1,5,5>(co_reg_9761.read(), ap_const_lv5_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) && 
          esl_seteq<1,5,5>(co9_reg_9839.read(), ap_const_lv5_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) && 
          esl_seteq<1,5,5>(co16_reg_9917.read(), ap_const_lv5_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) && 
          esl_seteq<1,5,5>(co22_reg_9984.read(), ap_const_lv5_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) && 
          esl_seteq<1,5,5>(co29_reg_10062.read(), ap_const_lv5_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) && 
          esl_seteq<1,5,5>(co38_reg_10162.read(), ap_const_lv5_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) && 
          esl_seteq<1,5,5>(co44_reg_10240.read(), ap_const_lv5_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) && 
          esl_seteq<1,5,5>(co49_reg_10340.read(), ap_const_lv5_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()) && 
          esl_seteq<1,5,5>(co54_reg_10418.read(), ap_const_lv5_7)))) {
        weights_24_24_1x1_V_7_we0 = ap_const_logic_1;
    } else {
        weights_24_24_1x1_V_7_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_8_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read())) {
        weights_24_24_1x1_V_8_address0 = weights_24_24_1x1_V_213_reg_42670.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read())) {
        weights_24_24_1x1_V_8_address0 = weights_24_24_1x1_V_189_reg_42434.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read())) {
        weights_24_24_1x1_V_8_address0 = weights_24_24_1x1_V_165_reg_42181.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read())) {
        weights_24_24_1x1_V_8_address0 = weights_24_24_1x1_V_141_reg_41951.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        weights_24_24_1x1_V_8_address0 = weights_24_24_1x1_V_117_reg_41686.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read())) {
        weights_24_24_1x1_V_8_address0 = weights_24_24_1x1_V_93_reg_41462.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read())) {
        weights_24_24_1x1_V_8_address0 = weights_24_24_1x1_V_69_reg_41247.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        weights_24_24_1x1_V_8_address0 = weights_24_24_1x1_V_45_reg_41017.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        weights_24_24_1x1_V_8_address0 = weights_24_24_1x1_V_21_reg_40792.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_8_address0 = grp_subconv_1x1_16_p_fu_14351_weight_8_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_8_address0 = grp_subconv_1x1_32_p_fu_14247_weight_8_V_address0.read();
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
        weights_24_24_1x1_V_8_ce0 = grp_subconv_1x1_16_p_fu_14351_weight_8_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_8_ce0 = grp_subconv_1x1_32_p_fu_14247_weight_8_V_ce0.read();
    } else {
        weights_24_24_1x1_V_8_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_8_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && 
          esl_seteq<1,5,5>(co_reg_9761.read(), ap_const_lv5_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) && 
          esl_seteq<1,5,5>(co9_reg_9839.read(), ap_const_lv5_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) && 
          esl_seteq<1,5,5>(co16_reg_9917.read(), ap_const_lv5_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) && 
          esl_seteq<1,5,5>(co22_reg_9984.read(), ap_const_lv5_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) && 
          esl_seteq<1,5,5>(co29_reg_10062.read(), ap_const_lv5_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) && 
          esl_seteq<1,5,5>(co38_reg_10162.read(), ap_const_lv5_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) && 
          esl_seteq<1,5,5>(co44_reg_10240.read(), ap_const_lv5_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) && 
          esl_seteq<1,5,5>(co49_reg_10340.read(), ap_const_lv5_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()) && 
          esl_seteq<1,5,5>(co54_reg_10418.read(), ap_const_lv5_8)))) {
        weights_24_24_1x1_V_8_we0 = ap_const_logic_1;
    } else {
        weights_24_24_1x1_V_8_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_9_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read())) {
        weights_24_24_1x1_V_9_address0 = weights_24_24_1x1_V_199_reg_42600.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read())) {
        weights_24_24_1x1_V_9_address0 = weights_24_24_1x1_V_175_reg_42364.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read())) {
        weights_24_24_1x1_V_9_address0 = weights_24_24_1x1_V_151_reg_42111.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read())) {
        weights_24_24_1x1_V_9_address0 = weights_24_24_1x1_V_127_reg_41881.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        weights_24_24_1x1_V_9_address0 = weights_24_24_1x1_V_103_reg_41616.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read())) {
        weights_24_24_1x1_V_9_address0 = weights_24_24_1x1_V_79_reg_41392.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read())) {
        weights_24_24_1x1_V_9_address0 = weights_24_24_1x1_V_55_reg_41177.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        weights_24_24_1x1_V_9_address0 = weights_24_24_1x1_V_31_reg_40947.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        weights_24_24_1x1_V_9_address0 = weights_24_24_1x1_V_7_reg_40722.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_9_address0 = grp_subconv_1x1_16_p_fu_14351_weight_9_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_9_address0 = grp_subconv_1x1_32_p_fu_14247_weight_9_V_address0.read();
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
        weights_24_24_1x1_V_9_ce0 = grp_subconv_1x1_16_p_fu_14351_weight_9_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_9_ce0 = grp_subconv_1x1_32_p_fu_14247_weight_9_V_ce0.read();
    } else {
        weights_24_24_1x1_V_9_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_9_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && 
          esl_seteq<1,5,5>(co_reg_9761.read(), ap_const_lv5_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) && 
          esl_seteq<1,5,5>(co9_reg_9839.read(), ap_const_lv5_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) && 
          esl_seteq<1,5,5>(co16_reg_9917.read(), ap_const_lv5_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) && 
          esl_seteq<1,5,5>(co22_reg_9984.read(), ap_const_lv5_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) && 
          esl_seteq<1,5,5>(co29_reg_10062.read(), ap_const_lv5_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) && 
          esl_seteq<1,5,5>(co38_reg_10162.read(), ap_const_lv5_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) && 
          esl_seteq<1,5,5>(co44_reg_10240.read(), ap_const_lv5_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) && 
          esl_seteq<1,5,5>(co49_reg_10340.read(), ap_const_lv5_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()) && 
          esl_seteq<1,5,5>(co54_reg_10418.read(), ap_const_lv5_9)))) {
        weights_24_24_1x1_V_9_we0 = ap_const_logic_1;
    } else {
        weights_24_24_1x1_V_9_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_s_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read())) {
        weights_24_24_1x1_V_s_address0 = weights_24_24_1x1_V_202_reg_42615.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read())) {
        weights_24_24_1x1_V_s_address0 = weights_24_24_1x1_V_178_reg_42379.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read())) {
        weights_24_24_1x1_V_s_address0 = weights_24_24_1x1_V_154_reg_42126.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read())) {
        weights_24_24_1x1_V_s_address0 = weights_24_24_1x1_V_130_reg_41896.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        weights_24_24_1x1_V_s_address0 = weights_24_24_1x1_V_106_reg_41631.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read())) {
        weights_24_24_1x1_V_s_address0 = weights_24_24_1x1_V_82_reg_41407.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read())) {
        weights_24_24_1x1_V_s_address0 = weights_24_24_1x1_V_58_reg_41192.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        weights_24_24_1x1_V_s_address0 = weights_24_24_1x1_V_34_reg_40962.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        weights_24_24_1x1_V_s_address0 = weights_24_24_1x1_V_10_reg_40737.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_s_address0 = grp_subconv_1x1_16_p_fu_14351_weight_0_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_s_address0 = grp_subconv_1x1_32_p_fu_14247_weight_0_V_address0.read();
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
        weights_24_24_1x1_V_s_ce0 = grp_subconv_1x1_16_p_fu_14351_weight_0_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_s_ce0 = grp_subconv_1x1_32_p_fu_14247_weight_0_V_ce0.read();
    } else {
        weights_24_24_1x1_V_s_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_s_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && 
          esl_seteq<1,5,5>(ap_const_lv5_0, co_reg_9761.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) && 
          esl_seteq<1,5,5>(ap_const_lv5_0, co9_reg_9839.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) && 
          esl_seteq<1,5,5>(ap_const_lv5_0, co16_reg_9917.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) && 
          esl_seteq<1,5,5>(ap_const_lv5_0, co22_reg_9984.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) && 
          esl_seteq<1,5,5>(ap_const_lv5_0, co29_reg_10062.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) && 
          esl_seteq<1,5,5>(ap_const_lv5_0, co38_reg_10162.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) && 
          esl_seteq<1,5,5>(ap_const_lv5_0, co44_reg_10240.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) && 
          esl_seteq<1,5,5>(ap_const_lv5_0, co49_reg_10340.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()) && 
          esl_seteq<1,5,5>(ap_const_lv5_0, co54_reg_10418.read())))) {
        weights_24_24_1x1_V_s_we0 = ap_const_logic_1;
    } else {
        weights_24_24_1x1_V_s_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_1_3x3_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1228.read())) {
        weights_48_1_3x3_V_address0 =  (sc_lv<9>) (tmp_1645_cast_fu_32588_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1133.read())) {
        weights_48_1_3x3_V_address0 =  (sc_lv<9>) (tmp_1565_cast_fu_31025_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1038.read())) {
        weights_48_1_3x3_V_address0 =  (sc_lv<9>) (tmp_1486_cast_fu_29474_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state943.read())) {
        weights_48_1_3x3_V_address0 =  (sc_lv<9>) (tmp_1409_cast_fu_27923_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state848.read())) {
        weights_48_1_3x3_V_address0 =  (sc_lv<9>) (tmp_1333_cast_fu_26376_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state753.read())) {
        weights_48_1_3x3_V_address0 =  (sc_lv<9>) (tmp_1257_cast_fu_24829_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state658.read())) {
        weights_48_1_3x3_V_address0 =  (sc_lv<9>) (tmp_1179_cast_fu_23270_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state563.read())) {
        weights_48_1_3x3_V_address0 =  (sc_lv<9>) (tmp_1103_cast_fu_21727_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state471.read())) {
        weights_48_1_3x3_V_address0 =  (sc_lv<9>) (tmp_1035_cast_fu_20295_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state412.read())) {
        weights_48_1_3x3_V_address0 =  (sc_lv<9>) (tmp_1001_cast_fu_19514_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state484.read())) {
        weights_48_1_3x3_V_address0 = grp_subconv_3x3_16_strid_fu_15359_weight_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state576.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state671.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state766.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state861.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state956.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1051.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1146.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1241.read()))) {
        weights_48_1_3x3_V_address0 = grp_subconv_3x3_8_no_rel_fu_14669_weight_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state425.read())) {
        weights_48_1_3x3_V_address0 = grp_subconv_3x3_16_strid_1_fu_14611_weight_V_address0.read();
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
        weights_48_1_3x3_V_ce0 = grp_subconv_3x3_16_strid_fu_15359_weight_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state576.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state671.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state766.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state861.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state956.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1051.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1146.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1241.read()))) {
        weights_48_1_3x3_V_ce0 = grp_subconv_3x3_8_no_rel_fu_14669_weight_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state425.read())) {
        weights_48_1_3x3_V_ce0 = grp_subconv_3x3_16_strid_1_fu_14611_weight_V_ce0.read();
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
        weights_48_48_1x1_V_10_address0 =  (sc_lv<7>) (tmp_1670_cast_fu_33013_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read())) {
        weights_48_48_1x1_V_10_address0 =  (sc_lv<7>) (tmp_1633_cast_fu_32224_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read())) {
        weights_48_48_1x1_V_10_address0 =  (sc_lv<7>) (tmp_1592_cast_fu_31446_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read())) {
        weights_48_48_1x1_V_10_address0 =  (sc_lv<7>) (tmp_1553_cast_fu_30661_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read())) {
        weights_48_48_1x1_V_10_address0 =  (sc_lv<7>) (tmp_1512_cast_fu_29887_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read())) {
        weights_48_48_1x1_V_10_address0 =  (sc_lv<7>) (tmp_1474_cast_fu_29102_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read())) {
        weights_48_48_1x1_V_10_address0 =  (sc_lv<7>) (tmp_1435_cast_fu_28336_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read())) {
        weights_48_48_1x1_V_10_address0 =  (sc_lv<7>) (tmp_1397_cast_fu_27555_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read())) {
        weights_48_48_1x1_V_10_address0 =  (sc_lv<7>) (tmp_1358_cast_fu_26789_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read())) {
        weights_48_48_1x1_V_10_address0 =  (sc_lv<7>) (tmp_1321_cast_fu_26016_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read())) {
        weights_48_48_1x1_V_10_address0 =  (sc_lv<7>) (tmp_1282_cast_fu_25246_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read())) {
        weights_48_48_1x1_V_10_address0 =  (sc_lv<7>) (tmp_1245_cast_fu_24465_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read())) {
        weights_48_48_1x1_V_10_address0 =  (sc_lv<7>) (tmp_1204_cast_fu_23687_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read())) {
        weights_48_48_1x1_V_10_address0 =  (sc_lv<7>) (tmp_1167_cast_fu_22906_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read())) {
        weights_48_48_1x1_V_10_address0 =  (sc_lv<7>) (tmp_1128_cast_fu_22140_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read())) {
        weights_48_48_1x1_V_10_address0 =  (sc_lv<7>) (tmp_1091_cast_fu_21359_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read())) {
        weights_48_48_1x1_V_10_address0 =  (sc_lv<7>) (tmp_1063_cast_fu_20712_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read())) {
        weights_48_48_1x1_V_10_address0 =  (sc_lv<7>) (tmp_1023_cast_fu_19931_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read())) {
        weights_48_48_1x1_V_10_address0 =  (sc_lv<7>) (tmp_989_cast_fu_19150_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_10_address0 = grp_subconv_1x1_16p_p_fu_14143_weight_10_V_address0.read();
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
        weights_48_48_1x1_V_10_address0 = grp_subconv_1x1_8_p_fu_14039_weight_10_V_address0.read();
    } else {
        weights_48_48_1x1_V_10_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_10_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_10_address1 = grp_subconv_1x1_16p_p_fu_14143_weight_10_V_address1.read();
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
        weights_48_48_1x1_V_10_address1 = grp_subconv_1x1_8_p_fu_14039_weight_10_V_address1.read();
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
        weights_48_48_1x1_V_10_ce0 = grp_subconv_1x1_16p_p_fu_14143_weight_10_V_ce0.read();
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
        weights_48_48_1x1_V_10_ce0 = grp_subconv_1x1_8_p_fu_14039_weight_10_V_ce0.read();
    } else {
        weights_48_48_1x1_V_10_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_10_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_10_ce1 = grp_subconv_1x1_16p_p_fu_14143_weight_10_V_ce1.read();
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
        weights_48_48_1x1_V_10_ce1 = grp_subconv_1x1_8_p_fu_14039_weight_10_V_ce1.read();
    } else {
        weights_48_48_1x1_V_10_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_10_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read()) && 
          esl_seteq<1,6,6>(tmp_842_fu_19146_p1.read(), ap_const_lv6_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read()) && 
          esl_seteq<1,6,6>(tmp_869_fu_19927_p1.read(), ap_const_lv6_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read()) && 
          esl_seteq<1,6,6>(tmp_902_fu_20708_p1.read(), ap_const_lv6_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read()) && 
          esl_seteq<1,6,6>(tmp_925_fu_21355_p1.read(), ap_const_lv6_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read()) && 
          esl_seteq<1,6,6>(tmp_955_fu_22136_p1.read(), ap_const_lv6_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read()) && 
          esl_seteq<1,6,6>(tmp_989_fu_22902_p1.read(), ap_const_lv6_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) && 
          esl_seteq<1,6,6>(tmp_1019_fu_23683_p1.read(), ap_const_lv6_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read()) && 
          esl_seteq<1,6,6>(tmp_1055_fu_24461_p1.read(), ap_const_lv6_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read()) && 
          esl_seteq<1,6,6>(tmp_1085_fu_25242_p1.read(), ap_const_lv6_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read()) && 
          esl_seteq<1,6,6>(tmp_1119_fu_26012_p1.read(), ap_const_lv6_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read()) && 
          esl_seteq<1,6,6>(tmp_1149_fu_26785_p1.read(), ap_const_lv6_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read()) && 
          esl_seteq<1,6,6>(tmp_1183_fu_27551_p1.read(), ap_const_lv6_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read()) && 
          esl_seteq<1,6,6>(tmp_1214_fu_28332_p1.read(), ap_const_lv6_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read()) && 
          esl_seteq<1,6,6>(tmp_1248_fu_29098_p1.read(), ap_const_lv6_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read()) && 
          esl_seteq<1,6,6>(tmp_1279_fu_29883_p1.read(), ap_const_lv6_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read()) && 
          esl_seteq<1,6,6>(tmp_1315_fu_30657_p1.read(), ap_const_lv6_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read()) && 
          esl_seteq<1,6,6>(tmp_1347_fu_31442_p1.read(), ap_const_lv6_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read()) && 
          esl_seteq<1,6,6>(tmp_1383_fu_32220_p1.read(), ap_const_lv6_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read()) && 
          esl_seteq<1,6,6>(tmp_1413_fu_33009_p1.read(), ap_const_lv6_A)))) {
        weights_48_48_1x1_V_10_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_10_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_11_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read())) {
        weights_48_48_1x1_V_11_address0 =  (sc_lv<7>) (tmp_1670_cast_fu_33013_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read())) {
        weights_48_48_1x1_V_11_address0 =  (sc_lv<7>) (tmp_1633_cast_fu_32224_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read())) {
        weights_48_48_1x1_V_11_address0 =  (sc_lv<7>) (tmp_1592_cast_fu_31446_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read())) {
        weights_48_48_1x1_V_11_address0 =  (sc_lv<7>) (tmp_1553_cast_fu_30661_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read())) {
        weights_48_48_1x1_V_11_address0 =  (sc_lv<7>) (tmp_1512_cast_fu_29887_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read())) {
        weights_48_48_1x1_V_11_address0 =  (sc_lv<7>) (tmp_1474_cast_fu_29102_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read())) {
        weights_48_48_1x1_V_11_address0 =  (sc_lv<7>) (tmp_1435_cast_fu_28336_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read())) {
        weights_48_48_1x1_V_11_address0 =  (sc_lv<7>) (tmp_1397_cast_fu_27555_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read())) {
        weights_48_48_1x1_V_11_address0 =  (sc_lv<7>) (tmp_1358_cast_fu_26789_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read())) {
        weights_48_48_1x1_V_11_address0 =  (sc_lv<7>) (tmp_1321_cast_fu_26016_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read())) {
        weights_48_48_1x1_V_11_address0 =  (sc_lv<7>) (tmp_1282_cast_fu_25246_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read())) {
        weights_48_48_1x1_V_11_address0 =  (sc_lv<7>) (tmp_1245_cast_fu_24465_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read())) {
        weights_48_48_1x1_V_11_address0 =  (sc_lv<7>) (tmp_1204_cast_fu_23687_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read())) {
        weights_48_48_1x1_V_11_address0 =  (sc_lv<7>) (tmp_1167_cast_fu_22906_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read())) {
        weights_48_48_1x1_V_11_address0 =  (sc_lv<7>) (tmp_1128_cast_fu_22140_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read())) {
        weights_48_48_1x1_V_11_address0 =  (sc_lv<7>) (tmp_1091_cast_fu_21359_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read())) {
        weights_48_48_1x1_V_11_address0 =  (sc_lv<7>) (tmp_1063_cast_fu_20712_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read())) {
        weights_48_48_1x1_V_11_address0 =  (sc_lv<7>) (tmp_1023_cast_fu_19931_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read())) {
        weights_48_48_1x1_V_11_address0 =  (sc_lv<7>) (tmp_989_cast_fu_19150_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_11_address0 = grp_subconv_1x1_16p_p_fu_14143_weight_11_V_address0.read();
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
        weights_48_48_1x1_V_11_address0 = grp_subconv_1x1_8_p_fu_14039_weight_11_V_address0.read();
    } else {
        weights_48_48_1x1_V_11_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_11_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_11_address1 = grp_subconv_1x1_16p_p_fu_14143_weight_11_V_address1.read();
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
        weights_48_48_1x1_V_11_address1 = grp_subconv_1x1_8_p_fu_14039_weight_11_V_address1.read();
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
        weights_48_48_1x1_V_11_ce0 = grp_subconv_1x1_16p_p_fu_14143_weight_11_V_ce0.read();
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
        weights_48_48_1x1_V_11_ce0 = grp_subconv_1x1_8_p_fu_14039_weight_11_V_ce0.read();
    } else {
        weights_48_48_1x1_V_11_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_11_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_11_ce1 = grp_subconv_1x1_16p_p_fu_14143_weight_11_V_ce1.read();
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
        weights_48_48_1x1_V_11_ce1 = grp_subconv_1x1_8_p_fu_14039_weight_11_V_ce1.read();
    } else {
        weights_48_48_1x1_V_11_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_11_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read()) && 
          esl_seteq<1,6,6>(tmp_842_fu_19146_p1.read(), ap_const_lv6_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read()) && 
          esl_seteq<1,6,6>(tmp_869_fu_19927_p1.read(), ap_const_lv6_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read()) && 
          esl_seteq<1,6,6>(tmp_902_fu_20708_p1.read(), ap_const_lv6_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read()) && 
          esl_seteq<1,6,6>(tmp_925_fu_21355_p1.read(), ap_const_lv6_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read()) && 
          esl_seteq<1,6,6>(tmp_955_fu_22136_p1.read(), ap_const_lv6_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read()) && 
          esl_seteq<1,6,6>(tmp_989_fu_22902_p1.read(), ap_const_lv6_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) && 
          esl_seteq<1,6,6>(tmp_1019_fu_23683_p1.read(), ap_const_lv6_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read()) && 
          esl_seteq<1,6,6>(tmp_1055_fu_24461_p1.read(), ap_const_lv6_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read()) && 
          esl_seteq<1,6,6>(tmp_1085_fu_25242_p1.read(), ap_const_lv6_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read()) && 
          esl_seteq<1,6,6>(tmp_1119_fu_26012_p1.read(), ap_const_lv6_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read()) && 
          esl_seteq<1,6,6>(tmp_1149_fu_26785_p1.read(), ap_const_lv6_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read()) && 
          esl_seteq<1,6,6>(tmp_1183_fu_27551_p1.read(), ap_const_lv6_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read()) && 
          esl_seteq<1,6,6>(tmp_1214_fu_28332_p1.read(), ap_const_lv6_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read()) && 
          esl_seteq<1,6,6>(tmp_1248_fu_29098_p1.read(), ap_const_lv6_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read()) && 
          esl_seteq<1,6,6>(tmp_1279_fu_29883_p1.read(), ap_const_lv6_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read()) && 
          esl_seteq<1,6,6>(tmp_1315_fu_30657_p1.read(), ap_const_lv6_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read()) && 
          esl_seteq<1,6,6>(tmp_1347_fu_31442_p1.read(), ap_const_lv6_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read()) && 
          esl_seteq<1,6,6>(tmp_1383_fu_32220_p1.read(), ap_const_lv6_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read()) && 
          esl_seteq<1,6,6>(tmp_1413_fu_33009_p1.read(), ap_const_lv6_B)))) {
        weights_48_48_1x1_V_11_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_11_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_12_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read())) {
        weights_48_48_1x1_V_12_address0 =  (sc_lv<7>) (tmp_1670_cast_fu_33013_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read())) {
        weights_48_48_1x1_V_12_address0 =  (sc_lv<7>) (tmp_1633_cast_fu_32224_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read())) {
        weights_48_48_1x1_V_12_address0 =  (sc_lv<7>) (tmp_1592_cast_fu_31446_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read())) {
        weights_48_48_1x1_V_12_address0 =  (sc_lv<7>) (tmp_1553_cast_fu_30661_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read())) {
        weights_48_48_1x1_V_12_address0 =  (sc_lv<7>) (tmp_1512_cast_fu_29887_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read())) {
        weights_48_48_1x1_V_12_address0 =  (sc_lv<7>) (tmp_1474_cast_fu_29102_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read())) {
        weights_48_48_1x1_V_12_address0 =  (sc_lv<7>) (tmp_1435_cast_fu_28336_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read())) {
        weights_48_48_1x1_V_12_address0 =  (sc_lv<7>) (tmp_1397_cast_fu_27555_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read())) {
        weights_48_48_1x1_V_12_address0 =  (sc_lv<7>) (tmp_1358_cast_fu_26789_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read())) {
        weights_48_48_1x1_V_12_address0 =  (sc_lv<7>) (tmp_1321_cast_fu_26016_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read())) {
        weights_48_48_1x1_V_12_address0 =  (sc_lv<7>) (tmp_1282_cast_fu_25246_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read())) {
        weights_48_48_1x1_V_12_address0 =  (sc_lv<7>) (tmp_1245_cast_fu_24465_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read())) {
        weights_48_48_1x1_V_12_address0 =  (sc_lv<7>) (tmp_1204_cast_fu_23687_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read())) {
        weights_48_48_1x1_V_12_address0 =  (sc_lv<7>) (tmp_1167_cast_fu_22906_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read())) {
        weights_48_48_1x1_V_12_address0 =  (sc_lv<7>) (tmp_1128_cast_fu_22140_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read())) {
        weights_48_48_1x1_V_12_address0 =  (sc_lv<7>) (tmp_1091_cast_fu_21359_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read())) {
        weights_48_48_1x1_V_12_address0 =  (sc_lv<7>) (tmp_1063_cast_fu_20712_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read())) {
        weights_48_48_1x1_V_12_address0 =  (sc_lv<7>) (tmp_1023_cast_fu_19931_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read())) {
        weights_48_48_1x1_V_12_address0 =  (sc_lv<7>) (tmp_989_cast_fu_19150_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_12_address0 = grp_subconv_1x1_16p_p_fu_14143_weight_12_V_address0.read();
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
        weights_48_48_1x1_V_12_address0 = grp_subconv_1x1_8_p_fu_14039_weight_12_V_address0.read();
    } else {
        weights_48_48_1x1_V_12_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_12_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_12_address1 = grp_subconv_1x1_16p_p_fu_14143_weight_12_V_address1.read();
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
        weights_48_48_1x1_V_12_address1 = grp_subconv_1x1_8_p_fu_14039_weight_12_V_address1.read();
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
        weights_48_48_1x1_V_12_ce0 = grp_subconv_1x1_16p_p_fu_14143_weight_12_V_ce0.read();
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
        weights_48_48_1x1_V_12_ce0 = grp_subconv_1x1_8_p_fu_14039_weight_12_V_ce0.read();
    } else {
        weights_48_48_1x1_V_12_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_12_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_12_ce1 = grp_subconv_1x1_16p_p_fu_14143_weight_12_V_ce1.read();
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
        weights_48_48_1x1_V_12_ce1 = grp_subconv_1x1_8_p_fu_14039_weight_12_V_ce1.read();
    } else {
        weights_48_48_1x1_V_12_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_12_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read()) && 
          esl_seteq<1,6,6>(tmp_842_fu_19146_p1.read(), ap_const_lv6_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read()) && 
          esl_seteq<1,6,6>(tmp_869_fu_19927_p1.read(), ap_const_lv6_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read()) && 
          esl_seteq<1,6,6>(tmp_902_fu_20708_p1.read(), ap_const_lv6_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read()) && 
          esl_seteq<1,6,6>(tmp_925_fu_21355_p1.read(), ap_const_lv6_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read()) && 
          esl_seteq<1,6,6>(tmp_955_fu_22136_p1.read(), ap_const_lv6_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read()) && 
          esl_seteq<1,6,6>(tmp_989_fu_22902_p1.read(), ap_const_lv6_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) && 
          esl_seteq<1,6,6>(tmp_1019_fu_23683_p1.read(), ap_const_lv6_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read()) && 
          esl_seteq<1,6,6>(tmp_1055_fu_24461_p1.read(), ap_const_lv6_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read()) && 
          esl_seteq<1,6,6>(tmp_1085_fu_25242_p1.read(), ap_const_lv6_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read()) && 
          esl_seteq<1,6,6>(tmp_1119_fu_26012_p1.read(), ap_const_lv6_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read()) && 
          esl_seteq<1,6,6>(tmp_1149_fu_26785_p1.read(), ap_const_lv6_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read()) && 
          esl_seteq<1,6,6>(tmp_1183_fu_27551_p1.read(), ap_const_lv6_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read()) && 
          esl_seteq<1,6,6>(tmp_1214_fu_28332_p1.read(), ap_const_lv6_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read()) && 
          esl_seteq<1,6,6>(tmp_1248_fu_29098_p1.read(), ap_const_lv6_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read()) && 
          esl_seteq<1,6,6>(tmp_1279_fu_29883_p1.read(), ap_const_lv6_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read()) && 
          esl_seteq<1,6,6>(tmp_1315_fu_30657_p1.read(), ap_const_lv6_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read()) && 
          esl_seteq<1,6,6>(tmp_1347_fu_31442_p1.read(), ap_const_lv6_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read()) && 
          esl_seteq<1,6,6>(tmp_1383_fu_32220_p1.read(), ap_const_lv6_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read()) && 
          esl_seteq<1,6,6>(tmp_1413_fu_33009_p1.read(), ap_const_lv6_C)))) {
        weights_48_48_1x1_V_12_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_12_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_13_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read())) {
        weights_48_48_1x1_V_13_address0 =  (sc_lv<7>) (tmp_1670_cast_fu_33013_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read())) {
        weights_48_48_1x1_V_13_address0 =  (sc_lv<7>) (tmp_1633_cast_fu_32224_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read())) {
        weights_48_48_1x1_V_13_address0 =  (sc_lv<7>) (tmp_1592_cast_fu_31446_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read())) {
        weights_48_48_1x1_V_13_address0 =  (sc_lv<7>) (tmp_1553_cast_fu_30661_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read())) {
        weights_48_48_1x1_V_13_address0 =  (sc_lv<7>) (tmp_1512_cast_fu_29887_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read())) {
        weights_48_48_1x1_V_13_address0 =  (sc_lv<7>) (tmp_1474_cast_fu_29102_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read())) {
        weights_48_48_1x1_V_13_address0 =  (sc_lv<7>) (tmp_1435_cast_fu_28336_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read())) {
        weights_48_48_1x1_V_13_address0 =  (sc_lv<7>) (tmp_1397_cast_fu_27555_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read())) {
        weights_48_48_1x1_V_13_address0 =  (sc_lv<7>) (tmp_1358_cast_fu_26789_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read())) {
        weights_48_48_1x1_V_13_address0 =  (sc_lv<7>) (tmp_1321_cast_fu_26016_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read())) {
        weights_48_48_1x1_V_13_address0 =  (sc_lv<7>) (tmp_1282_cast_fu_25246_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read())) {
        weights_48_48_1x1_V_13_address0 =  (sc_lv<7>) (tmp_1245_cast_fu_24465_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read())) {
        weights_48_48_1x1_V_13_address0 =  (sc_lv<7>) (tmp_1204_cast_fu_23687_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read())) {
        weights_48_48_1x1_V_13_address0 =  (sc_lv<7>) (tmp_1167_cast_fu_22906_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read())) {
        weights_48_48_1x1_V_13_address0 =  (sc_lv<7>) (tmp_1128_cast_fu_22140_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read())) {
        weights_48_48_1x1_V_13_address0 =  (sc_lv<7>) (tmp_1091_cast_fu_21359_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read())) {
        weights_48_48_1x1_V_13_address0 =  (sc_lv<7>) (tmp_1063_cast_fu_20712_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read())) {
        weights_48_48_1x1_V_13_address0 =  (sc_lv<7>) (tmp_1023_cast_fu_19931_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read())) {
        weights_48_48_1x1_V_13_address0 =  (sc_lv<7>) (tmp_989_cast_fu_19150_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_13_address0 = grp_subconv_1x1_16p_p_fu_14143_weight_13_V_address0.read();
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
        weights_48_48_1x1_V_13_address0 = grp_subconv_1x1_8_p_fu_14039_weight_13_V_address0.read();
    } else {
        weights_48_48_1x1_V_13_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_13_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_13_address1 = grp_subconv_1x1_16p_p_fu_14143_weight_13_V_address1.read();
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
        weights_48_48_1x1_V_13_address1 = grp_subconv_1x1_8_p_fu_14039_weight_13_V_address1.read();
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
        weights_48_48_1x1_V_13_ce0 = grp_subconv_1x1_16p_p_fu_14143_weight_13_V_ce0.read();
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
        weights_48_48_1x1_V_13_ce0 = grp_subconv_1x1_8_p_fu_14039_weight_13_V_ce0.read();
    } else {
        weights_48_48_1x1_V_13_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_13_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_13_ce1 = grp_subconv_1x1_16p_p_fu_14143_weight_13_V_ce1.read();
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
        weights_48_48_1x1_V_13_ce1 = grp_subconv_1x1_8_p_fu_14039_weight_13_V_ce1.read();
    } else {
        weights_48_48_1x1_V_13_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_13_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read()) && 
          esl_seteq<1,6,6>(tmp_842_fu_19146_p1.read(), ap_const_lv6_D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read()) && 
          esl_seteq<1,6,6>(tmp_869_fu_19927_p1.read(), ap_const_lv6_D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read()) && 
          esl_seteq<1,6,6>(tmp_902_fu_20708_p1.read(), ap_const_lv6_D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read()) && 
          esl_seteq<1,6,6>(tmp_925_fu_21355_p1.read(), ap_const_lv6_D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read()) && 
          esl_seteq<1,6,6>(tmp_955_fu_22136_p1.read(), ap_const_lv6_D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read()) && 
          esl_seteq<1,6,6>(tmp_989_fu_22902_p1.read(), ap_const_lv6_D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) && 
          esl_seteq<1,6,6>(tmp_1019_fu_23683_p1.read(), ap_const_lv6_D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read()) && 
          esl_seteq<1,6,6>(tmp_1055_fu_24461_p1.read(), ap_const_lv6_D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read()) && 
          esl_seteq<1,6,6>(tmp_1085_fu_25242_p1.read(), ap_const_lv6_D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read()) && 
          esl_seteq<1,6,6>(tmp_1119_fu_26012_p1.read(), ap_const_lv6_D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read()) && 
          esl_seteq<1,6,6>(tmp_1149_fu_26785_p1.read(), ap_const_lv6_D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read()) && 
          esl_seteq<1,6,6>(tmp_1183_fu_27551_p1.read(), ap_const_lv6_D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read()) && 
          esl_seteq<1,6,6>(tmp_1214_fu_28332_p1.read(), ap_const_lv6_D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read()) && 
          esl_seteq<1,6,6>(tmp_1248_fu_29098_p1.read(), ap_const_lv6_D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read()) && 
          esl_seteq<1,6,6>(tmp_1279_fu_29883_p1.read(), ap_const_lv6_D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read()) && 
          esl_seteq<1,6,6>(tmp_1315_fu_30657_p1.read(), ap_const_lv6_D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read()) && 
          esl_seteq<1,6,6>(tmp_1347_fu_31442_p1.read(), ap_const_lv6_D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read()) && 
          esl_seteq<1,6,6>(tmp_1383_fu_32220_p1.read(), ap_const_lv6_D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read()) && 
          esl_seteq<1,6,6>(tmp_1413_fu_33009_p1.read(), ap_const_lv6_D)))) {
        weights_48_48_1x1_V_13_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_13_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_14_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read())) {
        weights_48_48_1x1_V_14_address0 =  (sc_lv<7>) (tmp_1670_cast_fu_33013_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read())) {
        weights_48_48_1x1_V_14_address0 =  (sc_lv<7>) (tmp_1633_cast_fu_32224_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read())) {
        weights_48_48_1x1_V_14_address0 =  (sc_lv<7>) (tmp_1592_cast_fu_31446_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read())) {
        weights_48_48_1x1_V_14_address0 =  (sc_lv<7>) (tmp_1553_cast_fu_30661_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read())) {
        weights_48_48_1x1_V_14_address0 =  (sc_lv<7>) (tmp_1512_cast_fu_29887_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read())) {
        weights_48_48_1x1_V_14_address0 =  (sc_lv<7>) (tmp_1474_cast_fu_29102_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read())) {
        weights_48_48_1x1_V_14_address0 =  (sc_lv<7>) (tmp_1435_cast_fu_28336_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read())) {
        weights_48_48_1x1_V_14_address0 =  (sc_lv<7>) (tmp_1397_cast_fu_27555_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read())) {
        weights_48_48_1x1_V_14_address0 =  (sc_lv<7>) (tmp_1358_cast_fu_26789_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read())) {
        weights_48_48_1x1_V_14_address0 =  (sc_lv<7>) (tmp_1321_cast_fu_26016_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read())) {
        weights_48_48_1x1_V_14_address0 =  (sc_lv<7>) (tmp_1282_cast_fu_25246_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read())) {
        weights_48_48_1x1_V_14_address0 =  (sc_lv<7>) (tmp_1245_cast_fu_24465_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read())) {
        weights_48_48_1x1_V_14_address0 =  (sc_lv<7>) (tmp_1204_cast_fu_23687_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read())) {
        weights_48_48_1x1_V_14_address0 =  (sc_lv<7>) (tmp_1167_cast_fu_22906_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read())) {
        weights_48_48_1x1_V_14_address0 =  (sc_lv<7>) (tmp_1128_cast_fu_22140_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read())) {
        weights_48_48_1x1_V_14_address0 =  (sc_lv<7>) (tmp_1091_cast_fu_21359_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read())) {
        weights_48_48_1x1_V_14_address0 =  (sc_lv<7>) (tmp_1063_cast_fu_20712_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read())) {
        weights_48_48_1x1_V_14_address0 =  (sc_lv<7>) (tmp_1023_cast_fu_19931_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read())) {
        weights_48_48_1x1_V_14_address0 =  (sc_lv<7>) (tmp_989_cast_fu_19150_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_14_address0 = grp_subconv_1x1_16p_p_fu_14143_weight_14_V_address0.read();
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
        weights_48_48_1x1_V_14_address0 = grp_subconv_1x1_8_p_fu_14039_weight_14_V_address0.read();
    } else {
        weights_48_48_1x1_V_14_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_14_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_14_address1 = grp_subconv_1x1_16p_p_fu_14143_weight_14_V_address1.read();
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
        weights_48_48_1x1_V_14_address1 = grp_subconv_1x1_8_p_fu_14039_weight_14_V_address1.read();
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
        weights_48_48_1x1_V_14_ce0 = grp_subconv_1x1_16p_p_fu_14143_weight_14_V_ce0.read();
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
        weights_48_48_1x1_V_14_ce0 = grp_subconv_1x1_8_p_fu_14039_weight_14_V_ce0.read();
    } else {
        weights_48_48_1x1_V_14_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_14_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_14_ce1 = grp_subconv_1x1_16p_p_fu_14143_weight_14_V_ce1.read();
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
        weights_48_48_1x1_V_14_ce1 = grp_subconv_1x1_8_p_fu_14039_weight_14_V_ce1.read();
    } else {
        weights_48_48_1x1_V_14_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_14_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read()) && 
          esl_seteq<1,6,6>(tmp_842_fu_19146_p1.read(), ap_const_lv6_E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read()) && 
          esl_seteq<1,6,6>(tmp_869_fu_19927_p1.read(), ap_const_lv6_E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read()) && 
          esl_seteq<1,6,6>(tmp_902_fu_20708_p1.read(), ap_const_lv6_E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read()) && 
          esl_seteq<1,6,6>(tmp_925_fu_21355_p1.read(), ap_const_lv6_E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read()) && 
          esl_seteq<1,6,6>(tmp_955_fu_22136_p1.read(), ap_const_lv6_E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read()) && 
          esl_seteq<1,6,6>(tmp_989_fu_22902_p1.read(), ap_const_lv6_E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) && 
          esl_seteq<1,6,6>(tmp_1019_fu_23683_p1.read(), ap_const_lv6_E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read()) && 
          esl_seteq<1,6,6>(tmp_1055_fu_24461_p1.read(), ap_const_lv6_E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read()) && 
          esl_seteq<1,6,6>(tmp_1085_fu_25242_p1.read(), ap_const_lv6_E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read()) && 
          esl_seteq<1,6,6>(tmp_1119_fu_26012_p1.read(), ap_const_lv6_E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read()) && 
          esl_seteq<1,6,6>(tmp_1149_fu_26785_p1.read(), ap_const_lv6_E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read()) && 
          esl_seteq<1,6,6>(tmp_1183_fu_27551_p1.read(), ap_const_lv6_E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read()) && 
          esl_seteq<1,6,6>(tmp_1214_fu_28332_p1.read(), ap_const_lv6_E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read()) && 
          esl_seteq<1,6,6>(tmp_1248_fu_29098_p1.read(), ap_const_lv6_E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read()) && 
          esl_seteq<1,6,6>(tmp_1279_fu_29883_p1.read(), ap_const_lv6_E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read()) && 
          esl_seteq<1,6,6>(tmp_1315_fu_30657_p1.read(), ap_const_lv6_E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read()) && 
          esl_seteq<1,6,6>(tmp_1347_fu_31442_p1.read(), ap_const_lv6_E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read()) && 
          esl_seteq<1,6,6>(tmp_1383_fu_32220_p1.read(), ap_const_lv6_E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read()) && 
          esl_seteq<1,6,6>(tmp_1413_fu_33009_p1.read(), ap_const_lv6_E)))) {
        weights_48_48_1x1_V_14_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_14_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_15_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read())) {
        weights_48_48_1x1_V_15_address0 =  (sc_lv<7>) (tmp_1670_cast_fu_33013_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read())) {
        weights_48_48_1x1_V_15_address0 =  (sc_lv<7>) (tmp_1633_cast_fu_32224_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read())) {
        weights_48_48_1x1_V_15_address0 =  (sc_lv<7>) (tmp_1592_cast_fu_31446_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read())) {
        weights_48_48_1x1_V_15_address0 =  (sc_lv<7>) (tmp_1553_cast_fu_30661_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read())) {
        weights_48_48_1x1_V_15_address0 =  (sc_lv<7>) (tmp_1512_cast_fu_29887_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read())) {
        weights_48_48_1x1_V_15_address0 =  (sc_lv<7>) (tmp_1474_cast_fu_29102_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read())) {
        weights_48_48_1x1_V_15_address0 =  (sc_lv<7>) (tmp_1435_cast_fu_28336_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read())) {
        weights_48_48_1x1_V_15_address0 =  (sc_lv<7>) (tmp_1397_cast_fu_27555_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read())) {
        weights_48_48_1x1_V_15_address0 =  (sc_lv<7>) (tmp_1358_cast_fu_26789_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read())) {
        weights_48_48_1x1_V_15_address0 =  (sc_lv<7>) (tmp_1321_cast_fu_26016_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read())) {
        weights_48_48_1x1_V_15_address0 =  (sc_lv<7>) (tmp_1282_cast_fu_25246_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read())) {
        weights_48_48_1x1_V_15_address0 =  (sc_lv<7>) (tmp_1245_cast_fu_24465_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read())) {
        weights_48_48_1x1_V_15_address0 =  (sc_lv<7>) (tmp_1204_cast_fu_23687_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read())) {
        weights_48_48_1x1_V_15_address0 =  (sc_lv<7>) (tmp_1167_cast_fu_22906_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read())) {
        weights_48_48_1x1_V_15_address0 =  (sc_lv<7>) (tmp_1128_cast_fu_22140_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read())) {
        weights_48_48_1x1_V_15_address0 =  (sc_lv<7>) (tmp_1091_cast_fu_21359_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read())) {
        weights_48_48_1x1_V_15_address0 =  (sc_lv<7>) (tmp_1063_cast_fu_20712_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read())) {
        weights_48_48_1x1_V_15_address0 =  (sc_lv<7>) (tmp_1023_cast_fu_19931_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read())) {
        weights_48_48_1x1_V_15_address0 =  (sc_lv<7>) (tmp_989_cast_fu_19150_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_15_address0 = grp_subconv_1x1_16p_p_fu_14143_weight_15_V_address0.read();
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
        weights_48_48_1x1_V_15_address0 = grp_subconv_1x1_8_p_fu_14039_weight_15_V_address0.read();
    } else {
        weights_48_48_1x1_V_15_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_15_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_15_address1 = grp_subconv_1x1_16p_p_fu_14143_weight_15_V_address1.read();
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
        weights_48_48_1x1_V_15_address1 = grp_subconv_1x1_8_p_fu_14039_weight_15_V_address1.read();
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
        weights_48_48_1x1_V_15_ce0 = grp_subconv_1x1_16p_p_fu_14143_weight_15_V_ce0.read();
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
        weights_48_48_1x1_V_15_ce0 = grp_subconv_1x1_8_p_fu_14039_weight_15_V_ce0.read();
    } else {
        weights_48_48_1x1_V_15_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_15_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_15_ce1 = grp_subconv_1x1_16p_p_fu_14143_weight_15_V_ce1.read();
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
        weights_48_48_1x1_V_15_ce1 = grp_subconv_1x1_8_p_fu_14039_weight_15_V_ce1.read();
    } else {
        weights_48_48_1x1_V_15_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_15_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read()) && 
          esl_seteq<1,6,6>(tmp_842_fu_19146_p1.read(), ap_const_lv6_F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read()) && 
          esl_seteq<1,6,6>(tmp_869_fu_19927_p1.read(), ap_const_lv6_F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read()) && 
          esl_seteq<1,6,6>(tmp_902_fu_20708_p1.read(), ap_const_lv6_F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read()) && 
          esl_seteq<1,6,6>(tmp_925_fu_21355_p1.read(), ap_const_lv6_F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read()) && 
          esl_seteq<1,6,6>(tmp_955_fu_22136_p1.read(), ap_const_lv6_F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read()) && 
          esl_seteq<1,6,6>(tmp_989_fu_22902_p1.read(), ap_const_lv6_F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) && 
          esl_seteq<1,6,6>(tmp_1019_fu_23683_p1.read(), ap_const_lv6_F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read()) && 
          esl_seteq<1,6,6>(tmp_1055_fu_24461_p1.read(), ap_const_lv6_F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read()) && 
          esl_seteq<1,6,6>(tmp_1085_fu_25242_p1.read(), ap_const_lv6_F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read()) && 
          esl_seteq<1,6,6>(tmp_1119_fu_26012_p1.read(), ap_const_lv6_F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read()) && 
          esl_seteq<1,6,6>(tmp_1149_fu_26785_p1.read(), ap_const_lv6_F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read()) && 
          esl_seteq<1,6,6>(tmp_1183_fu_27551_p1.read(), ap_const_lv6_F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read()) && 
          esl_seteq<1,6,6>(tmp_1214_fu_28332_p1.read(), ap_const_lv6_F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read()) && 
          esl_seteq<1,6,6>(tmp_1248_fu_29098_p1.read(), ap_const_lv6_F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read()) && 
          esl_seteq<1,6,6>(tmp_1279_fu_29883_p1.read(), ap_const_lv6_F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read()) && 
          esl_seteq<1,6,6>(tmp_1315_fu_30657_p1.read(), ap_const_lv6_F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read()) && 
          esl_seteq<1,6,6>(tmp_1347_fu_31442_p1.read(), ap_const_lv6_F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read()) && 
          esl_seteq<1,6,6>(tmp_1383_fu_32220_p1.read(), ap_const_lv6_F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read()) && 
          esl_seteq<1,6,6>(tmp_1413_fu_33009_p1.read(), ap_const_lv6_F)))) {
        weights_48_48_1x1_V_15_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_15_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_16_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read())) {
        weights_48_48_1x1_V_16_address0 =  (sc_lv<7>) (tmp_1670_cast_fu_33013_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read())) {
        weights_48_48_1x1_V_16_address0 =  (sc_lv<7>) (tmp_1633_cast_fu_32224_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read())) {
        weights_48_48_1x1_V_16_address0 =  (sc_lv<7>) (tmp_1592_cast_fu_31446_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read())) {
        weights_48_48_1x1_V_16_address0 =  (sc_lv<7>) (tmp_1553_cast_fu_30661_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read())) {
        weights_48_48_1x1_V_16_address0 =  (sc_lv<7>) (tmp_1512_cast_fu_29887_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read())) {
        weights_48_48_1x1_V_16_address0 =  (sc_lv<7>) (tmp_1474_cast_fu_29102_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read())) {
        weights_48_48_1x1_V_16_address0 =  (sc_lv<7>) (tmp_1435_cast_fu_28336_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read())) {
        weights_48_48_1x1_V_16_address0 =  (sc_lv<7>) (tmp_1397_cast_fu_27555_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read())) {
        weights_48_48_1x1_V_16_address0 =  (sc_lv<7>) (tmp_1358_cast_fu_26789_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read())) {
        weights_48_48_1x1_V_16_address0 =  (sc_lv<7>) (tmp_1321_cast_fu_26016_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read())) {
        weights_48_48_1x1_V_16_address0 =  (sc_lv<7>) (tmp_1282_cast_fu_25246_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read())) {
        weights_48_48_1x1_V_16_address0 =  (sc_lv<7>) (tmp_1245_cast_fu_24465_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read())) {
        weights_48_48_1x1_V_16_address0 =  (sc_lv<7>) (tmp_1204_cast_fu_23687_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read())) {
        weights_48_48_1x1_V_16_address0 =  (sc_lv<7>) (tmp_1167_cast_fu_22906_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read())) {
        weights_48_48_1x1_V_16_address0 =  (sc_lv<7>) (tmp_1128_cast_fu_22140_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read())) {
        weights_48_48_1x1_V_16_address0 =  (sc_lv<7>) (tmp_1091_cast_fu_21359_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read())) {
        weights_48_48_1x1_V_16_address0 =  (sc_lv<7>) (tmp_1063_cast_fu_20712_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read())) {
        weights_48_48_1x1_V_16_address0 =  (sc_lv<7>) (tmp_1023_cast_fu_19931_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read())) {
        weights_48_48_1x1_V_16_address0 =  (sc_lv<7>) (tmp_989_cast_fu_19150_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_16_address0 = grp_subconv_1x1_16p_p_fu_14143_weight_16_V_address0.read();
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
        weights_48_48_1x1_V_16_address0 = grp_subconv_1x1_8_p_fu_14039_weight_16_V_address0.read();
    } else {
        weights_48_48_1x1_V_16_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_16_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_16_address1 = grp_subconv_1x1_16p_p_fu_14143_weight_16_V_address1.read();
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
        weights_48_48_1x1_V_16_address1 = grp_subconv_1x1_8_p_fu_14039_weight_16_V_address1.read();
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
        weights_48_48_1x1_V_16_ce0 = grp_subconv_1x1_16p_p_fu_14143_weight_16_V_ce0.read();
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
        weights_48_48_1x1_V_16_ce0 = grp_subconv_1x1_8_p_fu_14039_weight_16_V_ce0.read();
    } else {
        weights_48_48_1x1_V_16_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_16_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_16_ce1 = grp_subconv_1x1_16p_p_fu_14143_weight_16_V_ce1.read();
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
        weights_48_48_1x1_V_16_ce1 = grp_subconv_1x1_8_p_fu_14039_weight_16_V_ce1.read();
    } else {
        weights_48_48_1x1_V_16_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_16_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read()) && 
          esl_seteq<1,6,6>(tmp_842_fu_19146_p1.read(), ap_const_lv6_10)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read()) && 
          esl_seteq<1,6,6>(tmp_869_fu_19927_p1.read(), ap_const_lv6_10)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read()) && 
          esl_seteq<1,6,6>(tmp_902_fu_20708_p1.read(), ap_const_lv6_10)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read()) && 
          esl_seteq<1,6,6>(tmp_925_fu_21355_p1.read(), ap_const_lv6_10)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read()) && 
          esl_seteq<1,6,6>(tmp_955_fu_22136_p1.read(), ap_const_lv6_10)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read()) && 
          esl_seteq<1,6,6>(tmp_989_fu_22902_p1.read(), ap_const_lv6_10)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) && 
          esl_seteq<1,6,6>(tmp_1019_fu_23683_p1.read(), ap_const_lv6_10)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read()) && 
          esl_seteq<1,6,6>(tmp_1055_fu_24461_p1.read(), ap_const_lv6_10)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read()) && 
          esl_seteq<1,6,6>(tmp_1085_fu_25242_p1.read(), ap_const_lv6_10)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read()) && 
          esl_seteq<1,6,6>(tmp_1119_fu_26012_p1.read(), ap_const_lv6_10)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read()) && 
          esl_seteq<1,6,6>(tmp_1149_fu_26785_p1.read(), ap_const_lv6_10)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read()) && 
          esl_seteq<1,6,6>(tmp_1183_fu_27551_p1.read(), ap_const_lv6_10)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read()) && 
          esl_seteq<1,6,6>(tmp_1214_fu_28332_p1.read(), ap_const_lv6_10)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read()) && 
          esl_seteq<1,6,6>(tmp_1248_fu_29098_p1.read(), ap_const_lv6_10)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read()) && 
          esl_seteq<1,6,6>(tmp_1279_fu_29883_p1.read(), ap_const_lv6_10)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read()) && 
          esl_seteq<1,6,6>(tmp_1315_fu_30657_p1.read(), ap_const_lv6_10)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read()) && 
          esl_seteq<1,6,6>(tmp_1347_fu_31442_p1.read(), ap_const_lv6_10)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read()) && 
          esl_seteq<1,6,6>(tmp_1383_fu_32220_p1.read(), ap_const_lv6_10)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read()) && 
          esl_seteq<1,6,6>(tmp_1413_fu_33009_p1.read(), ap_const_lv6_10)))) {
        weights_48_48_1x1_V_16_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_16_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_17_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read())) {
        weights_48_48_1x1_V_17_address0 =  (sc_lv<7>) (tmp_1670_cast_fu_33013_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read())) {
        weights_48_48_1x1_V_17_address0 =  (sc_lv<7>) (tmp_1633_cast_fu_32224_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read())) {
        weights_48_48_1x1_V_17_address0 =  (sc_lv<7>) (tmp_1592_cast_fu_31446_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read())) {
        weights_48_48_1x1_V_17_address0 =  (sc_lv<7>) (tmp_1553_cast_fu_30661_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read())) {
        weights_48_48_1x1_V_17_address0 =  (sc_lv<7>) (tmp_1512_cast_fu_29887_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read())) {
        weights_48_48_1x1_V_17_address0 =  (sc_lv<7>) (tmp_1474_cast_fu_29102_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read())) {
        weights_48_48_1x1_V_17_address0 =  (sc_lv<7>) (tmp_1435_cast_fu_28336_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read())) {
        weights_48_48_1x1_V_17_address0 =  (sc_lv<7>) (tmp_1397_cast_fu_27555_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read())) {
        weights_48_48_1x1_V_17_address0 =  (sc_lv<7>) (tmp_1358_cast_fu_26789_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read())) {
        weights_48_48_1x1_V_17_address0 =  (sc_lv<7>) (tmp_1321_cast_fu_26016_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read())) {
        weights_48_48_1x1_V_17_address0 =  (sc_lv<7>) (tmp_1282_cast_fu_25246_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read())) {
        weights_48_48_1x1_V_17_address0 =  (sc_lv<7>) (tmp_1245_cast_fu_24465_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read())) {
        weights_48_48_1x1_V_17_address0 =  (sc_lv<7>) (tmp_1204_cast_fu_23687_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read())) {
        weights_48_48_1x1_V_17_address0 =  (sc_lv<7>) (tmp_1167_cast_fu_22906_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read())) {
        weights_48_48_1x1_V_17_address0 =  (sc_lv<7>) (tmp_1128_cast_fu_22140_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read())) {
        weights_48_48_1x1_V_17_address0 =  (sc_lv<7>) (tmp_1091_cast_fu_21359_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read())) {
        weights_48_48_1x1_V_17_address0 =  (sc_lv<7>) (tmp_1063_cast_fu_20712_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read())) {
        weights_48_48_1x1_V_17_address0 =  (sc_lv<7>) (tmp_1023_cast_fu_19931_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read())) {
        weights_48_48_1x1_V_17_address0 =  (sc_lv<7>) (tmp_989_cast_fu_19150_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_17_address0 = grp_subconv_1x1_16p_p_fu_14143_weight_17_V_address0.read();
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
        weights_48_48_1x1_V_17_address0 = grp_subconv_1x1_8_p_fu_14039_weight_17_V_address0.read();
    } else {
        weights_48_48_1x1_V_17_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_17_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_17_address1 = grp_subconv_1x1_16p_p_fu_14143_weight_17_V_address1.read();
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
        weights_48_48_1x1_V_17_address1 = grp_subconv_1x1_8_p_fu_14039_weight_17_V_address1.read();
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
        weights_48_48_1x1_V_17_ce0 = grp_subconv_1x1_16p_p_fu_14143_weight_17_V_ce0.read();
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
        weights_48_48_1x1_V_17_ce0 = grp_subconv_1x1_8_p_fu_14039_weight_17_V_ce0.read();
    } else {
        weights_48_48_1x1_V_17_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_17_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_17_ce1 = grp_subconv_1x1_16p_p_fu_14143_weight_17_V_ce1.read();
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
        weights_48_48_1x1_V_17_ce1 = grp_subconv_1x1_8_p_fu_14039_weight_17_V_ce1.read();
    } else {
        weights_48_48_1x1_V_17_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_17_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read()) && 
          esl_seteq<1,6,6>(tmp_842_fu_19146_p1.read(), ap_const_lv6_11)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read()) && 
          esl_seteq<1,6,6>(tmp_869_fu_19927_p1.read(), ap_const_lv6_11)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read()) && 
          esl_seteq<1,6,6>(tmp_902_fu_20708_p1.read(), ap_const_lv6_11)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read()) && 
          esl_seteq<1,6,6>(tmp_925_fu_21355_p1.read(), ap_const_lv6_11)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read()) && 
          esl_seteq<1,6,6>(tmp_955_fu_22136_p1.read(), ap_const_lv6_11)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read()) && 
          esl_seteq<1,6,6>(tmp_989_fu_22902_p1.read(), ap_const_lv6_11)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) && 
          esl_seteq<1,6,6>(tmp_1019_fu_23683_p1.read(), ap_const_lv6_11)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read()) && 
          esl_seteq<1,6,6>(tmp_1055_fu_24461_p1.read(), ap_const_lv6_11)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read()) && 
          esl_seteq<1,6,6>(tmp_1085_fu_25242_p1.read(), ap_const_lv6_11)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read()) && 
          esl_seteq<1,6,6>(tmp_1119_fu_26012_p1.read(), ap_const_lv6_11)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read()) && 
          esl_seteq<1,6,6>(tmp_1149_fu_26785_p1.read(), ap_const_lv6_11)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read()) && 
          esl_seteq<1,6,6>(tmp_1183_fu_27551_p1.read(), ap_const_lv6_11)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read()) && 
          esl_seteq<1,6,6>(tmp_1214_fu_28332_p1.read(), ap_const_lv6_11)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read()) && 
          esl_seteq<1,6,6>(tmp_1248_fu_29098_p1.read(), ap_const_lv6_11)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read()) && 
          esl_seteq<1,6,6>(tmp_1279_fu_29883_p1.read(), ap_const_lv6_11)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read()) && 
          esl_seteq<1,6,6>(tmp_1315_fu_30657_p1.read(), ap_const_lv6_11)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read()) && 
          esl_seteq<1,6,6>(tmp_1347_fu_31442_p1.read(), ap_const_lv6_11)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read()) && 
          esl_seteq<1,6,6>(tmp_1383_fu_32220_p1.read(), ap_const_lv6_11)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read()) && 
          esl_seteq<1,6,6>(tmp_1413_fu_33009_p1.read(), ap_const_lv6_11)))) {
        weights_48_48_1x1_V_17_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_17_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_18_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read())) {
        weights_48_48_1x1_V_18_address0 =  (sc_lv<7>) (tmp_1670_cast_fu_33013_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read())) {
        weights_48_48_1x1_V_18_address0 =  (sc_lv<7>) (tmp_1633_cast_fu_32224_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read())) {
        weights_48_48_1x1_V_18_address0 =  (sc_lv<7>) (tmp_1592_cast_fu_31446_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read())) {
        weights_48_48_1x1_V_18_address0 =  (sc_lv<7>) (tmp_1553_cast_fu_30661_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read())) {
        weights_48_48_1x1_V_18_address0 =  (sc_lv<7>) (tmp_1512_cast_fu_29887_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read())) {
        weights_48_48_1x1_V_18_address0 =  (sc_lv<7>) (tmp_1474_cast_fu_29102_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read())) {
        weights_48_48_1x1_V_18_address0 =  (sc_lv<7>) (tmp_1435_cast_fu_28336_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read())) {
        weights_48_48_1x1_V_18_address0 =  (sc_lv<7>) (tmp_1397_cast_fu_27555_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read())) {
        weights_48_48_1x1_V_18_address0 =  (sc_lv<7>) (tmp_1358_cast_fu_26789_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read())) {
        weights_48_48_1x1_V_18_address0 =  (sc_lv<7>) (tmp_1321_cast_fu_26016_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read())) {
        weights_48_48_1x1_V_18_address0 =  (sc_lv<7>) (tmp_1282_cast_fu_25246_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read())) {
        weights_48_48_1x1_V_18_address0 =  (sc_lv<7>) (tmp_1245_cast_fu_24465_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read())) {
        weights_48_48_1x1_V_18_address0 =  (sc_lv<7>) (tmp_1204_cast_fu_23687_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read())) {
        weights_48_48_1x1_V_18_address0 =  (sc_lv<7>) (tmp_1167_cast_fu_22906_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read())) {
        weights_48_48_1x1_V_18_address0 =  (sc_lv<7>) (tmp_1128_cast_fu_22140_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read())) {
        weights_48_48_1x1_V_18_address0 =  (sc_lv<7>) (tmp_1091_cast_fu_21359_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read())) {
        weights_48_48_1x1_V_18_address0 =  (sc_lv<7>) (tmp_1063_cast_fu_20712_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read())) {
        weights_48_48_1x1_V_18_address0 =  (sc_lv<7>) (tmp_1023_cast_fu_19931_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read())) {
        weights_48_48_1x1_V_18_address0 =  (sc_lv<7>) (tmp_989_cast_fu_19150_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_18_address0 = grp_subconv_1x1_16p_p_fu_14143_weight_18_V_address0.read();
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
        weights_48_48_1x1_V_18_address0 = grp_subconv_1x1_8_p_fu_14039_weight_18_V_address0.read();
    } else {
        weights_48_48_1x1_V_18_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_18_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_18_address1 = grp_subconv_1x1_16p_p_fu_14143_weight_18_V_address1.read();
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
        weights_48_48_1x1_V_18_address1 = grp_subconv_1x1_8_p_fu_14039_weight_18_V_address1.read();
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
        weights_48_48_1x1_V_18_ce0 = grp_subconv_1x1_16p_p_fu_14143_weight_18_V_ce0.read();
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
        weights_48_48_1x1_V_18_ce0 = grp_subconv_1x1_8_p_fu_14039_weight_18_V_ce0.read();
    } else {
        weights_48_48_1x1_V_18_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_18_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_18_ce1 = grp_subconv_1x1_16p_p_fu_14143_weight_18_V_ce1.read();
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
        weights_48_48_1x1_V_18_ce1 = grp_subconv_1x1_8_p_fu_14039_weight_18_V_ce1.read();
    } else {
        weights_48_48_1x1_V_18_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_18_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read()) && 
          esl_seteq<1,6,6>(tmp_842_fu_19146_p1.read(), ap_const_lv6_12)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read()) && 
          esl_seteq<1,6,6>(tmp_869_fu_19927_p1.read(), ap_const_lv6_12)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read()) && 
          esl_seteq<1,6,6>(tmp_902_fu_20708_p1.read(), ap_const_lv6_12)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read()) && 
          esl_seteq<1,6,6>(tmp_925_fu_21355_p1.read(), ap_const_lv6_12)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read()) && 
          esl_seteq<1,6,6>(tmp_955_fu_22136_p1.read(), ap_const_lv6_12)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read()) && 
          esl_seteq<1,6,6>(tmp_989_fu_22902_p1.read(), ap_const_lv6_12)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) && 
          esl_seteq<1,6,6>(tmp_1019_fu_23683_p1.read(), ap_const_lv6_12)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read()) && 
          esl_seteq<1,6,6>(tmp_1055_fu_24461_p1.read(), ap_const_lv6_12)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read()) && 
          esl_seteq<1,6,6>(tmp_1085_fu_25242_p1.read(), ap_const_lv6_12)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read()) && 
          esl_seteq<1,6,6>(tmp_1119_fu_26012_p1.read(), ap_const_lv6_12)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read()) && 
          esl_seteq<1,6,6>(tmp_1149_fu_26785_p1.read(), ap_const_lv6_12)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read()) && 
          esl_seteq<1,6,6>(tmp_1183_fu_27551_p1.read(), ap_const_lv6_12)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read()) && 
          esl_seteq<1,6,6>(tmp_1214_fu_28332_p1.read(), ap_const_lv6_12)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read()) && 
          esl_seteq<1,6,6>(tmp_1248_fu_29098_p1.read(), ap_const_lv6_12)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read()) && 
          esl_seteq<1,6,6>(tmp_1279_fu_29883_p1.read(), ap_const_lv6_12)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read()) && 
          esl_seteq<1,6,6>(tmp_1315_fu_30657_p1.read(), ap_const_lv6_12)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read()) && 
          esl_seteq<1,6,6>(tmp_1347_fu_31442_p1.read(), ap_const_lv6_12)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read()) && 
          esl_seteq<1,6,6>(tmp_1383_fu_32220_p1.read(), ap_const_lv6_12)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read()) && 
          esl_seteq<1,6,6>(tmp_1413_fu_33009_p1.read(), ap_const_lv6_12)))) {
        weights_48_48_1x1_V_18_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_18_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_19_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read())) {
        weights_48_48_1x1_V_19_address0 =  (sc_lv<7>) (tmp_1670_cast_fu_33013_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read())) {
        weights_48_48_1x1_V_19_address0 =  (sc_lv<7>) (tmp_1633_cast_fu_32224_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read())) {
        weights_48_48_1x1_V_19_address0 =  (sc_lv<7>) (tmp_1592_cast_fu_31446_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read())) {
        weights_48_48_1x1_V_19_address0 =  (sc_lv<7>) (tmp_1553_cast_fu_30661_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read())) {
        weights_48_48_1x1_V_19_address0 =  (sc_lv<7>) (tmp_1512_cast_fu_29887_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read())) {
        weights_48_48_1x1_V_19_address0 =  (sc_lv<7>) (tmp_1474_cast_fu_29102_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read())) {
        weights_48_48_1x1_V_19_address0 =  (sc_lv<7>) (tmp_1435_cast_fu_28336_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read())) {
        weights_48_48_1x1_V_19_address0 =  (sc_lv<7>) (tmp_1397_cast_fu_27555_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read())) {
        weights_48_48_1x1_V_19_address0 =  (sc_lv<7>) (tmp_1358_cast_fu_26789_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read())) {
        weights_48_48_1x1_V_19_address0 =  (sc_lv<7>) (tmp_1321_cast_fu_26016_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read())) {
        weights_48_48_1x1_V_19_address0 =  (sc_lv<7>) (tmp_1282_cast_fu_25246_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read())) {
        weights_48_48_1x1_V_19_address0 =  (sc_lv<7>) (tmp_1245_cast_fu_24465_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read())) {
        weights_48_48_1x1_V_19_address0 =  (sc_lv<7>) (tmp_1204_cast_fu_23687_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read())) {
        weights_48_48_1x1_V_19_address0 =  (sc_lv<7>) (tmp_1167_cast_fu_22906_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read())) {
        weights_48_48_1x1_V_19_address0 =  (sc_lv<7>) (tmp_1128_cast_fu_22140_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read())) {
        weights_48_48_1x1_V_19_address0 =  (sc_lv<7>) (tmp_1091_cast_fu_21359_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read())) {
        weights_48_48_1x1_V_19_address0 =  (sc_lv<7>) (tmp_1063_cast_fu_20712_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read())) {
        weights_48_48_1x1_V_19_address0 =  (sc_lv<7>) (tmp_1023_cast_fu_19931_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read())) {
        weights_48_48_1x1_V_19_address0 =  (sc_lv<7>) (tmp_989_cast_fu_19150_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_19_address0 = grp_subconv_1x1_16p_p_fu_14143_weight_19_V_address0.read();
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
        weights_48_48_1x1_V_19_address0 = grp_subconv_1x1_8_p_fu_14039_weight_19_V_address0.read();
    } else {
        weights_48_48_1x1_V_19_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_19_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_19_address1 = grp_subconv_1x1_16p_p_fu_14143_weight_19_V_address1.read();
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
        weights_48_48_1x1_V_19_address1 = grp_subconv_1x1_8_p_fu_14039_weight_19_V_address1.read();
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
        weights_48_48_1x1_V_19_ce0 = grp_subconv_1x1_16p_p_fu_14143_weight_19_V_ce0.read();
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
        weights_48_48_1x1_V_19_ce0 = grp_subconv_1x1_8_p_fu_14039_weight_19_V_ce0.read();
    } else {
        weights_48_48_1x1_V_19_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_19_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_19_ce1 = grp_subconv_1x1_16p_p_fu_14143_weight_19_V_ce1.read();
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
        weights_48_48_1x1_V_19_ce1 = grp_subconv_1x1_8_p_fu_14039_weight_19_V_ce1.read();
    } else {
        weights_48_48_1x1_V_19_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_19_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read()) && 
          esl_seteq<1,6,6>(tmp_842_fu_19146_p1.read(), ap_const_lv6_13)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read()) && 
          esl_seteq<1,6,6>(tmp_869_fu_19927_p1.read(), ap_const_lv6_13)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read()) && 
          esl_seteq<1,6,6>(tmp_902_fu_20708_p1.read(), ap_const_lv6_13)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read()) && 
          esl_seteq<1,6,6>(tmp_925_fu_21355_p1.read(), ap_const_lv6_13)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read()) && 
          esl_seteq<1,6,6>(tmp_955_fu_22136_p1.read(), ap_const_lv6_13)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read()) && 
          esl_seteq<1,6,6>(tmp_989_fu_22902_p1.read(), ap_const_lv6_13)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) && 
          esl_seteq<1,6,6>(tmp_1019_fu_23683_p1.read(), ap_const_lv6_13)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read()) && 
          esl_seteq<1,6,6>(tmp_1055_fu_24461_p1.read(), ap_const_lv6_13)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read()) && 
          esl_seteq<1,6,6>(tmp_1085_fu_25242_p1.read(), ap_const_lv6_13)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read()) && 
          esl_seteq<1,6,6>(tmp_1119_fu_26012_p1.read(), ap_const_lv6_13)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read()) && 
          esl_seteq<1,6,6>(tmp_1149_fu_26785_p1.read(), ap_const_lv6_13)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read()) && 
          esl_seteq<1,6,6>(tmp_1183_fu_27551_p1.read(), ap_const_lv6_13)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read()) && 
          esl_seteq<1,6,6>(tmp_1214_fu_28332_p1.read(), ap_const_lv6_13)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read()) && 
          esl_seteq<1,6,6>(tmp_1248_fu_29098_p1.read(), ap_const_lv6_13)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read()) && 
          esl_seteq<1,6,6>(tmp_1279_fu_29883_p1.read(), ap_const_lv6_13)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read()) && 
          esl_seteq<1,6,6>(tmp_1315_fu_30657_p1.read(), ap_const_lv6_13)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read()) && 
          esl_seteq<1,6,6>(tmp_1347_fu_31442_p1.read(), ap_const_lv6_13)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read()) && 
          esl_seteq<1,6,6>(tmp_1383_fu_32220_p1.read(), ap_const_lv6_13)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read()) && 
          esl_seteq<1,6,6>(tmp_1413_fu_33009_p1.read(), ap_const_lv6_13)))) {
        weights_48_48_1x1_V_19_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_19_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read())) {
        weights_48_48_1x1_V_1_address0 =  (sc_lv<7>) (tmp_1670_cast_fu_33013_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read())) {
        weights_48_48_1x1_V_1_address0 =  (sc_lv<7>) (tmp_1633_cast_fu_32224_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read())) {
        weights_48_48_1x1_V_1_address0 =  (sc_lv<7>) (tmp_1592_cast_fu_31446_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read())) {
        weights_48_48_1x1_V_1_address0 =  (sc_lv<7>) (tmp_1553_cast_fu_30661_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read())) {
        weights_48_48_1x1_V_1_address0 =  (sc_lv<7>) (tmp_1512_cast_fu_29887_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read())) {
        weights_48_48_1x1_V_1_address0 =  (sc_lv<7>) (tmp_1474_cast_fu_29102_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read())) {
        weights_48_48_1x1_V_1_address0 =  (sc_lv<7>) (tmp_1435_cast_fu_28336_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read())) {
        weights_48_48_1x1_V_1_address0 =  (sc_lv<7>) (tmp_1397_cast_fu_27555_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read())) {
        weights_48_48_1x1_V_1_address0 =  (sc_lv<7>) (tmp_1358_cast_fu_26789_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read())) {
        weights_48_48_1x1_V_1_address0 =  (sc_lv<7>) (tmp_1321_cast_fu_26016_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read())) {
        weights_48_48_1x1_V_1_address0 =  (sc_lv<7>) (tmp_1282_cast_fu_25246_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read())) {
        weights_48_48_1x1_V_1_address0 =  (sc_lv<7>) (tmp_1245_cast_fu_24465_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read())) {
        weights_48_48_1x1_V_1_address0 =  (sc_lv<7>) (tmp_1204_cast_fu_23687_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read())) {
        weights_48_48_1x1_V_1_address0 =  (sc_lv<7>) (tmp_1167_cast_fu_22906_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read())) {
        weights_48_48_1x1_V_1_address0 =  (sc_lv<7>) (tmp_1128_cast_fu_22140_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read())) {
        weights_48_48_1x1_V_1_address0 =  (sc_lv<7>) (tmp_1091_cast_fu_21359_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read())) {
        weights_48_48_1x1_V_1_address0 =  (sc_lv<7>) (tmp_1063_cast_fu_20712_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read())) {
        weights_48_48_1x1_V_1_address0 =  (sc_lv<7>) (tmp_1023_cast_fu_19931_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read())) {
        weights_48_48_1x1_V_1_address0 =  (sc_lv<7>) (tmp_989_cast_fu_19150_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_1_address0 = grp_subconv_1x1_16p_p_fu_14143_weight_1_V_address0.read();
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
        weights_48_48_1x1_V_1_address0 = grp_subconv_1x1_8_p_fu_14039_weight_1_V_address0.read();
    } else {
        weights_48_48_1x1_V_1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_1_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_1_address1 = grp_subconv_1x1_16p_p_fu_14143_weight_1_V_address1.read();
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
        weights_48_48_1x1_V_1_address1 = grp_subconv_1x1_8_p_fu_14039_weight_1_V_address1.read();
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
        weights_48_48_1x1_V_1_ce0 = grp_subconv_1x1_16p_p_fu_14143_weight_1_V_ce0.read();
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
        weights_48_48_1x1_V_1_ce0 = grp_subconv_1x1_8_p_fu_14039_weight_1_V_ce0.read();
    } else {
        weights_48_48_1x1_V_1_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_1_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_1_ce1 = grp_subconv_1x1_16p_p_fu_14143_weight_1_V_ce1.read();
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
        weights_48_48_1x1_V_1_ce1 = grp_subconv_1x1_8_p_fu_14039_weight_1_V_ce1.read();
    } else {
        weights_48_48_1x1_V_1_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_1_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read()) && 
          esl_seteq<1,6,6>(tmp_842_fu_19146_p1.read(), ap_const_lv6_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read()) && 
          esl_seteq<1,6,6>(tmp_869_fu_19927_p1.read(), ap_const_lv6_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read()) && 
          esl_seteq<1,6,6>(tmp_902_fu_20708_p1.read(), ap_const_lv6_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read()) && 
          esl_seteq<1,6,6>(tmp_925_fu_21355_p1.read(), ap_const_lv6_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read()) && 
          esl_seteq<1,6,6>(tmp_955_fu_22136_p1.read(), ap_const_lv6_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read()) && 
          esl_seteq<1,6,6>(tmp_989_fu_22902_p1.read(), ap_const_lv6_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) && 
          esl_seteq<1,6,6>(tmp_1019_fu_23683_p1.read(), ap_const_lv6_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read()) && 
          esl_seteq<1,6,6>(tmp_1055_fu_24461_p1.read(), ap_const_lv6_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read()) && 
          esl_seteq<1,6,6>(tmp_1085_fu_25242_p1.read(), ap_const_lv6_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read()) && 
          esl_seteq<1,6,6>(tmp_1119_fu_26012_p1.read(), ap_const_lv6_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read()) && 
          esl_seteq<1,6,6>(tmp_1149_fu_26785_p1.read(), ap_const_lv6_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read()) && 
          esl_seteq<1,6,6>(tmp_1183_fu_27551_p1.read(), ap_const_lv6_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read()) && 
          esl_seteq<1,6,6>(tmp_1214_fu_28332_p1.read(), ap_const_lv6_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read()) && 
          esl_seteq<1,6,6>(tmp_1248_fu_29098_p1.read(), ap_const_lv6_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read()) && 
          esl_seteq<1,6,6>(tmp_1279_fu_29883_p1.read(), ap_const_lv6_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read()) && 
          esl_seteq<1,6,6>(tmp_1315_fu_30657_p1.read(), ap_const_lv6_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read()) && 
          esl_seteq<1,6,6>(tmp_1347_fu_31442_p1.read(), ap_const_lv6_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read()) && 
          esl_seteq<1,6,6>(tmp_1383_fu_32220_p1.read(), ap_const_lv6_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read()) && 
          esl_seteq<1,6,6>(tmp_1413_fu_33009_p1.read(), ap_const_lv6_1)))) {
        weights_48_48_1x1_V_1_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_1_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_20_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read())) {
        weights_48_48_1x1_V_20_address0 =  (sc_lv<7>) (tmp_1670_cast_fu_33013_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read())) {
        weights_48_48_1x1_V_20_address0 =  (sc_lv<7>) (tmp_1633_cast_fu_32224_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read())) {
        weights_48_48_1x1_V_20_address0 =  (sc_lv<7>) (tmp_1592_cast_fu_31446_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read())) {
        weights_48_48_1x1_V_20_address0 =  (sc_lv<7>) (tmp_1553_cast_fu_30661_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read())) {
        weights_48_48_1x1_V_20_address0 =  (sc_lv<7>) (tmp_1512_cast_fu_29887_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read())) {
        weights_48_48_1x1_V_20_address0 =  (sc_lv<7>) (tmp_1474_cast_fu_29102_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read())) {
        weights_48_48_1x1_V_20_address0 =  (sc_lv<7>) (tmp_1435_cast_fu_28336_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read())) {
        weights_48_48_1x1_V_20_address0 =  (sc_lv<7>) (tmp_1397_cast_fu_27555_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read())) {
        weights_48_48_1x1_V_20_address0 =  (sc_lv<7>) (tmp_1358_cast_fu_26789_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read())) {
        weights_48_48_1x1_V_20_address0 =  (sc_lv<7>) (tmp_1321_cast_fu_26016_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read())) {
        weights_48_48_1x1_V_20_address0 =  (sc_lv<7>) (tmp_1282_cast_fu_25246_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read())) {
        weights_48_48_1x1_V_20_address0 =  (sc_lv<7>) (tmp_1245_cast_fu_24465_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read())) {
        weights_48_48_1x1_V_20_address0 =  (sc_lv<7>) (tmp_1204_cast_fu_23687_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read())) {
        weights_48_48_1x1_V_20_address0 =  (sc_lv<7>) (tmp_1167_cast_fu_22906_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read())) {
        weights_48_48_1x1_V_20_address0 =  (sc_lv<7>) (tmp_1128_cast_fu_22140_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read())) {
        weights_48_48_1x1_V_20_address0 =  (sc_lv<7>) (tmp_1091_cast_fu_21359_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read())) {
        weights_48_48_1x1_V_20_address0 =  (sc_lv<7>) (tmp_1063_cast_fu_20712_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read())) {
        weights_48_48_1x1_V_20_address0 =  (sc_lv<7>) (tmp_1023_cast_fu_19931_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read())) {
        weights_48_48_1x1_V_20_address0 =  (sc_lv<7>) (tmp_989_cast_fu_19150_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_20_address0 = grp_subconv_1x1_16p_p_fu_14143_weight_20_V_address0.read();
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
        weights_48_48_1x1_V_20_address0 = grp_subconv_1x1_8_p_fu_14039_weight_20_V_address0.read();
    } else {
        weights_48_48_1x1_V_20_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_20_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_20_address1 = grp_subconv_1x1_16p_p_fu_14143_weight_20_V_address1.read();
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
        weights_48_48_1x1_V_20_address1 = grp_subconv_1x1_8_p_fu_14039_weight_20_V_address1.read();
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
        weights_48_48_1x1_V_20_ce0 = grp_subconv_1x1_16p_p_fu_14143_weight_20_V_ce0.read();
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
        weights_48_48_1x1_V_20_ce0 = grp_subconv_1x1_8_p_fu_14039_weight_20_V_ce0.read();
    } else {
        weights_48_48_1x1_V_20_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_20_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_20_ce1 = grp_subconv_1x1_16p_p_fu_14143_weight_20_V_ce1.read();
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
        weights_48_48_1x1_V_20_ce1 = grp_subconv_1x1_8_p_fu_14039_weight_20_V_ce1.read();
    } else {
        weights_48_48_1x1_V_20_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_20_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read()) && 
          esl_seteq<1,6,6>(tmp_842_fu_19146_p1.read(), ap_const_lv6_14)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read()) && 
          esl_seteq<1,6,6>(tmp_869_fu_19927_p1.read(), ap_const_lv6_14)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read()) && 
          esl_seteq<1,6,6>(tmp_902_fu_20708_p1.read(), ap_const_lv6_14)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read()) && 
          esl_seteq<1,6,6>(tmp_925_fu_21355_p1.read(), ap_const_lv6_14)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read()) && 
          esl_seteq<1,6,6>(tmp_955_fu_22136_p1.read(), ap_const_lv6_14)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read()) && 
          esl_seteq<1,6,6>(tmp_989_fu_22902_p1.read(), ap_const_lv6_14)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) && 
          esl_seteq<1,6,6>(tmp_1019_fu_23683_p1.read(), ap_const_lv6_14)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read()) && 
          esl_seteq<1,6,6>(tmp_1055_fu_24461_p1.read(), ap_const_lv6_14)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read()) && 
          esl_seteq<1,6,6>(tmp_1085_fu_25242_p1.read(), ap_const_lv6_14)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read()) && 
          esl_seteq<1,6,6>(tmp_1119_fu_26012_p1.read(), ap_const_lv6_14)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read()) && 
          esl_seteq<1,6,6>(tmp_1149_fu_26785_p1.read(), ap_const_lv6_14)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read()) && 
          esl_seteq<1,6,6>(tmp_1183_fu_27551_p1.read(), ap_const_lv6_14)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read()) && 
          esl_seteq<1,6,6>(tmp_1214_fu_28332_p1.read(), ap_const_lv6_14)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read()) && 
          esl_seteq<1,6,6>(tmp_1248_fu_29098_p1.read(), ap_const_lv6_14)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read()) && 
          esl_seteq<1,6,6>(tmp_1279_fu_29883_p1.read(), ap_const_lv6_14)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read()) && 
          esl_seteq<1,6,6>(tmp_1315_fu_30657_p1.read(), ap_const_lv6_14)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read()) && 
          esl_seteq<1,6,6>(tmp_1347_fu_31442_p1.read(), ap_const_lv6_14)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read()) && 
          esl_seteq<1,6,6>(tmp_1383_fu_32220_p1.read(), ap_const_lv6_14)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read()) && 
          esl_seteq<1,6,6>(tmp_1413_fu_33009_p1.read(), ap_const_lv6_14)))) {
        weights_48_48_1x1_V_20_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_20_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_21_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read())) {
        weights_48_48_1x1_V_21_address0 =  (sc_lv<7>) (tmp_1670_cast_fu_33013_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read())) {
        weights_48_48_1x1_V_21_address0 =  (sc_lv<7>) (tmp_1633_cast_fu_32224_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read())) {
        weights_48_48_1x1_V_21_address0 =  (sc_lv<7>) (tmp_1592_cast_fu_31446_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read())) {
        weights_48_48_1x1_V_21_address0 =  (sc_lv<7>) (tmp_1553_cast_fu_30661_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read())) {
        weights_48_48_1x1_V_21_address0 =  (sc_lv<7>) (tmp_1512_cast_fu_29887_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read())) {
        weights_48_48_1x1_V_21_address0 =  (sc_lv<7>) (tmp_1474_cast_fu_29102_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read())) {
        weights_48_48_1x1_V_21_address0 =  (sc_lv<7>) (tmp_1435_cast_fu_28336_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read())) {
        weights_48_48_1x1_V_21_address0 =  (sc_lv<7>) (tmp_1397_cast_fu_27555_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read())) {
        weights_48_48_1x1_V_21_address0 =  (sc_lv<7>) (tmp_1358_cast_fu_26789_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read())) {
        weights_48_48_1x1_V_21_address0 =  (sc_lv<7>) (tmp_1321_cast_fu_26016_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read())) {
        weights_48_48_1x1_V_21_address0 =  (sc_lv<7>) (tmp_1282_cast_fu_25246_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read())) {
        weights_48_48_1x1_V_21_address0 =  (sc_lv<7>) (tmp_1245_cast_fu_24465_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read())) {
        weights_48_48_1x1_V_21_address0 =  (sc_lv<7>) (tmp_1204_cast_fu_23687_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read())) {
        weights_48_48_1x1_V_21_address0 =  (sc_lv<7>) (tmp_1167_cast_fu_22906_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read())) {
        weights_48_48_1x1_V_21_address0 =  (sc_lv<7>) (tmp_1128_cast_fu_22140_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read())) {
        weights_48_48_1x1_V_21_address0 =  (sc_lv<7>) (tmp_1091_cast_fu_21359_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read())) {
        weights_48_48_1x1_V_21_address0 =  (sc_lv<7>) (tmp_1063_cast_fu_20712_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read())) {
        weights_48_48_1x1_V_21_address0 =  (sc_lv<7>) (tmp_1023_cast_fu_19931_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read())) {
        weights_48_48_1x1_V_21_address0 =  (sc_lv<7>) (tmp_989_cast_fu_19150_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_21_address0 = grp_subconv_1x1_16p_p_fu_14143_weight_21_V_address0.read();
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
        weights_48_48_1x1_V_21_address0 = grp_subconv_1x1_8_p_fu_14039_weight_21_V_address0.read();
    } else {
        weights_48_48_1x1_V_21_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_21_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_21_address1 = grp_subconv_1x1_16p_p_fu_14143_weight_21_V_address1.read();
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
        weights_48_48_1x1_V_21_address1 = grp_subconv_1x1_8_p_fu_14039_weight_21_V_address1.read();
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
        weights_48_48_1x1_V_21_ce0 = grp_subconv_1x1_16p_p_fu_14143_weight_21_V_ce0.read();
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
        weights_48_48_1x1_V_21_ce0 = grp_subconv_1x1_8_p_fu_14039_weight_21_V_ce0.read();
    } else {
        weights_48_48_1x1_V_21_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_21_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_21_ce1 = grp_subconv_1x1_16p_p_fu_14143_weight_21_V_ce1.read();
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
        weights_48_48_1x1_V_21_ce1 = grp_subconv_1x1_8_p_fu_14039_weight_21_V_ce1.read();
    } else {
        weights_48_48_1x1_V_21_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_21_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read()) && 
          esl_seteq<1,6,6>(tmp_842_fu_19146_p1.read(), ap_const_lv6_15)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read()) && 
          esl_seteq<1,6,6>(tmp_869_fu_19927_p1.read(), ap_const_lv6_15)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read()) && 
          esl_seteq<1,6,6>(tmp_902_fu_20708_p1.read(), ap_const_lv6_15)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read()) && 
          esl_seteq<1,6,6>(tmp_925_fu_21355_p1.read(), ap_const_lv6_15)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read()) && 
          esl_seteq<1,6,6>(tmp_955_fu_22136_p1.read(), ap_const_lv6_15)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read()) && 
          esl_seteq<1,6,6>(tmp_989_fu_22902_p1.read(), ap_const_lv6_15)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) && 
          esl_seteq<1,6,6>(tmp_1019_fu_23683_p1.read(), ap_const_lv6_15)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read()) && 
          esl_seteq<1,6,6>(tmp_1055_fu_24461_p1.read(), ap_const_lv6_15)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read()) && 
          esl_seteq<1,6,6>(tmp_1085_fu_25242_p1.read(), ap_const_lv6_15)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read()) && 
          esl_seteq<1,6,6>(tmp_1119_fu_26012_p1.read(), ap_const_lv6_15)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read()) && 
          esl_seteq<1,6,6>(tmp_1149_fu_26785_p1.read(), ap_const_lv6_15)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read()) && 
          esl_seteq<1,6,6>(tmp_1183_fu_27551_p1.read(), ap_const_lv6_15)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read()) && 
          esl_seteq<1,6,6>(tmp_1214_fu_28332_p1.read(), ap_const_lv6_15)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read()) && 
          esl_seteq<1,6,6>(tmp_1248_fu_29098_p1.read(), ap_const_lv6_15)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read()) && 
          esl_seteq<1,6,6>(tmp_1279_fu_29883_p1.read(), ap_const_lv6_15)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read()) && 
          esl_seteq<1,6,6>(tmp_1315_fu_30657_p1.read(), ap_const_lv6_15)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read()) && 
          esl_seteq<1,6,6>(tmp_1347_fu_31442_p1.read(), ap_const_lv6_15)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read()) && 
          esl_seteq<1,6,6>(tmp_1383_fu_32220_p1.read(), ap_const_lv6_15)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read()) && 
          esl_seteq<1,6,6>(tmp_1413_fu_33009_p1.read(), ap_const_lv6_15)))) {
        weights_48_48_1x1_V_21_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_21_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_22_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read())) {
        weights_48_48_1x1_V_22_address0 =  (sc_lv<7>) (tmp_1670_cast_fu_33013_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read())) {
        weights_48_48_1x1_V_22_address0 =  (sc_lv<7>) (tmp_1633_cast_fu_32224_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read())) {
        weights_48_48_1x1_V_22_address0 =  (sc_lv<7>) (tmp_1592_cast_fu_31446_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read())) {
        weights_48_48_1x1_V_22_address0 =  (sc_lv<7>) (tmp_1553_cast_fu_30661_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read())) {
        weights_48_48_1x1_V_22_address0 =  (sc_lv<7>) (tmp_1512_cast_fu_29887_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read())) {
        weights_48_48_1x1_V_22_address0 =  (sc_lv<7>) (tmp_1474_cast_fu_29102_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read())) {
        weights_48_48_1x1_V_22_address0 =  (sc_lv<7>) (tmp_1435_cast_fu_28336_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read())) {
        weights_48_48_1x1_V_22_address0 =  (sc_lv<7>) (tmp_1397_cast_fu_27555_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read())) {
        weights_48_48_1x1_V_22_address0 =  (sc_lv<7>) (tmp_1358_cast_fu_26789_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read())) {
        weights_48_48_1x1_V_22_address0 =  (sc_lv<7>) (tmp_1321_cast_fu_26016_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read())) {
        weights_48_48_1x1_V_22_address0 =  (sc_lv<7>) (tmp_1282_cast_fu_25246_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read())) {
        weights_48_48_1x1_V_22_address0 =  (sc_lv<7>) (tmp_1245_cast_fu_24465_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read())) {
        weights_48_48_1x1_V_22_address0 =  (sc_lv<7>) (tmp_1204_cast_fu_23687_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read())) {
        weights_48_48_1x1_V_22_address0 =  (sc_lv<7>) (tmp_1167_cast_fu_22906_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read())) {
        weights_48_48_1x1_V_22_address0 =  (sc_lv<7>) (tmp_1128_cast_fu_22140_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read())) {
        weights_48_48_1x1_V_22_address0 =  (sc_lv<7>) (tmp_1091_cast_fu_21359_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read())) {
        weights_48_48_1x1_V_22_address0 =  (sc_lv<7>) (tmp_1063_cast_fu_20712_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read())) {
        weights_48_48_1x1_V_22_address0 =  (sc_lv<7>) (tmp_1023_cast_fu_19931_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read())) {
        weights_48_48_1x1_V_22_address0 =  (sc_lv<7>) (tmp_989_cast_fu_19150_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_22_address0 = grp_subconv_1x1_16p_p_fu_14143_weight_22_V_address0.read();
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
        weights_48_48_1x1_V_22_address0 = grp_subconv_1x1_8_p_fu_14039_weight_22_V_address0.read();
    } else {
        weights_48_48_1x1_V_22_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_22_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_22_address1 = grp_subconv_1x1_16p_p_fu_14143_weight_22_V_address1.read();
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
        weights_48_48_1x1_V_22_address1 = grp_subconv_1x1_8_p_fu_14039_weight_22_V_address1.read();
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
        weights_48_48_1x1_V_22_ce0 = grp_subconv_1x1_16p_p_fu_14143_weight_22_V_ce0.read();
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
        weights_48_48_1x1_V_22_ce0 = grp_subconv_1x1_8_p_fu_14039_weight_22_V_ce0.read();
    } else {
        weights_48_48_1x1_V_22_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_22_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_22_ce1 = grp_subconv_1x1_16p_p_fu_14143_weight_22_V_ce1.read();
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
        weights_48_48_1x1_V_22_ce1 = grp_subconv_1x1_8_p_fu_14039_weight_22_V_ce1.read();
    } else {
        weights_48_48_1x1_V_22_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_22_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read()) && 
          esl_seteq<1,6,6>(tmp_842_fu_19146_p1.read(), ap_const_lv6_16)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_16, tmp_869_fu_19927_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_16, tmp_902_fu_20708_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_16, tmp_925_fu_21355_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_16, tmp_955_fu_22136_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_16, tmp_989_fu_22902_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_16, tmp_1019_fu_23683_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_16, tmp_1055_fu_24461_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_16, tmp_1085_fu_25242_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_16, tmp_1119_fu_26012_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_16, tmp_1149_fu_26785_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_16, tmp_1183_fu_27551_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_16, tmp_1214_fu_28332_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_16, tmp_1248_fu_29098_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_16, tmp_1279_fu_29883_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_16, tmp_1315_fu_30657_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_16, tmp_1347_fu_31442_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_16, tmp_1383_fu_32220_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_16, tmp_1413_fu_33009_p1.read())))) {
        weights_48_48_1x1_V_22_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_22_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_23_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read())) {
        weights_48_48_1x1_V_23_address0 =  (sc_lv<7>) (tmp_1670_cast_fu_33013_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read())) {
        weights_48_48_1x1_V_23_address0 =  (sc_lv<7>) (tmp_1633_cast_fu_32224_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read())) {
        weights_48_48_1x1_V_23_address0 =  (sc_lv<7>) (tmp_1592_cast_fu_31446_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read())) {
        weights_48_48_1x1_V_23_address0 =  (sc_lv<7>) (tmp_1553_cast_fu_30661_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read())) {
        weights_48_48_1x1_V_23_address0 =  (sc_lv<7>) (tmp_1512_cast_fu_29887_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read())) {
        weights_48_48_1x1_V_23_address0 =  (sc_lv<7>) (tmp_1474_cast_fu_29102_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read())) {
        weights_48_48_1x1_V_23_address0 =  (sc_lv<7>) (tmp_1435_cast_fu_28336_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read())) {
        weights_48_48_1x1_V_23_address0 =  (sc_lv<7>) (tmp_1397_cast_fu_27555_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read())) {
        weights_48_48_1x1_V_23_address0 =  (sc_lv<7>) (tmp_1358_cast_fu_26789_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read())) {
        weights_48_48_1x1_V_23_address0 =  (sc_lv<7>) (tmp_1321_cast_fu_26016_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read())) {
        weights_48_48_1x1_V_23_address0 =  (sc_lv<7>) (tmp_1282_cast_fu_25246_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read())) {
        weights_48_48_1x1_V_23_address0 =  (sc_lv<7>) (tmp_1245_cast_fu_24465_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read())) {
        weights_48_48_1x1_V_23_address0 =  (sc_lv<7>) (tmp_1204_cast_fu_23687_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read())) {
        weights_48_48_1x1_V_23_address0 =  (sc_lv<7>) (tmp_1167_cast_fu_22906_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read())) {
        weights_48_48_1x1_V_23_address0 =  (sc_lv<7>) (tmp_1128_cast_fu_22140_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read())) {
        weights_48_48_1x1_V_23_address0 =  (sc_lv<7>) (tmp_1091_cast_fu_21359_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read())) {
        weights_48_48_1x1_V_23_address0 =  (sc_lv<7>) (tmp_1063_cast_fu_20712_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read())) {
        weights_48_48_1x1_V_23_address0 =  (sc_lv<7>) (tmp_1023_cast_fu_19931_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read())) {
        weights_48_48_1x1_V_23_address0 =  (sc_lv<7>) (tmp_989_cast_fu_19150_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_23_address0 = grp_subconv_1x1_16p_p_fu_14143_weight_23_V_address0.read();
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
        weights_48_48_1x1_V_23_address0 = grp_subconv_1x1_8_p_fu_14039_weight_23_V_address0.read();
    } else {
        weights_48_48_1x1_V_23_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_23_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_23_address1 = grp_subconv_1x1_16p_p_fu_14143_weight_23_V_address1.read();
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
        weights_48_48_1x1_V_23_address1 = grp_subconv_1x1_8_p_fu_14039_weight_23_V_address1.read();
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
        weights_48_48_1x1_V_23_ce0 = grp_subconv_1x1_16p_p_fu_14143_weight_23_V_ce0.read();
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
        weights_48_48_1x1_V_23_ce0 = grp_subconv_1x1_8_p_fu_14039_weight_23_V_ce0.read();
    } else {
        weights_48_48_1x1_V_23_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_23_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_23_ce1 = grp_subconv_1x1_16p_p_fu_14143_weight_23_V_ce1.read();
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
        weights_48_48_1x1_V_23_ce1 = grp_subconv_1x1_8_p_fu_14039_weight_23_V_ce1.read();
    } else {
        weights_48_48_1x1_V_23_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_23_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_0, tmp_842_fu_19146_p1.read()) && 
          !esl_seteq<1,6,6>(tmp_842_fu_19146_p1.read(), ap_const_lv6_1) && 
          !esl_seteq<1,6,6>(tmp_842_fu_19146_p1.read(), ap_const_lv6_2) && 
          !esl_seteq<1,6,6>(tmp_842_fu_19146_p1.read(), ap_const_lv6_3) && 
          !esl_seteq<1,6,6>(tmp_842_fu_19146_p1.read(), ap_const_lv6_4) && 
          !esl_seteq<1,6,6>(tmp_842_fu_19146_p1.read(), ap_const_lv6_5) && 
          !esl_seteq<1,6,6>(tmp_842_fu_19146_p1.read(), ap_const_lv6_6) && 
          !esl_seteq<1,6,6>(tmp_842_fu_19146_p1.read(), ap_const_lv6_7) && 
          !esl_seteq<1,6,6>(tmp_842_fu_19146_p1.read(), ap_const_lv6_8) && 
          !esl_seteq<1,6,6>(tmp_842_fu_19146_p1.read(), ap_const_lv6_9) && 
          !esl_seteq<1,6,6>(tmp_842_fu_19146_p1.read(), ap_const_lv6_A) && 
          !esl_seteq<1,6,6>(tmp_842_fu_19146_p1.read(), ap_const_lv6_B) && 
          !esl_seteq<1,6,6>(tmp_842_fu_19146_p1.read(), ap_const_lv6_C) && 
          !esl_seteq<1,6,6>(tmp_842_fu_19146_p1.read(), ap_const_lv6_D) && 
          !esl_seteq<1,6,6>(tmp_842_fu_19146_p1.read(), ap_const_lv6_E) && 
          !esl_seteq<1,6,6>(tmp_842_fu_19146_p1.read(), ap_const_lv6_F) && 
          !esl_seteq<1,6,6>(tmp_842_fu_19146_p1.read(), ap_const_lv6_10) && 
          !esl_seteq<1,6,6>(tmp_842_fu_19146_p1.read(), ap_const_lv6_11) && 
          !esl_seteq<1,6,6>(tmp_842_fu_19146_p1.read(), ap_const_lv6_12) && 
          !esl_seteq<1,6,6>(tmp_842_fu_19146_p1.read(), ap_const_lv6_13) && 
          !esl_seteq<1,6,6>(tmp_842_fu_19146_p1.read(), ap_const_lv6_14) && 
          !esl_seteq<1,6,6>(tmp_842_fu_19146_p1.read(), ap_const_lv6_15) && 
          !esl_seteq<1,6,6>(tmp_842_fu_19146_p1.read(), ap_const_lv6_16)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_0, tmp_869_fu_19927_p1.read()) && 
          !esl_seteq<1,6,6>(tmp_869_fu_19927_p1.read(), ap_const_lv6_1) && 
          !esl_seteq<1,6,6>(tmp_869_fu_19927_p1.read(), ap_const_lv6_2) && 
          !esl_seteq<1,6,6>(tmp_869_fu_19927_p1.read(), ap_const_lv6_3) && 
          !esl_seteq<1,6,6>(tmp_869_fu_19927_p1.read(), ap_const_lv6_4) && 
          !esl_seteq<1,6,6>(tmp_869_fu_19927_p1.read(), ap_const_lv6_5) && 
          !esl_seteq<1,6,6>(tmp_869_fu_19927_p1.read(), ap_const_lv6_6) && 
          !esl_seteq<1,6,6>(tmp_869_fu_19927_p1.read(), ap_const_lv6_7) && 
          !esl_seteq<1,6,6>(tmp_869_fu_19927_p1.read(), ap_const_lv6_8) && 
          !esl_seteq<1,6,6>(tmp_869_fu_19927_p1.read(), ap_const_lv6_9) && 
          !esl_seteq<1,6,6>(tmp_869_fu_19927_p1.read(), ap_const_lv6_A) && 
          !esl_seteq<1,6,6>(tmp_869_fu_19927_p1.read(), ap_const_lv6_B) && 
          !esl_seteq<1,6,6>(tmp_869_fu_19927_p1.read(), ap_const_lv6_C) && 
          !esl_seteq<1,6,6>(tmp_869_fu_19927_p1.read(), ap_const_lv6_D) && 
          !esl_seteq<1,6,6>(tmp_869_fu_19927_p1.read(), ap_const_lv6_E) && 
          !esl_seteq<1,6,6>(tmp_869_fu_19927_p1.read(), ap_const_lv6_F) && 
          !esl_seteq<1,6,6>(tmp_869_fu_19927_p1.read(), ap_const_lv6_10) && 
          !esl_seteq<1,6,6>(tmp_869_fu_19927_p1.read(), ap_const_lv6_11) && 
          !esl_seteq<1,6,6>(tmp_869_fu_19927_p1.read(), ap_const_lv6_12) && 
          !esl_seteq<1,6,6>(tmp_869_fu_19927_p1.read(), ap_const_lv6_13) && 
          !esl_seteq<1,6,6>(tmp_869_fu_19927_p1.read(), ap_const_lv6_14) && 
          !esl_seteq<1,6,6>(tmp_869_fu_19927_p1.read(), ap_const_lv6_15) && 
          !esl_seteq<1,6,6>(ap_const_lv6_16, tmp_869_fu_19927_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_0, tmp_902_fu_20708_p1.read()) && 
          !esl_seteq<1,6,6>(tmp_902_fu_20708_p1.read(), ap_const_lv6_1) && 
          !esl_seteq<1,6,6>(tmp_902_fu_20708_p1.read(), ap_const_lv6_2) && 
          !esl_seteq<1,6,6>(tmp_902_fu_20708_p1.read(), ap_const_lv6_3) && 
          !esl_seteq<1,6,6>(tmp_902_fu_20708_p1.read(), ap_const_lv6_4) && 
          !esl_seteq<1,6,6>(tmp_902_fu_20708_p1.read(), ap_const_lv6_5) && 
          !esl_seteq<1,6,6>(tmp_902_fu_20708_p1.read(), ap_const_lv6_6) && 
          !esl_seteq<1,6,6>(tmp_902_fu_20708_p1.read(), ap_const_lv6_7) && 
          !esl_seteq<1,6,6>(tmp_902_fu_20708_p1.read(), ap_const_lv6_8) && 
          !esl_seteq<1,6,6>(tmp_902_fu_20708_p1.read(), ap_const_lv6_9) && 
          !esl_seteq<1,6,6>(tmp_902_fu_20708_p1.read(), ap_const_lv6_A) && 
          !esl_seteq<1,6,6>(tmp_902_fu_20708_p1.read(), ap_const_lv6_B) && 
          !esl_seteq<1,6,6>(tmp_902_fu_20708_p1.read(), ap_const_lv6_C) && 
          !esl_seteq<1,6,6>(tmp_902_fu_20708_p1.read(), ap_const_lv6_D) && 
          !esl_seteq<1,6,6>(tmp_902_fu_20708_p1.read(), ap_const_lv6_E) && 
          !esl_seteq<1,6,6>(tmp_902_fu_20708_p1.read(), ap_const_lv6_F) && 
          !esl_seteq<1,6,6>(tmp_902_fu_20708_p1.read(), ap_const_lv6_10) && 
          !esl_seteq<1,6,6>(tmp_902_fu_20708_p1.read(), ap_const_lv6_11) && 
          !esl_seteq<1,6,6>(tmp_902_fu_20708_p1.read(), ap_const_lv6_12) && 
          !esl_seteq<1,6,6>(tmp_902_fu_20708_p1.read(), ap_const_lv6_13) && 
          !esl_seteq<1,6,6>(tmp_902_fu_20708_p1.read(), ap_const_lv6_14) && 
          !esl_seteq<1,6,6>(tmp_902_fu_20708_p1.read(), ap_const_lv6_15) && 
          !esl_seteq<1,6,6>(ap_const_lv6_16, tmp_902_fu_20708_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_0, tmp_925_fu_21355_p1.read()) && 
          !esl_seteq<1,6,6>(tmp_925_fu_21355_p1.read(), ap_const_lv6_1) && 
          !esl_seteq<1,6,6>(tmp_925_fu_21355_p1.read(), ap_const_lv6_2) && 
          !esl_seteq<1,6,6>(tmp_925_fu_21355_p1.read(), ap_const_lv6_3) && 
          !esl_seteq<1,6,6>(tmp_925_fu_21355_p1.read(), ap_const_lv6_4) && 
          !esl_seteq<1,6,6>(tmp_925_fu_21355_p1.read(), ap_const_lv6_5) && 
          !esl_seteq<1,6,6>(tmp_925_fu_21355_p1.read(), ap_const_lv6_6) && 
          !esl_seteq<1,6,6>(tmp_925_fu_21355_p1.read(), ap_const_lv6_7) && 
          !esl_seteq<1,6,6>(tmp_925_fu_21355_p1.read(), ap_const_lv6_8) && 
          !esl_seteq<1,6,6>(tmp_925_fu_21355_p1.read(), ap_const_lv6_9) && 
          !esl_seteq<1,6,6>(tmp_925_fu_21355_p1.read(), ap_const_lv6_A) && 
          !esl_seteq<1,6,6>(tmp_925_fu_21355_p1.read(), ap_const_lv6_B) && 
          !esl_seteq<1,6,6>(tmp_925_fu_21355_p1.read(), ap_const_lv6_C) && 
          !esl_seteq<1,6,6>(tmp_925_fu_21355_p1.read(), ap_const_lv6_D) && 
          !esl_seteq<1,6,6>(tmp_925_fu_21355_p1.read(), ap_const_lv6_E) && 
          !esl_seteq<1,6,6>(tmp_925_fu_21355_p1.read(), ap_const_lv6_F) && 
          !esl_seteq<1,6,6>(tmp_925_fu_21355_p1.read(), ap_const_lv6_10) && 
          !esl_seteq<1,6,6>(tmp_925_fu_21355_p1.read(), ap_const_lv6_11) && 
          !esl_seteq<1,6,6>(tmp_925_fu_21355_p1.read(), ap_const_lv6_12) && 
          !esl_seteq<1,6,6>(tmp_925_fu_21355_p1.read(), ap_const_lv6_13) && 
          !esl_seteq<1,6,6>(tmp_925_fu_21355_p1.read(), ap_const_lv6_14) && 
          !esl_seteq<1,6,6>(tmp_925_fu_21355_p1.read(), ap_const_lv6_15) && 
          !esl_seteq<1,6,6>(ap_const_lv6_16, tmp_925_fu_21355_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_0, tmp_955_fu_22136_p1.read()) && 
          !esl_seteq<1,6,6>(tmp_955_fu_22136_p1.read(), ap_const_lv6_1) && 
          !esl_seteq<1,6,6>(tmp_955_fu_22136_p1.read(), ap_const_lv6_2) && 
          !esl_seteq<1,6,6>(tmp_955_fu_22136_p1.read(), ap_const_lv6_3) && 
          !esl_seteq<1,6,6>(tmp_955_fu_22136_p1.read(), ap_const_lv6_4) && 
          !esl_seteq<1,6,6>(tmp_955_fu_22136_p1.read(), ap_const_lv6_5) && 
          !esl_seteq<1,6,6>(tmp_955_fu_22136_p1.read(), ap_const_lv6_6) && 
          !esl_seteq<1,6,6>(tmp_955_fu_22136_p1.read(), ap_const_lv6_7) && 
          !esl_seteq<1,6,6>(tmp_955_fu_22136_p1.read(), ap_const_lv6_8) && 
          !esl_seteq<1,6,6>(tmp_955_fu_22136_p1.read(), ap_const_lv6_9) && 
          !esl_seteq<1,6,6>(tmp_955_fu_22136_p1.read(), ap_const_lv6_A) && 
          !esl_seteq<1,6,6>(tmp_955_fu_22136_p1.read(), ap_const_lv6_B) && 
          !esl_seteq<1,6,6>(tmp_955_fu_22136_p1.read(), ap_const_lv6_C) && 
          !esl_seteq<1,6,6>(tmp_955_fu_22136_p1.read(), ap_const_lv6_D) && 
          !esl_seteq<1,6,6>(tmp_955_fu_22136_p1.read(), ap_const_lv6_E) && 
          !esl_seteq<1,6,6>(tmp_955_fu_22136_p1.read(), ap_const_lv6_F) && 
          !esl_seteq<1,6,6>(tmp_955_fu_22136_p1.read(), ap_const_lv6_10) && 
          !esl_seteq<1,6,6>(tmp_955_fu_22136_p1.read(), ap_const_lv6_11) && 
          !esl_seteq<1,6,6>(tmp_955_fu_22136_p1.read(), ap_const_lv6_12) && 
          !esl_seteq<1,6,6>(tmp_955_fu_22136_p1.read(), ap_const_lv6_13) && 
          !esl_seteq<1,6,6>(tmp_955_fu_22136_p1.read(), ap_const_lv6_14) && 
          !esl_seteq<1,6,6>(tmp_955_fu_22136_p1.read(), ap_const_lv6_15) && 
          !esl_seteq<1,6,6>(ap_const_lv6_16, tmp_955_fu_22136_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_0, tmp_989_fu_22902_p1.read()) && 
          !esl_seteq<1,6,6>(tmp_989_fu_22902_p1.read(), ap_const_lv6_1) && 
          !esl_seteq<1,6,6>(tmp_989_fu_22902_p1.read(), ap_const_lv6_2) && 
          !esl_seteq<1,6,6>(tmp_989_fu_22902_p1.read(), ap_const_lv6_3) && 
          !esl_seteq<1,6,6>(tmp_989_fu_22902_p1.read(), ap_const_lv6_4) && 
          !esl_seteq<1,6,6>(tmp_989_fu_22902_p1.read(), ap_const_lv6_5) && 
          !esl_seteq<1,6,6>(tmp_989_fu_22902_p1.read(), ap_const_lv6_6) && 
          !esl_seteq<1,6,6>(tmp_989_fu_22902_p1.read(), ap_const_lv6_7) && 
          !esl_seteq<1,6,6>(tmp_989_fu_22902_p1.read(), ap_const_lv6_8) && 
          !esl_seteq<1,6,6>(tmp_989_fu_22902_p1.read(), ap_const_lv6_9) && 
          !esl_seteq<1,6,6>(tmp_989_fu_22902_p1.read(), ap_const_lv6_A) && 
          !esl_seteq<1,6,6>(tmp_989_fu_22902_p1.read(), ap_const_lv6_B) && 
          !esl_seteq<1,6,6>(tmp_989_fu_22902_p1.read(), ap_const_lv6_C) && 
          !esl_seteq<1,6,6>(tmp_989_fu_22902_p1.read(), ap_const_lv6_D) && 
          !esl_seteq<1,6,6>(tmp_989_fu_22902_p1.read(), ap_const_lv6_E) && 
          !esl_seteq<1,6,6>(tmp_989_fu_22902_p1.read(), ap_const_lv6_F) && 
          !esl_seteq<1,6,6>(tmp_989_fu_22902_p1.read(), ap_const_lv6_10) && 
          !esl_seteq<1,6,6>(tmp_989_fu_22902_p1.read(), ap_const_lv6_11) && 
          !esl_seteq<1,6,6>(tmp_989_fu_22902_p1.read(), ap_const_lv6_12) && 
          !esl_seteq<1,6,6>(tmp_989_fu_22902_p1.read(), ap_const_lv6_13) && 
          !esl_seteq<1,6,6>(tmp_989_fu_22902_p1.read(), ap_const_lv6_14) && 
          !esl_seteq<1,6,6>(tmp_989_fu_22902_p1.read(), ap_const_lv6_15) && 
          !esl_seteq<1,6,6>(ap_const_lv6_16, tmp_989_fu_22902_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_0, tmp_1019_fu_23683_p1.read()) && 
          !esl_seteq<1,6,6>(tmp_1019_fu_23683_p1.read(), ap_const_lv6_1) && 
          !esl_seteq<1,6,6>(tmp_1019_fu_23683_p1.read(), ap_const_lv6_2) && 
          !esl_seteq<1,6,6>(tmp_1019_fu_23683_p1.read(), ap_const_lv6_3) && 
          !esl_seteq<1,6,6>(tmp_1019_fu_23683_p1.read(), ap_const_lv6_4) && 
          !esl_seteq<1,6,6>(tmp_1019_fu_23683_p1.read(), ap_const_lv6_5) && 
          !esl_seteq<1,6,6>(tmp_1019_fu_23683_p1.read(), ap_const_lv6_6) && 
          !esl_seteq<1,6,6>(tmp_1019_fu_23683_p1.read(), ap_const_lv6_7) && 
          !esl_seteq<1,6,6>(tmp_1019_fu_23683_p1.read(), ap_const_lv6_8) && 
          !esl_seteq<1,6,6>(tmp_1019_fu_23683_p1.read(), ap_const_lv6_9) && 
          !esl_seteq<1,6,6>(tmp_1019_fu_23683_p1.read(), ap_const_lv6_A) && 
          !esl_seteq<1,6,6>(tmp_1019_fu_23683_p1.read(), ap_const_lv6_B) && 
          !esl_seteq<1,6,6>(tmp_1019_fu_23683_p1.read(), ap_const_lv6_C) && 
          !esl_seteq<1,6,6>(tmp_1019_fu_23683_p1.read(), ap_const_lv6_D) && 
          !esl_seteq<1,6,6>(tmp_1019_fu_23683_p1.read(), ap_const_lv6_E) && 
          !esl_seteq<1,6,6>(tmp_1019_fu_23683_p1.read(), ap_const_lv6_F) && 
          !esl_seteq<1,6,6>(tmp_1019_fu_23683_p1.read(), ap_const_lv6_10) && 
          !esl_seteq<1,6,6>(tmp_1019_fu_23683_p1.read(), ap_const_lv6_11) && 
          !esl_seteq<1,6,6>(tmp_1019_fu_23683_p1.read(), ap_const_lv6_12) && 
          !esl_seteq<1,6,6>(tmp_1019_fu_23683_p1.read(), ap_const_lv6_13) && 
          !esl_seteq<1,6,6>(tmp_1019_fu_23683_p1.read(), ap_const_lv6_14) && 
          !esl_seteq<1,6,6>(tmp_1019_fu_23683_p1.read(), ap_const_lv6_15) && 
          !esl_seteq<1,6,6>(ap_const_lv6_16, tmp_1019_fu_23683_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_0, tmp_1055_fu_24461_p1.read()) && 
          !esl_seteq<1,6,6>(tmp_1055_fu_24461_p1.read(), ap_const_lv6_1) && 
          !esl_seteq<1,6,6>(tmp_1055_fu_24461_p1.read(), ap_const_lv6_2) && 
          !esl_seteq<1,6,6>(tmp_1055_fu_24461_p1.read(), ap_const_lv6_3) && 
          !esl_seteq<1,6,6>(tmp_1055_fu_24461_p1.read(), ap_const_lv6_4) && 
          !esl_seteq<1,6,6>(tmp_1055_fu_24461_p1.read(), ap_const_lv6_5) && 
          !esl_seteq<1,6,6>(tmp_1055_fu_24461_p1.read(), ap_const_lv6_6) && 
          !esl_seteq<1,6,6>(tmp_1055_fu_24461_p1.read(), ap_const_lv6_7) && 
          !esl_seteq<1,6,6>(tmp_1055_fu_24461_p1.read(), ap_const_lv6_8) && 
          !esl_seteq<1,6,6>(tmp_1055_fu_24461_p1.read(), ap_const_lv6_9) && 
          !esl_seteq<1,6,6>(tmp_1055_fu_24461_p1.read(), ap_const_lv6_A) && 
          !esl_seteq<1,6,6>(tmp_1055_fu_24461_p1.read(), ap_const_lv6_B) && 
          !esl_seteq<1,6,6>(tmp_1055_fu_24461_p1.read(), ap_const_lv6_C) && 
          !esl_seteq<1,6,6>(tmp_1055_fu_24461_p1.read(), ap_const_lv6_D) && 
          !esl_seteq<1,6,6>(tmp_1055_fu_24461_p1.read(), ap_const_lv6_E) && 
          !esl_seteq<1,6,6>(tmp_1055_fu_24461_p1.read(), ap_const_lv6_F) && 
          !esl_seteq<1,6,6>(tmp_1055_fu_24461_p1.read(), ap_const_lv6_10) && 
          !esl_seteq<1,6,6>(tmp_1055_fu_24461_p1.read(), ap_const_lv6_11) && 
          !esl_seteq<1,6,6>(tmp_1055_fu_24461_p1.read(), ap_const_lv6_12) && 
          !esl_seteq<1,6,6>(tmp_1055_fu_24461_p1.read(), ap_const_lv6_13) && 
          !esl_seteq<1,6,6>(tmp_1055_fu_24461_p1.read(), ap_const_lv6_14) && 
          !esl_seteq<1,6,6>(tmp_1055_fu_24461_p1.read(), ap_const_lv6_15) && 
          !esl_seteq<1,6,6>(ap_const_lv6_16, tmp_1055_fu_24461_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_0, tmp_1085_fu_25242_p1.read()) && 
          !esl_seteq<1,6,6>(tmp_1085_fu_25242_p1.read(), ap_const_lv6_1) && 
          !esl_seteq<1,6,6>(tmp_1085_fu_25242_p1.read(), ap_const_lv6_2) && 
          !esl_seteq<1,6,6>(tmp_1085_fu_25242_p1.read(), ap_const_lv6_3) && 
          !esl_seteq<1,6,6>(tmp_1085_fu_25242_p1.read(), ap_const_lv6_4) && 
          !esl_seteq<1,6,6>(tmp_1085_fu_25242_p1.read(), ap_const_lv6_5) && 
          !esl_seteq<1,6,6>(tmp_1085_fu_25242_p1.read(), ap_const_lv6_6) && 
          !esl_seteq<1,6,6>(tmp_1085_fu_25242_p1.read(), ap_const_lv6_7) && 
          !esl_seteq<1,6,6>(tmp_1085_fu_25242_p1.read(), ap_const_lv6_8) && 
          !esl_seteq<1,6,6>(tmp_1085_fu_25242_p1.read(), ap_const_lv6_9) && 
          !esl_seteq<1,6,6>(tmp_1085_fu_25242_p1.read(), ap_const_lv6_A) && 
          !esl_seteq<1,6,6>(tmp_1085_fu_25242_p1.read(), ap_const_lv6_B) && 
          !esl_seteq<1,6,6>(tmp_1085_fu_25242_p1.read(), ap_const_lv6_C) && 
          !esl_seteq<1,6,6>(tmp_1085_fu_25242_p1.read(), ap_const_lv6_D) && 
          !esl_seteq<1,6,6>(tmp_1085_fu_25242_p1.read(), ap_const_lv6_E) && 
          !esl_seteq<1,6,6>(tmp_1085_fu_25242_p1.read(), ap_const_lv6_F) && 
          !esl_seteq<1,6,6>(tmp_1085_fu_25242_p1.read(), ap_const_lv6_10) && 
          !esl_seteq<1,6,6>(tmp_1085_fu_25242_p1.read(), ap_const_lv6_11) && 
          !esl_seteq<1,6,6>(tmp_1085_fu_25242_p1.read(), ap_const_lv6_12) && 
          !esl_seteq<1,6,6>(tmp_1085_fu_25242_p1.read(), ap_const_lv6_13) && 
          !esl_seteq<1,6,6>(tmp_1085_fu_25242_p1.read(), ap_const_lv6_14) && 
          !esl_seteq<1,6,6>(tmp_1085_fu_25242_p1.read(), ap_const_lv6_15) && 
          !esl_seteq<1,6,6>(ap_const_lv6_16, tmp_1085_fu_25242_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_0, tmp_1119_fu_26012_p1.read()) && 
          !esl_seteq<1,6,6>(tmp_1119_fu_26012_p1.read(), ap_const_lv6_1) && 
          !esl_seteq<1,6,6>(tmp_1119_fu_26012_p1.read(), ap_const_lv6_2) && 
          !esl_seteq<1,6,6>(tmp_1119_fu_26012_p1.read(), ap_const_lv6_3) && 
          !esl_seteq<1,6,6>(tmp_1119_fu_26012_p1.read(), ap_const_lv6_4) && 
          !esl_seteq<1,6,6>(tmp_1119_fu_26012_p1.read(), ap_const_lv6_5) && 
          !esl_seteq<1,6,6>(tmp_1119_fu_26012_p1.read(), ap_const_lv6_6) && 
          !esl_seteq<1,6,6>(tmp_1119_fu_26012_p1.read(), ap_const_lv6_7) && 
          !esl_seteq<1,6,6>(tmp_1119_fu_26012_p1.read(), ap_const_lv6_8) && 
          !esl_seteq<1,6,6>(tmp_1119_fu_26012_p1.read(), ap_const_lv6_9) && 
          !esl_seteq<1,6,6>(tmp_1119_fu_26012_p1.read(), ap_const_lv6_A) && 
          !esl_seteq<1,6,6>(tmp_1119_fu_26012_p1.read(), ap_const_lv6_B) && 
          !esl_seteq<1,6,6>(tmp_1119_fu_26012_p1.read(), ap_const_lv6_C) && 
          !esl_seteq<1,6,6>(tmp_1119_fu_26012_p1.read(), ap_const_lv6_D) && 
          !esl_seteq<1,6,6>(tmp_1119_fu_26012_p1.read(), ap_const_lv6_E) && 
          !esl_seteq<1,6,6>(tmp_1119_fu_26012_p1.read(), ap_const_lv6_F) && 
          !esl_seteq<1,6,6>(tmp_1119_fu_26012_p1.read(), ap_const_lv6_10) && 
          !esl_seteq<1,6,6>(tmp_1119_fu_26012_p1.read(), ap_const_lv6_11) && 
          !esl_seteq<1,6,6>(tmp_1119_fu_26012_p1.read(), ap_const_lv6_12) && 
          !esl_seteq<1,6,6>(tmp_1119_fu_26012_p1.read(), ap_const_lv6_13) && 
          !esl_seteq<1,6,6>(tmp_1119_fu_26012_p1.read(), ap_const_lv6_14) && 
          !esl_seteq<1,6,6>(tmp_1119_fu_26012_p1.read(), ap_const_lv6_15) && 
          !esl_seteq<1,6,6>(ap_const_lv6_16, tmp_1119_fu_26012_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_0, tmp_1149_fu_26785_p1.read()) && 
          !esl_seteq<1,6,6>(tmp_1149_fu_26785_p1.read(), ap_const_lv6_1) && 
          !esl_seteq<1,6,6>(tmp_1149_fu_26785_p1.read(), ap_const_lv6_2) && 
          !esl_seteq<1,6,6>(tmp_1149_fu_26785_p1.read(), ap_const_lv6_3) && 
          !esl_seteq<1,6,6>(tmp_1149_fu_26785_p1.read(), ap_const_lv6_4) && 
          !esl_seteq<1,6,6>(tmp_1149_fu_26785_p1.read(), ap_const_lv6_5) && 
          !esl_seteq<1,6,6>(tmp_1149_fu_26785_p1.read(), ap_const_lv6_6) && 
          !esl_seteq<1,6,6>(tmp_1149_fu_26785_p1.read(), ap_const_lv6_7) && 
          !esl_seteq<1,6,6>(tmp_1149_fu_26785_p1.read(), ap_const_lv6_8) && 
          !esl_seteq<1,6,6>(tmp_1149_fu_26785_p1.read(), ap_const_lv6_9) && 
          !esl_seteq<1,6,6>(tmp_1149_fu_26785_p1.read(), ap_const_lv6_A) && 
          !esl_seteq<1,6,6>(tmp_1149_fu_26785_p1.read(), ap_const_lv6_B) && 
          !esl_seteq<1,6,6>(tmp_1149_fu_26785_p1.read(), ap_const_lv6_C) && 
          !esl_seteq<1,6,6>(tmp_1149_fu_26785_p1.read(), ap_const_lv6_D) && 
          !esl_seteq<1,6,6>(tmp_1149_fu_26785_p1.read(), ap_const_lv6_E) && 
          !esl_seteq<1,6,6>(tmp_1149_fu_26785_p1.read(), ap_const_lv6_F) && 
          !esl_seteq<1,6,6>(tmp_1149_fu_26785_p1.read(), ap_const_lv6_10) && 
          !esl_seteq<1,6,6>(tmp_1149_fu_26785_p1.read(), ap_const_lv6_11) && 
          !esl_seteq<1,6,6>(tmp_1149_fu_26785_p1.read(), ap_const_lv6_12) && 
          !esl_seteq<1,6,6>(tmp_1149_fu_26785_p1.read(), ap_const_lv6_13) && 
          !esl_seteq<1,6,6>(tmp_1149_fu_26785_p1.read(), ap_const_lv6_14) && 
          !esl_seteq<1,6,6>(tmp_1149_fu_26785_p1.read(), ap_const_lv6_15) && 
          !esl_seteq<1,6,6>(ap_const_lv6_16, tmp_1149_fu_26785_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_0, tmp_1183_fu_27551_p1.read()) && 
          !esl_seteq<1,6,6>(tmp_1183_fu_27551_p1.read(), ap_const_lv6_1) && 
          !esl_seteq<1,6,6>(tmp_1183_fu_27551_p1.read(), ap_const_lv6_2) && 
          !esl_seteq<1,6,6>(tmp_1183_fu_27551_p1.read(), ap_const_lv6_3) && 
          !esl_seteq<1,6,6>(tmp_1183_fu_27551_p1.read(), ap_const_lv6_4) && 
          !esl_seteq<1,6,6>(tmp_1183_fu_27551_p1.read(), ap_const_lv6_5) && 
          !esl_seteq<1,6,6>(tmp_1183_fu_27551_p1.read(), ap_const_lv6_6) && 
          !esl_seteq<1,6,6>(tmp_1183_fu_27551_p1.read(), ap_const_lv6_7) && 
          !esl_seteq<1,6,6>(tmp_1183_fu_27551_p1.read(), ap_const_lv6_8) && 
          !esl_seteq<1,6,6>(tmp_1183_fu_27551_p1.read(), ap_const_lv6_9) && 
          !esl_seteq<1,6,6>(tmp_1183_fu_27551_p1.read(), ap_const_lv6_A) && 
          !esl_seteq<1,6,6>(tmp_1183_fu_27551_p1.read(), ap_const_lv6_B) && 
          !esl_seteq<1,6,6>(tmp_1183_fu_27551_p1.read(), ap_const_lv6_C) && 
          !esl_seteq<1,6,6>(tmp_1183_fu_27551_p1.read(), ap_const_lv6_D) && 
          !esl_seteq<1,6,6>(tmp_1183_fu_27551_p1.read(), ap_const_lv6_E) && 
          !esl_seteq<1,6,6>(tmp_1183_fu_27551_p1.read(), ap_const_lv6_F) && 
          !esl_seteq<1,6,6>(tmp_1183_fu_27551_p1.read(), ap_const_lv6_10) && 
          !esl_seteq<1,6,6>(tmp_1183_fu_27551_p1.read(), ap_const_lv6_11) && 
          !esl_seteq<1,6,6>(tmp_1183_fu_27551_p1.read(), ap_const_lv6_12) && 
          !esl_seteq<1,6,6>(tmp_1183_fu_27551_p1.read(), ap_const_lv6_13) && 
          !esl_seteq<1,6,6>(tmp_1183_fu_27551_p1.read(), ap_const_lv6_14) && 
          !esl_seteq<1,6,6>(tmp_1183_fu_27551_p1.read(), ap_const_lv6_15) && 
          !esl_seteq<1,6,6>(ap_const_lv6_16, tmp_1183_fu_27551_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_0, tmp_1214_fu_28332_p1.read()) && 
          !esl_seteq<1,6,6>(tmp_1214_fu_28332_p1.read(), ap_const_lv6_1) && 
          !esl_seteq<1,6,6>(tmp_1214_fu_28332_p1.read(), ap_const_lv6_2) && 
          !esl_seteq<1,6,6>(tmp_1214_fu_28332_p1.read(), ap_const_lv6_3) && 
          !esl_seteq<1,6,6>(tmp_1214_fu_28332_p1.read(), ap_const_lv6_4) && 
          !esl_seteq<1,6,6>(tmp_1214_fu_28332_p1.read(), ap_const_lv6_5) && 
          !esl_seteq<1,6,6>(tmp_1214_fu_28332_p1.read(), ap_const_lv6_6) && 
          !esl_seteq<1,6,6>(tmp_1214_fu_28332_p1.read(), ap_const_lv6_7) && 
          !esl_seteq<1,6,6>(tmp_1214_fu_28332_p1.read(), ap_const_lv6_8) && 
          !esl_seteq<1,6,6>(tmp_1214_fu_28332_p1.read(), ap_const_lv6_9) && 
          !esl_seteq<1,6,6>(tmp_1214_fu_28332_p1.read(), ap_const_lv6_A) && 
          !esl_seteq<1,6,6>(tmp_1214_fu_28332_p1.read(), ap_const_lv6_B) && 
          !esl_seteq<1,6,6>(tmp_1214_fu_28332_p1.read(), ap_const_lv6_C) && 
          !esl_seteq<1,6,6>(tmp_1214_fu_28332_p1.read(), ap_const_lv6_D) && 
          !esl_seteq<1,6,6>(tmp_1214_fu_28332_p1.read(), ap_const_lv6_E) && 
          !esl_seteq<1,6,6>(tmp_1214_fu_28332_p1.read(), ap_const_lv6_F) && 
          !esl_seteq<1,6,6>(tmp_1214_fu_28332_p1.read(), ap_const_lv6_10) && 
          !esl_seteq<1,6,6>(tmp_1214_fu_28332_p1.read(), ap_const_lv6_11) && 
          !esl_seteq<1,6,6>(tmp_1214_fu_28332_p1.read(), ap_const_lv6_12) && 
          !esl_seteq<1,6,6>(tmp_1214_fu_28332_p1.read(), ap_const_lv6_13) && 
          !esl_seteq<1,6,6>(tmp_1214_fu_28332_p1.read(), ap_const_lv6_14) && 
          !esl_seteq<1,6,6>(tmp_1214_fu_28332_p1.read(), ap_const_lv6_15) && 
          !esl_seteq<1,6,6>(ap_const_lv6_16, tmp_1214_fu_28332_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_0, tmp_1248_fu_29098_p1.read()) && 
          !esl_seteq<1,6,6>(tmp_1248_fu_29098_p1.read(), ap_const_lv6_1) && 
          !esl_seteq<1,6,6>(tmp_1248_fu_29098_p1.read(), ap_const_lv6_2) && 
          !esl_seteq<1,6,6>(tmp_1248_fu_29098_p1.read(), ap_const_lv6_3) && 
          !esl_seteq<1,6,6>(tmp_1248_fu_29098_p1.read(), ap_const_lv6_4) && 
          !esl_seteq<1,6,6>(tmp_1248_fu_29098_p1.read(), ap_const_lv6_5) && 
          !esl_seteq<1,6,6>(tmp_1248_fu_29098_p1.read(), ap_const_lv6_6) && 
          !esl_seteq<1,6,6>(tmp_1248_fu_29098_p1.read(), ap_const_lv6_7) && 
          !esl_seteq<1,6,6>(tmp_1248_fu_29098_p1.read(), ap_const_lv6_8) && 
          !esl_seteq<1,6,6>(tmp_1248_fu_29098_p1.read(), ap_const_lv6_9) && 
          !esl_seteq<1,6,6>(tmp_1248_fu_29098_p1.read(), ap_const_lv6_A) && 
          !esl_seteq<1,6,6>(tmp_1248_fu_29098_p1.read(), ap_const_lv6_B) && 
          !esl_seteq<1,6,6>(tmp_1248_fu_29098_p1.read(), ap_const_lv6_C) && 
          !esl_seteq<1,6,6>(tmp_1248_fu_29098_p1.read(), ap_const_lv6_D) && 
          !esl_seteq<1,6,6>(tmp_1248_fu_29098_p1.read(), ap_const_lv6_E) && 
          !esl_seteq<1,6,6>(tmp_1248_fu_29098_p1.read(), ap_const_lv6_F) && 
          !esl_seteq<1,6,6>(tmp_1248_fu_29098_p1.read(), ap_const_lv6_10) && 
          !esl_seteq<1,6,6>(tmp_1248_fu_29098_p1.read(), ap_const_lv6_11) && 
          !esl_seteq<1,6,6>(tmp_1248_fu_29098_p1.read(), ap_const_lv6_12) && 
          !esl_seteq<1,6,6>(tmp_1248_fu_29098_p1.read(), ap_const_lv6_13) && 
          !esl_seteq<1,6,6>(tmp_1248_fu_29098_p1.read(), ap_const_lv6_14) && 
          !esl_seteq<1,6,6>(tmp_1248_fu_29098_p1.read(), ap_const_lv6_15) && 
          !esl_seteq<1,6,6>(ap_const_lv6_16, tmp_1248_fu_29098_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_0, tmp_1279_fu_29883_p1.read()) && 
          !esl_seteq<1,6,6>(tmp_1279_fu_29883_p1.read(), ap_const_lv6_1) && 
          !esl_seteq<1,6,6>(tmp_1279_fu_29883_p1.read(), ap_const_lv6_2) && 
          !esl_seteq<1,6,6>(tmp_1279_fu_29883_p1.read(), ap_const_lv6_3) && 
          !esl_seteq<1,6,6>(tmp_1279_fu_29883_p1.read(), ap_const_lv6_4) && 
          !esl_seteq<1,6,6>(tmp_1279_fu_29883_p1.read(), ap_const_lv6_5) && 
          !esl_seteq<1,6,6>(tmp_1279_fu_29883_p1.read(), ap_const_lv6_6) && 
          !esl_seteq<1,6,6>(tmp_1279_fu_29883_p1.read(), ap_const_lv6_7) && 
          !esl_seteq<1,6,6>(tmp_1279_fu_29883_p1.read(), ap_const_lv6_8) && 
          !esl_seteq<1,6,6>(tmp_1279_fu_29883_p1.read(), ap_const_lv6_9) && 
          !esl_seteq<1,6,6>(tmp_1279_fu_29883_p1.read(), ap_const_lv6_A) && 
          !esl_seteq<1,6,6>(tmp_1279_fu_29883_p1.read(), ap_const_lv6_B) && 
          !esl_seteq<1,6,6>(tmp_1279_fu_29883_p1.read(), ap_const_lv6_C) && 
          !esl_seteq<1,6,6>(tmp_1279_fu_29883_p1.read(), ap_const_lv6_D) && 
          !esl_seteq<1,6,6>(tmp_1279_fu_29883_p1.read(), ap_const_lv6_E) && 
          !esl_seteq<1,6,6>(tmp_1279_fu_29883_p1.read(), ap_const_lv6_F) && 
          !esl_seteq<1,6,6>(tmp_1279_fu_29883_p1.read(), ap_const_lv6_10) && 
          !esl_seteq<1,6,6>(tmp_1279_fu_29883_p1.read(), ap_const_lv6_11) && 
          !esl_seteq<1,6,6>(tmp_1279_fu_29883_p1.read(), ap_const_lv6_12) && 
          !esl_seteq<1,6,6>(tmp_1279_fu_29883_p1.read(), ap_const_lv6_13) && 
          !esl_seteq<1,6,6>(tmp_1279_fu_29883_p1.read(), ap_const_lv6_14) && 
          !esl_seteq<1,6,6>(tmp_1279_fu_29883_p1.read(), ap_const_lv6_15) && 
          !esl_seteq<1,6,6>(ap_const_lv6_16, tmp_1279_fu_29883_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_0, tmp_1315_fu_30657_p1.read()) && 
          !esl_seteq<1,6,6>(tmp_1315_fu_30657_p1.read(), ap_const_lv6_1) && 
          !esl_seteq<1,6,6>(tmp_1315_fu_30657_p1.read(), ap_const_lv6_2) && 
          !esl_seteq<1,6,6>(tmp_1315_fu_30657_p1.read(), ap_const_lv6_3) && 
          !esl_seteq<1,6,6>(tmp_1315_fu_30657_p1.read(), ap_const_lv6_4) && 
          !esl_seteq<1,6,6>(tmp_1315_fu_30657_p1.read(), ap_const_lv6_5) && 
          !esl_seteq<1,6,6>(tmp_1315_fu_30657_p1.read(), ap_const_lv6_6) && 
          !esl_seteq<1,6,6>(tmp_1315_fu_30657_p1.read(), ap_const_lv6_7) && 
          !esl_seteq<1,6,6>(tmp_1315_fu_30657_p1.read(), ap_const_lv6_8) && 
          !esl_seteq<1,6,6>(tmp_1315_fu_30657_p1.read(), ap_const_lv6_9) && 
          !esl_seteq<1,6,6>(tmp_1315_fu_30657_p1.read(), ap_const_lv6_A) && 
          !esl_seteq<1,6,6>(tmp_1315_fu_30657_p1.read(), ap_const_lv6_B) && 
          !esl_seteq<1,6,6>(tmp_1315_fu_30657_p1.read(), ap_const_lv6_C) && 
          !esl_seteq<1,6,6>(tmp_1315_fu_30657_p1.read(), ap_const_lv6_D) && 
          !esl_seteq<1,6,6>(tmp_1315_fu_30657_p1.read(), ap_const_lv6_E) && 
          !esl_seteq<1,6,6>(tmp_1315_fu_30657_p1.read(), ap_const_lv6_F) && 
          !esl_seteq<1,6,6>(tmp_1315_fu_30657_p1.read(), ap_const_lv6_10) && 
          !esl_seteq<1,6,6>(tmp_1315_fu_30657_p1.read(), ap_const_lv6_11) && 
          !esl_seteq<1,6,6>(tmp_1315_fu_30657_p1.read(), ap_const_lv6_12) && 
          !esl_seteq<1,6,6>(tmp_1315_fu_30657_p1.read(), ap_const_lv6_13) && 
          !esl_seteq<1,6,6>(tmp_1315_fu_30657_p1.read(), ap_const_lv6_14) && 
          !esl_seteq<1,6,6>(tmp_1315_fu_30657_p1.read(), ap_const_lv6_15) && 
          !esl_seteq<1,6,6>(ap_const_lv6_16, tmp_1315_fu_30657_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_0, tmp_1347_fu_31442_p1.read()) && 
          !esl_seteq<1,6,6>(tmp_1347_fu_31442_p1.read(), ap_const_lv6_1) && 
          !esl_seteq<1,6,6>(tmp_1347_fu_31442_p1.read(), ap_const_lv6_2) && 
          !esl_seteq<1,6,6>(tmp_1347_fu_31442_p1.read(), ap_const_lv6_3) && 
          !esl_seteq<1,6,6>(tmp_1347_fu_31442_p1.read(), ap_const_lv6_4) && 
          !esl_seteq<1,6,6>(tmp_1347_fu_31442_p1.read(), ap_const_lv6_5) && 
          !esl_seteq<1,6,6>(tmp_1347_fu_31442_p1.read(), ap_const_lv6_6) && 
          !esl_seteq<1,6,6>(tmp_1347_fu_31442_p1.read(), ap_const_lv6_7) && 
          !esl_seteq<1,6,6>(tmp_1347_fu_31442_p1.read(), ap_const_lv6_8) && 
          !esl_seteq<1,6,6>(tmp_1347_fu_31442_p1.read(), ap_const_lv6_9) && 
          !esl_seteq<1,6,6>(tmp_1347_fu_31442_p1.read(), ap_const_lv6_A) && 
          !esl_seteq<1,6,6>(tmp_1347_fu_31442_p1.read(), ap_const_lv6_B) && 
          !esl_seteq<1,6,6>(tmp_1347_fu_31442_p1.read(), ap_const_lv6_C) && 
          !esl_seteq<1,6,6>(tmp_1347_fu_31442_p1.read(), ap_const_lv6_D) && 
          !esl_seteq<1,6,6>(tmp_1347_fu_31442_p1.read(), ap_const_lv6_E) && 
          !esl_seteq<1,6,6>(tmp_1347_fu_31442_p1.read(), ap_const_lv6_F) && 
          !esl_seteq<1,6,6>(tmp_1347_fu_31442_p1.read(), ap_const_lv6_10) && 
          !esl_seteq<1,6,6>(tmp_1347_fu_31442_p1.read(), ap_const_lv6_11) && 
          !esl_seteq<1,6,6>(tmp_1347_fu_31442_p1.read(), ap_const_lv6_12) && 
          !esl_seteq<1,6,6>(tmp_1347_fu_31442_p1.read(), ap_const_lv6_13) && 
          !esl_seteq<1,6,6>(tmp_1347_fu_31442_p1.read(), ap_const_lv6_14) && 
          !esl_seteq<1,6,6>(tmp_1347_fu_31442_p1.read(), ap_const_lv6_15) && 
          !esl_seteq<1,6,6>(ap_const_lv6_16, tmp_1347_fu_31442_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_0, tmp_1383_fu_32220_p1.read()) && 
          !esl_seteq<1,6,6>(tmp_1383_fu_32220_p1.read(), ap_const_lv6_1) && 
          !esl_seteq<1,6,6>(tmp_1383_fu_32220_p1.read(), ap_const_lv6_2) && 
          !esl_seteq<1,6,6>(tmp_1383_fu_32220_p1.read(), ap_const_lv6_3) && 
          !esl_seteq<1,6,6>(tmp_1383_fu_32220_p1.read(), ap_const_lv6_4) && 
          !esl_seteq<1,6,6>(tmp_1383_fu_32220_p1.read(), ap_const_lv6_5) && 
          !esl_seteq<1,6,6>(tmp_1383_fu_32220_p1.read(), ap_const_lv6_6) && 
          !esl_seteq<1,6,6>(tmp_1383_fu_32220_p1.read(), ap_const_lv6_7) && 
          !esl_seteq<1,6,6>(tmp_1383_fu_32220_p1.read(), ap_const_lv6_8) && 
          !esl_seteq<1,6,6>(tmp_1383_fu_32220_p1.read(), ap_const_lv6_9) && 
          !esl_seteq<1,6,6>(tmp_1383_fu_32220_p1.read(), ap_const_lv6_A) && 
          !esl_seteq<1,6,6>(tmp_1383_fu_32220_p1.read(), ap_const_lv6_B) && 
          !esl_seteq<1,6,6>(tmp_1383_fu_32220_p1.read(), ap_const_lv6_C) && 
          !esl_seteq<1,6,6>(tmp_1383_fu_32220_p1.read(), ap_const_lv6_D) && 
          !esl_seteq<1,6,6>(tmp_1383_fu_32220_p1.read(), ap_const_lv6_E) && 
          !esl_seteq<1,6,6>(tmp_1383_fu_32220_p1.read(), ap_const_lv6_F) && 
          !esl_seteq<1,6,6>(tmp_1383_fu_32220_p1.read(), ap_const_lv6_10) && 
          !esl_seteq<1,6,6>(tmp_1383_fu_32220_p1.read(), ap_const_lv6_11) && 
          !esl_seteq<1,6,6>(tmp_1383_fu_32220_p1.read(), ap_const_lv6_12) && 
          !esl_seteq<1,6,6>(tmp_1383_fu_32220_p1.read(), ap_const_lv6_13) && 
          !esl_seteq<1,6,6>(tmp_1383_fu_32220_p1.read(), ap_const_lv6_14) && 
          !esl_seteq<1,6,6>(tmp_1383_fu_32220_p1.read(), ap_const_lv6_15) && 
          !esl_seteq<1,6,6>(ap_const_lv6_16, tmp_1383_fu_32220_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_0, tmp_1413_fu_33009_p1.read()) && 
          !esl_seteq<1,6,6>(tmp_1413_fu_33009_p1.read(), ap_const_lv6_1) && 
          !esl_seteq<1,6,6>(tmp_1413_fu_33009_p1.read(), ap_const_lv6_2) && 
          !esl_seteq<1,6,6>(tmp_1413_fu_33009_p1.read(), ap_const_lv6_3) && 
          !esl_seteq<1,6,6>(tmp_1413_fu_33009_p1.read(), ap_const_lv6_4) && 
          !esl_seteq<1,6,6>(tmp_1413_fu_33009_p1.read(), ap_const_lv6_5) && 
          !esl_seteq<1,6,6>(tmp_1413_fu_33009_p1.read(), ap_const_lv6_6) && 
          !esl_seteq<1,6,6>(tmp_1413_fu_33009_p1.read(), ap_const_lv6_7) && 
          !esl_seteq<1,6,6>(tmp_1413_fu_33009_p1.read(), ap_const_lv6_8) && 
          !esl_seteq<1,6,6>(tmp_1413_fu_33009_p1.read(), ap_const_lv6_9) && 
          !esl_seteq<1,6,6>(tmp_1413_fu_33009_p1.read(), ap_const_lv6_A) && 
          !esl_seteq<1,6,6>(tmp_1413_fu_33009_p1.read(), ap_const_lv6_B) && 
          !esl_seteq<1,6,6>(tmp_1413_fu_33009_p1.read(), ap_const_lv6_C) && 
          !esl_seteq<1,6,6>(tmp_1413_fu_33009_p1.read(), ap_const_lv6_D) && 
          !esl_seteq<1,6,6>(tmp_1413_fu_33009_p1.read(), ap_const_lv6_E) && 
          !esl_seteq<1,6,6>(tmp_1413_fu_33009_p1.read(), ap_const_lv6_F) && 
          !esl_seteq<1,6,6>(tmp_1413_fu_33009_p1.read(), ap_const_lv6_10) && 
          !esl_seteq<1,6,6>(tmp_1413_fu_33009_p1.read(), ap_const_lv6_11) && 
          !esl_seteq<1,6,6>(tmp_1413_fu_33009_p1.read(), ap_const_lv6_12) && 
          !esl_seteq<1,6,6>(tmp_1413_fu_33009_p1.read(), ap_const_lv6_13) && 
          !esl_seteq<1,6,6>(tmp_1413_fu_33009_p1.read(), ap_const_lv6_14) && 
          !esl_seteq<1,6,6>(tmp_1413_fu_33009_p1.read(), ap_const_lv6_15) && 
          !esl_seteq<1,6,6>(ap_const_lv6_16, tmp_1413_fu_33009_p1.read())))) {
        weights_48_48_1x1_V_23_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_23_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read())) {
        weights_48_48_1x1_V_2_address0 =  (sc_lv<7>) (tmp_1670_cast_fu_33013_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read())) {
        weights_48_48_1x1_V_2_address0 =  (sc_lv<7>) (tmp_1633_cast_fu_32224_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read())) {
        weights_48_48_1x1_V_2_address0 =  (sc_lv<7>) (tmp_1592_cast_fu_31446_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read())) {
        weights_48_48_1x1_V_2_address0 =  (sc_lv<7>) (tmp_1553_cast_fu_30661_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read())) {
        weights_48_48_1x1_V_2_address0 =  (sc_lv<7>) (tmp_1512_cast_fu_29887_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read())) {
        weights_48_48_1x1_V_2_address0 =  (sc_lv<7>) (tmp_1474_cast_fu_29102_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read())) {
        weights_48_48_1x1_V_2_address0 =  (sc_lv<7>) (tmp_1435_cast_fu_28336_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read())) {
        weights_48_48_1x1_V_2_address0 =  (sc_lv<7>) (tmp_1397_cast_fu_27555_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read())) {
        weights_48_48_1x1_V_2_address0 =  (sc_lv<7>) (tmp_1358_cast_fu_26789_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read())) {
        weights_48_48_1x1_V_2_address0 =  (sc_lv<7>) (tmp_1321_cast_fu_26016_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read())) {
        weights_48_48_1x1_V_2_address0 =  (sc_lv<7>) (tmp_1282_cast_fu_25246_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read())) {
        weights_48_48_1x1_V_2_address0 =  (sc_lv<7>) (tmp_1245_cast_fu_24465_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read())) {
        weights_48_48_1x1_V_2_address0 =  (sc_lv<7>) (tmp_1204_cast_fu_23687_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read())) {
        weights_48_48_1x1_V_2_address0 =  (sc_lv<7>) (tmp_1167_cast_fu_22906_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read())) {
        weights_48_48_1x1_V_2_address0 =  (sc_lv<7>) (tmp_1128_cast_fu_22140_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read())) {
        weights_48_48_1x1_V_2_address0 =  (sc_lv<7>) (tmp_1091_cast_fu_21359_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read())) {
        weights_48_48_1x1_V_2_address0 =  (sc_lv<7>) (tmp_1063_cast_fu_20712_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read())) {
        weights_48_48_1x1_V_2_address0 =  (sc_lv<7>) (tmp_1023_cast_fu_19931_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read())) {
        weights_48_48_1x1_V_2_address0 =  (sc_lv<7>) (tmp_989_cast_fu_19150_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_2_address0 = grp_subconv_1x1_16p_p_fu_14143_weight_2_V_address0.read();
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
        weights_48_48_1x1_V_2_address0 = grp_subconv_1x1_8_p_fu_14039_weight_2_V_address0.read();
    } else {
        weights_48_48_1x1_V_2_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_2_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_2_address1 = grp_subconv_1x1_16p_p_fu_14143_weight_2_V_address1.read();
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
        weights_48_48_1x1_V_2_address1 = grp_subconv_1x1_8_p_fu_14039_weight_2_V_address1.read();
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
        weights_48_48_1x1_V_2_ce0 = grp_subconv_1x1_16p_p_fu_14143_weight_2_V_ce0.read();
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
        weights_48_48_1x1_V_2_ce0 = grp_subconv_1x1_8_p_fu_14039_weight_2_V_ce0.read();
    } else {
        weights_48_48_1x1_V_2_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_2_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_2_ce1 = grp_subconv_1x1_16p_p_fu_14143_weight_2_V_ce1.read();
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
        weights_48_48_1x1_V_2_ce1 = grp_subconv_1x1_8_p_fu_14039_weight_2_V_ce1.read();
    } else {
        weights_48_48_1x1_V_2_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_2_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read()) && 
          esl_seteq<1,6,6>(tmp_842_fu_19146_p1.read(), ap_const_lv6_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read()) && 
          esl_seteq<1,6,6>(tmp_869_fu_19927_p1.read(), ap_const_lv6_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read()) && 
          esl_seteq<1,6,6>(tmp_902_fu_20708_p1.read(), ap_const_lv6_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read()) && 
          esl_seteq<1,6,6>(tmp_925_fu_21355_p1.read(), ap_const_lv6_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read()) && 
          esl_seteq<1,6,6>(tmp_955_fu_22136_p1.read(), ap_const_lv6_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read()) && 
          esl_seteq<1,6,6>(tmp_989_fu_22902_p1.read(), ap_const_lv6_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) && 
          esl_seteq<1,6,6>(tmp_1019_fu_23683_p1.read(), ap_const_lv6_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read()) && 
          esl_seteq<1,6,6>(tmp_1055_fu_24461_p1.read(), ap_const_lv6_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read()) && 
          esl_seteq<1,6,6>(tmp_1085_fu_25242_p1.read(), ap_const_lv6_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read()) && 
          esl_seteq<1,6,6>(tmp_1119_fu_26012_p1.read(), ap_const_lv6_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read()) && 
          esl_seteq<1,6,6>(tmp_1149_fu_26785_p1.read(), ap_const_lv6_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read()) && 
          esl_seteq<1,6,6>(tmp_1183_fu_27551_p1.read(), ap_const_lv6_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read()) && 
          esl_seteq<1,6,6>(tmp_1214_fu_28332_p1.read(), ap_const_lv6_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read()) && 
          esl_seteq<1,6,6>(tmp_1248_fu_29098_p1.read(), ap_const_lv6_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read()) && 
          esl_seteq<1,6,6>(tmp_1279_fu_29883_p1.read(), ap_const_lv6_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read()) && 
          esl_seteq<1,6,6>(tmp_1315_fu_30657_p1.read(), ap_const_lv6_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read()) && 
          esl_seteq<1,6,6>(tmp_1347_fu_31442_p1.read(), ap_const_lv6_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read()) && 
          esl_seteq<1,6,6>(tmp_1383_fu_32220_p1.read(), ap_const_lv6_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read()) && 
          esl_seteq<1,6,6>(tmp_1413_fu_33009_p1.read(), ap_const_lv6_2)))) {
        weights_48_48_1x1_V_2_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_2_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read())) {
        weights_48_48_1x1_V_3_address0 =  (sc_lv<7>) (tmp_1670_cast_fu_33013_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read())) {
        weights_48_48_1x1_V_3_address0 =  (sc_lv<7>) (tmp_1633_cast_fu_32224_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read())) {
        weights_48_48_1x1_V_3_address0 =  (sc_lv<7>) (tmp_1592_cast_fu_31446_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read())) {
        weights_48_48_1x1_V_3_address0 =  (sc_lv<7>) (tmp_1553_cast_fu_30661_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read())) {
        weights_48_48_1x1_V_3_address0 =  (sc_lv<7>) (tmp_1512_cast_fu_29887_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read())) {
        weights_48_48_1x1_V_3_address0 =  (sc_lv<7>) (tmp_1474_cast_fu_29102_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read())) {
        weights_48_48_1x1_V_3_address0 =  (sc_lv<7>) (tmp_1435_cast_fu_28336_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read())) {
        weights_48_48_1x1_V_3_address0 =  (sc_lv<7>) (tmp_1397_cast_fu_27555_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read())) {
        weights_48_48_1x1_V_3_address0 =  (sc_lv<7>) (tmp_1358_cast_fu_26789_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read())) {
        weights_48_48_1x1_V_3_address0 =  (sc_lv<7>) (tmp_1321_cast_fu_26016_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read())) {
        weights_48_48_1x1_V_3_address0 =  (sc_lv<7>) (tmp_1282_cast_fu_25246_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read())) {
        weights_48_48_1x1_V_3_address0 =  (sc_lv<7>) (tmp_1245_cast_fu_24465_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read())) {
        weights_48_48_1x1_V_3_address0 =  (sc_lv<7>) (tmp_1204_cast_fu_23687_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read())) {
        weights_48_48_1x1_V_3_address0 =  (sc_lv<7>) (tmp_1167_cast_fu_22906_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read())) {
        weights_48_48_1x1_V_3_address0 =  (sc_lv<7>) (tmp_1128_cast_fu_22140_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read())) {
        weights_48_48_1x1_V_3_address0 =  (sc_lv<7>) (tmp_1091_cast_fu_21359_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read())) {
        weights_48_48_1x1_V_3_address0 =  (sc_lv<7>) (tmp_1063_cast_fu_20712_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read())) {
        weights_48_48_1x1_V_3_address0 =  (sc_lv<7>) (tmp_1023_cast_fu_19931_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read())) {
        weights_48_48_1x1_V_3_address0 =  (sc_lv<7>) (tmp_989_cast_fu_19150_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_3_address0 = grp_subconv_1x1_16p_p_fu_14143_weight_3_V_address0.read();
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
        weights_48_48_1x1_V_3_address0 = grp_subconv_1x1_8_p_fu_14039_weight_3_V_address0.read();
    } else {
        weights_48_48_1x1_V_3_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_3_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_3_address1 = grp_subconv_1x1_16p_p_fu_14143_weight_3_V_address1.read();
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
        weights_48_48_1x1_V_3_address1 = grp_subconv_1x1_8_p_fu_14039_weight_3_V_address1.read();
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
        weights_48_48_1x1_V_3_ce0 = grp_subconv_1x1_16p_p_fu_14143_weight_3_V_ce0.read();
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
        weights_48_48_1x1_V_3_ce0 = grp_subconv_1x1_8_p_fu_14039_weight_3_V_ce0.read();
    } else {
        weights_48_48_1x1_V_3_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_3_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_3_ce1 = grp_subconv_1x1_16p_p_fu_14143_weight_3_V_ce1.read();
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
        weights_48_48_1x1_V_3_ce1 = grp_subconv_1x1_8_p_fu_14039_weight_3_V_ce1.read();
    } else {
        weights_48_48_1x1_V_3_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_3_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read()) && 
          esl_seteq<1,6,6>(tmp_842_fu_19146_p1.read(), ap_const_lv6_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read()) && 
          esl_seteq<1,6,6>(tmp_869_fu_19927_p1.read(), ap_const_lv6_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read()) && 
          esl_seteq<1,6,6>(tmp_902_fu_20708_p1.read(), ap_const_lv6_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read()) && 
          esl_seteq<1,6,6>(tmp_925_fu_21355_p1.read(), ap_const_lv6_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read()) && 
          esl_seteq<1,6,6>(tmp_955_fu_22136_p1.read(), ap_const_lv6_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read()) && 
          esl_seteq<1,6,6>(tmp_989_fu_22902_p1.read(), ap_const_lv6_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) && 
          esl_seteq<1,6,6>(tmp_1019_fu_23683_p1.read(), ap_const_lv6_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read()) && 
          esl_seteq<1,6,6>(tmp_1055_fu_24461_p1.read(), ap_const_lv6_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read()) && 
          esl_seteq<1,6,6>(tmp_1085_fu_25242_p1.read(), ap_const_lv6_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read()) && 
          esl_seteq<1,6,6>(tmp_1119_fu_26012_p1.read(), ap_const_lv6_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read()) && 
          esl_seteq<1,6,6>(tmp_1149_fu_26785_p1.read(), ap_const_lv6_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read()) && 
          esl_seteq<1,6,6>(tmp_1183_fu_27551_p1.read(), ap_const_lv6_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read()) && 
          esl_seteq<1,6,6>(tmp_1214_fu_28332_p1.read(), ap_const_lv6_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read()) && 
          esl_seteq<1,6,6>(tmp_1248_fu_29098_p1.read(), ap_const_lv6_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read()) && 
          esl_seteq<1,6,6>(tmp_1279_fu_29883_p1.read(), ap_const_lv6_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read()) && 
          esl_seteq<1,6,6>(tmp_1315_fu_30657_p1.read(), ap_const_lv6_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read()) && 
          esl_seteq<1,6,6>(tmp_1347_fu_31442_p1.read(), ap_const_lv6_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read()) && 
          esl_seteq<1,6,6>(tmp_1383_fu_32220_p1.read(), ap_const_lv6_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read()) && 
          esl_seteq<1,6,6>(tmp_1413_fu_33009_p1.read(), ap_const_lv6_3)))) {
        weights_48_48_1x1_V_3_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_3_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read())) {
        weights_48_48_1x1_V_4_address0 =  (sc_lv<7>) (tmp_1670_cast_fu_33013_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read())) {
        weights_48_48_1x1_V_4_address0 =  (sc_lv<7>) (tmp_1633_cast_fu_32224_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read())) {
        weights_48_48_1x1_V_4_address0 =  (sc_lv<7>) (tmp_1592_cast_fu_31446_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read())) {
        weights_48_48_1x1_V_4_address0 =  (sc_lv<7>) (tmp_1553_cast_fu_30661_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read())) {
        weights_48_48_1x1_V_4_address0 =  (sc_lv<7>) (tmp_1512_cast_fu_29887_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read())) {
        weights_48_48_1x1_V_4_address0 =  (sc_lv<7>) (tmp_1474_cast_fu_29102_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read())) {
        weights_48_48_1x1_V_4_address0 =  (sc_lv<7>) (tmp_1435_cast_fu_28336_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read())) {
        weights_48_48_1x1_V_4_address0 =  (sc_lv<7>) (tmp_1397_cast_fu_27555_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read())) {
        weights_48_48_1x1_V_4_address0 =  (sc_lv<7>) (tmp_1358_cast_fu_26789_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read())) {
        weights_48_48_1x1_V_4_address0 =  (sc_lv<7>) (tmp_1321_cast_fu_26016_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read())) {
        weights_48_48_1x1_V_4_address0 =  (sc_lv<7>) (tmp_1282_cast_fu_25246_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read())) {
        weights_48_48_1x1_V_4_address0 =  (sc_lv<7>) (tmp_1245_cast_fu_24465_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read())) {
        weights_48_48_1x1_V_4_address0 =  (sc_lv<7>) (tmp_1204_cast_fu_23687_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read())) {
        weights_48_48_1x1_V_4_address0 =  (sc_lv<7>) (tmp_1167_cast_fu_22906_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read())) {
        weights_48_48_1x1_V_4_address0 =  (sc_lv<7>) (tmp_1128_cast_fu_22140_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read())) {
        weights_48_48_1x1_V_4_address0 =  (sc_lv<7>) (tmp_1091_cast_fu_21359_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read())) {
        weights_48_48_1x1_V_4_address0 =  (sc_lv<7>) (tmp_1063_cast_fu_20712_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read())) {
        weights_48_48_1x1_V_4_address0 =  (sc_lv<7>) (tmp_1023_cast_fu_19931_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read())) {
        weights_48_48_1x1_V_4_address0 =  (sc_lv<7>) (tmp_989_cast_fu_19150_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_4_address0 = grp_subconv_1x1_16p_p_fu_14143_weight_4_V_address0.read();
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
        weights_48_48_1x1_V_4_address0 = grp_subconv_1x1_8_p_fu_14039_weight_4_V_address0.read();
    } else {
        weights_48_48_1x1_V_4_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_4_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_4_address1 = grp_subconv_1x1_16p_p_fu_14143_weight_4_V_address1.read();
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
        weights_48_48_1x1_V_4_address1 = grp_subconv_1x1_8_p_fu_14039_weight_4_V_address1.read();
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
        weights_48_48_1x1_V_4_ce0 = grp_subconv_1x1_16p_p_fu_14143_weight_4_V_ce0.read();
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
        weights_48_48_1x1_V_4_ce0 = grp_subconv_1x1_8_p_fu_14039_weight_4_V_ce0.read();
    } else {
        weights_48_48_1x1_V_4_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_4_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_4_ce1 = grp_subconv_1x1_16p_p_fu_14143_weight_4_V_ce1.read();
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
        weights_48_48_1x1_V_4_ce1 = grp_subconv_1x1_8_p_fu_14039_weight_4_V_ce1.read();
    } else {
        weights_48_48_1x1_V_4_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_4_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read()) && 
          esl_seteq<1,6,6>(tmp_842_fu_19146_p1.read(), ap_const_lv6_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read()) && 
          esl_seteq<1,6,6>(tmp_869_fu_19927_p1.read(), ap_const_lv6_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read()) && 
          esl_seteq<1,6,6>(tmp_902_fu_20708_p1.read(), ap_const_lv6_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read()) && 
          esl_seteq<1,6,6>(tmp_925_fu_21355_p1.read(), ap_const_lv6_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read()) && 
          esl_seteq<1,6,6>(tmp_955_fu_22136_p1.read(), ap_const_lv6_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read()) && 
          esl_seteq<1,6,6>(tmp_989_fu_22902_p1.read(), ap_const_lv6_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) && 
          esl_seteq<1,6,6>(tmp_1019_fu_23683_p1.read(), ap_const_lv6_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read()) && 
          esl_seteq<1,6,6>(tmp_1055_fu_24461_p1.read(), ap_const_lv6_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read()) && 
          esl_seteq<1,6,6>(tmp_1085_fu_25242_p1.read(), ap_const_lv6_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read()) && 
          esl_seteq<1,6,6>(tmp_1119_fu_26012_p1.read(), ap_const_lv6_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read()) && 
          esl_seteq<1,6,6>(tmp_1149_fu_26785_p1.read(), ap_const_lv6_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read()) && 
          esl_seteq<1,6,6>(tmp_1183_fu_27551_p1.read(), ap_const_lv6_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read()) && 
          esl_seteq<1,6,6>(tmp_1214_fu_28332_p1.read(), ap_const_lv6_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read()) && 
          esl_seteq<1,6,6>(tmp_1248_fu_29098_p1.read(), ap_const_lv6_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read()) && 
          esl_seteq<1,6,6>(tmp_1279_fu_29883_p1.read(), ap_const_lv6_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read()) && 
          esl_seteq<1,6,6>(tmp_1315_fu_30657_p1.read(), ap_const_lv6_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read()) && 
          esl_seteq<1,6,6>(tmp_1347_fu_31442_p1.read(), ap_const_lv6_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read()) && 
          esl_seteq<1,6,6>(tmp_1383_fu_32220_p1.read(), ap_const_lv6_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read()) && 
          esl_seteq<1,6,6>(tmp_1413_fu_33009_p1.read(), ap_const_lv6_4)))) {
        weights_48_48_1x1_V_4_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_4_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read())) {
        weights_48_48_1x1_V_5_address0 =  (sc_lv<7>) (tmp_1670_cast_fu_33013_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read())) {
        weights_48_48_1x1_V_5_address0 =  (sc_lv<7>) (tmp_1633_cast_fu_32224_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read())) {
        weights_48_48_1x1_V_5_address0 =  (sc_lv<7>) (tmp_1592_cast_fu_31446_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read())) {
        weights_48_48_1x1_V_5_address0 =  (sc_lv<7>) (tmp_1553_cast_fu_30661_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read())) {
        weights_48_48_1x1_V_5_address0 =  (sc_lv<7>) (tmp_1512_cast_fu_29887_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read())) {
        weights_48_48_1x1_V_5_address0 =  (sc_lv<7>) (tmp_1474_cast_fu_29102_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read())) {
        weights_48_48_1x1_V_5_address0 =  (sc_lv<7>) (tmp_1435_cast_fu_28336_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read())) {
        weights_48_48_1x1_V_5_address0 =  (sc_lv<7>) (tmp_1397_cast_fu_27555_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read())) {
        weights_48_48_1x1_V_5_address0 =  (sc_lv<7>) (tmp_1358_cast_fu_26789_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read())) {
        weights_48_48_1x1_V_5_address0 =  (sc_lv<7>) (tmp_1321_cast_fu_26016_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read())) {
        weights_48_48_1x1_V_5_address0 =  (sc_lv<7>) (tmp_1282_cast_fu_25246_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read())) {
        weights_48_48_1x1_V_5_address0 =  (sc_lv<7>) (tmp_1245_cast_fu_24465_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read())) {
        weights_48_48_1x1_V_5_address0 =  (sc_lv<7>) (tmp_1204_cast_fu_23687_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read())) {
        weights_48_48_1x1_V_5_address0 =  (sc_lv<7>) (tmp_1167_cast_fu_22906_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read())) {
        weights_48_48_1x1_V_5_address0 =  (sc_lv<7>) (tmp_1128_cast_fu_22140_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read())) {
        weights_48_48_1x1_V_5_address0 =  (sc_lv<7>) (tmp_1091_cast_fu_21359_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read())) {
        weights_48_48_1x1_V_5_address0 =  (sc_lv<7>) (tmp_1063_cast_fu_20712_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read())) {
        weights_48_48_1x1_V_5_address0 =  (sc_lv<7>) (tmp_1023_cast_fu_19931_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read())) {
        weights_48_48_1x1_V_5_address0 =  (sc_lv<7>) (tmp_989_cast_fu_19150_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_5_address0 = grp_subconv_1x1_16p_p_fu_14143_weight_5_V_address0.read();
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
        weights_48_48_1x1_V_5_address0 = grp_subconv_1x1_8_p_fu_14039_weight_5_V_address0.read();
    } else {
        weights_48_48_1x1_V_5_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_5_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_5_address1 = grp_subconv_1x1_16p_p_fu_14143_weight_5_V_address1.read();
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
        weights_48_48_1x1_V_5_address1 = grp_subconv_1x1_8_p_fu_14039_weight_5_V_address1.read();
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
        weights_48_48_1x1_V_5_ce0 = grp_subconv_1x1_16p_p_fu_14143_weight_5_V_ce0.read();
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
        weights_48_48_1x1_V_5_ce0 = grp_subconv_1x1_8_p_fu_14039_weight_5_V_ce0.read();
    } else {
        weights_48_48_1x1_V_5_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_5_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_5_ce1 = grp_subconv_1x1_16p_p_fu_14143_weight_5_V_ce1.read();
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
        weights_48_48_1x1_V_5_ce1 = grp_subconv_1x1_8_p_fu_14039_weight_5_V_ce1.read();
    } else {
        weights_48_48_1x1_V_5_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_5_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read()) && 
          esl_seteq<1,6,6>(tmp_842_fu_19146_p1.read(), ap_const_lv6_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read()) && 
          esl_seteq<1,6,6>(tmp_869_fu_19927_p1.read(), ap_const_lv6_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read()) && 
          esl_seteq<1,6,6>(tmp_902_fu_20708_p1.read(), ap_const_lv6_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read()) && 
          esl_seteq<1,6,6>(tmp_925_fu_21355_p1.read(), ap_const_lv6_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read()) && 
          esl_seteq<1,6,6>(tmp_955_fu_22136_p1.read(), ap_const_lv6_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read()) && 
          esl_seteq<1,6,6>(tmp_989_fu_22902_p1.read(), ap_const_lv6_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) && 
          esl_seteq<1,6,6>(tmp_1019_fu_23683_p1.read(), ap_const_lv6_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read()) && 
          esl_seteq<1,6,6>(tmp_1055_fu_24461_p1.read(), ap_const_lv6_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read()) && 
          esl_seteq<1,6,6>(tmp_1085_fu_25242_p1.read(), ap_const_lv6_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read()) && 
          esl_seteq<1,6,6>(tmp_1119_fu_26012_p1.read(), ap_const_lv6_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read()) && 
          esl_seteq<1,6,6>(tmp_1149_fu_26785_p1.read(), ap_const_lv6_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read()) && 
          esl_seteq<1,6,6>(tmp_1183_fu_27551_p1.read(), ap_const_lv6_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read()) && 
          esl_seteq<1,6,6>(tmp_1214_fu_28332_p1.read(), ap_const_lv6_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read()) && 
          esl_seteq<1,6,6>(tmp_1248_fu_29098_p1.read(), ap_const_lv6_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read()) && 
          esl_seteq<1,6,6>(tmp_1279_fu_29883_p1.read(), ap_const_lv6_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read()) && 
          esl_seteq<1,6,6>(tmp_1315_fu_30657_p1.read(), ap_const_lv6_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read()) && 
          esl_seteq<1,6,6>(tmp_1347_fu_31442_p1.read(), ap_const_lv6_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read()) && 
          esl_seteq<1,6,6>(tmp_1383_fu_32220_p1.read(), ap_const_lv6_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read()) && 
          esl_seteq<1,6,6>(tmp_1413_fu_33009_p1.read(), ap_const_lv6_5)))) {
        weights_48_48_1x1_V_5_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_5_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read())) {
        weights_48_48_1x1_V_6_address0 =  (sc_lv<7>) (tmp_1670_cast_fu_33013_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read())) {
        weights_48_48_1x1_V_6_address0 =  (sc_lv<7>) (tmp_1633_cast_fu_32224_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read())) {
        weights_48_48_1x1_V_6_address0 =  (sc_lv<7>) (tmp_1592_cast_fu_31446_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read())) {
        weights_48_48_1x1_V_6_address0 =  (sc_lv<7>) (tmp_1553_cast_fu_30661_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read())) {
        weights_48_48_1x1_V_6_address0 =  (sc_lv<7>) (tmp_1512_cast_fu_29887_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read())) {
        weights_48_48_1x1_V_6_address0 =  (sc_lv<7>) (tmp_1474_cast_fu_29102_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read())) {
        weights_48_48_1x1_V_6_address0 =  (sc_lv<7>) (tmp_1435_cast_fu_28336_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read())) {
        weights_48_48_1x1_V_6_address0 =  (sc_lv<7>) (tmp_1397_cast_fu_27555_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read())) {
        weights_48_48_1x1_V_6_address0 =  (sc_lv<7>) (tmp_1358_cast_fu_26789_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read())) {
        weights_48_48_1x1_V_6_address0 =  (sc_lv<7>) (tmp_1321_cast_fu_26016_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read())) {
        weights_48_48_1x1_V_6_address0 =  (sc_lv<7>) (tmp_1282_cast_fu_25246_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read())) {
        weights_48_48_1x1_V_6_address0 =  (sc_lv<7>) (tmp_1245_cast_fu_24465_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read())) {
        weights_48_48_1x1_V_6_address0 =  (sc_lv<7>) (tmp_1204_cast_fu_23687_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read())) {
        weights_48_48_1x1_V_6_address0 =  (sc_lv<7>) (tmp_1167_cast_fu_22906_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read())) {
        weights_48_48_1x1_V_6_address0 =  (sc_lv<7>) (tmp_1128_cast_fu_22140_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read())) {
        weights_48_48_1x1_V_6_address0 =  (sc_lv<7>) (tmp_1091_cast_fu_21359_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read())) {
        weights_48_48_1x1_V_6_address0 =  (sc_lv<7>) (tmp_1063_cast_fu_20712_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read())) {
        weights_48_48_1x1_V_6_address0 =  (sc_lv<7>) (tmp_1023_cast_fu_19931_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read())) {
        weights_48_48_1x1_V_6_address0 =  (sc_lv<7>) (tmp_989_cast_fu_19150_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_6_address0 = grp_subconv_1x1_16p_p_fu_14143_weight_6_V_address0.read();
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
        weights_48_48_1x1_V_6_address0 = grp_subconv_1x1_8_p_fu_14039_weight_6_V_address0.read();
    } else {
        weights_48_48_1x1_V_6_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_6_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_6_address1 = grp_subconv_1x1_16p_p_fu_14143_weight_6_V_address1.read();
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
        weights_48_48_1x1_V_6_address1 = grp_subconv_1x1_8_p_fu_14039_weight_6_V_address1.read();
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
        weights_48_48_1x1_V_6_ce0 = grp_subconv_1x1_16p_p_fu_14143_weight_6_V_ce0.read();
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
        weights_48_48_1x1_V_6_ce0 = grp_subconv_1x1_8_p_fu_14039_weight_6_V_ce0.read();
    } else {
        weights_48_48_1x1_V_6_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_6_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_6_ce1 = grp_subconv_1x1_16p_p_fu_14143_weight_6_V_ce1.read();
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
        weights_48_48_1x1_V_6_ce1 = grp_subconv_1x1_8_p_fu_14039_weight_6_V_ce1.read();
    } else {
        weights_48_48_1x1_V_6_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_6_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read()) && 
          esl_seteq<1,6,6>(tmp_842_fu_19146_p1.read(), ap_const_lv6_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read()) && 
          esl_seteq<1,6,6>(tmp_869_fu_19927_p1.read(), ap_const_lv6_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read()) && 
          esl_seteq<1,6,6>(tmp_902_fu_20708_p1.read(), ap_const_lv6_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read()) && 
          esl_seteq<1,6,6>(tmp_925_fu_21355_p1.read(), ap_const_lv6_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read()) && 
          esl_seteq<1,6,6>(tmp_955_fu_22136_p1.read(), ap_const_lv6_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read()) && 
          esl_seteq<1,6,6>(tmp_989_fu_22902_p1.read(), ap_const_lv6_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) && 
          esl_seteq<1,6,6>(tmp_1019_fu_23683_p1.read(), ap_const_lv6_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read()) && 
          esl_seteq<1,6,6>(tmp_1055_fu_24461_p1.read(), ap_const_lv6_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read()) && 
          esl_seteq<1,6,6>(tmp_1085_fu_25242_p1.read(), ap_const_lv6_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read()) && 
          esl_seteq<1,6,6>(tmp_1119_fu_26012_p1.read(), ap_const_lv6_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read()) && 
          esl_seteq<1,6,6>(tmp_1149_fu_26785_p1.read(), ap_const_lv6_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read()) && 
          esl_seteq<1,6,6>(tmp_1183_fu_27551_p1.read(), ap_const_lv6_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read()) && 
          esl_seteq<1,6,6>(tmp_1214_fu_28332_p1.read(), ap_const_lv6_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read()) && 
          esl_seteq<1,6,6>(tmp_1248_fu_29098_p1.read(), ap_const_lv6_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read()) && 
          esl_seteq<1,6,6>(tmp_1279_fu_29883_p1.read(), ap_const_lv6_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read()) && 
          esl_seteq<1,6,6>(tmp_1315_fu_30657_p1.read(), ap_const_lv6_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read()) && 
          esl_seteq<1,6,6>(tmp_1347_fu_31442_p1.read(), ap_const_lv6_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read()) && 
          esl_seteq<1,6,6>(tmp_1383_fu_32220_p1.read(), ap_const_lv6_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read()) && 
          esl_seteq<1,6,6>(tmp_1413_fu_33009_p1.read(), ap_const_lv6_6)))) {
        weights_48_48_1x1_V_6_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_6_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_7_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read())) {
        weights_48_48_1x1_V_7_address0 =  (sc_lv<7>) (tmp_1670_cast_fu_33013_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read())) {
        weights_48_48_1x1_V_7_address0 =  (sc_lv<7>) (tmp_1633_cast_fu_32224_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read())) {
        weights_48_48_1x1_V_7_address0 =  (sc_lv<7>) (tmp_1592_cast_fu_31446_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read())) {
        weights_48_48_1x1_V_7_address0 =  (sc_lv<7>) (tmp_1553_cast_fu_30661_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read())) {
        weights_48_48_1x1_V_7_address0 =  (sc_lv<7>) (tmp_1512_cast_fu_29887_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read())) {
        weights_48_48_1x1_V_7_address0 =  (sc_lv<7>) (tmp_1474_cast_fu_29102_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read())) {
        weights_48_48_1x1_V_7_address0 =  (sc_lv<7>) (tmp_1435_cast_fu_28336_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read())) {
        weights_48_48_1x1_V_7_address0 =  (sc_lv<7>) (tmp_1397_cast_fu_27555_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read())) {
        weights_48_48_1x1_V_7_address0 =  (sc_lv<7>) (tmp_1358_cast_fu_26789_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read())) {
        weights_48_48_1x1_V_7_address0 =  (sc_lv<7>) (tmp_1321_cast_fu_26016_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read())) {
        weights_48_48_1x1_V_7_address0 =  (sc_lv<7>) (tmp_1282_cast_fu_25246_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read())) {
        weights_48_48_1x1_V_7_address0 =  (sc_lv<7>) (tmp_1245_cast_fu_24465_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read())) {
        weights_48_48_1x1_V_7_address0 =  (sc_lv<7>) (tmp_1204_cast_fu_23687_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read())) {
        weights_48_48_1x1_V_7_address0 =  (sc_lv<7>) (tmp_1167_cast_fu_22906_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read())) {
        weights_48_48_1x1_V_7_address0 =  (sc_lv<7>) (tmp_1128_cast_fu_22140_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read())) {
        weights_48_48_1x1_V_7_address0 =  (sc_lv<7>) (tmp_1091_cast_fu_21359_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read())) {
        weights_48_48_1x1_V_7_address0 =  (sc_lv<7>) (tmp_1063_cast_fu_20712_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read())) {
        weights_48_48_1x1_V_7_address0 =  (sc_lv<7>) (tmp_1023_cast_fu_19931_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read())) {
        weights_48_48_1x1_V_7_address0 =  (sc_lv<7>) (tmp_989_cast_fu_19150_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_7_address0 = grp_subconv_1x1_16p_p_fu_14143_weight_7_V_address0.read();
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
        weights_48_48_1x1_V_7_address0 = grp_subconv_1x1_8_p_fu_14039_weight_7_V_address0.read();
    } else {
        weights_48_48_1x1_V_7_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_7_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_7_address1 = grp_subconv_1x1_16p_p_fu_14143_weight_7_V_address1.read();
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
        weights_48_48_1x1_V_7_address1 = grp_subconv_1x1_8_p_fu_14039_weight_7_V_address1.read();
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
        weights_48_48_1x1_V_7_ce0 = grp_subconv_1x1_16p_p_fu_14143_weight_7_V_ce0.read();
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
        weights_48_48_1x1_V_7_ce0 = grp_subconv_1x1_8_p_fu_14039_weight_7_V_ce0.read();
    } else {
        weights_48_48_1x1_V_7_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_7_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_7_ce1 = grp_subconv_1x1_16p_p_fu_14143_weight_7_V_ce1.read();
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
        weights_48_48_1x1_V_7_ce1 = grp_subconv_1x1_8_p_fu_14039_weight_7_V_ce1.read();
    } else {
        weights_48_48_1x1_V_7_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_7_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read()) && 
          esl_seteq<1,6,6>(tmp_842_fu_19146_p1.read(), ap_const_lv6_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read()) && 
          esl_seteq<1,6,6>(tmp_869_fu_19927_p1.read(), ap_const_lv6_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read()) && 
          esl_seteq<1,6,6>(tmp_902_fu_20708_p1.read(), ap_const_lv6_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read()) && 
          esl_seteq<1,6,6>(tmp_925_fu_21355_p1.read(), ap_const_lv6_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read()) && 
          esl_seteq<1,6,6>(tmp_955_fu_22136_p1.read(), ap_const_lv6_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read()) && 
          esl_seteq<1,6,6>(tmp_989_fu_22902_p1.read(), ap_const_lv6_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) && 
          esl_seteq<1,6,6>(tmp_1019_fu_23683_p1.read(), ap_const_lv6_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read()) && 
          esl_seteq<1,6,6>(tmp_1055_fu_24461_p1.read(), ap_const_lv6_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read()) && 
          esl_seteq<1,6,6>(tmp_1085_fu_25242_p1.read(), ap_const_lv6_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read()) && 
          esl_seteq<1,6,6>(tmp_1119_fu_26012_p1.read(), ap_const_lv6_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read()) && 
          esl_seteq<1,6,6>(tmp_1149_fu_26785_p1.read(), ap_const_lv6_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read()) && 
          esl_seteq<1,6,6>(tmp_1183_fu_27551_p1.read(), ap_const_lv6_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read()) && 
          esl_seteq<1,6,6>(tmp_1214_fu_28332_p1.read(), ap_const_lv6_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read()) && 
          esl_seteq<1,6,6>(tmp_1248_fu_29098_p1.read(), ap_const_lv6_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read()) && 
          esl_seteq<1,6,6>(tmp_1279_fu_29883_p1.read(), ap_const_lv6_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read()) && 
          esl_seteq<1,6,6>(tmp_1315_fu_30657_p1.read(), ap_const_lv6_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read()) && 
          esl_seteq<1,6,6>(tmp_1347_fu_31442_p1.read(), ap_const_lv6_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read()) && 
          esl_seteq<1,6,6>(tmp_1383_fu_32220_p1.read(), ap_const_lv6_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read()) && 
          esl_seteq<1,6,6>(tmp_1413_fu_33009_p1.read(), ap_const_lv6_7)))) {
        weights_48_48_1x1_V_7_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_7_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_8_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read())) {
        weights_48_48_1x1_V_8_address0 =  (sc_lv<7>) (tmp_1670_cast_fu_33013_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read())) {
        weights_48_48_1x1_V_8_address0 =  (sc_lv<7>) (tmp_1633_cast_fu_32224_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read())) {
        weights_48_48_1x1_V_8_address0 =  (sc_lv<7>) (tmp_1592_cast_fu_31446_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read())) {
        weights_48_48_1x1_V_8_address0 =  (sc_lv<7>) (tmp_1553_cast_fu_30661_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read())) {
        weights_48_48_1x1_V_8_address0 =  (sc_lv<7>) (tmp_1512_cast_fu_29887_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read())) {
        weights_48_48_1x1_V_8_address0 =  (sc_lv<7>) (tmp_1474_cast_fu_29102_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read())) {
        weights_48_48_1x1_V_8_address0 =  (sc_lv<7>) (tmp_1435_cast_fu_28336_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read())) {
        weights_48_48_1x1_V_8_address0 =  (sc_lv<7>) (tmp_1397_cast_fu_27555_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read())) {
        weights_48_48_1x1_V_8_address0 =  (sc_lv<7>) (tmp_1358_cast_fu_26789_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read())) {
        weights_48_48_1x1_V_8_address0 =  (sc_lv<7>) (tmp_1321_cast_fu_26016_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read())) {
        weights_48_48_1x1_V_8_address0 =  (sc_lv<7>) (tmp_1282_cast_fu_25246_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read())) {
        weights_48_48_1x1_V_8_address0 =  (sc_lv<7>) (tmp_1245_cast_fu_24465_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read())) {
        weights_48_48_1x1_V_8_address0 =  (sc_lv<7>) (tmp_1204_cast_fu_23687_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read())) {
        weights_48_48_1x1_V_8_address0 =  (sc_lv<7>) (tmp_1167_cast_fu_22906_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read())) {
        weights_48_48_1x1_V_8_address0 =  (sc_lv<7>) (tmp_1128_cast_fu_22140_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read())) {
        weights_48_48_1x1_V_8_address0 =  (sc_lv<7>) (tmp_1091_cast_fu_21359_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read())) {
        weights_48_48_1x1_V_8_address0 =  (sc_lv<7>) (tmp_1063_cast_fu_20712_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read())) {
        weights_48_48_1x1_V_8_address0 =  (sc_lv<7>) (tmp_1023_cast_fu_19931_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read())) {
        weights_48_48_1x1_V_8_address0 =  (sc_lv<7>) (tmp_989_cast_fu_19150_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_8_address0 = grp_subconv_1x1_16p_p_fu_14143_weight_8_V_address0.read();
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
        weights_48_48_1x1_V_8_address0 = grp_subconv_1x1_8_p_fu_14039_weight_8_V_address0.read();
    } else {
        weights_48_48_1x1_V_8_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_8_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_8_address1 = grp_subconv_1x1_16p_p_fu_14143_weight_8_V_address1.read();
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
        weights_48_48_1x1_V_8_address1 = grp_subconv_1x1_8_p_fu_14039_weight_8_V_address1.read();
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
        weights_48_48_1x1_V_8_ce0 = grp_subconv_1x1_16p_p_fu_14143_weight_8_V_ce0.read();
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
        weights_48_48_1x1_V_8_ce0 = grp_subconv_1x1_8_p_fu_14039_weight_8_V_ce0.read();
    } else {
        weights_48_48_1x1_V_8_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_8_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_8_ce1 = grp_subconv_1x1_16p_p_fu_14143_weight_8_V_ce1.read();
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
        weights_48_48_1x1_V_8_ce1 = grp_subconv_1x1_8_p_fu_14039_weight_8_V_ce1.read();
    } else {
        weights_48_48_1x1_V_8_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_8_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read()) && 
          esl_seteq<1,6,6>(tmp_842_fu_19146_p1.read(), ap_const_lv6_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read()) && 
          esl_seteq<1,6,6>(tmp_869_fu_19927_p1.read(), ap_const_lv6_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read()) && 
          esl_seteq<1,6,6>(tmp_902_fu_20708_p1.read(), ap_const_lv6_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read()) && 
          esl_seteq<1,6,6>(tmp_925_fu_21355_p1.read(), ap_const_lv6_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read()) && 
          esl_seteq<1,6,6>(tmp_955_fu_22136_p1.read(), ap_const_lv6_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read()) && 
          esl_seteq<1,6,6>(tmp_989_fu_22902_p1.read(), ap_const_lv6_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) && 
          esl_seteq<1,6,6>(tmp_1019_fu_23683_p1.read(), ap_const_lv6_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read()) && 
          esl_seteq<1,6,6>(tmp_1055_fu_24461_p1.read(), ap_const_lv6_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read()) && 
          esl_seteq<1,6,6>(tmp_1085_fu_25242_p1.read(), ap_const_lv6_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read()) && 
          esl_seteq<1,6,6>(tmp_1119_fu_26012_p1.read(), ap_const_lv6_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read()) && 
          esl_seteq<1,6,6>(tmp_1149_fu_26785_p1.read(), ap_const_lv6_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read()) && 
          esl_seteq<1,6,6>(tmp_1183_fu_27551_p1.read(), ap_const_lv6_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read()) && 
          esl_seteq<1,6,6>(tmp_1214_fu_28332_p1.read(), ap_const_lv6_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read()) && 
          esl_seteq<1,6,6>(tmp_1248_fu_29098_p1.read(), ap_const_lv6_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read()) && 
          esl_seteq<1,6,6>(tmp_1279_fu_29883_p1.read(), ap_const_lv6_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read()) && 
          esl_seteq<1,6,6>(tmp_1315_fu_30657_p1.read(), ap_const_lv6_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read()) && 
          esl_seteq<1,6,6>(tmp_1347_fu_31442_p1.read(), ap_const_lv6_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read()) && 
          esl_seteq<1,6,6>(tmp_1383_fu_32220_p1.read(), ap_const_lv6_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read()) && 
          esl_seteq<1,6,6>(tmp_1413_fu_33009_p1.read(), ap_const_lv6_8)))) {
        weights_48_48_1x1_V_8_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_8_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_9_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read())) {
        weights_48_48_1x1_V_9_address0 =  (sc_lv<7>) (tmp_1670_cast_fu_33013_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read())) {
        weights_48_48_1x1_V_9_address0 =  (sc_lv<7>) (tmp_1633_cast_fu_32224_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read())) {
        weights_48_48_1x1_V_9_address0 =  (sc_lv<7>) (tmp_1592_cast_fu_31446_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read())) {
        weights_48_48_1x1_V_9_address0 =  (sc_lv<7>) (tmp_1553_cast_fu_30661_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read())) {
        weights_48_48_1x1_V_9_address0 =  (sc_lv<7>) (tmp_1512_cast_fu_29887_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read())) {
        weights_48_48_1x1_V_9_address0 =  (sc_lv<7>) (tmp_1474_cast_fu_29102_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read())) {
        weights_48_48_1x1_V_9_address0 =  (sc_lv<7>) (tmp_1435_cast_fu_28336_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read())) {
        weights_48_48_1x1_V_9_address0 =  (sc_lv<7>) (tmp_1397_cast_fu_27555_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read())) {
        weights_48_48_1x1_V_9_address0 =  (sc_lv<7>) (tmp_1358_cast_fu_26789_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read())) {
        weights_48_48_1x1_V_9_address0 =  (sc_lv<7>) (tmp_1321_cast_fu_26016_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read())) {
        weights_48_48_1x1_V_9_address0 =  (sc_lv<7>) (tmp_1282_cast_fu_25246_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read())) {
        weights_48_48_1x1_V_9_address0 =  (sc_lv<7>) (tmp_1245_cast_fu_24465_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read())) {
        weights_48_48_1x1_V_9_address0 =  (sc_lv<7>) (tmp_1204_cast_fu_23687_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read())) {
        weights_48_48_1x1_V_9_address0 =  (sc_lv<7>) (tmp_1167_cast_fu_22906_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read())) {
        weights_48_48_1x1_V_9_address0 =  (sc_lv<7>) (tmp_1128_cast_fu_22140_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read())) {
        weights_48_48_1x1_V_9_address0 =  (sc_lv<7>) (tmp_1091_cast_fu_21359_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read())) {
        weights_48_48_1x1_V_9_address0 =  (sc_lv<7>) (tmp_1063_cast_fu_20712_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read())) {
        weights_48_48_1x1_V_9_address0 =  (sc_lv<7>) (tmp_1023_cast_fu_19931_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read())) {
        weights_48_48_1x1_V_9_address0 =  (sc_lv<7>) (tmp_989_cast_fu_19150_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_9_address0 = grp_subconv_1x1_16p_p_fu_14143_weight_9_V_address0.read();
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
        weights_48_48_1x1_V_9_address0 = grp_subconv_1x1_8_p_fu_14039_weight_9_V_address0.read();
    } else {
        weights_48_48_1x1_V_9_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_9_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_9_address1 = grp_subconv_1x1_16p_p_fu_14143_weight_9_V_address1.read();
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
        weights_48_48_1x1_V_9_address1 = grp_subconv_1x1_8_p_fu_14039_weight_9_V_address1.read();
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
        weights_48_48_1x1_V_9_ce0 = grp_subconv_1x1_16p_p_fu_14143_weight_9_V_ce0.read();
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
        weights_48_48_1x1_V_9_ce0 = grp_subconv_1x1_8_p_fu_14039_weight_9_V_ce0.read();
    } else {
        weights_48_48_1x1_V_9_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_9_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_9_ce1 = grp_subconv_1x1_16p_p_fu_14143_weight_9_V_ce1.read();
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
        weights_48_48_1x1_V_9_ce1 = grp_subconv_1x1_8_p_fu_14039_weight_9_V_ce1.read();
    } else {
        weights_48_48_1x1_V_9_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_9_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read()) && 
          esl_seteq<1,6,6>(tmp_842_fu_19146_p1.read(), ap_const_lv6_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read()) && 
          esl_seteq<1,6,6>(tmp_869_fu_19927_p1.read(), ap_const_lv6_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read()) && 
          esl_seteq<1,6,6>(tmp_902_fu_20708_p1.read(), ap_const_lv6_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read()) && 
          esl_seteq<1,6,6>(tmp_925_fu_21355_p1.read(), ap_const_lv6_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read()) && 
          esl_seteq<1,6,6>(tmp_955_fu_22136_p1.read(), ap_const_lv6_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read()) && 
          esl_seteq<1,6,6>(tmp_989_fu_22902_p1.read(), ap_const_lv6_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) && 
          esl_seteq<1,6,6>(tmp_1019_fu_23683_p1.read(), ap_const_lv6_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read()) && 
          esl_seteq<1,6,6>(tmp_1055_fu_24461_p1.read(), ap_const_lv6_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read()) && 
          esl_seteq<1,6,6>(tmp_1085_fu_25242_p1.read(), ap_const_lv6_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read()) && 
          esl_seteq<1,6,6>(tmp_1119_fu_26012_p1.read(), ap_const_lv6_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read()) && 
          esl_seteq<1,6,6>(tmp_1149_fu_26785_p1.read(), ap_const_lv6_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read()) && 
          esl_seteq<1,6,6>(tmp_1183_fu_27551_p1.read(), ap_const_lv6_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read()) && 
          esl_seteq<1,6,6>(tmp_1214_fu_28332_p1.read(), ap_const_lv6_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read()) && 
          esl_seteq<1,6,6>(tmp_1248_fu_29098_p1.read(), ap_const_lv6_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read()) && 
          esl_seteq<1,6,6>(tmp_1279_fu_29883_p1.read(), ap_const_lv6_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read()) && 
          esl_seteq<1,6,6>(tmp_1315_fu_30657_p1.read(), ap_const_lv6_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read()) && 
          esl_seteq<1,6,6>(tmp_1347_fu_31442_p1.read(), ap_const_lv6_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read()) && 
          esl_seteq<1,6,6>(tmp_1383_fu_32220_p1.read(), ap_const_lv6_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read()) && 
          esl_seteq<1,6,6>(tmp_1413_fu_33009_p1.read(), ap_const_lv6_9)))) {
        weights_48_48_1x1_V_9_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_9_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_s_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read())) {
        weights_48_48_1x1_V_s_address0 =  (sc_lv<7>) (tmp_1670_cast_fu_33013_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read())) {
        weights_48_48_1x1_V_s_address0 =  (sc_lv<7>) (tmp_1633_cast_fu_32224_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read())) {
        weights_48_48_1x1_V_s_address0 =  (sc_lv<7>) (tmp_1592_cast_fu_31446_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read())) {
        weights_48_48_1x1_V_s_address0 =  (sc_lv<7>) (tmp_1553_cast_fu_30661_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read())) {
        weights_48_48_1x1_V_s_address0 =  (sc_lv<7>) (tmp_1512_cast_fu_29887_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read())) {
        weights_48_48_1x1_V_s_address0 =  (sc_lv<7>) (tmp_1474_cast_fu_29102_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read())) {
        weights_48_48_1x1_V_s_address0 =  (sc_lv<7>) (tmp_1435_cast_fu_28336_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read())) {
        weights_48_48_1x1_V_s_address0 =  (sc_lv<7>) (tmp_1397_cast_fu_27555_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read())) {
        weights_48_48_1x1_V_s_address0 =  (sc_lv<7>) (tmp_1358_cast_fu_26789_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read())) {
        weights_48_48_1x1_V_s_address0 =  (sc_lv<7>) (tmp_1321_cast_fu_26016_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read())) {
        weights_48_48_1x1_V_s_address0 =  (sc_lv<7>) (tmp_1282_cast_fu_25246_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read())) {
        weights_48_48_1x1_V_s_address0 =  (sc_lv<7>) (tmp_1245_cast_fu_24465_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read())) {
        weights_48_48_1x1_V_s_address0 =  (sc_lv<7>) (tmp_1204_cast_fu_23687_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read())) {
        weights_48_48_1x1_V_s_address0 =  (sc_lv<7>) (tmp_1167_cast_fu_22906_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read())) {
        weights_48_48_1x1_V_s_address0 =  (sc_lv<7>) (tmp_1128_cast_fu_22140_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read())) {
        weights_48_48_1x1_V_s_address0 =  (sc_lv<7>) (tmp_1091_cast_fu_21359_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read())) {
        weights_48_48_1x1_V_s_address0 =  (sc_lv<7>) (tmp_1063_cast_fu_20712_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read())) {
        weights_48_48_1x1_V_s_address0 =  (sc_lv<7>) (tmp_1023_cast_fu_19931_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read())) {
        weights_48_48_1x1_V_s_address0 =  (sc_lv<7>) (tmp_989_cast_fu_19150_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_s_address0 = grp_subconv_1x1_16p_p_fu_14143_weight_0_V_address0.read();
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
        weights_48_48_1x1_V_s_address0 = grp_subconv_1x1_8_p_fu_14039_weight_0_V_address0.read();
    } else {
        weights_48_48_1x1_V_s_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_s_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_s_address1 = grp_subconv_1x1_16p_p_fu_14143_weight_0_V_address1.read();
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
        weights_48_48_1x1_V_s_address1 = grp_subconv_1x1_8_p_fu_14039_weight_0_V_address1.read();
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
        weights_48_48_1x1_V_s_ce0 = grp_subconv_1x1_16p_p_fu_14143_weight_0_V_ce0.read();
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
        weights_48_48_1x1_V_s_ce0 = grp_subconv_1x1_8_p_fu_14039_weight_0_V_ce0.read();
    } else {
        weights_48_48_1x1_V_s_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_s_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_s_ce1 = grp_subconv_1x1_16p_p_fu_14143_weight_0_V_ce1.read();
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
        weights_48_48_1x1_V_s_ce1 = grp_subconv_1x1_8_p_fu_14039_weight_0_V_ce1.read();
    } else {
        weights_48_48_1x1_V_s_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_s_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_0, tmp_842_fu_19146_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_0, tmp_869_fu_19927_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_0, tmp_902_fu_20708_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_0, tmp_925_fu_21355_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_0, tmp_955_fu_22136_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_0, tmp_989_fu_22902_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_0, tmp_1019_fu_23683_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_0, tmp_1055_fu_24461_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_0, tmp_1085_fu_25242_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_0, tmp_1119_fu_26012_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_0, tmp_1149_fu_26785_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_0, tmp_1183_fu_27551_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_0, tmp_1214_fu_28332_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_0, tmp_1248_fu_29098_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_0, tmp_1279_fu_29883_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_0, tmp_1315_fu_30657_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_0, tmp_1347_fu_31442_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_0, tmp_1383_fu_32220_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_0, tmp_1413_fu_33009_p1.read())))) {
        weights_48_48_1x1_V_s_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_s_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_1_3x3_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1668.read())) {
        weights_96_1_3x3_V_address0 =  (sc_lv<10>) (tmp_1954_cast_fu_39155_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1571.read())) {
        weights_96_1_3x3_V_address0 =  (sc_lv<10>) (tmp_1879_cast_fu_37632_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1474.read())) {
        weights_96_1_3x3_V_address0 =  (sc_lv<10>) (tmp_1803_cast_fu_36093_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1380.read())) {
        weights_96_1_3x3_V_address0 =  (sc_lv<10>) (tmp_1737_cast_fu_34697_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1320.read())) {
        weights_96_1_3x3_V_address0 =  (sc_lv<10>) (tmp_1704_cast_fu_33924_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1393.read())) {
        weights_96_1_3x3_V_address0 = grp_subconv_3x3_8_stride_1_fu_15347_weight_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1333.read())) {
        weights_96_1_3x3_V_address0 = grp_subconv_3x3_8_stride_fu_14553_weight_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1487.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1584.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1681.read()))) {
        weights_96_1_3x3_V_address0 = grp_subconv_3x3_4_no_rel_fu_14495_weight_V_address0.read();
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
        weights_96_1_3x3_V_ce0 = grp_subconv_3x3_8_stride_1_fu_15347_weight_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1333.read())) {
        weights_96_1_3x3_V_ce0 = grp_subconv_3x3_8_stride_fu_14553_weight_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1487.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1584.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1681.read()))) {
        weights_96_1_3x3_V_ce0 = grp_subconv_3x3_4_no_rel_fu_14495_weight_V_ce0.read();
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
        weights_96_96_1x1_V_10_address0 =  (sc_lv<9>) (tmp_1978_cast_fu_39556_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read())) {
        weights_96_96_1x1_V_10_address0 =  (sc_lv<9>) (tmp_1942_cast_fu_38791_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read())) {
        weights_96_96_1x1_V_10_address0 =  (sc_lv<9>) (tmp_1904_cast_fu_38033_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read())) {
        weights_96_96_1x1_V_10_address0 =  (sc_lv<9>) (tmp_1867_cast_fu_37260_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read())) {
        weights_96_96_1x1_V_10_address0 =  (sc_lv<9>) (tmp_1829_cast_fu_36502_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read())) {
        weights_96_96_1x1_V_10_address0 =  (sc_lv<9>) (tmp_1791_cast_fu_35733_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read())) {
        weights_96_96_1x1_V_10_address0 =  (sc_lv<9>) (tmp_1764_cast_fu_35098_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read())) {
        weights_96_96_1x1_V_10_address0 =  (sc_lv<9>) (tmp_1725_cast_fu_34329_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read())) {
        weights_96_96_1x1_V_10_address0 =  (sc_lv<9>) (tmp_1692_cast_fu_33560_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_10_address0 = grp_subconv_1x1_8p_p_fu_13935_weight_10_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_10_address0 = grp_subconv_1x1_4_p_fu_13831_weight_10_V_address0.read();
    } else {
        weights_96_96_1x1_V_10_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_10_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_10_address1 = grp_subconv_1x1_8p_p_fu_13935_weight_10_V_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_10_address1 = grp_subconv_1x1_4_p_fu_13831_weight_10_V_address1.read();
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
        weights_96_96_1x1_V_10_ce0 = grp_subconv_1x1_8p_p_fu_13935_weight_10_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_10_ce0 = grp_subconv_1x1_4_p_fu_13831_weight_10_V_ce0.read();
    } else {
        weights_96_96_1x1_V_10_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_10_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_10_ce1 = grp_subconv_1x1_8p_p_fu_13935_weight_10_V_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_10_ce1 = grp_subconv_1x1_4_p_fu_13831_weight_10_V_ce1.read();
    } else {
        weights_96_96_1x1_V_10_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_10_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_A, tmp_1433_fu_33556_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_A, tmp_1462_fu_34325_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_A, tmp_1497_fu_35094_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_A, tmp_1520_fu_35729_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_A, tmp_1554_fu_36498_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_A, tmp_1588_fu_37256_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_A, tmp_1621_fu_38029_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_A, tmp_1655_fu_38787_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_A, tmp_1687_fu_39552_p1.read())))) {
        weights_96_96_1x1_V_10_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_10_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_11_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read())) {
        weights_96_96_1x1_V_11_address0 =  (sc_lv<9>) (tmp_1978_cast_fu_39556_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read())) {
        weights_96_96_1x1_V_11_address0 =  (sc_lv<9>) (tmp_1942_cast_fu_38791_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read())) {
        weights_96_96_1x1_V_11_address0 =  (sc_lv<9>) (tmp_1904_cast_fu_38033_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read())) {
        weights_96_96_1x1_V_11_address0 =  (sc_lv<9>) (tmp_1867_cast_fu_37260_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read())) {
        weights_96_96_1x1_V_11_address0 =  (sc_lv<9>) (tmp_1829_cast_fu_36502_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read())) {
        weights_96_96_1x1_V_11_address0 =  (sc_lv<9>) (tmp_1791_cast_fu_35733_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read())) {
        weights_96_96_1x1_V_11_address0 =  (sc_lv<9>) (tmp_1764_cast_fu_35098_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read())) {
        weights_96_96_1x1_V_11_address0 =  (sc_lv<9>) (tmp_1725_cast_fu_34329_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read())) {
        weights_96_96_1x1_V_11_address0 =  (sc_lv<9>) (tmp_1692_cast_fu_33560_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_11_address0 = grp_subconv_1x1_8p_p_fu_13935_weight_11_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_11_address0 = grp_subconv_1x1_4_p_fu_13831_weight_11_V_address0.read();
    } else {
        weights_96_96_1x1_V_11_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_11_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_11_address1 = grp_subconv_1x1_8p_p_fu_13935_weight_11_V_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_11_address1 = grp_subconv_1x1_4_p_fu_13831_weight_11_V_address1.read();
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
        weights_96_96_1x1_V_11_ce0 = grp_subconv_1x1_8p_p_fu_13935_weight_11_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_11_ce0 = grp_subconv_1x1_4_p_fu_13831_weight_11_V_ce0.read();
    } else {
        weights_96_96_1x1_V_11_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_11_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_11_ce1 = grp_subconv_1x1_8p_p_fu_13935_weight_11_V_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_11_ce1 = grp_subconv_1x1_4_p_fu_13831_weight_11_V_ce1.read();
    } else {
        weights_96_96_1x1_V_11_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_11_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_B, tmp_1433_fu_33556_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_B, tmp_1462_fu_34325_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_B, tmp_1497_fu_35094_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_B, tmp_1520_fu_35729_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_B, tmp_1554_fu_36498_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_B, tmp_1588_fu_37256_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_B, tmp_1621_fu_38029_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_B, tmp_1655_fu_38787_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_B, tmp_1687_fu_39552_p1.read())))) {
        weights_96_96_1x1_V_11_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_11_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_12_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read())) {
        weights_96_96_1x1_V_12_address0 =  (sc_lv<9>) (tmp_1978_cast_fu_39556_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read())) {
        weights_96_96_1x1_V_12_address0 =  (sc_lv<9>) (tmp_1942_cast_fu_38791_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read())) {
        weights_96_96_1x1_V_12_address0 =  (sc_lv<9>) (tmp_1904_cast_fu_38033_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read())) {
        weights_96_96_1x1_V_12_address0 =  (sc_lv<9>) (tmp_1867_cast_fu_37260_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read())) {
        weights_96_96_1x1_V_12_address0 =  (sc_lv<9>) (tmp_1829_cast_fu_36502_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read())) {
        weights_96_96_1x1_V_12_address0 =  (sc_lv<9>) (tmp_1791_cast_fu_35733_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read())) {
        weights_96_96_1x1_V_12_address0 =  (sc_lv<9>) (tmp_1764_cast_fu_35098_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read())) {
        weights_96_96_1x1_V_12_address0 =  (sc_lv<9>) (tmp_1725_cast_fu_34329_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read())) {
        weights_96_96_1x1_V_12_address0 =  (sc_lv<9>) (tmp_1692_cast_fu_33560_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_12_address0 = grp_subconv_1x1_8p_p_fu_13935_weight_12_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_12_address0 = grp_subconv_1x1_4_p_fu_13831_weight_12_V_address0.read();
    } else {
        weights_96_96_1x1_V_12_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_12_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_12_address1 = grp_subconv_1x1_8p_p_fu_13935_weight_12_V_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_12_address1 = grp_subconv_1x1_4_p_fu_13831_weight_12_V_address1.read();
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
        weights_96_96_1x1_V_12_ce0 = grp_subconv_1x1_8p_p_fu_13935_weight_12_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_12_ce0 = grp_subconv_1x1_4_p_fu_13831_weight_12_V_ce0.read();
    } else {
        weights_96_96_1x1_V_12_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_12_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_12_ce1 = grp_subconv_1x1_8p_p_fu_13935_weight_12_V_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_12_ce1 = grp_subconv_1x1_4_p_fu_13831_weight_12_V_ce1.read();
    } else {
        weights_96_96_1x1_V_12_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_12_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_C, tmp_1433_fu_33556_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_C, tmp_1462_fu_34325_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_C, tmp_1497_fu_35094_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_C, tmp_1520_fu_35729_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_C, tmp_1554_fu_36498_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_C, tmp_1588_fu_37256_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_C, tmp_1621_fu_38029_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_C, tmp_1655_fu_38787_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_C, tmp_1687_fu_39552_p1.read())))) {
        weights_96_96_1x1_V_12_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_12_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_13_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read())) {
        weights_96_96_1x1_V_13_address0 =  (sc_lv<9>) (tmp_1978_cast_fu_39556_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read())) {
        weights_96_96_1x1_V_13_address0 =  (sc_lv<9>) (tmp_1942_cast_fu_38791_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read())) {
        weights_96_96_1x1_V_13_address0 =  (sc_lv<9>) (tmp_1904_cast_fu_38033_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read())) {
        weights_96_96_1x1_V_13_address0 =  (sc_lv<9>) (tmp_1867_cast_fu_37260_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read())) {
        weights_96_96_1x1_V_13_address0 =  (sc_lv<9>) (tmp_1829_cast_fu_36502_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read())) {
        weights_96_96_1x1_V_13_address0 =  (sc_lv<9>) (tmp_1791_cast_fu_35733_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read())) {
        weights_96_96_1x1_V_13_address0 =  (sc_lv<9>) (tmp_1764_cast_fu_35098_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read())) {
        weights_96_96_1x1_V_13_address0 =  (sc_lv<9>) (tmp_1725_cast_fu_34329_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read())) {
        weights_96_96_1x1_V_13_address0 =  (sc_lv<9>) (tmp_1692_cast_fu_33560_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_13_address0 = grp_subconv_1x1_8p_p_fu_13935_weight_13_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_13_address0 = grp_subconv_1x1_4_p_fu_13831_weight_13_V_address0.read();
    } else {
        weights_96_96_1x1_V_13_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_13_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_13_address1 = grp_subconv_1x1_8p_p_fu_13935_weight_13_V_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_13_address1 = grp_subconv_1x1_4_p_fu_13831_weight_13_V_address1.read();
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
        weights_96_96_1x1_V_13_ce0 = grp_subconv_1x1_8p_p_fu_13935_weight_13_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_13_ce0 = grp_subconv_1x1_4_p_fu_13831_weight_13_V_ce0.read();
    } else {
        weights_96_96_1x1_V_13_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_13_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_13_ce1 = grp_subconv_1x1_8p_p_fu_13935_weight_13_V_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_13_ce1 = grp_subconv_1x1_4_p_fu_13831_weight_13_V_ce1.read();
    } else {
        weights_96_96_1x1_V_13_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_13_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_D, tmp_1433_fu_33556_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_D, tmp_1462_fu_34325_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_D, tmp_1497_fu_35094_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_D, tmp_1520_fu_35729_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_D, tmp_1554_fu_36498_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_D, tmp_1588_fu_37256_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_D, tmp_1621_fu_38029_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_D, tmp_1655_fu_38787_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_D, tmp_1687_fu_39552_p1.read())))) {
        weights_96_96_1x1_V_13_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_13_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_14_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read())) {
        weights_96_96_1x1_V_14_address0 =  (sc_lv<9>) (tmp_1978_cast_fu_39556_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read())) {
        weights_96_96_1x1_V_14_address0 =  (sc_lv<9>) (tmp_1942_cast_fu_38791_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read())) {
        weights_96_96_1x1_V_14_address0 =  (sc_lv<9>) (tmp_1904_cast_fu_38033_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read())) {
        weights_96_96_1x1_V_14_address0 =  (sc_lv<9>) (tmp_1867_cast_fu_37260_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read())) {
        weights_96_96_1x1_V_14_address0 =  (sc_lv<9>) (tmp_1829_cast_fu_36502_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read())) {
        weights_96_96_1x1_V_14_address0 =  (sc_lv<9>) (tmp_1791_cast_fu_35733_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read())) {
        weights_96_96_1x1_V_14_address0 =  (sc_lv<9>) (tmp_1764_cast_fu_35098_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read())) {
        weights_96_96_1x1_V_14_address0 =  (sc_lv<9>) (tmp_1725_cast_fu_34329_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read())) {
        weights_96_96_1x1_V_14_address0 =  (sc_lv<9>) (tmp_1692_cast_fu_33560_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_14_address0 = grp_subconv_1x1_8p_p_fu_13935_weight_14_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_14_address0 = grp_subconv_1x1_4_p_fu_13831_weight_14_V_address0.read();
    } else {
        weights_96_96_1x1_V_14_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_14_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_14_address1 = grp_subconv_1x1_8p_p_fu_13935_weight_14_V_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_14_address1 = grp_subconv_1x1_4_p_fu_13831_weight_14_V_address1.read();
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
        weights_96_96_1x1_V_14_ce0 = grp_subconv_1x1_8p_p_fu_13935_weight_14_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_14_ce0 = grp_subconv_1x1_4_p_fu_13831_weight_14_V_ce0.read();
    } else {
        weights_96_96_1x1_V_14_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_14_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_14_ce1 = grp_subconv_1x1_8p_p_fu_13935_weight_14_V_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_14_ce1 = grp_subconv_1x1_4_p_fu_13831_weight_14_V_ce1.read();
    } else {
        weights_96_96_1x1_V_14_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_14_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_E, tmp_1433_fu_33556_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_E, tmp_1462_fu_34325_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_E, tmp_1497_fu_35094_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_E, tmp_1520_fu_35729_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_E, tmp_1554_fu_36498_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_E, tmp_1588_fu_37256_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_E, tmp_1621_fu_38029_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_E, tmp_1655_fu_38787_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_E, tmp_1687_fu_39552_p1.read())))) {
        weights_96_96_1x1_V_14_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_14_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_15_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read())) {
        weights_96_96_1x1_V_15_address0 =  (sc_lv<9>) (tmp_1978_cast_fu_39556_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read())) {
        weights_96_96_1x1_V_15_address0 =  (sc_lv<9>) (tmp_1942_cast_fu_38791_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read())) {
        weights_96_96_1x1_V_15_address0 =  (sc_lv<9>) (tmp_1904_cast_fu_38033_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read())) {
        weights_96_96_1x1_V_15_address0 =  (sc_lv<9>) (tmp_1867_cast_fu_37260_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read())) {
        weights_96_96_1x1_V_15_address0 =  (sc_lv<9>) (tmp_1829_cast_fu_36502_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read())) {
        weights_96_96_1x1_V_15_address0 =  (sc_lv<9>) (tmp_1791_cast_fu_35733_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read())) {
        weights_96_96_1x1_V_15_address0 =  (sc_lv<9>) (tmp_1764_cast_fu_35098_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read())) {
        weights_96_96_1x1_V_15_address0 =  (sc_lv<9>) (tmp_1725_cast_fu_34329_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read())) {
        weights_96_96_1x1_V_15_address0 =  (sc_lv<9>) (tmp_1692_cast_fu_33560_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_15_address0 = grp_subconv_1x1_8p_p_fu_13935_weight_15_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_15_address0 = grp_subconv_1x1_4_p_fu_13831_weight_15_V_address0.read();
    } else {
        weights_96_96_1x1_V_15_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_15_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_15_address1 = grp_subconv_1x1_8p_p_fu_13935_weight_15_V_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_15_address1 = grp_subconv_1x1_4_p_fu_13831_weight_15_V_address1.read();
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
        weights_96_96_1x1_V_15_ce0 = grp_subconv_1x1_8p_p_fu_13935_weight_15_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_15_ce0 = grp_subconv_1x1_4_p_fu_13831_weight_15_V_ce0.read();
    } else {
        weights_96_96_1x1_V_15_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_15_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_15_ce1 = grp_subconv_1x1_8p_p_fu_13935_weight_15_V_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_15_ce1 = grp_subconv_1x1_4_p_fu_13831_weight_15_V_ce1.read();
    } else {
        weights_96_96_1x1_V_15_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_15_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_F, tmp_1433_fu_33556_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_F, tmp_1462_fu_34325_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_F, tmp_1497_fu_35094_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_F, tmp_1520_fu_35729_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_F, tmp_1554_fu_36498_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_F, tmp_1588_fu_37256_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_F, tmp_1621_fu_38029_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_F, tmp_1655_fu_38787_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_F, tmp_1687_fu_39552_p1.read())))) {
        weights_96_96_1x1_V_15_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_15_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_16_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read())) {
        weights_96_96_1x1_V_16_address0 =  (sc_lv<9>) (tmp_1978_cast_fu_39556_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read())) {
        weights_96_96_1x1_V_16_address0 =  (sc_lv<9>) (tmp_1942_cast_fu_38791_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read())) {
        weights_96_96_1x1_V_16_address0 =  (sc_lv<9>) (tmp_1904_cast_fu_38033_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read())) {
        weights_96_96_1x1_V_16_address0 =  (sc_lv<9>) (tmp_1867_cast_fu_37260_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read())) {
        weights_96_96_1x1_V_16_address0 =  (sc_lv<9>) (tmp_1829_cast_fu_36502_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read())) {
        weights_96_96_1x1_V_16_address0 =  (sc_lv<9>) (tmp_1791_cast_fu_35733_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read())) {
        weights_96_96_1x1_V_16_address0 =  (sc_lv<9>) (tmp_1764_cast_fu_35098_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read())) {
        weights_96_96_1x1_V_16_address0 =  (sc_lv<9>) (tmp_1725_cast_fu_34329_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read())) {
        weights_96_96_1x1_V_16_address0 =  (sc_lv<9>) (tmp_1692_cast_fu_33560_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_16_address0 = grp_subconv_1x1_8p_p_fu_13935_weight_16_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_16_address0 = grp_subconv_1x1_4_p_fu_13831_weight_16_V_address0.read();
    } else {
        weights_96_96_1x1_V_16_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_16_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_16_address1 = grp_subconv_1x1_8p_p_fu_13935_weight_16_V_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_16_address1 = grp_subconv_1x1_4_p_fu_13831_weight_16_V_address1.read();
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
        weights_96_96_1x1_V_16_ce0 = grp_subconv_1x1_8p_p_fu_13935_weight_16_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_16_ce0 = grp_subconv_1x1_4_p_fu_13831_weight_16_V_ce0.read();
    } else {
        weights_96_96_1x1_V_16_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_16_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_16_ce1 = grp_subconv_1x1_8p_p_fu_13935_weight_16_V_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_16_ce1 = grp_subconv_1x1_4_p_fu_13831_weight_16_V_ce1.read();
    } else {
        weights_96_96_1x1_V_16_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_16_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_10, tmp_1433_fu_33556_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_10, tmp_1462_fu_34325_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_10, tmp_1497_fu_35094_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_10, tmp_1520_fu_35729_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_10, tmp_1554_fu_36498_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_10, tmp_1588_fu_37256_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_10, tmp_1621_fu_38029_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_10, tmp_1655_fu_38787_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_10, tmp_1687_fu_39552_p1.read())))) {
        weights_96_96_1x1_V_16_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_16_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_17_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read())) {
        weights_96_96_1x1_V_17_address0 =  (sc_lv<9>) (tmp_1978_cast_fu_39556_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read())) {
        weights_96_96_1x1_V_17_address0 =  (sc_lv<9>) (tmp_1942_cast_fu_38791_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read())) {
        weights_96_96_1x1_V_17_address0 =  (sc_lv<9>) (tmp_1904_cast_fu_38033_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read())) {
        weights_96_96_1x1_V_17_address0 =  (sc_lv<9>) (tmp_1867_cast_fu_37260_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read())) {
        weights_96_96_1x1_V_17_address0 =  (sc_lv<9>) (tmp_1829_cast_fu_36502_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read())) {
        weights_96_96_1x1_V_17_address0 =  (sc_lv<9>) (tmp_1791_cast_fu_35733_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read())) {
        weights_96_96_1x1_V_17_address0 =  (sc_lv<9>) (tmp_1764_cast_fu_35098_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read())) {
        weights_96_96_1x1_V_17_address0 =  (sc_lv<9>) (tmp_1725_cast_fu_34329_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read())) {
        weights_96_96_1x1_V_17_address0 =  (sc_lv<9>) (tmp_1692_cast_fu_33560_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_17_address0 = grp_subconv_1x1_8p_p_fu_13935_weight_17_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_17_address0 = grp_subconv_1x1_4_p_fu_13831_weight_17_V_address0.read();
    } else {
        weights_96_96_1x1_V_17_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_17_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_17_address1 = grp_subconv_1x1_8p_p_fu_13935_weight_17_V_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_17_address1 = grp_subconv_1x1_4_p_fu_13831_weight_17_V_address1.read();
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
        weights_96_96_1x1_V_17_ce0 = grp_subconv_1x1_8p_p_fu_13935_weight_17_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_17_ce0 = grp_subconv_1x1_4_p_fu_13831_weight_17_V_ce0.read();
    } else {
        weights_96_96_1x1_V_17_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_17_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_17_ce1 = grp_subconv_1x1_8p_p_fu_13935_weight_17_V_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_17_ce1 = grp_subconv_1x1_4_p_fu_13831_weight_17_V_ce1.read();
    } else {
        weights_96_96_1x1_V_17_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_17_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_11, tmp_1433_fu_33556_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_11, tmp_1462_fu_34325_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_11, tmp_1497_fu_35094_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_11, tmp_1520_fu_35729_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_11, tmp_1554_fu_36498_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_11, tmp_1588_fu_37256_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_11, tmp_1621_fu_38029_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_11, tmp_1655_fu_38787_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_11, tmp_1687_fu_39552_p1.read())))) {
        weights_96_96_1x1_V_17_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_17_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_18_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read())) {
        weights_96_96_1x1_V_18_address0 =  (sc_lv<9>) (tmp_1978_cast_fu_39556_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read())) {
        weights_96_96_1x1_V_18_address0 =  (sc_lv<9>) (tmp_1942_cast_fu_38791_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read())) {
        weights_96_96_1x1_V_18_address0 =  (sc_lv<9>) (tmp_1904_cast_fu_38033_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read())) {
        weights_96_96_1x1_V_18_address0 =  (sc_lv<9>) (tmp_1867_cast_fu_37260_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read())) {
        weights_96_96_1x1_V_18_address0 =  (sc_lv<9>) (tmp_1829_cast_fu_36502_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read())) {
        weights_96_96_1x1_V_18_address0 =  (sc_lv<9>) (tmp_1791_cast_fu_35733_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read())) {
        weights_96_96_1x1_V_18_address0 =  (sc_lv<9>) (tmp_1764_cast_fu_35098_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read())) {
        weights_96_96_1x1_V_18_address0 =  (sc_lv<9>) (tmp_1725_cast_fu_34329_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read())) {
        weights_96_96_1x1_V_18_address0 =  (sc_lv<9>) (tmp_1692_cast_fu_33560_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_18_address0 = grp_subconv_1x1_8p_p_fu_13935_weight_18_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_18_address0 = grp_subconv_1x1_4_p_fu_13831_weight_18_V_address0.read();
    } else {
        weights_96_96_1x1_V_18_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_18_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_18_address1 = grp_subconv_1x1_8p_p_fu_13935_weight_18_V_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_18_address1 = grp_subconv_1x1_4_p_fu_13831_weight_18_V_address1.read();
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
        weights_96_96_1x1_V_18_ce0 = grp_subconv_1x1_8p_p_fu_13935_weight_18_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_18_ce0 = grp_subconv_1x1_4_p_fu_13831_weight_18_V_ce0.read();
    } else {
        weights_96_96_1x1_V_18_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_18_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_18_ce1 = grp_subconv_1x1_8p_p_fu_13935_weight_18_V_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_18_ce1 = grp_subconv_1x1_4_p_fu_13831_weight_18_V_ce1.read();
    } else {
        weights_96_96_1x1_V_18_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_18_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_12, tmp_1433_fu_33556_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_12, tmp_1462_fu_34325_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_12, tmp_1497_fu_35094_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_12, tmp_1520_fu_35729_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_12, tmp_1554_fu_36498_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_12, tmp_1588_fu_37256_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_12, tmp_1621_fu_38029_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_12, tmp_1655_fu_38787_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_12, tmp_1687_fu_39552_p1.read())))) {
        weights_96_96_1x1_V_18_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_18_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_19_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read())) {
        weights_96_96_1x1_V_19_address0 =  (sc_lv<9>) (tmp_1978_cast_fu_39556_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read())) {
        weights_96_96_1x1_V_19_address0 =  (sc_lv<9>) (tmp_1942_cast_fu_38791_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read())) {
        weights_96_96_1x1_V_19_address0 =  (sc_lv<9>) (tmp_1904_cast_fu_38033_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read())) {
        weights_96_96_1x1_V_19_address0 =  (sc_lv<9>) (tmp_1867_cast_fu_37260_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read())) {
        weights_96_96_1x1_V_19_address0 =  (sc_lv<9>) (tmp_1829_cast_fu_36502_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read())) {
        weights_96_96_1x1_V_19_address0 =  (sc_lv<9>) (tmp_1791_cast_fu_35733_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read())) {
        weights_96_96_1x1_V_19_address0 =  (sc_lv<9>) (tmp_1764_cast_fu_35098_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read())) {
        weights_96_96_1x1_V_19_address0 =  (sc_lv<9>) (tmp_1725_cast_fu_34329_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read())) {
        weights_96_96_1x1_V_19_address0 =  (sc_lv<9>) (tmp_1692_cast_fu_33560_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_19_address0 = grp_subconv_1x1_8p_p_fu_13935_weight_19_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_19_address0 = grp_subconv_1x1_4_p_fu_13831_weight_19_V_address0.read();
    } else {
        weights_96_96_1x1_V_19_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_19_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_19_address1 = grp_subconv_1x1_8p_p_fu_13935_weight_19_V_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_19_address1 = grp_subconv_1x1_4_p_fu_13831_weight_19_V_address1.read();
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
        weights_96_96_1x1_V_19_ce0 = grp_subconv_1x1_8p_p_fu_13935_weight_19_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_19_ce0 = grp_subconv_1x1_4_p_fu_13831_weight_19_V_ce0.read();
    } else {
        weights_96_96_1x1_V_19_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_19_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_19_ce1 = grp_subconv_1x1_8p_p_fu_13935_weight_19_V_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_19_ce1 = grp_subconv_1x1_4_p_fu_13831_weight_19_V_ce1.read();
    } else {
        weights_96_96_1x1_V_19_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_19_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_13, tmp_1433_fu_33556_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_13, tmp_1462_fu_34325_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_13, tmp_1497_fu_35094_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_13, tmp_1520_fu_35729_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_13, tmp_1554_fu_36498_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_13, tmp_1588_fu_37256_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_13, tmp_1621_fu_38029_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_13, tmp_1655_fu_38787_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_13, tmp_1687_fu_39552_p1.read())))) {
        weights_96_96_1x1_V_19_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_19_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read())) {
        weights_96_96_1x1_V_1_address0 =  (sc_lv<9>) (tmp_1978_cast_fu_39556_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read())) {
        weights_96_96_1x1_V_1_address0 =  (sc_lv<9>) (tmp_1942_cast_fu_38791_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read())) {
        weights_96_96_1x1_V_1_address0 =  (sc_lv<9>) (tmp_1904_cast_fu_38033_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read())) {
        weights_96_96_1x1_V_1_address0 =  (sc_lv<9>) (tmp_1867_cast_fu_37260_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read())) {
        weights_96_96_1x1_V_1_address0 =  (sc_lv<9>) (tmp_1829_cast_fu_36502_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read())) {
        weights_96_96_1x1_V_1_address0 =  (sc_lv<9>) (tmp_1791_cast_fu_35733_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read())) {
        weights_96_96_1x1_V_1_address0 =  (sc_lv<9>) (tmp_1764_cast_fu_35098_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read())) {
        weights_96_96_1x1_V_1_address0 =  (sc_lv<9>) (tmp_1725_cast_fu_34329_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read())) {
        weights_96_96_1x1_V_1_address0 =  (sc_lv<9>) (tmp_1692_cast_fu_33560_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_1_address0 = grp_subconv_1x1_8p_p_fu_13935_weight_1_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_1_address0 = grp_subconv_1x1_4_p_fu_13831_weight_1_V_address0.read();
    } else {
        weights_96_96_1x1_V_1_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_1_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_1_address1 = grp_subconv_1x1_8p_p_fu_13935_weight_1_V_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_1_address1 = grp_subconv_1x1_4_p_fu_13831_weight_1_V_address1.read();
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
        weights_96_96_1x1_V_1_ce0 = grp_subconv_1x1_8p_p_fu_13935_weight_1_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_1_ce0 = grp_subconv_1x1_4_p_fu_13831_weight_1_V_ce0.read();
    } else {
        weights_96_96_1x1_V_1_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_1_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_1_ce1 = grp_subconv_1x1_8p_p_fu_13935_weight_1_V_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_1_ce1 = grp_subconv_1x1_4_p_fu_13831_weight_1_V_ce1.read();
    } else {
        weights_96_96_1x1_V_1_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_1_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_1, tmp_1433_fu_33556_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_1, tmp_1462_fu_34325_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_1, tmp_1497_fu_35094_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_1, tmp_1520_fu_35729_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_1, tmp_1554_fu_36498_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_1, tmp_1588_fu_37256_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_1, tmp_1621_fu_38029_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_1, tmp_1655_fu_38787_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_1, tmp_1687_fu_39552_p1.read())))) {
        weights_96_96_1x1_V_1_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_1_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_20_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read())) {
        weights_96_96_1x1_V_20_address0 =  (sc_lv<9>) (tmp_1978_cast_fu_39556_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read())) {
        weights_96_96_1x1_V_20_address0 =  (sc_lv<9>) (tmp_1942_cast_fu_38791_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read())) {
        weights_96_96_1x1_V_20_address0 =  (sc_lv<9>) (tmp_1904_cast_fu_38033_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read())) {
        weights_96_96_1x1_V_20_address0 =  (sc_lv<9>) (tmp_1867_cast_fu_37260_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read())) {
        weights_96_96_1x1_V_20_address0 =  (sc_lv<9>) (tmp_1829_cast_fu_36502_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read())) {
        weights_96_96_1x1_V_20_address0 =  (sc_lv<9>) (tmp_1791_cast_fu_35733_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read())) {
        weights_96_96_1x1_V_20_address0 =  (sc_lv<9>) (tmp_1764_cast_fu_35098_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read())) {
        weights_96_96_1x1_V_20_address0 =  (sc_lv<9>) (tmp_1725_cast_fu_34329_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read())) {
        weights_96_96_1x1_V_20_address0 =  (sc_lv<9>) (tmp_1692_cast_fu_33560_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_20_address0 = grp_subconv_1x1_8p_p_fu_13935_weight_20_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_20_address0 = grp_subconv_1x1_4_p_fu_13831_weight_20_V_address0.read();
    } else {
        weights_96_96_1x1_V_20_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_20_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_20_address1 = grp_subconv_1x1_8p_p_fu_13935_weight_20_V_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_20_address1 = grp_subconv_1x1_4_p_fu_13831_weight_20_V_address1.read();
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
        weights_96_96_1x1_V_20_ce0 = grp_subconv_1x1_8p_p_fu_13935_weight_20_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_20_ce0 = grp_subconv_1x1_4_p_fu_13831_weight_20_V_ce0.read();
    } else {
        weights_96_96_1x1_V_20_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_20_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_20_ce1 = grp_subconv_1x1_8p_p_fu_13935_weight_20_V_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_20_ce1 = grp_subconv_1x1_4_p_fu_13831_weight_20_V_ce1.read();
    } else {
        weights_96_96_1x1_V_20_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_20_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_14, tmp_1433_fu_33556_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_14, tmp_1462_fu_34325_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_14, tmp_1497_fu_35094_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_14, tmp_1520_fu_35729_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_14, tmp_1554_fu_36498_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_14, tmp_1588_fu_37256_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_14, tmp_1621_fu_38029_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_14, tmp_1655_fu_38787_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_14, tmp_1687_fu_39552_p1.read())))) {
        weights_96_96_1x1_V_20_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_20_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_21_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read())) {
        weights_96_96_1x1_V_21_address0 =  (sc_lv<9>) (tmp_1978_cast_fu_39556_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read())) {
        weights_96_96_1x1_V_21_address0 =  (sc_lv<9>) (tmp_1942_cast_fu_38791_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read())) {
        weights_96_96_1x1_V_21_address0 =  (sc_lv<9>) (tmp_1904_cast_fu_38033_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read())) {
        weights_96_96_1x1_V_21_address0 =  (sc_lv<9>) (tmp_1867_cast_fu_37260_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read())) {
        weights_96_96_1x1_V_21_address0 =  (sc_lv<9>) (tmp_1829_cast_fu_36502_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read())) {
        weights_96_96_1x1_V_21_address0 =  (sc_lv<9>) (tmp_1791_cast_fu_35733_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read())) {
        weights_96_96_1x1_V_21_address0 =  (sc_lv<9>) (tmp_1764_cast_fu_35098_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read())) {
        weights_96_96_1x1_V_21_address0 =  (sc_lv<9>) (tmp_1725_cast_fu_34329_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read())) {
        weights_96_96_1x1_V_21_address0 =  (sc_lv<9>) (tmp_1692_cast_fu_33560_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_21_address0 = grp_subconv_1x1_8p_p_fu_13935_weight_21_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_21_address0 = grp_subconv_1x1_4_p_fu_13831_weight_21_V_address0.read();
    } else {
        weights_96_96_1x1_V_21_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_21_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_21_address1 = grp_subconv_1x1_8p_p_fu_13935_weight_21_V_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_21_address1 = grp_subconv_1x1_4_p_fu_13831_weight_21_V_address1.read();
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
        weights_96_96_1x1_V_21_ce0 = grp_subconv_1x1_8p_p_fu_13935_weight_21_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_21_ce0 = grp_subconv_1x1_4_p_fu_13831_weight_21_V_ce0.read();
    } else {
        weights_96_96_1x1_V_21_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_21_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_21_ce1 = grp_subconv_1x1_8p_p_fu_13935_weight_21_V_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_21_ce1 = grp_subconv_1x1_4_p_fu_13831_weight_21_V_ce1.read();
    } else {
        weights_96_96_1x1_V_21_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_21_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_15, tmp_1433_fu_33556_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_15, tmp_1462_fu_34325_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_15, tmp_1497_fu_35094_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_15, tmp_1520_fu_35729_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_15, tmp_1554_fu_36498_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_15, tmp_1588_fu_37256_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_15, tmp_1621_fu_38029_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_15, tmp_1655_fu_38787_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_15, tmp_1687_fu_39552_p1.read())))) {
        weights_96_96_1x1_V_21_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_21_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_22_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read())) {
        weights_96_96_1x1_V_22_address0 =  (sc_lv<9>) (tmp_1978_cast_fu_39556_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read())) {
        weights_96_96_1x1_V_22_address0 =  (sc_lv<9>) (tmp_1942_cast_fu_38791_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read())) {
        weights_96_96_1x1_V_22_address0 =  (sc_lv<9>) (tmp_1904_cast_fu_38033_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read())) {
        weights_96_96_1x1_V_22_address0 =  (sc_lv<9>) (tmp_1867_cast_fu_37260_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read())) {
        weights_96_96_1x1_V_22_address0 =  (sc_lv<9>) (tmp_1829_cast_fu_36502_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read())) {
        weights_96_96_1x1_V_22_address0 =  (sc_lv<9>) (tmp_1791_cast_fu_35733_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read())) {
        weights_96_96_1x1_V_22_address0 =  (sc_lv<9>) (tmp_1764_cast_fu_35098_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read())) {
        weights_96_96_1x1_V_22_address0 =  (sc_lv<9>) (tmp_1725_cast_fu_34329_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read())) {
        weights_96_96_1x1_V_22_address0 =  (sc_lv<9>) (tmp_1692_cast_fu_33560_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_22_address0 = grp_subconv_1x1_8p_p_fu_13935_weight_22_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_22_address0 = grp_subconv_1x1_4_p_fu_13831_weight_22_V_address0.read();
    } else {
        weights_96_96_1x1_V_22_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_22_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_22_address1 = grp_subconv_1x1_8p_p_fu_13935_weight_22_V_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_22_address1 = grp_subconv_1x1_4_p_fu_13831_weight_22_V_address1.read();
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
        weights_96_96_1x1_V_22_ce0 = grp_subconv_1x1_8p_p_fu_13935_weight_22_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_22_ce0 = grp_subconv_1x1_4_p_fu_13831_weight_22_V_ce0.read();
    } else {
        weights_96_96_1x1_V_22_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_22_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_22_ce1 = grp_subconv_1x1_8p_p_fu_13935_weight_22_V_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_22_ce1 = grp_subconv_1x1_4_p_fu_13831_weight_22_V_ce1.read();
    } else {
        weights_96_96_1x1_V_22_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_22_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_16, tmp_1433_fu_33556_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_16, tmp_1462_fu_34325_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_16, tmp_1497_fu_35094_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_16, tmp_1520_fu_35729_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_16, tmp_1554_fu_36498_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_16, tmp_1588_fu_37256_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_16, tmp_1621_fu_38029_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_16, tmp_1655_fu_38787_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_16, tmp_1687_fu_39552_p1.read())))) {
        weights_96_96_1x1_V_22_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_22_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_23_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read())) {
        weights_96_96_1x1_V_23_address0 =  (sc_lv<9>) (tmp_1978_cast_fu_39556_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read())) {
        weights_96_96_1x1_V_23_address0 =  (sc_lv<9>) (tmp_1942_cast_fu_38791_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read())) {
        weights_96_96_1x1_V_23_address0 =  (sc_lv<9>) (tmp_1904_cast_fu_38033_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read())) {
        weights_96_96_1x1_V_23_address0 =  (sc_lv<9>) (tmp_1867_cast_fu_37260_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read())) {
        weights_96_96_1x1_V_23_address0 =  (sc_lv<9>) (tmp_1829_cast_fu_36502_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read())) {
        weights_96_96_1x1_V_23_address0 =  (sc_lv<9>) (tmp_1791_cast_fu_35733_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read())) {
        weights_96_96_1x1_V_23_address0 =  (sc_lv<9>) (tmp_1764_cast_fu_35098_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read())) {
        weights_96_96_1x1_V_23_address0 =  (sc_lv<9>) (tmp_1725_cast_fu_34329_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read())) {
        weights_96_96_1x1_V_23_address0 =  (sc_lv<9>) (tmp_1692_cast_fu_33560_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_23_address0 = grp_subconv_1x1_8p_p_fu_13935_weight_23_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_23_address0 = grp_subconv_1x1_4_p_fu_13831_weight_23_V_address0.read();
    } else {
        weights_96_96_1x1_V_23_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_23_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_23_address1 = grp_subconv_1x1_8p_p_fu_13935_weight_23_V_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_23_address1 = grp_subconv_1x1_4_p_fu_13831_weight_23_V_address1.read();
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
        weights_96_96_1x1_V_23_ce0 = grp_subconv_1x1_8p_p_fu_13935_weight_23_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_23_ce0 = grp_subconv_1x1_4_p_fu_13831_weight_23_V_ce0.read();
    } else {
        weights_96_96_1x1_V_23_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_23_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_23_ce1 = grp_subconv_1x1_8p_p_fu_13935_weight_23_V_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_23_ce1 = grp_subconv_1x1_4_p_fu_13831_weight_23_V_ce1.read();
    } else {
        weights_96_96_1x1_V_23_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_23_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_0, tmp_1433_fu_33556_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_1, tmp_1433_fu_33556_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_2, tmp_1433_fu_33556_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_3, tmp_1433_fu_33556_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_4, tmp_1433_fu_33556_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_5, tmp_1433_fu_33556_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_6, tmp_1433_fu_33556_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_7, tmp_1433_fu_33556_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_8, tmp_1433_fu_33556_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_9, tmp_1433_fu_33556_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_A, tmp_1433_fu_33556_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_B, tmp_1433_fu_33556_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_C, tmp_1433_fu_33556_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_D, tmp_1433_fu_33556_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_E, tmp_1433_fu_33556_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_F, tmp_1433_fu_33556_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_10, tmp_1433_fu_33556_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_11, tmp_1433_fu_33556_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_12, tmp_1433_fu_33556_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_13, tmp_1433_fu_33556_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_14, tmp_1433_fu_33556_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_15, tmp_1433_fu_33556_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_16, tmp_1433_fu_33556_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_0, tmp_1462_fu_34325_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_1, tmp_1462_fu_34325_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_2, tmp_1462_fu_34325_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_3, tmp_1462_fu_34325_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_4, tmp_1462_fu_34325_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_5, tmp_1462_fu_34325_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_6, tmp_1462_fu_34325_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_7, tmp_1462_fu_34325_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_8, tmp_1462_fu_34325_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_9, tmp_1462_fu_34325_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_A, tmp_1462_fu_34325_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_B, tmp_1462_fu_34325_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_C, tmp_1462_fu_34325_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_D, tmp_1462_fu_34325_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_E, tmp_1462_fu_34325_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_F, tmp_1462_fu_34325_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_10, tmp_1462_fu_34325_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_11, tmp_1462_fu_34325_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_12, tmp_1462_fu_34325_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_13, tmp_1462_fu_34325_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_14, tmp_1462_fu_34325_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_15, tmp_1462_fu_34325_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_16, tmp_1462_fu_34325_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_0, tmp_1497_fu_35094_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_1, tmp_1497_fu_35094_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_2, tmp_1497_fu_35094_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_3, tmp_1497_fu_35094_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_4, tmp_1497_fu_35094_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_5, tmp_1497_fu_35094_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_6, tmp_1497_fu_35094_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_7, tmp_1497_fu_35094_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_8, tmp_1497_fu_35094_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_9, tmp_1497_fu_35094_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_A, tmp_1497_fu_35094_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_B, tmp_1497_fu_35094_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_C, tmp_1497_fu_35094_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_D, tmp_1497_fu_35094_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_E, tmp_1497_fu_35094_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_F, tmp_1497_fu_35094_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_10, tmp_1497_fu_35094_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_11, tmp_1497_fu_35094_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_12, tmp_1497_fu_35094_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_13, tmp_1497_fu_35094_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_14, tmp_1497_fu_35094_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_15, tmp_1497_fu_35094_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_16, tmp_1497_fu_35094_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_0, tmp_1520_fu_35729_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_1, tmp_1520_fu_35729_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_2, tmp_1520_fu_35729_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_3, tmp_1520_fu_35729_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_4, tmp_1520_fu_35729_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_5, tmp_1520_fu_35729_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_6, tmp_1520_fu_35729_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_7, tmp_1520_fu_35729_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_8, tmp_1520_fu_35729_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_9, tmp_1520_fu_35729_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_A, tmp_1520_fu_35729_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_B, tmp_1520_fu_35729_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_C, tmp_1520_fu_35729_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_D, tmp_1520_fu_35729_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_E, tmp_1520_fu_35729_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_F, tmp_1520_fu_35729_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_10, tmp_1520_fu_35729_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_11, tmp_1520_fu_35729_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_12, tmp_1520_fu_35729_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_13, tmp_1520_fu_35729_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_14, tmp_1520_fu_35729_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_15, tmp_1520_fu_35729_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_16, tmp_1520_fu_35729_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_0, tmp_1554_fu_36498_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_1, tmp_1554_fu_36498_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_2, tmp_1554_fu_36498_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_3, tmp_1554_fu_36498_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_4, tmp_1554_fu_36498_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_5, tmp_1554_fu_36498_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_6, tmp_1554_fu_36498_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_7, tmp_1554_fu_36498_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_8, tmp_1554_fu_36498_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_9, tmp_1554_fu_36498_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_A, tmp_1554_fu_36498_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_B, tmp_1554_fu_36498_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_C, tmp_1554_fu_36498_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_D, tmp_1554_fu_36498_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_E, tmp_1554_fu_36498_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_F, tmp_1554_fu_36498_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_10, tmp_1554_fu_36498_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_11, tmp_1554_fu_36498_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_12, tmp_1554_fu_36498_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_13, tmp_1554_fu_36498_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_14, tmp_1554_fu_36498_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_15, tmp_1554_fu_36498_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_16, tmp_1554_fu_36498_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_0, tmp_1588_fu_37256_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_1, tmp_1588_fu_37256_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_2, tmp_1588_fu_37256_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_3, tmp_1588_fu_37256_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_4, tmp_1588_fu_37256_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_5, tmp_1588_fu_37256_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_6, tmp_1588_fu_37256_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_7, tmp_1588_fu_37256_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_8, tmp_1588_fu_37256_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_9, tmp_1588_fu_37256_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_A, tmp_1588_fu_37256_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_B, tmp_1588_fu_37256_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_C, tmp_1588_fu_37256_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_D, tmp_1588_fu_37256_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_E, tmp_1588_fu_37256_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_F, tmp_1588_fu_37256_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_10, tmp_1588_fu_37256_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_11, tmp_1588_fu_37256_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_12, tmp_1588_fu_37256_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_13, tmp_1588_fu_37256_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_14, tmp_1588_fu_37256_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_15, tmp_1588_fu_37256_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_16, tmp_1588_fu_37256_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_0, tmp_1621_fu_38029_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_1, tmp_1621_fu_38029_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_2, tmp_1621_fu_38029_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_3, tmp_1621_fu_38029_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_4, tmp_1621_fu_38029_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_5, tmp_1621_fu_38029_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_6, tmp_1621_fu_38029_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_7, tmp_1621_fu_38029_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_8, tmp_1621_fu_38029_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_9, tmp_1621_fu_38029_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_A, tmp_1621_fu_38029_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_B, tmp_1621_fu_38029_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_C, tmp_1621_fu_38029_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_D, tmp_1621_fu_38029_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_E, tmp_1621_fu_38029_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_F, tmp_1621_fu_38029_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_10, tmp_1621_fu_38029_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_11, tmp_1621_fu_38029_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_12, tmp_1621_fu_38029_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_13, tmp_1621_fu_38029_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_14, tmp_1621_fu_38029_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_15, tmp_1621_fu_38029_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_16, tmp_1621_fu_38029_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_0, tmp_1655_fu_38787_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_1, tmp_1655_fu_38787_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_2, tmp_1655_fu_38787_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_3, tmp_1655_fu_38787_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_4, tmp_1655_fu_38787_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_5, tmp_1655_fu_38787_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_6, tmp_1655_fu_38787_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_7, tmp_1655_fu_38787_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_8, tmp_1655_fu_38787_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_9, tmp_1655_fu_38787_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_A, tmp_1655_fu_38787_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_B, tmp_1655_fu_38787_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_C, tmp_1655_fu_38787_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_D, tmp_1655_fu_38787_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_E, tmp_1655_fu_38787_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_F, tmp_1655_fu_38787_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_10, tmp_1655_fu_38787_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_11, tmp_1655_fu_38787_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_12, tmp_1655_fu_38787_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_13, tmp_1655_fu_38787_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_14, tmp_1655_fu_38787_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_15, tmp_1655_fu_38787_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_16, tmp_1655_fu_38787_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_0, tmp_1687_fu_39552_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_1, tmp_1687_fu_39552_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_2, tmp_1687_fu_39552_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_3, tmp_1687_fu_39552_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_4, tmp_1687_fu_39552_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_5, tmp_1687_fu_39552_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_6, tmp_1687_fu_39552_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_7, tmp_1687_fu_39552_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_8, tmp_1687_fu_39552_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_9, tmp_1687_fu_39552_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_A, tmp_1687_fu_39552_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_B, tmp_1687_fu_39552_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_C, tmp_1687_fu_39552_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_D, tmp_1687_fu_39552_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_E, tmp_1687_fu_39552_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_F, tmp_1687_fu_39552_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_10, tmp_1687_fu_39552_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_11, tmp_1687_fu_39552_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_12, tmp_1687_fu_39552_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_13, tmp_1687_fu_39552_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_14, tmp_1687_fu_39552_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_15, tmp_1687_fu_39552_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_16, tmp_1687_fu_39552_p1.read())))) {
        weights_96_96_1x1_V_23_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_23_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read())) {
        weights_96_96_1x1_V_2_address0 =  (sc_lv<9>) (tmp_1978_cast_fu_39556_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read())) {
        weights_96_96_1x1_V_2_address0 =  (sc_lv<9>) (tmp_1942_cast_fu_38791_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read())) {
        weights_96_96_1x1_V_2_address0 =  (sc_lv<9>) (tmp_1904_cast_fu_38033_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read())) {
        weights_96_96_1x1_V_2_address0 =  (sc_lv<9>) (tmp_1867_cast_fu_37260_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read())) {
        weights_96_96_1x1_V_2_address0 =  (sc_lv<9>) (tmp_1829_cast_fu_36502_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read())) {
        weights_96_96_1x1_V_2_address0 =  (sc_lv<9>) (tmp_1791_cast_fu_35733_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read())) {
        weights_96_96_1x1_V_2_address0 =  (sc_lv<9>) (tmp_1764_cast_fu_35098_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read())) {
        weights_96_96_1x1_V_2_address0 =  (sc_lv<9>) (tmp_1725_cast_fu_34329_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read())) {
        weights_96_96_1x1_V_2_address0 =  (sc_lv<9>) (tmp_1692_cast_fu_33560_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_2_address0 = grp_subconv_1x1_8p_p_fu_13935_weight_2_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_2_address0 = grp_subconv_1x1_4_p_fu_13831_weight_2_V_address0.read();
    } else {
        weights_96_96_1x1_V_2_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_2_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_2_address1 = grp_subconv_1x1_8p_p_fu_13935_weight_2_V_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_2_address1 = grp_subconv_1x1_4_p_fu_13831_weight_2_V_address1.read();
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
        weights_96_96_1x1_V_2_ce0 = grp_subconv_1x1_8p_p_fu_13935_weight_2_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_2_ce0 = grp_subconv_1x1_4_p_fu_13831_weight_2_V_ce0.read();
    } else {
        weights_96_96_1x1_V_2_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_2_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_2_ce1 = grp_subconv_1x1_8p_p_fu_13935_weight_2_V_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_2_ce1 = grp_subconv_1x1_4_p_fu_13831_weight_2_V_ce1.read();
    } else {
        weights_96_96_1x1_V_2_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_2_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_2, tmp_1433_fu_33556_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_2, tmp_1462_fu_34325_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_2, tmp_1497_fu_35094_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_2, tmp_1520_fu_35729_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_2, tmp_1554_fu_36498_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_2, tmp_1588_fu_37256_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_2, tmp_1621_fu_38029_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_2, tmp_1655_fu_38787_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_2, tmp_1687_fu_39552_p1.read())))) {
        weights_96_96_1x1_V_2_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_2_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read())) {
        weights_96_96_1x1_V_3_address0 =  (sc_lv<9>) (tmp_1978_cast_fu_39556_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read())) {
        weights_96_96_1x1_V_3_address0 =  (sc_lv<9>) (tmp_1942_cast_fu_38791_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read())) {
        weights_96_96_1x1_V_3_address0 =  (sc_lv<9>) (tmp_1904_cast_fu_38033_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read())) {
        weights_96_96_1x1_V_3_address0 =  (sc_lv<9>) (tmp_1867_cast_fu_37260_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read())) {
        weights_96_96_1x1_V_3_address0 =  (sc_lv<9>) (tmp_1829_cast_fu_36502_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read())) {
        weights_96_96_1x1_V_3_address0 =  (sc_lv<9>) (tmp_1791_cast_fu_35733_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read())) {
        weights_96_96_1x1_V_3_address0 =  (sc_lv<9>) (tmp_1764_cast_fu_35098_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read())) {
        weights_96_96_1x1_V_3_address0 =  (sc_lv<9>) (tmp_1725_cast_fu_34329_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read())) {
        weights_96_96_1x1_V_3_address0 =  (sc_lv<9>) (tmp_1692_cast_fu_33560_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_3_address0 = grp_subconv_1x1_8p_p_fu_13935_weight_3_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_3_address0 = grp_subconv_1x1_4_p_fu_13831_weight_3_V_address0.read();
    } else {
        weights_96_96_1x1_V_3_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_3_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_3_address1 = grp_subconv_1x1_8p_p_fu_13935_weight_3_V_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_3_address1 = grp_subconv_1x1_4_p_fu_13831_weight_3_V_address1.read();
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
        weights_96_96_1x1_V_3_ce0 = grp_subconv_1x1_8p_p_fu_13935_weight_3_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_3_ce0 = grp_subconv_1x1_4_p_fu_13831_weight_3_V_ce0.read();
    } else {
        weights_96_96_1x1_V_3_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_3_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_3_ce1 = grp_subconv_1x1_8p_p_fu_13935_weight_3_V_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_3_ce1 = grp_subconv_1x1_4_p_fu_13831_weight_3_V_ce1.read();
    } else {
        weights_96_96_1x1_V_3_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_3_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_3, tmp_1433_fu_33556_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_3, tmp_1462_fu_34325_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_3, tmp_1497_fu_35094_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_3, tmp_1520_fu_35729_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_3, tmp_1554_fu_36498_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_3, tmp_1588_fu_37256_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_3, tmp_1621_fu_38029_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_3, tmp_1655_fu_38787_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_3, tmp_1687_fu_39552_p1.read())))) {
        weights_96_96_1x1_V_3_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_3_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read())) {
        weights_96_96_1x1_V_4_address0 =  (sc_lv<9>) (tmp_1978_cast_fu_39556_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read())) {
        weights_96_96_1x1_V_4_address0 =  (sc_lv<9>) (tmp_1942_cast_fu_38791_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read())) {
        weights_96_96_1x1_V_4_address0 =  (sc_lv<9>) (tmp_1904_cast_fu_38033_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read())) {
        weights_96_96_1x1_V_4_address0 =  (sc_lv<9>) (tmp_1867_cast_fu_37260_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read())) {
        weights_96_96_1x1_V_4_address0 =  (sc_lv<9>) (tmp_1829_cast_fu_36502_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read())) {
        weights_96_96_1x1_V_4_address0 =  (sc_lv<9>) (tmp_1791_cast_fu_35733_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read())) {
        weights_96_96_1x1_V_4_address0 =  (sc_lv<9>) (tmp_1764_cast_fu_35098_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read())) {
        weights_96_96_1x1_V_4_address0 =  (sc_lv<9>) (tmp_1725_cast_fu_34329_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read())) {
        weights_96_96_1x1_V_4_address0 =  (sc_lv<9>) (tmp_1692_cast_fu_33560_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_4_address0 = grp_subconv_1x1_8p_p_fu_13935_weight_4_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_4_address0 = grp_subconv_1x1_4_p_fu_13831_weight_4_V_address0.read();
    } else {
        weights_96_96_1x1_V_4_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_4_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_4_address1 = grp_subconv_1x1_8p_p_fu_13935_weight_4_V_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_4_address1 = grp_subconv_1x1_4_p_fu_13831_weight_4_V_address1.read();
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
        weights_96_96_1x1_V_4_ce0 = grp_subconv_1x1_8p_p_fu_13935_weight_4_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_4_ce0 = grp_subconv_1x1_4_p_fu_13831_weight_4_V_ce0.read();
    } else {
        weights_96_96_1x1_V_4_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_4_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_4_ce1 = grp_subconv_1x1_8p_p_fu_13935_weight_4_V_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_4_ce1 = grp_subconv_1x1_4_p_fu_13831_weight_4_V_ce1.read();
    } else {
        weights_96_96_1x1_V_4_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_4_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_4, tmp_1433_fu_33556_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_4, tmp_1462_fu_34325_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_4, tmp_1497_fu_35094_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_4, tmp_1520_fu_35729_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_4, tmp_1554_fu_36498_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_4, tmp_1588_fu_37256_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_4, tmp_1621_fu_38029_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_4, tmp_1655_fu_38787_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_4, tmp_1687_fu_39552_p1.read())))) {
        weights_96_96_1x1_V_4_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_4_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read())) {
        weights_96_96_1x1_V_5_address0 =  (sc_lv<9>) (tmp_1978_cast_fu_39556_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read())) {
        weights_96_96_1x1_V_5_address0 =  (sc_lv<9>) (tmp_1942_cast_fu_38791_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read())) {
        weights_96_96_1x1_V_5_address0 =  (sc_lv<9>) (tmp_1904_cast_fu_38033_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read())) {
        weights_96_96_1x1_V_5_address0 =  (sc_lv<9>) (tmp_1867_cast_fu_37260_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read())) {
        weights_96_96_1x1_V_5_address0 =  (sc_lv<9>) (tmp_1829_cast_fu_36502_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read())) {
        weights_96_96_1x1_V_5_address0 =  (sc_lv<9>) (tmp_1791_cast_fu_35733_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read())) {
        weights_96_96_1x1_V_5_address0 =  (sc_lv<9>) (tmp_1764_cast_fu_35098_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read())) {
        weights_96_96_1x1_V_5_address0 =  (sc_lv<9>) (tmp_1725_cast_fu_34329_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read())) {
        weights_96_96_1x1_V_5_address0 =  (sc_lv<9>) (tmp_1692_cast_fu_33560_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_5_address0 = grp_subconv_1x1_8p_p_fu_13935_weight_5_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_5_address0 = grp_subconv_1x1_4_p_fu_13831_weight_5_V_address0.read();
    } else {
        weights_96_96_1x1_V_5_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_5_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_5_address1 = grp_subconv_1x1_8p_p_fu_13935_weight_5_V_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_5_address1 = grp_subconv_1x1_4_p_fu_13831_weight_5_V_address1.read();
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
        weights_96_96_1x1_V_5_ce0 = grp_subconv_1x1_8p_p_fu_13935_weight_5_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_5_ce0 = grp_subconv_1x1_4_p_fu_13831_weight_5_V_ce0.read();
    } else {
        weights_96_96_1x1_V_5_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_5_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_5_ce1 = grp_subconv_1x1_8p_p_fu_13935_weight_5_V_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_5_ce1 = grp_subconv_1x1_4_p_fu_13831_weight_5_V_ce1.read();
    } else {
        weights_96_96_1x1_V_5_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_5_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_5, tmp_1433_fu_33556_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_5, tmp_1462_fu_34325_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_5, tmp_1497_fu_35094_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_5, tmp_1520_fu_35729_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_5, tmp_1554_fu_36498_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_5, tmp_1588_fu_37256_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_5, tmp_1621_fu_38029_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_5, tmp_1655_fu_38787_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_5, tmp_1687_fu_39552_p1.read())))) {
        weights_96_96_1x1_V_5_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_5_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read())) {
        weights_96_96_1x1_V_6_address0 =  (sc_lv<9>) (tmp_1978_cast_fu_39556_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read())) {
        weights_96_96_1x1_V_6_address0 =  (sc_lv<9>) (tmp_1942_cast_fu_38791_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read())) {
        weights_96_96_1x1_V_6_address0 =  (sc_lv<9>) (tmp_1904_cast_fu_38033_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read())) {
        weights_96_96_1x1_V_6_address0 =  (sc_lv<9>) (tmp_1867_cast_fu_37260_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read())) {
        weights_96_96_1x1_V_6_address0 =  (sc_lv<9>) (tmp_1829_cast_fu_36502_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read())) {
        weights_96_96_1x1_V_6_address0 =  (sc_lv<9>) (tmp_1791_cast_fu_35733_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read())) {
        weights_96_96_1x1_V_6_address0 =  (sc_lv<9>) (tmp_1764_cast_fu_35098_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read())) {
        weights_96_96_1x1_V_6_address0 =  (sc_lv<9>) (tmp_1725_cast_fu_34329_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read())) {
        weights_96_96_1x1_V_6_address0 =  (sc_lv<9>) (tmp_1692_cast_fu_33560_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_6_address0 = grp_subconv_1x1_8p_p_fu_13935_weight_6_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_6_address0 = grp_subconv_1x1_4_p_fu_13831_weight_6_V_address0.read();
    } else {
        weights_96_96_1x1_V_6_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_6_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_6_address1 = grp_subconv_1x1_8p_p_fu_13935_weight_6_V_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_6_address1 = grp_subconv_1x1_4_p_fu_13831_weight_6_V_address1.read();
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
        weights_96_96_1x1_V_6_ce0 = grp_subconv_1x1_8p_p_fu_13935_weight_6_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_6_ce0 = grp_subconv_1x1_4_p_fu_13831_weight_6_V_ce0.read();
    } else {
        weights_96_96_1x1_V_6_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_6_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_6_ce1 = grp_subconv_1x1_8p_p_fu_13935_weight_6_V_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_6_ce1 = grp_subconv_1x1_4_p_fu_13831_weight_6_V_ce1.read();
    } else {
        weights_96_96_1x1_V_6_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_6_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_6, tmp_1433_fu_33556_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_6, tmp_1462_fu_34325_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_6, tmp_1497_fu_35094_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_6, tmp_1520_fu_35729_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_6, tmp_1554_fu_36498_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_6, tmp_1588_fu_37256_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_6, tmp_1621_fu_38029_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_6, tmp_1655_fu_38787_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_6, tmp_1687_fu_39552_p1.read())))) {
        weights_96_96_1x1_V_6_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_6_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_7_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read())) {
        weights_96_96_1x1_V_7_address0 =  (sc_lv<9>) (tmp_1978_cast_fu_39556_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read())) {
        weights_96_96_1x1_V_7_address0 =  (sc_lv<9>) (tmp_1942_cast_fu_38791_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read())) {
        weights_96_96_1x1_V_7_address0 =  (sc_lv<9>) (tmp_1904_cast_fu_38033_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read())) {
        weights_96_96_1x1_V_7_address0 =  (sc_lv<9>) (tmp_1867_cast_fu_37260_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read())) {
        weights_96_96_1x1_V_7_address0 =  (sc_lv<9>) (tmp_1829_cast_fu_36502_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read())) {
        weights_96_96_1x1_V_7_address0 =  (sc_lv<9>) (tmp_1791_cast_fu_35733_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read())) {
        weights_96_96_1x1_V_7_address0 =  (sc_lv<9>) (tmp_1764_cast_fu_35098_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read())) {
        weights_96_96_1x1_V_7_address0 =  (sc_lv<9>) (tmp_1725_cast_fu_34329_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read())) {
        weights_96_96_1x1_V_7_address0 =  (sc_lv<9>) (tmp_1692_cast_fu_33560_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_7_address0 = grp_subconv_1x1_8p_p_fu_13935_weight_7_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_7_address0 = grp_subconv_1x1_4_p_fu_13831_weight_7_V_address0.read();
    } else {
        weights_96_96_1x1_V_7_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_7_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_7_address1 = grp_subconv_1x1_8p_p_fu_13935_weight_7_V_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_7_address1 = grp_subconv_1x1_4_p_fu_13831_weight_7_V_address1.read();
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
        weights_96_96_1x1_V_7_ce0 = grp_subconv_1x1_8p_p_fu_13935_weight_7_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_7_ce0 = grp_subconv_1x1_4_p_fu_13831_weight_7_V_ce0.read();
    } else {
        weights_96_96_1x1_V_7_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_7_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_7_ce1 = grp_subconv_1x1_8p_p_fu_13935_weight_7_V_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_7_ce1 = grp_subconv_1x1_4_p_fu_13831_weight_7_V_ce1.read();
    } else {
        weights_96_96_1x1_V_7_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_7_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_7, tmp_1433_fu_33556_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_7, tmp_1462_fu_34325_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_7, tmp_1497_fu_35094_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_7, tmp_1520_fu_35729_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_7, tmp_1554_fu_36498_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_7, tmp_1588_fu_37256_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_7, tmp_1621_fu_38029_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_7, tmp_1655_fu_38787_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_7, tmp_1687_fu_39552_p1.read())))) {
        weights_96_96_1x1_V_7_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_7_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_8_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read())) {
        weights_96_96_1x1_V_8_address0 =  (sc_lv<9>) (tmp_1978_cast_fu_39556_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read())) {
        weights_96_96_1x1_V_8_address0 =  (sc_lv<9>) (tmp_1942_cast_fu_38791_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read())) {
        weights_96_96_1x1_V_8_address0 =  (sc_lv<9>) (tmp_1904_cast_fu_38033_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read())) {
        weights_96_96_1x1_V_8_address0 =  (sc_lv<9>) (tmp_1867_cast_fu_37260_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read())) {
        weights_96_96_1x1_V_8_address0 =  (sc_lv<9>) (tmp_1829_cast_fu_36502_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read())) {
        weights_96_96_1x1_V_8_address0 =  (sc_lv<9>) (tmp_1791_cast_fu_35733_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read())) {
        weights_96_96_1x1_V_8_address0 =  (sc_lv<9>) (tmp_1764_cast_fu_35098_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read())) {
        weights_96_96_1x1_V_8_address0 =  (sc_lv<9>) (tmp_1725_cast_fu_34329_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read())) {
        weights_96_96_1x1_V_8_address0 =  (sc_lv<9>) (tmp_1692_cast_fu_33560_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_8_address0 = grp_subconv_1x1_8p_p_fu_13935_weight_8_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_8_address0 = grp_subconv_1x1_4_p_fu_13831_weight_8_V_address0.read();
    } else {
        weights_96_96_1x1_V_8_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_8_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_8_address1 = grp_subconv_1x1_8p_p_fu_13935_weight_8_V_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_8_address1 = grp_subconv_1x1_4_p_fu_13831_weight_8_V_address1.read();
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
        weights_96_96_1x1_V_8_ce0 = grp_subconv_1x1_8p_p_fu_13935_weight_8_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_8_ce0 = grp_subconv_1x1_4_p_fu_13831_weight_8_V_ce0.read();
    } else {
        weights_96_96_1x1_V_8_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_8_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_8_ce1 = grp_subconv_1x1_8p_p_fu_13935_weight_8_V_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_8_ce1 = grp_subconv_1x1_4_p_fu_13831_weight_8_V_ce1.read();
    } else {
        weights_96_96_1x1_V_8_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_8_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_8, tmp_1433_fu_33556_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_8, tmp_1462_fu_34325_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_8, tmp_1497_fu_35094_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_8, tmp_1520_fu_35729_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_8, tmp_1554_fu_36498_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_8, tmp_1588_fu_37256_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_8, tmp_1621_fu_38029_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_8, tmp_1655_fu_38787_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_8, tmp_1687_fu_39552_p1.read())))) {
        weights_96_96_1x1_V_8_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_8_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_9_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read())) {
        weights_96_96_1x1_V_9_address0 =  (sc_lv<9>) (tmp_1978_cast_fu_39556_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read())) {
        weights_96_96_1x1_V_9_address0 =  (sc_lv<9>) (tmp_1942_cast_fu_38791_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read())) {
        weights_96_96_1x1_V_9_address0 =  (sc_lv<9>) (tmp_1904_cast_fu_38033_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read())) {
        weights_96_96_1x1_V_9_address0 =  (sc_lv<9>) (tmp_1867_cast_fu_37260_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read())) {
        weights_96_96_1x1_V_9_address0 =  (sc_lv<9>) (tmp_1829_cast_fu_36502_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read())) {
        weights_96_96_1x1_V_9_address0 =  (sc_lv<9>) (tmp_1791_cast_fu_35733_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read())) {
        weights_96_96_1x1_V_9_address0 =  (sc_lv<9>) (tmp_1764_cast_fu_35098_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read())) {
        weights_96_96_1x1_V_9_address0 =  (sc_lv<9>) (tmp_1725_cast_fu_34329_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read())) {
        weights_96_96_1x1_V_9_address0 =  (sc_lv<9>) (tmp_1692_cast_fu_33560_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_9_address0 = grp_subconv_1x1_8p_p_fu_13935_weight_9_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_9_address0 = grp_subconv_1x1_4_p_fu_13831_weight_9_V_address0.read();
    } else {
        weights_96_96_1x1_V_9_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_9_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_9_address1 = grp_subconv_1x1_8p_p_fu_13935_weight_9_V_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_9_address1 = grp_subconv_1x1_4_p_fu_13831_weight_9_V_address1.read();
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
        weights_96_96_1x1_V_9_ce0 = grp_subconv_1x1_8p_p_fu_13935_weight_9_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_9_ce0 = grp_subconv_1x1_4_p_fu_13831_weight_9_V_ce0.read();
    } else {
        weights_96_96_1x1_V_9_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_9_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_9_ce1 = grp_subconv_1x1_8p_p_fu_13935_weight_9_V_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_9_ce1 = grp_subconv_1x1_4_p_fu_13831_weight_9_V_ce1.read();
    } else {
        weights_96_96_1x1_V_9_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_9_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_9, tmp_1433_fu_33556_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_9, tmp_1462_fu_34325_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_9, tmp_1497_fu_35094_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_9, tmp_1520_fu_35729_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_9, tmp_1554_fu_36498_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_9, tmp_1588_fu_37256_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_9, tmp_1621_fu_38029_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_9, tmp_1655_fu_38787_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_9, tmp_1687_fu_39552_p1.read())))) {
        weights_96_96_1x1_V_9_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_9_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_s_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read())) {
        weights_96_96_1x1_V_s_address0 =  (sc_lv<9>) (tmp_1978_cast_fu_39556_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read())) {
        weights_96_96_1x1_V_s_address0 =  (sc_lv<9>) (tmp_1942_cast_fu_38791_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read())) {
        weights_96_96_1x1_V_s_address0 =  (sc_lv<9>) (tmp_1904_cast_fu_38033_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read())) {
        weights_96_96_1x1_V_s_address0 =  (sc_lv<9>) (tmp_1867_cast_fu_37260_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read())) {
        weights_96_96_1x1_V_s_address0 =  (sc_lv<9>) (tmp_1829_cast_fu_36502_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read())) {
        weights_96_96_1x1_V_s_address0 =  (sc_lv<9>) (tmp_1791_cast_fu_35733_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read())) {
        weights_96_96_1x1_V_s_address0 =  (sc_lv<9>) (tmp_1764_cast_fu_35098_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read())) {
        weights_96_96_1x1_V_s_address0 =  (sc_lv<9>) (tmp_1725_cast_fu_34329_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read())) {
        weights_96_96_1x1_V_s_address0 =  (sc_lv<9>) (tmp_1692_cast_fu_33560_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_s_address0 = grp_subconv_1x1_8p_p_fu_13935_weight_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_s_address0 = grp_subconv_1x1_4_p_fu_13831_weight_0_V_address0.read();
    } else {
        weights_96_96_1x1_V_s_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_s_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_s_address1 = grp_subconv_1x1_8p_p_fu_13935_weight_0_V_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_s_address1 = grp_subconv_1x1_4_p_fu_13831_weight_0_V_address1.read();
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
        weights_96_96_1x1_V_s_ce0 = grp_subconv_1x1_8p_p_fu_13935_weight_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_s_ce0 = grp_subconv_1x1_4_p_fu_13831_weight_0_V_ce0.read();
    } else {
        weights_96_96_1x1_V_s_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_s_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_s_ce1 = grp_subconv_1x1_8p_p_fu_13935_weight_0_V_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_s_ce1 = grp_subconv_1x1_4_p_fu_13831_weight_0_V_ce1.read();
    } else {
        weights_96_96_1x1_V_s_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_s_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_0, tmp_1433_fu_33556_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_0, tmp_1462_fu_34325_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_0, tmp_1497_fu_35094_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_0, tmp_1520_fu_35729_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_0, tmp_1554_fu_36498_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_0, tmp_1588_fu_37256_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_0, tmp_1621_fu_38029_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_0, tmp_1655_fu_38787_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_0, tmp_1687_fu_39552_p1.read())))) {
        weights_96_96_1x1_V_s_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_s_we0 = ap_const_logic_0;
    }
}

}

