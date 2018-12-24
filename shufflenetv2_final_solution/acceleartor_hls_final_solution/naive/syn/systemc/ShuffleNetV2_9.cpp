#include "ShuffleNetV2.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void ShuffleNetV2::thread_tmp_684_fu_8497_p2() {
    tmp_684_fu_8497_p2 = (!tmp_283_cast_fu_8493_p1.read().is_01() || !tmp_666_reg_31341.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_283_cast_fu_8493_p1.read()) + sc_biguint<10>(tmp_666_reg_31341.read()));
}

void ShuffleNetV2::thread_tmp_685_cast1_fu_21300_p1() {
    tmp_685_cast1_fu_21300_p1 = esl_zext<15,4>(w_84_fu_21294_p2.read());
}

void ShuffleNetV2::thread_tmp_685_cast_fu_21304_p1() {
    tmp_685_cast_fu_21304_p1 = esl_zext<14,4>(w_84_fu_21294_p2.read());
}

void ShuffleNetV2::thread_tmp_685_fu_8502_p3() {
    tmp_685_fu_8502_p3 = esl_concat<10,4>(tmp_684_fu_8497_p2.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_686_fu_21675_p2() {
    tmp_686_fu_21675_p2 = (!p_shl154_cast_fu_21659_p1.read().is_01() || !p_shl155_cast_fu_21671_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl154_cast_fu_21659_p1.read()) - sc_biguint<7>(p_shl155_cast_fu_21671_p1.read()));
}

void ShuffleNetV2::thread_tmp_687_fu_21685_p2() {
    tmp_687_fu_21685_p2 = (!i117_cast1_reg_35374.read().is_01() || !tmp_686_fu_21675_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(i117_cast1_reg_35374.read()) + sc_biguint<7>(tmp_686_fu_21675_p2.read()));
}

void ShuffleNetV2::thread_tmp_688_fu_21722_p1() {
    tmp_688_fu_21722_p1 = esl_zext<64,32>(tmp_917_cast_fu_21719_p1.read());
}

void ShuffleNetV2::thread_tmp_689_fu_21696_p2() {
    tmp_689_fu_21696_p2 = (!tmp48_fu_21690_p2.read().is_01() || !i117_cast_reg_35369.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp48_fu_21690_p2.read()) + sc_biguint<11>(i117_cast_reg_35369.read()));
}

void ShuffleNetV2::thread_tmp_690_cast_cast_fu_15576_p1() {
    tmp_690_cast_cast_fu_15576_p1 = esl_sext<9,8>(tmp_497_fu_15570_p2.read());
}

void ShuffleNetV2::thread_tmp_690_fu_8514_p3() {
    tmp_690_fu_8514_p3 = esl_concat<10,1>(tmp_684_fu_8497_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_691_cast_fu_21701_p1() {
    tmp_691_cast_fu_21701_p1 = esl_zext<33,11>(tmp_689_reg_35400.read());
}

void ShuffleNetV2::thread_tmp_691_fu_8526_p2() {
    tmp_691_fu_8526_p2 = (!p_shl317_cast_fu_8510_p1.read().is_01() || !p_shl318_cast_fu_8522_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl317_cast_fu_8510_p1.read()) + sc_biguint<15>(p_shl318_cast_fu_8522_p1.read()));
}

void ShuffleNetV2::thread_tmp_692_fu_21460_p2() {
    tmp_692_fu_21460_p2 = (!p_shl156_cast_fu_21444_p1.read().is_01() || !p_shl157_cast_fu_21456_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl156_cast_fu_21444_p1.read()) - sc_biguint<7>(p_shl157_cast_fu_21456_p1.read()));
}

void ShuffleNetV2::thread_tmp_693_fu_8832_p2() {
    tmp_693_fu_8832_p2 = (!tmp_482_cast_reg_30621.read().is_01() || !ap_const_lv33_D8.is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_482_cast_reg_30621.read()) + sc_biguint<33>(ap_const_lv33_D8));
}

void ShuffleNetV2::thread_tmp_694_cast_cast_fu_16094_p1() {
    tmp_694_cast_cast_fu_16094_p1 = esl_sext<8,7>(tmp_501_fu_16088_p2.read());
}

void ShuffleNetV2::thread_tmp_694_fu_8837_p1() {
    tmp_694_fu_8837_p1 = esl_sext<64,33>(tmp_693_fu_8832_p2.read());
}

void ShuffleNetV2::thread_tmp_695_cast_fu_16136_p1() {
    tmp_695_cast_fu_16136_p1 = esl_sext<32,7>(tmp_502_reg_33710.read());
}

void ShuffleNetV2::thread_tmp_695_fu_21466_p2() {
    tmp_695_fu_21466_p2 = (!tmp_692_fu_21460_p2.read().is_01() || !tmp_913_cast_reg_35321.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_692_fu_21460_p2.read()) + sc_biguint<7>(tmp_913_cast_reg_35321.read()));
}

void ShuffleNetV2::thread_tmp_696_fu_8847_p3() {
    tmp_696_fu_8847_p3 = esl_concat<5,5>(co36_reg_2737.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_697_fu_21526_p2() {
    tmp_697_fu_21526_p2 = (!p_shl158_cast_fu_21510_p1.read().is_01() || !p_shl159_cast_fu_21522_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl158_cast_fu_21510_p1.read()) - sc_biguint<8>(p_shl159_cast_fu_21522_p1.read()));
}

void ShuffleNetV2::thread_tmp_698_cast_fu_16114_p1() {
    tmp_698_cast_fu_16114_p1 = esl_sext<10,8>(tmp_504_reg_33715.read());
}

void ShuffleNetV2::thread_tmp_698_fu_21542_p2() {
    tmp_698_fu_21542_p2 = (!tmp47_fu_21536_p2.read().is_01() || !co126_cast337_cast_reg_35303.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp47_fu_21536_p2.read()) + sc_biguint<10>(co126_cast337_cast_reg_35303.read()));
}

void ShuffleNetV2::thread_tmp_699_cast1_fu_21759_p1() {
    tmp_699_cast1_fu_21759_p1 = esl_zext<14,2>(w85_reg_4914.read());
}

void ShuffleNetV2::thread_tmp_699_cast_fu_21763_p1() {
    tmp_699_cast_fu_21763_p1 = esl_zext<36,2>(w85_reg_4914.read());
}

void ShuffleNetV2::thread_tmp_699_fu_8859_p3() {
    tmp_699_fu_8859_p3 = esl_concat<5,3>(co36_reg_2737.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_700_fu_22140_p2() {
    tmp_700_fu_22140_p2 = (!p_shl162_cast_fu_22124_p1.read().is_01() || !p_shl163_cast_fu_22136_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl162_cast_fu_22124_p1.read()) - sc_biguint<7>(p_shl163_cast_fu_22136_p1.read()));
}

void ShuffleNetV2::thread_tmp_701_fu_22044_p2() {
    tmp_701_fu_22044_p2 = (!p_shl160_cast_fu_22028_p1.read().is_01() || !p_shl161_cast_fu_22040_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl160_cast_fu_22028_p1.read()) - sc_biguint<7>(p_shl161_cast_fu_22040_p1.read()));
}

void ShuffleNetV2::thread_tmp_702_cast_fu_16204_p1() {
    tmp_702_cast_fu_16204_p1 = esl_zext<7,4>(p_lshr_f8_cast_fu_16194_p4.read());
}

void ShuffleNetV2::thread_tmp_702_fu_22054_p2() {
    tmp_702_fu_22054_p2 = (!i121_cast1_reg_35517.read().is_01() || !tmp_701_fu_22044_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(i121_cast1_reg_35517.read()) + sc_biguint<7>(tmp_701_fu_22044_p2.read()));
}

void ShuffleNetV2::thread_tmp_703_fu_22091_p1() {
    tmp_703_fu_22091_p1 = esl_zext<64,32>(tmp_935_cast_fu_22088_p1.read());
}

void ShuffleNetV2::thread_tmp_704_fu_22065_p2() {
    tmp_704_fu_22065_p2 = (!tmp50_fu_22059_p2.read().is_01() || !i121_cast_reg_35512.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp50_fu_22059_p2.read()) + sc_biguint<11>(i121_cast_reg_35512.read()));
}

void ShuffleNetV2::thread_tmp_705_cast1_fu_22070_p1() {
    tmp_705_cast1_fu_22070_p1 = esl_zext<33,11>(tmp_704_reg_35543.read());
}

void ShuffleNetV2::thread_tmp_705_cast_fu_16532_p1() {
    tmp_705_cast_fu_16532_p1 = esl_sext<32,7>(tmp_518_reg_33818.read());
}

void ShuffleNetV2::thread_tmp_705_fu_8871_p2() {
    tmp_705_fu_8871_p2 = (!p_shl329_cast_fu_8855_p1.read().is_01() || !p_shl330_cast_fu_8867_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl329_cast_fu_8855_p1.read()) - sc_biguint<11>(p_shl330_cast_fu_8867_p1.read()));
}

void ShuffleNetV2::thread_tmp_706_cast_fu_21783_p1() {
    tmp_706_cast_fu_21783_p1 = esl_zext<10,2>(h86_reg_4925.read());
}

void ShuffleNetV2::thread_tmp_706_fu_21779_p1() {
    tmp_706_fu_21779_p1 = esl_zext<64,2>(h86_reg_4925.read());
}

void ShuffleNetV2::thread_tmp_707_fu_22176_p2() {
    tmp_707_fu_22176_p2 = (!tmp_700_reg_35567.read().is_01() || !ci59_cast_fu_22160_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_700_reg_35567.read()) + sc_biguint<7>(ci59_cast_fu_22160_p1.read()));
}

void ShuffleNetV2::thread_tmp_708_cast_fu_22181_p1() {
    tmp_708_cast_fu_22181_p1 = esl_sext<13,7>(tmp_707_fu_22176_p2.read());
}

void ShuffleNetV2::thread_tmp_708_fu_8783_p3() {
    tmp_708_fu_8783_p3 = esl_concat<8,5>(tmp_284_fu_8777_p2.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_709_cast_fu_22185_p1() {
    tmp_709_cast_fu_22185_p1 = esl_zext<18,5>(ci59_reg_4980.read());
}

void ShuffleNetV2::thread_tmp_709_fu_8795_p3() {
    tmp_709_fu_8795_p3 = esl_concat<8,3>(tmp_284_fu_8777_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_710_fu_21827_p2() {
    tmp_710_fu_21827_p2 = (!p_shl166_cast_fu_21811_p1.read().is_01() || !p_shl167_cast_fu_21823_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl166_cast_fu_21811_p1.read()) - sc_biguint<7>(p_shl167_cast_fu_21823_p1.read()));
}

void ShuffleNetV2::thread_tmp_711_fu_21837_p2() {
    tmp_711_fu_21837_p2 = (!tmp_710_fu_21827_p2.read().is_01() || !co129_cast1_reg_35416.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_710_fu_21827_p2.read()) + sc_biguint<7>(co129_cast1_reg_35416.read()));
}

void ShuffleNetV2::thread_tmp_712_fu_8807_p2() {
    tmp_712_fu_8807_p2 = (!p_shl327_cast_fu_8791_p1.read().is_01() || !p_shl328_cast_fu_8803_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl327_cast_fu_8791_p1.read()) - sc_biguint<14>(p_shl328_cast_fu_8803_p1.read()));
}

void ShuffleNetV2::thread_tmp_713_cast1_fu_21856_p1() {
    tmp_713_cast1_fu_21856_p1 = esl_zext<35,32>(tmp_954_cast_fu_21853_p1.read());
}

void ShuffleNetV2::thread_tmp_713_cast_fu_15881_p1() {
    tmp_713_cast_fu_15881_p1 = esl_sext<9,7>(tmp_510_fu_15875_p2.read());
}

void ShuffleNetV2::thread_tmp_713_fu_8813_p1() {
    tmp_713_fu_8813_p1 = esl_sext<33,14>(tmp_712_fu_8807_p2.read());
}

void ShuffleNetV2::thread_tmp_714_cast_fu_15901_p1() {
    tmp_714_cast_fu_15901_p1 = esl_sext<32,7>(tmp_511_reg_33645.read());
}

void ShuffleNetV2::thread_tmp_714_fu_21848_p2() {
    tmp_714_fu_21848_p2 = (!co129_cast_reg_35411.read().is_01() || !tmp49_fu_21842_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(co129_cast_reg_35411.read()) + sc_biguint<10>(tmp49_fu_21842_p2.read()));
}

void ShuffleNetV2::thread_tmp_715_fu_8817_p2() {
    tmp_715_fu_8817_p2 = (!tmp_713_fu_8813_p1.read().is_01() || !tmp_490_cast_reg_30684.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_713_fu_8813_p1.read()) + sc_bigint<33>(tmp_490_cast_reg_30684.read()));
}

void ShuffleNetV2::thread_tmp_716_cast_fu_21898_p1() {
    tmp_716_cast_fu_21898_p1 = esl_zext<13,10>(tmp_714_reg_35479.read());
}

void ShuffleNetV2::thread_tmp_716_fu_8822_p1() {
    tmp_716_fu_8822_p1 = esl_sext<64,33>(tmp_715_fu_8817_p2.read());
}

void ShuffleNetV2::thread_tmp_717_fu_22444_p2() {
    tmp_717_fu_22444_p2 = (!p_shl164_cast_fu_22428_p1.read().is_01() || !p_shl165_cast_fu_22440_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl164_cast_fu_22428_p1.read()) - sc_biguint<7>(p_shl165_cast_fu_22440_p1.read()));
}

void ShuffleNetV2::thread_tmp_718_fu_22454_p2() {
    tmp_718_fu_22454_p2 = (!i123_cast_reg_35625.read().is_01() || !tmp_717_fu_22444_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(i123_cast_reg_35625.read()) + sc_biguint<7>(tmp_717_fu_22444_p2.read()));
}

void ShuffleNetV2::thread_tmp_719_fu_22495_p1() {
    tmp_719_fu_22495_p1 = esl_zext<64,32>(tmp_945_cast_fu_22492_p1.read());
}

void ShuffleNetV2::thread_tmp_720_fu_22465_p2() {
    tmp_720_fu_22465_p2 = (!tmp52_fu_22459_p2.read().is_01() || !i123_cast305_cast_reg_35620.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp52_fu_22459_p2.read()) + sc_biguint<10>(i123_cast305_cast_reg_35620.read()));
}

void ShuffleNetV2::thread_tmp_721_cast_fu_22473_p1() {
    tmp_721_cast_fu_22473_p1 = esl_zext<33,11>(tmp_948_cast_fu_22470_p1.read());
}

void ShuffleNetV2::thread_tmp_721_fu_8660_p2() {
    tmp_721_fu_8660_p2 = (!tmp_285_cast_fu_8656_p1.read().is_01() || !tmp_679_reg_31385.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_285_cast_fu_8656_p1.read()) + sc_biguint<10>(tmp_679_reg_31385.read()));
}

void ShuffleNetV2::thread_tmp_722_fu_22229_p2() {
    tmp_722_fu_22229_p2 = (!p_shl168_cast_fu_22213_p1.read().is_01() || !p_shl169_cast_fu_22225_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl168_cast_fu_22213_p1.read()) - sc_biguint<7>(p_shl169_cast_fu_22225_p1.read()));
}

void ShuffleNetV2::thread_tmp_723_cast_fu_16349_p1() {
    tmp_723_cast_fu_16349_p1 = esl_sext<11,8>(tmp_524_fu_16343_p2.read());
}

void ShuffleNetV2::thread_tmp_723_fu_22235_p2() {
    tmp_723_fu_22235_p2 = (!tmp_722_fu_22229_p2.read().is_01() || !tmp_942_cast_reg_35572.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_722_fu_22229_p2.read()) + sc_biguint<7>(tmp_942_cast_reg_35572.read()));
}

void ShuffleNetV2::thread_tmp_724_fu_22295_p2() {
    tmp_724_fu_22295_p2 = (!p_shl170_cast_fu_22279_p1.read().is_01() || !p_shl171_cast_fu_22291_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl170_cast_fu_22279_p1.read()) - sc_biguint<8>(p_shl171_cast_fu_22291_p1.read()));
}

void ShuffleNetV2::thread_tmp_725_fu_22311_p2() {
    tmp_725_fu_22311_p2 = (!tmp51_fu_22305_p2.read().is_01() || !co131_cast314_cast_reg_35554.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp51_fu_22305_p2.read()) + sc_biguint<10>(co131_cast314_cast_reg_35554.read()));
}

void ShuffleNetV2::thread_tmp_726_fu_22665_p2() {
    tmp_726_fu_22665_p2 = (!co134_cast_fu_22619_p1.read().is_01() || !ap_const_lv7_30.is_01())? sc_lv<7>(): (sc_biguint<7>(co134_cast_fu_22619_p1.read()) + sc_biguint<7>(ap_const_lv7_30));
}

void ShuffleNetV2::thread_tmp_727_cast_fu_22554_p1() {
    tmp_727_cast_fu_22554_p1 = esl_zext<10,4>(h_89_fu_22548_p2.read());
}

void ShuffleNetV2::thread_tmp_727_fu_8673_p3() {
    tmp_727_fu_8673_p3 = esl_concat<10,1>(tmp_721_fu_8660_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_728_fu_22874_p2() {
    tmp_728_fu_22874_p2 = (!p_shl172_cast_fu_22858_p1.read().is_01() || !p_shl173_cast_fu_22870_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl172_cast_fu_22858_p1.read()) - sc_biguint<7>(p_shl173_cast_fu_22870_p1.read()));
}

void ShuffleNetV2::thread_tmp_729_cast1_fu_22713_p1() {
    tmp_729_cast1_fu_22713_p1 = esl_zext<11,4>(h_91_fu_22707_p2.read());
}

void ShuffleNetV2::thread_tmp_729_cast_fu_22717_p1() {
    tmp_729_cast_fu_22717_p1 = esl_zext<10,4>(h_91_fu_22707_p2.read());
}

void ShuffleNetV2::thread_tmp_729_fu_8685_p2() {
    tmp_729_fu_8685_p2 = (!p_shl325_cast_fu_8665_p3.read().is_01() || !p_shl326_cast_fu_8681_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl325_cast_fu_8665_p3.read()) + sc_biguint<14>(p_shl326_cast_fu_8681_p1.read()));
}

void ShuffleNetV2::thread_tmp_730_cast_fu_22605_p1() {
    tmp_730_cast_fu_22605_p1 = esl_zext<15,4>(w_88_fu_22599_p2.read());
}

void ShuffleNetV2::thread_tmp_730_fu_8691_p2() {
    tmp_730_fu_8691_p2 = (!tmp_285_cast1_fu_8652_p1.read().is_01() || !tmp_683_reg_31390.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_285_cast1_fu_8652_p1.read()) + sc_biguint<11>(tmp_683_reg_31390.read()));
}

void ShuffleNetV2::thread_tmp_731_fu_22910_p2() {
    tmp_731_fu_22910_p2 = (!tmp_728_reg_35773.read().is_01() || !ci61_cast_fu_22894_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_728_reg_35773.read()) + sc_biguint<7>(ci61_cast_fu_22894_p1.read()));
}

void ShuffleNetV2::thread_tmp_732_cast_fu_7309_p1() {
    tmp_732_cast_fu_7309_p1 = esl_sext<64,11>(tmp_451_reg_30994.read());
}

void ShuffleNetV2::thread_tmp_732_fu_8704_p3() {
    tmp_732_fu_8704_p3 = esl_concat<11,1>(tmp_730_fu_8691_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_733_cast1_fu_22915_p1() {
    tmp_733_cast1_fu_22915_p1 = esl_sext<13,7>(tmp_731_fu_22910_p2.read());
}

void ShuffleNetV2::thread_tmp_733_cast_fu_16930_p1() {
    tmp_733_cast_fu_16930_p1 = esl_zext<7,4>(p_lshr_f9_cast_fu_16920_p4.read());
}

void ShuffleNetV2::thread_tmp_733_fu_8716_p2() {
    tmp_733_fu_8716_p2 = (!p_shl323_cast_fu_8696_p3.read().is_01() || !p_shl324_cast_fu_8712_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl323_cast_fu_8696_p3.read()) + sc_biguint<15>(p_shl324_cast_fu_8712_p1.read()));
}

void ShuffleNetV2::thread_tmp_734_cast_fu_22919_p1() {
    tmp_734_cast_fu_22919_p1 = esl_zext<18,5>(ci61_reg_5101.read());
}

void ShuffleNetV2::thread_tmp_734_fu_8548_p2() {
    tmp_734_fu_8548_p2 = (!tmp_691_reg_31354.read().is_01() || !tmp_286_cast_fu_8544_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_691_reg_31354.read()) + sc_biguint<15>(tmp_286_cast_fu_8544_p1.read()));
}

void ShuffleNetV2::thread_tmp_735_cast1_fu_22803_p1() {
    tmp_735_cast1_fu_22803_p1 = esl_zext<15,4>(w_90_fu_22797_p2.read());
}

void ShuffleNetV2::thread_tmp_735_cast_fu_22807_p1() {
    tmp_735_cast_fu_22807_p1 = esl_zext<14,4>(w_90_fu_22797_p2.read());
}

void ShuffleNetV2::thread_tmp_735_fu_8893_p2() {
    tmp_735_fu_8893_p2 = (!tmp_705_reg_31451.read().is_01() || !tmp_290_cast_fu_8889_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_705_reg_31451.read()) + sc_biguint<11>(tmp_290_cast_fu_8889_p1.read()));
}

void ShuffleNetV2::thread_tmp_736_cast_fu_17216_p1() {
    tmp_736_cast_fu_17216_p1 = esl_sext<11,7>(tmp_536_fu_17210_p2.read());
}

void ShuffleNetV2::thread_tmp_736_fu_23178_p2() {
    tmp_736_fu_23178_p2 = (!p_shl174_cast_fu_23162_p1.read().is_01() || !p_shl175_cast_fu_23174_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl174_cast_fu_23162_p1.read()) - sc_biguint<7>(p_shl175_cast_fu_23174_p1.read()));
}

void ShuffleNetV2::thread_tmp_737_cast_fu_17254_p1() {
    tmp_737_cast_fu_17254_p1 = esl_sext<32,7>(tmp_537_reg_34024.read());
}

void ShuffleNetV2::thread_tmp_737_fu_23188_p2() {
    tmp_737_fu_23188_p2 = (!i129_cast_reg_35831.read().is_01() || !tmp_736_fu_23178_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(i129_cast_reg_35831.read()) + sc_biguint<7>(tmp_736_fu_23178_p2.read()));
}

void ShuffleNetV2::thread_tmp_738_fu_23229_p1() {
    tmp_738_fu_23229_p1 = esl_zext<64,32>(tmp_977_cast_fu_23226_p1.read());
}

void ShuffleNetV2::thread_tmp_739_fu_23199_p2() {
    tmp_739_fu_23199_p2 = (!tmp54_fu_23193_p2.read().is_01() || !i129_cast290_cast_reg_35826.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp54_fu_23193_p2.read()) + sc_biguint<10>(i129_cast290_cast_reg_35826.read()));
}

void ShuffleNetV2::thread_tmp_740_fu_8742_p2() {
    tmp_740_fu_8742_p2 = (!tmp_729_reg_31403.read().is_01() || !tmp_291_cast_fu_8738_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_729_reg_31403.read()) + sc_biguint<14>(tmp_291_cast_fu_8738_p1.read()));
}

void ShuffleNetV2::thread_tmp_741_cast_fu_23207_p1() {
    tmp_741_cast_fu_23207_p1 = esl_zext<33,11>(tmp_980_cast_fu_23204_p1.read());
}

void ShuffleNetV2::thread_tmp_741_fu_8747_p2() {
    tmp_741_fu_8747_p2 = (!tmp_733_reg_31408.read().is_01() || !tmp_291_cast1_fu_8734_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_733_reg_31408.read()) + sc_biguint<15>(tmp_291_cast1_fu_8734_p1.read()));
}

void ShuffleNetV2::thread_tmp_742_fu_22963_p2() {
    tmp_742_fu_22963_p2 = (!p_shl176_cast_fu_22947_p1.read().is_01() || !p_shl177_cast_fu_22959_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl176_cast_fu_22947_p1.read()) - sc_biguint<7>(p_shl177_cast_fu_22959_p1.read()));
}

void ShuffleNetV2::thread_tmp_743_cast_fu_7368_p1() {
    tmp_743_cast_fu_7368_p1 = esl_sext<9,8>(tmp_460_fu_7362_p2.read());
}

void ShuffleNetV2::thread_tmp_743_fu_8989_p2() {
    tmp_743_fu_8989_p2 = (!tmp_482_cast_reg_30621.read().is_01() || !ap_const_lv33_F0.is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_482_cast_reg_30621.read()) + sc_biguint<33>(ap_const_lv33_F0));
}

void ShuffleNetV2::thread_tmp_744_fu_8994_p1() {
    tmp_744_fu_8994_p1 = esl_sext<64,33>(tmp_743_fu_8989_p2.read());
}

void ShuffleNetV2::thread_tmp_745_fu_22969_p2() {
    tmp_745_fu_22969_p2 = (!tmp_742_fu_22963_p2.read().is_01() || !tmp_973_cast_reg_35778.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_742_fu_22963_p2.read()) + sc_biguint<7>(tmp_973_cast_reg_35778.read()));
}

void ShuffleNetV2::thread_tmp_746_fu_8939_p3() {
    tmp_746_fu_8939_p3 = esl_concat<5,2>(co38_reg_2772.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_747_fu_23029_p2() {
    tmp_747_fu_23029_p2 = (!p_shl178_cast_fu_23013_p1.read().is_01() || !p_shl179_cast_fu_23025_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl178_cast_fu_23013_p1.read()) - sc_biguint<8>(p_shl179_cast_fu_23025_p1.read()));
}

void ShuffleNetV2::thread_tmp_748_fu_23045_p2() {
    tmp_748_fu_23045_p2 = (!tmp53_fu_23039_p2.read().is_01() || !co136_cast299_cast_reg_35760.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp53_fu_23039_p2.read()) + sc_biguint<9>(co136_cast299_cast_reg_35760.read()));
}

void ShuffleNetV2::thread_tmp_749_cast1_fu_23266_p1() {
    tmp_749_cast1_fu_23266_p1 = esl_zext<13,2>(w91_reg_5156.read());
}

void ShuffleNetV2::thread_tmp_749_cast_fu_23270_p1() {
    tmp_749_cast_fu_23270_p1 = esl_zext<36,2>(w91_reg_5156.read());
}

void ShuffleNetV2::thread_tmp_749_fu_8951_p2() {
    tmp_749_fu_8951_p2 = (!p_shl332_cast_fu_8947_p1.read().is_01() || !tmp_292_cast_fu_8935_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl332_cast_fu_8947_p1.read()) - sc_biguint<8>(tmp_292_cast_fu_8935_p1.read()));
}

void ShuffleNetV2::thread_tmp_750_cast_fu_17075_p1() {
    tmp_750_cast_fu_17075_p1 = esl_sext<11,8>(tmp_547_fu_17069_p2.read());
}

void ShuffleNetV2::thread_tmp_750_fu_23647_p2() {
    tmp_750_fu_23647_p2 = (!p_shl182_cast_fu_23631_p1.read().is_01() || !p_shl183_cast_fu_23643_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl182_cast_fu_23631_p1.read()) - sc_biguint<7>(p_shl183_cast_fu_23643_p1.read()));
}

void ShuffleNetV2::thread_tmp_751_fu_23547_p2() {
    tmp_751_fu_23547_p2 = (!p_shl180_cast_fu_23531_p1.read().is_01() || !p_shl181_cast_fu_23543_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl180_cast_fu_23531_p1.read()) - sc_biguint<7>(p_shl181_cast_fu_23543_p1.read()));
}

void ShuffleNetV2::thread_tmp_752_fu_23557_p2() {
    tmp_752_fu_23557_p2 = (!i133_cast_reg_35974.read().is_01() || !tmp_751_fu_23547_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(i133_cast_reg_35974.read()) + sc_biguint<7>(tmp_751_fu_23547_p2.read()));
}

void ShuffleNetV2::thread_tmp_753_fu_23598_p1() {
    tmp_753_fu_23598_p1 = esl_zext<64,32>(tmp_995_cast_fu_23595_p1.read());
}

void ShuffleNetV2::thread_tmp_754_cast_fu_17581_p1() {
    tmp_754_cast_fu_17581_p1 = esl_sext<11,7>(tmp_551_fu_17575_p2.read());
}

void ShuffleNetV2::thread_tmp_754_fu_23568_p2() {
    tmp_754_fu_23568_p2 = (!tmp56_fu_23562_p2.read().is_01() || !i133_cast280_cast_reg_35969.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp56_fu_23562_p2.read()) + sc_biguint<10>(i133_cast280_cast_reg_35969.read()));
}

void ShuffleNetV2::thread_tmp_755_cast1_fu_23576_p1() {
    tmp_755_cast1_fu_23576_p1 = esl_zext<33,11>(tmp_998_cast_fu_23573_p1.read());
}

void ShuffleNetV2::thread_tmp_755_cast_fu_17619_p1() {
    tmp_755_cast_fu_17619_p1 = esl_sext<32,7>(tmp_552_reg_34167.read());
}

void ShuffleNetV2::thread_tmp_755_fu_8971_p3() {
    tmp_755_fu_8971_p3 = esl_concat<7,2>(tmp_293_fu_8961_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_756_cast_fu_23290_p1() {
    tmp_756_cast_fu_23290_p1 = esl_zext<10,2>(h92_reg_5167.read());
}

void ShuffleNetV2::thread_tmp_756_fu_23286_p1() {
    tmp_756_fu_23286_p1 = esl_zext<64,2>(h92_reg_5167.read());
}

void ShuffleNetV2::thread_tmp_757_fu_23683_p2() {
    tmp_757_fu_23683_p2 = (!tmp_750_reg_36024.read().is_01() || !ci63_cast_fu_23667_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_750_reg_36024.read()) + sc_biguint<7>(ci63_cast_fu_23667_p1.read()));
}

void ShuffleNetV2::thread_tmp_758_cast_fu_23688_p1() {
    tmp_758_cast_fu_23688_p1 = esl_sext<13,7>(tmp_757_fu_23683_p2.read());
}

void ShuffleNetV2::thread_tmp_758_fu_8983_p2() {
    tmp_758_fu_8983_p2 = (!p_shl331_cast_fu_8979_p1.read().is_01() || !tmp_294_cast_fu_8967_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl331_cast_fu_8979_p1.read()) - sc_biguint<10>(tmp_294_cast_fu_8967_p1.read()));
}

void ShuffleNetV2::thread_tmp_759_cast_fu_23692_p1() {
    tmp_759_cast_fu_23692_p1 = esl_zext<19,5>(ci63_reg_5222.read());
}

void ShuffleNetV2::thread_tmp_759_fu_9024_p2() {
    tmp_759_fu_9024_p2 = (!tmp_298_cast_fu_9020_p1.read().is_01() || !tmp_758_reg_31490.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_298_cast_fu_9020_p1.read()) + sc_biguint<10>(tmp_758_reg_31490.read()));
}

void ShuffleNetV2::thread_tmp_760_fu_23334_p2() {
    tmp_760_fu_23334_p2 = (!p_shl186_cast_fu_23318_p1.read().is_01() || !p_shl187_cast_fu_23330_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl186_cast_fu_23318_p1.read()) - sc_biguint<7>(p_shl187_cast_fu_23330_p1.read()));
}

void ShuffleNetV2::thread_tmp_761_fu_23344_p2() {
    tmp_761_fu_23344_p2 = (!tmp_760_fu_23334_p2.read().is_01() || !co139_cast1_reg_35873.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_760_fu_23334_p2.read()) + sc_biguint<7>(co139_cast1_reg_35873.read()));
}

void ShuffleNetV2::thread_tmp_762_cast1_fu_7421_p1() {
    tmp_762_cast1_fu_7421_p1 = esl_sext<64,9>(tmp_480_fu_7416_p2.read());
}

void ShuffleNetV2::thread_tmp_762_cast_fu_17687_p1() {
    tmp_762_cast_fu_17687_p1 = esl_zext<7,4>(p_lshr_f10_cast_fu_17677_p4.read());
}

void ShuffleNetV2::thread_tmp_762_fu_9033_p3() {
    tmp_762_fu_9033_p3 = esl_concat<10,2>(tmp_759_fu_9024_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_763_cast_fu_23363_p1() {
    tmp_763_cast_fu_23363_p1 = esl_zext<35,32>(tmp_1014_cast_fu_23360_p1.read());
}

void ShuffleNetV2::thread_tmp_763_fu_9045_p2() {
    tmp_763_fu_9045_p2 = (!p_shl208_fu_9041_p1.read().is_01() || !tmp_1128_cast_fu_9029_p1.read().is_01())? sc_lv<64>(): (sc_bigint<64>(p_shl208_fu_9041_p1.read()) - sc_bigint<64>(tmp_1128_cast_fu_9029_p1.read()));
}

void ShuffleNetV2::thread_tmp_764_cast_fu_17973_p1() {
    tmp_764_cast_fu_17973_p1 = esl_sext<11,7>(tmp_567_fu_17967_p2.read());
}

void ShuffleNetV2::thread_tmp_764_fu_23355_p2() {
    tmp_764_fu_23355_p2 = (!co139_cast_reg_35868.read().is_01() || !tmp55_fu_23349_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(co139_cast_reg_35868.read()) + sc_biguint<10>(tmp55_fu_23349_p2.read()));
}

void ShuffleNetV2::thread_tmp_765_cast_fu_18011_p1() {
    tmp_765_cast_fu_18011_p1 = esl_sext<32,7>(tmp_568_reg_34275.read());
}

void ShuffleNetV2::thread_tmp_765_fu_9051_p2() {
    tmp_765_fu_9051_p2 = (!tmp_298_cast1_fu_9016_p1.read().is_01() || !tmp_1125_cast_reg_31485.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_298_cast1_fu_9016_p1.read()) + sc_bigint<9>(tmp_1125_cast_reg_31485.read()));
}

void ShuffleNetV2::thread_tmp_766_cast_fu_23405_p1() {
    tmp_766_cast_fu_23405_p1 = esl_zext<13,10>(tmp_764_reg_35936.read());
}

void ShuffleNetV2::thread_tmp_766_fu_9067_p2() {
    tmp_766_fu_9067_p2 = (!ap_const_lv9_2.is_01())? sc_lv<9>(): tmp_765_reg_31509.read() << (unsigned short)ap_const_lv9_2.to_uint();
}

void ShuffleNetV2::thread_tmp_767_fu_23951_p2() {
    tmp_767_fu_23951_p2 = (!p_shl184_cast_fu_23935_p1.read().is_01() || !p_shl185_cast_fu_23947_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl184_cast_fu_23935_p1.read()) - sc_biguint<7>(p_shl185_cast_fu_23947_p1.read()));
}

void ShuffleNetV2::thread_tmp_768_fu_23961_p2() {
    tmp_768_fu_23961_p2 = (!i135_cast_reg_36082.read().is_01() || !tmp_767_fu_23951_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(i135_cast_reg_36082.read()) + sc_biguint<7>(tmp_767_fu_23951_p2.read()));
}

void ShuffleNetV2::thread_tmp_769_fu_24002_p1() {
    tmp_769_fu_24002_p1 = esl_zext<64,32>(tmp_1005_cast_fu_23999_p1.read());
}

void ShuffleNetV2::thread_tmp_770_fu_23972_p2() {
    tmp_770_fu_23972_p2 = (!tmp58_fu_23966_p2.read().is_01() || !i135_cast267_cast_reg_36077.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp58_fu_23966_p2.read()) + sc_biguint<10>(i135_cast267_cast_reg_36077.read()));
}

void ShuffleNetV2::thread_tmp_771_cast_fu_23980_p1() {
    tmp_771_cast_fu_23980_p1 = esl_zext<33,11>(tmp_1008_cast_fu_23977_p1.read());
}

void ShuffleNetV2::thread_tmp_771_fu_9072_p2() {
    tmp_771_fu_9072_p2 = (!tmp_766_fu_9067_p2.read().is_01() || !tmp_765_reg_31509.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_766_fu_9067_p2.read()) - sc_biguint<9>(tmp_765_reg_31509.read()));
}

void ShuffleNetV2::thread_tmp_772_fu_23736_p2() {
    tmp_772_fu_23736_p2 = (!p_shl188_cast_fu_23720_p1.read().is_01() || !p_shl189_cast_fu_23732_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl188_cast_fu_23720_p1.read()) - sc_biguint<7>(p_shl189_cast_fu_23732_p1.read()));
}

void ShuffleNetV2::thread_tmp_773_cast_fu_17368_p1() {
    tmp_773_cast_fu_17368_p1 = esl_sext<9,7>(tmp_560_fu_17362_p2.read());
}

void ShuffleNetV2::thread_tmp_773_fu_23742_p2() {
    tmp_773_fu_23742_p2 = (!tmp_772_fu_23736_p2.read().is_01() || !tmp_1002_cast_reg_36029.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_772_fu_23736_p2.read()) + sc_biguint<7>(tmp_1002_cast_reg_36029.read()));
}

void ShuffleNetV2::thread_tmp_774_cast_fu_17388_p1() {
    tmp_774_cast_fu_17388_p1 = esl_sext<32,7>(tmp_561_reg_34102.read());
}

void ShuffleNetV2::thread_tmp_774_fu_23802_p2() {
    tmp_774_fu_23802_p2 = (!p_shl190_cast_fu_23786_p1.read().is_01() || !p_shl191_cast_fu_23798_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl190_cast_fu_23786_p1.read()) - sc_biguint<8>(p_shl191_cast_fu_23798_p1.read()));
}

void ShuffleNetV2::thread_tmp_775_fu_23826_p2() {
    tmp_775_fu_23826_p2 = (!tmp57_cast_fu_23822_p1.read().is_01() || !co141_cast_reg_36011.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp57_cast_fu_23822_p1.read()) + sc_biguint<12>(co141_cast_reg_36011.read()));
}

void ShuffleNetV2::thread_tmp_776_fu_24168_p2() {
    tmp_776_fu_24168_p2 = (!p_shl192_cast_fu_24154_p1.read().is_01() || !p_shl193_cast_fu_24164_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl192_cast_fu_24154_p1.read()) - sc_biguint<8>(p_shl193_cast_fu_24164_p1.read()));
}

void ShuffleNetV2::thread_tmp_777_cast_fu_24061_p1() {
    tmp_777_cast_fu_24061_p1 = esl_zext<10,4>(h_95_fu_24055_p2.read());
}

void ShuffleNetV2::thread_tmp_777_fu_9056_p2() {
    tmp_777_fu_9056_p2 = (!tmp_373_reg_30725.read().is_01() || !tmp_763_fu_9045_p2.read().is_01())? sc_lv<64>(): (sc_bigint<64>(tmp_373_reg_30725.read()) + sc_biguint<64>(tmp_763_fu_9045_p2.read()));
}

void ShuffleNetV2::thread_tmp_778_fu_24204_p2() {
    tmp_778_fu_24204_p2 = (!tmp_776_reg_36176.read().is_01() || !ci65_cast_fu_24188_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_776_reg_36176.read()) + sc_biguint<8>(ci65_cast_fu_24188_p1.read()));
}

void ShuffleNetV2::thread_tmp_779_cast_fu_24209_p1() {
    tmp_779_cast_fu_24209_p1 = esl_sext<15,8>(tmp_778_fu_24204_p2.read());
}

void ShuffleNetV2::thread_tmp_779_fu_9190_p2() {
    tmp_779_fu_9190_p2 = (!tmp_482_cast_reg_30621.read().is_01() || !ap_const_lv33_108.is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_482_cast_reg_30621.read()) + sc_biguint<33>(ap_const_lv33_108));
}

void ShuffleNetV2::thread_tmp_780_cast_fu_24213_p1() {
    tmp_780_cast_fu_24213_p1 = esl_zext<19,5>(ci65_reg_5310.read());
}

void ShuffleNetV2::thread_tmp_780_fu_9195_p1() {
    tmp_780_fu_9195_p1 = esl_sext<64,33>(tmp_779_fu_9190_p2.read());
}

void ShuffleNetV2::thread_tmp_781_cast_fu_24112_p1() {
    tmp_781_cast_fu_24112_p1 = esl_zext<15,4>(w_94_fu_24106_p2.read());
}

void ShuffleNetV2::thread_tmp_781_fu_9205_p3() {
    tmp_781_fu_9205_p3 = esl_concat<5,5>(co40_reg_2817.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_782_fu_9217_p3() {
    tmp_782_fu_9217_p3 = esl_concat<5,3>(co40_reg_2817.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_783_cast_fu_17832_p1() {
    tmp_783_cast_fu_17832_p1 = esl_sext<11,8>(tmp_574_fu_17826_p2.read());
}

void ShuffleNetV2::thread_tmp_783_fu_24454_p2() {
    tmp_783_fu_24454_p2 = (!p_shl194_cast_fu_24438_p1.read().is_01() || !p_shl195_cast_fu_24450_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl194_cast_fu_24438_p1.read()) - sc_biguint<8>(p_shl195_cast_fu_24450_p1.read()));
}

void ShuffleNetV2::thread_tmp_784_fu_24464_p2() {
    tmp_784_fu_24464_p2 = (!i141_cast_reg_36234.read().is_01() || !tmp_783_fu_24454_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(i141_cast_reg_36234.read()) + sc_biguint<8>(tmp_783_fu_24454_p2.read()));
}

void ShuffleNetV2::thread_tmp_785_fu_24505_p1() {
    tmp_785_fu_24505_p1 = esl_zext<64,32>(tmp_1032_cast_fu_24502_p1.read());
}

void ShuffleNetV2::thread_tmp_786_fu_24475_p2() {
    tmp_786_fu_24475_p2 = (!tmp60_fu_24469_p2.read().is_01() || !i141_cast253_cast_reg_36229.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp60_fu_24469_p2.read()) + sc_biguint<10>(i141_cast253_cast_reg_36229.read()));
}

void ShuffleNetV2::thread_tmp_787_cast_fu_24483_p1() {
    tmp_787_cast_fu_24483_p1 = esl_zext<33,11>(tmp_1035_cast_fu_24480_p1.read());
}

void ShuffleNetV2::thread_tmp_787_fu_9229_p2() {
    tmp_787_fu_9229_p2 = (!p_shl337_cast_fu_9213_p1.read().is_01() || !p_shl338_cast_fu_9225_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl337_cast_fu_9213_p1.read()) - sc_biguint<11>(p_shl338_cast_fu_9225_p1.read()));
}

void ShuffleNetV2::thread_tmp_788_fu_24259_p2() {
    tmp_788_fu_24259_p2 = (!p_shl196_cast_fu_24245_p1.read().is_01() || !p_shl197_cast_fu_24255_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl196_cast_fu_24245_p1.read()) - sc_biguint<8>(p_shl197_cast_fu_24255_p1.read()));
}

void ShuffleNetV2::thread_tmp_789_fu_24265_p2() {
    tmp_789_fu_24265_p2 = (!tmp_788_fu_24259_p2.read().is_01() || !tmp_1029_cast_reg_36181.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_788_fu_24259_p2.read()) + sc_biguint<8>(tmp_1029_cast_reg_36181.read()));
}

void ShuffleNetV2::thread_tmp_790_fu_9141_p3() {
    tmp_790_fu_9141_p3 = esl_concat<8,5>(tmp_299_fu_9135_p2.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_791_fu_24313_p2() {
    tmp_791_fu_24313_p2 = (!p_shl198_cast_fu_24309_p1.read().is_01() || !p_shl196_cast1_fu_24241_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl198_cast_fu_24309_p1.read()) - sc_biguint<10>(p_shl196_cast1_fu_24241_p1.read()));
}

void ShuffleNetV2::thread_tmp_792_fu_24329_p2() {
    tmp_792_fu_24329_p2 = (!tmp59_fu_24323_p2.read().is_01() || !co144_cast_reg_36163.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp59_fu_24323_p2.read()) + sc_biguint<12>(co144_cast_reg_36163.read()));
}

void ShuffleNetV2::thread_tmp_793_cast_fu_18409_p1() {
    tmp_793_cast_fu_18409_p1 = esl_zext<7,4>(p_lshr_f11_cast_fu_18399_p4.read());
}

void ShuffleNetV2::thread_tmp_793_fu_9153_p3() {
    tmp_793_fu_9153_p3 = esl_concat<8,3>(tmp_299_fu_9135_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_794_fu_9165_p2() {
    tmp_794_fu_9165_p2 = (!p_shl335_cast_fu_9149_p1.read().is_01() || !p_shl336_cast_fu_9161_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl335_cast_fu_9149_p1.read()) - sc_biguint<14>(p_shl336_cast_fu_9161_p1.read()));
}

void ShuffleNetV2::thread_tmp_795_cast1_fu_24542_p1() {
    tmp_795_cast1_fu_24542_p1 = esl_zext<13,2>(w95_reg_5365.read());
}

void ShuffleNetV2::thread_tmp_795_cast_fu_24546_p1() {
    tmp_795_cast_fu_24546_p1 = esl_zext<36,2>(w95_reg_5365.read());
}

void ShuffleNetV2::thread_tmp_795_fu_9171_p1() {
    tmp_795_fu_9171_p1 = esl_sext<33,14>(tmp_794_fu_9165_p2.read());
}

void ShuffleNetV2::thread_tmp_796_cast_fu_18695_p1() {
    tmp_796_cast_fu_18695_p1 = esl_sext<11,7>(tmp_586_fu_18689_p2.read());
}

void ShuffleNetV2::thread_tmp_796_fu_9175_p2() {
    tmp_796_fu_9175_p2 = (!tmp_795_fu_9171_p1.read().is_01() || !tmp_490_cast_reg_30684.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_795_fu_9171_p1.read()) + sc_bigint<33>(tmp_490_cast_reg_30684.read()));
}

void ShuffleNetV2::thread_tmp_797_cast_fu_18733_p1() {
    tmp_797_cast_fu_18733_p1 = esl_sext<32,7>(tmp_587_reg_34481.read());
}

void ShuffleNetV2::thread_tmp_797_fu_24921_p2() {
    tmp_797_fu_24921_p2 = (!p_shl201_cast_fu_24907_p1.read().is_01() || !p_shl202_cast_fu_24917_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl201_cast_fu_24907_p1.read()) - sc_biguint<8>(p_shl202_cast_fu_24917_p1.read()));
}

void ShuffleNetV2::thread_tmp_798_fu_24823_p2() {
    tmp_798_fu_24823_p2 = (!p_shl199_cast_fu_24807_p1.read().is_01() || !p_shl200_cast_fu_24819_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl199_cast_fu_24807_p1.read()) - sc_biguint<8>(p_shl200_cast_fu_24819_p1.read()));
}

void ShuffleNetV2::thread_tmp_799_fu_24833_p2() {
    tmp_799_fu_24833_p2 = (!i145_cast_reg_36377.read().is_01() || !tmp_798_fu_24823_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(i145_cast_reg_36377.read()) + sc_biguint<8>(tmp_798_fu_24823_p2.read()));
}

void ShuffleNetV2::thread_tmp_800_fu_24874_p1() {
    tmp_800_fu_24874_p1 = esl_zext<64,32>(tmp_1050_cast_fu_24871_p1.read());
}

void ShuffleNetV2::thread_tmp_801_fu_24844_p2() {
    tmp_801_fu_24844_p2 = (!tmp62_fu_24838_p2.read().is_01() || !i145_cast243_cast_reg_36372.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp62_fu_24838_p2.read()) + sc_biguint<9>(i145_cast243_cast_reg_36372.read()));
}

void ShuffleNetV2::thread_tmp_802_cast_fu_24852_p1() {
    tmp_802_cast_fu_24852_p1 = esl_zext<33,11>(tmp_1053_cast_fu_24849_p1.read());
}

void ShuffleNetV2::thread_tmp_802_fu_9180_p1() {
    tmp_802_fu_9180_p1 = esl_sext<64,33>(tmp_796_fu_9175_p2.read());
}

void ShuffleNetV2::thread_tmp_803_cast_fu_24566_p1() {
    tmp_803_cast_fu_24566_p1 = esl_zext<11,2>(h96_reg_5376.read());
}

void ShuffleNetV2::thread_tmp_803_fu_24562_p1() {
    tmp_803_fu_24562_p1 = esl_zext<64,2>(h96_reg_5376.read());
}

void ShuffleNetV2::thread_tmp_804_fu_24957_p2() {
    tmp_804_fu_24957_p2 = (!tmp_797_reg_36427.read().is_01() || !ci67_cast_fu_24941_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_797_reg_36427.read()) + sc_biguint<8>(ci67_cast_fu_24941_p1.read()));
}

void ShuffleNetV2::thread_tmp_805_cast_fu_24962_p1() {
    tmp_805_cast_fu_24962_p1 = esl_sext<15,8>(tmp_804_fu_24957_p2.read());
}

void ShuffleNetV2::thread_tmp_805_fu_9093_p2() {
    tmp_805_fu_9093_p2 = (!tmp_771_reg_31521.read().is_01() || !tmp_300_cast_fu_9089_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_771_reg_31521.read()) + sc_biguint<9>(tmp_300_cast_fu_9089_p1.read()));
}

void ShuffleNetV2::thread_tmp_806_cast_fu_24966_p1() {
    tmp_806_cast_fu_24966_p1 = esl_zext<19,5>(ci67_reg_5431.read());
}

void ShuffleNetV2::thread_tmp_806_fu_9251_p2() {
    tmp_806_fu_9251_p2 = (!tmp_787_reg_31567.read().is_01() || !tmp_304_cast_fu_9247_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_787_reg_31567.read()) + sc_biguint<11>(tmp_304_cast_fu_9247_p1.read()));
}

void ShuffleNetV2::thread_tmp_807_fu_24610_p2() {
    tmp_807_fu_24610_p2 = (!p_shl205_cast_fu_24594_p1.read().is_01() || !p_shl206_cast_fu_24606_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl205_cast_fu_24594_p1.read()) - sc_biguint<8>(p_shl206_cast_fu_24606_p1.read()));
}

void ShuffleNetV2::thread_tmp_808_fu_24620_p2() {
    tmp_808_fu_24620_p2 = (!tmp_807_fu_24610_p2.read().is_01() || !co147_cast1_reg_36276.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_807_fu_24610_p2.read()) + sc_biguint<8>(co147_cast1_reg_36276.read()));
}

void ShuffleNetV2::thread_tmp_809_cast_fu_24639_p1() {
    tmp_809_cast_fu_24639_p1 = esl_zext<35,32>(tmp_1069_cast_fu_24636_p1.read());
}

void ShuffleNetV2::thread_tmp_809_fu_9289_p3() {
    tmp_809_fu_9289_p3 = esl_concat<5,4>(co42_reg_2852.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_810_cast_fu_18554_p1() {
    tmp_810_cast_fu_18554_p1 = esl_sext<11,8>(tmp_597_fu_18548_p2.read());
}

void ShuffleNetV2::thread_tmp_810_fu_24631_p2() {
    tmp_810_fu_24631_p2 = (!co147_cast_reg_36271.read().is_01() || !tmp61_fu_24625_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(co147_cast_reg_36271.read()) + sc_biguint<10>(tmp61_fu_24625_p2.read()));
}

void ShuffleNetV2::thread_tmp_811_cast_fu_24681_p1() {
    tmp_811_cast_fu_24681_p1 = esl_zext<13,10>(tmp_810_reg_36339.read());
}

void ShuffleNetV2::thread_tmp_811_fu_9301_p3() {
    tmp_811_fu_9301_p3 = esl_concat<5,1>(co42_reg_2852.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_812_fu_9313_p2() {
    tmp_812_fu_9313_p2 = (!p_shl340_cast_fu_9309_p1.read().is_01() || !p_shl339_cast_fu_9297_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl340_cast_fu_9309_p1.read()) + sc_biguint<10>(p_shl339_cast_fu_9297_p1.read()));
}

void ShuffleNetV2::thread_tmp_813_fu_25207_p2() {
    tmp_813_fu_25207_p2 = (!p_shl203_cast_fu_25191_p1.read().is_01() || !p_shl204_cast_fu_25203_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl203_cast_fu_25191_p1.read()) - sc_biguint<8>(p_shl204_cast_fu_25203_p1.read()));
}

void ShuffleNetV2::thread_tmp_814_cast_fu_19068_p1() {
    tmp_814_cast_fu_19068_p1 = esl_sext<11,7>(tmp_601_fu_19062_p2.read());
}

void ShuffleNetV2::thread_tmp_814_fu_25217_p2() {
    tmp_814_fu_25217_p2 = (!i147_cast1_reg_36485.read().is_01() || !tmp_813_fu_25207_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(i147_cast1_reg_36485.read()) + sc_biguint<8>(tmp_813_fu_25207_p2.read()));
}

void ShuffleNetV2::thread_tmp_815_cast_fu_19106_p1() {
    tmp_815_cast_fu_19106_p1 = esl_sext<32,7>(tmp_602_reg_34624.read());
}

void ShuffleNetV2::thread_tmp_815_fu_9412_p3() {
    tmp_815_fu_9412_p3 = esl_concat<5,4>(co44_reg_2885.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_816_fu_25262_p1() {
    tmp_816_fu_25262_p1 = esl_zext<64,32>(tmp_1060_cast_fu_25259_p1.read());
}

void ShuffleNetV2::thread_tmp_817_fu_25236_p2() {
    tmp_817_fu_25236_p2 = (!tmp64_cast_fu_25232_p1.read().is_01() || !i147_cast_reg_36480.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp64_cast_fu_25232_p1.read()) + sc_biguint<12>(i147_cast_reg_36480.read()));
}

void ShuffleNetV2::thread_tmp_818_cast_fu_25241_p1() {
    tmp_818_cast_fu_25241_p1 = esl_zext<33,12>(tmp_817_reg_36511.read());
}

void ShuffleNetV2::thread_tmp_818_fu_9424_p3() {
    tmp_818_fu_9424_p3 = esl_concat<5,1>(co44_reg_2885.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_819_fu_25012_p2() {
    tmp_819_fu_25012_p2 = (!p_shl207_cast_fu_24998_p1.read().is_01() || !p_shl208_cast_fu_25008_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl207_cast_fu_24998_p1.read()) - sc_biguint<8>(p_shl208_cast_fu_25008_p1.read()));
}

void ShuffleNetV2::thread_tmp_820_fu_25018_p2() {
    tmp_820_fu_25018_p2 = (!tmp_819_fu_25012_p2.read().is_01() || !tmp_1057_cast_reg_36432.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_819_fu_25012_p2.read()) + sc_biguint<8>(tmp_1057_cast_reg_36432.read()));
}

void ShuffleNetV2::thread_tmp_821_fu_25066_p2() {
    tmp_821_fu_25066_p2 = (!p_shl209_cast_fu_25062_p1.read().is_01() || !p_shl207_cast1_fu_24994_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl209_cast_fu_25062_p1.read()) - sc_biguint<10>(p_shl207_cast1_fu_24994_p1.read()));
}

void ShuffleNetV2::thread_tmp_822_cast_fu_19174_p1() {
    tmp_822_cast_fu_19174_p1 = esl_zext<7,4>(p_lshr_f12_cast_fu_19164_p4.read());
}

void ShuffleNetV2::thread_tmp_822_fu_25082_p2() {
    tmp_822_fu_25082_p2 = (!tmp63_fu_25076_p2.read().is_01() || !co149_cast_reg_36414.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp63_fu_25076_p2.read()) + sc_biguint<12>(co149_cast_reg_36414.read()));
}

void ShuffleNetV2::thread_tmp_823_cast1_fu_25299_p1() {
    tmp_823_cast1_fu_25299_p1 = esl_zext<13,2>(w97_reg_5486.read());
}

void ShuffleNetV2::thread_tmp_823_cast_fu_25303_p1() {
    tmp_823_cast_fu_25303_p1 = esl_zext<36,2>(w97_reg_5486.read());
}

void ShuffleNetV2::thread_tmp_823_fu_9436_p2() {
    tmp_823_fu_9436_p2 = (!p_shl346_cast_fu_9432_p1.read().is_01() || !p_shl345_cast_fu_9420_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl346_cast_fu_9432_p1.read()) + sc_biguint<10>(p_shl345_cast_fu_9420_p1.read()));
}

void ShuffleNetV2::thread_tmp_824_cast_fu_19460_p1() {
    tmp_824_cast_fu_19460_p1 = esl_sext<11,7>(tmp_617_fu_19454_p2.read());
}

void ShuffleNetV2::thread_tmp_824_fu_25674_p2() {
    tmp_824_fu_25674_p2 = (!p_shl212_cast_fu_25660_p1.read().is_01() || !p_shl213_cast_fu_25670_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl212_cast_fu_25660_p1.read()) - sc_biguint<8>(p_shl213_cast_fu_25670_p1.read()));
}

void ShuffleNetV2::thread_tmp_825_cast_fu_19498_p1() {
    tmp_825_cast_fu_19498_p1 = esl_sext<32,7>(tmp_618_reg_34732.read());
}

void ShuffleNetV2::thread_tmp_825_fu_25580_p2() {
    tmp_825_fu_25580_p2 = (!p_shl210_cast_fu_25564_p1.read().is_01() || !p_shl211_cast_fu_25576_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl210_cast_fu_25564_p1.read()) - sc_biguint<8>(p_shl211_cast_fu_25576_p1.read()));
}

void ShuffleNetV2::thread_tmp_826_fu_25590_p2() {
    tmp_826_fu_25590_p2 = (!i153_cast1_reg_36628.read().is_01() || !tmp_825_fu_25580_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(i153_cast1_reg_36628.read()) + sc_biguint<8>(tmp_825_fu_25580_p2.read()));
}

void ShuffleNetV2::thread_tmp_827_fu_25627_p1() {
    tmp_827_fu_25627_p1 = esl_zext<64,32>(tmp_1083_cast_fu_25624_p1.read());
}

void ShuffleNetV2::thread_tmp_828_fu_25601_p2() {
    tmp_828_fu_25601_p2 = (!tmp66_fu_25595_p2.read().is_01() || !i153_cast_reg_36623.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp66_fu_25595_p2.read()) + sc_biguint<12>(i153_cast_reg_36623.read()));
}

void ShuffleNetV2::thread_tmp_829_cast_fu_25606_p1() {
    tmp_829_cast_fu_25606_p1 = esl_zext<33,12>(tmp_828_reg_36654.read());
}

void ShuffleNetV2::thread_tmp_829_fu_9448_p3() {
    tmp_829_fu_9448_p3 = esl_concat<6,4>(tmp_305_fu_9442_p2.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_830_cast_fu_25323_p1() {
    tmp_830_cast_fu_25323_p1 = esl_zext<11,2>(h98_reg_5497.read());
}

void ShuffleNetV2::thread_tmp_830_fu_25319_p1() {
    tmp_830_fu_25319_p1 = esl_zext<64,2>(h98_reg_5497.read());
}

void ShuffleNetV2::thread_tmp_831_fu_25710_p2() {
    tmp_831_fu_25710_p2 = (!tmp_824_reg_36678.read().is_01() || !ci69_cast_fu_25694_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_824_reg_36678.read()) + sc_biguint<8>(ci69_cast_fu_25694_p1.read()));
}

void ShuffleNetV2::thread_tmp_832_fu_9460_p3() {
    tmp_832_fu_9460_p3 = esl_concat<6,1>(tmp_305_fu_9442_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_833_cast_cast_fu_18847_p1() {
    tmp_833_cast_cast_fu_18847_p1 = esl_sext<8,7>(tmp_610_fu_18841_p2.read());
}

void ShuffleNetV2::thread_tmp_833_cast_fu_25715_p1() {
    tmp_833_cast_fu_25715_p1 = esl_sext<15,8>(tmp_831_fu_25710_p2.read());
}

void ShuffleNetV2::thread_tmp_833_fu_9472_p2() {
    tmp_833_fu_9472_p2 = (!p_shl344_cast_fu_9468_p1.read().is_01() || !p_shl343_cast_fu_9456_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl344_cast_fu_9468_p1.read()) + sc_biguint<11>(p_shl343_cast_fu_9456_p1.read()));
}

void ShuffleNetV2::thread_tmp_834_cast1_fu_25719_p1() {
    tmp_834_cast1_fu_25719_p1 = esl_zext<19,5>(ci69_reg_5552.read());
}

void ShuffleNetV2::thread_tmp_834_cast_fu_18867_p1() {
    tmp_834_cast_fu_18867_p1 = esl_sext<32,7>(tmp_611_reg_34559.read());
}

void ShuffleNetV2::thread_tmp_834_fu_9335_p2() {
    tmp_834_fu_9335_p2 = (!tmp_306_cast_fu_9331_p1.read().is_01() || !tmp_812_reg_31601.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_306_cast_fu_9331_p1.read()) + sc_biguint<10>(tmp_812_reg_31601.read()));
}

void ShuffleNetV2::thread_tmp_835_fu_25367_p2() {
    tmp_835_fu_25367_p2 = (!p_shl216_cast_fu_25351_p1.read().is_01() || !p_shl217_cast_fu_25363_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl216_cast_fu_25351_p1.read()) - sc_biguint<8>(p_shl217_cast_fu_25363_p1.read()));
}

void ShuffleNetV2::thread_tmp_836_fu_25377_p2() {
    tmp_836_fu_25377_p2 = (!tmp_835_fu_25367_p2.read().is_01() || !co151_cast1_reg_36527.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_835_fu_25367_p2.read()) + sc_biguint<8>(co151_cast1_reg_36527.read()));
}

void ShuffleNetV2::thread_tmp_837_cast1_fu_25396_p1() {
    tmp_837_cast1_fu_25396_p1 = esl_zext<35,32>(tmp_1102_cast_fu_25393_p1.read());
}

void ShuffleNetV2::thread_tmp_837_cast_fu_18912_p1() {
    tmp_837_cast_fu_18912_p1 = esl_sext<9,8>(tmp_614_reg_34565.read());
}

void ShuffleNetV2::thread_tmp_837_fu_9340_p3() {
    tmp_837_fu_9340_p3 = esl_concat<10,4>(tmp_834_fu_9335_p2.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_838_fu_25388_p2() {
    tmp_838_fu_25388_p2 = (!co151_cast_reg_36522.read().is_01() || !tmp65_fu_25382_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(co151_cast_reg_36522.read()) + sc_biguint<10>(tmp65_fu_25382_p2.read()));
}

void ShuffleNetV2::thread_tmp_839_cast_fu_25438_p1() {
    tmp_839_cast_fu_25438_p1 = esl_zext<13,10>(tmp_838_reg_36590.read());
}

void ShuffleNetV2::thread_tmp_839_fu_9352_p3() {
    tmp_839_fu_9352_p3 = esl_concat<10,1>(tmp_834_fu_9335_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_840_fu_9364_p2() {
    tmp_840_fu_9364_p2 = (!p_shl341_cast_fu_9348_p1.read().is_01() || !p_shl342_cast_fu_9360_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl341_cast_fu_9348_p1.read()) + sc_biguint<15>(p_shl342_cast_fu_9360_p1.read()));
}

void ShuffleNetV2::thread_tmp_841_fu_26062_p2() {
    tmp_841_fu_26062_p2 = (!co155_cast_fu_26012_p1.read().is_01() || !ap_const_lv8_60.is_01())? sc_lv<8>(): (sc_biguint<8>(co155_cast_fu_26012_p1.read()) + sc_biguint<8>(ap_const_lv8_60));
}

void ShuffleNetV2::thread_tmp_842_fu_25960_p2() {
    tmp_842_fu_25960_p2 = (!p_shl214_cast_fu_25944_p1.read().is_01() || !p_shl215_cast_fu_25956_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl214_cast_fu_25944_p1.read()) - sc_biguint<8>(p_shl215_cast_fu_25956_p1.read()));
}

void ShuffleNetV2::thread_tmp_843_cast_fu_19319_p1() {
    tmp_843_cast_fu_19319_p1 = esl_sext<11,8>(tmp_624_fu_19313_p2.read());
}

void ShuffleNetV2::thread_tmp_843_fu_9670_p3() {
    tmp_843_fu_9670_p3 = esl_concat<5,5>(co46_reg_2918.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_844_fu_25970_p2() {
    tmp_844_fu_25970_p2 = (!i155_cast1_reg_36736.read().is_01() || !tmp_842_fu_25960_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(i155_cast1_reg_36736.read()) + sc_biguint<8>(tmp_842_fu_25960_p2.read()));
}

void ShuffleNetV2::thread_tmp_845_fu_26007_p1() {
    tmp_845_fu_26007_p1 = esl_zext<64,32>(tmp_1093_cast_fu_26004_p1.read());
}

void ShuffleNetV2::thread_tmp_846_fu_25981_p2() {
    tmp_846_fu_25981_p2 = (!tmp68_fu_25975_p2.read().is_01() || !i155_cast_reg_36731.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp68_fu_25975_p2.read()) + sc_biguint<12>(i155_cast_reg_36731.read()));
}

void ShuffleNetV2::thread_tmp_847_cast_fu_25986_p1() {
    tmp_847_cast_fu_25986_p1 = esl_zext<33,12>(tmp_846_reg_36762.read());
}

void ShuffleNetV2::thread_tmp_847_fu_9682_p3() {
    tmp_847_fu_9682_p3 = esl_concat<5,3>(co46_reg_2918.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_848_fu_25765_p2() {
    tmp_848_fu_25765_p2 = (!p_shl220_cast_fu_25751_p1.read().is_01() || !p_shl221_cast_fu_25761_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl220_cast_fu_25751_p1.read()) - sc_biguint<8>(p_shl221_cast_fu_25761_p1.read()));
}

void ShuffleNetV2::thread_tmp_849_fu_25771_p2() {
    tmp_849_fu_25771_p2 = (!tmp_848_fu_25765_p2.read().is_01() || !tmp_1090_cast_reg_36683.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_848_fu_25765_p2.read()) + sc_biguint<8>(tmp_1090_cast_reg_36683.read()));
}

void ShuffleNetV2::thread_tmp_850_fu_25819_p2() {
    tmp_850_fu_25819_p2 = (!p_shl222_cast_fu_25815_p1.read().is_01() || !p_shl220_cast1_fu_25747_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl222_cast_fu_25815_p1.read()) - sc_biguint<10>(p_shl220_cast1_fu_25747_p1.read()));
}

void ShuffleNetV2::thread_tmp_851_fu_25835_p2() {
    tmp_851_fu_25835_p2 = (!tmp67_fu_25829_p2.read().is_01() || !co153_cast_reg_36665.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp67_fu_25829_p2.read()) + sc_biguint<12>(co153_cast_reg_36665.read()));
}

void ShuffleNetV2::thread_tmp_852_fu_26265_p2() {
    tmp_852_fu_26265_p2 = (!p_shl218_cast_fu_26251_p1.read().is_01() || !p_shl219_cast_fu_26261_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl218_cast_fu_26251_p1.read()) - sc_biguint<8>(p_shl219_cast_fu_26261_p1.read()));
}

void ShuffleNetV2::thread_tmp_853_cast1_fu_26114_p1() {
    tmp_853_cast1_fu_26114_p1 = esl_zext<13,3>(h_101_fu_26108_p2.read());
}

void ShuffleNetV2::thread_tmp_853_cast2_fu_26118_p1() {
    tmp_853_cast2_fu_26118_p1 = esl_zext<12,3>(h_101_fu_26108_p2.read());
}

void ShuffleNetV2::thread_tmp_853_cast_fu_19896_p1() {
    tmp_853_cast_fu_19896_p1 = esl_zext<7,4>(p_lshr_f13_cast_fu_19886_p4.read());
}

void ShuffleNetV2::thread_tmp_853_fu_9694_p2() {
    tmp_853_fu_9694_p2 = (!p_shl353_cast_fu_9678_p1.read().is_01() || !p_shl354_cast_fu_9690_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl353_cast_fu_9678_p1.read()) - sc_biguint<11>(p_shl354_cast_fu_9690_p1.read()));
}

void ShuffleNetV2::thread_tmp_854_fu_26301_p2() {
    tmp_854_fu_26301_p2 = (!tmp_852_reg_36840.read().is_01() || !ci71_cast_fu_26285_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_852_reg_36840.read()) + sc_biguint<8>(ci71_cast_fu_26285_p1.read()));
}

void ShuffleNetV2::thread_tmp_855_cast_fu_26306_p1() {
    tmp_855_cast_fu_26306_p1 = esl_sext<15,8>(tmp_854_fu_26301_p2.read());
}

void ShuffleNetV2::thread_tmp_855_fu_9621_p3() {
    tmp_855_fu_9621_p3 = esl_concat<8,5>(tmp_307_fu_9615_p2.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_856_cast1_fu_26310_p1() {
    tmp_856_cast1_fu_26310_p1 = esl_zext<19,5>(ci71_reg_5640.read());
}

void ShuffleNetV2::thread_tmp_856_cast_fu_20182_p1() {
    tmp_856_cast_fu_20182_p1 = esl_sext<11,7>(tmp_636_fu_20176_p2.read());
}

void ShuffleNetV2::thread_tmp_856_fu_9633_p3() {
    tmp_856_fu_9633_p3 = esl_concat<8,3>(tmp_307_fu_9615_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_857_cast_fu_20220_p1() {
    tmp_857_cast_fu_20220_p1 = esl_sext<32,7>(tmp_637_reg_34938.read());
}

void ShuffleNetV2::thread_tmp_857_fu_9645_p2() {
    tmp_857_fu_9645_p2 = (!p_shl351_cast_fu_9629_p1.read().is_01() || !p_shl352_cast_fu_9641_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl351_cast_fu_9629_p1.read()) - sc_biguint<14>(p_shl352_cast_fu_9641_p1.read()));
}

void ShuffleNetV2::thread_tmp_858_cast1_fu_26196_p1() {
    tmp_858_cast1_fu_26196_p1 = esl_zext<14,3>(w_100_fu_26190_p2.read());
}

void ShuffleNetV2::thread_tmp_858_cast_fu_26200_p1() {
    tmp_858_cast_fu_26200_p1 = esl_zext<13,3>(w_100_fu_26190_p2.read());
}

void ShuffleNetV2::thread_tmp_858_fu_9651_p1() {
    tmp_858_fu_9651_p1 = esl_sext<33,14>(tmp_857_fu_9645_p2.read());
}

void ShuffleNetV2::thread_tmp_859_fu_26551_p2() {
    tmp_859_fu_26551_p2 = (!p_shl223_cast_fu_26535_p1.read().is_01() || !p_shl224_cast_fu_26547_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl223_cast_fu_26535_p1.read()) - sc_biguint<8>(p_shl224_cast_fu_26547_p1.read()));
}

void ShuffleNetV2::thread_tmp_860_cast_fu_7492_p1() {
    tmp_860_cast_fu_7492_p1 = esl_zext<64,9>(tmp_521_reg_31052.read());
}

void ShuffleNetV2::thread_tmp_860_fu_9655_p2() {
    tmp_860_fu_9655_p2 = (!tmp_858_fu_9651_p1.read().is_01() || !tmp_490_cast_reg_30684.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_858_fu_9651_p1.read()) + sc_bigint<33>(tmp_490_cast_reg_30684.read()));
}

void ShuffleNetV2::thread_tmp_861_fu_26561_p2() {
    tmp_861_fu_26561_p2 = (!i161_cast1_reg_36898.read().is_01() || !tmp_859_fu_26551_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(i161_cast1_reg_36898.read()) + sc_biguint<8>(tmp_859_fu_26551_p2.read()));
}

void ShuffleNetV2::thread_tmp_862_fu_26598_p1() {
    tmp_862_fu_26598_p1 = esl_zext<64,32>(tmp_1122_cast_fu_26595_p1.read());
}

void ShuffleNetV2::thread_tmp_863_fu_26572_p2() {
    tmp_863_fu_26572_p2 = (!tmp70_fu_26566_p2.read().is_01() || !i161_cast_reg_36893.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp70_fu_26566_p2.read()) + sc_biguint<12>(i161_cast_reg_36893.read()));
}

void ShuffleNetV2::thread_tmp_864_cast_fu_26577_p1() {
    tmp_864_cast_fu_26577_p1 = esl_zext<33,12>(tmp_863_reg_36924.read());
}

void ShuffleNetV2::thread_tmp_864_fu_9660_p1() {
    tmp_864_fu_9660_p1 = esl_sext<64,33>(tmp_860_fu_9655_p2.read());
}

void ShuffleNetV2::thread_tmp_865_fu_26356_p2() {
    tmp_865_fu_26356_p2 = (!p_shl225_cast_fu_26342_p1.read().is_01() || !p_shl226_cast_fu_26352_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl225_cast_fu_26342_p1.read()) - sc_biguint<8>(p_shl226_cast_fu_26352_p1.read()));
}

void ShuffleNetV2::thread_tmp_866_fu_26362_p2() {
    tmp_866_fu_26362_p2 = (!tmp_865_fu_26356_p2.read().is_01() || !tmp_1112_cast_reg_36845.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_865_fu_26356_p2.read()) + sc_biguint<8>(tmp_1112_cast_reg_36845.read()));
}

void ShuffleNetV2::thread_tmp_867_fu_26410_p2() {
    tmp_867_fu_26410_p2 = (!p_shl227_cast_fu_26406_p1.read().is_01() || !p_shl225_cast1_fu_26338_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl227_cast_fu_26406_p1.read()) - sc_biguint<10>(p_shl225_cast1_fu_26338_p1.read()));
}

void ShuffleNetV2::thread_tmp_868_fu_26426_p2() {
    tmp_868_fu_26426_p2 = (!tmp69_fu_26420_p2.read().is_01() || !co156_cast_reg_36827.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp69_fu_26420_p2.read()) + sc_biguint<12>(co156_cast_reg_36827.read()));
}

void ShuffleNetV2::thread_tmp_869_cast1_fu_26635_p1() {
    tmp_869_cast1_fu_26635_p1 = esl_zext<13,2>(w101_reg_5695.read());
}

void ShuffleNetV2::thread_tmp_869_cast_fu_26639_p1() {
    tmp_869_cast_fu_26639_p1 = esl_zext<36,2>(w101_reg_5695.read());
}

void ShuffleNetV2::thread_tmp_869_fu_9498_p2() {
    tmp_869_fu_9498_p2 = (!tmp_308_cast_fu_9494_p1.read().is_01() || !tmp_823_reg_31645.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_308_cast_fu_9494_p1.read()) + sc_biguint<10>(tmp_823_reg_31645.read()));
}

void ShuffleNetV2::thread_tmp_870_cast_fu_20041_p1() {
    tmp_870_cast_fu_20041_p1 = esl_sext<11,8>(tmp_647_fu_20035_p2.read());
}

void ShuffleNetV2::thread_tmp_870_fu_27010_p2() {
    tmp_870_fu_27010_p2 = (!p_shl230_cast_fu_26996_p1.read().is_01() || !p_shl231_cast_fu_27006_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl230_cast_fu_26996_p1.read()) - sc_biguint<8>(p_shl231_cast_fu_27006_p1.read()));
}

void ShuffleNetV2::thread_tmp_871_fu_26916_p2() {
    tmp_871_fu_26916_p2 = (!p_shl228_cast_fu_26900_p1.read().is_01() || !p_shl229_cast_fu_26912_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl228_cast_fu_26900_p1.read()) - sc_biguint<8>(p_shl229_cast_fu_26912_p1.read()));
}

void ShuffleNetV2::thread_tmp_872_fu_26926_p2() {
    tmp_872_fu_26926_p2 = (!i165_cast1_reg_37041.read().is_01() || !tmp_871_fu_26916_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(i165_cast1_reg_37041.read()) + sc_biguint<8>(tmp_871_fu_26916_p2.read()));
}

void ShuffleNetV2::thread_tmp_873_fu_26963_p1() {
    tmp_873_fu_26963_p1 = esl_zext<64,32>(tmp_1140_cast_fu_26960_p1.read());
}

void ShuffleNetV2::thread_tmp_874_cast_fu_20559_p1() {
    tmp_874_cast_fu_20559_p1 = esl_sext<11,7>(tmp_651_fu_20553_p2.read());
}

void ShuffleNetV2::thread_tmp_874_fu_26937_p2() {
    tmp_874_fu_26937_p2 = (!tmp72_fu_26931_p2.read().is_01() || !i165_cast_reg_37036.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp72_fu_26931_p2.read()) + sc_biguint<12>(i165_cast_reg_37036.read()));
}

void ShuffleNetV2::thread_tmp_875_cast1_fu_26942_p1() {
    tmp_875_cast1_fu_26942_p1 = esl_zext<33,12>(tmp_874_reg_37067.read());
}

void ShuffleNetV2::thread_tmp_875_cast_fu_20597_p1() {
    tmp_875_cast_fu_20597_p1 = esl_sext<32,7>(tmp_652_reg_35081.read());
}

void ShuffleNetV2::thread_tmp_875_fu_9511_p3() {
    tmp_875_fu_9511_p3 = esl_concat<10,1>(tmp_869_fu_9498_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_876_cast_fu_26659_p1() {
    tmp_876_cast_fu_26659_p1 = esl_zext<11,2>(h102_reg_5706.read());
}

void ShuffleNetV2::thread_tmp_876_fu_26655_p1() {
    tmp_876_fu_26655_p1 = esl_zext<64,2>(h102_reg_5706.read());
}

void ShuffleNetV2::thread_tmp_877_fu_27046_p2() {
    tmp_877_fu_27046_p2 = (!tmp_870_reg_37091.read().is_01() || !ci73_cast_fu_27030_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_870_reg_37091.read()) + sc_biguint<8>(ci73_cast_fu_27030_p1.read()));
}

void ShuffleNetV2::thread_tmp_878_cast_fu_27051_p1() {
    tmp_878_cast_fu_27051_p1 = esl_sext<15,8>(tmp_877_fu_27046_p2.read());
}

void ShuffleNetV2::thread_tmp_878_fu_9523_p2() {
    tmp_878_fu_9523_p2 = (!p_shl349_cast_fu_9503_p3.read().is_01() || !p_shl350_cast_fu_9519_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl349_cast_fu_9503_p3.read()) + sc_biguint<14>(p_shl350_cast_fu_9519_p1.read()));
}

void ShuffleNetV2::thread_tmp_879_cast_fu_27055_p1() {
    tmp_879_cast_fu_27055_p1 = esl_zext<19,5>(ci73_reg_5761.read());
}

void ShuffleNetV2::thread_tmp_879_fu_9529_p2() {
    tmp_879_fu_9529_p2 = (!tmp_308_cast1_fu_9490_p1.read().is_01() || !tmp_833_reg_31650.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_308_cast1_fu_9490_p1.read()) + sc_biguint<11>(tmp_833_reg_31650.read()));
}

void ShuffleNetV2::thread_tmp_880_fu_26703_p2() {
    tmp_880_fu_26703_p2 = (!p_shl234_cast_fu_26687_p1.read().is_01() || !p_shl235_cast_fu_26699_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl234_cast_fu_26687_p1.read()) - sc_biguint<8>(p_shl235_cast_fu_26699_p1.read()));
}

void ShuffleNetV2::thread_tmp_881_fu_26713_p2() {
    tmp_881_fu_26713_p2 = (!tmp_880_fu_26703_p2.read().is_01() || !co159_cast1_reg_36940.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_880_fu_26703_p2.read()) + sc_biguint<8>(co159_cast1_reg_36940.read()));
}

void ShuffleNetV2::thread_tmp_882_cast1_fu_26732_p1() {
    tmp_882_cast1_fu_26732_p1 = esl_zext<35,32>(tmp_1159_cast_fu_26729_p1.read());
}

void ShuffleNetV2::thread_tmp_882_cast_fu_20665_p1() {
    tmp_882_cast_fu_20665_p1 = esl_zext<7,4>(p_lshr_f14_cast_fu_20655_p4.read());
}

void ShuffleNetV2::thread_tmp_882_fu_9542_p3() {
    tmp_882_fu_9542_p3 = esl_concat<11,1>(tmp_879_fu_9529_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_883_fu_26724_p2() {
    tmp_883_fu_26724_p2 = (!co159_cast_reg_36935.read().is_01() || !tmp71_fu_26718_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(co159_cast_reg_36935.read()) + sc_biguint<10>(tmp71_fu_26718_p2.read()));
}

void ShuffleNetV2::thread_tmp_884_cast_fu_20951_p1() {
    tmp_884_cast_fu_20951_p1 = esl_sext<11,7>(tmp_667_fu_20945_p2.read());
}

void ShuffleNetV2::thread_tmp_884_fu_9554_p2() {
    tmp_884_fu_9554_p2 = (!p_shl347_cast_fu_9534_p3.read().is_01() || !p_shl348_cast_fu_9550_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl347_cast_fu_9534_p3.read()) + sc_biguint<15>(p_shl348_cast_fu_9550_p1.read()));
}

void ShuffleNetV2::thread_tmp_885_cast1_fu_26774_p1() {
    tmp_885_cast1_fu_26774_p1 = esl_zext<13,10>(tmp_883_reg_37003.read());
}

void ShuffleNetV2::thread_tmp_885_cast_fu_20989_p1() {
    tmp_885_cast_fu_20989_p1 = esl_sext<32,7>(tmp_668_reg_35189.read());
}

void ShuffleNetV2::thread_tmp_885_fu_9386_p2() {
    tmp_885_fu_9386_p2 = (!tmp_840_reg_31614.read().is_01() || !tmp_309_cast_fu_9382_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_840_reg_31614.read()) + sc_biguint<15>(tmp_309_cast_fu_9382_p1.read()));
}

void ShuffleNetV2::thread_tmp_886_fu_27304_p2() {
    tmp_886_fu_27304_p2 = (!p_shl232_cast_fu_27288_p1.read().is_01() || !p_shl233_cast_fu_27300_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl232_cast_fu_27288_p1.read()) - sc_biguint<8>(p_shl233_cast_fu_27300_p1.read()));
}

void ShuffleNetV2::thread_tmp_887_cast_fu_7681_p1() {
    tmp_887_cast_fu_7681_p1 = esl_sext<64,11>(tmp_527_reg_31104.read());
}

void ShuffleNetV2::thread_tmp_888_fu_27314_p2() {
    tmp_888_fu_27314_p2 = (!i167_cast1_reg_37149.read().is_01() || !tmp_886_fu_27304_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(i167_cast1_reg_37149.read()) + sc_biguint<8>(tmp_886_fu_27304_p2.read()));
}

void ShuffleNetV2::thread_tmp_889_fu_27351_p1() {
    tmp_889_fu_27351_p1 = esl_zext<64,32>(tmp_1150_cast_fu_27348_p1.read());
}

void ShuffleNetV2::thread_tmp_890_fu_27325_p2() {
    tmp_890_fu_27325_p2 = (!tmp74_fu_27319_p2.read().is_01() || !i167_cast_reg_37144.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp74_fu_27319_p2.read()) + sc_biguint<12>(i167_cast_reg_37144.read()));
}

void ShuffleNetV2::thread_tmp_891_cast_fu_27330_p1() {
    tmp_891_cast_fu_27330_p1 = esl_zext<33,12>(tmp_890_reg_37175.read());
}

void ShuffleNetV2::thread_tmp_891_fu_9737_p3() {
    tmp_891_fu_9737_p3 = esl_concat<4,5>(ap_const_lv4_9, tmp_887_reg_2941.read());
}

void ShuffleNetV2::thread_tmp_892_fu_27101_p2() {
    tmp_892_fu_27101_p2 = (!p_shl236_cast_fu_27087_p1.read().is_01() || !p_shl237_cast_fu_27097_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl236_cast_fu_27087_p1.read()) - sc_biguint<8>(p_shl237_cast_fu_27097_p1.read()));
}

void ShuffleNetV2::thread_tmp_893_cast_cast_fu_20334_p1() {
    tmp_893_cast_cast_fu_20334_p1 = esl_sext<8,7>(tmp_660_fu_20328_p2.read());
}

void ShuffleNetV2::thread_tmp_893_fu_27107_p2() {
    tmp_893_fu_27107_p2 = (!tmp_892_fu_27101_p2.read().is_01() || !tmp_1147_cast_reg_37096.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_892_fu_27101_p2.read()) + sc_biguint<8>(tmp_1147_cast_reg_37096.read()));
}

void ShuffleNetV2::thread_tmp_894_cast_fu_20354_p1() {
    tmp_894_cast_fu_20354_p1 = esl_sext<32,7>(tmp_661_reg_35016.read());
}

void ShuffleNetV2::thread_tmp_894_fu_27155_p2() {
    tmp_894_fu_27155_p2 = (!p_shl238_cast_fu_27151_p1.read().is_01() || !p_shl236_cast1_fu_27083_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl238_cast_fu_27151_p1.read()) - sc_biguint<10>(p_shl236_cast1_fu_27083_p1.read()));
}

void ShuffleNetV2::thread_tmp_895_fu_27171_p2() {
    tmp_895_fu_27171_p2 = (!tmp73_fu_27165_p2.read().is_01() || !co161_cast179_cast_reg_37078.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp73_fu_27165_p2.read()) + sc_biguint<11>(co161_cast179_cast_reg_37078.read()));
}

void ShuffleNetV2::thread_tmp_896_fu_27529_p2() {
    tmp_896_fu_27529_p2 = (!co164_cast_fu_27479_p1.read().is_01() || !ap_const_lv8_60.is_01())? sc_lv<8>(): (sc_biguint<8>(co164_cast_fu_27479_p1.read()) + sc_biguint<8>(ap_const_lv8_60));
}

void ShuffleNetV2::thread_tmp_897_cast1_fu_27414_p1() {
    tmp_897_cast1_fu_27414_p1 = esl_zext<12,3>(h_105_fu_27408_p2.read());
}

void ShuffleNetV2::thread_tmp_897_cast_fu_20399_p1() {
    tmp_897_cast_fu_20399_p1 = esl_sext<9,8>(tmp_664_reg_35022.read());
}

void ShuffleNetV2::thread_tmp_897_fu_9745_p1() {
    tmp_897_fu_9745_p1 = esl_zext<33,9>(tmp_891_fu_9737_p3.read());
}

void ShuffleNetV2::thread_tmp_898_fu_27732_p2() {
    tmp_898_fu_27732_p2 = (!p_shl239_cast_fu_27718_p1.read().is_01() || !p_shl240_cast_fu_27728_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl239_cast_fu_27718_p1.read()) - sc_biguint<8>(p_shl240_cast_fu_27728_p1.read()));
}

void ShuffleNetV2::thread_tmp_899_cast1_fu_27581_p1() {
    tmp_899_cast1_fu_27581_p1 = esl_zext<12,3>(h_107_fu_27575_p2.read());
}

void ShuffleNetV2::thread_tmp_899_cast_fu_27585_p1() {
    tmp_899_cast_fu_27585_p1 = esl_zext<13,3>(h_107_fu_27575_p2.read());
}

void ShuffleNetV2::thread_tmp_899_fu_9749_p2() {
    tmp_899_fu_9749_p2 = (!tmp_897_fu_9745_p1.read().is_01() || !tmp_482_cast_reg_30621.read().is_01())? sc_lv<33>(): (sc_biguint<33>(tmp_897_fu_9745_p1.read()) + sc_bigint<33>(tmp_482_cast_reg_30621.read()));
}

void ShuffleNetV2::thread_tmp_900_cast_fu_27465_p1() {
    tmp_900_cast_fu_27465_p1 = esl_zext<14,3>(w_104_fu_27459_p2.read());
}

void ShuffleNetV2::thread_tmp_900_fu_9754_p1() {
    tmp_900_fu_9754_p1 = esl_sext<64,33>(tmp_899_fu_9749_p2.read());
}

void ShuffleNetV2::thread_tmp_901_fu_27768_p2() {
    tmp_901_fu_27768_p2 = (!tmp_898_reg_37297.read().is_01() || !ci75_cast_fu_27752_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_898_reg_37297.read()) + sc_biguint<8>(ci75_cast_fu_27752_p1.read()));
}

void ShuffleNetV2::thread_tmp_902_cast_fu_27773_p1() {
    tmp_902_cast_fu_27773_p1 = esl_sext<15,8>(tmp_901_fu_27768_p2.read());
}

void ShuffleNetV2::thread_tmp_902_fu_9716_p2() {
    tmp_902_fu_9716_p2 = (!tmp_853_reg_31705.read().is_01() || !tmp_313_cast_fu_9712_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_853_reg_31705.read()) + sc_biguint<11>(tmp_313_cast_fu_9712_p1.read()));
}

void ShuffleNetV2::thread_tmp_903_cast1_fu_27777_p1() {
    tmp_903_cast1_fu_27777_p1 = esl_zext<20,5>(ci75_reg_5882.read());
}

void ShuffleNetV2::thread_tmp_903_cast_fu_20810_p1() {
    tmp_903_cast_fu_20810_p1 = esl_sext<11,8>(tmp_674_fu_20804_p2.read());
}

void ShuffleNetV2::thread_tmp_903_fu_9580_p2() {
    tmp_903_fu_9580_p2 = (!tmp_878_reg_31663.read().is_01() || !tmp_314_cast_fu_9576_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_878_reg_31663.read()) + sc_biguint<14>(tmp_314_cast_fu_9576_p1.read()));
}

void ShuffleNetV2::thread_tmp_904_fu_9585_p2() {
    tmp_904_fu_9585_p2 = (!tmp_884_reg_31668.read().is_01() || !tmp_314_cast1_fu_9572_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_884_reg_31668.read()) + sc_biguint<15>(tmp_314_cast1_fu_9572_p1.read()));
}

void ShuffleNetV2::thread_tmp_905_cast1_fu_27663_p1() {
    tmp_905_cast1_fu_27663_p1 = esl_zext<13,3>(w_106_fu_27657_p2.read());
}

void ShuffleNetV2::thread_tmp_905_cast_fu_27667_p1() {
    tmp_905_cast_fu_27667_p1 = esl_zext<14,3>(w_106_fu_27657_p2.read());
}

void ShuffleNetV2::thread_tmp_905_fu_9851_p2() {
    tmp_905_fu_9851_p2 = (!tmp_482_cast_reg_30621.read().is_01() || !ap_const_lv33_138.is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_482_cast_reg_30621.read()) + sc_biguint<33>(ap_const_lv33_138));
}

void ShuffleNetV2::thread_tmp_906_fu_9856_p1() {
    tmp_906_fu_9856_p1 = esl_sext<64,33>(tmp_905_fu_9851_p2.read());
}

void ShuffleNetV2::thread_tmp_907_fu_28018_p2() {
    tmp_907_fu_28018_p2 = (!p_shl241_cast_fu_28002_p1.read().is_01() || !p_shl242_cast_fu_28014_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl241_cast_fu_28002_p1.read()) - sc_biguint<8>(p_shl242_cast_fu_28014_p1.read()));
}

void ShuffleNetV2::thread_tmp_908_fu_28028_p2() {
    tmp_908_fu_28028_p2 = (!i173_cast1_reg_37355.read().is_01() || !tmp_907_fu_28018_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(i173_cast1_reg_37355.read()) + sc_biguint<8>(tmp_907_fu_28018_p2.read()));
}

void ShuffleNetV2::thread_tmp_909_fu_28065_p1() {
    tmp_909_fu_28065_p1 = esl_zext<64,32>(tmp_1182_cast_fu_28062_p1.read());
}

void ShuffleNetV2::thread_tmp_910_fu_28039_p2() {
    tmp_910_fu_28039_p2 = (!tmp76_fu_28033_p2.read().is_01() || !i173_cast_reg_37350.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp76_fu_28033_p2.read()) + sc_biguint<12>(i173_cast_reg_37350.read()));
}

void ShuffleNetV2::thread_tmp_911_cast_fu_28044_p1() {
    tmp_911_cast_fu_28044_p1 = esl_zext<33,12>(tmp_910_reg_37381.read());
}

void ShuffleNetV2::thread_tmp_911_fu_9785_p3() {
    tmp_911_fu_9785_p3 = esl_concat<5,2>(co48_reg_2953.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_912_fu_27823_p2() {
    tmp_912_fu_27823_p2 = (!p_shl243_cast_fu_27809_p1.read().is_01() || !p_shl244_cast_fu_27819_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl243_cast_fu_27809_p1.read()) - sc_biguint<8>(p_shl244_cast_fu_27819_p1.read()));
}

void ShuffleNetV2::thread_tmp_913_cast_fu_21387_p1() {
    tmp_913_cast_fu_21387_p1 = esl_zext<7,4>(p_lshr_f15_cast_fu_21377_p4.read());
}

void ShuffleNetV2::thread_tmp_913_fu_27829_p2() {
    tmp_913_fu_27829_p2 = (!tmp_912_fu_27823_p2.read().is_01() || !tmp_1178_cast_reg_37302.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_912_fu_27823_p2.read()) + sc_biguint<8>(tmp_1178_cast_reg_37302.read()));
}

void ShuffleNetV2::thread_tmp_914_fu_9797_p2() {
    tmp_914_fu_9797_p2 = (!p_shl356_cast_fu_9793_p1.read().is_01() || !tmp_315_cast_fu_9781_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl356_cast_fu_9793_p1.read()) - sc_biguint<8>(tmp_315_cast_fu_9781_p1.read()));
}

void ShuffleNetV2::thread_tmp_915_fu_27877_p2() {
    tmp_915_fu_27877_p2 = (!p_shl245_cast_fu_27873_p1.read().is_01() || !p_shl243_cast1_fu_27805_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl245_cast_fu_27873_p1.read()) - sc_biguint<10>(p_shl243_cast1_fu_27805_p1.read()));
}

void ShuffleNetV2::thread_tmp_916_cast_fu_21681_p1() {
    tmp_916_cast_fu_21681_p1 = esl_sext<11,7>(tmp_686_fu_21675_p2.read());
}

void ShuffleNetV2::thread_tmp_916_fu_27893_p2() {
    tmp_916_fu_27893_p2 = (!tmp75_fu_27887_p2.read().is_01() || !co166_cast_reg_37284.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp75_fu_27887_p2.read()) + sc_biguint<13>(co166_cast_reg_37284.read()));
}

void ShuffleNetV2::thread_tmp_917_cast_fu_21719_p1() {
    tmp_917_cast_fu_21719_p1 = esl_sext<32,7>(tmp_687_reg_35395.read());
}

void ShuffleNetV2::thread_tmp_917_fu_9823_p4() {
    tmp_917_fu_9823_p4 = esl_concat<6,2>(esl_concat<1,5>(ap_const_lv1_1, co48_reg_2953.read()), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_918_cast1_fu_28102_p1() {
    tmp_918_cast1_fu_28102_p1 = esl_zext<14,2>(w107_reg_5937.read());
}

void ShuffleNetV2::thread_tmp_918_cast_fu_28106_p1() {
    tmp_918_cast_fu_28106_p1 = esl_zext<36,2>(w107_reg_5937.read());
}

void ShuffleNetV2::thread_tmp_918_fu_9833_p1() {
    tmp_918_fu_9833_p1 = esl_sext<9,8>(tmp_917_fu_9823_p4.read());
}

void ShuffleNetV2::thread_tmp_919_fu_28489_p2() {
    tmp_919_fu_28489_p2 = (!p_shl248_cast_fu_28475_p1.read().is_01() || !p_shl249_cast_fu_28485_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl248_cast_fu_28475_p1.read()) - sc_biguint<8>(p_shl249_cast_fu_28485_p1.read()));
}

void ShuffleNetV2::thread_tmp_920_fu_28395_p2() {
    tmp_920_fu_28395_p2 = (!p_shl246_cast_fu_28379_p1.read().is_01() || !p_shl247_cast_fu_28391_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl246_cast_fu_28379_p1.read()) - sc_biguint<8>(p_shl247_cast_fu_28391_p1.read()));
}

void ShuffleNetV2::thread_tmp_921_fu_28405_p2() {
    tmp_921_fu_28405_p2 = (!i177_cast1_reg_37498.read().is_01() || !tmp_920_fu_28395_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(i177_cast1_reg_37498.read()) + sc_biguint<8>(tmp_920_fu_28395_p2.read()));
}

void ShuffleNetV2::thread_tmp_922_fu_28442_p1() {
    tmp_922_fu_28442_p1 = esl_zext<64,32>(tmp_1200_cast_fu_28439_p1.read());
}

void ShuffleNetV2::thread_tmp_923_fu_28416_p2() {
    tmp_923_fu_28416_p2 = (!tmp78_fu_28410_p2.read().is_01() || !i177_cast_reg_37493.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp78_fu_28410_p2.read()) + sc_biguint<12>(i177_cast_reg_37493.read()));
}

void ShuffleNetV2::thread_tmp_924_cast_fu_28421_p1() {
    tmp_924_cast_fu_28421_p1 = esl_zext<33,12>(tmp_923_reg_37524.read());
}

void ShuffleNetV2::thread_tmp_924_fu_9841_p2() {
    tmp_924_fu_9841_p2 = (!p_shl355_cast_fu_9837_p1.read().is_01() || !tmp_317_cast_fu_9819_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl355_cast_fu_9837_p1.read()) - sc_biguint<10>(tmp_317_cast_fu_9819_p1.read()));
}

void ShuffleNetV2::thread_tmp_925_cast_fu_28126_p1() {
    tmp_925_cast_fu_28126_p1 = esl_zext<11,2>(h108_reg_5948.read());
}

void ShuffleNetV2::thread_tmp_925_fu_28122_p1() {
    tmp_925_fu_28122_p1 = esl_zext<64,2>(h108_reg_5948.read());
}

void ShuffleNetV2::thread_tmp_926_fu_28525_p2() {
    tmp_926_fu_28525_p2 = (!tmp_919_reg_37548.read().is_01() || !ci77_cast_fu_28509_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_919_reg_37548.read()) + sc_biguint<8>(ci77_cast_fu_28509_p1.read()));
}

void ShuffleNetV2::thread_tmp_927_cast_fu_28530_p1() {
    tmp_927_cast_fu_28530_p1 = esl_sext<15,8>(tmp_926_fu_28525_p2.read());
}

void ShuffleNetV2::thread_tmp_927_fu_9886_p2() {
    tmp_927_fu_9886_p2 = (!tmp_321_cast_fu_9882_p1.read().is_01() || !tmp_1180_cast_reg_31750.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_321_cast_fu_9882_p1.read()) + sc_bigint<11>(tmp_1180_cast_reg_31750.read()));
}

void ShuffleNetV2::thread_tmp_928_cast_fu_28534_p1() {
    tmp_928_cast_fu_28534_p1 = esl_zext<20,5>(ci77_reg_6003.read());
}

void ShuffleNetV2::thread_tmp_928_fu_9895_p3() {
    tmp_928_fu_9895_p3 = esl_concat<11,2>(tmp_927_fu_9886_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_929_fu_28170_p2() {
    tmp_929_fu_28170_p2 = (!p_shl252_cast_fu_28154_p1.read().is_01() || !p_shl253_cast_fu_28166_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl252_cast_fu_28154_p1.read()) - sc_biguint<8>(p_shl253_cast_fu_28166_p1.read()));
}

void ShuffleNetV2::thread_tmp_930_cast_cast_fu_21532_p1() {
    tmp_930_cast_cast_fu_21532_p1 = esl_sext<10,8>(tmp_697_fu_21526_p2.read());
}

void ShuffleNetV2::thread_tmp_930_fu_28180_p2() {
    tmp_930_fu_28180_p2 = (!tmp_929_fu_28170_p2.read().is_01() || !co169_cast_reg_37397.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_929_fu_28170_p2.read()) + sc_biguint<8>(co169_cast_reg_37397.read()));
}

void ShuffleNetV2::thread_tmp_931_fu_9907_p2() {
    tmp_931_fu_9907_p2 = (!p_shl213_fu_9903_p1.read().is_01() || !tmp_1181_cast1_fu_9891_p1.read().is_01())? sc_lv<64>(): (sc_bigint<64>(p_shl213_fu_9903_p1.read()) - sc_bigint<64>(tmp_1181_cast1_fu_9891_p1.read()));
}

void ShuffleNetV2::thread_tmp_932_cast_fu_28199_p1() {
    tmp_932_cast_fu_28199_p1 = esl_zext<35,32>(tmp_1219_cast_fu_28196_p1.read());
}

void ShuffleNetV2::thread_tmp_932_fu_9913_p2() {
    tmp_932_fu_9913_p2 = (!tmp_321_cast1_fu_9878_p1.read().is_01() || !tmp_1177_cast_reg_31745.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_321_cast1_fu_9878_p1.read()) + sc_bigint<9>(tmp_1177_cast_reg_31745.read()));
}

void ShuffleNetV2::thread_tmp_933_fu_28191_p2() {
    tmp_933_fu_28191_p2 = (!co169_cast151_cast_reg_37392.read().is_01() || !tmp77_fu_28185_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(co169_cast151_cast_reg_37392.read()) + sc_biguint<9>(tmp77_fu_28185_p2.read()));
}

void ShuffleNetV2::thread_tmp_934_cast_fu_22050_p1() {
    tmp_934_cast_fu_22050_p1 = esl_sext<11,7>(tmp_701_fu_22044_p2.read());
}

void ShuffleNetV2::thread_tmp_934_fu_9929_p2() {
    tmp_934_fu_9929_p2 = (!ap_const_lv9_2.is_01())? sc_lv<9>(): tmp_932_reg_31769.read() << (unsigned short)ap_const_lv9_2.to_uint();
}

void ShuffleNetV2::thread_tmp_935_cast1_fu_28244_p1() {
    tmp_935_cast1_fu_28244_p1 = esl_zext<13,10>(tmp_1222_cast_fu_28241_p1.read());
}

void ShuffleNetV2::thread_tmp_935_cast_fu_22088_p1() {
    tmp_935_cast_fu_22088_p1 = esl_sext<32,7>(tmp_702_reg_35538.read());
}

void ShuffleNetV2::thread_tmp_935_fu_9934_p2() {
    tmp_935_fu_9934_p2 = (!tmp_934_fu_9929_p2.read().is_01() || !tmp_932_reg_31769.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_934_fu_9929_p2.read()) - sc_biguint<9>(tmp_932_reg_31769.read()));
}

void ShuffleNetV2::thread_tmp_936_fu_28775_p2() {
    tmp_936_fu_28775_p2 = (!p_shl250_cast_fu_28759_p1.read().is_01() || !p_shl251_cast_fu_28771_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl250_cast_fu_28759_p1.read()) - sc_biguint<8>(p_shl251_cast_fu_28771_p1.read()));
}

void ShuffleNetV2::thread_tmp_937_fu_28785_p2() {
    tmp_937_fu_28785_p2 = (!i179_cast1_reg_37606.read().is_01() || !tmp_936_fu_28775_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(i179_cast1_reg_37606.read()) + sc_biguint<8>(tmp_936_fu_28775_p2.read()));
}

void ShuffleNetV2::thread_tmp_938_fu_28822_p1() {
    tmp_938_fu_28822_p1 = esl_zext<64,32>(tmp_1210_cast_fu_28819_p1.read());
}

void ShuffleNetV2::thread_tmp_939_fu_28796_p2() {
    tmp_939_fu_28796_p2 = (!tmp80_fu_28790_p2.read().is_01() || !i179_cast_reg_37601.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp80_fu_28790_p2.read()) + sc_biguint<12>(i179_cast_reg_37601.read()));
}

void ShuffleNetV2::thread_tmp_940_cast_fu_28801_p1() {
    tmp_940_cast_fu_28801_p1 = esl_zext<33,12>(tmp_939_reg_37632.read());
}

void ShuffleNetV2::thread_tmp_940_fu_9918_p2() {
    tmp_940_fu_9918_p2 = (!tmp_373_reg_30725.read().is_01() || !tmp_931_fu_9907_p2.read().is_01())? sc_lv<64>(): (sc_bigint<64>(tmp_373_reg_30725.read()) + sc_biguint<64>(tmp_931_fu_9907_p2.read()));
}

void ShuffleNetV2::thread_tmp_941_fu_28580_p2() {
    tmp_941_fu_28580_p2 = (!p_shl254_cast_fu_28566_p1.read().is_01() || !p_shl255_cast_fu_28576_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl254_cast_fu_28566_p1.read()) - sc_biguint<8>(p_shl255_cast_fu_28576_p1.read()));
}

void ShuffleNetV2::thread_tmp_942_cast_fu_22156_p1() {
    tmp_942_cast_fu_22156_p1 = esl_zext<7,4>(p_lshr_f16_cast_fu_22146_p4.read());
}

void ShuffleNetV2::thread_tmp_942_fu_28586_p2() {
    tmp_942_fu_28586_p2 = (!tmp_941_fu_28580_p2.read().is_01() || !tmp_1207_cast_reg_37553.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_941_fu_28580_p2.read()) + sc_biguint<8>(tmp_1207_cast_reg_37553.read()));
}

void ShuffleNetV2::thread_tmp_943_fu_28634_p2() {
    tmp_943_fu_28634_p2 = (!p_shl256_cast_fu_28630_p1.read().is_01() || !p_shl254_cast1_fu_28562_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl256_cast_fu_28630_p1.read()) - sc_biguint<10>(p_shl254_cast1_fu_28562_p1.read()));
}

void ShuffleNetV2::thread_tmp_944_cast_cast_fu_22450_p1() {
    tmp_944_cast_cast_fu_22450_p1 = esl_sext<10,7>(tmp_717_fu_22444_p2.read());
}

void ShuffleNetV2::thread_tmp_944_fu_28650_p2() {
    tmp_944_fu_28650_p2 = (!tmp79_fu_28644_p2.read().is_01() || !co171_cast_reg_37535.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp79_fu_28644_p2.read()) + sc_biguint<13>(co171_cast_reg_37535.read()));
}

void ShuffleNetV2::thread_tmp_945_cast_fu_22492_p1() {
    tmp_945_cast_fu_22492_p1 = esl_sext<32,7>(tmp_718_reg_35646.read());
}

void ShuffleNetV2::thread_tmp_945_fu_29000_p2() {
    tmp_945_fu_29000_p2 = (!co174_cast_fu_28950_p1.read().is_01() || !ap_const_lv8_60.is_01())? sc_lv<8>(): (sc_biguint<8>(co174_cast_fu_28950_p1.read()) + sc_biguint<8>(ap_const_lv8_60));
}

void ShuffleNetV2::thread_tmp_946_cast_fu_28885_p1() {
    tmp_946_cast_fu_28885_p1 = esl_zext<12,3>(h_111_fu_28879_p2.read());
}

void ShuffleNetV2::thread_tmp_946_fu_10054_p2() {
    tmp_946_fu_10054_p2 = (!tmp_482_cast_reg_30621.read().is_01() || !ap_const_lv33_150.is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_482_cast_reg_30621.read()) + sc_biguint<33>(ap_const_lv33_150));
}

void ShuffleNetV2::thread_tmp_947_fu_29203_p2() {
    tmp_947_fu_29203_p2 = (!p_shl257_cast_fu_29189_p1.read().is_01() || !p_shl258_cast_fu_29199_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl257_cast_fu_29189_p1.read()) - sc_biguint<8>(p_shl258_cast_fu_29199_p1.read()));
}

void ShuffleNetV2::thread_tmp_948_cast1_fu_29052_p1() {
    tmp_948_cast1_fu_29052_p1 = esl_zext<12,3>(h_113_fu_29046_p2.read());
}

void ShuffleNetV2::thread_tmp_948_cast2_fu_29056_p1() {
    tmp_948_cast2_fu_29056_p1 = esl_zext<13,3>(h_113_fu_29046_p2.read());
}

void ShuffleNetV2::thread_tmp_948_cast_fu_22470_p1() {
    tmp_948_cast_fu_22470_p1 = esl_sext<11,10>(tmp_720_reg_35651.read());
}

void ShuffleNetV2::thread_tmp_948_fu_10059_p1() {
    tmp_948_fu_10059_p1 = esl_sext<64,33>(tmp_946_fu_10054_p2.read());
}

void ShuffleNetV2::thread_tmp_949_cast_fu_28936_p1() {
    tmp_949_cast_fu_28936_p1 = esl_zext<14,3>(w_110_fu_28930_p2.read());
}

void ShuffleNetV2::thread_tmp_949_fu_10069_p3() {
    tmp_949_fu_10069_p3 = esl_concat<5,5>(co50_reg_2998.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_950_fu_29239_p2() {
    tmp_950_fu_29239_p2 = (!tmp_947_reg_37754.read().is_01() || !ci79_cast_fu_29223_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_947_reg_37754.read()) + sc_biguint<8>(ci79_cast_fu_29223_p1.read()));
}

void ShuffleNetV2::thread_tmp_951_fu_10081_p3() {
    tmp_951_fu_10081_p3 = esl_concat<5,3>(co50_reg_2998.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_952_cast_fu_29244_p1() {
    tmp_952_cast_fu_29244_p1 = esl_sext<15,8>(tmp_950_fu_29239_p2.read());
}

void ShuffleNetV2::thread_tmp_952_fu_10093_p2() {
    tmp_952_fu_10093_p2 = (!p_shl361_cast_fu_10077_p1.read().is_01() || !p_shl362_cast_fu_10089_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl361_cast_fu_10077_p1.read()) - sc_biguint<11>(p_shl362_cast_fu_10089_p1.read()));
}

void ShuffleNetV2::thread_tmp_953_cast1_fu_29248_p1() {
    tmp_953_cast1_fu_29248_p1 = esl_zext<20,5>(ci79_reg_6124.read());
}

void ShuffleNetV2::thread_tmp_953_cast_fu_21833_p1() {
    tmp_953_cast_fu_21833_p1 = esl_sext<10,7>(tmp_710_fu_21827_p2.read());
}

void ShuffleNetV2::thread_tmp_953_fu_9993_p4() {
    tmp_953_fu_9993_p4 = esl_concat<7,5>(esl_concat<2,5>(ap_const_lv2_2, co50_reg_2998.read()), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_954_cast1_fu_29134_p1() {
    tmp_954_cast1_fu_29134_p1 = esl_zext<13,3>(w_112_fu_29128_p2.read());
}

void ShuffleNetV2::thread_tmp_954_cast2_fu_29138_p1() {
    tmp_954_cast2_fu_29138_p1 = esl_zext<14,3>(w_112_fu_29128_p2.read());
}

void ShuffleNetV2::thread_tmp_954_cast_fu_21853_p1() {
    tmp_954_cast_fu_21853_p1 = esl_sext<32,7>(tmp_711_reg_35473.read());
}

void ShuffleNetV2::thread_tmp_954_fu_10003_p1() {
    tmp_954_fu_10003_p1 = esl_sext<13,12>(tmp_953_fu_9993_p4.read());
}

void ShuffleNetV2::thread_tmp_955_fu_29489_p2() {
    tmp_955_fu_29489_p2 = (!p_shl259_cast_fu_29473_p1.read().is_01() || !p_shl260_cast_fu_29485_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl259_cast_fu_29473_p1.read()) - sc_biguint<8>(p_shl260_cast_fu_29485_p1.read()));
}

void ShuffleNetV2::thread_tmp_956_fu_29499_p2() {
    tmp_956_fu_29499_p2 = (!i185_cast1_reg_37812.read().is_01() || !tmp_955_fu_29489_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(i185_cast1_reg_37812.read()) + sc_biguint<8>(tmp_955_fu_29489_p2.read()));
}

void ShuffleNetV2::thread_tmp_957_fu_29536_p1() {
    tmp_957_fu_29536_p1 = esl_zext<64,32>(tmp_1242_cast_fu_29533_p1.read());
}

void ShuffleNetV2::thread_tmp_958_fu_29510_p2() {
    tmp_958_fu_29510_p2 = (!tmp82_fu_29504_p2.read().is_01() || !i185_cast_reg_37807.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp82_fu_29504_p2.read()) + sc_biguint<12>(i185_cast_reg_37807.read()));
}

void ShuffleNetV2::thread_tmp_959_fu_10011_p4() {
    tmp_959_fu_10011_p4 = esl_concat<7,3>(esl_concat<2,5>(ap_const_lv2_2, co50_reg_2998.read()), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_960_cast_fu_29515_p1() {
    tmp_960_cast_fu_29515_p1 = esl_zext<33,12>(tmp_958_reg_37838.read());
}

void ShuffleNetV2::thread_tmp_960_fu_10021_p1() {
    tmp_960_fu_10021_p1 = esl_sext<11,10>(tmp_959_fu_10011_p4.read());
}

void ShuffleNetV2::thread_tmp_961_fu_29294_p2() {
    tmp_961_fu_29294_p2 = (!p_shl261_cast_fu_29280_p1.read().is_01() || !p_shl262_cast_fu_29290_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl261_cast_fu_29280_p1.read()) - sc_biguint<8>(p_shl262_cast_fu_29290_p1.read()));
}

void ShuffleNetV2::thread_tmp_962_fu_10029_p2() {
    tmp_962_fu_10029_p2 = (!p_shl359_cast_fu_10007_p1.read().is_01() || !p_shl360_cast_fu_10025_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl359_cast_fu_10007_p1.read()) - sc_biguint<14>(p_shl360_cast_fu_10025_p1.read()));
}

void ShuffleNetV2::thread_tmp_963_cast_cast_fu_22301_p1() {
    tmp_963_cast_cast_fu_22301_p1 = esl_sext<10,8>(tmp_724_fu_22295_p2.read());
}

void ShuffleNetV2::thread_tmp_963_fu_10035_p1() {
    tmp_963_fu_10035_p1 = esl_sext<33,14>(tmp_962_fu_10029_p2.read());
}

void ShuffleNetV2::thread_tmp_964_fu_29300_p2() {
    tmp_964_fu_29300_p2 = (!tmp_961_fu_29294_p2.read().is_01() || !tmp_1238_cast_reg_37759.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_961_fu_29294_p2.read()) + sc_biguint<8>(tmp_1238_cast_reg_37759.read()));
}

void ShuffleNetV2::thread_tmp_965_fu_10039_p2() {
    tmp_965_fu_10039_p2 = (!tmp_963_fu_10035_p1.read().is_01() || !tmp_490_cast_reg_30684.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_963_fu_10035_p1.read()) + sc_bigint<33>(tmp_490_cast_reg_30684.read()));
}

void ShuffleNetV2::thread_tmp_966_fu_29348_p2() {
    tmp_966_fu_29348_p2 = (!p_shl263_cast_fu_29344_p1.read().is_01() || !p_shl261_cast1_fu_29276_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl263_cast_fu_29344_p1.read()) - sc_biguint<10>(p_shl261_cast1_fu_29276_p1.read()));
}

void ShuffleNetV2::thread_tmp_967_fu_29364_p2() {
    tmp_967_fu_29364_p2 = (!tmp81_fu_29358_p2.read().is_01() || !co176_cast_reg_37741.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp81_fu_29358_p2.read()) + sc_biguint<13>(co176_cast_reg_37741.read()));
}

void ShuffleNetV2::thread_tmp_968_cast1_fu_29573_p1() {
    tmp_968_cast1_fu_29573_p1 = esl_zext<15,2>(w113_reg_6179.read());
}

void ShuffleNetV2::thread_tmp_968_cast_fu_29577_p1() {
    tmp_968_cast_fu_29577_p1 = esl_zext<36,2>(w113_reg_6179.read());
}

void ShuffleNetV2::thread_tmp_968_fu_10044_p1() {
    tmp_968_fu_10044_p1 = esl_sext<64,33>(tmp_965_fu_10039_p2.read());
}

void ShuffleNetV2::thread_tmp_969_fu_29952_p2() {
    tmp_969_fu_29952_p2 = (!p_shl266_cast_fu_29938_p1.read().is_01() || !p_shl267_cast_fu_29948_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl266_cast_fu_29938_p1.read()) - sc_biguint<8>(p_shl267_cast_fu_29948_p1.read()));
}

void ShuffleNetV2::thread_tmp_970_fu_29858_p2() {
    tmp_970_fu_29858_p2 = (!p_shl264_cast_fu_29842_p1.read().is_01() || !p_shl265_cast_fu_29854_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl264_cast_fu_29842_p1.read()) - sc_biguint<8>(p_shl265_cast_fu_29854_p1.read()));
}

void ShuffleNetV2::thread_tmp_971_fu_29868_p2() {
    tmp_971_fu_29868_p2 = (!i189_cast1_reg_37955.read().is_01() || !tmp_970_fu_29858_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(i189_cast1_reg_37955.read()) + sc_biguint<8>(tmp_970_fu_29858_p2.read()));
}

void ShuffleNetV2::thread_tmp_972_fu_29905_p1() {
    tmp_972_fu_29905_p1 = esl_zext<64,32>(tmp_1260_cast_fu_29902_p1.read());
}

void ShuffleNetV2::thread_tmp_973_cast_fu_22890_p1() {
    tmp_973_cast_fu_22890_p1 = esl_zext<7,4>(p_lshr_f17_cast_fu_22880_p4.read());
}

void ShuffleNetV2::thread_tmp_973_fu_29879_p2() {
    tmp_973_fu_29879_p2 = (!tmp84_fu_29873_p2.read().is_01() || !i189_cast_reg_37950.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp84_fu_29873_p2.read()) + sc_biguint<12>(i189_cast_reg_37950.read()));
}

void ShuffleNetV2::thread_tmp_974_cast_fu_29884_p1() {
    tmp_974_cast_fu_29884_p1 = esl_zext<33,12>(tmp_973_reg_37981.read());
}

void ShuffleNetV2::thread_tmp_974_fu_9955_p2() {
    tmp_974_fu_9955_p2 = (!tmp_935_reg_31781.read().is_01() || !tmp_322_cast_fu_9951_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_935_reg_31781.read()) + sc_biguint<9>(tmp_322_cast_fu_9951_p1.read()));
}

void ShuffleNetV2::thread_tmp_975_cast_fu_29597_p1() {
    tmp_975_cast_fu_29597_p1 = esl_zext<11,2>(h114_reg_6190.read());
}

void ShuffleNetV2::thread_tmp_975_fu_29593_p1() {
    tmp_975_fu_29593_p1 = esl_zext<64,2>(h114_reg_6190.read());
}

void ShuffleNetV2::thread_tmp_976_cast_cast_fu_23184_p1() {
    tmp_976_cast_cast_fu_23184_p1 = esl_sext<10,7>(tmp_736_fu_23178_p2.read());
}

void ShuffleNetV2::thread_tmp_976_fu_29988_p2() {
    tmp_976_fu_29988_p2 = (!tmp_969_reg_38005.read().is_01() || !ci81_cast_fu_29972_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_969_reg_38005.read()) + sc_biguint<8>(ci81_cast_fu_29972_p1.read()));
}

void ShuffleNetV2::thread_tmp_977_cast1_fu_29993_p1() {
    tmp_977_cast1_fu_29993_p1 = esl_sext<15,8>(tmp_976_fu_29988_p2.read());
}

void ShuffleNetV2::thread_tmp_977_cast_fu_23226_p1() {
    tmp_977_cast_fu_23226_p1 = esl_sext<32,7>(tmp_737_reg_35852.read());
}

void ShuffleNetV2::thread_tmp_977_fu_10115_p2() {
    tmp_977_fu_10115_p2 = (!tmp_952_reg_31827.read().is_01() || !tmp_326_cast_fu_10111_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_952_reg_31827.read()) + sc_biguint<11>(tmp_326_cast_fu_10111_p1.read()));
}

void ShuffleNetV2::thread_tmp_978_cast_fu_29997_p1() {
    tmp_978_cast_fu_29997_p1 = esl_zext<20,5>(ci81_reg_6245.read());
}

void ShuffleNetV2::thread_tmp_978_fu_10153_p3() {
    tmp_978_fu_10153_p3 = esl_concat<5,4>(co52_reg_3033.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_979_fu_29641_p2() {
    tmp_979_fu_29641_p2 = (!p_shl270_cast_fu_29625_p1.read().is_01() || !p_shl271_cast_fu_29637_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl270_cast_fu_29625_p1.read()) - sc_biguint<8>(p_shl271_cast_fu_29637_p1.read()));
}

void ShuffleNetV2::thread_tmp_980_cast_fu_23204_p1() {
    tmp_980_cast_fu_23204_p1 = esl_sext<11,10>(tmp_739_reg_35857.read());
}

void ShuffleNetV2::thread_tmp_980_fu_29651_p2() {
    tmp_980_fu_29651_p2 = (!tmp_979_fu_29641_p2.read().is_01() || !co179_cast1_reg_37854.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_979_fu_29641_p2.read()) + sc_biguint<8>(co179_cast1_reg_37854.read()));
}

void ShuffleNetV2::thread_tmp_981_fu_10165_p3() {
    tmp_981_fu_10165_p3 = esl_concat<5,1>(co52_reg_3033.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_982_cast_fu_29670_p1() {
    tmp_982_cast_fu_29670_p1 = esl_zext<35,32>(tmp_1279_cast_fu_29667_p1.read());
}

void ShuffleNetV2::thread_tmp_982_fu_10177_p2() {
    tmp_982_fu_10177_p2 = (!p_shl364_cast_fu_10173_p1.read().is_01() || !p_shl363_cast_fu_10161_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl364_cast_fu_10173_p1.read()) + sc_biguint<10>(p_shl363_cast_fu_10161_p1.read()));
}

void ShuffleNetV2::thread_tmp_983_fu_29662_p2() {
    tmp_983_fu_29662_p2 = (!co179_cast_reg_37849.read().is_01() || !tmp83_fu_29656_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(co179_cast_reg_37849.read()) + sc_biguint<11>(tmp83_fu_29656_p2.read()));
}

void ShuffleNetV2::thread_tmp_984_fu_10276_p1() {
    tmp_984_fu_10276_p1 = co54_reg_3066.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_985_cast_fu_29712_p1() {
    tmp_985_cast_fu_29712_p1 = esl_zext<14,11>(tmp_983_reg_37917.read());
}

void ShuffleNetV2::thread_tmp_985_fu_10199_p2() {
    tmp_985_fu_10199_p2 = (!tmp_328_cast_fu_10195_p1.read().is_01() || !tmp_982_reg_31861.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_328_cast_fu_10195_p1.read()) + sc_biguint<10>(tmp_982_reg_31861.read()));
}

void ShuffleNetV2::thread_tmp_986_fu_30238_p2() {
    tmp_986_fu_30238_p2 = (!p_shl268_cast_fu_30222_p1.read().is_01() || !p_shl269_cast_fu_30234_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl268_cast_fu_30222_p1.read()) - sc_biguint<8>(p_shl269_cast_fu_30234_p1.read()));
}

void ShuffleNetV2::thread_tmp_987_fu_30248_p2() {
    tmp_987_fu_30248_p2 = (!i191_cast1_reg_38063.read().is_01() || !tmp_986_fu_30238_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(i191_cast1_reg_38063.read()) + sc_biguint<8>(tmp_986_fu_30238_p2.read()));
}

void ShuffleNetV2::thread_tmp_988_fu_30285_p1() {
    tmp_988_fu_30285_p1 = esl_zext<64,32>(tmp_1270_cast_fu_30282_p1.read());
}

void ShuffleNetV2::thread_tmp_989_fu_30259_p2() {
    tmp_989_fu_30259_p2 = (!tmp86_fu_30253_p2.read().is_01() || !i191_cast_reg_38058.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp86_fu_30253_p2.read()) + sc_biguint<12>(i191_cast_reg_38058.read()));
}

void ShuffleNetV2::thread_tmp_990_cast_cast_fu_23035_p1() {
    tmp_990_cast_cast_fu_23035_p1 = esl_sext<9,8>(tmp_747_fu_23029_p2.read());
}

void ShuffleNetV2::thread_tmp_990_cast_fu_30264_p1() {
    tmp_990_cast_fu_30264_p1 = esl_zext<33,12>(tmp_989_reg_38089.read());
}

void ShuffleNetV2::thread_tmp_990_fu_10204_p3() {
    tmp_990_fu_10204_p3 = esl_concat<10,4>(tmp_985_fu_10199_p2.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_991_fu_30043_p2() {
    tmp_991_fu_30043_p2 = (!p_shl272_cast_fu_30029_p1.read().is_01() || !p_shl273_cast_fu_30039_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl272_cast_fu_30029_p1.read()) - sc_biguint<8>(p_shl273_cast_fu_30039_p1.read()));
}

void ShuffleNetV2::thread_tmp_992_fu_30049_p2() {
    tmp_992_fu_30049_p2 = (!tmp_991_fu_30043_p2.read().is_01() || !tmp_1267_cast_reg_38010.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_991_fu_30043_p2.read()) + sc_biguint<8>(tmp_1267_cast_reg_38010.read()));
}

void ShuffleNetV2::thread_tmp_993_fu_30097_p2() {
    tmp_993_fu_30097_p2 = (!p_shl274_cast_fu_30093_p1.read().is_01() || !p_shl272_cast1_fu_30025_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl274_cast_fu_30093_p1.read()) - sc_biguint<10>(p_shl272_cast1_fu_30025_p1.read()));
}

void ShuffleNetV2::thread_tmp_994_cast_cast_fu_23553_p1() {
    tmp_994_cast_cast_fu_23553_p1 = esl_sext<10,7>(tmp_751_fu_23547_p2.read());
}

void ShuffleNetV2::thread_tmp_994_fu_30113_p2() {
    tmp_994_fu_30113_p2 = (!tmp85_fu_30107_p2.read().is_01() || !co181_cast_reg_37992.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp85_fu_30107_p2.read()) + sc_biguint<13>(co181_cast_reg_37992.read()));
}

void ShuffleNetV2::thread_tmp_995_cast1_fu_30348_p1() {
    tmp_995_cast1_fu_30348_p1 = esl_zext<12,3>(h_117_fu_30342_p2.read());
}

void ShuffleNetV2::thread_tmp_995_cast_fu_23595_p1() {
    tmp_995_cast_fu_23595_p1 = esl_sext<32,7>(tmp_752_reg_35995.read());
}

void ShuffleNetV2::thread_tmp_995_fu_10216_p3() {
    tmp_995_fu_10216_p3 = esl_concat<10,1>(tmp_985_fu_10199_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_996_cast_fu_30483_p1() {
    tmp_996_cast_fu_30483_p1 = esl_zext<11,3>(w115_reg_6333.read());
}

void ShuffleNetV2::thread_tmp_996_fu_10228_p2() {
    tmp_996_fu_10228_p2 = (!p_shl365_cast_fu_10212_p1.read().is_01() || !p_shl366_cast_fu_10224_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl365_cast_fu_10212_p1.read()) + sc_biguint<15>(p_shl366_cast_fu_10224_p1.read()));
}

void ShuffleNetV2::thread_tmp_997_cast_fu_30500_p1() {
    tmp_997_cast_fu_30500_p1 = esl_zext<13,3>(w_117_fu_30477_p2.read());
}

void ShuffleNetV2::thread_tmp_997_fu_10250_p2() {
    tmp_997_fu_10250_p2 = (!tmp_996_reg_31874.read().is_01() || !tmp_332_cast_fu_10246_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_996_reg_31874.read()) + sc_biguint<15>(tmp_332_cast_fu_10246_p1.read()));
}

void ShuffleNetV2::thread_tmp_998_cast1_fu_30399_p1() {
    tmp_998_cast1_fu_30399_p1 = esl_zext<14,3>(w_1_fu_30393_p2.read());
}

void ShuffleNetV2::thread_tmp_998_cast_fu_23573_p1() {
    tmp_998_cast_fu_23573_p1 = esl_sext<11,10>(tmp_754_reg_36000.read());
}

void ShuffleNetV2::thread_tmp_998_fu_10572_p1() {
    tmp_998_fu_10572_p1 = k_reg_3110.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_999_cast_fu_30547_p1() {
    tmp_999_cast_fu_30547_p1 = esl_zext<13,3>(h118_reg_6344.read());
}

void ShuffleNetV2::thread_tmp_999_fu_10365_p1() {
    tmp_999_fu_10365_p1 = i27_reg_3088.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_fu_6708_p1() {
    tmp_fu_6708_p1 = esl_zext<64,5>(i_reg_2260.read());
}

void ShuffleNetV2::thread_tmp_s_fu_6740_p1() {
    tmp_s_fu_6740_p1 = esl_zext<64,10>(i1_reg_2272.read());
}

void ShuffleNetV2::thread_w_100_fu_26190_p2() {
    w_100_fu_26190_p2 = (!w99_reg_5618.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(w99_reg_5618.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_w_102_fu_26629_p2() {
    w_102_fu_26629_p2 = (!w101_reg_5695.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w101_reg_5695.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_104_fu_27459_p2() {
    w_104_fu_27459_p2 = (!w103_reg_5827.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(w103_reg_5827.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_w_106_fu_27657_p2() {
    w_106_fu_27657_p2 = (!w105_reg_5860.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(w105_reg_5860.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_w_108_fu_28096_p2() {
    w_108_fu_28096_p2 = (!w107_reg_5937.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w107_reg_5937.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_110_fu_28930_p2() {
    w_110_fu_28930_p2 = (!w109_reg_6069.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(w109_reg_6069.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_w_112_fu_29128_p2() {
    w_112_fu_29128_p2 = (!w111_reg_6102.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(w111_reg_6102.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_w_114_fu_29567_p2() {
    w_114_fu_29567_p2 = (!w113_reg_6179.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w113_reg_6179.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_117_fu_30477_p2() {
    w_117_fu_30477_p2 = (!w115_reg_6333.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(w115_reg_6333.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_w_1_fu_30393_p2() {
    w_1_fu_30393_p2 = (!w116_reg_6311.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(w116_reg_6311.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_w_25_fu_6810_p2() {
    w_25_fu_6810_p2 = (!w_reg_2307.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(w_reg_2307.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void ShuffleNetV2::thread_w_26_fu_7086_p2() {
    w_26_fu_7086_p2 = (!w6_reg_2374.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w6_reg_2374.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_27_fu_7406_p2() {
    w_27_fu_7406_p2 = (!w13_reg_2454.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w13_reg_2454.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_28_fu_7872_p2() {
    w_28_fu_7872_p2 = (!w21_reg_2545.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(w21_reg_2545.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_w_29_fu_8154_p2() {
    w_29_fu_8154_p2 = (!w26_reg_2602.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w26_reg_2602.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_31_fu_8538_p2() {
    w_31_fu_8538_p2 = (!w30_reg_2693.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(w30_reg_2693.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_w_33_fu_8728_p2() {
    w_33_fu_8728_p2 = (!w32_reg_2726.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(w32_reg_2726.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_w_35_fu_9010_p2() {
    w_35_fu_9010_p2 = (!w34_reg_2783.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w34_reg_2783.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_37_fu_9376_p2() {
    w_37_fu_9376_p2 = (!w36_reg_2874.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(w36_reg_2874.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_w_39_fu_9566_p2() {
    w_39_fu_9566_p2 = (!w38_reg_2907.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(w38_reg_2907.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_w_41_fu_9872_p2() {
    w_41_fu_9872_p2 = (!w40_reg_2964.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w40_reg_2964.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_43_fu_10240_p2() {
    w_43_fu_10240_p2 = (!w42_reg_3055.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(w42_reg_3055.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_w_45_fu_10678_p2() {
    w_45_fu_10678_p2 = (!w44_reg_3132.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w44_reg_3132.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_47_fu_11447_p2() {
    w_47_fu_11447_p2 = (!w46_reg_3253.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w46_reg_3253.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_49_fu_12360_p2() {
    w_49_fu_12360_p2 = (!w48_reg_3385.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w48_reg_3385.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_50_fu_12811_p2() {
    w_50_fu_12811_p2 = (!w49_reg_3462.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w49_reg_3462.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_52_fu_13649_p2() {
    w_52_fu_13649_p2 = (!w51_reg_3594.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w51_reg_3594.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_54_fu_13847_p2() {
    w_54_fu_13847_p2 = (!w53_reg_3627.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w53_reg_3627.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_56_fu_14298_p2() {
    w_56_fu_14298_p2 = (!w55_reg_3704.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w55_reg_3704.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_58_fu_15140_p2() {
    w_58_fu_15140_p2 = (!w57_reg_3836.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w57_reg_3836.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_60_fu_15338_p2() {
    w_60_fu_15338_p2 = (!w59_reg_3869.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w59_reg_3869.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_62_fu_15801_p2() {
    w_62_fu_15801_p2 = (!w61_reg_3946.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w61_reg_3946.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_64_fu_16639_p2() {
    w_64_fu_16639_p2 = (!w63_reg_4078.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w63_reg_4078.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_66_fu_16837_p2() {
    w_66_fu_16837_p2 = (!w65_reg_4111.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w65_reg_4111.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_68_fu_17288_p2() {
    w_68_fu_17288_p2 = (!w67_reg_4188.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w67_reg_4188.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_70_fu_18118_p2() {
    w_70_fu_18118_p2 = (!w69_reg_4320.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w69_reg_4320.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_72_fu_18316_p2() {
    w_72_fu_18316_p2 = (!w71_reg_4353.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w71_reg_4353.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_74_fu_18767_p2() {
    w_74_fu_18767_p2 = (!w73_reg_4430.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w73_reg_4430.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_76_fu_19605_p2() {
    w_76_fu_19605_p2 = (!w75_reg_4562.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w75_reg_4562.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_78_fu_19803_p2() {
    w_78_fu_19803_p2 = (!w77_reg_4595.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w77_reg_4595.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_80_fu_20254_p2() {
    w_80_fu_20254_p2 = (!w79_reg_4672.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w79_reg_4672.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_82_fu_21096_p2() {
    w_82_fu_21096_p2 = (!w81_reg_4804.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w81_reg_4804.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_84_fu_21294_p2() {
    w_84_fu_21294_p2 = (!w83_reg_4837.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w83_reg_4837.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_86_fu_21753_p2() {
    w_86_fu_21753_p2 = (!w85_reg_4914.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w85_reg_4914.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_88_fu_22599_p2() {
    w_88_fu_22599_p2 = (!w87_reg_5046.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w87_reg_5046.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_90_fu_22797_p2() {
    w_90_fu_22797_p2 = (!w89_reg_5079.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w89_reg_5079.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_92_fu_23260_p2() {
    w_92_fu_23260_p2 = (!w91_reg_5156.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w91_reg_5156.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_94_fu_24106_p2() {
    w_94_fu_24106_p2 = (!w93_reg_5288.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w93_reg_5288.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_96_fu_24536_p2() {
    w_96_fu_24536_p2 = (!w95_reg_5365.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w95_reg_5365.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_98_fu_25293_p2() {
    w_98_fu_25293_p2 = (!w97_reg_5486.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w97_reg_5486.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_weights_24_1_3x3_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state324.read())) {
        weights_24_1_3x3_V_address0 =  (sc_lv<8>) (tmp_1196_cast_fu_9960_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state253.read())) {
        weights_24_1_3x3_V_address0 =  (sc_lv<8>) (tmp_1141_cast_fu_9098_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state182.read())) {
        weights_24_1_3x3_V_address0 =  (sc_lv<8>) (tmp_1089_cast_fu_8242_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state114.read())) {
        weights_24_1_3x3_V_address0 =  (sc_lv<8>) (tmp_860_cast_fu_7492_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read())) {
        weights_24_1_3x3_V_address0 =  (sc_lv<8>) (tmp_446_reg_30948.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state192.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state263.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state334.read()))) {
        weights_24_1_3x3_V_address0 = grp_subconv_3x3_16_no_re_fu_6431_weight_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state81.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state125.read()))) {
        weights_24_1_3x3_V_address0 = grp_subconv_3x3_32_strid_fu_6368_weight_V_address0.read();
    } else {
        weights_24_1_3x3_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_24_1_3x3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state114.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state182.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state253.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state324.read()))) {
        weights_24_1_3x3_V_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state192.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state263.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state334.read()))) {
        weights_24_1_3x3_V_ce0 = grp_subconv_3x3_16_no_re_fu_6431_weight_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state81.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state125.read()))) {
        weights_24_1_3x3_V_ce0 = grp_subconv_3x3_32_strid_fu_6368_weight_V_ce0.read();
    } else {
        weights_24_1_3x3_V_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_1_3x3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state114.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state182.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state253.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state324.read()))) {
        weights_24_1_3x3_V_we0 = ap_const_logic_1;
    } else {
        weights_24_1_3x3_V_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state344.read())) {
        weights_24_24_1x1_V_address0 =  (sc_lv<10>) (tmp_1198_cast_fu_10120_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state302.read())) {
        weights_24_24_1x1_V_address0 =  (sc_lv<10>) (tmp_1173_cast_fu_9721_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state273.read())) {
        weights_24_24_1x1_V_address0 =  (sc_lv<10>) (tmp_1143_cast_fu_9256_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state232.read())) {
        weights_24_24_1x1_V_address0 =  (sc_lv<10>) (tmp_1121_cast1_fu_8898_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state202.read())) {
        weights_24_24_1x1_V_address0 =  (sc_lv<10>) (tmp_1091_cast_fu_8387_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state161.read())) {
        weights_24_24_1x1_V_address0 =  (sc_lv<10>) (tmp_1059_cast_fu_8042_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state135.read())) {
        weights_24_24_1x1_V_address0 =  (sc_lv<10>) (tmp_887_cast_fu_7681_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read())) {
        weights_24_24_1x1_V_address0 =  (sc_lv<10>) (tmp_732_cast_fu_7309_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        weights_24_24_1x1_V_address0 =  (sc_lv<10>) (tmp_612_cast_fu_7006_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state171.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state213.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state242.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state283.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state313.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state354.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state101.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state145.read()))) {
        weights_24_24_1x1_V_address0 = grp_subconv_1x1_16_p_fu_6516_weight_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state60.read())) {
        weights_24_24_1x1_V_address0 = grp_subconv_1x1_32_p_fu_6492_weight_V_address0.read();
    } else {
        weights_24_24_1x1_V_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state135.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state161.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state202.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state232.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state273.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state302.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state344.read()))) {
        weights_24_24_1x1_V_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state171.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state213.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state242.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state283.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state313.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state354.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state101.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state145.read()))) {
        weights_24_24_1x1_V_ce0 = grp_subconv_1x1_16_p_fu_6516_weight_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state60.read())) {
        weights_24_24_1x1_V_ce0 = grp_subconv_1x1_32_p_fu_6492_weight_V_ce0.read();
    } else {
        weights_24_24_1x1_V_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state135.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state161.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state202.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state232.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state273.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state302.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state344.read()))) {
        weights_24_24_1x1_V_we0 = ap_const_logic_1;
    } else {
        weights_24_24_1x1_V_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_1_3x3_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1165.read())) {
        weights_48_1_3x3_V_address0 =  (sc_lv<9>) (tmp_1890_cast_fu_23483_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1076.read())) {
        weights_48_1_3x3_V_address0 =  (sc_lv<9>) (tmp_1809_cast_fu_21980_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state987.read())) {
        weights_48_1_3x3_V_address0 =  (sc_lv<9>) (tmp_1729_cast_fu_20489_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state898.read())) {
        weights_48_1_3x3_V_address0 =  (sc_lv<9>) (tmp_1651_cast_fu_18998_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state809.read())) {
        weights_48_1_3x3_V_address0 =  (sc_lv<9>) (tmp_1574_cast_fu_17511_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state720.read())) {
        weights_48_1_3x3_V_address0 =  (sc_lv<9>) (tmp_1497_cast_fu_16024_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state631.read())) {
        weights_48_1_3x3_V_address0 =  (sc_lv<9>) (tmp_1418_cast_fu_14525_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state542.read())) {
        weights_48_1_3x3_V_address0 =  (sc_lv<9>) (tmp_1341_cast_fu_13042_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state456.read())) {
        weights_48_1_3x3_V_address0 =  (sc_lv<9>) (tmp_1272_cast_fu_11670_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state400.read())) {
        weights_48_1_3x3_V_address0 =  (sc_lv<9>) (tmp_1237_cast_fu_10905_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state644.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state733.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state822.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state911.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1000.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1089.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1178.read()))) {
        weights_48_1_3x3_V_address0 = grp_subconv_3x3_8_no_rel_fu_6419_weight_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state413.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state469.read()))) {
        weights_48_1_3x3_V_address0 = grp_subconv_3x3_16_strid_fu_6394_weight_V_address0.read();
    } else {
        weights_48_1_3x3_V_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_1_3x3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state400.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state456.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state542.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state631.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state720.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state809.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state898.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state987.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1076.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1165.read()))) {
        weights_48_1_3x3_V_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state644.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state733.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state822.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state911.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1000.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1089.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1178.read()))) {
        weights_48_1_3x3_V_ce0 = grp_subconv_3x3_8_no_rel_fu_6419_weight_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state413.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state469.read()))) {
        weights_48_1_3x3_V_ce0 = grp_subconv_3x3_16_strid_fu_6394_weight_V_ce0.read();
    } else {
        weights_48_1_3x3_V_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_1_3x3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state400.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state456.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state542.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state631.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state720.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state809.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state898.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state987.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1076.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1165.read()))) {
        weights_48_1_3x3_V_we0 = ap_const_logic_1;
    } else {
        weights_48_1_3x3_V_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1191.read())) {
        weights_48_48_1x1_V_address0 =  (sc_lv<12>) (tmp_1909_cast_fu_23887_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1137.read())) {
        weights_48_48_1x1_V_address0 =  (sc_lv<12>) (tmp_1869_cast_fu_23114_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1102.read())) {
        weights_48_48_1x1_V_address0 =  (sc_lv<12>) (tmp_1828_cast_fu_22380_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1048.read())) {
        weights_48_48_1x1_V_address0 =  (sc_lv<12>) (tmp_1788_cast_fu_21611_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1013.read())) {
        weights_48_48_1x1_V_address0 =  (sc_lv<12>) (tmp_1749_cast_fu_20881_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state959.read())) {
        weights_48_48_1x1_V_address0 =  (sc_lv<12>) (tmp_1710_cast_fu_20112_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state924.read())) {
        weights_48_48_1x1_V_address0 =  (sc_lv<12>) (tmp_1671_cast_fu_19390_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state870.read())) {
        weights_48_48_1x1_V_address0 =  (sc_lv<12>) (tmp_1632_cast_fu_18625_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state835.read())) {
        weights_48_48_1x1_V_address0 =  (sc_lv<12>) (tmp_1593_cast_fu_17903_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read())) {
        weights_48_48_1x1_V_address0 =  (sc_lv<12>) (tmp_1555_cast_fu_17146_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state746.read())) {
        weights_48_48_1x1_V_address0 =  (sc_lv<12>) (tmp_1516_cast_fu_16420_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state692.read())) {
        weights_48_48_1x1_V_address0 =  (sc_lv<12>) (tmp_1476_cast_fu_15655_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state657.read())) {
        weights_48_48_1x1_V_address0 =  (sc_lv<12>) (tmp_1437_cast_fu_14921_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state603.read())) {
        weights_48_48_1x1_V_address0 =  (sc_lv<12>) (tmp_1399_cast_fu_14156_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state568.read())) {
        weights_48_48_1x1_V_address0 =  (sc_lv<12>) (tmp_1360_cast_fu_13434_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state514.read())) {
        weights_48_48_1x1_V_address0 =  (sc_lv<12>) (tmp_1322_cast_fu_12669_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state482.read())) {
        weights_48_48_1x1_V_address0 =  (sc_lv<12>) (tmp_1294_cast_fu_12066_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state426.read())) {
        weights_48_48_1x1_V_address0 =  (sc_lv<12>) (tmp_1253_cast_fu_11301_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state372.read())) {
        weights_48_48_1x1_V_address0 =  (sc_lv<12>) (tmp_1218_cast_fu_10536_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state527.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state616.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state670.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state705.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state759.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state794.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state848.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state883.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state937.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state972.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1026.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1061.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1115.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1150.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1204.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state439.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state495.read()))) {
        weights_48_48_1x1_V_address0 = grp_subconv_1x1_8_p_fu_6504_weight_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state385.read())) {
        weights_48_48_1x1_V_address0 = grp_subconv_1x1_16p_p_fu_6480_weight_V_address0.read();
    } else {
        weights_48_48_1x1_V_address0 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state372.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state426.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state482.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state514.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state568.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state603.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state657.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state692.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state746.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state835.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state870.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state924.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state959.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1013.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1048.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1102.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1137.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1191.read()))) {
        weights_48_48_1x1_V_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state527.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state616.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state670.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state705.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state759.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state794.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state848.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state883.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state937.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state972.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1026.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1061.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1115.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1150.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1204.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state439.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state495.read()))) {
        weights_48_48_1x1_V_ce0 = grp_subconv_1x1_8_p_fu_6504_weight_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state385.read())) {
        weights_48_48_1x1_V_ce0 = grp_subconv_1x1_16p_p_fu_6480_weight_V_ce0.read();
    } else {
        weights_48_48_1x1_V_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state372.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state426.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state482.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state514.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state568.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state603.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state657.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state692.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state746.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state835.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state870.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state924.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state959.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1013.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1048.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1102.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1137.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1191.read()))) {
        weights_48_48_1x1_V_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_1_3x3_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1570.read())) {
        weights_96_1_3x3_V_address0 =  (sc_lv<10>) (tmp_2204_cast_fu_29794_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1481.read())) {
        weights_96_1_3x3_V_address0 =  (sc_lv<10>) (tmp_2128_cast_fu_28331_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1392.read())) {
        weights_96_1_3x3_V_address0 =  (sc_lv<10>) (tmp_2051_cast_fu_26852_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1306.read())) {
        weights_96_1_3x3_V_address0 =  (sc_lv<10>) (tmp_1984_cast_fu_25516_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read())) {
        weights_96_1_3x3_V_address0 =  (sc_lv<10>) (tmp_1950_cast_fu_24759_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1405.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1494.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1583.read()))) {
        weights_96_1_3x3_V_address0 = grp_subconv_3x3_4_no_rel_fu_6407_weight_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1263.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()))) {
        weights_96_1_3x3_V_address0 = grp_subconv_3x3_8_stride_fu_6381_weight_V_address0.read();
    } else {
        weights_96_1_3x3_V_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_1_3x3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1306.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1392.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1481.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1570.read()))) {
        weights_96_1_3x3_V_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1405.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1494.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1583.read()))) {
        weights_96_1_3x3_V_ce0 = grp_subconv_3x3_4_no_rel_fu_6407_weight_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1263.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()))) {
        weights_96_1_3x3_V_ce0 = grp_subconv_3x3_8_stride_fu_6381_weight_V_ce0.read();
    } else {
        weights_96_1_3x3_V_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_1_3x3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1306.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1392.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1481.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1570.read()))) {
        weights_96_1_3x3_V_we0 = ap_const_logic_1;
    } else {
        weights_96_1_3x3_V_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1596.read())) {
        weights_96_96_1x1_V_address0 =  (sc_lv<14>) (tmp_2223_cast_fu_30174_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read())) {
        weights_96_96_1x1_V_address0 =  (sc_lv<14>) (tmp_2186_cast_fu_29425_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1507.read())) {
        weights_96_96_1x1_V_address0 =  (sc_lv<14>) (tmp_2148_cast_fu_28711_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1453.read())) {
        weights_96_96_1x1_V_address0 =  (sc_lv<14>) (tmp_2110_cast_fu_27954_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1418.read())) {
        weights_96_96_1x1_V_address0 =  (sc_lv<14>) (tmp_2070_cast_fu_27240_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1364.read())) {
        weights_96_96_1x1_V_address0 =  (sc_lv<14>) (tmp_2033_cast_fu_26487_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1332.read())) {
        weights_96_96_1x1_V_address0 =  (sc_lv<14>) (tmp_2006_cast_fu_25896_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1276.read())) {
        weights_96_96_1x1_V_address0 =  (sc_lv<14>) (tmp_1966_cast_fu_25143_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1222.read())) {
        weights_96_96_1x1_V_address0 =  (sc_lv<14>) (tmp_1932_cast_fu_24390_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1235.read())) {
        weights_96_96_1x1_V_address0 = grp_subconv_1x1_8p_p_fu_6468_weight_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1377.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1431.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1466.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1520.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1609.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1289.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1345.read()))) {
        weights_96_96_1x1_V_address0 = grp_subconv_1x1_4_p_fu_6443_weight_V_address0.read();
    } else {
        weights_96_96_1x1_V_address0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1222.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1276.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1332.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1364.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1418.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1453.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1507.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1596.read()))) {
        weights_96_96_1x1_V_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1235.read())) {
        weights_96_96_1x1_V_ce0 = grp_subconv_1x1_8p_p_fu_6468_weight_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1377.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1431.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1466.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1520.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1609.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1289.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1345.read()))) {
        weights_96_96_1x1_V_ce0 = grp_subconv_1x1_4_p_fu_6443_weight_V_ce0.read();
    } else {
        weights_96_96_1x1_V_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1222.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1276.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1332.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1364.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1418.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1453.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1507.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1596.read()))) {
        weights_96_96_1x1_V_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_we0 = ap_const_logic_0;
    }
}

}

