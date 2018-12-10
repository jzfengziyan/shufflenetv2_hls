#include "ShuffleNetV2.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void ShuffleNetV2::thread_tmp_205_fu_7813_p1() {
    tmp_205_fu_7813_p1 = esl_zext<64,8>(tmp_214_cast_fu_7809_p1.read());
}

void ShuffleNetV2::thread_tmp_206_cast_fu_7762_p1() {
    tmp_206_cast_fu_7762_p1 = esl_sext<7,6>(tmp_196_fu_7754_p3.read());
}

void ShuffleNetV2::thread_tmp_206_fu_7818_p2() {
    tmp_206_fu_7818_p2 = (!i5_cast102_cast_reg_10185.read().is_01() || !ap_const_lv7_58.is_01())? sc_lv<7>(): (sc_biguint<7>(i5_cast102_cast_reg_10185.read()) + sc_bigint<7>(ap_const_lv7_58));
}

void ShuffleNetV2::thread_tmp_207_fu_7827_p1() {
    tmp_207_fu_7827_p1 = esl_zext<64,8>(tmp_216_cast_fu_7823_p1.read());
}

void ShuffleNetV2::thread_tmp_208_fu_7832_p2() {
    tmp_208_fu_7832_p2 = (!i5_cast105_cast1_reg_10146.read().is_01() || !ap_const_lv9_F0.is_01())? sc_lv<9>(): (sc_biguint<9>(i5_cast105_cast1_reg_10146.read()) + sc_biguint<9>(ap_const_lv9_F0));
}

void ShuffleNetV2::thread_tmp_209_fu_7837_p1() {
    tmp_209_fu_7837_p1 = esl_zext<64,9>(tmp_208_fu_7832_p2.read());
}

void ShuffleNetV2::thread_tmp_210_fu_7842_p2() {
    tmp_210_fu_7842_p2 = (!i5_cast105_cast1_reg_10146.read().is_01() || !ap_const_lv9_108.is_01())? sc_lv<9>(): (sc_biguint<9>(i5_cast105_cast1_reg_10146.read()) + sc_bigint<9>(ap_const_lv9_108));
}

void ShuffleNetV2::thread_tmp_211_fu_7847_p1() {
    tmp_211_fu_7847_p1 = esl_zext<64,9>(tmp_210_fu_7842_p2.read());
}

void ShuffleNetV2::thread_tmp_212_fu_7852_p3() {
    tmp_212_fu_7852_p3 = esl_concat<4,5>(ap_const_lv4_9, i5_reg_3225.read());
}

void ShuffleNetV2::thread_tmp_213_fu_7860_p1() {
    tmp_213_fu_7860_p1 = esl_zext<64,9>(tmp_212_fu_7852_p3.read());
}

void ShuffleNetV2::thread_tmp_214_cast_fu_7809_p1() {
    tmp_214_cast_fu_7809_p1 = esl_sext<8,7>(tmp_204_fu_7801_p3.read());
}

void ShuffleNetV2::thread_tmp_214_fu_7865_p2() {
    tmp_214_fu_7865_p2 = (!i5_cast105_cast1_reg_10146.read().is_01() || !ap_const_lv9_138.is_01())? sc_lv<9>(): (sc_biguint<9>(i5_cast105_cast1_reg_10146.read()) + sc_bigint<9>(ap_const_lv9_138));
}

void ShuffleNetV2::thread_tmp_215_fu_7870_p1() {
    tmp_215_fu_7870_p1 = esl_zext<64,9>(tmp_214_fu_7865_p2.read());
}

void ShuffleNetV2::thread_tmp_216_cast_fu_7823_p1() {
    tmp_216_cast_fu_7823_p1 = esl_sext<8,7>(tmp_206_fu_7818_p2.read());
}

void ShuffleNetV2::thread_tmp_216_fu_7875_p2() {
    tmp_216_fu_7875_p2 = (!i5_cast105_cast1_reg_10146.read().is_01() || !ap_const_lv9_150.is_01())? sc_lv<9>(): (sc_biguint<9>(i5_cast105_cast1_reg_10146.read()) + sc_bigint<9>(ap_const_lv9_150));
}

void ShuffleNetV2::thread_tmp_217_fu_7880_p1() {
    tmp_217_fu_7880_p1 = esl_zext<64,9>(tmp_216_fu_7875_p2.read());
}

void ShuffleNetV2::thread_tmp_218_cast1_fu_6156_p1() {
    tmp_218_cast1_fu_6156_p1 = esl_zext<12,2>(w_reg_3180.read());
}

void ShuffleNetV2::thread_tmp_218_cast2_fu_6160_p1() {
    tmp_218_cast2_fu_6160_p1 = esl_zext<15,2>(w_reg_3180.read());
}

void ShuffleNetV2::thread_tmp_218_cast3_fu_6164_p1() {
    tmp_218_cast3_fu_6164_p1 = esl_zext<14,2>(w_reg_3180.read());
}

void ShuffleNetV2::thread_tmp_218_cast4_fu_6168_p1() {
    tmp_218_cast4_fu_6168_p1 = esl_zext<36,2>(w_reg_3180.read());
}

void ShuffleNetV2::thread_tmp_218_cast5_fu_6172_p1() {
    tmp_218_cast5_fu_6172_p1 = esl_zext<13,2>(w_reg_3180.read());
}

void ShuffleNetV2::thread_tmp_218_cast6_fu_6176_p1() {
    tmp_218_cast6_fu_6176_p1 = esl_zext<11,2>(w_reg_3180.read());
}

void ShuffleNetV2::thread_tmp_218_cast7_fu_6180_p1() {
    tmp_218_cast7_fu_6180_p1 = esl_zext<10,2>(w_reg_3180.read());
}

void ShuffleNetV2::thread_tmp_218_cast_fu_6184_p1() {
    tmp_218_cast_fu_6184_p1 = esl_zext<9,2>(w_reg_3180.read());
}

void ShuffleNetV2::thread_tmp_218_fu_3646_p3() {
    tmp_218_fu_3646_p3 = esl_concat<5,3>(co_reg_3124.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_219_fu_4378_p2() {
    tmp_219_fu_4378_p2 = (!tmp_176_reg_8984.read().is_01() || !ci_cast_reg_8994.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_176_reg_8984.read()) + sc_biguint<8>(ci_cast_reg_8994.read()));
}

void ShuffleNetV2::thread_tmp_220_cast_fu_4382_p1() {
    tmp_220_cast_fu_4382_p1 = esl_sext<15,8>(tmp_219_fu_4378_p2.read());
}

void ShuffleNetV2::thread_tmp_220_fu_3658_p2() {
    tmp_220_fu_3658_p2 = (!p_shl35_cast_fu_3642_p1.read().is_01() || !p_shl36_cast_fu_3654_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl35_cast_fu_3642_p1.read()) - sc_biguint<11>(p_shl36_cast_fu_3654_p1.read()));
}

void ShuffleNetV2::thread_tmp_221_fu_4280_p2() {
    tmp_221_fu_4280_p2 = (!p_shl6_cast_fu_4264_p1.read().is_01() || !p_shl7_cast_fu_4276_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl6_cast_fu_4264_p1.read()) - sc_biguint<8>(p_shl7_cast_fu_4276_p1.read()));
}

void ShuffleNetV2::thread_tmp_222_fu_4296_p2() {
    tmp_222_fu_4296_p2 = (!tmp1_fu_4290_p2.read().is_01() || !co_cast143_cast1_reg_8903.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp1_fu_4290_p2.read()) + sc_biguint<9>(co_cast143_cast1_reg_8903.read()));
}

void ShuffleNetV2::thread_tmp_223_fu_4325_p2() {
    tmp_223_fu_4325_p2 = (!p_shl8_cast_fu_4309_p1.read().is_01() || !p_shl9_cast_fu_4321_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl8_cast_fu_4309_p1.read()) - sc_biguint<7>(p_shl9_cast_fu_4321_p1.read()));
}

void ShuffleNetV2::thread_tmp_224_fu_4331_p2() {
    tmp_224_fu_4331_p2 = (!tmp_223_fu_4325_p2.read().is_01() || !tmp_186_cast_reg_8979.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_223_fu_4325_p2.read()) + sc_biguint<7>(tmp_186_cast_reg_8979.read()));
}

void ShuffleNetV2::thread_tmp_225_fu_4373_p2() {
    tmp_225_fu_4373_p2 = (!tmp2_fu_4367_p2.read().is_01() || !co_cast143_cast1_reg_8903.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp2_fu_4367_p2.read()) + sc_biguint<9>(co_cast143_cast1_reg_8903.read()));
}

void ShuffleNetV2::thread_tmp_226_fu_4482_p2() {
    tmp_226_fu_4482_p2 = (!tmp3_cast_fu_4478_p1.read().is_01() || !co_cast143_cast_reg_8910.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp3_cast_fu_4478_p1.read()) + sc_biguint<10>(co_cast143_cast_reg_8910.read()));
}

void ShuffleNetV2::thread_tmp_227_fu_4493_p2() {
    tmp_227_fu_4493_p2 = (!tmp4_fu_4487_p2.read().is_01() || !co_cast143_cast_reg_8910.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp4_fu_4487_p2.read()) + sc_biguint<10>(co_cast143_cast_reg_8910.read()));
}

void ShuffleNetV2::thread_tmp_228_fu_4624_p2() {
    tmp_228_fu_4624_p2 = (!tmp5_fu_4619_p2.read().is_01() || !co_cast143_cast_reg_8910.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp5_fu_4619_p2.read()) + sc_biguint<10>(co_cast143_cast_reg_8910.read()));
}

void ShuffleNetV2::thread_tmp_229_fu_4634_p2() {
    tmp_229_fu_4634_p2 = (!tmp6_fu_4629_p2.read().is_01() || !co_cast143_cast_reg_8910.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp6_fu_4629_p2.read()) + sc_biguint<10>(co_cast143_cast_reg_8910.read()));
}

void ShuffleNetV2::thread_tmp_230_fu_4740_p2() {
    tmp_230_fu_4740_p2 = (!tmp7_fu_4735_p2.read().is_01() || !co_cast143_cast_reg_8910.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp7_fu_4735_p2.read()) + sc_biguint<10>(co_cast143_cast_reg_8910.read()));
}

void ShuffleNetV2::thread_tmp_231_cast_fu_8765_p1() {
    tmp_231_cast_fu_8765_p1 = esl_sext<12,11>(tmp_231_fu_8759_p2.read());
}

void ShuffleNetV2::thread_tmp_231_fu_8759_p2() {
    tmp_231_fu_8759_p2 = (!i7_cast92_cast_fu_8743_p1.read().is_01() || !ap_const_lv11_418.is_01())? sc_lv<11>(): (sc_biguint<11>(i7_cast92_cast_fu_8743_p1.read()) + sc_bigint<11>(ap_const_lv11_418));
}

void ShuffleNetV2::thread_tmp_232_fu_8769_p1() {
    tmp_232_fu_8769_p1 = esl_zext<64,12>(tmp_231_cast_fu_8765_p1.read());
}

void ShuffleNetV2::thread_tmp_233_fu_8774_p1() {
    tmp_233_fu_8774_p1 = esl_zext<64,10>(i7_reg_3259.read());
}

void ShuffleNetV2::thread_tmp_234_fu_4503_p2() {
    tmp_234_fu_4503_p2 = (!tmp8_fu_4498_p2.read().is_01() || !co_cast143_cast1_reg_8903.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp8_fu_4498_p2.read()) + sc_biguint<9>(co_cast143_cast1_reg_8903.read()));
}

void ShuffleNetV2::thread_tmp_235_cast_fu_8801_p1() {
    tmp_235_cast_fu_8801_p1 = esl_sext<12,10>(tmp_235_fu_8795_p2.read());
}

void ShuffleNetV2::thread_tmp_235_fu_8795_p2() {
    tmp_235_fu_8795_p2 = (!i8_cast90_cast_fu_8779_p1.read().is_01() || !ap_const_lv10_218.is_01())? sc_lv<10>(): (sc_biguint<10>(i8_cast90_cast_fu_8779_p1.read()) + sc_bigint<10>(ap_const_lv10_218));
}

void ShuffleNetV2::thread_tmp_236_fu_8805_p1() {
    tmp_236_fu_8805_p1 = esl_zext<64,12>(tmp_235_cast_fu_8801_p1.read());
}

void ShuffleNetV2::thread_tmp_237_fu_8810_p1() {
    tmp_237_fu_8810_p1 = esl_zext<64,4>(i8_reg_3271.read());
}

void ShuffleNetV2::thread_tmp_238_cast1_fu_8177_p1() {
    tmp_238_cast1_fu_8177_p1 = esl_sext<11,7>(tmp_238_reg_10303.read());
}

void ShuffleNetV2::thread_tmp_238_cast96_cast1_fu_7950_p1() {
    tmp_238_cast96_cast1_fu_7950_p1 = esl_sext<8,7>(tmp_238_reg_10303.read());
}

void ShuffleNetV2::thread_tmp_238_cast96_cast_fu_7931_p1() {
    tmp_238_cast96_cast_fu_7931_p1 = esl_sext<9,7>(tmp_238_reg_10303.read());
}

void ShuffleNetV2::thread_tmp_238_cast97_cast_fu_7993_p1() {
    tmp_238_cast97_cast_fu_7993_p1 = esl_sext<10,7>(tmp_238_reg_10303.read());
}

void ShuffleNetV2::thread_tmp_238_fu_7925_p2() {
    tmp_238_fu_7925_p2 = (!p_shl4_cast_fu_7909_p1.read().is_01() || !p_shl5_cast_fu_7921_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl4_cast_fu_7909_p1.read()) - sc_biguint<7>(p_shl5_cast_fu_7921_p1.read()));
}

void ShuffleNetV2::thread_tmp_239_fu_4846_p2() {
    tmp_239_fu_4846_p2 = (!tmp9_fu_4840_p2.read().is_01() || !co_cast144_cast_reg_8891.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp9_fu_4840_p2.read()) + sc_biguint<11>(co_cast144_cast_reg_8891.read()));
}

void ShuffleNetV2::thread_tmp_240_fu_7940_p2() {
    tmp_240_fu_7940_p2 = (!i5_cast105_cast1_reg_10146.read().is_01() || !tmp44_fu_7934_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(i5_cast105_cast1_reg_10146.read()) + sc_biguint<9>(tmp44_fu_7934_p2.read()));
}

void ShuffleNetV2::thread_tmp_241_fu_7945_p1() {
    tmp_241_fu_7945_p1 = esl_zext<64,9>(tmp_240_fu_7940_p2.read());
}

void ShuffleNetV2::thread_tmp_242_cast_fu_8000_p1() {
    tmp_242_cast_fu_8000_p1 = esl_sext<32,7>(tmp_242_fu_7996_p2.read());
}

void ShuffleNetV2::thread_tmp_242_fu_7996_p2() {
    tmp_242_fu_7996_p2 = (!tmp_238_reg_10303.read().is_01() || !i5_cast102_cast_reg_10185.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_238_reg_10303.read()) + sc_biguint<7>(i5_cast102_cast_reg_10185.read()));
}

void ShuffleNetV2::thread_tmp_243_fu_8004_p1() {
    tmp_243_fu_8004_p1 = esl_zext<64,32>(tmp_242_cast_fu_8000_p1.read());
}

void ShuffleNetV2::thread_tmp_244_fu_4857_p2() {
    tmp_244_fu_4857_p2 = (!tmp10_fu_4851_p2.read().is_01() || !co_cast144_cast_reg_8891.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp10_fu_4851_p2.read()) + sc_biguint<11>(co_cast144_cast_reg_8891.read()));
}

void ShuffleNetV2::thread_tmp_245_cast_fu_7964_p1() {
    tmp_245_cast_fu_7964_p1 = esl_sext<9,8>(tmp_245_fu_7959_p2.read());
}

void ShuffleNetV2::thread_tmp_245_fu_7959_p2() {
    tmp_245_fu_7959_p2 = (!i5_cast104_cast1_reg_10174.read().is_01() || !tmp45_fu_7953_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(i5_cast104_cast1_reg_10174.read()) + sc_biguint<8>(tmp45_fu_7953_p2.read()));
}

void ShuffleNetV2::thread_tmp_246_fu_7968_p1() {
    tmp_246_fu_7968_p1 = esl_zext<64,9>(tmp_245_cast_fu_7964_p1.read());
}

void ShuffleNetV2::thread_tmp_247_fu_4951_p2() {
    tmp_247_fu_4951_p2 = (!tmp11_fu_4946_p2.read().is_01() || !co_cast144_cast_reg_8891.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp11_fu_4946_p2.read()) + sc_biguint<11>(co_cast144_cast_reg_8891.read()));
}

void ShuffleNetV2::thread_tmp_248_cast_fu_7984_p1() {
    tmp_248_cast_fu_7984_p1 = esl_sext<9,8>(tmp_248_fu_7979_p2.read());
}

void ShuffleNetV2::thread_tmp_248_fu_7979_p2() {
    tmp_248_fu_7979_p2 = (!i5_cast104_cast1_reg_10174.read().is_01() || !tmp46_fu_7973_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(i5_cast104_cast1_reg_10174.read()) + sc_biguint<8>(tmp46_fu_7973_p2.read()));
}

void ShuffleNetV2::thread_tmp_249_fu_7988_p1() {
    tmp_249_fu_7988_p1 = esl_zext<64,9>(tmp_248_cast_fu_7984_p1.read());
}

void ShuffleNetV2::thread_tmp_250_fu_4961_p2() {
    tmp_250_fu_4961_p2 = (!tmp12_fu_4956_p2.read().is_01() || !co_cast144_cast_reg_8891.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp12_fu_4956_p2.read()) + sc_biguint<11>(co_cast144_cast_reg_8891.read()));
}

void ShuffleNetV2::thread_tmp_251_fu_8017_p2() {
    tmp_251_fu_8017_p2 = (!i5_cast105_cast_reg_10159.read().is_01() || !tmp47_fu_8011_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(i5_cast105_cast_reg_10159.read()) + sc_biguint<10>(tmp47_fu_8011_p2.read()));
}

void ShuffleNetV2::thread_tmp_252_fu_8022_p1() {
    tmp_252_fu_8022_p1 = esl_zext<64,10>(tmp_251_fu_8017_p2.read());
}

void ShuffleNetV2::thread_tmp_253_fu_5092_p2() {
    tmp_253_fu_5092_p2 = (!tmp13_fu_5087_p2.read().is_01() || !co_cast144_cast_reg_8891.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp13_fu_5087_p2.read()) + sc_biguint<11>(co_cast144_cast_reg_8891.read()));
}

void ShuffleNetV2::thread_tmp_254_fu_8033_p2() {
    tmp_254_fu_8033_p2 = (!i5_cast105_cast_reg_10159.read().is_01() || !tmp48_fu_8027_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(i5_cast105_cast_reg_10159.read()) + sc_biguint<10>(tmp48_fu_8027_p2.read()));
}

void ShuffleNetV2::thread_tmp_255_fu_8038_p1() {
    tmp_255_fu_8038_p1 = esl_zext<64,10>(tmp_254_fu_8033_p2.read());
}

void ShuffleNetV2::thread_tmp_256_fu_5102_p2() {
    tmp_256_fu_5102_p2 = (!tmp14_fu_5097_p2.read().is_01() || !co_cast144_cast_reg_8891.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp14_fu_5097_p2.read()) + sc_biguint<11>(co_cast144_cast_reg_8891.read()));
}

void ShuffleNetV2::thread_tmp_257_fu_8058_p2() {
    tmp_257_fu_8058_p2 = (!i5_cast105_cast_reg_10159.read().is_01() || !tmp49_fu_8053_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(i5_cast105_cast_reg_10159.read()) + sc_biguint<10>(tmp49_fu_8053_p2.read()));
}

void ShuffleNetV2::thread_tmp_258_fu_8063_p1() {
    tmp_258_fu_8063_p1 = esl_zext<64,10>(tmp_257_fu_8058_p2.read());
}

void ShuffleNetV2::thread_tmp_259_fu_5112_p2() {
    tmp_259_fu_5112_p2 = (!tmp15_fu_5107_p2.read().is_01() || !co_cast144_cast_reg_8891.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp15_fu_5107_p2.read()) + sc_biguint<11>(co_cast144_cast_reg_8891.read()));
}

void ShuffleNetV2::thread_tmp_260_fu_8073_p2() {
    tmp_260_fu_8073_p2 = (!i5_cast105_cast_reg_10159.read().is_01() || !tmp50_fu_8068_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(i5_cast105_cast_reg_10159.read()) + sc_biguint<10>(tmp50_fu_8068_p2.read()));
}

void ShuffleNetV2::thread_tmp_261_fu_8078_p1() {
    tmp_261_fu_8078_p1 = esl_zext<64,10>(tmp_260_fu_8073_p2.read());
}

void ShuffleNetV2::thread_tmp_262_fu_5206_p2() {
    tmp_262_fu_5206_p2 = (!tmp16_fu_5201_p2.read().is_01() || !co_cast143_cast_reg_8910.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp16_fu_5201_p2.read()) + sc_biguint<10>(co_cast143_cast_reg_8910.read()));
}

void ShuffleNetV2::thread_tmp_263_fu_8088_p2() {
    tmp_263_fu_8088_p2 = (!i5_cast105_cast_reg_10159.read().is_01() || !tmp51_fu_8083_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(i5_cast105_cast_reg_10159.read()) + sc_biguint<10>(tmp51_fu_8083_p2.read()));
}

void ShuffleNetV2::thread_tmp_264_fu_8093_p1() {
    tmp_264_fu_8093_p1 = esl_zext<64,10>(tmp_263_fu_8088_p2.read());
}

void ShuffleNetV2::thread_tmp_265_fu_5216_p2() {
    tmp_265_fu_5216_p2 = (!tmp17_fu_5211_p2.read().is_01() || !co_cast143_cast_reg_8910.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp17_fu_5211_p2.read()) + sc_biguint<10>(co_cast143_cast_reg_8910.read()));
}

void ShuffleNetV2::thread_tmp_266_fu_8103_p2() {
    tmp_266_fu_8103_p2 = (!i5_cast105_cast_reg_10159.read().is_01() || !tmp52_fu_8098_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(i5_cast105_cast_reg_10159.read()) + sc_biguint<10>(tmp52_fu_8098_p2.read()));
}

void ShuffleNetV2::thread_tmp_267_fu_8108_p1() {
    tmp_267_fu_8108_p1 = esl_zext<64,10>(tmp_266_fu_8103_p2.read());
}

void ShuffleNetV2::thread_tmp_268_fu_4646_p2() {
    tmp_268_fu_4646_p2 = (!tmp19_cast_fu_4642_p1.read().is_01() || !co_cast2_reg_8882.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp19_cast_fu_4642_p1.read()) + sc_biguint<12>(co_cast2_reg_8882.read()));
}

void ShuffleNetV2::thread_tmp_269_cast_fu_8123_p1() {
    tmp_269_cast_fu_8123_p1 = esl_sext<10,9>(tmp_269_fu_8118_p2.read());
}

void ShuffleNetV2::thread_tmp_269_fu_8118_p2() {
    tmp_269_fu_8118_p2 = (!i5_cast105_cast1_reg_10146.read().is_01() || !tmp53_fu_8113_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(i5_cast105_cast1_reg_10146.read()) + sc_biguint<9>(tmp53_fu_8113_p2.read()));
}

void ShuffleNetV2::thread_tmp_270_fu_8127_p1() {
    tmp_270_fu_8127_p1 = esl_zext<64,10>(tmp_269_cast_fu_8123_p1.read());
}

void ShuffleNetV2::thread_tmp_271_fu_8137_p2() {
    tmp_271_fu_8137_p2 = (!i5_cast105_cast1_reg_10146.read().is_01() || !tmp54_fu_8132_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(i5_cast105_cast1_reg_10146.read()) + sc_biguint<9>(tmp54_fu_8132_p2.read()));
}

void ShuffleNetV2::thread_tmp_272_cast_fu_8142_p1() {
    tmp_272_cast_fu_8142_p1 = esl_sext<10,9>(tmp_271_fu_8137_p2.read());
}

void ShuffleNetV2::thread_tmp_272_fu_8146_p1() {
    tmp_272_fu_8146_p1 = esl_zext<64,10>(tmp_272_cast_fu_8142_p1.read());
}

void ShuffleNetV2::thread_tmp_273_fu_8156_p2() {
    tmp_273_fu_8156_p2 = (!i5_cast105_cast1_reg_10146.read().is_01() || !tmp55_fu_8151_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(i5_cast105_cast1_reg_10146.read()) + sc_biguint<9>(tmp55_fu_8151_p2.read()));
}

void ShuffleNetV2::thread_tmp_274_fu_8164_p1() {
    tmp_274_fu_8164_p1 = esl_zext<64,10>(tmp_275_cast_fu_8161_p1.read());
}

void ShuffleNetV2::thread_tmp_275_cast_fu_8161_p1() {
    tmp_275_cast_fu_8161_p1 = esl_sext<10,9>(tmp_273_reg_10432.read());
}

void ShuffleNetV2::thread_tmp_275_fu_8048_p2() {
    tmp_275_fu_8048_p2 = (!i5_cast104_cast1_reg_10174.read().is_01() || !tmp56_fu_8043_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(i5_cast104_cast1_reg_10174.read()) + sc_biguint<8>(tmp56_fu_8043_p2.read()));
}

void ShuffleNetV2::thread_tmp_276_fu_8172_p1() {
    tmp_276_fu_8172_p1 = esl_zext<64,10>(tmp_278_cast_fu_8169_p1.read());
}

void ShuffleNetV2::thread_tmp_277_fu_8193_p2() {
    tmp_277_fu_8193_p2 = (!i5_cast2_reg_10130.read().is_01() || !tmp57_cast_fu_8189_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(i5_cast2_reg_10130.read()) + sc_biguint<11>(tmp57_cast_fu_8189_p1.read()));
}

void ShuffleNetV2::thread_tmp_278_cast_fu_8169_p1() {
    tmp_278_cast_fu_8169_p1 = esl_sext<10,8>(tmp_275_reg_10397.read());
}

void ShuffleNetV2::thread_tmp_278_fu_8198_p1() {
    tmp_278_fu_8198_p1 = esl_zext<64,11>(tmp_277_fu_8193_p2.read());
}

void ShuffleNetV2::thread_tmp_279_fu_8209_p2() {
    tmp_279_fu_8209_p2 = (!i5_cast2_reg_10130.read().is_01() || !tmp58_fu_8203_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(i5_cast2_reg_10130.read()) + sc_biguint<11>(tmp58_fu_8203_p2.read()));
}

void ShuffleNetV2::thread_tmp_280_fu_8214_p1() {
    tmp_280_fu_8214_p1 = esl_zext<64,11>(tmp_279_fu_8209_p2.read());
}

void ShuffleNetV2::thread_tmp_281_fu_8224_p2() {
    tmp_281_fu_8224_p2 = (!i5_cast2_reg_10130.read().is_01() || !tmp59_fu_8219_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(i5_cast2_reg_10130.read()) + sc_biguint<11>(tmp59_fu_8219_p2.read()));
}

void ShuffleNetV2::thread_tmp_282_fu_8229_p1() {
    tmp_282_fu_8229_p1 = esl_zext<64,11>(tmp_281_fu_8224_p2.read());
}

void ShuffleNetV2::thread_tmp_283_fu_8239_p2() {
    tmp_283_fu_8239_p2 = (!i5_cast2_reg_10130.read().is_01() || !tmp60_fu_8234_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(i5_cast2_reg_10130.read()) + sc_biguint<11>(tmp60_fu_8234_p2.read()));
}

void ShuffleNetV2::thread_tmp_284_fu_8244_p1() {
    tmp_284_fu_8244_p1 = esl_zext<64,11>(tmp_283_fu_8239_p2.read());
}

void ShuffleNetV2::thread_tmp_285_fu_8254_p2() {
    tmp_285_fu_8254_p2 = (!i5_cast2_reg_10130.read().is_01() || !tmp61_fu_8249_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(i5_cast2_reg_10130.read()) + sc_biguint<11>(tmp61_fu_8249_p2.read()));
}

void ShuffleNetV2::thread_tmp_286_fu_8259_p1() {
    tmp_286_fu_8259_p1 = esl_zext<64,11>(tmp_285_fu_8254_p2.read());
}

void ShuffleNetV2::thread_tmp_287_fu_8269_p2() {
    tmp_287_fu_8269_p2 = (!i5_cast2_reg_10130.read().is_01() || !tmp62_fu_8264_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(i5_cast2_reg_10130.read()) + sc_biguint<11>(tmp62_fu_8264_p2.read()));
}

void ShuffleNetV2::thread_tmp_288_fu_8274_p1() {
    tmp_288_fu_8274_p1 = esl_zext<64,11>(tmp_287_fu_8269_p2.read());
}

void ShuffleNetV2::thread_tmp_289_fu_8284_p2() {
    tmp_289_fu_8284_p2 = (!i5_cast2_reg_10130.read().is_01() || !tmp63_fu_8279_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(i5_cast2_reg_10130.read()) + sc_biguint<11>(tmp63_fu_8279_p2.read()));
}

void ShuffleNetV2::thread_tmp_290_fu_8289_p1() {
    tmp_290_fu_8289_p1 = esl_zext<64,11>(tmp_289_fu_8284_p2.read());
}

void ShuffleNetV2::thread_tmp_291_fu_8299_p2() {
    tmp_291_fu_8299_p2 = (!i5_cast2_reg_10130.read().is_01() || !tmp64_fu_8294_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(i5_cast2_reg_10130.read()) + sc_biguint<11>(tmp64_fu_8294_p2.read()));
}

void ShuffleNetV2::thread_tmp_292_fu_8304_p1() {
    tmp_292_fu_8304_p1 = esl_zext<64,11>(tmp_291_fu_8299_p2.read());
}

void ShuffleNetV2::thread_tmp_293_fu_8314_p2() {
    tmp_293_fu_8314_p2 = (!i5_cast2_reg_10130.read().is_01() || !tmp65_fu_8309_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(i5_cast2_reg_10130.read()) + sc_biguint<11>(tmp65_fu_8309_p2.read()));
}

void ShuffleNetV2::thread_tmp_294_fu_8319_p1() {
    tmp_294_fu_8319_p1 = esl_zext<64,11>(tmp_293_fu_8314_p2.read());
}

void ShuffleNetV2::thread_tmp_295_fu_8329_p2() {
    tmp_295_fu_8329_p2 = (!i5_cast2_reg_10130.read().is_01() || !tmp66_fu_8324_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(i5_cast2_reg_10130.read()) + sc_biguint<11>(tmp66_fu_8324_p2.read()));
}

void ShuffleNetV2::thread_tmp_296_fu_8334_p1() {
    tmp_296_fu_8334_p1 = esl_zext<64,11>(tmp_295_fu_8329_p2.read());
}

void ShuffleNetV2::thread_tmp_297_fu_8344_p2() {
    tmp_297_fu_8344_p2 = (!i5_cast2_reg_10130.read().is_01() || !tmp67_fu_8339_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(i5_cast2_reg_10130.read()) + sc_biguint<11>(tmp67_fu_8339_p2.read()));
}

void ShuffleNetV2::thread_tmp_298_fu_8349_p1() {
    tmp_298_fu_8349_p1 = esl_zext<64,11>(tmp_297_fu_8344_p2.read());
}

void ShuffleNetV2::thread_tmp_299_fu_8359_p2() {
    tmp_299_fu_8359_p2 = (!i5_cast2_reg_10130.read().is_01() || !tmp68_fu_8354_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(i5_cast2_reg_10130.read()) + sc_biguint<11>(tmp68_fu_8354_p2.read()));
}

void ShuffleNetV2::thread_tmp_300_fu_8364_p1() {
    tmp_300_fu_8364_p1 = esl_zext<64,11>(tmp_299_fu_8359_p2.read());
}

void ShuffleNetV2::thread_tmp_301_fu_8374_p2() {
    tmp_301_fu_8374_p2 = (!i5_cast105_cast_reg_10159.read().is_01() || !tmp69_fu_8369_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(i5_cast105_cast_reg_10159.read()) + sc_biguint<10>(tmp69_fu_8369_p2.read()));
}

void ShuffleNetV2::thread_tmp_302_fu_8383_p1() {
    tmp_302_fu_8383_p1 = esl_zext<64,11>(tmp_317_cast_fu_8379_p1.read());
}

void ShuffleNetV2::thread_tmp_303_fu_8393_p2() {
    tmp_303_fu_8393_p2 = (!i5_cast105_cast_reg_10159.read().is_01() || !tmp70_fu_8388_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(i5_cast105_cast_reg_10159.read()) + sc_biguint<10>(tmp70_fu_8388_p2.read()));
}

void ShuffleNetV2::thread_tmp_304_fu_8402_p1() {
    tmp_304_fu_8402_p1 = esl_zext<64,11>(tmp_320_cast_fu_8398_p1.read());
}

void ShuffleNetV2::thread_tmp_305_fu_8412_p2() {
    tmp_305_fu_8412_p2 = (!i5_cast105_cast_reg_10159.read().is_01() || !tmp71_fu_8407_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(i5_cast105_cast_reg_10159.read()) + sc_biguint<10>(tmp71_fu_8407_p2.read()));
}

void ShuffleNetV2::thread_tmp_306_fu_8421_p1() {
    tmp_306_fu_8421_p1 = esl_zext<64,11>(tmp_323_cast_fu_8417_p1.read());
}

void ShuffleNetV2::thread_tmp_307_fu_8431_p2() {
    tmp_307_fu_8431_p2 = (!i5_cast105_cast_reg_10159.read().is_01() || !tmp72_fu_8426_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(i5_cast105_cast_reg_10159.read()) + sc_biguint<10>(tmp72_fu_8426_p2.read()));
}

void ShuffleNetV2::thread_tmp_308_fu_8440_p1() {
    tmp_308_fu_8440_p1 = esl_zext<64,11>(tmp_326_cast_fu_8436_p1.read());
}

void ShuffleNetV2::thread_tmp_309_cast1_fu_6386_p1() {
    tmp_309_cast1_fu_6386_p1 = esl_zext<10,2>(h_reg_3191.read());
}

void ShuffleNetV2::thread_tmp_309_cast2_fu_6390_p1() {
    tmp_309_cast2_fu_6390_p1 = esl_zext<11,2>(h_reg_3191.read());
}

void ShuffleNetV2::thread_tmp_309_cast_fu_6335_p1() {
    tmp_309_cast_fu_6335_p1 = esl_zext<15,2>(h_reg_3191.read());
}

void ShuffleNetV2::thread_tmp_309_fu_3674_p3() {
    tmp_309_fu_3674_p3 = esl_concat<6,5>(tmp_s_fu_3668_p2.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_310_fu_5422_p2() {
    tmp_310_fu_5422_p2 = (!p_shl12_cast_fu_5402_p1.read().is_01() || !p_shl13_cast_fu_5418_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl12_cast_fu_5402_p1.read()) - sc_biguint<10>(p_shl13_cast_fu_5418_p1.read()));
}

void ShuffleNetV2::thread_tmp_311_fu_5438_p2() {
    tmp_311_fu_5438_p2 = (!tmp20_fu_5432_p2.read().is_01() || !co_cast2_reg_8882.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp20_fu_5432_p2.read()) + sc_biguint<12>(co_cast2_reg_8882.read()));
}

void ShuffleNetV2::thread_tmp_312_fu_5453_p2() {
    tmp_312_fu_5453_p2 = (!p_shl13_cast1_fu_5414_p1.read().is_01() || !p_shl14_cast_fu_5449_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl13_cast1_fu_5414_p1.read()) - sc_biguint<8>(p_shl14_cast_fu_5449_p1.read()));
}

void ShuffleNetV2::thread_tmp_313_fu_5459_p2() {
    tmp_313_fu_5459_p2 = (!tmp_312_fu_5453_p2.read().is_01() || !tmp_189_cast_reg_8989.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_312_fu_5453_p2.read()) + sc_biguint<8>(tmp_189_cast_reg_8989.read()));
}

void ShuffleNetV2::thread_tmp_314_fu_5501_p2() {
    tmp_314_fu_5501_p2 = (!tmp21_fu_5495_p2.read().is_01() || !co_cast2_reg_8882.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp21_fu_5495_p2.read()) + sc_biguint<12>(co_cast2_reg_8882.read()));
}

void ShuffleNetV2::thread_tmp_315_fu_5595_p2() {
    tmp_315_fu_5595_p2 = (!tmp22_fu_5590_p2.read().is_01() || !co_cast2_reg_8882.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp22_fu_5590_p2.read()) + sc_biguint<12>(co_cast2_reg_8882.read()));
}

void ShuffleNetV2::thread_tmp_316_fu_5605_p2() {
    tmp_316_fu_5605_p2 = (!tmp23_fu_5600_p2.read().is_01() || !co_cast2_reg_8882.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp23_fu_5600_p2.read()) + sc_biguint<12>(co_cast2_reg_8882.read()));
}

void ShuffleNetV2::thread_tmp_317_cast_fu_8379_p1() {
    tmp_317_cast_fu_8379_p1 = esl_sext<11,10>(tmp_301_fu_8374_p2.read());
}

void ShuffleNetV2::thread_tmp_317_fu_5711_p2() {
    tmp_317_fu_5711_p2 = (!tmp24_fu_5705_p2.read().is_01() || !co_cast144_cast_reg_8891.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp24_fu_5705_p2.read()) + sc_biguint<11>(co_cast144_cast_reg_8891.read()));
}

void ShuffleNetV2::thread_tmp_318_fu_5722_p2() {
    tmp_318_fu_5722_p2 = (!tmp25_fu_5716_p2.read().is_01() || !co_cast1_reg_8874.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp25_fu_5716_p2.read()) + sc_biguint<13>(co_cast1_reg_8874.read()));
}

void ShuffleNetV2::thread_tmp_319_fu_5820_p2() {
    tmp_319_fu_5820_p2 = (!tmp26_fu_5815_p2.read().is_01() || !co_cast1_reg_8874.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp26_fu_5815_p2.read()) + sc_biguint<13>(co_cast1_reg_8874.read()));
}

void ShuffleNetV2::thread_tmp_320_cast_fu_8398_p1() {
    tmp_320_cast_fu_8398_p1 = esl_sext<11,10>(tmp_303_fu_8393_p2.read());
}

void ShuffleNetV2::thread_tmp_320_fu_5830_p2() {
    tmp_320_fu_5830_p2 = (!tmp27_fu_5825_p2.read().is_01() || !co_cast1_reg_8874.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp27_fu_5825_p2.read()) + sc_biguint<13>(co_cast1_reg_8874.read()));
}

void ShuffleNetV2::thread_tmp_321_fu_5840_p2() {
    tmp_321_fu_5840_p2 = (!tmp28_fu_5835_p2.read().is_01() || !co_cast1_reg_8874.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp28_fu_5835_p2.read()) + sc_biguint<13>(co_cast1_reg_8874.read()));
}

void ShuffleNetV2::thread_tmp_322_fu_8485_p2() {
    tmp_322_fu_8485_p2 = (!p_shl10_cast_fu_8469_p1.read().is_01() || !p_shl11_cast_fu_8481_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl10_cast_fu_8469_p1.read()) - sc_biguint<8>(p_shl11_cast_fu_8481_p1.read()));
}

void ShuffleNetV2::thread_tmp_323_cast_fu_8417_p1() {
    tmp_323_cast_fu_8417_p1 = esl_sext<11,10>(tmp_305_fu_8412_p2.read());
}

void ShuffleNetV2::thread_tmp_323_fu_8503_p2() {
    tmp_323_fu_8503_p2 = (!i5_cast105_cast_reg_10159.read().is_01() || !tmp73_fu_8497_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(i5_cast105_cast_reg_10159.read()) + sc_biguint<10>(tmp73_fu_8497_p2.read()));
}

void ShuffleNetV2::thread_tmp_324_fu_8512_p1() {
    tmp_324_fu_8512_p1 = esl_zext<64,11>(tmp_393_cast_fu_8508_p1.read());
}

void ShuffleNetV2::thread_tmp_325_fu_8540_p2() {
    tmp_325_fu_8540_p2 = (!tmp_322_reg_10549.read().is_01() || !i5_cast104_cast1_reg_10174.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_322_reg_10549.read()) + sc_biguint<8>(i5_cast104_cast1_reg_10174.read()));
}

void ShuffleNetV2::thread_tmp_326_cast_fu_8436_p1() {
    tmp_326_cast_fu_8436_p1 = esl_sext<11,10>(tmp_307_fu_8431_p2.read());
}

void ShuffleNetV2::thread_tmp_326_fu_8548_p1() {
    tmp_326_fu_8548_p1 = esl_zext<64,32>(tmp_395_cast_fu_8544_p1.read());
}

void ShuffleNetV2::thread_tmp_327_fu_8523_p2() {
    tmp_327_fu_8523_p2 = (!i5_cast105_cast1_reg_10146.read().is_01() || !tmp74_fu_8517_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(i5_cast105_cast1_reg_10146.read()) + sc_biguint<9>(tmp74_fu_8517_p2.read()));
}

void ShuffleNetV2::thread_tmp_328_fu_8532_p1() {
    tmp_328_fu_8532_p1 = esl_zext<64,11>(tmp_398_cast_fu_8528_p1.read());
}

void ShuffleNetV2::thread_tmp_329_fu_8567_p2() {
    tmp_329_fu_8567_p2 = (!i5_cast1_reg_10114.read().is_01() || !tmp75_cast_fu_8563_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(i5_cast1_reg_10114.read()) + sc_biguint<12>(tmp75_cast_fu_8563_p1.read()));
}

void ShuffleNetV2::thread_tmp_330_cast127_cast_1_fu_4286_p1() {
    tmp_330_cast127_cast_1_fu_4286_p1 = esl_sext<9,8>(tmp_221_fu_4280_p2.read());
}

void ShuffleNetV2::thread_tmp_330_cast127_cast_fu_4386_p1() {
    tmp_330_cast127_cast_fu_4386_p1 = esl_sext<10,8>(tmp_221_reg_9147.read());
}

void ShuffleNetV2::thread_tmp_330_cast1_fu_4829_p1() {
    tmp_330_cast1_fu_4829_p1 = esl_sext<11,8>(tmp_221_reg_9147.read());
}

void ShuffleNetV2::thread_tmp_330_fu_8572_p1() {
    tmp_330_fu_8572_p1 = esl_zext<64,12>(tmp_329_fu_8567_p2.read());
}

void ShuffleNetV2::thread_tmp_331_fu_8583_p2() {
    tmp_331_fu_8583_p2 = (!i5_cast1_reg_10114.read().is_01() || !tmp76_fu_8577_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(i5_cast1_reg_10114.read()) + sc_biguint<12>(tmp76_fu_8577_p2.read()));
}

void ShuffleNetV2::thread_tmp_332_fu_8588_p1() {
    tmp_332_fu_8588_p1 = esl_zext<64,12>(tmp_331_fu_8583_p2.read());
}

void ShuffleNetV2::thread_tmp_333_fu_8598_p2() {
    tmp_333_fu_8598_p2 = (!i5_cast1_reg_10114.read().is_01() || !tmp77_fu_8593_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(i5_cast1_reg_10114.read()) + sc_biguint<12>(tmp77_fu_8593_p2.read()));
}

void ShuffleNetV2::thread_tmp_334_fu_8603_p1() {
    tmp_334_fu_8603_p1 = esl_zext<64,12>(tmp_333_fu_8598_p2.read());
}

void ShuffleNetV2::thread_tmp_335_fu_8613_p2() {
    tmp_335_fu_8613_p2 = (!i5_cast1_reg_10114.read().is_01() || !tmp78_fu_8608_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(i5_cast1_reg_10114.read()) + sc_biguint<12>(tmp78_fu_8608_p2.read()));
}

void ShuffleNetV2::thread_tmp_336_fu_8618_p1() {
    tmp_336_fu_8618_p1 = esl_zext<64,12>(tmp_335_fu_8613_p2.read());
}

void ShuffleNetV2::thread_tmp_337_fu_8628_p2() {
    tmp_337_fu_8628_p2 = (!i5_cast1_reg_10114.read().is_01() || !tmp79_fu_8623_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(i5_cast1_reg_10114.read()) + sc_biguint<12>(tmp79_fu_8623_p2.read()));
}

void ShuffleNetV2::thread_tmp_338_fu_8633_p1() {
    tmp_338_fu_8633_p1 = esl_zext<64,12>(tmp_337_fu_8628_p2.read());
}

void ShuffleNetV2::thread_tmp_339_fu_8643_p2() {
    tmp_339_fu_8643_p2 = (!i5_cast1_reg_10114.read().is_01() || !tmp80_fu_8638_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(i5_cast1_reg_10114.read()) + sc_biguint<12>(tmp80_fu_8638_p2.read()));
}

void ShuffleNetV2::thread_tmp_340_fu_8648_p1() {
    tmp_340_fu_8648_p1 = esl_zext<64,12>(tmp_339_fu_8643_p2.read());
}

void ShuffleNetV2::thread_tmp_341_fu_8658_p2() {
    tmp_341_fu_8658_p2 = (!i5_cast1_reg_10114.read().is_01() || !tmp81_fu_8653_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(i5_cast1_reg_10114.read()) + sc_biguint<12>(tmp81_fu_8653_p2.read()));
}

void ShuffleNetV2::thread_tmp_342_fu_8663_p1() {
    tmp_342_fu_8663_p1 = esl_zext<64,12>(tmp_341_fu_8658_p2.read());
}

void ShuffleNetV2::thread_tmp_343_fu_8673_p2() {
    tmp_343_fu_8673_p2 = (!i5_cast1_reg_10114.read().is_01() || !tmp82_fu_8668_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(i5_cast1_reg_10114.read()) + sc_biguint<12>(tmp82_fu_8668_p2.read()));
}

void ShuffleNetV2::thread_tmp_344_fu_8678_p1() {
    tmp_344_fu_8678_p1 = esl_zext<64,12>(tmp_343_fu_8673_p2.read());
}

void ShuffleNetV2::thread_tmp_345_fu_8688_p2() {
    tmp_345_fu_8688_p2 = (!i5_cast1_reg_10114.read().is_01() || !tmp83_fu_8683_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(i5_cast1_reg_10114.read()) + sc_biguint<12>(tmp83_fu_8683_p2.read()));
}

void ShuffleNetV2::thread_tmp_346_fu_8693_p1() {
    tmp_346_fu_8693_p1 = esl_zext<64,12>(tmp_345_fu_8688_p2.read());
}

void ShuffleNetV2::thread_tmp_347_fu_8703_p2() {
    tmp_347_fu_8703_p2 = (!i5_cast1_reg_10114.read().is_01() || !tmp84_fu_8698_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(i5_cast1_reg_10114.read()) + sc_biguint<12>(tmp84_fu_8698_p2.read()));
}

void ShuffleNetV2::thread_tmp_348_fu_8708_p1() {
    tmp_348_fu_8708_p1 = esl_zext<64,12>(tmp_347_fu_8703_p2.read());
}

void ShuffleNetV2::thread_tmp_349_fu_8718_p2() {
    tmp_349_fu_8718_p2 = (!i5_cast1_reg_10114.read().is_01() || !tmp85_fu_8713_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(i5_cast1_reg_10114.read()) + sc_biguint<12>(tmp85_fu_8713_p2.read()));
}

void ShuffleNetV2::thread_tmp_350_fu_8723_p1() {
    tmp_350_fu_8723_p1 = esl_zext<64,12>(tmp_349_fu_8718_p2.read());
}

void ShuffleNetV2::thread_tmp_351_fu_8733_p2() {
    tmp_351_fu_8733_p2 = (!i5_cast1_reg_10114.read().is_01() || !tmp86_fu_8728_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(i5_cast1_reg_10114.read()) + sc_biguint<12>(tmp86_fu_8728_p2.read()));
}

void ShuffleNetV2::thread_tmp_352_fu_8738_p1() {
    tmp_352_fu_8738_p1 = esl_zext<64,12>(tmp_351_fu_8733_p2.read());
}

void ShuffleNetV2::thread_tmp_353_fu_6434_p2() {
    tmp_353_fu_6434_p2 = (!p_shl15_cast_fu_6418_p1.read().is_01() || !p_shl16_cast_fu_6430_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl15_cast_fu_6418_p1.read()) - sc_biguint<7>(p_shl16_cast_fu_6430_p1.read()));
}

void ShuffleNetV2::thread_tmp_354_fu_6454_p2() {
    tmp_354_fu_6454_p2 = (!tmp29_fu_6448_p2.read().is_01() || !co2_cast119_cast_reg_9610.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp29_fu_6448_p2.read()) + sc_biguint<8>(co2_cast119_cast_reg_9610.read()));
}

void ShuffleNetV2::thread_tmp_355_cast_fu_6459_p1() {
    tmp_355_cast_fu_6459_p1 = esl_zext<11,8>(tmp_354_fu_6454_p2.read());
}

void ShuffleNetV2::thread_tmp_355_fu_3686_p3() {
    tmp_355_fu_3686_p3 = esl_concat<6,3>(tmp_s_fu_3668_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_356_fu_6440_p2() {
    tmp_356_fu_6440_p2 = (!co2_cast5_reg_9619.read().is_01() || !tmp_353_fu_6434_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(co2_cast5_reg_9619.read()) + sc_biguint<7>(tmp_353_fu_6434_p2.read()));
}

void ShuffleNetV2::thread_tmp_357_cast_fu_6493_p1() {
    tmp_357_cast_fu_6493_p1 = esl_zext<35,32>(tmp_474_cast_fu_6490_p1.read());
}

void ShuffleNetV2::thread_tmp_357_fu_3698_p2() {
    tmp_357_fu_3698_p2 = (!p_shl33_cast_fu_3682_p1.read().is_01() || !p_shl34_cast_fu_3694_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(p_shl33_cast_fu_3682_p1.read()) - sc_biguint<12>(p_shl34_cast_fu_3694_p1.read()));
}

void ShuffleNetV2::thread_tmp_358_fu_6541_p2() {
    tmp_358_fu_6541_p2 = (!tmp30_fu_6535_p2.read().is_01() || !co2_cast119_cast_reg_9610.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp30_fu_6535_p2.read()) + sc_biguint<8>(co2_cast119_cast_reg_9610.read()));
}

void ShuffleNetV2::thread_tmp_359_cast_fu_6546_p1() {
    tmp_359_cast_fu_6546_p1 = esl_zext<11,8>(tmp_358_fu_6541_p2.read());
}

void ShuffleNetV2::thread_tmp_359_fu_3714_p3() {
    tmp_359_fu_3714_p3 = esl_concat<7,5>(tmp_170_fu_3708_p2.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_360_fu_3726_p3() {
    tmp_360_fu_3726_p3 = esl_concat<7,3>(tmp_170_fu_3708_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_361_fu_6665_p2() {
    tmp_361_fu_6665_p2 = (!tmp31_cast_fu_6661_p1.read().is_01() || !co2_cast120_cast_reg_9601.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp31_cast_fu_6661_p1.read()) + sc_biguint<9>(co2_cast120_cast_reg_9601.read()));
}

void ShuffleNetV2::thread_tmp_362_cast_fu_3664_p1() {
    tmp_362_cast_fu_3664_p1 = esl_sext<12,11>(tmp_220_fu_3658_p2.read());
}

void ShuffleNetV2::thread_tmp_362_fu_3738_p2() {
    tmp_362_fu_3738_p2 = (!p_shl31_cast_fu_3722_p1.read().is_01() || !p_shl32_cast_fu_3734_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl31_cast_fu_3722_p1.read()) - sc_biguint<13>(p_shl32_cast_fu_3734_p1.read()));
}

void ShuffleNetV2::thread_tmp_363_cast_fu_6670_p1() {
    tmp_363_cast_fu_6670_p1 = esl_zext<12,9>(tmp_361_fu_6665_p2.read());
}

void ShuffleNetV2::thread_tmp_363_fu_3754_p3() {
    tmp_363_fu_3754_p3 = esl_concat<7,5>(tmp_171_fu_3748_p2.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_364_fu_3766_p3() {
    tmp_364_fu_3766_p3 = esl_concat<7,3>(tmp_171_fu_3748_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_365_fu_6707_p2() {
    tmp_365_fu_6707_p2 = (!tmp32_fu_6701_p2.read().is_01() || !co2_cast120_cast_reg_9601.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp32_fu_6701_p2.read()) + sc_biguint<9>(co2_cast120_cast_reg_9601.read()));
}

void ShuffleNetV2::thread_tmp_366_fu_3778_p2() {
    tmp_366_fu_3778_p2 = (!p_shl29_cast_fu_3762_p1.read().is_01() || !p_shl30_cast_fu_3774_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl29_cast_fu_3762_p1.read()) - sc_biguint<13>(p_shl30_cast_fu_3774_p1.read()));
}

void ShuffleNetV2::thread_tmp_367_cast_fu_6712_p1() {
    tmp_367_cast_fu_6712_p1 = esl_zext<12,9>(tmp_365_fu_6707_p2.read());
}

void ShuffleNetV2::thread_tmp_367_fu_3788_p4() {
    tmp_367_fu_3788_p4 = esl_concat<6,5>(esl_concat<1,5>(ap_const_lv1_1, co_reg_3124.read()), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_368_cast_fu_3704_p1() {
    tmp_368_cast_fu_3704_p1 = esl_sext<13,12>(tmp_357_fu_3698_p2.read());
}

void ShuffleNetV2::thread_tmp_368_fu_3798_p1() {
    tmp_368_fu_3798_p1 = esl_sext<12,11>(tmp_367_fu_3788_p4.read());
}

void ShuffleNetV2::thread_tmp_369_fu_6749_p2() {
    tmp_369_fu_6749_p2 = (!tmp33_fu_6743_p2.read().is_01() || !co2_cast120_cast_reg_9601.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp33_fu_6743_p2.read()) + sc_biguint<9>(co2_cast120_cast_reg_9601.read()));
}

void ShuffleNetV2::thread_tmp_370_fu_3806_p4() {
    tmp_370_fu_3806_p4 = esl_concat<6,3>(esl_concat<1,5>(ap_const_lv1_1, co_reg_3124.read()), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_371_cast_fu_6754_p1() {
    tmp_371_cast_fu_6754_p1 = esl_zext<12,9>(tmp_369_fu_6749_p2.read());
}

void ShuffleNetV2::thread_tmp_371_fu_3816_p1() {
    tmp_371_fu_3816_p1 = esl_sext<10,9>(tmp_370_fu_3806_p4.read());
}

void ShuffleNetV2::thread_tmp_372_fu_6787_p2() {
    tmp_372_fu_6787_p2 = (!tmp34_fu_6781_p2.read().is_01() || !co2_cast120_cast_reg_9601.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp34_fu_6781_p2.read()) + sc_biguint<9>(co2_cast120_cast_reg_9601.read()));
}

void ShuffleNetV2::thread_tmp_373_cast_fu_6792_p1() {
    tmp_373_cast_fu_6792_p1 = esl_zext<12,9>(tmp_372_fu_6787_p2.read());
}

void ShuffleNetV2::thread_tmp_373_fu_3824_p2() {
    tmp_373_fu_3824_p2 = (!p_shl27_cast_fu_3802_p1.read().is_01() || !p_shl28_cast_fu_3820_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl27_cast_fu_3802_p1.read()) - sc_biguint<13>(p_shl28_cast_fu_3820_p1.read()));
}

void ShuffleNetV2::thread_tmp_374_fu_6824_p2() {
    tmp_374_fu_6824_p2 = (!tmp35_fu_6819_p2.read().is_01() || !co2_cast119_cast_reg_9610.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp35_fu_6819_p2.read()) + sc_biguint<8>(co2_cast119_cast_reg_9610.read()));
}

void ShuffleNetV2::thread_tmp_375_cast_fu_6833_p1() {
    tmp_375_cast_fu_6833_p1 = esl_zext<12,9>(tmp_492_cast_fu_6829_p1.read());
}

void ShuffleNetV2::thread_tmp_375_fu_3840_p3() {
    tmp_375_fu_3840_p3 = esl_concat<8,5>(tmp_172_fu_3834_p2.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_376_fu_6869_p2() {
    tmp_376_fu_6869_p2 = (!tmp36_fu_6864_p2.read().is_01() || !co2_cast119_cast_reg_9610.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp36_fu_6864_p2.read()) + sc_biguint<8>(co2_cast119_cast_reg_9610.read()));
}

void ShuffleNetV2::thread_tmp_377_cast_fu_6937_p1() {
    tmp_377_cast_fu_6937_p1 = esl_zext<12,9>(tmp_495_cast_fu_6934_p1.read());
}

void ShuffleNetV2::thread_tmp_377_fu_3852_p3() {
    tmp_377_fu_3852_p3 = esl_concat<8,3>(tmp_172_fu_3834_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_378_fu_6977_p2() {
    tmp_378_fu_6977_p2 = (!tmp37_fu_6971_p2.read().is_01() || !co2_cast2_reg_9592.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp37_fu_6971_p2.read()) + sc_biguint<10>(co2_cast2_reg_9592.read()));
}

void ShuffleNetV2::thread_tmp_379_cast_fu_7126_p1() {
    tmp_379_cast_fu_7126_p1 = esl_zext<13,10>(tmp_378_reg_9939.read());
}

void ShuffleNetV2::thread_tmp_379_fu_3864_p2() {
    tmp_379_fu_3864_p2 = (!p_shl25_cast_fu_3848_p1.read().is_01() || !p_shl26_cast_fu_3860_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl25_cast_fu_3848_p1.read()) - sc_biguint<14>(p_shl26_cast_fu_3860_p1.read()));
}

void ShuffleNetV2::thread_tmp_380_fu_6988_p2() {
    tmp_380_fu_6988_p2 = (!tmp38_fu_6982_p2.read().is_01() || !co2_cast2_reg_9592.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp38_fu_6982_p2.read()) + sc_biguint<10>(co2_cast2_reg_9592.read()));
}

void ShuffleNetV2::thread_tmp_381_cast_fu_6993_p1() {
    tmp_381_cast_fu_6993_p1 = esl_zext<13,10>(tmp_380_fu_6988_p2.read());
}

void ShuffleNetV2::thread_tmp_381_fu_3880_p3() {
    tmp_381_fu_3880_p3 = esl_concat<8,5>(tmp_173_fu_3874_p2.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_382_fu_7259_p2() {
    tmp_382_fu_7259_p2 = (!p_shl17_cast_fu_7243_p1.read().is_01() || !p_shl18_cast_fu_7255_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl17_cast_fu_7243_p1.read()) - sc_biguint<8>(p_shl18_cast_fu_7255_p1.read()));
}

void ShuffleNetV2::thread_tmp_383_fu_7280_p2() {
    tmp_383_fu_7280_p2 = (!co2_cast2_reg_9592.read().is_01() || !tmp39_fu_7274_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(co2_cast2_reg_9592.read()) + sc_biguint<10>(tmp39_fu_7274_p2.read()));
}

void ShuffleNetV2::thread_tmp_384_cast_fu_7285_p1() {
    tmp_384_cast_fu_7285_p1 = esl_zext<13,10>(tmp_383_fu_7280_p2.read());
}

void ShuffleNetV2::thread_tmp_384_fu_3892_p3() {
    tmp_384_fu_3892_p3 = esl_concat<8,3>(tmp_173_fu_3874_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_385_fu_7312_p2() {
    tmp_385_fu_7312_p2 = (!tmp_382_reg_10009.read().is_01() || !co2_cast119_cast_reg_9610.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_382_reg_10009.read()) + sc_biguint<8>(co2_cast119_cast_reg_9610.read()));
}

void ShuffleNetV2::thread_tmp_386_cast_fu_7320_p1() {
    tmp_386_cast_fu_7320_p1 = esl_zext<35,32>(tmp_509_cast_fu_7316_p1.read());
}

void ShuffleNetV2::thread_tmp_386_fu_3904_p2() {
    tmp_386_fu_3904_p2 = (!p_shl23_cast_fu_3888_p1.read().is_01() || !p_shl24_cast_fu_3900_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl23_cast_fu_3888_p1.read()) - sc_biguint<14>(p_shl24_cast_fu_3900_p1.read()));
}

void ShuffleNetV2::thread_tmp_387_fu_7464_p2() {
    tmp_387_fu_7464_p2 = (!co2_cast2_reg_9592.read().is_01() || !tmp40_fu_7459_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(co2_cast2_reg_9592.read()) + sc_biguint<10>(tmp40_fu_7459_p2.read()));
}

void ShuffleNetV2::thread_tmp_388_cast_fu_7469_p1() {
    tmp_388_cast_fu_7469_p1 = esl_zext<13,10>(tmp_387_fu_7464_p2.read());
}

void ShuffleNetV2::thread_tmp_388_fu_3920_p3() {
    tmp_388_fu_3920_p3 = esl_concat<8,5>(tmp_174_fu_3914_p2.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_389_fu_7501_p2() {
    tmp_389_fu_7501_p2 = (!co2_cast2_reg_9592.read().is_01() || !tmp41_fu_7496_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(co2_cast2_reg_9592.read()) + sc_biguint<10>(tmp41_fu_7496_p2.read()));
}

void ShuffleNetV2::thread_tmp_390_cast_fu_7506_p1() {
    tmp_390_cast_fu_7506_p1 = esl_zext<13,10>(tmp_389_fu_7501_p2.read());
}

void ShuffleNetV2::thread_tmp_390_fu_3932_p3() {
    tmp_390_fu_3932_p3 = esl_concat<8,3>(tmp_174_fu_3914_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_391_cast_cast1_fu_8491_p1() {
    tmp_391_cast_cast1_fu_8491_p1 = esl_sext<9,8>(tmp_322_reg_10549.read());
}

void ShuffleNetV2::thread_tmp_391_cast_cast_fu_8494_p1() {
    tmp_391_cast_cast_fu_8494_p1 = esl_sext<10,8>(tmp_322_reg_10549.read());
}

void ShuffleNetV2::thread_tmp_391_cast_fu_8537_p1() {
    tmp_391_cast_fu_8537_p1 = esl_sext<12,8>(tmp_322_reg_10549.read());
}

void ShuffleNetV2::thread_tmp_391_fu_7369_p2() {
    tmp_391_fu_7369_p2 = (!co2_cast120_cast_reg_9601.read().is_01() || !tmp42_fu_7363_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(co2_cast120_cast_reg_9601.read()) + sc_biguint<9>(tmp42_fu_7363_p2.read()));
}

void ShuffleNetV2::thread_tmp_392_cast_fu_7588_p1() {
    tmp_392_cast_fu_7588_p1 = esl_zext<13,10>(tmp_515_cast_fu_7585_p1.read());
}

void ShuffleNetV2::thread_tmp_392_fu_3944_p2() {
    tmp_392_fu_3944_p2 = (!p_shl21_cast_fu_3928_p1.read().is_01() || !p_shl22_cast_fu_3940_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl21_cast_fu_3928_p1.read()) - sc_biguint<14>(p_shl22_cast_fu_3940_p1.read()));
}

void ShuffleNetV2::thread_tmp_393_cast_fu_8508_p1() {
    tmp_393_cast_fu_8508_p1 = esl_sext<11,10>(tmp_323_fu_8503_p2.read());
}

void ShuffleNetV2::thread_tmp_393_fu_7380_p2() {
    tmp_393_fu_7380_p2 = (!co2_cast1_reg_9587.read().is_01() || !tmp43_fu_7374_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(co2_cast1_reg_9587.read()) + sc_biguint<11>(tmp43_fu_7374_p2.read()));
}

void ShuffleNetV2::thread_tmp_394_cast_fu_7385_p1() {
    tmp_394_cast_fu_7385_p1 = esl_zext<14,11>(tmp_393_fu_7380_p2.read());
}

void ShuffleNetV2::thread_tmp_394_fu_3954_p4() {
    tmp_394_fu_3954_p4 = esl_concat<7,5>(esl_concat<2,5>(ap_const_lv2_2, co_reg_3124.read()), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_395_cast_fu_8544_p1() {
    tmp_395_cast_fu_8544_p1 = esl_sext<32,8>(tmp_325_fu_8540_p2.read());
}

void ShuffleNetV2::thread_tmp_395_fu_3964_p1() {
    tmp_395_fu_3964_p1 = esl_sext<13,12>(tmp_394_fu_3954_p4.read());
}

void ShuffleNetV2::thread_tmp_396_fu_3972_p4() {
    tmp_396_fu_3972_p4 = esl_concat<7,3>(esl_concat<2,5>(ap_const_lv2_2, co_reg_3124.read()), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_397_fu_3982_p1() {
    tmp_397_fu_3982_p1 = esl_sext<11,10>(tmp_396_fu_3972_p4.read());
}

void ShuffleNetV2::thread_tmp_398_cast_fu_8528_p1() {
    tmp_398_cast_fu_8528_p1 = esl_sext<11,9>(tmp_327_fu_8523_p2.read());
}

void ShuffleNetV2::thread_tmp_398_fu_3990_p2() {
    tmp_398_fu_3990_p2 = (!p_shl19_cast_fu_3968_p1.read().is_01() || !p_shl20_cast_fu_3986_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl19_cast_fu_3968_p1.read()) - sc_biguint<14>(p_shl20_cast_fu_3986_p1.read()));
}

void ShuffleNetV2::thread_tmp_399_fu_5994_p3() {
    tmp_399_fu_5994_p3 = esl_concat<5,2>(co2_reg_3169.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_400_fu_6006_p2() {
    tmp_400_fu_6006_p2 = (!p_shl101_cast_fu_6002_p1.read().is_01() || !co2_cast119_cast_fu_5970_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl101_cast_fu_6002_p1.read()) - sc_biguint<8>(co2_cast119_cast_fu_5970_p1.read()));
}

void ShuffleNetV2::thread_tmp_401_fu_6026_p3() {
    tmp_401_fu_6026_p3 = esl_concat<6,2>(tmp_178_fu_6016_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_402_fu_6038_p2() {
    tmp_402_fu_6038_p2 = (!p_shl100_cast_fu_6034_p1.read().is_01() || !tmp_179_cast_fu_6022_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(p_shl100_cast_fu_6034_p1.read()) - sc_biguint<9>(tmp_179_cast_fu_6022_p1.read()));
}

void ShuffleNetV2::thread_tmp_403_fu_6054_p3() {
    tmp_403_fu_6054_p3 = esl_concat<7,2>(tmp_180_fu_6044_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_404_fu_6066_p2() {
    tmp_404_fu_6066_p2 = (!p_shl99_cast_fu_6062_p1.read().is_01() || !tmp_181_cast_fu_6050_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl99_cast_fu_6062_p1.read()) - sc_biguint<10>(tmp_181_cast_fu_6050_p1.read()));
}

void ShuffleNetV2::thread_tmp_405_fu_6082_p3() {
    tmp_405_fu_6082_p3 = esl_concat<7,2>(tmp_182_fu_6072_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_406_fu_6094_p2() {
    tmp_406_fu_6094_p2 = (!p_shl98_cast_fu_6090_p1.read().is_01() || !tmp_183_cast_fu_6078_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl98_cast_fu_6090_p1.read()) - sc_biguint<10>(tmp_183_cast_fu_6078_p1.read()));
}

void ShuffleNetV2::thread_tmp_407_fu_6116_p4() {
    tmp_407_fu_6116_p4 = esl_concat<6,2>(esl_concat<1,5>(ap_const_lv1_1, co2_reg_3169.read()), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_408_fu_6126_p1() {
    tmp_408_fu_6126_p1 = esl_sext<9,8>(tmp_407_fu_6116_p4.read());
}

void ShuffleNetV2::thread_tmp_409_fu_6134_p2() {
    tmp_409_fu_6134_p2 = (!p_shl97_cast_fu_6130_p1.read().is_01() || !tmp_185_cast_fu_6112_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl97_cast_fu_6130_p1.read()) - sc_biguint<10>(tmp_185_cast_fu_6112_p1.read()));
}

void ShuffleNetV2::thread_tmp_410_fu_4122_p2() {
    tmp_410_fu_4122_p2 = (!tmp_186_cast8_fu_4118_p1.read().is_01() || !tmp_362_cast_reg_8929.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp_186_cast8_fu_4118_p1.read()) + sc_bigint<12>(tmp_362_cast_reg_8929.read()));
}

void ShuffleNetV2::thread_tmp_411_fu_4132_p2() {
    tmp_411_fu_4132_p2 = (!tmp_186_cast7_fu_4114_p1.read().is_01() || !tmp_368_cast_reg_8934.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_186_cast7_fu_4114_p1.read()) + sc_bigint<13>(tmp_368_cast_reg_8934.read()));
}

void ShuffleNetV2::thread_tmp_412_fu_4151_p2() {
    tmp_412_fu_4151_p2 = (!tmp_186_cast6_fu_4147_p1.read().is_01() || !tmp_439_cast_reg_8939.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_186_cast6_fu_4147_p1.read()) + sc_bigint<14>(tmp_439_cast_reg_8939.read()));
}

void ShuffleNetV2::thread_tmp_413_fu_4161_p2() {
    tmp_413_fu_4161_p2 = (!tmp_186_cast6_fu_4147_p1.read().is_01() || !tmp_442_cast_reg_8944.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_186_cast6_fu_4147_p1.read()) + sc_bigint<14>(tmp_442_cast_reg_8944.read()));
}

void ShuffleNetV2::thread_tmp_414_fu_4171_p2() {
    tmp_414_fu_4171_p2 = (!tmp_186_cast6_fu_4147_p1.read().is_01() || !tmp_447_cast_reg_8949.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_186_cast6_fu_4147_p1.read()) + sc_bigint<14>(tmp_447_cast_reg_8949.read()));
}

void ShuffleNetV2::thread_tmp_415_fu_4184_p2() {
    tmp_415_fu_4184_p2 = (!tmp_186_cast5_fu_4176_p1.read().is_01() || !tmp_450_cast_reg_8954.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_186_cast5_fu_4176_p1.read()) + sc_bigint<15>(tmp_450_cast_reg_8954.read()));
}

void ShuffleNetV2::thread_tmp_416_fu_4194_p2() {
    tmp_416_fu_4194_p2 = (!tmp_186_cast5_fu_4176_p1.read().is_01() || !tmp_453_cast_reg_8959.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_186_cast5_fu_4176_p1.read()) + sc_bigint<15>(tmp_453_cast_reg_8959.read()));
}

void ShuffleNetV2::thread_tmp_417_fu_4199_p2() {
    tmp_417_fu_4199_p2 = (!tmp_186_cast5_fu_4176_p1.read().is_01() || !tmp_456_cast_reg_8964.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_186_cast5_fu_4176_p1.read()) + sc_bigint<15>(tmp_456_cast_reg_8964.read()));
}

void ShuffleNetV2::thread_tmp_418_fu_4204_p2() {
    tmp_418_fu_4204_p2 = (!tmp_186_cast5_fu_4176_p1.read().is_01() || !tmp_461_cast_reg_8969.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_186_cast5_fu_4176_p1.read()) + sc_bigint<15>(tmp_461_cast_reg_8969.read()));
}

void ShuffleNetV2::thread_tmp_419_fu_6188_p2() {
    tmp_419_fu_6188_p2 = (!tmp_218_cast_fu_6184_p1.read().is_01() || !tmp_467_cast_reg_9632.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_218_cast_fu_6184_p1.read()) + sc_bigint<9>(tmp_467_cast_reg_9632.read()));
}

void ShuffleNetV2::thread_tmp_420_fu_6209_p2() {
    tmp_420_fu_6209_p2 = (!p_shl106_cast_fu_6205_p1.read().is_01() || !tmp_486_cast_fu_6193_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_shl106_cast_fu_6205_p1.read()) - sc_bigint<15>(tmp_486_cast_fu_6193_p1.read()));
}

void ShuffleNetV2::thread_tmp_421_fu_6215_p2() {
    tmp_421_fu_6215_p2 = (!tmp_218_cast_fu_6184_p1.read().is_01() || !tmp_402_reg_9637.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_218_cast_fu_6184_p1.read()) + sc_biguint<9>(tmp_402_reg_9637.read()));
}

void ShuffleNetV2::thread_tmp_422_fu_6236_p2() {
    tmp_422_fu_6236_p2 = (!p_shl105_cast_fu_6232_p1.read().is_01() || !tmp_489_cast_fu_6220_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_shl105_cast_fu_6232_p1.read()) - sc_bigint<15>(tmp_489_cast_fu_6220_p1.read()));
}

void ShuffleNetV2::thread_tmp_423_fu_6242_p2() {
    tmp_423_fu_6242_p2 = (!tmp_218_cast7_fu_6180_p1.read().is_01() || !tmp_404_reg_9642.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_218_cast7_fu_6180_p1.read()) + sc_biguint<10>(tmp_404_reg_9642.read()));
}

void ShuffleNetV2::thread_tmp_424_fu_6263_p2() {
    tmp_424_fu_6263_p2 = (!p_shl104_cast_fu_6259_p1.read().is_01() || !tmp_492_cast1_fu_6247_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_shl104_cast_fu_6259_p1.read()) - sc_bigint<15>(tmp_492_cast1_fu_6247_p1.read()));
}

void ShuffleNetV2::thread_tmp_425_fu_6269_p2() {
    tmp_425_fu_6269_p2 = (!tmp_218_cast7_fu_6180_p1.read().is_01() || !tmp_406_reg_9647.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_218_cast7_fu_6180_p1.read()) + sc_biguint<10>(tmp_406_reg_9647.read()));
}

void ShuffleNetV2::thread_tmp_426_fu_6290_p2() {
    tmp_426_fu_6290_p2 = (!p_shl103_cast_fu_6286_p1.read().is_01() || !tmp_495_cast1_fu_6274_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_shl103_cast_fu_6286_p1.read()) - sc_bigint<15>(tmp_495_cast1_fu_6274_p1.read()));
}

void ShuffleNetV2::thread_tmp_427_fu_6296_p2() {
    tmp_427_fu_6296_p2 = (!tmp_218_cast6_fu_6176_p1.read().is_01() || !tmp_476_cast_reg_9652.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_218_cast6_fu_6176_p1.read()) + sc_bigint<11>(tmp_476_cast_reg_9652.read()));
}

void ShuffleNetV2::thread_tmp_428_fu_6317_p2() {
    tmp_428_fu_6317_p2 = (!p_shl102_cast_fu_6313_p1.read().is_01() || !tmp_498_cast_fu_6301_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_shl102_cast_fu_6313_p1.read()) - sc_bigint<15>(tmp_498_cast_fu_6301_p1.read()));
}

void ShuffleNetV2::thread_tmp_429_fu_4389_p3() {
    tmp_429_fu_4389_p3 = esl_concat<9,5>(tmp_222_reg_9159.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_430_fu_4400_p3() {
    tmp_430_fu_4400_p3 = esl_concat<9,3>(tmp_222_reg_9159.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_431_fu_4411_p2() {
    tmp_431_fu_4411_p2 = (!p_shl75_cast_fu_4396_p1.read().is_01() || !p_shl76_cast_fu_4407_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl75_cast_fu_4396_p1.read()) - sc_biguint<15>(p_shl76_cast_fu_4407_p1.read()));
}

void ShuffleNetV2::thread_tmp_432_fu_4421_p2() {
    tmp_432_fu_4421_p2 = (!tmp_186_cast3_reg_9114.read().is_01() || !tmp_505_cast2_fu_4417_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp_186_cast3_reg_9114.read()) + sc_bigint<16>(tmp_505_cast2_fu_4417_p1.read()));
}

void ShuffleNetV2::thread_tmp_433_fu_4336_p3() {
    tmp_433_fu_4336_p3 = esl_concat<7,6>(tmp_224_fu_4331_p2.read(), ap_const_lv6_0);
}

void ShuffleNetV2::thread_tmp_434_fu_4344_p3() {
    tmp_434_fu_4344_p3 = esl_concat<7,4>(tmp_224_fu_4331_p2.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_435_fu_4356_p2() {
    tmp_435_fu_4356_p2 = (!tmp_433_fu_4336_p3.read().is_01() || !p_shl74_cast_fu_4352_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_433_fu_4336_p3.read()) - sc_bigint<13>(p_shl74_cast_fu_4352_p1.read()));
}

void ShuffleNetV2::thread_tmp_436_fu_4362_p2() {
    tmp_436_fu_4362_p2 = (!tmp_188_cast_reg_9134.read().is_01() || !tmp_435_fu_4356_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(tmp_188_cast_reg_9134.read()) + sc_biguint<13>(tmp_435_fu_4356_p2.read()));
}

void ShuffleNetV2::thread_tmp_437_fu_4431_p3() {
    tmp_437_fu_4431_p3 = esl_concat<9,5>(tmp_225_reg_9170.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_438_cast1_fu_5610_p1() {
    tmp_438_cast1_fu_5610_p1 = esl_sext<13,10>(tmp_310_reg_9448.read());
}

void ShuffleNetV2::thread_tmp_438_cast_cast_fu_5613_p1() {
    tmp_438_cast_cast_fu_5613_p1 = esl_sext<11,10>(tmp_310_reg_9448.read());
}

void ShuffleNetV2::thread_tmp_438_cast_fu_5428_p1() {
    tmp_438_cast_fu_5428_p1 = esl_sext<12,10>(tmp_310_fu_5422_p2.read());
}

void ShuffleNetV2::thread_tmp_438_fu_4442_p3() {
    tmp_438_fu_4442_p3 = esl_concat<9,3>(tmp_225_reg_9170.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_439_cast_fu_3744_p1() {
    tmp_439_cast_fu_3744_p1 = esl_sext<14,13>(tmp_362_fu_3738_p2.read());
}

void ShuffleNetV2::thread_tmp_439_fu_4453_p2() {
    tmp_439_fu_4453_p2 = (!p_shl71_cast_fu_4438_p1.read().is_01() || !p_shl72_cast_fu_4449_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl71_cast_fu_4438_p1.read()) - sc_biguint<15>(p_shl72_cast_fu_4449_p1.read()));
}

void ShuffleNetV2::thread_tmp_440_fu_4463_p2() {
    tmp_440_fu_4463_p2 = (!tmp_186_cast3_reg_9114.read().is_01() || !tmp_517_cast_fu_4459_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp_186_cast3_reg_9114.read()) + sc_bigint<16>(tmp_517_cast_fu_4459_p1.read()));
}

void ShuffleNetV2::thread_tmp_441_fu_4535_p3() {
    tmp_441_fu_4535_p3 = esl_concat<10,5>(tmp_226_reg_9205.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_442_cast_fu_3784_p1() {
    tmp_442_cast_fu_3784_p1 = esl_sext<14,13>(tmp_366_fu_3778_p2.read());
}

void ShuffleNetV2::thread_tmp_442_fu_4546_p3() {
    tmp_442_fu_4546_p3 = esl_concat<10,3>(tmp_226_reg_9205.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_443_fu_4557_p2() {
    tmp_443_fu_4557_p2 = (!p_shl69_cast_fu_4542_p1.read().is_01() || !p_shl70_cast_fu_4553_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(p_shl69_cast_fu_4542_p1.read()) - sc_biguint<16>(p_shl70_cast_fu_4553_p1.read()));
}

void ShuffleNetV2::thread_tmp_444_fu_4567_p2() {
    tmp_444_fu_4567_p2 = (!tmp_186_cast2_reg_9104.read().is_01() || !tmp_521_cast_fu_4563_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(tmp_186_cast2_reg_9104.read()) + sc_bigint<17>(tmp_521_cast_fu_4563_p1.read()));
}

void ShuffleNetV2::thread_tmp_445_fu_4577_p3() {
    tmp_445_fu_4577_p3 = esl_concat<10,5>(tmp_227_reg_9211.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_446_fu_4588_p3() {
    tmp_446_fu_4588_p3 = esl_concat<10,3>(tmp_227_reg_9211.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_447_cast_fu_3830_p1() {
    tmp_447_cast_fu_3830_p1 = esl_sext<14,13>(tmp_373_fu_3824_p2.read());
}

void ShuffleNetV2::thread_tmp_447_fu_4599_p2() {
    tmp_447_fu_4599_p2 = (!p_shl67_cast_fu_4584_p1.read().is_01() || !p_shl68_cast_fu_4595_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(p_shl67_cast_fu_4584_p1.read()) - sc_biguint<16>(p_shl68_cast_fu_4595_p1.read()));
}

void ShuffleNetV2::thread_tmp_448_fu_4609_p2() {
    tmp_448_fu_4609_p2 = (!tmp_186_cast2_reg_9104.read().is_01() || !tmp_525_cast_fu_4605_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(tmp_186_cast2_reg_9104.read()) + sc_bigint<17>(tmp_525_cast_fu_4605_p1.read()));
}

void ShuffleNetV2::thread_tmp_449_fu_4651_p3() {
    tmp_449_fu_4651_p3 = esl_concat<10,5>(tmp_228_reg_9259.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_450_cast_fu_3870_p1() {
    tmp_450_cast_fu_3870_p1 = esl_sext<15,14>(tmp_379_fu_3864_p2.read());
}

void ShuffleNetV2::thread_tmp_450_fu_4662_p3() {
    tmp_450_fu_4662_p3 = esl_concat<10,3>(tmp_228_reg_9259.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_451_fu_4673_p2() {
    tmp_451_fu_4673_p2 = (!p_shl65_cast_fu_4658_p1.read().is_01() || !p_shl66_cast_fu_4669_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(p_shl65_cast_fu_4658_p1.read()) - sc_biguint<16>(p_shl66_cast_fu_4669_p1.read()));
}

void ShuffleNetV2::thread_tmp_452_fu_4683_p2() {
    tmp_452_fu_4683_p2 = (!tmp_186_cast2_reg_9104.read().is_01() || !tmp_529_cast_fu_4679_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(tmp_186_cast2_reg_9104.read()) + sc_bigint<17>(tmp_529_cast_fu_4679_p1.read()));
}

void ShuffleNetV2::thread_tmp_453_cast_fu_3910_p1() {
    tmp_453_cast_fu_3910_p1 = esl_sext<15,14>(tmp_386_fu_3904_p2.read());
}

void ShuffleNetV2::thread_tmp_453_fu_4693_p3() {
    tmp_453_fu_4693_p3 = esl_concat<10,5>(tmp_229_reg_9265.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_454_fu_4704_p3() {
    tmp_454_fu_4704_p3 = esl_concat<10,3>(tmp_229_reg_9265.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_455_fu_4715_p2() {
    tmp_455_fu_4715_p2 = (!p_shl63_cast_fu_4700_p1.read().is_01() || !p_shl64_cast_fu_4711_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(p_shl63_cast_fu_4700_p1.read()) - sc_biguint<16>(p_shl64_cast_fu_4711_p1.read()));
}

void ShuffleNetV2::thread_tmp_456_cast_fu_3950_p1() {
    tmp_456_cast_fu_3950_p1 = esl_sext<15,14>(tmp_392_fu_3944_p2.read());
}

void ShuffleNetV2::thread_tmp_456_fu_4725_p2() {
    tmp_456_fu_4725_p2 = (!tmp_186_cast2_reg_9104.read().is_01() || !tmp_533_cast_fu_4721_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(tmp_186_cast2_reg_9104.read()) + sc_bigint<17>(tmp_533_cast_fu_4721_p1.read()));
}

void ShuffleNetV2::thread_tmp_457_fu_4745_p3() {
    tmp_457_fu_4745_p3 = esl_concat<10,5>(tmp_230_fu_4740_p2.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_458_fu_4757_p3() {
    tmp_458_fu_4757_p3 = esl_concat<10,3>(tmp_230_fu_4740_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_459_fu_4769_p2() {
    tmp_459_fu_4769_p2 = (!p_shl61_cast_fu_4753_p1.read().is_01() || !p_shl62_cast_fu_4765_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(p_shl61_cast_fu_4753_p1.read()) - sc_biguint<16>(p_shl62_cast_fu_4765_p1.read()));
}

void ShuffleNetV2::thread_tmp_460_fu_4779_p2() {
    tmp_460_fu_4779_p2 = (!tmp_186_cast2_reg_9104.read().is_01() || !tmp_537_cast_fu_4775_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(tmp_186_cast2_reg_9104.read()) + sc_bigint<17>(tmp_537_cast_fu_4775_p1.read()));
}

void ShuffleNetV2::thread_tmp_461_cast_fu_3996_p1() {
    tmp_461_cast_fu_3996_p1 = esl_sext<15,14>(tmp_398_fu_3990_p2.read());
}

void ShuffleNetV2::thread_tmp_461_fu_4784_p3() {
    tmp_461_fu_4784_p3 = esl_concat<9,5>(tmp_234_reg_9217.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_462_fu_4791_p1() {
    tmp_462_fu_4791_p1 = esl_sext<15,14>(tmp_461_fu_4784_p3.read());
}

void ShuffleNetV2::thread_tmp_463_fu_4799_p3() {
    tmp_463_fu_4799_p3 = esl_concat<9,3>(tmp_234_reg_9217.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_464_fu_4806_p1() {
    tmp_464_fu_4806_p1 = esl_sext<13,12>(tmp_463_fu_4799_p3.read());
}

void ShuffleNetV2::thread_tmp_465_fu_4814_p2() {
    tmp_465_fu_4814_p2 = (!p_shl59_cast_fu_4795_p1.read().is_01() || !p_shl60_cast_fu_4810_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(p_shl59_cast_fu_4795_p1.read()) - sc_biguint<16>(p_shl60_cast_fu_4810_p1.read()));
}

void ShuffleNetV2::thread_tmp_466_fu_4824_p2() {
    tmp_466_fu_4824_p2 = (!tmp_186_cast2_reg_9104.read().is_01() || !tmp_543_cast_fu_4820_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(tmp_186_cast2_reg_9104.read()) + sc_bigint<17>(tmp_543_cast_fu_4820_p1.read()));
}

void ShuffleNetV2::thread_tmp_467_cast_fu_6012_p1() {
    tmp_467_cast_fu_6012_p1 = esl_sext<9,8>(tmp_400_fu_6006_p2.read());
}

void ShuffleNetV2::thread_tmp_467_fu_4862_p3() {
    tmp_467_fu_4862_p3 = esl_concat<11,5>(tmp_239_reg_9316.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_468_fu_4873_p3() {
    tmp_468_fu_4873_p3 = esl_concat<11,3>(tmp_239_reg_9316.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_469_fu_4884_p2() {
    tmp_469_fu_4884_p2 = (!p_shl57_cast_fu_4869_p1.read().is_01() || !p_shl58_cast_fu_4880_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(p_shl57_cast_fu_4869_p1.read()) - sc_biguint<17>(p_shl58_cast_fu_4880_p1.read()));
}

void ShuffleNetV2::thread_tmp_470_cast110_cast_fu_6445_p1() {
    tmp_470_cast110_cast_fu_6445_p1 = esl_sext<8,7>(tmp_353_reg_9813.read());
}

void ShuffleNetV2::thread_tmp_470_cast1_fu_6874_p1() {
    tmp_470_cast1_fu_6874_p1 = esl_sext<10,7>(tmp_353_reg_9813.read());
}

void ShuffleNetV2::thread_tmp_470_cast2_fu_6578_p1() {
    tmp_470_cast2_fu_6578_p1 = esl_sext<9,7>(tmp_353_reg_9813.read());
}

void ShuffleNetV2::thread_tmp_470_fu_4894_p2() {
    tmp_470_fu_4894_p2 = (!tmp_186_cast1_reg_9090.read().is_01() || !tmp_547_cast_fu_4890_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(tmp_186_cast1_reg_9090.read()) + sc_bigint<18>(tmp_547_cast_fu_4890_p1.read()));
}

void ShuffleNetV2::thread_tmp_471_fu_4904_p3() {
    tmp_471_fu_4904_p3 = esl_concat<11,5>(tmp_244_reg_9322.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_472_fu_4915_p3() {
    tmp_472_fu_4915_p3 = esl_concat<11,3>(tmp_244_reg_9322.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_473_fu_4926_p2() {
    tmp_473_fu_4926_p2 = (!p_shl55_cast_fu_4911_p1.read().is_01() || !p_shl56_cast_fu_4922_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(p_shl55_cast_fu_4911_p1.read()) - sc_biguint<17>(p_shl56_cast_fu_4922_p1.read()));
}

void ShuffleNetV2::thread_tmp_474_cast_fu_6490_p1() {
    tmp_474_cast_fu_6490_p1 = esl_sext<32,7>(tmp_356_reg_9821.read());
}

void ShuffleNetV2::thread_tmp_474_fu_4936_p2() {
    tmp_474_fu_4936_p2 = (!tmp_186_cast1_reg_9090.read().is_01() || !tmp_551_cast_fu_4932_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(tmp_186_cast1_reg_9090.read()) + sc_bigint<18>(tmp_551_cast_fu_4932_p1.read()));
}

void ShuffleNetV2::thread_tmp_475_fu_5003_p3() {
    tmp_475_fu_5003_p3 = esl_concat<11,5>(tmp_247_reg_9338.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_476_cast_fu_6140_p1() {
    tmp_476_cast_fu_6140_p1 = esl_sext<11,10>(tmp_409_fu_6134_p2.read());
}

void ShuffleNetV2::thread_tmp_476_fu_5014_p3() {
    tmp_476_fu_5014_p3 = esl_concat<11,3>(tmp_247_reg_9338.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_477_cast_fu_4127_p1() {
    tmp_477_cast_fu_4127_p1 = esl_sext<64,12>(tmp_410_fu_4122_p2.read());
}

void ShuffleNetV2::thread_tmp_477_fu_5025_p2() {
    tmp_477_fu_5025_p2 = (!p_shl53_cast_fu_5010_p1.read().is_01() || !p_shl54_cast_fu_5021_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(p_shl53_cast_fu_5010_p1.read()) - sc_biguint<17>(p_shl54_cast_fu_5021_p1.read()));
}

void ShuffleNetV2::thread_tmp_478_cast_fu_4137_p1() {
    tmp_478_cast_fu_4137_p1 = esl_sext<64,13>(tmp_411_fu_4132_p2.read());
}

void ShuffleNetV2::thread_tmp_478_fu_5035_p2() {
    tmp_478_fu_5035_p2 = (!tmp_186_cast1_reg_9090.read().is_01() || !tmp_555_cast_fu_5031_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(tmp_186_cast1_reg_9090.read()) + sc_bigint<18>(tmp_555_cast_fu_5031_p1.read()));
}

void ShuffleNetV2::thread_tmp_479_cast_fu_4156_p1() {
    tmp_479_cast_fu_4156_p1 = esl_sext<64,14>(tmp_412_fu_4151_p2.read());
}

void ShuffleNetV2::thread_tmp_479_fu_5045_p3() {
    tmp_479_fu_5045_p3 = esl_concat<11,5>(tmp_250_reg_9344.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_480_cast_fu_4166_p1() {
    tmp_480_cast_fu_4166_p1 = esl_sext<64,14>(tmp_413_fu_4161_p2.read());
}

void ShuffleNetV2::thread_tmp_480_fu_5056_p3() {
    tmp_480_fu_5056_p3 = esl_concat<11,3>(tmp_250_reg_9344.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_481_cast_fu_4180_p1() {
    tmp_481_cast_fu_4180_p1 = esl_sext<64,14>(tmp_414_reg_9045.read());
}

void ShuffleNetV2::thread_tmp_481_fu_5067_p2() {
    tmp_481_fu_5067_p2 = (!p_shl51_cast_fu_5052_p1.read().is_01() || !p_shl52_cast_fu_5063_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(p_shl51_cast_fu_5052_p1.read()) - sc_biguint<17>(p_shl52_cast_fu_5063_p1.read()));
}

void ShuffleNetV2::thread_tmp_482_cast_fu_4189_p1() {
    tmp_482_cast_fu_4189_p1 = esl_sext<64,15>(tmp_415_fu_4184_p2.read());
}

void ShuffleNetV2::thread_tmp_482_fu_5077_p2() {
    tmp_482_fu_5077_p2 = (!tmp_186_cast1_reg_9090.read().is_01() || !tmp_559_cast_fu_5073_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(tmp_186_cast1_reg_9090.read()) + sc_bigint<18>(tmp_559_cast_fu_5073_p1.read()));
}

void ShuffleNetV2::thread_tmp_483_cast_fu_4209_p1() {
    tmp_483_cast_fu_4209_p1 = esl_sext<64,15>(tmp_416_reg_9060.read());
}

void ShuffleNetV2::thread_tmp_483_fu_5117_p3() {
    tmp_483_fu_5117_p3 = esl_concat<11,5>(tmp_253_reg_9365.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_484_cast_fu_4213_p1() {
    tmp_484_cast_fu_4213_p1 = esl_sext<64,15>(tmp_417_reg_9065.read());
}

void ShuffleNetV2::thread_tmp_484_fu_5128_p3() {
    tmp_484_fu_5128_p3 = esl_concat<11,3>(tmp_253_reg_9365.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_485_cast_fu_4217_p1() {
    tmp_485_cast_fu_4217_p1 = esl_sext<64,15>(tmp_418_reg_9070.read());
}

void ShuffleNetV2::thread_tmp_485_fu_5139_p2() {
    tmp_485_fu_5139_p2 = (!p_shl49_cast_fu_5124_p1.read().is_01() || !p_shl50_cast_fu_5135_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(p_shl49_cast_fu_5124_p1.read()) - sc_biguint<17>(p_shl50_cast_fu_5135_p1.read()));
}

void ShuffleNetV2::thread_tmp_486_cast_fu_6193_p1() {
    tmp_486_cast_fu_6193_p1 = esl_sext<15,9>(tmp_419_fu_6188_p2.read());
}

void ShuffleNetV2::thread_tmp_486_fu_5149_p2() {
    tmp_486_fu_5149_p2 = (!tmp_186_cast1_reg_9090.read().is_01() || !tmp_563_cast_fu_5145_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(tmp_186_cast1_reg_9090.read()) + sc_bigint<18>(tmp_563_cast_fu_5145_p1.read()));
}

void ShuffleNetV2::thread_tmp_487_fu_5159_p3() {
    tmp_487_fu_5159_p3 = esl_concat<11,5>(tmp_256_reg_9371.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_488_fu_5170_p3() {
    tmp_488_fu_5170_p3 = esl_concat<11,3>(tmp_256_reg_9371.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_489_cast_fu_6220_p1() {
    tmp_489_cast_fu_6220_p1 = esl_sext<15,9>(tmp_421_fu_6215_p2.read());
}

void ShuffleNetV2::thread_tmp_489_fu_5181_p2() {
    tmp_489_fu_5181_p2 = (!p_shl47_cast_fu_5166_p1.read().is_01() || !p_shl48_cast_fu_5177_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(p_shl47_cast_fu_5166_p1.read()) - sc_biguint<17>(p_shl48_cast_fu_5177_p1.read()));
}

void ShuffleNetV2::thread_tmp_490_fu_5191_p2() {
    tmp_490_fu_5191_p2 = (!tmp_186_cast1_reg_9090.read().is_01() || !tmp_567_cast_fu_5187_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(tmp_186_cast1_reg_9090.read()) + sc_bigint<18>(tmp_567_cast_fu_5187_p1.read()));
}

void ShuffleNetV2::thread_tmp_491_fu_5221_p3() {
    tmp_491_fu_5221_p3 = esl_concat<11,5>(tmp_259_reg_9377.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_492_cast1_fu_6247_p1() {
    tmp_492_cast1_fu_6247_p1 = esl_sext<15,10>(tmp_423_fu_6242_p2.read());
}

void ShuffleNetV2::thread_tmp_492_cast_fu_6829_p1() {
    tmp_492_cast_fu_6829_p1 = esl_sext<9,8>(tmp_374_fu_6824_p2.read());
}

void ShuffleNetV2::thread_tmp_492_fu_5232_p3() {
    tmp_492_fu_5232_p3 = esl_concat<11,3>(tmp_259_reg_9377.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_493_fu_5243_p2() {
    tmp_493_fu_5243_p2 = (!p_shl45_cast_fu_5228_p1.read().is_01() || !p_shl46_cast_fu_5239_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(p_shl45_cast_fu_5228_p1.read()) - sc_biguint<17>(p_shl46_cast_fu_5239_p1.read()));
}

void ShuffleNetV2::thread_tmp_494_fu_5253_p2() {
    tmp_494_fu_5253_p2 = (!tmp_186_cast1_reg_9090.read().is_01() || !tmp_571_cast_fu_5249_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(tmp_186_cast1_reg_9090.read()) + sc_bigint<18>(tmp_571_cast_fu_5249_p1.read()));
}

void ShuffleNetV2::thread_tmp_495_cast1_fu_6274_p1() {
    tmp_495_cast1_fu_6274_p1 = esl_sext<15,10>(tmp_425_fu_6269_p2.read());
}

void ShuffleNetV2::thread_tmp_495_cast_fu_6934_p1() {
    tmp_495_cast_fu_6934_p1 = esl_sext<9,8>(tmp_376_reg_9905.read());
}

void ShuffleNetV2::thread_tmp_495_fu_5263_p3() {
    tmp_495_fu_5263_p3 = esl_concat<10,5>(tmp_262_reg_9393.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_496_fu_5270_p1() {
    tmp_496_fu_5270_p1 = esl_sext<16,15>(tmp_495_fu_5263_p3.read());
}

void ShuffleNetV2::thread_tmp_497_fu_5278_p3() {
    tmp_497_fu_5278_p3 = esl_concat<10,3>(tmp_262_reg_9393.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_498_cast_fu_6301_p1() {
    tmp_498_cast_fu_6301_p1 = esl_sext<15,11>(tmp_427_fu_6296_p2.read());
}

void ShuffleNetV2::thread_tmp_498_fu_5285_p1() {
    tmp_498_fu_5285_p1 = esl_sext<14,13>(tmp_497_fu_5278_p3.read());
}

void ShuffleNetV2::thread_tmp_499_fu_5293_p2() {
    tmp_499_fu_5293_p2 = (!p_shl43_cast_fu_5274_p1.read().is_01() || !p_shl44_cast_fu_5289_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(p_shl43_cast_fu_5274_p1.read()) - sc_biguint<17>(p_shl44_cast_fu_5289_p1.read()));
}

void ShuffleNetV2::thread_tmp_500_fu_5303_p2() {
    tmp_500_fu_5303_p2 = (!tmp_186_cast1_reg_9090.read().is_01() || !tmp_577_cast_fu_5299_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(tmp_186_cast1_reg_9090.read()) + sc_bigint<18>(tmp_577_cast_fu_5299_p1.read()));
}

void ShuffleNetV2::thread_tmp_501_fu_5313_p3() {
    tmp_501_fu_5313_p3 = esl_concat<10,5>(tmp_265_reg_9399.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_502_fu_5320_p1() {
    tmp_502_fu_5320_p1 = esl_sext<16,15>(tmp_501_fu_5313_p3.read());
}

void ShuffleNetV2::thread_tmp_503_fu_5328_p3() {
    tmp_503_fu_5328_p3 = esl_concat<10,3>(tmp_265_reg_9399.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_504_fu_5335_p1() {
    tmp_504_fu_5335_p1 = esl_sext<14,13>(tmp_503_fu_5328_p3.read());
}

void ShuffleNetV2::thread_tmp_505_cast1_fu_7265_p1() {
    tmp_505_cast1_fu_7265_p1 = esl_sext<11,8>(tmp_382_reg_10009.read());
}

void ShuffleNetV2::thread_tmp_505_cast2_fu_4417_p1() {
    tmp_505_cast2_fu_4417_p1 = esl_sext<16,15>(tmp_431_fu_4411_p2.read());
}

void ShuffleNetV2::thread_tmp_505_cast_cast_fu_7271_p1() {
    tmp_505_cast_cast_fu_7271_p1 = esl_sext<9,8>(tmp_382_reg_10009.read());
}

void ShuffleNetV2::thread_tmp_505_cast_fu_7268_p1() {
    tmp_505_cast_fu_7268_p1 = esl_sext<10,8>(tmp_382_reg_10009.read());
}

void ShuffleNetV2::thread_tmp_505_fu_5343_p2() {
    tmp_505_fu_5343_p2 = (!p_shl41_cast_fu_5324_p1.read().is_01() || !p_shl42_cast_fu_5339_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(p_shl41_cast_fu_5324_p1.read()) - sc_biguint<17>(p_shl42_cast_fu_5339_p1.read()));
}

void ShuffleNetV2::thread_tmp_506_cast_fu_4426_p1() {
    tmp_506_cast_fu_4426_p1 = esl_sext<64,16>(tmp_432_fu_4421_p2.read());
}

void ShuffleNetV2::thread_tmp_506_fu_5353_p2() {
    tmp_506_fu_5353_p2 = (!tmp_186_cast1_reg_9090.read().is_01() || !tmp_583_cast_fu_5349_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(tmp_186_cast1_reg_9090.read()) + sc_bigint<18>(tmp_583_cast_fu_5349_p1.read()));
}

void ShuffleNetV2::thread_tmp_507_fu_4508_p1() {
    tmp_507_fu_4508_p1 = esl_sext<16,14>(tmp_437_fu_4431_p3.read());
}

void ShuffleNetV2::thread_tmp_508_fu_4516_p1() {
    tmp_508_fu_4516_p1 = esl_sext<14,12>(tmp_438_fu_4442_p3.read());
}

void ShuffleNetV2::thread_tmp_509_cast_fu_7316_p1() {
    tmp_509_cast_fu_7316_p1 = esl_sext<32,8>(tmp_385_fu_7312_p2.read());
}

void ShuffleNetV2::thread_tmp_509_fu_4524_p2() {
    tmp_509_fu_4524_p2 = (!p_shl39_cast_fu_4512_p1.read().is_01() || !p_shl40_cast_fu_4520_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(p_shl39_cast_fu_4512_p1.read()) - sc_biguint<17>(p_shl40_cast_fu_4520_p1.read()));
}

void ShuffleNetV2::thread_tmp_510_fu_5361_p2() {
    tmp_510_fu_5361_p2 = (!tmp_186_cast1_reg_9090.read().is_01() || !tmp_589_cast_fu_5358_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(tmp_186_cast1_reg_9090.read()) + sc_bigint<18>(tmp_589_cast_fu_5358_p1.read()));
}

void ShuffleNetV2::thread_tmp_511_fu_4966_p3() {
    tmp_511_fu_4966_p3 = esl_concat<12,5>(tmp_268_reg_9271.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_512_fu_4977_p3() {
    tmp_512_fu_4977_p3 = esl_concat<12,3>(tmp_268_reg_9271.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_513_fu_4988_p2() {
    tmp_513_fu_4988_p2 = (!p_shl37_cast_fu_4973_p1.read().is_01() || !p_shl38_cast_fu_4984_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(p_shl37_cast_fu_4973_p1.read()) - sc_biguint<18>(p_shl38_cast_fu_4984_p1.read()));
}

void ShuffleNetV2::thread_tmp_514_cast_fu_4530_p1() {
    tmp_514_cast_fu_4530_p1 = esl_sext<64,13>(tmp_436_reg_9165.read());
}

void ShuffleNetV2::thread_tmp_514_fu_4998_p2() {
    tmp_514_fu_4998_p2 = (!tmp_186_cast4_reg_9120.read().is_01() || !tmp_593_cast_fu_4994_p1.read().is_01())? sc_lv<19>(): (sc_biguint<19>(tmp_186_cast4_reg_9120.read()) + sc_bigint<19>(tmp_593_cast_fu_4994_p1.read()));
}

void ShuffleNetV2::thread_tmp_515_cast_fu_7585_p1() {
    tmp_515_cast_fu_7585_p1 = esl_sext<10,9>(tmp_391_reg_10039.read());
}

void ShuffleNetV2::thread_tmp_515_fu_6339_p2() {
    tmp_515_fu_6339_p2 = (!tmp_420_reg_9706.read().is_01() || !tmp_309_cast_fu_6335_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_420_reg_9706.read()) + sc_biguint<15>(tmp_309_cast_fu_6335_p1.read()));
}

void ShuffleNetV2::thread_tmp_516_fu_6349_p2() {
    tmp_516_fu_6349_p2 = (!tmp_422_reg_9711.read().is_01() || !tmp_309_cast_fu_6335_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_422_reg_9711.read()) + sc_biguint<15>(tmp_309_cast_fu_6335_p1.read()));
}

void ShuffleNetV2::thread_tmp_517_cast_fu_4459_p1() {
    tmp_517_cast_fu_4459_p1 = esl_sext<16,15>(tmp_439_fu_4453_p2.read());
}

void ShuffleNetV2::thread_tmp_517_fu_6359_p2() {
    tmp_517_fu_6359_p2 = (!tmp_424_reg_9716.read().is_01() || !tmp_309_cast_reg_9739.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_424_reg_9716.read()) + sc_biguint<15>(tmp_309_cast_reg_9739.read()));
}

void ShuffleNetV2::thread_tmp_518_cast_fu_4468_p1() {
    tmp_518_cast_fu_4468_p1 = esl_sext<64,16>(tmp_440_fu_4463_p2.read());
}

void ShuffleNetV2::thread_tmp_518_fu_6368_p2() {
    tmp_518_fu_6368_p2 = (!tmp_426_reg_9721.read().is_01() || !tmp_309_cast_reg_9739.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_426_reg_9721.read()) + sc_biguint<15>(tmp_309_cast_reg_9739.read()));
}

void ShuffleNetV2::thread_tmp_519_fu_6377_p2() {
    tmp_519_fu_6377_p2 = (!tmp_428_reg_9726.read().is_01() || !tmp_309_cast_reg_9739.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_428_reg_9726.read()) + sc_biguint<15>(tmp_309_cast_reg_9739.read()));
}

void ShuffleNetV2::thread_tmp_520_fu_5506_p3() {
    tmp_520_fu_5506_p3 = esl_concat<12,5>(tmp_311_reg_9460.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_521_cast_fu_4563_p1() {
    tmp_521_cast_fu_4563_p1 = esl_sext<17,16>(tmp_443_fu_4557_p2.read());
}

void ShuffleNetV2::thread_tmp_521_fu_5517_p3() {
    tmp_521_fu_5517_p3 = esl_concat<12,3>(tmp_311_reg_9460.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_522_cast_fu_4572_p1() {
    tmp_522_cast_fu_4572_p1 = esl_sext<64,17>(tmp_444_fu_4567_p2.read());
}

void ShuffleNetV2::thread_tmp_522_fu_5528_p2() {
    tmp_522_fu_5528_p2 = (!p_shl95_cast_fu_5513_p1.read().is_01() || !p_shl96_cast_fu_5524_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(p_shl95_cast_fu_5513_p1.read()) - sc_biguint<18>(p_shl96_cast_fu_5524_p1.read()));
}

void ShuffleNetV2::thread_tmp_523_fu_5538_p2() {
    tmp_523_fu_5538_p2 = (!tmp_186_cast4_reg_9120.read().is_01() || !tmp_606_cast_fu_5534_p1.read().is_01())? sc_lv<19>(): (sc_biguint<19>(tmp_186_cast4_reg_9120.read()) + sc_bigint<19>(tmp_606_cast_fu_5534_p1.read()));
}

void ShuffleNetV2::thread_tmp_524_fu_5464_p3() {
    tmp_524_fu_5464_p3 = esl_concat<8,7>(tmp_313_fu_5459_p2.read(), ap_const_lv7_0);
}

void ShuffleNetV2::thread_tmp_525_cast_fu_4605_p1() {
    tmp_525_cast_fu_4605_p1 = esl_sext<17,16>(tmp_447_fu_4599_p2.read());
}

void ShuffleNetV2::thread_tmp_525_fu_5472_p3() {
    tmp_525_fu_5472_p3 = esl_concat<8,5>(tmp_313_fu_5459_p2.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_526_cast_fu_4614_p1() {
    tmp_526_cast_fu_4614_p1 = esl_sext<64,17>(tmp_448_fu_4609_p2.read());
}

void ShuffleNetV2::thread_tmp_526_fu_5484_p2() {
    tmp_526_fu_5484_p2 = (!tmp_524_fu_5464_p3.read().is_01() || !p_shl94_cast_fu_5480_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_524_fu_5464_p3.read()) - sc_bigint<15>(p_shl94_cast_fu_5480_p1.read()));
}

void ShuffleNetV2::thread_tmp_527_fu_5490_p2() {
    tmp_527_fu_5490_p2 = (!tmp_220_cast_reg_9176.read().is_01() || !tmp_526_fu_5484_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(tmp_220_cast_reg_9176.read()) + sc_biguint<15>(tmp_526_fu_5484_p2.read()));
}

void ShuffleNetV2::thread_tmp_528_fu_5548_p3() {
    tmp_528_fu_5548_p3 = esl_concat<12,5>(tmp_314_reg_9471.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_529_cast_fu_4679_p1() {
    tmp_529_cast_fu_4679_p1 = esl_sext<17,16>(tmp_451_fu_4673_p2.read());
}

void ShuffleNetV2::thread_tmp_529_fu_5559_p3() {
    tmp_529_fu_5559_p3 = esl_concat<12,3>(tmp_314_reg_9471.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_530_cast_fu_4688_p1() {
    tmp_530_cast_fu_4688_p1 = esl_sext<64,17>(tmp_452_fu_4683_p2.read());
}

void ShuffleNetV2::thread_tmp_530_fu_5570_p2() {
    tmp_530_fu_5570_p2 = (!p_shl91_cast_fu_5555_p1.read().is_01() || !p_shl92_cast_fu_5566_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(p_shl91_cast_fu_5555_p1.read()) - sc_biguint<18>(p_shl92_cast_fu_5566_p1.read()));
}

void ShuffleNetV2::thread_tmp_531_fu_5580_p2() {
    tmp_531_fu_5580_p2 = (!tmp_186_cast4_reg_9120.read().is_01() || !tmp_617_cast_fu_5576_p1.read().is_01())? sc_lv<19>(): (sc_biguint<19>(tmp_186_cast4_reg_9120.read()) + sc_bigint<19>(tmp_617_cast_fu_5576_p1.read()));
}

void ShuffleNetV2::thread_tmp_532_fu_5621_p3() {
    tmp_532_fu_5621_p3 = esl_concat<12,5>(tmp_315_reg_9487.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_533_cast_fu_4721_p1() {
    tmp_533_cast_fu_4721_p1 = esl_sext<17,16>(tmp_455_fu_4715_p2.read());
}

void ShuffleNetV2::thread_tmp_533_fu_5632_p3() {
    tmp_533_fu_5632_p3 = esl_concat<12,3>(tmp_315_reg_9487.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_534_cast_fu_4730_p1() {
    tmp_534_cast_fu_4730_p1 = esl_sext<64,17>(tmp_456_fu_4725_p2.read());
}

void ShuffleNetV2::thread_tmp_534_fu_5643_p2() {
    tmp_534_fu_5643_p2 = (!p_shl89_cast_fu_5628_p1.read().is_01() || !p_shl90_cast_fu_5639_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(p_shl89_cast_fu_5628_p1.read()) - sc_biguint<18>(p_shl90_cast_fu_5639_p1.read()));
}

void ShuffleNetV2::thread_tmp_535_fu_5653_p2() {
    tmp_535_fu_5653_p2 = (!tmp_186_cast4_reg_9120.read().is_01() || !tmp_621_cast_fu_5649_p1.read().is_01())? sc_lv<19>(): (sc_biguint<19>(tmp_186_cast4_reg_9120.read()) + sc_bigint<19>(tmp_621_cast_fu_5649_p1.read()));
}

void ShuffleNetV2::thread_tmp_536_fu_5663_p3() {
    tmp_536_fu_5663_p3 = esl_concat<12,5>(tmp_316_reg_9493.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_537_cast_fu_4775_p1() {
    tmp_537_cast_fu_4775_p1 = esl_sext<17,16>(tmp_459_fu_4769_p2.read());
}

void ShuffleNetV2::thread_tmp_537_fu_5674_p3() {
    tmp_537_fu_5674_p3 = esl_concat<12,3>(tmp_316_reg_9493.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_538_cast_fu_4832_p1() {
    tmp_538_cast_fu_4832_p1 = esl_sext<64,17>(tmp_460_reg_9287.read());
}

void ShuffleNetV2::thread_tmp_538_fu_5685_p2() {
    tmp_538_fu_5685_p2 = (!p_shl87_cast_fu_5670_p1.read().is_01() || !p_shl88_cast_fu_5681_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(p_shl87_cast_fu_5670_p1.read()) - sc_biguint<18>(p_shl88_cast_fu_5681_p1.read()));
}

void ShuffleNetV2::thread_tmp_539_fu_5695_p2() {
    tmp_539_fu_5695_p2 = (!tmp_186_cast4_reg_9120.read().is_01() || !tmp_625_cast_fu_5691_p1.read().is_01())? sc_lv<19>(): (sc_biguint<19>(tmp_186_cast4_reg_9120.read()) + sc_bigint<19>(tmp_625_cast_fu_5691_p1.read()));
}

void ShuffleNetV2::thread_tmp_540_fu_5727_p3() {
    tmp_540_fu_5727_p3 = esl_concat<11,5>(tmp_317_reg_9527.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_541_fu_5734_p1() {
    tmp_541_fu_5734_p1 = esl_sext<17,16>(tmp_540_fu_5727_p3.read());
}

void ShuffleNetV2::thread_tmp_542_fu_5742_p3() {
    tmp_542_fu_5742_p3 = esl_concat<11,3>(tmp_317_reg_9527.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_543_cast_fu_4820_p1() {
    tmp_543_cast_fu_4820_p1 = esl_sext<17,16>(tmp_465_fu_4814_p2.read());
}

void ShuffleNetV2::thread_tmp_543_fu_5749_p1() {
    tmp_543_fu_5749_p1 = esl_sext<15,14>(tmp_542_fu_5742_p3.read());
}

void ShuffleNetV2::thread_tmp_544_cast_fu_4836_p1() {
    tmp_544_cast_fu_4836_p1 = esl_sext<64,17>(tmp_466_reg_9292.read());
}

void ShuffleNetV2::thread_tmp_544_fu_5757_p2() {
    tmp_544_fu_5757_p2 = (!p_shl85_cast_fu_5738_p1.read().is_01() || !p_shl86_cast_fu_5753_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(p_shl85_cast_fu_5738_p1.read()) - sc_biguint<18>(p_shl86_cast_fu_5753_p1.read()));
}

void ShuffleNetV2::thread_tmp_545_fu_5767_p2() {
    tmp_545_fu_5767_p2 = (!tmp_186_cast4_reg_9120.read().is_01() || !tmp_631_cast_fu_5763_p1.read().is_01())? sc_lv<19>(): (sc_biguint<19>(tmp_186_cast4_reg_9120.read()) + sc_bigint<19>(tmp_631_cast_fu_5763_p1.read()));
}

void ShuffleNetV2::thread_tmp_546_fu_5777_p3() {
    tmp_546_fu_5777_p3 = esl_concat<13,5>(tmp_318_reg_9533.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_547_cast_fu_4890_p1() {
    tmp_547_cast_fu_4890_p1 = esl_sext<18,17>(tmp_469_fu_4884_p2.read());
}

void ShuffleNetV2::thread_tmp_547_fu_5788_p3() {
    tmp_547_fu_5788_p3 = esl_concat<13,3>(tmp_318_reg_9533.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_548_cast_fu_4899_p1() {
    tmp_548_cast_fu_4899_p1 = esl_sext<64,18>(tmp_470_fu_4894_p2.read());
}

void ShuffleNetV2::thread_tmp_548_fu_5799_p2() {
    tmp_548_fu_5799_p2 = (!p_shl83_cast_fu_5784_p1.read().is_01() || !p_shl84_cast_fu_5795_p1.read().is_01())? sc_lv<19>(): (sc_biguint<19>(p_shl83_cast_fu_5784_p1.read()) - sc_biguint<19>(p_shl84_cast_fu_5795_p1.read()));
}

void ShuffleNetV2::thread_tmp_549_fu_5805_p2() {
    tmp_549_fu_5805_p2 = (!tmp_186_cast4_reg_9120.read().is_01() || !tmp_548_fu_5799_p2.read().is_01())? sc_lv<19>(): (sc_biguint<19>(tmp_186_cast4_reg_9120.read()) + sc_biguint<19>(tmp_548_fu_5799_p2.read()));
}

void ShuffleNetV2::thread_tmp_550_fu_5845_p3() {
    tmp_550_fu_5845_p3 = esl_concat<13,5>(tmp_319_reg_9549.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_551_cast_fu_4932_p1() {
    tmp_551_cast_fu_4932_p1 = esl_sext<18,17>(tmp_473_fu_4926_p2.read());
}

void ShuffleNetV2::thread_tmp_551_fu_5856_p3() {
    tmp_551_fu_5856_p3 = esl_concat<13,3>(tmp_319_reg_9549.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_552_cast_fu_4941_p1() {
    tmp_552_cast_fu_4941_p1 = esl_sext<64,18>(tmp_474_fu_4936_p2.read());
}

void ShuffleNetV2::thread_tmp_552_fu_5867_p2() {
    tmp_552_fu_5867_p2 = (!p_shl81_cast_fu_5852_p1.read().is_01() || !p_shl82_cast_fu_5863_p1.read().is_01())? sc_lv<19>(): (sc_biguint<19>(p_shl81_cast_fu_5852_p1.read()) - sc_biguint<19>(p_shl82_cast_fu_5863_p1.read()));
}

void ShuffleNetV2::thread_tmp_553_fu_5873_p2() {
    tmp_553_fu_5873_p2 = (!tmp_186_cast4_reg_9120.read().is_01() || !tmp_552_fu_5867_p2.read().is_01())? sc_lv<19>(): (sc_biguint<19>(tmp_186_cast4_reg_9120.read()) + sc_biguint<19>(tmp_552_fu_5867_p2.read()));
}

void ShuffleNetV2::thread_tmp_554_fu_5883_p3() {
    tmp_554_fu_5883_p3 = esl_concat<13,5>(tmp_320_reg_9555.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_555_cast_fu_5031_p1() {
    tmp_555_cast_fu_5031_p1 = esl_sext<18,17>(tmp_477_fu_5025_p2.read());
}

void ShuffleNetV2::thread_tmp_555_fu_5894_p3() {
    tmp_555_fu_5894_p3 = esl_concat<13,3>(tmp_320_reg_9555.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_556_cast_fu_5040_p1() {
    tmp_556_cast_fu_5040_p1 = esl_sext<64,18>(tmp_478_fu_5035_p2.read());
}

void ShuffleNetV2::thread_tmp_556_fu_5905_p2() {
    tmp_556_fu_5905_p2 = (!p_shl79_cast_fu_5890_p1.read().is_01() || !p_shl80_cast_fu_5901_p1.read().is_01())? sc_lv<19>(): (sc_biguint<19>(p_shl79_cast_fu_5890_p1.read()) - sc_biguint<19>(p_shl80_cast_fu_5901_p1.read()));
}

void ShuffleNetV2::thread_tmp_557_fu_5911_p2() {
    tmp_557_fu_5911_p2 = (!tmp_186_cast4_reg_9120.read().is_01() || !tmp_556_fu_5905_p2.read().is_01())? sc_lv<19>(): (sc_biguint<19>(tmp_186_cast4_reg_9120.read()) + sc_biguint<19>(tmp_556_fu_5905_p2.read()));
}

void ShuffleNetV2::thread_tmp_558_fu_5921_p3() {
    tmp_558_fu_5921_p3 = esl_concat<13,5>(tmp_321_reg_9561.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_559_cast_fu_5073_p1() {
    tmp_559_cast_fu_5073_p1 = esl_sext<18,17>(tmp_481_fu_5067_p2.read());
}

void ShuffleNetV2::thread_tmp_559_fu_5932_p3() {
    tmp_559_fu_5932_p3 = esl_concat<13,3>(tmp_321_reg_9561.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_560_cast_fu_5082_p1() {
    tmp_560_cast_fu_5082_p1 = esl_sext<64,18>(tmp_482_fu_5077_p2.read());
}

void ShuffleNetV2::thread_tmp_560_fu_5943_p2() {
    tmp_560_fu_5943_p2 = (!p_shl77_cast_fu_5928_p1.read().is_01() || !p_shl78_cast_fu_5939_p1.read().is_01())? sc_lv<19>(): (sc_biguint<19>(p_shl77_cast_fu_5928_p1.read()) - sc_biguint<19>(p_shl78_cast_fu_5939_p1.read()));
}

void ShuffleNetV2::thread_tmp_561_fu_5949_p2() {
    tmp_561_fu_5949_p2 = (!tmp_186_cast4_reg_9120.read().is_01() || !tmp_560_fu_5943_p2.read().is_01())? sc_lv<19>(): (sc_biguint<19>(tmp_186_cast4_reg_9120.read()) + sc_biguint<19>(tmp_560_fu_5943_p2.read()));
}

void ShuffleNetV2::thread_tmp_562_fu_6463_p3() {
    tmp_562_fu_6463_p3 = esl_concat<8,2>(tmp_354_fu_6454_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_563_cast_fu_5145_p1() {
    tmp_563_cast_fu_5145_p1 = esl_sext<18,17>(tmp_485_fu_5139_p2.read());
}

void ShuffleNetV2::thread_tmp_563_fu_6475_p2() {
    tmp_563_fu_6475_p2 = (!p_shl128_cast_fu_6471_p1.read().is_01() || !tmp_355_cast_fu_6459_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl128_cast_fu_6471_p1.read()) - sc_biguint<11>(tmp_355_cast_fu_6459_p1.read()));
}

void ShuffleNetV2::thread_tmp_564_cast_fu_5154_p1() {
    tmp_564_cast_fu_5154_p1 = esl_sext<64,18>(tmp_486_fu_5149_p2.read());
}

void ShuffleNetV2::thread_tmp_564_fu_6485_p2() {
    tmp_564_fu_6485_p2 = (!tmp_218_cast1_reg_9665.read().is_01() || !tmp_654_cast_fu_6481_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp_218_cast1_reg_9665.read()) + sc_bigint<12>(tmp_654_cast_fu_6481_p1.read()));
}

void ShuffleNetV2::thread_tmp_565_fu_6595_p2() {
    tmp_565_fu_6595_p2 = (!p_shl127_cast_fu_6591_p1.read().is_01() || !tmp_655_cast_fu_6581_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_shl127_cast_fu_6591_p1.read()) - sc_bigint<15>(tmp_655_cast_fu_6581_p1.read()));
}

void ShuffleNetV2::thread_tmp_566_fu_6601_p2() {
    tmp_566_fu_6601_p2 = (!tmp_309_cast_reg_9739.read().is_01() || !tmp_565_fu_6595_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_309_cast_reg_9739.read()) + sc_biguint<15>(tmp_565_fu_6595_p2.read()));
}

void ShuffleNetV2::thread_tmp_567_cast_fu_5187_p1() {
    tmp_567_cast_fu_5187_p1 = esl_sext<18,17>(tmp_489_fu_5181_p2.read());
}

void ShuffleNetV2::thread_tmp_567_fu_6497_p3() {
    tmp_567_fu_6497_p3 = esl_concat<7,2>(tmp_356_reg_9821.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_568_cast_fu_5196_p1() {
    tmp_568_cast_fu_5196_p1 = esl_sext<64,18>(tmp_490_fu_5191_p2.read());
}

void ShuffleNetV2::thread_tmp_568_fu_6504_p1() {
    tmp_568_fu_6504_p1 = esl_sext<34,9>(tmp_567_fu_6497_p3.read());
}

void ShuffleNetV2::thread_tmp_569_fu_6512_p2() {
    tmp_569_fu_6512_p2 = (!p_shl126_cast_fu_6508_p1.read().is_01() || !tmp_357_cast_fu_6493_p1.read().is_01())? sc_lv<35>(): (sc_biguint<35>(p_shl126_cast_fu_6508_p1.read()) - sc_biguint<35>(tmp_357_cast_fu_6493_p1.read()));
}

void ShuffleNetV2::thread_tmp_570_fu_6522_p2() {
    tmp_570_fu_6522_p2 = (!tmp_218_cast4_reg_9684.read().is_01() || !tmp_661_cast_fu_6518_p1.read().is_01())? sc_lv<36>(): (sc_biguint<36>(tmp_218_cast4_reg_9684.read()) + sc_bigint<36>(tmp_661_cast_fu_6518_p1.read()));
}

void ShuffleNetV2::thread_tmp_571_cast_fu_5249_p1() {
    tmp_571_cast_fu_5249_p1 = esl_sext<18,17>(tmp_493_fu_5243_p2.read());
}

void ShuffleNetV2::thread_tmp_571_fu_6618_p2() {
    tmp_571_fu_6618_p2 = (!p_shl125_cast_fu_6611_p3.read().is_01() || !tmp_135_reg_9839.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl125_cast_fu_6611_p3.read()) - sc_biguint<10>(tmp_135_reg_9839.read()));
}

void ShuffleNetV2::thread_tmp_572_cast_fu_5258_p1() {
    tmp_572_cast_fu_5258_p1 = esl_sext<64,18>(tmp_494_fu_5253_p2.read());
}

void ShuffleNetV2::thread_tmp_572_fu_6623_p2() {
    tmp_572_fu_6623_p2 = (!tmp_309_cast1_reg_9795.read().is_01() || !tmp_571_fu_6618_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_309_cast1_reg_9795.read()) + sc_biguint<10>(tmp_571_fu_6618_p2.read()));
}

void ShuffleNetV2::thread_tmp_573_fu_6550_p3() {
    tmp_573_fu_6550_p3 = esl_concat<8,2>(tmp_358_fu_6541_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_574_fu_6562_p2() {
    tmp_574_fu_6562_p2 = (!p_shl124_cast_fu_6558_p1.read().is_01() || !tmp_359_cast_fu_6546_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl124_cast_fu_6558_p1.read()) - sc_biguint<11>(tmp_359_cast_fu_6546_p1.read()));
}

void ShuffleNetV2::thread_tmp_575_fu_6568_p2() {
    tmp_575_fu_6568_p2 = (!tmp_218_cast6_reg_9701.read().is_01() || !tmp_574_fu_6562_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_218_cast6_reg_9701.read()) + sc_biguint<11>(tmp_574_fu_6562_p2.read()));
}

void ShuffleNetV2::thread_tmp_576_fu_6642_p2() {
    tmp_576_fu_6642_p2 = (!p_shl123_cast_fu_6638_p1.read().is_01() || !tmp_668_cast_fu_6628_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_shl123_cast_fu_6638_p1.read()) - sc_bigint<15>(tmp_668_cast_fu_6628_p1.read()));
}

void ShuffleNetV2::thread_tmp_577_cast_fu_5299_p1() {
    tmp_577_cast_fu_5299_p1 = esl_sext<18,17>(tmp_499_fu_5293_p2.read());
}

void ShuffleNetV2::thread_tmp_577_fu_6648_p2() {
    tmp_577_fu_6648_p2 = (!tmp_309_cast_reg_9739.read().is_01() || !tmp_576_fu_6642_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_309_cast_reg_9739.read()) + sc_biguint<15>(tmp_576_fu_6642_p2.read()));
}

void ShuffleNetV2::thread_tmp_578_cast_fu_5308_p1() {
    tmp_578_cast_fu_5308_p1 = esl_sext<64,18>(tmp_500_fu_5303_p2.read());
}

void ShuffleNetV2::thread_tmp_578_fu_6674_p3() {
    tmp_578_fu_6674_p3 = esl_concat<9,2>(tmp_361_fu_6665_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_579_fu_6686_p2() {
    tmp_579_fu_6686_p2 = (!p_shl122_cast_fu_6682_p1.read().is_01() || !tmp_363_cast_fu_6670_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(p_shl122_cast_fu_6682_p1.read()) - sc_biguint<12>(tmp_363_cast_fu_6670_p1.read()));
}

void ShuffleNetV2::thread_tmp_580_fu_6696_p2() {
    tmp_580_fu_6696_p2 = (!tmp_218_cast5_reg_9690.read().is_01() || !tmp_673_cast_fu_6692_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_218_cast5_reg_9690.read()) + sc_bigint<13>(tmp_673_cast_fu_6692_p1.read()));
}

void ShuffleNetV2::thread_tmp_581_fu_6892_p2() {
    tmp_581_fu_6892_p2 = (!p_shl121_cast_fu_6885_p3.read().is_01() || !tmp_674_cast_fu_6882_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl121_cast_fu_6885_p3.read()) - sc_bigint<15>(tmp_674_cast_fu_6882_p1.read()));
}

void ShuffleNetV2::thread_tmp_582_fu_6898_p2() {
    tmp_582_fu_6898_p2 = (!tmp_309_cast_reg_9739.read().is_01() || !tmp_581_fu_6892_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_309_cast_reg_9739.read()) + sc_biguint<15>(tmp_581_fu_6892_p2.read()));
}

void ShuffleNetV2::thread_tmp_583_cast_fu_5349_p1() {
    tmp_583_cast_fu_5349_p1 = esl_sext<18,17>(tmp_505_fu_5343_p2.read());
}

void ShuffleNetV2::thread_tmp_583_fu_6716_p3() {
    tmp_583_fu_6716_p3 = esl_concat<9,2>(tmp_365_fu_6707_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_584_cast_fu_5366_p1() {
    tmp_584_cast_fu_5366_p1 = esl_sext<64,18>(tmp_506_reg_9415.read());
}

void ShuffleNetV2::thread_tmp_584_fu_6728_p2() {
    tmp_584_fu_6728_p2 = (!p_shl120_cast_fu_6724_p1.read().is_01() || !tmp_367_cast_fu_6712_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(p_shl120_cast_fu_6724_p1.read()) - sc_biguint<12>(tmp_367_cast_fu_6712_p1.read()));
}

void ShuffleNetV2::thread_tmp_585_fu_6738_p2() {
    tmp_585_fu_6738_p2 = (!tmp_218_cast5_reg_9690.read().is_01() || !tmp_679_cast_fu_6734_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_218_cast5_reg_9690.read()) + sc_bigint<13>(tmp_679_cast_fu_6734_p1.read()));
}

void ShuffleNetV2::thread_tmp_586_fu_6918_p2() {
    tmp_586_fu_6918_p2 = (!p_shl119_cast_fu_6911_p3.read().is_01() || !tmp_680_cast_fu_6908_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl119_cast_fu_6911_p3.read()) - sc_bigint<15>(tmp_680_cast_fu_6908_p1.read()));
}

void ShuffleNetV2::thread_tmp_587_fu_6924_p2() {
    tmp_587_fu_6924_p2 = (!tmp_309_cast_reg_9739.read().is_01() || !tmp_586_fu_6918_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_309_cast_reg_9739.read()) + sc_biguint<15>(tmp_586_fu_6918_p2.read()));
}

void ShuffleNetV2::thread_tmp_588_fu_6758_p3() {
    tmp_588_fu_6758_p3 = esl_concat<9,2>(tmp_369_fu_6749_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_589_cast_fu_5358_p1() {
    tmp_589_cast_fu_5358_p1 = esl_sext<18,17>(tmp_509_reg_9223.read());
}

void ShuffleNetV2::thread_tmp_589_fu_6770_p2() {
    tmp_589_fu_6770_p2 = (!p_shl118_cast_fu_6766_p1.read().is_01() || !tmp_371_cast_fu_6754_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(p_shl118_cast_fu_6766_p1.read()) - sc_biguint<12>(tmp_371_cast_fu_6754_p1.read()));
}

void ShuffleNetV2::thread_tmp_590_cast_fu_5370_p1() {
    tmp_590_cast_fu_5370_p1 = esl_sext<64,18>(tmp_510_reg_9420.read());
}

void ShuffleNetV2::thread_tmp_590_fu_6776_p2() {
    tmp_590_fu_6776_p2 = (!tmp_218_cast1_reg_9665.read().is_01() || !tmp_589_fu_6770_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp_218_cast1_reg_9665.read()) + sc_biguint<12>(tmp_589_fu_6770_p2.read()));
}

void ShuffleNetV2::thread_tmp_591_fu_7034_p2() {
    tmp_591_fu_7034_p2 = (!p_shl117_cast_fu_7030_p1.read().is_01() || !tmp_686_cast_fu_7020_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_shl117_cast_fu_7030_p1.read()) - sc_bigint<15>(tmp_686_cast_fu_7020_p1.read()));
}

void ShuffleNetV2::thread_tmp_592_fu_7040_p2() {
    tmp_592_fu_7040_p2 = (!tmp_309_cast_reg_9739.read().is_01() || !tmp_591_fu_7034_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_309_cast_reg_9739.read()) + sc_biguint<15>(tmp_591_fu_7034_p2.read()));
}

void ShuffleNetV2::thread_tmp_593_cast_fu_4994_p1() {
    tmp_593_cast_fu_4994_p1 = esl_sext<19,18>(tmp_513_fu_4988_p2.read());
}

void ShuffleNetV2::thread_tmp_593_fu_6796_p3() {
    tmp_593_fu_6796_p3 = esl_concat<9,2>(tmp_372_fu_6787_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_594_cast_fu_5374_p1() {
    tmp_594_cast_fu_5374_p1 = esl_sext<64,19>(tmp_514_reg_9350.read());
}

void ShuffleNetV2::thread_tmp_594_fu_6808_p2() {
    tmp_594_fu_6808_p2 = (!p_shl116_cast_fu_6804_p1.read().is_01() || !tmp_373_cast_fu_6792_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(p_shl116_cast_fu_6804_p1.read()) - sc_biguint<12>(tmp_373_cast_fu_6792_p1.read()));
}

void ShuffleNetV2::thread_tmp_595_fu_6814_p2() {
    tmp_595_fu_6814_p2 = (!tmp_218_cast1_reg_9665.read().is_01() || !tmp_594_fu_6808_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp_218_cast1_reg_9665.read()) + sc_biguint<12>(tmp_594_fu_6808_p2.read()));
}

void ShuffleNetV2::thread_tmp_596_fu_7064_p2() {
    tmp_596_fu_7064_p2 = (!p_shl115_cast_fu_7060_p1.read().is_01() || !tmp_692_cast_fu_7050_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_shl115_cast_fu_7060_p1.read()) - sc_bigint<15>(tmp_692_cast_fu_7050_p1.read()));
}

void ShuffleNetV2::thread_tmp_597_cast_fu_6344_p1() {
    tmp_597_cast_fu_6344_p1 = esl_zext<64,15>(tmp_515_fu_6339_p2.read());
}

void ShuffleNetV2::thread_tmp_597_fu_7070_p2() {
    tmp_597_fu_7070_p2 = (!tmp_309_cast_reg_9739.read().is_01() || !tmp_596_fu_7064_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_309_cast_reg_9739.read()) + sc_biguint<15>(tmp_596_fu_7064_p2.read()));
}

void ShuffleNetV2::thread_tmp_598_cast_fu_6354_p1() {
    tmp_598_cast_fu_6354_p1 = esl_zext<64,15>(tmp_516_fu_6349_p2.read());
}

void ShuffleNetV2::thread_tmp_598_fu_6837_p3() {
    tmp_598_fu_6837_p3 = esl_concat<8,2>(tmp_374_fu_6824_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_599_cast_fu_6363_p1() {
    tmp_599_cast_fu_6363_p1 = esl_zext<64,15>(tmp_517_fu_6359_p2.read());
}

void ShuffleNetV2::thread_tmp_599_fu_6845_p1() {
    tmp_599_fu_6845_p1 = esl_sext<11,10>(tmp_598_fu_6837_p3.read());
}

void ShuffleNetV2::thread_tmp_600_cast_fu_6372_p1() {
    tmp_600_cast_fu_6372_p1 = esl_zext<64,15>(tmp_518_fu_6368_p2.read());
}

void ShuffleNetV2::thread_tmp_600_fu_6853_p2() {
    tmp_600_fu_6853_p2 = (!p_shl114_cast_fu_6849_p1.read().is_01() || !tmp_375_cast_fu_6833_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(p_shl114_cast_fu_6849_p1.read()) - sc_biguint<12>(tmp_375_cast_fu_6833_p1.read()));
}

void ShuffleNetV2::thread_tmp_601_cast_fu_6381_p1() {
    tmp_601_cast_fu_6381_p1 = esl_zext<64,15>(tmp_519_fu_6377_p2.read());
}

void ShuffleNetV2::thread_tmp_601_fu_6859_p2() {
    tmp_601_fu_6859_p2 = (!tmp_218_cast1_reg_9665.read().is_01() || !tmp_600_fu_6853_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp_218_cast1_reg_9665.read()) + sc_biguint<12>(tmp_600_fu_6853_p2.read()));
}

void ShuffleNetV2::thread_tmp_602_fu_7094_p2() {
    tmp_602_fu_7094_p2 = (!p_shl113_cast_fu_7090_p1.read().is_01() || !tmp_699_cast_fu_7080_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_shl113_cast_fu_7090_p1.read()) - sc_bigint<15>(tmp_699_cast_fu_7080_p1.read()));
}

void ShuffleNetV2::thread_tmp_603_fu_7100_p2() {
    tmp_603_fu_7100_p2 = (!tmp_309_cast_reg_9739.read().is_01() || !tmp_602_fu_7094_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_309_cast_reg_9739.read()) + sc_biguint<15>(tmp_602_fu_7094_p2.read()));
}

void ShuffleNetV2::thread_tmp_604_fu_6941_p3() {
    tmp_604_fu_6941_p3 = esl_concat<8,2>(tmp_376_reg_9905.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_605_fu_6948_p1() {
    tmp_605_fu_6948_p1 = esl_sext<11,10>(tmp_604_fu_6941_p3.read());
}

void ShuffleNetV2::thread_tmp_606_cast_fu_5534_p1() {
    tmp_606_cast_fu_5534_p1 = esl_sext<19,18>(tmp_522_fu_5528_p2.read());
}

void ShuffleNetV2::thread_tmp_606_fu_6956_p2() {
    tmp_606_fu_6956_p2 = (!p_shl112_cast_fu_6952_p1.read().is_01() || !tmp_377_cast_fu_6937_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(p_shl112_cast_fu_6952_p1.read()) - sc_biguint<12>(tmp_377_cast_fu_6937_p1.read()));
}

void ShuffleNetV2::thread_tmp_607_cast_fu_5543_p1() {
    tmp_607_cast_fu_5543_p1 = esl_sext<64,19>(tmp_523_fu_5538_p2.read());
}

void ShuffleNetV2::thread_tmp_607_fu_6966_p2() {
    tmp_607_fu_6966_p2 = (!tmp_218_cast5_reg_9690.read().is_01() || !tmp_705_cast_fu_6962_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_218_cast5_reg_9690.read()) + sc_bigint<13>(tmp_705_cast_fu_6962_p1.read()));
}

void ShuffleNetV2::thread_tmp_608_fu_7115_p2() {
    tmp_608_fu_7115_p2 = (!p_shl111_cast_fu_7108_p3.read().is_01() || !tmp_706_cast_fu_7105_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl111_cast_fu_7108_p3.read()) - sc_bigint<15>(tmp_706_cast_fu_7105_p1.read()));
}

void ShuffleNetV2::thread_tmp_609_fu_7121_p2() {
    tmp_609_fu_7121_p2 = (!tmp_309_cast_reg_9739.read().is_01() || !tmp_608_fu_7115_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_309_cast_reg_9739.read()) + sc_biguint<15>(tmp_608_fu_7115_p2.read()));
}

void ShuffleNetV2::thread_tmp_610_fu_7129_p3() {
    tmp_610_fu_7129_p3 = esl_concat<10,2>(tmp_378_reg_9939.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_611_fu_7140_p2() {
    tmp_611_fu_7140_p2 = (!p_shl110_cast_fu_7136_p1.read().is_01() || !tmp_379_cast_fu_7126_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl110_cast_fu_7136_p1.read()) - sc_biguint<13>(tmp_379_cast_fu_7126_p1.read()));
}

void ShuffleNetV2::thread_tmp_612_fu_7150_p2() {
    tmp_612_fu_7150_p2 = (!tmp_218_cast3_reg_9678.read().is_01() || !tmp_711_cast_fu_7146_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_218_cast3_reg_9678.read()) + sc_bigint<14>(tmp_711_cast_fu_7146_p1.read()));
}

void ShuffleNetV2::thread_tmp_613_fu_7171_p2() {
    tmp_613_fu_7171_p2 = (!p_shl109_cast_fu_7163_p3.read().is_01() || !tmp_712_cast_fu_7155_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl109_cast_fu_7163_p3.read()) - sc_bigint<15>(tmp_712_cast_fu_7155_p1.read()));
}

void ShuffleNetV2::thread_tmp_614_cast_fu_5616_p1() {
    tmp_614_cast_fu_5616_p1 = esl_sext<64,15>(tmp_527_reg_9466.read());
}

void ShuffleNetV2::thread_tmp_614_fu_7177_p2() {
    tmp_614_fu_7177_p2 = (!tmp_309_cast_reg_9739.read().is_01() || !tmp_613_fu_7171_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_309_cast_reg_9739.read()) + sc_biguint<15>(tmp_613_fu_7171_p2.read()));
}

void ShuffleNetV2::thread_tmp_615_fu_6997_p3() {
    tmp_615_fu_6997_p3 = esl_concat<10,2>(tmp_380_fu_6988_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_616_fu_7009_p2() {
    tmp_616_fu_7009_p2 = (!p_shl108_cast_fu_7005_p1.read().is_01() || !tmp_381_cast_fu_6993_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl108_cast_fu_7005_p1.read()) - sc_biguint<13>(tmp_381_cast_fu_6993_p1.read()));
}

void ShuffleNetV2::thread_tmp_617_cast_fu_5576_p1() {
    tmp_617_cast_fu_5576_p1 = esl_sext<19,18>(tmp_530_fu_5570_p2.read());
}

void ShuffleNetV2::thread_tmp_617_fu_7015_p2() {
    tmp_617_fu_7015_p2 = (!tmp_218_cast5_reg_9690.read().is_01() || !tmp_616_fu_7009_p2.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_218_cast5_reg_9690.read()) + sc_biguint<13>(tmp_616_fu_7009_p2.read()));
}

void ShuffleNetV2::thread_tmp_618_cast_fu_5585_p1() {
    tmp_618_cast_fu_5585_p1 = esl_sext<64,19>(tmp_531_fu_5580_p2.read());
}

void ShuffleNetV2::thread_tmp_618_fu_7192_p2() {
    tmp_618_fu_7192_p2 = (!p_shl107_cast_fu_7185_p3.read().is_01() || !tmp_718_cast_fu_7182_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl107_cast_fu_7185_p3.read()) - sc_bigint<15>(tmp_718_cast_fu_7182_p1.read()));
}

void ShuffleNetV2::thread_tmp_619_fu_7198_p2() {
    tmp_619_fu_7198_p2 = (!tmp_309_cast_reg_9739.read().is_01() || !tmp_618_fu_7192_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_309_cast_reg_9739.read()) + sc_biguint<15>(tmp_618_fu_7192_p2.read()));
}

void ShuffleNetV2::thread_tmp_620_fu_8831_p3() {
    tmp_620_fu_8831_p3 = esl_concat<4,9>(co_i_reg_3283.read(), ap_const_lv9_0);
}

void ShuffleNetV2::thread_tmp_621_cast_fu_5649_p1() {
    tmp_621_cast_fu_5649_p1 = esl_sext<19,18>(tmp_534_fu_5643_p2.read());
}

void ShuffleNetV2::thread_tmp_621_fu_7289_p3() {
    tmp_621_fu_7289_p3 = esl_concat<10,2>(tmp_383_fu_7280_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_622_cast_fu_5658_p1() {
    tmp_622_cast_fu_5658_p1 = esl_sext<64,19>(tmp_535_fu_5653_p2.read());
}

void ShuffleNetV2::thread_tmp_622_fu_7301_p2() {
    tmp_622_fu_7301_p2 = (!p_shl140_cast_fu_7297_p1.read().is_01() || !tmp_384_cast_fu_7285_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl140_cast_fu_7297_p1.read()) - sc_biguint<13>(tmp_384_cast_fu_7285_p1.read()));
}

void ShuffleNetV2::thread_tmp_623_fu_7307_p2() {
    tmp_623_fu_7307_p2 = (!tmp_622_fu_7301_p2.read().is_01() || !tmp_218_cast5_reg_9690.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_622_fu_7301_p2.read()) + sc_biguint<13>(tmp_218_cast5_reg_9690.read()));
}

void ShuffleNetV2::thread_tmp_624_fu_7426_p2() {
    tmp_624_fu_7426_p2 = (!p_shl139_cast_fu_7419_p3.read().is_01() || !tmp_728_cast_fu_7416_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl139_cast_fu_7419_p3.read()) - sc_bigint<15>(tmp_728_cast_fu_7416_p1.read()));
}

void ShuffleNetV2::thread_tmp_625_cast_fu_5691_p1() {
    tmp_625_cast_fu_5691_p1 = esl_sext<19,18>(tmp_538_fu_5685_p2.read());
}

void ShuffleNetV2::thread_tmp_625_fu_7432_p2() {
    tmp_625_fu_7432_p2 = (!tmp_624_fu_7426_p2.read().is_01() || !tmp_309_cast_reg_9739.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_624_fu_7426_p2.read()) + sc_biguint<15>(tmp_309_cast_reg_9739.read()));
}

void ShuffleNetV2::thread_tmp_626_cast_fu_5700_p1() {
    tmp_626_cast_fu_5700_p1 = esl_sext<64,19>(tmp_539_fu_5695_p2.read());
}

void ShuffleNetV2::thread_tmp_626_fu_7324_p3() {
    tmp_626_fu_7324_p3 = esl_concat<8,2>(tmp_385_fu_7312_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_627_fu_7332_p1() {
    tmp_627_fu_7332_p1 = esl_sext<34,10>(tmp_626_fu_7324_p3.read());
}

void ShuffleNetV2::thread_tmp_628_fu_7340_p2() {
    tmp_628_fu_7340_p2 = (!p_shl138_cast_fu_7336_p1.read().is_01() || !tmp_386_cast_fu_7320_p1.read().is_01())? sc_lv<35>(): (sc_biguint<35>(p_shl138_cast_fu_7336_p1.read()) - sc_biguint<35>(tmp_386_cast_fu_7320_p1.read()));
}

void ShuffleNetV2::thread_tmp_629_fu_7350_p2() {
    tmp_629_fu_7350_p2 = (!tmp_734_cast_fu_7346_p1.read().is_01() || !tmp_218_cast4_reg_9684.read().is_01())? sc_lv<36>(): (sc_bigint<36>(tmp_734_cast_fu_7346_p1.read()) + sc_biguint<36>(tmp_218_cast4_reg_9684.read()));
}

void ShuffleNetV2::thread_tmp_630_fu_7449_p2() {
    tmp_630_fu_7449_p2 = (!p_shl137_cast_fu_7442_p3.read().is_01() || !tmp_143_reg_10029.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl137_cast_fu_7442_p3.read()) - sc_biguint<11>(tmp_143_reg_10029.read()));
}

void ShuffleNetV2::thread_tmp_631_cast_fu_5763_p1() {
    tmp_631_cast_fu_5763_p1 = esl_sext<19,18>(tmp_544_fu_5757_p2.read());
}

void ShuffleNetV2::thread_tmp_631_fu_7454_p2() {
    tmp_631_fu_7454_p2 = (!tmp_630_fu_7449_p2.read().is_01() || !tmp_309_cast2_reg_9800.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_630_fu_7449_p2.read()) + sc_biguint<11>(tmp_309_cast2_reg_9800.read()));
}

void ShuffleNetV2::thread_tmp_632_cast_fu_5772_p1() {
    tmp_632_cast_fu_5772_p1 = esl_sext<64,19>(tmp_545_fu_5767_p2.read());
}

void ShuffleNetV2::thread_tmp_632_fu_7473_p3() {
    tmp_632_fu_7473_p3 = esl_concat<10,2>(tmp_387_fu_7464_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_633_fu_7485_p2() {
    tmp_633_fu_7485_p2 = (!p_shl136_cast_fu_7481_p1.read().is_01() || !tmp_388_cast_fu_7469_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl136_cast_fu_7481_p1.read()) - sc_biguint<13>(tmp_388_cast_fu_7469_p1.read()));
}

void ShuffleNetV2::thread_tmp_634_fu_7491_p2() {
    tmp_634_fu_7491_p2 = (!tmp_633_fu_7485_p2.read().is_01() || !tmp_218_cast5_reg_9690.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_633_fu_7485_p2.read()) + sc_biguint<13>(tmp_218_cast5_reg_9690.read()));
}

void ShuffleNetV2::thread_tmp_635_fu_7543_p2() {
    tmp_635_fu_7543_p2 = (!p_shl135_cast_fu_7536_p3.read().is_01() || !tmp_741_cast_fu_7533_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl135_cast_fu_7536_p3.read()) - sc_bigint<15>(tmp_741_cast_fu_7533_p1.read()));
}

void ShuffleNetV2::thread_tmp_636_cast_fu_5810_p1() {
    tmp_636_cast_fu_5810_p1 = esl_sext<64,19>(tmp_549_fu_5805_p2.read());
}

void ShuffleNetV2::thread_tmp_636_fu_7549_p2() {
    tmp_636_fu_7549_p2 = (!tmp_635_fu_7543_p2.read().is_01() || !tmp_309_cast_reg_9739.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_635_fu_7543_p2.read()) + sc_biguint<15>(tmp_309_cast_reg_9739.read()));
}

void ShuffleNetV2::thread_tmp_637_fu_7510_p3() {
    tmp_637_fu_7510_p3 = esl_concat<10,2>(tmp_389_fu_7501_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_638_fu_7522_p2() {
    tmp_638_fu_7522_p2 = (!p_shl134_cast_fu_7518_p1.read().is_01() || !tmp_390_cast_fu_7506_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl134_cast_fu_7518_p1.read()) - sc_biguint<13>(tmp_390_cast_fu_7506_p1.read()));
}

void ShuffleNetV2::thread_tmp_639_fu_7528_p2() {
    tmp_639_fu_7528_p2 = (!tmp_638_fu_7522_p2.read().is_01() || !tmp_218_cast5_reg_9690.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_638_fu_7522_p2.read()) + sc_biguint<13>(tmp_218_cast5_reg_9690.read()));
}

void ShuffleNetV2::thread_tmp_640_cast_fu_5878_p1() {
    tmp_640_cast_fu_5878_p1 = esl_sext<64,19>(tmp_553_fu_5873_p2.read());
}

void ShuffleNetV2::thread_tmp_640_fu_7569_p2() {
    tmp_640_fu_7569_p2 = (!p_shl133_cast_fu_7562_p3.read().is_01() || !tmp_747_cast_fu_7559_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl133_cast_fu_7562_p3.read()) - sc_bigint<15>(tmp_747_cast_fu_7559_p1.read()));
}

void ShuffleNetV2::thread_tmp_641_fu_7575_p2() {
    tmp_641_fu_7575_p2 = (!tmp_640_fu_7569_p2.read().is_01() || !tmp_309_cast_reg_9739.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_640_fu_7569_p2.read()) + sc_biguint<15>(tmp_309_cast_reg_9739.read()));
}

void ShuffleNetV2::thread_tmp_642_fu_7592_p3() {
    tmp_642_fu_7592_p3 = esl_concat<9,2>(tmp_391_reg_10039.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_643_fu_7599_p1() {
    tmp_643_fu_7599_p1 = esl_sext<12,11>(tmp_642_fu_7592_p3.read());
}

void ShuffleNetV2::thread_tmp_644_cast_fu_5916_p1() {
    tmp_644_cast_fu_5916_p1 = esl_sext<64,19>(tmp_557_fu_5911_p2.read());
}

void ShuffleNetV2::thread_tmp_644_fu_7607_p2() {
    tmp_644_fu_7607_p2 = (!p_shl132_cast_fu_7603_p1.read().is_01() || !tmp_392_cast_fu_7588_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl132_cast_fu_7603_p1.read()) - sc_biguint<13>(tmp_392_cast_fu_7588_p1.read()));
}

void ShuffleNetV2::thread_tmp_645_fu_7617_p2() {
    tmp_645_fu_7617_p2 = (!tmp_753_cast_fu_7613_p1.read().is_01() || !tmp_218_cast3_reg_9678.read().is_01())? sc_lv<14>(): (sc_bigint<14>(tmp_753_cast_fu_7613_p1.read()) + sc_biguint<14>(tmp_218_cast3_reg_9678.read()));
}

void ShuffleNetV2::thread_tmp_646_fu_7638_p2() {
    tmp_646_fu_7638_p2 = (!p_shl131_cast_fu_7630_p3.read().is_01() || !tmp_754_cast_fu_7622_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl131_cast_fu_7630_p3.read()) - sc_bigint<15>(tmp_754_cast_fu_7622_p1.read()));
}

void ShuffleNetV2::thread_tmp_647_fu_7644_p2() {
    tmp_647_fu_7644_p2 = (!tmp_646_fu_7638_p2.read().is_01() || !tmp_309_cast_reg_9739.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_646_fu_7638_p2.read()) + sc_biguint<15>(tmp_309_cast_reg_9739.read()));
}

void ShuffleNetV2::thread_tmp_648_cast_fu_5954_p1() {
    tmp_648_cast_fu_5954_p1 = esl_sext<64,19>(tmp_561_reg_9577.read());
}

void ShuffleNetV2::thread_tmp_648_fu_7389_p3() {
    tmp_648_fu_7389_p3 = esl_concat<11,2>(tmp_393_fu_7380_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_649_fu_7401_p2() {
    tmp_649_fu_7401_p2 = (!p_shl130_cast_fu_7397_p1.read().is_01() || !tmp_394_cast_fu_7385_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl130_cast_fu_7397_p1.read()) - sc_biguint<14>(tmp_394_cast_fu_7385_p1.read()));
}

void ShuffleNetV2::thread_tmp_650_fu_7411_p2() {
    tmp_650_fu_7411_p2 = (!tmp_759_cast_fu_7407_p1.read().is_01() || !tmp_218_cast2_reg_9673.read().is_01())? sc_lv<15>(): (sc_bigint<15>(tmp_759_cast_fu_7407_p1.read()) + sc_biguint<15>(tmp_218_cast2_reg_9673.read()));
}

void ShuffleNetV2::thread_tmp_651_fu_7654_p2() {
    tmp_651_fu_7654_p2 = (!tmp_146_fu_7649_p2.read().is_01() || !tmp_650_reg_10045.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_146_fu_7649_p2.read()) - sc_biguint<15>(tmp_650_reg_10045.read()));
}

void ShuffleNetV2::thread_tmp_652_fu_7659_p2() {
    tmp_652_fu_7659_p2 = (!tmp_651_fu_7654_p2.read().is_01() || !tmp_309_cast_reg_9739.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_651_fu_7654_p2.read()) + sc_biguint<15>(tmp_309_cast_reg_9739.read()));
}

void ShuffleNetV2::thread_tmp_653_fu_8864_p2() {
    tmp_653_fu_8864_p2 = (!tmp_723_cast_reg_10702.read().is_01() || !tmp_i_cast_fu_8860_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_723_cast_reg_10702.read()) + sc_biguint<14>(tmp_i_cast_fu_8860_p1.read()));
}

void ShuffleNetV2::thread_tmp_654_cast_fu_6481_p1() {
    tmp_654_cast_fu_6481_p1 = esl_sext<12,11>(tmp_563_fu_6475_p2.read());
}

void ShuffleNetV2::thread_tmp_655_cast_fu_6581_p1() {
    tmp_655_cast_fu_6581_p1 = esl_sext<15,12>(tmp_564_reg_9833.read());
}

void ShuffleNetV2::thread_tmp_658_cast_fu_6606_p1() {
    tmp_658_cast_fu_6606_p1 = esl_zext<64,15>(tmp_566_fu_6601_p2.read());
}

void ShuffleNetV2::thread_tmp_661_cast_fu_6518_p1() {
    tmp_661_cast_fu_6518_p1 = esl_sext<36,35>(tmp_569_fu_6512_p2.read());
}

void ShuffleNetV2::thread_tmp_665_cast_fu_6877_p1() {
    tmp_665_cast_fu_6877_p1 = esl_zext<64,10>(tmp_572_reg_9865.read());
}

void ShuffleNetV2::thread_tmp_668_cast_fu_6628_p1() {
    tmp_668_cast_fu_6628_p1 = esl_sext<15,11>(tmp_575_reg_9849.read());
}

void ShuffleNetV2::thread_tmp_671_cast_fu_6653_p1() {
    tmp_671_cast_fu_6653_p1 = esl_zext<64,15>(tmp_577_fu_6648_p2.read());
}

void ShuffleNetV2::thread_tmp_673_cast_fu_6692_p1() {
    tmp_673_cast_fu_6692_p1 = esl_sext<13,12>(tmp_579_fu_6686_p2.read());
}

void ShuffleNetV2::thread_tmp_674_cast_fu_6882_p1() {
    tmp_674_cast_fu_6882_p1 = esl_sext<15,13>(tmp_580_reg_9875.read());
}

void ShuffleNetV2::thread_tmp_677_cast_fu_6903_p1() {
    tmp_677_cast_fu_6903_p1 = esl_zext<64,15>(tmp_582_fu_6898_p2.read());
}

void ShuffleNetV2::thread_tmp_679_cast_fu_6734_p1() {
    tmp_679_cast_fu_6734_p1 = esl_sext<13,12>(tmp_584_fu_6728_p2.read());
}

void ShuffleNetV2::thread_tmp_680_cast_fu_6908_p1() {
    tmp_680_cast_fu_6908_p1 = esl_sext<15,13>(tmp_585_reg_9881.read());
}

void ShuffleNetV2::thread_tmp_683_cast_fu_6929_p1() {
    tmp_683_cast_fu_6929_p1 = esl_zext<64,15>(tmp_587_fu_6924_p2.read());
}

void ShuffleNetV2::thread_tmp_686_cast_fu_7020_p1() {
    tmp_686_cast_fu_7020_p1 = esl_sext<15,12>(tmp_590_reg_9887.read());
}

void ShuffleNetV2::thread_tmp_689_cast_fu_7045_p1() {
    tmp_689_cast_fu_7045_p1 = esl_zext<64,15>(tmp_592_fu_7040_p2.read());
}

void ShuffleNetV2::thread_tmp_692_cast_fu_7050_p1() {
    tmp_692_cast_fu_7050_p1 = esl_sext<15,12>(tmp_595_reg_9893.read());
}

void ShuffleNetV2::thread_tmp_695_cast_fu_7075_p1() {
    tmp_695_cast_fu_7075_p1 = esl_zext<64,15>(tmp_597_fu_7070_p2.read());
}

void ShuffleNetV2::thread_tmp_699_cast_fu_7080_p1() {
    tmp_699_cast_fu_7080_p1 = esl_sext<15,12>(tmp_601_reg_9899.read());
}

void ShuffleNetV2::thread_tmp_702_cast_fu_7203_p1() {
    tmp_702_cast_fu_7203_p1 = esl_zext<64,15>(tmp_603_reg_9961.read());
}

void ShuffleNetV2::thread_tmp_705_cast_fu_6962_p1() {
    tmp_705_cast_fu_6962_p1 = esl_sext<13,12>(tmp_606_fu_6956_p2.read());
}

void ShuffleNetV2::thread_tmp_706_cast_fu_7105_p1() {
    tmp_706_cast_fu_7105_p1 = esl_sext<15,13>(tmp_607_reg_9933.read());
}

void ShuffleNetV2::thread_tmp_709_cast_fu_7207_p1() {
    tmp_709_cast_fu_7207_p1 = esl_zext<64,15>(tmp_609_reg_9966.read());
}

void ShuffleNetV2::thread_tmp_711_cast_fu_7146_p1() {
    tmp_711_cast_fu_7146_p1 = esl_sext<14,13>(tmp_611_fu_7140_p2.read());
}

void ShuffleNetV2::thread_tmp_712_cast_fu_7155_p1() {
    tmp_712_cast_fu_7155_p1 = esl_sext<15,14>(tmp_612_fu_7150_p2.read());
}

void ShuffleNetV2::thread_tmp_715_cast_fu_7211_p1() {
    tmp_715_cast_fu_7211_p1 = esl_zext<64,15>(tmp_614_reg_9971.read());
}

void ShuffleNetV2::thread_tmp_718_cast_fu_7182_p1() {
    tmp_718_cast_fu_7182_p1 = esl_sext<15,13>(tmp_617_reg_9945.read());
}

void ShuffleNetV2::thread_tmp_721_cast_fu_7215_p1() {
    tmp_721_cast_fu_7215_p1 = esl_zext<64,15>(tmp_619_reg_9976.read());
}

void ShuffleNetV2::thread_tmp_723_cast_fu_8839_p1() {
    tmp_723_cast_fu_8839_p1 = esl_zext<14,13>(tmp_620_fu_8831_p3.read());
}

void ShuffleNetV2::thread_tmp_728_cast_fu_7416_p1() {
    tmp_728_cast_fu_7416_p1 = esl_sext<15,13>(tmp_623_reg_10023.read());
}

void ShuffleNetV2::thread_tmp_731_cast_fu_7437_p1() {
    tmp_731_cast_fu_7437_p1 = esl_zext<64,15>(tmp_625_fu_7432_p2.read());
}

void ShuffleNetV2::thread_tmp_734_cast_fu_7346_p1() {
    tmp_734_cast_fu_7346_p1 = esl_sext<36,35>(tmp_628_fu_7340_p2.read());
}

void ShuffleNetV2::thread_tmp_738_cast_fu_7664_p1() {
    tmp_738_cast_fu_7664_p1 = esl_zext<64,11>(tmp_631_reg_10056.read());
}

void ShuffleNetV2::thread_tmp_741_cast_fu_7533_p1() {
    tmp_741_cast_fu_7533_p1 = esl_sext<15,13>(tmp_634_reg_10061.read());
}

void ShuffleNetV2::thread_tmp_744_cast_fu_7554_p1() {
    tmp_744_cast_fu_7554_p1 = esl_zext<64,15>(tmp_636_fu_7549_p2.read());
}

void ShuffleNetV2::thread_tmp_747_cast_fu_7559_p1() {
    tmp_747_cast_fu_7559_p1 = esl_sext<15,13>(tmp_639_reg_10067.read());
}

void ShuffleNetV2::thread_tmp_750_cast_fu_7580_p1() {
    tmp_750_cast_fu_7580_p1 = esl_zext<64,15>(tmp_641_fu_7575_p2.read());
}

void ShuffleNetV2::thread_tmp_753_cast_fu_7613_p1() {
    tmp_753_cast_fu_7613_p1 = esl_sext<14,13>(tmp_644_fu_7607_p2.read());
}

void ShuffleNetV2::thread_tmp_754_cast_fu_7622_p1() {
    tmp_754_cast_fu_7622_p1 = esl_sext<15,14>(tmp_645_fu_7617_p2.read());
}

void ShuffleNetV2::thread_tmp_757_cast_fu_7670_p1() {
    tmp_757_cast_fu_7670_p1 = esl_zext<64,15>(tmp_647_reg_10088.read());
}

void ShuffleNetV2::thread_tmp_759_cast_fu_7407_p1() {
    tmp_759_cast_fu_7407_p1 = esl_sext<15,14>(tmp_649_fu_7401_p2.read());
}

void ShuffleNetV2::thread_tmp_763_cast_fu_7674_p1() {
    tmp_763_cast_fu_7674_p1 = esl_zext<64,15>(tmp_652_reg_10093.read());
}

void ShuffleNetV2::thread_tmp_764_cast_fu_8869_p1() {
    tmp_764_cast_fu_8869_p1 = esl_zext<64,14>(tmp_653_fu_8864_p2.read());
}

void ShuffleNetV2::thread_tmp_fu_3634_p3() {
    tmp_fu_3634_p3 = esl_concat<5,5>(co_reg_3124.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_i_419_fu_8855_p1() {
    tmp_i_419_fu_8855_p1 = esl_zext<64,10>(ci_i_reg_3306.read());
}

void ShuffleNetV2::thread_tmp_i_cast_fu_8860_p1() {
    tmp_i_cast_fu_8860_p1 = esl_zext<14,10>(ci_i_reg_3306.read());
}

void ShuffleNetV2::thread_tmp_i_fu_8827_p1() {
    tmp_i_fu_8827_p1 = esl_zext<64,4>(co_i_reg_3283.read());
}

void ShuffleNetV2::thread_tmp_s_fu_3668_p2() {
    tmp_s_fu_3668_p2 = (!ap_const_lv6_18.is_01() || !co_cast137_cast_fu_3618_p1.read().is_01())? sc_lv<6>(): (sc_biguint<6>(ap_const_lv6_18) + sc_biguint<6>(co_cast137_cast_fu_3618_p1.read()));
}

void ShuffleNetV2::thread_w_22_fu_6150_p2() {
    w_22_fu_6150_p2 = (!w_reg_3180.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w_reg_3180.read()) + sc_biguint<2>(ap_const_lv2_1));
}

}

