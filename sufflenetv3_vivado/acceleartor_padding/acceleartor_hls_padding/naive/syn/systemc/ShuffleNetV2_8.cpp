#include "ShuffleNetV2.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void ShuffleNetV2::thread_tmp_295_fu_14059_p2() {
    tmp_295_fu_14059_p2 = (!p_shl44_cast_fu_14043_p1.read().is_01() || !p_shl45_cast_fu_14055_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl44_cast_fu_14043_p1.read()) - sc_biguint<7>(p_shl45_cast_fu_14055_p1.read()));
}

void ShuffleNetV2::thread_tmp_296_fu_14075_p2() {
    tmp_296_fu_14075_p2 = (!i51_cast1_reg_32379.read().is_01() || !tmp16_fu_14069_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(i51_cast1_reg_32379.read()) + sc_biguint<10>(tmp16_fu_14069_p2.read()));
}

void ShuffleNetV2::thread_tmp_297_fu_14085_p1() {
    tmp_297_fu_14085_p1 = esl_zext<64,10>(tmp_296_reg_32400.read());
}

void ShuffleNetV2::thread_tmp_298_fu_14080_p2() {
    tmp_298_fu_14080_p2 = (!tmp_295_fu_14059_p2.read().is_01() || !i51_cast_reg_32374.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_295_fu_14059_p2.read()) + sc_biguint<7>(i51_cast_reg_32374.read()));
}

void ShuffleNetV2::thread_tmp_299_cast_cast_fu_11690_p1() {
    tmp_299_cast_cast_fu_11690_p1 = esl_sext<8,7>(tmp_215_fu_11684_p2.read());
}

void ShuffleNetV2::thread_tmp_299_fu_14092_p1() {
    tmp_299_fu_14092_p1 = esl_zext<64,32>(tmp_403_cast_fu_14089_p1.read());
}

void ShuffleNetV2::thread_tmp_300_fu_13866_p2() {
    tmp_300_fu_13866_p2 = (!p_shl48_cast_fu_13850_p1.read().is_01() || !p_shl49_cast_fu_13862_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl48_cast_fu_13850_p1.read()) - sc_biguint<8>(p_shl49_cast_fu_13862_p1.read()));
}

void ShuffleNetV2::thread_tmp_301_cast_fu_11710_p1() {
    tmp_301_cast_fu_11710_p1 = esl_sext<9,8>(tmp_216_reg_31642.read());
}

void ShuffleNetV2::thread_tmp_301_fu_13882_p2() {
    tmp_301_fu_13882_p2 = (!tmp15_fu_13876_p2.read().is_01() || !co71_cast_reg_32309.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp15_fu_13876_p2.read()) + sc_biguint<10>(co71_cast_reg_32309.read()));
}

void ShuffleNetV2::thread_tmp_302_fu_13911_p2() {
    tmp_302_fu_13911_p2 = (!p_shl50_cast_fu_13895_p1.read().is_01() || !p_shl51_cast_fu_13907_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl50_cast_fu_13895_p1.read()) - sc_biguint<7>(p_shl51_cast_fu_13907_p1.read()));
}

void ShuffleNetV2::thread_tmp_303_cast_fu_11718_p1() {
    tmp_303_cast_fu_11718_p1 = esl_sext<32,7>(tmp_218_reg_31647.read());
}

void ShuffleNetV2::thread_tmp_303_fu_13917_p2() {
    tmp_303_fu_13917_p2 = (!tmp_302_fu_13911_p2.read().is_01() || !tmp_397_cast_reg_32327.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_302_fu_13911_p2.read()) + sc_biguint<7>(tmp_397_cast_reg_32327.read()));
}

void ShuffleNetV2::thread_tmp_304_fu_14232_p2() {
    tmp_304_fu_14232_p2 = (!co74_cast_fu_14216_p1.read().is_01() || !ap_const_lv7_30.is_01())? sc_lv<7>(): (sc_biguint<7>(co74_cast_fu_14216_p1.read()) + sc_biguint<7>(ap_const_lv7_30));
}

void ShuffleNetV2::thread_tmp_305_cast_fu_14151_p1() {
    tmp_305_cast_fu_14151_p1 = esl_zext<10,4>(h_53_fu_14145_p2.read());
}

void ShuffleNetV2::thread_tmp_305_fu_14358_p3() {
    tmp_305_fu_14358_p3 = esl_concat<11,3>(tmp_947_fu_14353_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_306_fu_14471_p2() {
    tmp_306_fu_14471_p2 = (!p_shl52_cast_fu_14455_p1.read().is_01() || !p_shl53_cast_fu_14467_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl52_cast_fu_14455_p1.read()) - sc_biguint<7>(p_shl53_cast_fu_14467_p1.read()));
}

void ShuffleNetV2::thread_tmp_307_cast1_fu_14310_p1() {
    tmp_307_cast1_fu_14310_p1 = esl_zext<11,4>(h_55_fu_14304_p2.read());
}

void ShuffleNetV2::thread_tmp_307_cast2_fu_14314_p1() {
    tmp_307_cast2_fu_14314_p1 = esl_zext<10,4>(h_55_fu_14304_p2.read());
}

void ShuffleNetV2::thread_tmp_307_cast_fu_11786_p1() {
    tmp_307_cast_fu_11786_p1 = esl_zext<7,4>(p_lshr_f1_cast_fu_11776_p4.read());
}

void ShuffleNetV2::thread_tmp_307_fu_14370_p3() {
    tmp_307_fu_14370_p3 = esl_concat<11,1>(tmp_947_fu_14353_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_308_cast_fu_14202_p1() {
    tmp_308_cast_fu_14202_p1 = esl_zext<15,4>(w_52_fu_14196_p2.read());
}

void ShuffleNetV2::thread_tmp_308_fu_14725_p1() {
    tmp_308_fu_14725_p1 = k9_reg_4487.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_309_cast_cast_fu_12058_p1() {
    tmp_309_cast_cast_fu_12058_p1 = esl_sext<8,7>(tmp_229_fu_12052_p2.read());
}

void ShuffleNetV2::thread_tmp_309_cast_fu_14507_p1() {
    tmp_309_cast_fu_14507_p1 = esl_zext<17,5>(ci36_reg_4454.read());
}

void ShuffleNetV2::thread_tmp_309_fu_14532_p1() {
    tmp_309_fu_14532_p1 = i58_reg_4465.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_310_fu_14511_p2() {
    tmp_310_fu_14511_p2 = (!tmp_306_reg_32526.read().is_01() || !ci36_cast_fu_14491_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_306_reg_32526.read()) + sc_biguint<7>(ci36_cast_fu_14491_p1.read()));
}

void ShuffleNetV2::thread_tmp_311_cast1_fu_14516_p1() {
    tmp_311_cast1_fu_14516_p1 = esl_sext<13,7>(tmp_310_fu_14511_p2.read());
}

void ShuffleNetV2::thread_tmp_311_cast_fu_12078_p1() {
    tmp_311_cast_fu_12078_p1 = esl_sext<9,8>(tmp_230_reg_31748.read());
}

void ShuffleNetV2::thread_tmp_311_fu_15157_p1() {
    tmp_311_fu_15157_p1 = co80_reg_4564.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_312_cast1_fu_14400_p1() {
    tmp_312_cast1_fu_14400_p1 = esl_zext<15,4>(w_54_fu_14394_p2.read());
}

void ShuffleNetV2::thread_tmp_312_cast_fu_14404_p1() {
    tmp_312_cast_fu_14404_p1 = esl_zext<14,4>(w_54_fu_14394_p2.read());
}

void ShuffleNetV2::thread_tmp_312_fu_15071_p1() {
    tmp_312_fu_15071_p1 = k10_reg_4553.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_313_cast_fu_12086_p1() {
    tmp_313_cast_fu_12086_p1 = esl_sext<32,7>(tmp_232_reg_31753.read());
}

void ShuffleNetV2::thread_tmp_313_fu_14753_p2() {
    tmp_313_fu_14753_p2 = (!p_shl54_cast_fu_14737_p1.read().is_01() || !p_shl55_cast_fu_14749_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl54_cast_fu_14737_p1.read()) - sc_biguint<7>(p_shl55_cast_fu_14749_p1.read()));
}

void ShuffleNetV2::thread_tmp_314_fu_14769_p2() {
    tmp_314_fu_14769_p2 = (!i57_cast1_reg_32583.read().is_01() || !tmp18_fu_14763_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(i57_cast1_reg_32583.read()) + sc_biguint<10>(tmp18_fu_14763_p2.read()));
}

void ShuffleNetV2::thread_tmp_315_fu_14779_p1() {
    tmp_315_fu_14779_p1 = esl_zext<64,10>(tmp_314_reg_32604.read());
}

void ShuffleNetV2::thread_tmp_316_fu_14774_p2() {
    tmp_316_fu_14774_p2 = (!tmp_313_fu_14753_p2.read().is_01() || !i57_cast_reg_32578.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_313_fu_14753_p2.read()) + sc_biguint<7>(i57_cast_reg_32578.read()));
}

void ShuffleNetV2::thread_tmp_317_fu_14786_p1() {
    tmp_317_fu_14786_p1 = esl_zext<64,32>(tmp_435_cast_fu_14783_p1.read());
}

void ShuffleNetV2::thread_tmp_318_cast_fu_11478_p1() {
    tmp_318_cast_fu_11478_p1 = esl_sext<8,7>(tmp_224_fu_11472_p2.read());
}

void ShuffleNetV2::thread_tmp_318_fu_14560_p2() {
    tmp_318_fu_14560_p2 = (!p_shl56_cast_fu_14544_p1.read().is_01() || !p_shl57_cast_fu_14556_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl56_cast_fu_14544_p1.read()) - sc_biguint<8>(p_shl57_cast_fu_14556_p1.read()));
}

void ShuffleNetV2::thread_tmp_319_fu_14576_p2() {
    tmp_319_fu_14576_p2 = (!tmp17_fu_14570_p2.read().is_01() || !co76_cast_reg_32513.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp17_fu_14570_p2.read()) + sc_biguint<10>(co76_cast_reg_32513.read()));
}

void ShuffleNetV2::thread_tmp_320_fu_14605_p2() {
    tmp_320_fu_14605_p2 = (!p_shl58_cast_fu_14589_p1.read().is_01() || !p_shl59_cast_fu_14601_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl58_cast_fu_14589_p1.read()) - sc_biguint<7>(p_shl59_cast_fu_14601_p1.read()));
}

void ShuffleNetV2::thread_tmp_321_fu_14611_p2() {
    tmp_321_fu_14611_p2 = (!tmp_320_fu_14605_p2.read().is_01() || !tmp_427_cast_reg_32531.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_320_fu_14605_p2.read()) + sc_biguint<7>(tmp_427_cast_reg_32531.read()));
}

void ShuffleNetV2::thread_tmp_322_cast1_fu_14823_p1() {
    tmp_322_cast1_fu_14823_p1 = esl_zext<36,2>(w55_reg_4509.read());
}

void ShuffleNetV2::thread_tmp_322_cast2_fu_14827_p1() {
    tmp_322_cast2_fu_14827_p1 = esl_zext<13,2>(w55_reg_4509.read());
}

void ShuffleNetV2::thread_tmp_322_cast_fu_11554_p1() {
    tmp_322_cast_fu_11554_p1 = esl_sext<32,7>(tmp_227_reg_31585.read());
}

void ShuffleNetV2::thread_tmp_322_fu_7572_p3() {
    tmp_322_fu_7572_p3 = esl_concat<2,5>(ci_reg_3109.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_323_fu_15185_p2() {
    tmp_323_fu_15185_p2 = (!p_shl62_cast_fu_15169_p1.read().is_01() || !p_shl63_cast_fu_15181_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl62_cast_fu_15169_p1.read()) - sc_biguint<7>(p_shl63_cast_fu_15181_p1.read()));
}

void ShuffleNetV2::thread_tmp_324_fu_15099_p2() {
    tmp_324_fu_15099_p2 = (!p_shl60_cast_fu_15083_p1.read().is_01() || !p_shl61_cast_fu_15095_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl60_cast_fu_15083_p1.read()) - sc_biguint<7>(p_shl61_cast_fu_15095_p1.read()));
}

void ShuffleNetV2::thread_tmp_325_cast_fu_11865_p1() {
    tmp_325_cast_fu_11865_p1 = esl_sext<9,8>(tmp_234_fu_11859_p2.read());
}

void ShuffleNetV2::thread_tmp_325_fu_15115_p2() {
    tmp_325_fu_15115_p2 = (!i61_cast509_cast_reg_32723.read().is_01() || !tmp20_fu_15109_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(i61_cast509_cast_reg_32723.read()) + sc_biguint<9>(tmp20_fu_15109_p2.read()));
}

void ShuffleNetV2::thread_tmp_326_fu_15128_p1() {
    tmp_326_fu_15128_p1 = esl_zext<64,10>(tmp_451_cast_fu_15125_p1.read());
}

void ShuffleNetV2::thread_tmp_327_fu_15120_p2() {
    tmp_327_fu_15120_p2 = (!tmp_324_fu_15099_p2.read().is_01() || !i61_cast_reg_32718.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_324_fu_15099_p2.read()) + sc_biguint<7>(i61_cast_reg_32718.read()));
}

void ShuffleNetV2::thread_tmp_328_fu_15136_p1() {
    tmp_328_fu_15136_p1 = esl_zext<64,32>(tmp_453_cast_fu_15133_p1.read());
}

void ShuffleNetV2::thread_tmp_329_cast1_fu_14843_p1() {
    tmp_329_cast1_fu_14843_p1 = esl_zext<10,2>(h56_reg_4520.read());
}

void ShuffleNetV2::thread_tmp_329_cast_fu_14847_p1() {
    tmp_329_cast_fu_14847_p1 = esl_zext<15,2>(h56_reg_4520.read());
}

void ShuffleNetV2::thread_tmp_329_fu_7584_p3() {
    tmp_329_fu_7584_p3 = esl_concat<2,1>(ci_reg_3109.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_330_cast_fu_15221_p1() {
    tmp_330_cast_fu_15221_p1 = esl_zext<17,5>(ci38_reg_4575.read());
}

void ShuffleNetV2::thread_tmp_330_fu_7596_p2() {
    tmp_330_fu_7596_p2 = (!p_shl276_cast_fu_7592_p1.read().is_01() || !tmp_463_cast1_fu_7580_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl276_cast_fu_7592_p1.read()) + sc_biguint<8>(tmp_463_cast1_fu_7580_p1.read()));
}

void ShuffleNetV2::thread_tmp_331_fu_15225_p2() {
    tmp_331_fu_15225_p2 = (!tmp_323_reg_32772.read().is_01() || !ci38_cast_fu_15205_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_323_reg_32772.read()) + sc_biguint<7>(ci38_cast_fu_15205_p1.read()));
}

void ShuffleNetV2::thread_tmp_332_cast1_fu_15230_p1() {
    tmp_332_cast1_fu_15230_p1 = esl_sext<13,7>(tmp_331_fu_15225_p2.read());
}

void ShuffleNetV2::thread_tmp_332_cast_fu_12408_p1() {
    tmp_332_cast_fu_12408_p1 = esl_sext<10,7>(tmp_240_fu_12402_p2.read());
}

void ShuffleNetV2::thread_tmp_332_fu_7717_p3() {
    tmp_332_fu_7717_p3 = esl_concat<5,5>(co_reg_3142.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_333_fu_14891_p2() {
    tmp_333_fu_14891_p2 = (!p_shl66_cast_fu_14875_p1.read().is_01() || !p_shl67_cast_fu_14887_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl66_cast_fu_14875_p1.read()) - sc_biguint<7>(p_shl67_cast_fu_14887_p1.read()));
}

void ShuffleNetV2::thread_tmp_334_fu_14907_p2() {
    tmp_334_fu_14907_p2 = (!co79_cast1_reg_32624.read().is_01() || !tmp19_fu_14901_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(co79_cast1_reg_32624.read()) + sc_biguint<9>(tmp19_fu_14901_p2.read()));
}

void ShuffleNetV2::thread_tmp_335_cast_fu_14917_p1() {
    tmp_335_cast_fu_14917_p1 = esl_zext<12,9>(tmp_334_reg_32681.read());
}

void ShuffleNetV2::thread_tmp_335_fu_7729_p3() {
    tmp_335_fu_7729_p3 = esl_concat<5,3>(co_reg_3142.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_336_cast_fu_12432_p1() {
    tmp_336_cast_fu_12432_p1 = esl_sext<32,7>(tmp_243_reg_31893.read());
}

void ShuffleNetV2::thread_tmp_336_fu_14912_p2() {
    tmp_336_fu_14912_p2 = (!tmp_333_fu_14891_p2.read().is_01() || !co79_cast_reg_32619.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_333_fu_14891_p2.read()) + sc_biguint<7>(co79_cast_reg_32619.read()));
}

void ShuffleNetV2::thread_tmp_337_cast_fu_14972_p1() {
    tmp_337_cast_fu_14972_p1 = esl_zext<35,32>(tmp_472_cast_fu_14969_p1.read());
}

void ShuffleNetV2::thread_tmp_337_fu_7741_p2() {
    tmp_337_fu_7741_p2 = (!p_shl279_cast_fu_7725_p1.read().is_01() || !p_shl280_cast_fu_7737_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl279_cast_fu_7725_p1.read()) - sc_biguint<11>(p_shl280_cast_fu_7737_p1.read()));
}

void ShuffleNetV2::thread_tmp_338_fu_15467_p2() {
    tmp_338_fu_15467_p2 = (!p_shl64_cast_fu_15451_p1.read().is_01() || !p_shl65_cast_fu_15463_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl64_cast_fu_15451_p1.read()) - sc_biguint<7>(p_shl65_cast_fu_15463_p1.read()));
}

void ShuffleNetV2::thread_tmp_339_fu_15483_p2() {
    tmp_339_fu_15483_p2 = (!i63_cast496_cast_reg_32829.read().is_01() || !tmp22_fu_15477_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(i63_cast496_cast_reg_32829.read()) + sc_biguint<9>(tmp22_fu_15477_p2.read()));
}

void ShuffleNetV2::thread_tmp_340_cast_fu_12500_p1() {
    tmp_340_cast_fu_12500_p1 = esl_zext<7,4>(p_lshr_f2_cast_fu_12490_p4.read());
}

void ShuffleNetV2::thread_tmp_340_fu_15496_p1() {
    tmp_340_fu_15496_p1 = esl_zext<64,10>(tmp_461_cast_fu_15493_p1.read());
}

void ShuffleNetV2::thread_tmp_341_fu_15488_p2() {
    tmp_341_fu_15488_p2 = (!tmp_338_fu_15467_p2.read().is_01() || !i63_cast_reg_32824.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_338_fu_15467_p2.read()) + sc_biguint<7>(i63_cast_reg_32824.read()));
}

void ShuffleNetV2::thread_tmp_342_cast_fu_12776_p1() {
    tmp_342_cast_fu_12776_p1 = esl_sext<10,7>(tmp_255_fu_12770_p2.read());
}

void ShuffleNetV2::thread_tmp_342_fu_15504_p1() {
    tmp_342_fu_15504_p1 = esl_zext<64,32>(tmp_463_cast_fu_15501_p1.read());
}

void ShuffleNetV2::thread_tmp_343_fu_15274_p2() {
    tmp_343_fu_15274_p2 = (!p_shl68_cast_fu_15258_p1.read().is_01() || !p_shl69_cast_fu_15270_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl68_cast_fu_15258_p1.read()) - sc_biguint<8>(p_shl69_cast_fu_15270_p1.read()));
}

void ShuffleNetV2::thread_tmp_344_fu_15290_p2() {
    tmp_344_fu_15290_p2 = (!tmp21_fu_15284_p2.read().is_01() || !co81_cast_reg_32759.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp21_fu_15284_p2.read()) + sc_biguint<10>(co81_cast_reg_32759.read()));
}

void ShuffleNetV2::thread_tmp_345_fu_15319_p2() {
    tmp_345_fu_15319_p2 = (!p_shl70_cast_fu_15303_p1.read().is_01() || !p_shl71_cast_fu_15315_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl70_cast_fu_15303_p1.read()) - sc_biguint<7>(p_shl71_cast_fu_15315_p1.read()));
}

void ShuffleNetV2::thread_tmp_346_cast_fu_12800_p1() {
    tmp_346_cast_fu_12800_p1 = esl_sext<32,7>(tmp_258_reg_31999.read());
}

void ShuffleNetV2::thread_tmp_346_fu_15325_p2() {
    tmp_346_fu_15325_p2 = (!tmp_345_fu_15319_p2.read().is_01() || !tmp_457_cast_reg_32777.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_345_fu_15319_p2.read()) + sc_biguint<7>(tmp_457_cast_reg_32777.read()));
}

void ShuffleNetV2::thread_tmp_347_fu_15644_p2() {
    tmp_347_fu_15644_p2 = (!co84_cast_fu_15628_p1.read().is_01() || !ap_const_lv7_30.is_01())? sc_lv<7>(): (sc_biguint<7>(co84_cast_fu_15628_p1.read()) + sc_biguint<7>(ap_const_lv7_30));
}

void ShuffleNetV2::thread_tmp_348_cast_fu_15563_p1() {
    tmp_348_cast_fu_15563_p1 = esl_zext<10,4>(h_59_fu_15557_p2.read());
}

void ShuffleNetV2::thread_tmp_348_fu_7618_p2() {
    tmp_348_fu_7618_p2 = (!tmp_101_cast_fu_7614_p1.read().is_01() || !tmp_463_cast1_reg_30310.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_101_cast_fu_7614_p1.read()) + sc_biguint<8>(tmp_463_cast1_reg_30310.read()));
}

void ShuffleNetV2::thread_tmp_349_fu_15883_p2() {
    tmp_349_fu_15883_p2 = (!p_shl72_cast_fu_15867_p1.read().is_01() || !p_shl73_cast_fu_15879_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl72_cast_fu_15867_p1.read()) - sc_biguint<7>(p_shl73_cast_fu_15879_p1.read()));
}

void ShuffleNetV2::thread_tmp_350_cast1_fu_15722_p1() {
    tmp_350_cast1_fu_15722_p1 = esl_zext<11,4>(h_61_fu_15716_p2.read());
}

void ShuffleNetV2::thread_tmp_350_cast_fu_15726_p1() {
    tmp_350_cast_fu_15726_p1 = esl_zext<10,4>(h_61_fu_15716_p2.read());
}

void ShuffleNetV2::thread_tmp_350_fu_7635_p2() {
    tmp_350_fu_7635_p2 = (!tmp_102_cast_fu_7631_p1.read().is_01() || !tmp_330_reg_30315.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_102_cast_fu_7631_p1.read()) + sc_biguint<8>(tmp_330_reg_30315.read()));
}

void ShuffleNetV2::thread_tmp_351_cast1_fu_15614_p1() {
    tmp_351_cast1_fu_15614_p1 = esl_zext<15,4>(w_58_fu_15608_p2.read());
}

void ShuffleNetV2::thread_tmp_351_cast_fu_12200_p1() {
    tmp_351_cast_fu_12200_p1 = esl_sext<8,7>(tmp_249_fu_12194_p2.read());
}

void ShuffleNetV2::thread_tmp_351_fu_7660_p2() {
    tmp_351_fu_7660_p2 = (!p_shl277_cast_fu_7640_p3.read().is_01() || !p_shl278_cast_fu_7656_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl277_cast_fu_7640_p3.read()) + sc_biguint<13>(p_shl278_cast_fu_7656_p1.read()));
}

void ShuffleNetV2::thread_tmp_352_cast_fu_15919_p1() {
    tmp_352_cast_fu_15919_p1 = esl_zext<17,5>(ci40_reg_4696.read());
}

void ShuffleNetV2::thread_tmp_352_fu_7767_p2() {
    tmp_352_fu_7767_p2 = (!tmp_510_cast_reg_30364.read().is_01() || !tmp_106_cast_fu_7763_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(tmp_510_cast_reg_30364.read()) + sc_biguint<12>(tmp_106_cast_fu_7763_p1.read()));
}

void ShuffleNetV2::thread_tmp_353_fu_15923_p2() {
    tmp_353_fu_15923_p2 = (!tmp_349_reg_32976.read().is_01() || !ci40_cast_fu_15903_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_349_reg_32976.read()) + sc_biguint<7>(ci40_cast_fu_15903_p1.read()));
}

void ShuffleNetV2::thread_tmp_354_cast_fu_15928_p1() {
    tmp_354_cast_fu_15928_p1 = esl_sext<13,7>(tmp_353_fu_15923_p2.read());
}

void ShuffleNetV2::thread_tmp_354_fu_7682_p2() {
    tmp_354_fu_7682_p2 = (!tmp_516_cast_reg_30328.read().is_01() || !tmp_107_cast_fu_7678_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_516_cast_reg_30328.read()) + sc_biguint<13>(tmp_107_cast_fu_7678_p1.read()));
}

void ShuffleNetV2::thread_tmp_355_cast1_fu_15812_p1() {
    tmp_355_cast1_fu_15812_p1 = esl_zext<15,4>(w_60_fu_15806_p2.read());
}

void ShuffleNetV2::thread_tmp_355_cast2_fu_15816_p1() {
    tmp_355_cast2_fu_15816_p1 = esl_zext<14,4>(w_60_fu_15806_p2.read());
}

void ShuffleNetV2::thread_tmp_355_cast_fu_12272_p1() {
    tmp_355_cast_fu_12272_p1 = esl_sext<32,7>(tmp_252_reg_31831.read());
}

void ShuffleNetV2::thread_tmp_355_fu_7696_p2() {
    tmp_355_fu_7696_p2 = (!tmp_351_reg_30333.read().is_01() || !tmp_108_cast_fu_7692_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_351_reg_30333.read()) + sc_biguint<13>(tmp_108_cast_fu_7692_p1.read()));
}

void ShuffleNetV2::thread_tmp_356_fu_16173_p2() {
    tmp_356_fu_16173_p2 = (!p_shl74_cast_fu_16157_p1.read().is_01() || !p_shl75_cast_fu_16169_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl74_cast_fu_16157_p1.read()) - sc_biguint<7>(p_shl75_cast_fu_16169_p1.read()));
}

void ShuffleNetV2::thread_tmp_357_fu_16189_p2() {
    tmp_357_fu_16189_p2 = (!i69_cast481_cast_reg_33033.read().is_01() || !tmp24_fu_16183_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(i69_cast481_cast_reg_33033.read()) + sc_biguint<9>(tmp24_fu_16183_p2.read()));
}

void ShuffleNetV2::thread_tmp_358_fu_16202_p1() {
    tmp_358_fu_16202_p1 = esl_zext<64,10>(tmp_493_cast_fu_16199_p1.read());
}

void ShuffleNetV2::thread_tmp_359_fu_16194_p2() {
    tmp_359_fu_16194_p2 = (!tmp_356_fu_16173_p2.read().is_01() || !i69_cast_reg_33028.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_356_fu_16173_p2.read()) + sc_biguint<7>(i69_cast_reg_33028.read()));
}

void ShuffleNetV2::thread_tmp_360_fu_16210_p1() {
    tmp_360_fu_16210_p1 = esl_zext<64,32>(tmp_495_cast_fu_16207_p1.read());
}

void ShuffleNetV2::thread_tmp_361_fu_15972_p2() {
    tmp_361_fu_15972_p2 = (!p_shl76_cast_fu_15956_p1.read().is_01() || !p_shl77_cast_fu_15968_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl76_cast_fu_15956_p1.read()) - sc_biguint<8>(p_shl77_cast_fu_15968_p1.read()));
}

void ShuffleNetV2::thread_tmp_362_cast_fu_13079_p1() {
    tmp_362_cast_fu_13079_p1 = esl_zext<7,4>(p_lshr_f3_cast_fu_13069_p4.read());
}

void ShuffleNetV2::thread_tmp_362_fu_15988_p2() {
    tmp_362_fu_15988_p2 = (!tmp23_fu_15982_p2.read().is_01() || !co86_cast491_cast_reg_32963.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp23_fu_15982_p2.read()) + sc_biguint<9>(co86_cast491_cast_reg_32963.read()));
}

void ShuffleNetV2::thread_tmp_363_cast_fu_12579_p1() {
    tmp_363_cast_fu_12579_p1 = esl_sext<9,8>(tmp_260_fu_12573_p2.read());
}

void ShuffleNetV2::thread_tmp_363_fu_16017_p2() {
    tmp_363_fu_16017_p2 = (!p_shl78_cast_fu_16001_p1.read().is_01() || !p_shl79_cast_fu_16013_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl78_cast_fu_16001_p1.read()) - sc_biguint<7>(p_shl79_cast_fu_16013_p1.read()));
}

void ShuffleNetV2::thread_tmp_364_fu_16023_p2() {
    tmp_364_fu_16023_p2 = (!tmp_363_fu_16017_p2.read().is_01() || !tmp_487_cast_reg_32981.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_363_fu_16017_p2.read()) + sc_biguint<7>(tmp_487_cast_reg_32981.read()));
}

void ShuffleNetV2::thread_tmp_365_cast1_fu_16247_p1() {
    tmp_365_cast1_fu_16247_p1 = esl_zext<36,2>(w61_reg_4751.read());
}

void ShuffleNetV2::thread_tmp_365_cast_fu_16251_p1() {
    tmp_365_cast_fu_16251_p1 = esl_zext<12,2>(w61_reg_4751.read());
}

void ShuffleNetV2::thread_tmp_365_fu_7825_p3() {
    tmp_365_fu_7825_p3 = esl_concat<5,2>(co5_reg_3176.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_366_fu_16609_p2() {
    tmp_366_fu_16609_p2 = (!p_shl82_cast_fu_16593_p1.read().is_01() || !p_shl83_cast_fu_16605_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl82_cast_fu_16593_p1.read()) - sc_biguint<7>(p_shl83_cast_fu_16605_p1.read()));
}

void ShuffleNetV2::thread_tmp_367_fu_16523_p2() {
    tmp_367_fu_16523_p2 = (!p_shl80_cast_fu_16507_p1.read().is_01() || !p_shl81_cast_fu_16519_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl80_cast_fu_16507_p1.read()) - sc_biguint<7>(p_shl81_cast_fu_16519_p1.read()));
}

void ShuffleNetV2::thread_tmp_368_fu_16539_p2() {
    tmp_368_fu_16539_p2 = (!i73_cast471_cast_reg_33173.read().is_01() || !tmp26_fu_16533_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(i73_cast471_cast_reg_33173.read()) + sc_biguint<8>(tmp26_fu_16533_p2.read()));
}

void ShuffleNetV2::thread_tmp_369_fu_16552_p1() {
    tmp_369_fu_16552_p1 = esl_zext<64,10>(tmp_511_cast_fu_16549_p1.read());
}

void ShuffleNetV2::thread_tmp_370_fu_16544_p2() {
    tmp_370_fu_16544_p2 = (!tmp_367_fu_16523_p2.read().is_01() || !i73_cast_reg_33168.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_367_fu_16523_p2.read()) + sc_biguint<7>(i73_cast_reg_33168.read()));
}

void ShuffleNetV2::thread_tmp_371_cast_fu_13351_p1() {
    tmp_371_cast_fu_13351_p1 = esl_sext<10,7>(tmp_270_fu_13345_p2.read());
}

void ShuffleNetV2::thread_tmp_371_fu_16560_p1() {
    tmp_371_fu_16560_p1 = esl_zext<64,32>(tmp_513_cast_fu_16557_p1.read());
}

void ShuffleNetV2::thread_tmp_372_cast1_fu_16267_p1() {
    tmp_372_cast1_fu_16267_p1 = esl_zext<10,2>(h62_reg_4762.read());
}

void ShuffleNetV2::thread_tmp_372_cast_fu_16271_p1() {
    tmp_372_cast_fu_16271_p1 = esl_zext<15,2>(h62_reg_4762.read());
}

void ShuffleNetV2::thread_tmp_372_fu_7837_p2() {
    tmp_372_fu_7837_p2 = (!p_shl281_cast_fu_7833_p1.read().is_01() || !tmp_109_cast_fu_7821_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl281_cast_fu_7833_p1.read()) - sc_biguint<8>(tmp_109_cast_fu_7821_p1.read()));
}

void ShuffleNetV2::thread_tmp_373_cast_fu_16645_p1() {
    tmp_373_cast_fu_16645_p1 = esl_zext<18,5>(ci42_reg_4817.read());
}

void ShuffleNetV2::thread_tmp_373_fu_7863_p2() {
    tmp_373_fu_7863_p2 = (!tmp_113_cast_fu_7859_p1.read().is_01() || !tmp_585_cast_reg_30408.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_113_cast_fu_7859_p1.read()) + sc_bigint<9>(tmp_585_cast_reg_30408.read()));
}

void ShuffleNetV2::thread_tmp_374_fu_16649_p2() {
    tmp_374_fu_16649_p2 = (!tmp_366_reg_33222.read().is_01() || !ci42_cast_fu_16629_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_366_reg_33222.read()) + sc_biguint<7>(ci42_cast_fu_16629_p1.read()));
}

void ShuffleNetV2::thread_tmp_375_cast1_fu_16654_p1() {
    tmp_375_cast1_fu_16654_p1 = esl_sext<13,7>(tmp_374_fu_16649_p2.read());
}

void ShuffleNetV2::thread_tmp_375_cast_fu_13375_p1() {
    tmp_375_cast_fu_13375_p1 = esl_sext<32,7>(tmp_273_reg_32159.read());
}

void ShuffleNetV2::thread_tmp_375_fu_7884_p2() {
    tmp_375_fu_7884_p2 = (!p_shl282_cast_fu_7880_p1.read().is_01() || !tmp_602_cast_fu_7868_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_shl282_cast_fu_7880_p1.read()) - sc_bigint<15>(tmp_602_cast_fu_7868_p1.read()));
}

void ShuffleNetV2::thread_tmp_376_fu_16315_p2() {
    tmp_376_fu_16315_p2 = (!p_shl86_cast_fu_16299_p1.read().is_01() || !p_shl87_cast_fu_16311_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl86_cast_fu_16299_p1.read()) - sc_biguint<7>(p_shl87_cast_fu_16311_p1.read()));
}

void ShuffleNetV2::thread_tmp_377_fu_16331_p2() {
    tmp_377_fu_16331_p2 = (!tmp25_fu_16325_p2.read().is_01() || !co89_cast1_reg_33074.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp25_fu_16325_p2.read()) + sc_biguint<9>(co89_cast1_reg_33074.read()));
}

void ShuffleNetV2::thread_tmp_378_cast_fu_16341_p1() {
    tmp_378_cast_fu_16341_p1 = esl_zext<12,9>(tmp_377_reg_33131.read());
}

void ShuffleNetV2::thread_tmp_378_fu_7970_p3() {
    tmp_378_fu_7970_p3 = esl_concat<6,5>(tmp_114_fu_7964_p2.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_379_fu_16336_p2() {
    tmp_379_fu_16336_p2 = (!co89_cast_reg_33069.read().is_01() || !tmp_376_fu_16315_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(co89_cast_reg_33069.read()) + sc_biguint<7>(tmp_376_fu_16315_p2.read()));
}

void ShuffleNetV2::thread_tmp_380_cast_fu_16396_p1() {
    tmp_380_cast_fu_16396_p1 = esl_zext<35,32>(tmp_532_cast_fu_16393_p1.read());
}

void ShuffleNetV2::thread_tmp_380_fu_7982_p3() {
    tmp_380_fu_7982_p3 = esl_concat<6,3>(tmp_114_fu_7964_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_381_fu_16891_p2() {
    tmp_381_fu_16891_p2 = (!p_shl84_cast_fu_16875_p1.read().is_01() || !p_shl85_cast_fu_16887_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl84_cast_fu_16875_p1.read()) - sc_biguint<7>(p_shl85_cast_fu_16887_p1.read()));
}

void ShuffleNetV2::thread_tmp_382_cast_fu_13158_p1() {
    tmp_382_cast_fu_13158_p1 = esl_sext<10,8>(tmp_275_fu_13152_p2.read());
}

void ShuffleNetV2::thread_tmp_382_fu_16911_p2() {
    tmp_382_fu_16911_p2 = (!i75_cast1_reg_33279.read().is_01() || !tmp28_cast_fu_16907_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(i75_cast1_reg_33279.read()) + sc_biguint<11>(tmp28_cast_fu_16907_p1.read()));
}

void ShuffleNetV2::thread_tmp_383_fu_16921_p1() {
    tmp_383_fu_16921_p1 = esl_zext<64,11>(tmp_382_reg_33300.read());
}

void ShuffleNetV2::thread_tmp_384_fu_16916_p2() {
    tmp_384_fu_16916_p2 = (!tmp_381_fu_16891_p2.read().is_01() || !i75_cast_reg_33274.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_381_fu_16891_p2.read()) + sc_biguint<7>(i75_cast_reg_33274.read()));
}

void ShuffleNetV2::thread_tmp_385_fu_16928_p1() {
    tmp_385_fu_16928_p1 = esl_zext<64,32>(tmp_523_cast_fu_16925_p1.read());
}

void ShuffleNetV2::thread_tmp_386_fu_16698_p2() {
    tmp_386_fu_16698_p2 = (!p_shl88_cast_fu_16682_p1.read().is_01() || !p_shl89_cast_fu_16694_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl88_cast_fu_16682_p1.read()) - sc_biguint<8>(p_shl89_cast_fu_16694_p1.read()));
}

void ShuffleNetV2::thread_tmp_387_fu_16714_p2() {
    tmp_387_fu_16714_p2 = (!tmp27_fu_16708_p2.read().is_01() || !co91_cast_reg_33209.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp27_fu_16708_p2.read()) + sc_biguint<11>(co91_cast_reg_33209.read()));
}

void ShuffleNetV2::thread_tmp_388_fu_16743_p2() {
    tmp_388_fu_16743_p2 = (!p_shl90_cast_fu_16727_p1.read().is_01() || !p_shl91_cast_fu_16739_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl90_cast_fu_16727_p1.read()) - sc_biguint<7>(p_shl91_cast_fu_16739_p1.read()));
}

void ShuffleNetV2::thread_tmp_389_cast_fu_13701_p1() {
    tmp_389_cast_fu_13701_p1 = esl_sext<10,7>(tmp_281_fu_13695_p2.read());
}

void ShuffleNetV2::thread_tmp_389_fu_16749_p2() {
    tmp_389_fu_16749_p2 = (!tmp_388_fu_16743_p2.read().is_01() || !tmp_517_cast_reg_33227.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_388_fu_16743_p2.read()) + sc_biguint<7>(tmp_517_cast_reg_33227.read()));
}

void ShuffleNetV2::thread_tmp_390_fu_17068_p2() {
    tmp_390_fu_17068_p2 = (!co94_cast_fu_17052_p1.read().is_01() || !ap_const_lv7_30.is_01())? sc_lv<7>(): (sc_biguint<7>(co94_cast_fu_17052_p1.read()) + sc_biguint<7>(ap_const_lv7_30));
}

void ShuffleNetV2::thread_tmp_391_cast_fu_16987_p1() {
    tmp_391_cast_fu_16987_p1 = esl_zext<10,4>(h_65_fu_16981_p2.read());
}

void ShuffleNetV2::thread_tmp_391_fu_7994_p2() {
    tmp_391_fu_7994_p2 = (!p_shl285_cast_fu_7978_p1.read().is_01() || !p_shl286_cast_fu_7990_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(p_shl285_cast_fu_7978_p1.read()) - sc_biguint<12>(p_shl286_cast_fu_7990_p1.read()));
}

void ShuffleNetV2::thread_tmp_392_fu_17307_p2() {
    tmp_392_fu_17307_p2 = (!p_shl92_cast_fu_17291_p1.read().is_01() || !p_shl93_cast_fu_17303_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl92_cast_fu_17291_p1.read()) - sc_biguint<7>(p_shl93_cast_fu_17303_p1.read()));
}

void ShuffleNetV2::thread_tmp_393_cast1_fu_17146_p1() {
    tmp_393_cast1_fu_17146_p1 = esl_zext<10,4>(h_67_fu_17140_p2.read());
}

void ShuffleNetV2::thread_tmp_393_cast2_fu_17150_p1() {
    tmp_393_cast2_fu_17150_p1 = esl_zext<11,4>(h_67_fu_17140_p2.read());
}

void ShuffleNetV2::thread_tmp_393_cast_fu_13725_p1() {
    tmp_393_cast_fu_13725_p1 = esl_sext<32,7>(tmp_284_reg_32299.read());
}

void ShuffleNetV2::thread_tmp_393_fu_8004_p3() {
    tmp_393_fu_8004_p3 = esl_concat<5,5>(co9_reg_3221.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_394_cast_fu_17038_p1() {
    tmp_394_cast_fu_17038_p1 = esl_zext<15,4>(w_64_fu_17032_p2.read());
}

void ShuffleNetV2::thread_tmp_394_fu_8016_p3() {
    tmp_394_fu_8016_p3 = esl_concat<5,3>(co9_reg_3221.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_395_cast_fu_17343_p1() {
    tmp_395_cast_fu_17343_p1 = esl_zext<18,5>(ci44_reg_4938.read());
}

void ShuffleNetV2::thread_tmp_395_fu_8028_p2() {
    tmp_395_fu_8028_p2 = (!p_shl283_cast_fu_8012_p1.read().is_01() || !p_shl284_cast_fu_8024_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl283_cast_fu_8012_p1.read()) - sc_biguint<11>(p_shl284_cast_fu_8024_p1.read()));
}

void ShuffleNetV2::thread_tmp_396_fu_17347_p2() {
    tmp_396_fu_17347_p2 = (!tmp_392_reg_33426.read().is_01() || !ci44_cast_fu_17327_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_392_reg_33426.read()) + sc_biguint<7>(ci44_cast_fu_17327_p1.read()));
}

void ShuffleNetV2::thread_tmp_397_cast1_fu_17352_p1() {
    tmp_397_cast1_fu_17352_p1 = esl_sext<13,7>(tmp_396_fu_17347_p2.read());
}

void ShuffleNetV2::thread_tmp_397_cast_fu_13793_p1() {
    tmp_397_cast_fu_13793_p1 = esl_zext<7,4>(p_lshr_f4_cast_fu_13783_p4.read());
}

void ShuffleNetV2::thread_tmp_397_fu_7906_p2() {
    tmp_397_fu_7906_p2 = (!tmp_375_reg_30421.read().is_01() || !tmp_115_cast_fu_7902_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_375_reg_30421.read()) + sc_biguint<15>(tmp_115_cast_fu_7902_p1.read()));
}

void ShuffleNetV2::thread_tmp_398_cast1_fu_17236_p1() {
    tmp_398_cast1_fu_17236_p1 = esl_zext<14,4>(w_66_fu_17230_p2.read());
}

void ShuffleNetV2::thread_tmp_398_cast_fu_17240_p1() {
    tmp_398_cast_fu_17240_p1 = esl_zext<15,4>(w_66_fu_17230_p2.read());
}

void ShuffleNetV2::thread_tmp_398_fu_8054_p2() {
    tmp_398_fu_8054_p2 = (!tmp_632_cast_reg_30465.read().is_01() || !tmp_119_cast_fu_8050_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(tmp_632_cast_reg_30465.read()) + sc_biguint<13>(tmp_119_cast_fu_8050_p1.read()));
}

void ShuffleNetV2::thread_tmp_399_cast_fu_14065_p1() {
    tmp_399_cast_fu_14065_p1 = esl_sext<10,7>(tmp_295_fu_14059_p2.read());
}

void ShuffleNetV2::thread_tmp_399_fu_17589_p2() {
    tmp_399_fu_17589_p2 = (!p_shl94_cast_fu_17573_p1.read().is_01() || !p_shl95_cast_fu_17585_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl94_cast_fu_17573_p1.read()) - sc_biguint<7>(p_shl95_cast_fu_17585_p1.read()));
}

void ShuffleNetV2::thread_tmp_400_fu_17605_p2() {
    tmp_400_fu_17605_p2 = (!i81_cast1_reg_33483.read().is_01() || !tmp30_fu_17599_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(i81_cast1_reg_33483.read()) + sc_biguint<11>(tmp30_fu_17599_p2.read()));
}

void ShuffleNetV2::thread_tmp_401_fu_17615_p1() {
    tmp_401_fu_17615_p1 = esl_zext<64,11>(tmp_400_reg_33504.read());
}

void ShuffleNetV2::thread_tmp_402_fu_17610_p2() {
    tmp_402_fu_17610_p2 = (!tmp_399_fu_17589_p2.read().is_01() || !i81_cast_reg_33478.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_399_fu_17589_p2.read()) + sc_biguint<7>(i81_cast_reg_33478.read()));
}

void ShuffleNetV2::thread_tmp_403_cast_fu_14089_p1() {
    tmp_403_cast_fu_14089_p1 = esl_sext<32,7>(tmp_298_reg_32405.read());
}

void ShuffleNetV2::thread_tmp_403_fu_17622_p1() {
    tmp_403_fu_17622_p1 = esl_zext<64,32>(tmp_555_cast_fu_17619_p1.read());
}

void ShuffleNetV2::thread_tmp_404_fu_17396_p2() {
    tmp_404_fu_17396_p2 = (!p_shl96_cast_fu_17380_p1.read().is_01() || !p_shl97_cast_fu_17392_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl96_cast_fu_17380_p1.read()) - sc_biguint<8>(p_shl97_cast_fu_17392_p1.read()));
}

void ShuffleNetV2::thread_tmp_405_fu_17412_p2() {
    tmp_405_fu_17412_p2 = (!tmp29_fu_17406_p2.read().is_01() || !co96_cast_reg_33413.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp29_fu_17406_p2.read()) + sc_biguint<11>(co96_cast_reg_33413.read()));
}

void ShuffleNetV2::thread_tmp_406_fu_17441_p2() {
    tmp_406_fu_17441_p2 = (!p_shl98_cast_fu_17425_p1.read().is_01() || !p_shl99_cast_fu_17437_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl98_cast_fu_17425_p1.read()) - sc_biguint<7>(p_shl99_cast_fu_17437_p1.read()));
}

void ShuffleNetV2::thread_tmp_407_fu_17447_p2() {
    tmp_407_fu_17447_p2 = (!tmp_406_fu_17441_p2.read().is_01() || !tmp_547_cast_reg_33431.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_406_fu_17441_p2.read()) + sc_biguint<7>(tmp_547_cast_reg_33431.read()));
}

void ShuffleNetV2::thread_tmp_408_cast1_fu_17659_p1() {
    tmp_408_cast1_fu_17659_p1 = esl_zext<36,2>(w67_reg_4993.read());
}

void ShuffleNetV2::thread_tmp_408_cast_fu_17663_p1() {
    tmp_408_cast_fu_17663_p1 = esl_zext<12,2>(w67_reg_4993.read());
}

void ShuffleNetV2::thread_tmp_408_fu_8064_p2() {
    tmp_408_fu_8064_p2 = (!tmp_395_reg_30470.read().is_01() || !tmp_119_cast1_fu_8046_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_395_reg_30470.read()) + sc_biguint<11>(tmp_119_cast1_fu_8046_p1.read()));
}

void ShuffleNetV2::thread_tmp_409_fu_18017_p2() {
    tmp_409_fu_18017_p2 = (!p_shl102_cast_fu_18001_p1.read().is_01() || !p_shl103_cast_fu_18013_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl102_cast_fu_18001_p1.read()) - sc_biguint<7>(p_shl103_cast_fu_18013_p1.read()));
}

void ShuffleNetV2::thread_tmp_410_fu_17935_p2() {
    tmp_410_fu_17935_p2 = (!p_shl100_cast_fu_17919_p1.read().is_01() || !p_shl101_cast_fu_17931_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl100_cast_fu_17919_p1.read()) - sc_biguint<7>(p_shl101_cast_fu_17931_p1.read()));
}

void ShuffleNetV2::thread_tmp_411_fu_17951_p2() {
    tmp_411_fu_17951_p2 = (!i85_cast1_reg_33623.read().is_01() || !tmp32_fu_17945_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(i85_cast1_reg_33623.read()) + sc_biguint<11>(tmp32_fu_17945_p2.read()));
}

void ShuffleNetV2::thread_tmp_412_cast_fu_13565_p1() {
    tmp_412_cast_fu_13565_p1 = esl_sext<32,7>(tmp_293_reg_32237.read());
}

void ShuffleNetV2::thread_tmp_412_fu_17961_p1() {
    tmp_412_fu_17961_p1 = esl_zext<64,11>(tmp_411_reg_33644.read());
}

void ShuffleNetV2::thread_tmp_413_fu_17956_p2() {
    tmp_413_fu_17956_p2 = (!tmp_410_fu_17935_p2.read().is_01() || !i85_cast_reg_33618.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_410_fu_17935_p2.read()) + sc_biguint<7>(i85_cast_reg_33618.read()));
}

void ShuffleNetV2::thread_tmp_414_fu_17968_p1() {
    tmp_414_fu_17968_p1 = esl_zext<64,32>(tmp_573_cast_fu_17965_p1.read());
}

void ShuffleNetV2::thread_tmp_415_cast1_fu_17679_p1() {
    tmp_415_cast1_fu_17679_p1 = esl_zext<10,2>(h68_reg_5004.read());
}

void ShuffleNetV2::thread_tmp_415_cast2_fu_17683_p1() {
    tmp_415_cast2_fu_17683_p1 = esl_zext<15,2>(h68_reg_5004.read());
}

void ShuffleNetV2::thread_tmp_415_cast_fu_13872_p1() {
    tmp_415_cast_fu_13872_p1 = esl_sext<10,8>(tmp_300_fu_13866_p2.read());
}

void ShuffleNetV2::thread_tmp_415_fu_8131_p3() {
    tmp_415_fu_8131_p3 = esl_concat<6,2>(tmp_120_fu_8121_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_416_cast_fu_18053_p1() {
    tmp_416_cast_fu_18053_p1 = esl_zext<18,5>(ci46_reg_5059.read());
}

void ShuffleNetV2::thread_tmp_416_fu_8143_p2() {
    tmp_416_fu_8143_p2 = (!p_shl288_cast_fu_8139_p1.read().is_01() || !tmp_121_cast_fu_8127_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(p_shl288_cast_fu_8139_p1.read()) - sc_biguint<9>(tmp_121_cast_fu_8127_p1.read()));
}

void ShuffleNetV2::thread_tmp_417_fu_18057_p2() {
    tmp_417_fu_18057_p2 = (!tmp_409_reg_33672.read().is_01() || !ci46_cast_fu_18037_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_409_reg_33672.read()) + sc_biguint<7>(ci46_cast_fu_18037_p1.read()));
}

void ShuffleNetV2::thread_tmp_418_cast_fu_18062_p1() {
    tmp_418_cast_fu_18062_p1 = esl_sext<13,7>(tmp_417_fu_18057_p2.read());
}

void ShuffleNetV2::thread_tmp_418_fu_8153_p3() {
    tmp_418_fu_8153_p3 = esl_concat<5,2>(co12_reg_3255.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_419_fu_17727_p2() {
    tmp_419_fu_17727_p2 = (!p_shl106_cast_fu_17711_p1.read().is_01() || !p_shl107_cast_fu_17723_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl106_cast_fu_17711_p1.read()) - sc_biguint<7>(p_shl107_cast_fu_17723_p1.read()));
}

void ShuffleNetV2::thread_tmp_420_fu_17743_p2() {
    tmp_420_fu_17743_p2 = (!tmp31_fu_17737_p2.read().is_01() || !co99_cast1_reg_33524.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp31_fu_17737_p2.read()) + sc_biguint<9>(co99_cast1_reg_33524.read()));
}

void ShuffleNetV2::thread_tmp_421_cast_fu_17753_p1() {
    tmp_421_cast_fu_17753_p1 = esl_zext<12,9>(tmp_420_reg_33581.read());
}

void ShuffleNetV2::thread_tmp_421_fu_8165_p2() {
    tmp_421_fu_8165_p2 = (!p_shl287_cast_fu_8161_p1.read().is_01() || !tmp_122_cast_fu_8149_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl287_cast_fu_8161_p1.read()) - sc_biguint<8>(tmp_122_cast_fu_8149_p1.read()));
}

void ShuffleNetV2::thread_tmp_422_fu_17748_p2() {
    tmp_422_fu_17748_p2 = (!co99_cast_reg_33519.read().is_01() || !tmp_419_fu_17727_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(co99_cast_reg_33519.read()) + sc_biguint<7>(tmp_419_fu_17727_p2.read()));
}

void ShuffleNetV2::thread_tmp_423_cast_fu_17808_p1() {
    tmp_423_cast_fu_17808_p1 = esl_zext<35,32>(tmp_592_cast_fu_17805_p1.read());
}

void ShuffleNetV2::thread_tmp_423_fu_8191_p2() {
    tmp_423_fu_8191_p2 = (!tmp_416_reg_30514.read().is_01() || !tmp_126_cast_fu_8187_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_416_reg_30514.read()) + sc_biguint<9>(tmp_126_cast_fu_8187_p1.read()));
}

void ShuffleNetV2::thread_tmp_424_fu_18299_p2() {
    tmp_424_fu_18299_p2 = (!p_shl104_cast_fu_18283_p1.read().is_01() || !p_shl105_cast_fu_18295_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl104_cast_fu_18283_p1.read()) - sc_biguint<7>(p_shl105_cast_fu_18295_p1.read()));
}

void ShuffleNetV2::thread_tmp_425_fu_18315_p2() {
    tmp_425_fu_18315_p2 = (!i87_cast1_reg_33729.read().is_01() || !tmp34_fu_18309_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(i87_cast1_reg_33729.read()) + sc_biguint<11>(tmp34_fu_18309_p2.read()));
}

void ShuffleNetV2::thread_tmp_426_fu_18325_p1() {
    tmp_426_fu_18325_p1 = esl_zext<64,11>(tmp_425_reg_33750.read());
}

void ShuffleNetV2::thread_tmp_427_cast_fu_14487_p1() {
    tmp_427_cast_fu_14487_p1 = esl_zext<7,4>(p_lshr_f5_cast_fu_14477_p4.read());
}

void ShuffleNetV2::thread_tmp_427_fu_18320_p2() {
    tmp_427_fu_18320_p2 = (!tmp_424_fu_18299_p2.read().is_01() || !i87_cast_reg_33724.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_424_fu_18299_p2.read()) + sc_biguint<7>(i87_cast_reg_33724.read()));
}

void ShuffleNetV2::thread_tmp_428_fu_18332_p1() {
    tmp_428_fu_18332_p1 = esl_zext<64,32>(tmp_583_cast_fu_18329_p1.read());
}

void ShuffleNetV2::thread_tmp_429_fu_18106_p2() {
    tmp_429_fu_18106_p2 = (!p_shl108_cast_fu_18090_p1.read().is_01() || !p_shl109_cast_fu_18102_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl108_cast_fu_18090_p1.read()) - sc_biguint<8>(p_shl109_cast_fu_18102_p1.read()));
}

void ShuffleNetV2::thread_tmp_430_fu_18122_p2() {
    tmp_430_fu_18122_p2 = (!tmp33_fu_18116_p2.read().is_01() || !co101_cast_reg_33659.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp33_fu_18116_p2.read()) + sc_biguint<11>(co101_cast_reg_33659.read()));
}

void ShuffleNetV2::thread_tmp_431_cast_fu_14759_p1() {
    tmp_431_cast_fu_14759_p1 = esl_sext<10,7>(tmp_313_fu_14753_p2.read());
}

void ShuffleNetV2::thread_tmp_431_fu_18151_p2() {
    tmp_431_fu_18151_p2 = (!p_shl110_cast_fu_18135_p1.read().is_01() || !p_shl111_cast_fu_18147_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl110_cast_fu_18135_p1.read()) - sc_biguint<7>(p_shl111_cast_fu_18147_p1.read()));
}

void ShuffleNetV2::thread_tmp_432_fu_18157_p2() {
    tmp_432_fu_18157_p2 = (!tmp_431_fu_18151_p2.read().is_01() || !tmp_577_cast_reg_33677.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_431_fu_18151_p2.read()) + sc_biguint<7>(tmp_577_cast_reg_33677.read()));
}

void ShuffleNetV2::thread_tmp_433_fu_18472_p2() {
    tmp_433_fu_18472_p2 = (!co104_cast_fu_18456_p1.read().is_01() || !ap_const_lv7_30.is_01())? sc_lv<7>(): (sc_biguint<7>(co104_cast_fu_18456_p1.read()) + sc_biguint<7>(ap_const_lv7_30));
}

void ShuffleNetV2::thread_tmp_434_cast_fu_18391_p1() {
    tmp_434_cast_fu_18391_p1 = esl_zext<10,4>(h_71_fu_18385_p2.read());
}

void ShuffleNetV2::thread_tmp_434_fu_8212_p2() {
    tmp_434_fu_8212_p2 = (!p_shl290_cast_fu_8208_p1.read().is_01() || !tmp_713_cast_fu_8196_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_shl290_cast_fu_8208_p1.read()) - sc_bigint<15>(tmp_713_cast_fu_8196_p1.read()));
}

void ShuffleNetV2::thread_tmp_435_cast_fu_14783_p1() {
    tmp_435_cast_fu_14783_p1 = esl_sext<32,7>(tmp_316_reg_32609.read());
}

void ShuffleNetV2::thread_tmp_435_fu_18711_p2() {
    tmp_435_fu_18711_p2 = (!p_shl112_cast_fu_18695_p1.read().is_01() || !p_shl113_cast_fu_18707_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl112_cast_fu_18695_p1.read()) - sc_biguint<7>(p_shl113_cast_fu_18707_p1.read()));
}

void ShuffleNetV2::thread_tmp_436_cast1_fu_18550_p1() {
    tmp_436_cast1_fu_18550_p1 = esl_zext<11,4>(h_73_fu_18544_p2.read());
}

void ShuffleNetV2::thread_tmp_436_cast_fu_18554_p1() {
    tmp_436_cast_fu_18554_p1 = esl_zext<10,4>(h_73_fu_18544_p2.read());
}

void ShuffleNetV2::thread_tmp_436_fu_8218_p2() {
    tmp_436_fu_8218_p2 = (!tmp_710_cast1_reg_30519.read().is_01() || !tmp_126_cast_fu_8187_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_710_cast1_reg_30519.read()) + sc_biguint<9>(tmp_126_cast_fu_8187_p1.read()));
}

void ShuffleNetV2::thread_tmp_437_cast_fu_18442_p1() {
    tmp_437_cast_fu_18442_p1 = esl_zext<15,4>(w_70_fu_18436_p2.read());
}

void ShuffleNetV2::thread_tmp_437_fu_8229_p2() {
    tmp_437_fu_8229_p2 = (!tmp_126_fu_8223_p2.read().is_01() || !tmp_436_fu_8218_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_126_fu_8223_p2.read()) - sc_biguint<9>(tmp_436_fu_8218_p2.read()));
}

void ShuffleNetV2::thread_tmp_438_cast_fu_18747_p1() {
    tmp_438_cast_fu_18747_p1 = esl_zext<18,5>(ci48_reg_5180.read());
}

void ShuffleNetV2::thread_tmp_438_fu_8330_p3() {
    tmp_438_fu_8330_p3 = esl_concat<7,5>(tmp_127_fu_8324_p2.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_439_fu_18751_p2() {
    tmp_439_fu_18751_p2 = (!tmp_435_reg_33876.read().is_01() || !ci48_cast_fu_18731_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_435_reg_33876.read()) + sc_biguint<7>(ci48_cast_fu_18731_p1.read()));
}

void ShuffleNetV2::thread_tmp_440_cast_fu_18756_p1() {
    tmp_440_cast_fu_18756_p1 = esl_sext<13,7>(tmp_439_fu_18751_p2.read());
}

void ShuffleNetV2::thread_tmp_440_fu_8342_p3() {
    tmp_440_fu_8342_p3 = esl_concat<7,3>(tmp_127_fu_8324_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_441_cast1_fu_18640_p1() {
    tmp_441_cast1_fu_18640_p1 = esl_zext<15,4>(w_72_fu_18634_p2.read());
}

void ShuffleNetV2::thread_tmp_441_cast_fu_18644_p1() {
    tmp_441_cast_fu_18644_p1 = esl_zext<14,4>(w_72_fu_18634_p2.read());
}

void ShuffleNetV2::thread_tmp_441_fu_8354_p2() {
    tmp_441_fu_8354_p2 = (!p_shl293_cast_fu_8338_p1.read().is_01() || !p_shl294_cast_fu_8350_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl293_cast_fu_8338_p1.read()) - sc_biguint<13>(p_shl294_cast_fu_8350_p1.read()));
}

void ShuffleNetV2::thread_tmp_442_cast_fu_14566_p1() {
    tmp_442_cast_fu_14566_p1 = esl_sext<10,8>(tmp_318_fu_14560_p2.read());
}

void ShuffleNetV2::thread_tmp_442_fu_18993_p2() {
    tmp_442_fu_18993_p2 = (!p_shl114_cast_fu_18977_p1.read().is_01() || !p_shl115_cast_fu_18989_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl114_cast_fu_18977_p1.read()) - sc_biguint<7>(p_shl115_cast_fu_18989_p1.read()));
}

void ShuffleNetV2::thread_tmp_443_fu_19009_p2() {
    tmp_443_fu_19009_p2 = (!i93_cast1_reg_33933.read().is_01() || !tmp36_fu_19003_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(i93_cast1_reg_33933.read()) + sc_biguint<11>(tmp36_fu_19003_p2.read()));
}

void ShuffleNetV2::thread_tmp_444_fu_19019_p1() {
    tmp_444_fu_19019_p1 = esl_zext<64,11>(tmp_443_reg_33954.read());
}

void ShuffleNetV2::thread_tmp_445_fu_19014_p2() {
    tmp_445_fu_19014_p2 = (!tmp_442_fu_18993_p2.read().is_01() || !i93_cast_reg_33928.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_442_fu_18993_p2.read()) + sc_biguint<7>(i93_cast_reg_33928.read()));
}

void ShuffleNetV2::thread_tmp_446_fu_19026_p1() {
    tmp_446_fu_19026_p1 = esl_zext<64,32>(tmp_615_cast_fu_19023_p1.read());
}

void ShuffleNetV2::thread_tmp_447_fu_18800_p2() {
    tmp_447_fu_18800_p2 = (!p_shl116_cast_fu_18784_p1.read().is_01() || !p_shl117_cast_fu_18796_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl116_cast_fu_18784_p1.read()) - sc_biguint<8>(p_shl117_cast_fu_18796_p1.read()));
}

void ShuffleNetV2::thread_tmp_448_fu_18816_p2() {
    tmp_448_fu_18816_p2 = (!tmp35_fu_18810_p2.read().is_01() || !co106_cast_reg_33863.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp35_fu_18810_p2.read()) + sc_biguint<11>(co106_cast_reg_33863.read()));
}

void ShuffleNetV2::thread_tmp_449_cast_cast_fu_15105_p1() {
    tmp_449_cast_cast_fu_15105_p1 = esl_sext<9,7>(tmp_324_fu_15099_p2.read());
}

void ShuffleNetV2::thread_tmp_449_fu_18845_p2() {
    tmp_449_fu_18845_p2 = (!p_shl118_cast_fu_18829_p1.read().is_01() || !p_shl119_cast_fu_18841_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl118_cast_fu_18829_p1.read()) - sc_biguint<7>(p_shl119_cast_fu_18841_p1.read()));
}

void ShuffleNetV2::thread_tmp_450_fu_18851_p2() {
    tmp_450_fu_18851_p2 = (!tmp_449_fu_18845_p2.read().is_01() || !tmp_607_cast_reg_33881.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_449_fu_18845_p2.read()) + sc_biguint<7>(tmp_607_cast_reg_33881.read()));
}

void ShuffleNetV2::thread_tmp_451_cast1_fu_19063_p1() {
    tmp_451_cast1_fu_19063_p1 = esl_zext<36,2>(w73_reg_5235.read());
}

void ShuffleNetV2::thread_tmp_451_cast2_fu_19067_p1() {
    tmp_451_cast2_fu_19067_p1 = esl_zext<12,2>(w73_reg_5235.read());
}

void ShuffleNetV2::thread_tmp_451_cast_fu_15125_p1() {
    tmp_451_cast_fu_15125_p1 = esl_sext<10,9>(tmp_325_reg_32744.read());
}

void ShuffleNetV2::thread_tmp_451_fu_8364_p3() {
    tmp_451_fu_8364_p3 = esl_concat<5,5>(co16_reg_3300.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_452_fu_19429_p2() {
    tmp_452_fu_19429_p2 = (!p_shl122_cast_fu_19413_p1.read().is_01() || !p_shl123_cast_fu_19425_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl122_cast_fu_19413_p1.read()) - sc_biguint<7>(p_shl123_cast_fu_19425_p1.read()));
}

void ShuffleNetV2::thread_tmp_453_cast_fu_15133_p1() {
    tmp_453_cast_fu_15133_p1 = esl_sext<32,7>(tmp_327_reg_32749.read());
}

void ShuffleNetV2::thread_tmp_453_fu_19347_p2() {
    tmp_453_fu_19347_p2 = (!p_shl120_cast_fu_19331_p1.read().is_01() || !p_shl121_cast_fu_19343_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl120_cast_fu_19331_p1.read()) - sc_biguint<7>(p_shl121_cast_fu_19343_p1.read()));
}

void ShuffleNetV2::thread_tmp_454_fu_19363_p2() {
    tmp_454_fu_19363_p2 = (!i97_cast1_reg_34073.read().is_01() || !tmp38_fu_19357_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(i97_cast1_reg_34073.read()) + sc_biguint<11>(tmp38_fu_19357_p2.read()));
}

void ShuffleNetV2::thread_tmp_455_fu_19373_p1() {
    tmp_455_fu_19373_p1 = esl_zext<64,11>(tmp_454_reg_34094.read());
}

void ShuffleNetV2::thread_tmp_456_fu_19368_p2() {
    tmp_456_fu_19368_p2 = (!tmp_453_fu_19347_p2.read().is_01() || !i97_cast_reg_34068.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_453_fu_19347_p2.read()) + sc_biguint<7>(i97_cast_reg_34068.read()));
}

void ShuffleNetV2::thread_tmp_457_cast_fu_15201_p1() {
    tmp_457_cast_fu_15201_p1 = esl_zext<7,4>(p_lshr_f6_cast_fu_15191_p4.read());
}

void ShuffleNetV2::thread_tmp_457_fu_19380_p1() {
    tmp_457_fu_19380_p1 = esl_zext<64,32>(tmp_633_cast_fu_19377_p1.read());
}

void ShuffleNetV2::thread_tmp_458_cast1_fu_19083_p1() {
    tmp_458_cast1_fu_19083_p1 = esl_zext<10,2>(h74_reg_5246.read());
}

void ShuffleNetV2::thread_tmp_458_cast_fu_19087_p1() {
    tmp_458_cast_fu_19087_p1 = esl_zext<15,2>(h74_reg_5246.read());
}

void ShuffleNetV2::thread_tmp_458_fu_8376_p3() {
    tmp_458_fu_8376_p3 = esl_concat<5,3>(co16_reg_3300.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_459_cast_cast_fu_15473_p1() {
    tmp_459_cast_cast_fu_15473_p1 = esl_sext<9,7>(tmp_338_fu_15467_p2.read());
}

void ShuffleNetV2::thread_tmp_459_cast_fu_19465_p1() {
    tmp_459_cast_fu_19465_p1 = esl_zext<18,5>(ci50_reg_5301.read());
}

void ShuffleNetV2::thread_tmp_459_fu_8388_p2() {
    tmp_459_fu_8388_p2 = (!p_shl291_cast_fu_8372_p1.read().is_01() || !p_shl292_cast_fu_8384_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl291_cast_fu_8372_p1.read()) - sc_biguint<11>(p_shl292_cast_fu_8384_p1.read()));
}

void ShuffleNetV2::thread_tmp_460_fu_8255_p2() {
    tmp_460_fu_8255_p2 = (!tmp_434_reg_30532.read().is_01() || !tmp_128_cast_fu_8251_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_434_reg_30532.read()) + sc_biguint<15>(tmp_128_cast_fu_8251_p1.read()));
}

void ShuffleNetV2::thread_tmp_461_cast_fu_15493_p1() {
    tmp_461_cast_fu_15493_p1 = esl_sext<10,9>(tmp_339_reg_32850.read());
}

void ShuffleNetV2::thread_tmp_461_fu_19469_p2() {
    tmp_461_fu_19469_p2 = (!tmp_452_reg_34122.read().is_01() || !ci50_cast_fu_19449_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_452_reg_34122.read()) + sc_biguint<7>(ci50_cast_fu_19449_p1.read()));
}

void ShuffleNetV2::thread_tmp_462_cast_fu_19474_p1() {
    tmp_462_cast_fu_19474_p1 = esl_sext<13,7>(tmp_461_fu_19469_p2.read());
}

void ShuffleNetV2::thread_tmp_462_fu_8265_p2() {
    tmp_462_fu_8265_p2 = (!tmp_437_reg_30537.read().is_01() || !tmp_128_cast1_fu_8247_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_437_reg_30537.read()) + sc_biguint<9>(tmp_128_cast1_fu_8247_p1.read()));
}

void ShuffleNetV2::thread_tmp_463_cast1_fu_7580_p1() {
    tmp_463_cast1_fu_7580_p1 = esl_zext<8,7>(tmp_322_fu_7572_p3.read());
}

void ShuffleNetV2::thread_tmp_463_cast_fu_15501_p1() {
    tmp_463_cast_fu_15501_p1 = esl_sext<32,7>(tmp_341_reg_32855.read());
}

void ShuffleNetV2::thread_tmp_463_fu_8414_p2() {
    tmp_463_fu_8414_p2 = (!tmp_787_cast1_reg_30581.read().is_01() || !tmp_132_cast_fu_8410_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(tmp_787_cast1_reg_30581.read()) + sc_biguint<14>(tmp_132_cast_fu_8410_p1.read()));
}

void ShuffleNetV2::thread_tmp_464_fu_19131_p2() {
    tmp_464_fu_19131_p2 = (!p_shl126_cast_fu_19115_p1.read().is_01() || !p_shl127_cast_fu_19127_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl126_cast_fu_19115_p1.read()) - sc_biguint<7>(p_shl127_cast_fu_19127_p1.read()));
}

void ShuffleNetV2::thread_tmp_465_fu_8424_p2() {
    tmp_465_fu_8424_p2 = (!tmp_459_reg_30586.read().is_01() || !tmp_132_cast1_fu_8406_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_459_reg_30586.read()) + sc_biguint<11>(tmp_132_cast1_fu_8406_p1.read()));
}

void ShuffleNetV2::thread_tmp_466_fu_8487_p3() {
    tmp_466_fu_8487_p3 = esl_concat<6,4>(tmp_133_fu_8481_p2.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_467_fu_19147_p2() {
    tmp_467_fu_19147_p2 = (!tmp37_fu_19141_p2.read().is_01() || !co109_cast401_cast_reg_33974.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp37_fu_19141_p2.read()) + sc_biguint<8>(co109_cast401_cast_reg_33974.read()));
}

void ShuffleNetV2::thread_tmp_468_cast1_fu_19160_p1() {
    tmp_468_cast1_fu_19160_p1 = esl_zext<12,9>(tmp_650_cast_fu_19157_p1.read());
}

void ShuffleNetV2::thread_tmp_468_cast_fu_14897_p1() {
    tmp_468_cast_fu_14897_p1 = esl_sext<9,7>(tmp_333_fu_14891_p2.read());
}

void ShuffleNetV2::thread_tmp_468_fu_8499_p3() {
    tmp_468_fu_8499_p3 = esl_concat<6,1>(tmp_133_fu_8481_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_469_fu_19152_p2() {
    tmp_469_fu_19152_p2 = (!co109_cast_reg_33969.read().is_01() || !tmp_464_fu_19131_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(co109_cast_reg_33969.read()) + sc_biguint<7>(tmp_464_fu_19131_p2.read()));
}

void ShuffleNetV2::thread_tmp_470_cast_fu_19220_p1() {
    tmp_470_cast_fu_19220_p1 = esl_zext<35,32>(tmp_652_cast_fu_19217_p1.read());
}

void ShuffleNetV2::thread_tmp_470_fu_8511_p2() {
    tmp_470_fu_8511_p2 = (!p_shl298_cast_fu_8507_p1.read().is_01() || !p_shl297_cast_fu_8495_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl298_cast_fu_8507_p1.read()) + sc_biguint<11>(p_shl297_cast_fu_8495_p1.read()));
}

void ShuffleNetV2::thread_tmp_471_fu_19711_p2() {
    tmp_471_fu_19711_p2 = (!p_shl124_cast_fu_19695_p1.read().is_01() || !p_shl125_cast_fu_19707_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl124_cast_fu_19695_p1.read()) - sc_biguint<7>(p_shl125_cast_fu_19707_p1.read()));
}

void ShuffleNetV2::thread_tmp_472_cast_fu_14969_p1() {
    tmp_472_cast_fu_14969_p1 = esl_sext<32,7>(tmp_336_reg_32687.read());
}

void ShuffleNetV2::thread_tmp_472_fu_19727_p2() {
    tmp_472_fu_19727_p2 = (!i99_cast1_reg_34179.read().is_01() || !tmp40_fu_19721_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(i99_cast1_reg_34179.read()) + sc_biguint<11>(tmp40_fu_19721_p2.read()));
}

void ShuffleNetV2::thread_tmp_473_fu_19737_p1() {
    tmp_473_fu_19737_p1 = esl_zext<64,11>(tmp_472_reg_34200.read());
}

void ShuffleNetV2::thread_tmp_474_fu_19732_p2() {
    tmp_474_fu_19732_p2 = (!tmp_471_fu_19711_p2.read().is_01() || !i99_cast_reg_34174.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_471_fu_19711_p2.read()) + sc_biguint<7>(i99_cast_reg_34174.read()));
}

void ShuffleNetV2::thread_tmp_475_cast_fu_15280_p1() {
    tmp_475_cast_fu_15280_p1 = esl_sext<10,8>(tmp_343_fu_15274_p2.read());
}

void ShuffleNetV2::thread_tmp_475_fu_19744_p1() {
    tmp_475_fu_19744_p1 = esl_zext<64,32>(tmp_643_cast_fu_19741_p1.read());
}

void ShuffleNetV2::thread_tmp_476_fu_19518_p2() {
    tmp_476_fu_19518_p2 = (!p_shl128_cast_fu_19502_p1.read().is_01() || !p_shl129_cast_fu_19514_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl128_cast_fu_19502_p1.read()) - sc_biguint<8>(p_shl129_cast_fu_19514_p1.read()));
}

void ShuffleNetV2::thread_tmp_477_fu_19534_p2() {
    tmp_477_fu_19534_p2 = (!tmp39_fu_19528_p2.read().is_01() || !co111_cast_reg_34109.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp39_fu_19528_p2.read()) + sc_biguint<11>(co111_cast_reg_34109.read()));
}

void ShuffleNetV2::thread_tmp_478_fu_19563_p2() {
    tmp_478_fu_19563_p2 = (!p_shl130_cast_fu_19547_p1.read().is_01() || !p_shl131_cast_fu_19559_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl130_cast_fu_19547_p1.read()) - sc_biguint<7>(p_shl131_cast_fu_19559_p1.read()));
}

void ShuffleNetV2::thread_tmp_479_fu_19569_p2() {
    tmp_479_fu_19569_p2 = (!tmp_478_fu_19563_p2.read().is_01() || !tmp_637_cast_reg_34127.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_478_fu_19563_p2.read()) + sc_biguint<7>(tmp_637_cast_reg_34127.read()));
}

void ShuffleNetV2::thread_tmp_480_fu_19884_p2() {
    tmp_480_fu_19884_p2 = (!co114_cast_fu_19868_p1.read().is_01() || !ap_const_lv7_30.is_01())? sc_lv<7>(): (sc_biguint<7>(co114_cast_fu_19868_p1.read()) + sc_biguint<7>(ap_const_lv7_30));
}

void ShuffleNetV2::thread_tmp_481_cast_fu_19803_p1() {
    tmp_481_cast_fu_19803_p1 = esl_zext<10,4>(h_77_fu_19797_p2.read());
}

void ShuffleNetV2::thread_tmp_481_fu_8517_p3() {
    tmp_481_fu_8517_p3 = esl_concat<5,4>(co19_reg_3334.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_482_fu_8529_p3() {
    tmp_482_fu_8529_p3 = esl_concat<5,1>(co19_reg_3334.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_483_fu_20123_p2() {
    tmp_483_fu_20123_p2 = (!p_shl132_cast_fu_20107_p1.read().is_01() || !p_shl133_cast_fu_20119_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl132_cast_fu_20107_p1.read()) - sc_biguint<7>(p_shl133_cast_fu_20119_p1.read()));
}

void ShuffleNetV2::thread_tmp_484_cast1_fu_19962_p1() {
    tmp_484_cast1_fu_19962_p1 = esl_zext<10,4>(h_79_fu_19956_p2.read());
}

void ShuffleNetV2::thread_tmp_484_cast_fu_19966_p1() {
    tmp_484_cast_fu_19966_p1 = esl_zext<11,4>(h_79_fu_19956_p2.read());
}

void ShuffleNetV2::thread_tmp_484_fu_8541_p2() {
    tmp_484_fu_8541_p2 = (!p_shl296_cast_fu_8537_p1.read().is_01() || !p_shl295_cast_fu_8525_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl296_cast_fu_8537_p1.read()) + sc_biguint<10>(p_shl295_cast_fu_8525_p1.read()));
}

void ShuffleNetV2::thread_tmp_485_fu_8690_p3() {
    tmp_485_fu_8690_p3 = esl_concat<7,5>(tmp_134_fu_8684_p2.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_486_cast_fu_19854_p1() {
    tmp_486_cast_fu_19854_p1 = esl_zext<15,4>(w_76_fu_19848_p2.read());
}

void ShuffleNetV2::thread_tmp_486_fu_8702_p3() {
    tmp_486_fu_8702_p3 = esl_concat<7,3>(tmp_134_fu_8684_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_487_cast1_fu_20159_p1() {
    tmp_487_cast1_fu_20159_p1 = esl_zext<18,5>(ci52_reg_5422.read());
}

void ShuffleNetV2::thread_tmp_487_cast_fu_15899_p1() {
    tmp_487_cast_fu_15899_p1 = esl_zext<7,4>(p_lshr_f7_cast_fu_15889_p4.read());
}

void ShuffleNetV2::thread_tmp_487_fu_8714_p2() {
    tmp_487_fu_8714_p2 = (!p_shl305_cast_fu_8698_p1.read().is_01() || !p_shl306_cast_fu_8710_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl305_cast_fu_8698_p1.read()) - sc_biguint<13>(p_shl306_cast_fu_8710_p1.read()));
}

void ShuffleNetV2::thread_tmp_488_fu_20163_p2() {
    tmp_488_fu_20163_p2 = (!tmp_483_reg_34326.read().is_01() || !ci52_cast_fu_20143_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_483_reg_34326.read()) + sc_biguint<7>(ci52_cast_fu_20143_p1.read()));
}

void ShuffleNetV2::thread_tmp_489_cast_fu_20168_p1() {
    tmp_489_cast_fu_20168_p1 = esl_sext<13,7>(tmp_488_fu_20163_p2.read());
}

void ShuffleNetV2::thread_tmp_489_fu_8724_p3() {
    tmp_489_fu_8724_p3 = esl_concat<5,5>(co22_reg_3367.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_490_cast1_fu_20052_p1() {
    tmp_490_cast1_fu_20052_p1 = esl_zext<14,4>(w_78_fu_20046_p2.read());
}

void ShuffleNetV2::thread_tmp_490_cast_fu_20056_p1() {
    tmp_490_cast_fu_20056_p1 = esl_zext<15,4>(w_78_fu_20046_p2.read());
}

void ShuffleNetV2::thread_tmp_490_fu_8736_p3() {
    tmp_490_fu_8736_p3 = esl_concat<5,3>(co22_reg_3367.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_491_cast_cast_fu_16179_p1() {
    tmp_491_cast_cast_fu_16179_p1 = esl_sext<9,7>(tmp_356_fu_16173_p2.read());
}

void ShuffleNetV2::thread_tmp_491_fu_20405_p2() {
    tmp_491_fu_20405_p2 = (!p_shl134_cast_fu_20389_p1.read().is_01() || !p_shl135_cast_fu_20401_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl134_cast_fu_20389_p1.read()) - sc_biguint<7>(p_shl135_cast_fu_20401_p1.read()));
}

void ShuffleNetV2::thread_tmp_492_fu_20421_p2() {
    tmp_492_fu_20421_p2 = (!i105_cast1_reg_34383.read().is_01() || !tmp42_fu_20415_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(i105_cast1_reg_34383.read()) + sc_biguint<11>(tmp42_fu_20415_p2.read()));
}

void ShuffleNetV2::thread_tmp_493_cast_fu_16199_p1() {
    tmp_493_cast_fu_16199_p1 = esl_sext<10,9>(tmp_357_reg_33054.read());
}

void ShuffleNetV2::thread_tmp_493_fu_20431_p1() {
    tmp_493_fu_20431_p1 = esl_zext<64,11>(tmp_492_reg_34404.read());
}

void ShuffleNetV2::thread_tmp_494_fu_20426_p2() {
    tmp_494_fu_20426_p2 = (!tmp_491_fu_20405_p2.read().is_01() || !i105_cast_reg_34378.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_491_fu_20405_p2.read()) + sc_biguint<7>(i105_cast_reg_34378.read()));
}

void ShuffleNetV2::thread_tmp_495_cast_fu_16207_p1() {
    tmp_495_cast_fu_16207_p1 = esl_sext<32,7>(tmp_359_reg_33059.read());
}

void ShuffleNetV2::thread_tmp_495_fu_20438_p1() {
    tmp_495_fu_20438_p1 = esl_zext<64,32>(tmp_675_cast_fu_20435_p1.read());
}

void ShuffleNetV2::thread_tmp_496_fu_20212_p2() {
    tmp_496_fu_20212_p2 = (!p_shl136_cast_fu_20196_p1.read().is_01() || !p_shl137_cast_fu_20208_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl136_cast_fu_20196_p1.read()) - sc_biguint<8>(p_shl137_cast_fu_20208_p1.read()));
}

void ShuffleNetV2::thread_tmp_497_fu_20228_p2() {
    tmp_497_fu_20228_p2 = (!tmp41_fu_20222_p2.read().is_01() || !co116_cast_reg_34313.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp41_fu_20222_p2.read()) + sc_biguint<11>(co116_cast_reg_34313.read()));
}

void ShuffleNetV2::thread_tmp_498_fu_20257_p2() {
    tmp_498_fu_20257_p2 = (!p_shl138_cast_fu_20241_p1.read().is_01() || !p_shl139_cast_fu_20253_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl138_cast_fu_20241_p1.read()) - sc_biguint<7>(p_shl139_cast_fu_20253_p1.read()));
}

void ShuffleNetV2::thread_tmp_499_fu_20263_p2() {
    tmp_499_fu_20263_p2 = (!tmp_498_fu_20257_p2.read().is_01() || !tmp_667_cast_reg_34331.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_498_fu_20257_p2.read()) + sc_biguint<7>(tmp_667_cast_reg_34331.read()));
}

void ShuffleNetV2::thread_tmp_500_cast1_fu_20475_p1() {
    tmp_500_cast1_fu_20475_p1 = esl_zext<36,2>(w79_reg_5477.read());
}

void ShuffleNetV2::thread_tmp_500_cast_fu_20479_p1() {
    tmp_500_cast_fu_20479_p1 = esl_zext<13,2>(w79_reg_5477.read());
}

void ShuffleNetV2::thread_tmp_500_fu_8748_p2() {
    tmp_500_fu_8748_p2 = (!p_shl303_cast_fu_8732_p1.read().is_01() || !p_shl304_cast_fu_8744_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl303_cast_fu_8732_p1.read()) - sc_biguint<11>(p_shl304_cast_fu_8744_p1.read()));
}

void ShuffleNetV2::thread_tmp_501_fu_20841_p2() {
    tmp_501_fu_20841_p2 = (!p_shl142_cast_fu_20825_p1.read().is_01() || !p_shl143_cast_fu_20837_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl142_cast_fu_20825_p1.read()) - sc_biguint<7>(p_shl143_cast_fu_20837_p1.read()));
}

void ShuffleNetV2::thread_tmp_502_cast_cast_fu_15978_p1() {
    tmp_502_cast_cast_fu_15978_p1 = esl_sext<9,8>(tmp_361_fu_15972_p2.read());
}

void ShuffleNetV2::thread_tmp_502_fu_8567_p2() {
    tmp_502_fu_8567_p2 = (!tmp_135_cast_fu_8563_p1.read().is_01() || !tmp_484_reg_30635.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_135_cast_fu_8563_p1.read()) + sc_biguint<10>(tmp_484_reg_30635.read()));
}

void ShuffleNetV2::thread_tmp_503_fu_20759_p2() {
    tmp_503_fu_20759_p2 = (!p_shl140_cast_fu_20743_p1.read().is_01() || !p_shl141_cast_fu_20755_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl140_cast_fu_20743_p1.read()) - sc_biguint<7>(p_shl141_cast_fu_20755_p1.read()));
}

void ShuffleNetV2::thread_tmp_504_fu_20775_p2() {
    tmp_504_fu_20775_p2 = (!i109_cast1_reg_34523.read().is_01() || !tmp44_fu_20769_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(i109_cast1_reg_34523.read()) + sc_biguint<11>(tmp44_fu_20769_p2.read()));
}

void ShuffleNetV2::thread_tmp_505_fu_20785_p1() {
    tmp_505_fu_20785_p1 = esl_zext<64,11>(tmp_504_reg_34544.read());
}

void ShuffleNetV2::thread_tmp_506_fu_20780_p2() {
    tmp_506_fu_20780_p2 = (!tmp_503_fu_20759_p2.read().is_01() || !i109_cast_reg_34518.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_503_fu_20759_p2.read()) + sc_biguint<7>(i109_cast_reg_34518.read()));
}

void ShuffleNetV2::thread_tmp_507_fu_20792_p1() {
    tmp_507_fu_20792_p1 = esl_zext<64,32>(tmp_693_cast_fu_20789_p1.read());
}

void ShuffleNetV2::thread_tmp_508_cast1_fu_20495_p1() {
    tmp_508_cast1_fu_20495_p1 = esl_zext<10,2>(h80_reg_5488.read());
}

void ShuffleNetV2::thread_tmp_508_cast_fu_20499_p1() {
    tmp_508_cast_fu_20499_p1 = esl_zext<15,2>(h80_reg_5488.read());
}

void ShuffleNetV2::thread_tmp_508_fu_8592_p2() {
    tmp_508_fu_8592_p2 = (!p_shl301_cast_fu_8572_p3.read().is_01() || !p_shl302_cast_fu_8588_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl301_cast_fu_8572_p3.read()) + sc_biguint<14>(p_shl302_cast_fu_8588_p1.read()));
}

void ShuffleNetV2::thread_tmp_509_cast_cast_fu_16529_p1() {
    tmp_509_cast_cast_fu_16529_p1 = esl_sext<8,7>(tmp_367_fu_16523_p2.read());
}

void ShuffleNetV2::thread_tmp_509_cast_fu_20877_p1() {
    tmp_509_cast_fu_20877_p1 = esl_zext<18,5>(ci54_reg_5543.read());
}

void ShuffleNetV2::thread_tmp_509_fu_8598_p2() {
    tmp_509_fu_8598_p2 = (!tmp_135_cast1_fu_8559_p1.read().is_01() || !tmp_470_reg_30630.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_135_cast1_fu_8559_p1.read()) + sc_biguint<11>(tmp_470_reg_30630.read()));
}

void ShuffleNetV2::thread_tmp_510_cast_fu_7747_p1() {
    tmp_510_cast_fu_7747_p1 = esl_sext<12,11>(tmp_337_fu_7741_p2.read());
}

void ShuffleNetV2::thread_tmp_510_fu_8623_p2() {
    tmp_510_fu_8623_p2 = (!p_shl299_cast_fu_8603_p3.read().is_01() || !p_shl300_cast_fu_8619_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl299_cast_fu_8603_p3.read()) + sc_biguint<15>(p_shl300_cast_fu_8619_p1.read()));
}

void ShuffleNetV2::thread_tmp_511_cast_fu_16549_p1() {
    tmp_511_cast_fu_16549_p1 = esl_sext<10,8>(tmp_368_reg_33194.read());
}

void ShuffleNetV2::thread_tmp_511_fu_20881_p2() {
    tmp_511_fu_20881_p2 = (!tmp_501_reg_34572.read().is_01() || !ci54_cast_fu_20861_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_501_reg_34572.read()) + sc_biguint<7>(ci54_cast_fu_20861_p1.read()));
}

void ShuffleNetV2::thread_tmp_512_cast_fu_20886_p1() {
    tmp_512_cast_fu_20886_p1 = esl_sext<13,7>(tmp_511_fu_20881_p2.read());
}

void ShuffleNetV2::thread_tmp_512_fu_8774_p2() {
    tmp_512_fu_8774_p2 = (!tmp_904_cast_reg_30684.read().is_01() || !tmp_139_cast_fu_8770_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(tmp_904_cast_reg_30684.read()) + sc_biguint<14>(tmp_139_cast_fu_8770_p1.read()));
}

void ShuffleNetV2::thread_tmp_513_cast_fu_16557_p1() {
    tmp_513_cast_fu_16557_p1 = esl_sext<32,7>(tmp_370_reg_33199.read());
}

void ShuffleNetV2::thread_tmp_513_fu_8784_p2() {
    tmp_513_fu_8784_p2 = (!tmp_500_reg_30689.read().is_01() || !tmp_139_cast1_fu_8766_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_500_reg_30689.read()) + sc_biguint<11>(tmp_139_cast1_fu_8766_p1.read()));
}

void ShuffleNetV2::thread_tmp_514_fu_20543_p2() {
    tmp_514_fu_20543_p2 = (!p_shl146_cast_fu_20527_p1.read().is_01() || !p_shl147_cast_fu_20539_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl146_cast_fu_20527_p1.read()) - sc_biguint<7>(p_shl147_cast_fu_20539_p1.read()));
}

void ShuffleNetV2::thread_tmp_515_fu_8649_p2() {
    tmp_515_fu_8649_p2 = (!tmp_508_reg_30648.read().is_01() || !tmp_140_cast_fu_8645_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_508_reg_30648.read()) + sc_biguint<14>(tmp_140_cast_fu_8645_p1.read()));
}

void ShuffleNetV2::thread_tmp_516_cast_fu_7623_p3() {
    tmp_516_cast_fu_7623_p3 = esl_concat<8,5>(tmp_348_fu_7618_p2.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_516_fu_8654_p2() {
    tmp_516_fu_8654_p2 = (!tmp_510_reg_30653.read().is_01() || !tmp_140_cast1_fu_8641_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_510_reg_30653.read()) + sc_biguint<15>(tmp_140_cast1_fu_8641_p1.read()));
}

void ShuffleNetV2::thread_tmp_517_cast_fu_16625_p1() {
    tmp_517_cast_fu_16625_p1 = esl_zext<7,4>(p_lshr_f8_cast_fu_16615_p4.read());
}

void ShuffleNetV2::thread_tmp_517_fu_20559_p2() {
    tmp_517_fu_20559_p2 = (!co119_cast363_cast_reg_34424.read().is_01() || !tmp43_fu_20553_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(co119_cast363_cast_reg_34424.read()) + sc_biguint<8>(tmp43_fu_20553_p2.read()));
}

void ShuffleNetV2::thread_tmp_518_cast_fu_20572_p1() {
    tmp_518_cast_fu_20572_p1 = esl_zext<12,9>(tmp_710_cast_fu_20569_p1.read());
}

void ShuffleNetV2::thread_tmp_518_fu_8851_p3() {
    tmp_518_fu_8851_p3 = esl_concat<7,2>(tmp_141_fu_8841_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_519_fu_20564_p2() {
    tmp_519_fu_20564_p2 = (!tmp_514_fu_20543_p2.read().is_01() || !co119_cast_reg_34419.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_514_fu_20543_p2.read()) + sc_biguint<7>(co119_cast_reg_34419.read()));
}

void ShuffleNetV2::thread_tmp_520_cast_fu_20632_p1() {
    tmp_520_cast_fu_20632_p1 = esl_zext<35,32>(tmp_712_cast_fu_20629_p1.read());
}

void ShuffleNetV2::thread_tmp_520_fu_8863_p2() {
    tmp_520_fu_8863_p2 = (!p_shl308_cast_fu_8859_p1.read().is_01() || !tmp_142_cast_fu_8847_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl308_cast_fu_8859_p1.read()) - sc_biguint<10>(tmp_142_cast_fu_8847_p1.read()));
}

void ShuffleNetV2::thread_tmp_521_fu_21123_p2() {
    tmp_521_fu_21123_p2 = (!p_shl144_cast_fu_21107_p1.read().is_01() || !p_shl145_cast_fu_21119_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl144_cast_fu_21107_p1.read()) - sc_biguint<7>(p_shl145_cast_fu_21119_p1.read()));
}

void ShuffleNetV2::thread_tmp_522_fu_21139_p2() {
    tmp_522_fu_21139_p2 = (!i111_cast1_reg_34629.read().is_01() || !tmp46_fu_21133_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(i111_cast1_reg_34629.read()) + sc_biguint<11>(tmp46_fu_21133_p2.read()));
}

void ShuffleNetV2::thread_tmp_523_cast_fu_16925_p1() {
    tmp_523_cast_fu_16925_p1 = esl_sext<32,7>(tmp_384_reg_33305.read());
}

void ShuffleNetV2::thread_tmp_523_fu_21149_p1() {
    tmp_523_fu_21149_p1 = esl_zext<64,11>(tmp_522_reg_34650.read());
}

void ShuffleNetV2::thread_tmp_524_fu_21144_p2() {
    tmp_524_fu_21144_p2 = (!tmp_521_fu_21123_p2.read().is_01() || !i111_cast_reg_34624.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_521_fu_21123_p2.read()) + sc_biguint<7>(i111_cast_reg_34624.read()));
}

void ShuffleNetV2::thread_tmp_525_fu_21156_p1() {
    tmp_525_fu_21156_p1 = esl_zext<64,32>(tmp_703_cast_fu_21153_p1.read());
}

void ShuffleNetV2::thread_tmp_526_fu_20930_p2() {
    tmp_526_fu_20930_p2 = (!p_shl148_cast_fu_20914_p1.read().is_01() || !p_shl149_cast_fu_20926_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl148_cast_fu_20914_p1.read()) - sc_biguint<8>(p_shl149_cast_fu_20926_p1.read()));
}

void ShuffleNetV2::thread_tmp_527_fu_20946_p2() {
    tmp_527_fu_20946_p2 = (!tmp45_fu_20940_p2.read().is_01() || !co121_cast_reg_34559.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp45_fu_20940_p2.read()) + sc_biguint<11>(co121_cast_reg_34559.read()));
}

void ShuffleNetV2::thread_tmp_528_cast_fu_16321_p1() {
    tmp_528_cast_fu_16321_p1 = esl_sext<9,7>(tmp_376_fu_16315_p2.read());
}

void ShuffleNetV2::thread_tmp_528_fu_20975_p2() {
    tmp_528_fu_20975_p2 = (!p_shl150_cast_fu_20959_p1.read().is_01() || !p_shl151_cast_fu_20971_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl150_cast_fu_20959_p1.read()) - sc_biguint<7>(p_shl151_cast_fu_20971_p1.read()));
}

void ShuffleNetV2::thread_tmp_529_fu_20981_p2() {
    tmp_529_fu_20981_p2 = (!tmp_528_fu_20975_p2.read().is_01() || !tmp_697_cast_reg_34577.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_528_fu_20975_p2.read()) + sc_biguint<7>(tmp_697_cast_reg_34577.read()));
}

void ShuffleNetV2::thread_tmp_530_fu_21296_p2() {
    tmp_530_fu_21296_p2 = (!co124_cast_fu_21280_p1.read().is_01() || !ap_const_lv7_30.is_01())? sc_lv<7>(): (sc_biguint<7>(co124_cast_fu_21280_p1.read()) + sc_biguint<7>(ap_const_lv7_30));
}

void ShuffleNetV2::thread_tmp_531_cast_fu_21215_p1() {
    tmp_531_cast_fu_21215_p1 = esl_zext<10,4>(h_83_fu_21209_p2.read());
}

void ShuffleNetV2::thread_tmp_531_fu_8873_p3() {
    tmp_531_fu_8873_p3 = esl_concat<5,2>(co25_reg_3401.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_532_cast_fu_16393_p1() {
    tmp_532_cast_fu_16393_p1 = esl_sext<32,7>(tmp_379_reg_33137.read());
}

void ShuffleNetV2::thread_tmp_532_fu_8885_p2() {
    tmp_532_fu_8885_p2 = (!p_shl307_cast_fu_8881_p1.read().is_01() || !tmp_143_cast_fu_8869_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl307_cast_fu_8881_p1.read()) - sc_biguint<8>(tmp_143_cast_fu_8869_p1.read()));
}

void ShuffleNetV2::thread_tmp_533_fu_21535_p2() {
    tmp_533_fu_21535_p2 = (!p_shl152_cast_fu_21519_p1.read().is_01() || !p_shl153_cast_fu_21531_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl152_cast_fu_21519_p1.read()) - sc_biguint<7>(p_shl153_cast_fu_21531_p1.read()));
}

void ShuffleNetV2::thread_tmp_534_cast1_fu_21374_p1() {
    tmp_534_cast1_fu_21374_p1 = esl_zext<11,4>(h_85_fu_21368_p2.read());
}

void ShuffleNetV2::thread_tmp_534_cast_fu_21378_p1() {
    tmp_534_cast_fu_21378_p1 = esl_zext<10,4>(h_85_fu_21368_p2.read());
}

void ShuffleNetV2::thread_tmp_534_fu_8915_p2() {
    tmp_534_fu_8915_p2 = (!tmp_520_reg_30733.read().is_01() || !tmp_147_cast2_fu_8911_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_520_reg_30733.read()) + sc_biguint<10>(tmp_147_cast2_fu_8911_p1.read()));
}

void ShuffleNetV2::thread_tmp_535_cast_fu_16704_p1() {
    tmp_535_cast_fu_16704_p1 = esl_sext<11,8>(tmp_386_fu_16698_p2.read());
}

void ShuffleNetV2::thread_tmp_535_fu_8936_p2() {
    tmp_535_fu_8936_p2 = (!p_shl310_cast_fu_8932_p1.read().is_01() || !tmp_955_cast_fu_8920_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_shl310_cast_fu_8932_p1.read()) - sc_bigint<15>(tmp_955_cast_fu_8920_p1.read()));
}

void ShuffleNetV2::thread_tmp_536_cast_fu_21266_p1() {
    tmp_536_cast_fu_21266_p1 = esl_zext<15,4>(w_82_fu_21260_p2.read());
}

void ShuffleNetV2::thread_tmp_536_fu_8942_p2() {
    tmp_536_fu_8942_p2 = (!tmp_954_cast1_reg_30738.read().is_01() || !tmp_147_cast1_fu_8907_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_954_cast1_reg_30738.read()) + sc_biguint<9>(tmp_147_cast1_fu_8907_p1.read()));
}

void ShuffleNetV2::thread_tmp_537_cast_fu_21571_p1() {
    tmp_537_cast_fu_21571_p1 = esl_zext<18,5>(ci56_reg_5664.read());
}

void ShuffleNetV2::thread_tmp_537_fu_8953_p2() {
    tmp_537_fu_8953_p2 = (!tmp_139_fu_8947_p2.read().is_01() || !tmp_536_fu_8942_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_139_fu_8947_p2.read()) - sc_biguint<9>(tmp_536_fu_8942_p2.read()));
}

void ShuffleNetV2::thread_tmp_538_fu_21575_p2() {
    tmp_538_fu_21575_p2 = (!tmp_533_reg_34776.read().is_01() || !ci56_cast_fu_21555_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_533_reg_34776.read()) + sc_biguint<7>(ci56_cast_fu_21555_p1.read()));
}

void ShuffleNetV2::thread_tmp_539_cast_fu_21580_p1() {
    tmp_539_cast_fu_21580_p1 = esl_sext<13,7>(tmp_538_fu_21575_p2.read());
}

void ShuffleNetV2::thread_tmp_539_fu_9042_p4() {
    tmp_539_fu_9042_p4 = esl_concat<6,5>(esl_concat<1,5>(ap_const_lv1_1, co29_reg_3446.read()), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_540_cast1_fu_21464_p1() {
    tmp_540_cast1_fu_21464_p1 = esl_zext<15,4>(w_84_fu_21458_p2.read());
}

void ShuffleNetV2::thread_tmp_540_cast_fu_21468_p1() {
    tmp_540_cast_fu_21468_p1 = esl_zext<14,4>(w_84_fu_21458_p2.read());
}

void ShuffleNetV2::thread_tmp_540_fu_9052_p1() {
    tmp_540_fu_9052_p1 = esl_sext<12,11>(tmp_539_fu_9042_p4.read());
}

void ShuffleNetV2::thread_tmp_541_fu_21825_p2() {
    tmp_541_fu_21825_p2 = (!p_shl154_cast_fu_21809_p1.read().is_01() || !p_shl155_cast_fu_21821_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl154_cast_fu_21809_p1.read()) - sc_biguint<7>(p_shl155_cast_fu_21821_p1.read()));
}

void ShuffleNetV2::thread_tmp_542_fu_21841_p2() {
    tmp_542_fu_21841_p2 = (!i117_cast1_reg_34833.read().is_01() || !tmp48_fu_21835_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(i117_cast1_reg_34833.read()) + sc_biguint<11>(tmp48_fu_21835_p2.read()));
}

void ShuffleNetV2::thread_tmp_543_fu_21851_p1() {
    tmp_543_fu_21851_p1 = esl_zext<64,11>(tmp_542_reg_34854.read());
}

void ShuffleNetV2::thread_tmp_544_fu_21846_p2() {
    tmp_544_fu_21846_p2 = (!tmp_541_fu_21825_p2.read().is_01() || !i117_cast_reg_34828.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_541_fu_21825_p2.read()) + sc_biguint<7>(i117_cast_reg_34828.read()));
}

void ShuffleNetV2::thread_tmp_545_fu_21858_p1() {
    tmp_545_fu_21858_p1 = esl_zext<64,32>(tmp_735_cast_fu_21855_p1.read());
}

void ShuffleNetV2::thread_tmp_546_fu_21624_p2() {
    tmp_546_fu_21624_p2 = (!p_shl156_cast_fu_21608_p1.read().is_01() || !p_shl157_cast_fu_21620_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl156_cast_fu_21608_p1.read()) - sc_biguint<8>(p_shl157_cast_fu_21620_p1.read()));
}

void ShuffleNetV2::thread_tmp_547_cast_fu_17323_p1() {
    tmp_547_cast_fu_17323_p1 = esl_zext<7,4>(p_lshr_f9_cast_fu_17313_p4.read());
}

void ShuffleNetV2::thread_tmp_547_fu_21640_p2() {
    tmp_547_fu_21640_p2 = (!tmp47_fu_21634_p2.read().is_01() || !co126_cast339_cast_reg_34763.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp47_fu_21634_p2.read()) + sc_biguint<10>(co126_cast339_cast_reg_34763.read()));
}

void ShuffleNetV2::thread_tmp_548_fu_21669_p2() {
    tmp_548_fu_21669_p2 = (!p_shl158_cast_fu_21653_p1.read().is_01() || !p_shl159_cast_fu_21665_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl158_cast_fu_21653_p1.read()) - sc_biguint<7>(p_shl159_cast_fu_21665_p1.read()));
}

void ShuffleNetV2::thread_tmp_549_fu_21675_p2() {
    tmp_549_fu_21675_p2 = (!tmp_548_fu_21669_p2.read().is_01() || !tmp_727_cast_reg_34781.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_548_fu_21669_p2.read()) + sc_biguint<7>(tmp_727_cast_reg_34781.read()));
}

void ShuffleNetV2::thread_tmp_550_cast1_fu_21895_p1() {
    tmp_550_cast1_fu_21895_p1 = esl_zext<36,2>(w85_reg_5719.read());
}

void ShuffleNetV2::thread_tmp_550_cast_fu_21899_p1() {
    tmp_550_cast_fu_21899_p1 = esl_zext<14,2>(w85_reg_5719.read());
}

void ShuffleNetV2::thread_tmp_550_fu_9060_p4() {
    tmp_550_fu_9060_p4 = esl_concat<6,3>(esl_concat<1,5>(ap_const_lv1_1, co29_reg_3446.read()), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_551_cast_fu_17595_p1() {
    tmp_551_cast_fu_17595_p1 = esl_sext<11,7>(tmp_399_fu_17589_p2.read());
}

void ShuffleNetV2::thread_tmp_551_fu_22257_p2() {
    tmp_551_fu_22257_p2 = (!p_shl162_cast_fu_22241_p1.read().is_01() || !p_shl163_cast_fu_22253_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl162_cast_fu_22241_p1.read()) - sc_biguint<7>(p_shl163_cast_fu_22253_p1.read()));
}

void ShuffleNetV2::thread_tmp_552_fu_9070_p1() {
    tmp_552_fu_9070_p1 = esl_sext<10,9>(tmp_550_fu_9060_p4.read());
}

void ShuffleNetV2::thread_tmp_553_fu_22175_p2() {
    tmp_553_fu_22175_p2 = (!p_shl160_cast_fu_22159_p1.read().is_01() || !p_shl161_cast_fu_22171_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl160_cast_fu_22159_p1.read()) - sc_biguint<7>(p_shl161_cast_fu_22171_p1.read()));
}

void ShuffleNetV2::thread_tmp_554_fu_22191_p2() {
    tmp_554_fu_22191_p2 = (!i121_cast1_reg_34973.read().is_01() || !tmp50_fu_22185_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(i121_cast1_reg_34973.read()) + sc_biguint<11>(tmp50_fu_22185_p2.read()));
}

void ShuffleNetV2::thread_tmp_555_cast_fu_17619_p1() {
    tmp_555_cast_fu_17619_p1 = esl_sext<32,7>(tmp_402_reg_33509.read());
}

void ShuffleNetV2::thread_tmp_555_fu_22201_p1() {
    tmp_555_fu_22201_p1 = esl_zext<64,11>(tmp_554_reg_34994.read());
}

void ShuffleNetV2::thread_tmp_556_fu_22196_p2() {
    tmp_556_fu_22196_p2 = (!tmp_553_fu_22175_p2.read().is_01() || !i121_cast_reg_34968.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_553_fu_22175_p2.read()) + sc_biguint<7>(i121_cast_reg_34968.read()));
}

void ShuffleNetV2::thread_tmp_557_fu_22208_p1() {
    tmp_557_fu_22208_p1 = esl_zext<64,32>(tmp_753_cast_fu_22205_p1.read());
}

void ShuffleNetV2::thread_tmp_558_cast1_fu_21919_p1() {
    tmp_558_cast1_fu_21919_p1 = esl_zext<15,2>(h86_reg_5730.read());
}

void ShuffleNetV2::thread_tmp_558_cast_fu_21915_p1() {
    tmp_558_cast_fu_21915_p1 = esl_zext<10,2>(h86_reg_5730.read());
}

void ShuffleNetV2::thread_tmp_558_fu_9078_p2() {
    tmp_558_fu_9078_p2 = (!p_shl313_cast_fu_9056_p1.read().is_01() || !p_shl314_cast_fu_9074_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl313_cast_fu_9056_p1.read()) - sc_biguint<13>(p_shl314_cast_fu_9074_p1.read()));
}

void ShuffleNetV2::thread_tmp_559_cast_fu_22293_p1() {
    tmp_559_cast_fu_22293_p1 = esl_zext<18,5>(ci58_reg_5785.read());
}

void ShuffleNetV2::thread_tmp_559_fu_9088_p3() {
    tmp_559_fu_9088_p3 = esl_concat<5,5>(co29_reg_3446.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_560_fu_9100_p3() {
    tmp_560_fu_9100_p3 = esl_concat<5,3>(co29_reg_3446.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_561_fu_22297_p2() {
    tmp_561_fu_22297_p2 = (!tmp_551_reg_35022.read().is_01() || !ci58_cast_fu_22277_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_551_reg_35022.read()) + sc_biguint<7>(ci58_cast_fu_22277_p1.read()));
}

void ShuffleNetV2::thread_tmp_562_cast1_fu_22302_p1() {
    tmp_562_cast1_fu_22302_p1 = esl_sext<13,7>(tmp_561_fu_22297_p2.read());
}

void ShuffleNetV2::thread_tmp_562_cast_fu_17402_p1() {
    tmp_562_cast_fu_17402_p1 = esl_sext<11,8>(tmp_404_fu_17396_p2.read());
}

void ShuffleNetV2::thread_tmp_562_fu_9112_p2() {
    tmp_562_fu_9112_p2 = (!p_shl311_cast_fu_9096_p1.read().is_01() || !p_shl312_cast_fu_9108_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl311_cast_fu_9096_p1.read()) - sc_biguint<11>(p_shl312_cast_fu_9108_p1.read()));
}

void ShuffleNetV2::thread_tmp_563_cast_fu_7772_p1() {
    tmp_563_cast_fu_7772_p1 = esl_sext<64,12>(tmp_352_fu_7767_p2.read());
}

void ShuffleNetV2::thread_tmp_563_fu_8979_p2() {
    tmp_563_fu_8979_p2 = (!tmp_535_reg_30751.read().is_01() || !tmp_148_cast_fu_8975_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_535_reg_30751.read()) + sc_biguint<15>(tmp_148_cast_fu_8975_p1.read()));
}

void ShuffleNetV2::thread_tmp_564_fu_21963_p2() {
    tmp_564_fu_21963_p2 = (!p_shl166_cast_fu_21947_p1.read().is_01() || !p_shl167_cast_fu_21959_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl166_cast_fu_21947_p1.read()) - sc_biguint<7>(p_shl167_cast_fu_21959_p1.read()));
}

void ShuffleNetV2::thread_tmp_565_cast_fu_7687_p1() {
    tmp_565_cast_fu_7687_p1 = esl_zext<64,13>(tmp_354_fu_7682_p2.read());
}

void ShuffleNetV2::thread_tmp_565_fu_8989_p2() {
    tmp_565_fu_8989_p2 = (!tmp_537_reg_30756.read().is_01() || !tmp_148_cast1_fu_8971_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_537_reg_30756.read()) + sc_biguint<9>(tmp_148_cast1_fu_8971_p1.read()));
}

void ShuffleNetV2::thread_tmp_566_cast_fu_7701_p1() {
    tmp_566_cast_fu_7701_p1 = esl_zext<64,13>(tmp_355_reg_30351.read());
}

void ShuffleNetV2::thread_tmp_566_fu_9138_p2() {
    tmp_566_fu_9138_p2 = (!tmp_965_cast_reg_30800.read().is_01() || !tmp_152_cast_fu_9134_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(tmp_965_cast_reg_30800.read()) + sc_biguint<14>(tmp_152_cast_fu_9134_p1.read()));
}

void ShuffleNetV2::thread_tmp_567_fu_21979_p2() {
    tmp_567_fu_21979_p2 = (!co129_cast1_reg_34874.read().is_01() || !tmp49_fu_21973_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(co129_cast1_reg_34874.read()) + sc_biguint<10>(tmp49_fu_21973_p2.read()));
}

void ShuffleNetV2::thread_tmp_568_cast_fu_21989_p1() {
    tmp_568_cast_fu_21989_p1 = esl_zext<13,10>(tmp_567_reg_34931.read());
}

void ShuffleNetV2::thread_tmp_568_fu_9148_p2() {
    tmp_568_fu_9148_p2 = (!tmp_562_reg_30805.read().is_01() || !tmp_152_cast1_fu_9130_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_562_reg_30805.read()) + sc_biguint<11>(tmp_152_cast1_fu_9130_p1.read()));
}

void ShuffleNetV2::thread_tmp_569_cast_fu_17941_p1() {
    tmp_569_cast_fu_17941_p1 = esl_sext<11,7>(tmp_410_fu_17935_p2.read());
}

void ShuffleNetV2::thread_tmp_569_fu_21984_p2() {
    tmp_569_fu_21984_p2 = (!tmp_564_fu_21963_p2.read().is_01() || !co129_cast_reg_34869.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_564_fu_21963_p2.read()) + sc_biguint<7>(co129_cast_reg_34869.read()));
}

void ShuffleNetV2::thread_tmp_570_cast_fu_22048_p1() {
    tmp_570_cast_fu_22048_p1 = esl_zext<35,32>(tmp_772_cast_fu_22045_p1.read());
}

void ShuffleNetV2::thread_tmp_570_fu_9203_p3() {
    tmp_570_fu_9203_p3 = esl_concat<5,4>(co32_reg_3480.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_571_fu_22547_p2() {
    tmp_571_fu_22547_p2 = (!p_shl164_cast_fu_22531_p1.read().is_01() || !p_shl165_cast_fu_22543_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl164_cast_fu_22531_p1.read()) - sc_biguint<7>(p_shl165_cast_fu_22543_p1.read()));
}

void ShuffleNetV2::thread_tmp_572_fu_22563_p2() {
    tmp_572_fu_22563_p2 = (!i123_cast306_cast_reg_35079.read().is_01() || !tmp52_fu_22557_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(i123_cast306_cast_reg_35079.read()) + sc_biguint<10>(tmp52_fu_22557_p2.read()));
}

void ShuffleNetV2::thread_tmp_573_cast_fu_17965_p1() {
    tmp_573_cast_fu_17965_p1 = esl_sext<32,7>(tmp_413_reg_33649.read());
}

void ShuffleNetV2::thread_tmp_573_fu_22576_p1() {
    tmp_573_fu_22576_p1 = esl_zext<64,11>(tmp_761_cast_fu_22573_p1.read());
}

void ShuffleNetV2::thread_tmp_574_fu_22568_p2() {
    tmp_574_fu_22568_p2 = (!tmp_571_fu_22547_p2.read().is_01() || !i123_cast_reg_35074.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_571_fu_22547_p2.read()) + sc_biguint<7>(i123_cast_reg_35074.read()));
}

void ShuffleNetV2::thread_tmp_575_fu_22584_p1() {
    tmp_575_fu_22584_p1 = esl_zext<64,32>(tmp_763_cast_fu_22581_p1.read());
}

void ShuffleNetV2::thread_tmp_576_fu_22346_p2() {
    tmp_576_fu_22346_p2 = (!p_shl168_cast_fu_22330_p1.read().is_01() || !p_shl169_cast_fu_22342_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl168_cast_fu_22330_p1.read()) - sc_biguint<8>(p_shl169_cast_fu_22342_p1.read()));
}

void ShuffleNetV2::thread_tmp_577_cast_fu_18033_p1() {
    tmp_577_cast_fu_18033_p1 = esl_zext<7,4>(p_lshr_f10_cast_fu_18023_p4.read());
}

void ShuffleNetV2::thread_tmp_577_fu_22362_p2() {
    tmp_577_fu_22362_p2 = (!tmp51_fu_22356_p2.read().is_01() || !co131_cast316_cast_reg_35009.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp51_fu_22356_p2.read()) + sc_biguint<10>(co131_cast316_cast_reg_35009.read()));
}

void ShuffleNetV2::thread_tmp_578_fu_22391_p2() {
    tmp_578_fu_22391_p2 = (!p_shl170_cast_fu_22375_p1.read().is_01() || !p_shl171_cast_fu_22387_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl170_cast_fu_22375_p1.read()) - sc_biguint<7>(p_shl171_cast_fu_22387_p1.read()));
}

void ShuffleNetV2::thread_tmp_579_cast_fu_18305_p1() {
    tmp_579_cast_fu_18305_p1 = esl_sext<11,7>(tmp_424_fu_18299_p2.read());
}

void ShuffleNetV2::thread_tmp_579_fu_22397_p2() {
    tmp_579_fu_22397_p2 = (!tmp_578_fu_22391_p2.read().is_01() || !tmp_757_cast_reg_35027.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_578_fu_22391_p2.read()) + sc_biguint<7>(tmp_757_cast_reg_35027.read()));
}

void ShuffleNetV2::thread_tmp_580_fu_22724_p2() {
    tmp_580_fu_22724_p2 = (!co134_cast_fu_22708_p1.read().is_01() || !ap_const_lv7_30.is_01())? sc_lv<7>(): (sc_biguint<7>(co134_cast_fu_22708_p1.read()) + sc_biguint<7>(ap_const_lv7_30));
}

void ShuffleNetV2::thread_tmp_581_cast_fu_22643_p1() {
    tmp_581_cast_fu_22643_p1 = esl_zext<10,4>(h_89_fu_22637_p2.read());
}

void ShuffleNetV2::thread_tmp_581_fu_9215_p3() {
    tmp_581_fu_9215_p3 = esl_concat<5,1>(co32_reg_3480.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_582_fu_9227_p2() {
    tmp_582_fu_9227_p2 = (!p_shl316_cast_fu_9223_p1.read().is_01() || !p_shl315_cast_fu_9211_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl316_cast_fu_9223_p1.read()) + sc_biguint<10>(p_shl315_cast_fu_9211_p1.read()));
}

void ShuffleNetV2::thread_tmp_583_cast_fu_18329_p1() {
    tmp_583_cast_fu_18329_p1 = esl_sext<32,7>(tmp_427_reg_33755.read());
}

void ShuffleNetV2::thread_tmp_583_fu_22963_p2() {
    tmp_583_fu_22963_p2 = (!p_shl172_cast_fu_22947_p1.read().is_01() || !p_shl173_cast_fu_22959_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl172_cast_fu_22947_p1.read()) - sc_biguint<7>(p_shl173_cast_fu_22959_p1.read()));
}

void ShuffleNetV2::thread_tmp_584_cast1_fu_22802_p1() {
    tmp_584_cast1_fu_22802_p1 = esl_zext<10,4>(h_91_fu_22796_p2.read());
}

void ShuffleNetV2::thread_tmp_584_cast_fu_22806_p1() {
    tmp_584_cast_fu_22806_p1 = esl_zext<11,4>(h_91_fu_22796_p2.read());
}

void ShuffleNetV2::thread_tmp_584_fu_9332_p3() {
    tmp_584_fu_9332_p3 = esl_concat<6,4>(tmp_153_fu_9326_p2.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_585_cast_fu_7843_p1() {
    tmp_585_cast_fu_7843_p1 = esl_sext<9,8>(tmp_372_fu_7837_p2.read());
}

void ShuffleNetV2::thread_tmp_585_fu_9344_p3() {
    tmp_585_fu_9344_p3 = esl_concat<6,1>(tmp_153_fu_9326_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_586_cast_fu_22694_p1() {
    tmp_586_cast_fu_22694_p1 = esl_zext<15,4>(w_88_fu_22688_p2.read());
}

void ShuffleNetV2::thread_tmp_586_fu_9356_p2() {
    tmp_586_fu_9356_p2 = (!p_shl322_cast_fu_9352_p1.read().is_01() || !p_shl321_cast_fu_9340_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl322_cast_fu_9352_p1.read()) + sc_biguint<11>(p_shl321_cast_fu_9340_p1.read()));
}

void ShuffleNetV2::thread_tmp_587_cast_fu_22999_p1() {
    tmp_587_cast_fu_22999_p1 = esl_zext<18,5>(ci60_reg_5906.read());
}

void ShuffleNetV2::thread_tmp_587_fu_9362_p3() {
    tmp_587_fu_9362_p3 = esl_concat<5,4>(co34_reg_3513.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_588_cast_fu_17733_p1() {
    tmp_588_cast_fu_17733_p1 = esl_sext<9,7>(tmp_419_fu_17727_p2.read());
}

void ShuffleNetV2::thread_tmp_588_fu_23003_p2() {
    tmp_588_fu_23003_p2 = (!tmp_583_reg_35226.read().is_01() || !ci60_cast_fu_22983_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_583_reg_35226.read()) + sc_biguint<7>(ci60_cast_fu_22983_p1.read()));
}

void ShuffleNetV2::thread_tmp_589_cast_fu_23008_p1() {
    tmp_589_cast_fu_23008_p1 = esl_sext<13,7>(tmp_588_fu_23003_p2.read());
}

void ShuffleNetV2::thread_tmp_589_fu_9374_p3() {
    tmp_589_fu_9374_p3 = esl_concat<5,1>(co34_reg_3513.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_590_cast1_fu_22892_p1() {
    tmp_590_cast1_fu_22892_p1 = esl_zext<14,4>(w_90_fu_22886_p2.read());
}

void ShuffleNetV2::thread_tmp_590_cast_fu_22896_p1() {
    tmp_590_cast_fu_22896_p1 = esl_zext<15,4>(w_90_fu_22886_p2.read());
}

void ShuffleNetV2::thread_tmp_590_fu_9386_p2() {
    tmp_590_fu_9386_p2 = (!p_shl320_cast_fu_9382_p1.read().is_01() || !p_shl319_cast_fu_9370_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl320_cast_fu_9382_p1.read()) + sc_biguint<10>(p_shl319_cast_fu_9370_p1.read()));
}

void ShuffleNetV2::thread_tmp_591_fu_23253_p2() {
    tmp_591_fu_23253_p2 = (!p_shl174_cast_fu_23237_p1.read().is_01() || !p_shl175_cast_fu_23249_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl174_cast_fu_23237_p1.read()) - sc_biguint<7>(p_shl175_cast_fu_23249_p1.read()));
}

void ShuffleNetV2::thread_tmp_592_cast_fu_17805_p1() {
    tmp_592_cast_fu_17805_p1 = esl_sext<32,7>(tmp_422_reg_33587.read());
}

void ShuffleNetV2::thread_tmp_592_fu_23269_p2() {
    tmp_592_fu_23269_p2 = (!i129_cast291_cast_reg_35283.read().is_01() || !tmp54_fu_23263_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(i129_cast291_cast_reg_35283.read()) + sc_biguint<10>(tmp54_fu_23263_p2.read()));
}

void ShuffleNetV2::thread_tmp_593_fu_23282_p1() {
    tmp_593_fu_23282_p1 = esl_zext<64,11>(tmp_793_cast_fu_23279_p1.read());
}

void ShuffleNetV2::thread_tmp_594_fu_23274_p2() {
    tmp_594_fu_23274_p2 = (!tmp_591_fu_23253_p2.read().is_01() || !i129_cast_reg_35278.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_591_fu_23253_p2.read()) + sc_biguint<7>(i129_cast_reg_35278.read()));
}

void ShuffleNetV2::thread_tmp_595_cast_fu_18112_p1() {
    tmp_595_cast_fu_18112_p1 = esl_sext<11,8>(tmp_429_fu_18106_p2.read());
}

void ShuffleNetV2::thread_tmp_595_fu_23290_p1() {
    tmp_595_fu_23290_p1 = esl_zext<64,32>(tmp_795_cast_fu_23287_p1.read());
}

void ShuffleNetV2::thread_tmp_596_fu_23052_p2() {
    tmp_596_fu_23052_p2 = (!p_shl176_cast_fu_23036_p1.read().is_01() || !p_shl177_cast_fu_23048_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl176_cast_fu_23036_p1.read()) - sc_biguint<8>(p_shl177_cast_fu_23048_p1.read()));
}

void ShuffleNetV2::thread_tmp_597_fu_23068_p2() {
    tmp_597_fu_23068_p2 = (!tmp53_fu_23062_p2.read().is_01() || !co136_cast301_cast_reg_35213.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp53_fu_23062_p2.read()) + sc_biguint<9>(co136_cast301_cast_reg_35213.read()));
}

void ShuffleNetV2::thread_tmp_598_fu_23097_p2() {
    tmp_598_fu_23097_p2 = (!p_shl178_cast_fu_23081_p1.read().is_01() || !p_shl179_cast_fu_23093_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl178_cast_fu_23081_p1.read()) - sc_biguint<7>(p_shl179_cast_fu_23093_p1.read()));
}

void ShuffleNetV2::thread_tmp_599_fu_23103_p2() {
    tmp_599_fu_23103_p2 = (!tmp_598_fu_23097_p2.read().is_01() || !tmp_787_cast_reg_35231.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_598_fu_23097_p2.read()) + sc_biguint<7>(tmp_787_cast_reg_35231.read()));
}

void ShuffleNetV2::thread_tmp_600_cast1_fu_23327_p1() {
    tmp_600_cast1_fu_23327_p1 = esl_zext<36,2>(w91_reg_5961.read());
}

void ShuffleNetV2::thread_tmp_600_cast_fu_23331_p1() {
    tmp_600_cast_fu_23331_p1 = esl_zext<13,2>(w91_reg_5961.read());
}

void ShuffleNetV2::thread_tmp_600_fu_9249_p2() {
    tmp_600_fu_9249_p2 = (!tmp_154_cast_fu_9245_p1.read().is_01() || !tmp_582_reg_30849.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_154_cast_fu_9245_p1.read()) + sc_biguint<10>(tmp_582_reg_30849.read()));
}

void ShuffleNetV2::thread_tmp_601_fu_23685_p2() {
    tmp_601_fu_23685_p2 = (!p_shl182_cast_fu_23669_p1.read().is_01() || !p_shl183_cast_fu_23681_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl182_cast_fu_23669_p1.read()) - sc_biguint<7>(p_shl183_cast_fu_23681_p1.read()));
}

void ShuffleNetV2::thread_tmp_602_cast_fu_7868_p1() {
    tmp_602_cast_fu_7868_p1 = esl_sext<15,9>(tmp_373_fu_7863_p2.read());
}

void ShuffleNetV2::thread_tmp_602_fu_9278_p2() {
    tmp_602_fu_9278_p2 = (!p_shl317_cast_fu_9262_p1.read().is_01() || !p_shl318_cast_fu_9274_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl317_cast_fu_9262_p1.read()) + sc_biguint<15>(p_shl318_cast_fu_9274_p1.read()));
}

void ShuffleNetV2::thread_tmp_603_fu_23599_p2() {
    tmp_603_fu_23599_p2 = (!p_shl180_cast_fu_23583_p1.read().is_01() || !p_shl181_cast_fu_23595_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl180_cast_fu_23583_p1.read()) - sc_biguint<7>(p_shl181_cast_fu_23595_p1.read()));
}

void ShuffleNetV2::thread_tmp_604_fu_23615_p2() {
    tmp_604_fu_23615_p2 = (!i133_cast281_cast_reg_35423.read().is_01() || !tmp56_fu_23609_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(i133_cast281_cast_reg_35423.read()) + sc_biguint<10>(tmp56_fu_23609_p2.read()));
}

void ShuffleNetV2::thread_tmp_605_fu_23628_p1() {
    tmp_605_fu_23628_p1 = esl_zext<64,11>(tmp_811_cast_fu_23625_p1.read());
}

void ShuffleNetV2::thread_tmp_606_fu_23620_p2() {
    tmp_606_fu_23620_p2 = (!tmp_603_fu_23599_p2.read().is_01() || !i133_cast_reg_35418.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_603_fu_23599_p2.read()) + sc_biguint<7>(i133_cast_reg_35418.read()));
}

void ShuffleNetV2::thread_tmp_607_cast_fu_18727_p1() {
    tmp_607_cast_fu_18727_p1 = esl_zext<7,4>(p_lshr_f11_cast_fu_18717_p4.read());
}

void ShuffleNetV2::thread_tmp_607_fu_23636_p1() {
    tmp_607_fu_23636_p1 = esl_zext<64,32>(tmp_813_cast_fu_23633_p1.read());
}

void ShuffleNetV2::thread_tmp_608_cast1_fu_23347_p1() {
    tmp_608_cast1_fu_23347_p1 = esl_zext<10,2>(h92_reg_5972.read());
}

void ShuffleNetV2::thread_tmp_608_cast_fu_23351_p1() {
    tmp_608_cast_fu_23351_p1 = esl_zext<15,2>(h92_reg_5972.read());
}

void ShuffleNetV2::thread_tmp_608_fu_9535_p3() {
    tmp_608_fu_9535_p3 = esl_concat<8,5>(tmp_155_fu_9529_p2.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_609_cast_fu_23721_p1() {
    tmp_609_cast_fu_23721_p1 = esl_zext<19,5>(ci62_reg_6027.read());
}

void ShuffleNetV2::thread_tmp_609_fu_9547_p3() {
    tmp_609_fu_9547_p3 = esl_concat<8,3>(tmp_155_fu_9529_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_610_fu_9559_p2() {
    tmp_610_fu_9559_p2 = (!p_shl329_cast_fu_9543_p1.read().is_01() || !p_shl330_cast_fu_9555_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl329_cast_fu_9543_p1.read()) - sc_biguint<14>(p_shl330_cast_fu_9555_p1.read()));
}

void ShuffleNetV2::thread_tmp_611_cast_fu_18999_p1() {
    tmp_611_cast_fu_18999_p1 = esl_sext<11,7>(tmp_442_fu_18993_p2.read());
}

void ShuffleNetV2::thread_tmp_611_fu_23725_p2() {
    tmp_611_fu_23725_p2 = (!tmp_601_reg_35472.read().is_01() || !ci62_cast_fu_23705_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_601_reg_35472.read()) + sc_biguint<7>(ci62_cast_fu_23705_p1.read()));
}

void ShuffleNetV2::thread_tmp_612_cast_fu_23730_p1() {
    tmp_612_cast_fu_23730_p1 = esl_sext<13,7>(tmp_611_fu_23725_p2.read());
}

void ShuffleNetV2::thread_tmp_612_fu_9569_p3() {
    tmp_612_fu_9569_p3 = esl_concat<5,5>(co36_reg_3546.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_613_fu_9581_p3() {
    tmp_613_fu_9581_p3 = esl_concat<5,3>(co36_reg_3546.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_614_fu_23395_p2() {
    tmp_614_fu_23395_p2 = (!p_shl186_cast_fu_23379_p1.read().is_01() || !p_shl187_cast_fu_23391_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl186_cast_fu_23379_p1.read()) - sc_biguint<7>(p_shl187_cast_fu_23391_p1.read()));
}

void ShuffleNetV2::thread_tmp_615_cast_fu_19023_p1() {
    tmp_615_cast_fu_19023_p1 = esl_sext<32,7>(tmp_445_reg_33959.read());
}

void ShuffleNetV2::thread_tmp_615_fu_9593_p2() {
    tmp_615_fu_9593_p2 = (!p_shl327_cast_fu_9577_p1.read().is_01() || !p_shl328_cast_fu_9589_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl327_cast_fu_9577_p1.read()) - sc_biguint<11>(p_shl328_cast_fu_9589_p1.read()));
}

void ShuffleNetV2::thread_tmp_616_fu_9412_p2() {
    tmp_616_fu_9412_p2 = (!tmp_156_cast_fu_9408_p1.read().is_01() || !tmp_590_reg_30898.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_156_cast_fu_9408_p1.read()) + sc_biguint<10>(tmp_590_reg_30898.read()));
}

void ShuffleNetV2::thread_tmp_617_fu_23411_p2() {
    tmp_617_fu_23411_p2 = (!co139_cast1_reg_35324.read().is_01() || !tmp55_fu_23405_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(co139_cast1_reg_35324.read()) + sc_biguint<10>(tmp55_fu_23405_p2.read()));
}

void ShuffleNetV2::thread_tmp_618_cast_fu_23421_p1() {
    tmp_618_cast_fu_23421_p1 = esl_zext<13,10>(tmp_617_reg_35381.read());
}

void ShuffleNetV2::thread_tmp_618_fu_9437_p2() {
    tmp_618_fu_9437_p2 = (!p_shl325_cast_fu_9417_p3.read().is_01() || !p_shl326_cast_fu_9433_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl325_cast_fu_9417_p3.read()) + sc_biguint<14>(p_shl326_cast_fu_9433_p1.read()));
}

void ShuffleNetV2::thread_tmp_619_fu_23416_p2() {
    tmp_619_fu_23416_p2 = (!tmp_614_fu_23395_p2.read().is_01() || !co139_cast_reg_35319.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_614_fu_23395_p2.read()) + sc_biguint<7>(co139_cast_reg_35319.read()));
}

void ShuffleNetV2::thread_tmp_620_cast_fu_23472_p1() {
    tmp_620_cast_fu_23472_p1 = esl_zext<35,32>(tmp_832_cast_fu_23469_p1.read());
}

void ShuffleNetV2::thread_tmp_620_fu_9443_p2() {
    tmp_620_fu_9443_p2 = (!tmp_156_cast1_fu_9404_p1.read().is_01() || !tmp_586_reg_30893.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_156_cast1_fu_9404_p1.read()) + sc_biguint<11>(tmp_586_reg_30893.read()));
}

void ShuffleNetV2::thread_tmp_621_fu_23975_p2() {
    tmp_621_fu_23975_p2 = (!p_shl184_cast_fu_23959_p1.read().is_01() || !p_shl185_cast_fu_23971_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl184_cast_fu_23959_p1.read()) - sc_biguint<7>(p_shl185_cast_fu_23971_p1.read()));
}

void ShuffleNetV2::thread_tmp_622_cast_fu_18806_p1() {
    tmp_622_cast_fu_18806_p1 = esl_sext<11,8>(tmp_447_fu_18800_p2.read());
}

void ShuffleNetV2::thread_tmp_622_fu_23991_p2() {
    tmp_622_fu_23991_p2 = (!i135_cast268_cast_reg_35529.read().is_01() || !tmp58_fu_23985_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(i135_cast268_cast_reg_35529.read()) + sc_biguint<10>(tmp58_fu_23985_p2.read()));
}

void ShuffleNetV2::thread_tmp_623_fu_24004_p1() {
    tmp_623_fu_24004_p1 = esl_zext<64,11>(tmp_821_cast_fu_24001_p1.read());
}

void ShuffleNetV2::thread_tmp_624_fu_23996_p2() {
    tmp_624_fu_23996_p2 = (!tmp_621_fu_23975_p2.read().is_01() || !i135_cast_reg_35524.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_621_fu_23975_p2.read()) + sc_biguint<7>(i135_cast_reg_35524.read()));
}

void ShuffleNetV2::thread_tmp_625_fu_24012_p1() {
    tmp_625_fu_24012_p1 = esl_zext<64,32>(tmp_823_cast_fu_24009_p1.read());
}

void ShuffleNetV2::thread_tmp_626_fu_23774_p2() {
    tmp_626_fu_23774_p2 = (!p_shl188_cast_fu_23758_p1.read().is_01() || !p_shl189_cast_fu_23770_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl188_cast_fu_23758_p1.read()) - sc_biguint<8>(p_shl189_cast_fu_23770_p1.read()));
}

void ShuffleNetV2::thread_tmp_627_fu_23798_p2() {
    tmp_627_fu_23798_p2 = (!tmp57_cast_fu_23794_p1.read().is_01() || !co141_cast_reg_35459.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp57_cast_fu_23794_p1.read()) + sc_biguint<12>(co141_cast_reg_35459.read()));
}

void ShuffleNetV2::thread_tmp_628_fu_23827_p2() {
    tmp_628_fu_23827_p2 = (!p_shl190_cast_fu_23811_p1.read().is_01() || !p_shl191_cast_fu_23823_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl190_cast_fu_23811_p1.read()) - sc_biguint<7>(p_shl191_cast_fu_23823_p1.read()));
}

void ShuffleNetV2::thread_tmp_629_cast_fu_19353_p1() {
    tmp_629_cast_fu_19353_p1 = esl_sext<11,7>(tmp_453_fu_19347_p2.read());
}

void ShuffleNetV2::thread_tmp_629_fu_23833_p2() {
    tmp_629_fu_23833_p2 = (!tmp_628_fu_23827_p2.read().is_01() || !tmp_817_cast_reg_35477.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_628_fu_23827_p2.read()) + sc_biguint<7>(tmp_817_cast_reg_35477.read()));
}

void ShuffleNetV2::thread_tmp_630_fu_24178_p2() {
    tmp_630_fu_24178_p2 = (!p_shl192_cast_fu_24164_p1.read().is_01() || !p_shl193_cast_fu_24174_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl192_cast_fu_24164_p1.read()) - sc_biguint<8>(p_shl193_cast_fu_24174_p1.read()));
}

void ShuffleNetV2::thread_tmp_631_cast_fu_24071_p1() {
    tmp_631_cast_fu_24071_p1 = esl_zext<10,4>(h_95_fu_24065_p2.read());
}

void ShuffleNetV2::thread_tmp_631_fu_9468_p2() {
    tmp_631_fu_9468_p2 = (!p_shl323_cast_fu_9448_p3.read().is_01() || !p_shl324_cast_fu_9464_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl323_cast_fu_9448_p3.read()) + sc_biguint<15>(p_shl324_cast_fu_9464_p1.read()));
}

void ShuffleNetV2::thread_tmp_632_cast_fu_8000_p1() {
    tmp_632_cast_fu_8000_p1 = esl_sext<13,12>(tmp_391_fu_7994_p2.read());
}

void ShuffleNetV2::thread_tmp_632_fu_9300_p2() {
    tmp_632_fu_9300_p2 = (!tmp_602_reg_30862.read().is_01() || !tmp_157_cast_fu_9296_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_602_reg_30862.read()) + sc_biguint<15>(tmp_157_cast_fu_9296_p1.read()));
}

void ShuffleNetV2::thread_tmp_633_cast1_fu_24214_p1() {
    tmp_633_cast1_fu_24214_p1 = esl_zext<19,5>(ci64_reg_6115.read());
}

void ShuffleNetV2::thread_tmp_633_cast_fu_19377_p1() {
    tmp_633_cast_fu_19377_p1 = esl_sext<32,7>(tmp_456_reg_34099.read());
}

void ShuffleNetV2::thread_tmp_633_fu_9619_p2() {
    tmp_633_fu_9619_p2 = (!tmp_988_cast_reg_30947.read().is_01() || !tmp_161_cast_fu_9615_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(tmp_988_cast_reg_30947.read()) + sc_biguint<15>(tmp_161_cast_fu_9615_p1.read()));
}

void ShuffleNetV2::thread_tmp_634_fu_24218_p2() {
    tmp_634_fu_24218_p2 = (!tmp_630_reg_35622.read().is_01() || !ci64_cast_fu_24198_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_630_reg_35622.read()) + sc_biguint<8>(ci64_cast_fu_24198_p1.read()));
}

void ShuffleNetV2::thread_tmp_635_fu_9629_p2() {
    tmp_635_fu_9629_p2 = (!tmp_615_reg_30952.read().is_01() || !tmp_161_cast1_fu_9611_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_615_reg_30952.read()) + sc_biguint<11>(tmp_161_cast1_fu_9611_p1.read()));
}

void ShuffleNetV2::thread_tmp_636_cast_fu_24223_p1() {
    tmp_636_cast_fu_24223_p1 = esl_sext<15,8>(tmp_634_fu_24218_p2.read());
}

void ShuffleNetV2::thread_tmp_636_fu_9494_p2() {
    tmp_636_fu_9494_p2 = (!tmp_618_reg_30911.read().is_01() || !tmp_162_cast_fu_9490_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_618_reg_30911.read()) + sc_biguint<14>(tmp_162_cast_fu_9490_p1.read()));
}

void ShuffleNetV2::thread_tmp_637_cast1_fu_24122_p1() {
    tmp_637_cast1_fu_24122_p1 = esl_zext<15,4>(w_94_fu_24116_p2.read());
}

void ShuffleNetV2::thread_tmp_637_cast_fu_19445_p1() {
    tmp_637_cast_fu_19445_p1 = esl_zext<7,4>(p_lshr_f12_cast_fu_19435_p4.read());
}

void ShuffleNetV2::thread_tmp_637_fu_9499_p2() {
    tmp_637_fu_9499_p2 = (!tmp_631_reg_30916.read().is_01() || !tmp_162_cast1_fu_9486_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_631_reg_30916.read()) + sc_biguint<15>(tmp_162_cast1_fu_9486_p1.read()));
}

void ShuffleNetV2::thread_tmp_638_fu_24450_p2() {
    tmp_638_fu_24450_p2 = (!p_shl194_cast_fu_24434_p1.read().is_01() || !p_shl195_cast_fu_24446_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl194_cast_fu_24434_p1.read()) - sc_biguint<8>(p_shl195_cast_fu_24446_p1.read()));
}

void ShuffleNetV2::thread_tmp_639_cast_fu_19717_p1() {
    tmp_639_cast_fu_19717_p1 = esl_sext<11,7>(tmp_471_fu_19711_p2.read());
}

void ShuffleNetV2::thread_tmp_639_fu_24466_p2() {
    tmp_639_fu_24466_p2 = (!i141_cast254_cast_reg_35679.read().is_01() || !tmp60_fu_24460_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(i141_cast254_cast_reg_35679.read()) + sc_biguint<10>(tmp60_fu_24460_p2.read()));
}

void ShuffleNetV2::thread_tmp_640_fu_24479_p1() {
    tmp_640_fu_24479_p1 = esl_zext<64,11>(tmp_848_cast_fu_24476_p1.read());
}

void ShuffleNetV2::thread_tmp_641_fu_24471_p2() {
    tmp_641_fu_24471_p2 = (!tmp_638_fu_24450_p2.read().is_01() || !i141_cast_reg_35674.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_638_fu_24450_p2.read()) + sc_biguint<8>(i141_cast_reg_35674.read()));
}

void ShuffleNetV2::thread_tmp_642_fu_24487_p1() {
    tmp_642_fu_24487_p1 = esl_zext<64,32>(tmp_850_cast_fu_24484_p1.read());
}

void ShuffleNetV2::thread_tmp_643_cast_fu_19741_p1() {
    tmp_643_cast_fu_19741_p1 = esl_sext<32,7>(tmp_474_reg_34205.read());
}

void ShuffleNetV2::thread_tmp_643_fu_24271_p2() {
    tmp_643_fu_24271_p2 = (!p_shl196_cast_fu_24251_p1.read().is_01() || !p_shl197_cast_fu_24267_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl196_cast_fu_24251_p1.read()) - sc_biguint<10>(p_shl197_cast_fu_24267_p1.read()));
}

void ShuffleNetV2::thread_tmp_644_fu_24287_p2() {
    tmp_644_fu_24287_p2 = (!tmp59_fu_24281_p2.read().is_01() || !co144_cast_reg_35609.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp59_fu_24281_p2.read()) + sc_biguint<12>(co144_cast_reg_35609.read()));
}

void ShuffleNetV2::thread_tmp_645_fu_24302_p2() {
    tmp_645_fu_24302_p2 = (!p_shl197_cast1_fu_24263_p1.read().is_01() || !p_shl198_cast_fu_24298_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl197_cast1_fu_24263_p1.read()) - sc_biguint<8>(p_shl198_cast_fu_24298_p1.read()));
}

void ShuffleNetV2::thread_tmp_646_fu_24308_p2() {
    tmp_646_fu_24308_p2 = (!tmp_645_fu_24302_p2.read().is_01() || !tmp_843_cast_reg_35627.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_645_fu_24302_p2.read()) + sc_biguint<8>(tmp_843_cast_reg_35627.read()));
}

void ShuffleNetV2::thread_tmp_647_cast1_fu_24524_p1() {
    tmp_647_cast1_fu_24524_p1 = esl_zext<36,2>(w95_reg_6170.read());
}

void ShuffleNetV2::thread_tmp_647_cast_fu_24528_p1() {
    tmp_647_cast_fu_24528_p1 = esl_zext<13,2>(w95_reg_6170.read());
}

void ShuffleNetV2::thread_tmp_647_fu_9700_p3() {
    tmp_647_fu_9700_p3 = esl_concat<7,2>(tmp_163_fu_9690_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_648_cast_cast_fu_19137_p1() {
    tmp_648_cast_cast_fu_19137_p1 = esl_sext<8,7>(tmp_464_fu_19131_p2.read());
}

void ShuffleNetV2::thread_tmp_648_fu_24880_p2() {
    tmp_648_fu_24880_p2 = (!p_shl201_cast_fu_24866_p1.read().is_01() || !p_shl202_cast_fu_24876_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl201_cast_fu_24866_p1.read()) - sc_biguint<8>(p_shl202_cast_fu_24876_p1.read()));
}

void ShuffleNetV2::thread_tmp_649_fu_24796_p2() {
    tmp_649_fu_24796_p2 = (!p_shl199_cast_fu_24780_p1.read().is_01() || !p_shl200_cast_fu_24792_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl199_cast_fu_24780_p1.read()) - sc_biguint<8>(p_shl200_cast_fu_24792_p1.read()));
}

void ShuffleNetV2::thread_tmp_650_cast_fu_19157_p1() {
    tmp_650_cast_fu_19157_p1 = esl_sext<9,8>(tmp_467_reg_34031.read());
}

void ShuffleNetV2::thread_tmp_650_fu_24812_p2() {
    tmp_650_fu_24812_p2 = (!i145_cast244_cast_reg_35819.read().is_01() || !tmp62_fu_24806_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(i145_cast244_cast_reg_35819.read()) + sc_biguint<9>(tmp62_fu_24806_p2.read()));
}

void ShuffleNetV2::thread_tmp_651_fu_24825_p1() {
    tmp_651_fu_24825_p1 = esl_zext<64,11>(tmp_866_cast_fu_24822_p1.read());
}

void ShuffleNetV2::thread_tmp_652_cast_fu_19217_p1() {
    tmp_652_cast_fu_19217_p1 = esl_sext<32,7>(tmp_469_reg_34037.read());
}

void ShuffleNetV2::thread_tmp_652_fu_9712_p2() {
    tmp_652_fu_9712_p2 = (!p_shl332_cast_fu_9708_p1.read().is_01() || !tmp_164_cast_fu_9696_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl332_cast_fu_9708_p1.read()) - sc_biguint<10>(tmp_164_cast_fu_9696_p1.read()));
}

void ShuffleNetV2::thread_tmp_653_fu_24817_p2() {
    tmp_653_fu_24817_p2 = (!tmp_649_fu_24796_p2.read().is_01() || !i145_cast_reg_35814.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_649_fu_24796_p2.read()) + sc_biguint<8>(i145_cast_reg_35814.read()));
}

void ShuffleNetV2::thread_tmp_654_fu_24833_p1() {
    tmp_654_fu_24833_p1 = esl_zext<64,32>(tmp_868_cast_fu_24830_p1.read());
}

void ShuffleNetV2::thread_tmp_655_cast1_fu_24544_p1() {
    tmp_655_cast1_fu_24544_p1 = esl_zext<11,2>(h96_reg_6181.read());
}

void ShuffleNetV2::thread_tmp_655_cast2_fu_24548_p1() {
    tmp_655_cast2_fu_24548_p1 = esl_zext<15,2>(h96_reg_6181.read());
}

void ShuffleNetV2::thread_tmp_655_cast_fu_19524_p1() {
    tmp_655_cast_fu_19524_p1 = esl_sext<11,8>(tmp_476_fu_19518_p2.read());
}

void ShuffleNetV2::thread_tmp_655_fu_9722_p3() {
    tmp_655_fu_9722_p3 = esl_concat<5,2>(co38_reg_3580.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_656_cast_fu_24916_p1() {
    tmp_656_cast_fu_24916_p1 = esl_zext<19,5>(ci66_reg_6236.read());
}

void ShuffleNetV2::thread_tmp_656_fu_9734_p2() {
    tmp_656_fu_9734_p2 = (!p_shl331_cast_fu_9730_p1.read().is_01() || !tmp_165_cast_fu_9718_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl331_cast_fu_9730_p1.read()) - sc_biguint<8>(tmp_165_cast_fu_9718_p1.read()));
}

void ShuffleNetV2::thread_tmp_657_fu_24920_p2() {
    tmp_657_fu_24920_p2 = (!tmp_648_reg_35868.read().is_01() || !ci66_cast_fu_24900_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_648_reg_35868.read()) + sc_biguint<8>(ci66_cast_fu_24900_p1.read()));
}

void ShuffleNetV2::thread_tmp_658_cast_fu_24925_p1() {
    tmp_658_cast_fu_24925_p1 = esl_sext<15,8>(tmp_657_fu_24920_p2.read());
}

void ShuffleNetV2::thread_tmp_658_fu_9764_p2() {
    tmp_658_fu_9764_p2 = (!tmp_652_reg_30996.read().is_01() || !tmp_169_cast_fu_9760_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_652_reg_30996.read()) + sc_biguint<10>(tmp_169_cast_fu_9760_p1.read()));
}

void ShuffleNetV2::thread_tmp_659_fu_24592_p2() {
    tmp_659_fu_24592_p2 = (!p_shl205_cast_fu_24576_p1.read().is_01() || !p_shl206_cast_fu_24588_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl205_cast_fu_24576_p1.read()) - sc_biguint<8>(p_shl206_cast_fu_24588_p1.read()));
}

void ShuffleNetV2::thread_tmp_660_fu_9785_p2() {
    tmp_660_fu_9785_p2 = (!p_shl334_cast_fu_9781_p1.read().is_01() || !tmp_1009_cast_fu_9769_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_shl334_cast_fu_9781_p1.read()) - sc_bigint<15>(tmp_1009_cast_fu_9769_p1.read()));
}

void ShuffleNetV2::thread_tmp_661_fu_24608_p2() {
    tmp_661_fu_24608_p2 = (!co147_cast1_reg_35720.read().is_01() || !tmp61_fu_24602_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(co147_cast1_reg_35720.read()) + sc_biguint<10>(tmp61_fu_24602_p2.read()));
}

void ShuffleNetV2::thread_tmp_662_cast_fu_24618_p1() {
    tmp_662_cast_fu_24618_p1 = esl_zext<13,10>(tmp_661_reg_35777.read());
}

void ShuffleNetV2::thread_tmp_662_fu_9791_p2() {
    tmp_662_fu_9791_p2 = (!tmp_1008_cast_reg_31001.read().is_01() || !tmp_169_cast1_fu_9756_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_1008_cast_reg_31001.read()) + sc_biguint<9>(tmp_169_cast1_fu_9756_p1.read()));
}

void ShuffleNetV2::thread_tmp_663_cast_fu_7911_p1() {
    tmp_663_cast_fu_7911_p1 = esl_zext<64,15>(tmp_397_fu_7906_p2.read());
}

void ShuffleNetV2::thread_tmp_663_fu_9802_p2() {
    tmp_663_fu_9802_p2 = (!tmp_152_fu_9796_p2.read().is_01() || !tmp_662_fu_9791_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_152_fu_9796_p2.read()) - sc_biguint<9>(tmp_662_fu_9791_p2.read()));
}

void ShuffleNetV2::thread_tmp_664_fu_24613_p2() {
    tmp_664_fu_24613_p2 = (!tmp_659_fu_24592_p2.read().is_01() || !co147_cast_reg_35715.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_659_fu_24592_p2.read()) + sc_biguint<8>(co147_cast_reg_35715.read()));
}

void ShuffleNetV2::thread_tmp_665_cast_fu_8059_p1() {
    tmp_665_cast_fu_8059_p1 = esl_sext<64,13>(tmp_398_fu_8054_p2.read());
}

void ShuffleNetV2::thread_tmp_665_fu_9901_p3() {
    tmp_665_fu_9901_p3 = esl_concat<8,5>(tmp_170_fu_9895_p2.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_666_cast_fu_8069_p1() {
    tmp_666_cast_fu_8069_p1 = esl_sext<64,11>(tmp_408_reg_30488.read());
}

void ShuffleNetV2::thread_tmp_666_fu_9913_p3() {
    tmp_666_fu_9913_p3 = esl_concat<8,3>(tmp_170_fu_9895_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_667_cast1_fu_24669_p1() {
    tmp_667_cast1_fu_24669_p1 = esl_zext<35,32>(tmp_887_cast_fu_24666_p1.read());
}

void ShuffleNetV2::thread_tmp_667_cast_fu_20139_p1() {
    tmp_667_cast_fu_20139_p1 = esl_zext<7,4>(p_lshr_f13_cast_fu_20129_p4.read());
}

void ShuffleNetV2::thread_tmp_667_fu_9925_p2() {
    tmp_667_fu_9925_p2 = (!p_shl337_cast_fu_9909_p1.read().is_01() || !p_shl338_cast_fu_9921_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl337_cast_fu_9909_p1.read()) - sc_biguint<14>(p_shl338_cast_fu_9921_p1.read()));
}

void ShuffleNetV2::thread_tmp_668_fu_25152_p2() {
    tmp_668_fu_25152_p2 = (!p_shl203_cast_fu_25136_p1.read().is_01() || !p_shl204_cast_fu_25148_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl203_cast_fu_25136_p1.read()) - sc_biguint<8>(p_shl204_cast_fu_25148_p1.read()));
}

void ShuffleNetV2::thread_tmp_669_fu_25176_p2() {
    tmp_669_fu_25176_p2 = (!i147_cast1_reg_35925.read().is_01() || !tmp64_cast_fu_25172_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(i147_cast1_reg_35925.read()) + sc_biguint<12>(tmp64_cast_fu_25172_p1.read()));
}

void ShuffleNetV2::thread_tmp_670_fu_25186_p1() {
    tmp_670_fu_25186_p1 = esl_zext<64,12>(tmp_669_reg_35946.read());
}

void ShuffleNetV2::thread_tmp_671_cast_fu_20411_p1() {
    tmp_671_cast_fu_20411_p1 = esl_sext<11,7>(tmp_491_fu_20405_p2.read());
}

void ShuffleNetV2::thread_tmp_671_fu_25181_p2() {
    tmp_671_fu_25181_p2 = (!tmp_668_fu_25152_p2.read().is_01() || !i147_cast_reg_35920.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_668_fu_25152_p2.read()) + sc_biguint<8>(i147_cast_reg_35920.read()));
}

void ShuffleNetV2::thread_tmp_672_fu_25193_p1() {
    tmp_672_fu_25193_p1 = esl_zext<64,32>(tmp_878_cast_fu_25190_p1.read());
}

void ShuffleNetV2::thread_tmp_673_fu_24973_p2() {
    tmp_673_fu_24973_p2 = (!p_shl207_cast_fu_24953_p1.read().is_01() || !p_shl208_cast_fu_24969_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl207_cast_fu_24953_p1.read()) - sc_biguint<10>(p_shl208_cast_fu_24969_p1.read()));
}

void ShuffleNetV2::thread_tmp_674_fu_24989_p2() {
    tmp_674_fu_24989_p2 = (!tmp63_fu_24983_p2.read().is_01() || !co149_cast_reg_35855.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp63_fu_24983_p2.read()) + sc_biguint<12>(co149_cast_reg_35855.read()));
}

void ShuffleNetV2::thread_tmp_675_cast_fu_20435_p1() {
    tmp_675_cast_fu_20435_p1 = esl_sext<32,7>(tmp_494_reg_34409.read());
}

void ShuffleNetV2::thread_tmp_675_fu_25004_p2() {
    tmp_675_fu_25004_p2 = (!p_shl208_cast1_fu_24965_p1.read().is_01() || !p_shl209_cast_fu_25000_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl208_cast1_fu_24965_p1.read()) - sc_biguint<8>(p_shl209_cast_fu_25000_p1.read()));
}

void ShuffleNetV2::thread_tmp_676_fu_25010_p2() {
    tmp_676_fu_25010_p2 = (!tmp_675_fu_25004_p2.read().is_01() || !tmp_872_cast_reg_35873.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_675_fu_25004_p2.read()) + sc_biguint<8>(tmp_872_cast_reg_35873.read()));
}

void ShuffleNetV2::thread_tmp_677_cast1_fu_25230_p1() {
    tmp_677_cast1_fu_25230_p1 = esl_zext<36,2>(w97_reg_6291.read());
}

void ShuffleNetV2::thread_tmp_677_cast_fu_25234_p1() {
    tmp_677_cast_fu_25234_p1 = esl_zext<13,2>(w97_reg_6291.read());
}

void ShuffleNetV2::thread_tmp_677_fu_9935_p3() {
    tmp_677_fu_9935_p3 = esl_concat<5,5>(co40_reg_3625.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_678_fu_25582_p2() {
    tmp_678_fu_25582_p2 = (!p_shl212_cast_fu_25568_p1.read().is_01() || !p_shl213_cast_fu_25578_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl212_cast_fu_25568_p1.read()) - sc_biguint<8>(p_shl213_cast_fu_25578_p1.read()));
}

void ShuffleNetV2::thread_tmp_679_fu_25502_p2() {
    tmp_679_fu_25502_p2 = (!p_shl210_cast_fu_25486_p1.read().is_01() || !p_shl211_cast_fu_25498_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl210_cast_fu_25486_p1.read()) - sc_biguint<8>(p_shl211_cast_fu_25498_p1.read()));
}

void ShuffleNetV2::thread_tmp_680_fu_25518_p2() {
    tmp_680_fu_25518_p2 = (!i153_cast1_reg_36065.read().is_01() || !tmp66_fu_25512_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(i153_cast1_reg_36065.read()) + sc_biguint<12>(tmp66_fu_25512_p2.read()));
}

void ShuffleNetV2::thread_tmp_681_fu_25528_p1() {
    tmp_681_fu_25528_p1 = esl_zext<64,12>(tmp_680_reg_36086.read());
}

void ShuffleNetV2::thread_tmp_682_cast_fu_20218_p1() {
    tmp_682_cast_fu_20218_p1 = esl_sext<11,8>(tmp_496_fu_20212_p2.read());
}

void ShuffleNetV2::thread_tmp_682_fu_9947_p3() {
    tmp_682_fu_9947_p3 = esl_concat<5,3>(co40_reg_3625.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_683_fu_25523_p2() {
    tmp_683_fu_25523_p2 = (!tmp_679_fu_25502_p2.read().is_01() || !i153_cast_reg_36060.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_679_fu_25502_p2.read()) + sc_biguint<8>(i153_cast_reg_36060.read()));
}

void ShuffleNetV2::thread_tmp_684_fu_25535_p1() {
    tmp_684_fu_25535_p1 = esl_zext<64,32>(tmp_901_cast_fu_25532_p1.read());
}

void ShuffleNetV2::thread_tmp_685_fu_9959_p2() {
    tmp_685_fu_9959_p2 = (!p_shl335_cast_fu_9943_p1.read().is_01() || !p_shl336_cast_fu_9955_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl335_cast_fu_9943_p1.read()) - sc_biguint<11>(p_shl336_cast_fu_9955_p1.read()));
}

void ShuffleNetV2::thread_tmp_686_cast1_fu_25250_p1() {
    tmp_686_cast1_fu_25250_p1 = esl_zext<11,2>(h98_reg_6302.read());
}

void ShuffleNetV2::thread_tmp_686_cast_fu_25254_p1() {
    tmp_686_cast_fu_25254_p1 = esl_zext<15,2>(h98_reg_6302.read());
}

void ShuffleNetV2::thread_tmp_686_fu_9828_p2() {
    tmp_686_fu_9828_p2 = (!tmp_660_reg_31014.read().is_01() || !tmp_171_cast_fu_9824_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_660_reg_31014.read()) + sc_biguint<15>(tmp_171_cast_fu_9824_p1.read()));
}

void ShuffleNetV2::thread_tmp_687_cast_fu_25618_p1() {
    tmp_687_cast_fu_25618_p1 = esl_zext<19,5>(ci68_reg_6357.read());
}

void ShuffleNetV2::thread_tmp_687_fu_9838_p2() {
    tmp_687_fu_9838_p2 = (!tmp_663_reg_31019.read().is_01() || !tmp_171_cast1_fu_9820_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_663_reg_31019.read()) + sc_biguint<9>(tmp_171_cast1_fu_9820_p1.read()));
}

void ShuffleNetV2::thread_tmp_688_fu_25622_p2() {
    tmp_688_fu_25622_p2 = (!tmp_678_reg_36114.read().is_01() || !ci68_cast_fu_25602_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_678_reg_36114.read()) + sc_biguint<8>(ci68_cast_fu_25602_p1.read()));
}

void ShuffleNetV2::thread_tmp_689_cast1_fu_25627_p1() {
    tmp_689_cast1_fu_25627_p1 = esl_sext<15,8>(tmp_688_fu_25622_p2.read());
}

void ShuffleNetV2::thread_tmp_689_cast_fu_20765_p1() {
    tmp_689_cast_fu_20765_p1 = esl_sext<11,7>(tmp_503_fu_20759_p2.read());
}

void ShuffleNetV2::thread_tmp_689_fu_9985_p2() {
    tmp_689_fu_9985_p2 = (!tmp_1017_cast_reg_31063.read().is_01() || !tmp_175_cast_fu_9981_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(tmp_1017_cast_reg_31063.read()) + sc_biguint<15>(tmp_175_cast_fu_9981_p1.read()));
}

void ShuffleNetV2::thread_tmp_690_fu_25298_p2() {
    tmp_690_fu_25298_p2 = (!p_shl216_cast_fu_25282_p1.read().is_01() || !p_shl217_cast_fu_25294_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl216_cast_fu_25282_p1.read()) - sc_biguint<8>(p_shl217_cast_fu_25294_p1.read()));
}

void ShuffleNetV2::thread_tmp_691_fu_25314_p2() {
    tmp_691_fu_25314_p2 = (!co151_cast1_reg_35966.read().is_01() || !tmp65_fu_25308_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(co151_cast1_reg_35966.read()) + sc_biguint<10>(tmp65_fu_25308_p2.read()));
}

void ShuffleNetV2::thread_tmp_692_cast_fu_25324_p1() {
    tmp_692_cast_fu_25324_p1 = esl_zext<13,10>(tmp_691_reg_36023.read());
}

void ShuffleNetV2::thread_tmp_692_fu_9995_p2() {
    tmp_692_fu_9995_p2 = (!tmp_685_reg_31068.read().is_01() || !tmp_175_cast1_fu_9977_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_685_reg_31068.read()) + sc_biguint<11>(tmp_175_cast1_fu_9977_p1.read()));
}

void ShuffleNetV2::thread_tmp_693_cast_fu_20789_p1() {
    tmp_693_cast_fu_20789_p1 = esl_sext<32,7>(tmp_506_reg_34549.read());
}

void ShuffleNetV2::thread_tmp_693_fu_25319_p2() {
    tmp_693_fu_25319_p2 = (!tmp_690_fu_25298_p2.read().is_01() || !co151_cast_reg_35961.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_690_fu_25298_p2.read()) + sc_biguint<8>(co151_cast_reg_35961.read()));
}

void ShuffleNetV2::thread_tmp_694_cast_fu_25375_p1() {
    tmp_694_cast_fu_25375_p1 = esl_zext<35,32>(tmp_920_cast_fu_25372_p1.read());
}

void ShuffleNetV2::thread_tmp_694_fu_10048_p3() {
    tmp_694_fu_10048_p3 = esl_concat<5,4>(co42_reg_3659.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_695_fu_25908_p2() {
    tmp_695_fu_25908_p2 = (!co155_cast_fu_25892_p1.read().is_01() || !ap_const_lv8_60.is_01())? sc_lv<8>(): (sc_biguint<8>(co155_cast_fu_25892_p1.read()) + sc_biguint<8>(ap_const_lv8_60));
}

void ShuffleNetV2::thread_tmp_696_fu_25854_p2() {
    tmp_696_fu_25854_p2 = (!p_shl214_cast_fu_25838_p1.read().is_01() || !p_shl215_cast_fu_25850_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl214_cast_fu_25838_p1.read()) - sc_biguint<8>(p_shl215_cast_fu_25850_p1.read()));
}

void ShuffleNetV2::thread_tmp_697_cast_fu_20857_p1() {
    tmp_697_cast_fu_20857_p1 = esl_zext<7,4>(p_lshr_f14_cast_fu_20847_p4.read());
}

void ShuffleNetV2::thread_tmp_697_fu_25870_p2() {
    tmp_697_fu_25870_p2 = (!i155_cast1_reg_36171.read().is_01() || !tmp68_fu_25864_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(i155_cast1_reg_36171.read()) + sc_biguint<12>(tmp68_fu_25864_p2.read()));
}

void ShuffleNetV2::thread_tmp_698_fu_25880_p1() {
    tmp_698_fu_25880_p1 = esl_zext<64,12>(tmp_697_reg_36192.read());
}

void ShuffleNetV2::thread_tmp_699_cast_fu_21129_p1() {
    tmp_699_cast_fu_21129_p1 = esl_sext<11,7>(tmp_521_fu_21123_p2.read());
}

void ShuffleNetV2::thread_tmp_699_fu_25875_p2() {
    tmp_699_fu_25875_p2 = (!tmp_696_fu_25854_p2.read().is_01() || !i155_cast_reg_36166.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_696_fu_25854_p2.read()) + sc_biguint<8>(i155_cast_reg_36166.read()));
}

void ShuffleNetV2::thread_tmp_700_fu_25887_p1() {
    tmp_700_fu_25887_p1 = esl_zext<64,32>(tmp_911_cast_fu_25884_p1.read());
}

void ShuffleNetV2::thread_tmp_701_fu_25675_p2() {
    tmp_701_fu_25675_p2 = (!p_shl220_cast_fu_25655_p1.read().is_01() || !p_shl221_cast_fu_25671_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl220_cast_fu_25655_p1.read()) - sc_biguint<10>(p_shl221_cast_fu_25671_p1.read()));
}

void ShuffleNetV2::thread_tmp_702_fu_10060_p3() {
    tmp_702_fu_10060_p3 = esl_concat<5,1>(co42_reg_3659.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_703_cast_fu_21153_p1() {
    tmp_703_cast_fu_21153_p1 = esl_sext<32,7>(tmp_524_reg_34655.read());
}

void ShuffleNetV2::thread_tmp_703_fu_25691_p2() {
    tmp_703_fu_25691_p2 = (!tmp67_fu_25685_p2.read().is_01() || !co153_cast_reg_36101.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp67_fu_25685_p2.read()) + sc_biguint<12>(co153_cast_reg_36101.read()));
}

void ShuffleNetV2::thread_tmp_704_fu_25706_p2() {
    tmp_704_fu_25706_p2 = (!p_shl221_cast1_fu_25667_p1.read().is_01() || !p_shl222_cast_fu_25702_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl221_cast1_fu_25667_p1.read()) - sc_biguint<8>(p_shl222_cast_fu_25702_p1.read()));
}

void ShuffleNetV2::thread_tmp_705_fu_25712_p2() {
    tmp_705_fu_25712_p2 = (!tmp_704_fu_25706_p2.read().is_01() || !tmp_905_cast_reg_36119.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_704_fu_25706_p2.read()) + sc_biguint<8>(tmp_905_cast_reg_36119.read()));
}

void ShuffleNetV2::thread_tmp_706_fu_26145_p2() {
    tmp_706_fu_26145_p2 = (!p_shl218_cast_fu_26131_p1.read().is_01() || !p_shl219_cast_fu_26141_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl218_cast_fu_26131_p1.read()) - sc_biguint<8>(p_shl219_cast_fu_26141_p1.read()));
}

void ShuffleNetV2::thread_tmp_707_cast1_fu_25994_p1() {
    tmp_707_cast1_fu_25994_p1 = esl_zext<13,3>(h_101_fu_25988_p2.read());
}

void ShuffleNetV2::thread_tmp_707_cast_fu_25998_p1() {
    tmp_707_cast_fu_25998_p1 = esl_zext<12,3>(h_101_fu_25988_p2.read());
}

void ShuffleNetV2::thread_tmp_707_fu_10072_p2() {
    tmp_707_fu_10072_p2 = (!p_shl340_cast_fu_10068_p1.read().is_01() || !p_shl339_cast_fu_10056_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl340_cast_fu_10068_p1.read()) + sc_biguint<10>(p_shl339_cast_fu_10056_p1.read()));
}

void ShuffleNetV2::thread_tmp_708_cast_cast_fu_20549_p1() {
    tmp_708_cast_cast_fu_20549_p1 = esl_sext<8,7>(tmp_514_fu_20543_p2.read());
}

void ShuffleNetV2::thread_tmp_708_cast_fu_26181_p1() {
    tmp_708_cast_fu_26181_p1 = esl_zext<19,5>(ci70_reg_6445.read());
}

void ShuffleNetV2::thread_tmp_708_fu_10177_p3() {
    tmp_708_fu_10177_p3 = esl_concat<6,4>(tmp_176_fu_10171_p2.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_709_fu_26185_p2() {
    tmp_709_fu_26185_p2 = (!tmp_706_reg_36274.read().is_01() || !ci70_cast_fu_26165_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_706_reg_36274.read()) + sc_biguint<8>(ci70_cast_fu_26165_p1.read()));
}

void ShuffleNetV2::thread_tmp_710_cast1_fu_8171_p1() {
    tmp_710_cast1_fu_8171_p1 = esl_sext<9,8>(tmp_421_fu_8165_p2.read());
}

void ShuffleNetV2::thread_tmp_710_cast_fu_20569_p1() {
    tmp_710_cast_fu_20569_p1 = esl_sext<9,8>(tmp_517_reg_34481.read());
}

void ShuffleNetV2::thread_tmp_710_fu_10189_p3() {
    tmp_710_fu_10189_p3 = esl_concat<6,1>(tmp_176_fu_10171_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_711_cast_fu_26190_p1() {
    tmp_711_cast_fu_26190_p1 = esl_sext<15,8>(tmp_709_fu_26185_p2.read());
}

void ShuffleNetV2::thread_tmp_711_fu_10201_p2() {
    tmp_711_fu_10201_p2 = (!p_shl346_cast_fu_10197_p1.read().is_01() || !p_shl345_cast_fu_10185_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl346_cast_fu_10197_p1.read()) + sc_biguint<11>(p_shl345_cast_fu_10185_p1.read()));
}

void ShuffleNetV2::thread_tmp_712_cast1_fu_26076_p1() {
    tmp_712_cast1_fu_26076_p1 = esl_zext<14,3>(w_100_fu_26070_p2.read());
}

void ShuffleNetV2::thread_tmp_712_cast2_fu_26080_p1() {
    tmp_712_cast2_fu_26080_p1 = esl_zext<13,3>(w_100_fu_26070_p2.read());
}

void ShuffleNetV2::thread_tmp_712_cast_fu_20629_p1() {
    tmp_712_cast_fu_20629_p1 = esl_sext<32,7>(tmp_519_reg_34487.read());
}

void ShuffleNetV2::thread_tmp_712_fu_10207_p3() {
    tmp_712_fu_10207_p3 = esl_concat<5,4>(co44_reg_3692.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_713_cast_fu_8196_p1() {
    tmp_713_cast_fu_8196_p1 = esl_sext<15,9>(tmp_423_fu_8191_p2.read());
}

void ShuffleNetV2::thread_tmp_713_fu_10219_p3() {
    tmp_713_fu_10219_p3 = esl_concat<5,1>(co44_reg_3692.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_714_fu_26417_p2() {
    tmp_714_fu_26417_p2 = (!p_shl223_cast_fu_26401_p1.read().is_01() || !p_shl224_cast_fu_26413_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl223_cast_fu_26401_p1.read()) - sc_biguint<8>(p_shl224_cast_fu_26413_p1.read()));
}

void ShuffleNetV2::thread_tmp_715_cast_fu_20936_p1() {
    tmp_715_cast_fu_20936_p1 = esl_sext<11,8>(tmp_526_fu_20930_p2.read());
}

void ShuffleNetV2::thread_tmp_715_fu_26433_p2() {
    tmp_715_fu_26433_p2 = (!i161_cast1_reg_36331.read().is_01() || !tmp70_fu_26427_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(i161_cast1_reg_36331.read()) + sc_biguint<12>(tmp70_fu_26427_p2.read()));
}

void ShuffleNetV2::thread_tmp_716_fu_26443_p1() {
    tmp_716_fu_26443_p1 = esl_zext<64,12>(tmp_715_reg_36352.read());
}

void ShuffleNetV2::thread_tmp_717_fu_26438_p2() {
    tmp_717_fu_26438_p2 = (!tmp_714_fu_26417_p2.read().is_01() || !i161_cast_reg_36326.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_714_fu_26417_p2.read()) + sc_biguint<8>(i161_cast_reg_36326.read()));
}

void ShuffleNetV2::thread_tmp_718_fu_26450_p1() {
    tmp_718_fu_26450_p1 = esl_zext<64,32>(tmp_940_cast_fu_26447_p1.read());
}

void ShuffleNetV2::thread_tmp_719_fu_26238_p2() {
    tmp_719_fu_26238_p2 = (!p_shl225_cast_fu_26218_p1.read().is_01() || !p_shl226_cast_fu_26234_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl225_cast_fu_26218_p1.read()) - sc_biguint<10>(p_shl226_cast_fu_26234_p1.read()));
}

void ShuffleNetV2::thread_tmp_720_fu_26254_p2() {
    tmp_720_fu_26254_p2 = (!tmp69_fu_26248_p2.read().is_01() || !co156_cast_reg_36261.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp69_fu_26248_p2.read()) + sc_biguint<12>(co156_cast_reg_36261.read()));
}

void ShuffleNetV2::thread_tmp_721_fu_26269_p2() {
    tmp_721_fu_26269_p2 = (!p_shl226_cast1_fu_26230_p1.read().is_01() || !p_shl227_cast_fu_26265_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl226_cast1_fu_26230_p1.read()) - sc_biguint<8>(p_shl227_cast_fu_26265_p1.read()));
}

void ShuffleNetV2::thread_tmp_722_fu_26275_p2() {
    tmp_722_fu_26275_p2 = (!tmp_721_fu_26269_p2.read().is_01() || !tmp_927_cast_reg_36279.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_721_fu_26269_p2.read()) + sc_biguint<8>(tmp_927_cast_reg_36279.read()));
}

void ShuffleNetV2::thread_tmp_723_cast1_fu_26487_p1() {
    tmp_723_cast1_fu_26487_p1 = esl_zext<36,2>(w101_reg_6500.read());
}

void ShuffleNetV2::thread_tmp_723_cast_fu_26491_p1() {
    tmp_723_cast_fu_26491_p1 = esl_zext<13,2>(w101_reg_6500.read());
}

void ShuffleNetV2::thread_tmp_723_fu_10231_p2() {
    tmp_723_fu_10231_p2 = (!p_shl344_cast_fu_10227_p1.read().is_01() || !p_shl343_cast_fu_10215_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl344_cast_fu_10227_p1.read()) + sc_biguint<10>(p_shl343_cast_fu_10215_p1.read()));
}

void ShuffleNetV2::thread_tmp_724_fu_26839_p2() {
    tmp_724_fu_26839_p2 = (!p_shl230_cast_fu_26825_p1.read().is_01() || !p_shl231_cast_fu_26835_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl230_cast_fu_26825_p1.read()) - sc_biguint<8>(p_shl231_cast_fu_26835_p1.read()));
}

void ShuffleNetV2::thread_tmp_725_fu_26759_p2() {
    tmp_725_fu_26759_p2 = (!p_shl228_cast_fu_26743_p1.read().is_01() || !p_shl229_cast_fu_26755_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl228_cast_fu_26743_p1.read()) - sc_biguint<8>(p_shl229_cast_fu_26755_p1.read()));
}

void ShuffleNetV2::thread_tmp_726_fu_26775_p2() {
    tmp_726_fu_26775_p2 = (!i165_cast1_reg_36471.read().is_01() || !tmp72_fu_26769_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(i165_cast1_reg_36471.read()) + sc_biguint<12>(tmp72_fu_26769_p2.read()));
}

void ShuffleNetV2::thread_tmp_727_cast_fu_21551_p1() {
    tmp_727_cast_fu_21551_p1 = esl_zext<7,4>(p_lshr_f15_cast_fu_21541_p4.read());
}

void ShuffleNetV2::thread_tmp_727_fu_10094_p2() {
    tmp_727_fu_10094_p2 = (!tmp_177_cast_fu_10090_p1.read().is_01() || !tmp_707_reg_31112.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_177_cast_fu_10090_p1.read()) + sc_biguint<10>(tmp_707_reg_31112.read()));
}

void ShuffleNetV2::thread_tmp_728_fu_26785_p1() {
    tmp_728_fu_26785_p1 = esl_zext<64,12>(tmp_726_reg_36492.read());
}

void ShuffleNetV2::thread_tmp_729_fu_26780_p2() {
    tmp_729_fu_26780_p2 = (!tmp_725_fu_26759_p2.read().is_01() || !i165_cast_reg_36466.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_725_fu_26759_p2.read()) + sc_biguint<8>(i165_cast_reg_36466.read()));
}

void ShuffleNetV2::thread_tmp_730_fu_10123_p2() {
    tmp_730_fu_10123_p2 = (!p_shl341_cast_fu_10107_p1.read().is_01() || !p_shl342_cast_fu_10119_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl341_cast_fu_10107_p1.read()) + sc_biguint<15>(p_shl342_cast_fu_10119_p1.read()));
}

void ShuffleNetV2::thread_tmp_731_cast_fu_21831_p1() {
    tmp_731_cast_fu_21831_p1 = esl_sext<11,7>(tmp_541_fu_21825_p2.read());
}

void ShuffleNetV2::thread_tmp_731_fu_26792_p1() {
    tmp_731_fu_26792_p1 = esl_zext<64,32>(tmp_958_cast_fu_26789_p1.read());
}

void ShuffleNetV2::thread_tmp_732_cast1_fu_26507_p1() {
    tmp_732_cast1_fu_26507_p1 = esl_zext<11,2>(h102_reg_6511.read());
}

void ShuffleNetV2::thread_tmp_732_cast_fu_26511_p1() {
    tmp_732_cast_fu_26511_p1 = esl_zext<15,2>(h102_reg_6511.read());
}

void ShuffleNetV2::thread_tmp_732_fu_10380_p3() {
    tmp_732_fu_10380_p3 = esl_concat<8,5>(tmp_178_fu_10374_p2.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_733_cast_fu_26875_p1() {
    tmp_733_cast_fu_26875_p1 = esl_zext<19,5>(ci72_reg_6566.read());
}

void ShuffleNetV2::thread_tmp_733_fu_10392_p3() {
    tmp_733_fu_10392_p3 = esl_concat<8,3>(tmp_178_fu_10374_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_734_fu_26879_p2() {
    tmp_734_fu_26879_p2 = (!tmp_724_reg_36520.read().is_01() || !ci72_cast_fu_26859_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_724_reg_36520.read()) + sc_biguint<8>(ci72_cast_fu_26859_p1.read()));
}

void ShuffleNetV2::thread_tmp_735_cast1_fu_26884_p1() {
    tmp_735_cast1_fu_26884_p1 = esl_sext<15,8>(tmp_734_fu_26879_p2.read());
}

void ShuffleNetV2::thread_tmp_735_cast_fu_21855_p1() {
    tmp_735_cast_fu_21855_p1 = esl_sext<32,7>(tmp_544_reg_34859.read());
}

void ShuffleNetV2::thread_tmp_735_fu_10404_p2() {
    tmp_735_fu_10404_p2 = (!p_shl353_cast_fu_10388_p1.read().is_01() || !p_shl354_cast_fu_10400_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl353_cast_fu_10388_p1.read()) - sc_biguint<14>(p_shl354_cast_fu_10400_p1.read()));
}

void ShuffleNetV2::thread_tmp_736_fu_26555_p2() {
    tmp_736_fu_26555_p2 = (!p_shl234_cast_fu_26539_p1.read().is_01() || !p_shl235_cast_fu_26551_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl234_cast_fu_26539_p1.read()) - sc_biguint<8>(p_shl235_cast_fu_26551_p1.read()));
}

void ShuffleNetV2::thread_tmp_737_fu_26571_p2() {
    tmp_737_fu_26571_p2 = (!co159_cast1_reg_36372.read().is_01() || !tmp71_fu_26565_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(co159_cast1_reg_36372.read()) + sc_biguint<10>(tmp71_fu_26565_p2.read()));
}

void ShuffleNetV2::thread_tmp_738_cast_fu_26581_p1() {
    tmp_738_cast_fu_26581_p1 = esl_zext<13,10>(tmp_737_reg_36429.read());
}

void ShuffleNetV2::thread_tmp_738_fu_10414_p3() {
    tmp_738_fu_10414_p3 = esl_concat<5,5>(co46_reg_3725.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_739_fu_26576_p2() {
    tmp_739_fu_26576_p2 = (!tmp_736_fu_26555_p2.read().is_01() || !co159_cast_reg_36367.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_736_fu_26555_p2.read()) + sc_biguint<8>(co159_cast_reg_36367.read()));
}

void ShuffleNetV2::thread_tmp_740_cast_fu_26632_p1() {
    tmp_740_cast_fu_26632_p1 = esl_zext<35,32>(tmp_977_cast_fu_26629_p1.read());
}

void ShuffleNetV2::thread_tmp_740_fu_10426_p3() {
    tmp_740_fu_10426_p3 = esl_concat<5,3>(co46_reg_3725.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_741_fu_27119_p2() {
    tmp_741_fu_27119_p2 = (!p_shl232_cast_fu_27103_p1.read().is_01() || !p_shl233_cast_fu_27115_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl232_cast_fu_27103_p1.read()) - sc_biguint<8>(p_shl233_cast_fu_27115_p1.read()));
}

void ShuffleNetV2::thread_tmp_742_cast_cast_fu_21630_p1() {
    tmp_742_cast_cast_fu_21630_p1 = esl_sext<10,8>(tmp_546_fu_21624_p2.read());
}

void ShuffleNetV2::thread_tmp_742_fu_27135_p2() {
    tmp_742_fu_27135_p2 = (!i167_cast1_reg_36577.read().is_01() || !tmp74_fu_27129_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(i167_cast1_reg_36577.read()) + sc_biguint<12>(tmp74_fu_27129_p2.read()));
}

void ShuffleNetV2::thread_tmp_743_fu_27145_p1() {
    tmp_743_fu_27145_p1 = esl_zext<64,12>(tmp_742_reg_36598.read());
}

void ShuffleNetV2::thread_tmp_744_fu_27140_p2() {
    tmp_744_fu_27140_p2 = (!tmp_741_fu_27119_p2.read().is_01() || !i167_cast_reg_36572.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_741_fu_27119_p2.read()) + sc_biguint<8>(i167_cast_reg_36572.read()));
}

void ShuffleNetV2::thread_tmp_745_fu_27152_p1() {
    tmp_745_fu_27152_p1 = esl_zext<64,32>(tmp_968_cast_fu_27149_p1.read());
}

void ShuffleNetV2::thread_tmp_746_fu_26932_p2() {
    tmp_746_fu_26932_p2 = (!p_shl236_cast_fu_26912_p1.read().is_01() || !p_shl237_cast_fu_26928_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl236_cast_fu_26912_p1.read()) - sc_biguint<10>(p_shl237_cast_fu_26928_p1.read()));
}

void ShuffleNetV2::thread_tmp_747_fu_26948_p2() {
    tmp_747_fu_26948_p2 = (!tmp73_fu_26942_p2.read().is_01() || !co161_cast181_cast_reg_36507.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp73_fu_26942_p2.read()) + sc_biguint<11>(co161_cast181_cast_reg_36507.read()));
}

void ShuffleNetV2::thread_tmp_748_fu_26963_p2() {
    tmp_748_fu_26963_p2 = (!p_shl237_cast1_fu_26924_p1.read().is_01() || !p_shl238_cast_fu_26959_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl237_cast1_fu_26924_p1.read()) - sc_biguint<8>(p_shl238_cast_fu_26959_p1.read()));
}

void ShuffleNetV2::thread_tmp_749_cast_fu_22181_p1() {
    tmp_749_cast_fu_22181_p1 = esl_sext<11,7>(tmp_553_fu_22175_p2.read());
}

void ShuffleNetV2::thread_tmp_749_fu_26969_p2() {
    tmp_749_fu_26969_p2 = (!tmp_748_fu_26963_p2.read().is_01() || !tmp_962_cast_reg_36525.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_748_fu_26963_p2.read()) + sc_biguint<8>(tmp_962_cast_reg_36525.read()));
}

void ShuffleNetV2::thread_tmp_750_fu_27296_p2() {
    tmp_750_fu_27296_p2 = (!co164_cast_fu_27280_p1.read().is_01() || !ap_const_lv8_60.is_01())? sc_lv<8>(): (sc_biguint<8>(co164_cast_fu_27280_p1.read()) + sc_biguint<8>(ap_const_lv8_60));
}

void ShuffleNetV2::thread_tmp_751_cast_fu_27215_p1() {
    tmp_751_cast_fu_27215_p1 = esl_zext<12,3>(h_105_fu_27209_p2.read());
}

void ShuffleNetV2::thread_tmp_751_fu_10438_p2() {
    tmp_751_fu_10438_p2 = (!p_shl351_cast_fu_10422_p1.read().is_01() || !p_shl352_cast_fu_10434_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl351_cast_fu_10422_p1.read()) - sc_biguint<11>(p_shl352_cast_fu_10434_p1.read()));
}

void ShuffleNetV2::thread_tmp_752_fu_27533_p2() {
    tmp_752_fu_27533_p2 = (!p_shl239_cast_fu_27519_p1.read().is_01() || !p_shl240_cast_fu_27529_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl239_cast_fu_27519_p1.read()) - sc_biguint<8>(p_shl240_cast_fu_27529_p1.read()));
}

void ShuffleNetV2::thread_tmp_753_cast1_fu_27382_p1() {
    tmp_753_cast1_fu_27382_p1 = esl_zext<12,3>(h_107_fu_27376_p2.read());
}

void ShuffleNetV2::thread_tmp_753_cast2_fu_27386_p1() {
    tmp_753_cast2_fu_27386_p1 = esl_zext<13,3>(h_107_fu_27376_p2.read());
}

void ShuffleNetV2::thread_tmp_753_cast_fu_22205_p1() {
    tmp_753_cast_fu_22205_p1 = esl_sext<32,7>(tmp_556_reg_34999.read());
}

void ShuffleNetV2::thread_tmp_753_fu_10257_p2() {
    tmp_753_fu_10257_p2 = (!tmp_179_cast_fu_10253_p1.read().is_01() || !tmp_723_reg_31161.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_179_cast_fu_10253_p1.read()) + sc_biguint<10>(tmp_723_reg_31161.read()));
}

void ShuffleNetV2::thread_tmp_754_fu_10282_p2() {
    tmp_754_fu_10282_p2 = (!p_shl349_cast_fu_10262_p3.read().is_01() || !p_shl350_cast_fu_10278_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl349_cast_fu_10262_p3.read()) + sc_biguint<14>(p_shl350_cast_fu_10278_p1.read()));
}

void ShuffleNetV2::thread_tmp_755_cast_fu_27266_p1() {
    tmp_755_cast_fu_27266_p1 = esl_zext<14,3>(w_104_fu_27260_p2.read());
}

void ShuffleNetV2::thread_tmp_755_fu_10288_p2() {
    tmp_755_fu_10288_p2 = (!tmp_179_cast1_fu_10249_p1.read().is_01() || !tmp_711_reg_31156.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_179_cast1_fu_10249_p1.read()) + sc_biguint<11>(tmp_711_reg_31156.read()));
}

void ShuffleNetV2::thread_tmp_756_cast_fu_27569_p1() {
    tmp_756_cast_fu_27569_p1 = esl_zext<19,5>(ci74_reg_6687.read());
}

void ShuffleNetV2::thread_tmp_756_fu_10313_p2() {
    tmp_756_fu_10313_p2 = (!p_shl347_cast_fu_10293_p3.read().is_01() || !p_shl348_cast_fu_10309_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl347_cast_fu_10293_p3.read()) + sc_biguint<15>(p_shl348_cast_fu_10309_p1.read()));
}

void ShuffleNetV2::thread_tmp_757_cast_fu_22273_p1() {
    tmp_757_cast_fu_22273_p1 = esl_zext<7,4>(p_lshr_f16_cast_fu_22263_p4.read());
}

void ShuffleNetV2::thread_tmp_757_fu_10145_p2() {
    tmp_757_fu_10145_p2 = (!tmp_730_reg_31125.read().is_01() || !tmp_180_cast_fu_10141_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_730_reg_31125.read()) + sc_biguint<15>(tmp_180_cast_fu_10141_p1.read()));
}

void ShuffleNetV2::thread_tmp_758_fu_27573_p2() {
    tmp_758_fu_27573_p2 = (!tmp_752_reg_36724.read().is_01() || !ci74_cast_fu_27553_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_752_reg_36724.read()) + sc_biguint<8>(ci74_cast_fu_27553_p1.read()));
}

void ShuffleNetV2::thread_tmp_759_cast_cast_fu_22553_p1() {
    tmp_759_cast_cast_fu_22553_p1 = esl_sext<10,7>(tmp_571_fu_22547_p2.read());
}

void ShuffleNetV2::thread_tmp_759_cast_fu_27578_p1() {
    tmp_759_cast_fu_27578_p1 = esl_sext<15,8>(tmp_758_fu_27573_p2.read());
}

void ShuffleNetV2::thread_tmp_759_fu_10464_p2() {
    tmp_759_fu_10464_p2 = (!tmp_1040_cast1_reg_31210.read().is_01() || !tmp_184_cast_fu_10460_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(tmp_1040_cast1_reg_31210.read()) + sc_biguint<15>(tmp_184_cast_fu_10460_p1.read()));
}

void ShuffleNetV2::thread_tmp_760_cast1_fu_27464_p1() {
    tmp_760_cast1_fu_27464_p1 = esl_zext<13,3>(w_106_fu_27458_p2.read());
}

void ShuffleNetV2::thread_tmp_760_cast_fu_27468_p1() {
    tmp_760_cast_fu_27468_p1 = esl_zext<14,3>(w_106_fu_27458_p2.read());
}

void ShuffleNetV2::thread_tmp_760_fu_10474_p2() {
    tmp_760_fu_10474_p2 = (!tmp_751_reg_31215.read().is_01() || !tmp_184_cast1_fu_10456_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_751_reg_31215.read()) + sc_biguint<11>(tmp_184_cast1_fu_10456_p1.read()));
}

void ShuffleNetV2::thread_tmp_761_cast_fu_22573_p1() {
    tmp_761_cast_fu_22573_p1 = esl_sext<11,10>(tmp_572_reg_35100.read());
}

void ShuffleNetV2::thread_tmp_761_fu_27801_p2() {
    tmp_761_fu_27801_p2 = (!p_shl241_cast_fu_27785_p1.read().is_01() || !p_shl242_cast_fu_27797_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl241_cast_fu_27785_p1.read()) - sc_biguint<8>(p_shl242_cast_fu_27797_p1.read()));
}

void ShuffleNetV2::thread_tmp_762_fu_27817_p2() {
    tmp_762_fu_27817_p2 = (!i173_cast1_reg_36781.read().is_01() || !tmp76_fu_27811_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(i173_cast1_reg_36781.read()) + sc_biguint<12>(tmp76_fu_27811_p2.read()));
}

void ShuffleNetV2::thread_tmp_763_cast_fu_22581_p1() {
    tmp_763_cast_fu_22581_p1 = esl_sext<32,7>(tmp_574_reg_35105.read());
}

void ShuffleNetV2::thread_tmp_763_fu_27827_p1() {
    tmp_763_fu_27827_p1 = esl_zext<64,12>(tmp_762_reg_36802.read());
}

void ShuffleNetV2::thread_tmp_764_fu_27822_p2() {
    tmp_764_fu_27822_p2 = (!tmp_761_fu_27801_p2.read().is_01() || !i173_cast_reg_36776.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_761_fu_27801_p2.read()) + sc_biguint<8>(i173_cast_reg_36776.read()));
}

void ShuffleNetV2::thread_tmp_765_fu_27834_p1() {
    tmp_765_fu_27834_p1 = esl_zext<64,32>(tmp_1000_cast_fu_27831_p1.read());
}

void ShuffleNetV2::thread_tmp_766_fu_27626_p2() {
    tmp_766_fu_27626_p2 = (!p_shl243_cast_fu_27606_p1.read().is_01() || !p_shl244_cast_fu_27622_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl243_cast_fu_27606_p1.read()) - sc_biguint<10>(p_shl244_cast_fu_27622_p1.read()));
}

void ShuffleNetV2::thread_tmp_767_fu_27642_p2() {
    tmp_767_fu_27642_p2 = (!tmp75_fu_27636_p2.read().is_01() || !co166_cast_reg_36711.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp75_fu_27636_p2.read()) + sc_biguint<13>(co166_cast_reg_36711.read()));
}

void ShuffleNetV2::thread_tmp_768_cast_fu_21969_p1() {
    tmp_768_cast_fu_21969_p1 = esl_sext<10,7>(tmp_564_fu_21963_p2.read());
}

void ShuffleNetV2::thread_tmp_768_fu_27657_p2() {
    tmp_768_fu_27657_p2 = (!p_shl244_cast1_fu_27618_p1.read().is_01() || !p_shl245_cast_fu_27653_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl244_cast1_fu_27618_p1.read()) - sc_biguint<8>(p_shl245_cast_fu_27653_p1.read()));
}

void ShuffleNetV2::thread_tmp_769_fu_27663_p2() {
    tmp_769_fu_27663_p2 = (!tmp_768_fu_27657_p2.read().is_01() || !tmp_992_cast_reg_36729.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_768_fu_27657_p2.read()) + sc_biguint<8>(tmp_992_cast_reg_36729.read()));
}

void ShuffleNetV2::thread_tmp_770_cast1_fu_27871_p1() {
    tmp_770_cast1_fu_27871_p1 = esl_zext<36,2>(w107_reg_6742.read());
}

void ShuffleNetV2::thread_tmp_770_cast_fu_27875_p1() {
    tmp_770_cast_fu_27875_p1 = esl_zext<14,2>(w107_reg_6742.read());
}

void ShuffleNetV2::thread_tmp_770_fu_10339_p2() {
    tmp_770_fu_10339_p2 = (!tmp_754_reg_31174.read().is_01() || !tmp_185_cast_fu_10335_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_754_reg_31174.read()) + sc_biguint<14>(tmp_185_cast_fu_10335_p1.read()));
}

void ShuffleNetV2::thread_tmp_771_fu_28239_p2() {
    tmp_771_fu_28239_p2 = (!p_shl248_cast_fu_28225_p1.read().is_01() || !p_shl249_cast_fu_28235_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl248_cast_fu_28225_p1.read()) - sc_biguint<8>(p_shl249_cast_fu_28235_p1.read()));
}

void ShuffleNetV2::thread_tmp_772_cast_fu_22045_p1() {
    tmp_772_cast_fu_22045_p1 = esl_sext<32,7>(tmp_569_reg_34937.read());
}

void ShuffleNetV2::thread_tmp_772_fu_28159_p2() {
    tmp_772_fu_28159_p2 = (!p_shl246_cast_fu_28143_p1.read().is_01() || !p_shl247_cast_fu_28155_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl246_cast_fu_28143_p1.read()) - sc_biguint<8>(p_shl247_cast_fu_28155_p1.read()));
}

void ShuffleNetV2::thread_tmp_773_fu_28175_p2() {
    tmp_773_fu_28175_p2 = (!i177_cast1_reg_36921.read().is_01() || !tmp78_fu_28169_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(i177_cast1_reg_36921.read()) + sc_biguint<12>(tmp78_fu_28169_p2.read()));
}

void ShuffleNetV2::thread_tmp_774_fu_28185_p1() {
    tmp_774_fu_28185_p1 = esl_zext<64,12>(tmp_773_reg_36942.read());
}

void ShuffleNetV2::thread_tmp_775_cast_cast_fu_22352_p1() {
    tmp_775_cast_cast_fu_22352_p1 = esl_sext<10,8>(tmp_576_fu_22346_p2.read());
}

void ShuffleNetV2::thread_tmp_775_fu_10344_p2() {
    tmp_775_fu_10344_p2 = (!tmp_756_reg_31179.read().is_01() || !tmp_185_cast1_fu_10331_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_756_reg_31179.read()) + sc_biguint<15>(tmp_185_cast1_fu_10331_p1.read()));
}

void ShuffleNetV2::thread_tmp_776_fu_10541_p4() {
    tmp_776_fu_10541_p4 = esl_concat<6,2>(esl_concat<1,5>(ap_const_lv1_1, co48_reg_3759.read()), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_777_fu_28180_p2() {
    tmp_777_fu_28180_p2 = (!tmp_772_fu_28159_p2.read().is_01() || !i177_cast_reg_36916.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_772_fu_28159_p2.read()) + sc_biguint<8>(i177_cast_reg_36916.read()));
}

void ShuffleNetV2::thread_tmp_778_fu_28192_p1() {
    tmp_778_fu_28192_p1 = esl_zext<64,32>(tmp_1018_cast_fu_28189_p1.read());
}

void ShuffleNetV2::thread_tmp_779_cast1_fu_27891_p1() {
    tmp_779_cast1_fu_27891_p1 = esl_zext<11,2>(h108_reg_6753.read());
}

void ShuffleNetV2::thread_tmp_779_cast_fu_27895_p1() {
    tmp_779_cast_fu_27895_p1 = esl_zext<15,2>(h108_reg_6753.read());
}

void ShuffleNetV2::thread_tmp_779_fu_10551_p1() {
    tmp_779_fu_10551_p1 = esl_sext<9,8>(tmp_776_fu_10541_p4.read());
}

void ShuffleNetV2::thread_tmp_780_cast_fu_28275_p1() {
    tmp_780_cast_fu_28275_p1 = esl_zext<19,5>(ci76_reg_6808.read());
}

void ShuffleNetV2::thread_tmp_780_fu_10559_p2() {
    tmp_780_fu_10559_p2 = (!p_shl356_cast_fu_10555_p1.read().is_01() || !tmp_187_cast_fu_10537_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl356_cast_fu_10555_p1.read()) - sc_biguint<10>(tmp_187_cast_fu_10537_p1.read()));
}

void ShuffleNetV2::thread_tmp_781_fu_28279_p2() {
    tmp_781_fu_28279_p2 = (!tmp_771_reg_36970.read().is_01() || !ci76_cast_fu_28259_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_771_reg_36970.read()) + sc_biguint<8>(ci76_cast_fu_28259_p1.read()));
}

void ShuffleNetV2::thread_tmp_782_cast_fu_28284_p1() {
    tmp_782_cast_fu_28284_p1 = esl_sext<15,8>(tmp_781_fu_28279_p2.read());
}

void ShuffleNetV2::thread_tmp_782_fu_10573_p3() {
    tmp_782_fu_10573_p3 = esl_concat<5,2>(co48_reg_3759.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_783_fu_27939_p2() {
    tmp_783_fu_27939_p2 = (!p_shl252_cast_fu_27923_p1.read().is_01() || !p_shl253_cast_fu_27935_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl252_cast_fu_27923_p1.read()) - sc_biguint<8>(p_shl253_cast_fu_27935_p1.read()));
}

void ShuffleNetV2::thread_tmp_784_fu_10585_p2() {
    tmp_784_fu_10585_p2 = (!p_shl355_cast_fu_10581_p1.read().is_01() || !tmp_188_cast_fu_10569_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl355_cast_fu_10581_p1.read()) - sc_biguint<8>(tmp_188_cast_fu_10569_p1.read()));
}

void ShuffleNetV2::thread_tmp_785_fu_27955_p2() {
    tmp_785_fu_27955_p2 = (!co169_cast152_cast_reg_36822.read().is_01() || !tmp77_fu_27949_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(co169_cast152_cast_reg_36822.read()) + sc_biguint<9>(tmp77_fu_27949_p2.read()));
}

void ShuffleNetV2::thread_tmp_786_cast_fu_27968_p1() {
    tmp_786_cast_fu_27968_p1 = esl_zext<13,10>(tmp_1035_cast_fu_27965_p1.read());
}

void ShuffleNetV2::thread_tmp_786_fu_10615_p2() {
    tmp_786_fu_10615_p2 = (!tmp_1059_cast_reg_31259.read().is_01() || !tmp_192_cast_fu_10611_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(tmp_1059_cast_reg_31259.read()) + sc_biguint<11>(tmp_192_cast_fu_10611_p1.read()));
}

void ShuffleNetV2::thread_tmp_787_cast1_fu_8360_p1() {
    tmp_787_cast1_fu_8360_p1 = esl_sext<14,13>(tmp_441_fu_8354_p2.read());
}

void ShuffleNetV2::thread_tmp_787_cast_fu_22979_p1() {
    tmp_787_cast_fu_22979_p1 = esl_zext<7,4>(p_lshr_f17_cast_fu_22969_p4.read());
}

void ShuffleNetV2::thread_tmp_787_fu_10636_p2() {
    tmp_787_fu_10636_p2 = (!p_shl358_cast_fu_10632_p1.read().is_01() || !tmp_1062_cast_fu_10620_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_shl358_cast_fu_10632_p1.read()) - sc_bigint<15>(tmp_1062_cast_fu_10620_p1.read()));
}

void ShuffleNetV2::thread_tmp_788_fu_27960_p2() {
    tmp_788_fu_27960_p2 = (!tmp_783_fu_27939_p2.read().is_01() || !co169_cast_reg_36817.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_783_fu_27939_p2.read()) + sc_biguint<8>(co169_cast_reg_36817.read()));
}

void ShuffleNetV2::thread_tmp_789_cast_fu_28032_p1() {
    tmp_789_cast_fu_28032_p1 = esl_zext<35,32>(tmp_1037_cast_fu_28029_p1.read());
}

void ShuffleNetV2::thread_tmp_789_fu_10642_p2() {
    tmp_789_fu_10642_p2 = (!tmp_1061_cast_reg_31264.read().is_01() || !tmp_192_cast1_fu_10607_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_1061_cast_reg_31264.read()) + sc_biguint<9>(tmp_192_cast1_fu_10607_p1.read()));
}

void ShuffleNetV2::thread_tmp_790_fu_28507_p2() {
    tmp_790_fu_28507_p2 = (!p_shl250_cast_fu_28491_p1.read().is_01() || !p_shl251_cast_fu_28503_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl250_cast_fu_28491_p1.read()) - sc_biguint<8>(p_shl251_cast_fu_28503_p1.read()));
}

void ShuffleNetV2::thread_tmp_791_cast_cast_fu_23259_p1() {
    tmp_791_cast_cast_fu_23259_p1 = esl_sext<10,7>(tmp_591_fu_23253_p2.read());
}

void ShuffleNetV2::thread_tmp_791_fu_28523_p2() {
    tmp_791_fu_28523_p2 = (!i179_cast1_reg_37027.read().is_01() || !tmp80_fu_28517_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(i179_cast1_reg_37027.read()) + sc_biguint<12>(tmp80_fu_28517_p2.read()));
}

void ShuffleNetV2::thread_tmp_792_fu_28533_p1() {
    tmp_792_fu_28533_p1 = esl_zext<64,12>(tmp_791_reg_37048.read());
}

void ShuffleNetV2::thread_tmp_793_cast_fu_23279_p1() {
    tmp_793_cast_fu_23279_p1 = esl_sext<11,10>(tmp_592_reg_35304.read());
}

void ShuffleNetV2::thread_tmp_793_fu_28528_p2() {
    tmp_793_fu_28528_p2 = (!tmp_790_fu_28507_p2.read().is_01() || !i179_cast_reg_37022.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_790_fu_28507_p2.read()) + sc_biguint<8>(i179_cast_reg_37022.read()));
}

void ShuffleNetV2::thread_tmp_794_fu_28540_p1() {
    tmp_794_fu_28540_p1 = esl_zext<64,32>(tmp_1028_cast_fu_28537_p1.read());
}

void ShuffleNetV2::thread_tmp_795_cast_fu_23287_p1() {
    tmp_795_cast_fu_23287_p1 = esl_sext<32,7>(tmp_594_reg_35309.read());
}

void ShuffleNetV2::thread_tmp_795_fu_28332_p2() {
    tmp_795_fu_28332_p2 = (!p_shl254_cast_fu_28312_p1.read().is_01() || !p_shl255_cast_fu_28328_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl254_cast_fu_28312_p1.read()) - sc_biguint<10>(p_shl255_cast_fu_28328_p1.read()));
}

void ShuffleNetV2::thread_tmp_796_fu_28348_p2() {
    tmp_796_fu_28348_p2 = (!tmp79_fu_28342_p2.read().is_01() || !co171_cast_reg_36957.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp79_fu_28342_p2.read()) + sc_biguint<13>(co171_cast_reg_36957.read()));
}

void ShuffleNetV2::thread_tmp_797_fu_28363_p2() {
    tmp_797_fu_28363_p2 = (!p_shl255_cast1_fu_28324_p1.read().is_01() || !p_shl256_cast_fu_28359_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl255_cast1_fu_28324_p1.read()) - sc_biguint<8>(p_shl256_cast_fu_28359_p1.read()));
}

void ShuffleNetV2::thread_tmp_798_fu_28369_p2() {
    tmp_798_fu_28369_p2 = (!tmp_797_fu_28363_p2.read().is_01() || !tmp_1022_cast_reg_36975.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_797_fu_28363_p2.read()) + sc_biguint<8>(tmp_1022_cast_reg_36975.read()));
}

void ShuffleNetV2::thread_tmp_799_fu_28684_p2() {
    tmp_799_fu_28684_p2 = (!co174_cast_fu_28668_p1.read().is_01() || !ap_const_lv8_60.is_01())? sc_lv<8>(): (sc_biguint<8>(co174_cast_fu_28668_p1.read()) + sc_biguint<8>(ap_const_lv8_60));
}

void ShuffleNetV2::thread_tmp_800_cast_fu_28603_p1() {
    tmp_800_cast_fu_28603_p1 = esl_zext<12,3>(h_111_fu_28597_p2.read());
}

void ShuffleNetV2::thread_tmp_800_fu_10653_p2() {
    tmp_800_fu_10653_p2 = (!tmp_164_fu_10647_p2.read().is_01() || !tmp_789_fu_10642_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_164_fu_10647_p2.read()) - sc_biguint<9>(tmp_789_fu_10642_p2.read()));
}

void ShuffleNetV2::thread_tmp_801_fu_10742_p4() {
    tmp_801_fu_10742_p4 = esl_concat<7,5>(esl_concat<2,5>(ap_const_lv2_2, co50_reg_3804.read()), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_802_cast_cast_fu_23058_p1() {
    tmp_802_cast_cast_fu_23058_p1 = esl_sext<9,8>(tmp_596_fu_23052_p2.read());
}

void ShuffleNetV2::thread_tmp_802_fu_28921_p2() {
    tmp_802_fu_28921_p2 = (!p_shl257_cast_fu_28907_p1.read().is_01() || !p_shl258_cast_fu_28917_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl257_cast_fu_28907_p1.read()) - sc_biguint<8>(p_shl258_cast_fu_28917_p1.read()));
}

void ShuffleNetV2::thread_tmp_803_cast1_fu_28770_p1() {
    tmp_803_cast1_fu_28770_p1 = esl_zext<13,3>(h_113_fu_28764_p2.read());
}

void ShuffleNetV2::thread_tmp_803_cast_fu_28774_p1() {
    tmp_803_cast_fu_28774_p1 = esl_zext<12,3>(h_113_fu_28764_p2.read());
}

void ShuffleNetV2::thread_tmp_803_fu_10752_p1() {
    tmp_803_fu_10752_p1 = esl_sext<13,12>(tmp_801_fu_10742_p4.read());
}

void ShuffleNetV2::thread_tmp_804_fu_10760_p4() {
    tmp_804_fu_10760_p4 = esl_concat<7,3>(esl_concat<2,5>(ap_const_lv2_2, co50_reg_3804.read()), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_805_cast_fu_28654_p1() {
    tmp_805_cast_fu_28654_p1 = esl_zext<14,3>(w_110_fu_28648_p2.read());
}

void ShuffleNetV2::thread_tmp_805_fu_10770_p1() {
    tmp_805_fu_10770_p1 = esl_sext<11,10>(tmp_804_fu_10760_p4.read());
}

void ShuffleNetV2::thread_tmp_806_cast_fu_28957_p1() {
    tmp_806_cast_fu_28957_p1 = esl_zext<19,5>(ci78_reg_6929.read());
}

void ShuffleNetV2::thread_tmp_806_fu_10778_p2() {
    tmp_806_fu_10778_p2 = (!p_shl361_cast_fu_10756_p1.read().is_01() || !p_shl362_cast_fu_10774_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl361_cast_fu_10756_p1.read()) - sc_biguint<14>(p_shl362_cast_fu_10774_p1.read()));
}

void ShuffleNetV2::thread_tmp_807_fu_28961_p2() {
    tmp_807_fu_28961_p2 = (!tmp_802_reg_37174.read().is_01() || !ci78_cast_fu_28941_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_802_reg_37174.read()) + sc_biguint<8>(ci78_cast_fu_28941_p1.read()));
}

void ShuffleNetV2::thread_tmp_808_cast_fu_28966_p1() {
    tmp_808_cast_fu_28966_p1 = esl_sext<15,8>(tmp_807_fu_28961_p2.read());
}

void ShuffleNetV2::thread_tmp_808_fu_10788_p3() {
    tmp_808_fu_10788_p3 = esl_concat<5,5>(co50_reg_3804.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_809_cast1_fu_28852_p1() {
    tmp_809_cast1_fu_28852_p1 = esl_zext<14,3>(w_112_fu_28846_p2.read());
}

void ShuffleNetV2::thread_tmp_809_cast_cast_fu_23605_p1() {
    tmp_809_cast_cast_fu_23605_p1 = esl_sext<10,7>(tmp_603_fu_23599_p2.read());
}

void ShuffleNetV2::thread_tmp_809_cast_fu_28856_p1() {
    tmp_809_cast_fu_28856_p1 = esl_zext<13,3>(w_112_fu_28846_p2.read());
}

void ShuffleNetV2::thread_tmp_809_fu_10800_p3() {
    tmp_809_fu_10800_p3 = esl_concat<5,3>(co50_reg_3804.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_810_fu_29189_p2() {
    tmp_810_fu_29189_p2 = (!p_shl259_cast_fu_29173_p1.read().is_01() || !p_shl260_cast_fu_29185_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl259_cast_fu_29173_p1.read()) - sc_biguint<8>(p_shl260_cast_fu_29185_p1.read()));
}

void ShuffleNetV2::thread_tmp_811_cast_fu_23625_p1() {
    tmp_811_cast_fu_23625_p1 = esl_sext<11,10>(tmp_604_reg_35444.read());
}

void ShuffleNetV2::thread_tmp_811_fu_29205_p2() {
    tmp_811_fu_29205_p2 = (!i185_cast1_reg_37231.read().is_01() || !tmp82_fu_29199_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(i185_cast1_reg_37231.read()) + sc_biguint<12>(tmp82_fu_29199_p2.read()));
}

void ShuffleNetV2::thread_tmp_812_fu_29215_p1() {
    tmp_812_fu_29215_p1 = esl_zext<64,12>(tmp_811_reg_37252.read());
}

void ShuffleNetV2::thread_tmp_813_cast_fu_23633_p1() {
    tmp_813_cast_fu_23633_p1 = esl_sext<32,7>(tmp_606_reg_35449.read());
}

void ShuffleNetV2::thread_tmp_813_fu_29210_p2() {
    tmp_813_fu_29210_p2 = (!tmp_810_fu_29189_p2.read().is_01() || !i185_cast_reg_37226.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_810_fu_29189_p2.read()) + sc_biguint<8>(i185_cast_reg_37226.read()));
}

void ShuffleNetV2::thread_tmp_814_fu_29222_p1() {
    tmp_814_fu_29222_p1 = esl_zext<64,32>(tmp_1060_cast_fu_29219_p1.read());
}

void ShuffleNetV2::thread_tmp_815_fu_29014_p2() {
    tmp_815_fu_29014_p2 = (!p_shl261_cast_fu_28994_p1.read().is_01() || !p_shl262_cast_fu_29010_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl261_cast_fu_28994_p1.read()) - sc_biguint<10>(p_shl262_cast_fu_29010_p1.read()));
}

void ShuffleNetV2::thread_tmp_816_fu_29030_p2() {
    tmp_816_fu_29030_p2 = (!tmp81_fu_29024_p2.read().is_01() || !co176_cast_reg_37161.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp81_fu_29024_p2.read()) + sc_biguint<13>(co176_cast_reg_37161.read()));
}

void ShuffleNetV2::thread_tmp_817_cast_fu_23701_p1() {
    tmp_817_cast_fu_23701_p1 = esl_zext<7,4>(p_lshr_f18_cast_fu_23691_p4.read());
}

void ShuffleNetV2::thread_tmp_817_fu_29045_p2() {
    tmp_817_fu_29045_p2 = (!p_shl262_cast1_fu_29006_p1.read().is_01() || !p_shl263_cast_fu_29041_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl262_cast1_fu_29006_p1.read()) - sc_biguint<8>(p_shl263_cast_fu_29041_p1.read()));
}

void ShuffleNetV2::thread_tmp_818_fu_29051_p2() {
    tmp_818_fu_29051_p2 = (!tmp_817_fu_29045_p2.read().is_01() || !tmp_1052_cast_reg_37179.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_817_fu_29045_p2.read()) + sc_biguint<8>(tmp_1052_cast_reg_37179.read()));
}

void ShuffleNetV2::thread_tmp_819_cast1_fu_29259_p1() {
    tmp_819_cast1_fu_29259_p1 = esl_zext<36,2>(w113_reg_6984.read());
}

void ShuffleNetV2::thread_tmp_819_cast_cast_fu_23981_p1() {
    tmp_819_cast_cast_fu_23981_p1 = esl_sext<10,7>(tmp_621_fu_23975_p2.read());
}

void ShuffleNetV2::thread_tmp_819_cast_fu_29263_p1() {
    tmp_819_cast_fu_29263_p1 = esl_zext<15,2>(w113_reg_6984.read());
}

void ShuffleNetV2::thread_tmp_819_fu_10812_p2() {
    tmp_819_fu_10812_p2 = (!p_shl359_cast_fu_10796_p1.read().is_01() || !p_shl360_cast_fu_10808_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl359_cast_fu_10796_p1.read()) - sc_biguint<11>(p_shl360_cast_fu_10808_p1.read()));
}

void ShuffleNetV2::thread_tmp_820_fu_29609_p2() {
    tmp_820_fu_29609_p2 = (!p_shl266_cast_fu_29595_p1.read().is_01() || !p_shl267_cast_fu_29605_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl266_cast_fu_29595_p1.read()) - sc_biguint<8>(p_shl267_cast_fu_29605_p1.read()));
}

void ShuffleNetV2::thread_tmp_821_cast_fu_24001_p1() {
    tmp_821_cast_fu_24001_p1 = esl_sext<11,10>(tmp_622_reg_35550.read());
}

void ShuffleNetV2::thread_tmp_821_fu_10679_p2() {
    tmp_821_fu_10679_p2 = (!tmp_787_reg_31277.read().is_01() || !tmp_193_cast_fu_10675_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_787_reg_31277.read()) + sc_biguint<15>(tmp_193_cast_fu_10675_p1.read()));
}

void ShuffleNetV2::thread_tmp_822_fu_29529_p2() {
    tmp_822_fu_29529_p2 = (!p_shl264_cast_fu_29513_p1.read().is_01() || !p_shl265_cast_fu_29525_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl264_cast_fu_29513_p1.read()) - sc_biguint<8>(p_shl265_cast_fu_29525_p1.read()));
}

void ShuffleNetV2::thread_tmp_823_cast_fu_24009_p1() {
    tmp_823_cast_fu_24009_p1 = esl_sext<32,7>(tmp_624_reg_35555.read());
}

void ShuffleNetV2::thread_tmp_823_fu_29545_p2() {
    tmp_823_fu_29545_p2 = (!i189_cast1_reg_37371.read().is_01() || !tmp84_fu_29539_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(i189_cast1_reg_37371.read()) + sc_biguint<12>(tmp84_fu_29539_p2.read()));
}

void ShuffleNetV2::thread_tmp_824_fu_29555_p1() {
    tmp_824_fu_29555_p1 = esl_zext<64,12>(tmp_823_reg_37392.read());
}

void ShuffleNetV2::thread_tmp_825_fu_29550_p2() {
    tmp_825_fu_29550_p2 = (!tmp_822_fu_29529_p2.read().is_01() || !i189_cast_reg_37366.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_822_fu_29529_p2.read()) + sc_biguint<8>(i189_cast_reg_37366.read()));
}

void ShuffleNetV2::thread_tmp_826_fu_29562_p1() {
    tmp_826_fu_29562_p1 = esl_zext<64,32>(tmp_1078_cast_fu_29559_p1.read());
}

void ShuffleNetV2::thread_tmp_827_cast1_fu_29279_p1() {
    tmp_827_cast1_fu_29279_p1 = esl_zext<11,2>(h114_reg_6995.read());
}

void ShuffleNetV2::thread_tmp_827_cast_fu_29283_p1() {
    tmp_827_cast_fu_29283_p1 = esl_zext<15,2>(h114_reg_6995.read());
}

void ShuffleNetV2::thread_tmp_827_fu_10689_p2() {
    tmp_827_fu_10689_p2 = (!tmp_800_reg_31282.read().is_01() || !tmp_193_cast1_fu_10671_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_800_reg_31282.read()) + sc_biguint<9>(tmp_193_cast1_fu_10671_p1.read()));
}

void ShuffleNetV2::thread_tmp_828_cast1_fu_29645_p1() {
    tmp_828_cast1_fu_29645_p1 = esl_zext<19,5>(ci80_reg_7050.read());
}

void ShuffleNetV2::thread_tmp_828_cast_fu_23401_p1() {
    tmp_828_cast_fu_23401_p1 = esl_sext<10,7>(tmp_614_fu_23395_p2.read());
}

void ShuffleNetV2::thread_tmp_828_fu_10838_p2() {
    tmp_828_fu_10838_p2 = (!tmp_1072_cast_reg_31326.read().is_01() || !tmp_197_cast_fu_10834_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(tmp_1072_cast_reg_31326.read()) + sc_biguint<15>(tmp_197_cast_fu_10834_p1.read()));
}

void ShuffleNetV2::thread_tmp_829_cast_fu_8260_p1() {
    tmp_829_cast_fu_8260_p1 = esl_zext<64,15>(tmp_460_fu_8255_p2.read());
}

void ShuffleNetV2::thread_tmp_829_fu_10848_p2() {
    tmp_829_fu_10848_p2 = (!tmp_819_reg_31331.read().is_01() || !tmp_197_cast1_fu_10830_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_819_reg_31331.read()) + sc_biguint<11>(tmp_197_cast1_fu_10830_p1.read()));
}

void ShuffleNetV2::thread_tmp_830_fu_29649_p2() {
    tmp_830_fu_29649_p2 = (!tmp_820_reg_37420.read().is_01() || !ci80_cast_fu_29629_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_820_reg_37420.read()) + sc_biguint<8>(ci80_cast_fu_29629_p1.read()));
}

void ShuffleNetV2::thread_tmp_831_cast_fu_29654_p1() {
    tmp_831_cast_fu_29654_p1 = esl_sext<15,8>(tmp_830_fu_29649_p2.read());
}

void ShuffleNetV2::thread_tmp_831_fu_10901_p3() {
    tmp_831_fu_10901_p3 = esl_concat<5,4>(co52_reg_3838.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_832_cast1_fu_8270_p1() {
    tmp_832_cast1_fu_8270_p1 = esl_zext<64,9>(tmp_462_reg_30555.read());
}

void ShuffleNetV2::thread_tmp_832_cast_fu_23469_p1() {
    tmp_832_cast_fu_23469_p1 = esl_sext<32,7>(tmp_619_reg_35387.read());
}

void ShuffleNetV2::thread_tmp_832_fu_10913_p3() {
    tmp_832_fu_10913_p3 = esl_concat<5,1>(co52_reg_3838.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_833_fu_29327_p2() {
    tmp_833_fu_29327_p2 = (!p_shl270_cast_fu_29311_p1.read().is_01() || !p_shl271_cast_fu_29323_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl270_cast_fu_29311_p1.read()) - sc_biguint<8>(p_shl271_cast_fu_29323_p1.read()));
}

void ShuffleNetV2::thread_tmp_834_cast_fu_8419_p1() {
    tmp_834_cast_fu_8419_p1 = esl_sext<64,14>(tmp_463_fu_8414_p2.read());
}

void ShuffleNetV2::thread_tmp_834_fu_10925_p2() {
    tmp_834_fu_10925_p2 = (!p_shl364_cast_fu_10921_p1.read().is_01() || !p_shl363_cast_fu_10909_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl364_cast_fu_10921_p1.read()) + sc_biguint<10>(p_shl363_cast_fu_10909_p1.read()));
}

void ShuffleNetV2::thread_tmp_835_cast_cast_fu_23780_p1() {
    tmp_835_cast_cast_fu_23780_p1 = esl_sext<9,8>(tmp_626_fu_23774_p2.read());
}

void ShuffleNetV2::thread_tmp_835_cast_fu_8429_p1() {
    tmp_835_cast_fu_8429_p1 = esl_sext<64,11>(tmp_465_reg_30604.read());
}

void ShuffleNetV2::thread_tmp_835_fu_10947_p2() {
    tmp_835_fu_10947_p2 = (!tmp_199_cast_fu_10943_p1.read().is_01() || !tmp_834_reg_31375.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_199_cast_fu_10943_p1.read()) + sc_biguint<10>(tmp_834_reg_31375.read()));
}

void ShuffleNetV2::thread_tmp_836_fu_29343_p2() {
    tmp_836_fu_29343_p2 = (!co179_cast1_reg_37272.read().is_01() || !tmp83_fu_29337_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(co179_cast1_reg_37272.read()) + sc_biguint<11>(tmp83_fu_29337_p2.read()));
}

void ShuffleNetV2::thread_tmp_837_cast_fu_29353_p1() {
    tmp_837_cast_fu_29353_p1 = esl_zext<14,11>(tmp_836_reg_37329.read());
}

void ShuffleNetV2::thread_tmp_837_fu_10976_p2() {
    tmp_837_fu_10976_p2 = (!p_shl365_cast_fu_10960_p1.read().is_01() || !p_shl366_cast_fu_10972_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl365_cast_fu_10960_p1.read()) + sc_biguint<15>(p_shl366_cast_fu_10972_p1.read()));
}

void ShuffleNetV2::thread_tmp_838_fu_29348_p2() {
    tmp_838_fu_29348_p2 = (!tmp_833_fu_29327_p2.read().is_01() || !co179_cast_reg_37267.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_833_fu_29327_p2.read()) + sc_biguint<8>(co179_cast_reg_37267.read()));
}

void ShuffleNetV2::thread_tmp_839_cast_fu_29402_p1() {
    tmp_839_cast_fu_29402_p1 = esl_zext<35,32>(tmp_1097_cast_fu_29399_p1.read());
}

void ShuffleNetV2::thread_tmp_839_fu_10998_p2() {
    tmp_839_fu_10998_p2 = (!tmp_837_reg_31388.read().is_01() || !tmp_203_cast_fu_10994_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_837_reg_31388.read()) + sc_biguint<15>(tmp_203_cast_fu_10994_p1.read()));
}

void ShuffleNetV2::thread_tmp_840_fu_29877_p2() {
    tmp_840_fu_29877_p2 = (!p_shl268_cast_fu_29861_p1.read().is_01() || !p_shl269_cast_fu_29873_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl268_cast_fu_29861_p1.read()) - sc_biguint<8>(p_shl269_cast_fu_29873_p1.read()));
}

void ShuffleNetV2::thread_tmp_841_fu_29893_p2() {
    tmp_841_fu_29893_p2 = (!i191_cast1_reg_37477.read().is_01() || !tmp86_fu_29887_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(i191_cast1_reg_37477.read()) + sc_biguint<12>(tmp86_fu_29887_p2.read()));
}

void ShuffleNetV2::thread_tmp_842_fu_29903_p1() {
    tmp_842_fu_29903_p1 = esl_zext<64,12>(tmp_841_reg_37498.read());
}

void ShuffleNetV2::thread_tmp_843_cast_fu_24194_p1() {
    tmp_843_cast_fu_24194_p1 = esl_zext<8,3>(p_lshr_f19_cast_fu_24184_p4.read());
}

void ShuffleNetV2::thread_tmp_843_fu_29898_p2() {
    tmp_843_fu_29898_p2 = (!tmp_840_fu_29877_p2.read().is_01() || !i191_cast_reg_37472.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_840_fu_29877_p2.read()) + sc_biguint<8>(i191_cast_reg_37472.read()));
}

void ShuffleNetV2::thread_tmp_844_fu_29910_p1() {
    tmp_844_fu_29910_p1 = esl_zext<64,32>(tmp_1088_cast_fu_29907_p1.read());
}

void ShuffleNetV2::thread_tmp_845_fu_29702_p2() {
    tmp_845_fu_29702_p2 = (!p_shl272_cast_fu_29682_p1.read().is_01() || !p_shl273_cast_fu_29698_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl272_cast_fu_29682_p1.read()) - sc_biguint<10>(p_shl273_cast_fu_29698_p1.read()));
}

void ShuffleNetV2::thread_tmp_846_cast_cast_fu_24456_p1() {
    tmp_846_cast_cast_fu_24456_p1 = esl_sext<10,8>(tmp_638_fu_24450_p2.read());
}

void ShuffleNetV2::thread_tmp_846_fu_29718_p2() {
    tmp_846_fu_29718_p2 = (!tmp85_fu_29712_p2.read().is_01() || !co181_cast_reg_37407.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp85_fu_29712_p2.read()) + sc_biguint<13>(co181_cast_reg_37407.read()));
}

void ShuffleNetV2::thread_tmp_847_fu_29733_p2() {
    tmp_847_fu_29733_p2 = (!p_shl273_cast1_fu_29694_p1.read().is_01() || !p_shl274_cast_fu_29729_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl273_cast1_fu_29694_p1.read()) - sc_biguint<8>(p_shl274_cast_fu_29729_p1.read()));
}

void ShuffleNetV2::thread_tmp_848_cast_fu_24476_p1() {
    tmp_848_cast_fu_24476_p1 = esl_sext<11,10>(tmp_639_reg_35700.read());
}

void ShuffleNetV2::thread_tmp_848_fu_29739_p2() {
    tmp_848_fu_29739_p2 = (!tmp_847_fu_29733_p2.read().is_01() || !tmp_1082_cast_reg_37425.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_847_fu_29733_p2.read()) + sc_biguint<8>(tmp_1082_cast_reg_37425.read()));
}

void ShuffleNetV2::thread_tmp_849_cast_fu_29973_p1() {
    tmp_849_cast_fu_29973_p1 = esl_zext<12,3>(h_117_fu_29967_p2.read());
}

void ShuffleNetV2::thread_tmp_849_fu_11228_p3() {
    tmp_849_fu_11228_p3 = esl_concat<9,5>(tmp_210_reg_31460.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_850_cast1_fu_30108_p1() {
    tmp_850_cast1_fu_30108_p1 = esl_zext<13,3>(w_117_fu_30102_p2.read());
}

void ShuffleNetV2::thread_tmp_850_cast_fu_24484_p1() {
    tmp_850_cast_fu_24484_p1 = esl_sext<32,8>(tmp_641_reg_35705.read());
}

void ShuffleNetV2::thread_tmp_850_fu_11239_p3() {
    tmp_850_fu_11239_p3 = esl_concat<9,3>(tmp_210_reg_31460.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_851_fu_11250_p2() {
    tmp_851_fu_11250_p2 = (!p_shl369_cast_fu_11235_p1.read().is_01() || !p_shl370_cast_fu_11246_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl369_cast_fu_11235_p1.read()) - sc_biguint<15>(p_shl370_cast_fu_11246_p1.read()));
}

void ShuffleNetV2::thread_tmp_852_cast_fu_30143_p1() {
    tmp_852_cast_fu_30143_p1 = esl_zext<11,3>(w115_reg_7138.read());
}

void ShuffleNetV2::thread_tmp_852_fu_11260_p2() {
    tmp_852_fu_11260_p2 = (!tmp_200_cast_reg_31442.read().is_01() || !tmp_1096_cast_fu_11256_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp_200_cast_reg_31442.read()) + sc_bigint<16>(tmp_1096_cast_fu_11256_p1.read()));
}

void ShuffleNetV2::thread_tmp_853_cast_fu_30024_p1() {
    tmp_853_cast_fu_30024_p1 = esl_zext<14,3>(w_1_fu_30018_p2.read());
}

void ShuffleNetV2::thread_tmp_853_fu_11197_p3() {
    tmp_853_fu_11197_p3 = esl_concat<7,6>(tmp_212_fu_11192_p2.read(), ap_const_lv6_0);
}

void ShuffleNetV2::thread_tmp_854_fu_11205_p3() {
    tmp_854_fu_11205_p3 = esl_concat<7,4>(tmp_212_fu_11192_p2.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_855_cast_fu_30172_p1() {
    tmp_855_cast_fu_30172_p1 = esl_zext<14,3>(h_119_fu_30166_p2.read());
}

void ShuffleNetV2::thread_tmp_855_fu_11217_p2() {
    tmp_855_fu_11217_p2 = (!tmp_853_fu_11197_p3.read().is_01() || !p_shl368_cast_fu_11213_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_853_fu_11197_p3.read()) - sc_bigint<13>(p_shl368_cast_fu_11213_p1.read()));
}

void ShuffleNetV2::thread_tmp_856_cast_fu_30186_p1() {
    tmp_856_cast_fu_30186_p1 = esl_zext<13,3>(h118_reg_7149.read());
}

void ShuffleNetV2::thread_tmp_856_fu_11223_p2() {
    tmp_856_fu_11223_p2 = (!tmp_202_cast_reg_31447.read().is_01() || !tmp_855_fu_11217_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(tmp_202_cast_reg_31447.read()) + sc_biguint<13>(tmp_855_fu_11217_p2.read()));
}

void ShuffleNetV2::thread_tmp_857_cast_fu_24277_p1() {
    tmp_857_cast_fu_24277_p1 = esl_sext<12,10>(tmp_643_fu_24271_p2.read());
}

void ShuffleNetV2::thread_tmp_857_fu_11501_p3() {
    tmp_857_fu_11501_p3 = esl_concat<8,2>(tmp_225_reg_31579.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_858_fu_11512_p2() {
    tmp_858_fu_11512_p2 = (!p_shl374_cast_fu_11508_p1.read().is_01() || !tmp_226_cast_fu_11498_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl374_cast_fu_11508_p1.read()) - sc_biguint<11>(tmp_226_cast_fu_11498_p1.read()));
}

void ShuffleNetV2::thread_tmp_859_fu_11522_p2() {
    tmp_859_fu_11522_p2 = (!tmp_213_cast_reg_31548.read().is_01() || !tmp_1113_cast_fu_11518_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp_213_cast_reg_31548.read()) + sc_bigint<12>(tmp_1113_cast_fu_11518_p1.read()));
}

void ShuffleNetV2::thread_tmp_860_fu_11543_p2() {
    tmp_860_fu_11543_p2 = (!p_shl373_cast_fu_11539_p1.read().is_01() || !tmp_1114_cast_fu_11527_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_shl373_cast_fu_11539_p1.read()) - sc_bigint<15>(tmp_1114_cast_fu_11527_p1.read()));
}

void ShuffleNetV2::thread_tmp_861_fu_11549_p2() {
    tmp_861_fu_11549_p2 = (!tmp_220_cast_reg_31566.read().is_01() || !tmp_860_fu_11543_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_220_cast_reg_31566.read()) + sc_biguint<15>(tmp_860_fu_11543_p2.read()));
}

void ShuffleNetV2::thread_tmp_862_fu_11561_p3() {
    tmp_862_fu_11561_p3 = esl_concat<7,2>(tmp_227_reg_31585.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_863_fu_11568_p1() {
    tmp_863_fu_11568_p1 = esl_sext<34,9>(tmp_862_fu_11561_p3.read());
}

void ShuffleNetV2::thread_tmp_864_cast_cast_fu_24802_p1() {
    tmp_864_cast_cast_fu_24802_p1 = esl_sext<9,8>(tmp_649_fu_24796_p2.read());
}

void ShuffleNetV2::thread_tmp_864_fu_11576_p2() {
    tmp_864_fu_11576_p2 = (!p_shl372_cast_fu_11572_p1.read().is_01() || !tmp_228_cast_fu_11557_p1.read().is_01())? sc_lv<35>(): (sc_biguint<35>(p_shl372_cast_fu_11572_p1.read()) - sc_biguint<35>(tmp_228_cast_fu_11557_p1.read()));
}

void ShuffleNetV2::thread_tmp_865_fu_11586_p2() {
    tmp_865_fu_11586_p2 = (!tmp_213_cast1_reg_31543.read().is_01() || !tmp_1120_cast_fu_11582_p1.read().is_01())? sc_lv<36>(): (sc_biguint<36>(tmp_213_cast1_reg_31543.read()) + sc_bigint<36>(tmp_1120_cast_fu_11582_p1.read()));
}

void ShuffleNetV2::thread_tmp_866_cast_fu_24822_p1() {
    tmp_866_cast_fu_24822_p1 = esl_sext<11,9>(tmp_650_reg_35840.read());
}

void ShuffleNetV2::thread_tmp_866_fu_11610_p2() {
    tmp_866_fu_11610_p2 = (!p_shl371_cast_fu_11603_p3.read().is_01() || !tmp_187_reg_31596.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl371_cast_fu_11603_p3.read()) - sc_biguint<10>(tmp_187_reg_31596.read()));
}

void ShuffleNetV2::thread_tmp_867_fu_11615_p2() {
    tmp_867_fu_11615_p2 = (!tmp_220_cast1_reg_31561.read().is_01() || !tmp_866_fu_11610_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_220_cast1_reg_31561.read()) + sc_biguint<10>(tmp_866_fu_11610_p2.read()));
}

void ShuffleNetV2::thread_tmp_868_cast_fu_24830_p1() {
    tmp_868_cast_fu_24830_p1 = esl_sext<32,8>(tmp_653_reg_35845.read());
}

void ShuffleNetV2::thread_tmp_868_fu_11946_p3() {
    tmp_868_fu_11946_p3 = esl_concat<9,5>(tmp_235_reg_31706.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_869_fu_11957_p3() {
    tmp_869_fu_11957_p3 = esl_concat<9,3>(tmp_235_reg_31706.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_870_fu_11968_p2() {
    tmp_870_fu_11968_p2 = (!p_shl377_cast_fu_11953_p1.read().is_01() || !p_shl378_cast_fu_11964_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl377_cast_fu_11953_p1.read()) - sc_biguint<15>(p_shl378_cast_fu_11964_p1.read()));
}

void ShuffleNetV2::thread_tmp_871_fu_11978_p2() {
    tmp_871_fu_11978_p2 = (!tmp_221_cast_reg_31688.read().is_01() || !tmp_1131_cast_fu_11974_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp_221_cast_reg_31688.read()) + sc_bigint<16>(tmp_1131_cast_fu_11974_p1.read()));
}

void ShuffleNetV2::thread_tmp_872_cast_fu_24896_p1() {
    tmp_872_cast_fu_24896_p1 = esl_zext<8,3>(p_lshr_f20_cast_fu_24886_p4.read());
}

void ShuffleNetV2::thread_tmp_872_fu_11915_p3() {
    tmp_872_fu_11915_p3 = esl_concat<7,6>(tmp_237_fu_11910_p2.read(), ap_const_lv6_0);
}

void ShuffleNetV2::thread_tmp_873_fu_11923_p3() {
    tmp_873_fu_11923_p3 = esl_concat<7,4>(tmp_237_fu_11910_p2.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_874_cast_cast_fu_25158_p1() {
    tmp_874_cast_cast_fu_25158_p1 = esl_sext<9,8>(tmp_668_fu_25152_p2.read());
}

void ShuffleNetV2::thread_tmp_874_fu_11935_p2() {
    tmp_874_fu_11935_p2 = (!tmp_872_fu_11915_p3.read().is_01() || !p_shl376_cast_fu_11931_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_872_fu_11915_p3.read()) - sc_bigint<13>(p_shl376_cast_fu_11931_p1.read()));
}

void ShuffleNetV2::thread_tmp_875_fu_11941_p2() {
    tmp_875_fu_11941_p2 = (!tmp_223_cast_reg_31693.read().is_01() || !tmp_874_fu_11935_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(tmp_223_cast_reg_31693.read()) + sc_biguint<13>(tmp_874_fu_11935_p2.read()));
}

void ShuffleNetV2::thread_tmp_876_fu_12223_p3() {
    tmp_876_fu_12223_p3 = esl_concat<8,2>(tmp_250_reg_31825.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_877_fu_12234_p2() {
    tmp_877_fu_12234_p2 = (!p_shl382_cast_fu_12230_p1.read().is_01() || !tmp_251_cast_fu_12220_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl382_cast_fu_12230_p1.read()) - sc_biguint<11>(tmp_251_cast_fu_12220_p1.read()));
}

void ShuffleNetV2::thread_tmp_878_cast_fu_25190_p1() {
    tmp_878_cast_fu_25190_p1 = esl_sext<32,8>(tmp_671_reg_35951.read());
}

void ShuffleNetV2::thread_tmp_878_fu_12240_p2() {
    tmp_878_fu_12240_p2 = (!tmp_238_cast_reg_31794.read().is_01() || !tmp_877_fu_12234_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_238_cast_reg_31794.read()) + sc_biguint<11>(tmp_877_fu_12234_p2.read()));
}

void ShuffleNetV2::thread_tmp_879_fu_12261_p2() {
    tmp_879_fu_12261_p2 = (!p_shl381_cast_fu_12257_p1.read().is_01() || !tmp_1149_cast_fu_12245_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_shl381_cast_fu_12257_p1.read()) - sc_bigint<15>(tmp_1149_cast_fu_12245_p1.read()));
}

void ShuffleNetV2::thread_tmp_880_fu_12267_p2() {
    tmp_880_fu_12267_p2 = (!tmp_245_cast_reg_31812.read().is_01() || !tmp_879_fu_12261_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_245_cast_reg_31812.read()) + sc_biguint<15>(tmp_879_fu_12261_p2.read()));
}

void ShuffleNetV2::thread_tmp_881_fu_12279_p3() {
    tmp_881_fu_12279_p3 = esl_concat<7,2>(tmp_252_reg_31831.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_882_fu_12286_p1() {
    tmp_882_fu_12286_p1 = esl_sext<34,9>(tmp_881_fu_12279_p3.read());
}

void ShuffleNetV2::thread_tmp_883_cast_fu_24598_p1() {
    tmp_883_cast_fu_24598_p1 = esl_sext<10,8>(tmp_659_fu_24592_p2.read());
}

void ShuffleNetV2::thread_tmp_883_fu_12294_p2() {
    tmp_883_fu_12294_p2 = (!p_shl380_cast_fu_12290_p1.read().is_01() || !tmp_253_cast_fu_12275_p1.read().is_01())? sc_lv<35>(): (sc_biguint<35>(p_shl380_cast_fu_12290_p1.read()) - sc_biguint<35>(tmp_253_cast_fu_12275_p1.read()));
}

void ShuffleNetV2::thread_tmp_884_fu_12304_p2() {
    tmp_884_fu_12304_p2 = (!tmp_238_cast1_reg_31789.read().is_01() || !tmp_1155_cast_fu_12300_p1.read().is_01())? sc_lv<36>(): (sc_biguint<36>(tmp_238_cast1_reg_31789.read()) + sc_bigint<36>(tmp_1155_cast_fu_12300_p1.read()));
}

void ShuffleNetV2::thread_tmp_885_fu_12328_p2() {
    tmp_885_fu_12328_p2 = (!p_shl379_cast_fu_12321_p3.read().is_01() || !tmp_203_reg_31842.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl379_cast_fu_12321_p3.read()) - sc_biguint<10>(tmp_203_reg_31842.read()));
}

void ShuffleNetV2::thread_tmp_886_fu_12333_p2() {
    tmp_886_fu_12333_p2 = (!tmp_245_cast1_reg_31807.read().is_01() || !tmp_885_fu_12328_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_245_cast1_reg_31807.read()) + sc_biguint<10>(tmp_885_fu_12328_p2.read()));
}

void ShuffleNetV2::thread_tmp_887_cast_fu_24666_p1() {
    tmp_887_cast_fu_24666_p1 = esl_sext<32,8>(tmp_664_reg_35783.read());
}

void ShuffleNetV2::thread_tmp_887_fu_12830_p3() {
    tmp_887_fu_12830_p3 = esl_concat<7,3>(tmp_254_fu_12824_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_888_fu_12842_p3() {
    tmp_888_fu_12842_p3 = esl_concat<7,1>(tmp_254_fu_12824_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_889_fu_12854_p2() {
    tmp_889_fu_12854_p2 = (!p_shl390_cast_fu_12850_p1.read().is_01() || !p_shl389_cast_fu_12838_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl390_cast_fu_12850_p1.read()) + sc_biguint<11>(p_shl389_cast_fu_12838_p1.read()));
}

void ShuffleNetV2::thread_tmp_890_cast_fu_24979_p1() {
    tmp_890_cast_fu_24979_p1 = esl_sext<12,10>(tmp_673_fu_24973_p2.read());
}

void ShuffleNetV2::thread_tmp_890_fu_12860_p3() {
    tmp_890_fu_12860_p3 = esl_concat<6,3>(co64_reg_4168.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_891_fu_12872_p3() {
    tmp_891_fu_12872_p3 = esl_concat<6,1>(co64_reg_4168.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_892_fu_12884_p2() {
    tmp_892_fu_12884_p2 = (!p_shl388_cast_fu_12880_p1.read().is_01() || !p_shl387_cast_fu_12868_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl388_cast_fu_12880_p1.read()) + sc_biguint<10>(p_shl387_cast_fu_12868_p1.read()));
}

void ShuffleNetV2::thread_tmp_893_fu_12664_p3() {
    tmp_893_fu_12664_p3 = esl_concat<10,5>(tmp_261_reg_31952.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_894_fu_12675_p3() {
    tmp_894_fu_12675_p3 = esl_concat<10,3>(tmp_261_reg_31952.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_895_fu_12686_p2() {
    tmp_895_fu_12686_p2 = (!p_shl385_cast_fu_12671_p1.read().is_01() || !p_shl386_cast_fu_12682_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(p_shl385_cast_fu_12671_p1.read()) - sc_biguint<16>(p_shl386_cast_fu_12682_p1.read()));
}

void ShuffleNetV2::thread_tmp_896_fu_12696_p2() {
    tmp_896_fu_12696_p2 = (!tmp_246_cast_reg_31934.read().is_01() || !tmp_1172_cast_fu_12692_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(tmp_246_cast_reg_31934.read()) + sc_bigint<17>(tmp_1172_cast_fu_12692_p1.read()));
}

void ShuffleNetV2::thread_tmp_897_cast_fu_25508_p1() {
    tmp_897_cast_fu_25508_p1 = esl_sext<12,8>(tmp_679_fu_25502_p2.read());
}

void ShuffleNetV2::thread_tmp_897_fu_12633_p3() {
    tmp_897_fu_12633_p3 = esl_concat<7,6>(tmp_263_fu_12628_p2.read(), ap_const_lv6_0);
}

void ShuffleNetV2::thread_tmp_898_fu_12641_p3() {
    tmp_898_fu_12641_p3 = esl_concat<7,4>(tmp_263_fu_12628_p2.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_899_fu_12653_p2() {
    tmp_899_fu_12653_p2 = (!tmp_897_fu_12633_p3.read().is_01() || !p_shl384_cast_fu_12649_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_897_fu_12633_p3.read()) - sc_bigint<13>(p_shl384_cast_fu_12649_p1.read()));
}

void ShuffleNetV2::thread_tmp_900_fu_12659_p2() {
    tmp_900_fu_12659_p2 = (!tmp_248_cast_reg_31939.read().is_01() || !tmp_899_fu_12653_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(tmp_248_cast_reg_31939.read()) + sc_biguint<13>(tmp_899_fu_12653_p2.read()));
}

void ShuffleNetV2::thread_tmp_901_cast_fu_25532_p1() {
    tmp_901_cast_fu_25532_p1 = esl_sext<32,8>(tmp_683_reg_36091.read());
}

void ShuffleNetV2::thread_tmp_901_fu_12910_p2() {
    tmp_901_fu_12910_p2 = (!tmp_265_cast_fu_12906_p1.read().is_01() || !tmp_889_reg_32017.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_265_cast_fu_12906_p1.read()) + sc_biguint<11>(tmp_889_reg_32017.read()));
}

void ShuffleNetV2::thread_tmp_902_fu_12939_p2() {
    tmp_902_fu_12939_p2 = (!p_shl393_cast_fu_12923_p1.read().is_01() || !p_shl394_cast_fu_12935_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl393_cast_fu_12923_p1.read()) + sc_biguint<15>(p_shl394_cast_fu_12935_p1.read()));
}

void ShuffleNetV2::thread_tmp_903_fu_12945_p2() {
    tmp_903_fu_12945_p2 = (!tmp_265_cast1_fu_12902_p1.read().is_01() || !tmp_892_reg_32022.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_265_cast1_fu_12902_p1.read()) + sc_biguint<10>(tmp_892_reg_32022.read()));
}

void ShuffleNetV2::thread_tmp_904_cast_fu_8720_p1() {
    tmp_904_cast_fu_8720_p1 = esl_sext<14,13>(tmp_487_fu_8714_p2.read());
}

void ShuffleNetV2::thread_tmp_904_fu_12974_p2() {
    tmp_904_fu_12974_p2 = (!p_shl391_cast_fu_12958_p1.read().is_01() || !p_shl392_cast_fu_12970_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl391_cast_fu_12958_p1.read()) + sc_biguint<14>(p_shl392_cast_fu_12970_p1.read()));
}

void ShuffleNetV2::thread_tmp_905_cast_fu_25598_p1() {
    tmp_905_cast_fu_25598_p1 = esl_zext<8,3>(p_lshr_f21_cast_fu_25588_p4.read());
}

void ShuffleNetV2::thread_tmp_905_fu_13000_p2() {
    tmp_905_fu_13000_p2 = (!tmp_902_reg_32035.read().is_01() || !tmp_269_cast_fu_12996_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_902_reg_32035.read()) + sc_biguint<15>(tmp_269_cast_fu_12996_p1.read()));
}

void ShuffleNetV2::thread_tmp_906_fu_13010_p2() {
    tmp_906_fu_13010_p2 = (!tmp_904_reg_32040.read().is_01() || !tmp_269_cast1_fu_12992_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_904_reg_32040.read()) + sc_biguint<14>(tmp_269_cast1_fu_12992_p1.read()));
}

void ShuffleNetV2::thread_tmp_907_cast_fu_25860_p1() {
    tmp_907_cast_fu_25860_p1 = esl_sext<12,8>(tmp_696_fu_25854_p2.read());
}

void ShuffleNetV2::thread_tmp_907_fu_13239_p3() {
    tmp_907_fu_13239_p3 = esl_concat<10,5>(tmp_276_reg_32112.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_908_fu_13250_p3() {
    tmp_908_fu_13250_p3 = esl_concat<10,3>(tmp_276_reg_32112.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_909_fu_13261_p2() {
    tmp_909_fu_13261_p2 = (!p_shl397_cast_fu_13246_p1.read().is_01() || !p_shl398_cast_fu_13257_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(p_shl397_cast_fu_13246_p1.read()) - sc_biguint<16>(p_shl398_cast_fu_13257_p1.read()));
}

void ShuffleNetV2::thread_tmp_910_fu_13271_p2() {
    tmp_910_fu_13271_p2 = (!tmp_266_cast_reg_32094.read().is_01() || !tmp_1200_cast_fu_13267_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(tmp_266_cast_reg_32094.read()) + sc_bigint<17>(tmp_1200_cast_fu_13267_p1.read()));
}

void ShuffleNetV2::thread_tmp_911_cast_fu_25884_p1() {
    tmp_911_cast_fu_25884_p1 = esl_sext<32,8>(tmp_699_reg_36197.read());
}

void ShuffleNetV2::thread_tmp_911_fu_13208_p3() {
    tmp_911_fu_13208_p3 = esl_concat<7,6>(tmp_278_fu_13203_p2.read(), ap_const_lv6_0);
}

void ShuffleNetV2::thread_tmp_912_fu_13216_p3() {
    tmp_912_fu_13216_p3 = esl_concat<7,4>(tmp_278_fu_13203_p2.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_913_fu_13228_p2() {
    tmp_913_fu_13228_p2 = (!tmp_911_fu_13208_p3.read().is_01() || !p_shl396_cast_fu_13224_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_911_fu_13208_p3.read()) - sc_bigint<13>(p_shl396_cast_fu_13224_p1.read()));
}

void ShuffleNetV2::thread_tmp_914_fu_13234_p2() {
    tmp_914_fu_13234_p2 = (!tmp_268_cast_reg_32099.read().is_01() || !tmp_913_fu_13228_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(tmp_268_cast_reg_32099.read()) + sc_biguint<13>(tmp_913_fu_13228_p2.read()));
}

void ShuffleNetV2::thread_tmp_915_fu_13516_p3() {
    tmp_915_fu_13516_p3 = esl_concat<9,2>(tmp_291_reg_32231.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_916_cast_fu_25304_p1() {
    tmp_916_cast_fu_25304_p1 = esl_sext<10,8>(tmp_690_fu_25298_p2.read());
}

void ShuffleNetV2::thread_tmp_916_fu_13527_p2() {
    tmp_916_fu_13527_p2 = (!p_shl402_cast_fu_13523_p1.read().is_01() || !tmp_292_cast1_fu_13513_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(p_shl402_cast_fu_13523_p1.read()) - sc_biguint<12>(tmp_292_cast1_fu_13513_p1.read()));
}

void ShuffleNetV2::thread_tmp_917_fu_13537_p2() {
    tmp_917_fu_13537_p2 = (!tmp_1217_cast_fu_13533_p1.read().is_01() || !tmp_279_cast_reg_32200.read().is_01())? sc_lv<13>(): (sc_bigint<13>(tmp_1217_cast_fu_13533_p1.read()) + sc_biguint<13>(tmp_279_cast_reg_32200.read()));
}

void ShuffleNetV2::thread_tmp_918_fu_13554_p2() {
    tmp_918_fu_13554_p2 = (!p_shl401_cast_fu_13546_p3.read().is_01() || !tmp_1218_cast_fu_13542_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl401_cast_fu_13546_p3.read()) - sc_bigint<15>(tmp_1218_cast_fu_13542_p1.read()));
}

void ShuffleNetV2::thread_tmp_919_fu_13560_p2() {
    tmp_919_fu_13560_p2 = (!tmp_918_fu_13554_p2.read().is_01() || !tmp_286_cast_reg_32218.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_918_fu_13554_p2.read()) + sc_biguint<15>(tmp_286_cast_reg_32218.read()));
}

void ShuffleNetV2::thread_tmp_920_cast_fu_25372_p1() {
    tmp_920_cast_fu_25372_p1 = esl_sext<32,8>(tmp_693_reg_36029.read());
}

void ShuffleNetV2::thread_tmp_920_fu_13572_p3() {
    tmp_920_fu_13572_p3 = esl_concat<7,2>(tmp_293_reg_32237.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_921_fu_13579_p1() {
    tmp_921_fu_13579_p1 = esl_sext<34,9>(tmp_920_fu_13572_p3.read());
}

void ShuffleNetV2::thread_tmp_922_fu_13587_p2() {
    tmp_922_fu_13587_p2 = (!p_shl400_cast_fu_13583_p1.read().is_01() || !tmp_294_cast_fu_13568_p1.read().is_01())? sc_lv<35>(): (sc_biguint<35>(p_shl400_cast_fu_13583_p1.read()) - sc_biguint<35>(tmp_294_cast_fu_13568_p1.read()));
}

void ShuffleNetV2::thread_tmp_923_fu_13597_p2() {
    tmp_923_fu_13597_p2 = (!tmp_1224_cast_fu_13593_p1.read().is_01() || !tmp_279_cast1_reg_32195.read().is_01())? sc_lv<36>(): (sc_bigint<36>(tmp_1224_cast_fu_13593_p1.read()) + sc_biguint<36>(tmp_279_cast1_reg_32195.read()));
}

void ShuffleNetV2::thread_tmp_924_fu_13621_p2() {
    tmp_924_fu_13621_p2 = (!p_shl399_cast_fu_13614_p3.read().is_01() || !tmp_266_reg_32248.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl399_cast_fu_13614_p3.read()) - sc_biguint<10>(tmp_266_reg_32248.read()));
}

void ShuffleNetV2::thread_tmp_925_fu_13626_p2() {
    tmp_925_fu_13626_p2 = (!tmp_924_fu_13621_p2.read().is_01() || !tmp_286_cast1_reg_32213.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_924_fu_13621_p2.read()) + sc_biguint<10>(tmp_286_cast1_reg_32213.read()));
}

void ShuffleNetV2::thread_tmp_926_fu_14109_p3() {
    tmp_926_fu_14109_p3 = esl_concat<6,3>(co72_reg_4377.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_927_cast_fu_26161_p1() {
    tmp_927_cast_fu_26161_p1 = esl_zext<8,3>(p_lshr_f22_cast_fu_26151_p4.read());
}

void ShuffleNetV2::thread_tmp_927_fu_14121_p3() {
    tmp_927_fu_14121_p3 = esl_concat<6,1>(co72_reg_4377.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_928_cast_fu_25681_p1() {
    tmp_928_cast_fu_25681_p1 = esl_sext<12,10>(tmp_701_fu_25675_p2.read());
}

void ShuffleNetV2::thread_tmp_928_fu_14133_p2() {
    tmp_928_fu_14133_p2 = (!p_shl408_cast_fu_14129_p1.read().is_01() || !p_shl407_cast_fu_14117_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl408_cast_fu_14129_p1.read()) + sc_biguint<10>(p_shl407_cast_fu_14117_p1.read()));
}

void ShuffleNetV2::thread_tmp_929_fu_13953_p3() {
    tmp_929_fu_13953_p3 = esl_concat<10,5>(tmp_301_reg_32358.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_930_fu_13964_p3() {
    tmp_930_fu_13964_p3 = esl_concat<10,3>(tmp_301_reg_32358.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_931_fu_13975_p2() {
    tmp_931_fu_13975_p2 = (!p_shl405_cast_fu_13960_p1.read().is_01() || !p_shl406_cast_fu_13971_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(p_shl405_cast_fu_13960_p1.read()) - sc_biguint<16>(p_shl406_cast_fu_13971_p1.read()));
}

void ShuffleNetV2::thread_tmp_932_fu_13985_p2() {
    tmp_932_fu_13985_p2 = (!tmp_287_cast_reg_32340.read().is_01() || !tmp_1238_cast_fu_13981_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(tmp_287_cast_reg_32340.read()) + sc_bigint<17>(tmp_1238_cast_fu_13981_p1.read()));
}

void ShuffleNetV2::thread_tmp_933_fu_13922_p3() {
    tmp_933_fu_13922_p3 = esl_concat<7,6>(tmp_303_fu_13917_p2.read(), ap_const_lv6_0);
}

void ShuffleNetV2::thread_tmp_934_fu_13930_p3() {
    tmp_934_fu_13930_p3 = esl_concat<7,4>(tmp_303_fu_13917_p2.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_935_fu_13942_p2() {
    tmp_935_fu_13942_p2 = (!tmp_933_fu_13922_p3.read().is_01() || !p_shl404_cast_fu_13938_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_933_fu_13922_p3.read()) - sc_bigint<13>(p_shl404_cast_fu_13938_p1.read()));
}

void ShuffleNetV2::thread_tmp_936_cast_fu_26423_p1() {
    tmp_936_cast_fu_26423_p1 = esl_sext<12,8>(tmp_714_fu_26417_p2.read());
}

void ShuffleNetV2::thread_tmp_936_fu_13948_p2() {
    tmp_936_fu_13948_p2 = (!tmp_289_cast_reg_32345.read().is_01() || !tmp_935_fu_13942_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(tmp_289_cast_reg_32345.read()) + sc_biguint<13>(tmp_935_fu_13942_p2.read()));
}

void ShuffleNetV2::thread_tmp_937_fu_14238_p3() {
    tmp_937_fu_14238_p3 = esl_concat<7,3>(tmp_304_fu_14232_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_938_fu_14250_p3() {
    tmp_938_fu_14250_p3 = esl_concat<7,1>(tmp_304_fu_14232_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_939_fu_14262_p2() {
    tmp_939_fu_14262_p2 = (!p_shl414_cast_fu_14258_p1.read().is_01() || !p_shl413_cast_fu_14246_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl414_cast_fu_14258_p1.read()) + sc_biguint<11>(p_shl413_cast_fu_14246_p1.read()));
}

void ShuffleNetV2::thread_tmp_940_cast_fu_26447_p1() {
    tmp_940_cast_fu_26447_p1 = esl_sext<32,8>(tmp_717_reg_36357.read());
}

void ShuffleNetV2::thread_tmp_940_fu_14268_p3() {
    tmp_940_fu_14268_p3 = esl_concat<6,3>(co74_reg_4410.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_941_fu_14280_p3() {
    tmp_941_fu_14280_p3 = esl_concat<6,1>(co74_reg_4410.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_942_fu_14292_p2() {
    tmp_942_fu_14292_p2 = (!p_shl412_cast_fu_14288_p1.read().is_01() || !p_shl411_cast_fu_14276_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl412_cast_fu_14288_p1.read()) + sc_biguint<10>(p_shl411_cast_fu_14276_p1.read()));
}

void ShuffleNetV2::thread_tmp_943_fu_14155_p2() {
    tmp_943_fu_14155_p2 = (!tmp_305_cast_fu_14151_p1.read().is_01() || !tmp_928_reg_32423.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_305_cast_fu_14151_p1.read()) + sc_biguint<10>(tmp_928_reg_32423.read()));
}

}

