#include "subconv_1x1_8p_p.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void subconv_1x1_8p_p::thread_tmp_137_fu_7708_p1() {
    tmp_137_fu_7708_p1 = grp_MUL_DP_fu_5121_ap_return_1.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_138_fu_7727_p1() {
    tmp_138_fu_7727_p1 = grp_MUL_DP_fu_5130_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_139_fu_7738_p1() {
    tmp_139_fu_7738_p1 = grp_MUL_DP_fu_5130_ap_return_1.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_140_fu_7757_p1() {
    tmp_140_fu_7757_p1 = grp_MUL_DP_fu_5139_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_141_fu_7768_p1() {
    tmp_141_fu_7768_p1 = grp_MUL_DP_fu_5139_ap_return_1.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_142_fu_7787_p1() {
    tmp_142_fu_7787_p1 = grp_MUL_DP_fu_5148_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_143_fu_7798_p1() {
    tmp_143_fu_7798_p1 = grp_MUL_DP_fu_5148_ap_return_1.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_144_fu_5395_p2() {
    tmp_144_fu_5395_p2 = (!p_shl_cast_fu_5380_p1.read().is_01() || !p_shl1_cast_fu_5391_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl_cast_fu_5380_p1.read()) + sc_biguint<8>(p_shl1_cast_fu_5391_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_145_fu_5404_p2() {
    tmp_145_fu_5404_p2 = (!w_cast_cast_fu_5401_p1.read().is_01() || !tmp_144_fu_5395_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(w_cast_cast_fu_5401_p1.read()) + sc_biguint<8>(tmp_144_fu_5395_p2.read()));
}

void subconv_1x1_8p_p::thread_tmp_146_fu_5523_p3() {
    tmp_146_fu_5523_p3 = esl_concat<4,3>(h1_reg_4878.read(), ap_const_lv3_0);
}

void subconv_1x1_8p_p::thread_tmp_147_fu_5535_p3() {
    tmp_147_fu_5535_p3 = esl_concat<4,1>(h1_reg_4878.read(), ap_const_lv1_0);
}

void subconv_1x1_8p_p::thread_tmp_148_fu_5547_p2() {
    tmp_148_fu_5547_p2 = (!p_shl3_cast_fu_5543_p1.read().is_01() || !p_shl2_cast_fu_5531_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl3_cast_fu_5543_p1.read()) + sc_biguint<8>(p_shl2_cast_fu_5531_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_149_fu_6119_p3() {
    tmp_149_fu_6119_p3 = esl_concat<4,3>(h4_reg_4913.read(), ap_const_lv3_0);
}

void subconv_1x1_8p_p::thread_tmp_14_fu_6966_p2() {
    tmp_14_fu_6966_p2 = (!ShuffleConvs_2_Downs_25_q0.read().is_01() || !tmp_101_fu_6962_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_2_Downs_25_q0.read()) + sc_biguint<8>(tmp_101_fu_6962_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_150_fu_6131_p3() {
    tmp_150_fu_6131_p3 = esl_concat<4,1>(h4_reg_4913.read(), ap_const_lv1_0);
}

void subconv_1x1_8p_p::thread_tmp_151_fu_6143_p2() {
    tmp_151_fu_6143_p2 = (!p_shl9_cast_fu_6139_p1.read().is_01() || !p_shl8_cast_fu_6127_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl9_cast_fu_6139_p1.read()) + sc_biguint<8>(p_shl8_cast_fu_6127_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_152_fu_5571_p2() {
    tmp_152_fu_5571_p2 = (!tmp_148_reg_8402.read().is_01() || !w2_cast_cast_fu_5567_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_148_reg_8402.read()) + sc_biguint<8>(w2_cast_cast_fu_5567_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_153_fu_6715_p3() {
    tmp_153_fu_6715_p3 = esl_concat<4,3>(h8_reg_4948.read(), ap_const_lv3_0);
}

void subconv_1x1_8p_p::thread_tmp_154_fu_6727_p3() {
    tmp_154_fu_6727_p3 = esl_concat<4,1>(h8_reg_4948.read(), ap_const_lv1_0);
}

void subconv_1x1_8p_p::thread_tmp_155_fu_6739_p2() {
    tmp_155_fu_6739_p2 = (!p_shl15_cast_fu_6735_p1.read().is_01() || !p_shl14_cast_fu_6723_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl15_cast_fu_6735_p1.read()) + sc_biguint<8>(p_shl14_cast_fu_6723_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_156_fu_6167_p2() {
    tmp_156_fu_6167_p2 = (!tmp_151_reg_8696.read().is_01() || !w5_cast_cast_fu_6163_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_151_reg_8696.read()) + sc_biguint<8>(w5_cast_cast_fu_6163_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_157_fu_5632_p3() {
    tmp_157_fu_5632_p3 = esl_concat<7,3>(ci_reg_4902.read(), ap_const_lv3_0);
}

void subconv_1x1_8p_p::thread_tmp_158_fu_5644_p3() {
    tmp_158_fu_5644_p3 = esl_concat<7,1>(ci_reg_4902.read(), ap_const_lv1_0);
}

void subconv_1x1_8p_p::thread_tmp_159_fu_5656_p2() {
    tmp_159_fu_5656_p2 = (!p_shl6_cast_fu_5640_p1.read().is_01() || !p_shl7_cast_fu_5652_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl6_cast_fu_5640_p1.read()) + sc_biguint<11>(p_shl7_cast_fu_5652_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_160_fu_5662_p2() {
    tmp_160_fu_5662_p2 = (!h1_cast_cast_reg_8397.read().is_01() || !tmp_159_fu_5656_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(h1_cast_cast_reg_8397.read()) + sc_biguint<11>(tmp_159_fu_5656_p2.read()));
}

void subconv_1x1_8p_p::thread_tmp_161_fu_5691_p2() {
    tmp_161_fu_5691_p2 = (!p_shl4_cast_fu_5675_p1.read().is_01() || !p_shl5_cast_fu_5687_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl4_cast_fu_5675_p1.read()) + sc_biguint<15>(p_shl5_cast_fu_5687_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_162_fu_5697_p2() {
    tmp_162_fu_5697_p2 = (!w2_cast_cast2_reg_8415.read().is_01() || !tmp_161_fu_5691_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(w2_cast_cast2_reg_8415.read()) + sc_biguint<15>(tmp_161_fu_5691_p2.read()));
}

void subconv_1x1_8p_p::thread_tmp_163_fu_5707_p2() {
    tmp_163_fu_5707_p2 = (!h1_cast_cast1_reg_8392.read().is_01() || !ci_reg_4902.read().is_01())? sc_lv<7>(): (sc_biguint<7>(h1_cast_cast1_reg_8392.read()) + sc_biguint<7>(ci_reg_4902.read()));
}

void subconv_1x1_8p_p::thread_tmp_164_fu_5712_p2() {
    tmp_164_fu_5712_p2 = (!w2_cast_cast1_reg_8410.read().is_01() || !tmp_163_fu_5707_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(w2_cast_cast1_reg_8410.read()) + sc_biguint<7>(tmp_163_fu_5707_p2.read()));
}

void subconv_1x1_8p_p::thread_tmp_165_fu_7311_p3() {
    tmp_165_fu_7311_p3 = esl_concat<4,3>(h9_reg_4983.read(), ap_const_lv3_0);
}

void subconv_1x1_8p_p::thread_tmp_166_fu_7323_p3() {
    tmp_166_fu_7323_p3 = esl_concat<4,1>(h9_reg_4983.read(), ap_const_lv1_0);
}

void subconv_1x1_8p_p::thread_tmp_167_fu_7335_p2() {
    tmp_167_fu_7335_p2 = (!p_shl21_cast_fu_7331_p1.read().is_01() || !p_shl20_cast_fu_7319_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl21_cast_fu_7331_p1.read()) + sc_biguint<8>(p_shl20_cast_fu_7319_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_168_fu_6763_p2() {
    tmp_168_fu_6763_p2 = (!tmp_155_reg_8990.read().is_01() || !w9_cast8_cast_fu_6759_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_155_reg_8990.read()) + sc_biguint<8>(w9_cast8_cast_fu_6759_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_169_fu_6228_p3() {
    tmp_169_fu_6228_p3 = esl_concat<7,3>(ci6_reg_4937.read(), ap_const_lv3_0);
}

void subconv_1x1_8p_p::thread_tmp_16_fu_7551_p2() {
    tmp_16_fu_7551_p2 = (!ShuffleConvs_2_Downs_65_q0.read().is_01() || !tmp_126_fu_7547_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_2_Downs_65_q0.read()) + sc_biguint<8>(tmp_126_fu_7547_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_170_fu_6240_p3() {
    tmp_170_fu_6240_p3 = esl_concat<7,1>(ci6_reg_4937.read(), ap_const_lv1_0);
}

void subconv_1x1_8p_p::thread_tmp_171_fu_6252_p2() {
    tmp_171_fu_6252_p2 = (!p_shl12_cast_fu_6236_p1.read().is_01() || !p_shl13_cast_fu_6248_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl12_cast_fu_6236_p1.read()) + sc_biguint<11>(p_shl13_cast_fu_6248_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_172_fu_6258_p2() {
    tmp_172_fu_6258_p2 = (!h4_cast_cast_reg_8691.read().is_01() || !tmp_171_fu_6252_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(h4_cast_cast_reg_8691.read()) + sc_biguint<11>(tmp_171_fu_6252_p2.read()));
}

void subconv_1x1_8p_p::thread_tmp_173_fu_6287_p2() {
    tmp_173_fu_6287_p2 = (!p_shl10_cast_fu_6271_p1.read().is_01() || !p_shl11_cast_fu_6283_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl10_cast_fu_6271_p1.read()) + sc_biguint<15>(p_shl11_cast_fu_6283_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_174_fu_6293_p2() {
    tmp_174_fu_6293_p2 = (!w5_cast_cast2_reg_8709.read().is_01() || !tmp_173_fu_6287_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(w5_cast_cast2_reg_8709.read()) + sc_biguint<15>(tmp_173_fu_6287_p2.read()));
}

void subconv_1x1_8p_p::thread_tmp_175_fu_6303_p2() {
    tmp_175_fu_6303_p2 = (!h4_cast_cast1_reg_8686.read().is_01() || !ci6_reg_4937.read().is_01())? sc_lv<7>(): (sc_biguint<7>(h4_cast_cast1_reg_8686.read()) + sc_biguint<7>(ci6_reg_4937.read()));
}

void subconv_1x1_8p_p::thread_tmp_176_fu_6308_p2() {
    tmp_176_fu_6308_p2 = (!w5_cast_cast1_reg_8704.read().is_01() || !tmp_175_fu_6303_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(w5_cast_cast1_reg_8704.read()) + sc_biguint<7>(tmp_175_fu_6303_p2.read()));
}

void subconv_1x1_8p_p::thread_tmp_177_fu_7359_p2() {
    tmp_177_fu_7359_p2 = (!tmp_167_reg_9284.read().is_01() || !w10_cast5_cast_fu_7355_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_167_reg_9284.read()) + sc_biguint<8>(w10_cast5_cast_fu_7355_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_178_fu_6824_p3() {
    tmp_178_fu_6824_p3 = esl_concat<7,3>(ci2_reg_4972.read(), ap_const_lv3_0);
}

void subconv_1x1_8p_p::thread_tmp_179_fu_6836_p3() {
    tmp_179_fu_6836_p3 = esl_concat<7,1>(ci2_reg_4972.read(), ap_const_lv1_0);
}

void subconv_1x1_8p_p::thread_tmp_180_fu_6848_p2() {
    tmp_180_fu_6848_p2 = (!p_shl18_cast_fu_6832_p1.read().is_01() || !p_shl19_cast_fu_6844_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl18_cast_fu_6832_p1.read()) + sc_biguint<11>(p_shl19_cast_fu_6844_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_181_fu_6854_p2() {
    tmp_181_fu_6854_p2 = (!h8_cast9_cast_reg_8985.read().is_01() || !tmp_180_fu_6848_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(h8_cast9_cast_reg_8985.read()) + sc_biguint<11>(tmp_180_fu_6848_p2.read()));
}

void subconv_1x1_8p_p::thread_tmp_182_fu_6883_p2() {
    tmp_182_fu_6883_p2 = (!p_shl16_cast_fu_6867_p1.read().is_01() || !p_shl17_cast_fu_6879_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl16_cast_fu_6867_p1.read()) + sc_biguint<15>(p_shl17_cast_fu_6879_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_183_cast_fu_5410_p1() {
    tmp_183_cast_fu_5410_p1 = esl_zext<32,8>(tmp_145_fu_5404_p2.read());
}

void subconv_1x1_8p_p::thread_tmp_183_fu_6889_p2() {
    tmp_183_fu_6889_p2 = (!w9_cast8_cast2_reg_9003.read().is_01() || !tmp_182_fu_6883_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(w9_cast8_cast2_reg_9003.read()) + sc_biguint<15>(tmp_182_fu_6883_p2.read()));
}

void subconv_1x1_8p_p::thread_tmp_184_fu_6899_p2() {
    tmp_184_fu_6899_p2 = (!h8_cast9_cast1_reg_8980.read().is_01() || !ci2_reg_4972.read().is_01())? sc_lv<7>(): (sc_biguint<7>(h8_cast9_cast1_reg_8980.read()) + sc_biguint<7>(ci2_reg_4972.read()));
}

void subconv_1x1_8p_p::thread_tmp_185_fu_6904_p2() {
    tmp_185_fu_6904_p2 = (!w9_cast8_cast1_reg_8998.read().is_01() || !tmp_184_fu_6899_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(w9_cast8_cast1_reg_8998.read()) + sc_biguint<7>(tmp_184_fu_6899_p2.read()));
}

void subconv_1x1_8p_p::thread_tmp_186_fu_7974_p2() {
    tmp_186_fu_7974_p2 = (exitcond_mid_fu_7955_p2.read() | exitcond_flatten2_reg_9578.read());
}

void subconv_1x1_8p_p::thread_tmp_187_fu_8017_p2() {
    tmp_187_fu_8017_p2 = (!p_shl26_cast_fu_8002_p1.read().is_01() || !p_shl27_cast_fu_8013_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl26_cast_fu_8002_p1.read()) + sc_biguint<8>(p_shl27_cast_fu_8013_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_188_fu_8026_p2() {
    tmp_188_fu_8026_p2 = (!w12_cast1_cast_fu_8023_p1.read().is_01() || !tmp_187_fu_8017_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(w12_cast1_cast_fu_8023_p1.read()) + sc_biguint<8>(tmp_187_fu_8017_p2.read()));
}

void subconv_1x1_8p_p::thread_tmp_189_fu_7420_p3() {
    tmp_189_fu_7420_p3 = esl_concat<7,3>(ci3_reg_5007.read(), ap_const_lv3_0);
}

void subconv_1x1_8p_p::thread_tmp_18_fu_7562_p2() {
    tmp_18_fu_7562_p2 = (!ShuffleConvs_2_Downs_12_q0.read().is_01() || !tmp_127_fu_7558_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_2_Downs_12_q0.read()) + sc_biguint<8>(tmp_127_fu_7558_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_190_cast_fu_5576_p1() {
    tmp_190_cast_fu_5576_p1 = esl_zext<32,8>(tmp_152_fu_5571_p2.read());
}

void subconv_1x1_8p_p::thread_tmp_190_fu_7432_p3() {
    tmp_190_fu_7432_p3 = esl_concat<7,1>(ci3_reg_5007.read(), ap_const_lv1_0);
}

void subconv_1x1_8p_p::thread_tmp_191_fu_7444_p2() {
    tmp_191_fu_7444_p2 = (!p_shl24_cast_fu_7428_p1.read().is_01() || !p_shl25_cast_fu_7440_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl24_cast_fu_7428_p1.read()) + sc_biguint<11>(p_shl25_cast_fu_7440_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_192_fu_7450_p2() {
    tmp_192_fu_7450_p2 = (!h9_cast6_cast_reg_9279.read().is_01() || !tmp_191_fu_7444_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(h9_cast6_cast_reg_9279.read()) + sc_biguint<11>(tmp_191_fu_7444_p2.read()));
}

void subconv_1x1_8p_p::thread_tmp_193_fu_7479_p2() {
    tmp_193_fu_7479_p2 = (!p_shl22_cast_fu_7463_p1.read().is_01() || !p_shl23_cast_fu_7475_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl22_cast_fu_7463_p1.read()) + sc_biguint<15>(p_shl23_cast_fu_7475_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_194_cast_fu_6172_p1() {
    tmp_194_cast_fu_6172_p1 = esl_zext<32,8>(tmp_156_fu_6167_p2.read());
}

void subconv_1x1_8p_p::thread_tmp_194_fu_7485_p2() {
    tmp_194_fu_7485_p2 = (!w10_cast5_cast2_reg_9298.read().is_01() || !tmp_193_fu_7479_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(w10_cast5_cast2_reg_9298.read()) + sc_biguint<15>(tmp_193_fu_7479_p2.read()));
}

void subconv_1x1_8p_p::thread_tmp_195_fu_7495_p2() {
    tmp_195_fu_7495_p2 = (!h9_cast6_cast1_reg_9274.read().is_01() || !ci3_reg_5007.read().is_01())? sc_lv<7>(): (sc_biguint<7>(h9_cast6_cast1_reg_9274.read()) + sc_biguint<7>(ci3_reg_5007.read()));
}

void subconv_1x1_8p_p::thread_tmp_196_fu_7500_p2() {
    tmp_196_fu_7500_p2 = (!w10_cast5_cast1_reg_9293.read().is_01() || !tmp_195_fu_7495_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(w10_cast5_cast1_reg_9293.read()) + sc_biguint<7>(tmp_195_fu_7495_p2.read()));
}

void subconv_1x1_8p_p::thread_tmp_197_fu_7817_p1() {
    tmp_197_fu_7817_p1 = grp_MUL_DP_fu_5157_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_198_fu_7828_p1() {
    tmp_198_fu_7828_p1 = grp_MUL_DP_fu_5157_ap_return_1.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_199_fu_7847_p1() {
    tmp_199_fu_7847_p1 = grp_MUL_DP_fu_5166_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_200_fu_7858_p1() {
    tmp_200_fu_7858_p1 = grp_MUL_DP_fu_5166_ap_return_1.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_201_fu_7877_p1() {
    tmp_201_fu_7877_p1 = grp_MUL_DP_fu_5175_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_202_cast_fu_5702_p1() {
    tmp_202_cast_fu_5702_p1 = esl_zext<32,15>(tmp_162_fu_5697_p2.read());
}

void subconv_1x1_8p_p::thread_tmp_202_fu_7888_p1() {
    tmp_202_fu_7888_p1 = grp_MUL_DP_fu_5175_ap_return_1.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_204_cast_fu_5717_p1() {
    tmp_204_cast_fu_5717_p1 = esl_zext<32,7>(tmp_164_fu_5712_p2.read());
}

void subconv_1x1_8p_p::thread_tmp_208_cast_fu_6768_p1() {
    tmp_208_cast_fu_6768_p1 = esl_zext<32,8>(tmp_168_fu_6763_p2.read());
}

void subconv_1x1_8p_p::thread_tmp_20_10_fu_6093_p2() {
    tmp_20_10_fu_6093_p2 = (!ShuffleConvs_2_Downs_92_q0.read().is_01() || !tmp_67_fu_6089_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_2_Downs_92_q0.read()) + sc_biguint<8>(tmp_67_fu_6089_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_20_1_fu_5793_p2() {
    tmp_20_1_fu_5793_p2 = (!ShuffleConvs_2_Downs_94_q0.read().is_01() || !tmp_47_fu_5789_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_2_Downs_94_q0.read()) + sc_biguint<8>(tmp_47_fu_5789_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_20_2_fu_5823_p2() {
    tmp_20_2_fu_5823_p2 = (!ShuffleConvs_2_Downs_83_q0.read().is_01() || !tmp_49_fu_5819_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_2_Downs_83_q0.read()) + sc_biguint<8>(tmp_49_fu_5819_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_20_3_fu_5853_p2() {
    tmp_20_3_fu_5853_p2 = (!ShuffleConvs_2_Downs_72_q0.read().is_01() || !tmp_51_fu_5849_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_2_Downs_72_q0.read()) + sc_biguint<8>(tmp_51_fu_5849_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_20_4_fu_5883_p2() {
    tmp_20_4_fu_5883_p2 = (!ShuffleConvs_2_Downs_61_q0.read().is_01() || !tmp_53_fu_5879_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_2_Downs_61_q0.read()) + sc_biguint<8>(tmp_53_fu_5879_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_20_5_fu_5913_p2() {
    tmp_20_5_fu_5913_p2 = (!ShuffleConvs_2_Downs_50_q0.read().is_01() || !tmp_55_fu_5909_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_2_Downs_50_q0.read()) + sc_biguint<8>(tmp_55_fu_5909_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_20_6_fu_5943_p2() {
    tmp_20_6_fu_5943_p2 = (!ShuffleConvs_2_Downs_39_q0.read().is_01() || !tmp_57_fu_5939_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_2_Downs_39_q0.read()) + sc_biguint<8>(tmp_57_fu_5939_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_20_7_fu_5973_p2() {
    tmp_20_7_fu_5973_p2 = (!ShuffleConvs_2_Downs_28_q0.read().is_01() || !tmp_59_fu_5969_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_2_Downs_28_q0.read()) + sc_biguint<8>(tmp_59_fu_5969_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_20_8_fu_6003_p2() {
    tmp_20_8_fu_6003_p2 = (!ShuffleConvs_2_Downs_17_q0.read().is_01() || !tmp_61_fu_5999_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_2_Downs_17_q0.read()) + sc_biguint<8>(tmp_61_fu_5999_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_20_9_fu_6033_p2() {
    tmp_20_9_fu_6033_p2 = (!ShuffleConvs_2_Downs_6_q0.read().is_01() || !tmp_63_fu_6029_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_2_Downs_6_q0.read()) + sc_biguint<8>(tmp_63_fu_6029_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_20_s_fu_6063_p2() {
    tmp_20_s_fu_6063_p2 = (!ShuffleConvs_2_Downs_93_q0.read().is_01() || !tmp_65_fu_6059_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_2_Downs_93_q0.read()) + sc_biguint<8>(tmp_65_fu_6059_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_216_cast_fu_6298_p1() {
    tmp_216_cast_fu_6298_p1 = esl_zext<32,15>(tmp_174_fu_6293_p2.read());
}

void subconv_1x1_8p_p::thread_tmp_218_cast_fu_6313_p1() {
    tmp_218_cast_fu_6313_p1 = esl_zext<32,7>(tmp_176_fu_6308_p2.read());
}

void subconv_1x1_8p_p::thread_tmp_219_cast_fu_7364_p1() {
    tmp_219_cast_fu_7364_p1 = esl_zext<32,8>(tmp_177_fu_7359_p2.read());
}

void subconv_1x1_8p_p::thread_tmp_227_cast_fu_6894_p1() {
    tmp_227_cast_fu_6894_p1 = esl_zext<32,15>(tmp_183_fu_6889_p2.read());
}

void subconv_1x1_8p_p::thread_tmp_229_cast_fu_6909_p1() {
    tmp_229_cast_fu_6909_p1 = esl_zext<32,7>(tmp_185_fu_6904_p2.read());
}

void subconv_1x1_8p_p::thread_tmp_22_10_fu_6104_p2() {
    tmp_22_10_fu_6104_p2 = (!ShuffleConvs_2_Downs_40_q0.read().is_01() || !tmp_68_fu_6100_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_2_Downs_40_q0.read()) + sc_biguint<8>(tmp_68_fu_6100_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_22_1_fu_5804_p2() {
    tmp_22_1_fu_5804_p2 = (!ShuffleConvs_2_Downs_51_q0.read().is_01() || !tmp_48_fu_5800_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_2_Downs_51_q0.read()) + sc_biguint<8>(tmp_48_fu_5800_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_22_2_fu_5834_p2() {
    tmp_22_2_fu_5834_p2 = (!ShuffleConvs_2_Downs_49_q0.read().is_01() || !tmp_50_fu_5830_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_2_Downs_49_q0.read()) + sc_biguint<8>(tmp_50_fu_5830_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_22_3_fu_5864_p2() {
    tmp_22_3_fu_5864_p2 = (!ShuffleConvs_2_Downs_48_q0.read().is_01() || !tmp_52_fu_5860_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_2_Downs_48_q0.read()) + sc_biguint<8>(tmp_52_fu_5860_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_22_4_fu_5894_p2() {
    tmp_22_4_fu_5894_p2 = (!ShuffleConvs_2_Downs_47_q0.read().is_01() || !tmp_54_fu_5890_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_2_Downs_47_q0.read()) + sc_biguint<8>(tmp_54_fu_5890_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_22_5_fu_5924_p2() {
    tmp_22_5_fu_5924_p2 = (!ShuffleConvs_2_Downs_46_q0.read().is_01() || !tmp_56_fu_5920_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_2_Downs_46_q0.read()) + sc_biguint<8>(tmp_56_fu_5920_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_22_6_fu_5954_p2() {
    tmp_22_6_fu_5954_p2 = (!ShuffleConvs_2_Downs_45_q0.read().is_01() || !tmp_58_fu_5950_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_2_Downs_45_q0.read()) + sc_biguint<8>(tmp_58_fu_5950_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_22_7_fu_5984_p2() {
    tmp_22_7_fu_5984_p2 = (!ShuffleConvs_2_Downs_44_q0.read().is_01() || !tmp_60_fu_5980_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_2_Downs_44_q0.read()) + sc_biguint<8>(tmp_60_fu_5980_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_22_8_fu_6014_p2() {
    tmp_22_8_fu_6014_p2 = (!ShuffleConvs_2_Downs_43_q0.read().is_01() || !tmp_62_fu_6010_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_2_Downs_43_q0.read()) + sc_biguint<8>(tmp_62_fu_6010_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_22_9_fu_6044_p2() {
    tmp_22_9_fu_6044_p2 = (!ShuffleConvs_2_Downs_42_q0.read().is_01() || !tmp_64_fu_6040_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_2_Downs_42_q0.read()) + sc_biguint<8>(tmp_64_fu_6040_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_22_s_fu_6074_p2() {
    tmp_22_s_fu_6074_p2 = (!ShuffleConvs_2_Downs_41_q0.read().is_01() || !tmp_66_fu_6070_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_2_Downs_41_q0.read()) + sc_biguint<8>(tmp_66_fu_6070_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_234_cast_fu_8032_p1() {
    tmp_234_cast_fu_8032_p1 = esl_zext<32,8>(tmp_188_fu_8026_p2.read());
}

void subconv_1x1_8p_p::thread_tmp_242_cast_fu_7490_p1() {
    tmp_242_cast_fu_7490_p1 = esl_zext<32,15>(tmp_194_fu_7485_p2.read());
}

void subconv_1x1_8p_p::thread_tmp_244_cast_fu_7505_p1() {
    tmp_244_cast_fu_7505_p1 = esl_zext<32,7>(tmp_196_fu_7500_p2.read());
}

void subconv_1x1_8p_p::thread_tmp_25_10_fu_6689_p2() {
    tmp_25_10_fu_6689_p2 = (!ShuffleConvs_2_Downs_79_q0.read().is_01() || !tmp_93_fu_6685_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_2_Downs_79_q0.read()) + sc_biguint<8>(tmp_93_fu_6685_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_25_1_fu_6389_p2() {
    tmp_25_1_fu_6389_p2 = (!ShuffleConvs_2_Downs_90_q0.read().is_01() || !tmp_73_fu_6385_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_2_Downs_90_q0.read()) + sc_biguint<8>(tmp_73_fu_6385_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_25_2_fu_6419_p2() {
    tmp_25_2_fu_6419_p2 = (!ShuffleConvs_2_Downs_89_q0.read().is_01() || !tmp_75_fu_6415_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_2_Downs_89_q0.read()) + sc_biguint<8>(tmp_75_fu_6415_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_25_3_fu_6449_p2() {
    tmp_25_3_fu_6449_p2 = (!ShuffleConvs_2_Downs_88_q0.read().is_01() || !tmp_77_fu_6445_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_2_Downs_88_q0.read()) + sc_biguint<8>(tmp_77_fu_6445_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_25_4_fu_6479_p2() {
    tmp_25_4_fu_6479_p2 = (!ShuffleConvs_2_Downs_87_q0.read().is_01() || !tmp_79_fu_6475_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_2_Downs_87_q0.read()) + sc_biguint<8>(tmp_79_fu_6475_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_25_5_fu_6509_p2() {
    tmp_25_5_fu_6509_p2 = (!ShuffleConvs_2_Downs_86_q0.read().is_01() || !tmp_81_fu_6505_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_2_Downs_86_q0.read()) + sc_biguint<8>(tmp_81_fu_6505_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_25_6_fu_6539_p2() {
    tmp_25_6_fu_6539_p2 = (!ShuffleConvs_2_Downs_85_q0.read().is_01() || !tmp_83_fu_6535_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_2_Downs_85_q0.read()) + sc_biguint<8>(tmp_83_fu_6535_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_25_7_fu_6569_p2() {
    tmp_25_7_fu_6569_p2 = (!ShuffleConvs_2_Downs_84_q0.read().is_01() || !tmp_85_fu_6565_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_2_Downs_84_q0.read()) + sc_biguint<8>(tmp_85_fu_6565_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_25_8_fu_6599_p2() {
    tmp_25_8_fu_6599_p2 = (!ShuffleConvs_2_Downs_82_q0.read().is_01() || !tmp_87_fu_6595_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_2_Downs_82_q0.read()) + sc_biguint<8>(tmp_87_fu_6595_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_25_9_fu_6629_p2() {
    tmp_25_9_fu_6629_p2 = (!ShuffleConvs_2_Downs_81_q0.read().is_01() || !tmp_89_fu_6625_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_2_Downs_81_q0.read()) + sc_biguint<8>(tmp_89_fu_6625_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_25_s_fu_6659_p2() {
    tmp_25_s_fu_6659_p2 = (!ShuffleConvs_2_Downs_80_q0.read().is_01() || !tmp_91_fu_6655_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_2_Downs_80_q0.read()) + sc_biguint<8>(tmp_91_fu_6655_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_27_10_fu_6700_p2() {
    tmp_27_10_fu_6700_p2 = (!ShuffleConvs_2_Downs_26_q0.read().is_01() || !tmp_94_fu_6696_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_2_Downs_26_q0.read()) + sc_biguint<8>(tmp_94_fu_6696_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_27_1_fu_6400_p2() {
    tmp_27_1_fu_6400_p2 = (!ShuffleConvs_2_Downs_37_q0.read().is_01() || !tmp_74_fu_6396_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_2_Downs_37_q0.read()) + sc_biguint<8>(tmp_74_fu_6396_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_27_2_fu_6430_p2() {
    tmp_27_2_fu_6430_p2 = (!ShuffleConvs_2_Downs_36_q0.read().is_01() || !tmp_76_fu_6426_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_2_Downs_36_q0.read()) + sc_biguint<8>(tmp_76_fu_6426_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_27_3_fu_6460_p2() {
    tmp_27_3_fu_6460_p2 = (!ShuffleConvs_2_Downs_35_q0.read().is_01() || !tmp_78_fu_6456_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_2_Downs_35_q0.read()) + sc_biguint<8>(tmp_78_fu_6456_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_27_4_fu_6490_p2() {
    tmp_27_4_fu_6490_p2 = (!ShuffleConvs_2_Downs_34_q0.read().is_01() || !tmp_80_fu_6486_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_2_Downs_34_q0.read()) + sc_biguint<8>(tmp_80_fu_6486_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_27_5_fu_6520_p2() {
    tmp_27_5_fu_6520_p2 = (!ShuffleConvs_2_Downs_33_q0.read().is_01() || !tmp_82_fu_6516_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_2_Downs_33_q0.read()) + sc_biguint<8>(tmp_82_fu_6516_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_27_6_fu_6550_p2() {
    tmp_27_6_fu_6550_p2 = (!ShuffleConvs_2_Downs_32_q0.read().is_01() || !tmp_84_fu_6546_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_2_Downs_32_q0.read()) + sc_biguint<8>(tmp_84_fu_6546_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_27_7_fu_6580_p2() {
    tmp_27_7_fu_6580_p2 = (!ShuffleConvs_2_Downs_31_q0.read().is_01() || !tmp_86_fu_6576_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_2_Downs_31_q0.read()) + sc_biguint<8>(tmp_86_fu_6576_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_27_8_fu_6610_p2() {
    tmp_27_8_fu_6610_p2 = (!ShuffleConvs_2_Downs_30_q0.read().is_01() || !tmp_88_fu_6606_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_2_Downs_30_q0.read()) + sc_biguint<8>(tmp_88_fu_6606_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_27_9_fu_6640_p2() {
    tmp_27_9_fu_6640_p2 = (!ShuffleConvs_2_Downs_29_q0.read().is_01() || !tmp_90_fu_6636_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_2_Downs_29_q0.read()) + sc_biguint<8>(tmp_90_fu_6636_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_27_s_fu_6670_p2() {
    tmp_27_s_fu_6670_p2 = (!ShuffleConvs_2_Downs_27_q0.read().is_01() || !tmp_92_fu_6666_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_2_Downs_27_q0.read()) + sc_biguint<8>(tmp_92_fu_6666_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_30_10_fu_7285_p2() {
    tmp_30_10_fu_7285_p2 = (!ShuffleConvs_2_Downs_66_q0.read().is_01() || !tmp_122_fu_7281_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_2_Downs_66_q0.read()) + sc_biguint<8>(tmp_122_fu_7281_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_30_1_fu_6985_p2() {
    tmp_30_1_fu_6985_p2 = (!ShuffleConvs_2_Downs_77_q0.read().is_01() || !tmp_102_fu_6981_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_2_Downs_77_q0.read()) + sc_biguint<8>(tmp_102_fu_6981_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_30_2_fu_7015_p2() {
    tmp_30_2_fu_7015_p2 = (!ShuffleConvs_2_Downs_76_q0.read().is_01() || !tmp_104_fu_7011_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_2_Downs_76_q0.read()) + sc_biguint<8>(tmp_104_fu_7011_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_30_3_fu_7045_p2() {
    tmp_30_3_fu_7045_p2 = (!ShuffleConvs_2_Downs_75_q0.read().is_01() || !tmp_106_fu_7041_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_2_Downs_75_q0.read()) + sc_biguint<8>(tmp_106_fu_7041_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_30_4_fu_7075_p2() {
    tmp_30_4_fu_7075_p2 = (!ShuffleConvs_2_Downs_74_q0.read().is_01() || !tmp_108_fu_7071_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_2_Downs_74_q0.read()) + sc_biguint<8>(tmp_108_fu_7071_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_30_5_fu_7105_p2() {
    tmp_30_5_fu_7105_p2 = (!ShuffleConvs_2_Downs_73_q0.read().is_01() || !tmp_110_fu_7101_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_2_Downs_73_q0.read()) + sc_biguint<8>(tmp_110_fu_7101_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_30_6_fu_7135_p2() {
    tmp_30_6_fu_7135_p2 = (!ShuffleConvs_2_Downs_71_q0.read().is_01() || !tmp_112_fu_7131_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_2_Downs_71_q0.read()) + sc_biguint<8>(tmp_112_fu_7131_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_30_7_fu_7165_p2() {
    tmp_30_7_fu_7165_p2 = (!ShuffleConvs_2_Downs_70_q0.read().is_01() || !tmp_114_fu_7161_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_2_Downs_70_q0.read()) + sc_biguint<8>(tmp_114_fu_7161_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_30_8_fu_7195_p2() {
    tmp_30_8_fu_7195_p2 = (!ShuffleConvs_2_Downs_69_q0.read().is_01() || !tmp_116_fu_7191_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_2_Downs_69_q0.read()) + sc_biguint<8>(tmp_116_fu_7191_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_30_9_fu_7225_p2() {
    tmp_30_9_fu_7225_p2 = (!ShuffleConvs_2_Downs_68_q0.read().is_01() || !tmp_118_fu_7221_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_2_Downs_68_q0.read()) + sc_biguint<8>(tmp_118_fu_7221_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_30_s_fu_7255_p2() {
    tmp_30_s_fu_7255_p2 = (!ShuffleConvs_2_Downs_67_q0.read().is_01() || !tmp_120_fu_7251_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_2_Downs_67_q0.read()) + sc_biguint<8>(tmp_120_fu_7251_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_32_10_fu_7296_p2() {
    tmp_32_10_fu_7296_p2 = (!ShuffleConvs_2_Downs_13_q0.read().is_01() || !tmp_123_fu_7292_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_2_Downs_13_q0.read()) + sc_biguint<8>(tmp_123_fu_7292_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_32_1_fu_6996_p2() {
    tmp_32_1_fu_6996_p2 = (!ShuffleConvs_2_Downs_24_q0.read().is_01() || !tmp_103_fu_6992_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_2_Downs_24_q0.read()) + sc_biguint<8>(tmp_103_fu_6992_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_32_2_fu_7026_p2() {
    tmp_32_2_fu_7026_p2 = (!ShuffleConvs_2_Downs_23_q0.read().is_01() || !tmp_105_fu_7022_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_2_Downs_23_q0.read()) + sc_biguint<8>(tmp_105_fu_7022_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_32_3_fu_7056_p2() {
    tmp_32_3_fu_7056_p2 = (!ShuffleConvs_2_Downs_22_q0.read().is_01() || !tmp_107_fu_7052_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_2_Downs_22_q0.read()) + sc_biguint<8>(tmp_107_fu_7052_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_32_4_fu_7086_p2() {
    tmp_32_4_fu_7086_p2 = (!ShuffleConvs_2_Downs_21_q0.read().is_01() || !tmp_109_fu_7082_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_2_Downs_21_q0.read()) + sc_biguint<8>(tmp_109_fu_7082_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_32_5_fu_7116_p2() {
    tmp_32_5_fu_7116_p2 = (!ShuffleConvs_2_Downs_20_q0.read().is_01() || !tmp_111_fu_7112_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_2_Downs_20_q0.read()) + sc_biguint<8>(tmp_111_fu_7112_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_32_6_fu_7146_p2() {
    tmp_32_6_fu_7146_p2 = (!ShuffleConvs_2_Downs_19_q0.read().is_01() || !tmp_113_fu_7142_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_2_Downs_19_q0.read()) + sc_biguint<8>(tmp_113_fu_7142_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_32_7_fu_7176_p2() {
    tmp_32_7_fu_7176_p2 = (!ShuffleConvs_2_Downs_18_q0.read().is_01() || !tmp_115_fu_7172_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_2_Downs_18_q0.read()) + sc_biguint<8>(tmp_115_fu_7172_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_32_8_fu_7206_p2() {
    tmp_32_8_fu_7206_p2 = (!ShuffleConvs_2_Downs_16_q0.read().is_01() || !tmp_117_fu_7202_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_2_Downs_16_q0.read()) + sc_biguint<8>(tmp_117_fu_7202_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_32_9_fu_7236_p2() {
    tmp_32_9_fu_7236_p2 = (!ShuffleConvs_2_Downs_15_q0.read().is_01() || !tmp_119_fu_7232_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_2_Downs_15_q0.read()) + sc_biguint<8>(tmp_119_fu_7232_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_32_s_fu_7266_p2() {
    tmp_32_s_fu_7266_p2 = (!ShuffleConvs_2_Downs_14_q0.read().is_01() || !tmp_121_fu_7262_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_2_Downs_14_q0.read()) + sc_biguint<8>(tmp_121_fu_7262_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_36_10_fu_7881_p2() {
    tmp_36_10_fu_7881_p2 = (!ShuffleConvs_2_Downs_53_q0.read().is_01() || !tmp_201_fu_7877_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_2_Downs_53_q0.read()) + sc_biguint<8>(tmp_201_fu_7877_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_36_1_fu_7581_p2() {
    tmp_36_1_fu_7581_p2 = (!ShuffleConvs_2_Downs_64_q0.read().is_01() || !tmp_128_fu_7577_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_2_Downs_64_q0.read()) + sc_biguint<8>(tmp_128_fu_7577_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_36_2_fu_7611_p2() {
    tmp_36_2_fu_7611_p2 = (!ShuffleConvs_2_Downs_63_q0.read().is_01() || !tmp_130_fu_7607_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_2_Downs_63_q0.read()) + sc_biguint<8>(tmp_130_fu_7607_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_36_3_fu_7641_p2() {
    tmp_36_3_fu_7641_p2 = (!ShuffleConvs_2_Downs_62_q0.read().is_01() || !tmp_132_fu_7637_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_2_Downs_62_q0.read()) + sc_biguint<8>(tmp_132_fu_7637_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_36_4_fu_7671_p2() {
    tmp_36_4_fu_7671_p2 = (!ShuffleConvs_2_Downs_60_q0.read().is_01() || !tmp_134_fu_7667_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_2_Downs_60_q0.read()) + sc_biguint<8>(tmp_134_fu_7667_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_36_5_fu_7701_p2() {
    tmp_36_5_fu_7701_p2 = (!ShuffleConvs_2_Downs_59_q0.read().is_01() || !tmp_136_fu_7697_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_2_Downs_59_q0.read()) + sc_biguint<8>(tmp_136_fu_7697_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_36_6_fu_7731_p2() {
    tmp_36_6_fu_7731_p2 = (!ShuffleConvs_2_Downs_58_q0.read().is_01() || !tmp_138_fu_7727_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_2_Downs_58_q0.read()) + sc_biguint<8>(tmp_138_fu_7727_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_36_7_fu_7761_p2() {
    tmp_36_7_fu_7761_p2 = (!ShuffleConvs_2_Downs_57_q0.read().is_01() || !tmp_140_fu_7757_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_2_Downs_57_q0.read()) + sc_biguint<8>(tmp_140_fu_7757_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_36_8_fu_7791_p2() {
    tmp_36_8_fu_7791_p2 = (!ShuffleConvs_2_Downs_56_q0.read().is_01() || !tmp_142_fu_7787_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_2_Downs_56_q0.read()) + sc_biguint<8>(tmp_142_fu_7787_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_36_9_fu_7821_p2() {
    tmp_36_9_fu_7821_p2 = (!ShuffleConvs_2_Downs_55_q0.read().is_01() || !tmp_197_fu_7817_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_2_Downs_55_q0.read()) + sc_biguint<8>(tmp_197_fu_7817_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_36_s_fu_7851_p2() {
    tmp_36_s_fu_7851_p2 = (!ShuffleConvs_2_Downs_54_q0.read().is_01() || !tmp_199_fu_7847_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_2_Downs_54_q0.read()) + sc_biguint<8>(tmp_199_fu_7847_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_38_10_fu_7892_p2() {
    tmp_38_10_fu_7892_p2 = (!ShuffleConvs_2_Downs_q0.read().is_01() || !tmp_202_fu_7888_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_2_Downs_q0.read()) + sc_biguint<8>(tmp_202_fu_7888_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_38_1_fu_7592_p2() {
    tmp_38_1_fu_7592_p2 = (!ShuffleConvs_2_Downs_11_q0.read().is_01() || !tmp_129_fu_7588_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_2_Downs_11_q0.read()) + sc_biguint<8>(tmp_129_fu_7588_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_38_2_fu_7622_p2() {
    tmp_38_2_fu_7622_p2 = (!ShuffleConvs_2_Downs_10_q0.read().is_01() || !tmp_131_fu_7618_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_2_Downs_10_q0.read()) + sc_biguint<8>(tmp_131_fu_7618_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_38_3_fu_7652_p2() {
    tmp_38_3_fu_7652_p2 = (!ShuffleConvs_2_Downs_9_q0.read().is_01() || !tmp_133_fu_7648_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_2_Downs_9_q0.read()) + sc_biguint<8>(tmp_133_fu_7648_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_38_4_fu_7682_p2() {
    tmp_38_4_fu_7682_p2 = (!ShuffleConvs_2_Downs_8_q0.read().is_01() || !tmp_135_fu_7678_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_2_Downs_8_q0.read()) + sc_biguint<8>(tmp_135_fu_7678_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_38_5_fu_7712_p2() {
    tmp_38_5_fu_7712_p2 = (!ShuffleConvs_2_Downs_7_q0.read().is_01() || !tmp_137_fu_7708_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_2_Downs_7_q0.read()) + sc_biguint<8>(tmp_137_fu_7708_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_38_6_fu_7742_p2() {
    tmp_38_6_fu_7742_p2 = (!ShuffleConvs_2_Downs_5_q0.read().is_01() || !tmp_139_fu_7738_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_2_Downs_5_q0.read()) + sc_biguint<8>(tmp_139_fu_7738_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_38_7_fu_7772_p2() {
    tmp_38_7_fu_7772_p2 = (!ShuffleConvs_2_Downs_4_q0.read().is_01() || !tmp_141_fu_7768_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_2_Downs_4_q0.read()) + sc_biguint<8>(tmp_141_fu_7768_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_38_8_fu_7802_p2() {
    tmp_38_8_fu_7802_p2 = (!ShuffleConvs_2_Downs_3_q0.read().is_01() || !tmp_143_fu_7798_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_2_Downs_3_q0.read()) + sc_biguint<8>(tmp_143_fu_7798_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_38_9_fu_7832_p2() {
    tmp_38_9_fu_7832_p2 = (!ShuffleConvs_2_Downs_2_q0.read().is_01() || !tmp_198_fu_7828_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_2_Downs_2_q0.read()) + sc_biguint<8>(tmp_198_fu_7828_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_38_s_fu_7862_p2() {
    tmp_38_s_fu_7862_p2 = (!ShuffleConvs_2_Downs_1_q0.read().is_01() || !tmp_200_fu_7858_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_2_Downs_1_q0.read()) + sc_biguint<8>(tmp_200_fu_7858_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_3_fu_5763_p2() {
    tmp_3_fu_5763_p2 = (!ShuffleConvs_2_Downs_95_q0.read().is_01() || !tmp_45_fu_5759_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_2_Downs_95_q0.read()) + sc_biguint<8>(tmp_45_fu_5759_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_41_fu_5373_p3() {
    tmp_41_fu_5373_p3 = esl_concat<4,3>(h_cast_mid2_reg_8375.read(), ap_const_lv3_0);
}

void subconv_1x1_8p_p::thread_tmp_42_fu_5384_p3() {
    tmp_42_fu_5384_p3 = esl_concat<4,1>(h_cast_mid2_reg_8375.read(), ap_const_lv1_0);
}

void subconv_1x1_8p_p::thread_tmp_43_fu_5667_p3() {
    tmp_43_fu_5667_p3 = esl_concat<11,3>(tmp_160_fu_5662_p2.read(), ap_const_lv3_0);
}

void subconv_1x1_8p_p::thread_tmp_44_fu_5679_p3() {
    tmp_44_fu_5679_p3 = esl_concat<11,1>(tmp_160_fu_5662_p2.read(), ap_const_lv1_0);
}

void subconv_1x1_8p_p::thread_tmp_45_fu_5759_p1() {
    tmp_45_fu_5759_p1 = grp_MUL_DP_fu_5076_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_46_fu_5770_p1() {
    tmp_46_fu_5770_p1 = grp_MUL_DP_fu_5076_ap_return_1.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_47_fu_5789_p1() {
    tmp_47_fu_5789_p1 = grp_MUL_DP_fu_5085_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_48_fu_5800_p1() {
    tmp_48_fu_5800_p1 = grp_MUL_DP_fu_5085_ap_return_1.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_49_fu_5819_p1() {
    tmp_49_fu_5819_p1 = grp_MUL_DP_fu_5094_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_50_fu_5830_p1() {
    tmp_50_fu_5830_p1 = grp_MUL_DP_fu_5094_ap_return_1.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_51_fu_5849_p1() {
    tmp_51_fu_5849_p1 = grp_MUL_DP_fu_5103_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_52_fu_5860_p1() {
    tmp_52_fu_5860_p1 = grp_MUL_DP_fu_5103_ap_return_1.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_53_fu_5879_p1() {
    tmp_53_fu_5879_p1 = grp_MUL_DP_fu_5112_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_54_fu_5890_p1() {
    tmp_54_fu_5890_p1 = grp_MUL_DP_fu_5112_ap_return_1.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_55_fu_5909_p1() {
    tmp_55_fu_5909_p1 = grp_MUL_DP_fu_5121_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_56_fu_5920_p1() {
    tmp_56_fu_5920_p1 = grp_MUL_DP_fu_5121_ap_return_1.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_57_fu_5939_p1() {
    tmp_57_fu_5939_p1 = grp_MUL_DP_fu_5130_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_58_fu_5950_p1() {
    tmp_58_fu_5950_p1 = grp_MUL_DP_fu_5130_ap_return_1.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_59_fu_5969_p1() {
    tmp_59_fu_5969_p1 = grp_MUL_DP_fu_5139_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_5_fu_5774_p2() {
    tmp_5_fu_5774_p2 = (!ShuffleConvs_2_Downs_52_q0.read().is_01() || !tmp_46_fu_5770_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_2_Downs_52_q0.read()) + sc_biguint<8>(tmp_46_fu_5770_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_60_fu_5980_p1() {
    tmp_60_fu_5980_p1 = grp_MUL_DP_fu_5139_ap_return_1.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_61_fu_5999_p1() {
    tmp_61_fu_5999_p1 = grp_MUL_DP_fu_5148_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_62_fu_6010_p1() {
    tmp_62_fu_6010_p1 = grp_MUL_DP_fu_5148_ap_return_1.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_63_fu_6029_p1() {
    tmp_63_fu_6029_p1 = grp_MUL_DP_fu_5157_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_64_fu_6040_p1() {
    tmp_64_fu_6040_p1 = grp_MUL_DP_fu_5157_ap_return_1.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_65_fu_6059_p1() {
    tmp_65_fu_6059_p1 = grp_MUL_DP_fu_5166_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_66_fu_6070_p1() {
    tmp_66_fu_6070_p1 = grp_MUL_DP_fu_5166_ap_return_1.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_67_fu_6089_p1() {
    tmp_67_fu_6089_p1 = grp_MUL_DP_fu_5175_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_68_fu_6100_p1() {
    tmp_68_fu_6100_p1 = grp_MUL_DP_fu_5175_ap_return_1.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_69_fu_6263_p3() {
    tmp_69_fu_6263_p3 = esl_concat<11,3>(tmp_172_fu_6258_p2.read(), ap_const_lv3_0);
}

void subconv_1x1_8p_p::thread_tmp_70_fu_6275_p3() {
    tmp_70_fu_6275_p3 = esl_concat<11,1>(tmp_172_fu_6258_p2.read(), ap_const_lv1_0);
}

void subconv_1x1_8p_p::thread_tmp_71_fu_6355_p1() {
    tmp_71_fu_6355_p1 = grp_MUL_DP_fu_5076_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_72_fu_6366_p1() {
    tmp_72_fu_6366_p1 = grp_MUL_DP_fu_5076_ap_return_1.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_73_fu_6385_p1() {
    tmp_73_fu_6385_p1 = grp_MUL_DP_fu_5085_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_74_fu_6396_p1() {
    tmp_74_fu_6396_p1 = grp_MUL_DP_fu_5085_ap_return_1.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_75_fu_6415_p1() {
    tmp_75_fu_6415_p1 = grp_MUL_DP_fu_5094_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_76_fu_6426_p1() {
    tmp_76_fu_6426_p1 = grp_MUL_DP_fu_5094_ap_return_1.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_77_fu_6445_p1() {
    tmp_77_fu_6445_p1 = grp_MUL_DP_fu_5103_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_78_fu_6456_p1() {
    tmp_78_fu_6456_p1 = grp_MUL_DP_fu_5103_ap_return_1.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_79_fu_6475_p1() {
    tmp_79_fu_6475_p1 = grp_MUL_DP_fu_5112_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_7_fu_6359_p2() {
    tmp_7_fu_6359_p2 = (!ShuffleConvs_2_Downs_91_q0.read().is_01() || !tmp_71_fu_6355_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_2_Downs_91_q0.read()) + sc_biguint<8>(tmp_71_fu_6355_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_80_fu_6486_p1() {
    tmp_80_fu_6486_p1 = grp_MUL_DP_fu_5112_ap_return_1.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_81_fu_6505_p1() {
    tmp_81_fu_6505_p1 = grp_MUL_DP_fu_5121_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_82_fu_6516_p1() {
    tmp_82_fu_6516_p1 = grp_MUL_DP_fu_5121_ap_return_1.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_83_fu_6535_p1() {
    tmp_83_fu_6535_p1 = grp_MUL_DP_fu_5130_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_84_fu_6546_p1() {
    tmp_84_fu_6546_p1 = grp_MUL_DP_fu_5130_ap_return_1.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_85_fu_6565_p1() {
    tmp_85_fu_6565_p1 = grp_MUL_DP_fu_5139_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_86_fu_6576_p1() {
    tmp_86_fu_6576_p1 = grp_MUL_DP_fu_5139_ap_return_1.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_87_fu_6595_p1() {
    tmp_87_fu_6595_p1 = grp_MUL_DP_fu_5148_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_88_fu_6606_p1() {
    tmp_88_fu_6606_p1 = grp_MUL_DP_fu_5148_ap_return_1.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_89_fu_6625_p1() {
    tmp_89_fu_6625_p1 = grp_MUL_DP_fu_5157_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_90_fu_6636_p1() {
    tmp_90_fu_6636_p1 = grp_MUL_DP_fu_5157_ap_return_1.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_91_fu_6655_p1() {
    tmp_91_fu_6655_p1 = grp_MUL_DP_fu_5166_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_92_fu_6666_p1() {
    tmp_92_fu_6666_p1 = grp_MUL_DP_fu_5166_ap_return_1.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_93_fu_6685_p1() {
    tmp_93_fu_6685_p1 = grp_MUL_DP_fu_5175_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_94_fu_6696_p1() {
    tmp_94_fu_6696_p1 = grp_MUL_DP_fu_5175_ap_return_1.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_95_fu_6859_p3() {
    tmp_95_fu_6859_p3 = esl_concat<11,3>(tmp_181_fu_6854_p2.read(), ap_const_lv3_0);
}

void subconv_1x1_8p_p::thread_tmp_96_fu_6871_p3() {
    tmp_96_fu_6871_p3 = esl_concat<11,1>(tmp_181_fu_6854_p2.read(), ap_const_lv1_0);
}

void subconv_1x1_8p_p::thread_tmp_97_fu_7995_p3() {
    tmp_97_fu_7995_p3 = esl_concat<4,3>(h11_cast2_mid2_reg_9603.read(), ap_const_lv3_0);
}

void subconv_1x1_8p_p::thread_tmp_98_fu_8006_p3() {
    tmp_98_fu_8006_p3 = esl_concat<4,1>(h11_cast2_mid2_reg_9603.read(), ap_const_lv1_0);
}

void subconv_1x1_8p_p::thread_tmp_99_fu_8334_p3() {
    tmp_99_fu_8334_p3 = tmp_2_fu_8137_p98.read().range(7, 7);
}

void subconv_1x1_8p_p::thread_tmp_9_fu_6370_p2() {
    tmp_9_fu_6370_p2 = (!ShuffleConvs_2_Downs_38_q0.read().is_01() || !tmp_72_fu_6366_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_2_Downs_38_q0.read()) + sc_biguint<8>(tmp_72_fu_6366_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_s_fu_5352_p2() {
    tmp_s_fu_5352_p2 = (exitcond5_mid_fu_5340_p2.read() | exitcond_flatten_reg_8351.read());
}

void subconv_1x1_8p_p::thread_w10_cast5_cast1_fu_7347_p1() {
    w10_cast5_cast1_fu_7347_p1 = esl_zext<7,4>(w10_reg_4995.read());
}

void subconv_1x1_8p_p::thread_w10_cast5_cast2_fu_7351_p1() {
    w10_cast5_cast2_fu_7351_p1 = esl_zext<15,4>(w10_reg_4995.read());
}

void subconv_1x1_8p_p::thread_w10_cast5_cast_fu_7355_p1() {
    w10_cast5_cast_fu_7355_p1 = esl_zext<8,4>(w10_reg_4995.read());
}

void subconv_1x1_8p_p::thread_w11_phi_fu_5068_p4() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp1_iter1_exitcond_flatten3_reg_9569.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        w11_phi_fu_5068_p4 = w_14_fu_8132_p2.read();
    } else {
        w11_phi_fu_5068_p4 = w11_reg_5064.read();
    }
}

void subconv_1x1_8p_p::thread_w12_cast1_cast_fu_8023_p1() {
    w12_cast1_cast_fu_8023_p1 = esl_zext<8,4>(w12_mid2_reg_9597.read());
}

void subconv_1x1_8p_p::thread_w12_mid2_fu_7979_p3() {
    w12_mid2_fu_7979_p3 = (!tmp_186_fu_7974_p2.read()[0].is_01())? sc_lv<4>(): ((tmp_186_fu_7974_p2.read()[0].to_bool())? ap_const_lv4_1: w11_phi_fu_5068_p4.read());
}

void subconv_1x1_8p_p::thread_w2_cast_cast1_fu_5559_p1() {
    w2_cast_cast1_fu_5559_p1 = esl_zext<7,4>(w2_reg_4890.read());
}

void subconv_1x1_8p_p::thread_w2_cast_cast2_fu_5563_p1() {
    w2_cast_cast2_fu_5563_p1 = esl_zext<15,4>(w2_reg_4890.read());
}

void subconv_1x1_8p_p::thread_w2_cast_cast_fu_5567_p1() {
    w2_cast_cast_fu_5567_p1 = esl_zext<8,4>(w2_reg_4890.read());
}

void subconv_1x1_8p_p::thread_w5_cast_cast1_fu_6155_p1() {
    w5_cast_cast1_fu_6155_p1 = esl_zext<7,4>(w5_reg_4925.read());
}

void subconv_1x1_8p_p::thread_w5_cast_cast2_fu_6159_p1() {
    w5_cast_cast2_fu_6159_p1 = esl_zext<15,4>(w5_reg_4925.read());
}

void subconv_1x1_8p_p::thread_w5_cast_cast_fu_6163_p1() {
    w5_cast_cast_fu_6163_p1 = esl_zext<8,4>(w5_reg_4925.read());
}

void subconv_1x1_8p_p::thread_w9_cast8_cast1_fu_6751_p1() {
    w9_cast8_cast1_fu_6751_p1 = esl_zext<7,4>(w9_reg_4960.read());
}

void subconv_1x1_8p_p::thread_w9_cast8_cast2_fu_6755_p1() {
    w9_cast8_cast2_fu_6755_p1 = esl_zext<15,4>(w9_reg_4960.read());
}

void subconv_1x1_8p_p::thread_w9_cast8_cast_fu_6759_p1() {
    w9_cast8_cast_fu_6759_p1 = esl_zext<8,4>(w9_reg_4960.read());
}

void subconv_1x1_8p_p::thread_w_12_fu_6937_p2() {
    w_12_fu_6937_p2 = (!w9_reg_4960.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w9_reg_4960.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void subconv_1x1_8p_p::thread_w_13_fu_7533_p2() {
    w_13_fu_7533_p2 = (!w10_reg_4995.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w10_reg_4995.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void subconv_1x1_8p_p::thread_w_14_fu_8132_p2() {
    w_14_fu_8132_p2 = (!w12_mid2_reg_9597.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w12_mid2_reg_9597.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void subconv_1x1_8p_p::thread_w_7_fu_5510_p2() {
    w_7_fu_5510_p2 = (!w_mid2_reg_8369.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w_mid2_reg_8369.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void subconv_1x1_8p_p::thread_w_8_fu_5745_p2() {
    w_8_fu_5745_p2 = (!w2_reg_4890.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w2_reg_4890.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void subconv_1x1_8p_p::thread_w_9_fu_6341_p2() {
    w_9_fu_6341_p2 = (!w5_reg_4925.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w5_reg_4925.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void subconv_1x1_8p_p::thread_w_cast_cast_fu_5401_p1() {
    w_cast_cast_fu_5401_p1 = esl_zext<8,4>(w_mid2_reg_8369.read());
}

void subconv_1x1_8p_p::thread_w_mid2_fu_5357_p3() {
    w_mid2_fu_5357_p3 = (!tmp_s_fu_5352_p2.read()[0].is_01())? sc_lv<4>(): ((tmp_s_fu_5352_p2.read()[0].to_bool())? ap_const_lv4_1: w_phi_fu_4870_p4.read());
}

void subconv_1x1_8p_p::thread_w_phi_fu_4870_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_reg_pp0_iter1_exitcond_flatten1_reg_8342.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        w_phi_fu_4870_p4 = w_7_fu_5510_p2.read();
    } else {
        w_phi_fu_4870_p4 = w_reg_4866.read();
    }
}

void subconv_1x1_8p_p::thread_weight_0_V_address0() {
    weight_0_V_address0 = weight_0_V_addr_reg_8553.read();
}

void subconv_1x1_8p_p::thread_weight_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        weight_0_V_ce0 = ap_const_logic_1;
    } else {
        weight_0_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_10_V_address0() {
    weight_10_V_address0 = weight_10_V_addr_reg_8603.read();
}

void subconv_1x1_8p_p::thread_weight_10_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        weight_10_V_ce0 = ap_const_logic_1;
    } else {
        weight_10_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_11_V_address0() {
    weight_11_V_address0 = weight_11_V_addr_reg_8608.read();
}

void subconv_1x1_8p_p::thread_weight_11_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        weight_11_V_ce0 = ap_const_logic_1;
    } else {
        weight_11_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_12_V_address0() {
    weight_12_V_address0 = weight_12_V_addr_reg_8847.read();
}

void subconv_1x1_8p_p::thread_weight_12_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        weight_12_V_ce0 = ap_const_logic_1;
    } else {
        weight_12_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_13_V_address0() {
    weight_13_V_address0 = weight_13_V_addr_reg_8852.read();
}

void subconv_1x1_8p_p::thread_weight_13_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        weight_13_V_ce0 = ap_const_logic_1;
    } else {
        weight_13_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_14_V_address0() {
    weight_14_V_address0 = weight_14_V_addr_reg_8857.read();
}

void subconv_1x1_8p_p::thread_weight_14_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        weight_14_V_ce0 = ap_const_logic_1;
    } else {
        weight_14_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_15_V_address0() {
    weight_15_V_address0 = weight_15_V_addr_reg_8862.read();
}

void subconv_1x1_8p_p::thread_weight_15_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        weight_15_V_ce0 = ap_const_logic_1;
    } else {
        weight_15_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_16_V_address0() {
    weight_16_V_address0 = weight_16_V_addr_reg_8867.read();
}

void subconv_1x1_8p_p::thread_weight_16_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        weight_16_V_ce0 = ap_const_logic_1;
    } else {
        weight_16_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_17_V_address0() {
    weight_17_V_address0 = weight_17_V_addr_reg_8872.read();
}

void subconv_1x1_8p_p::thread_weight_17_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        weight_17_V_ce0 = ap_const_logic_1;
    } else {
        weight_17_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_18_V_address0() {
    weight_18_V_address0 = weight_18_V_addr_reg_8877.read();
}

void subconv_1x1_8p_p::thread_weight_18_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        weight_18_V_ce0 = ap_const_logic_1;
    } else {
        weight_18_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_19_V_address0() {
    weight_19_V_address0 = weight_19_V_addr_reg_8882.read();
}

void subconv_1x1_8p_p::thread_weight_19_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        weight_19_V_ce0 = ap_const_logic_1;
    } else {
        weight_19_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_1_V_address0() {
    weight_1_V_address0 = weight_1_V_addr_reg_8558.read();
}

void subconv_1x1_8p_p::thread_weight_1_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        weight_1_V_ce0 = ap_const_logic_1;
    } else {
        weight_1_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_20_V_address0() {
    weight_20_V_address0 = weight_20_V_addr_reg_8887.read();
}

void subconv_1x1_8p_p::thread_weight_20_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        weight_20_V_ce0 = ap_const_logic_1;
    } else {
        weight_20_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_21_V_address0() {
    weight_21_V_address0 = weight_21_V_addr_reg_8892.read();
}

void subconv_1x1_8p_p::thread_weight_21_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        weight_21_V_ce0 = ap_const_logic_1;
    } else {
        weight_21_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_22_V_address0() {
    weight_22_V_address0 = weight_22_V_addr_reg_8897.read();
}

void subconv_1x1_8p_p::thread_weight_22_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        weight_22_V_ce0 = ap_const_logic_1;
    } else {
        weight_22_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_23_V_address0() {
    weight_23_V_address0 = weight_23_V_addr_reg_8902.read();
}

void subconv_1x1_8p_p::thread_weight_23_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        weight_23_V_ce0 = ap_const_logic_1;
    } else {
        weight_23_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_24_V_address0() {
    weight_24_V_address0 = weight_24_V_addr_reg_9141.read();
}

void subconv_1x1_8p_p::thread_weight_24_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read())) {
        weight_24_V_ce0 = ap_const_logic_1;
    } else {
        weight_24_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_25_V_address0() {
    weight_25_V_address0 = weight_25_V_addr_reg_9146.read();
}

void subconv_1x1_8p_p::thread_weight_25_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read())) {
        weight_25_V_ce0 = ap_const_logic_1;
    } else {
        weight_25_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_26_V_address0() {
    weight_26_V_address0 = weight_26_V_addr_reg_9151.read();
}

void subconv_1x1_8p_p::thread_weight_26_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read())) {
        weight_26_V_ce0 = ap_const_logic_1;
    } else {
        weight_26_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_27_V_address0() {
    weight_27_V_address0 = weight_27_V_addr_reg_9156.read();
}

void subconv_1x1_8p_p::thread_weight_27_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read())) {
        weight_27_V_ce0 = ap_const_logic_1;
    } else {
        weight_27_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_28_V_address0() {
    weight_28_V_address0 = weight_28_V_addr_reg_9161.read();
}

void subconv_1x1_8p_p::thread_weight_28_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read())) {
        weight_28_V_ce0 = ap_const_logic_1;
    } else {
        weight_28_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_29_V_address0() {
    weight_29_V_address0 = weight_29_V_addr_reg_9166.read();
}

void subconv_1x1_8p_p::thread_weight_29_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read())) {
        weight_29_V_ce0 = ap_const_logic_1;
    } else {
        weight_29_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_2_V_address0() {
    weight_2_V_address0 = weight_2_V_addr_reg_8563.read();
}

void subconv_1x1_8p_p::thread_weight_2_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        weight_2_V_ce0 = ap_const_logic_1;
    } else {
        weight_2_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_30_V_address0() {
    weight_30_V_address0 = weight_30_V_addr_reg_9171.read();
}

void subconv_1x1_8p_p::thread_weight_30_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read())) {
        weight_30_V_ce0 = ap_const_logic_1;
    } else {
        weight_30_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_31_V_address0() {
    weight_31_V_address0 = weight_31_V_addr_reg_9176.read();
}

void subconv_1x1_8p_p::thread_weight_31_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read())) {
        weight_31_V_ce0 = ap_const_logic_1;
    } else {
        weight_31_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_32_V_address0() {
    weight_32_V_address0 = weight_32_V_addr_reg_9181.read();
}

void subconv_1x1_8p_p::thread_weight_32_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read())) {
        weight_32_V_ce0 = ap_const_logic_1;
    } else {
        weight_32_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_33_V_address0() {
    weight_33_V_address0 = weight_33_V_addr_reg_9186.read();
}

void subconv_1x1_8p_p::thread_weight_33_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read())) {
        weight_33_V_ce0 = ap_const_logic_1;
    } else {
        weight_33_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_34_V_address0() {
    weight_34_V_address0 = weight_34_V_addr_reg_9191.read();
}

void subconv_1x1_8p_p::thread_weight_34_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read())) {
        weight_34_V_ce0 = ap_const_logic_1;
    } else {
        weight_34_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_35_V_address0() {
    weight_35_V_address0 = weight_35_V_addr_reg_9196.read();
}

void subconv_1x1_8p_p::thread_weight_35_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read())) {
        weight_35_V_ce0 = ap_const_logic_1;
    } else {
        weight_35_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_36_V_address0() {
    weight_36_V_address0 = weight_36_V_addr_reg_9436.read();
}

void subconv_1x1_8p_p::thread_weight_36_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        weight_36_V_ce0 = ap_const_logic_1;
    } else {
        weight_36_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_37_V_address0() {
    weight_37_V_address0 = weight_37_V_addr_reg_9441.read();
}

void subconv_1x1_8p_p::thread_weight_37_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        weight_37_V_ce0 = ap_const_logic_1;
    } else {
        weight_37_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_38_V_address0() {
    weight_38_V_address0 = weight_38_V_addr_reg_9446.read();
}

void subconv_1x1_8p_p::thread_weight_38_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        weight_38_V_ce0 = ap_const_logic_1;
    } else {
        weight_38_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_39_V_address0() {
    weight_39_V_address0 = weight_39_V_addr_reg_9451.read();
}

void subconv_1x1_8p_p::thread_weight_39_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        weight_39_V_ce0 = ap_const_logic_1;
    } else {
        weight_39_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_3_V_address0() {
    weight_3_V_address0 = weight_3_V_addr_reg_8568.read();
}

void subconv_1x1_8p_p::thread_weight_3_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        weight_3_V_ce0 = ap_const_logic_1;
    } else {
        weight_3_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_40_V_address0() {
    weight_40_V_address0 = weight_40_V_addr_reg_9456.read();
}

void subconv_1x1_8p_p::thread_weight_40_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        weight_40_V_ce0 = ap_const_logic_1;
    } else {
        weight_40_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_41_V_address0() {
    weight_41_V_address0 = weight_41_V_addr_reg_9461.read();
}

void subconv_1x1_8p_p::thread_weight_41_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        weight_41_V_ce0 = ap_const_logic_1;
    } else {
        weight_41_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_42_V_address0() {
    weight_42_V_address0 = weight_42_V_addr_reg_9466.read();
}

void subconv_1x1_8p_p::thread_weight_42_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        weight_42_V_ce0 = ap_const_logic_1;
    } else {
        weight_42_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_43_V_address0() {
    weight_43_V_address0 = weight_43_V_addr_reg_9471.read();
}

void subconv_1x1_8p_p::thread_weight_43_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        weight_43_V_ce0 = ap_const_logic_1;
    } else {
        weight_43_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_44_V_address0() {
    weight_44_V_address0 = weight_44_V_addr_reg_9476.read();
}

void subconv_1x1_8p_p::thread_weight_44_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        weight_44_V_ce0 = ap_const_logic_1;
    } else {
        weight_44_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_45_V_address0() {
    weight_45_V_address0 = weight_45_V_addr_reg_9481.read();
}

void subconv_1x1_8p_p::thread_weight_45_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        weight_45_V_ce0 = ap_const_logic_1;
    } else {
        weight_45_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_46_V_address0() {
    weight_46_V_address0 = weight_46_V_addr_reg_9486.read();
}

void subconv_1x1_8p_p::thread_weight_46_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        weight_46_V_ce0 = ap_const_logic_1;
    } else {
        weight_46_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_47_V_address0() {
    weight_47_V_address0 = weight_47_V_addr_reg_9491.read();
}

void subconv_1x1_8p_p::thread_weight_47_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        weight_47_V_ce0 = ap_const_logic_1;
    } else {
        weight_47_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_48_V_address0() {
    weight_48_V_address0 = weight_48_V_addr_reg_8613.read();
}

void subconv_1x1_8p_p::thread_weight_48_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        weight_48_V_ce0 = ap_const_logic_1;
    } else {
        weight_48_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_49_V_address0() {
    weight_49_V_address0 = weight_49_V_addr_reg_8618.read();
}

void subconv_1x1_8p_p::thread_weight_49_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        weight_49_V_ce0 = ap_const_logic_1;
    } else {
        weight_49_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_4_V_address0() {
    weight_4_V_address0 = weight_4_V_addr_reg_8573.read();
}

void subconv_1x1_8p_p::thread_weight_4_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        weight_4_V_ce0 = ap_const_logic_1;
    } else {
        weight_4_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_50_V_address0() {
    weight_50_V_address0 = weight_50_V_addr_reg_8623.read();
}

void subconv_1x1_8p_p::thread_weight_50_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        weight_50_V_ce0 = ap_const_logic_1;
    } else {
        weight_50_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_51_V_address0() {
    weight_51_V_address0 = weight_51_V_addr_reg_8628.read();
}

void subconv_1x1_8p_p::thread_weight_51_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        weight_51_V_ce0 = ap_const_logic_1;
    } else {
        weight_51_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_52_V_address0() {
    weight_52_V_address0 = weight_52_V_addr_reg_8633.read();
}

void subconv_1x1_8p_p::thread_weight_52_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        weight_52_V_ce0 = ap_const_logic_1;
    } else {
        weight_52_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_53_V_address0() {
    weight_53_V_address0 = weight_53_V_addr_reg_8638.read();
}

void subconv_1x1_8p_p::thread_weight_53_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        weight_53_V_ce0 = ap_const_logic_1;
    } else {
        weight_53_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_54_V_address0() {
    weight_54_V_address0 = weight_54_V_addr_reg_8643.read();
}

void subconv_1x1_8p_p::thread_weight_54_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        weight_54_V_ce0 = ap_const_logic_1;
    } else {
        weight_54_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_55_V_address0() {
    weight_55_V_address0 = weight_55_V_addr_reg_8648.read();
}

void subconv_1x1_8p_p::thread_weight_55_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        weight_55_V_ce0 = ap_const_logic_1;
    } else {
        weight_55_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_56_V_address0() {
    weight_56_V_address0 = weight_56_V_addr_reg_8653.read();
}

void subconv_1x1_8p_p::thread_weight_56_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        weight_56_V_ce0 = ap_const_logic_1;
    } else {
        weight_56_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_57_V_address0() {
    weight_57_V_address0 = weight_57_V_addr_reg_8658.read();
}

void subconv_1x1_8p_p::thread_weight_57_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        weight_57_V_ce0 = ap_const_logic_1;
    } else {
        weight_57_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_58_V_address0() {
    weight_58_V_address0 = weight_58_V_addr_reg_8663.read();
}

void subconv_1x1_8p_p::thread_weight_58_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        weight_58_V_ce0 = ap_const_logic_1;
    } else {
        weight_58_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_59_V_address0() {
    weight_59_V_address0 = weight_59_V_addr_reg_8668.read();
}

void subconv_1x1_8p_p::thread_weight_59_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        weight_59_V_ce0 = ap_const_logic_1;
    } else {
        weight_59_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_5_V_address0() {
    weight_5_V_address0 = weight_5_V_addr_reg_8578.read();
}

void subconv_1x1_8p_p::thread_weight_5_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        weight_5_V_ce0 = ap_const_logic_1;
    } else {
        weight_5_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_60_V_address0() {
    weight_60_V_address0 = weight_60_V_addr_reg_8907.read();
}

void subconv_1x1_8p_p::thread_weight_60_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        weight_60_V_ce0 = ap_const_logic_1;
    } else {
        weight_60_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_61_V_address0() {
    weight_61_V_address0 = weight_61_V_addr_reg_8912.read();
}

void subconv_1x1_8p_p::thread_weight_61_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        weight_61_V_ce0 = ap_const_logic_1;
    } else {
        weight_61_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_62_V_address0() {
    weight_62_V_address0 = weight_62_V_addr_reg_8917.read();
}

void subconv_1x1_8p_p::thread_weight_62_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        weight_62_V_ce0 = ap_const_logic_1;
    } else {
        weight_62_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_63_V_address0() {
    weight_63_V_address0 = weight_63_V_addr_reg_8922.read();
}

void subconv_1x1_8p_p::thread_weight_63_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        weight_63_V_ce0 = ap_const_logic_1;
    } else {
        weight_63_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_64_V_address0() {
    weight_64_V_address0 = weight_64_V_addr_reg_8927.read();
}

void subconv_1x1_8p_p::thread_weight_64_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        weight_64_V_ce0 = ap_const_logic_1;
    } else {
        weight_64_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_65_V_address0() {
    weight_65_V_address0 = weight_65_V_addr_reg_8932.read();
}

void subconv_1x1_8p_p::thread_weight_65_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        weight_65_V_ce0 = ap_const_logic_1;
    } else {
        weight_65_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_66_V_address0() {
    weight_66_V_address0 = weight_66_V_addr_reg_8937.read();
}

void subconv_1x1_8p_p::thread_weight_66_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        weight_66_V_ce0 = ap_const_logic_1;
    } else {
        weight_66_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_67_V_address0() {
    weight_67_V_address0 = weight_67_V_addr_reg_8942.read();
}

void subconv_1x1_8p_p::thread_weight_67_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        weight_67_V_ce0 = ap_const_logic_1;
    } else {
        weight_67_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_68_V_address0() {
    weight_68_V_address0 = weight_68_V_addr_reg_8947.read();
}

void subconv_1x1_8p_p::thread_weight_68_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        weight_68_V_ce0 = ap_const_logic_1;
    } else {
        weight_68_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_69_V_address0() {
    weight_69_V_address0 = weight_69_V_addr_reg_8952.read();
}

void subconv_1x1_8p_p::thread_weight_69_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        weight_69_V_ce0 = ap_const_logic_1;
    } else {
        weight_69_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_6_V_address0() {
    weight_6_V_address0 = weight_6_V_addr_reg_8583.read();
}

void subconv_1x1_8p_p::thread_weight_6_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        weight_6_V_ce0 = ap_const_logic_1;
    } else {
        weight_6_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_70_V_address0() {
    weight_70_V_address0 = weight_70_V_addr_reg_8957.read();
}

void subconv_1x1_8p_p::thread_weight_70_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        weight_70_V_ce0 = ap_const_logic_1;
    } else {
        weight_70_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_71_V_address0() {
    weight_71_V_address0 = weight_71_V_addr_reg_8962.read();
}

void subconv_1x1_8p_p::thread_weight_71_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        weight_71_V_ce0 = ap_const_logic_1;
    } else {
        weight_71_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_72_V_address0() {
    weight_72_V_address0 = weight_72_V_addr_reg_9201.read();
}

void subconv_1x1_8p_p::thread_weight_72_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read())) {
        weight_72_V_ce0 = ap_const_logic_1;
    } else {
        weight_72_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_73_V_address0() {
    weight_73_V_address0 = weight_73_V_addr_reg_9206.read();
}

void subconv_1x1_8p_p::thread_weight_73_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read())) {
        weight_73_V_ce0 = ap_const_logic_1;
    } else {
        weight_73_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_74_V_address0() {
    weight_74_V_address0 = weight_74_V_addr_reg_9211.read();
}

void subconv_1x1_8p_p::thread_weight_74_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read())) {
        weight_74_V_ce0 = ap_const_logic_1;
    } else {
        weight_74_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_75_V_address0() {
    weight_75_V_address0 = weight_75_V_addr_reg_9216.read();
}

void subconv_1x1_8p_p::thread_weight_75_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read())) {
        weight_75_V_ce0 = ap_const_logic_1;
    } else {
        weight_75_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_76_V_address0() {
    weight_76_V_address0 = weight_76_V_addr_reg_9221.read();
}

void subconv_1x1_8p_p::thread_weight_76_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read())) {
        weight_76_V_ce0 = ap_const_logic_1;
    } else {
        weight_76_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_77_V_address0() {
    weight_77_V_address0 = weight_77_V_addr_reg_9226.read();
}

void subconv_1x1_8p_p::thread_weight_77_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read())) {
        weight_77_V_ce0 = ap_const_logic_1;
    } else {
        weight_77_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_78_V_address0() {
    weight_78_V_address0 = weight_78_V_addr_reg_9231.read();
}

void subconv_1x1_8p_p::thread_weight_78_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read())) {
        weight_78_V_ce0 = ap_const_logic_1;
    } else {
        weight_78_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_79_V_address0() {
    weight_79_V_address0 = weight_79_V_addr_reg_9236.read();
}

void subconv_1x1_8p_p::thread_weight_79_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read())) {
        weight_79_V_ce0 = ap_const_logic_1;
    } else {
        weight_79_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_7_V_address0() {
    weight_7_V_address0 = weight_7_V_addr_reg_8588.read();
}

void subconv_1x1_8p_p::thread_weight_7_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        weight_7_V_ce0 = ap_const_logic_1;
    } else {
        weight_7_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_80_V_address0() {
    weight_80_V_address0 = weight_80_V_addr_reg_9241.read();
}

void subconv_1x1_8p_p::thread_weight_80_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read())) {
        weight_80_V_ce0 = ap_const_logic_1;
    } else {
        weight_80_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_81_V_address0() {
    weight_81_V_address0 = weight_81_V_addr_reg_9246.read();
}

void subconv_1x1_8p_p::thread_weight_81_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read())) {
        weight_81_V_ce0 = ap_const_logic_1;
    } else {
        weight_81_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_82_V_address0() {
    weight_82_V_address0 = weight_82_V_addr_reg_9251.read();
}

void subconv_1x1_8p_p::thread_weight_82_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read())) {
        weight_82_V_ce0 = ap_const_logic_1;
    } else {
        weight_82_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_83_V_address0() {
    weight_83_V_address0 = weight_83_V_addr_reg_9256.read();
}

void subconv_1x1_8p_p::thread_weight_83_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read())) {
        weight_83_V_ce0 = ap_const_logic_1;
    } else {
        weight_83_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_84_V_address0() {
    weight_84_V_address0 = weight_84_V_addr_reg_9496.read();
}

void subconv_1x1_8p_p::thread_weight_84_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        weight_84_V_ce0 = ap_const_logic_1;
    } else {
        weight_84_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_85_V_address0() {
    weight_85_V_address0 = weight_85_V_addr_reg_9501.read();
}

void subconv_1x1_8p_p::thread_weight_85_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        weight_85_V_ce0 = ap_const_logic_1;
    } else {
        weight_85_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_86_V_address0() {
    weight_86_V_address0 = weight_86_V_addr_reg_9506.read();
}

void subconv_1x1_8p_p::thread_weight_86_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        weight_86_V_ce0 = ap_const_logic_1;
    } else {
        weight_86_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_87_V_address0() {
    weight_87_V_address0 = weight_87_V_addr_reg_9511.read();
}

void subconv_1x1_8p_p::thread_weight_87_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        weight_87_V_ce0 = ap_const_logic_1;
    } else {
        weight_87_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_88_V_address0() {
    weight_88_V_address0 = weight_88_V_addr_reg_9516.read();
}

void subconv_1x1_8p_p::thread_weight_88_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        weight_88_V_ce0 = ap_const_logic_1;
    } else {
        weight_88_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_89_V_address0() {
    weight_89_V_address0 = weight_89_V_addr_reg_9521.read();
}

void subconv_1x1_8p_p::thread_weight_89_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        weight_89_V_ce0 = ap_const_logic_1;
    } else {
        weight_89_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_8_V_address0() {
    weight_8_V_address0 = weight_8_V_addr_reg_8593.read();
}

void subconv_1x1_8p_p::thread_weight_8_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        weight_8_V_ce0 = ap_const_logic_1;
    } else {
        weight_8_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_90_V_address0() {
    weight_90_V_address0 = weight_90_V_addr_reg_9526.read();
}

void subconv_1x1_8p_p::thread_weight_90_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        weight_90_V_ce0 = ap_const_logic_1;
    } else {
        weight_90_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_91_V_address0() {
    weight_91_V_address0 = weight_91_V_addr_reg_9531.read();
}

void subconv_1x1_8p_p::thread_weight_91_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        weight_91_V_ce0 = ap_const_logic_1;
    } else {
        weight_91_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_92_V_address0() {
    weight_92_V_address0 = weight_92_V_addr_reg_9536.read();
}

void subconv_1x1_8p_p::thread_weight_92_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        weight_92_V_ce0 = ap_const_logic_1;
    } else {
        weight_92_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_93_V_address0() {
    weight_93_V_address0 = weight_93_V_addr_reg_9541.read();
}

void subconv_1x1_8p_p::thread_weight_93_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        weight_93_V_ce0 = ap_const_logic_1;
    } else {
        weight_93_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_94_V_address0() {
    weight_94_V_address0 = weight_94_V_addr_reg_9546.read();
}

void subconv_1x1_8p_p::thread_weight_94_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        weight_94_V_ce0 = ap_const_logic_1;
    } else {
        weight_94_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_95_V_address0() {
    weight_95_V_address0 = weight_95_V_addr_reg_9551.read();
}

void subconv_1x1_8p_p::thread_weight_95_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        weight_95_V_ce0 = ap_const_logic_1;
    } else {
        weight_95_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_9_V_address0() {
    weight_9_V_address0 = weight_9_V_addr_reg_8598.read();
}

void subconv_1x1_8p_p::thread_weight_9_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        weight_9_V_ce0 = ap_const_logic_1;
    } else {
        weight_9_V_ce0 = ap_const_logic_0;
    }
}

}

