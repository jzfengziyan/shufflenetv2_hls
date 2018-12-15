#include "ShuffleNetV2.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void ShuffleNetV2::thread_tmp_894_cast_fu_30224_p1() {
    tmp_894_cast_fu_30224_p1 = esl_zext<12,3>(h_133_fu_30218_p2.read());
}

void ShuffleNetV2::thread_tmp_894_fu_10631_p3() {
    tmp_894_fu_10631_p3 = esl_concat<8,5>(tmp_241_fu_10625_p2.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_895_cast1_fu_30359_p1() {
    tmp_895_cast1_fu_30359_p1 = esl_zext<13,3>(w_133_fu_30353_p2.read());
}

void ShuffleNetV2::thread_tmp_895_cast_fu_23952_p1() {
    tmp_895_cast_fu_23952_p1 = esl_zext<7,4>(p_lshr_f18_cast_fu_23942_p4.read());
}

void ShuffleNetV2::thread_tmp_895_fu_10643_p3() {
    tmp_895_fu_10643_p3 = esl_concat<8,3>(tmp_241_fu_10625_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_896_cast_fu_30394_p1() {
    tmp_896_cast_fu_30394_p1 = esl_zext<11,3>(w131_reg_7315.read());
}

void ShuffleNetV2::thread_tmp_896_fu_10655_p2() {
    tmp_896_fu_10655_p2 = (!p_shl353_cast_fu_10639_p1.read().is_01() || !p_shl354_cast_fu_10651_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl353_cast_fu_10639_p1.read()) - sc_biguint<14>(p_shl354_cast_fu_10651_p1.read()));
}

void ShuffleNetV2::thread_tmp_897_cast_cast_fu_24232_p1() {
    tmp_897_cast_cast_fu_24232_p1 = esl_sext<10,7>(tmp_666_fu_24226_p2.read());
}

void ShuffleNetV2::thread_tmp_897_cast_fu_30275_p1() {
    tmp_897_cast_fu_30275_p1 = esl_zext<14,3>(w_2_fu_30269_p2.read());
}

void ShuffleNetV2::thread_tmp_897_fu_10665_p3() {
    tmp_897_fu_10665_p3 = esl_concat<5,5>(co54_reg_3902.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_898_cast_fu_30423_p1() {
    tmp_898_cast_fu_30423_p1 = esl_zext<14,3>(h_135_fu_30417_p2.read());
}

void ShuffleNetV2::thread_tmp_898_fu_10677_p3() {
    tmp_898_fu_10677_p3 = esl_concat<5,3>(co54_reg_3902.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_899_cast_fu_24252_p1() {
    tmp_899_cast_fu_24252_p1 = esl_sext<11,10>(tmp_667_reg_36042.read());
}

void ShuffleNetV2::thread_tmp_899_fu_10689_p2() {
    tmp_899_fu_10689_p2 = (!p_shl351_cast_fu_10673_p1.read().is_01() || !p_shl352_cast_fu_10685_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl351_cast_fu_10673_p1.read()) - sc_biguint<11>(p_shl352_cast_fu_10685_p1.read()));
}

void ShuffleNetV2::thread_tmp_900_cast_fu_30437_p1() {
    tmp_900_cast_fu_30437_p1 = esl_zext<13,3>(h134_reg_7326.read());
}

void ShuffleNetV2::thread_tmp_900_fu_10508_p2() {
    tmp_900_fu_10508_p2 = (!tmp_242_cast_fu_10504_p1.read().is_01() || !tmp_881_reg_31653.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_242_cast_fu_10504_p1.read()) + sc_biguint<10>(tmp_881_reg_31653.read()));
}

void ShuffleNetV2::thread_tmp_901_cast_fu_24260_p1() {
    tmp_901_cast_fu_24260_p1 = esl_sext<32,7>(tmp_669_reg_36047.read());
}

void ShuffleNetV2::thread_tmp_901_fu_10533_p2() {
    tmp_901_fu_10533_p2 = (!p_shl349_cast_fu_10513_p3.read().is_01() || !p_shl350_cast_fu_10529_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl349_cast_fu_10513_p3.read()) + sc_biguint<14>(p_shl350_cast_fu_10529_p1.read()));
}

void ShuffleNetV2::thread_tmp_902_fu_10539_p2() {
    tmp_902_fu_10539_p2 = (!tmp_242_cast1_fu_10500_p1.read().is_01() || !tmp_875_reg_31648.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_242_cast1_fu_10500_p1.read()) + sc_biguint<11>(tmp_875_reg_31648.read()));
}

void ShuffleNetV2::thread_tmp_903_fu_10564_p2() {
    tmp_903_fu_10564_p2 = (!p_shl347_cast_fu_10544_p3.read().is_01() || !p_shl348_cast_fu_10560_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl347_cast_fu_10544_p3.read()) + sc_biguint<15>(p_shl348_cast_fu_10560_p1.read()));
}

void ShuffleNetV2::thread_tmp_904_fu_10396_p2() {
    tmp_904_fu_10396_p2 = (!tmp_884_reg_31617.read().is_01() || !tmp_243_cast_fu_10392_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_884_reg_31617.read()) + sc_biguint<15>(tmp_243_cast_fu_10392_p1.read()));
}

void ShuffleNetV2::thread_tmp_905_fu_10715_p2() {
    tmp_905_fu_10715_p2 = (!tmp_1131_cast_reg_31702.read().is_01() || !tmp_247_cast_fu_10711_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(tmp_1131_cast_reg_31702.read()) + sc_biguint<15>(tmp_247_cast_fu_10711_p1.read()));
}

void ShuffleNetV2::thread_tmp_906_cast_fu_23652_p1() {
    tmp_906_cast_fu_23652_p1 = esl_sext<10,7>(tmp_659_fu_23646_p2.read());
}

void ShuffleNetV2::thread_tmp_906_fu_10725_p2() {
    tmp_906_fu_10725_p2 = (!tmp_899_reg_31707.read().is_01() || !tmp_247_cast1_fu_10707_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_899_reg_31707.read()) + sc_biguint<11>(tmp_247_cast1_fu_10707_p1.read()));
}

void ShuffleNetV2::thread_tmp_907_cast_fu_8422_p1() {
    tmp_907_cast_fu_8422_p1 = esl_sext<9,8>(tmp_570_fu_8416_p2.read());
}

void ShuffleNetV2::thread_tmp_907_fu_10590_p2() {
    tmp_907_fu_10590_p2 = (!tmp_901_reg_31666.read().is_01() || !tmp_248_cast_fu_10586_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_901_reg_31666.read()) + sc_biguint<14>(tmp_248_cast_fu_10586_p1.read()));
}

void ShuffleNetV2::thread_tmp_908_fu_10595_p2() {
    tmp_908_fu_10595_p2 = (!tmp_903_reg_31671.read().is_01() || !tmp_248_cast1_fu_10582_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_903_reg_31671.read()) + sc_biguint<15>(tmp_248_cast1_fu_10582_p1.read()));
}

void ShuffleNetV2::thread_tmp_909_fu_10792_p4() {
    tmp_909_fu_10792_p4 = esl_concat<6,2>(esl_concat<1,5>(ap_const_lv1_1, co57_reg_3936.read()), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_910_cast1_fu_8447_p1() {
    tmp_910_cast1_fu_8447_p1 = esl_sext<15,9>(tmp_572_fu_8442_p2.read());
}

void ShuffleNetV2::thread_tmp_910_cast_fu_23720_p1() {
    tmp_910_cast_fu_23720_p1 = esl_sext<32,7>(tmp_664_reg_35879.read());
}

void ShuffleNetV2::thread_tmp_910_fu_10802_p1() {
    tmp_910_fu_10802_p1 = esl_sext<9,8>(tmp_909_fu_10792_p4.read());
}

void ShuffleNetV2::thread_tmp_911_fu_10810_p2() {
    tmp_911_fu_10810_p2 = (!p_shl356_cast_fu_10806_p1.read().is_01() || !tmp_250_cast_fu_10788_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl356_cast_fu_10806_p1.read()) - sc_biguint<10>(tmp_250_cast_fu_10788_p1.read()));
}

void ShuffleNetV2::thread_tmp_912_fu_10824_p3() {
    tmp_912_fu_10824_p3 = esl_concat<5,2>(co57_reg_3936.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_913_cast_cast_fu_24031_p1() {
    tmp_913_cast_cast_fu_24031_p1 = esl_sext<9,8>(tmp_671_fu_24025_p2.read());
}

void ShuffleNetV2::thread_tmp_913_fu_10836_p2() {
    tmp_913_fu_10836_p2 = (!p_shl355_cast_fu_10832_p1.read().is_01() || !tmp_251_cast_fu_10820_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl355_cast_fu_10832_p1.read()) - sc_biguint<8>(tmp_251_cast_fu_10820_p1.read()));
}

void ShuffleNetV2::thread_tmp_914_fu_10866_p2() {
    tmp_914_fu_10866_p2 = (!tmp_1150_cast_reg_31751.read().is_01() || !tmp_255_cast_fu_10862_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(tmp_1150_cast_reg_31751.read()) + sc_biguint<11>(tmp_255_cast_fu_10862_p1.read()));
}

void ShuffleNetV2::thread_tmp_915_fu_10887_p2() {
    tmp_915_fu_10887_p2 = (!p_shl358_cast_fu_10883_p1.read().is_01() || !tmp_1153_cast_fu_10871_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_shl358_cast_fu_10883_p1.read()) - sc_bigint<15>(tmp_1153_cast_fu_10871_p1.read()));
}

void ShuffleNetV2::thread_tmp_916_fu_10893_p2() {
    tmp_916_fu_10893_p2 = (!tmp_1152_cast1_reg_31756.read().is_01() || !tmp_255_cast1_fu_10858_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_1152_cast1_reg_31756.read()) + sc_biguint<9>(tmp_255_cast1_fu_10858_p1.read()));
}

void ShuffleNetV2::thread_tmp_917_fu_10904_p2() {
    tmp_917_fu_10904_p2 = (!tmp_435_fu_10898_p2.read().is_01() || !tmp_916_fu_10893_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_435_fu_10898_p2.read()) - sc_biguint<9>(tmp_916_fu_10893_p2.read()));
}

void ShuffleNetV2::thread_tmp_918_fu_10993_p4() {
    tmp_918_fu_10993_p4 = esl_concat<7,5>(esl_concat<2,5>(ap_const_lv2_2, co61_reg_3981.read()), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_919_fu_11003_p1() {
    tmp_919_fu_11003_p1 = esl_sext<13,12>(tmp_918_fu_10993_p4.read());
}

void ShuffleNetV2::thread_tmp_920_fu_11011_p4() {
    tmp_920_fu_11011_p4 = esl_concat<7,3>(esl_concat<2,5>(ap_const_lv2_2, co61_reg_3981.read()), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_921_cast_fu_24445_p1() {
    tmp_921_cast_fu_24445_p1 = esl_zext<8,3>(p_lshr_f19_cast_fu_24435_p4.read());
}

void ShuffleNetV2::thread_tmp_921_fu_11021_p1() {
    tmp_921_fu_11021_p1 = esl_sext<11,10>(tmp_920_fu_11011_p4.read());
}

void ShuffleNetV2::thread_tmp_922_fu_11029_p2() {
    tmp_922_fu_11029_p2 = (!p_shl361_cast_fu_11007_p1.read().is_01() || !p_shl362_cast_fu_11025_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl361_cast_fu_11007_p1.read()) - sc_biguint<14>(p_shl362_cast_fu_11025_p1.read()));
}

void ShuffleNetV2::thread_tmp_923_fu_11039_p3() {
    tmp_923_fu_11039_p3 = esl_concat<5,5>(co61_reg_3981.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_924_cast_cast_fu_24707_p1() {
    tmp_924_cast_cast_fu_24707_p1 = esl_sext<10,8>(tmp_682_fu_24701_p2.read());
}

void ShuffleNetV2::thread_tmp_924_fu_11051_p3() {
    tmp_924_fu_11051_p3 = esl_concat<5,3>(co61_reg_3981.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_925_fu_11063_p2() {
    tmp_925_fu_11063_p2 = (!p_shl359_cast_fu_11047_p1.read().is_01() || !p_shl360_cast_fu_11059_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl359_cast_fu_11047_p1.read()) - sc_biguint<11>(p_shl360_cast_fu_11059_p1.read()));
}

void ShuffleNetV2::thread_tmp_926_cast_fu_24727_p1() {
    tmp_926_cast_fu_24727_p1 = esl_sext<11,10>(tmp_683_reg_36192.read());
}

void ShuffleNetV2::thread_tmp_926_fu_10930_p2() {
    tmp_926_fu_10930_p2 = (!tmp_915_reg_31769.read().is_01() || !tmp_256_cast_fu_10926_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_915_reg_31769.read()) + sc_biguint<15>(tmp_256_cast_fu_10926_p1.read()));
}

void ShuffleNetV2::thread_tmp_927_fu_10940_p2() {
    tmp_927_fu_10940_p2 = (!tmp_917_reg_31774.read().is_01() || !tmp_256_cast1_fu_10922_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_917_reg_31774.read()) + sc_biguint<9>(tmp_256_cast1_fu_10922_p1.read()));
}

void ShuffleNetV2::thread_tmp_928_cast_fu_24735_p1() {
    tmp_928_cast_fu_24735_p1 = esl_sext<32,8>(tmp_685_reg_36197.read());
}

void ShuffleNetV2::thread_tmp_928_fu_11089_p2() {
    tmp_928_fu_11089_p2 = (!tmp_1163_cast_reg_31818.read().is_01() || !tmp_260_cast_fu_11085_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(tmp_1163_cast_reg_31818.read()) + sc_biguint<15>(tmp_260_cast_fu_11085_p1.read()));
}

void ShuffleNetV2::thread_tmp_929_fu_11099_p2() {
    tmp_929_fu_11099_p2 = (!tmp_925_reg_31823.read().is_01() || !tmp_260_cast1_fu_11081_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_925_reg_31823.read()) + sc_biguint<11>(tmp_260_cast1_fu_11081_p1.read()));
}

void ShuffleNetV2::thread_tmp_930_fu_11152_p3() {
    tmp_930_fu_11152_p3 = esl_concat<5,4>(co64_reg_4015.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_931_fu_11164_p3() {
    tmp_931_fu_11164_p3 = esl_concat<5,1>(co64_reg_4015.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_932_fu_11176_p2() {
    tmp_932_fu_11176_p2 = (!p_shl364_cast_fu_11172_p1.read().is_01() || !p_shl363_cast_fu_11160_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl364_cast_fu_11172_p1.read()) + sc_biguint<10>(p_shl363_cast_fu_11160_p1.read()));
}

void ShuffleNetV2::thread_tmp_933_fu_11198_p2() {
    tmp_933_fu_11198_p2 = (!tmp_262_cast_fu_11194_p1.read().is_01() || !tmp_932_reg_31867.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_262_cast_fu_11194_p1.read()) + sc_biguint<10>(tmp_932_reg_31867.read()));
}

void ShuffleNetV2::thread_tmp_934_fu_11227_p2() {
    tmp_934_fu_11227_p2 = (!p_shl365_cast_fu_11211_p1.read().is_01() || !p_shl366_cast_fu_11223_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl365_cast_fu_11211_p1.read()) + sc_biguint<15>(p_shl366_cast_fu_11223_p1.read()));
}

void ShuffleNetV2::thread_tmp_935_cast_fu_24528_p1() {
    tmp_935_cast_fu_24528_p1 = esl_sext<12,10>(tmp_687_fu_24522_p2.read());
}

void ShuffleNetV2::thread_tmp_935_fu_11249_p2() {
    tmp_935_fu_11249_p2 = (!tmp_934_reg_31880.read().is_01() || !tmp_266_cast_fu_11245_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_934_reg_31880.read()) + sc_biguint<15>(tmp_266_cast_fu_11245_p1.read()));
}

void ShuffleNetV2::thread_tmp_936_fu_11479_p3() {
    tmp_936_fu_11479_p3 = esl_concat<9,5>(tmp_273_reg_31952.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_937_fu_11490_p3() {
    tmp_937_fu_11490_p3 = esl_concat<9,3>(tmp_273_reg_31952.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_938_fu_11501_p2() {
    tmp_938_fu_11501_p2 = (!p_shl369_cast_fu_11486_p1.read().is_01() || !p_shl370_cast_fu_11497_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl369_cast_fu_11486_p1.read()) - sc_biguint<15>(p_shl370_cast_fu_11497_p1.read()));
}

void ShuffleNetV2::thread_tmp_939_fu_11511_p2() {
    tmp_939_fu_11511_p2 = (!tmp_263_cast_reg_31934.read().is_01() || !tmp_1187_cast_fu_11507_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp_263_cast_reg_31934.read()) + sc_bigint<16>(tmp_1187_cast_fu_11507_p1.read()));
}

void ShuffleNetV2::thread_tmp_940_fu_11448_p3() {
    tmp_940_fu_11448_p3 = esl_concat<7,6>(tmp_275_fu_11443_p2.read(), ap_const_lv6_0);
}

void ShuffleNetV2::thread_tmp_941_fu_11456_p3() {
    tmp_941_fu_11456_p3 = esl_concat<7,4>(tmp_275_fu_11443_p2.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_942_cast_cast_fu_25053_p1() {
    tmp_942_cast_cast_fu_25053_p1 = esl_sext<9,8>(tmp_697_fu_25047_p2.read());
}

void ShuffleNetV2::thread_tmp_942_fu_11468_p2() {
    tmp_942_fu_11468_p2 = (!tmp_940_fu_11448_p3.read().is_01() || !p_shl368_cast_fu_11464_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_940_fu_11448_p3.read()) - sc_bigint<13>(p_shl368_cast_fu_11464_p1.read()));
}

void ShuffleNetV2::thread_tmp_943_fu_11474_p2() {
    tmp_943_fu_11474_p2 = (!tmp_265_cast_reg_31939.read().is_01() || !tmp_942_fu_11468_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(tmp_265_cast_reg_31939.read()) + sc_biguint<13>(tmp_942_fu_11468_p2.read()));
}

void ShuffleNetV2::thread_tmp_944_cast_fu_25073_p1() {
    tmp_944_cast_fu_25073_p1 = esl_sext<11,9>(tmp_698_reg_36332.read());
}

void ShuffleNetV2::thread_tmp_944_fu_11752_p3() {
    tmp_944_fu_11752_p3 = esl_concat<8,2>(tmp_288_reg_32071.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_945_fu_11763_p2() {
    tmp_945_fu_11763_p2 = (!p_shl374_cast_fu_11759_p1.read().is_01() || !tmp_289_cast1_fu_11749_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl374_cast_fu_11759_p1.read()) - sc_biguint<11>(tmp_289_cast1_fu_11749_p1.read()));
}

void ShuffleNetV2::thread_tmp_946_cast_fu_25081_p1() {
    tmp_946_cast_fu_25081_p1 = esl_sext<32,8>(tmp_700_reg_36337.read());
}

void ShuffleNetV2::thread_tmp_946_fu_11773_p2() {
    tmp_946_fu_11773_p2 = (!tmp_276_cast_reg_32040.read().is_01() || !tmp_1204_cast_fu_11769_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp_276_cast_reg_32040.read()) + sc_bigint<12>(tmp_1204_cast_fu_11769_p1.read()));
}

void ShuffleNetV2::thread_tmp_947_fu_11794_p2() {
    tmp_947_fu_11794_p2 = (!p_shl373_cast_fu_11790_p1.read().is_01() || !tmp_1205_cast_fu_11778_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_shl373_cast_fu_11790_p1.read()) - sc_bigint<15>(tmp_1205_cast_fu_11778_p1.read()));
}

void ShuffleNetV2::thread_tmp_948_fu_11800_p2() {
    tmp_948_fu_11800_p2 = (!tmp_283_cast_reg_32058.read().is_01() || !tmp_947_fu_11794_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_283_cast_reg_32058.read()) + sc_biguint<15>(tmp_947_fu_11794_p2.read()));
}

void ShuffleNetV2::thread_tmp_949_fu_11812_p3() {
    tmp_949_fu_11812_p3 = esl_concat<7,2>(tmp_290_reg_32077.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_950_cast_fu_25147_p1() {
    tmp_950_cast_fu_25147_p1 = esl_zext<8,3>(p_lshr_f20_cast_fu_25137_p4.read());
}

void ShuffleNetV2::thread_tmp_950_fu_11819_p1() {
    tmp_950_fu_11819_p1 = esl_sext<34,9>(tmp_949_fu_11812_p3.read());
}

void ShuffleNetV2::thread_tmp_951_fu_11827_p2() {
    tmp_951_fu_11827_p2 = (!p_shl372_cast_fu_11823_p1.read().is_01() || !tmp_291_cast_fu_11808_p1.read().is_01())? sc_lv<35>(): (sc_biguint<35>(p_shl372_cast_fu_11823_p1.read()) - sc_biguint<35>(tmp_291_cast_fu_11808_p1.read()));
}

void ShuffleNetV2::thread_tmp_952_cast_cast_fu_25409_p1() {
    tmp_952_cast_cast_fu_25409_p1 = esl_sext<9,8>(tmp_712_fu_25403_p2.read());
}

void ShuffleNetV2::thread_tmp_952_fu_11837_p2() {
    tmp_952_fu_11837_p2 = (!tmp_276_cast1_reg_32035.read().is_01() || !tmp_1211_cast_fu_11833_p1.read().is_01())? sc_lv<36>(): (sc_biguint<36>(tmp_276_cast1_reg_32035.read()) + sc_bigint<36>(tmp_1211_cast_fu_11833_p1.read()));
}

void ShuffleNetV2::thread_tmp_953_fu_11846_p1() {
    tmp_953_fu_11846_p1 = tmp_952_fu_11837_p2.read().range(8-1, 0);
}

void ShuffleNetV2::thread_tmp_954_fu_11861_p2() {
    tmp_954_fu_11861_p2 = (!p_shl371_cast_fu_11854_p3.read().is_01() || !tmp_461_reg_32088.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl371_cast_fu_11854_p3.read()) - sc_biguint<10>(tmp_461_reg_32088.read()));
}

void ShuffleNetV2::thread_tmp_955_fu_11866_p2() {
    tmp_955_fu_11866_p2 = (!tmp_283_cast1_reg_32053.read().is_01() || !tmp_954_fu_11861_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_283_cast1_reg_32053.read()) + sc_biguint<10>(tmp_954_fu_11861_p2.read()));
}

void ShuffleNetV2::thread_tmp_956_cast_fu_25441_p1() {
    tmp_956_cast_fu_25441_p1 = esl_sext<32,8>(tmp_716_reg_36443.read());
}

void ShuffleNetV2::thread_tmp_956_fu_12275_p1() {
    tmp_956_fu_12275_p1 = k3_reg_4213.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_957_fu_12082_p1() {
    tmp_957_fu_12082_p1 = i35_reg_4191.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_958_fu_12197_p3() {
    tmp_958_fu_12197_p3 = esl_concat<9,5>(tmp_298_reg_32198.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_959_fu_12208_p3() {
    tmp_959_fu_12208_p3 = esl_concat<9,3>(tmp_298_reg_32198.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_960_fu_12219_p2() {
    tmp_960_fu_12219_p2 = (!p_shl377_cast_fu_12204_p1.read().is_01() || !p_shl378_cast_fu_12215_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl377_cast_fu_12204_p1.read()) - sc_biguint<15>(p_shl378_cast_fu_12215_p1.read()));
}

void ShuffleNetV2::thread_tmp_961_cast_fu_24849_p1() {
    tmp_961_cast_fu_24849_p1 = esl_sext<10,8>(tmp_706_fu_24843_p2.read());
}

void ShuffleNetV2::thread_tmp_961_fu_12229_p2() {
    tmp_961_fu_12229_p2 = (!tmp_284_cast_reg_32180.read().is_01() || !tmp_1222_cast_fu_12225_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp_284_cast_reg_32180.read()) + sc_bigint<16>(tmp_1222_cast_fu_12225_p1.read()));
}

void ShuffleNetV2::thread_tmp_962_cast_fu_8611_p1() {
    tmp_962_cast_fu_8611_p1 = esl_sext<14,13>(tmp_590_fu_8605_p2.read());
}

void ShuffleNetV2::thread_tmp_962_fu_12166_p3() {
    tmp_962_fu_12166_p3 = esl_concat<7,6>(tmp_300_fu_12161_p2.read(), ap_const_lv6_0);
}

void ShuffleNetV2::thread_tmp_963_fu_12174_p3() {
    tmp_963_fu_12174_p3 = esl_concat<7,4>(tmp_300_fu_12161_p2.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_964_fu_12186_p2() {
    tmp_964_fu_12186_p2 = (!tmp_962_fu_12166_p3.read().is_01() || !p_shl376_cast_fu_12182_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_962_fu_12166_p3.read()) - sc_bigint<13>(p_shl376_cast_fu_12182_p1.read()));
}

void ShuffleNetV2::thread_tmp_965_cast_fu_24917_p1() {
    tmp_965_cast_fu_24917_p1 = esl_sext<32,8>(tmp_709_reg_36275.read());
}

void ShuffleNetV2::thread_tmp_965_fu_12192_p2() {
    tmp_965_fu_12192_p2 = (!tmp_286_cast_reg_32185.read().is_01() || !tmp_964_fu_12186_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(tmp_286_cast_reg_32185.read()) + sc_biguint<13>(tmp_964_fu_12186_p2.read()));
}

void ShuffleNetV2::thread_tmp_966_fu_12707_p1() {
    tmp_966_fu_12707_p1 = co73_reg_4290.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_967_fu_12625_p1() {
    tmp_967_fu_12625_p1 = k4_reg_4279.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_968_cast_fu_25230_p1() {
    tmp_968_cast_fu_25230_p1 = esl_sext<12,10>(tmp_718_fu_25224_p2.read());
}

void ShuffleNetV2::thread_tmp_968_fu_12417_p1() {
    tmp_968_fu_12417_p1 = i40_reg_4257.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_969_fu_12474_p3() {
    tmp_969_fu_12474_p3 = esl_concat<8,2>(tmp_313_reg_32317.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_970_fu_12485_p2() {
    tmp_970_fu_12485_p2 = (!p_shl382_cast_fu_12481_p1.read().is_01() || !tmp_314_cast_fu_12471_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl382_cast_fu_12481_p1.read()) - sc_biguint<11>(tmp_314_cast_fu_12471_p1.read()));
}

void ShuffleNetV2::thread_tmp_971_fu_12491_p2() {
    tmp_971_fu_12491_p2 = (!tmp_301_cast_reg_32286.read().is_01() || !tmp_970_fu_12485_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_301_cast_reg_32286.read()) + sc_biguint<11>(tmp_970_fu_12485_p2.read()));
}

void ShuffleNetV2::thread_tmp_972_fu_12500_p3() {
    tmp_972_fu_12500_p3 = esl_concat<11,2>(tmp_971_fu_12491_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_973_fu_12512_p2() {
    tmp_973_fu_12512_p2 = (!p_shl381_cast_fu_12508_p1.read().is_01() || !tmp_1240_cast_fu_12496_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_shl381_cast_fu_12508_p1.read()) - sc_bigint<15>(tmp_1240_cast_fu_12496_p1.read()));
}

void ShuffleNetV2::thread_tmp_974_fu_12518_p2() {
    tmp_974_fu_12518_p2 = (!tmp_308_cast_reg_32304.read().is_01() || !tmp_973_fu_12512_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_308_cast_reg_32304.read()) + sc_biguint<15>(tmp_973_fu_12512_p2.read()));
}

void ShuffleNetV2::thread_tmp_975_cast_fu_25759_p1() {
    tmp_975_cast_fu_25759_p1 = esl_sext<12,8>(tmp_724_fu_25753_p2.read());
}

void ShuffleNetV2::thread_tmp_975_fu_12530_p3() {
    tmp_975_fu_12530_p3 = esl_concat<7,2>(tmp_315_reg_32323.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_976_fu_12537_p1() {
    tmp_976_fu_12537_p1 = esl_sext<34,9>(tmp_975_fu_12530_p3.read());
}

void ShuffleNetV2::thread_tmp_977_fu_12545_p2() {
    tmp_977_fu_12545_p2 = (!p_shl380_cast_fu_12541_p1.read().is_01() || !tmp_316_cast_fu_12526_p1.read().is_01())? sc_lv<35>(): (sc_biguint<35>(p_shl380_cast_fu_12541_p1.read()) - sc_biguint<35>(tmp_316_cast_fu_12526_p1.read()));
}

void ShuffleNetV2::thread_tmp_978_fu_12555_p2() {
    tmp_978_fu_12555_p2 = (!tmp_301_cast1_reg_32281.read().is_01() || !tmp_1246_cast_fu_12551_p1.read().is_01())? sc_lv<36>(): (sc_biguint<36>(tmp_301_cast1_reg_32281.read()) + sc_bigint<36>(tmp_1246_cast_fu_12551_p1.read()));
}

void ShuffleNetV2::thread_tmp_979_cast_fu_25783_p1() {
    tmp_979_cast_fu_25783_p1 = esl_sext<32,8>(tmp_727_reg_36583.read());
}

void ShuffleNetV2::thread_tmp_979_fu_12560_p1() {
    tmp_979_fu_12560_p1 = tmp_978_fu_12555_p2.read().range(10-1, 0);
}

void ShuffleNetV2::thread_tmp_980_fu_12564_p1() {
    tmp_980_fu_12564_p1 = tmp_978_fu_12555_p2.read().range(8-1, 0);
}

void ShuffleNetV2::thread_tmp_981_fu_12579_p2() {
    tmp_981_fu_12579_p2 = (!p_shl379_cast_fu_12572_p3.read().is_01() || !tmp_979_reg_32334.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl379_cast_fu_12572_p3.read()) - sc_biguint<10>(tmp_979_reg_32334.read()));
}

void ShuffleNetV2::thread_tmp_982_fu_12584_p2() {
    tmp_982_fu_12584_p2 = (!tmp_308_cast1_reg_32299.read().is_01() || !tmp_981_fu_12579_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_308_cast1_reg_32299.read()) + sc_biguint<10>(tmp_981_fu_12579_p2.read()));
}

void ShuffleNetV2::thread_tmp_983_cast_fu_25849_p1() {
    tmp_983_cast_fu_25849_p1 = esl_zext<8,3>(p_lshr_f21_cast_fu_25839_p4.read());
}

void ShuffleNetV2::thread_tmp_983_fu_13081_p3() {
    tmp_983_fu_13081_p3 = esl_concat<7,3>(tmp_317_fu_13075_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_984_fu_13093_p3() {
    tmp_984_fu_13093_p3 = esl_concat<7,1>(tmp_317_fu_13075_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_985_cast_fu_26111_p1() {
    tmp_985_cast_fu_26111_p1 = esl_sext<12,8>(tmp_742_fu_26105_p2.read());
}

void ShuffleNetV2::thread_tmp_985_fu_13105_p2() {
    tmp_985_fu_13105_p2 = (!p_shl390_cast_fu_13101_p1.read().is_01() || !p_shl389_cast_fu_13089_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl390_cast_fu_13101_p1.read()) + sc_biguint<11>(p_shl389_cast_fu_13089_p1.read()));
}

void ShuffleNetV2::thread_tmp_986_fu_13111_p3() {
    tmp_986_fu_13111_p3 = esl_concat<6,3>(co75_reg_4345.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_987_fu_13123_p3() {
    tmp_987_fu_13123_p3 = esl_concat<6,1>(co75_reg_4345.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_988_fu_13135_p2() {
    tmp_988_fu_13135_p2 = (!p_shl388_cast_fu_13131_p1.read().is_01() || !p_shl387_cast_fu_13119_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl388_cast_fu_13131_p1.read()) + sc_biguint<10>(p_shl387_cast_fu_13119_p1.read()));
}

void ShuffleNetV2::thread_tmp_989_cast_fu_26135_p1() {
    tmp_989_cast_fu_26135_p1 = esl_sext<32,8>(tmp_747_reg_36689.read());
}

void ShuffleNetV2::thread_tmp_989_fu_12993_p1() {
    tmp_989_fu_12993_p1 = k5_reg_4334.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_990_fu_12796_p1() {
    tmp_990_fu_12796_p1 = i42_reg_4312.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_991_fu_12915_p3() {
    tmp_991_fu_12915_p3 = esl_concat<10,5>(tmp_324_reg_32444.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_992_fu_12926_p3() {
    tmp_992_fu_12926_p3 = esl_concat<10,3>(tmp_324_reg_32444.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_993_fu_12937_p2() {
    tmp_993_fu_12937_p2 = (!p_shl385_cast_fu_12922_p1.read().is_01() || !p_shl386_cast_fu_12933_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(p_shl385_cast_fu_12922_p1.read()) - sc_biguint<16>(p_shl386_cast_fu_12933_p1.read()));
}

void ShuffleNetV2::thread_tmp_994_cast_fu_25555_p1() {
    tmp_994_cast_fu_25555_p1 = esl_sext<10,8>(tmp_734_fu_25549_p2.read());
}

void ShuffleNetV2::thread_tmp_994_fu_12947_p2() {
    tmp_994_fu_12947_p2 = (!tmp_309_cast_reg_32426.read().is_01() || !tmp_1263_cast_fu_12943_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(tmp_309_cast_reg_32426.read()) + sc_bigint<17>(tmp_1263_cast_fu_12943_p1.read()));
}

void ShuffleNetV2::thread_tmp_995_fu_12884_p3() {
    tmp_995_fu_12884_p3 = esl_concat<7,6>(tmp_326_fu_12879_p2.read(), ap_const_lv6_0);
}

void ShuffleNetV2::thread_tmp_996_fu_12892_p3() {
    tmp_996_fu_12892_p3 = esl_concat<7,4>(tmp_326_fu_12879_p2.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_997_fu_12904_p2() {
    tmp_997_fu_12904_p2 = (!tmp_995_fu_12884_p3.read().is_01() || !p_shl384_cast_fu_12900_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_995_fu_12884_p3.read()) - sc_bigint<13>(p_shl384_cast_fu_12900_p1.read()));
}

void ShuffleNetV2::thread_tmp_998_cast_fu_25623_p1() {
    tmp_998_cast_fu_25623_p1 = esl_sext<32,8>(tmp_737_reg_36521.read());
}

void ShuffleNetV2::thread_tmp_998_fu_12910_p2() {
    tmp_998_fu_12910_p2 = (!tmp_311_cast_reg_32431.read().is_01() || !tmp_997_fu_12904_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(tmp_311_cast_reg_32431.read()) + sc_biguint<13>(tmp_997_fu_12904_p2.read()));
}

void ShuffleNetV2::thread_tmp_999_cast_fu_8511_p1() {
    tmp_999_cast_fu_8511_p1 = esl_zext<64,15>(tmp_610_fu_8506_p2.read());
}

void ShuffleNetV2::thread_tmp_999_fu_13286_p1() {
    tmp_999_fu_13286_p1 = co77_reg_4378.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_cast_fu_7761_p1() {
    tmp_cast_fu_7761_p1 = esl_sext<12,11>(tmp_s_fu_7755_p2.read());
}

void ShuffleNetV2::thread_tmp_fu_7734_p1() {
    tmp_fu_7734_p1 = esl_zext<64,5>(i_reg_3251.read());
}

void ShuffleNetV2::thread_tmp_i3_fu_30686_p1() {
    tmp_i3_fu_30686_p1 = esl_zext<64,10>(co_i1_reg_7337.read());
}

void ShuffleNetV2::thread_tmp_i_736_fu_30731_p1() {
    tmp_i_736_fu_30731_p1 = esl_zext<64,10>(ci_i_reg_7372.read());
}

void ShuffleNetV2::thread_tmp_i_cast_fu_30736_p1() {
    tmp_i_cast_fu_30736_p1 = esl_zext<14,10>(ci_i_reg_7372.read());
}

void ShuffleNetV2::thread_tmp_i_fu_30703_p1() {
    tmp_i_fu_30703_p1 = esl_zext<64,4>(co_i_reg_7349.read());
}

void ShuffleNetV2::thread_tmp_s_fu_7755_p2() {
    tmp_s_fu_7755_p2 = (!i1_cast715_cast_fu_7739_p1.read().is_01() || !ap_const_lv11_418.is_01())? sc_lv<11>(): (sc_biguint<11>(i1_cast715_cast_fu_7739_p1.read()) + sc_bigint<11>(ap_const_lv11_418));
}

void ShuffleNetV2::thread_w_100_fu_21709_p2() {
    w_100_fu_21709_p2 = (!w99_reg_5819.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w99_reg_5819.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_102_fu_22140_p2() {
    w_102_fu_22140_p2 = (!w101_reg_5896.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w101_reg_5896.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_104_fu_22939_p2() {
    w_104_fu_22939_p2 = (!w103_reg_6028.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w103_reg_6028.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_106_fu_23137_p2() {
    w_106_fu_23137_p2 = (!w105_reg_6061.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w105_reg_6061.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_108_fu_23572_p2() {
    w_108_fu_23572_p2 = (!w107_reg_6138.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w107_reg_6138.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_110_fu_24367_p2() {
    w_110_fu_24367_p2 = (!w109_reg_6270.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w109_reg_6270.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_112_fu_24769_p2() {
    w_112_fu_24769_p2 = (!w111_reg_6347.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w111_reg_6347.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_114_fu_25475_p2() {
    w_114_fu_25475_p2 = (!w113_reg_6468.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w113_reg_6468.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_116_fu_26321_p2() {
    w_116_fu_26321_p2 = (!w115_reg_6600.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(w115_reg_6600.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_w_118_fu_26732_p2() {
    w_118_fu_26732_p2 = (!w117_reg_6677.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w117_reg_6677.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_120_fu_27511_p2() {
    w_120_fu_27511_p2 = (!w119_reg_6809.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(w119_reg_6809.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_w_122_fu_27709_p2() {
    w_122_fu_27709_p2 = (!w121_reg_6842.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(w121_reg_6842.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_w_124_fu_28116_p2() {
    w_124_fu_28116_p2 = (!w123_reg_6919.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w123_reg_6919.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_126_fu_28899_p2() {
    w_126_fu_28899_p2 = (!w125_reg_7051.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(w125_reg_7051.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_w_128_fu_29097_p2() {
    w_128_fu_29097_p2 = (!w127_reg_7084.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(w127_reg_7084.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_w_130_fu_29504_p2() {
    w_130_fu_29504_p2 = (!w129_reg_7161.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w129_reg_7161.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_133_fu_30353_p2() {
    w_133_fu_30353_p2 = (!w131_reg_7315.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(w131_reg_7315.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_w_2_fu_30269_p2() {
    w_2_fu_30269_p2 = (!w132_reg_7293.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(w132_reg_7293.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_w_45_fu_7859_p2() {
    w_45_fu_7859_p2 = (!w_reg_3297.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(w_reg_3297.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void ShuffleNetV2::thread_w_46_fu_8104_p2() {
    w_46_fu_8104_p2 = (!w6_reg_3364.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w6_reg_3364.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_47_fu_8432_p2() {
    w_47_fu_8432_p2 = (!w13_reg_3443.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w13_reg_3443.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_48_fu_8886_p2() {
    w_48_fu_8886_p2 = (!w21_reg_3533.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(w21_reg_3533.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_w_49_fu_9152_p2() {
    w_49_fu_9152_p2 = (!w26_reg_3589.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w26_reg_3589.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_50_fu_9541_p2() {
    w_50_fu_9541_p2 = (!w34_reg_3679.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(w34_reg_3679.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_w_51_fu_9731_p2() {
    w_51_fu_9731_p2 = (!w37_reg_3712.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(w37_reg_3712.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_w_52_fu_10001_p2() {
    w_52_fu_10001_p2 = (!w42_reg_3768.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w42_reg_3768.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_53_fu_10386_p2() {
    w_53_fu_10386_p2 = (!w50_reg_3858.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(w50_reg_3858.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_w_54_fu_10576_p2() {
    w_54_fu_10576_p2 = (!w53_reg_3891.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(w53_reg_3891.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_w_56_fu_10852_p2() {
    w_56_fu_10852_p2 = (!w55_reg_3947.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w55_reg_3947.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_58_fu_11239_p2() {
    w_58_fu_11239_p2 = (!w57_reg_4037.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(w57_reg_4037.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_w_60_fu_11649_p2() {
    w_60_fu_11649_p2 = (!w59_reg_4114.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w59_reg_4114.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_62_fu_12371_p2() {
    w_62_fu_12371_p2 = (!w61_reg_4235.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w61_reg_4235.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_64_fu_13237_p2() {
    w_64_fu_13237_p2 = (!w63_reg_4367.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w63_reg_4367.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_66_fu_13660_p2() {
    w_66_fu_13660_p2 = (!w65_reg_4444.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w65_reg_4444.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_68_fu_14447_p2() {
    w_68_fu_14447_p2 = (!w67_reg_4576.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w67_reg_4576.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_70_fu_14645_p2() {
    w_70_fu_14645_p2 = (!w69_reg_4609.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w69_reg_4609.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_72_fu_15068_p2() {
    w_72_fu_15068_p2 = (!w71_reg_4686.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w71_reg_4686.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_74_fu_15859_p2() {
    w_74_fu_15859_p2 = (!w73_reg_4818.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w73_reg_4818.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_76_fu_16057_p2() {
    w_76_fu_16057_p2 = (!w75_reg_4851.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w75_reg_4851.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_78_fu_16492_p2() {
    w_78_fu_16492_p2 = (!w77_reg_4928.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w77_reg_4928.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_80_fu_17283_p2() {
    w_80_fu_17283_p2 = (!w79_reg_5060.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w79_reg_5060.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_82_fu_17481_p2() {
    w_82_fu_17481_p2 = (!w81_reg_5093.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w81_reg_5093.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_84_fu_17904_p2() {
    w_84_fu_17904_p2 = (!w83_reg_5170.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w83_reg_5170.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_86_fu_18687_p2() {
    w_86_fu_18687_p2 = (!w85_reg_5302.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w85_reg_5302.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_88_fu_18885_p2() {
    w_88_fu_18885_p2 = (!w87_reg_5335.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w87_reg_5335.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_90_fu_19308_p2() {
    w_90_fu_19308_p2 = (!w89_reg_5412.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w89_reg_5412.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_92_fu_20099_p2() {
    w_92_fu_20099_p2 = (!w91_reg_5544.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w91_reg_5544.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_94_fu_20297_p2() {
    w_94_fu_20297_p2 = (!w93_reg_5577.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w93_reg_5577.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_96_fu_20720_p2() {
    w_96_fu_20720_p2 = (!w95_reg_5654.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w95_reg_5654.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_98_fu_21511_p2() {
    w_98_fu_21511_p2 = (!w97_reg_5786.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w97_reg_5786.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_weights_24_1_3x3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state118.read())) {
        weights_24_1_3x3_address0 =  (sc_lv<8>) (tmp_1168_cast_fu_10945_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read())) {
        weights_24_1_3x3_address0 =  (sc_lv<8>) (tmp_1113_cast1_fu_10094_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state62.read())) {
        weights_24_1_3x3_address0 =  (sc_lv<8>) (tmp_1061_cast_fu_9245_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        weights_24_1_3x3_address0 =  (sc_lv<8>) (tmp_1007_cast_fu_8521_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read())) {
        weights_24_1_3x3_address0 =  (sc_lv<8>) (tmp_854_cast_reg_30926.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()))) {
        weights_24_1_3x3_address0 = grp_subconv_3x3_16_no_re_fu_7518_weight_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()))) {
        weights_24_1_3x3_address0 = grp_subconv_3x3_32_strid_fu_7479_weight_address0.read();
    } else {
        weights_24_1_3x3_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_24_1_3x3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state62.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state118.read()))) {
        weights_24_1_3x3_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()))) {
        weights_24_1_3x3_ce0 = grp_subconv_3x3_16_no_re_fu_7518_weight_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()))) {
        weights_24_1_3x3_ce0 = grp_subconv_3x3_32_strid_fu_7479_weight_ce0.read();
    } else {
        weights_24_1_3x3_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_1_3x3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state62.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state118.read()))) {
        weights_24_1_3x3_we0 = ap_const_logic_1;
    } else {
        weights_24_1_3x3_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state124.read())) {
        weights_24_24_1x1_address0 =  (sc_lv<10>) (tmp_1170_cast_fu_11104_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read())) {
        weights_24_24_1x1_address0 =  (sc_lv<10>) (tmp_1145_cast1_fu_10730_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state96.read())) {
        weights_24_24_1x1_address0 =  (sc_lv<10>) (tmp_1115_cast1_fu_10251_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state83.read())) {
        weights_24_24_1x1_address0 =  (sc_lv<10>) (tmp_1093_cast_fu_9885_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read())) {
        weights_24_24_1x1_address0 =  (sc_lv<10>) (tmp_1063_cast_fu_9404_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        weights_24_24_1x1_address0 =  (sc_lv<10>) (tmp_1039_cast_fu_9040_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state43.read())) {
        weights_24_24_1x1_address0 =  (sc_lv<10>) (tmp_1011_cast_fu_8680_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read())) {
        weights_24_24_1x1_address0 =  (sc_lv<10>) (tmp_865_cast1_fu_8320_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        weights_24_24_1x1_address0 =  (sc_lv<10>) (tmp_738_cast_reg_30869.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state114.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()))) {
        weights_24_24_1x1_address0 = grp_subconv_1x1_16_p_fu_7455_weight_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        weights_24_24_1x1_address0 = grp_subconv_1x1_32_p_fu_7395_weight_address0.read();
    } else {
        weights_24_24_1x1_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state43.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state83.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state96.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state124.read()))) {
        weights_24_24_1x1_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state114.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()))) {
        weights_24_24_1x1_ce0 = grp_subconv_1x1_16_p_fu_7455_weight_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        weights_24_24_1x1_ce0 = grp_subconv_1x1_32_p_fu_7395_weight_ce0.read();
    } else {
        weights_24_24_1x1_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state43.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state83.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state96.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state124.read()))) {
        weights_24_24_1x1_we0 = ap_const_logic_1;
    } else {
        weights_24_24_1x1_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_1_3x3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state498.read())) {
        weights_48_1_3x3_address0 =  (sc_lv<9>) (tmp_1868_cast_fu_23786_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state457.read())) {
        weights_48_1_3x3_address0 =  (sc_lv<9>) (tmp_1787_cast_fu_22362_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state416.read())) {
        weights_48_1_3x3_address0 =  (sc_lv<9>) (tmp_1708_cast_fu_20946_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state375.read())) {
        weights_48_1_3x3_address0 =  (sc_lv<9>) (tmp_1630_cast_fu_19534_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state334.read())) {
        weights_48_1_3x3_address0 =  (sc_lv<9>) (tmp_1552_cast_fu_18122_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state293.read())) {
        weights_48_1_3x3_address0 =  (sc_lv<9>) (tmp_1475_cast_fu_16710_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state252.read())) {
        weights_48_1_3x3_address0 =  (sc_lv<9>) (tmp_1396_cast_fu_15286_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state211.read())) {
        weights_48_1_3x3_address0 =  (sc_lv<9>) (tmp_1319_cast_fu_13882_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state173.read())) {
        weights_48_1_3x3_address0 =  (sc_lv<9>) (tmp_1250_cast_fu_12589_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state149.read())) {
        weights_48_1_3x3_address0 =  (sc_lv<9>) (tmp_1215_cast_fu_11871_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state216.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state257.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state298.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state339.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state380.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state421.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state462.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state503.read()))) {
        weights_48_1_3x3_address0 = grp_subconv_3x3_8_no_rel_fu_7542_weight_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state154.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state178.read()))) {
        weights_48_1_3x3_address0 = grp_subconv_3x3_16_strid_fu_7505_weight_address0.read();
    } else {
        weights_48_1_3x3_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_1_3x3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state149.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state173.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state211.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state252.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state293.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state334.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state375.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state416.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state457.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state498.read()))) {
        weights_48_1_3x3_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state216.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state257.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state298.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state339.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state380.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state421.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state462.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state503.read()))) {
        weights_48_1_3x3_ce0 = grp_subconv_3x3_8_no_rel_fu_7542_weight_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state154.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state178.read()))) {
        weights_48_1_3x3_ce0 = grp_subconv_3x3_16_strid_fu_7505_weight_ce0.read();
    } else {
        weights_48_1_3x3_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_1_3x3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state149.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state173.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state211.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state252.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state293.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state334.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state375.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state416.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state457.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state498.read()))) {
        weights_48_1_3x3_we0 = ap_const_logic_1;
    } else {
        weights_48_1_3x3_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state508.read())) {
        weights_48_48_1x1_address0 =  (sc_lv<12>) (tmp_1887_cast_fu_24162_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state486.read())) {
        weights_48_48_1x1_address0 =  (sc_lv<12>) (tmp_1849_cast_fu_23440_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state467.read())) {
        weights_48_48_1x1_address0 =  (sc_lv<12>) (tmp_1808_cast_fu_22734_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state445.read())) {
        weights_48_48_1x1_address0 =  (sc_lv<12>) (tmp_1768_cast_fu_22012_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state426.read())) {
        weights_48_48_1x1_address0 =  (sc_lv<12>) (tmp_1727_cast_fu_21310_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state404.read())) {
        weights_48_48_1x1_address0 =  (sc_lv<12>) (tmp_1688_cast_fu_20592_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state385.read())) {
        weights_48_48_1x1_address0 =  (sc_lv<12>) (tmp_1649_cast_fu_19898_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read())) {
        weights_48_48_1x1_address0 =  (sc_lv<12>) (tmp_1610_cast_fu_19180_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state344.read())) {
        weights_48_48_1x1_address0 =  (sc_lv<12>) (tmp_1571_cast_fu_18486_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state322.read())) {
        weights_48_48_1x1_address0 =  (sc_lv<12>) (tmp_1533_cast_fu_17776_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state303.read())) {
        weights_48_48_1x1_address0 =  (sc_lv<12>) (tmp_1494_cast_fu_17078_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state281.read())) {
        weights_48_48_1x1_address0 =  (sc_lv<12>) (tmp_1456_cast_fu_16360_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state262.read())) {
        weights_48_48_1x1_address0 =  (sc_lv<12>) (tmp_1415_cast_fu_15654_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state240.read())) {
        weights_48_48_1x1_address0 =  (sc_lv<12>) (tmp_1377_cast_fu_14940_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state221.read())) {
        weights_48_48_1x1_address0 =  (sc_lv<12>) (tmp_1338_cast_fu_14246_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state199.read())) {
        weights_48_48_1x1_address0 =  (sc_lv<12>) (tmp_1300_cast_fu_13532_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state183.read())) {
        weights_48_48_1x1_address0 =  (sc_lv<12>) (tmp_1272_cast_fu_12957_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state159.read())) {
        weights_48_48_1x1_address0 =  (sc_lv<12>) (tmp_1231_cast_fu_12239_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read())) {
        weights_48_48_1x1_address0 =  (sc_lv<12>) (tmp_1196_cast_fu_11521_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state204.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state226.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state245.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state267.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state286.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state308.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state327.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state349.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state368.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state390.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state431.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state450.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state472.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state491.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state513.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state188.read()))) {
        weights_48_48_1x1_address0 = grp_subconv_1x1_8_p_fu_7443_weight_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state142.read())) {
        weights_48_48_1x1_address0 = grp_subconv_1x1_16p_p_fu_7419_weight_address0.read();
    } else {
        weights_48_48_1x1_address0 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state159.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state183.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state199.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state221.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state240.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state262.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state281.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state303.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state322.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state344.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state385.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state404.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state426.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state445.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state467.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state486.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state508.read()))) {
        weights_48_48_1x1_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state204.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state226.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state245.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state267.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state286.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state308.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state327.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state349.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state368.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state390.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state431.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state450.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state472.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state491.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state513.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state188.read()))) {
        weights_48_48_1x1_ce0 = grp_subconv_1x1_8_p_fu_7443_weight_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state142.read())) {
        weights_48_48_1x1_ce0 = grp_subconv_1x1_16p_p_fu_7419_weight_ce0.read();
    } else {
        weights_48_48_1x1_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state159.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state183.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state199.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state221.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state240.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state262.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state281.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state303.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state322.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state344.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state385.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state404.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state426.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state445.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state467.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state486.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state508.read()))) {
        weights_48_48_1x1_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_1_3x3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state679.read())) {
        weights_96_1_3x3_address0 =  (sc_lv<10>) (tmp_2182_cast_fu_29716_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state638.read())) {
        weights_96_1_3x3_address0 =  (sc_lv<10>) (tmp_2107_cast_fu_28346_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state597.read())) {
        weights_96_1_3x3_address0 =  (sc_lv<10>) (tmp_2029_cast_fu_26946_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state559.read())) {
        weights_96_1_3x3_address0 =  (sc_lv<10>) (tmp_1962_cast_fu_25689_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state535.read())) {
        weights_96_1_3x3_address0 =  (sc_lv<10>) (tmp_1928_cast_fu_24983_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state602.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state643.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state684.read()))) {
        weights_96_1_3x3_address0 = grp_subconv_3x3_4_no_rel_fu_7530_weight_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state540.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state564.read()))) {
        weights_96_1_3x3_address0 = grp_subconv_3x3_8_stride_fu_7492_weight_address0.read();
    } else {
        weights_96_1_3x3_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_1_3x3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state535.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state559.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state597.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state638.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state679.read()))) {
        weights_96_1_3x3_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state602.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state643.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state684.read()))) {
        weights_96_1_3x3_ce0 = grp_subconv_3x3_4_no_rel_fu_7530_weight_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state540.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state564.read()))) {
        weights_96_1_3x3_ce0 = grp_subconv_3x3_8_stride_fu_7492_weight_ce0.read();
    } else {
        weights_96_1_3x3_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_1_3x3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state535.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state559.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state597.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state638.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state679.read()))) {
        weights_96_1_3x3_we0 = ap_const_logic_1;
    } else {
        weights_96_1_3x3_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state689.read())) {
        weights_96_96_1x1_address0 =  (sc_lv<14>) (tmp_2200_cast_fu_30064_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state667.read())) {
        weights_96_96_1x1_address0 =  (sc_lv<14>) (tmp_2163_cast_fu_29376_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state648.read())) {
        weights_96_96_1x1_address0 =  (sc_lv<14>) (tmp_2125_cast_fu_28694_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state626.read())) {
        weights_96_96_1x1_address0 =  (sc_lv<14>) (tmp_2087_cast_fu_27988_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state607.read())) {
        weights_96_96_1x1_address0 =  (sc_lv<14>) (tmp_2049_cast_fu_27306_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state585.read())) {
        weights_96_96_1x1_address0 =  (sc_lv<14>) (tmp_2010_cast_fu_26604_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state569.read())) {
        weights_96_96_1x1_address0 =  (sc_lv<14>) (tmp_1983_cast_fu_26041_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state545.read())) {
        weights_96_96_1x1_address0 =  (sc_lv<14>) (tmp_1943_cast_fu_25339_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state523.read())) {
        weights_96_96_1x1_address0 =  (sc_lv<14>) (tmp_1909_cast_fu_24637_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state590.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state612.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state631.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state694.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state550.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state574.read()))) {
        weights_96_96_1x1_address0 = grp_subconv_1x1_4_p_fu_7431_weight_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state528.read())) {
        weights_96_96_1x1_address0 = grp_subconv_1x1_8p_p_fu_7407_weight_address0.read();
    } else {
        weights_96_96_1x1_address0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state523.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state545.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state569.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state585.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state607.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state626.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state648.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state667.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state689.read()))) {
        weights_96_96_1x1_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state590.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state612.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state631.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state694.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state550.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state574.read()))) {
        weights_96_96_1x1_ce0 = grp_subconv_1x1_4_p_fu_7431_weight_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state528.read())) {
        weights_96_96_1x1_ce0 = grp_subconv_1x1_8p_p_fu_7407_weight_ce0.read();
    } else {
        weights_96_96_1x1_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state523.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state545.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state569.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state585.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state607.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state626.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state648.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state667.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state689.read()))) {
        weights_96_96_1x1_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_we0 = ap_const_logic_0;
    }
}

}

