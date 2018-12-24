#include "subconv_1x1_8p_p.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void subconv_1x1_8p_p::thread_tmp_247_fu_1727_p3() {
    tmp_247_fu_1727_p3 = esl_concat<3,1>(indvars_iv1_reg_1108.read(), ap_const_lv1_0);
}

void subconv_1x1_8p_p::thread_tmp_248_cast_fu_1635_p1() {
    tmp_248_cast_fu_1635_p1 = esl_zext<32,15>(tmp_238_fu_1630_p2.read());
}

void subconv_1x1_8p_p::thread_tmp_248_fu_1739_p2() {
    tmp_248_fu_1739_p2 = (!p_shl45_cast_fu_1735_p1.read().is_01() || !p_shl44_cast_fu_1723_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl45_cast_fu_1735_p1.read()) + sc_biguint<10>(p_shl44_cast_fu_1723_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_249_fu_1745_p2() {
    tmp_249_fu_1745_p2 = (!tmp_248_fu_1739_p2.read().is_01() || !h1_cast_cast1_reg_7979.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_248_fu_1739_p2.read()) + sc_biguint<10>(h1_cast_cast1_reg_7979.read()));
}

void subconv_1x1_8p_p::thread_tmp_250_fu_1750_p1() {
    tmp_250_fu_1750_p1 = tmp_249_fu_1745_p2.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_251_fu_1770_p2() {
    tmp_251_fu_1770_p2 = (!p_shl53_cast_fu_1762_p3.read().is_01() || !p_shl52_cast_fu_1754_p3.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl53_cast_fu_1762_p3.read()) + sc_biguint<11>(p_shl52_cast_fu_1754_p3.read()));
}

void subconv_1x1_8p_p::thread_tmp_252_fu_1776_p2() {
    tmp_252_fu_1776_p2 = (!tmp_251_fu_1770_p2.read().is_01() || !w2_cast_cast1_reg_7995.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_251_fu_1770_p2.read()) + sc_biguint<11>(w2_cast_cast1_reg_7995.read()));
}

void subconv_1x1_8p_p::thread_tmp_253_fu_1781_p3() {
    tmp_253_fu_1781_p3 = esl_concat<4,7>(indvars_iv2_reg_1119.read(), ap_const_lv7_0);
}

void subconv_1x1_8p_p::thread_tmp_254_cast_fu_1882_p1() {
    tmp_254_cast_fu_1882_p1 = esl_sext<32,11>(tmp_245_reg_8047.read());
}

void subconv_1x1_8p_p::thread_tmp_254_fu_1789_p3() {
    tmp_254_fu_1789_p3 = esl_concat<4,5>(indvars_iv2_reg_1119.read(), ap_const_lv5_0);
}

void subconv_1x1_8p_p::thread_tmp_255_fu_1801_p2() {
    tmp_255_fu_1801_p2 = (!tmp_253_fu_1781_p3.read().is_01() || !p_shl61_cast_fu_1797_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_253_fu_1781_p3.read()) - sc_biguint<11>(p_shl61_cast_fu_1797_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_256_fu_1807_p2() {
    tmp_256_fu_1807_p2 = (!tmp_255_fu_1801_p2.read().is_01() || !ci_cast_cast_reg_8015.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_255_fu_1801_p2.read()) + sc_biguint<11>(ci_cast_cast_reg_8015.read()));
}

void subconv_1x1_8p_p::thread_tmp_257_fu_1812_p3() {
    tmp_257_fu_1812_p3 = esl_concat<4,3>(indvars_iv2_reg_1119.read(), ap_const_lv3_0);
}

void subconv_1x1_8p_p::thread_tmp_258_fu_1824_p3() {
    tmp_258_fu_1824_p3 = esl_concat<4,1>(indvars_iv2_reg_1119.read(), ap_const_lv1_0);
}

void subconv_1x1_8p_p::thread_tmp_259_fu_1836_p2() {
    tmp_259_fu_1836_p2 = (!p_shl69_cast_fu_1832_p1.read().is_01() || !p_shl68_cast_fu_1820_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl69_cast_fu_1832_p1.read()) + sc_biguint<11>(p_shl68_cast_fu_1820_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_260_fu_1842_p2() {
    tmp_260_fu_1842_p2 = (!tmp_259_fu_1836_p2.read().is_01() || !h1_cast_cast_reg_7984.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_259_fu_1836_p2.read()) + sc_biguint<11>(h1_cast_cast_reg_7984.read()));
}

void subconv_1x1_8p_p::thread_tmp_261_fu_1847_p2() {
    tmp_261_fu_1847_p2 = (!ap_const_lv11_3.is_01())? sc_lv<11>(): tmp_260_fu_1842_p2.read() << (unsigned short)ap_const_lv11_3.to_uint();
}

void subconv_1x1_8p_p::thread_tmp_262_cast_fu_1912_p1() {
    tmp_262_cast_fu_1912_p1 = esl_zext<32,11>(tmp_252_reg_8052.read());
}

void subconv_1x1_8p_p::thread_tmp_262_fu_1853_p2() {
    tmp_262_fu_1853_p2 = (!ap_const_lv11_1.is_01())? sc_lv<11>(): tmp_260_fu_1842_p2.read() << (unsigned short)ap_const_lv11_1.to_uint();
}

void subconv_1x1_8p_p::thread_tmp_263_fu_1859_p2() {
    tmp_263_fu_1859_p2 = (!tmp_262_fu_1853_p2.read().is_01() || !tmp_261_fu_1847_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_262_fu_1853_p2.read()) + sc_biguint<11>(tmp_261_fu_1847_p2.read()));
}

void subconv_1x1_8p_p::thread_tmp_264_fu_1865_p2() {
    tmp_264_fu_1865_p2 = (!tmp_263_fu_1859_p2.read().is_01() || !w2_cast_cast1_reg_7995.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_263_fu_1859_p2.read()) + sc_biguint<11>(w2_cast_cast1_reg_7995.read()));
}

void subconv_1x1_8p_p::thread_tmp_266_cast_fu_1897_p1() {
    tmp_266_cast_fu_1897_p1 = esl_sext<32,11>(tmp_256_reg_8057.read());
}

void subconv_1x1_8p_p::thread_tmp_267_fu_2271_p3() {
    tmp_267_fu_2271_p3 = p_Val2_s_fu_2244_p2.read().range(13, 13);
}

void subconv_1x1_8p_p::thread_tmp_268_fu_2285_p3() {
    tmp_268_fu_2285_p3 = p_Val2_2_fu_2279_p2.read().range(7, 7);
}

void subconv_1x1_8p_p::thread_tmp_269_fu_4942_p3() {
    tmp_269_fu_4942_p3 = p_Val2_s_reg_8717.read().range(14, 14);
}

void subconv_1x1_8p_p::thread_tmp_272_fu_2384_p3() {
    tmp_272_fu_2384_p3 = p_Val2_3_fu_2357_p2.read().range(13, 13);
}

void subconv_1x1_8p_p::thread_tmp_273_fu_2398_p3() {
    tmp_273_fu_2398_p3 = p_Val2_5_fu_2392_p2.read().range(7, 7);
}

void subconv_1x1_8p_p::thread_tmp_274_cast_fu_1927_p1() {
    tmp_274_cast_fu_1927_p1 = esl_zext<32,11>(tmp_264_reg_8062.read());
}

void subconv_1x1_8p_p::thread_tmp_274_fu_5025_p3() {
    tmp_274_fu_5025_p3 = p_Val2_3_reg_8764.read().range(14, 14);
}

void subconv_1x1_8p_p::thread_tmp_277_fu_2497_p3() {
    tmp_277_fu_2497_p3 = p_Val2_50_1_fu_2470_p2.read().range(13, 13);
}

void subconv_1x1_8p_p::thread_tmp_278_fu_2511_p3() {
    tmp_278_fu_2511_p3 = p_Val2_52_1_fu_2505_p2.read().range(7, 7);
}

void subconv_1x1_8p_p::thread_tmp_279_fu_5108_p3() {
    tmp_279_fu_5108_p3 = p_Val2_50_1_reg_8811.read().range(14, 14);
}

void subconv_1x1_8p_p::thread_tmp_282_fu_2610_p3() {
    tmp_282_fu_2610_p3 = p_Val2_55_1_fu_2583_p2.read().range(13, 13);
}

void subconv_1x1_8p_p::thread_tmp_283_fu_2624_p3() {
    tmp_283_fu_2624_p3 = p_Val2_57_1_fu_2618_p2.read().range(7, 7);
}

void subconv_1x1_8p_p::thread_tmp_284_fu_5191_p3() {
    tmp_284_fu_5191_p3 = p_Val2_55_1_reg_8858.read().range(14, 14);
}

void subconv_1x1_8p_p::thread_tmp_287_fu_2723_p3() {
    tmp_287_fu_2723_p3 = p_Val2_50_2_fu_2696_p2.read().range(13, 13);
}

void subconv_1x1_8p_p::thread_tmp_288_fu_2737_p3() {
    tmp_288_fu_2737_p3 = p_Val2_52_2_fu_2731_p2.read().range(7, 7);
}

void subconv_1x1_8p_p::thread_tmp_289_fu_5274_p3() {
    tmp_289_fu_5274_p3 = p_Val2_50_2_reg_8905.read().range(14, 14);
}

void subconv_1x1_8p_p::thread_tmp_292_fu_2836_p3() {
    tmp_292_fu_2836_p3 = p_Val2_55_2_fu_2809_p2.read().range(13, 13);
}

void subconv_1x1_8p_p::thread_tmp_293_fu_2850_p3() {
    tmp_293_fu_2850_p3 = p_Val2_57_2_fu_2844_p2.read().range(7, 7);
}

void subconv_1x1_8p_p::thread_tmp_294_fu_5357_p3() {
    tmp_294_fu_5357_p3 = p_Val2_55_2_reg_8952.read().range(14, 14);
}

void subconv_1x1_8p_p::thread_tmp_297_fu_2949_p3() {
    tmp_297_fu_2949_p3 = p_Val2_50_3_fu_2922_p2.read().range(13, 13);
}

void subconv_1x1_8p_p::thread_tmp_298_fu_2963_p3() {
    tmp_298_fu_2963_p3 = p_Val2_52_3_fu_2957_p2.read().range(7, 7);
}

void subconv_1x1_8p_p::thread_tmp_299_fu_5440_p3() {
    tmp_299_fu_5440_p3 = p_Val2_50_3_reg_8999.read().range(14, 14);
}

void subconv_1x1_8p_p::thread_tmp_302_fu_3062_p3() {
    tmp_302_fu_3062_p3 = p_Val2_55_3_fu_3035_p2.read().range(13, 13);
}

void subconv_1x1_8p_p::thread_tmp_303_fu_3076_p3() {
    tmp_303_fu_3076_p3 = p_Val2_57_3_fu_3070_p2.read().range(7, 7);
}

void subconv_1x1_8p_p::thread_tmp_304_fu_5523_p3() {
    tmp_304_fu_5523_p3 = p_Val2_55_3_reg_9046.read().range(14, 14);
}

void subconv_1x1_8p_p::thread_tmp_307_fu_3175_p3() {
    tmp_307_fu_3175_p3 = p_Val2_50_4_fu_3148_p2.read().range(13, 13);
}

void subconv_1x1_8p_p::thread_tmp_308_fu_3189_p3() {
    tmp_308_fu_3189_p3 = p_Val2_52_4_fu_3183_p2.read().range(7, 7);
}

void subconv_1x1_8p_p::thread_tmp_309_fu_5606_p3() {
    tmp_309_fu_5606_p3 = p_Val2_50_4_reg_9093.read().range(14, 14);
}

void subconv_1x1_8p_p::thread_tmp_312_fu_3288_p3() {
    tmp_312_fu_3288_p3 = p_Val2_55_4_fu_3261_p2.read().range(13, 13);
}

void subconv_1x1_8p_p::thread_tmp_313_fu_3302_p3() {
    tmp_313_fu_3302_p3 = p_Val2_57_4_fu_3296_p2.read().range(7, 7);
}

void subconv_1x1_8p_p::thread_tmp_314_fu_5689_p3() {
    tmp_314_fu_5689_p3 = p_Val2_55_4_reg_9140.read().range(14, 14);
}

void subconv_1x1_8p_p::thread_tmp_317_fu_3401_p3() {
    tmp_317_fu_3401_p3 = p_Val2_50_5_fu_3374_p2.read().range(13, 13);
}

void subconv_1x1_8p_p::thread_tmp_318_fu_3415_p3() {
    tmp_318_fu_3415_p3 = p_Val2_52_5_fu_3409_p2.read().range(7, 7);
}

void subconv_1x1_8p_p::thread_tmp_319_fu_5772_p3() {
    tmp_319_fu_5772_p3 = p_Val2_50_5_reg_9187.read().range(14, 14);
}

void subconv_1x1_8p_p::thread_tmp_322_fu_3514_p3() {
    tmp_322_fu_3514_p3 = p_Val2_55_5_fu_3487_p2.read().range(13, 13);
}

void subconv_1x1_8p_p::thread_tmp_323_fu_3528_p3() {
    tmp_323_fu_3528_p3 = p_Val2_57_5_fu_3522_p2.read().range(7, 7);
}

void subconv_1x1_8p_p::thread_tmp_324_fu_5855_p3() {
    tmp_324_fu_5855_p3 = p_Val2_55_5_reg_9234.read().range(14, 14);
}

void subconv_1x1_8p_p::thread_tmp_327_fu_3627_p3() {
    tmp_327_fu_3627_p3 = p_Val2_50_6_fu_3600_p2.read().range(13, 13);
}

void subconv_1x1_8p_p::thread_tmp_328_fu_3641_p3() {
    tmp_328_fu_3641_p3 = p_Val2_52_6_fu_3635_p2.read().range(7, 7);
}

void subconv_1x1_8p_p::thread_tmp_329_fu_5938_p3() {
    tmp_329_fu_5938_p3 = p_Val2_50_6_reg_9281.read().range(14, 14);
}

void subconv_1x1_8p_p::thread_tmp_332_fu_3740_p3() {
    tmp_332_fu_3740_p3 = p_Val2_55_6_fu_3713_p2.read().range(13, 13);
}

void subconv_1x1_8p_p::thread_tmp_333_fu_3754_p3() {
    tmp_333_fu_3754_p3 = p_Val2_57_6_fu_3748_p2.read().range(7, 7);
}

void subconv_1x1_8p_p::thread_tmp_334_fu_6021_p3() {
    tmp_334_fu_6021_p3 = p_Val2_55_6_reg_9328.read().range(14, 14);
}

void subconv_1x1_8p_p::thread_tmp_337_fu_3853_p3() {
    tmp_337_fu_3853_p3 = p_Val2_50_7_fu_3826_p2.read().range(13, 13);
}

void subconv_1x1_8p_p::thread_tmp_338_fu_3867_p3() {
    tmp_338_fu_3867_p3 = p_Val2_52_7_fu_3861_p2.read().range(7, 7);
}

void subconv_1x1_8p_p::thread_tmp_339_fu_6104_p3() {
    tmp_339_fu_6104_p3 = p_Val2_50_7_reg_9375.read().range(14, 14);
}

void subconv_1x1_8p_p::thread_tmp_342_fu_3966_p3() {
    tmp_342_fu_3966_p3 = p_Val2_55_7_fu_3939_p2.read().range(13, 13);
}

void subconv_1x1_8p_p::thread_tmp_343_fu_3980_p3() {
    tmp_343_fu_3980_p3 = p_Val2_57_7_fu_3974_p2.read().range(7, 7);
}

void subconv_1x1_8p_p::thread_tmp_344_fu_6187_p3() {
    tmp_344_fu_6187_p3 = p_Val2_55_7_reg_9422.read().range(14, 14);
}

void subconv_1x1_8p_p::thread_tmp_347_fu_4079_p3() {
    tmp_347_fu_4079_p3 = p_Val2_50_8_fu_4052_p2.read().range(13, 13);
}

void subconv_1x1_8p_p::thread_tmp_348_fu_4093_p3() {
    tmp_348_fu_4093_p3 = p_Val2_52_8_fu_4087_p2.read().range(7, 7);
}

void subconv_1x1_8p_p::thread_tmp_349_fu_6270_p3() {
    tmp_349_fu_6270_p3 = p_Val2_50_8_reg_9469.read().range(14, 14);
}

void subconv_1x1_8p_p::thread_tmp_352_fu_4192_p3() {
    tmp_352_fu_4192_p3 = p_Val2_55_8_fu_4165_p2.read().range(13, 13);
}

void subconv_1x1_8p_p::thread_tmp_353_fu_4206_p3() {
    tmp_353_fu_4206_p3 = p_Val2_57_8_fu_4200_p2.read().range(7, 7);
}

void subconv_1x1_8p_p::thread_tmp_354_fu_6353_p3() {
    tmp_354_fu_6353_p3 = p_Val2_55_8_reg_9516.read().range(14, 14);
}

void subconv_1x1_8p_p::thread_tmp_357_fu_4305_p3() {
    tmp_357_fu_4305_p3 = p_Val2_50_9_fu_4278_p2.read().range(13, 13);
}

void subconv_1x1_8p_p::thread_tmp_358_fu_4319_p3() {
    tmp_358_fu_4319_p3 = p_Val2_52_9_fu_4313_p2.read().range(7, 7);
}

void subconv_1x1_8p_p::thread_tmp_359_fu_6436_p3() {
    tmp_359_fu_6436_p3 = p_Val2_50_9_reg_9563.read().range(14, 14);
}

void subconv_1x1_8p_p::thread_tmp_362_fu_4418_p3() {
    tmp_362_fu_4418_p3 = p_Val2_55_9_fu_4391_p2.read().range(13, 13);
}

void subconv_1x1_8p_p::thread_tmp_363_fu_4432_p3() {
    tmp_363_fu_4432_p3 = p_Val2_57_9_fu_4426_p2.read().range(7, 7);
}

void subconv_1x1_8p_p::thread_tmp_364_fu_6519_p3() {
    tmp_364_fu_6519_p3 = p_Val2_55_9_reg_9610.read().range(14, 14);
}

void subconv_1x1_8p_p::thread_tmp_367_fu_4531_p3() {
    tmp_367_fu_4531_p3 = p_Val2_50_s_fu_4504_p2.read().range(13, 13);
}

void subconv_1x1_8p_p::thread_tmp_368_fu_4545_p3() {
    tmp_368_fu_4545_p3 = p_Val2_52_s_fu_4539_p2.read().range(7, 7);
}

void subconv_1x1_8p_p::thread_tmp_369_fu_6602_p3() {
    tmp_369_fu_6602_p3 = p_Val2_50_s_reg_9657.read().range(14, 14);
}

void subconv_1x1_8p_p::thread_tmp_372_fu_4644_p3() {
    tmp_372_fu_4644_p3 = p_Val2_55_s_fu_4617_p2.read().range(13, 13);
}

void subconv_1x1_8p_p::thread_tmp_373_fu_4658_p3() {
    tmp_373_fu_4658_p3 = p_Val2_57_s_fu_4652_p2.read().range(7, 7);
}

void subconv_1x1_8p_p::thread_tmp_374_fu_6685_p3() {
    tmp_374_fu_6685_p3 = p_Val2_55_s_reg_9704.read().range(14, 14);
}

void subconv_1x1_8p_p::thread_tmp_377_fu_4757_p3() {
    tmp_377_fu_4757_p3 = p_Val2_50_10_fu_4730_p2.read().range(13, 13);
}

void subconv_1x1_8p_p::thread_tmp_378_fu_4771_p3() {
    tmp_378_fu_4771_p3 = p_Val2_52_10_fu_4765_p2.read().range(7, 7);
}

void subconv_1x1_8p_p::thread_tmp_379_fu_6768_p3() {
    tmp_379_fu_6768_p3 = p_Val2_50_10_reg_9751.read().range(14, 14);
}

void subconv_1x1_8p_p::thread_tmp_382_fu_4870_p3() {
    tmp_382_fu_4870_p3 = p_Val2_55_10_fu_4843_p2.read().range(13, 13);
}

void subconv_1x1_8p_p::thread_tmp_383_fu_4884_p3() {
    tmp_383_fu_4884_p3 = p_Val2_57_10_fu_4878_p2.read().range(7, 7);
}

void subconv_1x1_8p_p::thread_tmp_384_fu_6851_p3() {
    tmp_384_fu_6851_p3 = p_Val2_55_10_reg_9798.read().range(14, 14);
}

void subconv_1x1_8p_p::thread_tmp_84_fu_2230_p3() {
    tmp_84_fu_2230_p3 = esl_concat<8,6>(ShuffleConvs_2_Downs_49_reg_8367.read(), ap_const_lv6_0);
}

void subconv_1x1_8p_p::thread_tmp_85_fu_2241_p1() {
    tmp_85_fu_2241_p1 = esl_sext<17,16>(rr_0_V_reg_8357.read());
}

void subconv_1x1_8p_p::thread_tmp_86_fu_2268_p1() {
    tmp_86_fu_2268_p1 = esl_zext<8,1>(tmp_266_reg_8372.read());
}

void subconv_1x1_8p_p::thread_tmp_87_fu_2293_p2() {
    tmp_87_fu_2293_p2 = (tmp_268_fu_2285_p3.read() ^ ap_const_lv1_1);
}

void subconv_1x1_8p_p::thread_tmp_88_fu_4954_p2() {
    tmp_88_fu_4954_p2 = (tmp_269_fu_4942_p3.read() ^ ap_const_lv1_1);
}

void subconv_1x1_8p_p::thread_tmp_89_fu_4986_p2() {
    tmp_89_fu_4986_p2 = (tmp_265_reg_8722.read() ^ ap_const_lv1_1);
}

void subconv_1x1_8p_p::thread_tmp_90_fu_2343_p3() {
    tmp_90_fu_2343_p3 = esl_concat<8,6>(ShuffleConvs_2_Downs_50_reg_8377.read(), ap_const_lv6_0);
}

void subconv_1x1_8p_p::thread_tmp_91_fu_2354_p1() {
    tmp_91_fu_2354_p1 = esl_sext<17,16>(rr_1_V_reg_8362.read());
}

void subconv_1x1_8p_p::thread_tmp_92_fu_2381_p1() {
    tmp_92_fu_2381_p1 = esl_zext<8,1>(tmp_271_reg_8382.read());
}

void subconv_1x1_8p_p::thread_tmp_93_fu_2406_p2() {
    tmp_93_fu_2406_p2 = (tmp_273_fu_2398_p3.read() ^ ap_const_lv1_1);
}

void subconv_1x1_8p_p::thread_tmp_94_fu_5037_p2() {
    tmp_94_fu_5037_p2 = (tmp_274_fu_5025_p3.read() ^ ap_const_lv1_1);
}

void subconv_1x1_8p_p::thread_tmp_95_fu_5069_p2() {
    tmp_95_fu_5069_p2 = (tmp_270_reg_8769.read() ^ ap_const_lv1_1);
}

void subconv_1x1_8p_p::thread_tmp_fu_1508_p1() {
    tmp_fu_1508_p1 = grp_fu_1358_p2.read().range(5-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_s_fu_7875_p13() {
    tmp_s_fu_7875_p13 = esl_zext<32,7>(grp_fu_7707_p2.read());
}

void subconv_1x1_8p_p::thread_underflow_10_fu_6674_p2() {
    underflow_10_fu_6674_p2 = (tmp_365_reg_9662.read() & tmp41_fu_6668_p2.read());
}

void subconv_1x1_8p_p::thread_underflow_11_fu_6840_p2() {
    underflow_11_fu_6840_p2 = (tmp_375_reg_9756.read() & tmp45_fu_6834_p2.read());
}

void subconv_1x1_8p_p::thread_underflow_1_fu_5180_p2() {
    underflow_1_fu_5180_p2 = (tmp_275_reg_8816.read() & tmp5_fu_5174_p2.read());
}

void subconv_1x1_8p_p::thread_underflow_2_fu_5346_p2() {
    underflow_2_fu_5346_p2 = (tmp_285_reg_8910.read() & tmp9_fu_5340_p2.read());
}

void subconv_1x1_8p_p::thread_underflow_3_fu_5512_p2() {
    underflow_3_fu_5512_p2 = (tmp_295_reg_9004.read() & tmp13_fu_5506_p2.read());
}

void subconv_1x1_8p_p::thread_underflow_4_fu_5678_p2() {
    underflow_4_fu_5678_p2 = (tmp_305_reg_9098.read() & tmp17_fu_5672_p2.read());
}

void subconv_1x1_8p_p::thread_underflow_5_fu_5844_p2() {
    underflow_5_fu_5844_p2 = (tmp_315_reg_9192.read() & tmp21_fu_5838_p2.read());
}

void subconv_1x1_8p_p::thread_underflow_6_fu_6010_p2() {
    underflow_6_fu_6010_p2 = (tmp_325_reg_9286.read() & tmp25_fu_6004_p2.read());
}

void subconv_1x1_8p_p::thread_underflow_7_fu_6176_p2() {
    underflow_7_fu_6176_p2 = (tmp_335_reg_9380.read() & tmp29_fu_6170_p2.read());
}

void subconv_1x1_8p_p::thread_underflow_8_10_fu_6923_p2() {
    underflow_8_10_fu_6923_p2 = (tmp_380_reg_9803.read() & tmp47_fu_6917_p2.read());
}

void subconv_1x1_8p_p::thread_underflow_8_1_fu_5263_p2() {
    underflow_8_1_fu_5263_p2 = (tmp_280_reg_8863.read() & tmp7_fu_5257_p2.read());
}

void subconv_1x1_8p_p::thread_underflow_8_2_fu_5429_p2() {
    underflow_8_2_fu_5429_p2 = (tmp_290_reg_8957.read() & tmp11_fu_5423_p2.read());
}

void subconv_1x1_8p_p::thread_underflow_8_3_fu_5595_p2() {
    underflow_8_3_fu_5595_p2 = (tmp_300_reg_9051.read() & tmp15_fu_5589_p2.read());
}

void subconv_1x1_8p_p::thread_underflow_8_4_fu_5761_p2() {
    underflow_8_4_fu_5761_p2 = (tmp_310_reg_9145.read() & tmp19_fu_5755_p2.read());
}

void subconv_1x1_8p_p::thread_underflow_8_5_fu_5927_p2() {
    underflow_8_5_fu_5927_p2 = (tmp_320_reg_9239.read() & tmp23_fu_5921_p2.read());
}

void subconv_1x1_8p_p::thread_underflow_8_6_fu_6093_p2() {
    underflow_8_6_fu_6093_p2 = (tmp_330_reg_9333.read() & tmp27_fu_6087_p2.read());
}

void subconv_1x1_8p_p::thread_underflow_8_7_fu_6259_p2() {
    underflow_8_7_fu_6259_p2 = (tmp_340_reg_9427.read() & tmp31_fu_6253_p2.read());
}

void subconv_1x1_8p_p::thread_underflow_8_8_fu_6425_p2() {
    underflow_8_8_fu_6425_p2 = (tmp_350_reg_9521.read() & tmp35_fu_6419_p2.read());
}

void subconv_1x1_8p_p::thread_underflow_8_9_fu_6591_p2() {
    underflow_8_9_fu_6591_p2 = (tmp_360_reg_9615.read() & tmp39_fu_6585_p2.read());
}

void subconv_1x1_8p_p::thread_underflow_8_fu_5097_p2() {
    underflow_8_fu_5097_p2 = (tmp_270_reg_8769.read() & tmp3_fu_5091_p2.read());
}

void subconv_1x1_8p_p::thread_underflow_8_not_10_fu_7628_p2() {
    underflow_8_not_10_fu_7628_p2 = (tmp48_fu_7624_p2.read() | p_38_i_i_10_reg_10420.read());
}

void subconv_1x1_8p_p::thread_underflow_8_not_1_fu_7028_p2() {
    underflow_8_not_1_fu_7028_p2 = (tmp8_fu_7024_p2.read() | p_38_i_i_1_reg_9920.read());
}

void subconv_1x1_8p_p::thread_underflow_8_not_2_fu_7088_p2() {
    underflow_8_not_2_fu_7088_p2 = (tmp12_fu_7084_p2.read() | p_38_i_i_2_reg_9970.read());
}

void subconv_1x1_8p_p::thread_underflow_8_not_3_fu_7148_p2() {
    underflow_8_not_3_fu_7148_p2 = (tmp16_fu_7144_p2.read() | p_38_i_i_3_reg_10020.read());
}

void subconv_1x1_8p_p::thread_underflow_8_not_4_fu_7208_p2() {
    underflow_8_not_4_fu_7208_p2 = (tmp20_fu_7204_p2.read() | p_38_i_i_4_reg_10070.read());
}

void subconv_1x1_8p_p::thread_underflow_8_not_5_fu_7268_p2() {
    underflow_8_not_5_fu_7268_p2 = (tmp24_fu_7264_p2.read() | p_38_i_i_5_reg_10120.read());
}

void subconv_1x1_8p_p::thread_underflow_8_not_6_fu_7328_p2() {
    underflow_8_not_6_fu_7328_p2 = (tmp28_fu_7324_p2.read() | p_38_i_i_6_reg_10170.read());
}

void subconv_1x1_8p_p::thread_underflow_8_not_7_fu_7388_p2() {
    underflow_8_not_7_fu_7388_p2 = (tmp32_fu_7384_p2.read() | p_38_i_i_7_reg_10220.read());
}

void subconv_1x1_8p_p::thread_underflow_8_not_8_fu_7448_p2() {
    underflow_8_not_8_fu_7448_p2 = (tmp36_fu_7444_p2.read() | p_38_i_i_8_reg_10270.read());
}

void subconv_1x1_8p_p::thread_underflow_8_not_9_fu_7508_p2() {
    underflow_8_not_9_fu_7508_p2 = (tmp40_fu_7504_p2.read() | p_38_i_i_9_reg_10320.read());
}

void subconv_1x1_8p_p::thread_underflow_8_not_fu_6968_p2() {
    underflow_8_not_fu_6968_p2 = (tmp4_fu_6964_p2.read() | p_38_i_i_reg_9870.read());
}

void subconv_1x1_8p_p::thread_underflow_8_not_s_fu_7568_p2() {
    underflow_8_not_s_fu_7568_p2 = (tmp44_fu_7564_p2.read() | p_38_i_i_s_reg_10370.read());
}

void subconv_1x1_8p_p::thread_underflow_8_s_fu_6757_p2() {
    underflow_8_s_fu_6757_p2 = (tmp_370_reg_9709.read() & tmp43_fu_6751_p2.read());
}

void subconv_1x1_8p_p::thread_underflow_9_fu_6508_p2() {
    underflow_9_fu_6508_p2 = (tmp_355_reg_9568.read() & tmp37_fu_6502_p2.read());
}

void subconv_1x1_8p_p::thread_underflow_fu_5014_p2() {
    underflow_fu_5014_p2 = (tmp_265_reg_8722.read() & tmp1_fu_5008_p2.read());
}

void subconv_1x1_8p_p::thread_underflow_not_10_fu_7598_p2() {
    underflow_not_10_fu_7598_p2 = (tmp46_fu_7594_p2.read() | p_38_i_i1_10_reg_10395.read());
}

void subconv_1x1_8p_p::thread_underflow_not_1_fu_6998_p2() {
    underflow_not_1_fu_6998_p2 = (tmp6_fu_6994_p2.read() | p_38_i_i1_1_reg_9895.read());
}

void subconv_1x1_8p_p::thread_underflow_not_2_fu_7058_p2() {
    underflow_not_2_fu_7058_p2 = (tmp10_fu_7054_p2.read() | p_38_i_i1_2_reg_9945.read());
}

void subconv_1x1_8p_p::thread_underflow_not_3_fu_7118_p2() {
    underflow_not_3_fu_7118_p2 = (tmp14_fu_7114_p2.read() | p_38_i_i1_3_reg_9995.read());
}

void subconv_1x1_8p_p::thread_underflow_not_4_fu_7178_p2() {
    underflow_not_4_fu_7178_p2 = (tmp18_fu_7174_p2.read() | p_38_i_i1_4_reg_10045.read());
}

void subconv_1x1_8p_p::thread_underflow_not_5_fu_7238_p2() {
    underflow_not_5_fu_7238_p2 = (tmp22_fu_7234_p2.read() | p_38_i_i1_5_reg_10095.read());
}

void subconv_1x1_8p_p::thread_underflow_not_6_fu_7298_p2() {
    underflow_not_6_fu_7298_p2 = (tmp26_fu_7294_p2.read() | p_38_i_i1_6_reg_10145.read());
}

void subconv_1x1_8p_p::thread_underflow_not_7_fu_7358_p2() {
    underflow_not_7_fu_7358_p2 = (tmp30_fu_7354_p2.read() | p_38_i_i1_7_reg_10195.read());
}

void subconv_1x1_8p_p::thread_underflow_not_8_fu_7418_p2() {
    underflow_not_8_fu_7418_p2 = (tmp34_fu_7414_p2.read() | p_38_i_i1_8_reg_10245.read());
}

void subconv_1x1_8p_p::thread_underflow_not_9_fu_7478_p2() {
    underflow_not_9_fu_7478_p2 = (tmp38_fu_7474_p2.read() | p_38_i_i1_9_reg_10295.read());
}

void subconv_1x1_8p_p::thread_underflow_not_fu_6938_p2() {
    underflow_not_fu_6938_p2 = (tmp2_fu_6934_p2.read() | p_38_i_i1_reg_9845.read());
}

void subconv_1x1_8p_p::thread_underflow_not_s_fu_7538_p2() {
    underflow_not_s_fu_7538_p2 = (tmp42_fu_7534_p2.read() | p_38_i_i1_s_reg_10345.read());
}

void subconv_1x1_8p_p::thread_underflow_s_fu_6342_p2() {
    underflow_s_fu_6342_p2 = (tmp_345_reg_9474.read() & tmp33_fu_6336_p2.read());
}

void subconv_1x1_8p_p::thread_w2_cast_cast1_fu_1541_p1() {
    w2_cast_cast1_fu_1541_p1 = esl_zext<11,4>(w2_reg_1085.read());
}

void subconv_1x1_8p_p::thread_w2_cast_cast_fu_1545_p1() {
    w2_cast_cast_fu_1545_p1 = esl_zext<15,4>(w2_reg_1085.read());
}

void subconv_1x1_8p_p::thread_w6_cast_cast_fu_7838_p1() {
    w6_cast_cast_fu_7838_p1 = esl_zext<11,4>(w6_mid2_reg_10479.read());
}

void subconv_1x1_8p_p::thread_w6_mid2_fu_7759_p3() {
    w6_mid2_fu_7759_p3 = (!tmp_224_fu_7754_p2.read()[0].is_01())? sc_lv<4>(): ((tmp_224_fu_7754_p2.read()[0].to_bool())? ap_const_lv4_1: w6_phi_fu_1190_p4.read());
}

void subconv_1x1_8p_p::thread_w6_phi_fu_1190_p4() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp1_iter1_exitcond_flatten3_reg_10445.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        w6_phi_fu_1190_p4 = w_9_fu_7847_p2.read();
    } else {
        w6_phi_fu_1190_p4 = w6_reg_1186.read();
    }
}

void subconv_1x1_8p_p::thread_w_7_fu_1408_p2() {
    w_7_fu_1408_p2 = (!w_mid2_reg_7943.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w_mid2_reg_7943.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void subconv_1x1_8p_p::thread_w_8_fu_1652_p2() {
    w_8_fu_1652_p2 = (!w2_reg_1085.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w2_reg_1085.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void subconv_1x1_8p_p::thread_w_9_fu_7847_p2() {
    w_9_fu_7847_p2 = (!w6_mid2_reg_10479.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w6_mid2_reg_10479.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void subconv_1x1_8p_p::thread_w_cast_cast_fu_1499_p1() {
    w_cast_cast_fu_1499_p1 = esl_zext<11,4>(ap_reg_pp0_iter9_w_mid2_reg_7943.read());
}

void subconv_1x1_8p_p::thread_w_mid2_fu_1392_p3() {
    w_mid2_fu_1392_p3 = (!tmp_208_fu_1387_p2.read()[0].is_01())? sc_lv<4>(): ((tmp_208_fu_1387_p2.read()[0].to_bool())? ap_const_lv4_1: w_phi_fu_1065_p4.read());
}

void subconv_1x1_8p_p::thread_w_phi_fu_1065_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_reg_pp0_iter1_exitcond_flatten1_reg_7913.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        w_phi_fu_1065_p4 = w_7_fu_1408_p2.read();
    } else {
        w_phi_fu_1065_p4 = w_reg_1061.read();
    }
}

void subconv_1x1_8p_p::thread_weight_0_V_address0() {
    weight_0_V_address0 =  (sc_lv<10>) (tmp_254_cast_fu_1882_p1.read());
}

void subconv_1x1_8p_p::thread_weight_0_V_address1() {
    weight_0_V_address1 =  (sc_lv<10>) (tmp_266_cast_fu_1897_p1.read());
}

void subconv_1x1_8p_p::thread_weight_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        weight_0_V_ce0 = ap_const_logic_1;
    } else {
        weight_0_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_0_V_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        weight_0_V_ce1 = ap_const_logic_1;
    } else {
        weight_0_V_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_10_V_address0() {
    weight_10_V_address0 =  (sc_lv<10>) (tmp_254_cast_fu_1882_p1.read());
}

void subconv_1x1_8p_p::thread_weight_10_V_address1() {
    weight_10_V_address1 =  (sc_lv<10>) (tmp_266_cast_fu_1897_p1.read());
}

void subconv_1x1_8p_p::thread_weight_10_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        weight_10_V_ce0 = ap_const_logic_1;
    } else {
        weight_10_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_10_V_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        weight_10_V_ce1 = ap_const_logic_1;
    } else {
        weight_10_V_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_11_V_address0() {
    weight_11_V_address0 =  (sc_lv<10>) (tmp_254_cast_fu_1882_p1.read());
}

void subconv_1x1_8p_p::thread_weight_11_V_address1() {
    weight_11_V_address1 =  (sc_lv<10>) (tmp_266_cast_fu_1897_p1.read());
}

void subconv_1x1_8p_p::thread_weight_11_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        weight_11_V_ce0 = ap_const_logic_1;
    } else {
        weight_11_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_11_V_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        weight_11_V_ce1 = ap_const_logic_1;
    } else {
        weight_11_V_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_1_V_address0() {
    weight_1_V_address0 =  (sc_lv<10>) (tmp_254_cast_fu_1882_p1.read());
}

void subconv_1x1_8p_p::thread_weight_1_V_address1() {
    weight_1_V_address1 =  (sc_lv<10>) (tmp_266_cast_fu_1897_p1.read());
}

void subconv_1x1_8p_p::thread_weight_1_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        weight_1_V_ce0 = ap_const_logic_1;
    } else {
        weight_1_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_1_V_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        weight_1_V_ce1 = ap_const_logic_1;
    } else {
        weight_1_V_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_2_V_address0() {
    weight_2_V_address0 =  (sc_lv<10>) (tmp_254_cast_fu_1882_p1.read());
}

void subconv_1x1_8p_p::thread_weight_2_V_address1() {
    weight_2_V_address1 =  (sc_lv<10>) (tmp_266_cast_fu_1897_p1.read());
}

void subconv_1x1_8p_p::thread_weight_2_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        weight_2_V_ce0 = ap_const_logic_1;
    } else {
        weight_2_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_2_V_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        weight_2_V_ce1 = ap_const_logic_1;
    } else {
        weight_2_V_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_3_V_address0() {
    weight_3_V_address0 =  (sc_lv<10>) (tmp_254_cast_fu_1882_p1.read());
}

void subconv_1x1_8p_p::thread_weight_3_V_address1() {
    weight_3_V_address1 =  (sc_lv<10>) (tmp_266_cast_fu_1897_p1.read());
}

void subconv_1x1_8p_p::thread_weight_3_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        weight_3_V_ce0 = ap_const_logic_1;
    } else {
        weight_3_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_3_V_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        weight_3_V_ce1 = ap_const_logic_1;
    } else {
        weight_3_V_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_4_V_address0() {
    weight_4_V_address0 =  (sc_lv<10>) (tmp_254_cast_fu_1882_p1.read());
}

void subconv_1x1_8p_p::thread_weight_4_V_address1() {
    weight_4_V_address1 =  (sc_lv<10>) (tmp_266_cast_fu_1897_p1.read());
}

void subconv_1x1_8p_p::thread_weight_4_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        weight_4_V_ce0 = ap_const_logic_1;
    } else {
        weight_4_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_4_V_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        weight_4_V_ce1 = ap_const_logic_1;
    } else {
        weight_4_V_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_5_V_address0() {
    weight_5_V_address0 =  (sc_lv<10>) (tmp_254_cast_fu_1882_p1.read());
}

void subconv_1x1_8p_p::thread_weight_5_V_address1() {
    weight_5_V_address1 =  (sc_lv<10>) (tmp_266_cast_fu_1897_p1.read());
}

void subconv_1x1_8p_p::thread_weight_5_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        weight_5_V_ce0 = ap_const_logic_1;
    } else {
        weight_5_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_5_V_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        weight_5_V_ce1 = ap_const_logic_1;
    } else {
        weight_5_V_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_6_V_address0() {
    weight_6_V_address0 =  (sc_lv<10>) (tmp_254_cast_fu_1882_p1.read());
}

void subconv_1x1_8p_p::thread_weight_6_V_address1() {
    weight_6_V_address1 =  (sc_lv<10>) (tmp_266_cast_fu_1897_p1.read());
}

void subconv_1x1_8p_p::thread_weight_6_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        weight_6_V_ce0 = ap_const_logic_1;
    } else {
        weight_6_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_6_V_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        weight_6_V_ce1 = ap_const_logic_1;
    } else {
        weight_6_V_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_7_V_address0() {
    weight_7_V_address0 =  (sc_lv<10>) (tmp_254_cast_fu_1882_p1.read());
}

void subconv_1x1_8p_p::thread_weight_7_V_address1() {
    weight_7_V_address1 =  (sc_lv<10>) (tmp_266_cast_fu_1897_p1.read());
}

void subconv_1x1_8p_p::thread_weight_7_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        weight_7_V_ce0 = ap_const_logic_1;
    } else {
        weight_7_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_7_V_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        weight_7_V_ce1 = ap_const_logic_1;
    } else {
        weight_7_V_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_8_V_address0() {
    weight_8_V_address0 =  (sc_lv<10>) (tmp_254_cast_fu_1882_p1.read());
}

void subconv_1x1_8p_p::thread_weight_8_V_address1() {
    weight_8_V_address1 =  (sc_lv<10>) (tmp_266_cast_fu_1897_p1.read());
}

void subconv_1x1_8p_p::thread_weight_8_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        weight_8_V_ce0 = ap_const_logic_1;
    } else {
        weight_8_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_8_V_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        weight_8_V_ce1 = ap_const_logic_1;
    } else {
        weight_8_V_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_9_V_address0() {
    weight_9_V_address0 =  (sc_lv<10>) (tmp_254_cast_fu_1882_p1.read());
}

void subconv_1x1_8p_p::thread_weight_9_V_address1() {
    weight_9_V_address1 =  (sc_lv<10>) (tmp_266_cast_fu_1897_p1.read());
}

void subconv_1x1_8p_p::thread_weight_9_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        weight_9_V_ce0 = ap_const_logic_1;
    } else {
        weight_9_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_9_V_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        weight_9_V_ce1 = ap_const_logic_1;
    } else {
        weight_9_V_ce1 = ap_const_logic_0;
    }
}

}

