#include "subconv_1x1_4_p.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void subconv_1x1_4_p::thread_tmp_27_fu_6822_p2() {
    tmp_27_fu_6822_p2 = (!buffer1_1_96_4x4_p_V_24_q0.read().is_01() || !tmp_329_fu_6818_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(buffer1_1_96_4x4_p_V_24_q0.read()) + sc_biguint<8>(tmp_329_fu_6818_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_280_fu_5938_p1() {
    tmp_280_fu_5938_p1 = grp_MUL_DP_fu_5030_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_281_fu_5949_p1() {
    tmp_281_fu_5949_p1 = grp_MUL_DP_fu_5030_ap_return_1.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_282_cast_fu_5709_p1() {
    tmp_282_cast_fu_5709_p1 = esl_sext<12,11>(tmp_230_fu_5703_p2.read());
}

void subconv_1x1_4_p::thread_tmp_282_fu_5968_p1() {
    tmp_282_fu_5968_p1 = grp_MUL_DP_fu_5039_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_283_fu_5979_p1() {
    tmp_283_fu_5979_p1 = grp_MUL_DP_fu_5039_ap_return_1.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_284_fu_5998_p1() {
    tmp_284_fu_5998_p1 = grp_MUL_DP_fu_5048_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_285_fu_6009_p1() {
    tmp_285_fu_6009_p1 = grp_MUL_DP_fu_5048_ap_return_1.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_286_fu_6028_p1() {
    tmp_286_fu_6028_p1 = grp_MUL_DP_fu_5057_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_287_cast_fu_5749_p1() {
    tmp_287_cast_fu_5749_p1 = esl_zext<32,13>(tmp_233_fu_5744_p2.read());
}

void subconv_1x1_4_p::thread_tmp_287_fu_6039_p1() {
    tmp_287_fu_6039_p1 = grp_MUL_DP_fu_5057_ap_return_1.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_288_fu_6058_p1() {
    tmp_288_fu_6058_p1 = grp_MUL_DP_fu_5066_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_289_cast_fu_5764_p1() {
    tmp_289_cast_fu_5764_p1 = esl_zext<32,7>(tmp_235_fu_5759_p2.read());
}

void subconv_1x1_4_p::thread_tmp_289_fu_6069_p1() {
    tmp_289_fu_6069_p1 = grp_MUL_DP_fu_5066_ap_return_1.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_290_fu_6088_p1() {
    tmp_290_fu_6088_p1 = grp_MUL_DP_fu_5075_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_291_fu_6099_p1() {
    tmp_291_fu_6099_p1 = grp_MUL_DP_fu_5075_ap_return_1.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_292_fu_6118_p1() {
    tmp_292_fu_6118_p1 = grp_MUL_DP_fu_5084_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_293_fu_6129_p1() {
    tmp_293_fu_6129_p1 = grp_MUL_DP_fu_5084_ap_return_1.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_294_cast_fu_7669_p1() {
    tmp_294_cast_fu_7669_p1 = esl_zext<32,7>(tmp_238_fu_7663_p2.read());
}

void subconv_1x1_4_p::thread_tmp_294_fu_6148_p1() {
    tmp_294_fu_6148_p1 = grp_MUL_DP_fu_5093_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_297_cast_fu_6709_p1() {
    tmp_297_cast_fu_6709_p1 = esl_sext<12,11>(tmp_241_fu_6703_p2.read());
}

void subconv_1x1_4_p::thread_tmp_299_fu_6159_p1() {
    tmp_299_fu_6159_p1 = grp_MUL_DP_fu_5093_ap_return_1.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_29_fu_6833_p2() {
    tmp_29_fu_6833_p2 = (!buffer1_1_96_4x4_p_V_72_q0.read().is_01() || !tmp_330_fu_6829_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(buffer1_1_96_4x4_p_V_72_q0.read()) + sc_biguint<8>(tmp_330_fu_6829_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_300_fu_6178_p1() {
    tmp_300_fu_6178_p1 = grp_MUL_DP_fu_5102_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_302_cast_fu_6749_p1() {
    tmp_302_cast_fu_6749_p1 = esl_zext<32,13>(tmp_244_fu_6744_p2.read());
}

void subconv_1x1_4_p::thread_tmp_304_cast_fu_6764_p1() {
    tmp_304_cast_fu_6764_p1 = esl_zext<32,7>(tmp_246_fu_6759_p2.read());
}

void subconv_1x1_4_p::thread_tmp_305_fu_6189_p1() {
    tmp_305_fu_6189_p1 = grp_MUL_DP_fu_5102_ap_return_1.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_306_fu_6208_p1() {
    tmp_306_fu_6208_p1 = grp_MUL_DP_fu_5111_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_307_fu_6219_p1() {
    tmp_307_fu_6219_p1 = grp_MUL_DP_fu_5111_ap_return_1.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_308_fu_6238_p1() {
    tmp_308_fu_6238_p1 = grp_MUL_DP_fu_5120_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_309_fu_6249_p1() {
    tmp_309_fu_6249_p1 = grp_MUL_DP_fu_5120_ap_return_1.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_310_fu_6268_p1() {
    tmp_310_fu_6268_p1 = grp_MUL_DP_fu_5129_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_311_fu_6279_p1() {
    tmp_311_fu_6279_p1 = grp_MUL_DP_fu_5129_ap_return_1.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_312_fu_6298_p1() {
    tmp_312_fu_6298_p1 = grp_MUL_DP_fu_5138_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_313_fu_6309_p1() {
    tmp_313_fu_6309_p1 = grp_MUL_DP_fu_5138_ap_return_1.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_314_fu_6328_p1() {
    tmp_314_fu_6328_p1 = grp_MUL_DP_fu_5147_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_315_fu_6339_p1() {
    tmp_315_fu_6339_p1 = grp_MUL_DP_fu_5147_ap_return_1.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_316_fu_6358_p1() {
    tmp_316_fu_6358_p1 = grp_MUL_DP_fu_5156_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_317_fu_6369_p1() {
    tmp_317_fu_6369_p1 = grp_MUL_DP_fu_5156_ap_return_1.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_318_fu_6388_p1() {
    tmp_318_fu_6388_p1 = grp_MUL_DP_fu_5165_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_319_fu_6399_p1() {
    tmp_319_fu_6399_p1 = grp_MUL_DP_fu_5165_ap_return_1.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_320_fu_6418_p1() {
    tmp_320_fu_6418_p1 = grp_MUL_DP_fu_5174_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_321_fu_6429_p1() {
    tmp_321_fu_6429_p1 = grp_MUL_DP_fu_5174_ap_return_1.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_322_fu_6448_p1() {
    tmp_322_fu_6448_p1 = grp_MUL_DP_fu_5183_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_323_fu_6459_p1() {
    tmp_323_fu_6459_p1 = grp_MUL_DP_fu_5183_ap_return_1.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_324_fu_6478_p1() {
    tmp_324_fu_6478_p1 = grp_MUL_DP_fu_5192_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_325_fu_6489_p1() {
    tmp_325_fu_6489_p1 = grp_MUL_DP_fu_5192_ap_return_1.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_326_fu_6508_p1() {
    tmp_326_fu_6508_p1 = grp_MUL_DP_fu_5201_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_327_fu_6519_p1() {
    tmp_327_fu_6519_p1 = grp_MUL_DP_fu_5201_ap_return_1.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_328_fu_6718_p1() {
    tmp_328_fu_6718_p1 = tmp_242_fu_6713_p2.read().range(10-1, 0);
}

void subconv_1x1_4_p::thread_tmp_329_fu_6818_p1() {
    tmp_329_fu_6818_p1 = grp_MUL_DP_fu_4994_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_330_fu_6829_p1() {
    tmp_330_fu_6829_p1 = grp_MUL_DP_fu_4994_ap_return_1.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_331_fu_6848_p1() {
    tmp_331_fu_6848_p1 = grp_MUL_DP_fu_5003_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_332_fu_6859_p1() {
    tmp_332_fu_6859_p1 = grp_MUL_DP_fu_5003_ap_return_1.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_333_fu_6878_p1() {
    tmp_333_fu_6878_p1 = grp_MUL_DP_fu_5012_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_334_fu_6889_p1() {
    tmp_334_fu_6889_p1 = grp_MUL_DP_fu_5012_ap_return_1.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_335_fu_6908_p1() {
    tmp_335_fu_6908_p1 = grp_MUL_DP_fu_5021_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_336_fu_6919_p1() {
    tmp_336_fu_6919_p1 = grp_MUL_DP_fu_5021_ap_return_1.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_337_fu_6938_p1() {
    tmp_337_fu_6938_p1 = grp_MUL_DP_fu_5030_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_338_fu_6949_p1() {
    tmp_338_fu_6949_p1 = grp_MUL_DP_fu_5030_ap_return_1.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_339_fu_6968_p1() {
    tmp_339_fu_6968_p1 = grp_MUL_DP_fu_5039_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_340_fu_6979_p1() {
    tmp_340_fu_6979_p1 = grp_MUL_DP_fu_5039_ap_return_1.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_341_fu_6998_p1() {
    tmp_341_fu_6998_p1 = grp_MUL_DP_fu_5048_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_342_fu_7009_p1() {
    tmp_342_fu_7009_p1 = grp_MUL_DP_fu_5048_ap_return_1.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_343_fu_7028_p1() {
    tmp_343_fu_7028_p1 = grp_MUL_DP_fu_5057_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_344_fu_7039_p1() {
    tmp_344_fu_7039_p1 = grp_MUL_DP_fu_5057_ap_return_1.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_345_fu_7058_p1() {
    tmp_345_fu_7058_p1 = grp_MUL_DP_fu_5066_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_346_fu_7069_p1() {
    tmp_346_fu_7069_p1 = grp_MUL_DP_fu_5066_ap_return_1.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_347_fu_7088_p1() {
    tmp_347_fu_7088_p1 = grp_MUL_DP_fu_5075_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_348_fu_7099_p1() {
    tmp_348_fu_7099_p1 = grp_MUL_DP_fu_5075_ap_return_1.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_349_fu_7118_p1() {
    tmp_349_fu_7118_p1 = grp_MUL_DP_fu_5084_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_350_fu_7129_p1() {
    tmp_350_fu_7129_p1 = grp_MUL_DP_fu_5084_ap_return_1.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_351_fu_7148_p1() {
    tmp_351_fu_7148_p1 = grp_MUL_DP_fu_5093_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_352_fu_7159_p1() {
    tmp_352_fu_7159_p1 = grp_MUL_DP_fu_5093_ap_return_1.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_353_fu_7178_p1() {
    tmp_353_fu_7178_p1 = grp_MUL_DP_fu_5102_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_354_fu_7189_p1() {
    tmp_354_fu_7189_p1 = grp_MUL_DP_fu_5102_ap_return_1.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_355_fu_7208_p1() {
    tmp_355_fu_7208_p1 = grp_MUL_DP_fu_5111_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_356_fu_7219_p1() {
    tmp_356_fu_7219_p1 = grp_MUL_DP_fu_5111_ap_return_1.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_357_fu_7238_p1() {
    tmp_357_fu_7238_p1 = grp_MUL_DP_fu_5120_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_358_fu_7249_p1() {
    tmp_358_fu_7249_p1 = grp_MUL_DP_fu_5120_ap_return_1.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_359_fu_7268_p1() {
    tmp_359_fu_7268_p1 = grp_MUL_DP_fu_5129_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_360_fu_7279_p1() {
    tmp_360_fu_7279_p1 = grp_MUL_DP_fu_5129_ap_return_1.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_361_fu_7298_p1() {
    tmp_361_fu_7298_p1 = grp_MUL_DP_fu_5138_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_362_fu_7309_p1() {
    tmp_362_fu_7309_p1 = grp_MUL_DP_fu_5138_ap_return_1.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_363_fu_7328_p1() {
    tmp_363_fu_7328_p1 = grp_MUL_DP_fu_5147_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_364_fu_7339_p1() {
    tmp_364_fu_7339_p1 = grp_MUL_DP_fu_5147_ap_return_1.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_365_fu_7358_p1() {
    tmp_365_fu_7358_p1 = grp_MUL_DP_fu_5156_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_366_fu_7369_p1() {
    tmp_366_fu_7369_p1 = grp_MUL_DP_fu_5156_ap_return_1.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_367_fu_7388_p1() {
    tmp_367_fu_7388_p1 = grp_MUL_DP_fu_5165_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_368_fu_7399_p1() {
    tmp_368_fu_7399_p1 = grp_MUL_DP_fu_5165_ap_return_1.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_369_fu_7418_p1() {
    tmp_369_fu_7418_p1 = grp_MUL_DP_fu_5174_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_370_fu_7429_p1() {
    tmp_370_fu_7429_p1 = grp_MUL_DP_fu_5174_ap_return_1.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_371_fu_7448_p1() {
    tmp_371_fu_7448_p1 = grp_MUL_DP_fu_5183_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_372_fu_7459_p1() {
    tmp_372_fu_7459_p1 = grp_MUL_DP_fu_5183_ap_return_1.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_373_fu_7478_p1() {
    tmp_373_fu_7478_p1 = grp_MUL_DP_fu_5192_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_374_fu_7489_p1() {
    tmp_374_fu_7489_p1 = grp_MUL_DP_fu_5192_ap_return_1.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_375_fu_7508_p1() {
    tmp_375_fu_7508_p1 = grp_MUL_DP_fu_5201_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_376_fu_7519_p1() {
    tmp_376_fu_7519_p1 = grp_MUL_DP_fu_5201_ap_return_1.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_43_10_fu_6152_p2() {
    tmp_43_10_fu_6152_p2 = (!buffer1_1_96_4x4_p_V_11_q0.read().is_01() || !tmp_294_fu_6148_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(buffer1_1_96_4x4_p_V_11_q0.read()) + sc_biguint<8>(tmp_294_fu_6148_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_43_11_fu_6182_p2() {
    tmp_43_11_fu_6182_p2 = (!buffer1_1_96_4x4_p_V_12_q0.read().is_01() || !tmp_300_fu_6178_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(buffer1_1_96_4x4_p_V_12_q0.read()) + sc_biguint<8>(tmp_300_fu_6178_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_43_12_fu_6212_p2() {
    tmp_43_12_fu_6212_p2 = (!buffer1_1_96_4x4_p_V_13_q0.read().is_01() || !tmp_306_fu_6208_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(buffer1_1_96_4x4_p_V_13_q0.read()) + sc_biguint<8>(tmp_306_fu_6208_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_43_13_fu_6242_p2() {
    tmp_43_13_fu_6242_p2 = (!buffer1_1_96_4x4_p_V_14_q0.read().is_01() || !tmp_308_fu_6238_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(buffer1_1_96_4x4_p_V_14_q0.read()) + sc_biguint<8>(tmp_308_fu_6238_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_43_14_fu_6272_p2() {
    tmp_43_14_fu_6272_p2 = (!buffer1_1_96_4x4_p_V_15_q0.read().is_01() || !tmp_310_fu_6268_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(buffer1_1_96_4x4_p_V_15_q0.read()) + sc_biguint<8>(tmp_310_fu_6268_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_43_15_fu_6302_p2() {
    tmp_43_15_fu_6302_p2 = (!buffer1_1_96_4x4_p_V_16_q0.read().is_01() || !tmp_312_fu_6298_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(buffer1_1_96_4x4_p_V_16_q0.read()) + sc_biguint<8>(tmp_312_fu_6298_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_43_16_fu_6332_p2() {
    tmp_43_16_fu_6332_p2 = (!buffer1_1_96_4x4_p_V_17_q0.read().is_01() || !tmp_314_fu_6328_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(buffer1_1_96_4x4_p_V_17_q0.read()) + sc_biguint<8>(tmp_314_fu_6328_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_43_17_fu_6362_p2() {
    tmp_43_17_fu_6362_p2 = (!buffer1_1_96_4x4_p_V_18_q0.read().is_01() || !tmp_316_fu_6358_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(buffer1_1_96_4x4_p_V_18_q0.read()) + sc_biguint<8>(tmp_316_fu_6358_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_43_18_fu_6392_p2() {
    tmp_43_18_fu_6392_p2 = (!buffer1_1_96_4x4_p_V_19_q0.read().is_01() || !tmp_318_fu_6388_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(buffer1_1_96_4x4_p_V_19_q0.read()) + sc_biguint<8>(tmp_318_fu_6388_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_43_19_fu_6422_p2() {
    tmp_43_19_fu_6422_p2 = (!buffer1_1_96_4x4_p_V_20_q0.read().is_01() || !tmp_320_fu_6418_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(buffer1_1_96_4x4_p_V_20_q0.read()) + sc_biguint<8>(tmp_320_fu_6418_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_43_1_fu_5852_p2() {
    tmp_43_1_fu_5852_p2 = (!buffer1_1_96_4x4_p_V_1_q0.read().is_01() || !tmp_274_fu_5848_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(buffer1_1_96_4x4_p_V_1_q0.read()) + sc_biguint<8>(tmp_274_fu_5848_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_43_20_fu_6452_p2() {
    tmp_43_20_fu_6452_p2 = (!buffer1_1_96_4x4_p_V_21_q0.read().is_01() || !tmp_322_fu_6448_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(buffer1_1_96_4x4_p_V_21_q0.read()) + sc_biguint<8>(tmp_322_fu_6448_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_43_21_fu_6482_p2() {
    tmp_43_21_fu_6482_p2 = (!buffer1_1_96_4x4_p_V_22_q0.read().is_01() || !tmp_324_fu_6478_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(buffer1_1_96_4x4_p_V_22_q0.read()) + sc_biguint<8>(tmp_324_fu_6478_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_43_22_fu_6512_p2() {
    tmp_43_22_fu_6512_p2 = (!buffer1_1_96_4x4_p_V_23_q0.read().is_01() || !tmp_326_fu_6508_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(buffer1_1_96_4x4_p_V_23_q0.read()) + sc_biguint<8>(tmp_326_fu_6508_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_43_2_fu_5882_p2() {
    tmp_43_2_fu_5882_p2 = (!buffer1_1_96_4x4_p_V_2_q0.read().is_01() || !tmp_276_fu_5878_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(buffer1_1_96_4x4_p_V_2_q0.read()) + sc_biguint<8>(tmp_276_fu_5878_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_43_3_fu_5912_p2() {
    tmp_43_3_fu_5912_p2 = (!buffer1_1_96_4x4_p_V_3_q0.read().is_01() || !tmp_278_fu_5908_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(buffer1_1_96_4x4_p_V_3_q0.read()) + sc_biguint<8>(tmp_278_fu_5908_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_43_4_fu_5942_p2() {
    tmp_43_4_fu_5942_p2 = (!buffer1_1_96_4x4_p_V_4_q0.read().is_01() || !tmp_280_fu_5938_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(buffer1_1_96_4x4_p_V_4_q0.read()) + sc_biguint<8>(tmp_280_fu_5938_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_43_5_fu_5972_p2() {
    tmp_43_5_fu_5972_p2 = (!buffer1_1_96_4x4_p_V_5_q0.read().is_01() || !tmp_282_fu_5968_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(buffer1_1_96_4x4_p_V_5_q0.read()) + sc_biguint<8>(tmp_282_fu_5968_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_43_6_fu_6002_p2() {
    tmp_43_6_fu_6002_p2 = (!buffer1_1_96_4x4_p_V_6_q0.read().is_01() || !tmp_284_fu_5998_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(buffer1_1_96_4x4_p_V_6_q0.read()) + sc_biguint<8>(tmp_284_fu_5998_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_43_7_fu_6032_p2() {
    tmp_43_7_fu_6032_p2 = (!buffer1_1_96_4x4_p_V_7_q0.read().is_01() || !tmp_286_fu_6028_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(buffer1_1_96_4x4_p_V_7_q0.read()) + sc_biguint<8>(tmp_286_fu_6028_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_43_8_fu_6062_p2() {
    tmp_43_8_fu_6062_p2 = (!buffer1_1_96_4x4_p_V_8_q0.read().is_01() || !tmp_288_fu_6058_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(buffer1_1_96_4x4_p_V_8_q0.read()) + sc_biguint<8>(tmp_288_fu_6058_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_43_9_fu_6092_p2() {
    tmp_43_9_fu_6092_p2 = (!buffer1_1_96_4x4_p_V_9_q0.read().is_01() || !tmp_290_fu_6088_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(buffer1_1_96_4x4_p_V_9_q0.read()) + sc_biguint<8>(tmp_290_fu_6088_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_43_s_fu_6122_p2() {
    tmp_43_s_fu_6122_p2 = (!buffer1_1_96_4x4_p_V_10_q0.read().is_01() || !tmp_292_fu_6118_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(buffer1_1_96_4x4_p_V_10_q0.read()) + sc_biguint<8>(tmp_292_fu_6118_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_45_10_fu_6163_p2() {
    tmp_45_10_fu_6163_p2 = (!buffer1_1_96_4x4_p_V_59_q0.read().is_01() || !tmp_299_fu_6159_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(buffer1_1_96_4x4_p_V_59_q0.read()) + sc_biguint<8>(tmp_299_fu_6159_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_45_11_fu_6193_p2() {
    tmp_45_11_fu_6193_p2 = (!buffer1_1_96_4x4_p_V_60_q0.read().is_01() || !tmp_305_fu_6189_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(buffer1_1_96_4x4_p_V_60_q0.read()) + sc_biguint<8>(tmp_305_fu_6189_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_45_12_fu_6223_p2() {
    tmp_45_12_fu_6223_p2 = (!buffer1_1_96_4x4_p_V_61_q0.read().is_01() || !tmp_307_fu_6219_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(buffer1_1_96_4x4_p_V_61_q0.read()) + sc_biguint<8>(tmp_307_fu_6219_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_45_13_fu_6253_p2() {
    tmp_45_13_fu_6253_p2 = (!buffer1_1_96_4x4_p_V_62_q0.read().is_01() || !tmp_309_fu_6249_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(buffer1_1_96_4x4_p_V_62_q0.read()) + sc_biguint<8>(tmp_309_fu_6249_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_45_14_fu_6283_p2() {
    tmp_45_14_fu_6283_p2 = (!buffer1_1_96_4x4_p_V_63_q0.read().is_01() || !tmp_311_fu_6279_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(buffer1_1_96_4x4_p_V_63_q0.read()) + sc_biguint<8>(tmp_311_fu_6279_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_45_15_fu_6313_p2() {
    tmp_45_15_fu_6313_p2 = (!buffer1_1_96_4x4_p_V_64_q0.read().is_01() || !tmp_313_fu_6309_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(buffer1_1_96_4x4_p_V_64_q0.read()) + sc_biguint<8>(tmp_313_fu_6309_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_45_16_fu_6343_p2() {
    tmp_45_16_fu_6343_p2 = (!buffer1_1_96_4x4_p_V_65_q0.read().is_01() || !tmp_315_fu_6339_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(buffer1_1_96_4x4_p_V_65_q0.read()) + sc_biguint<8>(tmp_315_fu_6339_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_45_17_fu_6373_p2() {
    tmp_45_17_fu_6373_p2 = (!buffer1_1_96_4x4_p_V_66_q0.read().is_01() || !tmp_317_fu_6369_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(buffer1_1_96_4x4_p_V_66_q0.read()) + sc_biguint<8>(tmp_317_fu_6369_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_45_18_fu_6403_p2() {
    tmp_45_18_fu_6403_p2 = (!buffer1_1_96_4x4_p_V_67_q0.read().is_01() || !tmp_319_fu_6399_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(buffer1_1_96_4x4_p_V_67_q0.read()) + sc_biguint<8>(tmp_319_fu_6399_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_45_19_fu_6433_p2() {
    tmp_45_19_fu_6433_p2 = (!buffer1_1_96_4x4_p_V_68_q0.read().is_01() || !tmp_321_fu_6429_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(buffer1_1_96_4x4_p_V_68_q0.read()) + sc_biguint<8>(tmp_321_fu_6429_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_45_1_fu_5863_p2() {
    tmp_45_1_fu_5863_p2 = (!buffer1_1_96_4x4_p_V_49_q0.read().is_01() || !tmp_275_fu_5859_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(buffer1_1_96_4x4_p_V_49_q0.read()) + sc_biguint<8>(tmp_275_fu_5859_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_45_20_fu_6463_p2() {
    tmp_45_20_fu_6463_p2 = (!buffer1_1_96_4x4_p_V_69_q0.read().is_01() || !tmp_323_fu_6459_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(buffer1_1_96_4x4_p_V_69_q0.read()) + sc_biguint<8>(tmp_323_fu_6459_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_45_21_fu_6493_p2() {
    tmp_45_21_fu_6493_p2 = (!buffer1_1_96_4x4_p_V_70_q0.read().is_01() || !tmp_325_fu_6489_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(buffer1_1_96_4x4_p_V_70_q0.read()) + sc_biguint<8>(tmp_325_fu_6489_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_45_22_fu_6523_p2() {
    tmp_45_22_fu_6523_p2 = (!buffer1_1_96_4x4_p_V_71_q0.read().is_01() || !tmp_327_fu_6519_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(buffer1_1_96_4x4_p_V_71_q0.read()) + sc_biguint<8>(tmp_327_fu_6519_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_45_2_fu_5893_p2() {
    tmp_45_2_fu_5893_p2 = (!buffer1_1_96_4x4_p_V_50_q0.read().is_01() || !tmp_277_fu_5889_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(buffer1_1_96_4x4_p_V_50_q0.read()) + sc_biguint<8>(tmp_277_fu_5889_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_45_3_fu_5923_p2() {
    tmp_45_3_fu_5923_p2 = (!buffer1_1_96_4x4_p_V_51_q0.read().is_01() || !tmp_279_fu_5919_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(buffer1_1_96_4x4_p_V_51_q0.read()) + sc_biguint<8>(tmp_279_fu_5919_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_45_4_fu_5953_p2() {
    tmp_45_4_fu_5953_p2 = (!buffer1_1_96_4x4_p_V_52_q0.read().is_01() || !tmp_281_fu_5949_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(buffer1_1_96_4x4_p_V_52_q0.read()) + sc_biguint<8>(tmp_281_fu_5949_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_45_5_fu_5983_p2() {
    tmp_45_5_fu_5983_p2 = (!buffer1_1_96_4x4_p_V_53_q0.read().is_01() || !tmp_283_fu_5979_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(buffer1_1_96_4x4_p_V_53_q0.read()) + sc_biguint<8>(tmp_283_fu_5979_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_45_6_fu_6013_p2() {
    tmp_45_6_fu_6013_p2 = (!buffer1_1_96_4x4_p_V_54_q0.read().is_01() || !tmp_285_fu_6009_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(buffer1_1_96_4x4_p_V_54_q0.read()) + sc_biguint<8>(tmp_285_fu_6009_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_45_7_fu_6043_p2() {
    tmp_45_7_fu_6043_p2 = (!buffer1_1_96_4x4_p_V_55_q0.read().is_01() || !tmp_287_fu_6039_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(buffer1_1_96_4x4_p_V_55_q0.read()) + sc_biguint<8>(tmp_287_fu_6039_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_45_8_fu_6073_p2() {
    tmp_45_8_fu_6073_p2 = (!buffer1_1_96_4x4_p_V_56_q0.read().is_01() || !tmp_289_fu_6069_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(buffer1_1_96_4x4_p_V_56_q0.read()) + sc_biguint<8>(tmp_289_fu_6069_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_45_9_fu_6103_p2() {
    tmp_45_9_fu_6103_p2 = (!buffer1_1_96_4x4_p_V_57_q0.read().is_01() || !tmp_291_fu_6099_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(buffer1_1_96_4x4_p_V_57_q0.read()) + sc_biguint<8>(tmp_291_fu_6099_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_45_s_fu_6133_p2() {
    tmp_45_s_fu_6133_p2 = (!buffer1_1_96_4x4_p_V_58_q0.read().is_01() || !tmp_293_fu_6129_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(buffer1_1_96_4x4_p_V_58_q0.read()) + sc_biguint<8>(tmp_293_fu_6129_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_49_10_fu_7152_p2() {
    tmp_49_10_fu_7152_p2 = (!buffer1_1_96_4x4_p_V_35_q0.read().is_01() || !tmp_351_fu_7148_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(buffer1_1_96_4x4_p_V_35_q0.read()) + sc_biguint<8>(tmp_351_fu_7148_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_49_11_fu_7182_p2() {
    tmp_49_11_fu_7182_p2 = (!buffer1_1_96_4x4_p_V_36_q0.read().is_01() || !tmp_353_fu_7178_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(buffer1_1_96_4x4_p_V_36_q0.read()) + sc_biguint<8>(tmp_353_fu_7178_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_49_12_fu_7212_p2() {
    tmp_49_12_fu_7212_p2 = (!buffer1_1_96_4x4_p_V_37_q0.read().is_01() || !tmp_355_fu_7208_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(buffer1_1_96_4x4_p_V_37_q0.read()) + sc_biguint<8>(tmp_355_fu_7208_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_49_13_fu_7242_p2() {
    tmp_49_13_fu_7242_p2 = (!buffer1_1_96_4x4_p_V_38_q0.read().is_01() || !tmp_357_fu_7238_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(buffer1_1_96_4x4_p_V_38_q0.read()) + sc_biguint<8>(tmp_357_fu_7238_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_49_14_fu_7272_p2() {
    tmp_49_14_fu_7272_p2 = (!buffer1_1_96_4x4_p_V_39_q0.read().is_01() || !tmp_359_fu_7268_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(buffer1_1_96_4x4_p_V_39_q0.read()) + sc_biguint<8>(tmp_359_fu_7268_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_49_15_fu_7302_p2() {
    tmp_49_15_fu_7302_p2 = (!buffer1_1_96_4x4_p_V_40_q0.read().is_01() || !tmp_361_fu_7298_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(buffer1_1_96_4x4_p_V_40_q0.read()) + sc_biguint<8>(tmp_361_fu_7298_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_49_16_fu_7332_p2() {
    tmp_49_16_fu_7332_p2 = (!buffer1_1_96_4x4_p_V_41_q0.read().is_01() || !tmp_363_fu_7328_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(buffer1_1_96_4x4_p_V_41_q0.read()) + sc_biguint<8>(tmp_363_fu_7328_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_49_17_fu_7362_p2() {
    tmp_49_17_fu_7362_p2 = (!buffer1_1_96_4x4_p_V_42_q0.read().is_01() || !tmp_365_fu_7358_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(buffer1_1_96_4x4_p_V_42_q0.read()) + sc_biguint<8>(tmp_365_fu_7358_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_49_18_fu_7392_p2() {
    tmp_49_18_fu_7392_p2 = (!buffer1_1_96_4x4_p_V_43_q0.read().is_01() || !tmp_367_fu_7388_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(buffer1_1_96_4x4_p_V_43_q0.read()) + sc_biguint<8>(tmp_367_fu_7388_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_49_19_fu_7422_p2() {
    tmp_49_19_fu_7422_p2 = (!buffer1_1_96_4x4_p_V_44_q0.read().is_01() || !tmp_369_fu_7418_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(buffer1_1_96_4x4_p_V_44_q0.read()) + sc_biguint<8>(tmp_369_fu_7418_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_49_1_fu_6852_p2() {
    tmp_49_1_fu_6852_p2 = (!buffer1_1_96_4x4_p_V_25_q0.read().is_01() || !tmp_331_fu_6848_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(buffer1_1_96_4x4_p_V_25_q0.read()) + sc_biguint<8>(tmp_331_fu_6848_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_49_20_fu_7452_p2() {
    tmp_49_20_fu_7452_p2 = (!buffer1_1_96_4x4_p_V_45_q0.read().is_01() || !tmp_371_fu_7448_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(buffer1_1_96_4x4_p_V_45_q0.read()) + sc_biguint<8>(tmp_371_fu_7448_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_49_21_fu_7482_p2() {
    tmp_49_21_fu_7482_p2 = (!buffer1_1_96_4x4_p_V_46_q0.read().is_01() || !tmp_373_fu_7478_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(buffer1_1_96_4x4_p_V_46_q0.read()) + sc_biguint<8>(tmp_373_fu_7478_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_49_22_fu_7512_p2() {
    tmp_49_22_fu_7512_p2 = (!buffer1_1_96_4x4_p_V_47_q0.read().is_01() || !tmp_375_fu_7508_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(buffer1_1_96_4x4_p_V_47_q0.read()) + sc_biguint<8>(tmp_375_fu_7508_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_49_2_fu_6882_p2() {
    tmp_49_2_fu_6882_p2 = (!buffer1_1_96_4x4_p_V_26_q0.read().is_01() || !tmp_333_fu_6878_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(buffer1_1_96_4x4_p_V_26_q0.read()) + sc_biguint<8>(tmp_333_fu_6878_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_49_3_fu_6912_p2() {
    tmp_49_3_fu_6912_p2 = (!buffer1_1_96_4x4_p_V_27_q0.read().is_01() || !tmp_335_fu_6908_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(buffer1_1_96_4x4_p_V_27_q0.read()) + sc_biguint<8>(tmp_335_fu_6908_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_49_4_fu_6942_p2() {
    tmp_49_4_fu_6942_p2 = (!buffer1_1_96_4x4_p_V_28_q0.read().is_01() || !tmp_337_fu_6938_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(buffer1_1_96_4x4_p_V_28_q0.read()) + sc_biguint<8>(tmp_337_fu_6938_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_49_5_fu_6972_p2() {
    tmp_49_5_fu_6972_p2 = (!buffer1_1_96_4x4_p_V_29_q0.read().is_01() || !tmp_339_fu_6968_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(buffer1_1_96_4x4_p_V_29_q0.read()) + sc_biguint<8>(tmp_339_fu_6968_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_49_6_fu_7002_p2() {
    tmp_49_6_fu_7002_p2 = (!buffer1_1_96_4x4_p_V_30_q0.read().is_01() || !tmp_341_fu_6998_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(buffer1_1_96_4x4_p_V_30_q0.read()) + sc_biguint<8>(tmp_341_fu_6998_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_49_7_fu_7032_p2() {
    tmp_49_7_fu_7032_p2 = (!buffer1_1_96_4x4_p_V_31_q0.read().is_01() || !tmp_343_fu_7028_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(buffer1_1_96_4x4_p_V_31_q0.read()) + sc_biguint<8>(tmp_343_fu_7028_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_49_8_fu_7062_p2() {
    tmp_49_8_fu_7062_p2 = (!buffer1_1_96_4x4_p_V_32_q0.read().is_01() || !tmp_345_fu_7058_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(buffer1_1_96_4x4_p_V_32_q0.read()) + sc_biguint<8>(tmp_345_fu_7058_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_49_9_fu_7092_p2() {
    tmp_49_9_fu_7092_p2 = (!buffer1_1_96_4x4_p_V_33_q0.read().is_01() || !tmp_347_fu_7088_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(buffer1_1_96_4x4_p_V_33_q0.read()) + sc_biguint<8>(tmp_347_fu_7088_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_49_s_fu_7122_p2() {
    tmp_49_s_fu_7122_p2 = (!buffer1_1_96_4x4_p_V_34_q0.read().is_01() || !tmp_349_fu_7118_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(buffer1_1_96_4x4_p_V_34_q0.read()) + sc_biguint<8>(tmp_349_fu_7118_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_51_10_fu_7163_p2() {
    tmp_51_10_fu_7163_p2 = (!buffer1_1_96_4x4_p_V_83_q0.read().is_01() || !tmp_352_fu_7159_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(buffer1_1_96_4x4_p_V_83_q0.read()) + sc_biguint<8>(tmp_352_fu_7159_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_51_11_fu_7193_p2() {
    tmp_51_11_fu_7193_p2 = (!buffer1_1_96_4x4_p_V_84_q0.read().is_01() || !tmp_354_fu_7189_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(buffer1_1_96_4x4_p_V_84_q0.read()) + sc_biguint<8>(tmp_354_fu_7189_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_51_12_fu_7223_p2() {
    tmp_51_12_fu_7223_p2 = (!buffer1_1_96_4x4_p_V_85_q0.read().is_01() || !tmp_356_fu_7219_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(buffer1_1_96_4x4_p_V_85_q0.read()) + sc_biguint<8>(tmp_356_fu_7219_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_51_13_fu_7253_p2() {
    tmp_51_13_fu_7253_p2 = (!buffer1_1_96_4x4_p_V_86_q0.read().is_01() || !tmp_358_fu_7249_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(buffer1_1_96_4x4_p_V_86_q0.read()) + sc_biguint<8>(tmp_358_fu_7249_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_51_14_fu_7283_p2() {
    tmp_51_14_fu_7283_p2 = (!buffer1_1_96_4x4_p_V_87_q0.read().is_01() || !tmp_360_fu_7279_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(buffer1_1_96_4x4_p_V_87_q0.read()) + sc_biguint<8>(tmp_360_fu_7279_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_51_15_fu_7313_p2() {
    tmp_51_15_fu_7313_p2 = (!buffer1_1_96_4x4_p_V_88_q0.read().is_01() || !tmp_362_fu_7309_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(buffer1_1_96_4x4_p_V_88_q0.read()) + sc_biguint<8>(tmp_362_fu_7309_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_51_16_fu_7343_p2() {
    tmp_51_16_fu_7343_p2 = (!buffer1_1_96_4x4_p_V_89_q0.read().is_01() || !tmp_364_fu_7339_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(buffer1_1_96_4x4_p_V_89_q0.read()) + sc_biguint<8>(tmp_364_fu_7339_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_51_17_fu_7373_p2() {
    tmp_51_17_fu_7373_p2 = (!buffer1_1_96_4x4_p_V_90_q0.read().is_01() || !tmp_366_fu_7369_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(buffer1_1_96_4x4_p_V_90_q0.read()) + sc_biguint<8>(tmp_366_fu_7369_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_51_18_fu_7403_p2() {
    tmp_51_18_fu_7403_p2 = (!buffer1_1_96_4x4_p_V_91_q0.read().is_01() || !tmp_368_fu_7399_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(buffer1_1_96_4x4_p_V_91_q0.read()) + sc_biguint<8>(tmp_368_fu_7399_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_51_19_fu_7433_p2() {
    tmp_51_19_fu_7433_p2 = (!buffer1_1_96_4x4_p_V_92_q0.read().is_01() || !tmp_370_fu_7429_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(buffer1_1_96_4x4_p_V_92_q0.read()) + sc_biguint<8>(tmp_370_fu_7429_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_51_1_fu_6863_p2() {
    tmp_51_1_fu_6863_p2 = (!buffer1_1_96_4x4_p_V_73_q0.read().is_01() || !tmp_332_fu_6859_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(buffer1_1_96_4x4_p_V_73_q0.read()) + sc_biguint<8>(tmp_332_fu_6859_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_51_20_fu_7463_p2() {
    tmp_51_20_fu_7463_p2 = (!buffer1_1_96_4x4_p_V_93_q0.read().is_01() || !tmp_372_fu_7459_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(buffer1_1_96_4x4_p_V_93_q0.read()) + sc_biguint<8>(tmp_372_fu_7459_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_51_21_fu_7493_p2() {
    tmp_51_21_fu_7493_p2 = (!buffer1_1_96_4x4_p_V_94_q0.read().is_01() || !tmp_374_fu_7489_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(buffer1_1_96_4x4_p_V_94_q0.read()) + sc_biguint<8>(tmp_374_fu_7489_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_51_22_fu_7523_p2() {
    tmp_51_22_fu_7523_p2 = (!buffer1_1_96_4x4_p_V_95_q0.read().is_01() || !tmp_376_fu_7519_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(buffer1_1_96_4x4_p_V_95_q0.read()) + sc_biguint<8>(tmp_376_fu_7519_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_51_2_fu_6893_p2() {
    tmp_51_2_fu_6893_p2 = (!buffer1_1_96_4x4_p_V_74_q0.read().is_01() || !tmp_334_fu_6889_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(buffer1_1_96_4x4_p_V_74_q0.read()) + sc_biguint<8>(tmp_334_fu_6889_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_51_3_fu_6923_p2() {
    tmp_51_3_fu_6923_p2 = (!buffer1_1_96_4x4_p_V_75_q0.read().is_01() || !tmp_336_fu_6919_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(buffer1_1_96_4x4_p_V_75_q0.read()) + sc_biguint<8>(tmp_336_fu_6919_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_51_4_fu_6953_p2() {
    tmp_51_4_fu_6953_p2 = (!buffer1_1_96_4x4_p_V_76_q0.read().is_01() || !tmp_338_fu_6949_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(buffer1_1_96_4x4_p_V_76_q0.read()) + sc_biguint<8>(tmp_338_fu_6949_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_51_5_fu_6983_p2() {
    tmp_51_5_fu_6983_p2 = (!buffer1_1_96_4x4_p_V_77_q0.read().is_01() || !tmp_340_fu_6979_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(buffer1_1_96_4x4_p_V_77_q0.read()) + sc_biguint<8>(tmp_340_fu_6979_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_51_6_fu_7013_p2() {
    tmp_51_6_fu_7013_p2 = (!buffer1_1_96_4x4_p_V_78_q0.read().is_01() || !tmp_342_fu_7009_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(buffer1_1_96_4x4_p_V_78_q0.read()) + sc_biguint<8>(tmp_342_fu_7009_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_51_7_fu_7043_p2() {
    tmp_51_7_fu_7043_p2 = (!buffer1_1_96_4x4_p_V_79_q0.read().is_01() || !tmp_344_fu_7039_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(buffer1_1_96_4x4_p_V_79_q0.read()) + sc_biguint<8>(tmp_344_fu_7039_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_51_8_fu_7073_p2() {
    tmp_51_8_fu_7073_p2 = (!buffer1_1_96_4x4_p_V_80_q0.read().is_01() || !tmp_346_fu_7069_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(buffer1_1_96_4x4_p_V_80_q0.read()) + sc_biguint<8>(tmp_346_fu_7069_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_51_9_fu_7103_p2() {
    tmp_51_9_fu_7103_p2 = (!buffer1_1_96_4x4_p_V_81_q0.read().is_01() || !tmp_348_fu_7099_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(buffer1_1_96_4x4_p_V_81_q0.read()) + sc_biguint<8>(tmp_348_fu_7099_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_51_s_fu_7133_p2() {
    tmp_51_s_fu_7133_p2 = (!buffer1_1_96_4x4_p_V_82_q0.read().is_01() || !tmp_350_fu_7129_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(buffer1_1_96_4x4_p_V_82_q0.read()) + sc_biguint<8>(tmp_350_fu_7129_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_s_fu_5366_p2() {
    tmp_s_fu_5366_p2 = (exitcond31_mid_fu_5354_p2.read() | exitcond_flatten_reg_7983.read());
}

void subconv_1x1_4_p::thread_w10_cast1_cast_fu_7660_p1() {
    w10_cast1_cast_fu_7660_p1 = esl_zext<7,3>(w10_mid2_reg_9120.read());
}

void subconv_1x1_4_p::thread_w10_mid2_fu_7610_p3() {
    w10_mid2_fu_7610_p3 = (!tmp_236_fu_7605_p2.read()[0].is_01())? sc_lv<3>(): ((tmp_236_fu_7605_p2.read()[0].to_bool())? ap_const_lv3_1: w10_phi_fu_4986_p4.read());
}

void subconv_1x1_4_p::thread_w10_phi_fu_4986_p4() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp1_iter1_exitcond_flatten9_reg_9092.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        w10_phi_fu_4986_p4 = w_21_reg_9132.read();
    } else {
        w10_phi_fu_4986_p4 = w10_reg_4982.read();
    }
}

void subconv_1x1_4_p::thread_w2_cast8_cast1_fu_5574_p1() {
    w2_cast8_cast1_fu_5574_p1 = esl_zext<13,3>(w2_reg_4878.read());
}

void subconv_1x1_4_p::thread_w2_cast8_cast_fu_5578_p1() {
    w2_cast8_cast_fu_5578_p1 = esl_zext<7,3>(w2_reg_4878.read());
}

void subconv_1x1_4_p::thread_w5_cast5_cast1_fu_6574_p1() {
    w5_cast5_cast1_fu_6574_p1 = esl_zext<13,3>(w5_reg_4913.read());
}

void subconv_1x1_4_p::thread_w5_cast5_cast_fu_6578_p1() {
    w5_cast5_cast_fu_6578_p1 = esl_zext<7,3>(w5_reg_4913.read());
}

void subconv_1x1_4_p::thread_w_18_fu_5387_p2() {
    w_18_fu_5387_p2 = (!w_mid2_fu_5371_p3.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(w_mid2_fu_5371_p3.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void subconv_1x1_4_p::thread_w_19_fu_5804_p2() {
    w_19_fu_5804_p2 = (!w2_reg_4878.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(w2_reg_4878.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void subconv_1x1_4_p::thread_w_20_fu_6804_p2() {
    w_20_fu_6804_p2 = (!w5_reg_4913.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(w5_reg_4913.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void subconv_1x1_4_p::thread_w_21_fu_7626_p2() {
    w_21_fu_7626_p2 = (!w10_mid2_fu_7610_p3.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(w10_mid2_fu_7610_p3.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void subconv_1x1_4_p::thread_w_cast_cast_fu_5421_p1() {
    w_cast_cast_fu_5421_p1 = esl_zext<7,3>(w_mid2_reg_8001.read());
}

void subconv_1x1_4_p::thread_w_mid2_fu_5371_p3() {
    w_mid2_fu_5371_p3 = (!tmp_s_fu_5366_p2.read()[0].is_01())? sc_lv<3>(): ((tmp_s_fu_5366_p2.read()[0].to_bool())? ap_const_lv3_1: w_phi_fu_4858_p4.read());
}

void subconv_1x1_4_p::thread_w_phi_fu_4858_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_reg_pp0_iter1_exitcond_flatten7_reg_7974.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        w_phi_fu_4858_p4 = w_18_reg_8018.read();
    } else {
        w_phi_fu_4858_p4 = w_reg_4854.read();
    }
}

void subconv_1x1_4_p::thread_weight_0_V_address0() {
    weight_0_V_address0 = weight_0_V_addr_reg_8304.read();
}

void subconv_1x1_4_p::thread_weight_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        weight_0_V_ce0 = ap_const_logic_1;
    } else {
        weight_0_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_10_V_address0() {
    weight_10_V_address0 = weight_10_V_addr_reg_8354.read();
}

void subconv_1x1_4_p::thread_weight_10_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        weight_10_V_ce0 = ap_const_logic_1;
    } else {
        weight_10_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_11_V_address0() {
    weight_11_V_address0 = weight_11_V_addr_reg_8359.read();
}

void subconv_1x1_4_p::thread_weight_11_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        weight_11_V_ce0 = ap_const_logic_1;
    } else {
        weight_11_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_12_V_address0() {
    weight_12_V_address0 = weight_12_V_addr_reg_8364.read();
}

void subconv_1x1_4_p::thread_weight_12_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        weight_12_V_ce0 = ap_const_logic_1;
    } else {
        weight_12_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_13_V_address0() {
    weight_13_V_address0 = weight_13_V_addr_reg_8369.read();
}

void subconv_1x1_4_p::thread_weight_13_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        weight_13_V_ce0 = ap_const_logic_1;
    } else {
        weight_13_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_14_V_address0() {
    weight_14_V_address0 = weight_14_V_addr_reg_8374.read();
}

void subconv_1x1_4_p::thread_weight_14_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        weight_14_V_ce0 = ap_const_logic_1;
    } else {
        weight_14_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_15_V_address0() {
    weight_15_V_address0 = weight_15_V_addr_reg_8379.read();
}

void subconv_1x1_4_p::thread_weight_15_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        weight_15_V_ce0 = ap_const_logic_1;
    } else {
        weight_15_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_16_V_address0() {
    weight_16_V_address0 = weight_16_V_addr_reg_8384.read();
}

void subconv_1x1_4_p::thread_weight_16_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        weight_16_V_ce0 = ap_const_logic_1;
    } else {
        weight_16_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_17_V_address0() {
    weight_17_V_address0 = weight_17_V_addr_reg_8389.read();
}

void subconv_1x1_4_p::thread_weight_17_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        weight_17_V_ce0 = ap_const_logic_1;
    } else {
        weight_17_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_18_V_address0() {
    weight_18_V_address0 = weight_18_V_addr_reg_8394.read();
}

void subconv_1x1_4_p::thread_weight_18_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        weight_18_V_ce0 = ap_const_logic_1;
    } else {
        weight_18_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_19_V_address0() {
    weight_19_V_address0 = weight_19_V_addr_reg_8399.read();
}

void subconv_1x1_4_p::thread_weight_19_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        weight_19_V_ce0 = ap_const_logic_1;
    } else {
        weight_19_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_1_V_address0() {
    weight_1_V_address0 = weight_1_V_addr_reg_8309.read();
}

void subconv_1x1_4_p::thread_weight_1_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        weight_1_V_ce0 = ap_const_logic_1;
    } else {
        weight_1_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_20_V_address0() {
    weight_20_V_address0 = weight_20_V_addr_reg_8404.read();
}

void subconv_1x1_4_p::thread_weight_20_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        weight_20_V_ce0 = ap_const_logic_1;
    } else {
        weight_20_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_21_V_address0() {
    weight_21_V_address0 = weight_21_V_addr_reg_8409.read();
}

void subconv_1x1_4_p::thread_weight_21_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        weight_21_V_ce0 = ap_const_logic_1;
    } else {
        weight_21_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_22_V_address0() {
    weight_22_V_address0 = weight_22_V_addr_reg_8414.read();
}

void subconv_1x1_4_p::thread_weight_22_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        weight_22_V_ce0 = ap_const_logic_1;
    } else {
        weight_22_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_23_V_address0() {
    weight_23_V_address0 = weight_23_V_addr_reg_8419.read();
}

void subconv_1x1_4_p::thread_weight_23_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        weight_23_V_ce0 = ap_const_logic_1;
    } else {
        weight_23_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_24_V_address0() {
    weight_24_V_address0 = weight_24_V_addr_reg_8839.read();
}

void subconv_1x1_4_p::thread_weight_24_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        weight_24_V_ce0 = ap_const_logic_1;
    } else {
        weight_24_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_25_V_address0() {
    weight_25_V_address0 = weight_25_V_addr_reg_8844.read();
}

void subconv_1x1_4_p::thread_weight_25_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        weight_25_V_ce0 = ap_const_logic_1;
    } else {
        weight_25_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_26_V_address0() {
    weight_26_V_address0 = weight_26_V_addr_reg_8849.read();
}

void subconv_1x1_4_p::thread_weight_26_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        weight_26_V_ce0 = ap_const_logic_1;
    } else {
        weight_26_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_27_V_address0() {
    weight_27_V_address0 = weight_27_V_addr_reg_8854.read();
}

void subconv_1x1_4_p::thread_weight_27_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        weight_27_V_ce0 = ap_const_logic_1;
    } else {
        weight_27_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_28_V_address0() {
    weight_28_V_address0 = weight_28_V_addr_reg_8859.read();
}

void subconv_1x1_4_p::thread_weight_28_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        weight_28_V_ce0 = ap_const_logic_1;
    } else {
        weight_28_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_29_V_address0() {
    weight_29_V_address0 = weight_29_V_addr_reg_8864.read();
}

void subconv_1x1_4_p::thread_weight_29_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        weight_29_V_ce0 = ap_const_logic_1;
    } else {
        weight_29_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_2_V_address0() {
    weight_2_V_address0 = weight_2_V_addr_reg_8314.read();
}

void subconv_1x1_4_p::thread_weight_2_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        weight_2_V_ce0 = ap_const_logic_1;
    } else {
        weight_2_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_30_V_address0() {
    weight_30_V_address0 = weight_30_V_addr_reg_8869.read();
}

void subconv_1x1_4_p::thread_weight_30_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        weight_30_V_ce0 = ap_const_logic_1;
    } else {
        weight_30_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_31_V_address0() {
    weight_31_V_address0 = weight_31_V_addr_reg_8874.read();
}

void subconv_1x1_4_p::thread_weight_31_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        weight_31_V_ce0 = ap_const_logic_1;
    } else {
        weight_31_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_32_V_address0() {
    weight_32_V_address0 = weight_32_V_addr_reg_8879.read();
}

void subconv_1x1_4_p::thread_weight_32_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        weight_32_V_ce0 = ap_const_logic_1;
    } else {
        weight_32_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_33_V_address0() {
    weight_33_V_address0 = weight_33_V_addr_reg_8884.read();
}

void subconv_1x1_4_p::thread_weight_33_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        weight_33_V_ce0 = ap_const_logic_1;
    } else {
        weight_33_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_34_V_address0() {
    weight_34_V_address0 = weight_34_V_addr_reg_8889.read();
}

void subconv_1x1_4_p::thread_weight_34_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        weight_34_V_ce0 = ap_const_logic_1;
    } else {
        weight_34_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_35_V_address0() {
    weight_35_V_address0 = weight_35_V_addr_reg_8894.read();
}

void subconv_1x1_4_p::thread_weight_35_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        weight_35_V_ce0 = ap_const_logic_1;
    } else {
        weight_35_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_36_V_address0() {
    weight_36_V_address0 = weight_36_V_addr_reg_8899.read();
}

void subconv_1x1_4_p::thread_weight_36_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        weight_36_V_ce0 = ap_const_logic_1;
    } else {
        weight_36_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_37_V_address0() {
    weight_37_V_address0 = weight_37_V_addr_reg_8904.read();
}

void subconv_1x1_4_p::thread_weight_37_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        weight_37_V_ce0 = ap_const_logic_1;
    } else {
        weight_37_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_38_V_address0() {
    weight_38_V_address0 = weight_38_V_addr_reg_8909.read();
}

void subconv_1x1_4_p::thread_weight_38_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        weight_38_V_ce0 = ap_const_logic_1;
    } else {
        weight_38_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_39_V_address0() {
    weight_39_V_address0 = weight_39_V_addr_reg_8914.read();
}

void subconv_1x1_4_p::thread_weight_39_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        weight_39_V_ce0 = ap_const_logic_1;
    } else {
        weight_39_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_3_V_address0() {
    weight_3_V_address0 = weight_3_V_addr_reg_8319.read();
}

void subconv_1x1_4_p::thread_weight_3_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        weight_3_V_ce0 = ap_const_logic_1;
    } else {
        weight_3_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_40_V_address0() {
    weight_40_V_address0 = weight_40_V_addr_reg_8919.read();
}

void subconv_1x1_4_p::thread_weight_40_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        weight_40_V_ce0 = ap_const_logic_1;
    } else {
        weight_40_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_41_V_address0() {
    weight_41_V_address0 = weight_41_V_addr_reg_8924.read();
}

void subconv_1x1_4_p::thread_weight_41_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        weight_41_V_ce0 = ap_const_logic_1;
    } else {
        weight_41_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_42_V_address0() {
    weight_42_V_address0 = weight_42_V_addr_reg_8929.read();
}

void subconv_1x1_4_p::thread_weight_42_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        weight_42_V_ce0 = ap_const_logic_1;
    } else {
        weight_42_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_43_V_address0() {
    weight_43_V_address0 = weight_43_V_addr_reg_8934.read();
}

void subconv_1x1_4_p::thread_weight_43_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        weight_43_V_ce0 = ap_const_logic_1;
    } else {
        weight_43_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_44_V_address0() {
    weight_44_V_address0 = weight_44_V_addr_reg_8939.read();
}

void subconv_1x1_4_p::thread_weight_44_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        weight_44_V_ce0 = ap_const_logic_1;
    } else {
        weight_44_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_45_V_address0() {
    weight_45_V_address0 = weight_45_V_addr_reg_8944.read();
}

void subconv_1x1_4_p::thread_weight_45_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        weight_45_V_ce0 = ap_const_logic_1;
    } else {
        weight_45_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_46_V_address0() {
    weight_46_V_address0 = weight_46_V_addr_reg_8949.read();
}

void subconv_1x1_4_p::thread_weight_46_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        weight_46_V_ce0 = ap_const_logic_1;
    } else {
        weight_46_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_47_V_address0() {
    weight_47_V_address0 = weight_47_V_addr_reg_8954.read();
}

void subconv_1x1_4_p::thread_weight_47_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        weight_47_V_ce0 = ap_const_logic_1;
    } else {
        weight_47_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_48_V_address0() {
    weight_48_V_address0 = weight_48_V_addr_reg_8424.read();
}

void subconv_1x1_4_p::thread_weight_48_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        weight_48_V_ce0 = ap_const_logic_1;
    } else {
        weight_48_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_49_V_address0() {
    weight_49_V_address0 = weight_49_V_addr_reg_8429.read();
}

void subconv_1x1_4_p::thread_weight_49_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        weight_49_V_ce0 = ap_const_logic_1;
    } else {
        weight_49_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_4_V_address0() {
    weight_4_V_address0 = weight_4_V_addr_reg_8324.read();
}

void subconv_1x1_4_p::thread_weight_4_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        weight_4_V_ce0 = ap_const_logic_1;
    } else {
        weight_4_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_50_V_address0() {
    weight_50_V_address0 = weight_50_V_addr_reg_8434.read();
}

void subconv_1x1_4_p::thread_weight_50_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        weight_50_V_ce0 = ap_const_logic_1;
    } else {
        weight_50_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_51_V_address0() {
    weight_51_V_address0 = weight_51_V_addr_reg_8439.read();
}

void subconv_1x1_4_p::thread_weight_51_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        weight_51_V_ce0 = ap_const_logic_1;
    } else {
        weight_51_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_52_V_address0() {
    weight_52_V_address0 = weight_52_V_addr_reg_8444.read();
}

void subconv_1x1_4_p::thread_weight_52_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        weight_52_V_ce0 = ap_const_logic_1;
    } else {
        weight_52_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_53_V_address0() {
    weight_53_V_address0 = weight_53_V_addr_reg_8449.read();
}

void subconv_1x1_4_p::thread_weight_53_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        weight_53_V_ce0 = ap_const_logic_1;
    } else {
        weight_53_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_54_V_address0() {
    weight_54_V_address0 = weight_54_V_addr_reg_8454.read();
}

void subconv_1x1_4_p::thread_weight_54_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        weight_54_V_ce0 = ap_const_logic_1;
    } else {
        weight_54_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_55_V_address0() {
    weight_55_V_address0 = weight_55_V_addr_reg_8459.read();
}

void subconv_1x1_4_p::thread_weight_55_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        weight_55_V_ce0 = ap_const_logic_1;
    } else {
        weight_55_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_56_V_address0() {
    weight_56_V_address0 = weight_56_V_addr_reg_8464.read();
}

void subconv_1x1_4_p::thread_weight_56_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        weight_56_V_ce0 = ap_const_logic_1;
    } else {
        weight_56_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_57_V_address0() {
    weight_57_V_address0 = weight_57_V_addr_reg_8469.read();
}

void subconv_1x1_4_p::thread_weight_57_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        weight_57_V_ce0 = ap_const_logic_1;
    } else {
        weight_57_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_58_V_address0() {
    weight_58_V_address0 = weight_58_V_addr_reg_8474.read();
}

void subconv_1x1_4_p::thread_weight_58_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        weight_58_V_ce0 = ap_const_logic_1;
    } else {
        weight_58_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_59_V_address0() {
    weight_59_V_address0 = weight_59_V_addr_reg_8479.read();
}

void subconv_1x1_4_p::thread_weight_59_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        weight_59_V_ce0 = ap_const_logic_1;
    } else {
        weight_59_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_5_V_address0() {
    weight_5_V_address0 = weight_5_V_addr_reg_8329.read();
}

void subconv_1x1_4_p::thread_weight_5_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        weight_5_V_ce0 = ap_const_logic_1;
    } else {
        weight_5_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_60_V_address0() {
    weight_60_V_address0 = weight_60_V_addr_reg_8484.read();
}

void subconv_1x1_4_p::thread_weight_60_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        weight_60_V_ce0 = ap_const_logic_1;
    } else {
        weight_60_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_61_V_address0() {
    weight_61_V_address0 = weight_61_V_addr_reg_8489.read();
}

void subconv_1x1_4_p::thread_weight_61_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        weight_61_V_ce0 = ap_const_logic_1;
    } else {
        weight_61_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_62_V_address0() {
    weight_62_V_address0 = weight_62_V_addr_reg_8494.read();
}

void subconv_1x1_4_p::thread_weight_62_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        weight_62_V_ce0 = ap_const_logic_1;
    } else {
        weight_62_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_63_V_address0() {
    weight_63_V_address0 = weight_63_V_addr_reg_8499.read();
}

void subconv_1x1_4_p::thread_weight_63_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        weight_63_V_ce0 = ap_const_logic_1;
    } else {
        weight_63_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_64_V_address0() {
    weight_64_V_address0 = weight_64_V_addr_reg_8504.read();
}

void subconv_1x1_4_p::thread_weight_64_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        weight_64_V_ce0 = ap_const_logic_1;
    } else {
        weight_64_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_65_V_address0() {
    weight_65_V_address0 = weight_65_V_addr_reg_8509.read();
}

void subconv_1x1_4_p::thread_weight_65_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        weight_65_V_ce0 = ap_const_logic_1;
    } else {
        weight_65_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_66_V_address0() {
    weight_66_V_address0 = weight_66_V_addr_reg_8514.read();
}

void subconv_1x1_4_p::thread_weight_66_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        weight_66_V_ce0 = ap_const_logic_1;
    } else {
        weight_66_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_67_V_address0() {
    weight_67_V_address0 = weight_67_V_addr_reg_8519.read();
}

void subconv_1x1_4_p::thread_weight_67_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        weight_67_V_ce0 = ap_const_logic_1;
    } else {
        weight_67_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_68_V_address0() {
    weight_68_V_address0 = weight_68_V_addr_reg_8524.read();
}

void subconv_1x1_4_p::thread_weight_68_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        weight_68_V_ce0 = ap_const_logic_1;
    } else {
        weight_68_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_69_V_address0() {
    weight_69_V_address0 = weight_69_V_addr_reg_8529.read();
}

void subconv_1x1_4_p::thread_weight_69_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        weight_69_V_ce0 = ap_const_logic_1;
    } else {
        weight_69_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_6_V_address0() {
    weight_6_V_address0 = weight_6_V_addr_reg_8334.read();
}

void subconv_1x1_4_p::thread_weight_6_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        weight_6_V_ce0 = ap_const_logic_1;
    } else {
        weight_6_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_70_V_address0() {
    weight_70_V_address0 = weight_70_V_addr_reg_8534.read();
}

void subconv_1x1_4_p::thread_weight_70_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        weight_70_V_ce0 = ap_const_logic_1;
    } else {
        weight_70_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_71_V_address0() {
    weight_71_V_address0 = weight_71_V_addr_reg_8539.read();
}

void subconv_1x1_4_p::thread_weight_71_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        weight_71_V_ce0 = ap_const_logic_1;
    } else {
        weight_71_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_72_V_address0() {
    weight_72_V_address0 = weight_72_V_addr_reg_8959.read();
}

void subconv_1x1_4_p::thread_weight_72_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        weight_72_V_ce0 = ap_const_logic_1;
    } else {
        weight_72_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_73_V_address0() {
    weight_73_V_address0 = weight_73_V_addr_reg_8964.read();
}

void subconv_1x1_4_p::thread_weight_73_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        weight_73_V_ce0 = ap_const_logic_1;
    } else {
        weight_73_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_74_V_address0() {
    weight_74_V_address0 = weight_74_V_addr_reg_8969.read();
}

void subconv_1x1_4_p::thread_weight_74_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        weight_74_V_ce0 = ap_const_logic_1;
    } else {
        weight_74_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_75_V_address0() {
    weight_75_V_address0 = weight_75_V_addr_reg_8974.read();
}

void subconv_1x1_4_p::thread_weight_75_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        weight_75_V_ce0 = ap_const_logic_1;
    } else {
        weight_75_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_76_V_address0() {
    weight_76_V_address0 = weight_76_V_addr_reg_8979.read();
}

void subconv_1x1_4_p::thread_weight_76_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        weight_76_V_ce0 = ap_const_logic_1;
    } else {
        weight_76_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_77_V_address0() {
    weight_77_V_address0 = weight_77_V_addr_reg_8984.read();
}

void subconv_1x1_4_p::thread_weight_77_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        weight_77_V_ce0 = ap_const_logic_1;
    } else {
        weight_77_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_78_V_address0() {
    weight_78_V_address0 = weight_78_V_addr_reg_8989.read();
}

void subconv_1x1_4_p::thread_weight_78_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        weight_78_V_ce0 = ap_const_logic_1;
    } else {
        weight_78_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_79_V_address0() {
    weight_79_V_address0 = weight_79_V_addr_reg_8994.read();
}

void subconv_1x1_4_p::thread_weight_79_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        weight_79_V_ce0 = ap_const_logic_1;
    } else {
        weight_79_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_7_V_address0() {
    weight_7_V_address0 = weight_7_V_addr_reg_8339.read();
}

void subconv_1x1_4_p::thread_weight_7_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        weight_7_V_ce0 = ap_const_logic_1;
    } else {
        weight_7_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_80_V_address0() {
    weight_80_V_address0 = weight_80_V_addr_reg_8999.read();
}

void subconv_1x1_4_p::thread_weight_80_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        weight_80_V_ce0 = ap_const_logic_1;
    } else {
        weight_80_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_81_V_address0() {
    weight_81_V_address0 = weight_81_V_addr_reg_9004.read();
}

void subconv_1x1_4_p::thread_weight_81_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        weight_81_V_ce0 = ap_const_logic_1;
    } else {
        weight_81_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_82_V_address0() {
    weight_82_V_address0 = weight_82_V_addr_reg_9009.read();
}

void subconv_1x1_4_p::thread_weight_82_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        weight_82_V_ce0 = ap_const_logic_1;
    } else {
        weight_82_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_83_V_address0() {
    weight_83_V_address0 = weight_83_V_addr_reg_9014.read();
}

void subconv_1x1_4_p::thread_weight_83_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        weight_83_V_ce0 = ap_const_logic_1;
    } else {
        weight_83_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_84_V_address0() {
    weight_84_V_address0 = weight_84_V_addr_reg_9019.read();
}

void subconv_1x1_4_p::thread_weight_84_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        weight_84_V_ce0 = ap_const_logic_1;
    } else {
        weight_84_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_85_V_address0() {
    weight_85_V_address0 = weight_85_V_addr_reg_9024.read();
}

void subconv_1x1_4_p::thread_weight_85_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        weight_85_V_ce0 = ap_const_logic_1;
    } else {
        weight_85_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_86_V_address0() {
    weight_86_V_address0 = weight_86_V_addr_reg_9029.read();
}

void subconv_1x1_4_p::thread_weight_86_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        weight_86_V_ce0 = ap_const_logic_1;
    } else {
        weight_86_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_87_V_address0() {
    weight_87_V_address0 = weight_87_V_addr_reg_9034.read();
}

void subconv_1x1_4_p::thread_weight_87_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        weight_87_V_ce0 = ap_const_logic_1;
    } else {
        weight_87_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_88_V_address0() {
    weight_88_V_address0 = weight_88_V_addr_reg_9039.read();
}

void subconv_1x1_4_p::thread_weight_88_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        weight_88_V_ce0 = ap_const_logic_1;
    } else {
        weight_88_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_89_V_address0() {
    weight_89_V_address0 = weight_89_V_addr_reg_9044.read();
}

void subconv_1x1_4_p::thread_weight_89_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        weight_89_V_ce0 = ap_const_logic_1;
    } else {
        weight_89_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_8_V_address0() {
    weight_8_V_address0 = weight_8_V_addr_reg_8344.read();
}

void subconv_1x1_4_p::thread_weight_8_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        weight_8_V_ce0 = ap_const_logic_1;
    } else {
        weight_8_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_90_V_address0() {
    weight_90_V_address0 = weight_90_V_addr_reg_9049.read();
}

void subconv_1x1_4_p::thread_weight_90_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        weight_90_V_ce0 = ap_const_logic_1;
    } else {
        weight_90_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_91_V_address0() {
    weight_91_V_address0 = weight_91_V_addr_reg_9054.read();
}

void subconv_1x1_4_p::thread_weight_91_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        weight_91_V_ce0 = ap_const_logic_1;
    } else {
        weight_91_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_92_V_address0() {
    weight_92_V_address0 = weight_92_V_addr_reg_9059.read();
}

void subconv_1x1_4_p::thread_weight_92_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        weight_92_V_ce0 = ap_const_logic_1;
    } else {
        weight_92_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_93_V_address0() {
    weight_93_V_address0 = weight_93_V_addr_reg_9064.read();
}

void subconv_1x1_4_p::thread_weight_93_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        weight_93_V_ce0 = ap_const_logic_1;
    } else {
        weight_93_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_94_V_address0() {
    weight_94_V_address0 = weight_94_V_addr_reg_9069.read();
}

void subconv_1x1_4_p::thread_weight_94_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        weight_94_V_ce0 = ap_const_logic_1;
    } else {
        weight_94_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_95_V_address0() {
    weight_95_V_address0 = weight_95_V_addr_reg_9074.read();
}

void subconv_1x1_4_p::thread_weight_95_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        weight_95_V_ce0 = ap_const_logic_1;
    } else {
        weight_95_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_9_V_address0() {
    weight_9_V_address0 = weight_9_V_addr_reg_8349.read();
}

void subconv_1x1_4_p::thread_weight_9_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        weight_9_V_ce0 = ap_const_logic_1;
    } else {
        weight_9_V_ce0 = ap_const_logic_0;
    }
}

}

