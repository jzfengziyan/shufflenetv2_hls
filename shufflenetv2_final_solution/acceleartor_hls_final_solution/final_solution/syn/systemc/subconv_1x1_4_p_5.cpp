#include "subconv_1x1_4_p.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void subconv_1x1_4_p::thread_tmp_833_fu_9327_p3() {
    tmp_833_fu_9327_p3 = p_Val2_9_fu_9321_p2.read().range(7, 7);
}

void subconv_1x1_4_p::thread_tmp_834_fu_12029_p3() {
    tmp_834_fu_12029_p3 = p_Val2_7_reg_17810.read().range(14, 14);
}

void subconv_1x1_4_p::thread_tmp_837_fu_9428_p3() {
    tmp_837_fu_9428_p3 = p_Val2_1_fu_9401_p2.read().range(13, 13);
}

void subconv_1x1_4_p::thread_tmp_838_fu_9442_p3() {
    tmp_838_fu_9442_p3 = p_Val2_11_fu_9436_p2.read().range(7, 7);
}

void subconv_1x1_4_p::thread_tmp_839_fu_12112_p3() {
    tmp_839_fu_12112_p3 = p_Val2_1_reg_17857.read().range(14, 14);
}

void subconv_1x1_4_p::thread_tmp_842_fu_9543_p3() {
    tmp_842_fu_9543_p3 = p_Val2_73_1_fu_9516_p2.read().range(13, 13);
}

void subconv_1x1_4_p::thread_tmp_843_fu_9557_p3() {
    tmp_843_fu_9557_p3 = p_Val2_75_1_fu_9551_p2.read().range(7, 7);
}

void subconv_1x1_4_p::thread_tmp_844_fu_12195_p3() {
    tmp_844_fu_12195_p3 = p_Val2_73_1_reg_17904.read().range(14, 14);
}

void subconv_1x1_4_p::thread_tmp_847_fu_9658_p3() {
    tmp_847_fu_9658_p3 = p_Val2_83_1_fu_9631_p2.read().range(13, 13);
}

void subconv_1x1_4_p::thread_tmp_848_fu_9672_p3() {
    tmp_848_fu_9672_p3 = p_Val2_85_1_fu_9666_p2.read().range(7, 7);
}

void subconv_1x1_4_p::thread_tmp_849_fu_12278_p3() {
    tmp_849_fu_12278_p3 = p_Val2_83_1_reg_17951.read().range(14, 14);
}

void subconv_1x1_4_p::thread_tmp_852_fu_9773_p3() {
    tmp_852_fu_9773_p3 = p_Val2_73_2_fu_9746_p2.read().range(13, 13);
}

void subconv_1x1_4_p::thread_tmp_853_fu_9787_p3() {
    tmp_853_fu_9787_p3 = p_Val2_75_2_fu_9781_p2.read().range(7, 7);
}

void subconv_1x1_4_p::thread_tmp_854_fu_12361_p3() {
    tmp_854_fu_12361_p3 = p_Val2_73_2_reg_17998.read().range(14, 14);
}

void subconv_1x1_4_p::thread_tmp_857_fu_9888_p3() {
    tmp_857_fu_9888_p3 = p_Val2_83_2_fu_9861_p2.read().range(13, 13);
}

void subconv_1x1_4_p::thread_tmp_858_fu_9902_p3() {
    tmp_858_fu_9902_p3 = p_Val2_85_2_fu_9896_p2.read().range(7, 7);
}

void subconv_1x1_4_p::thread_tmp_859_fu_12444_p3() {
    tmp_859_fu_12444_p3 = p_Val2_83_2_reg_18045.read().range(14, 14);
}

void subconv_1x1_4_p::thread_tmp_862_fu_10003_p3() {
    tmp_862_fu_10003_p3 = p_Val2_73_3_fu_9976_p2.read().range(13, 13);
}

void subconv_1x1_4_p::thread_tmp_863_fu_10017_p3() {
    tmp_863_fu_10017_p3 = p_Val2_75_3_fu_10011_p2.read().range(7, 7);
}

void subconv_1x1_4_p::thread_tmp_864_fu_12527_p3() {
    tmp_864_fu_12527_p3 = p_Val2_73_3_reg_18092.read().range(14, 14);
}

void subconv_1x1_4_p::thread_tmp_867_fu_10118_p3() {
    tmp_867_fu_10118_p3 = p_Val2_83_3_fu_10091_p2.read().range(13, 13);
}

void subconv_1x1_4_p::thread_tmp_868_fu_10132_p3() {
    tmp_868_fu_10132_p3 = p_Val2_85_3_fu_10126_p2.read().range(7, 7);
}

void subconv_1x1_4_p::thread_tmp_869_fu_12610_p3() {
    tmp_869_fu_12610_p3 = p_Val2_83_3_reg_18139.read().range(14, 14);
}

void subconv_1x1_4_p::thread_tmp_872_fu_10233_p3() {
    tmp_872_fu_10233_p3 = p_Val2_73_4_fu_10206_p2.read().range(13, 13);
}

void subconv_1x1_4_p::thread_tmp_873_fu_10247_p3() {
    tmp_873_fu_10247_p3 = p_Val2_75_4_fu_10241_p2.read().range(7, 7);
}

void subconv_1x1_4_p::thread_tmp_874_fu_12693_p3() {
    tmp_874_fu_12693_p3 = p_Val2_73_4_reg_18186.read().range(14, 14);
}

void subconv_1x1_4_p::thread_tmp_875_cast_fu_3313_p1() {
    tmp_875_cast_fu_3313_p1 = esl_sext<32,11>(tmp_344_reg_15201.read());
}

void subconv_1x1_4_p::thread_tmp_877_fu_10348_p3() {
    tmp_877_fu_10348_p3 = p_Val2_83_4_fu_10321_p2.read().range(13, 13);
}

void subconv_1x1_4_p::thread_tmp_878_cast_fu_3215_p1() {
    tmp_878_cast_fu_3215_p1 = esl_sext<11,10>(tmp_345_fu_3209_p2.read());
}

void subconv_1x1_4_p::thread_tmp_878_fu_10362_p3() {
    tmp_878_fu_10362_p3 = p_Val2_85_4_fu_10356_p2.read().range(7, 7);
}

void subconv_1x1_4_p::thread_tmp_879_fu_12776_p3() {
    tmp_879_fu_12776_p3 = p_Val2_83_4_reg_18233.read().range(14, 14);
}

void subconv_1x1_4_p::thread_tmp_882_fu_10463_p3() {
    tmp_882_fu_10463_p3 = p_Val2_73_5_fu_10436_p2.read().range(13, 13);
}

void subconv_1x1_4_p::thread_tmp_883_cast_fu_3349_p1() {
    tmp_883_cast_fu_3349_p1 = esl_zext<32,10>(tmp_348_reg_15206.read());
}

void subconv_1x1_4_p::thread_tmp_883_fu_10477_p3() {
    tmp_883_fu_10477_p3 = p_Val2_75_5_fu_10471_p2.read().range(7, 7);
}

void subconv_1x1_4_p::thread_tmp_884_fu_12859_p3() {
    tmp_884_fu_12859_p3 = p_Val2_73_5_reg_18280.read().range(14, 14);
}

void subconv_1x1_4_p::thread_tmp_887_fu_10578_p3() {
    tmp_887_fu_10578_p3 = p_Val2_83_5_fu_10551_p2.read().range(13, 13);
}

void subconv_1x1_4_p::thread_tmp_888_fu_10592_p3() {
    tmp_888_fu_10592_p3 = p_Val2_85_5_fu_10586_p2.read().range(7, 7);
}

void subconv_1x1_4_p::thread_tmp_889_fu_12942_p3() {
    tmp_889_fu_12942_p3 = p_Val2_83_5_reg_18327.read().range(14, 14);
}

void subconv_1x1_4_p::thread_tmp_892_fu_10693_p3() {
    tmp_892_fu_10693_p3 = p_Val2_73_6_fu_10666_p2.read().range(13, 13);
}

void subconv_1x1_4_p::thread_tmp_893_fu_10707_p3() {
    tmp_893_fu_10707_p3 = p_Val2_75_6_fu_10701_p2.read().range(7, 7);
}

void subconv_1x1_4_p::thread_tmp_894_fu_13025_p3() {
    tmp_894_fu_13025_p3 = p_Val2_73_6_reg_18374.read().range(14, 14);
}

void subconv_1x1_4_p::thread_tmp_897_fu_10808_p3() {
    tmp_897_fu_10808_p3 = p_Val2_83_6_fu_10781_p2.read().range(13, 13);
}

void subconv_1x1_4_p::thread_tmp_898_fu_10822_p3() {
    tmp_898_fu_10822_p3 = p_Val2_85_6_fu_10816_p2.read().range(7, 7);
}

void subconv_1x1_4_p::thread_tmp_899_fu_13108_p3() {
    tmp_899_fu_13108_p3 = p_Val2_83_6_reg_18421.read().range(14, 14);
}

void subconv_1x1_4_p::thread_tmp_902_fu_10923_p3() {
    tmp_902_fu_10923_p3 = p_Val2_73_7_fu_10896_p2.read().range(13, 13);
}

void subconv_1x1_4_p::thread_tmp_903_fu_10937_p3() {
    tmp_903_fu_10937_p3 = p_Val2_75_7_fu_10931_p2.read().range(7, 7);
}

void subconv_1x1_4_p::thread_tmp_904_fu_13191_p3() {
    tmp_904_fu_13191_p3 = p_Val2_73_7_reg_18468.read().range(14, 14);
}

void subconv_1x1_4_p::thread_tmp_907_fu_11038_p3() {
    tmp_907_fu_11038_p3 = p_Val2_83_7_fu_11011_p2.read().range(13, 13);
}

void subconv_1x1_4_p::thread_tmp_908_fu_11052_p3() {
    tmp_908_fu_11052_p3 = p_Val2_85_7_fu_11046_p2.read().range(7, 7);
}

void subconv_1x1_4_p::thread_tmp_909_fu_13274_p3() {
    tmp_909_fu_13274_p3 = p_Val2_83_7_reg_18515.read().range(14, 14);
}

void subconv_1x1_4_p::thread_tmp_912_fu_11153_p3() {
    tmp_912_fu_11153_p3 = p_Val2_73_8_fu_11126_p2.read().range(13, 13);
}

void subconv_1x1_4_p::thread_tmp_913_fu_11167_p3() {
    tmp_913_fu_11167_p3 = p_Val2_75_8_fu_11161_p2.read().range(7, 7);
}

void subconv_1x1_4_p::thread_tmp_914_fu_13357_p3() {
    tmp_914_fu_13357_p3 = p_Val2_73_8_reg_18562.read().range(14, 14);
}

void subconv_1x1_4_p::thread_tmp_917_fu_11267_p3() {
    tmp_917_fu_11267_p3 = p_Val2_83_8_fu_11240_p2.read().range(13, 13);
}

void subconv_1x1_4_p::thread_tmp_918_fu_11281_p3() {
    tmp_918_fu_11281_p3 = p_Val2_85_8_fu_11275_p2.read().range(7, 7);
}

void subconv_1x1_4_p::thread_tmp_919_fu_13440_p3() {
    tmp_919_fu_13440_p3 = p_Val2_83_8_reg_18609.read().range(14, 14);
}

void subconv_1x1_4_p::thread_tmp_922_fu_11382_p3() {
    tmp_922_fu_11382_p3 = p_Val2_73_9_fu_11355_p2.read().range(13, 13);
}

void subconv_1x1_4_p::thread_tmp_923_fu_11396_p3() {
    tmp_923_fu_11396_p3 = p_Val2_75_9_fu_11390_p2.read().range(7, 7);
}

void subconv_1x1_4_p::thread_tmp_924_fu_13523_p3() {
    tmp_924_fu_13523_p3 = p_Val2_73_9_reg_18656.read().range(14, 14);
}

void subconv_1x1_4_p::thread_tmp_927_fu_11497_p3() {
    tmp_927_fu_11497_p3 = p_Val2_83_9_fu_11470_p2.read().range(13, 13);
}

void subconv_1x1_4_p::thread_tmp_928_fu_11511_p3() {
    tmp_928_fu_11511_p3 = p_Val2_85_9_fu_11505_p2.read().range(7, 7);
}

void subconv_1x1_4_p::thread_tmp_929_fu_13606_p3() {
    tmp_929_fu_13606_p3 = p_Val2_83_9_reg_18703.read().range(14, 14);
}

void subconv_1x1_4_p::thread_tmp_932_fu_11612_p3() {
    tmp_932_fu_11612_p3 = p_Val2_73_s_fu_11585_p2.read().range(13, 13);
}

void subconv_1x1_4_p::thread_tmp_933_fu_11626_p3() {
    tmp_933_fu_11626_p3 = p_Val2_75_s_fu_11620_p2.read().range(7, 7);
}

void subconv_1x1_4_p::thread_tmp_934_fu_13689_p3() {
    tmp_934_fu_13689_p3 = p_Val2_73_s_reg_18750.read().range(14, 14);
}

void subconv_1x1_4_p::thread_tmp_937_fu_11727_p3() {
    tmp_937_fu_11727_p3 = p_Val2_83_s_fu_11700_p2.read().range(13, 13);
}

void subconv_1x1_4_p::thread_tmp_938_fu_11741_p3() {
    tmp_938_fu_11741_p3 = p_Val2_85_s_fu_11735_p2.read().range(7, 7);
}

void subconv_1x1_4_p::thread_tmp_939_fu_13772_p3() {
    tmp_939_fu_13772_p3 = p_Val2_83_s_reg_18797.read().range(14, 14);
}

void subconv_1x1_4_p::thread_tmp_942_fu_11842_p3() {
    tmp_942_fu_11842_p3 = p_Val2_73_10_fu_11815_p2.read().range(13, 13);
}

void subconv_1x1_4_p::thread_tmp_943_fu_11856_p3() {
    tmp_943_fu_11856_p3 = p_Val2_75_10_fu_11850_p2.read().range(7, 7);
}

void subconv_1x1_4_p::thread_tmp_944_fu_13855_p3() {
    tmp_944_fu_13855_p3 = p_Val2_73_10_reg_18844.read().range(14, 14);
}

void subconv_1x1_4_p::thread_tmp_947_fu_11957_p3() {
    tmp_947_fu_11957_p3 = p_Val2_83_10_fu_11930_p2.read().range(13, 13);
}

void subconv_1x1_4_p::thread_tmp_948_fu_11971_p3() {
    tmp_948_fu_11971_p3 = p_Val2_85_10_fu_11965_p2.read().range(7, 7);
}

void subconv_1x1_4_p::thread_tmp_949_fu_13938_p3() {
    tmp_949_fu_13938_p3 = p_Val2_83_10_reg_18891.read().range(14, 14);
}

void subconv_1x1_4_p::thread_tmp_953_cast_fu_9210_p1() {
    tmp_953_cast_fu_9210_p1 = esl_sext<32,11>(tmp_353_reg_17408.read());
}

void subconv_1x1_4_p::thread_tmp_956_cast_fu_9043_p1() {
    tmp_956_cast_fu_9043_p1 = esl_sext<11,10>(tmp_354_fu_9037_p2.read());
}

void subconv_1x1_4_p::thread_tmp_961_cast_fu_9240_p1() {
    tmp_961_cast_fu_9240_p1 = esl_zext<32,10>(tmp_357_reg_17413.read());
}

void subconv_1x1_4_p::thread_tmp_965_cast_fu_9225_p1() {
    tmp_965_cast_fu_9225_p1 = esl_sext<32,11>(tmp_359_reg_17418.read());
}

void subconv_1x1_4_p::thread_tmp_968_cast_fu_9148_p1() {
    tmp_968_cast_fu_9148_p1 = esl_sext<12,11>(tmp_360_fu_9142_p2.read());
}

void subconv_1x1_4_p::thread_tmp_973_cast_fu_9255_p1() {
    tmp_973_cast_fu_9255_p1 = esl_zext<32,10>(tmp_363_reg_17423.read());
}

void subconv_1x1_4_p::thread_tmp_98_fu_14979_p13() {
    tmp_98_fu_14979_p13 = esl_zext<32,7>(grp_fu_14794_p2.read());
}

void subconv_1x1_4_p::thread_tmp_s_fu_2554_p1() {
    tmp_s_fu_2554_p1 = esl_sext<10,8>(tmp_643_fu_2547_p3.read());
}

void subconv_1x1_4_p::thread_underflow_10_10_fu_7898_p2() {
    underflow_10_10_fu_7898_p2 = (tmp_813_reg_16652.read() & tmp48_fu_7892_p2.read());
}

void subconv_1x1_4_p::thread_underflow_10_1_fu_6321_p2() {
    underflow_10_1_fu_6321_p2 = (tmp_707_reg_15759.read() & tmp8_fu_6315_p2.read());
}

void subconv_1x1_4_p::thread_underflow_10_2_fu_6487_p2() {
    underflow_10_2_fu_6487_p2 = (tmp_717_reg_15853.read() & tmp12_fu_6481_p2.read());
}

void subconv_1x1_4_p::thread_underflow_10_3_fu_6653_p2() {
    underflow_10_3_fu_6653_p2 = (tmp_727_reg_15947.read() & tmp16_fu_6647_p2.read());
}

void subconv_1x1_4_p::thread_underflow_10_4_fu_6819_p2() {
    underflow_10_4_fu_6819_p2 = (tmp_737_reg_16041.read() & tmp20_fu_6813_p2.read());
}

void subconv_1x1_4_p::thread_underflow_10_5_fu_6985_p2() {
    underflow_10_5_fu_6985_p2 = (tmp_747_reg_16135.read() & tmp24_fu_6979_p2.read());
}

void subconv_1x1_4_p::thread_underflow_10_6_fu_7151_p2() {
    underflow_10_6_fu_7151_p2 = (tmp_757_reg_16229.read() & tmp28_fu_7145_p2.read());
}

void subconv_1x1_4_p::thread_underflow_10_7_fu_7317_p2() {
    underflow_10_7_fu_7317_p2 = (tmp_767_reg_16323.read() & tmp32_fu_7311_p2.read());
}

void subconv_1x1_4_p::thread_underflow_10_8_fu_8786_p2() {
    underflow_10_8_fu_8786_p2 = (tmp_777_reg_17274.read() & tmp36_fu_8780_p2.read());
}

void subconv_1x1_4_p::thread_underflow_10_9_fu_7566_p2() {
    underflow_10_9_fu_7566_p2 = (tmp_793_reg_16464.read() & tmp40_fu_7560_p2.read());
}

void subconv_1x1_4_p::thread_underflow_10_fu_6155_p2() {
    underflow_10_fu_6155_p2 = (tmp_692_reg_15665.read() & tmp4_fu_6149_p2.read());
}

void subconv_1x1_4_p::thread_underflow_10_not_10_fu_8573_p2() {
    underflow_10_not_10_fu_8573_p2 = (tmp49_fu_8569_p2.read() | p_38_i_i5_10_reg_17244.read());
}

void subconv_1x1_4_p::thread_underflow_10_not_1_fu_8003_p2() {
    underflow_10_not_1_fu_8003_p2 = (tmp9_fu_7999_p2.read() | p_38_i_i5_1_reg_16769.read());
}

void subconv_1x1_4_p::thread_underflow_10_not_2_fu_8063_p2() {
    underflow_10_not_2_fu_8063_p2 = (tmp13_fu_8059_p2.read() | p_38_i_i5_2_reg_16819.read());
}

void subconv_1x1_4_p::thread_underflow_10_not_3_fu_8123_p2() {
    underflow_10_not_3_fu_8123_p2 = (tmp17_fu_8119_p2.read() | p_38_i_i5_3_reg_16869.read());
}

void subconv_1x1_4_p::thread_underflow_10_not_4_fu_8183_p2() {
    underflow_10_not_4_fu_8183_p2 = (tmp21_fu_8179_p2.read() | p_38_i_i5_4_reg_16919.read());
}

void subconv_1x1_4_p::thread_underflow_10_not_5_fu_8243_p2() {
    underflow_10_not_5_fu_8243_p2 = (tmp25_fu_8239_p2.read() | p_38_i_i5_5_reg_16969.read());
}

void subconv_1x1_4_p::thread_underflow_10_not_6_fu_8303_p2() {
    underflow_10_not_6_fu_8303_p2 = (tmp29_fu_8299_p2.read() | p_38_i_i5_6_reg_17019.read());
}

void subconv_1x1_4_p::thread_underflow_10_not_7_fu_8363_p2() {
    underflow_10_not_7_fu_8363_p2 = (tmp33_fu_8359_p2.read() | p_38_i_i5_7_reg_17069.read());
}

void subconv_1x1_4_p::thread_underflow_10_not_8_fu_8801_p2() {
    underflow_10_not_8_fu_8801_p2 = (tmp37_fu_8797_p2.read() | p_38_i_i5_8_reg_17316.read());
}

void subconv_1x1_4_p::thread_underflow_10_not_9_fu_8453_p2() {
    underflow_10_not_9_fu_8453_p2 = (tmp41_fu_8449_p2.read() | p_38_i_i5_9_reg_17144.read());
}

void subconv_1x1_4_p::thread_underflow_10_not_fu_7943_p2() {
    underflow_10_not_fu_7943_p2 = (tmp5_fu_7939_p2.read() | p_38_i_i5_reg_16719.read());
}

void subconv_1x1_4_p::thread_underflow_10_not_s_fu_8513_p2() {
    underflow_10_not_s_fu_8513_p2 = (tmp45_fu_8509_p2.read() | p_38_i_i5_s_reg_17194.read());
}

void subconv_1x1_4_p::thread_underflow_10_s_fu_7732_p2() {
    underflow_10_s_fu_7732_p2 = (tmp_803_reg_16558.read() & tmp44_fu_7726_p2.read());
}

void subconv_1x1_4_p::thread_underflow_11_10_fu_13927_p2() {
    underflow_11_10_fu_13927_p2 = (tmp_940_reg_18849.read() & tmp94_fu_13921_p2.read());
}

void subconv_1x1_4_p::thread_underflow_11_1_fu_12267_p2() {
    underflow_11_1_fu_12267_p2 = (tmp_840_reg_17909.read() & tmp54_fu_12261_p2.read());
}

void subconv_1x1_4_p::thread_underflow_11_2_fu_12433_p2() {
    underflow_11_2_fu_12433_p2 = (tmp_850_reg_18003.read() & tmp58_fu_12427_p2.read());
}

void subconv_1x1_4_p::thread_underflow_11_3_fu_12599_p2() {
    underflow_11_3_fu_12599_p2 = (tmp_860_reg_18097.read() & tmp62_fu_12593_p2.read());
}

void subconv_1x1_4_p::thread_underflow_11_4_fu_12765_p2() {
    underflow_11_4_fu_12765_p2 = (tmp_870_reg_18191.read() & tmp66_fu_12759_p2.read());
}

void subconv_1x1_4_p::thread_underflow_11_5_fu_12931_p2() {
    underflow_11_5_fu_12931_p2 = (tmp_880_reg_18285.read() & tmp70_fu_12925_p2.read());
}

void subconv_1x1_4_p::thread_underflow_11_6_fu_13097_p2() {
    underflow_11_6_fu_13097_p2 = (tmp_890_reg_18379.read() & tmp74_fu_13091_p2.read());
}

void subconv_1x1_4_p::thread_underflow_11_7_fu_13263_p2() {
    underflow_11_7_fu_13263_p2 = (tmp_900_reg_18473.read() & tmp78_fu_13257_p2.read());
}

void subconv_1x1_4_p::thread_underflow_11_8_fu_13429_p2() {
    underflow_11_8_fu_13429_p2 = (tmp_910_reg_18567.read() & tmp82_fu_13423_p2.read());
}

void subconv_1x1_4_p::thread_underflow_11_9_fu_13595_p2() {
    underflow_11_9_fu_13595_p2 = (tmp_920_reg_18661.read() & tmp86_fu_13589_p2.read());
}

void subconv_1x1_4_p::thread_underflow_11_fu_12101_p2() {
    underflow_11_fu_12101_p2 = (tmp_830_reg_17815.read() & tmp50_fu_12095_p2.read());
}

void subconv_1x1_4_p::thread_underflow_11_not_10_fu_14685_p2() {
    underflow_11_not_10_fu_14685_p2 = (tmp95_fu_14681_p2.read() | p_38_i_i4_10_reg_19488.read());
}

void subconv_1x1_4_p::thread_underflow_11_not_1_fu_14085_p2() {
    underflow_11_not_1_fu_14085_p2 = (tmp55_fu_14081_p2.read() | p_38_i_i4_1_reg_18988.read());
}

void subconv_1x1_4_p::thread_underflow_11_not_2_fu_14145_p2() {
    underflow_11_not_2_fu_14145_p2 = (tmp59_fu_14141_p2.read() | p_38_i_i4_2_reg_19038.read());
}

void subconv_1x1_4_p::thread_underflow_11_not_3_fu_14205_p2() {
    underflow_11_not_3_fu_14205_p2 = (tmp63_fu_14201_p2.read() | p_38_i_i4_3_reg_19088.read());
}

void subconv_1x1_4_p::thread_underflow_11_not_4_fu_14265_p2() {
    underflow_11_not_4_fu_14265_p2 = (tmp67_fu_14261_p2.read() | p_38_i_i4_4_reg_19138.read());
}

void subconv_1x1_4_p::thread_underflow_11_not_5_fu_14325_p2() {
    underflow_11_not_5_fu_14325_p2 = (tmp71_fu_14321_p2.read() | p_38_i_i4_5_reg_19188.read());
}

void subconv_1x1_4_p::thread_underflow_11_not_6_fu_14385_p2() {
    underflow_11_not_6_fu_14385_p2 = (tmp75_fu_14381_p2.read() | p_38_i_i4_6_reg_19238.read());
}

void subconv_1x1_4_p::thread_underflow_11_not_7_fu_14445_p2() {
    underflow_11_not_7_fu_14445_p2 = (tmp79_fu_14441_p2.read() | p_38_i_i4_7_reg_19288.read());
}

void subconv_1x1_4_p::thread_underflow_11_not_8_fu_14505_p2() {
    underflow_11_not_8_fu_14505_p2 = (tmp83_fu_14501_p2.read() | p_38_i_i4_8_reg_19338.read());
}

void subconv_1x1_4_p::thread_underflow_11_not_9_fu_14565_p2() {
    underflow_11_not_9_fu_14565_p2 = (tmp87_fu_14561_p2.read() | p_38_i_i4_9_reg_19388.read());
}

void subconv_1x1_4_p::thread_underflow_11_not_fu_14025_p2() {
    underflow_11_not_fu_14025_p2 = (tmp51_fu_14021_p2.read() | p_38_i_i4_reg_18938.read());
}

void subconv_1x1_4_p::thread_underflow_11_not_s_fu_14625_p2() {
    underflow_11_not_s_fu_14625_p2 = (tmp91_fu_14621_p2.read() | p_38_i_i4_s_reg_19438.read());
}

void subconv_1x1_4_p::thread_underflow_11_s_fu_13761_p2() {
    underflow_11_s_fu_13761_p2 = (tmp_930_reg_18755.read() & tmp90_fu_13755_p2.read());
}

void subconv_1x1_4_p::thread_underflow_12_10_fu_14010_p2() {
    underflow_12_10_fu_14010_p2 = (tmp_945_reg_18896.read() & tmp96_fu_14004_p2.read());
}

void subconv_1x1_4_p::thread_underflow_12_1_fu_12350_p2() {
    underflow_12_1_fu_12350_p2 = (tmp_845_reg_17956.read() & tmp56_fu_12344_p2.read());
}

void subconv_1x1_4_p::thread_underflow_12_2_fu_12516_p2() {
    underflow_12_2_fu_12516_p2 = (tmp_855_reg_18050.read() & tmp60_fu_12510_p2.read());
}

void subconv_1x1_4_p::thread_underflow_12_3_fu_12682_p2() {
    underflow_12_3_fu_12682_p2 = (tmp_865_reg_18144.read() & tmp64_fu_12676_p2.read());
}

void subconv_1x1_4_p::thread_underflow_12_4_fu_12848_p2() {
    underflow_12_4_fu_12848_p2 = (tmp_875_reg_18238.read() & tmp68_fu_12842_p2.read());
}

void subconv_1x1_4_p::thread_underflow_12_5_fu_13014_p2() {
    underflow_12_5_fu_13014_p2 = (tmp_885_reg_18332.read() & tmp72_fu_13008_p2.read());
}

void subconv_1x1_4_p::thread_underflow_12_6_fu_13180_p2() {
    underflow_12_6_fu_13180_p2 = (tmp_895_reg_18426.read() & tmp76_fu_13174_p2.read());
}

void subconv_1x1_4_p::thread_underflow_12_7_fu_13346_p2() {
    underflow_12_7_fu_13346_p2 = (tmp_905_reg_18520.read() & tmp80_fu_13340_p2.read());
}

void subconv_1x1_4_p::thread_underflow_12_8_fu_13512_p2() {
    underflow_12_8_fu_13512_p2 = (tmp_915_reg_18614.read() & tmp84_fu_13506_p2.read());
}

void subconv_1x1_4_p::thread_underflow_12_9_fu_13678_p2() {
    underflow_12_9_fu_13678_p2 = (tmp_925_reg_18708.read() & tmp88_fu_13672_p2.read());
}

void subconv_1x1_4_p::thread_underflow_12_fu_12184_p2() {
    underflow_12_fu_12184_p2 = (tmp_835_reg_17862.read() & tmp52_fu_12178_p2.read());
}

void subconv_1x1_4_p::thread_underflow_12_not_10_fu_14715_p2() {
    underflow_12_not_10_fu_14715_p2 = (tmp97_fu_14711_p2.read() | p_38_i_i_11_reg_19513.read());
}

void subconv_1x1_4_p::thread_underflow_12_not_1_fu_14115_p2() {
    underflow_12_not_1_fu_14115_p2 = (tmp57_fu_14111_p2.read() | p_38_i_i_1_reg_19013.read());
}

void subconv_1x1_4_p::thread_underflow_12_not_2_fu_14175_p2() {
    underflow_12_not_2_fu_14175_p2 = (tmp61_fu_14171_p2.read() | p_38_i_i_2_reg_19063.read());
}

void subconv_1x1_4_p::thread_underflow_12_not_3_fu_14235_p2() {
    underflow_12_not_3_fu_14235_p2 = (tmp65_fu_14231_p2.read() | p_38_i_i_3_reg_19113.read());
}

void subconv_1x1_4_p::thread_underflow_12_not_4_fu_14295_p2() {
    underflow_12_not_4_fu_14295_p2 = (tmp69_fu_14291_p2.read() | p_38_i_i_4_reg_19163.read());
}

void subconv_1x1_4_p::thread_underflow_12_not_5_fu_14355_p2() {
    underflow_12_not_5_fu_14355_p2 = (tmp73_fu_14351_p2.read() | p_38_i_i_5_reg_19213.read());
}

void subconv_1x1_4_p::thread_underflow_12_not_6_fu_14415_p2() {
    underflow_12_not_6_fu_14415_p2 = (tmp77_fu_14411_p2.read() | p_38_i_i_6_reg_19263.read());
}

void subconv_1x1_4_p::thread_underflow_12_not_7_fu_14475_p2() {
    underflow_12_not_7_fu_14475_p2 = (tmp81_fu_14471_p2.read() | p_38_i_i_7_reg_19313.read());
}

void subconv_1x1_4_p::thread_underflow_12_not_8_fu_14535_p2() {
    underflow_12_not_8_fu_14535_p2 = (tmp85_fu_14531_p2.read() | p_38_i_i_8_reg_19363.read());
}

void subconv_1x1_4_p::thread_underflow_12_not_9_fu_14595_p2() {
    underflow_12_not_9_fu_14595_p2 = (tmp89_fu_14591_p2.read() | p_38_i_i_9_reg_19413.read());
}

void subconv_1x1_4_p::thread_underflow_12_not_fu_14055_p2() {
    underflow_12_not_fu_14055_p2 = (tmp53_fu_14051_p2.read() | p_38_i_i_reg_18963.read());
}

void subconv_1x1_4_p::thread_underflow_12_not_s_fu_14655_p2() {
    underflow_12_not_s_fu_14655_p2 = (tmp93_fu_14651_p2.read() | p_38_i_i_10_reg_19463.read());
}

void subconv_1x1_4_p::thread_underflow_12_s_fu_13844_p2() {
    underflow_12_s_fu_13844_p2 = (tmp_935_reg_18802.read() & tmp92_fu_13838_p2.read());
}

void subconv_1x1_4_p::thread_underflow_1_fu_6238_p2() {
    underflow_1_fu_6238_p2 = (tmp_702_reg_15712.read() & tmp6_fu_6232_p2.read());
}

void subconv_1x1_4_p::thread_underflow_24_fu_7815_p2() {
    underflow_24_fu_7815_p2 = (tmp_808_reg_16605.read() & tmp46_fu_7809_p2.read());
}

void subconv_1x1_4_p::thread_underflow_2_fu_6404_p2() {
    underflow_2_fu_6404_p2 = (tmp_712_reg_15806.read() & tmp10_fu_6398_p2.read());
}

void subconv_1x1_4_p::thread_underflow_3_fu_6570_p2() {
    underflow_3_fu_6570_p2 = (tmp_722_reg_15900.read() & tmp14_fu_6564_p2.read());
}

void subconv_1x1_4_p::thread_underflow_4_fu_6736_p2() {
    underflow_4_fu_6736_p2 = (tmp_732_reg_15994.read() & tmp18_fu_6730_p2.read());
}

void subconv_1x1_4_p::thread_underflow_5_fu_6902_p2() {
    underflow_5_fu_6902_p2 = (tmp_742_reg_16088.read() & tmp22_fu_6896_p2.read());
}

void subconv_1x1_4_p::thread_underflow_6_fu_7068_p2() {
    underflow_6_fu_7068_p2 = (tmp_752_reg_16182.read() & tmp26_fu_7062_p2.read());
}

void subconv_1x1_4_p::thread_underflow_7_fu_7234_p2() {
    underflow_7_fu_7234_p2 = (tmp_762_reg_16276.read() & tmp30_fu_7228_p2.read());
}

void subconv_1x1_4_p::thread_underflow_8_fu_7400_p2() {
    underflow_8_fu_7400_p2 = (tmp_772_reg_16370.read() & tmp34_fu_7394_p2.read());
}

void subconv_1x1_4_p::thread_underflow_9_fu_7483_p2() {
    underflow_9_fu_7483_p2 = (tmp_788_reg_16417.read() & tmp38_fu_7477_p2.read());
}

void subconv_1x1_4_p::thread_underflow_fu_6072_p2() {
    underflow_fu_6072_p2 = (tmp_687_reg_15618.read() & tmp2_fu_6066_p2.read());
}

void subconv_1x1_4_p::thread_underflow_not_10_fu_8483_p2() {
    underflow_not_10_fu_8483_p2 = (tmp43_fu_8479_p2.read() | p_38_i_i3_s_reg_17169.read());
}

void subconv_1x1_4_p::thread_underflow_not_11_fu_8543_p2() {
    underflow_not_11_fu_8543_p2 = (tmp47_fu_8539_p2.read() | p_38_i_i3_10_reg_17219.read());
}

void subconv_1x1_4_p::thread_underflow_not_1_fu_7973_p2() {
    underflow_not_1_fu_7973_p2 = (tmp7_fu_7969_p2.read() | p_38_i_i3_1_reg_16744.read());
}

void subconv_1x1_4_p::thread_underflow_not_2_fu_8033_p2() {
    underflow_not_2_fu_8033_p2 = (tmp11_fu_8029_p2.read() | p_38_i_i3_2_reg_16794.read());
}

void subconv_1x1_4_p::thread_underflow_not_3_fu_8093_p2() {
    underflow_not_3_fu_8093_p2 = (tmp15_fu_8089_p2.read() | p_38_i_i3_3_reg_16844.read());
}

void subconv_1x1_4_p::thread_underflow_not_4_fu_8153_p2() {
    underflow_not_4_fu_8153_p2 = (tmp19_fu_8149_p2.read() | p_38_i_i3_4_reg_16894.read());
}

void subconv_1x1_4_p::thread_underflow_not_5_fu_8213_p2() {
    underflow_not_5_fu_8213_p2 = (tmp23_fu_8209_p2.read() | p_38_i_i3_5_reg_16944.read());
}

void subconv_1x1_4_p::thread_underflow_not_6_fu_8273_p2() {
    underflow_not_6_fu_8273_p2 = (tmp27_fu_8269_p2.read() | p_38_i_i3_6_reg_16994.read());
}

void subconv_1x1_4_p::thread_underflow_not_7_fu_8333_p2() {
    underflow_not_7_fu_8333_p2 = (tmp31_fu_8329_p2.read() | p_38_i_i3_7_reg_17044.read());
}

void subconv_1x1_4_p::thread_underflow_not_8_fu_8393_p2() {
    underflow_not_8_fu_8393_p2 = (tmp35_fu_8389_p2.read() | p_38_i_i3_8_reg_17094.read());
}

void subconv_1x1_4_p::thread_underflow_not_9_fu_8423_p2() {
    underflow_not_9_fu_8423_p2 = (tmp39_fu_8419_p2.read() | p_38_i_i3_9_reg_17119.read());
}

void subconv_1x1_4_p::thread_underflow_not_fu_7913_p2() {
    underflow_not_fu_7913_p2 = (tmp3_fu_7909_p2.read() | p_38_i_i3_reg_16694.read());
}

void subconv_1x1_4_p::thread_underflow_s_fu_7649_p2() {
    underflow_s_fu_7649_p2 = (tmp_798_reg_16511.read() & tmp42_fu_7643_p2.read());
}

void subconv_1x1_4_p::thread_w10_cast_cast_fu_14947_p1() {
    w10_cast_cast_fu_14947_p1 = esl_zext<10,3>(w10_mid2_reg_19572.read());
}

void subconv_1x1_4_p::thread_w10_mid2_fu_14846_p3() {
    w10_mid2_fu_14846_p3 = (!tmp_307_fu_14841_p2.read()[0].is_01())? sc_lv<3>(): ((tmp_307_fu_14841_p2.read()[0].to_bool())? ap_const_lv3_1: w10_phi_fu_1690_p4.read());
}

void subconv_1x1_4_p::thread_w10_phi_fu_1690_p4() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp1_iter1_exitcond_flatten9_reg_19538.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        w10_phi_fu_1690_p4 = w_16_reg_19583.read();
    } else {
        w10_phi_fu_1690_p4 = w10_reg_1686.read();
    }
}

void subconv_1x1_4_p::thread_w2_cast_cast4_fu_2676_p1() {
    w2_cast_cast4_fu_2676_p1 = esl_zext<10,3>(w2_reg_1495.read());
}

void subconv_1x1_4_p::thread_w2_cast_cast5_fu_2680_p1() {
    w2_cast_cast5_fu_2680_p1 = esl_zext<11,3>(w2_reg_1495.read());
}

void subconv_1x1_4_p::thread_w2_cast_cast_fu_2684_p1() {
    w2_cast_cast_fu_2684_p1 = esl_zext<13,3>(w2_reg_1495.read());
}

void subconv_1x1_4_p::thread_w5_cast_cast1_fu_8841_p1() {
    w5_cast_cast1_fu_8841_p1 = esl_zext<10,3>(w5_reg_1585.read());
}

void subconv_1x1_4_p::thread_w5_cast_cast2_fu_8845_p1() {
    w5_cast_cast2_fu_8845_p1 = esl_zext<11,3>(w5_reg_1585.read());
}

void subconv_1x1_4_p::thread_w5_cast_cast_fu_8849_p1() {
    w5_cast_cast_fu_8849_p1 = esl_zext<13,3>(w5_reg_1585.read());
}

void subconv_1x1_4_p::thread_w_13_fu_2518_p2() {
    w_13_fu_2518_p2 = (!w_mid2_fu_2502_p3.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(w_mid2_fu_2502_p3.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void subconv_1x1_4_p::thread_w_14_fu_2791_p2() {
    w_14_fu_2791_p2 = (!w2_reg_1495.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(w2_reg_1495.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void subconv_1x1_4_p::thread_w_15_fu_8956_p2() {
    w_15_fu_8956_p2 = (!w5_reg_1585.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(w5_reg_1585.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void subconv_1x1_4_p::thread_w_16_fu_14862_p2() {
    w_16_fu_14862_p2 = (!w10_mid2_fu_14846_p3.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(w10_mid2_fu_14846_p3.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void subconv_1x1_4_p::thread_w_cast_cast_fu_2626_p1() {
    w_cast_cast_fu_2626_p1 = esl_zext<10,3>(ap_reg_pp0_iter9_w_mid2_reg_15047.read());
}

void subconv_1x1_4_p::thread_w_mid2_fu_2502_p3() {
    w_mid2_fu_2502_p3 = (!tmp_294_fu_2497_p2.read()[0].is_01())? sc_lv<3>(): ((tmp_294_fu_2497_p2.read()[0].to_bool())? ap_const_lv3_1: w_phi_fu_1475_p4.read());
}

void subconv_1x1_4_p::thread_w_phi_fu_1475_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_reg_pp0_iter1_exitcond_flatten7_reg_15017.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        w_phi_fu_1475_p4 = w_13_reg_15058.read();
    } else {
        w_phi_fu_1475_p4 = w_reg_1471.read();
    }
}

void subconv_1x1_4_p::thread_weight_0_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        weight_0_V_address0 =  (sc_lv<10>) (tmp_953_cast_fu_9210_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        weight_0_V_address0 =  (sc_lv<10>) (tmp_641_cast_fu_3283_p1.read());
    } else {
        weight_0_V_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_weight_0_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        weight_0_V_address1 =  (sc_lv<10>) (tmp_965_cast_fu_9225_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        weight_0_V_address1 =  (sc_lv<10>) (tmp_653_cast_fu_3292_p1.read());
    } else {
        weight_0_V_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_weight_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()))) {
        weight_0_V_ce0 = ap_const_logic_1;
    } else {
        weight_0_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_0_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()))) {
        weight_0_V_ce1 = ap_const_logic_1;
    } else {
        weight_0_V_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_10_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        weight_10_V_address0 =  (sc_lv<10>) (tmp_953_cast_fu_9210_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        weight_10_V_address0 =  (sc_lv<10>) (tmp_875_cast_fu_3313_p1.read());
    } else {
        weight_10_V_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_weight_10_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        weight_10_V_address1 =  (sc_lv<10>) (tmp_965_cast_fu_9225_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        weight_10_V_address1 =  (sc_lv<10>) (tmp_653_cast_fu_3292_p1.read());
    } else {
        weight_10_V_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_weight_10_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()))) {
        weight_10_V_ce0 = ap_const_logic_1;
    } else {
        weight_10_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_10_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()))) {
        weight_10_V_ce1 = ap_const_logic_1;
    } else {
        weight_10_V_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_11_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        weight_11_V_address0 =  (sc_lv<10>) (tmp_953_cast_fu_9210_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        weight_11_V_address0 =  (sc_lv<10>) (tmp_875_cast_fu_3313_p1.read());
    } else {
        weight_11_V_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_weight_11_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        weight_11_V_address1 =  (sc_lv<10>) (tmp_965_cast_fu_9225_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        weight_11_V_address1 =  (sc_lv<10>) (tmp_653_cast_fu_3292_p1.read());
    } else {
        weight_11_V_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_weight_11_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()))) {
        weight_11_V_ce0 = ap_const_logic_1;
    } else {
        weight_11_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_11_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()))) {
        weight_11_V_ce1 = ap_const_logic_1;
    } else {
        weight_11_V_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_1_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        weight_1_V_address0 =  (sc_lv<10>) (tmp_953_cast_fu_9210_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        weight_1_V_address0 =  (sc_lv<10>) (tmp_667_cast_fu_3307_p1.read());
    } else {
        weight_1_V_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_weight_1_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        weight_1_V_address1 =  (sc_lv<10>) (tmp_965_cast_fu_9225_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        weight_1_V_address1 =  (sc_lv<10>) (tmp_653_cast_fu_3292_p1.read());
    } else {
        weight_1_V_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_weight_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()))) {
        weight_1_V_ce0 = ap_const_logic_1;
    } else {
        weight_1_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_1_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()))) {
        weight_1_V_ce1 = ap_const_logic_1;
    } else {
        weight_1_V_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_2_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        weight_2_V_address0 =  (sc_lv<10>) (tmp_953_cast_fu_9210_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        weight_2_V_address0 =  (sc_lv<10>) (tmp_667_cast_fu_3307_p1.read());
    } else {
        weight_2_V_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_weight_2_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        weight_2_V_address1 =  (sc_lv<10>) (tmp_965_cast_fu_9225_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        weight_2_V_address1 =  (sc_lv<10>) (tmp_653_cast_fu_3292_p1.read());
    } else {
        weight_2_V_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_weight_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()))) {
        weight_2_V_ce0 = ap_const_logic_1;
    } else {
        weight_2_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_2_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()))) {
        weight_2_V_ce1 = ap_const_logic_1;
    } else {
        weight_2_V_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_3_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        weight_3_V_address0 =  (sc_lv<10>) (tmp_953_cast_fu_9210_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        weight_3_V_address0 =  (sc_lv<10>) (tmp_667_cast_fu_3307_p1.read());
    } else {
        weight_3_V_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_weight_3_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        weight_3_V_address1 =  (sc_lv<10>) (tmp_965_cast_fu_9225_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        weight_3_V_address1 =  (sc_lv<10>) (tmp_653_cast_fu_3292_p1.read());
    } else {
        weight_3_V_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_weight_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()))) {
        weight_3_V_ce0 = ap_const_logic_1;
    } else {
        weight_3_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_3_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()))) {
        weight_3_V_ce1 = ap_const_logic_1;
    } else {
        weight_3_V_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_4_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        weight_4_V_address0 =  (sc_lv<10>) (tmp_953_cast_fu_9210_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        weight_4_V_address0 =  (sc_lv<10>) (tmp_641_cast_fu_3283_p1.read());
    } else {
        weight_4_V_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_weight_4_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        weight_4_V_address1 =  (sc_lv<10>) (tmp_965_cast_fu_9225_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        weight_4_V_address1 =  (sc_lv<10>) (tmp_653_cast_fu_3292_p1.read());
    } else {
        weight_4_V_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_weight_4_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()))) {
        weight_4_V_ce0 = ap_const_logic_1;
    } else {
        weight_4_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_4_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()))) {
        weight_4_V_ce1 = ap_const_logic_1;
    } else {
        weight_4_V_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_5_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        weight_5_V_address0 =  (sc_lv<10>) (tmp_953_cast_fu_9210_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        weight_5_V_address0 =  (sc_lv<10>) (tmp_641_cast_fu_3283_p1.read());
    } else {
        weight_5_V_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_weight_5_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        weight_5_V_address1 =  (sc_lv<10>) (tmp_965_cast_fu_9225_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        weight_5_V_address1 =  (sc_lv<10>) (tmp_653_cast_fu_3292_p1.read());
    } else {
        weight_5_V_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_weight_5_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()))) {
        weight_5_V_ce0 = ap_const_logic_1;
    } else {
        weight_5_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_5_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()))) {
        weight_5_V_ce1 = ap_const_logic_1;
    } else {
        weight_5_V_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_6_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        weight_6_V_address0 =  (sc_lv<10>) (tmp_953_cast_fu_9210_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        weight_6_V_address0 =  (sc_lv<10>) (tmp_641_cast_fu_3283_p1.read());
    } else {
        weight_6_V_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_weight_6_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        weight_6_V_address1 =  (sc_lv<10>) (tmp_965_cast_fu_9225_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        weight_6_V_address1 =  (sc_lv<10>) (tmp_653_cast_fu_3292_p1.read());
    } else {
        weight_6_V_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_weight_6_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()))) {
        weight_6_V_ce0 = ap_const_logic_1;
    } else {
        weight_6_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_6_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()))) {
        weight_6_V_ce1 = ap_const_logic_1;
    } else {
        weight_6_V_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_7_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        weight_7_V_address0 =  (sc_lv<10>) (tmp_953_cast_fu_9210_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        weight_7_V_address0 =  (sc_lv<10>) (tmp_641_cast_fu_3283_p1.read());
    } else {
        weight_7_V_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_weight_7_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        weight_7_V_address1 =  (sc_lv<10>) (tmp_965_cast_fu_9225_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        weight_7_V_address1 =  (sc_lv<10>) (tmp_653_cast_fu_3292_p1.read());
    } else {
        weight_7_V_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_weight_7_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()))) {
        weight_7_V_ce0 = ap_const_logic_1;
    } else {
        weight_7_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_7_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()))) {
        weight_7_V_ce1 = ap_const_logic_1;
    } else {
        weight_7_V_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_8_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        weight_8_V_address0 =  (sc_lv<10>) (tmp_953_cast_fu_9210_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        weight_8_V_address0 =  (sc_lv<10>) (tmp_641_cast_fu_3283_p1.read());
    } else {
        weight_8_V_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_weight_8_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        weight_8_V_address1 =  (sc_lv<10>) (tmp_965_cast_fu_9225_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        weight_8_V_address1 =  (sc_lv<10>) (tmp_653_cast_fu_3292_p1.read());
    } else {
        weight_8_V_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_weight_8_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()))) {
        weight_8_V_ce0 = ap_const_logic_1;
    } else {
        weight_8_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_8_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()))) {
        weight_8_V_ce1 = ap_const_logic_1;
    } else {
        weight_8_V_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_9_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        weight_9_V_address0 =  (sc_lv<10>) (tmp_953_cast_fu_9210_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        weight_9_V_address0 =  (sc_lv<10>) (tmp_875_cast_fu_3313_p1.read());
    } else {
        weight_9_V_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_weight_9_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        weight_9_V_address1 =  (sc_lv<10>) (tmp_965_cast_fu_9225_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        weight_9_V_address1 =  (sc_lv<10>) (tmp_653_cast_fu_3292_p1.read());
    } else {
        weight_9_V_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_weight_9_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()))) {
        weight_9_V_ce0 = ap_const_logic_1;
    } else {
        weight_9_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_9_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()))) {
        weight_9_V_ce1 = ap_const_logic_1;
    } else {
        weight_9_V_ce1 = ap_const_logic_0;
    }
}

}

