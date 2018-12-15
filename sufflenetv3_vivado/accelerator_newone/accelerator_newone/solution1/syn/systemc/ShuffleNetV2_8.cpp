#include "ShuffleNetV2.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void ShuffleNetV2::thread_tmp_225_cast2_fu_9741_p1() {
    tmp_225_cast2_fu_9741_p1 = esl_zext<14,5>(w_51_fu_9731_p2.read());
}

void ShuffleNetV2::thread_tmp_225_cast_fu_7797_p1() {
    tmp_225_cast_fu_7797_p1 = esl_sext<12,10>(tmp_161_fu_7791_p2.read());
}

void ShuffleNetV2::thread_tmp_226_fu_9941_p2() {
    tmp_226_fu_9941_p2 = (!co41_cast_fu_9925_p1.read().is_01() || !ap_const_lv7_48.is_01())? sc_lv<7>(): (sc_biguint<7>(co41_cast_fu_9925_p1.read()) + sc_bigint<7>(ap_const_lv7_48));
}

void ShuffleNetV2::thread_tmp_227_cast_fu_9947_p1() {
    tmp_227_cast_fu_9947_p1 = esl_zext<10,7>(tmp_226_fu_9941_p2.read());
}

void ShuffleNetV2::thread_tmp_228_cast_fu_9969_p1() {
    tmp_228_cast_fu_9969_p1 = esl_zext<8,5>(co41_reg_3757.read());
}

void ShuffleNetV2::thread_tmp_229_fu_10114_p2() {
    tmp_229_fu_10114_p2 = (!i17_cast_fu_10098_p1.read().is_01() || !ap_const_lv9_F0.is_01())? sc_lv<9>(): (sc_biguint<9>(i17_cast_fu_10098_p1.read()) + sc_biguint<9>(ap_const_lv9_F0));
}

void ShuffleNetV2::thread_tmp_230_fu_10120_p1() {
    tmp_230_fu_10120_p1 = esl_zext<64,9>(tmp_229_fu_10114_p2.read());
}

void ShuffleNetV2::thread_tmp_231_fu_10125_p1() {
    tmp_231_fu_10125_p1 = esl_zext<64,5>(i17_reg_3790.read());
}

void ShuffleNetV2::thread_tmp_232_cast1_fu_10007_p1() {
    tmp_232_cast1_fu_10007_p1 = esl_zext<9,2>(w42_reg_3768.read());
}

void ShuffleNetV2::thread_tmp_232_cast_fu_10011_p1() {
    tmp_232_cast_fu_10011_p1 = esl_zext<10,2>(w42_reg_3768.read());
}

void ShuffleNetV2::thread_tmp_233_fu_10146_p2() {
    tmp_233_fu_10146_p2 = (!co45_cast_fu_10130_p1.read().is_01() || !ap_const_lv8_90.is_01())? sc_lv<8>(): (sc_biguint<8>(co45_cast_fu_10130_p1.read()) + sc_bigint<8>(ap_const_lv8_90));
}

void ShuffleNetV2::thread_tmp_234_cast1_fu_10071_p1() {
    tmp_234_cast1_fu_10071_p1 = esl_zext<9,2>(h43_reg_3779.read());
}

void ShuffleNetV2::thread_tmp_234_cast_fu_10075_p1() {
    tmp_234_cast_fu_10075_p1 = esl_zext<15,2>(h43_reg_3779.read());
}

void ShuffleNetV2::thread_tmp_235_fu_10271_p2() {
    tmp_235_fu_10271_p2 = (!i19_cast_fu_10255_p1.read().is_01() || !ap_const_lv9_108.is_01())? sc_lv<9>(): (sc_biguint<9>(i19_cast_fu_10255_p1.read()) + sc_bigint<9>(ap_const_lv9_108));
}

void ShuffleNetV2::thread_tmp_236_fu_10277_p1() {
    tmp_236_fu_10277_p1 = esl_zext<64,9>(tmp_235_fu_10271_p2.read());
}

void ShuffleNetV2::thread_tmp_237_fu_10282_p1() {
    tmp_237_fu_10282_p1 = esl_zext<64,5>(i19_reg_3824.read());
}

void ShuffleNetV2::thread_tmp_238_cast1_fu_10228_p1() {
    tmp_238_cast1_fu_10228_p1 = esl_zext<11,5>(ci20_reg_3813.read());
}

void ShuffleNetV2::thread_tmp_238_cast_fu_10232_p1() {
    tmp_238_cast_fu_10232_p1 = esl_zext<15,5>(ci20_reg_3813.read());
}

void ShuffleNetV2::thread_tmp_239_fu_10422_p2() {
    tmp_239_fu_10422_p2 = (!co51_cast_fu_10406_p1.read().is_01() || !ap_const_lv6_18.is_01())? sc_lv<6>(): (sc_biguint<6>(co51_cast_fu_10406_p1.read()) + sc_biguint<6>(ap_const_lv6_18));
}

void ShuffleNetV2::thread_tmp_240_cast_fu_10341_p1() {
    tmp_240_cast_fu_10341_p1 = esl_zext<10,5>(h_54_fu_10335_p2.read());
}

void ShuffleNetV2::thread_tmp_241_fu_10625_p2() {
    tmp_241_fu_10625_p2 = (!co54_cast_fu_10609_p1.read().is_01() || !ap_const_lv8_A8.is_01())? sc_lv<8>(): (sc_biguint<8>(co54_cast_fu_10609_p1.read()) + sc_bigint<8>(ap_const_lv8_A8));
}

void ShuffleNetV2::thread_tmp_242_cast1_fu_10500_p1() {
    tmp_242_cast1_fu_10500_p1 = esl_zext<11,5>(h_55_fu_10494_p2.read());
}

void ShuffleNetV2::thread_tmp_242_cast_fu_10504_p1() {
    tmp_242_cast_fu_10504_p1 = esl_zext<10,5>(h_55_fu_10494_p2.read());
}

void ShuffleNetV2::thread_tmp_243_cast_fu_10392_p1() {
    tmp_243_cast_fu_10392_p1 = esl_zext<15,5>(w_53_fu_10386_p2.read());
}

void ShuffleNetV2::thread_tmp_244_fu_10746_p3() {
    tmp_244_fu_10746_p3 = esl_concat<4,5>(ap_const_lv4_9, i21_reg_3924.read());
}

void ShuffleNetV2::thread_tmp_245_fu_10754_p1() {
    tmp_245_fu_10754_p1 = esl_zext<64,9>(tmp_244_fu_10746_p3.read());
}

void ShuffleNetV2::thread_tmp_246_fu_10759_p1() {
    tmp_246_fu_10759_p1 = esl_zext<64,5>(i21_reg_3924.read());
}

void ShuffleNetV2::thread_tmp_247_cast1_fu_10707_p1() {
    tmp_247_cast1_fu_10707_p1 = esl_zext<11,5>(ci22_reg_3913.read());
}

void ShuffleNetV2::thread_tmp_247_cast_fu_10711_p1() {
    tmp_247_cast_fu_10711_p1 = esl_zext<15,5>(ci22_reg_3913.read());
}

void ShuffleNetV2::thread_tmp_248_cast1_fu_10582_p1() {
    tmp_248_cast1_fu_10582_p1 = esl_zext<15,5>(w_54_fu_10576_p2.read());
}

void ShuffleNetV2::thread_tmp_248_cast_fu_10586_p1() {
    tmp_248_cast_fu_10586_p1 = esl_zext<14,5>(w_54_fu_10576_p2.read());
}

void ShuffleNetV2::thread_tmp_249_fu_10776_p3() {
    tmp_249_fu_10776_p3 = esl_concat<1,5>(ap_const_lv1_1, co57_reg_3936.read());
}

void ShuffleNetV2::thread_tmp_250_cast_fu_10788_p1() {
    tmp_250_cast_fu_10788_p1 = esl_zext<10,7>(tmp_338_cast_fu_10784_p1.read());
}

void ShuffleNetV2::thread_tmp_251_cast_fu_10820_p1() {
    tmp_251_cast_fu_10820_p1 = esl_zext<8,5>(co57_reg_3936.read());
}

void ShuffleNetV2::thread_tmp_252_fu_10965_p2() {
    tmp_252_fu_10965_p2 = (!i23_cast_fu_10949_p1.read().is_01() || !ap_const_lv9_138.is_01())? sc_lv<9>(): (sc_biguint<9>(i23_cast_fu_10949_p1.read()) + sc_bigint<9>(ap_const_lv9_138));
}

void ShuffleNetV2::thread_tmp_253_fu_10971_p1() {
    tmp_253_fu_10971_p1 = esl_zext<64,9>(tmp_252_fu_10965_p2.read());
}

void ShuffleNetV2::thread_tmp_254_cast_fu_8545_p1() {
    tmp_254_cast_fu_8545_p1 = esl_sext<7,6>(tmp_186_fu_8537_p3.read());
}

void ShuffleNetV2::thread_tmp_254_fu_10976_p1() {
    tmp_254_fu_10976_p1 = esl_zext<64,5>(i23_reg_3969.read());
}

void ShuffleNetV2::thread_tmp_255_cast1_fu_10858_p1() {
    tmp_255_cast1_fu_10858_p1 = esl_zext<9,2>(w55_reg_3947.read());
}

void ShuffleNetV2::thread_tmp_255_cast_fu_10862_p1() {
    tmp_255_cast_fu_10862_p1 = esl_zext<11,2>(w55_reg_3947.read());
}

void ShuffleNetV2::thread_tmp_256_cast1_fu_10922_p1() {
    tmp_256_cast1_fu_10922_p1 = esl_zext<9,2>(h56_reg_3958.read());
}

void ShuffleNetV2::thread_tmp_256_cast_fu_10926_p1() {
    tmp_256_cast_fu_10926_p1 = esl_zext<15,2>(h56_reg_3958.read());
}

void ShuffleNetV2::thread_tmp_257_fu_11124_p2() {
    tmp_257_fu_11124_p2 = (!i25_cast_fu_11108_p1.read().is_01() || !ap_const_lv9_150.is_01())? sc_lv<9>(): (sc_biguint<9>(i25_cast_fu_11108_p1.read()) + sc_bigint<9>(ap_const_lv9_150));
}

void ShuffleNetV2::thread_tmp_258_fu_11130_p1() {
    tmp_258_fu_11130_p1 = esl_zext<64,9>(tmp_257_fu_11124_p2.read());
}

void ShuffleNetV2::thread_tmp_259_fu_11135_p1() {
    tmp_259_fu_11135_p1 = esl_zext<64,5>(i25_reg_4003.read());
}

void ShuffleNetV2::thread_tmp_260_cast1_fu_11081_p1() {
    tmp_260_cast1_fu_11081_p1 = esl_zext<11,5>(ci24_reg_3992.read());
}

void ShuffleNetV2::thread_tmp_260_cast_fu_11085_p1() {
    tmp_260_cast_fu_11085_p1 = esl_zext<15,5>(ci24_reg_3992.read());
}

void ShuffleNetV2::thread_tmp_261_fu_11303_p2() {
    tmp_261_fu_11303_p2 = (!p_shl_cast_fu_11287_p1.read().is_01() || !p_shl1_cast_fu_11299_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl_cast_fu_11287_p1.read()) - sc_biguint<7>(p_shl1_cast_fu_11299_p1.read()));
}

void ShuffleNetV2::thread_tmp_262_cast_fu_11194_p1() {
    tmp_262_cast_fu_11194_p1 = esl_zext<10,5>(h_59_fu_11188_p2.read());
}

void ShuffleNetV2::thread_tmp_263_cast_fu_11339_p1() {
    tmp_263_cast_fu_11339_p1 = esl_zext<16,5>(ci26_reg_4059.read());
}

void ShuffleNetV2::thread_tmp_264_fu_11343_p2() {
    tmp_264_fu_11343_p2 = (!tmp_261_reg_31916.read().is_01() || !ci26_cast_fu_11323_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_261_reg_31916.read()) + sc_biguint<7>(ci26_cast_fu_11323_p1.read()));
}

void ShuffleNetV2::thread_tmp_265_cast_fu_11348_p1() {
    tmp_265_cast_fu_11348_p1 = esl_sext<13,7>(tmp_264_fu_11343_p2.read());
}

void ShuffleNetV2::thread_tmp_266_cast_fu_11245_p1() {
    tmp_266_cast_fu_11245_p1 = esl_zext<15,5>(w_58_fu_11239_p2.read());
}

void ShuffleNetV2::thread_tmp_267_fu_11585_p2() {
    tmp_267_fu_11585_p2 = (!p_shl2_cast_fu_11569_p1.read().is_01() || !p_shl3_cast_fu_11581_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl2_cast_fu_11569_p1.read()) - sc_biguint<7>(p_shl3_cast_fu_11581_p1.read()));
}

void ShuffleNetV2::thread_tmp_268_fu_11601_p2() {
    tmp_268_fu_11601_p2 = (!i27_cast1_reg_31973.read().is_01() || !tmp6_fu_11595_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(i27_cast1_reg_31973.read()) + sc_biguint<9>(tmp6_fu_11595_p2.read()));
}

void ShuffleNetV2::thread_tmp_269_fu_11611_p1() {
    tmp_269_fu_11611_p1 = esl_zext<64,9>(tmp_268_reg_31994.read());
}

void ShuffleNetV2::thread_tmp_270_fu_11606_p2() {
    tmp_270_fu_11606_p2 = (!tmp_267_fu_11585_p2.read().is_01() || !i27_cast_reg_31968.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_267_fu_11585_p2.read()) + sc_biguint<7>(i27_cast_reg_31968.read()));
}

void ShuffleNetV2::thread_tmp_271_fu_11618_p1() {
    tmp_271_fu_11618_p1 = esl_zext<64,32>(tmp_363_cast_fu_11615_p1.read());
}

void ShuffleNetV2::thread_tmp_272_fu_11392_p2() {
    tmp_272_fu_11392_p2 = (!p_shl4_cast_fu_11376_p1.read().is_01() || !p_shl5_cast_fu_11388_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl4_cast_fu_11376_p1.read()) - sc_biguint<8>(p_shl5_cast_fu_11388_p1.read()));
}

void ShuffleNetV2::thread_tmp_273_fu_11408_p2() {
    tmp_273_fu_11408_p2 = (!tmp5_fu_11402_p2.read().is_01() || !co66_cast_reg_31903.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp5_fu_11402_p2.read()) + sc_biguint<9>(co66_cast_reg_31903.read()));
}

void ShuffleNetV2::thread_tmp_274_fu_11437_p2() {
    tmp_274_fu_11437_p2 = (!p_shl6_cast_fu_11421_p1.read().is_01() || !p_shl7_cast_fu_11433_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl6_cast_fu_11421_p1.read()) - sc_biguint<7>(p_shl7_cast_fu_11433_p1.read()));
}

void ShuffleNetV2::thread_tmp_275_fu_11443_p2() {
    tmp_275_fu_11443_p2 = (!tmp_274_fu_11437_p2.read().is_01() || !tmp_356_cast_reg_31921.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_274_fu_11437_p2.read()) + sc_biguint<7>(tmp_356_cast_reg_31921.read()));
}

void ShuffleNetV2::thread_tmp_276_cast1_fu_11655_p1() {
    tmp_276_cast1_fu_11655_p1 = esl_zext<36,2>(w59_reg_4114.read());
}

void ShuffleNetV2::thread_tmp_276_cast_fu_11659_p1() {
    tmp_276_cast_fu_11659_p1 = esl_zext<12,2>(w59_reg_4114.read());
}

void ShuffleNetV2::thread_tmp_277_fu_12021_p2() {
    tmp_277_fu_12021_p2 = (!p_shl10_cast_fu_12005_p1.read().is_01() || !p_shl11_cast_fu_12017_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl10_cast_fu_12005_p1.read()) - sc_biguint<7>(p_shl11_cast_fu_12017_p1.read()));
}

void ShuffleNetV2::thread_tmp_278_fu_11935_p2() {
    tmp_278_fu_11935_p2 = (!p_shl8_cast_fu_11919_p1.read().is_01() || !p_shl9_cast_fu_11931_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl8_cast_fu_11919_p1.read()) - sc_biguint<7>(p_shl9_cast_fu_11931_p1.read()));
}

void ShuffleNetV2::thread_tmp_279_fu_11951_p2() {
    tmp_279_fu_11951_p2 = (!i29_cast612_cast_reg_32113.read().is_01() || !tmp8_fu_11945_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(i29_cast612_cast_reg_32113.read()) + sc_biguint<8>(tmp8_fu_11945_p2.read()));
}

void ShuffleNetV2::thread_tmp_280_fu_11964_p1() {
    tmp_280_fu_11964_p1 = esl_zext<64,9>(tmp_379_cast_fu_11961_p1.read());
}

void ShuffleNetV2::thread_tmp_281_fu_11956_p2() {
    tmp_281_fu_11956_p2 = (!tmp_278_fu_11935_p2.read().is_01() || !i29_cast_reg_32108.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_278_fu_11935_p2.read()) + sc_biguint<7>(i29_cast_reg_32108.read()));
}

void ShuffleNetV2::thread_tmp_282_fu_11972_p1() {
    tmp_282_fu_11972_p1 = esl_zext<64,32>(tmp_381_cast_fu_11969_p1.read());
}

void ShuffleNetV2::thread_tmp_283_cast1_fu_11675_p1() {
    tmp_283_cast1_fu_11675_p1 = esl_zext<10,2>(h60_reg_4125.read());
}

void ShuffleNetV2::thread_tmp_283_cast_fu_11679_p1() {
    tmp_283_cast_fu_11679_p1 = esl_zext<15,2>(h60_reg_4125.read());
}

void ShuffleNetV2::thread_tmp_284_cast_fu_12057_p1() {
    tmp_284_cast_fu_12057_p1 = esl_zext<16,5>(ci28_reg_4180.read());
}

void ShuffleNetV2::thread_tmp_285_fu_12061_p2() {
    tmp_285_fu_12061_p2 = (!tmp_277_reg_32162.read().is_01() || !ci28_cast_fu_12041_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_277_reg_32162.read()) + sc_biguint<7>(ci28_cast_fu_12041_p1.read()));
}

void ShuffleNetV2::thread_tmp_286_cast_fu_12066_p1() {
    tmp_286_cast_fu_12066_p1 = esl_sext<13,7>(tmp_285_fu_12061_p2.read());
}

void ShuffleNetV2::thread_tmp_287_fu_11723_p2() {
    tmp_287_fu_11723_p2 = (!p_shl14_cast_fu_11707_p1.read().is_01() || !p_shl15_cast_fu_11719_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl14_cast_fu_11707_p1.read()) - sc_biguint<7>(p_shl15_cast_fu_11719_p1.read()));
}

void ShuffleNetV2::thread_tmp_288_fu_11739_p2() {
    tmp_288_fu_11739_p2 = (!tmp7_fu_11733_p2.read().is_01() || !co69_cast1_reg_32014.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp7_fu_11733_p2.read()) + sc_biguint<8>(co69_cast1_reg_32014.read()));
}

void ShuffleNetV2::thread_tmp_289_cast1_fu_11749_p1() {
    tmp_289_cast1_fu_11749_p1 = esl_zext<11,8>(tmp_288_reg_32071.read());
}

void ShuffleNetV2::thread_tmp_289_cast_fu_9428_p1() {
    tmp_289_cast_fu_9428_p1 = esl_sext<8,7>(tmp_212_fu_9420_p3.read());
}

void ShuffleNetV2::thread_tmp_290_fu_11744_p2() {
    tmp_290_fu_11744_p2 = (!co69_cast_reg_32009.read().is_01() || !tmp_287_fu_11723_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(co69_cast_reg_32009.read()) + sc_biguint<7>(tmp_287_fu_11723_p2.read()));
}

void ShuffleNetV2::thread_tmp_291_cast_fu_11808_p1() {
    tmp_291_cast_fu_11808_p1 = esl_zext<35,32>(tmp_400_cast_fu_11805_p1.read());
}

void ShuffleNetV2::thread_tmp_292_fu_12303_p2() {
    tmp_292_fu_12303_p2 = (!p_shl12_cast_fu_12287_p1.read().is_01() || !p_shl13_cast_fu_12299_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl12_cast_fu_12287_p1.read()) - sc_biguint<7>(p_shl13_cast_fu_12299_p1.read()));
}

void ShuffleNetV2::thread_tmp_293_fu_12319_p2() {
    tmp_293_fu_12319_p2 = (!i32_cast599_cast_reg_32219.read().is_01() || !tmp10_fu_12313_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(i32_cast599_cast_reg_32219.read()) + sc_biguint<8>(tmp10_fu_12313_p2.read()));
}

void ShuffleNetV2::thread_tmp_294_fu_12332_p1() {
    tmp_294_fu_12332_p1 = esl_zext<64,9>(tmp_389_cast_fu_12329_p1.read());
}

void ShuffleNetV2::thread_tmp_295_fu_12324_p2() {
    tmp_295_fu_12324_p2 = (!tmp_292_fu_12303_p2.read().is_01() || !i32_cast_reg_32214.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_292_fu_12303_p2.read()) + sc_biguint<7>(i32_cast_reg_32214.read()));
}

void ShuffleNetV2::thread_tmp_296_fu_12340_p1() {
    tmp_296_fu_12340_p1 = esl_zext<64,32>(tmp_391_cast_fu_12337_p1.read());
}

void ShuffleNetV2::thread_tmp_297_fu_12110_p2() {
    tmp_297_fu_12110_p2 = (!p_shl16_cast_fu_12094_p1.read().is_01() || !p_shl17_cast_fu_12106_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl16_cast_fu_12094_p1.read()) - sc_biguint<8>(p_shl17_cast_fu_12106_p1.read()));
}

void ShuffleNetV2::thread_tmp_298_fu_12126_p2() {
    tmp_298_fu_12126_p2 = (!tmp9_fu_12120_p2.read().is_01() || !co71_cast_reg_32149.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp9_fu_12120_p2.read()) + sc_biguint<9>(co71_cast_reg_32149.read()));
}

void ShuffleNetV2::thread_tmp_299_fu_12155_p2() {
    tmp_299_fu_12155_p2 = (!p_shl18_cast_fu_12139_p1.read().is_01() || !p_shl19_cast_fu_12151_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl18_cast_fu_12139_p1.read()) - sc_biguint<7>(p_shl19_cast_fu_12151_p1.read()));
}

void ShuffleNetV2::thread_tmp_300_fu_12161_p2() {
    tmp_300_fu_12161_p2 = (!tmp_299_fu_12155_p2.read().is_01() || !tmp_385_cast_reg_32167.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_299_fu_12155_p2.read()) + sc_biguint<7>(tmp_385_cast_reg_32167.read()));
}

void ShuffleNetV2::thread_tmp_301_cast1_fu_12377_p1() {
    tmp_301_cast1_fu_12377_p1 = esl_zext<36,2>(w61_reg_4235.read());
}

void ShuffleNetV2::thread_tmp_301_cast_fu_12381_p1() {
    tmp_301_cast_fu_12381_p1 = esl_zext<11,2>(w61_reg_4235.read());
}

void ShuffleNetV2::thread_tmp_302_cast_fu_9911_p1() {
    tmp_302_cast_fu_9911_p1 = esl_sext<8,7>(tmp_221_fu_9905_p2.read());
}

void ShuffleNetV2::thread_tmp_302_fu_12735_p2() {
    tmp_302_fu_12735_p2 = (!p_shl22_cast_fu_12719_p1.read().is_01() || !p_shl23_cast_fu_12731_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl22_cast_fu_12719_p1.read()) - sc_biguint<7>(p_shl23_cast_fu_12731_p1.read()));
}

void ShuffleNetV2::thread_tmp_303_fu_12653_p2() {
    tmp_303_fu_12653_p2 = (!p_shl20_cast_fu_12637_p1.read().is_01() || !p_shl21_cast_fu_12649_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl20_cast_fu_12637_p1.read()) - sc_biguint<7>(p_shl21_cast_fu_12649_p1.read()));
}

void ShuffleNetV2::thread_tmp_304_fu_12669_p2() {
    tmp_304_fu_12669_p2 = (!i37_cast1_reg_32359.read().is_01() || !tmp12_fu_12663_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(i37_cast1_reg_32359.read()) + sc_biguint<10>(tmp12_fu_12663_p2.read()));
}

void ShuffleNetV2::thread_tmp_305_fu_12679_p1() {
    tmp_305_fu_12679_p1 = esl_zext<64,10>(tmp_304_reg_32380.read());
}

void ShuffleNetV2::thread_tmp_306_fu_12674_p2() {
    tmp_306_fu_12674_p2 = (!tmp_303_fu_12653_p2.read().is_01() || !i37_cast_reg_32354.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_303_fu_12653_p2.read()) + sc_biguint<7>(i37_cast_reg_32354.read()));
}

void ShuffleNetV2::thread_tmp_307_fu_12686_p1() {
    tmp_307_fu_12686_p1 = esl_zext<64,32>(tmp_414_cast_fu_12683_p1.read());
}

void ShuffleNetV2::thread_tmp_308_cast1_fu_12397_p1() {
    tmp_308_cast1_fu_12397_p1 = esl_zext<10,2>(h62_reg_4246.read());
}

void ShuffleNetV2::thread_tmp_308_cast_fu_12401_p1() {
    tmp_308_cast_fu_12401_p1 = esl_zext<15,2>(h62_reg_4246.read());
}

void ShuffleNetV2::thread_tmp_309_cast_fu_12771_p1() {
    tmp_309_cast_fu_12771_p1 = esl_zext<17,5>(ci30_reg_4301.read());
}

void ShuffleNetV2::thread_tmp_310_fu_12775_p2() {
    tmp_310_fu_12775_p2 = (!tmp_302_reg_32408.read().is_01() || !ci30_cast_fu_12755_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_302_reg_32408.read()) + sc_biguint<7>(ci30_cast_fu_12755_p1.read()));
}

void ShuffleNetV2::thread_tmp_311_cast_fu_12780_p1() {
    tmp_311_cast_fu_12780_p1 = esl_sext<13,7>(tmp_310_fu_12775_p2.read());
}

void ShuffleNetV2::thread_tmp_312_fu_12445_p2() {
    tmp_312_fu_12445_p2 = (!p_shl26_cast_fu_12429_p1.read().is_01() || !p_shl27_cast_fu_12441_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl26_cast_fu_12429_p1.read()) - sc_biguint<7>(p_shl27_cast_fu_12441_p1.read()));
}

void ShuffleNetV2::thread_tmp_313_fu_12461_p2() {
    tmp_313_fu_12461_p2 = (!tmp11_fu_12455_p2.read().is_01() || !co73_cast1_reg_32260.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp11_fu_12455_p2.read()) + sc_biguint<8>(co73_cast1_reg_32260.read()));
}

void ShuffleNetV2::thread_tmp_314_cast_fu_12471_p1() {
    tmp_314_cast_fu_12471_p1 = esl_zext<11,8>(tmp_313_reg_32317.read());
}

void ShuffleNetV2::thread_tmp_315_fu_12466_p2() {
    tmp_315_fu_12466_p2 = (!co73_cast_reg_32255.read().is_01() || !tmp_312_fu_12445_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(co73_cast_reg_32255.read()) + sc_biguint<7>(tmp_312_fu_12445_p2.read()));
}

void ShuffleNetV2::thread_tmp_316_cast_fu_12526_p1() {
    tmp_316_cast_fu_12526_p1 = esl_zext<35,32>(tmp_433_cast_fu_12523_p1.read());
}

void ShuffleNetV2::thread_tmp_317_fu_13075_p2() {
    tmp_317_fu_13075_p2 = (!co77_cast_fu_13059_p1.read().is_01() || !ap_const_lv7_30.is_01())? sc_lv<7>(): (sc_biguint<7>(co77_cast_fu_13059_p1.read()) + sc_biguint<7>(ap_const_lv7_30));
}

void ShuffleNetV2::thread_tmp_318_fu_13021_p2() {
    tmp_318_fu_13021_p2 = (!p_shl24_cast_fu_13005_p1.read().is_01() || !p_shl25_cast_fu_13017_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl24_cast_fu_13005_p1.read()) - sc_biguint<7>(p_shl25_cast_fu_13017_p1.read()));
}

void ShuffleNetV2::thread_tmp_319_fu_13037_p2() {
    tmp_319_fu_13037_p2 = (!i39_cast1_reg_32465.read().is_01() || !tmp14_fu_13031_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(i39_cast1_reg_32465.read()) + sc_biguint<10>(tmp14_fu_13031_p2.read()));
}

void ShuffleNetV2::thread_tmp_320_fu_13047_p1() {
    tmp_320_fu_13047_p1 = esl_zext<64,10>(tmp_319_reg_32486.read());
}

void ShuffleNetV2::thread_tmp_321_fu_13042_p2() {
    tmp_321_fu_13042_p2 = (!tmp_318_fu_13021_p2.read().is_01() || !i39_cast_reg_32460.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_318_fu_13021_p2.read()) + sc_biguint<7>(i39_cast_reg_32460.read()));
}

void ShuffleNetV2::thread_tmp_322_fu_13054_p1() {
    tmp_322_fu_13054_p1 = esl_zext<64,32>(tmp_424_cast_fu_13051_p1.read());
}

void ShuffleNetV2::thread_tmp_323_fu_12824_p2() {
    tmp_323_fu_12824_p2 = (!p_shl30_cast_fu_12808_p1.read().is_01() || !p_shl31_cast_fu_12820_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl30_cast_fu_12808_p1.read()) - sc_biguint<8>(p_shl31_cast_fu_12820_p1.read()));
}

void ShuffleNetV2::thread_tmp_324_fu_12844_p2() {
    tmp_324_fu_12844_p2 = (!tmp13_cast_fu_12840_p1.read().is_01() || !co75_cast_reg_32395.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp13_cast_fu_12840_p1.read()) + sc_biguint<10>(co75_cast_reg_32395.read()));
}

void ShuffleNetV2::thread_tmp_325_fu_12873_p2() {
    tmp_325_fu_12873_p2 = (!p_shl32_cast_fu_12857_p1.read().is_01() || !p_shl33_cast_fu_12869_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl32_cast_fu_12857_p1.read()) - sc_biguint<7>(p_shl33_cast_fu_12869_p1.read()));
}

void ShuffleNetV2::thread_tmp_326_fu_12879_p2() {
    tmp_326_fu_12879_p2 = (!tmp_325_fu_12873_p2.read().is_01() || !tmp_418_cast_reg_32413.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_325_fu_12873_p2.read()) + sc_biguint<7>(tmp_418_cast_reg_32413.read()));
}

void ShuffleNetV2::thread_tmp_327_fu_13314_p2() {
    tmp_327_fu_13314_p2 = (!p_shl28_cast_fu_13298_p1.read().is_01() || !p_shl29_cast_fu_13310_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl28_cast_fu_13298_p1.read()) - sc_biguint<7>(p_shl29_cast_fu_13310_p1.read()));
}

void ShuffleNetV2::thread_tmp_328_cast1_fu_13153_p1() {
    tmp_328_cast1_fu_13153_p1 = esl_zext<10,4>(h_65_fu_13147_p2.read());
}

void ShuffleNetV2::thread_tmp_328_cast_fu_13157_p1() {
    tmp_328_cast_fu_13157_p1 = esl_zext<11,4>(h_65_fu_13147_p2.read());
}

void ShuffleNetV2::thread_tmp_329_cast_fu_13350_p1() {
    tmp_329_cast_fu_13350_p1 = esl_zext<17,5>(ci32_reg_4389.read());
}

void ShuffleNetV2::thread_tmp_330_fu_13354_p2() {
    tmp_330_fu_13354_p2 = (!tmp_327_reg_32568.read().is_01() || !ci32_cast_fu_13334_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_327_reg_32568.read()) + sc_biguint<7>(ci32_cast_fu_13334_p1.read()));
}

void ShuffleNetV2::thread_tmp_331_cast_fu_13359_p1() {
    tmp_331_cast_fu_13359_p1 = esl_sext<13,7>(tmp_330_fu_13354_p2.read());
}

void ShuffleNetV2::thread_tmp_332_cast1_fu_13243_p1() {
    tmp_332_cast1_fu_13243_p1 = esl_zext<14,4>(w_64_fu_13237_p2.read());
}

void ShuffleNetV2::thread_tmp_332_cast_fu_13247_p1() {
    tmp_332_cast_fu_13247_p1 = esl_zext<15,4>(w_64_fu_13237_p2.read());
}

void ShuffleNetV2::thread_tmp_333_fu_13596_p2() {
    tmp_333_fu_13596_p2 = (!p_shl34_cast_fu_13580_p1.read().is_01() || !p_shl35_cast_fu_13592_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl34_cast_fu_13580_p1.read()) - sc_biguint<7>(p_shl35_cast_fu_13592_p1.read()));
}

void ShuffleNetV2::thread_tmp_334_fu_13612_p2() {
    tmp_334_fu_13612_p2 = (!i45_cast1_reg_32625.read().is_01() || !tmp16_fu_13606_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(i45_cast1_reg_32625.read()) + sc_biguint<10>(tmp16_fu_13606_p2.read()));
}

void ShuffleNetV2::thread_tmp_335_fu_13622_p1() {
    tmp_335_fu_13622_p1 = esl_zext<64,10>(tmp_334_reg_32646.read());
}

void ShuffleNetV2::thread_tmp_336_fu_13617_p2() {
    tmp_336_fu_13617_p2 = (!tmp_333_fu_13596_p2.read().is_01() || !i45_cast_reg_32620.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_333_fu_13596_p2.read()) + sc_biguint<7>(i45_cast_reg_32620.read()));
}

void ShuffleNetV2::thread_tmp_337_fu_13629_p1() {
    tmp_337_fu_13629_p1 = esl_zext<64,32>(tmp_453_cast_fu_13626_p1.read());
}

void ShuffleNetV2::thread_tmp_338_cast_fu_10784_p1() {
    tmp_338_cast_fu_10784_p1 = esl_sext<7,6>(tmp_249_fu_10776_p3.read());
}

void ShuffleNetV2::thread_tmp_338_fu_13403_p2() {
    tmp_338_fu_13403_p2 = (!p_shl36_cast_fu_13387_p1.read().is_01() || !p_shl37_cast_fu_13399_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl36_cast_fu_13387_p1.read()) - sc_biguint<8>(p_shl37_cast_fu_13399_p1.read()));
}

void ShuffleNetV2::thread_tmp_339_fu_13419_p2() {
    tmp_339_fu_13419_p2 = (!tmp15_fu_13413_p2.read().is_01() || !co78_cast_reg_32555.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp15_fu_13413_p2.read()) + sc_biguint<10>(co78_cast_reg_32555.read()));
}

void ShuffleNetV2::thread_tmp_340_fu_13448_p2() {
    tmp_340_fu_13448_p2 = (!p_shl38_cast_fu_13432_p1.read().is_01() || !p_shl39_cast_fu_13444_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl38_cast_fu_13432_p1.read()) - sc_biguint<7>(p_shl39_cast_fu_13444_p1.read()));
}

void ShuffleNetV2::thread_tmp_341_fu_13454_p2() {
    tmp_341_fu_13454_p2 = (!tmp_340_fu_13448_p2.read().is_01() || !tmp_440_cast_reg_32573.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_340_fu_13448_p2.read()) + sc_biguint<7>(tmp_440_cast_reg_32573.read()));
}

void ShuffleNetV2::thread_tmp_342_cast1_fu_13666_p1() {
    tmp_342_cast1_fu_13666_p1 = esl_zext<36,2>(w65_reg_4444.read());
}

void ShuffleNetV2::thread_tmp_342_cast_fu_13670_p1() {
    tmp_342_cast_fu_13670_p1 = esl_zext<13,2>(w65_reg_4444.read());
}

void ShuffleNetV2::thread_tmp_343_fu_14028_p2() {
    tmp_343_fu_14028_p2 = (!p_shl42_cast_fu_14012_p1.read().is_01() || !p_shl43_cast_fu_14024_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl42_cast_fu_14012_p1.read()) - sc_biguint<7>(p_shl43_cast_fu_14024_p1.read()));
}

void ShuffleNetV2::thread_tmp_344_fu_13946_p2() {
    tmp_344_fu_13946_p2 = (!p_shl40_cast_fu_13930_p1.read().is_01() || !p_shl41_cast_fu_13942_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl40_cast_fu_13930_p1.read()) - sc_biguint<7>(p_shl41_cast_fu_13942_p1.read()));
}

void ShuffleNetV2::thread_tmp_345_fu_13962_p2() {
    tmp_345_fu_13962_p2 = (!i49_cast1_reg_32765.read().is_01() || !tmp18_fu_13956_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(i49_cast1_reg_32765.read()) + sc_biguint<10>(tmp18_fu_13956_p2.read()));
}

void ShuffleNetV2::thread_tmp_346_fu_13972_p1() {
    tmp_346_fu_13972_p1 = esl_zext<64,10>(tmp_345_reg_32786.read());
}

void ShuffleNetV2::thread_tmp_347_fu_13967_p2() {
    tmp_347_fu_13967_p2 = (!tmp_344_fu_13946_p2.read().is_01() || !i49_cast_reg_32760.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_344_fu_13946_p2.read()) + sc_biguint<7>(i49_cast_reg_32760.read()));
}

void ShuffleNetV2::thread_tmp_348_fu_13979_p1() {
    tmp_348_fu_13979_p1 = esl_zext<64,32>(tmp_471_cast_fu_13976_p1.read());
}

void ShuffleNetV2::thread_tmp_349_cast1_fu_13686_p1() {
    tmp_349_cast1_fu_13686_p1 = esl_zext<10,2>(h66_reg_4455.read());
}

void ShuffleNetV2::thread_tmp_349_cast_fu_13690_p1() {
    tmp_349_cast_fu_13690_p1 = esl_zext<15,2>(h66_reg_4455.read());
}

void ShuffleNetV2::thread_tmp_350_cast_fu_14064_p1() {
    tmp_350_cast_fu_14064_p1 = esl_zext<17,5>(ci34_reg_4510.read());
}

void ShuffleNetV2::thread_tmp_351_fu_14068_p2() {
    tmp_351_fu_14068_p2 = (!tmp_343_reg_32814.read().is_01() || !ci34_cast_fu_14048_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_343_reg_32814.read()) + sc_biguint<7>(ci34_cast_fu_14048_p1.read()));
}

void ShuffleNetV2::thread_tmp_352_cast_fu_14073_p1() {
    tmp_352_cast_fu_14073_p1 = esl_sext<13,7>(tmp_351_fu_14068_p2.read());
}

void ShuffleNetV2::thread_tmp_353_fu_13734_p2() {
    tmp_353_fu_13734_p2 = (!p_shl46_cast_fu_13718_p1.read().is_01() || !p_shl47_cast_fu_13730_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl46_cast_fu_13718_p1.read()) - sc_biguint<7>(p_shl47_cast_fu_13730_p1.read()));
}

void ShuffleNetV2::thread_tmp_354_fu_13754_p2() {
    tmp_354_fu_13754_p2 = (!co81_cast1_reg_32666.read().is_01() || !tmp17_cast_fu_13750_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(co81_cast1_reg_32666.read()) + sc_biguint<9>(tmp17_cast_fu_13750_p1.read()));
}

void ShuffleNetV2::thread_tmp_355_cast_fu_13764_p1() {
    tmp_355_cast_fu_13764_p1 = esl_zext<12,9>(tmp_354_reg_32723.read());
}

void ShuffleNetV2::thread_tmp_356_cast_fu_11319_p1() {
    tmp_356_cast_fu_11319_p1 = esl_zext<7,4>(p_lshr_f_cast_fu_11309_p4.read());
}

void ShuffleNetV2::thread_tmp_356_fu_13759_p2() {
    tmp_356_fu_13759_p2 = (!tmp_353_fu_13734_p2.read().is_01() || !co81_cast_reg_32661.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_353_fu_13734_p2.read()) + sc_biguint<7>(co81_cast_reg_32661.read()));
}

void ShuffleNetV2::thread_tmp_357_cast_fu_13819_p1() {
    tmp_357_cast_fu_13819_p1 = esl_zext<35,32>(tmp_490_cast_fu_13816_p1.read());
}

void ShuffleNetV2::thread_tmp_358_fu_14310_p2() {
    tmp_358_fu_14310_p2 = (!p_shl44_cast_fu_14294_p1.read().is_01() || !p_shl45_cast_fu_14306_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl44_cast_fu_14294_p1.read()) - sc_biguint<7>(p_shl45_cast_fu_14306_p1.read()));
}

void ShuffleNetV2::thread_tmp_359_cast_fu_11591_p1() {
    tmp_359_cast_fu_11591_p1 = esl_sext<9,7>(tmp_267_fu_11585_p2.read());
}

void ShuffleNetV2::thread_tmp_359_fu_14326_p2() {
    tmp_359_fu_14326_p2 = (!i51_cast1_reg_32871.read().is_01() || !tmp20_fu_14320_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(i51_cast1_reg_32871.read()) + sc_biguint<10>(tmp20_fu_14320_p2.read()));
}

void ShuffleNetV2::thread_tmp_360_fu_14336_p1() {
    tmp_360_fu_14336_p1 = esl_zext<64,10>(tmp_359_reg_32892.read());
}

void ShuffleNetV2::thread_tmp_361_fu_14331_p2() {
    tmp_361_fu_14331_p2 = (!tmp_358_fu_14310_p2.read().is_01() || !i51_cast_reg_32866.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_358_fu_14310_p2.read()) + sc_biguint<7>(i51_cast_reg_32866.read()));
}

void ShuffleNetV2::thread_tmp_362_fu_14343_p1() {
    tmp_362_fu_14343_p1 = esl_zext<64,32>(tmp_481_cast_fu_14340_p1.read());
}

void ShuffleNetV2::thread_tmp_363_cast_fu_11615_p1() {
    tmp_363_cast_fu_11615_p1 = esl_sext<32,7>(tmp_270_reg_31999.read());
}

void ShuffleNetV2::thread_tmp_363_fu_14117_p2() {
    tmp_363_fu_14117_p2 = (!p_shl48_cast_fu_14101_p1.read().is_01() || !p_shl49_cast_fu_14113_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl48_cast_fu_14101_p1.read()) - sc_biguint<8>(p_shl49_cast_fu_14113_p1.read()));
}

void ShuffleNetV2::thread_tmp_364_fu_14133_p2() {
    tmp_364_fu_14133_p2 = (!tmp19_fu_14127_p2.read().is_01() || !co83_cast_reg_32801.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp19_fu_14127_p2.read()) + sc_biguint<10>(co83_cast_reg_32801.read()));
}

void ShuffleNetV2::thread_tmp_365_fu_14162_p2() {
    tmp_365_fu_14162_p2 = (!p_shl50_cast_fu_14146_p1.read().is_01() || !p_shl51_cast_fu_14158_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl50_cast_fu_14146_p1.read()) - sc_biguint<7>(p_shl51_cast_fu_14158_p1.read()));
}

void ShuffleNetV2::thread_tmp_366_fu_14168_p2() {
    tmp_366_fu_14168_p2 = (!tmp_365_fu_14162_p2.read().is_01() || !tmp_475_cast_reg_32819.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_365_fu_14162_p2.read()) + sc_biguint<7>(tmp_475_cast_reg_32819.read()));
}

void ShuffleNetV2::thread_tmp_367_fu_14483_p2() {
    tmp_367_fu_14483_p2 = (!co86_cast_fu_14467_p1.read().is_01() || !ap_const_lv7_30.is_01())? sc_lv<7>(): (sc_biguint<7>(co86_cast_fu_14467_p1.read()) + sc_biguint<7>(ap_const_lv7_30));
}

void ShuffleNetV2::thread_tmp_368_cast_fu_14402_p1() {
    tmp_368_cast_fu_14402_p1 = esl_zext<10,4>(h_69_fu_14396_p2.read());
}

void ShuffleNetV2::thread_tmp_368_fu_7899_p3() {
    tmp_368_fu_7899_p3 = esl_concat<8,1>(tmp_499_fu_7886_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_369_fu_14722_p2() {
    tmp_369_fu_14722_p2 = (!p_shl52_cast_fu_14706_p1.read().is_01() || !p_shl53_cast_fu_14718_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl52_cast_fu_14706_p1.read()) - sc_biguint<7>(p_shl53_cast_fu_14718_p1.read()));
}

void ShuffleNetV2::thread_tmp_370_cast1_fu_14561_p1() {
    tmp_370_cast1_fu_14561_p1 = esl_zext<10,4>(h_71_fu_14555_p2.read());
}

void ShuffleNetV2::thread_tmp_370_cast2_fu_14565_p1() {
    tmp_370_cast2_fu_14565_p1 = esl_zext<11,4>(h_71_fu_14555_p2.read());
}

void ShuffleNetV2::thread_tmp_370_cast_fu_11398_p1() {
    tmp_370_cast_fu_11398_p1 = esl_sext<9,8>(tmp_272_fu_11392_p2.read());
}

void ShuffleNetV2::thread_tmp_370_fu_8123_p3() {
    tmp_370_fu_8123_p3 = esl_concat<9,2>(tmp_522_fu_8114_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_371_cast_fu_14453_p1() {
    tmp_371_cast_fu_14453_p1 = esl_zext<15,4>(w_68_fu_14447_p2.read());
}

void ShuffleNetV2::thread_tmp_371_fu_8451_p3() {
    tmp_371_fu_8451_p3 = esl_concat<9,2>(tmp_572_fu_8442_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_372_cast_fu_14758_p1() {
    tmp_372_cast_fu_14758_p1 = esl_zext<17,5>(ci36_reg_4631.read());
}

void ShuffleNetV2::thread_tmp_372_fu_8474_p2() {
    tmp_372_fu_8474_p2 = (!ap_const_lv9_2.is_01())? sc_lv<9>(): tmp_585_fu_8469_p2.read() << (unsigned short)ap_const_lv9_2.to_uint();
}

void ShuffleNetV2::thread_tmp_373_fu_14762_p2() {
    tmp_373_fu_14762_p2 = (!tmp_369_reg_33018.read().is_01() || !ci36_cast_fu_14742_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_369_reg_33018.read()) + sc_biguint<7>(ci36_cast_fu_14742_p1.read()));
}

void ShuffleNetV2::thread_tmp_374_cast_fu_14767_p1() {
    tmp_374_cast_fu_14767_p1 = esl_sext<13,7>(tmp_373_fu_14762_p2.read());
}

void ShuffleNetV2::thread_tmp_374_fu_8831_p3() {
    tmp_374_fu_8831_p3 = esl_concat<11,1>(tmp_656_fu_8818_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_375_cast1_fu_14651_p1() {
    tmp_375_cast1_fu_14651_p1 = esl_zext<14,4>(w_70_fu_14645_p2.read());
}

void ShuffleNetV2::thread_tmp_375_cast_fu_14655_p1() {
    tmp_375_cast_fu_14655_p1 = esl_zext<15,4>(w_70_fu_14645_p2.read());
}

void ShuffleNetV2::thread_tmp_375_fu_8862_p3() {
    tmp_375_fu_8862_p3 = esl_concat<10,1>(tmp_660_fu_8849_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_376_fu_15004_p2() {
    tmp_376_fu_15004_p2 = (!p_shl54_cast_fu_14988_p1.read().is_01() || !p_shl55_cast_fu_15000_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl54_cast_fu_14988_p1.read()) - sc_biguint<7>(p_shl55_cast_fu_15000_p1.read()));
}

void ShuffleNetV2::thread_tmp_377_cast_cast_fu_11941_p1() {
    tmp_377_cast_cast_fu_11941_p1 = esl_sext<8,7>(tmp_278_fu_11935_p2.read());
}

void ShuffleNetV2::thread_tmp_377_fu_15020_p2() {
    tmp_377_fu_15020_p2 = (!i57_cast1_reg_33075.read().is_01() || !tmp22_fu_15014_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(i57_cast1_reg_33075.read()) + sc_biguint<10>(tmp22_fu_15014_p2.read()));
}

void ShuffleNetV2::thread_tmp_378_fu_15030_p1() {
    tmp_378_fu_15030_p1 = esl_zext<64,10>(tmp_377_reg_33096.read());
}

void ShuffleNetV2::thread_tmp_379_cast_fu_11961_p1() {
    tmp_379_cast_fu_11961_p1 = esl_sext<9,8>(tmp_279_reg_32134.read());
}

void ShuffleNetV2::thread_tmp_379_fu_15025_p2() {
    tmp_379_fu_15025_p2 = (!tmp_376_fu_15004_p2.read().is_01() || !i57_cast_reg_33070.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_376_fu_15004_p2.read()) + sc_biguint<7>(i57_cast_reg_33070.read()));
}

void ShuffleNetV2::thread_tmp_380_fu_15037_p1() {
    tmp_380_fu_15037_p1 = esl_zext<64,32>(tmp_513_cast_fu_15034_p1.read());
}

void ShuffleNetV2::thread_tmp_381_cast_fu_11969_p1() {
    tmp_381_cast_fu_11969_p1 = esl_sext<32,7>(tmp_281_reg_32139.read());
}

void ShuffleNetV2::thread_tmp_381_fu_14811_p2() {
    tmp_381_fu_14811_p2 = (!p_shl56_cast_fu_14795_p1.read().is_01() || !p_shl57_cast_fu_14807_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl56_cast_fu_14795_p1.read()) - sc_biguint<8>(p_shl57_cast_fu_14807_p1.read()));
}

void ShuffleNetV2::thread_tmp_382_fu_14827_p2() {
    tmp_382_fu_14827_p2 = (!tmp21_fu_14821_p2.read().is_01() || !co88_cast_reg_33005.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp21_fu_14821_p2.read()) + sc_biguint<10>(co88_cast_reg_33005.read()));
}

void ShuffleNetV2::thread_tmp_383_fu_14856_p2() {
    tmp_383_fu_14856_p2 = (!p_shl58_cast_fu_14840_p1.read().is_01() || !p_shl59_cast_fu_14852_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl58_cast_fu_14840_p1.read()) - sc_biguint<7>(p_shl59_cast_fu_14852_p1.read()));
}

void ShuffleNetV2::thread_tmp_384_fu_14862_p2() {
    tmp_384_fu_14862_p2 = (!tmp_383_fu_14856_p2.read().is_01() || !tmp_505_cast_reg_33023.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_383_fu_14856_p2.read()) + sc_biguint<7>(tmp_505_cast_reg_33023.read()));
}

void ShuffleNetV2::thread_tmp_385_cast1_fu_15074_p1() {
    tmp_385_cast1_fu_15074_p1 = esl_zext<36,2>(w71_reg_4686.read());
}

void ShuffleNetV2::thread_tmp_385_cast2_fu_15078_p1() {
    tmp_385_cast2_fu_15078_p1 = esl_zext<13,2>(w71_reg_4686.read());
}

void ShuffleNetV2::thread_tmp_385_cast_fu_12037_p1() {
    tmp_385_cast_fu_12037_p1 = esl_zext<7,4>(p_lshr_f1_cast_fu_12027_p4.read());
}

void ShuffleNetV2::thread_tmp_385_fu_9175_p3() {
    tmp_385_fu_9175_p3 = esl_concat<10,2>(tmp_691_fu_9166_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_386_fu_15436_p2() {
    tmp_386_fu_15436_p2 = (!p_shl62_cast_fu_15420_p1.read().is_01() || !p_shl63_cast_fu_15432_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl62_cast_fu_15420_p1.read()) - sc_biguint<7>(p_shl63_cast_fu_15432_p1.read()));
}

void ShuffleNetV2::thread_tmp_387_cast_cast_fu_12309_p1() {
    tmp_387_cast_cast_fu_12309_p1 = esl_sext<8,7>(tmp_292_fu_12303_p2.read());
}

void ShuffleNetV2::thread_tmp_387_fu_15350_p2() {
    tmp_387_fu_15350_p2 = (!p_shl60_cast_fu_15334_p1.read().is_01() || !p_shl61_cast_fu_15346_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl60_cast_fu_15334_p1.read()) - sc_biguint<7>(p_shl61_cast_fu_15346_p1.read()));
}

void ShuffleNetV2::thread_tmp_388_fu_15366_p2() {
    tmp_388_fu_15366_p2 = (!i61_cast514_cast_reg_33215.read().is_01() || !tmp24_fu_15360_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(i61_cast514_cast_reg_33215.read()) + sc_biguint<9>(tmp24_fu_15360_p2.read()));
}

void ShuffleNetV2::thread_tmp_389_cast_fu_12329_p1() {
    tmp_389_cast_fu_12329_p1 = esl_sext<9,8>(tmp_293_reg_32240.read());
}

void ShuffleNetV2::thread_tmp_389_fu_15379_p1() {
    tmp_389_fu_15379_p1 = esl_zext<64,10>(tmp_529_cast_fu_15376_p1.read());
}

void ShuffleNetV2::thread_tmp_390_fu_15371_p2() {
    tmp_390_fu_15371_p2 = (!tmp_387_fu_15350_p2.read().is_01() || !i61_cast_reg_33210.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_387_fu_15350_p2.read()) + sc_biguint<7>(i61_cast_reg_33210.read()));
}

void ShuffleNetV2::thread_tmp_391_cast_fu_12337_p1() {
    tmp_391_cast_fu_12337_p1 = esl_sext<32,7>(tmp_295_reg_32245.read());
}

void ShuffleNetV2::thread_tmp_391_fu_15387_p1() {
    tmp_391_fu_15387_p1 = esl_zext<64,32>(tmp_531_cast_fu_15384_p1.read());
}

void ShuffleNetV2::thread_tmp_392_cast1_fu_15094_p1() {
    tmp_392_cast1_fu_15094_p1 = esl_zext<10,2>(h72_reg_4697.read());
}

void ShuffleNetV2::thread_tmp_392_cast_fu_15098_p1() {
    tmp_392_cast_fu_15098_p1 = esl_zext<15,2>(h72_reg_4697.read());
}

void ShuffleNetV2::thread_tmp_392_fu_9198_p2() {
    tmp_392_fu_9198_p2 = (!ap_const_lv9_2.is_01())? sc_lv<9>(): tmp_694_fu_9193_p2.read() << (unsigned short)ap_const_lv9_2.to_uint();
}

void ShuffleNetV2::thread_tmp_393_cast_fu_15472_p1() {
    tmp_393_cast_fu_15472_p1 = esl_zext<17,5>(ci38_reg_4752.read());
}

void ShuffleNetV2::thread_tmp_393_fu_9505_p3() {
    tmp_393_fu_9505_p3 = esl_concat<10,4>(tmp_758_fu_9500_p2.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_394_fu_15476_p2() {
    tmp_394_fu_15476_p2 = (!tmp_386_reg_33264.read().is_01() || !ci38_cast_fu_15456_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_386_reg_33264.read()) + sc_biguint<7>(ci38_cast_fu_15456_p1.read()));
}

void ShuffleNetV2::thread_tmp_395_cast_fu_15481_p1() {
    tmp_395_cast_fu_15481_p1 = esl_sext<13,7>(tmp_394_fu_15476_p2.read());
}

void ShuffleNetV2::thread_tmp_395_fu_9517_p3() {
    tmp_395_fu_9517_p3 = esl_concat<10,1>(tmp_758_fu_9500_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_396_cast_fu_11729_p1() {
    tmp_396_cast_fu_11729_p1 = esl_sext<8,7>(tmp_287_fu_11723_p2.read());
}

void ShuffleNetV2::thread_tmp_396_fu_15142_p2() {
    tmp_396_fu_15142_p2 = (!p_shl66_cast_fu_15126_p1.read().is_01() || !p_shl67_cast_fu_15138_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl66_cast_fu_15126_p1.read()) - sc_biguint<7>(p_shl67_cast_fu_15138_p1.read()));
}

void ShuffleNetV2::thread_tmp_397_fu_15158_p2() {
    tmp_397_fu_15158_p2 = (!co91_cast1_reg_33116.read().is_01() || !tmp23_fu_15152_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(co91_cast1_reg_33116.read()) + sc_biguint<9>(tmp23_fu_15152_p2.read()));
}

void ShuffleNetV2::thread_tmp_398_cast_fu_15168_p1() {
    tmp_398_cast_fu_15168_p1 = esl_zext<12,9>(tmp_397_reg_33173.read());
}

void ShuffleNetV2::thread_tmp_398_fu_9676_p3() {
    tmp_398_fu_9676_p3 = esl_concat<10,1>(tmp_784_fu_9663_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_399_fu_15163_p2() {
    tmp_399_fu_15163_p2 = (!tmp_396_fu_15142_p2.read().is_01() || !co91_cast_reg_33111.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_396_fu_15142_p2.read()) + sc_biguint<7>(co91_cast_reg_33111.read()));
}

void ShuffleNetV2::thread_tmp_400_cast1_fu_15223_p1() {
    tmp_400_cast1_fu_15223_p1 = esl_zext<35,32>(tmp_550_cast_fu_15220_p1.read());
}

void ShuffleNetV2::thread_tmp_400_cast_fu_11805_p1() {
    tmp_400_cast_fu_11805_p1 = esl_sext<32,7>(tmp_290_reg_32077.read());
}

void ShuffleNetV2::thread_tmp_400_fu_9707_p3() {
    tmp_400_fu_9707_p3 = esl_concat<11,1>(tmp_788_fu_9694_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_401_fu_15718_p2() {
    tmp_401_fu_15718_p2 = (!p_shl64_cast_fu_15702_p1.read().is_01() || !p_shl65_cast_fu_15714_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl64_cast_fu_15702_p1.read()) - sc_biguint<7>(p_shl65_cast_fu_15714_p1.read()));
}

void ShuffleNetV2::thread_tmp_402_fu_15734_p2() {
    tmp_402_fu_15734_p2 = (!i63_cast501_cast_reg_33321.read().is_01() || !tmp26_fu_15728_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(i63_cast501_cast_reg_33321.read()) + sc_biguint<9>(tmp26_fu_15728_p2.read()));
}

void ShuffleNetV2::thread_tmp_403_cast_fu_12116_p1() {
    tmp_403_cast_fu_12116_p1 = esl_sext<9,8>(tmp_297_fu_12110_p2.read());
}

void ShuffleNetV2::thread_tmp_403_fu_15747_p1() {
    tmp_403_fu_15747_p1 = esl_zext<64,10>(tmp_539_cast_fu_15744_p1.read());
}

void ShuffleNetV2::thread_tmp_404_fu_15739_p2() {
    tmp_404_fu_15739_p2 = (!tmp_401_fu_15718_p2.read().is_01() || !i63_cast_reg_33316.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_401_fu_15718_p2.read()) + sc_biguint<7>(i63_cast_reg_33316.read()));
}

void ShuffleNetV2::thread_tmp_405_fu_15755_p1() {
    tmp_405_fu_15755_p1 = esl_zext<64,32>(tmp_541_cast_fu_15752_p1.read());
}

void ShuffleNetV2::thread_tmp_406_fu_15525_p2() {
    tmp_406_fu_15525_p2 = (!p_shl68_cast_fu_15509_p1.read().is_01() || !p_shl69_cast_fu_15521_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl68_cast_fu_15509_p1.read()) - sc_biguint<8>(p_shl69_cast_fu_15521_p1.read()));
}

void ShuffleNetV2::thread_tmp_407_fu_15541_p2() {
    tmp_407_fu_15541_p2 = (!tmp25_fu_15535_p2.read().is_01() || !co93_cast_reg_33251.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp25_fu_15535_p2.read()) + sc_biguint<10>(co93_cast_reg_33251.read()));
}

void ShuffleNetV2::thread_tmp_408_fu_15570_p2() {
    tmp_408_fu_15570_p2 = (!p_shl70_cast_fu_15554_p1.read().is_01() || !p_shl71_cast_fu_15566_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl70_cast_fu_15554_p1.read()) - sc_biguint<7>(p_shl71_cast_fu_15566_p1.read()));
}

void ShuffleNetV2::thread_tmp_409_fu_15576_p2() {
    tmp_409_fu_15576_p2 = (!tmp_408_fu_15570_p2.read().is_01() || !tmp_535_cast_reg_33269.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_408_fu_15570_p2.read()) + sc_biguint<7>(tmp_535_cast_reg_33269.read()));
}

void ShuffleNetV2::thread_tmp_410_cast_fu_12659_p1() {
    tmp_410_cast_fu_12659_p1 = esl_sext<10,7>(tmp_303_fu_12653_p2.read());
}

void ShuffleNetV2::thread_tmp_410_fu_15895_p2() {
    tmp_410_fu_15895_p2 = (!co96_cast_fu_15879_p1.read().is_01() || !ap_const_lv7_30.is_01())? sc_lv<7>(): (sc_biguint<7>(co96_cast_fu_15879_p1.read()) + sc_biguint<7>(ap_const_lv7_30));
}

void ShuffleNetV2::thread_tmp_411_cast_fu_15814_p1() {
    tmp_411_cast_fu_15814_p1 = esl_zext<10,4>(h_75_fu_15808_p2.read());
}

void ShuffleNetV2::thread_tmp_411_fu_10024_p3() {
    tmp_411_fu_10024_p3 = esl_concat<10,2>(tmp_825_fu_10015_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_412_fu_16134_p2() {
    tmp_412_fu_16134_p2 = (!p_shl72_cast_fu_16118_p1.read().is_01() || !p_shl73_cast_fu_16130_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl72_cast_fu_16118_p1.read()) - sc_biguint<7>(p_shl73_cast_fu_16130_p1.read()));
}

void ShuffleNetV2::thread_tmp_413_cast1_fu_15973_p1() {
    tmp_413_cast1_fu_15973_p1 = esl_zext<11,4>(h_77_fu_15967_p2.read());
}

void ShuffleNetV2::thread_tmp_413_cast_fu_15977_p1() {
    tmp_413_cast_fu_15977_p1 = esl_zext<10,4>(h_77_fu_15967_p2.read());
}

void ShuffleNetV2::thread_tmp_413_fu_10047_p2() {
    tmp_413_fu_10047_p2 = (!ap_const_lv9_2.is_01())? sc_lv<9>(): tmp_828_fu_10042_p2.read() << (unsigned short)ap_const_lv9_2.to_uint();
}

void ShuffleNetV2::thread_tmp_414_cast1_fu_15865_p1() {
    tmp_414_cast1_fu_15865_p1 = esl_zext<15,4>(w_74_fu_15859_p2.read());
}

void ShuffleNetV2::thread_tmp_414_cast_fu_12683_p1() {
    tmp_414_cast_fu_12683_p1 = esl_sext<32,7>(tmp_306_reg_32385.read());
}

void ShuffleNetV2::thread_tmp_414_fu_10350_p3() {
    tmp_414_fu_10350_p3 = esl_concat<10,4>(tmp_882_fu_10345_p2.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_415_cast_fu_16170_p1() {
    tmp_415_cast_fu_16170_p1 = esl_zext<17,5>(ci40_reg_4873.read());
}

void ShuffleNetV2::thread_tmp_415_fu_10362_p3() {
    tmp_415_fu_10362_p3 = esl_concat<10,1>(tmp_882_fu_10345_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_416_fu_16174_p2() {
    tmp_416_fu_16174_p2 = (!tmp_412_reg_33468.read().is_01() || !ci40_cast_fu_16154_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_412_reg_33468.read()) + sc_biguint<7>(ci40_cast_fu_16154_p1.read()));
}

void ShuffleNetV2::thread_tmp_417_cast_fu_16179_p1() {
    tmp_417_cast_fu_16179_p1 = esl_sext<13,7>(tmp_416_fu_16174_p2.read());
}

void ShuffleNetV2::thread_tmp_417_fu_10521_p3() {
    tmp_417_fu_10521_p3 = esl_concat<10,1>(tmp_900_fu_10508_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_418_cast1_fu_16063_p1() {
    tmp_418_cast1_fu_16063_p1 = esl_zext<15,4>(w_76_fu_16057_p2.read());
}

void ShuffleNetV2::thread_tmp_418_cast2_fu_16067_p1() {
    tmp_418_cast2_fu_16067_p1 = esl_zext<14,4>(w_76_fu_16057_p2.read());
}

void ShuffleNetV2::thread_tmp_418_cast_fu_12751_p1() {
    tmp_418_cast_fu_12751_p1 = esl_zext<7,4>(p_lshr_f2_cast_fu_12741_p4.read());
}

void ShuffleNetV2::thread_tmp_418_fu_10552_p3() {
    tmp_418_fu_10552_p3 = esl_concat<11,1>(tmp_902_fu_10539_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_419_fu_16424_p2() {
    tmp_419_fu_16424_p2 = (!p_shl74_cast_fu_16408_p1.read().is_01() || !p_shl75_cast_fu_16420_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl74_cast_fu_16408_p1.read()) - sc_biguint<7>(p_shl75_cast_fu_16420_p1.read()));
}

void ShuffleNetV2::thread_tmp_420_cast_fu_13027_p1() {
    tmp_420_cast_fu_13027_p1 = esl_sext<10,7>(tmp_318_fu_13021_p2.read());
}

void ShuffleNetV2::thread_tmp_420_fu_16440_p2() {
    tmp_420_fu_16440_p2 = (!i69_cast486_cast_reg_33525.read().is_01() || !tmp28_fu_16434_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(i69_cast486_cast_reg_33525.read()) + sc_biguint<9>(tmp28_fu_16434_p2.read()));
}

void ShuffleNetV2::thread_tmp_421_fu_16453_p1() {
    tmp_421_fu_16453_p1 = esl_zext<64,10>(tmp_571_cast_fu_16450_p1.read());
}

void ShuffleNetV2::thread_tmp_422_fu_16445_p2() {
    tmp_422_fu_16445_p2 = (!tmp_419_fu_16424_p2.read().is_01() || !i69_cast_reg_33520.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_419_fu_16424_p2.read()) + sc_biguint<7>(i69_cast_reg_33520.read()));
}

void ShuffleNetV2::thread_tmp_423_fu_16461_p1() {
    tmp_423_fu_16461_p1 = esl_zext<64,32>(tmp_573_cast_fu_16458_p1.read());
}

void ShuffleNetV2::thread_tmp_424_cast_fu_13051_p1() {
    tmp_424_cast_fu_13051_p1 = esl_sext<32,7>(tmp_321_reg_32491.read());
}

void ShuffleNetV2::thread_tmp_424_fu_16223_p2() {
    tmp_424_fu_16223_p2 = (!p_shl76_cast_fu_16207_p1.read().is_01() || !p_shl77_cast_fu_16219_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl76_cast_fu_16207_p1.read()) - sc_biguint<8>(p_shl77_cast_fu_16219_p1.read()));
}

void ShuffleNetV2::thread_tmp_425_fu_16239_p2() {
    tmp_425_fu_16239_p2 = (!tmp27_fu_16233_p2.read().is_01() || !co98_cast496_cast_reg_33455.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp27_fu_16233_p2.read()) + sc_biguint<9>(co98_cast496_cast_reg_33455.read()));
}

void ShuffleNetV2::thread_tmp_426_fu_16268_p2() {
    tmp_426_fu_16268_p2 = (!p_shl78_cast_fu_16252_p1.read().is_01() || !p_shl79_cast_fu_16264_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl78_cast_fu_16252_p1.read()) - sc_biguint<7>(p_shl79_cast_fu_16264_p1.read()));
}

void ShuffleNetV2::thread_tmp_427_fu_16274_p2() {
    tmp_427_fu_16274_p2 = (!tmp_426_fu_16268_p2.read().is_01() || !tmp_565_cast_reg_33473.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_426_fu_16268_p2.read()) + sc_biguint<7>(tmp_565_cast_reg_33473.read()));
}

void ShuffleNetV2::thread_tmp_428_cast1_fu_16498_p1() {
    tmp_428_cast1_fu_16498_p1 = esl_zext<36,2>(w77_reg_4928.read());
}

void ShuffleNetV2::thread_tmp_428_cast_fu_16502_p1() {
    tmp_428_cast_fu_16502_p1 = esl_zext<12,2>(w77_reg_4928.read());
}

void ShuffleNetV2::thread_tmp_428_fu_10875_p3() {
    tmp_428_fu_10875_p3 = esl_concat<11,2>(tmp_914_fu_10866_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_429_cast_fu_12451_p1() {
    tmp_429_cast_fu_12451_p1 = esl_sext<8,7>(tmp_312_fu_12445_p2.read());
}

void ShuffleNetV2::thread_tmp_429_fu_16860_p2() {
    tmp_429_fu_16860_p2 = (!p_shl82_cast_fu_16844_p1.read().is_01() || !p_shl83_cast_fu_16856_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl82_cast_fu_16844_p1.read()) - sc_biguint<7>(p_shl83_cast_fu_16856_p1.read()));
}

void ShuffleNetV2::thread_tmp_430_fu_16774_p2() {
    tmp_430_fu_16774_p2 = (!p_shl80_cast_fu_16758_p1.read().is_01() || !p_shl81_cast_fu_16770_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl80_cast_fu_16758_p1.read()) - sc_biguint<7>(p_shl81_cast_fu_16770_p1.read()));
}

void ShuffleNetV2::thread_tmp_431_fu_16790_p2() {
    tmp_431_fu_16790_p2 = (!i73_cast476_cast_reg_33665.read().is_01() || !tmp30_fu_16784_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(i73_cast476_cast_reg_33665.read()) + sc_biguint<8>(tmp30_fu_16784_p2.read()));
}

void ShuffleNetV2::thread_tmp_432_fu_16803_p1() {
    tmp_432_fu_16803_p1 = esl_zext<64,10>(tmp_589_cast_fu_16800_p1.read());
}

void ShuffleNetV2::thread_tmp_433_cast_fu_12523_p1() {
    tmp_433_cast_fu_12523_p1 = esl_sext<32,7>(tmp_315_reg_32323.read());
}

void ShuffleNetV2::thread_tmp_433_fu_16795_p2() {
    tmp_433_fu_16795_p2 = (!tmp_430_fu_16774_p2.read().is_01() || !i73_cast_reg_33660.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_430_fu_16774_p2.read()) + sc_biguint<7>(i73_cast_reg_33660.read()));
}

void ShuffleNetV2::thread_tmp_434_fu_16811_p1() {
    tmp_434_fu_16811_p1 = esl_zext<64,32>(tmp_591_cast_fu_16808_p1.read());
}

void ShuffleNetV2::thread_tmp_435_cast1_fu_16518_p1() {
    tmp_435_cast1_fu_16518_p1 = esl_zext<10,2>(h78_reg_4939.read());
}

void ShuffleNetV2::thread_tmp_435_cast_fu_16522_p1() {
    tmp_435_cast_fu_16522_p1 = esl_zext<15,2>(h78_reg_4939.read());
}

void ShuffleNetV2::thread_tmp_435_fu_10898_p2() {
    tmp_435_fu_10898_p2 = (!ap_const_lv9_2.is_01())? sc_lv<9>(): tmp_916_fu_10893_p2.read() << (unsigned short)ap_const_lv9_2.to_uint();
}

void ShuffleNetV2::thread_tmp_436_cast_fu_16896_p1() {
    tmp_436_cast_fu_16896_p1 = esl_zext<18,5>(ci42_reg_4994.read());
}

void ShuffleNetV2::thread_tmp_436_fu_11275_p1() {
    tmp_436_fu_11275_p1 = co65_reg_4048.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_437_fu_16900_p2() {
    tmp_437_fu_16900_p2 = (!tmp_429_reg_33714.read().is_01() || !ci42_cast_fu_16880_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_429_reg_33714.read()) + sc_biguint<7>(ci42_cast_fu_16880_p1.read()));
}

void ShuffleNetV2::thread_tmp_438_cast_fu_16905_p1() {
    tmp_438_cast_fu_16905_p1 = esl_sext<13,7>(tmp_437_fu_16900_p2.read());
}

void ShuffleNetV2::thread_tmp_438_fu_11203_p3() {
    tmp_438_fu_11203_p3 = esl_concat<10,4>(tmp_933_fu_11198_p2.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_439_fu_16566_p2() {
    tmp_439_fu_16566_p2 = (!p_shl86_cast_fu_16550_p1.read().is_01() || !p_shl87_cast_fu_16562_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl86_cast_fu_16550_p1.read()) - sc_biguint<7>(p_shl87_cast_fu_16562_p1.read()));
}

void ShuffleNetV2::thread_tmp_440_cast_fu_13330_p1() {
    tmp_440_cast_fu_13330_p1 = esl_zext<7,4>(p_lshr_f3_cast_fu_13320_p4.read());
}

void ShuffleNetV2::thread_tmp_440_fu_16582_p2() {
    tmp_440_fu_16582_p2 = (!tmp29_fu_16576_p2.read().is_01() || !co101_cast1_reg_33566.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp29_fu_16576_p2.read()) + sc_biguint<9>(co101_cast1_reg_33566.read()));
}

void ShuffleNetV2::thread_tmp_441_cast1_fu_16592_p1() {
    tmp_441_cast1_fu_16592_p1 = esl_zext<12,9>(tmp_440_reg_33623.read());
}

void ShuffleNetV2::thread_tmp_441_cast_fu_12830_p1() {
    tmp_441_cast_fu_12830_p1 = esl_sext<9,8>(tmp_323_fu_12824_p2.read());
}

void ShuffleNetV2::thread_tmp_441_fu_11215_p3() {
    tmp_441_fu_11215_p3 = esl_concat<10,1>(tmp_933_fu_11198_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_442_fu_16587_p2() {
    tmp_442_fu_16587_p2 = (!co101_cast_reg_33561.read().is_01() || !tmp_439_fu_16566_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(co101_cast_reg_33561.read()) + sc_biguint<7>(tmp_439_fu_16566_p2.read()));
}

void ShuffleNetV2::thread_tmp_443_cast_fu_16647_p1() {
    tmp_443_cast_fu_16647_p1 = esl_zext<35,32>(tmp_610_cast_fu_16644_p1.read());
}

void ShuffleNetV2::thread_tmp_443_fu_11557_p1() {
    tmp_443_fu_11557_p1 = k_reg_4092.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_444_fu_17142_p2() {
    tmp_444_fu_17142_p2 = (!p_shl84_cast_fu_17126_p1.read().is_01() || !p_shl85_cast_fu_17138_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl84_cast_fu_17126_p1.read()) - sc_biguint<7>(p_shl85_cast_fu_17138_p1.read()));
}

void ShuffleNetV2::thread_tmp_445_fu_17162_p2() {
    tmp_445_fu_17162_p2 = (!i75_cast1_reg_33771.read().is_01() || !tmp32_cast_fu_17158_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(i75_cast1_reg_33771.read()) + sc_biguint<11>(tmp32_cast_fu_17158_p1.read()));
}

void ShuffleNetV2::thread_tmp_446_fu_17172_p1() {
    tmp_446_fu_17172_p1 = esl_zext<64,11>(tmp_445_reg_33792.read());
}

void ShuffleNetV2::thread_tmp_447_fu_17167_p2() {
    tmp_447_fu_17167_p2 = (!tmp_444_fu_17142_p2.read().is_01() || !i75_cast_reg_33766.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_444_fu_17142_p2.read()) + sc_biguint<7>(i75_cast_reg_33766.read()));
}

void ShuffleNetV2::thread_tmp_448_fu_17179_p1() {
    tmp_448_fu_17179_p1 = esl_zext<64,32>(tmp_601_cast_fu_17176_p1.read());
}

void ShuffleNetV2::thread_tmp_449_cast_fu_13602_p1() {
    tmp_449_cast_fu_13602_p1 = esl_sext<10,7>(tmp_333_fu_13596_p2.read());
}

void ShuffleNetV2::thread_tmp_449_fu_16949_p2() {
    tmp_449_fu_16949_p2 = (!p_shl88_cast_fu_16933_p1.read().is_01() || !p_shl89_cast_fu_16945_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl88_cast_fu_16933_p1.read()) - sc_biguint<8>(p_shl89_cast_fu_16945_p1.read()));
}

void ShuffleNetV2::thread_tmp_450_fu_16965_p2() {
    tmp_450_fu_16965_p2 = (!tmp31_fu_16959_p2.read().is_01() || !co103_cast_reg_33701.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp31_fu_16959_p2.read()) + sc_biguint<11>(co103_cast_reg_33701.read()));
}

void ShuffleNetV2::thread_tmp_451_fu_16994_p2() {
    tmp_451_fu_16994_p2 = (!p_shl90_cast_fu_16978_p1.read().is_01() || !p_shl91_cast_fu_16990_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl90_cast_fu_16978_p1.read()) - sc_biguint<7>(p_shl91_cast_fu_16990_p1.read()));
}

void ShuffleNetV2::thread_tmp_452_fu_17000_p2() {
    tmp_452_fu_17000_p2 = (!tmp_451_fu_16994_p2.read().is_01() || !tmp_595_cast_reg_33719.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_451_fu_16994_p2.read()) + sc_biguint<7>(tmp_595_cast_reg_33719.read()));
}

void ShuffleNetV2::thread_tmp_453_cast_fu_13626_p1() {
    tmp_453_cast_fu_13626_p1 = esl_sext<32,7>(tmp_336_reg_32651.read());
}

void ShuffleNetV2::thread_tmp_453_fu_17319_p2() {
    tmp_453_fu_17319_p2 = (!co106_cast_fu_17303_p1.read().is_01() || !ap_const_lv7_30.is_01())? sc_lv<7>(): (sc_biguint<7>(co106_cast_fu_17303_p1.read()) + sc_biguint<7>(ap_const_lv7_30));
}

void ShuffleNetV2::thread_tmp_454_cast_fu_17238_p1() {
    tmp_454_cast_fu_17238_p1 = esl_zext<10,4>(h_81_fu_17232_p2.read());
}

void ShuffleNetV2::thread_tmp_454_fu_11364_p1() {
    tmp_454_fu_11364_p1 = i28_reg_4070.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_455_fu_17558_p2() {
    tmp_455_fu_17558_p2 = (!p_shl92_cast_fu_17542_p1.read().is_01() || !p_shl93_cast_fu_17554_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl92_cast_fu_17542_p1.read()) - sc_biguint<7>(p_shl93_cast_fu_17554_p1.read()));
}

void ShuffleNetV2::thread_tmp_456_cast1_fu_17401_p1() {
    tmp_456_cast1_fu_17401_p1 = esl_zext<10,4>(h_83_fu_17391_p2.read());
}

void ShuffleNetV2::thread_tmp_456_cast_fu_17397_p1() {
    tmp_456_cast_fu_17397_p1 = esl_zext<11,4>(h_83_fu_17391_p2.read());
}

void ShuffleNetV2::thread_tmp_456_fu_11993_p1() {
    tmp_456_fu_11993_p1 = co69_reg_4169.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_457_cast_fu_17289_p1() {
    tmp_457_cast_fu_17289_p1 = esl_zext<15,4>(w_80_fu_17283_p2.read());
}

void ShuffleNetV2::thread_tmp_457_fu_11907_p1() {
    tmp_457_fu_11907_p1 = k2_reg_4158.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_458_cast_fu_17594_p1() {
    tmp_458_cast_fu_17594_p1 = esl_zext<18,5>(ci44_reg_5115.read());
}

void ShuffleNetV2::thread_tmp_458_fu_11695_p1() {
    tmp_458_fu_11695_p1 = i33_reg_4136.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_459_fu_17598_p2() {
    tmp_459_fu_17598_p2 = (!tmp_455_reg_33918.read().is_01() || !ci44_cast_fu_17578_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_455_reg_33918.read()) + sc_biguint<7>(ci44_cast_fu_17578_p1.read()));
}

void ShuffleNetV2::thread_tmp_460_cast1_fu_17603_p1() {
    tmp_460_cast1_fu_17603_p1 = esl_sext<13,7>(tmp_459_fu_17598_p2.read());
}

void ShuffleNetV2::thread_tmp_460_cast_fu_13409_p1() {
    tmp_460_cast_fu_13409_p1 = esl_sext<10,8>(tmp_338_fu_13403_p2.read());
}

void ShuffleNetV2::thread_tmp_460_fu_11782_p3() {
    tmp_460_fu_11782_p3 = esl_concat<12,2>(tmp_946_fu_11773_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_461_cast1_fu_17487_p1() {
    tmp_461_cast1_fu_17487_p1 = esl_zext<15,4>(w_82_fu_17481_p2.read());
}

void ShuffleNetV2::thread_tmp_461_cast_fu_17491_p1() {
    tmp_461_cast_fu_17491_p1 = esl_zext<14,4>(w_82_fu_17481_p2.read());
}

void ShuffleNetV2::thread_tmp_461_fu_11842_p1() {
    tmp_461_fu_11842_p1 = tmp_952_fu_11837_p2.read().range(10-1, 0);
}

void ShuffleNetV2::thread_tmp_462_fu_17840_p2() {
    tmp_462_fu_17840_p2 = (!p_shl94_cast_fu_17824_p1.read().is_01() || !p_shl95_cast_fu_17836_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl94_cast_fu_17824_p1.read()) - sc_biguint<7>(p_shl95_cast_fu_17836_p1.read()));
}

void ShuffleNetV2::thread_tmp_463_fu_17856_p2() {
    tmp_463_fu_17856_p2 = (!i81_cast1_reg_33975.read().is_01() || !tmp34_fu_17850_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(i81_cast1_reg_33975.read()) + sc_biguint<11>(tmp34_fu_17850_p2.read()));
}

void ShuffleNetV2::thread_tmp_464_fu_17866_p1() {
    tmp_464_fu_17866_p1 = esl_zext<64,11>(tmp_463_reg_33996.read());
}

void ShuffleNetV2::thread_tmp_465_fu_17861_p2() {
    tmp_465_fu_17861_p2 = (!tmp_462_fu_17840_p2.read().is_01() || !i81_cast_reg_33970.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_462_fu_17840_p2.read()) + sc_biguint<7>(i81_cast_reg_33970.read()));
}

void ShuffleNetV2::thread_tmp_466_fu_17873_p1() {
    tmp_466_fu_17873_p1 = esl_zext<64,32>(tmp_633_cast_fu_17870_p1.read());
}

void ShuffleNetV2::thread_tmp_467_cast_fu_13952_p1() {
    tmp_467_cast_fu_13952_p1 = esl_sext<10,7>(tmp_344_fu_13946_p2.read());
}

void ShuffleNetV2::thread_tmp_467_fu_17647_p2() {
    tmp_467_fu_17647_p2 = (!p_shl96_cast_fu_17631_p1.read().is_01() || !p_shl97_cast_fu_17643_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl96_cast_fu_17631_p1.read()) - sc_biguint<8>(p_shl97_cast_fu_17643_p1.read()));
}

void ShuffleNetV2::thread_tmp_468_fu_17663_p2() {
    tmp_468_fu_17663_p2 = (!tmp33_fu_17657_p2.read().is_01() || !co108_cast_reg_33905.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp33_fu_17657_p2.read()) + sc_biguint<11>(co108_cast_reg_33905.read()));
}

void ShuffleNetV2::thread_tmp_469_fu_17692_p2() {
    tmp_469_fu_17692_p2 = (!p_shl98_cast_fu_17676_p1.read().is_01() || !p_shl99_cast_fu_17688_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl98_cast_fu_17676_p1.read()) - sc_biguint<7>(p_shl99_cast_fu_17688_p1.read()));
}

void ShuffleNetV2::thread_tmp_470_fu_17698_p2() {
    tmp_470_fu_17698_p2 = (!tmp_469_fu_17692_p2.read().is_01() || !tmp_625_cast_reg_33923.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_469_fu_17692_p2.read()) + sc_biguint<7>(tmp_625_cast_reg_33923.read()));
}

void ShuffleNetV2::thread_tmp_471_cast1_fu_17910_p1() {
    tmp_471_cast1_fu_17910_p1 = esl_zext<36,2>(w83_reg_5170.read());
}

void ShuffleNetV2::thread_tmp_471_cast2_fu_17914_p1() {
    tmp_471_cast2_fu_17914_p1 = esl_zext<12,2>(w83_reg_5170.read());
}

void ShuffleNetV2::thread_tmp_471_cast_fu_13976_p1() {
    tmp_471_cast_fu_13976_p1 = esl_sext<32,7>(tmp_347_reg_32791.read());
}

void ShuffleNetV2::thread_tmp_471_fu_7823_p3() {
    tmp_471_fu_7823_p3 = esl_concat<2,5>(ci_reg_3286.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_472_fu_18268_p2() {
    tmp_472_fu_18268_p2 = (!p_shl102_cast_fu_18252_p1.read().is_01() || !p_shl103_cast_fu_18264_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl102_cast_fu_18252_p1.read()) - sc_biguint<7>(p_shl103_cast_fu_18264_p1.read()));
}

void ShuffleNetV2::thread_tmp_473_fu_18186_p2() {
    tmp_473_fu_18186_p2 = (!p_shl100_cast_fu_18170_p1.read().is_01() || !p_shl101_cast_fu_18182_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl100_cast_fu_18170_p1.read()) - sc_biguint<7>(p_shl101_cast_fu_18182_p1.read()));
}

void ShuffleNetV2::thread_tmp_474_fu_18202_p2() {
    tmp_474_fu_18202_p2 = (!i85_cast1_reg_34115.read().is_01() || !tmp36_fu_18196_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(i85_cast1_reg_34115.read()) + sc_biguint<11>(tmp36_fu_18196_p2.read()));
}

void ShuffleNetV2::thread_tmp_475_cast_fu_14044_p1() {
    tmp_475_cast_fu_14044_p1 = esl_zext<7,4>(p_lshr_f4_cast_fu_14034_p4.read());
}

void ShuffleNetV2::thread_tmp_475_fu_18212_p1() {
    tmp_475_fu_18212_p1 = esl_zext<64,11>(tmp_474_reg_34136.read());
}

void ShuffleNetV2::thread_tmp_476_fu_18207_p2() {
    tmp_476_fu_18207_p2 = (!tmp_473_fu_18186_p2.read().is_01() || !i85_cast_reg_34110.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_473_fu_18186_p2.read()) + sc_biguint<7>(i85_cast_reg_34110.read()));
}

void ShuffleNetV2::thread_tmp_477_cast_fu_14316_p1() {
    tmp_477_cast_fu_14316_p1 = esl_sext<10,7>(tmp_358_fu_14310_p2.read());
}

void ShuffleNetV2::thread_tmp_477_fu_18219_p1() {
    tmp_477_fu_18219_p1 = esl_zext<64,32>(tmp_651_cast_fu_18216_p1.read());
}

void ShuffleNetV2::thread_tmp_478_cast1_fu_17930_p1() {
    tmp_478_cast1_fu_17930_p1 = esl_zext<10,2>(h84_reg_5181.read());
}

void ShuffleNetV2::thread_tmp_478_cast_fu_17934_p1() {
    tmp_478_cast_fu_17934_p1 = esl_zext<15,2>(h84_reg_5181.read());
}

void ShuffleNetV2::thread_tmp_478_fu_7835_p3() {
    tmp_478_fu_7835_p3 = esl_concat<2,1>(ci_reg_3286.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_479_cast_fu_18304_p1() {
    tmp_479_cast_fu_18304_p1 = esl_zext<18,5>(ci46_reg_5236.read());
}

void ShuffleNetV2::thread_tmp_479_fu_7847_p2() {
    tmp_479_fu_7847_p2 = (!p_shl276_cast_fu_7843_p1.read().is_01() || !tmp_638_cast_fu_7831_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl276_cast_fu_7843_p1.read()) + sc_biguint<8>(tmp_638_cast_fu_7831_p1.read()));
}

void ShuffleNetV2::thread_tmp_480_fu_18308_p2() {
    tmp_480_fu_18308_p2 = (!tmp_472_reg_34164.read().is_01() || !ci46_cast_fu_18288_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_472_reg_34164.read()) + sc_biguint<7>(ci46_cast_fu_18288_p1.read()));
}

void ShuffleNetV2::thread_tmp_481_cast1_fu_18313_p1() {
    tmp_481_cast1_fu_18313_p1 = esl_sext<13,7>(tmp_480_fu_18308_p2.read());
}

void ShuffleNetV2::thread_tmp_481_cast_fu_14340_p1() {
    tmp_481_cast_fu_14340_p1 = esl_sext<32,7>(tmp_361_reg_32897.read());
}

void ShuffleNetV2::thread_tmp_481_fu_7968_p3() {
    tmp_481_fu_7968_p3 = esl_concat<5,5>(co_reg_3319.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_482_fu_17978_p2() {
    tmp_482_fu_17978_p2 = (!p_shl106_cast_fu_17962_p1.read().is_01() || !p_shl107_cast_fu_17974_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl106_cast_fu_17962_p1.read()) - sc_biguint<7>(p_shl107_cast_fu_17974_p1.read()));
}

void ShuffleNetV2::thread_tmp_483_fu_17994_p2() {
    tmp_483_fu_17994_p2 = (!tmp35_fu_17988_p2.read().is_01() || !co111_cast1_reg_34016.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp35_fu_17988_p2.read()) + sc_biguint<9>(co111_cast1_reg_34016.read()));
}

void ShuffleNetV2::thread_tmp_484_cast_fu_18004_p1() {
    tmp_484_cast_fu_18004_p1 = esl_zext<12,9>(tmp_483_reg_34073.read());
}

void ShuffleNetV2::thread_tmp_484_fu_7980_p3() {
    tmp_484_fu_7980_p3 = esl_concat<5,3>(co_reg_3319.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_485_fu_17999_p2() {
    tmp_485_fu_17999_p2 = (!co111_cast_reg_34011.read().is_01() || !tmp_482_fu_17978_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(co111_cast_reg_34011.read()) + sc_biguint<7>(tmp_482_fu_17978_p2.read()));
}

void ShuffleNetV2::thread_tmp_486_cast_fu_18059_p1() {
    tmp_486_cast_fu_18059_p1 = esl_zext<35,32>(tmp_670_cast_fu_18056_p1.read());
}

void ShuffleNetV2::thread_tmp_486_fu_7992_p2() {
    tmp_486_fu_7992_p2 = (!p_shl279_cast_fu_7976_p1.read().is_01() || !p_shl280_cast_fu_7988_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl279_cast_fu_7976_p1.read()) - sc_biguint<11>(p_shl280_cast_fu_7988_p1.read()));
}

void ShuffleNetV2::thread_tmp_487_fu_18550_p2() {
    tmp_487_fu_18550_p2 = (!p_shl104_cast_fu_18534_p1.read().is_01() || !p_shl105_cast_fu_18546_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl104_cast_fu_18534_p1.read()) - sc_biguint<7>(p_shl105_cast_fu_18546_p1.read()));
}

void ShuffleNetV2::thread_tmp_488_fu_18566_p2() {
    tmp_488_fu_18566_p2 = (!i87_cast1_reg_34221.read().is_01() || !tmp38_fu_18560_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(i87_cast1_reg_34221.read()) + sc_biguint<11>(tmp38_fu_18560_p2.read()));
}

void ShuffleNetV2::thread_tmp_489_fu_18576_p1() {
    tmp_489_fu_18576_p1 = esl_zext<64,11>(tmp_488_reg_34242.read());
}

void ShuffleNetV2::thread_tmp_490_cast_fu_13816_p1() {
    tmp_490_cast_fu_13816_p1 = esl_sext<32,7>(tmp_356_reg_32729.read());
}

void ShuffleNetV2::thread_tmp_490_fu_18571_p2() {
    tmp_490_fu_18571_p2 = (!tmp_487_fu_18550_p2.read().is_01() || !i87_cast_reg_34216.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_487_fu_18550_p2.read()) + sc_biguint<7>(i87_cast_reg_34216.read()));
}

void ShuffleNetV2::thread_tmp_491_fu_18583_p1() {
    tmp_491_fu_18583_p1 = esl_zext<64,32>(tmp_661_cast_fu_18580_p1.read());
}

void ShuffleNetV2::thread_tmp_492_fu_18357_p2() {
    tmp_492_fu_18357_p2 = (!p_shl108_cast_fu_18341_p1.read().is_01() || !p_shl109_cast_fu_18353_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl108_cast_fu_18341_p1.read()) - sc_biguint<8>(p_shl109_cast_fu_18353_p1.read()));
}

void ShuffleNetV2::thread_tmp_493_cast_fu_14123_p1() {
    tmp_493_cast_fu_14123_p1 = esl_sext<10,8>(tmp_363_fu_14117_p2.read());
}

void ShuffleNetV2::thread_tmp_493_fu_18373_p2() {
    tmp_493_fu_18373_p2 = (!tmp37_fu_18367_p2.read().is_01() || !co113_cast_reg_34151.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp37_fu_18367_p2.read()) + sc_biguint<11>(co113_cast_reg_34151.read()));
}

void ShuffleNetV2::thread_tmp_494_fu_18402_p2() {
    tmp_494_fu_18402_p2 = (!p_shl110_cast_fu_18386_p1.read().is_01() || !p_shl111_cast_fu_18398_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl110_cast_fu_18386_p1.read()) - sc_biguint<7>(p_shl111_cast_fu_18398_p1.read()));
}

void ShuffleNetV2::thread_tmp_495_fu_18408_p2() {
    tmp_495_fu_18408_p2 = (!tmp_494_fu_18402_p2.read().is_01() || !tmp_655_cast_reg_34169.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_494_fu_18402_p2.read()) + sc_biguint<7>(tmp_655_cast_reg_34169.read()));
}

void ShuffleNetV2::thread_tmp_496_fu_18723_p2() {
    tmp_496_fu_18723_p2 = (!co116_cast_fu_18707_p1.read().is_01() || !ap_const_lv7_30.is_01())? sc_lv<7>(): (sc_biguint<7>(co116_cast_fu_18707_p1.read()) + sc_biguint<7>(ap_const_lv7_30));
}

void ShuffleNetV2::thread_tmp_497_cast_fu_18642_p1() {
    tmp_497_cast_fu_18642_p1 = esl_zext<10,4>(h_87_fu_18636_p2.read());
}

void ShuffleNetV2::thread_tmp_497_fu_7869_p2() {
    tmp_497_fu_7869_p2 = (!tmp_164_cast_fu_7865_p1.read().is_01() || !tmp_638_cast_reg_30802.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_164_cast_fu_7865_p1.read()) + sc_biguint<8>(tmp_638_cast_reg_30802.read()));
}

void ShuffleNetV2::thread_tmp_498_fu_18962_p2() {
    tmp_498_fu_18962_p2 = (!p_shl112_cast_fu_18946_p1.read().is_01() || !p_shl113_cast_fu_18958_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl112_cast_fu_18946_p1.read()) - sc_biguint<7>(p_shl113_cast_fu_18958_p1.read()));
}

void ShuffleNetV2::thread_tmp_499_cast1_fu_18801_p1() {
    tmp_499_cast1_fu_18801_p1 = esl_zext<11,4>(h_89_fu_18795_p2.read());
}

void ShuffleNetV2::thread_tmp_499_cast_fu_18805_p1() {
    tmp_499_cast_fu_18805_p1 = esl_zext<10,4>(h_89_fu_18795_p2.read());
}

void ShuffleNetV2::thread_tmp_499_fu_7886_p2() {
    tmp_499_fu_7886_p2 = (!tmp_165_cast_fu_7882_p1.read().is_01() || !tmp_479_reg_30807.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_165_cast_fu_7882_p1.read()) + sc_biguint<8>(tmp_479_reg_30807.read()));
}

void ShuffleNetV2::thread_tmp_500_cast_fu_18693_p1() {
    tmp_500_cast_fu_18693_p1 = esl_zext<15,4>(w_86_fu_18687_p2.read());
}

void ShuffleNetV2::thread_tmp_500_fu_7911_p2() {
    tmp_500_fu_7911_p2 = (!p_shl277_cast_fu_7891_p3.read().is_01() || !p_shl278_cast_fu_7907_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl277_cast_fu_7891_p3.read()) + sc_biguint<13>(p_shl278_cast_fu_7907_p1.read()));
}

void ShuffleNetV2::thread_tmp_501_cast_fu_18998_p1() {
    tmp_501_cast_fu_18998_p1 = esl_zext<18,5>(ci48_reg_5357.read());
}

void ShuffleNetV2::thread_tmp_501_fu_8018_p2() {
    tmp_501_fu_8018_p2 = (!tmp_680_cast_reg_30856.read().is_01() || !tmp_169_cast_fu_8014_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(tmp_680_cast_reg_30856.read()) + sc_biguint<12>(tmp_169_cast_fu_8014_p1.read()));
}

void ShuffleNetV2::thread_tmp_502_fu_19002_p2() {
    tmp_502_fu_19002_p2 = (!tmp_498_reg_34368.read().is_01() || !ci48_cast_fu_18982_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_498_reg_34368.read()) + sc_biguint<7>(ci48_cast_fu_18982_p1.read()));
}

void ShuffleNetV2::thread_tmp_503_cast_fu_19007_p1() {
    tmp_503_cast_fu_19007_p1 = esl_sext<13,7>(tmp_502_fu_19002_p2.read());
}

void ShuffleNetV2::thread_tmp_503_fu_7933_p2() {
    tmp_503_fu_7933_p2 = (!tmp_693_cast1_reg_30820.read().is_01() || !tmp_170_cast_fu_7929_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_693_cast1_reg_30820.read()) + sc_biguint<13>(tmp_170_cast_fu_7929_p1.read()));
}

void ShuffleNetV2::thread_tmp_504_cast1_fu_18891_p1() {
    tmp_504_cast1_fu_18891_p1 = esl_zext<15,4>(w_88_fu_18885_p2.read());
}

void ShuffleNetV2::thread_tmp_504_cast_fu_18895_p1() {
    tmp_504_cast_fu_18895_p1 = esl_zext<14,4>(w_88_fu_18885_p2.read());
}

void ShuffleNetV2::thread_tmp_504_fu_7947_p2() {
    tmp_504_fu_7947_p2 = (!tmp_500_reg_30825.read().is_01() || !tmp_171_cast_fu_7943_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_500_reg_30825.read()) + sc_biguint<13>(tmp_171_cast_fu_7943_p1.read()));
}

void ShuffleNetV2::thread_tmp_505_cast_fu_14738_p1() {
    tmp_505_cast_fu_14738_p1 = esl_zext<7,4>(p_lshr_f5_cast_fu_14728_p4.read());
}

void ShuffleNetV2::thread_tmp_505_fu_19244_p2() {
    tmp_505_fu_19244_p2 = (!p_shl114_cast_fu_19228_p1.read().is_01() || !p_shl115_cast_fu_19240_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl114_cast_fu_19228_p1.read()) - sc_biguint<7>(p_shl115_cast_fu_19240_p1.read()));
}

void ShuffleNetV2::thread_tmp_506_fu_19260_p2() {
    tmp_506_fu_19260_p2 = (!i93_cast1_reg_34425.read().is_01() || !tmp40_fu_19254_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(i93_cast1_reg_34425.read()) + sc_biguint<11>(tmp40_fu_19254_p2.read()));
}

void ShuffleNetV2::thread_tmp_507_fu_19270_p1() {
    tmp_507_fu_19270_p1 = esl_zext<64,11>(tmp_506_reg_34446.read());
}

void ShuffleNetV2::thread_tmp_508_fu_19265_p2() {
    tmp_508_fu_19265_p2 = (!tmp_505_fu_19244_p2.read().is_01() || !i93_cast_reg_34420.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_505_fu_19244_p2.read()) + sc_biguint<7>(i93_cast_reg_34420.read()));
}

void ShuffleNetV2::thread_tmp_509_cast_fu_15010_p1() {
    tmp_509_cast_fu_15010_p1 = esl_sext<10,7>(tmp_376_fu_15004_p2.read());
}

void ShuffleNetV2::thread_tmp_509_fu_19277_p1() {
    tmp_509_fu_19277_p1 = esl_zext<64,32>(tmp_693_cast_fu_19274_p1.read());
}

void ShuffleNetV2::thread_tmp_510_fu_19051_p2() {
    tmp_510_fu_19051_p2 = (!p_shl116_cast_fu_19035_p1.read().is_01() || !p_shl117_cast_fu_19047_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl116_cast_fu_19035_p1.read()) - sc_biguint<8>(p_shl117_cast_fu_19047_p1.read()));
}

void ShuffleNetV2::thread_tmp_511_fu_19067_p2() {
    tmp_511_fu_19067_p2 = (!tmp39_fu_19061_p2.read().is_01() || !co118_cast_reg_34355.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp39_fu_19061_p2.read()) + sc_biguint<11>(co118_cast_reg_34355.read()));
}

void ShuffleNetV2::thread_tmp_512_fu_19096_p2() {
    tmp_512_fu_19096_p2 = (!p_shl118_cast_fu_19080_p1.read().is_01() || !p_shl119_cast_fu_19092_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl118_cast_fu_19080_p1.read()) - sc_biguint<7>(p_shl119_cast_fu_19092_p1.read()));
}

void ShuffleNetV2::thread_tmp_513_cast_fu_15034_p1() {
    tmp_513_cast_fu_15034_p1 = esl_sext<32,7>(tmp_379_reg_33101.read());
}

void ShuffleNetV2::thread_tmp_513_fu_19102_p2() {
    tmp_513_fu_19102_p2 = (!tmp_512_fu_19096_p2.read().is_01() || !tmp_685_cast_reg_34373.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_512_fu_19096_p2.read()) + sc_biguint<7>(tmp_685_cast_reg_34373.read()));
}

void ShuffleNetV2::thread_tmp_514_cast1_fu_19314_p1() {
    tmp_514_cast1_fu_19314_p1 = esl_zext<36,2>(w89_reg_5412.read());
}

void ShuffleNetV2::thread_tmp_514_cast_fu_19318_p1() {
    tmp_514_cast_fu_19318_p1 = esl_zext<12,2>(w89_reg_5412.read());
}

void ShuffleNetV2::thread_tmp_514_fu_8076_p3() {
    tmp_514_fu_8076_p3 = esl_concat<5,2>(co5_reg_3353.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_515_fu_19680_p2() {
    tmp_515_fu_19680_p2 = (!p_shl122_cast_fu_19664_p1.read().is_01() || !p_shl123_cast_fu_19676_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl122_cast_fu_19664_p1.read()) - sc_biguint<7>(p_shl123_cast_fu_19676_p1.read()));
}

void ShuffleNetV2::thread_tmp_516_fu_19598_p2() {
    tmp_516_fu_19598_p2 = (!p_shl120_cast_fu_19582_p1.read().is_01() || !p_shl121_cast_fu_19594_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl120_cast_fu_19582_p1.read()) - sc_biguint<7>(p_shl121_cast_fu_19594_p1.read()));
}

void ShuffleNetV2::thread_tmp_517_fu_19614_p2() {
    tmp_517_fu_19614_p2 = (!i97_cast1_reg_34565.read().is_01() || !tmp42_fu_19608_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(i97_cast1_reg_34565.read()) + sc_biguint<11>(tmp42_fu_19608_p2.read()));
}

void ShuffleNetV2::thread_tmp_518_fu_19624_p1() {
    tmp_518_fu_19624_p1 = esl_zext<64,11>(tmp_517_reg_34586.read());
}

void ShuffleNetV2::thread_tmp_519_fu_19619_p2() {
    tmp_519_fu_19619_p2 = (!tmp_516_fu_19598_p2.read().is_01() || !i97_cast_reg_34560.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_516_fu_19598_p2.read()) + sc_biguint<7>(i97_cast_reg_34560.read()));
}

void ShuffleNetV2::thread_tmp_520_cast_fu_14817_p1() {
    tmp_520_cast_fu_14817_p1 = esl_sext<10,8>(tmp_381_fu_14811_p2.read());
}

void ShuffleNetV2::thread_tmp_520_fu_19631_p1() {
    tmp_520_fu_19631_p1 = esl_zext<64,32>(tmp_711_cast_fu_19628_p1.read());
}

void ShuffleNetV2::thread_tmp_521_cast1_fu_19334_p1() {
    tmp_521_cast1_fu_19334_p1 = esl_zext<10,2>(h90_reg_5423.read());
}

void ShuffleNetV2::thread_tmp_521_cast_fu_19338_p1() {
    tmp_521_cast_fu_19338_p1 = esl_zext<15,2>(h90_reg_5423.read());
}

void ShuffleNetV2::thread_tmp_521_fu_8088_p2() {
    tmp_521_fu_8088_p2 = (!p_shl281_cast_fu_8084_p1.read().is_01() || !tmp_172_cast_fu_8072_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl281_cast_fu_8084_p1.read()) - sc_biguint<8>(tmp_172_cast_fu_8072_p1.read()));
}

void ShuffleNetV2::thread_tmp_522_cast_fu_19716_p1() {
    tmp_522_cast_fu_19716_p1 = esl_zext<18,5>(ci50_reg_5478.read());
}

void ShuffleNetV2::thread_tmp_522_fu_8114_p2() {
    tmp_522_fu_8114_p2 = (!tmp_176_cast_fu_8110_p1.read().is_01() || !tmp_760_cast1_reg_30900.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_176_cast_fu_8110_p1.read()) + sc_bigint<9>(tmp_760_cast1_reg_30900.read()));
}

void ShuffleNetV2::thread_tmp_523_fu_19720_p2() {
    tmp_523_fu_19720_p2 = (!tmp_515_reg_34614.read().is_01() || !ci50_cast_fu_19700_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_515_reg_34614.read()) + sc_biguint<7>(ci50_cast_fu_19700_p1.read()));
}

void ShuffleNetV2::thread_tmp_524_cast_fu_19725_p1() {
    tmp_524_cast_fu_19725_p1 = esl_sext<13,7>(tmp_523_fu_19720_p2.read());
}

void ShuffleNetV2::thread_tmp_524_fu_8135_p2() {
    tmp_524_fu_8135_p2 = (!p_shl282_cast_fu_8131_p1.read().is_01() || !tmp_763_cast_fu_8119_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_shl282_cast_fu_8131_p1.read()) - sc_bigint<15>(tmp_763_cast_fu_8119_p1.read()));
}

void ShuffleNetV2::thread_tmp_525_fu_19382_p2() {
    tmp_525_fu_19382_p2 = (!p_shl126_cast_fu_19366_p1.read().is_01() || !p_shl127_cast_fu_19378_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl126_cast_fu_19366_p1.read()) - sc_biguint<7>(p_shl127_cast_fu_19378_p1.read()));
}

void ShuffleNetV2::thread_tmp_526_fu_19398_p2() {
    tmp_526_fu_19398_p2 = (!tmp41_fu_19392_p2.read().is_01() || !co121_cast406_cast_reg_34466.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp41_fu_19392_p2.read()) + sc_biguint<8>(co121_cast406_cast_reg_34466.read()));
}

void ShuffleNetV2::thread_tmp_527_cast_cast_fu_15356_p1() {
    tmp_527_cast_cast_fu_15356_p1 = esl_sext<9,7>(tmp_387_fu_15350_p2.read());
}

void ShuffleNetV2::thread_tmp_527_cast_fu_19411_p1() {
    tmp_527_cast_fu_19411_p1 = esl_zext<12,9>(tmp_728_cast_fu_19408_p1.read());
}

void ShuffleNetV2::thread_tmp_527_fu_8221_p3() {
    tmp_527_fu_8221_p3 = esl_concat<6,5>(tmp_177_fu_8215_p2.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_528_fu_19403_p2() {
    tmp_528_fu_19403_p2 = (!co121_cast_reg_34461.read().is_01() || !tmp_525_fu_19382_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(co121_cast_reg_34461.read()) + sc_biguint<7>(tmp_525_fu_19382_p2.read()));
}

void ShuffleNetV2::thread_tmp_529_cast1_fu_19471_p1() {
    tmp_529_cast1_fu_19471_p1 = esl_zext<35,32>(tmp_730_cast_fu_19468_p1.read());
}

void ShuffleNetV2::thread_tmp_529_cast_fu_15376_p1() {
    tmp_529_cast_fu_15376_p1 = esl_sext<10,9>(tmp_388_reg_33236.read());
}

void ShuffleNetV2::thread_tmp_529_fu_8233_p3() {
    tmp_529_fu_8233_p3 = esl_concat<6,3>(tmp_177_fu_8215_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_530_fu_19962_p2() {
    tmp_530_fu_19962_p2 = (!p_shl124_cast_fu_19946_p1.read().is_01() || !p_shl125_cast_fu_19958_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl124_cast_fu_19946_p1.read()) - sc_biguint<7>(p_shl125_cast_fu_19958_p1.read()));
}

void ShuffleNetV2::thread_tmp_531_cast_fu_15384_p1() {
    tmp_531_cast_fu_15384_p1 = esl_sext<32,7>(tmp_390_reg_33241.read());
}

void ShuffleNetV2::thread_tmp_531_fu_19978_p2() {
    tmp_531_fu_19978_p2 = (!i99_cast1_reg_34671.read().is_01() || !tmp44_fu_19972_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(i99_cast1_reg_34671.read()) + sc_biguint<11>(tmp44_fu_19972_p2.read()));
}

void ShuffleNetV2::thread_tmp_532_fu_19988_p1() {
    tmp_532_fu_19988_p1 = esl_zext<64,11>(tmp_531_reg_34692.read());
}

void ShuffleNetV2::thread_tmp_533_fu_19983_p2() {
    tmp_533_fu_19983_p2 = (!tmp_530_fu_19962_p2.read().is_01() || !i99_cast_reg_34666.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_530_fu_19962_p2.read()) + sc_biguint<7>(i99_cast_reg_34666.read()));
}

void ShuffleNetV2::thread_tmp_534_fu_19995_p1() {
    tmp_534_fu_19995_p1 = esl_zext<64,32>(tmp_721_cast_fu_19992_p1.read());
}

void ShuffleNetV2::thread_tmp_535_cast_fu_15452_p1() {
    tmp_535_cast_fu_15452_p1 = esl_zext<7,4>(p_lshr_f6_cast_fu_15442_p4.read());
}

void ShuffleNetV2::thread_tmp_535_fu_19769_p2() {
    tmp_535_fu_19769_p2 = (!p_shl128_cast_fu_19753_p1.read().is_01() || !p_shl129_cast_fu_19765_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl128_cast_fu_19753_p1.read()) - sc_biguint<8>(p_shl129_cast_fu_19765_p1.read()));
}

void ShuffleNetV2::thread_tmp_536_fu_19785_p2() {
    tmp_536_fu_19785_p2 = (!tmp43_fu_19779_p2.read().is_01() || !co123_cast_reg_34601.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp43_fu_19779_p2.read()) + sc_biguint<11>(co123_cast_reg_34601.read()));
}

void ShuffleNetV2::thread_tmp_537_cast_cast_fu_15724_p1() {
    tmp_537_cast_cast_fu_15724_p1 = esl_sext<9,7>(tmp_401_fu_15718_p2.read());
}

void ShuffleNetV2::thread_tmp_537_fu_19814_p2() {
    tmp_537_fu_19814_p2 = (!p_shl130_cast_fu_19798_p1.read().is_01() || !p_shl131_cast_fu_19810_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl130_cast_fu_19798_p1.read()) - sc_biguint<7>(p_shl131_cast_fu_19810_p1.read()));
}

void ShuffleNetV2::thread_tmp_538_fu_19820_p2() {
    tmp_538_fu_19820_p2 = (!tmp_537_fu_19814_p2.read().is_01() || !tmp_715_cast_reg_34619.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_537_fu_19814_p2.read()) + sc_biguint<7>(tmp_715_cast_reg_34619.read()));
}

void ShuffleNetV2::thread_tmp_539_cast_fu_15744_p1() {
    tmp_539_cast_fu_15744_p1 = esl_sext<10,9>(tmp_402_reg_33342.read());
}

void ShuffleNetV2::thread_tmp_539_fu_20135_p2() {
    tmp_539_fu_20135_p2 = (!co126_cast_fu_20119_p1.read().is_01() || !ap_const_lv7_30.is_01())? sc_lv<7>(): (sc_biguint<7>(co126_cast_fu_20119_p1.read()) + sc_biguint<7>(ap_const_lv7_30));
}

void ShuffleNetV2::thread_tmp_540_cast_fu_20054_p1() {
    tmp_540_cast_fu_20054_p1 = esl_zext<10,4>(h_93_fu_20048_p2.read());
}

void ShuffleNetV2::thread_tmp_540_fu_8245_p2() {
    tmp_540_fu_8245_p2 = (!p_shl285_cast_fu_8229_p1.read().is_01() || !p_shl286_cast_fu_8241_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(p_shl285_cast_fu_8229_p1.read()) - sc_biguint<12>(p_shl286_cast_fu_8241_p1.read()));
}

void ShuffleNetV2::thread_tmp_541_cast_fu_15752_p1() {
    tmp_541_cast_fu_15752_p1 = esl_sext<32,7>(tmp_404_reg_33347.read());
}

void ShuffleNetV2::thread_tmp_541_fu_20374_p2() {
    tmp_541_fu_20374_p2 = (!p_shl132_cast_fu_20358_p1.read().is_01() || !p_shl133_cast_fu_20370_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl132_cast_fu_20358_p1.read()) - sc_biguint<7>(p_shl133_cast_fu_20370_p1.read()));
}

void ShuffleNetV2::thread_tmp_542_cast1_fu_20213_p1() {
    tmp_542_cast1_fu_20213_p1 = esl_zext<10,4>(h_95_fu_20207_p2.read());
}

void ShuffleNetV2::thread_tmp_542_cast_fu_20217_p1() {
    tmp_542_cast_fu_20217_p1 = esl_zext<11,4>(h_95_fu_20207_p2.read());
}

void ShuffleNetV2::thread_tmp_542_fu_8255_p3() {
    tmp_542_fu_8255_p3 = esl_concat<5,5>(co9_reg_3398.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_543_cast_fu_20105_p1() {
    tmp_543_cast_fu_20105_p1 = esl_zext<15,4>(w_92_fu_20099_p2.read());
}

void ShuffleNetV2::thread_tmp_543_fu_8267_p3() {
    tmp_543_fu_8267_p3 = esl_concat<5,3>(co9_reg_3398.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_544_cast_fu_20410_p1() {
    tmp_544_cast_fu_20410_p1 = esl_zext<18,5>(ci52_reg_5599.read());
}

void ShuffleNetV2::thread_tmp_544_fu_8279_p2() {
    tmp_544_fu_8279_p2 = (!p_shl283_cast_fu_8263_p1.read().is_01() || !p_shl284_cast_fu_8275_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl283_cast_fu_8263_p1.read()) - sc_biguint<11>(p_shl284_cast_fu_8275_p1.read()));
}

void ShuffleNetV2::thread_tmp_545_fu_20414_p2() {
    tmp_545_fu_20414_p2 = (!tmp_541_reg_34818.read().is_01() || !ci52_cast_fu_20394_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_541_reg_34818.read()) + sc_biguint<7>(ci52_cast_fu_20394_p1.read()));
}

void ShuffleNetV2::thread_tmp_546_cast1_fu_20419_p1() {
    tmp_546_cast1_fu_20419_p1 = esl_sext<13,7>(tmp_545_fu_20414_p2.read());
}

void ShuffleNetV2::thread_tmp_546_cast_fu_15148_p1() {
    tmp_546_cast_fu_15148_p1 = esl_sext<9,7>(tmp_396_fu_15142_p2.read());
}

void ShuffleNetV2::thread_tmp_546_fu_8157_p2() {
    tmp_546_fu_8157_p2 = (!tmp_524_reg_30913.read().is_01() || !tmp_178_cast_fu_8153_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_524_reg_30913.read()) + sc_biguint<15>(tmp_178_cast_fu_8153_p1.read()));
}

void ShuffleNetV2::thread_tmp_547_cast1_fu_20303_p1() {
    tmp_547_cast1_fu_20303_p1 = esl_zext<14,4>(w_94_fu_20297_p2.read());
}

void ShuffleNetV2::thread_tmp_547_cast_fu_20307_p1() {
    tmp_547_cast_fu_20307_p1 = esl_zext<15,4>(w_94_fu_20297_p2.read());
}

void ShuffleNetV2::thread_tmp_547_fu_8305_p2() {
    tmp_547_fu_8305_p2 = (!tmp_808_cast_reg_30957.read().is_01() || !tmp_182_cast_fu_8301_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(tmp_808_cast_reg_30957.read()) + sc_biguint<13>(tmp_182_cast_fu_8301_p1.read()));
}

void ShuffleNetV2::thread_tmp_548_fu_20656_p2() {
    tmp_548_fu_20656_p2 = (!p_shl134_cast_fu_20640_p1.read().is_01() || !p_shl135_cast_fu_20652_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl134_cast_fu_20640_p1.read()) - sc_biguint<7>(p_shl135_cast_fu_20652_p1.read()));
}

void ShuffleNetV2::thread_tmp_549_fu_20672_p2() {
    tmp_549_fu_20672_p2 = (!i105_cast1_reg_34875.read().is_01() || !tmp46_fu_20666_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(i105_cast1_reg_34875.read()) + sc_biguint<11>(tmp46_fu_20666_p2.read()));
}

void ShuffleNetV2::thread_tmp_550_cast_fu_15220_p1() {
    tmp_550_cast_fu_15220_p1 = esl_sext<32,7>(tmp_399_reg_33179.read());
}

void ShuffleNetV2::thread_tmp_550_fu_20682_p1() {
    tmp_550_fu_20682_p1 = esl_zext<64,11>(tmp_549_reg_34896.read());
}

void ShuffleNetV2::thread_tmp_551_fu_20677_p2() {
    tmp_551_fu_20677_p2 = (!tmp_548_fu_20656_p2.read().is_01() || !i105_cast_reg_34870.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_548_fu_20656_p2.read()) + sc_biguint<7>(i105_cast_reg_34870.read()));
}

void ShuffleNetV2::thread_tmp_552_fu_20689_p1() {
    tmp_552_fu_20689_p1 = esl_zext<64,32>(tmp_753_cast_fu_20686_p1.read());
}

void ShuffleNetV2::thread_tmp_553_cast_fu_15531_p1() {
    tmp_553_cast_fu_15531_p1 = esl_sext<10,8>(tmp_406_fu_15525_p2.read());
}

void ShuffleNetV2::thread_tmp_553_fu_20463_p2() {
    tmp_553_fu_20463_p2 = (!p_shl136_cast_fu_20447_p1.read().is_01() || !p_shl137_cast_fu_20459_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl136_cast_fu_20447_p1.read()) - sc_biguint<8>(p_shl137_cast_fu_20459_p1.read()));
}

void ShuffleNetV2::thread_tmp_554_fu_20479_p2() {
    tmp_554_fu_20479_p2 = (!tmp45_fu_20473_p2.read().is_01() || !co128_cast_reg_34805.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp45_fu_20473_p2.read()) + sc_biguint<11>(co128_cast_reg_34805.read()));
}

void ShuffleNetV2::thread_tmp_555_fu_20508_p2() {
    tmp_555_fu_20508_p2 = (!p_shl138_cast_fu_20492_p1.read().is_01() || !p_shl139_cast_fu_20504_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl138_cast_fu_20492_p1.read()) - sc_biguint<7>(p_shl139_cast_fu_20504_p1.read()));
}

void ShuffleNetV2::thread_tmp_556_fu_20514_p2() {
    tmp_556_fu_20514_p2 = (!tmp_555_fu_20508_p2.read().is_01() || !tmp_745_cast_reg_34823.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_555_fu_20508_p2.read()) + sc_biguint<7>(tmp_745_cast_reg_34823.read()));
}

void ShuffleNetV2::thread_tmp_557_cast1_fu_20726_p1() {
    tmp_557_cast1_fu_20726_p1 = esl_zext<36,2>(w95_reg_5654.read());
}

void ShuffleNetV2::thread_tmp_557_cast_fu_20730_p1() {
    tmp_557_cast_fu_20730_p1 = esl_zext<13,2>(w95_reg_5654.read());
}

void ShuffleNetV2::thread_tmp_557_fu_8315_p2() {
    tmp_557_fu_8315_p2 = (!tmp_544_reg_30962.read().is_01() || !tmp_182_cast1_fu_8297_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_544_reg_30962.read()) + sc_biguint<11>(tmp_182_cast1_fu_8297_p1.read()));
}

void ShuffleNetV2::thread_tmp_558_fu_21092_p2() {
    tmp_558_fu_21092_p2 = (!p_shl142_cast_fu_21076_p1.read().is_01() || !p_shl143_cast_fu_21088_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl142_cast_fu_21076_p1.read()) - sc_biguint<7>(p_shl143_cast_fu_21088_p1.read()));
}

void ShuffleNetV2::thread_tmp_559_fu_21010_p2() {
    tmp_559_fu_21010_p2 = (!p_shl140_cast_fu_20994_p1.read().is_01() || !p_shl141_cast_fu_21006_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl140_cast_fu_20994_p1.read()) - sc_biguint<7>(p_shl141_cast_fu_21006_p1.read()));
}

void ShuffleNetV2::thread_tmp_560_fu_21026_p2() {
    tmp_560_fu_21026_p2 = (!i109_cast1_reg_35015.read().is_01() || !tmp48_fu_21020_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(i109_cast1_reg_35015.read()) + sc_biguint<11>(tmp48_fu_21020_p2.read()));
}

void ShuffleNetV2::thread_tmp_561_fu_21036_p1() {
    tmp_561_fu_21036_p1 = esl_zext<64,11>(tmp_560_reg_35036.read());
}

void ShuffleNetV2::thread_tmp_562_fu_21031_p2() {
    tmp_562_fu_21031_p2 = (!tmp_559_fu_21010_p2.read().is_01() || !i109_cast_reg_35010.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_559_fu_21010_p2.read()) + sc_biguint<7>(i109_cast_reg_35010.read()));
}

void ShuffleNetV2::thread_tmp_563_fu_21043_p1() {
    tmp_563_fu_21043_p1 = esl_zext<64,32>(tmp_771_cast_fu_21040_p1.read());
}

void ShuffleNetV2::thread_tmp_564_cast1_fu_20746_p1() {
    tmp_564_cast1_fu_20746_p1 = esl_zext<10,2>(h96_reg_5665.read());
}

void ShuffleNetV2::thread_tmp_564_cast_fu_20750_p1() {
    tmp_564_cast_fu_20750_p1 = esl_zext<15,2>(h96_reg_5665.read());
}

void ShuffleNetV2::thread_tmp_564_fu_8382_p3() {
    tmp_564_fu_8382_p3 = esl_concat<6,2>(tmp_183_fu_8372_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_565_cast1_fu_21128_p1() {
    tmp_565_cast1_fu_21128_p1 = esl_zext<18,5>(ci54_reg_5720.read());
}

void ShuffleNetV2::thread_tmp_565_cast_fu_16150_p1() {
    tmp_565_cast_fu_16150_p1 = esl_zext<7,4>(p_lshr_f7_cast_fu_16140_p4.read());
}

void ShuffleNetV2::thread_tmp_565_fu_8394_p2() {
    tmp_565_fu_8394_p2 = (!p_shl288_cast_fu_8390_p1.read().is_01() || !tmp_184_cast_fu_8378_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(p_shl288_cast_fu_8390_p1.read()) - sc_biguint<9>(tmp_184_cast_fu_8378_p1.read()));
}

void ShuffleNetV2::thread_tmp_566_fu_21132_p2() {
    tmp_566_fu_21132_p2 = (!tmp_558_reg_35064.read().is_01() || !ci54_cast_fu_21112_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_558_reg_35064.read()) + sc_biguint<7>(ci54_cast_fu_21112_p1.read()));
}

void ShuffleNetV2::thread_tmp_567_cast_fu_21137_p1() {
    tmp_567_cast_fu_21137_p1 = esl_sext<13,7>(tmp_566_fu_21132_p2.read());
}

void ShuffleNetV2::thread_tmp_567_fu_8404_p3() {
    tmp_567_fu_8404_p3 = esl_concat<5,2>(co12_reg_3432.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_568_fu_20794_p2() {
    tmp_568_fu_20794_p2 = (!p_shl146_cast_fu_20778_p1.read().is_01() || !p_shl147_cast_fu_20790_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl146_cast_fu_20778_p1.read()) - sc_biguint<7>(p_shl147_cast_fu_20790_p1.read()));
}

void ShuffleNetV2::thread_tmp_569_cast_cast_fu_16430_p1() {
    tmp_569_cast_cast_fu_16430_p1 = esl_sext<9,7>(tmp_419_fu_16424_p2.read());
}

void ShuffleNetV2::thread_tmp_569_fu_20810_p2() {
    tmp_569_fu_20810_p2 = (!co131_cast368_cast_reg_34916.read().is_01() || !tmp47_fu_20804_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(co131_cast368_cast_reg_34916.read()) + sc_biguint<8>(tmp47_fu_20804_p2.read()));
}

void ShuffleNetV2::thread_tmp_570_cast_fu_20823_p1() {
    tmp_570_cast_fu_20823_p1 = esl_zext<12,9>(tmp_788_cast_fu_20820_p1.read());
}

void ShuffleNetV2::thread_tmp_570_fu_8416_p2() {
    tmp_570_fu_8416_p2 = (!p_shl287_cast_fu_8412_p1.read().is_01() || !tmp_185_cast_fu_8400_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl287_cast_fu_8412_p1.read()) - sc_biguint<8>(tmp_185_cast_fu_8400_p1.read()));
}

void ShuffleNetV2::thread_tmp_571_cast_fu_16450_p1() {
    tmp_571_cast_fu_16450_p1 = esl_sext<10,9>(tmp_420_reg_33546.read());
}

void ShuffleNetV2::thread_tmp_571_fu_20815_p2() {
    tmp_571_fu_20815_p2 = (!tmp_568_fu_20794_p2.read().is_01() || !co131_cast_reg_34911.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_568_fu_20794_p2.read()) + sc_biguint<7>(co131_cast_reg_34911.read()));
}

void ShuffleNetV2::thread_tmp_572_cast_fu_20883_p1() {
    tmp_572_cast_fu_20883_p1 = esl_zext<35,32>(tmp_790_cast_fu_20880_p1.read());
}

void ShuffleNetV2::thread_tmp_572_fu_8442_p2() {
    tmp_572_fu_8442_p2 = (!tmp_565_reg_31006.read().is_01() || !tmp_189_cast_fu_8438_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_565_reg_31006.read()) + sc_biguint<9>(tmp_189_cast_fu_8438_p1.read()));
}

void ShuffleNetV2::thread_tmp_573_cast_fu_16458_p1() {
    tmp_573_cast_fu_16458_p1 = esl_sext<32,7>(tmp_422_reg_33551.read());
}

void ShuffleNetV2::thread_tmp_573_fu_21374_p2() {
    tmp_573_fu_21374_p2 = (!p_shl144_cast_fu_21358_p1.read().is_01() || !p_shl145_cast_fu_21370_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl144_cast_fu_21358_p1.read()) - sc_biguint<7>(p_shl145_cast_fu_21370_p1.read()));
}

void ShuffleNetV2::thread_tmp_574_fu_21390_p2() {
    tmp_574_fu_21390_p2 = (!i111_cast1_reg_35121.read().is_01() || !tmp50_fu_21384_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(i111_cast1_reg_35121.read()) + sc_biguint<11>(tmp50_fu_21384_p2.read()));
}

void ShuffleNetV2::thread_tmp_575_fu_21400_p1() {
    tmp_575_fu_21400_p1 = esl_zext<64,11>(tmp_574_reg_35142.read());
}

void ShuffleNetV2::thread_tmp_576_fu_21395_p2() {
    tmp_576_fu_21395_p2 = (!tmp_573_fu_21374_p2.read().is_01() || !i111_cast_reg_35116.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_573_fu_21374_p2.read()) + sc_biguint<7>(i111_cast_reg_35116.read()));
}

void ShuffleNetV2::thread_tmp_577_fu_21407_p1() {
    tmp_577_fu_21407_p1 = esl_zext<64,32>(tmp_781_cast_fu_21404_p1.read());
}

void ShuffleNetV2::thread_tmp_578_fu_21181_p2() {
    tmp_578_fu_21181_p2 = (!p_shl148_cast_fu_21165_p1.read().is_01() || !p_shl149_cast_fu_21177_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl148_cast_fu_21165_p1.read()) - sc_biguint<8>(p_shl149_cast_fu_21177_p1.read()));
}

void ShuffleNetV2::thread_tmp_579_fu_21197_p2() {
    tmp_579_fu_21197_p2 = (!tmp49_fu_21191_p2.read().is_01() || !co133_cast_reg_35051.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp49_fu_21191_p2.read()) + sc_biguint<11>(co133_cast_reg_35051.read()));
}

void ShuffleNetV2::thread_tmp_580_cast_cast_fu_16229_p1() {
    tmp_580_cast_cast_fu_16229_p1 = esl_sext<9,8>(tmp_424_fu_16223_p2.read());
}

void ShuffleNetV2::thread_tmp_580_fu_21226_p2() {
    tmp_580_fu_21226_p2 = (!p_shl150_cast_fu_21210_p1.read().is_01() || !p_shl151_cast_fu_21222_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl150_cast_fu_21210_p1.read()) - sc_biguint<7>(p_shl151_cast_fu_21222_p1.read()));
}

void ShuffleNetV2::thread_tmp_581_fu_21232_p2() {
    tmp_581_fu_21232_p2 = (!tmp_580_fu_21226_p2.read().is_01() || !tmp_775_cast_reg_35069.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_580_fu_21226_p2.read()) + sc_biguint<7>(tmp_775_cast_reg_35069.read()));
}

void ShuffleNetV2::thread_tmp_582_fu_21547_p2() {
    tmp_582_fu_21547_p2 = (!co136_cast_fu_21531_p1.read().is_01() || !ap_const_lv7_30.is_01())? sc_lv<7>(): (sc_biguint<7>(co136_cast_fu_21531_p1.read()) + sc_biguint<7>(ap_const_lv7_30));
}

void ShuffleNetV2::thread_tmp_583_cast_fu_21466_p1() {
    tmp_583_cast_fu_21466_p1 = esl_zext<10,4>(h_99_fu_21460_p2.read());
}

void ShuffleNetV2::thread_tmp_583_fu_8463_p2() {
    tmp_583_fu_8463_p2 = (!p_shl290_cast_fu_8459_p1.read().is_01() || !tmp_910_cast1_fu_8447_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_shl290_cast_fu_8459_p1.read()) - sc_bigint<15>(tmp_910_cast1_fu_8447_p1.read()));
}

void ShuffleNetV2::thread_tmp_584_fu_21786_p2() {
    tmp_584_fu_21786_p2 = (!p_shl152_cast_fu_21770_p1.read().is_01() || !p_shl153_cast_fu_21782_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl152_cast_fu_21770_p1.read()) - sc_biguint<7>(p_shl153_cast_fu_21782_p1.read()));
}

void ShuffleNetV2::thread_tmp_585_cast1_fu_21625_p1() {
    tmp_585_cast1_fu_21625_p1 = esl_zext<10,4>(h_101_fu_21619_p2.read());
}

void ShuffleNetV2::thread_tmp_585_cast_fu_21629_p1() {
    tmp_585_cast_fu_21629_p1 = esl_zext<11,4>(h_101_fu_21619_p2.read());
}

void ShuffleNetV2::thread_tmp_585_fu_8469_p2() {
    tmp_585_fu_8469_p2 = (!tmp_907_cast_reg_31011.read().is_01() || !tmp_189_cast_fu_8438_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_907_cast_reg_31011.read()) + sc_biguint<9>(tmp_189_cast_fu_8438_p1.read()));
}

void ShuffleNetV2::thread_tmp_586_cast_fu_21517_p1() {
    tmp_586_cast_fu_21517_p1 = esl_zext<15,4>(w_98_fu_21511_p2.read());
}

void ShuffleNetV2::thread_tmp_586_fu_8480_p2() {
    tmp_586_fu_8480_p2 = (!tmp_372_fu_8474_p2.read().is_01() || !tmp_585_fu_8469_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_372_fu_8474_p2.read()) - sc_biguint<9>(tmp_585_fu_8469_p2.read()));
}

void ShuffleNetV2::thread_tmp_587_cast_cast_fu_16780_p1() {
    tmp_587_cast_cast_fu_16780_p1 = esl_sext<8,7>(tmp_430_fu_16774_p2.read());
}

void ShuffleNetV2::thread_tmp_587_cast_fu_21822_p1() {
    tmp_587_cast_fu_21822_p1 = esl_zext<18,5>(ci56_reg_5841.read());
}

void ShuffleNetV2::thread_tmp_587_fu_8581_p3() {
    tmp_587_fu_8581_p3 = esl_concat<7,5>(tmp_190_fu_8575_p2.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_588_fu_21826_p2() {
    tmp_588_fu_21826_p2 = (!tmp_584_reg_35268.read().is_01() || !ci56_cast_fu_21806_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_584_reg_35268.read()) + sc_biguint<7>(ci56_cast_fu_21806_p1.read()));
}

void ShuffleNetV2::thread_tmp_589_cast1_fu_21831_p1() {
    tmp_589_cast1_fu_21831_p1 = esl_sext<13,7>(tmp_588_fu_21826_p2.read());
}

void ShuffleNetV2::thread_tmp_589_cast_fu_16800_p1() {
    tmp_589_cast_fu_16800_p1 = esl_sext<10,8>(tmp_431_reg_33686.read());
}

void ShuffleNetV2::thread_tmp_589_fu_8593_p3() {
    tmp_589_fu_8593_p3 = esl_concat<7,3>(tmp_190_fu_8575_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_590_cast1_fu_21715_p1() {
    tmp_590_cast1_fu_21715_p1 = esl_zext<14,4>(w_100_fu_21709_p2.read());
}

void ShuffleNetV2::thread_tmp_590_cast_fu_21719_p1() {
    tmp_590_cast_fu_21719_p1 = esl_zext<15,4>(w_100_fu_21709_p2.read());
}

void ShuffleNetV2::thread_tmp_590_fu_8605_p2() {
    tmp_590_fu_8605_p2 = (!p_shl293_cast_fu_8589_p1.read().is_01() || !p_shl294_cast_fu_8601_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl293_cast_fu_8589_p1.read()) - sc_biguint<13>(p_shl294_cast_fu_8601_p1.read()));
}

void ShuffleNetV2::thread_tmp_591_cast_fu_16808_p1() {
    tmp_591_cast_fu_16808_p1 = esl_sext<32,7>(tmp_433_reg_33691.read());
}

void ShuffleNetV2::thread_tmp_591_fu_22076_p2() {
    tmp_591_fu_22076_p2 = (!p_shl154_cast_fu_22060_p1.read().is_01() || !p_shl155_cast_fu_22072_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl154_cast_fu_22060_p1.read()) - sc_biguint<7>(p_shl155_cast_fu_22072_p1.read()));
}

void ShuffleNetV2::thread_tmp_592_fu_22092_p2() {
    tmp_592_fu_22092_p2 = (!i117_cast1_reg_35325.read().is_01() || !tmp52_fu_22086_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(i117_cast1_reg_35325.read()) + sc_biguint<11>(tmp52_fu_22086_p2.read()));
}

void ShuffleNetV2::thread_tmp_593_fu_22102_p1() {
    tmp_593_fu_22102_p1 = esl_zext<64,11>(tmp_592_reg_35346.read());
}

void ShuffleNetV2::thread_tmp_594_fu_22097_p2() {
    tmp_594_fu_22097_p2 = (!tmp_591_fu_22076_p2.read().is_01() || !i117_cast_reg_35320.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_591_fu_22076_p2.read()) + sc_biguint<7>(i117_cast_reg_35320.read()));
}

void ShuffleNetV2::thread_tmp_595_cast_fu_16876_p1() {
    tmp_595_cast_fu_16876_p1 = esl_zext<7,4>(p_lshr_f8_cast_fu_16866_p4.read());
}

void ShuffleNetV2::thread_tmp_595_fu_22109_p1() {
    tmp_595_fu_22109_p1 = esl_zext<64,32>(tmp_813_cast_fu_22106_p1.read());
}

void ShuffleNetV2::thread_tmp_596_fu_21875_p2() {
    tmp_596_fu_21875_p2 = (!p_shl156_cast_fu_21859_p1.read().is_01() || !p_shl157_cast_fu_21871_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl156_cast_fu_21859_p1.read()) - sc_biguint<8>(p_shl157_cast_fu_21871_p1.read()));
}

void ShuffleNetV2::thread_tmp_597_fu_21891_p2() {
    tmp_597_fu_21891_p2 = (!tmp51_fu_21885_p2.read().is_01() || !co138_cast344_cast_reg_35255.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp51_fu_21885_p2.read()) + sc_biguint<10>(co138_cast344_cast_reg_35255.read()));
}

void ShuffleNetV2::thread_tmp_598_fu_21920_p2() {
    tmp_598_fu_21920_p2 = (!p_shl158_cast_fu_21904_p1.read().is_01() || !p_shl159_cast_fu_21916_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl158_cast_fu_21904_p1.read()) - sc_biguint<7>(p_shl159_cast_fu_21916_p1.read()));
}

void ShuffleNetV2::thread_tmp_599_fu_21926_p2() {
    tmp_599_fu_21926_p2 = (!tmp_598_fu_21920_p2.read().is_01() || !tmp_805_cast_reg_35273.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_598_fu_21920_p2.read()) + sc_biguint<7>(tmp_805_cast_reg_35273.read()));
}

void ShuffleNetV2::thread_tmp_600_cast1_fu_22146_p1() {
    tmp_600_cast1_fu_22146_p1 = esl_zext<36,2>(w101_reg_5896.read());
}

void ShuffleNetV2::thread_tmp_600_cast_fu_22150_p1() {
    tmp_600_cast_fu_22150_p1 = esl_zext<14,2>(w101_reg_5896.read());
}

void ShuffleNetV2::thread_tmp_600_fu_8615_p3() {
    tmp_600_fu_8615_p3 = esl_concat<5,5>(co16_reg_3477.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_601_cast_fu_17176_p1() {
    tmp_601_cast_fu_17176_p1 = esl_sext<32,7>(tmp_447_reg_33797.read());
}

void ShuffleNetV2::thread_tmp_601_fu_22508_p2() {
    tmp_601_fu_22508_p2 = (!p_shl162_cast_fu_22492_p1.read().is_01() || !p_shl163_cast_fu_22504_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl162_cast_fu_22492_p1.read()) - sc_biguint<7>(p_shl163_cast_fu_22504_p1.read()));
}

void ShuffleNetV2::thread_tmp_602_fu_22426_p2() {
    tmp_602_fu_22426_p2 = (!p_shl160_cast_fu_22410_p1.read().is_01() || !p_shl161_cast_fu_22422_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl160_cast_fu_22410_p1.read()) - sc_biguint<7>(p_shl161_cast_fu_22422_p1.read()));
}

void ShuffleNetV2::thread_tmp_603_fu_22442_p2() {
    tmp_603_fu_22442_p2 = (!i121_cast1_reg_35465.read().is_01() || !tmp54_fu_22436_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(i121_cast1_reg_35465.read()) + sc_biguint<11>(tmp54_fu_22436_p2.read()));
}

void ShuffleNetV2::thread_tmp_604_fu_22452_p1() {
    tmp_604_fu_22452_p1 = esl_zext<64,11>(tmp_603_reg_35486.read());
}

void ShuffleNetV2::thread_tmp_605_fu_22447_p2() {
    tmp_605_fu_22447_p2 = (!tmp_602_fu_22426_p2.read().is_01() || !i121_cast_reg_35460.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_602_fu_22426_p2.read()) + sc_biguint<7>(i121_cast_reg_35460.read()));
}

void ShuffleNetV2::thread_tmp_606_cast_fu_16572_p1() {
    tmp_606_cast_fu_16572_p1 = esl_sext<9,7>(tmp_439_fu_16566_p2.read());
}

void ShuffleNetV2::thread_tmp_606_fu_22459_p1() {
    tmp_606_fu_22459_p1 = esl_zext<64,32>(tmp_831_cast_fu_22456_p1.read());
}

void ShuffleNetV2::thread_tmp_607_cast1_fu_22166_p1() {
    tmp_607_cast1_fu_22166_p1 = esl_zext<10,2>(h102_reg_5907.read());
}

void ShuffleNetV2::thread_tmp_607_cast_fu_22170_p1() {
    tmp_607_cast_fu_22170_p1 = esl_zext<15,2>(h102_reg_5907.read());
}

void ShuffleNetV2::thread_tmp_607_fu_8627_p3() {
    tmp_607_fu_8627_p3 = esl_concat<5,3>(co16_reg_3477.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_608_cast_fu_22544_p1() {
    tmp_608_cast_fu_22544_p1 = esl_zext<18,5>(ci58_reg_5962.read());
}

void ShuffleNetV2::thread_tmp_608_fu_8639_p2() {
    tmp_608_fu_8639_p2 = (!p_shl291_cast_fu_8623_p1.read().is_01() || !p_shl292_cast_fu_8635_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl291_cast_fu_8623_p1.read()) - sc_biguint<11>(p_shl292_cast_fu_8635_p1.read()));
}

void ShuffleNetV2::thread_tmp_609_fu_22548_p2() {
    tmp_609_fu_22548_p2 = (!tmp_601_reg_35514.read().is_01() || !ci58_cast_fu_22528_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_601_reg_35514.read()) + sc_biguint<7>(ci58_cast_fu_22528_p1.read()));
}

void ShuffleNetV2::thread_tmp_610_cast1_fu_22553_p1() {
    tmp_610_cast1_fu_22553_p1 = esl_sext<13,7>(tmp_609_fu_22548_p2.read());
}

void ShuffleNetV2::thread_tmp_610_cast_fu_16644_p1() {
    tmp_610_cast_fu_16644_p1 = esl_sext<32,7>(tmp_442_reg_33629.read());
}

void ShuffleNetV2::thread_tmp_610_fu_8506_p2() {
    tmp_610_fu_8506_p2 = (!tmp_583_reg_31024.read().is_01() || !tmp_191_cast_fu_8502_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_583_reg_31024.read()) + sc_biguint<15>(tmp_191_cast_fu_8502_p1.read()));
}

void ShuffleNetV2::thread_tmp_611_fu_22214_p2() {
    tmp_611_fu_22214_p2 = (!p_shl166_cast_fu_22198_p1.read().is_01() || !p_shl167_cast_fu_22210_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl166_cast_fu_22198_p1.read()) - sc_biguint<7>(p_shl167_cast_fu_22210_p1.read()));
}

void ShuffleNetV2::thread_tmp_612_fu_22230_p2() {
    tmp_612_fu_22230_p2 = (!co141_cast1_reg_35366.read().is_01() || !tmp53_fu_22224_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(co141_cast1_reg_35366.read()) + sc_biguint<10>(tmp53_fu_22224_p2.read()));
}

void ShuffleNetV2::thread_tmp_613_cast1_fu_22240_p1() {
    tmp_613_cast1_fu_22240_p1 = esl_zext<13,10>(tmp_612_reg_35423.read());
}

void ShuffleNetV2::thread_tmp_613_cast_fu_16955_p1() {
    tmp_613_cast_fu_16955_p1 = esl_sext<11,8>(tmp_449_fu_16949_p2.read());
}

void ShuffleNetV2::thread_tmp_613_fu_8516_p2() {
    tmp_613_fu_8516_p2 = (!tmp_586_reg_31029.read().is_01() || !tmp_191_cast1_fu_8498_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_586_reg_31029.read()) + sc_biguint<9>(tmp_191_cast1_fu_8498_p1.read()));
}

void ShuffleNetV2::thread_tmp_614_fu_22235_p2() {
    tmp_614_fu_22235_p2 = (!tmp_611_fu_22214_p2.read().is_01() || !co141_cast_reg_35361.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_611_fu_22214_p2.read()) + sc_biguint<7>(co141_cast_reg_35361.read()));
}

void ShuffleNetV2::thread_tmp_615_cast_fu_22299_p1() {
    tmp_615_cast_fu_22299_p1 = esl_zext<35,32>(tmp_850_cast_fu_22296_p1.read());
}

void ShuffleNetV2::thread_tmp_615_fu_8665_p2() {
    tmp_615_fu_8665_p2 = (!tmp_962_cast_reg_31073.read().is_01() || !tmp_195_cast_fu_8661_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(tmp_962_cast_reg_31073.read()) + sc_biguint<14>(tmp_195_cast_fu_8661_p1.read()));
}

void ShuffleNetV2::thread_tmp_616_fu_22798_p2() {
    tmp_616_fu_22798_p2 = (!p_shl164_cast_fu_22782_p1.read().is_01() || !p_shl165_cast_fu_22794_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl164_cast_fu_22782_p1.read()) - sc_biguint<7>(p_shl165_cast_fu_22794_p1.read()));
}

void ShuffleNetV2::thread_tmp_617_fu_22814_p2() {
    tmp_617_fu_22814_p2 = (!i123_cast311_cast_reg_35571.read().is_01() || !tmp56_fu_22808_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(i123_cast311_cast_reg_35571.read()) + sc_biguint<10>(tmp56_fu_22808_p2.read()));
}

void ShuffleNetV2::thread_tmp_618_fu_22827_p1() {
    tmp_618_fu_22827_p1 = esl_zext<64,11>(tmp_839_cast_fu_22824_p1.read());
}

void ShuffleNetV2::thread_tmp_619_fu_22819_p2() {
    tmp_619_fu_22819_p2 = (!tmp_616_fu_22798_p2.read().is_01() || !i123_cast_reg_35566.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_616_fu_22798_p2.read()) + sc_biguint<7>(i123_cast_reg_35566.read()));
}

void ShuffleNetV2::thread_tmp_620_fu_22835_p1() {
    tmp_620_fu_22835_p1 = esl_zext<64,32>(tmp_841_cast_fu_22832_p1.read());
}

void ShuffleNetV2::thread_tmp_621_fu_22597_p2() {
    tmp_621_fu_22597_p2 = (!p_shl168_cast_fu_22581_p1.read().is_01() || !p_shl169_cast_fu_22593_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl168_cast_fu_22581_p1.read()) - sc_biguint<8>(p_shl169_cast_fu_22593_p1.read()));
}

void ShuffleNetV2::thread_tmp_622_fu_22613_p2() {
    tmp_622_fu_22613_p2 = (!tmp55_fu_22607_p2.read().is_01() || !co143_cast321_cast_reg_35501.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp55_fu_22607_p2.read()) + sc_biguint<10>(co143_cast321_cast_reg_35501.read()));
}

void ShuffleNetV2::thread_tmp_623_fu_22642_p2() {
    tmp_623_fu_22642_p2 = (!p_shl170_cast_fu_22626_p1.read().is_01() || !p_shl171_cast_fu_22638_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl170_cast_fu_22626_p1.read()) - sc_biguint<7>(p_shl171_cast_fu_22638_p1.read()));
}

void ShuffleNetV2::thread_tmp_624_fu_22648_p2() {
    tmp_624_fu_22648_p2 = (!tmp_623_fu_22642_p2.read().is_01() || !tmp_835_cast_reg_35519.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_623_fu_22642_p2.read()) + sc_biguint<7>(tmp_835_cast_reg_35519.read()));
}

void ShuffleNetV2::thread_tmp_625_cast_fu_17574_p1() {
    tmp_625_cast_fu_17574_p1 = esl_zext<7,4>(p_lshr_f9_cast_fu_17564_p4.read());
}

void ShuffleNetV2::thread_tmp_625_fu_22975_p2() {
    tmp_625_fu_22975_p2 = (!co146_cast_fu_22959_p1.read().is_01() || !ap_const_lv7_30.is_01())? sc_lv<7>(): (sc_biguint<7>(co146_cast_fu_22959_p1.read()) + sc_biguint<7>(ap_const_lv7_30));
}

void ShuffleNetV2::thread_tmp_626_cast_fu_22894_p1() {
    tmp_626_cast_fu_22894_p1 = esl_zext<10,4>(h_105_fu_22888_p2.read());
}

void ShuffleNetV2::thread_tmp_626_fu_8675_p2() {
    tmp_626_fu_8675_p2 = (!tmp_608_reg_31078.read().is_01() || !tmp_195_cast1_fu_8657_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_608_reg_31078.read()) + sc_biguint<11>(tmp_195_cast1_fu_8657_p1.read()));
}

void ShuffleNetV2::thread_tmp_627_fu_23214_p2() {
    tmp_627_fu_23214_p2 = (!p_shl172_cast_fu_23198_p1.read().is_01() || !p_shl173_cast_fu_23210_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl172_cast_fu_23198_p1.read()) - sc_biguint<7>(p_shl173_cast_fu_23210_p1.read()));
}

void ShuffleNetV2::thread_tmp_628_cast1_fu_23053_p1() {
    tmp_628_cast1_fu_23053_p1 = esl_zext<11,4>(h_107_fu_23047_p2.read());
}

void ShuffleNetV2::thread_tmp_628_cast_fu_23057_p1() {
    tmp_628_cast_fu_23057_p1 = esl_zext<10,4>(h_107_fu_23047_p2.read());
}

void ShuffleNetV2::thread_tmp_628_fu_8738_p3() {
    tmp_628_fu_8738_p3 = esl_concat<6,4>(tmp_196_fu_8732_p2.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_629_cast1_fu_22945_p1() {
    tmp_629_cast1_fu_22945_p1 = esl_zext<15,4>(w_104_fu_22939_p2.read());
}

void ShuffleNetV2::thread_tmp_629_cast_fu_17846_p1() {
    tmp_629_cast_fu_17846_p1 = esl_sext<11,7>(tmp_462_fu_17840_p2.read());
}

void ShuffleNetV2::thread_tmp_629_fu_8750_p3() {
    tmp_629_fu_8750_p3 = esl_concat<6,1>(tmp_196_fu_8732_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_630_fu_8762_p2() {
    tmp_630_fu_8762_p2 = (!p_shl298_cast_fu_8758_p1.read().is_01() || !p_shl297_cast_fu_8746_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl298_cast_fu_8758_p1.read()) + sc_biguint<11>(p_shl297_cast_fu_8746_p1.read()));
}

void ShuffleNetV2::thread_tmp_631_cast_fu_23250_p1() {
    tmp_631_cast_fu_23250_p1 = esl_zext<18,5>(ci60_reg_6083.read());
}

void ShuffleNetV2::thread_tmp_631_fu_8768_p3() {
    tmp_631_fu_8768_p3 = esl_concat<5,4>(co19_reg_3511.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_632_fu_23254_p2() {
    tmp_632_fu_23254_p2 = (!tmp_627_reg_35718.read().is_01() || !ci60_cast_fu_23234_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_627_reg_35718.read()) + sc_biguint<7>(ci60_cast_fu_23234_p1.read()));
}

void ShuffleNetV2::thread_tmp_633_cast1_fu_23259_p1() {
    tmp_633_cast1_fu_23259_p1 = esl_sext<13,7>(tmp_632_fu_23254_p2.read());
}

void ShuffleNetV2::thread_tmp_633_cast_fu_17870_p1() {
    tmp_633_cast_fu_17870_p1 = esl_sext<32,7>(tmp_465_reg_34001.read());
}

void ShuffleNetV2::thread_tmp_633_fu_8780_p3() {
    tmp_633_fu_8780_p3 = esl_concat<5,1>(co19_reg_3511.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_634_cast1_fu_23143_p1() {
    tmp_634_cast1_fu_23143_p1 = esl_zext<15,4>(w_106_fu_23137_p2.read());
}

void ShuffleNetV2::thread_tmp_634_cast_fu_23147_p1() {
    tmp_634_cast_fu_23147_p1 = esl_zext<14,4>(w_106_fu_23137_p2.read());
}

void ShuffleNetV2::thread_tmp_634_fu_8792_p2() {
    tmp_634_fu_8792_p2 = (!p_shl296_cast_fu_8788_p1.read().is_01() || !p_shl295_cast_fu_8776_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl296_cast_fu_8788_p1.read()) + sc_biguint<10>(p_shl295_cast_fu_8776_p1.read()));
}

void ShuffleNetV2::thread_tmp_635_fu_23504_p2() {
    tmp_635_fu_23504_p2 = (!p_shl174_cast_fu_23488_p1.read().is_01() || !p_shl175_cast_fu_23500_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl174_cast_fu_23488_p1.read()) - sc_biguint<7>(p_shl175_cast_fu_23500_p1.read()));
}

void ShuffleNetV2::thread_tmp_636_fu_23520_p2() {
    tmp_636_fu_23520_p2 = (!i129_cast296_cast_reg_35775.read().is_01() || !tmp58_fu_23514_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(i129_cast296_cast_reg_35775.read()) + sc_biguint<10>(tmp58_fu_23514_p2.read()));
}

void ShuffleNetV2::thread_tmp_637_fu_23533_p1() {
    tmp_637_fu_23533_p1 = esl_zext<64,11>(tmp_871_cast_fu_23530_p1.read());
}

void ShuffleNetV2::thread_tmp_638_cast_fu_7831_p1() {
    tmp_638_cast_fu_7831_p1 = esl_zext<8,7>(tmp_471_fu_7823_p3.read());
}

void ShuffleNetV2::thread_tmp_638_fu_8941_p3() {
    tmp_638_fu_8941_p3 = esl_concat<7,5>(tmp_197_fu_8935_p2.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_639_fu_23525_p2() {
    tmp_639_fu_23525_p2 = (!tmp_635_fu_23504_p2.read().is_01() || !i129_cast_reg_35770.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_635_fu_23504_p2.read()) + sc_biguint<7>(i129_cast_reg_35770.read()));
}

void ShuffleNetV2::thread_tmp_640_cast_fu_17653_p1() {
    tmp_640_cast_fu_17653_p1 = esl_sext<11,8>(tmp_467_fu_17647_p2.read());
}

void ShuffleNetV2::thread_tmp_640_fu_23541_p1() {
    tmp_640_fu_23541_p1 = esl_zext<64,32>(tmp_873_cast_fu_23538_p1.read());
}

void ShuffleNetV2::thread_tmp_641_fu_8953_p3() {
    tmp_641_fu_8953_p3 = esl_concat<7,3>(tmp_197_fu_8935_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_642_fu_23303_p2() {
    tmp_642_fu_23303_p2 = (!p_shl176_cast_fu_23287_p1.read().is_01() || !p_shl177_cast_fu_23299_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl176_cast_fu_23287_p1.read()) - sc_biguint<8>(p_shl177_cast_fu_23299_p1.read()));
}

void ShuffleNetV2::thread_tmp_643_fu_8965_p2() {
    tmp_643_fu_8965_p2 = (!p_shl305_cast_fu_8949_p1.read().is_01() || !p_shl306_cast_fu_8961_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl305_cast_fu_8949_p1.read()) - sc_biguint<13>(p_shl306_cast_fu_8961_p1.read()));
}

void ShuffleNetV2::thread_tmp_644_fu_8975_p3() {
    tmp_644_fu_8975_p3 = esl_concat<5,5>(co22_reg_3544.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_645_fu_23319_p2() {
    tmp_645_fu_23319_p2 = (!tmp57_fu_23313_p2.read().is_01() || !co148_cast306_cast_reg_35705.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp57_fu_23313_p2.read()) + sc_biguint<9>(co148_cast306_cast_reg_35705.read()));
}

void ShuffleNetV2::thread_tmp_646_fu_23348_p2() {
    tmp_646_fu_23348_p2 = (!p_shl178_cast_fu_23332_p1.read().is_01() || !p_shl179_cast_fu_23344_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl178_cast_fu_23332_p1.read()) - sc_biguint<7>(p_shl179_cast_fu_23344_p1.read()));
}

void ShuffleNetV2::thread_tmp_647_cast_fu_18192_p1() {
    tmp_647_cast_fu_18192_p1 = esl_sext<11,7>(tmp_473_fu_18186_p2.read());
}

void ShuffleNetV2::thread_tmp_647_fu_23354_p2() {
    tmp_647_fu_23354_p2 = (!tmp_646_fu_23348_p2.read().is_01() || !tmp_865_cast_reg_35723.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_646_fu_23348_p2.read()) + sc_biguint<7>(tmp_865_cast_reg_35723.read()));
}

void ShuffleNetV2::thread_tmp_648_cast1_fu_23578_p1() {
    tmp_648_cast1_fu_23578_p1 = esl_zext<36,2>(w107_reg_6138.read());
}

void ShuffleNetV2::thread_tmp_648_cast_fu_23582_p1() {
    tmp_648_cast_fu_23582_p1 = esl_zext<13,2>(w107_reg_6138.read());
}

void ShuffleNetV2::thread_tmp_648_fu_8987_p3() {
    tmp_648_fu_8987_p3 = esl_concat<5,3>(co22_reg_3544.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_649_fu_23936_p2() {
    tmp_649_fu_23936_p2 = (!p_shl182_cast_fu_23920_p1.read().is_01() || !p_shl183_cast_fu_23932_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl182_cast_fu_23920_p1.read()) - sc_biguint<7>(p_shl183_cast_fu_23932_p1.read()));
}

void ShuffleNetV2::thread_tmp_650_fu_23850_p2() {
    tmp_650_fu_23850_p2 = (!p_shl180_cast_fu_23834_p1.read().is_01() || !p_shl181_cast_fu_23846_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl180_cast_fu_23834_p1.read()) - sc_biguint<7>(p_shl181_cast_fu_23846_p1.read()));
}

void ShuffleNetV2::thread_tmp_651_cast_fu_18216_p1() {
    tmp_651_cast_fu_18216_p1 = esl_sext<32,7>(tmp_476_reg_34141.read());
}

void ShuffleNetV2::thread_tmp_651_fu_23866_p2() {
    tmp_651_fu_23866_p2 = (!i133_cast286_cast_reg_35915.read().is_01() || !tmp60_fu_23860_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(i133_cast286_cast_reg_35915.read()) + sc_biguint<10>(tmp60_fu_23860_p2.read()));
}

void ShuffleNetV2::thread_tmp_652_fu_23879_p1() {
    tmp_652_fu_23879_p1 = esl_zext<64,11>(tmp_889_cast_fu_23876_p1.read());
}

void ShuffleNetV2::thread_tmp_653_fu_23871_p2() {
    tmp_653_fu_23871_p2 = (!tmp_650_fu_23850_p2.read().is_01() || !i133_cast_reg_35910.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_650_fu_23850_p2.read()) + sc_biguint<7>(i133_cast_reg_35910.read()));
}

void ShuffleNetV2::thread_tmp_654_fu_23887_p1() {
    tmp_654_fu_23887_p1 = esl_zext<64,32>(tmp_891_cast_fu_23884_p1.read());
}

void ShuffleNetV2::thread_tmp_655_cast1_fu_23598_p1() {
    tmp_655_cast1_fu_23598_p1 = esl_zext<10,2>(h108_reg_6149.read());
}

void ShuffleNetV2::thread_tmp_655_cast2_fu_23602_p1() {
    tmp_655_cast2_fu_23602_p1 = esl_zext<15,2>(h108_reg_6149.read());
}

void ShuffleNetV2::thread_tmp_655_cast_fu_18284_p1() {
    tmp_655_cast_fu_18284_p1 = esl_zext<7,4>(p_lshr_f10_cast_fu_18274_p4.read());
}

void ShuffleNetV2::thread_tmp_655_fu_8999_p2() {
    tmp_655_fu_8999_p2 = (!p_shl303_cast_fu_8983_p1.read().is_01() || !p_shl304_cast_fu_8995_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl303_cast_fu_8983_p1.read()) - sc_biguint<11>(p_shl304_cast_fu_8995_p1.read()));
}

void ShuffleNetV2::thread_tmp_656_cast_fu_23972_p1() {
    tmp_656_cast_fu_23972_p1 = esl_zext<19,5>(ci62_reg_6204.read());
}

void ShuffleNetV2::thread_tmp_656_fu_8818_p2() {
    tmp_656_fu_8818_p2 = (!tmp_198_cast_fu_8814_p1.read().is_01() || !tmp_630_reg_31122.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_198_cast_fu_8814_p1.read()) + sc_biguint<11>(tmp_630_reg_31122.read()));
}

void ShuffleNetV2::thread_tmp_657_cast_fu_18556_p1() {
    tmp_657_cast_fu_18556_p1 = esl_sext<11,7>(tmp_487_fu_18550_p2.read());
}

void ShuffleNetV2::thread_tmp_657_fu_23976_p2() {
    tmp_657_fu_23976_p2 = (!tmp_649_reg_35964.read().is_01() || !ci62_cast_fu_23956_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_649_reg_35964.read()) + sc_biguint<7>(ci62_cast_fu_23956_p1.read()));
}

void ShuffleNetV2::thread_tmp_658_cast_fu_23981_p1() {
    tmp_658_cast_fu_23981_p1 = esl_sext<13,7>(tmp_657_fu_23976_p2.read());
}

void ShuffleNetV2::thread_tmp_658_fu_8843_p2() {
    tmp_658_fu_8843_p2 = (!p_shl301_cast_fu_8823_p3.read().is_01() || !p_shl302_cast_fu_8839_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl301_cast_fu_8823_p3.read()) + sc_biguint<15>(p_shl302_cast_fu_8839_p1.read()));
}

void ShuffleNetV2::thread_tmp_659_fu_23646_p2() {
    tmp_659_fu_23646_p2 = (!p_shl186_cast_fu_23630_p1.read().is_01() || !p_shl187_cast_fu_23642_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl186_cast_fu_23630_p1.read()) - sc_biguint<7>(p_shl187_cast_fu_23642_p1.read()));
}

void ShuffleNetV2::thread_tmp_660_fu_8849_p2() {
    tmp_660_fu_8849_p2 = (!tmp_198_cast1_fu_8810_p1.read().is_01() || !tmp_634_reg_31127.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_198_cast1_fu_8810_p1.read()) + sc_biguint<10>(tmp_634_reg_31127.read()));
}

void ShuffleNetV2::thread_tmp_661_cast_fu_18580_p1() {
    tmp_661_cast_fu_18580_p1 = esl_sext<32,7>(tmp_490_reg_34247.read());
}

void ShuffleNetV2::thread_tmp_661_fu_23662_p2() {
    tmp_661_fu_23662_p2 = (!co151_cast1_reg_35816.read().is_01() || !tmp59_fu_23656_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(co151_cast1_reg_35816.read()) + sc_biguint<10>(tmp59_fu_23656_p2.read()));
}

void ShuffleNetV2::thread_tmp_662_cast_fu_23672_p1() {
    tmp_662_cast_fu_23672_p1 = esl_zext<13,10>(tmp_661_reg_35873.read());
}

void ShuffleNetV2::thread_tmp_662_fu_8874_p2() {
    tmp_662_fu_8874_p2 = (!p_shl299_cast_fu_8854_p3.read().is_01() || !p_shl300_cast_fu_8870_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl299_cast_fu_8854_p3.read()) + sc_biguint<14>(p_shl300_cast_fu_8870_p1.read()));
}

void ShuffleNetV2::thread_tmp_663_fu_9025_p2() {
    tmp_663_fu_9025_p2 = (!tmp_1026_cast_reg_31176.read().is_01() || !tmp_202_cast_fu_9021_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(tmp_1026_cast_reg_31176.read()) + sc_biguint<14>(tmp_202_cast_fu_9021_p1.read()));
}

void ShuffleNetV2::thread_tmp_664_fu_23667_p2() {
    tmp_664_fu_23667_p2 = (!tmp_659_fu_23646_p2.read().is_01() || !co151_cast_reg_35811.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_659_fu_23646_p2.read()) + sc_biguint<7>(co151_cast_reg_35811.read()));
}

void ShuffleNetV2::thread_tmp_665_cast_fu_23723_p1() {
    tmp_665_cast_fu_23723_p1 = esl_zext<35,32>(tmp_910_cast_fu_23720_p1.read());
}

void ShuffleNetV2::thread_tmp_665_fu_9035_p2() {
    tmp_665_fu_9035_p2 = (!tmp_655_reg_31181.read().is_01() || !tmp_202_cast1_fu_9017_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_655_reg_31181.read()) + sc_biguint<11>(tmp_202_cast1_fu_9017_p1.read()));
}

void ShuffleNetV2::thread_tmp_666_cast_fu_17984_p1() {
    tmp_666_cast_fu_17984_p1 = esl_sext<9,7>(tmp_482_fu_17978_p2.read());
}

void ShuffleNetV2::thread_tmp_666_fu_24226_p2() {
    tmp_666_fu_24226_p2 = (!p_shl184_cast_fu_24210_p1.read().is_01() || !p_shl185_cast_fu_24222_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl184_cast_fu_24210_p1.read()) - sc_biguint<7>(p_shl185_cast_fu_24222_p1.read()));
}

void ShuffleNetV2::thread_tmp_667_fu_24242_p2() {
    tmp_667_fu_24242_p2 = (!i135_cast273_cast_reg_36021.read().is_01() || !tmp62_fu_24236_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(i135_cast273_cast_reg_36021.read()) + sc_biguint<10>(tmp62_fu_24236_p2.read()));
}

void ShuffleNetV2::thread_tmp_668_fu_24255_p1() {
    tmp_668_fu_24255_p1 = esl_zext<64,11>(tmp_899_cast_fu_24252_p1.read());
}

void ShuffleNetV2::thread_tmp_669_fu_24247_p2() {
    tmp_669_fu_24247_p2 = (!tmp_666_fu_24226_p2.read().is_01() || !i135_cast_reg_36016.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_666_fu_24226_p2.read()) + sc_biguint<7>(i135_cast_reg_36016.read()));
}

void ShuffleNetV2::thread_tmp_670_cast_fu_18056_p1() {
    tmp_670_cast_fu_18056_p1 = esl_sext<32,7>(tmp_485_reg_34079.read());
}

void ShuffleNetV2::thread_tmp_670_fu_24263_p1() {
    tmp_670_fu_24263_p1 = esl_zext<64,32>(tmp_901_cast_fu_24260_p1.read());
}

void ShuffleNetV2::thread_tmp_671_fu_24025_p2() {
    tmp_671_fu_24025_p2 = (!p_shl188_cast_fu_24009_p1.read().is_01() || !p_shl189_cast_fu_24021_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl188_cast_fu_24009_p1.read()) - sc_biguint<8>(p_shl189_cast_fu_24021_p1.read()));
}

void ShuffleNetV2::thread_tmp_672_fu_24049_p2() {
    tmp_672_fu_24049_p2 = (!tmp61_cast_fu_24045_p1.read().is_01() || !co153_cast_reg_35951.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp61_cast_fu_24045_p1.read()) + sc_biguint<12>(co153_cast_reg_35951.read()));
}

void ShuffleNetV2::thread_tmp_673_cast_fu_18363_p1() {
    tmp_673_cast_fu_18363_p1 = esl_sext<11,8>(tmp_492_fu_18357_p2.read());
}

void ShuffleNetV2::thread_tmp_673_fu_24078_p2() {
    tmp_673_fu_24078_p2 = (!p_shl190_cast_fu_24062_p1.read().is_01() || !p_shl191_cast_fu_24074_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl190_cast_fu_24062_p1.read()) - sc_biguint<7>(p_shl191_cast_fu_24074_p1.read()));
}

void ShuffleNetV2::thread_tmp_674_fu_24084_p2() {
    tmp_674_fu_24084_p2 = (!tmp_673_fu_24078_p2.read().is_01() || !tmp_895_cast_reg_35969.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_673_fu_24078_p2.read()) + sc_biguint<7>(tmp_895_cast_reg_35969.read()));
}

void ShuffleNetV2::thread_tmp_675_fu_24429_p2() {
    tmp_675_fu_24429_p2 = (!p_shl192_cast_fu_24415_p1.read().is_01() || !p_shl193_cast_fu_24425_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl192_cast_fu_24415_p1.read()) - sc_biguint<8>(p_shl193_cast_fu_24425_p1.read()));
}

void ShuffleNetV2::thread_tmp_676_cast_fu_24322_p1() {
    tmp_676_cast_fu_24322_p1 = esl_zext<10,4>(h_111_fu_24316_p2.read());
}

void ShuffleNetV2::thread_tmp_676_fu_8900_p2() {
    tmp_676_fu_8900_p2 = (!tmp_658_reg_31140.read().is_01() || !tmp_203_cast_fu_8896_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_658_reg_31140.read()) + sc_biguint<15>(tmp_203_cast_fu_8896_p1.read()));
}

void ShuffleNetV2::thread_tmp_677_cast_fu_24465_p1() {
    tmp_677_cast_fu_24465_p1 = esl_zext<19,5>(ci64_reg_6292.read());
}

void ShuffleNetV2::thread_tmp_677_fu_8910_p2() {
    tmp_677_fu_8910_p2 = (!tmp_662_reg_31145.read().is_01() || !tmp_203_cast1_fu_8892_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_662_reg_31145.read()) + sc_biguint<14>(tmp_203_cast1_fu_8892_p1.read()));
}

void ShuffleNetV2::thread_tmp_678_fu_24469_p2() {
    tmp_678_fu_24469_p2 = (!tmp_675_reg_36114.read().is_01() || !ci64_cast_fu_24449_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_675_reg_36114.read()) + sc_biguint<8>(ci64_cast_fu_24449_p1.read()));
}

void ShuffleNetV2::thread_tmp_679_cast_fu_24474_p1() {
    tmp_679_cast_fu_24474_p1 = esl_sext<15,8>(tmp_678_fu_24469_p2.read());
}

void ShuffleNetV2::thread_tmp_679_fu_9102_p3() {
    tmp_679_fu_9102_p3 = esl_concat<7,2>(tmp_204_fu_9092_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_680_cast_fu_7998_p1() {
    tmp_680_cast_fu_7998_p1 = esl_sext<12,11>(tmp_486_fu_7992_p2.read());
}

void ShuffleNetV2::thread_tmp_680_fu_9114_p2() {
    tmp_680_fu_9114_p2 = (!p_shl308_cast_fu_9110_p1.read().is_01() || !tmp_205_cast_fu_9098_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl308_cast_fu_9110_p1.read()) - sc_biguint<10>(tmp_205_cast_fu_9098_p1.read()));
}

void ShuffleNetV2::thread_tmp_681_cast_fu_24373_p1() {
    tmp_681_cast_fu_24373_p1 = esl_zext<15,4>(w_110_fu_24367_p2.read());
}

void ShuffleNetV2::thread_tmp_681_fu_9124_p3() {
    tmp_681_fu_9124_p3 = esl_concat<5,2>(co25_reg_3578.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_682_fu_24701_p2() {
    tmp_682_fu_24701_p2 = (!p_shl194_cast_fu_24685_p1.read().is_01() || !p_shl195_cast_fu_24697_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl194_cast_fu_24685_p1.read()) - sc_biguint<8>(p_shl195_cast_fu_24697_p1.read()));
}

void ShuffleNetV2::thread_tmp_683_fu_24717_p2() {
    tmp_683_fu_24717_p2 = (!i141_cast259_cast_reg_36171.read().is_01() || !tmp64_fu_24711_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(i141_cast259_cast_reg_36171.read()) + sc_biguint<10>(tmp64_fu_24711_p2.read()));
}

void ShuffleNetV2::thread_tmp_684_fu_24730_p1() {
    tmp_684_fu_24730_p1 = esl_zext<64,11>(tmp_926_cast_fu_24727_p1.read());
}

void ShuffleNetV2::thread_tmp_685_cast_fu_18978_p1() {
    tmp_685_cast_fu_18978_p1 = esl_zext<7,4>(p_lshr_f11_cast_fu_18968_p4.read());
}

void ShuffleNetV2::thread_tmp_685_fu_24722_p2() {
    tmp_685_fu_24722_p2 = (!tmp_682_fu_24701_p2.read().is_01() || !i141_cast_reg_36166.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_682_fu_24701_p2.read()) + sc_biguint<8>(i141_cast_reg_36166.read()));
}

void ShuffleNetV2::thread_tmp_686_fu_24738_p1() {
    tmp_686_fu_24738_p1 = esl_zext<64,32>(tmp_928_cast_fu_24735_p1.read());
}

void ShuffleNetV2::thread_tmp_687_fu_24522_p2() {
    tmp_687_fu_24522_p2 = (!p_shl196_cast_fu_24502_p1.read().is_01() || !p_shl197_cast_fu_24518_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl196_cast_fu_24502_p1.read()) - sc_biguint<10>(p_shl197_cast_fu_24518_p1.read()));
}

void ShuffleNetV2::thread_tmp_688_fu_9136_p2() {
    tmp_688_fu_9136_p2 = (!p_shl307_cast_fu_9132_p1.read().is_01() || !tmp_206_cast_fu_9120_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl307_cast_fu_9132_p1.read()) - sc_biguint<8>(tmp_206_cast_fu_9120_p1.read()));
}

void ShuffleNetV2::thread_tmp_689_cast_fu_19250_p1() {
    tmp_689_cast_fu_19250_p1 = esl_sext<11,7>(tmp_505_fu_19244_p2.read());
}

void ShuffleNetV2::thread_tmp_689_fu_24538_p2() {
    tmp_689_fu_24538_p2 = (!tmp63_fu_24532_p2.read().is_01() || !co156_cast_reg_36101.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp63_fu_24532_p2.read()) + sc_biguint<12>(co156_cast_reg_36101.read()));
}

void ShuffleNetV2::thread_tmp_690_fu_24553_p2() {
    tmp_690_fu_24553_p2 = (!p_shl197_cast1_fu_24514_p1.read().is_01() || !p_shl198_cast_fu_24549_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl197_cast1_fu_24514_p1.read()) - sc_biguint<8>(p_shl198_cast_fu_24549_p1.read()));
}

void ShuffleNetV2::thread_tmp_691_fu_9166_p2() {
    tmp_691_fu_9166_p2 = (!tmp_680_reg_31225.read().is_01() || !tmp_210_cast_fu_9162_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_680_reg_31225.read()) + sc_biguint<10>(tmp_210_cast_fu_9162_p1.read()));
}

void ShuffleNetV2::thread_tmp_692_fu_24559_p2() {
    tmp_692_fu_24559_p2 = (!tmp_690_fu_24553_p2.read().is_01() || !tmp_921_cast_reg_36119.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_690_fu_24553_p2.read()) + sc_biguint<8>(tmp_921_cast_reg_36119.read()));
}

void ShuffleNetV2::thread_tmp_693_cast1_fu_7874_p3() {
    tmp_693_cast1_fu_7874_p3 = esl_concat<8,5>(tmp_497_fu_7869_p2.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_693_cast_fu_19274_p1() {
    tmp_693_cast_fu_19274_p1 = esl_sext<32,7>(tmp_508_reg_34451.read());
}

void ShuffleNetV2::thread_tmp_693_fu_9187_p2() {
    tmp_693_fu_9187_p2 = (!p_shl310_cast_fu_9183_p1.read().is_01() || !tmp_1046_cast1_fu_9171_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_shl310_cast_fu_9183_p1.read()) - sc_bigint<15>(tmp_1046_cast1_fu_9171_p1.read()));
}

void ShuffleNetV2::thread_tmp_694_fu_9193_p2() {
    tmp_694_fu_9193_p2 = (!tmp_1045_cast_reg_31230.read().is_01() || !tmp_210_cast1_fu_9158_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_1045_cast_reg_31230.read()) + sc_biguint<9>(tmp_210_cast1_fu_9158_p1.read()));
}

void ShuffleNetV2::thread_tmp_695_cast1_fu_24775_p1() {
    tmp_695_cast1_fu_24775_p1 = esl_zext<36,2>(w111_reg_6347.read());
}

void ShuffleNetV2::thread_tmp_695_cast_fu_24779_p1() {
    tmp_695_cast_fu_24779_p1 = esl_zext<13,2>(w111_reg_6347.read());
}

void ShuffleNetV2::thread_tmp_695_fu_9204_p2() {
    tmp_695_fu_9204_p2 = (!tmp_392_fu_9198_p2.read().is_01() || !tmp_694_fu_9193_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_392_fu_9198_p2.read()) - sc_biguint<9>(tmp_694_fu_9193_p2.read()));
}

void ShuffleNetV2::thread_tmp_696_fu_25131_p2() {
    tmp_696_fu_25131_p2 = (!p_shl201_cast_fu_25117_p1.read().is_01() || !p_shl202_cast_fu_25127_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl201_cast_fu_25117_p1.read()) - sc_biguint<8>(p_shl202_cast_fu_25127_p1.read()));
}

void ShuffleNetV2::thread_tmp_697_fu_25047_p2() {
    tmp_697_fu_25047_p2 = (!p_shl199_cast_fu_25031_p1.read().is_01() || !p_shl200_cast_fu_25043_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl199_cast_fu_25031_p1.read()) - sc_biguint<8>(p_shl200_cast_fu_25043_p1.read()));
}

void ShuffleNetV2::thread_tmp_698_fu_25063_p2() {
    tmp_698_fu_25063_p2 = (!i145_cast249_cast_reg_36311.read().is_01() || !tmp66_fu_25057_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(i145_cast249_cast_reg_36311.read()) + sc_biguint<9>(tmp66_fu_25057_p2.read()));
}

void ShuffleNetV2::thread_tmp_699_fu_25076_p1() {
    tmp_699_fu_25076_p1 = esl_zext<64,11>(tmp_944_cast_fu_25073_p1.read());
}

void ShuffleNetV2::thread_tmp_700_cast_fu_19057_p1() {
    tmp_700_cast_fu_19057_p1 = esl_sext<11,8>(tmp_510_fu_19051_p2.read());
}

void ShuffleNetV2::thread_tmp_700_fu_25068_p2() {
    tmp_700_fu_25068_p2 = (!tmp_697_fu_25047_p2.read().is_01() || !i145_cast_reg_36306.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_697_fu_25047_p2.read()) + sc_biguint<8>(i145_cast_reg_36306.read()));
}

void ShuffleNetV2::thread_tmp_701_fu_25084_p1() {
    tmp_701_fu_25084_p1 = esl_zext<64,32>(tmp_946_cast_fu_25081_p1.read());
}

void ShuffleNetV2::thread_tmp_702_cast1_fu_24795_p1() {
    tmp_702_cast1_fu_24795_p1 = esl_zext<11,2>(h112_reg_6358.read());
}

void ShuffleNetV2::thread_tmp_702_cast_fu_24799_p1() {
    tmp_702_cast_fu_24799_p1 = esl_zext<15,2>(h112_reg_6358.read());
}

void ShuffleNetV2::thread_tmp_702_fu_9293_p4() {
    tmp_702_fu_9293_p4 = esl_concat<6,5>(esl_concat<1,5>(ap_const_lv1_1, co29_reg_3623.read()), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_703_cast_fu_25167_p1() {
    tmp_703_cast_fu_25167_p1 = esl_zext<19,5>(ci66_reg_6413.read());
}

void ShuffleNetV2::thread_tmp_703_fu_9303_p1() {
    tmp_703_fu_9303_p1 = esl_sext<12,11>(tmp_702_fu_9293_p4.read());
}

void ShuffleNetV2::thread_tmp_704_fu_25171_p2() {
    tmp_704_fu_25171_p2 = (!tmp_696_reg_36360.read().is_01() || !ci66_cast_fu_25151_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_696_reg_36360.read()) + sc_biguint<8>(ci66_cast_fu_25151_p1.read()));
}

void ShuffleNetV2::thread_tmp_705_cast_fu_25176_p1() {
    tmp_705_cast_fu_25176_p1 = esl_sext<15,8>(tmp_704_fu_25171_p2.read());
}

void ShuffleNetV2::thread_tmp_705_fu_9311_p4() {
    tmp_705_fu_9311_p4 = esl_concat<6,3>(esl_concat<1,5>(ap_const_lv1_1, co29_reg_3623.read()), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_706_fu_24843_p2() {
    tmp_706_fu_24843_p2 = (!p_shl205_cast_fu_24827_p1.read().is_01() || !p_shl206_cast_fu_24839_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl205_cast_fu_24827_p1.read()) - sc_biguint<8>(p_shl206_cast_fu_24839_p1.read()));
}

void ShuffleNetV2::thread_tmp_707_cast_fu_19604_p1() {
    tmp_707_cast_fu_19604_p1 = esl_sext<11,7>(tmp_516_fu_19598_p2.read());
}

void ShuffleNetV2::thread_tmp_707_fu_24859_p2() {
    tmp_707_fu_24859_p2 = (!co159_cast1_reg_36212.read().is_01() || !tmp65_fu_24853_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(co159_cast1_reg_36212.read()) + sc_biguint<10>(tmp65_fu_24853_p2.read()));
}

void ShuffleNetV2::thread_tmp_708_cast_fu_24869_p1() {
    tmp_708_cast_fu_24869_p1 = esl_zext<13,10>(tmp_707_reg_36269.read());
}

void ShuffleNetV2::thread_tmp_708_fu_9321_p1() {
    tmp_708_fu_9321_p1 = esl_sext<10,9>(tmp_705_fu_9311_p4.read());
}

void ShuffleNetV2::thread_tmp_709_fu_24864_p2() {
    tmp_709_fu_24864_p2 = (!tmp_706_fu_24843_p2.read().is_01() || !co159_cast_reg_36207.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_706_fu_24843_p2.read()) + sc_biguint<8>(co159_cast_reg_36207.read()));
}

void ShuffleNetV2::thread_tmp_710_fu_9329_p2() {
    tmp_710_fu_9329_p2 = (!p_shl313_cast_fu_9307_p1.read().is_01() || !p_shl314_cast_fu_9325_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl313_cast_fu_9307_p1.read()) - sc_biguint<13>(p_shl314_cast_fu_9325_p1.read()));
}

void ShuffleNetV2::thread_tmp_711_cast1_fu_24920_p1() {
    tmp_711_cast1_fu_24920_p1 = esl_zext<35,32>(tmp_965_cast_fu_24917_p1.read());
}

void ShuffleNetV2::thread_tmp_711_cast_fu_19628_p1() {
    tmp_711_cast_fu_19628_p1 = esl_sext<32,7>(tmp_519_reg_34591.read());
}

void ShuffleNetV2::thread_tmp_711_fu_9339_p3() {
    tmp_711_fu_9339_p3 = esl_concat<5,5>(co29_reg_3623.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_712_fu_25403_p2() {
    tmp_712_fu_25403_p2 = (!p_shl203_cast_fu_25387_p1.read().is_01() || !p_shl204_cast_fu_25399_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl203_cast_fu_25387_p1.read()) - sc_biguint<8>(p_shl204_cast_fu_25399_p1.read()));
}

void ShuffleNetV2::thread_tmp_713_fu_9351_p3() {
    tmp_713_fu_9351_p3 = esl_concat<5,3>(co29_reg_3623.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_714_fu_25427_p2() {
    tmp_714_fu_25427_p2 = (!i147_cast1_reg_36417.read().is_01() || !tmp68_cast_fu_25423_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(i147_cast1_reg_36417.read()) + sc_biguint<12>(tmp68_cast_fu_25423_p1.read()));
}

void ShuffleNetV2::thread_tmp_715_cast_fu_19696_p1() {
    tmp_715_cast_fu_19696_p1 = esl_zext<7,4>(p_lshr_f12_cast_fu_19686_p4.read());
}

void ShuffleNetV2::thread_tmp_715_fu_25437_p1() {
    tmp_715_fu_25437_p1 = esl_zext<64,12>(tmp_714_reg_36438.read());
}

void ShuffleNetV2::thread_tmp_716_fu_25432_p2() {
    tmp_716_fu_25432_p2 = (!tmp_712_fu_25403_p2.read().is_01() || !i147_cast_reg_36412.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_712_fu_25403_p2.read()) + sc_biguint<8>(i147_cast_reg_36412.read()));
}

void ShuffleNetV2::thread_tmp_717_cast_fu_19968_p1() {
    tmp_717_cast_fu_19968_p1 = esl_sext<11,7>(tmp_530_fu_19962_p2.read());
}

void ShuffleNetV2::thread_tmp_717_fu_25444_p1() {
    tmp_717_fu_25444_p1 = esl_zext<64,32>(tmp_956_cast_fu_25441_p1.read());
}

void ShuffleNetV2::thread_tmp_718_fu_25224_p2() {
    tmp_718_fu_25224_p2 = (!p_shl207_cast_fu_25204_p1.read().is_01() || !p_shl208_cast_fu_25220_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl207_cast_fu_25204_p1.read()) - sc_biguint<10>(p_shl208_cast_fu_25220_p1.read()));
}

void ShuffleNetV2::thread_tmp_719_fu_25240_p2() {
    tmp_719_fu_25240_p2 = (!tmp67_fu_25234_p2.read().is_01() || !co161_cast_reg_36347.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp67_fu_25234_p2.read()) + sc_biguint<12>(co161_cast_reg_36347.read()));
}

void ShuffleNetV2::thread_tmp_720_fu_25255_p2() {
    tmp_720_fu_25255_p2 = (!p_shl208_cast1_fu_25216_p1.read().is_01() || !p_shl209_cast_fu_25251_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl208_cast1_fu_25216_p1.read()) - sc_biguint<8>(p_shl209_cast_fu_25251_p1.read()));
}

void ShuffleNetV2::thread_tmp_721_cast_fu_19992_p1() {
    tmp_721_cast_fu_19992_p1 = esl_sext<32,7>(tmp_533_reg_34697.read());
}

void ShuffleNetV2::thread_tmp_721_fu_25261_p2() {
    tmp_721_fu_25261_p2 = (!tmp_720_fu_25255_p2.read().is_01() || !tmp_950_cast_reg_36365.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_720_fu_25255_p2.read()) + sc_biguint<8>(tmp_950_cast_reg_36365.read()));
}

void ShuffleNetV2::thread_tmp_722_cast1_fu_25481_p1() {
    tmp_722_cast1_fu_25481_p1 = esl_zext<36,2>(w113_reg_6468.read());
}

void ShuffleNetV2::thread_tmp_722_cast_fu_25485_p1() {
    tmp_722_cast_fu_25485_p1 = esl_zext<13,2>(w113_reg_6468.read());
}

void ShuffleNetV2::thread_tmp_722_fu_9363_p2() {
    tmp_722_fu_9363_p2 = (!p_shl311_cast_fu_9347_p1.read().is_01() || !p_shl312_cast_fu_9359_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl311_cast_fu_9347_p1.read()) - sc_biguint<11>(p_shl312_cast_fu_9359_p1.read()));
}

void ShuffleNetV2::thread_tmp_723_fu_25833_p2() {
    tmp_723_fu_25833_p2 = (!p_shl212_cast_fu_25819_p1.read().is_01() || !p_shl213_cast_fu_25829_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl212_cast_fu_25819_p1.read()) - sc_biguint<8>(p_shl213_cast_fu_25829_p1.read()));
}

void ShuffleNetV2::thread_tmp_724_fu_25753_p2() {
    tmp_724_fu_25753_p2 = (!p_shl210_cast_fu_25737_p1.read().is_01() || !p_shl211_cast_fu_25749_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl210_cast_fu_25737_p1.read()) - sc_biguint<8>(p_shl211_cast_fu_25749_p1.read()));
}

void ShuffleNetV2::thread_tmp_725_fu_25769_p2() {
    tmp_725_fu_25769_p2 = (!i153_cast1_reg_36557.read().is_01() || !tmp70_fu_25763_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(i153_cast1_reg_36557.read()) + sc_biguint<12>(tmp70_fu_25763_p2.read()));
}

void ShuffleNetV2::thread_tmp_726_cast_cast_fu_19388_p1() {
    tmp_726_cast_cast_fu_19388_p1 = esl_sext<8,7>(tmp_525_fu_19382_p2.read());
}

void ShuffleNetV2::thread_tmp_726_fu_25779_p1() {
    tmp_726_fu_25779_p1 = esl_zext<64,12>(tmp_725_reg_36578.read());
}

void ShuffleNetV2::thread_tmp_727_fu_25774_p2() {
    tmp_727_fu_25774_p2 = (!tmp_724_fu_25753_p2.read().is_01() || !i153_cast_reg_36552.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_724_fu_25753_p2.read()) + sc_biguint<8>(i153_cast_reg_36552.read()));
}

void ShuffleNetV2::thread_tmp_728_cast_fu_19408_p1() {
    tmp_728_cast_fu_19408_p1 = esl_sext<9,8>(tmp_526_reg_34523.read());
}

void ShuffleNetV2::thread_tmp_728_fu_25786_p1() {
    tmp_728_fu_25786_p1 = esl_zext<64,32>(tmp_979_cast_fu_25783_p1.read());
}

void ShuffleNetV2::thread_tmp_729_cast1_fu_25501_p1() {
    tmp_729_cast1_fu_25501_p1 = esl_zext<11,2>(h114_reg_6479.read());
}

void ShuffleNetV2::thread_tmp_729_cast_fu_25505_p1() {
    tmp_729_cast_fu_25505_p1 = esl_zext<15,2>(h114_reg_6479.read());
}

void ShuffleNetV2::thread_tmp_729_fu_9230_p2() {
    tmp_729_fu_9230_p2 = (!tmp_693_reg_31243.read().is_01() || !tmp_211_cast_fu_9226_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_693_reg_31243.read()) + sc_biguint<15>(tmp_211_cast_fu_9226_p1.read()));
}

void ShuffleNetV2::thread_tmp_730_cast_fu_19468_p1() {
    tmp_730_cast_fu_19468_p1 = esl_sext<32,7>(tmp_528_reg_34529.read());
}

void ShuffleNetV2::thread_tmp_730_fu_9240_p2() {
    tmp_730_fu_9240_p2 = (!tmp_695_reg_31248.read().is_01() || !tmp_211_cast1_fu_9222_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_695_reg_31248.read()) + sc_biguint<9>(tmp_211_cast1_fu_9222_p1.read()));
}

void ShuffleNetV2::thread_tmp_731_cast_fu_25869_p1() {
    tmp_731_cast_fu_25869_p1 = esl_zext<19,5>(ci68_reg_6534.read());
}

void ShuffleNetV2::thread_tmp_731_fu_9389_p2() {
    tmp_731_fu_9389_p2 = (!tmp_1056_cast_reg_31292.read().is_01() || !tmp_215_cast_fu_9385_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(tmp_1056_cast_reg_31292.read()) + sc_biguint<14>(tmp_215_cast_fu_9385_p1.read()));
}

void ShuffleNetV2::thread_tmp_732_fu_25873_p2() {
    tmp_732_fu_25873_p2 = (!tmp_723_reg_36606.read().is_01() || !ci68_cast_fu_25853_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_723_reg_36606.read()) + sc_biguint<8>(ci68_cast_fu_25853_p1.read()));
}

void ShuffleNetV2::thread_tmp_733_cast1_fu_25878_p1() {
    tmp_733_cast1_fu_25878_p1 = esl_sext<15,8>(tmp_732_fu_25873_p2.read());
}

void ShuffleNetV2::thread_tmp_733_cast_fu_19775_p1() {
    tmp_733_cast_fu_19775_p1 = esl_sext<11,8>(tmp_535_fu_19769_p2.read());
}

void ShuffleNetV2::thread_tmp_733_fu_9399_p2() {
    tmp_733_fu_9399_p2 = (!tmp_722_reg_31297.read().is_01() || !tmp_215_cast1_fu_9381_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_722_reg_31297.read()) + sc_biguint<11>(tmp_215_cast1_fu_9381_p1.read()));
}

void ShuffleNetV2::thread_tmp_734_fu_25549_p2() {
    tmp_734_fu_25549_p2 = (!p_shl216_cast_fu_25533_p1.read().is_01() || !p_shl217_cast_fu_25545_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl216_cast_fu_25533_p1.read()) - sc_biguint<8>(p_shl217_cast_fu_25545_p1.read()));
}

void ShuffleNetV2::thread_tmp_735_fu_25565_p2() {
    tmp_735_fu_25565_p2 = (!co163_cast1_reg_36458.read().is_01() || !tmp69_fu_25559_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(co163_cast1_reg_36458.read()) + sc_biguint<10>(tmp69_fu_25559_p2.read()));
}

void ShuffleNetV2::thread_tmp_736_cast_fu_25575_p1() {
    tmp_736_cast_fu_25575_p1 = esl_zext<13,10>(tmp_735_reg_36515.read());
}

void ShuffleNetV2::thread_tmp_736_fu_9454_p3() {
    tmp_736_fu_9454_p3 = esl_concat<5,4>(co32_reg_3657.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_737_fu_25570_p2() {
    tmp_737_fu_25570_p2 = (!tmp_734_fu_25549_p2.read().is_01() || !co163_cast_reg_36453.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_734_fu_25549_p2.read()) + sc_biguint<8>(co163_cast_reg_36453.read()));
}

void ShuffleNetV2::thread_tmp_738_cast_fu_8023_p1() {
    tmp_738_cast_fu_8023_p1 = esl_sext<64,12>(tmp_501_fu_8018_p2.read());
}

void ShuffleNetV2::thread_tmp_738_fu_9466_p3() {
    tmp_738_fu_9466_p3 = esl_concat<5,1>(co32_reg_3657.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_739_cast_fu_25626_p1() {
    tmp_739_cast_fu_25626_p1 = esl_zext<35,32>(tmp_998_cast_fu_25623_p1.read());
}

void ShuffleNetV2::thread_tmp_739_fu_9478_p2() {
    tmp_739_fu_9478_p2 = (!p_shl316_cast_fu_9474_p1.read().is_01() || !p_shl315_cast_fu_9462_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl316_cast_fu_9474_p1.read()) + sc_biguint<10>(p_shl315_cast_fu_9462_p1.read()));
}

void ShuffleNetV2::thread_tmp_740_fu_26159_p2() {
    tmp_740_fu_26159_p2 = (!co167_cast_fu_26143_p1.read().is_01() || !ap_const_lv8_60.is_01())? sc_lv<8>(): (sc_biguint<8>(co167_cast_fu_26143_p1.read()) + sc_biguint<8>(ap_const_lv8_60));
}

void ShuffleNetV2::thread_tmp_741_cast_fu_7938_p1() {
    tmp_741_cast_fu_7938_p1 = esl_zext<64,13>(tmp_503_fu_7933_p2.read());
}

void ShuffleNetV2::thread_tmp_741_fu_9583_p3() {
    tmp_741_fu_9583_p3 = esl_concat<6,4>(tmp_216_fu_9577_p2.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_742_fu_26105_p2() {
    tmp_742_fu_26105_p2 = (!p_shl214_cast_fu_26089_p1.read().is_01() || !p_shl215_cast_fu_26101_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl214_cast_fu_26089_p1.read()) - sc_biguint<8>(p_shl215_cast_fu_26101_p1.read()));
}

void ShuffleNetV2::thread_tmp_743_cast_fu_7952_p1() {
    tmp_743_cast_fu_7952_p1 = esl_zext<64,13>(tmp_504_reg_30843.read());
}

void ShuffleNetV2::thread_tmp_743_fu_9595_p3() {
    tmp_743_fu_9595_p3 = esl_concat<6,1>(tmp_216_fu_9577_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_744_fu_9607_p2() {
    tmp_744_fu_9607_p2 = (!p_shl322_cast_fu_9603_p1.read().is_01() || !p_shl321_cast_fu_9591_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl322_cast_fu_9603_p1.read()) + sc_biguint<11>(p_shl321_cast_fu_9591_p1.read()));
}

void ShuffleNetV2::thread_tmp_745_cast_fu_20390_p1() {
    tmp_745_cast_fu_20390_p1 = esl_zext<7,4>(p_lshr_f13_cast_fu_20380_p4.read());
}

void ShuffleNetV2::thread_tmp_745_fu_26121_p2() {
    tmp_745_fu_26121_p2 = (!i155_cast1_reg_36663.read().is_01() || !tmp72_fu_26115_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(i155_cast1_reg_36663.read()) + sc_biguint<12>(tmp72_fu_26115_p2.read()));
}

void ShuffleNetV2::thread_tmp_746_fu_26131_p1() {
    tmp_746_fu_26131_p1 = esl_zext<64,12>(tmp_745_reg_36684.read());
}

void ShuffleNetV2::thread_tmp_747_fu_26126_p2() {
    tmp_747_fu_26126_p2 = (!tmp_742_fu_26105_p2.read().is_01() || !i155_cast_reg_36658.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_742_fu_26105_p2.read()) + sc_biguint<8>(i155_cast_reg_36658.read()));
}

void ShuffleNetV2::thread_tmp_748_fu_26138_p1() {
    tmp_748_fu_26138_p1 = esl_zext<64,32>(tmp_989_cast_fu_26135_p1.read());
}

void ShuffleNetV2::thread_tmp_749_cast_fu_20662_p1() {
    tmp_749_cast_fu_20662_p1 = esl_sext<11,7>(tmp_548_fu_20656_p2.read());
}

void ShuffleNetV2::thread_tmp_749_fu_25926_p2() {
    tmp_749_fu_25926_p2 = (!p_shl220_cast_fu_25906_p1.read().is_01() || !p_shl221_cast_fu_25922_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl220_cast_fu_25906_p1.read()) - sc_biguint<10>(p_shl221_cast_fu_25922_p1.read()));
}

void ShuffleNetV2::thread_tmp_750_fu_25942_p2() {
    tmp_750_fu_25942_p2 = (!tmp71_fu_25936_p2.read().is_01() || !co165_cast_reg_36593.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp71_fu_25936_p2.read()) + sc_biguint<12>(co165_cast_reg_36593.read()));
}

void ShuffleNetV2::thread_tmp_751_fu_25957_p2() {
    tmp_751_fu_25957_p2 = (!p_shl221_cast1_fu_25918_p1.read().is_01() || !p_shl222_cast_fu_25953_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl221_cast1_fu_25918_p1.read()) - sc_biguint<8>(p_shl222_cast_fu_25953_p1.read()));
}

void ShuffleNetV2::thread_tmp_752_fu_25963_p2() {
    tmp_752_fu_25963_p2 = (!tmp_751_fu_25957_p2.read().is_01() || !tmp_983_cast_reg_36611.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_751_fu_25957_p2.read()) + sc_biguint<8>(tmp_983_cast_reg_36611.read()));
}

void ShuffleNetV2::thread_tmp_753_cast_fu_20686_p1() {
    tmp_753_cast_fu_20686_p1 = esl_sext<32,7>(tmp_551_reg_34901.read());
}

void ShuffleNetV2::thread_tmp_753_fu_26396_p2() {
    tmp_753_fu_26396_p2 = (!p_shl218_cast_fu_26382_p1.read().is_01() || !p_shl219_cast_fu_26392_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl218_cast_fu_26382_p1.read()) - sc_biguint<8>(p_shl219_cast_fu_26392_p1.read()));
}

void ShuffleNetV2::thread_tmp_754_cast1_fu_26245_p1() {
    tmp_754_cast1_fu_26245_p1 = esl_zext<12,3>(h_117_fu_26239_p2.read());
}

void ShuffleNetV2::thread_tmp_754_cast_fu_26249_p1() {
    tmp_754_cast_fu_26249_p1 = esl_zext<13,3>(h_117_fu_26239_p2.read());
}

void ShuffleNetV2::thread_tmp_754_fu_9613_p3() {
    tmp_754_fu_9613_p3 = esl_concat<5,4>(co35_reg_3690.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_755_cast_fu_26432_p1() {
    tmp_755_cast_fu_26432_p1 = esl_zext<19,5>(ci70_reg_6622.read());
}

void ShuffleNetV2::thread_tmp_755_fu_9625_p3() {
    tmp_755_fu_9625_p3 = esl_concat<5,1>(co35_reg_3690.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_756_fu_26436_p2() {
    tmp_756_fu_26436_p2 = (!tmp_753_reg_36766.read().is_01() || !ci70_cast_fu_26416_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_753_reg_36766.read()) + sc_biguint<8>(ci70_cast_fu_26416_p1.read()));
}

void ShuffleNetV2::thread_tmp_757_cast_fu_26441_p1() {
    tmp_757_cast_fu_26441_p1 = esl_sext<15,8>(tmp_756_fu_26436_p2.read());
}

void ShuffleNetV2::thread_tmp_757_fu_9637_p2() {
    tmp_757_fu_9637_p2 = (!p_shl320_cast_fu_9633_p1.read().is_01() || !p_shl319_cast_fu_9621_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl320_cast_fu_9633_p1.read()) + sc_biguint<10>(p_shl319_cast_fu_9621_p1.read()));
}

void ShuffleNetV2::thread_tmp_758_cast1_fu_26327_p1() {
    tmp_758_cast1_fu_26327_p1 = esl_zext<13,3>(w_116_fu_26321_p2.read());
}

void ShuffleNetV2::thread_tmp_758_cast_fu_26331_p1() {
    tmp_758_cast_fu_26331_p1 = esl_zext<14,3>(w_116_fu_26321_p2.read());
}

void ShuffleNetV2::thread_tmp_758_fu_9500_p2() {
    tmp_758_fu_9500_p2 = (!tmp_217_cast_fu_9496_p1.read().is_01() || !tmp_739_reg_31341.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_217_cast_fu_9496_p1.read()) + sc_biguint<10>(tmp_739_reg_31341.read()));
}

void ShuffleNetV2::thread_tmp_759_fu_26668_p2() {
    tmp_759_fu_26668_p2 = (!p_shl223_cast_fu_26652_p1.read().is_01() || !p_shl224_cast_fu_26664_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl223_cast_fu_26652_p1.read()) - sc_biguint<8>(p_shl224_cast_fu_26664_p1.read()));
}

void ShuffleNetV2::thread_tmp_760_cast1_fu_8094_p1() {
    tmp_760_cast1_fu_8094_p1 = esl_sext<9,8>(tmp_521_fu_8088_p2.read());
}

void ShuffleNetV2::thread_tmp_760_cast_fu_20469_p1() {
    tmp_760_cast_fu_20469_p1 = esl_sext<11,8>(tmp_553_fu_20463_p2.read());
}

void ShuffleNetV2::thread_tmp_760_fu_9529_p2() {
    tmp_760_fu_9529_p2 = (!p_shl317_cast_fu_9513_p1.read().is_01() || !p_shl318_cast_fu_9525_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl317_cast_fu_9513_p1.read()) + sc_biguint<15>(p_shl318_cast_fu_9525_p1.read()));
}

void ShuffleNetV2::thread_tmp_761_fu_26684_p2() {
    tmp_761_fu_26684_p2 = (!i161_cast1_reg_36823.read().is_01() || !tmp74_fu_26678_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(i161_cast1_reg_36823.read()) + sc_biguint<12>(tmp74_fu_26678_p2.read()));
}

void ShuffleNetV2::thread_tmp_762_fu_26694_p1() {
    tmp_762_fu_26694_p1 = esl_zext<64,12>(tmp_761_reg_36844.read());
}

void ShuffleNetV2::thread_tmp_763_cast_fu_8119_p1() {
    tmp_763_cast_fu_8119_p1 = esl_sext<15,9>(tmp_522_fu_8114_p2.read());
}

void ShuffleNetV2::thread_tmp_763_fu_9786_p3() {
    tmp_763_fu_9786_p3 = esl_concat<8,5>(tmp_218_fu_9780_p2.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_764_fu_26689_p2() {
    tmp_764_fu_26689_p2 = (!tmp_759_fu_26668_p2.read().is_01() || !i161_cast_reg_36818.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_759_fu_26668_p2.read()) + sc_biguint<8>(i161_cast_reg_36818.read()));
}

void ShuffleNetV2::thread_tmp_765_fu_26701_p1() {
    tmp_765_fu_26701_p1 = esl_zext<64,32>(tmp_1018_cast_fu_26698_p1.read());
}

void ShuffleNetV2::thread_tmp_766_fu_26489_p2() {
    tmp_766_fu_26489_p2 = (!p_shl225_cast_fu_26469_p1.read().is_01() || !p_shl226_cast_fu_26485_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl225_cast_fu_26469_p1.read()) - sc_biguint<10>(p_shl226_cast_fu_26485_p1.read()));
}

void ShuffleNetV2::thread_tmp_767_cast_fu_21016_p1() {
    tmp_767_cast_fu_21016_p1 = esl_sext<11,7>(tmp_559_fu_21010_p2.read());
}

void ShuffleNetV2::thread_tmp_767_fu_26505_p2() {
    tmp_767_fu_26505_p2 = (!tmp73_fu_26499_p2.read().is_01() || !co168_cast_reg_36753.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp73_fu_26499_p2.read()) + sc_biguint<12>(co168_cast_reg_36753.read()));
}

void ShuffleNetV2::thread_tmp_768_fu_26520_p2() {
    tmp_768_fu_26520_p2 = (!p_shl226_cast1_fu_26481_p1.read().is_01() || !p_shl227_cast_fu_26516_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl226_cast1_fu_26481_p1.read()) - sc_biguint<8>(p_shl227_cast_fu_26516_p1.read()));
}

void ShuffleNetV2::thread_tmp_769_fu_26526_p2() {
    tmp_769_fu_26526_p2 = (!tmp_768_fu_26520_p2.read().is_01() || !tmp_1005_cast_reg_36771.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_768_fu_26520_p2.read()) + sc_biguint<8>(tmp_1005_cast_reg_36771.read()));
}

void ShuffleNetV2::thread_tmp_770_cast1_fu_26738_p1() {
    tmp_770_cast1_fu_26738_p1 = esl_zext<36,2>(w117_reg_6677.read());
}

void ShuffleNetV2::thread_tmp_770_cast_fu_26742_p1() {
    tmp_770_cast_fu_26742_p1 = esl_zext<13,2>(w117_reg_6677.read());
}

void ShuffleNetV2::thread_tmp_770_fu_9798_p3() {
    tmp_770_fu_9798_p3 = esl_concat<8,3>(tmp_218_fu_9780_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_771_cast_fu_21040_p1() {
    tmp_771_cast_fu_21040_p1 = esl_sext<32,7>(tmp_562_reg_35041.read());
}

void ShuffleNetV2::thread_tmp_771_fu_27090_p2() {
    tmp_771_fu_27090_p2 = (!p_shl230_cast_fu_27076_p1.read().is_01() || !p_shl231_cast_fu_27086_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl230_cast_fu_27076_p1.read()) - sc_biguint<8>(p_shl231_cast_fu_27086_p1.read()));
}

void ShuffleNetV2::thread_tmp_772_fu_27010_p2() {
    tmp_772_fu_27010_p2 = (!p_shl228_cast_fu_26994_p1.read().is_01() || !p_shl229_cast_fu_27006_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl228_cast_fu_26994_p1.read()) - sc_biguint<8>(p_shl229_cast_fu_27006_p1.read()));
}

void ShuffleNetV2::thread_tmp_773_fu_27026_p2() {
    tmp_773_fu_27026_p2 = (!i165_cast1_reg_36963.read().is_01() || !tmp76_fu_27020_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(i165_cast1_reg_36963.read()) + sc_biguint<12>(tmp76_fu_27020_p2.read()));
}

void ShuffleNetV2::thread_tmp_774_fu_27036_p1() {
    tmp_774_fu_27036_p1 = esl_zext<64,12>(tmp_773_reg_36984.read());
}

void ShuffleNetV2::thread_tmp_775_cast_fu_21108_p1() {
    tmp_775_cast_fu_21108_p1 = esl_zext<7,4>(p_lshr_f14_cast_fu_21098_p4.read());
}

void ShuffleNetV2::thread_tmp_775_fu_27031_p2() {
    tmp_775_fu_27031_p2 = (!tmp_772_fu_27010_p2.read().is_01() || !i165_cast_reg_36958.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_772_fu_27010_p2.read()) + sc_biguint<8>(i165_cast_reg_36958.read()));
}

void ShuffleNetV2::thread_tmp_776_fu_27043_p1() {
    tmp_776_fu_27043_p1 = esl_zext<64,32>(tmp_1036_cast_fu_27040_p1.read());
}

void ShuffleNetV2::thread_tmp_777_cast1_fu_26758_p1() {
    tmp_777_cast1_fu_26758_p1 = esl_zext<11,2>(h118_reg_6688.read());
}

void ShuffleNetV2::thread_tmp_777_cast2_fu_26762_p1() {
    tmp_777_cast2_fu_26762_p1 = esl_zext<15,2>(h118_reg_6688.read());
}

void ShuffleNetV2::thread_tmp_777_cast_fu_21380_p1() {
    tmp_777_cast_fu_21380_p1 = esl_sext<11,7>(tmp_573_fu_21374_p2.read());
}

void ShuffleNetV2::thread_tmp_777_fu_9810_p2() {
    tmp_777_fu_9810_p2 = (!p_shl329_cast_fu_9794_p1.read().is_01() || !p_shl330_cast_fu_9806_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl329_cast_fu_9794_p1.read()) - sc_biguint<14>(p_shl330_cast_fu_9806_p1.read()));
}

void ShuffleNetV2::thread_tmp_778_cast_fu_27126_p1() {
    tmp_778_cast_fu_27126_p1 = esl_zext<19,5>(ci72_reg_6743.read());
}

void ShuffleNetV2::thread_tmp_778_fu_9820_p3() {
    tmp_778_fu_9820_p3 = esl_concat<5,5>(co38_reg_3723.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_779_fu_27130_p2() {
    tmp_779_fu_27130_p2 = (!tmp_771_reg_37012.read().is_01() || !ci72_cast_fu_27110_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_771_reg_37012.read()) + sc_biguint<8>(ci72_cast_fu_27110_p1.read()));
}

void ShuffleNetV2::thread_tmp_780_fu_9832_p3() {
    tmp_780_fu_9832_p3 = esl_concat<5,3>(co38_reg_3723.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_781_cast1_fu_27135_p1() {
    tmp_781_cast1_fu_27135_p1 = esl_sext<15,8>(tmp_779_fu_27130_p2.read());
}

void ShuffleNetV2::thread_tmp_781_cast_fu_21404_p1() {
    tmp_781_cast_fu_21404_p1 = esl_sext<32,7>(tmp_576_reg_35147.read());
}

void ShuffleNetV2::thread_tmp_781_fu_9844_p2() {
    tmp_781_fu_9844_p2 = (!p_shl327_cast_fu_9828_p1.read().is_01() || !p_shl328_cast_fu_9840_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl327_cast_fu_9828_p1.read()) - sc_biguint<11>(p_shl328_cast_fu_9840_p1.read()));
}

void ShuffleNetV2::thread_tmp_782_fu_26806_p2() {
    tmp_782_fu_26806_p2 = (!p_shl234_cast_fu_26790_p1.read().is_01() || !p_shl235_cast_fu_26802_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl234_cast_fu_26790_p1.read()) - sc_biguint<8>(p_shl235_cast_fu_26802_p1.read()));
}

void ShuffleNetV2::thread_tmp_783_fu_26822_p2() {
    tmp_783_fu_26822_p2 = (!co171_cast1_reg_36864.read().is_01() || !tmp75_fu_26816_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(co171_cast1_reg_36864.read()) + sc_biguint<10>(tmp75_fu_26816_p2.read()));
}

void ShuffleNetV2::thread_tmp_784_cast_fu_26832_p1() {
    tmp_784_cast_fu_26832_p1 = esl_zext<13,10>(tmp_783_reg_36921.read());
}

void ShuffleNetV2::thread_tmp_784_fu_9663_p2() {
    tmp_784_fu_9663_p2 = (!tmp_219_cast_fu_9659_p1.read().is_01() || !tmp_757_reg_31390.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_219_cast_fu_9659_p1.read()) + sc_biguint<10>(tmp_757_reg_31390.read()));
}

void ShuffleNetV2::thread_tmp_785_fu_26827_p2() {
    tmp_785_fu_26827_p2 = (!tmp_782_fu_26806_p2.read().is_01() || !co171_cast_reg_36859.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_782_fu_26806_p2.read()) + sc_biguint<8>(co171_cast_reg_36859.read()));
}

void ShuffleNetV2::thread_tmp_786_cast_cast_fu_20800_p1() {
    tmp_786_cast_cast_fu_20800_p1 = esl_sext<8,7>(tmp_568_fu_20794_p2.read());
}

void ShuffleNetV2::thread_tmp_786_cast_fu_26883_p1() {
    tmp_786_cast_fu_26883_p1 = esl_zext<35,32>(tmp_1055_cast_fu_26880_p1.read());
}

void ShuffleNetV2::thread_tmp_786_fu_9688_p2() {
    tmp_786_fu_9688_p2 = (!p_shl325_cast_fu_9668_p3.read().is_01() || !p_shl326_cast_fu_9684_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl325_cast_fu_9668_p3.read()) + sc_biguint<14>(p_shl326_cast_fu_9684_p1.read()));
}

void ShuffleNetV2::thread_tmp_787_fu_27370_p2() {
    tmp_787_fu_27370_p2 = (!p_shl232_cast_fu_27354_p1.read().is_01() || !p_shl233_cast_fu_27366_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl232_cast_fu_27354_p1.read()) - sc_biguint<8>(p_shl233_cast_fu_27366_p1.read()));
}

void ShuffleNetV2::thread_tmp_788_cast_fu_20820_p1() {
    tmp_788_cast_fu_20820_p1 = esl_sext<9,8>(tmp_569_reg_34973.read());
}

void ShuffleNetV2::thread_tmp_788_fu_9694_p2() {
    tmp_788_fu_9694_p2 = (!tmp_219_cast1_fu_9655_p1.read().is_01() || !tmp_744_reg_31385.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_219_cast1_fu_9655_p1.read()) + sc_biguint<11>(tmp_744_reg_31385.read()));
}

void ShuffleNetV2::thread_tmp_789_fu_27386_p2() {
    tmp_789_fu_27386_p2 = (!i167_cast1_reg_37069.read().is_01() || !tmp78_fu_27380_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(i167_cast1_reg_37069.read()) + sc_biguint<12>(tmp78_fu_27380_p2.read()));
}

void ShuffleNetV2::thread_tmp_790_cast_fu_20880_p1() {
    tmp_790_cast_fu_20880_p1 = esl_sext<32,7>(tmp_571_reg_34979.read());
}

void ShuffleNetV2::thread_tmp_790_fu_27396_p1() {
    tmp_790_fu_27396_p1 = esl_zext<64,12>(tmp_789_reg_37090.read());
}

void ShuffleNetV2::thread_tmp_791_fu_9719_p2() {
    tmp_791_fu_9719_p2 = (!p_shl323_cast_fu_9699_p3.read().is_01() || !p_shl324_cast_fu_9715_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl323_cast_fu_9699_p3.read()) + sc_biguint<15>(p_shl324_cast_fu_9715_p1.read()));
}

void ShuffleNetV2::thread_tmp_792_fu_27391_p2() {
    tmp_792_fu_27391_p2 = (!tmp_787_fu_27370_p2.read().is_01() || !i167_cast_reg_37064.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_787_fu_27370_p2.read()) + sc_biguint<8>(i167_cast_reg_37064.read()));
}

void ShuffleNetV2::thread_tmp_793_cast_fu_21187_p1() {
    tmp_793_cast_fu_21187_p1 = esl_sext<11,8>(tmp_578_fu_21181_p2.read());
}

void ShuffleNetV2::thread_tmp_793_fu_27403_p1() {
    tmp_793_fu_27403_p1 = esl_zext<64,32>(tmp_1046_cast_fu_27400_p1.read());
}

void ShuffleNetV2::thread_tmp_794_fu_27183_p2() {
    tmp_794_fu_27183_p2 = (!p_shl236_cast_fu_27163_p1.read().is_01() || !p_shl237_cast_fu_27179_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl236_cast_fu_27163_p1.read()) - sc_biguint<10>(p_shl237_cast_fu_27179_p1.read()));
}

void ShuffleNetV2::thread_tmp_795_fu_27199_p2() {
    tmp_795_fu_27199_p2 = (!tmp77_fu_27193_p2.read().is_01() || !co173_cast186_cast_reg_36999.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp77_fu_27193_p2.read()) + sc_biguint<11>(co173_cast186_cast_reg_36999.read()));
}

void ShuffleNetV2::thread_tmp_796_fu_27214_p2() {
    tmp_796_fu_27214_p2 = (!p_shl237_cast1_fu_27175_p1.read().is_01() || !p_shl238_cast_fu_27210_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl237_cast1_fu_27175_p1.read()) - sc_biguint<8>(p_shl238_cast_fu_27210_p1.read()));
}

void ShuffleNetV2::thread_tmp_797_fu_27220_p2() {
    tmp_797_fu_27220_p2 = (!tmp_796_fu_27214_p2.read().is_01() || !tmp_1040_cast_reg_37017.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_796_fu_27214_p2.read()) + sc_biguint<8>(tmp_1040_cast_reg_37017.read()));
}

void ShuffleNetV2::thread_tmp_798_fu_27547_p2() {
    tmp_798_fu_27547_p2 = (!co176_cast_fu_27531_p1.read().is_01() || !ap_const_lv8_60.is_01())? sc_lv<8>(): (sc_biguint<8>(co176_cast_fu_27531_p1.read()) + sc_biguint<8>(ap_const_lv8_60));
}

void ShuffleNetV2::thread_tmp_799_cast_fu_27466_p1() {
    tmp_799_cast_fu_27466_p1 = esl_zext<12,3>(h_121_fu_27460_p2.read());
}

void ShuffleNetV2::thread_tmp_799_fu_9551_p2() {
    tmp_799_fu_9551_p2 = (!tmp_760_reg_31354.read().is_01() || !tmp_220_cast_fu_9547_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_760_reg_31354.read()) + sc_biguint<15>(tmp_220_cast_fu_9547_p1.read()));
}

void ShuffleNetV2::thread_tmp_800_fu_27784_p2() {
    tmp_800_fu_27784_p2 = (!p_shl239_cast_fu_27770_p1.read().is_01() || !p_shl240_cast_fu_27780_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl239_cast_fu_27770_p1.read()) - sc_biguint<8>(p_shl240_cast_fu_27780_p1.read()));
}

void ShuffleNetV2::thread_tmp_801_cast1_fu_27633_p1() {
    tmp_801_cast1_fu_27633_p1 = esl_zext<12,3>(h_123_fu_27627_p2.read());
}

void ShuffleNetV2::thread_tmp_801_cast_fu_27637_p1() {
    tmp_801_cast_fu_27637_p1 = esl_zext<13,3>(h_123_fu_27627_p2.read());
}

void ShuffleNetV2::thread_tmp_801_fu_9870_p2() {
    tmp_801_fu_9870_p2 = (!tmp_1079_cast_reg_31439.read().is_01() || !tmp_224_cast_fu_9866_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(tmp_1079_cast_reg_31439.read()) + sc_biguint<15>(tmp_224_cast_fu_9866_p1.read()));
}

void ShuffleNetV2::thread_tmp_802_cast_fu_27517_p1() {
    tmp_802_cast_fu_27517_p1 = esl_zext<14,3>(w_120_fu_27511_p2.read());
}

void ShuffleNetV2::thread_tmp_802_fu_9880_p2() {
    tmp_802_fu_9880_p2 = (!tmp_781_reg_31444.read().is_01() || !tmp_224_cast1_fu_9862_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_781_reg_31444.read()) + sc_biguint<11>(tmp_224_cast1_fu_9862_p1.read()));
}

void ShuffleNetV2::thread_tmp_803_cast_fu_27820_p1() {
    tmp_803_cast_fu_27820_p1 = esl_zext<19,5>(ci74_reg_6864.read());
}

void ShuffleNetV2::thread_tmp_803_fu_9745_p2() {
    tmp_803_fu_9745_p2 = (!tmp_786_reg_31403.read().is_01() || !tmp_225_cast2_fu_9741_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_786_reg_31403.read()) + sc_biguint<14>(tmp_225_cast2_fu_9741_p1.read()));
}

void ShuffleNetV2::thread_tmp_804_fu_27824_p2() {
    tmp_804_fu_27824_p2 = (!tmp_800_reg_37216.read().is_01() || !ci74_cast_fu_27804_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_800_reg_37216.read()) + sc_biguint<8>(ci74_cast_fu_27804_p1.read()));
}

void ShuffleNetV2::thread_tmp_805_cast_fu_21802_p1() {
    tmp_805_cast_fu_21802_p1 = esl_zext<7,4>(p_lshr_f15_cast_fu_21792_p4.read());
}

void ShuffleNetV2::thread_tmp_805_fu_9750_p2() {
    tmp_805_fu_9750_p2 = (!tmp_791_reg_31408.read().is_01() || !tmp_225_cast1_fu_9737_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_791_reg_31408.read()) + sc_biguint<15>(tmp_225_cast1_fu_9737_p1.read()));
}

void ShuffleNetV2::thread_tmp_806_cast_fu_27829_p1() {
    tmp_806_cast_fu_27829_p1 = esl_sext<15,8>(tmp_804_fu_27824_p2.read());
}

void ShuffleNetV2::thread_tmp_806_fu_9951_p3() {
    tmp_806_fu_9951_p3 = esl_concat<7,2>(tmp_226_fu_9941_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_807_cast1_fu_27715_p1() {
    tmp_807_cast1_fu_27715_p1 = esl_zext<13,3>(w_122_fu_27709_p2.read());
}

void ShuffleNetV2::thread_tmp_807_cast_fu_27719_p1() {
    tmp_807_cast_fu_27719_p1 = esl_zext<14,3>(w_122_fu_27709_p2.read());
}

void ShuffleNetV2::thread_tmp_807_fu_9963_p2() {
    tmp_807_fu_9963_p2 = (!p_shl332_cast_fu_9959_p1.read().is_01() || !tmp_227_cast_fu_9947_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl332_cast_fu_9959_p1.read()) - sc_biguint<10>(tmp_227_cast_fu_9947_p1.read()));
}

void ShuffleNetV2::thread_tmp_808_cast_fu_8251_p1() {
    tmp_808_cast_fu_8251_p1 = esl_sext<13,12>(tmp_540_fu_8245_p2.read());
}

void ShuffleNetV2::thread_tmp_808_fu_9973_p3() {
    tmp_808_fu_9973_p3 = esl_concat<5,2>(co41_reg_3757.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_809_cast_fu_22082_p1() {
    tmp_809_cast_fu_22082_p1 = esl_sext<11,7>(tmp_591_fu_22076_p2.read());
}

void ShuffleNetV2::thread_tmp_809_fu_28052_p2() {
    tmp_809_fu_28052_p2 = (!p_shl241_cast_fu_28036_p1.read().is_01() || !p_shl242_cast_fu_28048_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl241_cast_fu_28036_p1.read()) - sc_biguint<8>(p_shl242_cast_fu_28048_p1.read()));
}

void ShuffleNetV2::thread_tmp_810_fu_28068_p2() {
    tmp_810_fu_28068_p2 = (!i173_cast1_reg_37273.read().is_01() || !tmp80_fu_28062_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(i173_cast1_reg_37273.read()) + sc_biguint<12>(tmp80_fu_28062_p2.read()));
}

void ShuffleNetV2::thread_tmp_811_fu_28078_p1() {
    tmp_811_fu_28078_p1 = esl_zext<64,12>(tmp_810_reg_37294.read());
}

void ShuffleNetV2::thread_tmp_812_fu_28073_p2() {
    tmp_812_fu_28073_p2 = (!tmp_809_fu_28052_p2.read().is_01() || !i173_cast_reg_37268.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_809_fu_28052_p2.read()) + sc_biguint<8>(i173_cast_reg_37268.read()));
}

void ShuffleNetV2::thread_tmp_813_cast_fu_22106_p1() {
    tmp_813_cast_fu_22106_p1 = esl_sext<32,7>(tmp_594_reg_35351.read());
}

void ShuffleNetV2::thread_tmp_813_fu_28085_p1() {
    tmp_813_fu_28085_p1 = esl_zext<64,32>(tmp_1078_cast_fu_28082_p1.read());
}

void ShuffleNetV2::thread_tmp_814_fu_27877_p2() {
    tmp_814_fu_27877_p2 = (!p_shl243_cast_fu_27857_p1.read().is_01() || !p_shl244_cast_fu_27873_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl243_cast_fu_27857_p1.read()) - sc_biguint<10>(p_shl244_cast_fu_27873_p1.read()));
}

void ShuffleNetV2::thread_tmp_815_fu_27893_p2() {
    tmp_815_fu_27893_p2 = (!tmp79_fu_27887_p2.read().is_01() || !co178_cast_reg_37203.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp79_fu_27887_p2.read()) + sc_biguint<13>(co178_cast_reg_37203.read()));
}

void ShuffleNetV2::thread_tmp_816_fu_27908_p2() {
    tmp_816_fu_27908_p2 = (!p_shl244_cast1_fu_27869_p1.read().is_01() || !p_shl245_cast_fu_27904_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl244_cast1_fu_27869_p1.read()) - sc_biguint<8>(p_shl245_cast_fu_27904_p1.read()));
}

void ShuffleNetV2::thread_tmp_817_fu_27914_p2() {
    tmp_817_fu_27914_p2 = (!tmp_816_fu_27908_p2.read().is_01() || !tmp_1070_cast_reg_37221.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_816_fu_27908_p2.read()) + sc_biguint<8>(tmp_1070_cast_reg_37221.read()));
}

void ShuffleNetV2::thread_tmp_818_cast1_fu_28122_p1() {
    tmp_818_cast1_fu_28122_p1 = esl_zext<36,2>(w123_reg_6919.read());
}

void ShuffleNetV2::thread_tmp_818_cast_fu_28126_p1() {
    tmp_818_cast_fu_28126_p1 = esl_zext<14,2>(w123_reg_6919.read());
}

void ShuffleNetV2::thread_tmp_818_fu_9985_p2() {
    tmp_818_fu_9985_p2 = (!p_shl331_cast_fu_9981_p1.read().is_01() || !tmp_228_cast_fu_9969_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl331_cast_fu_9981_p1.read()) - sc_biguint<8>(tmp_228_cast_fu_9969_p1.read()));
}

void ShuffleNetV2::thread_tmp_819_fu_28490_p2() {
    tmp_819_fu_28490_p2 = (!p_shl248_cast_fu_28476_p1.read().is_01() || !p_shl249_cast_fu_28486_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl248_cast_fu_28476_p1.read()) - sc_biguint<8>(p_shl249_cast_fu_28486_p1.read()));
}

void ShuffleNetV2::thread_tmp_820_cast_cast_fu_21881_p1() {
    tmp_820_cast_cast_fu_21881_p1 = esl_sext<10,8>(tmp_596_fu_21875_p2.read());
}

void ShuffleNetV2::thread_tmp_820_fu_28410_p2() {
    tmp_820_fu_28410_p2 = (!p_shl246_cast_fu_28394_p1.read().is_01() || !p_shl247_cast_fu_28406_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl246_cast_fu_28394_p1.read()) - sc_biguint<8>(p_shl247_cast_fu_28406_p1.read()));
}

void ShuffleNetV2::thread_tmp_821_fu_28426_p2() {
    tmp_821_fu_28426_p2 = (!i177_cast1_reg_37413.read().is_01() || !tmp82_fu_28420_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(i177_cast1_reg_37413.read()) + sc_biguint<12>(tmp82_fu_28420_p2.read()));
}

void ShuffleNetV2::thread_tmp_822_fu_28436_p1() {
    tmp_822_fu_28436_p1 = esl_zext<64,12>(tmp_821_reg_37434.read());
}

void ShuffleNetV2::thread_tmp_823_fu_28431_p2() {
    tmp_823_fu_28431_p2 = (!tmp_820_fu_28410_p2.read().is_01() || !i177_cast_reg_37408.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_820_fu_28410_p2.read()) + sc_biguint<8>(i177_cast_reg_37408.read()));
}

void ShuffleNetV2::thread_tmp_824_fu_28443_p1() {
    tmp_824_fu_28443_p1 = esl_zext<64,32>(tmp_1096_cast_fu_28440_p1.read());
}

void ShuffleNetV2::thread_tmp_825_cast1_fu_28142_p1() {
    tmp_825_cast1_fu_28142_p1 = esl_zext<11,2>(h124_reg_6930.read());
}

void ShuffleNetV2::thread_tmp_825_cast_fu_28146_p1() {
    tmp_825_cast_fu_28146_p1 = esl_zext<15,2>(h124_reg_6930.read());
}

void ShuffleNetV2::thread_tmp_825_fu_10015_p2() {
    tmp_825_fu_10015_p2 = (!tmp_807_reg_31488.read().is_01() || !tmp_232_cast_fu_10011_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_807_reg_31488.read()) + sc_biguint<10>(tmp_232_cast_fu_10011_p1.read()));
}

void ShuffleNetV2::thread_tmp_826_cast_fu_28526_p1() {
    tmp_826_cast_fu_28526_p1 = esl_zext<19,5>(ci76_reg_6985.read());
}

void ShuffleNetV2::thread_tmp_826_fu_10036_p2() {
    tmp_826_fu_10036_p2 = (!p_shl334_cast_fu_10032_p1.read().is_01() || !tmp_1100_cast1_fu_10020_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_shl334_cast_fu_10032_p1.read()) - sc_bigint<15>(tmp_1100_cast1_fu_10020_p1.read()));
}

void ShuffleNetV2::thread_tmp_827_cast_fu_22432_p1() {
    tmp_827_cast_fu_22432_p1 = esl_sext<11,7>(tmp_602_fu_22426_p2.read());
}

void ShuffleNetV2::thread_tmp_827_fu_28530_p2() {
    tmp_827_fu_28530_p2 = (!tmp_819_reg_37462.read().is_01() || !ci76_cast_fu_28510_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_819_reg_37462.read()) + sc_biguint<8>(ci76_cast_fu_28510_p1.read()));
}

void ShuffleNetV2::thread_tmp_828_cast_fu_28535_p1() {
    tmp_828_cast_fu_28535_p1 = esl_sext<15,8>(tmp_827_fu_28530_p2.read());
}

void ShuffleNetV2::thread_tmp_828_fu_10042_p2() {
    tmp_828_fu_10042_p2 = (!tmp_1099_cast_reg_31493.read().is_01() || !tmp_232_cast1_fu_10007_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_1099_cast_reg_31493.read()) + sc_biguint<9>(tmp_232_cast1_fu_10007_p1.read()));
}

void ShuffleNetV2::thread_tmp_829_fu_28190_p2() {
    tmp_829_fu_28190_p2 = (!p_shl252_cast_fu_28174_p1.read().is_01() || !p_shl253_cast_fu_28186_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl252_cast_fu_28174_p1.read()) - sc_biguint<8>(p_shl253_cast_fu_28186_p1.read()));
}

void ShuffleNetV2::thread_tmp_830_fu_28206_p2() {
    tmp_830_fu_28206_p2 = (!co181_cast157_cast_reg_37314.read().is_01() || !tmp81_fu_28200_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(co181_cast157_cast_reg_37314.read()) + sc_biguint<9>(tmp81_fu_28200_p2.read()));
}

void ShuffleNetV2::thread_tmp_831_cast1_fu_28219_p1() {
    tmp_831_cast1_fu_28219_p1 = esl_zext<13,10>(tmp_1113_cast_fu_28216_p1.read());
}

void ShuffleNetV2::thread_tmp_831_cast_fu_22456_p1() {
    tmp_831_cast_fu_22456_p1 = esl_sext<32,7>(tmp_605_reg_35491.read());
}

void ShuffleNetV2::thread_tmp_831_fu_10053_p2() {
    tmp_831_fu_10053_p2 = (!tmp_413_fu_10047_p2.read().is_01() || !tmp_828_fu_10042_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_413_fu_10047_p2.read()) - sc_biguint<9>(tmp_828_fu_10042_p2.read()));
}

void ShuffleNetV2::thread_tmp_832_fu_10152_p3() {
    tmp_832_fu_10152_p3 = esl_concat<8,5>(tmp_233_fu_10146_p2.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_833_fu_28211_p2() {
    tmp_833_fu_28211_p2 = (!tmp_829_fu_28190_p2.read().is_01() || !co181_cast_reg_37309.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_829_fu_28190_p2.read()) + sc_biguint<8>(co181_cast_reg_37309.read()));
}

void ShuffleNetV2::thread_tmp_834_cast_fu_28283_p1() {
    tmp_834_cast_fu_28283_p1 = esl_zext<35,32>(tmp_1115_cast_fu_28280_p1.read());
}

void ShuffleNetV2::thread_tmp_834_fu_10164_p3() {
    tmp_834_fu_10164_p3 = esl_concat<8,3>(tmp_233_fu_10146_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_835_cast_fu_22524_p1() {
    tmp_835_cast_fu_22524_p1 = esl_zext<7,4>(p_lshr_f16_cast_fu_22514_p4.read());
}

void ShuffleNetV2::thread_tmp_835_fu_10176_p2() {
    tmp_835_fu_10176_p2 = (!p_shl337_cast_fu_10160_p1.read().is_01() || !p_shl338_cast_fu_10172_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl337_cast_fu_10160_p1.read()) - sc_biguint<14>(p_shl338_cast_fu_10172_p1.read()));
}

void ShuffleNetV2::thread_tmp_836_fu_28758_p2() {
    tmp_836_fu_28758_p2 = (!p_shl250_cast_fu_28742_p1.read().is_01() || !p_shl251_cast_fu_28754_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl250_cast_fu_28742_p1.read()) - sc_biguint<8>(p_shl251_cast_fu_28754_p1.read()));
}

void ShuffleNetV2::thread_tmp_837_cast_cast_fu_22804_p1() {
    tmp_837_cast_cast_fu_22804_p1 = esl_sext<10,7>(tmp_616_fu_22798_p2.read());
}

void ShuffleNetV2::thread_tmp_837_fu_28774_p2() {
    tmp_837_fu_28774_p2 = (!i179_cast1_reg_37519.read().is_01() || !tmp84_fu_28768_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(i179_cast1_reg_37519.read()) + sc_biguint<12>(tmp84_fu_28768_p2.read()));
}

void ShuffleNetV2::thread_tmp_838_fu_28784_p1() {
    tmp_838_fu_28784_p1 = esl_zext<64,12>(tmp_837_reg_37540.read());
}

void ShuffleNetV2::thread_tmp_839_cast_fu_22824_p1() {
    tmp_839_cast_fu_22824_p1 = esl_sext<11,10>(tmp_617_reg_35592.read());
}

void ShuffleNetV2::thread_tmp_839_fu_28779_p2() {
    tmp_839_fu_28779_p2 = (!tmp_836_fu_28758_p2.read().is_01() || !i179_cast_reg_37514.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_836_fu_28758_p2.read()) + sc_biguint<8>(i179_cast_reg_37514.read()));
}

void ShuffleNetV2::thread_tmp_840_fu_28791_p1() {
    tmp_840_fu_28791_p1 = esl_zext<64,32>(tmp_1106_cast_fu_28788_p1.read());
}

void ShuffleNetV2::thread_tmp_841_cast_fu_22832_p1() {
    tmp_841_cast_fu_22832_p1 = esl_sext<32,7>(tmp_619_reg_35597.read());
}

void ShuffleNetV2::thread_tmp_841_fu_28583_p2() {
    tmp_841_fu_28583_p2 = (!p_shl254_cast_fu_28563_p1.read().is_01() || !p_shl255_cast_fu_28579_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl254_cast_fu_28563_p1.read()) - sc_biguint<10>(p_shl255_cast_fu_28579_p1.read()));
}

void ShuffleNetV2::thread_tmp_842_fu_28599_p2() {
    tmp_842_fu_28599_p2 = (!tmp83_fu_28593_p2.read().is_01() || !co183_cast_reg_37449.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp83_fu_28593_p2.read()) + sc_biguint<13>(co183_cast_reg_37449.read()));
}

void ShuffleNetV2::thread_tmp_843_fu_28614_p2() {
    tmp_843_fu_28614_p2 = (!p_shl255_cast1_fu_28575_p1.read().is_01() || !p_shl256_cast_fu_28610_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl255_cast1_fu_28575_p1.read()) - sc_biguint<8>(p_shl256_cast_fu_28610_p1.read()));
}

void ShuffleNetV2::thread_tmp_844_fu_28620_p2() {
    tmp_844_fu_28620_p2 = (!tmp_843_fu_28614_p2.read().is_01() || !tmp_1100_cast_reg_37467.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_843_fu_28614_p2.read()) + sc_biguint<8>(tmp_1100_cast_reg_37467.read()));
}

void ShuffleNetV2::thread_tmp_845_fu_28935_p2() {
    tmp_845_fu_28935_p2 = (!co186_cast_fu_28919_p1.read().is_01() || !ap_const_lv8_60.is_01())? sc_lv<8>(): (sc_biguint<8>(co186_cast_fu_28919_p1.read()) + sc_biguint<8>(ap_const_lv8_60));
}

void ShuffleNetV2::thread_tmp_846_cast1_fu_28854_p1() {
    tmp_846_cast1_fu_28854_p1 = esl_zext<12,3>(h_127_fu_28848_p2.read());
}

void ShuffleNetV2::thread_tmp_846_cast_fu_22220_p1() {
    tmp_846_cast_fu_22220_p1 = esl_sext<10,7>(tmp_611_fu_22214_p2.read());
}

void ShuffleNetV2::thread_tmp_846_fu_10186_p3() {
    tmp_846_fu_10186_p3 = esl_concat<5,5>(co45_reg_3802.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_847_fu_29172_p2() {
    tmp_847_fu_29172_p2 = (!p_shl257_cast_fu_29158_p1.read().is_01() || !p_shl258_cast_fu_29168_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl257_cast_fu_29158_p1.read()) - sc_biguint<8>(p_shl258_cast_fu_29168_p1.read()));
}

void ShuffleNetV2::thread_tmp_848_cast1_fu_29021_p1() {
    tmp_848_cast1_fu_29021_p1 = esl_zext<12,3>(h_129_fu_29015_p2.read());
}

void ShuffleNetV2::thread_tmp_848_cast_fu_29025_p1() {
    tmp_848_cast_fu_29025_p1 = esl_zext<13,3>(h_129_fu_29015_p2.read());
}

void ShuffleNetV2::thread_tmp_848_fu_10198_p3() {
    tmp_848_fu_10198_p3 = esl_concat<5,3>(co45_reg_3802.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_849_cast_fu_28905_p1() {
    tmp_849_cast_fu_28905_p1 = esl_zext<14,3>(w_126_fu_28899_p2.read());
}

void ShuffleNetV2::thread_tmp_849_fu_10210_p2() {
    tmp_849_fu_10210_p2 = (!p_shl335_cast_fu_10194_p1.read().is_01() || !p_shl336_cast_fu_10206_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl335_cast_fu_10194_p1.read()) - sc_biguint<11>(p_shl336_cast_fu_10206_p1.read()));
}

void ShuffleNetV2::thread_tmp_850_cast1_fu_29208_p1() {
    tmp_850_cast1_fu_29208_p1 = esl_zext<19,5>(ci78_reg_7106.read());
}

void ShuffleNetV2::thread_tmp_850_cast_fu_22296_p1() {
    tmp_850_cast_fu_22296_p1 = esl_sext<32,7>(tmp_614_reg_35429.read());
}

void ShuffleNetV2::thread_tmp_850_fu_10079_p2() {
    tmp_850_fu_10079_p2 = (!tmp_826_reg_31506.read().is_01() || !tmp_234_cast_fu_10075_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_826_reg_31506.read()) + sc_biguint<15>(tmp_234_cast_fu_10075_p1.read()));
}

void ShuffleNetV2::thread_tmp_851_fu_29212_p2() {
    tmp_851_fu_29212_p2 = (!tmp_847_reg_37666.read().is_01() || !ci78_cast_fu_29192_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_847_reg_37666.read()) + sc_biguint<8>(ci78_cast_fu_29192_p1.read()));
}

void ShuffleNetV2::thread_tmp_852_cast_fu_29217_p1() {
    tmp_852_cast_fu_29217_p1 = esl_sext<15,8>(tmp_851_fu_29212_p2.read());
}

void ShuffleNetV2::thread_tmp_852_fu_10089_p2() {
    tmp_852_fu_10089_p2 = (!tmp_831_reg_31511.read().is_01() || !tmp_234_cast1_fu_10071_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_831_reg_31511.read()) + sc_biguint<9>(tmp_234_cast1_fu_10071_p1.read()));
}

void ShuffleNetV2::thread_tmp_853_cast_cast_fu_22603_p1() {
    tmp_853_cast_cast_fu_22603_p1 = esl_sext<10,8>(tmp_621_fu_22597_p2.read());
}

void ShuffleNetV2::thread_tmp_853_fu_10236_p2() {
    tmp_853_fu_10236_p2 = (!tmp_1108_cast_reg_31555.read().is_01() || !tmp_238_cast_fu_10232_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(tmp_1108_cast_reg_31555.read()) + sc_biguint<15>(tmp_238_cast_fu_10232_p1.read()));
}

void ShuffleNetV2::thread_tmp_854_cast_fu_8162_p1() {
    tmp_854_cast_fu_8162_p1 = esl_zext<64,15>(tmp_546_fu_8157_p2.read());
}

void ShuffleNetV2::thread_tmp_854_fu_10246_p2() {
    tmp_854_fu_10246_p2 = (!tmp_849_reg_31560.read().is_01() || !tmp_238_cast1_fu_10228_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_849_reg_31560.read()) + sc_biguint<11>(tmp_238_cast1_fu_10228_p1.read()));
}

void ShuffleNetV2::thread_tmp_855_cast1_fu_29103_p1() {
    tmp_855_cast1_fu_29103_p1 = esl_zext<13,3>(w_128_fu_29097_p2.read());
}

void ShuffleNetV2::thread_tmp_855_cast_fu_29107_p1() {
    tmp_855_cast_fu_29107_p1 = esl_zext<14,3>(w_128_fu_29097_p2.read());
}

void ShuffleNetV2::thread_tmp_855_fu_10299_p3() {
    tmp_855_fu_10299_p3 = esl_concat<5,4>(co48_reg_3836.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_856_fu_29440_p2() {
    tmp_856_fu_29440_p2 = (!p_shl259_cast_fu_29424_p1.read().is_01() || !p_shl260_cast_fu_29436_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl259_cast_fu_29424_p1.read()) - sc_biguint<8>(p_shl260_cast_fu_29436_p1.read()));
}

void ShuffleNetV2::thread_tmp_857_fu_29456_p2() {
    tmp_857_fu_29456_p2 = (!i185_cast1_reg_37723.read().is_01() || !tmp86_fu_29450_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(i185_cast1_reg_37723.read()) + sc_biguint<12>(tmp86_fu_29450_p2.read()));
}

void ShuffleNetV2::thread_tmp_858_fu_29466_p1() {
    tmp_858_fu_29466_p1 = esl_zext<64,12>(tmp_857_reg_37744.read());
}

void ShuffleNetV2::thread_tmp_859_fu_29461_p2() {
    tmp_859_fu_29461_p2 = (!tmp_856_fu_29440_p2.read().is_01() || !i185_cast_reg_37718.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_856_fu_29440_p2.read()) + sc_biguint<8>(i185_cast_reg_37718.read()));
}

void ShuffleNetV2::thread_tmp_860_fu_29473_p1() {
    tmp_860_fu_29473_p1 = esl_zext<64,32>(tmp_1138_cast_fu_29470_p1.read());
}

void ShuffleNetV2::thread_tmp_861_fu_29265_p2() {
    tmp_861_fu_29265_p2 = (!p_shl261_cast_fu_29245_p1.read().is_01() || !p_shl262_cast_fu_29261_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl261_cast_fu_29245_p1.read()) - sc_biguint<10>(p_shl262_cast_fu_29261_p1.read()));
}

void ShuffleNetV2::thread_tmp_862_cast_fu_8310_p1() {
    tmp_862_cast_fu_8310_p1 = esl_sext<64,13>(tmp_547_fu_8305_p2.read());
}

void ShuffleNetV2::thread_tmp_862_fu_10311_p3() {
    tmp_862_fu_10311_p3 = esl_concat<5,1>(co48_reg_3836.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_863_fu_29281_p2() {
    tmp_863_fu_29281_p2 = (!tmp85_fu_29275_p2.read().is_01() || !co188_cast_reg_37653.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp85_fu_29275_p2.read()) + sc_biguint<13>(co188_cast_reg_37653.read()));
}

void ShuffleNetV2::thread_tmp_864_fu_29296_p2() {
    tmp_864_fu_29296_p2 = (!p_shl262_cast1_fu_29257_p1.read().is_01() || !p_shl263_cast_fu_29292_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl262_cast1_fu_29257_p1.read()) - sc_biguint<8>(p_shl263_cast_fu_29292_p1.read()));
}

void ShuffleNetV2::thread_tmp_865_cast1_fu_8320_p1() {
    tmp_865_cast1_fu_8320_p1 = esl_sext<64,11>(tmp_557_reg_30980.read());
}

void ShuffleNetV2::thread_tmp_865_cast_fu_23230_p1() {
    tmp_865_cast_fu_23230_p1 = esl_zext<7,4>(p_lshr_f17_cast_fu_23220_p4.read());
}

void ShuffleNetV2::thread_tmp_865_fu_10323_p2() {
    tmp_865_fu_10323_p2 = (!p_shl340_cast_fu_10319_p1.read().is_01() || !p_shl339_cast_fu_10307_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl340_cast_fu_10319_p1.read()) + sc_biguint<10>(p_shl339_cast_fu_10307_p1.read()));
}

void ShuffleNetV2::thread_tmp_866_fu_29302_p2() {
    tmp_866_fu_29302_p2 = (!tmp_864_fu_29296_p2.read().is_01() || !tmp_1130_cast_reg_37671.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_864_fu_29296_p2.read()) + sc_biguint<8>(tmp_1130_cast_reg_37671.read()));
}

void ShuffleNetV2::thread_tmp_867_cast1_fu_29510_p1() {
    tmp_867_cast1_fu_29510_p1 = esl_zext<36,2>(w129_reg_7161.read());
}

void ShuffleNetV2::thread_tmp_867_cast_fu_29514_p1() {
    tmp_867_cast_fu_29514_p1 = esl_zext<15,2>(w129_reg_7161.read());
}

void ShuffleNetV2::thread_tmp_867_fu_10428_p3() {
    tmp_867_fu_10428_p3 = esl_concat<6,4>(tmp_239_fu_10422_p2.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_868_fu_29860_p2() {
    tmp_868_fu_29860_p2 = (!p_shl266_cast_fu_29846_p1.read().is_01() || !p_shl267_cast_fu_29856_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl266_cast_fu_29846_p1.read()) - sc_biguint<8>(p_shl267_cast_fu_29856_p1.read()));
}

void ShuffleNetV2::thread_tmp_869_cast_cast_fu_23510_p1() {
    tmp_869_cast_cast_fu_23510_p1 = esl_sext<10,7>(tmp_635_fu_23504_p2.read());
}

void ShuffleNetV2::thread_tmp_869_fu_29780_p2() {
    tmp_869_fu_29780_p2 = (!p_shl264_cast_fu_29764_p1.read().is_01() || !p_shl265_cast_fu_29776_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl264_cast_fu_29764_p1.read()) - sc_biguint<8>(p_shl265_cast_fu_29776_p1.read()));
}

void ShuffleNetV2::thread_tmp_870_fu_29796_p2() {
    tmp_870_fu_29796_p2 = (!i189_cast1_reg_37863.read().is_01() || !tmp88_fu_29790_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(i189_cast1_reg_37863.read()) + sc_biguint<12>(tmp88_fu_29790_p2.read()));
}

void ShuffleNetV2::thread_tmp_871_cast_fu_23530_p1() {
    tmp_871_cast_fu_23530_p1 = esl_sext<11,10>(tmp_636_reg_35796.read());
}

void ShuffleNetV2::thread_tmp_871_fu_29806_p1() {
    tmp_871_fu_29806_p1 = esl_zext<64,12>(tmp_870_reg_37884.read());
}

void ShuffleNetV2::thread_tmp_872_fu_29801_p2() {
    tmp_872_fu_29801_p2 = (!tmp_869_fu_29780_p2.read().is_01() || !i189_cast_reg_37858.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_869_fu_29780_p2.read()) + sc_biguint<8>(i189_cast_reg_37858.read()));
}

void ShuffleNetV2::thread_tmp_873_cast_fu_23538_p1() {
    tmp_873_cast_fu_23538_p1 = esl_sext<32,7>(tmp_639_reg_35801.read());
}

void ShuffleNetV2::thread_tmp_873_fu_29813_p1() {
    tmp_873_fu_29813_p1 = esl_zext<64,32>(tmp_1156_cast_fu_29810_p1.read());
}

void ShuffleNetV2::thread_tmp_874_cast1_fu_29530_p1() {
    tmp_874_cast1_fu_29530_p1 = esl_zext<11,2>(h130_reg_7172.read());
}

void ShuffleNetV2::thread_tmp_874_cast_fu_29534_p1() {
    tmp_874_cast_fu_29534_p1 = esl_zext<15,2>(h130_reg_7172.read());
}

void ShuffleNetV2::thread_tmp_874_fu_10440_p3() {
    tmp_874_fu_10440_p3 = esl_concat<6,1>(tmp_239_fu_10422_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_875_cast_fu_29896_p1() {
    tmp_875_cast_fu_29896_p1 = esl_zext<19,5>(ci80_reg_7227.read());
}

void ShuffleNetV2::thread_tmp_875_fu_10452_p2() {
    tmp_875_fu_10452_p2 = (!p_shl346_cast_fu_10448_p1.read().is_01() || !p_shl345_cast_fu_10436_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl346_cast_fu_10448_p1.read()) + sc_biguint<11>(p_shl345_cast_fu_10436_p1.read()));
}

void ShuffleNetV2::thread_tmp_876_fu_29900_p2() {
    tmp_876_fu_29900_p2 = (!tmp_868_reg_37912.read().is_01() || !ci80_cast_fu_29880_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_868_reg_37912.read()) + sc_biguint<8>(ci80_cast_fu_29880_p1.read()));
}

void ShuffleNetV2::thread_tmp_877_cast_fu_29905_p1() {
    tmp_877_cast_fu_29905_p1 = esl_sext<15,8>(tmp_876_fu_29900_p2.read());
}

void ShuffleNetV2::thread_tmp_877_fu_10458_p3() {
    tmp_877_fu_10458_p3 = esl_concat<5,4>(co51_reg_3869.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_878_fu_29578_p2() {
    tmp_878_fu_29578_p2 = (!p_shl270_cast_fu_29562_p1.read().is_01() || !p_shl271_cast_fu_29574_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl270_cast_fu_29562_p1.read()) - sc_biguint<8>(p_shl271_cast_fu_29574_p1.read()));
}

void ShuffleNetV2::thread_tmp_879_fu_10470_p3() {
    tmp_879_fu_10470_p3 = esl_concat<5,1>(co51_reg_3869.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_880_cast_cast_fu_23309_p1() {
    tmp_880_cast_cast_fu_23309_p1 = esl_sext<9,8>(tmp_642_fu_23303_p2.read());
}

void ShuffleNetV2::thread_tmp_880_fu_29594_p2() {
    tmp_880_fu_29594_p2 = (!co191_cast1_reg_37764.read().is_01() || !tmp87_fu_29588_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(co191_cast1_reg_37764.read()) + sc_biguint<11>(tmp87_fu_29588_p2.read()));
}

void ShuffleNetV2::thread_tmp_881_cast_fu_29604_p1() {
    tmp_881_cast_fu_29604_p1 = esl_zext<14,11>(tmp_880_reg_37821.read());
}

void ShuffleNetV2::thread_tmp_881_fu_10482_p2() {
    tmp_881_fu_10482_p2 = (!p_shl344_cast_fu_10478_p1.read().is_01() || !p_shl343_cast_fu_10466_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl344_cast_fu_10478_p1.read()) + sc_biguint<10>(p_shl343_cast_fu_10466_p1.read()));
}

void ShuffleNetV2::thread_tmp_882_fu_10345_p2() {
    tmp_882_fu_10345_p2 = (!tmp_240_cast_fu_10341_p1.read().is_01() || !tmp_865_reg_31604.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_240_cast_fu_10341_p1.read()) + sc_biguint<10>(tmp_865_reg_31604.read()));
}

void ShuffleNetV2::thread_tmp_883_fu_29599_p2() {
    tmp_883_fu_29599_p2 = (!tmp_878_fu_29578_p2.read().is_01() || !co191_cast_reg_37759.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_878_fu_29578_p2.read()) + sc_biguint<8>(co191_cast_reg_37759.read()));
}

void ShuffleNetV2::thread_tmp_884_cast_fu_29653_p1() {
    tmp_884_cast_fu_29653_p1 = esl_zext<35,32>(tmp_1175_cast_fu_29650_p1.read());
}

void ShuffleNetV2::thread_tmp_884_fu_10374_p2() {
    tmp_884_fu_10374_p2 = (!p_shl341_cast_fu_10358_p1.read().is_01() || !p_shl342_cast_fu_10370_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl341_cast_fu_10358_p1.read()) + sc_biguint<15>(p_shl342_cast_fu_10370_p1.read()));
}

void ShuffleNetV2::thread_tmp_885_fu_30128_p2() {
    tmp_885_fu_30128_p2 = (!p_shl268_cast_fu_30112_p1.read().is_01() || !p_shl269_cast_fu_30124_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl268_cast_fu_30112_p1.read()) - sc_biguint<8>(p_shl269_cast_fu_30124_p1.read()));
}

void ShuffleNetV2::thread_tmp_886_fu_30144_p2() {
    tmp_886_fu_30144_p2 = (!i191_cast1_reg_37969.read().is_01() || !tmp90_fu_30138_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(i191_cast1_reg_37969.read()) + sc_biguint<12>(tmp90_fu_30138_p2.read()));
}

void ShuffleNetV2::thread_tmp_887_cast_cast_fu_23856_p1() {
    tmp_887_cast_cast_fu_23856_p1 = esl_sext<10,7>(tmp_650_fu_23850_p2.read());
}

void ShuffleNetV2::thread_tmp_887_fu_30154_p1() {
    tmp_887_fu_30154_p1 = esl_zext<64,12>(tmp_886_reg_37990.read());
}

void ShuffleNetV2::thread_tmp_888_fu_30149_p2() {
    tmp_888_fu_30149_p2 = (!tmp_885_fu_30128_p2.read().is_01() || !i191_cast_reg_37964.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_885_fu_30128_p2.read()) + sc_biguint<8>(i191_cast_reg_37964.read()));
}

void ShuffleNetV2::thread_tmp_889_cast_fu_23876_p1() {
    tmp_889_cast_fu_23876_p1 = esl_sext<11,10>(tmp_651_reg_35936.read());
}

void ShuffleNetV2::thread_tmp_889_fu_30161_p1() {
    tmp_889_fu_30161_p1 = esl_zext<64,32>(tmp_1166_cast_fu_30158_p1.read());
}

void ShuffleNetV2::thread_tmp_890_fu_29953_p2() {
    tmp_890_fu_29953_p2 = (!p_shl272_cast_fu_29933_p1.read().is_01() || !p_shl273_cast_fu_29949_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl272_cast_fu_29933_p1.read()) - sc_biguint<10>(p_shl273_cast_fu_29949_p1.read()));
}

void ShuffleNetV2::thread_tmp_891_cast_fu_23884_p1() {
    tmp_891_cast_fu_23884_p1 = esl_sext<32,7>(tmp_653_reg_35941.read());
}

void ShuffleNetV2::thread_tmp_891_fu_29969_p2() {
    tmp_891_fu_29969_p2 = (!tmp89_fu_29963_p2.read().is_01() || !co193_cast_reg_37899.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp89_fu_29963_p2.read()) + sc_biguint<13>(co193_cast_reg_37899.read()));
}

void ShuffleNetV2::thread_tmp_892_fu_29984_p2() {
    tmp_892_fu_29984_p2 = (!p_shl273_cast1_fu_29945_p1.read().is_01() || !p_shl274_cast_fu_29980_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl273_cast1_fu_29945_p1.read()) - sc_biguint<8>(p_shl274_cast_fu_29980_p1.read()));
}

void ShuffleNetV2::thread_tmp_893_fu_29990_p2() {
    tmp_893_fu_29990_p2 = (!tmp_892_fu_29984_p2.read().is_01() || !tmp_1160_cast_reg_37917.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_892_fu_29984_p2.read()) + sc_biguint<8>(tmp_1160_cast_reg_37917.read()));
}

}

