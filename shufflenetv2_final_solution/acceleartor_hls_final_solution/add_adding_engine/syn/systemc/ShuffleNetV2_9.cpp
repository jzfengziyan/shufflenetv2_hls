#include "ShuffleNetV2.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void ShuffleNetV2::thread_tmp_419_fu_13778_p1() {
    tmp_419_fu_13778_p1 = esl_zext<64,32>(tmp_451_cast_fu_13775_p1.read());
}

void ShuffleNetV2::thread_tmp_420_fu_13748_p2() {
    tmp_420_fu_13748_p2 = (!tmp4_fu_13742_p2.read().is_01() || !i39_cast606_cast_reg_36147.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp4_fu_13742_p2.read()) + sc_biguint<8>(i39_cast606_cast_reg_36147.read()));
}

void ShuffleNetV2::thread_tmp_421_cast_fu_13756_p1() {
    tmp_421_cast_fu_13756_p1 = esl_zext<33,9>(tmp_454_cast_fu_13753_p1.read());
}

void ShuffleNetV2::thread_tmp_422_cast_fu_13466_p1() {
    tmp_422_cast_fu_13466_p1 = esl_zext<10,2>(h50_reg_5168.read());
}

void ShuffleNetV2::thread_tmp_422_fu_13462_p1() {
    tmp_422_fu_13462_p1 = esl_zext<64,2>(h50_reg_5168.read());
}

void ShuffleNetV2::thread_tmp_423_fu_13873_p2() {
    tmp_423_fu_13873_p2 = (!tmp_416_reg_36202.read().is_01() || !ci28_cast_fu_13857_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_416_reg_36202.read()) + sc_biguint<7>(ci28_cast_fu_13857_p1.read()));
}

void ShuffleNetV2::thread_tmp_424_cast_fu_13878_p1() {
    tmp_424_cast_fu_13878_p1 = esl_sext<10,7>(tmp_423_fu_13873_p2.read());
}

void ShuffleNetV2::thread_tmp_425_cast_fu_13882_p1() {
    tmp_425_cast_fu_13882_p1 = esl_zext<16,5>(ci28_reg_5223.read());
}

void ShuffleNetV2::thread_tmp_426_fu_13510_p2() {
    tmp_426_fu_13510_p2 = (!p_shl14_cast_fu_13494_p1.read().is_01() || !p_shl15_cast_fu_13506_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl14_cast_fu_13494_p1.read()) - sc_biguint<7>(p_shl15_cast_fu_13506_p1.read()));
}

void ShuffleNetV2::thread_tmp_427_fu_13520_p2() {
    tmp_427_fu_13520_p2 = (!tmp_426_fu_13510_p2.read().is_01() || !co59_cast1_reg_36051.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_426_fu_13510_p2.read()) + sc_biguint<7>(co59_cast1_reg_36051.read()));
}

void ShuffleNetV2::thread_tmp_428_cast_fu_13539_p1() {
    tmp_428_cast_fu_13539_p1 = esl_zext<35,32>(tmp_470_cast_fu_13536_p1.read());
}

void ShuffleNetV2::thread_tmp_429_fu_13531_p2() {
    tmp_429_fu_13531_p2 = (!co59_cast_reg_36046.read().is_01() || !tmp3_fu_13525_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(co59_cast_reg_36046.read()) + sc_biguint<8>(tmp3_fu_13525_p2.read()));
}

void ShuffleNetV2::thread_tmp_430_cast_fu_13581_p1() {
    tmp_430_cast_fu_13581_p1 = esl_zext<11,8>(tmp_429_reg_36114.read());
}

void ShuffleNetV2::thread_tmp_431_cast_fu_13042_p1() {
    tmp_431_cast_fu_13042_p1 = esl_zext<7,4>(p_lshr_f_cast_fu_13032_p4.read());
}

void ShuffleNetV2::thread_tmp_431_fu_14159_p2() {
    tmp_431_fu_14159_p2 = (!p_shl12_cast_fu_14143_p1.read().is_01() || !p_shl13_cast_fu_14155_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl12_cast_fu_14143_p1.read()) - sc_biguint<7>(p_shl13_cast_fu_14155_p1.read()));
}

void ShuffleNetV2::thread_tmp_432_fu_14169_p2() {
    tmp_432_fu_14169_p2 = (!i42_cast_reg_36309.read().is_01() || !tmp_431_fu_14159_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(i42_cast_reg_36309.read()) + sc_biguint<7>(tmp_431_fu_14159_p2.read()));
}

void ShuffleNetV2::thread_tmp_433_cast_fu_13364_p1() {
    tmp_433_cast_fu_13364_p1 = esl_sext<9,7>(tmp_405_fu_13358_p2.read());
}

void ShuffleNetV2::thread_tmp_433_fu_14210_p1() {
    tmp_433_fu_14210_p1 = esl_zext<64,32>(tmp_461_cast_fu_14207_p1.read());
}

void ShuffleNetV2::thread_tmp_434_cast_fu_13402_p1() {
    tmp_434_cast_fu_13402_p1 = esl_sext<32,7>(tmp_406_reg_36030.read());
}

void ShuffleNetV2::thread_tmp_434_fu_14180_p2() {
    tmp_434_fu_14180_p2 = (!tmp6_fu_14174_p2.read().is_01() || !i42_cast593_cast_reg_36304.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp6_fu_14174_p2.read()) + sc_biguint<8>(i42_cast593_cast_reg_36304.read()));
}

void ShuffleNetV2::thread_tmp_435_cast_fu_14188_p1() {
    tmp_435_cast_fu_14188_p1 = esl_zext<33,9>(tmp_464_cast_fu_14185_p1.read());
}

void ShuffleNetV2::thread_tmp_436_fu_13926_p2() {
    tmp_436_fu_13926_p2 = (!p_shl16_cast_fu_13910_p1.read().is_01() || !p_shl17_cast_fu_13922_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl16_cast_fu_13910_p1.read()) - sc_biguint<7>(p_shl17_cast_fu_13922_p1.read()));
}

void ShuffleNetV2::thread_tmp_437_fu_13936_p2() {
    tmp_437_fu_13936_p2 = (!tmp_436_fu_13926_p2.read().is_01() || !tmp_458_cast_reg_36207.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_436_fu_13926_p2.read()) + sc_biguint<7>(tmp_458_cast_reg_36207.read()));
}

void ShuffleNetV2::thread_tmp_438_fu_13965_p2() {
    tmp_438_fu_13965_p2 = (!p_shl18_cast_fu_13949_p1.read().is_01() || !p_shl19_cast_fu_13961_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl18_cast_fu_13949_p1.read()) - sc_biguint<8>(p_shl19_cast_fu_13961_p1.read()));
}

void ShuffleNetV2::thread_tmp_439_fu_13981_p2() {
    tmp_439_fu_13981_p2 = (!tmp5_fu_13975_p2.read().is_01() || !co61_cast_reg_36189.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp5_fu_13975_p2.read()) + sc_biguint<9>(co61_cast_reg_36189.read()));
}

void ShuffleNetV2::thread_tmp_440_fu_13991_p4() {
    tmp_440_fu_13991_p4 = tmp_437_fu_13936_p2.read().range(6, 3);
}

void ShuffleNetV2::thread_tmp_441_cast1_fu_14247_p1() {
    tmp_441_cast1_fu_14247_p1 = esl_zext<11,2>(w55_reg_5278.read());
}

void ShuffleNetV2::thread_tmp_441_cast_fu_14251_p1() {
    tmp_441_cast_fu_14251_p1 = esl_zext<36,2>(w55_reg_5278.read());
}

void ShuffleNetV2::thread_tmp_442_fu_14624_p2() {
    tmp_442_fu_14624_p2 = (!p_shl22_cast_fu_14608_p1.read().is_01() || !p_shl23_cast_fu_14620_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl22_cast_fu_14608_p1.read()) - sc_biguint<7>(p_shl23_cast_fu_14620_p1.read()));
}

void ShuffleNetV2::thread_tmp_443_fu_14528_p2() {
    tmp_443_fu_14528_p2 = (!p_shl20_cast_fu_14512_p1.read().is_01() || !p_shl21_cast_fu_14524_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl20_cast_fu_14512_p1.read()) - sc_biguint<7>(p_shl21_cast_fu_14524_p1.read()));
}

void ShuffleNetV2::thread_tmp_444_fu_14538_p2() {
    tmp_444_fu_14538_p2 = (!i47_cast1_reg_36452.read().is_01() || !tmp_443_fu_14528_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(i47_cast1_reg_36452.read()) + sc_biguint<7>(tmp_443_fu_14528_p2.read()));
}

void ShuffleNetV2::thread_tmp_445_fu_14575_p1() {
    tmp_445_fu_14575_p1 = esl_zext<64,32>(tmp_483_cast_fu_14572_p1.read());
}

void ShuffleNetV2::thread_tmp_446_cast_fu_13170_p1() {
    tmp_446_cast_fu_13170_p1 = esl_sext<9,8>(tmp_412_fu_13164_p2.read());
}

void ShuffleNetV2::thread_tmp_446_fu_14549_p2() {
    tmp_446_fu_14549_p2 = (!tmp8_fu_14543_p2.read().is_01() || !i47_cast_reg_36447.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp8_fu_14543_p2.read()) + sc_biguint<10>(i47_cast_reg_36447.read()));
}

void ShuffleNetV2::thread_tmp_447_cast_fu_14554_p1() {
    tmp_447_cast_fu_14554_p1 = esl_zext<33,10>(tmp_446_reg_36478.read());
}

void ShuffleNetV2::thread_tmp_448_cast_fu_14271_p1() {
    tmp_448_cast_fu_14271_p1 = esl_zext<10,2>(h52_reg_5289.read());
}

void ShuffleNetV2::thread_tmp_448_fu_14267_p1() {
    tmp_448_fu_14267_p1 = esl_zext<64,2>(h52_reg_5289.read());
}

void ShuffleNetV2::thread_tmp_449_fu_14670_p2() {
    tmp_449_fu_14670_p2 = (!tmp_442_reg_36502.read().is_01() || !ci30_cast_fu_14654_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_442_reg_36502.read()) + sc_biguint<7>(ci30_cast_fu_14654_p1.read()));
}

void ShuffleNetV2::thread_tmp_450_cast_cast_fu_13733_p1() {
    tmp_450_cast_cast_fu_13733_p1 = esl_sext<8,7>(tmp_417_fu_13727_p2.read());
}

void ShuffleNetV2::thread_tmp_450_cast_fu_14675_p1() {
    tmp_450_cast_fu_14675_p1 = esl_sext<10,7>(tmp_449_fu_14670_p2.read());
}

void ShuffleNetV2::thread_tmp_451_cast1_fu_14679_p1() {
    tmp_451_cast1_fu_14679_p1 = esl_zext<17,5>(ci30_reg_5344.read());
}

void ShuffleNetV2::thread_tmp_451_cast_fu_13775_p1() {
    tmp_451_cast_fu_13775_p1 = esl_sext<32,7>(tmp_418_reg_36173.read());
}

void ShuffleNetV2::thread_tmp_452_fu_14315_p2() {
    tmp_452_fu_14315_p2 = (!p_shl26_cast_fu_14299_p1.read().is_01() || !p_shl27_cast_fu_14311_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl26_cast_fu_14299_p1.read()) - sc_biguint<7>(p_shl27_cast_fu_14311_p1.read()));
}

void ShuffleNetV2::thread_tmp_453_fu_14325_p2() {
    tmp_453_fu_14325_p2 = (!tmp_452_fu_14315_p2.read().is_01() || !co63_cast1_reg_36351.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_452_fu_14315_p2.read()) + sc_biguint<7>(co63_cast1_reg_36351.read()));
}

void ShuffleNetV2::thread_tmp_454_cast1_fu_14344_p1() {
    tmp_454_cast1_fu_14344_p1 = esl_zext<35,32>(tmp_502_cast_fu_14341_p1.read());
}

void ShuffleNetV2::thread_tmp_454_cast_fu_13753_p1() {
    tmp_454_cast_fu_13753_p1 = esl_sext<9,8>(tmp_420_reg_36178.read());
}

void ShuffleNetV2::thread_tmp_455_fu_14336_p2() {
    tmp_455_fu_14336_p2 = (!co63_cast_reg_36346.read().is_01() || !tmp7_fu_14330_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(co63_cast_reg_36346.read()) + sc_biguint<8>(tmp7_fu_14330_p2.read()));
}

void ShuffleNetV2::thread_tmp_456_cast_fu_14386_p1() {
    tmp_456_cast_fu_14386_p1 = esl_zext<11,8>(tmp_455_reg_36414.read());
}

void ShuffleNetV2::thread_tmp_457_fu_15058_p2() {
    tmp_457_fu_15058_p2 = (!co67_cast_fu_15012_p1.read().is_01() || !ap_const_lv7_30.is_01())? sc_lv<7>(): (sc_biguint<7>(co67_cast_fu_15012_p1.read()) + sc_biguint<7>(ap_const_lv7_30));
}

void ShuffleNetV2::thread_tmp_458_cast_fu_13843_p1() {
    tmp_458_cast_fu_13843_p1 = esl_zext<7,4>(p_lshr_f1_cast_fu_13833_p4.read());
}

void ShuffleNetV2::thread_tmp_458_fu_14960_p2() {
    tmp_458_fu_14960_p2 = (!p_shl24_cast_fu_14944_p1.read().is_01() || !p_shl25_cast_fu_14956_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl24_cast_fu_14944_p1.read()) - sc_biguint<7>(p_shl25_cast_fu_14956_p1.read()));
}

void ShuffleNetV2::thread_tmp_459_fu_14970_p2() {
    tmp_459_fu_14970_p2 = (!i50_cast1_reg_36609.read().is_01() || !tmp_458_fu_14960_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(i50_cast1_reg_36609.read()) + sc_biguint<7>(tmp_458_fu_14960_p2.read()));
}

void ShuffleNetV2::thread_tmp_460_cast_cast_fu_14165_p1() {
    tmp_460_cast_cast_fu_14165_p1 = esl_sext<8,7>(tmp_431_fu_14159_p2.read());
}

void ShuffleNetV2::thread_tmp_460_fu_15007_p1() {
    tmp_460_fu_15007_p1 = esl_zext<64,32>(tmp_493_cast_fu_15004_p1.read());
}

void ShuffleNetV2::thread_tmp_461_cast_fu_14207_p1() {
    tmp_461_cast_fu_14207_p1 = esl_sext<32,7>(tmp_432_reg_36330.read());
}

void ShuffleNetV2::thread_tmp_461_fu_14981_p2() {
    tmp_461_fu_14981_p2 = (!tmp10_fu_14975_p2.read().is_01() || !i50_cast_reg_36604.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp10_fu_14975_p2.read()) + sc_biguint<10>(i50_cast_reg_36604.read()));
}

void ShuffleNetV2::thread_tmp_462_cast_fu_14986_p1() {
    tmp_462_cast_fu_14986_p1 = esl_zext<33,10>(tmp_461_reg_36635.read());
}

void ShuffleNetV2::thread_tmp_463_fu_14723_p2() {
    tmp_463_fu_14723_p2 = (!p_shl30_cast_fu_14707_p1.read().is_01() || !p_shl31_cast_fu_14719_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl30_cast_fu_14707_p1.read()) - sc_biguint<7>(p_shl31_cast_fu_14719_p1.read()));
}

void ShuffleNetV2::thread_tmp_464_cast_fu_14185_p1() {
    tmp_464_cast_fu_14185_p1 = esl_sext<9,8>(tmp_434_reg_36335.read());
}

void ShuffleNetV2::thread_tmp_464_fu_14733_p2() {
    tmp_464_fu_14733_p2 = (!tmp_463_fu_14723_p2.read().is_01() || !tmp_490_cast_reg_36507.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_463_fu_14723_p2.read()) + sc_biguint<7>(tmp_490_cast_reg_36507.read()));
}

void ShuffleNetV2::thread_tmp_465_fu_14762_p2() {
    tmp_465_fu_14762_p2 = (!p_shl32_cast_fu_14746_p1.read().is_01() || !p_shl33_cast_fu_14758_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl32_cast_fu_14746_p1.read()) - sc_biguint<8>(p_shl33_cast_fu_14758_p1.read()));
}

void ShuffleNetV2::thread_tmp_466_fu_14782_p2() {
    tmp_466_fu_14782_p2 = (!tmp9_cast_fu_14778_p1.read().is_01() || !co65_cast_reg_36489.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp9_cast_fu_14778_p1.read()) + sc_biguint<10>(co65_cast_reg_36489.read()));
}

void ShuffleNetV2::thread_tmp_467_fu_14792_p4() {
    tmp_467_fu_14792_p4 = tmp_464_fu_14733_p2.read().range(6, 3);
}

void ShuffleNetV2::thread_tmp_468_fu_15267_p2() {
    tmp_468_fu_15267_p2 = (!p_shl28_cast_fu_15251_p1.read().is_01() || !p_shl29_cast_fu_15263_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl28_cast_fu_15251_p1.read()) - sc_biguint<7>(p_shl29_cast_fu_15263_p1.read()));
}

void ShuffleNetV2::thread_tmp_469_cast1_fu_15106_p1() {
    tmp_469_cast1_fu_15106_p1 = esl_zext<11,4>(h_55_fu_15100_p2.read());
}

void ShuffleNetV2::thread_tmp_469_cast2_fu_15110_p1() {
    tmp_469_cast2_fu_15110_p1 = esl_zext<10,4>(h_55_fu_15100_p2.read());
}

void ShuffleNetV2::thread_tmp_469_cast_fu_13516_p1() {
    tmp_469_cast_fu_13516_p1 = esl_sext<8,7>(tmp_426_fu_13510_p2.read());
}

void ShuffleNetV2::thread_tmp_470_cast_fu_13536_p1() {
    tmp_470_cast_fu_13536_p1 = esl_sext<32,7>(tmp_427_reg_36108.read());
}

void ShuffleNetV2::thread_tmp_470_fu_15313_p2() {
    tmp_470_fu_15313_p2 = (!tmp_468_reg_36713.read().is_01() || !ci32_cast_fu_15297_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_468_reg_36713.read()) + sc_biguint<7>(ci32_cast_fu_15297_p1.read()));
}

void ShuffleNetV2::thread_tmp_471_cast_fu_15318_p1() {
    tmp_471_cast_fu_15318_p1 = esl_sext<10,7>(tmp_470_fu_15313_p2.read());
}

void ShuffleNetV2::thread_tmp_472_cast_fu_15322_p1() {
    tmp_472_cast_fu_15322_p1 = esl_zext<17,5>(ci32_reg_5432.read());
}

void ShuffleNetV2::thread_tmp_473_cast1_fu_15196_p1() {
    tmp_473_cast1_fu_15196_p1 = esl_zext<15,4>(w_58_fu_15190_p2.read());
}

void ShuffleNetV2::thread_tmp_473_cast_fu_15200_p1() {
    tmp_473_cast_fu_15200_p1 = esl_zext<14,4>(w_58_fu_15190_p2.read());
}

void ShuffleNetV2::thread_tmp_474_fu_15599_p2() {
    tmp_474_fu_15599_p2 = (!p_shl34_cast_fu_15583_p1.read().is_01() || !p_shl35_cast_fu_15595_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl34_cast_fu_15583_p1.read()) - sc_biguint<7>(p_shl35_cast_fu_15595_p1.read()));
}

void ShuffleNetV2::thread_tmp_475_fu_15609_p2() {
    tmp_475_fu_15609_p2 = (!i56_cast1_reg_36820.read().is_01() || !tmp_474_fu_15599_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(i56_cast1_reg_36820.read()) + sc_biguint<7>(tmp_474_fu_15599_p2.read()));
}

void ShuffleNetV2::thread_tmp_476_fu_15646_p1() {
    tmp_476_fu_15646_p1 = esl_zext<64,32>(tmp_521_cast_fu_15643_p1.read());
}

void ShuffleNetV2::thread_tmp_477_fu_15620_p2() {
    tmp_477_fu_15620_p2 = (!tmp12_fu_15614_p2.read().is_01() || !i56_cast_reg_36815.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp12_fu_15614_p2.read()) + sc_biguint<10>(i56_cast_reg_36815.read()));
}

void ShuffleNetV2::thread_tmp_478_cast1_fu_15625_p1() {
    tmp_478_cast1_fu_15625_p1 = esl_zext<33,10>(tmp_477_reg_36846.read());
}

void ShuffleNetV2::thread_tmp_478_cast_fu_13971_p1() {
    tmp_478_cast_fu_13971_p1 = esl_sext<9,8>(tmp_438_fu_13965_p2.read());
}

void ShuffleNetV2::thread_tmp_479_fu_15366_p2() {
    tmp_479_fu_15366_p2 = (!p_shl36_cast_fu_15350_p1.read().is_01() || !p_shl37_cast_fu_15362_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl36_cast_fu_15350_p1.read()) - sc_biguint<7>(p_shl37_cast_fu_15362_p1.read()));
}

void ShuffleNetV2::thread_tmp_480_fu_15376_p2() {
    tmp_480_fu_15376_p2 = (!tmp_479_fu_15366_p2.read().is_01() || !tmp_512_cast_reg_36718.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_479_fu_15366_p2.read()) + sc_biguint<7>(tmp_512_cast_reg_36718.read()));
}

void ShuffleNetV2::thread_tmp_481_fu_15405_p2() {
    tmp_481_fu_15405_p2 = (!p_shl38_cast_fu_15389_p1.read().is_01() || !p_shl39_cast_fu_15401_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl38_cast_fu_15389_p1.read()) - sc_biguint<8>(p_shl39_cast_fu_15401_p1.read()));
}

void ShuffleNetV2::thread_tmp_482_cast_fu_14534_p1() {
    tmp_482_cast_fu_14534_p1 = esl_sext<10,7>(tmp_443_fu_14528_p2.read());
}

void ShuffleNetV2::thread_tmp_482_fu_15421_p2() {
    tmp_482_fu_15421_p2 = (!tmp11_fu_15415_p2.read().is_01() || !co68_cast_reg_36700.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp11_fu_15415_p2.read()) + sc_biguint<10>(co68_cast_reg_36700.read()));
}

void ShuffleNetV2::thread_tmp_483_cast_fu_14572_p1() {
    tmp_483_cast_fu_14572_p1 = esl_sext<32,7>(tmp_444_reg_36473.read());
}

void ShuffleNetV2::thread_tmp_483_fu_15431_p4() {
    tmp_483_fu_15431_p4 = tmp_480_fu_15376_p2.read().range(6, 3);
}

void ShuffleNetV2::thread_tmp_484_cast1_fu_15683_p1() {
    tmp_484_cast1_fu_15683_p1 = esl_zext<13,2>(w59_reg_5487.read());
}

void ShuffleNetV2::thread_tmp_484_cast_fu_15687_p1() {
    tmp_484_cast_fu_15687_p1 = esl_zext<36,2>(w59_reg_5487.read());
}

void ShuffleNetV2::thread_tmp_485_fu_16068_p2() {
    tmp_485_fu_16068_p2 = (!p_shl42_cast_fu_16052_p1.read().is_01() || !p_shl43_cast_fu_16064_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl42_cast_fu_16052_p1.read()) - sc_biguint<7>(p_shl43_cast_fu_16064_p1.read()));
}

void ShuffleNetV2::thread_tmp_486_fu_15972_p2() {
    tmp_486_fu_15972_p2 = (!p_shl40_cast_fu_15956_p1.read().is_01() || !p_shl41_cast_fu_15968_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl40_cast_fu_15956_p1.read()) - sc_biguint<7>(p_shl41_cast_fu_15968_p1.read()));
}

void ShuffleNetV2::thread_tmp_487_fu_15982_p2() {
    tmp_487_fu_15982_p2 = (!i59_cast1_reg_36963.read().is_01() || !tmp_486_fu_15972_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(i59_cast1_reg_36963.read()) + sc_biguint<7>(tmp_486_fu_15972_p2.read()));
}

void ShuffleNetV2::thread_tmp_488_fu_16019_p1() {
    tmp_488_fu_16019_p1 = esl_zext<64,32>(tmp_538_cast_fu_16016_p1.read());
}

void ShuffleNetV2::thread_tmp_489_fu_15993_p2() {
    tmp_489_fu_15993_p2 = (!tmp14_fu_15987_p2.read().is_01() || !i59_cast_reg_36958.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp14_fu_15987_p2.read()) + sc_biguint<10>(i59_cast_reg_36958.read()));
}

void ShuffleNetV2::thread_tmp_490_cast1_fu_15998_p1() {
    tmp_490_cast1_fu_15998_p1 = esl_zext<33,10>(tmp_489_reg_36989.read());
}

void ShuffleNetV2::thread_tmp_490_cast_fu_14640_p1() {
    tmp_490_cast_fu_14640_p1 = esl_zext<7,4>(p_lshr_f2_cast_fu_14630_p4.read());
}

void ShuffleNetV2::thread_tmp_491_cast_fu_15707_p1() {
    tmp_491_cast_fu_15707_p1 = esl_zext<10,2>(h56_reg_5498.read());
}

void ShuffleNetV2::thread_tmp_491_fu_15703_p1() {
    tmp_491_fu_15703_p1 = esl_zext<64,2>(h56_reg_5498.read());
}

void ShuffleNetV2::thread_tmp_492_cast_fu_14966_p1() {
    tmp_492_cast_fu_14966_p1 = esl_sext<10,7>(tmp_458_fu_14960_p2.read());
}

void ShuffleNetV2::thread_tmp_492_fu_16114_p2() {
    tmp_492_fu_16114_p2 = (!tmp_485_reg_37013.read().is_01() || !ci34_cast_fu_16098_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_485_reg_37013.read()) + sc_biguint<7>(ci34_cast_fu_16098_p1.read()));
}

void ShuffleNetV2::thread_tmp_493_cast1_fu_16119_p1() {
    tmp_493_cast1_fu_16119_p1 = esl_sext<10,7>(tmp_492_fu_16114_p2.read());
}

void ShuffleNetV2::thread_tmp_493_cast_fu_15004_p1() {
    tmp_493_cast_fu_15004_p1 = esl_sext<32,7>(tmp_459_reg_36630.read());
}

void ShuffleNetV2::thread_tmp_494_cast_fu_16123_p1() {
    tmp_494_cast_fu_16123_p1 = esl_zext<17,5>(ci34_reg_5553.read());
}

void ShuffleNetV2::thread_tmp_495_fu_15751_p2() {
    tmp_495_fu_15751_p2 = (!p_shl46_cast_fu_15735_p1.read().is_01() || !p_shl47_cast_fu_15747_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl46_cast_fu_15735_p1.read()) - sc_biguint<7>(p_shl47_cast_fu_15747_p1.read()));
}

void ShuffleNetV2::thread_tmp_496_fu_15757_p2() {
    tmp_496_fu_15757_p2 = (!tmp_495_fu_15751_p2.read().is_01() || !co71_cast1_reg_36862.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_495_fu_15751_p2.read()) + sc_biguint<7>(co71_cast1_reg_36862.read()));
}

void ShuffleNetV2::thread_tmp_497_cast_fu_15784_p1() {
    tmp_497_cast_fu_15784_p1 = esl_zext<35,32>(tmp_557_cast_fu_15781_p1.read());
}

void ShuffleNetV2::thread_tmp_498_fu_15776_p2() {
    tmp_498_fu_15776_p2 = (!co71_cast_reg_36857.read().is_01() || !tmp13_cast_fu_15772_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(co71_cast_reg_36857.read()) + sc_biguint<9>(tmp13_cast_fu_15772_p1.read()));
}

void ShuffleNetV2::thread_tmp_499_cast_fu_15826_p1() {
    tmp_499_cast_fu_15826_p1 = esl_zext<12,9>(tmp_498_reg_36925.read());
}

void ShuffleNetV2::thread_tmp_500_fu_16400_p2() {
    tmp_500_fu_16400_p2 = (!p_shl44_cast_fu_16384_p1.read().is_01() || !p_shl45_cast_fu_16396_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl44_cast_fu_16384_p1.read()) - sc_biguint<7>(p_shl45_cast_fu_16396_p1.read()));
}

void ShuffleNetV2::thread_tmp_501_cast_fu_14321_p1() {
    tmp_501_cast_fu_14321_p1 = esl_sext<8,7>(tmp_452_fu_14315_p2.read());
}

void ShuffleNetV2::thread_tmp_501_fu_16410_p2() {
    tmp_501_fu_16410_p2 = (!i62_cast1_reg_37120.read().is_01() || !tmp_500_fu_16400_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(i62_cast1_reg_37120.read()) + sc_biguint<7>(tmp_500_fu_16400_p2.read()));
}

void ShuffleNetV2::thread_tmp_502_cast_fu_14341_p1() {
    tmp_502_cast_fu_14341_p1 = esl_sext<32,7>(tmp_453_reg_36408.read());
}

void ShuffleNetV2::thread_tmp_502_fu_16447_p1() {
    tmp_502_fu_16447_p1 = esl_zext<64,32>(tmp_548_cast_fu_16444_p1.read());
}

void ShuffleNetV2::thread_tmp_503_fu_16421_p2() {
    tmp_503_fu_16421_p2 = (!tmp16_fu_16415_p2.read().is_01() || !i62_cast_reg_37115.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp16_fu_16415_p2.read()) + sc_biguint<10>(i62_cast_reg_37115.read()));
}

void ShuffleNetV2::thread_tmp_504_cast_fu_16426_p1() {
    tmp_504_cast_fu_16426_p1 = esl_zext<33,10>(tmp_503_reg_37146.read());
}

void ShuffleNetV2::thread_tmp_505_fu_16167_p2() {
    tmp_505_fu_16167_p2 = (!p_shl48_cast_fu_16151_p1.read().is_01() || !p_shl49_cast_fu_16163_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl48_cast_fu_16151_p1.read()) - sc_biguint<7>(p_shl49_cast_fu_16163_p1.read()));
}

void ShuffleNetV2::thread_tmp_506_fu_16177_p2() {
    tmp_506_fu_16177_p2 = (!tmp_505_fu_16167_p2.read().is_01() || !tmp_545_cast_reg_37018.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_505_fu_16167_p2.read()) + sc_biguint<7>(tmp_545_cast_reg_37018.read()));
}

void ShuffleNetV2::thread_tmp_507_fu_16206_p2() {
    tmp_507_fu_16206_p2 = (!p_shl50_cast_fu_16190_p1.read().is_01() || !p_shl51_cast_fu_16202_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl50_cast_fu_16190_p1.read()) - sc_biguint<8>(p_shl51_cast_fu_16202_p1.read()));
}

void ShuffleNetV2::thread_tmp_508_fu_16222_p2() {
    tmp_508_fu_16222_p2 = (!tmp15_fu_16216_p2.read().is_01() || !co73_cast_reg_37000.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp15_fu_16216_p2.read()) + sc_biguint<10>(co73_cast_reg_37000.read()));
}

void ShuffleNetV2::thread_tmp_509_fu_16232_p4() {
    tmp_509_fu_16232_p4 = tmp_506_fu_16177_p2.read().range(6, 3);
}

void ShuffleNetV2::thread_tmp_510_fu_16617_p2() {
    tmp_510_fu_16617_p2 = (!co76_cast_fu_16571_p1.read().is_01() || !ap_const_lv7_30.is_01())? sc_lv<7>(): (sc_biguint<7>(co76_cast_fu_16571_p1.read()) + sc_biguint<7>(ap_const_lv7_30));
}

void ShuffleNetV2::thread_tmp_511_cast_fu_16506_p1() {
    tmp_511_cast_fu_16506_p1 = esl_zext<10,4>(h_59_fu_16500_p2.read());
}

void ShuffleNetV2::thread_tmp_512_cast_fu_15283_p1() {
    tmp_512_cast_fu_15283_p1 = esl_zext<7,4>(p_lshr_f3_cast_fu_15273_p4.read());
}

void ShuffleNetV2::thread_tmp_512_fu_16826_p2() {
    tmp_512_fu_16826_p2 = (!p_shl52_cast_fu_16810_p1.read().is_01() || !p_shl53_cast_fu_16822_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl52_cast_fu_16810_p1.read()) - sc_biguint<7>(p_shl53_cast_fu_16822_p1.read()));
}

void ShuffleNetV2::thread_tmp_513_cast1_fu_16665_p1() {
    tmp_513_cast1_fu_16665_p1 = esl_zext<10,4>(h_61_fu_16659_p2.read());
}

void ShuffleNetV2::thread_tmp_513_cast_fu_16669_p1() {
    tmp_513_cast_fu_16669_p1 = esl_zext<11,4>(h_61_fu_16659_p2.read());
}

void ShuffleNetV2::thread_tmp_514_cast_fu_16557_p1() {
    tmp_514_cast_fu_16557_p1 = esl_zext<15,4>(w_62_fu_16551_p2.read());
}

void ShuffleNetV2::thread_tmp_515_cast_fu_14768_p1() {
    tmp_515_cast_fu_14768_p1 = esl_sext<9,8>(tmp_465_fu_14762_p2.read());
}

void ShuffleNetV2::thread_tmp_515_fu_16872_p2() {
    tmp_515_fu_16872_p2 = (!tmp_512_reg_37268.read().is_01() || !ci36_cast_fu_16856_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_512_reg_37268.read()) + sc_biguint<7>(ci36_cast_fu_16856_p1.read()));
}

void ShuffleNetV2::thread_tmp_516_cast_fu_16877_p1() {
    tmp_516_cast_fu_16877_p1 = esl_sext<10,7>(tmp_515_fu_16872_p2.read());
}

void ShuffleNetV2::thread_tmp_517_cast_fu_16881_p1() {
    tmp_517_cast_fu_16881_p1 = esl_zext<17,5>(ci36_reg_5674.read());
}

void ShuffleNetV2::thread_tmp_518_cast1_fu_16755_p1() {
    tmp_518_cast1_fu_16755_p1 = esl_zext<14,4>(w_64_fu_16749_p2.read());
}

void ShuffleNetV2::thread_tmp_518_cast_fu_16759_p1() {
    tmp_518_cast_fu_16759_p1 = esl_zext<15,4>(w_64_fu_16749_p2.read());
}

void ShuffleNetV2::thread_tmp_519_fu_17158_p2() {
    tmp_519_fu_17158_p2 = (!p_shl54_cast_fu_17142_p1.read().is_01() || !p_shl55_cast_fu_17154_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl54_cast_fu_17142_p1.read()) - sc_biguint<7>(p_shl55_cast_fu_17154_p1.read()));
}

void ShuffleNetV2::thread_tmp_520_cast_fu_15605_p1() {
    tmp_520_cast_fu_15605_p1 = esl_sext<10,7>(tmp_474_fu_15599_p2.read());
}

void ShuffleNetV2::thread_tmp_520_fu_17168_p2() {
    tmp_520_fu_17168_p2 = (!i68_cast1_reg_37375.read().is_01() || !tmp_519_fu_17158_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(i68_cast1_reg_37375.read()) + sc_biguint<7>(tmp_519_fu_17158_p2.read()));
}

void ShuffleNetV2::thread_tmp_521_cast_fu_15643_p1() {
    tmp_521_cast_fu_15643_p1 = esl_sext<32,7>(tmp_475_reg_36841.read());
}

void ShuffleNetV2::thread_tmp_521_fu_17205_p1() {
    tmp_521_fu_17205_p1 = esl_zext<64,32>(tmp_579_cast_fu_17202_p1.read());
}

void ShuffleNetV2::thread_tmp_522_fu_17179_p2() {
    tmp_522_fu_17179_p2 = (!tmp18_fu_17173_p2.read().is_01() || !i68_cast_reg_37370.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp18_fu_17173_p2.read()) + sc_biguint<10>(i68_cast_reg_37370.read()));
}

void ShuffleNetV2::thread_tmp_523_cast_fu_17184_p1() {
    tmp_523_cast_fu_17184_p1 = esl_zext<33,10>(tmp_522_reg_37401.read());
}

void ShuffleNetV2::thread_tmp_524_fu_16925_p2() {
    tmp_524_fu_16925_p2 = (!p_shl56_cast_fu_16909_p1.read().is_01() || !p_shl57_cast_fu_16921_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl56_cast_fu_16909_p1.read()) - sc_biguint<7>(p_shl57_cast_fu_16921_p1.read()));
}

void ShuffleNetV2::thread_tmp_525_fu_16935_p2() {
    tmp_525_fu_16935_p2 = (!tmp_524_fu_16925_p2.read().is_01() || !tmp_575_cast_reg_37273.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_524_fu_16925_p2.read()) + sc_biguint<7>(tmp_575_cast_reg_37273.read()));
}

void ShuffleNetV2::thread_tmp_526_fu_16964_p2() {
    tmp_526_fu_16964_p2 = (!p_shl58_cast_fu_16948_p1.read().is_01() || !p_shl59_cast_fu_16960_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl58_cast_fu_16948_p1.read()) - sc_biguint<8>(p_shl59_cast_fu_16960_p1.read()));
}

void ShuffleNetV2::thread_tmp_527_fu_16980_p2() {
    tmp_527_fu_16980_p2 = (!tmp17_fu_16974_p2.read().is_01() || !co78_cast_reg_37255.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp17_fu_16974_p2.read()) + sc_biguint<10>(co78_cast_reg_37255.read()));
}

void ShuffleNetV2::thread_tmp_528_fu_16990_p4() {
    tmp_528_fu_16990_p4 = tmp_525_fu_16935_p2.read().range(6, 3);
}

void ShuffleNetV2::thread_tmp_529_cast1_fu_17242_p1() {
    tmp_529_cast1_fu_17242_p1 = esl_zext<13,2>(w65_reg_5729.read());
}

void ShuffleNetV2::thread_tmp_529_cast_fu_17246_p1() {
    tmp_529_cast_fu_17246_p1 = esl_zext<36,2>(w65_reg_5729.read());
}

void ShuffleNetV2::thread_tmp_530_fu_17627_p2() {
    tmp_530_fu_17627_p2 = (!p_shl62_cast_fu_17611_p1.read().is_01() || !p_shl63_cast_fu_17623_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl62_cast_fu_17611_p1.read()) - sc_biguint<7>(p_shl63_cast_fu_17623_p1.read()));
}

void ShuffleNetV2::thread_tmp_531_fu_17527_p2() {
    tmp_531_fu_17527_p2 = (!p_shl60_cast_fu_17511_p1.read().is_01() || !p_shl61_cast_fu_17523_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl60_cast_fu_17511_p1.read()) - sc_biguint<7>(p_shl61_cast_fu_17523_p1.read()));
}

void ShuffleNetV2::thread_tmp_532_fu_17537_p2() {
    tmp_532_fu_17537_p2 = (!i71_cast_reg_37518.read().is_01() || !tmp_531_fu_17527_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(i71_cast_reg_37518.read()) + sc_biguint<7>(tmp_531_fu_17527_p2.read()));
}

void ShuffleNetV2::thread_tmp_533_cast_fu_15411_p1() {
    tmp_533_cast_fu_15411_p1 = esl_sext<10,8>(tmp_481_fu_15405_p2.read());
}

void ShuffleNetV2::thread_tmp_533_fu_17578_p1() {
    tmp_533_fu_17578_p1 = esl_zext<64,32>(tmp_596_cast_fu_17575_p1.read());
}

void ShuffleNetV2::thread_tmp_534_fu_17548_p2() {
    tmp_534_fu_17548_p2 = (!tmp20_fu_17542_p2.read().is_01() || !i71_cast508_cast_reg_37513.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp20_fu_17542_p2.read()) + sc_biguint<9>(i71_cast508_cast_reg_37513.read()));
}

void ShuffleNetV2::thread_tmp_535_cast_fu_17556_p1() {
    tmp_535_cast_fu_17556_p1 = esl_zext<33,10>(tmp_599_cast_fu_17553_p1.read());
}

void ShuffleNetV2::thread_tmp_536_cast_fu_17266_p1() {
    tmp_536_cast_fu_17266_p1 = esl_zext<10,2>(h62_reg_5740.read());
}

void ShuffleNetV2::thread_tmp_536_fu_17262_p1() {
    tmp_536_fu_17262_p1 = esl_zext<64,2>(h62_reg_5740.read());
}

void ShuffleNetV2::thread_tmp_537_cast_fu_15978_p1() {
    tmp_537_cast_fu_15978_p1 = esl_sext<10,7>(tmp_486_fu_15972_p2.read());
}

void ShuffleNetV2::thread_tmp_537_fu_17673_p2() {
    tmp_537_fu_17673_p2 = (!tmp_530_reg_37568.read().is_01() || !ci38_cast_fu_17657_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_530_reg_37568.read()) + sc_biguint<7>(ci38_cast_fu_17657_p1.read()));
}

void ShuffleNetV2::thread_tmp_538_cast1_fu_17678_p1() {
    tmp_538_cast1_fu_17678_p1 = esl_sext<10,7>(tmp_537_fu_17673_p2.read());
}

void ShuffleNetV2::thread_tmp_538_cast_fu_16016_p1() {
    tmp_538_cast_fu_16016_p1 = esl_sext<32,7>(tmp_487_reg_36984.read());
}

void ShuffleNetV2::thread_tmp_539_cast_fu_17682_p1() {
    tmp_539_cast_fu_17682_p1 = esl_zext<17,5>(ci38_reg_5795.read());
}

void ShuffleNetV2::thread_tmp_540_fu_17310_p2() {
    tmp_540_fu_17310_p2 = (!p_shl66_cast_fu_17294_p1.read().is_01() || !p_shl67_cast_fu_17306_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl66_cast_fu_17294_p1.read()) - sc_biguint<7>(p_shl67_cast_fu_17306_p1.read()));
}

void ShuffleNetV2::thread_tmp_541_fu_17320_p2() {
    tmp_541_fu_17320_p2 = (!tmp_540_fu_17310_p2.read().is_01() || !co81_cast1_reg_37417.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_540_fu_17310_p2.read()) + sc_biguint<7>(co81_cast1_reg_37417.read()));
}

void ShuffleNetV2::thread_tmp_542_cast_fu_17339_p1() {
    tmp_542_cast_fu_17339_p1 = esl_zext<35,32>(tmp_615_cast_fu_17336_p1.read());
}

void ShuffleNetV2::thread_tmp_543_fu_17331_p2() {
    tmp_543_fu_17331_p2 = (!co81_cast_reg_37412.read().is_01() || !tmp19_fu_17325_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(co81_cast_reg_37412.read()) + sc_biguint<9>(tmp19_fu_17325_p2.read()));
}

void ShuffleNetV2::thread_tmp_544_cast_fu_17381_p1() {
    tmp_544_cast_fu_17381_p1 = esl_zext<12,9>(tmp_543_reg_37480.read());
}

void ShuffleNetV2::thread_tmp_545_cast_fu_16084_p1() {
    tmp_545_cast_fu_16084_p1 = esl_zext<7,4>(p_lshr_f4_cast_fu_16074_p4.read());
}

void ShuffleNetV2::thread_tmp_545_fu_17959_p2() {
    tmp_545_fu_17959_p2 = (!p_shl64_cast_fu_17943_p1.read().is_01() || !p_shl65_cast_fu_17955_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl64_cast_fu_17943_p1.read()) - sc_biguint<7>(p_shl65_cast_fu_17955_p1.read()));
}

void ShuffleNetV2::thread_tmp_546_fu_17969_p2() {
    tmp_546_fu_17969_p2 = (!i74_cast_reg_37675.read().is_01() || !tmp_545_fu_17959_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(i74_cast_reg_37675.read()) + sc_biguint<7>(tmp_545_fu_17959_p2.read()));
}

void ShuffleNetV2::thread_tmp_547_cast_fu_16406_p1() {
    tmp_547_cast_fu_16406_p1 = esl_sext<10,7>(tmp_500_fu_16400_p2.read());
}

void ShuffleNetV2::thread_tmp_547_fu_18010_p1() {
    tmp_547_fu_18010_p1 = esl_zext<64,32>(tmp_606_cast_fu_18007_p1.read());
}

void ShuffleNetV2::thread_tmp_548_cast_fu_16444_p1() {
    tmp_548_cast_fu_16444_p1 = esl_sext<32,7>(tmp_501_reg_37141.read());
}

void ShuffleNetV2::thread_tmp_548_fu_17980_p2() {
    tmp_548_fu_17980_p2 = (!tmp22_fu_17974_p2.read().is_01() || !i74_cast495_cast_reg_37670.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp22_fu_17974_p2.read()) + sc_biguint<9>(i74_cast495_cast_reg_37670.read()));
}

void ShuffleNetV2::thread_tmp_549_cast_fu_17988_p1() {
    tmp_549_cast_fu_17988_p1 = esl_zext<33,10>(tmp_609_cast_fu_17985_p1.read());
}

void ShuffleNetV2::thread_tmp_550_fu_17726_p2() {
    tmp_550_fu_17726_p2 = (!p_shl68_cast_fu_17710_p1.read().is_01() || !p_shl69_cast_fu_17722_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl68_cast_fu_17710_p1.read()) - sc_biguint<7>(p_shl69_cast_fu_17722_p1.read()));
}

void ShuffleNetV2::thread_tmp_551_fu_17736_p2() {
    tmp_551_fu_17736_p2 = (!tmp_550_fu_17726_p2.read().is_01() || !tmp_603_cast_reg_37573.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_550_fu_17726_p2.read()) + sc_biguint<7>(tmp_603_cast_reg_37573.read()));
}

void ShuffleNetV2::thread_tmp_552_fu_17765_p2() {
    tmp_552_fu_17765_p2 = (!p_shl70_cast_fu_17749_p1.read().is_01() || !p_shl71_cast_fu_17761_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl70_cast_fu_17749_p1.read()) - sc_biguint<8>(p_shl71_cast_fu_17761_p1.read()));
}

void ShuffleNetV2::thread_tmp_553_fu_17781_p2() {
    tmp_553_fu_17781_p2 = (!tmp21_fu_17775_p2.read().is_01() || !co83_cast_reg_37555.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp21_fu_17775_p2.read()) + sc_biguint<10>(co83_cast_reg_37555.read()));
}

void ShuffleNetV2::thread_tmp_554_fu_17791_p4() {
    tmp_554_fu_17791_p4 = tmp_551_fu_17736_p2.read().range(6, 3);
}

void ShuffleNetV2::thread_tmp_555_fu_18180_p2() {
    tmp_555_fu_18180_p2 = (!co86_cast_fu_18134_p1.read().is_01() || !ap_const_lv7_30.is_01())? sc_lv<7>(): (sc_biguint<7>(co86_cast_fu_18134_p1.read()) + sc_biguint<7>(ap_const_lv7_30));
}

void ShuffleNetV2::thread_tmp_556_cast_fu_18069_p1() {
    tmp_556_cast_fu_18069_p1 = esl_zext<10,4>(h_65_fu_18063_p2.read());
}

void ShuffleNetV2::thread_tmp_557_cast_fu_15781_p1() {
    tmp_557_cast_fu_15781_p1 = esl_sext<32,7>(tmp_496_reg_36919.read());
}

void ShuffleNetV2::thread_tmp_557_fu_18389_p2() {
    tmp_557_fu_18389_p2 = (!p_shl72_cast_fu_18373_p1.read().is_01() || !p_shl73_cast_fu_18385_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl72_cast_fu_18373_p1.read()) - sc_biguint<7>(p_shl73_cast_fu_18385_p1.read()));
}

void ShuffleNetV2::thread_tmp_558_cast1_fu_18228_p1() {
    tmp_558_cast1_fu_18228_p1 = esl_zext<10,4>(h_67_fu_18222_p2.read());
}

void ShuffleNetV2::thread_tmp_558_cast_fu_18232_p1() {
    tmp_558_cast_fu_18232_p1 = esl_zext<11,4>(h_67_fu_18222_p2.read());
}

void ShuffleNetV2::thread_tmp_559_cast_fu_18120_p1() {
    tmp_559_cast_fu_18120_p1 = esl_zext<15,4>(w_68_fu_18114_p2.read());
}

void ShuffleNetV2::thread_tmp_560_fu_18435_p2() {
    tmp_560_fu_18435_p2 = (!tmp_557_reg_37823.read().is_01() || !ci40_cast_fu_18419_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_557_reg_37823.read()) + sc_biguint<7>(ci40_cast_fu_18419_p1.read()));
}

void ShuffleNetV2::thread_tmp_561_cast_fu_18440_p1() {
    tmp_561_cast_fu_18440_p1 = esl_sext<10,7>(tmp_560_fu_18435_p2.read());
}

void ShuffleNetV2::thread_tmp_562_cast_fu_18444_p1() {
    tmp_562_cast_fu_18444_p1 = esl_zext<17,5>(ci40_reg_5916.read());
}

void ShuffleNetV2::thread_tmp_563_cast1_fu_18318_p1() {
    tmp_563_cast1_fu_18318_p1 = esl_zext<14,4>(w_70_fu_18312_p2.read());
}

void ShuffleNetV2::thread_tmp_563_cast_fu_18322_p1() {
    tmp_563_cast_fu_18322_p1 = esl_zext<15,4>(w_70_fu_18312_p2.read());
}

void ShuffleNetV2::thread_tmp_564_fu_18729_p2() {
    tmp_564_fu_18729_p2 = (!p_shl74_cast_fu_18713_p1.read().is_01() || !p_shl75_cast_fu_18725_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl74_cast_fu_18713_p1.read()) - sc_biguint<7>(p_shl75_cast_fu_18725_p1.read()));
}

void ShuffleNetV2::thread_tmp_565_cast_fu_16212_p1() {
    tmp_565_cast_fu_16212_p1 = esl_sext<10,8>(tmp_507_fu_16206_p2.read());
}

void ShuffleNetV2::thread_tmp_565_fu_18739_p2() {
    tmp_565_fu_18739_p2 = (!i80_cast_reg_37930.read().is_01() || !tmp_564_fu_18729_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(i80_cast_reg_37930.read()) + sc_biguint<7>(tmp_564_fu_18729_p2.read()));
}

void ShuffleNetV2::thread_tmp_566_fu_18780_p1() {
    tmp_566_fu_18780_p1 = esl_zext<64,32>(tmp_637_cast_fu_18777_p1.read());
}

void ShuffleNetV2::thread_tmp_567_fu_18750_p2() {
    tmp_567_fu_18750_p2 = (!tmp24_fu_18744_p2.read().is_01() || !i80_cast480_cast_reg_37925.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp24_fu_18744_p2.read()) + sc_biguint<9>(i80_cast480_cast_reg_37925.read()));
}

void ShuffleNetV2::thread_tmp_568_cast_fu_18758_p1() {
    tmp_568_cast_fu_18758_p1 = esl_zext<33,10>(tmp_640_cast_fu_18755_p1.read());
}

void ShuffleNetV2::thread_tmp_569_fu_18488_p2() {
    tmp_569_fu_18488_p2 = (!p_shl76_cast_fu_18472_p1.read().is_01() || !p_shl77_cast_fu_18484_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl76_cast_fu_18472_p1.read()) - sc_biguint<7>(p_shl77_cast_fu_18484_p1.read()));
}

void ShuffleNetV2::thread_tmp_570_fu_18498_p2() {
    tmp_570_fu_18498_p2 = (!tmp_569_fu_18488_p2.read().is_01() || !tmp_633_cast_reg_37828.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_569_fu_18488_p2.read()) + sc_biguint<7>(tmp_633_cast_reg_37828.read()));
}

void ShuffleNetV2::thread_tmp_571_fu_18527_p2() {
    tmp_571_fu_18527_p2 = (!p_shl78_cast_fu_18511_p1.read().is_01() || !p_shl79_cast_fu_18523_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl78_cast_fu_18511_p1.read()) - sc_biguint<8>(p_shl79_cast_fu_18523_p1.read()));
}

void ShuffleNetV2::thread_tmp_572_fu_18543_p2() {
    tmp_572_fu_18543_p2 = (!tmp23_fu_18537_p2.read().is_01() || !co88_cast489_cast_reg_37810.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp23_fu_18537_p2.read()) + sc_biguint<9>(co88_cast489_cast_reg_37810.read()));
}

void ShuffleNetV2::thread_tmp_573_fu_18553_p4() {
    tmp_573_fu_18553_p4 = tmp_570_fu_18498_p2.read().range(6, 3);
}

void ShuffleNetV2::thread_tmp_574_cast1_fu_18817_p1() {
    tmp_574_cast1_fu_18817_p1 = esl_zext<12,2>(w71_reg_5971.read());
}

void ShuffleNetV2::thread_tmp_574_cast_fu_18821_p1() {
    tmp_574_cast_fu_18821_p1 = esl_zext<36,2>(w71_reg_5971.read());
}

void ShuffleNetV2::thread_tmp_575_cast_fu_16842_p1() {
    tmp_575_cast_fu_16842_p1 = esl_zext<7,4>(p_lshr_f5_cast_fu_16832_p4.read());
}

void ShuffleNetV2::thread_tmp_575_fu_19198_p2() {
    tmp_575_fu_19198_p2 = (!p_shl82_cast_fu_19182_p1.read().is_01() || !p_shl83_cast_fu_19194_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl82_cast_fu_19182_p1.read()) - sc_biguint<7>(p_shl83_cast_fu_19194_p1.read()));
}

void ShuffleNetV2::thread_tmp_576_fu_19098_p2() {
    tmp_576_fu_19098_p2 = (!p_shl80_cast_fu_19082_p1.read().is_01() || !p_shl81_cast_fu_19094_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl80_cast_fu_19082_p1.read()) - sc_biguint<7>(p_shl81_cast_fu_19094_p1.read()));
}

void ShuffleNetV2::thread_tmp_577_fu_19108_p2() {
    tmp_577_fu_19108_p2 = (!i83_cast_reg_38073.read().is_01() || !tmp_576_fu_19098_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(i83_cast_reg_38073.read()) + sc_biguint<7>(tmp_576_fu_19098_p2.read()));
}

void ShuffleNetV2::thread_tmp_578_cast_fu_17164_p1() {
    tmp_578_cast_fu_17164_p1 = esl_sext<10,7>(tmp_519_fu_17158_p2.read());
}

void ShuffleNetV2::thread_tmp_578_fu_19149_p1() {
    tmp_578_fu_19149_p1 = esl_zext<64,32>(tmp_654_cast_fu_19146_p1.read());
}

void ShuffleNetV2::thread_tmp_579_cast_fu_17202_p1() {
    tmp_579_cast_fu_17202_p1 = esl_sext<32,7>(tmp_520_reg_37396.read());
}

void ShuffleNetV2::thread_tmp_579_fu_19119_p2() {
    tmp_579_fu_19119_p2 = (!tmp26_fu_19113_p2.read().is_01() || !i83_cast470_cast_reg_38068.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp26_fu_19113_p2.read()) + sc_biguint<8>(i83_cast470_cast_reg_38068.read()));
}

void ShuffleNetV2::thread_tmp_580_cast_fu_19127_p1() {
    tmp_580_cast_fu_19127_p1 = esl_zext<33,10>(tmp_657_cast_fu_19124_p1.read());
}

void ShuffleNetV2::thread_tmp_581_cast_fu_18841_p1() {
    tmp_581_cast_fu_18841_p1 = esl_zext<10,2>(h68_reg_5982.read());
}

void ShuffleNetV2::thread_tmp_581_fu_18837_p1() {
    tmp_581_fu_18837_p1 = esl_zext<64,2>(h68_reg_5982.read());
}

void ShuffleNetV2::thread_tmp_582_fu_19244_p2() {
    tmp_582_fu_19244_p2 = (!tmp_575_reg_38123.read().is_01() || !ci42_cast_fu_19228_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_575_reg_38123.read()) + sc_biguint<7>(ci42_cast_fu_19228_p1.read()));
}

void ShuffleNetV2::thread_tmp_583_cast_fu_19249_p1() {
    tmp_583_cast_fu_19249_p1 = esl_sext<10,7>(tmp_582_fu_19244_p2.read());
}

void ShuffleNetV2::thread_tmp_584_cast_fu_19253_p1() {
    tmp_584_cast_fu_19253_p1 = esl_zext<18,5>(ci42_reg_6037.read());
}

void ShuffleNetV2::thread_tmp_585_fu_18885_p2() {
    tmp_585_fu_18885_p2 = (!p_shl86_cast_fu_18869_p1.read().is_01() || !p_shl87_cast_fu_18881_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl86_cast_fu_18869_p1.read()) - sc_biguint<7>(p_shl87_cast_fu_18881_p1.read()));
}

void ShuffleNetV2::thread_tmp_586_fu_18895_p2() {
    tmp_586_fu_18895_p2 = (!tmp_585_fu_18885_p2.read().is_01() || !co91_cast1_reg_37972.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_585_fu_18885_p2.read()) + sc_biguint<7>(co91_cast1_reg_37972.read()));
}

void ShuffleNetV2::thread_tmp_587_cast_fu_18914_p1() {
    tmp_587_cast_fu_18914_p1 = esl_zext<35,32>(tmp_673_cast_fu_18911_p1.read());
}

void ShuffleNetV2::thread_tmp_588_fu_18906_p2() {
    tmp_588_fu_18906_p2 = (!co91_cast_reg_37967.read().is_01() || !tmp25_fu_18900_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(co91_cast_reg_37967.read()) + sc_biguint<9>(tmp25_fu_18900_p2.read()));
}

void ShuffleNetV2::thread_tmp_589_cast_fu_18956_p1() {
    tmp_589_cast_fu_18956_p1 = esl_zext<12,9>(tmp_588_reg_38035.read());
}

void ShuffleNetV2::thread_tmp_590_fu_19530_p2() {
    tmp_590_fu_19530_p2 = (!p_shl84_cast_fu_19514_p1.read().is_01() || !p_shl85_cast_fu_19526_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl84_cast_fu_19514_p1.read()) - sc_biguint<7>(p_shl85_cast_fu_19526_p1.read()));
}

void ShuffleNetV2::thread_tmp_591_cast_fu_16970_p1() {
    tmp_591_cast_fu_16970_p1 = esl_sext<10,8>(tmp_526_fu_16964_p2.read());
}

void ShuffleNetV2::thread_tmp_591_fu_19536_p2() {
    tmp_591_fu_19536_p2 = (!i86_cast1_reg_38230.read().is_01() || !tmp_590_fu_19530_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(i86_cast1_reg_38230.read()) + sc_biguint<7>(tmp_590_fu_19530_p2.read()));
}

void ShuffleNetV2::thread_tmp_592_fu_19581_p1() {
    tmp_592_fu_19581_p1 = esl_zext<64,32>(tmp_664_cast_fu_19578_p1.read());
}

void ShuffleNetV2::thread_tmp_593_fu_19555_p2() {
    tmp_593_fu_19555_p2 = (!tmp28_cast_fu_19551_p1.read().is_01() || !i86_cast_reg_38225.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp28_cast_fu_19551_p1.read()) + sc_biguint<11>(i86_cast_reg_38225.read()));
}

void ShuffleNetV2::thread_tmp_594_cast_fu_19560_p1() {
    tmp_594_cast_fu_19560_p1 = esl_zext<33,11>(tmp_593_reg_38256.read());
}

void ShuffleNetV2::thread_tmp_595_cast_cast_fu_17533_p1() {
    tmp_595_cast_cast_fu_17533_p1 = esl_sext<9,7>(tmp_531_fu_17527_p2.read());
}

void ShuffleNetV2::thread_tmp_595_fu_19297_p2() {
    tmp_595_fu_19297_p2 = (!p_shl88_cast_fu_19281_p1.read().is_01() || !p_shl89_cast_fu_19293_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl88_cast_fu_19281_p1.read()) - sc_biguint<7>(p_shl89_cast_fu_19293_p1.read()));
}

void ShuffleNetV2::thread_tmp_596_cast_fu_17575_p1() {
    tmp_596_cast_fu_17575_p1 = esl_sext<32,7>(tmp_532_reg_37539.read());
}

void ShuffleNetV2::thread_tmp_596_fu_19307_p2() {
    tmp_596_fu_19307_p2 = (!tmp_595_fu_19297_p2.read().is_01() || !tmp_661_cast_reg_38128.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_595_fu_19297_p2.read()) + sc_biguint<7>(tmp_661_cast_reg_38128.read()));
}

void ShuffleNetV2::thread_tmp_597_fu_19336_p2() {
    tmp_597_fu_19336_p2 = (!p_shl90_cast_fu_19320_p1.read().is_01() || !p_shl91_cast_fu_19332_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl90_cast_fu_19320_p1.read()) - sc_biguint<8>(p_shl91_cast_fu_19332_p1.read()));
}

void ShuffleNetV2::thread_tmp_598_fu_19352_p2() {
    tmp_598_fu_19352_p2 = (!tmp27_fu_19346_p2.read().is_01() || !co93_cast_reg_38110.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp27_fu_19346_p2.read()) + sc_biguint<11>(co93_cast_reg_38110.read()));
}

void ShuffleNetV2::thread_tmp_599_cast_fu_17553_p1() {
    tmp_599_cast_fu_17553_p1 = esl_sext<10,9>(tmp_534_reg_37544.read());
}

void ShuffleNetV2::thread_tmp_599_fu_19362_p4() {
    tmp_599_fu_19362_p4 = tmp_596_fu_19307_p2.read().range(6, 3);
}

void ShuffleNetV2::thread_tmp_600_fu_19751_p2() {
    tmp_600_fu_19751_p2 = (!co96_cast_fu_19705_p1.read().is_01() || !ap_const_lv7_30.is_01())? sc_lv<7>(): (sc_biguint<7>(co96_cast_fu_19705_p1.read()) + sc_biguint<7>(ap_const_lv7_30));
}

void ShuffleNetV2::thread_tmp_601_cast_fu_19640_p1() {
    tmp_601_cast_fu_19640_p1 = esl_zext<10,4>(h_71_fu_19634_p2.read());
}

void ShuffleNetV2::thread_tmp_601_fu_9158_p1() {
    tmp_601_fu_9158_p1 = esl_sext<64,32>(bias_V_read_reg_34219.read());
}

void ShuffleNetV2::thread_tmp_602_fu_19960_p2() {
    tmp_602_fu_19960_p2 = (!p_shl92_cast_fu_19944_p1.read().is_01() || !p_shl93_cast_fu_19956_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl92_cast_fu_19944_p1.read()) - sc_biguint<7>(p_shl93_cast_fu_19956_p1.read()));
}

void ShuffleNetV2::thread_tmp_603_cast1_fu_19799_p1() {
    tmp_603_cast1_fu_19799_p1 = esl_zext<10,4>(h_73_fu_19793_p2.read());
}

void ShuffleNetV2::thread_tmp_603_cast2_fu_19803_p1() {
    tmp_603_cast2_fu_19803_p1 = esl_zext<11,4>(h_73_fu_19793_p2.read());
}

void ShuffleNetV2::thread_tmp_603_cast_fu_17643_p1() {
    tmp_603_cast_fu_17643_p1 = esl_zext<7,4>(p_lshr_f6_cast_fu_17633_p4.read());
}

void ShuffleNetV2::thread_tmp_603_fu_9174_p1() {
    tmp_603_fu_9174_p1 = esl_sext<64,32>(shuffle_conv_3x3_V_r_reg_34240.read());
}

void ShuffleNetV2::thread_tmp_604_cast_fu_19691_p1() {
    tmp_604_cast_fu_19691_p1 = esl_zext<15,4>(w_74_fu_19685_p2.read());
}

void ShuffleNetV2::thread_tmp_604_fu_9177_p1() {
    tmp_604_fu_9177_p1 = esl_sext<64,32>(image_V_read_reg_34250.read());
}

void ShuffleNetV2::thread_tmp_605_cast_cast_fu_17965_p1() {
    tmp_605_cast_cast_fu_17965_p1 = esl_sext<9,7>(tmp_545_fu_17959_p2.read());
}

void ShuffleNetV2::thread_tmp_605_fu_20006_p2() {
    tmp_605_fu_20006_p2 = (!tmp_602_reg_38378.read().is_01() || !ci44_cast_fu_19990_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_602_reg_38378.read()) + sc_biguint<7>(ci44_cast_fu_19990_p1.read()));
}

void ShuffleNetV2::thread_tmp_606_cast1_fu_20011_p1() {
    tmp_606_cast1_fu_20011_p1 = esl_sext<10,7>(tmp_605_fu_20006_p2.read());
}

void ShuffleNetV2::thread_tmp_606_cast_fu_18007_p1() {
    tmp_606_cast_fu_18007_p1 = esl_sext<32,7>(tmp_546_reg_37696.read());
}

void ShuffleNetV2::thread_tmp_606_fu_9273_p3() {
    tmp_606_fu_9273_p3 = esl_concat<2,5>(ci_reg_4320.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_607_cast_fu_20015_p1() {
    tmp_607_cast_fu_20015_p1 = esl_zext<18,5>(ci44_reg_6158.read());
}

void ShuffleNetV2::thread_tmp_607_fu_9285_p3() {
    tmp_607_fu_9285_p3 = esl_concat<2,1>(ci_reg_4320.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_608_cast1_fu_19889_p1() {
    tmp_608_cast1_fu_19889_p1 = esl_zext<14,4>(w_76_fu_19883_p2.read());
}

void ShuffleNetV2::thread_tmp_608_cast_fu_19893_p1() {
    tmp_608_cast_fu_19893_p1 = esl_zext<15,4>(w_76_fu_19883_p2.read());
}

void ShuffleNetV2::thread_tmp_608_fu_9297_p2() {
    tmp_608_fu_9297_p2 = (!p_shl276_cast_fu_9293_p1.read().is_01() || !tmp_787_cast_fu_9281_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl276_cast_fu_9293_p1.read()) + sc_biguint<8>(tmp_787_cast_fu_9281_p1.read()));
}

void ShuffleNetV2::thread_tmp_609_cast_fu_17985_p1() {
    tmp_609_cast_fu_17985_p1 = esl_sext<10,9>(tmp_548_reg_37701.read());
}

void ShuffleNetV2::thread_tmp_609_fu_20292_p2() {
    tmp_609_fu_20292_p2 = (!p_shl94_cast_fu_20276_p1.read().is_01() || !p_shl95_cast_fu_20288_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl94_cast_fu_20276_p1.read()) - sc_biguint<7>(p_shl95_cast_fu_20288_p1.read()));
}

void ShuffleNetV2::thread_tmp_610_fu_20302_p2() {
    tmp_610_fu_20302_p2 = (!i92_cast1_reg_38485.read().is_01() || !tmp_609_fu_20292_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(i92_cast1_reg_38485.read()) + sc_biguint<7>(tmp_609_fu_20292_p2.read()));
}

void ShuffleNetV2::thread_tmp_611_fu_20339_p1() {
    tmp_611_fu_20339_p1 = esl_zext<64,32>(tmp_695_cast_fu_20336_p1.read());
}

void ShuffleNetV2::thread_tmp_612_fu_20313_p2() {
    tmp_612_fu_20313_p2 = (!tmp30_fu_20307_p2.read().is_01() || !i92_cast_reg_38480.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp30_fu_20307_p2.read()) + sc_biguint<11>(i92_cast_reg_38480.read()));
}

void ShuffleNetV2::thread_tmp_613_cast_fu_20318_p1() {
    tmp_613_cast_fu_20318_p1 = esl_zext<33,11>(tmp_612_reg_38511.read());
}

void ShuffleNetV2::thread_tmp_613_fu_9417_p3() {
    tmp_613_fu_9417_p3 = esl_concat<5,5>(co_reg_4353.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_614_cast_fu_17316_p1() {
    tmp_614_cast_fu_17316_p1 = esl_sext<9,7>(tmp_540_fu_17310_p2.read());
}

void ShuffleNetV2::thread_tmp_614_fu_20059_p2() {
    tmp_614_fu_20059_p2 = (!p_shl96_cast_fu_20043_p1.read().is_01() || !p_shl97_cast_fu_20055_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl96_cast_fu_20043_p1.read()) - sc_biguint<7>(p_shl97_cast_fu_20055_p1.read()));
}

void ShuffleNetV2::thread_tmp_615_cast_fu_17336_p1() {
    tmp_615_cast_fu_17336_p1 = esl_sext<32,7>(tmp_541_reg_37474.read());
}

void ShuffleNetV2::thread_tmp_615_fu_20069_p2() {
    tmp_615_fu_20069_p2 = (!tmp_614_fu_20059_p2.read().is_01() || !tmp_691_cast_reg_38383.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_614_fu_20059_p2.read()) + sc_biguint<7>(tmp_691_cast_reg_38383.read()));
}

void ShuffleNetV2::thread_tmp_616_fu_20098_p2() {
    tmp_616_fu_20098_p2 = (!p_shl98_cast_fu_20082_p1.read().is_01() || !p_shl99_cast_fu_20094_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl98_cast_fu_20082_p1.read()) - sc_biguint<8>(p_shl99_cast_fu_20094_p1.read()));
}

void ShuffleNetV2::thread_tmp_617_fu_20114_p2() {
    tmp_617_fu_20114_p2 = (!tmp29_fu_20108_p2.read().is_01() || !co98_cast_reg_38365.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp29_fu_20108_p2.read()) + sc_biguint<11>(co98_cast_reg_38365.read()));
}

void ShuffleNetV2::thread_tmp_618_fu_20124_p4() {
    tmp_618_fu_20124_p4 = tmp_615_fu_20069_p2.read().range(6, 3);
}

void ShuffleNetV2::thread_tmp_619_cast1_fu_20376_p1() {
    tmp_619_cast1_fu_20376_p1 = esl_zext<12,2>(w77_reg_6213.read());
}

void ShuffleNetV2::thread_tmp_619_cast_fu_20380_p1() {
    tmp_619_cast_fu_20380_p1 = esl_zext<36,2>(w77_reg_6213.read());
}

void ShuffleNetV2::thread_tmp_619_fu_9429_p3() {
    tmp_619_fu_9429_p3 = esl_concat<5,3>(co_reg_4353.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_620_fu_20753_p2() {
    tmp_620_fu_20753_p2 = (!p_shl102_cast_fu_20737_p1.read().is_01() || !p_shl103_cast_fu_20749_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl102_cast_fu_20737_p1.read()) - sc_biguint<7>(p_shl103_cast_fu_20749_p1.read()));
}

void ShuffleNetV2::thread_tmp_621_fu_20657_p2() {
    tmp_621_fu_20657_p2 = (!p_shl100_cast_fu_20641_p1.read().is_01() || !p_shl101_cast_fu_20653_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl100_cast_fu_20641_p1.read()) - sc_biguint<7>(p_shl101_cast_fu_20653_p1.read()));
}

void ShuffleNetV2::thread_tmp_622_fu_20667_p2() {
    tmp_622_fu_20667_p2 = (!i95_cast1_reg_38628.read().is_01() || !tmp_621_fu_20657_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(i95_cast1_reg_38628.read()) + sc_biguint<7>(tmp_621_fu_20657_p2.read()));
}

void ShuffleNetV2::thread_tmp_623_cast_fu_17771_p1() {
    tmp_623_cast_fu_17771_p1 = esl_sext<10,8>(tmp_552_fu_17765_p2.read());
}

void ShuffleNetV2::thread_tmp_623_fu_20704_p1() {
    tmp_623_fu_20704_p1 = esl_zext<64,32>(tmp_712_cast_fu_20701_p1.read());
}

void ShuffleNetV2::thread_tmp_624_fu_20678_p2() {
    tmp_624_fu_20678_p2 = (!tmp32_fu_20672_p2.read().is_01() || !i95_cast_reg_38623.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp32_fu_20672_p2.read()) + sc_biguint<11>(i95_cast_reg_38623.read()));
}

void ShuffleNetV2::thread_tmp_625_cast_fu_20683_p1() {
    tmp_625_cast_fu_20683_p1 = esl_zext<33,11>(tmp_624_reg_38654.read());
}

void ShuffleNetV2::thread_tmp_625_fu_9441_p2() {
    tmp_625_fu_9441_p2 = (!p_shl281_cast_fu_9425_p1.read().is_01() || !p_shl282_cast_fu_9437_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl281_cast_fu_9425_p1.read()) - sc_biguint<11>(p_shl282_cast_fu_9437_p1.read()));
}

void ShuffleNetV2::thread_tmp_626_cast_fu_20400_p1() {
    tmp_626_cast_fu_20400_p1 = esl_zext<10,2>(h74_reg_6224.read());
}

void ShuffleNetV2::thread_tmp_626_fu_20396_p1() {
    tmp_626_fu_20396_p1 = esl_zext<64,2>(h74_reg_6224.read());
}

void ShuffleNetV2::thread_tmp_627_fu_20799_p2() {
    tmp_627_fu_20799_p2 = (!tmp_620_reg_38678.read().is_01() || !ci46_cast_fu_20783_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_620_reg_38678.read()) + sc_biguint<7>(ci46_cast_fu_20783_p1.read()));
}

void ShuffleNetV2::thread_tmp_628_cast_fu_20804_p1() {
    tmp_628_cast_fu_20804_p1 = esl_sext<10,7>(tmp_627_fu_20799_p2.read());
}

void ShuffleNetV2::thread_tmp_628_fu_9495_p3() {
    tmp_628_fu_9495_p3 = esl_concat<2,5>(newIndex_fu_9485_p4.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_629_cast_fu_20808_p1() {
    tmp_629_cast_fu_20808_p1 = esl_zext<18,5>(ci46_reg_6279.read());
}

void ShuffleNetV2::thread_tmp_629_fu_9507_p3() {
    tmp_629_fu_9507_p3 = esl_concat<2,3>(newIndex_fu_9485_p4.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_630_fu_20444_p2() {
    tmp_630_fu_20444_p2 = (!p_shl106_cast_fu_20428_p1.read().is_01() || !p_shl107_cast_fu_20440_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl106_cast_fu_20428_p1.read()) - sc_biguint<7>(p_shl107_cast_fu_20440_p1.read()));
}

void ShuffleNetV2::thread_tmp_631_fu_20454_p2() {
    tmp_631_fu_20454_p2 = (!tmp_630_fu_20444_p2.read().is_01() || !co101_cast1_reg_38527.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_630_fu_20444_p2.read()) + sc_biguint<7>(co101_cast1_reg_38527.read()));
}

void ShuffleNetV2::thread_tmp_632_cast_fu_20473_p1() {
    tmp_632_cast_fu_20473_p1 = esl_zext<35,32>(tmp_731_cast_fu_20470_p1.read());
}

void ShuffleNetV2::thread_tmp_632_fu_9519_p2() {
    tmp_632_fu_9519_p2 = (!p_shl279_cast_fu_9503_p1.read().is_01() || !p_shl280_cast_fu_9515_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl279_cast_fu_9503_p1.read()) - sc_biguint<8>(p_shl280_cast_fu_9515_p1.read()));
}

void ShuffleNetV2::thread_tmp_633_cast_fu_18405_p1() {
    tmp_633_cast_fu_18405_p1 = esl_zext<7,4>(p_lshr_f7_cast_fu_18395_p4.read());
}

void ShuffleNetV2::thread_tmp_633_fu_20465_p2() {
    tmp_633_fu_20465_p2 = (!co101_cast_reg_38522.read().is_01() || !tmp31_fu_20459_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(co101_cast_reg_38522.read()) + sc_biguint<9>(tmp31_fu_20459_p2.read()));
}

void ShuffleNetV2::thread_tmp_634_cast_fu_20515_p1() {
    tmp_634_cast_fu_20515_p1 = esl_zext<12,9>(tmp_633_reg_38590.read());
}

void ShuffleNetV2::thread_tmp_634_fu_9319_p2() {
    tmp_634_fu_9319_p2 = (!tmp_302_cast_fu_9315_p1.read().is_01() || !tmp_608_reg_34443.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_302_cast_fu_9315_p1.read()) + sc_biguint<8>(tmp_608_reg_34443.read()));
}

void ShuffleNetV2::thread_tmp_635_fu_21085_p2() {
    tmp_635_fu_21085_p2 = (!p_shl104_cast_fu_21069_p1.read().is_01() || !p_shl105_cast_fu_21081_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl104_cast_fu_21069_p1.read()) - sc_biguint<7>(p_shl105_cast_fu_21081_p1.read()));
}

void ShuffleNetV2::thread_tmp_636_cast_cast_fu_18735_p1() {
    tmp_636_cast_cast_fu_18735_p1 = esl_sext<9,7>(tmp_564_fu_18729_p2.read());
}

void ShuffleNetV2::thread_tmp_636_fu_21095_p2() {
    tmp_636_fu_21095_p2 = (!i98_cast1_reg_38785.read().is_01() || !tmp_635_fu_21085_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(i98_cast1_reg_38785.read()) + sc_biguint<7>(tmp_635_fu_21085_p2.read()));
}

void ShuffleNetV2::thread_tmp_637_cast_fu_18777_p1() {
    tmp_637_cast_fu_18777_p1 = esl_sext<32,7>(tmp_565_reg_37951.read());
}

void ShuffleNetV2::thread_tmp_637_fu_21132_p1() {
    tmp_637_fu_21132_p1 = esl_zext<64,32>(tmp_722_cast_fu_21129_p1.read());
}

void ShuffleNetV2::thread_tmp_638_fu_21106_p2() {
    tmp_638_fu_21106_p2 = (!tmp34_fu_21100_p2.read().is_01() || !i98_cast_reg_38780.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp34_fu_21100_p2.read()) + sc_biguint<11>(i98_cast_reg_38780.read()));
}

void ShuffleNetV2::thread_tmp_639_cast_fu_21111_p1() {
    tmp_639_cast_fu_21111_p1 = esl_zext<33,11>(tmp_638_reg_38811.read());
}

void ShuffleNetV2::thread_tmp_639_fu_9374_p2() {
    tmp_639_fu_9374_p2 = (!p_shl277_cast_fu_9356_p3.read().is_01() || !p_shl278_cast_fu_9370_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl277_cast_fu_9356_p3.read()) + sc_biguint<13>(p_shl278_cast_fu_9370_p1.read()));
}

void ShuffleNetV2::thread_tmp_640_cast_fu_18755_p1() {
    tmp_640_cast_fu_18755_p1 = esl_sext<10,9>(tmp_567_reg_37956.read());
}

void ShuffleNetV2::thread_tmp_640_fu_20852_p2() {
    tmp_640_fu_20852_p2 = (!p_shl108_cast_fu_20836_p1.read().is_01() || !p_shl109_cast_fu_20848_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl108_cast_fu_20836_p1.read()) - sc_biguint<7>(p_shl109_cast_fu_20848_p1.read()));
}

void ShuffleNetV2::thread_tmp_641_fu_20862_p2() {
    tmp_641_fu_20862_p2 = (!tmp_640_fu_20852_p2.read().is_01() || !tmp_719_cast_reg_38683.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_640_fu_20852_p2.read()) + sc_biguint<7>(tmp_719_cast_reg_38683.read()));
}

void ShuffleNetV2::thread_tmp_642_fu_20891_p2() {
    tmp_642_fu_20891_p2 = (!p_shl110_cast_fu_20875_p1.read().is_01() || !p_shl111_cast_fu_20887_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl110_cast_fu_20875_p1.read()) - sc_biguint<8>(p_shl111_cast_fu_20887_p1.read()));
}

void ShuffleNetV2::thread_tmp_643_fu_20907_p2() {
    tmp_643_fu_20907_p2 = (!tmp33_fu_20901_p2.read().is_01() || !co103_cast_reg_38665.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp33_fu_20901_p2.read()) + sc_biguint<11>(co103_cast_reg_38665.read()));
}

void ShuffleNetV2::thread_tmp_644_fu_20917_p4() {
    tmp_644_fu_20917_p4 = tmp_641_fu_20862_p2.read().range(6, 3);
}

void ShuffleNetV2::thread_tmp_645_fu_21302_p2() {
    tmp_645_fu_21302_p2 = (!co106_cast_fu_21256_p1.read().is_01() || !ap_const_lv7_30.is_01())? sc_lv<7>(): (sc_biguint<7>(co106_cast_fu_21256_p1.read()) + sc_biguint<7>(ap_const_lv7_30));
}

void ShuffleNetV2::thread_tmp_646_cast_fu_21191_p1() {
    tmp_646_cast_fu_21191_p1 = esl_zext<10,4>(h_77_fu_21185_p2.read());
}

void ShuffleNetV2::thread_tmp_646_fu_9328_p2() {
    tmp_646_fu_9328_p2 = (!tmp_303_cast_fu_9324_p1.read().is_01() || !tmp_787_cast_reg_34438.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_303_cast_fu_9324_p1.read()) + sc_biguint<8>(tmp_787_cast_reg_34438.read()));
}

void ShuffleNetV2::thread_tmp_647_fu_21511_p2() {
    tmp_647_fu_21511_p2 = (!p_shl112_cast_fu_21495_p1.read().is_01() || !p_shl113_cast_fu_21507_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl112_cast_fu_21495_p1.read()) - sc_biguint<7>(p_shl113_cast_fu_21507_p1.read()));
}

void ShuffleNetV2::thread_tmp_648_cast1_fu_21350_p1() {
    tmp_648_cast1_fu_21350_p1 = esl_zext<10,4>(h_79_fu_21344_p2.read());
}

void ShuffleNetV2::thread_tmp_648_cast_fu_21354_p1() {
    tmp_648_cast_fu_21354_p1 = esl_zext<11,4>(h_79_fu_21344_p2.read());
}

void ShuffleNetV2::thread_tmp_648_fu_9341_p1() {
    tmp_648_fu_9341_p1 = esl_zext<64,13>(tmp_697_fu_9333_p3.read());
}

void ShuffleNetV2::thread_tmp_649_cast_cast_fu_18533_p1() {
    tmp_649_cast_cast_fu_18533_p1 = esl_sext<9,8>(tmp_571_fu_18527_p2.read());
}

void ShuffleNetV2::thread_tmp_649_cast_fu_21242_p1() {
    tmp_649_cast_fu_21242_p1 = esl_zext<15,4>(w_80_fu_21236_p2.read());
}

void ShuffleNetV2::thread_tmp_649_fu_9541_p2() {
    tmp_649_fu_9541_p2 = (!tmp_632_reg_34515.read().is_01() || !tmp_307_cast_fu_9537_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_632_reg_34515.read()) + sc_biguint<8>(tmp_307_cast_fu_9537_p1.read()));
}

void ShuffleNetV2::thread_tmp_650_fu_21557_p2() {
    tmp_650_fu_21557_p2 = (!tmp_647_reg_38933.read().is_01() || !ci48_cast_fu_21541_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_647_reg_38933.read()) + sc_biguint<7>(ci48_cast_fu_21541_p1.read()));
}

void ShuffleNetV2::thread_tmp_651_cast_fu_21562_p1() {
    tmp_651_cast_fu_21562_p1 = esl_sext<10,7>(tmp_650_fu_21557_p2.read());
}

void ShuffleNetV2::thread_tmp_651_fu_9396_p2() {
    tmp_651_fu_9396_p2 = (!tmp_639_reg_34468.read().is_01() || !tmp_308_cast_fu_9392_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_639_reg_34468.read()) + sc_biguint<13>(tmp_308_cast_fu_9392_p1.read()));
}

void ShuffleNetV2::thread_tmp_652_cast_fu_21566_p1() {
    tmp_652_cast_fu_21566_p1 = esl_zext<18,5>(ci48_reg_6400.read());
}

void ShuffleNetV2::thread_tmp_652_fu_9591_p3() {
    tmp_652_fu_9591_p3 = esl_concat<5,2>(co5_reg_4388.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_653_cast1_fu_21440_p1() {
    tmp_653_cast1_fu_21440_p1 = esl_zext<14,4>(w_82_fu_21434_p2.read());
}

void ShuffleNetV2::thread_tmp_653_cast_cast_fu_19104_p1() {
    tmp_653_cast_cast_fu_19104_p1 = esl_sext<8,7>(tmp_576_fu_19098_p2.read());
}

void ShuffleNetV2::thread_tmp_653_cast_fu_21444_p1() {
    tmp_653_cast_fu_21444_p1 = esl_zext<15,4>(w_82_fu_21434_p2.read());
}

void ShuffleNetV2::thread_tmp_653_fu_9603_p2() {
    tmp_653_fu_9603_p2 = (!p_shl283_cast_fu_9599_p1.read().is_01() || !tmp_310_cast_fu_9587_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl283_cast_fu_9599_p1.read()) - sc_biguint<8>(tmp_310_cast_fu_9587_p1.read()));
}

void ShuffleNetV2::thread_tmp_654_cast_fu_19146_p1() {
    tmp_654_cast_fu_19146_p1 = esl_sext<32,7>(tmp_577_reg_38094.read());
}

void ShuffleNetV2::thread_tmp_654_fu_21843_p2() {
    tmp_654_fu_21843_p2 = (!p_shl114_cast_fu_21827_p1.read().is_01() || !p_shl115_cast_fu_21839_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl114_cast_fu_21827_p1.read()) - sc_biguint<7>(p_shl115_cast_fu_21839_p1.read()));
}

void ShuffleNetV2::thread_tmp_655_fu_21853_p2() {
    tmp_655_fu_21853_p2 = (!i104_cast1_reg_39040.read().is_01() || !tmp_654_fu_21843_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(i104_cast1_reg_39040.read()) + sc_biguint<7>(tmp_654_fu_21843_p2.read()));
}

void ShuffleNetV2::thread_tmp_656_fu_21890_p1() {
    tmp_656_fu_21890_p1 = esl_zext<64,32>(tmp_753_cast_fu_21887_p1.read());
}

void ShuffleNetV2::thread_tmp_657_cast_fu_19124_p1() {
    tmp_657_cast_fu_19124_p1 = esl_sext<10,8>(tmp_579_reg_38099.read());
}

void ShuffleNetV2::thread_tmp_657_fu_21864_p2() {
    tmp_657_fu_21864_p2 = (!tmp36_fu_21858_p2.read().is_01() || !i104_cast_reg_39035.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp36_fu_21858_p2.read()) + sc_biguint<11>(i104_cast_reg_39035.read()));
}

void ShuffleNetV2::thread_tmp_658_cast_fu_21869_p1() {
    tmp_658_cast_fu_21869_p1 = esl_zext<33,11>(tmp_657_reg_39066.read());
}

void ShuffleNetV2::thread_tmp_658_fu_9644_p2() {
    tmp_658_fu_9644_p2 = (!tmp_925_cast_reg_34584.read().is_01() || !tmp_314_cast_fu_9640_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_925_cast_reg_34584.read()) + sc_biguint<9>(tmp_314_cast_fu_9640_p1.read()));
}

void ShuffleNetV2::thread_tmp_659_fu_21610_p2() {
    tmp_659_fu_21610_p2 = (!p_shl116_cast_fu_21594_p1.read().is_01() || !p_shl117_cast_fu_21606_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl116_cast_fu_21594_p1.read()) - sc_biguint<7>(p_shl117_cast_fu_21606_p1.read()));
}

void ShuffleNetV2::thread_tmp_660_fu_21620_p2() {
    tmp_660_fu_21620_p2 = (!tmp_659_fu_21610_p2.read().is_01() || !tmp_749_cast_reg_38938.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_659_fu_21610_p2.read()) + sc_biguint<7>(tmp_749_cast_reg_38938.read()));
}

void ShuffleNetV2::thread_tmp_661_cast_fu_19214_p1() {
    tmp_661_cast_fu_19214_p1 = esl_zext<7,4>(p_lshr_f8_cast_fu_19204_p4.read());
}

void ShuffleNetV2::thread_tmp_661_fu_21649_p2() {
    tmp_661_fu_21649_p2 = (!p_shl118_cast_fu_21633_p1.read().is_01() || !p_shl119_cast_fu_21645_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl118_cast_fu_21633_p1.read()) - sc_biguint<8>(p_shl119_cast_fu_21645_p1.read()));
}

void ShuffleNetV2::thread_tmp_662_fu_21665_p2() {
    tmp_662_fu_21665_p2 = (!tmp35_fu_21659_p2.read().is_01() || !co108_cast_reg_38920.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp35_fu_21659_p2.read()) + sc_biguint<11>(co108_cast_reg_38920.read()));
}

void ShuffleNetV2::thread_tmp_663_fu_21675_p4() {
    tmp_663_fu_21675_p4 = tmp_660_fu_21620_p2.read().range(6, 3);
}

void ShuffleNetV2::thread_tmp_664_cast1_fu_21927_p1() {
    tmp_664_cast1_fu_21927_p1 = esl_zext<12,2>(w83_reg_6455.read());
}

void ShuffleNetV2::thread_tmp_664_cast2_fu_21931_p1() {
    tmp_664_cast2_fu_21931_p1 = esl_zext<36,2>(w83_reg_6455.read());
}

void ShuffleNetV2::thread_tmp_664_cast_fu_19578_p1() {
    tmp_664_cast_fu_19578_p1 = esl_sext<32,7>(tmp_591_reg_38251.read());
}

void ShuffleNetV2::thread_tmp_664_fu_9192_p2() {
    tmp_664_fu_9192_p2 = (!tmp_763_cast_reg_34261.read().is_01() || !ap_const_lv33_C18.is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_763_cast_reg_34261.read()) + sc_biguint<33>(ap_const_lv33_C18));
}

void ShuffleNetV2::thread_tmp_665_fu_22312_p2() {
    tmp_665_fu_22312_p2 = (!p_shl122_cast_fu_22296_p1.read().is_01() || !p_shl123_cast_fu_22308_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl122_cast_fu_22296_p1.read()) - sc_biguint<7>(p_shl123_cast_fu_22308_p1.read()));
}

void ShuffleNetV2::thread_tmp_666_fu_22216_p2() {
    tmp_666_fu_22216_p2 = (!p_shl120_cast_fu_22200_p1.read().is_01() || !p_shl121_cast_fu_22212_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl120_cast_fu_22200_p1.read()) - sc_biguint<7>(p_shl121_cast_fu_22212_p1.read()));
}

void ShuffleNetV2::thread_tmp_667_fu_22226_p2() {
    tmp_667_fu_22226_p2 = (!i107_cast1_reg_39183.read().is_01() || !tmp_666_fu_22216_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(i107_cast1_reg_39183.read()) + sc_biguint<7>(tmp_666_fu_22216_p2.read()));
}

void ShuffleNetV2::thread_tmp_668_fu_22263_p1() {
    tmp_668_fu_22263_p1 = esl_zext<64,32>(tmp_770_cast_fu_22260_p1.read());
}

void ShuffleNetV2::thread_tmp_669_fu_22237_p2() {
    tmp_669_fu_22237_p2 = (!tmp38_fu_22231_p2.read().is_01() || !i107_cast_reg_39178.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp38_fu_22231_p2.read()) + sc_biguint<11>(i107_cast_reg_39178.read()));
}

void ShuffleNetV2::thread_tmp_670_cast_fu_22242_p1() {
    tmp_670_cast_fu_22242_p1 = esl_zext<33,11>(tmp_669_reg_39209.read());
}

void ShuffleNetV2::thread_tmp_670_fu_9197_p1() {
    tmp_670_fu_9197_p1 = esl_sext<64,33>(tmp_664_fu_9192_p2.read());
}

void ShuffleNetV2::thread_tmp_671_cast_fu_21951_p1() {
    tmp_671_cast_fu_21951_p1 = esl_zext<10,2>(h80_reg_6466.read());
}

void ShuffleNetV2::thread_tmp_671_fu_21947_p1() {
    tmp_671_fu_21947_p1 = esl_zext<64,2>(h80_reg_6466.read());
}

void ShuffleNetV2::thread_tmp_672_cast_fu_18891_p1() {
    tmp_672_cast_fu_18891_p1 = esl_sext<9,7>(tmp_585_fu_18885_p2.read());
}

void ShuffleNetV2::thread_tmp_672_fu_22358_p2() {
    tmp_672_fu_22358_p2 = (!tmp_665_reg_39233.read().is_01() || !ci50_cast_fu_22342_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_665_reg_39233.read()) + sc_biguint<7>(ci50_cast_fu_22342_p1.read()));
}

void ShuffleNetV2::thread_tmp_673_cast1_fu_22363_p1() {
    tmp_673_cast1_fu_22363_p1 = esl_sext<10,7>(tmp_672_fu_22358_p2.read());
}

void ShuffleNetV2::thread_tmp_673_cast_fu_18911_p1() {
    tmp_673_cast_fu_18911_p1 = esl_sext<32,7>(tmp_586_reg_38029.read());
}

void ShuffleNetV2::thread_tmp_673_fu_9224_p2() {
    tmp_673_fu_9224_p2 = (!tmp_763_cast_reg_34261.read().is_01() || !ap_const_lv33_E18.is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_763_cast_reg_34261.read()) + sc_biguint<33>(ap_const_lv33_E18));
}

void ShuffleNetV2::thread_tmp_674_cast_fu_22367_p1() {
    tmp_674_cast_fu_22367_p1 = esl_zext<18,5>(ci50_reg_6521.read());
}

void ShuffleNetV2::thread_tmp_674_fu_9229_p1() {
    tmp_674_fu_9229_p1 = esl_sext<64,33>(tmp_673_fu_9224_p2.read());
}

void ShuffleNetV2::thread_tmp_675_fu_21995_p2() {
    tmp_675_fu_21995_p2 = (!p_shl126_cast_fu_21979_p1.read().is_01() || !p_shl127_cast_fu_21991_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl126_cast_fu_21979_p1.read()) - sc_biguint<7>(p_shl127_cast_fu_21991_p1.read()));
}

void ShuffleNetV2::thread_tmp_676_fu_22005_p2() {
    tmp_676_fu_22005_p2 = (!tmp_675_fu_21995_p2.read().is_01() || !co111_cast_reg_39082.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_675_fu_21995_p2.read()) + sc_biguint<7>(co111_cast_reg_39082.read()));
}

void ShuffleNetV2::thread_tmp_677_cast_fu_22024_p1() {
    tmp_677_cast_fu_22024_p1 = esl_zext<35,32>(tmp_789_cast_fu_22021_p1.read());
}

void ShuffleNetV2::thread_tmp_677_fu_9466_p2() {
    tmp_677_fu_9466_p2 = (!tmp_763_cast_reg_34261.read().is_01() || !ap_const_lv33_18.is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_763_cast_reg_34261.read()) + sc_biguint<33>(ap_const_lv33_18));
}

void ShuffleNetV2::thread_tmp_678_fu_22016_p2() {
    tmp_678_fu_22016_p2 = (!co111_cast400_cast_reg_39077.read().is_01() || !tmp37_fu_22010_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(co111_cast400_cast_reg_39077.read()) + sc_biguint<8>(tmp37_fu_22010_p2.read()));
}

void ShuffleNetV2::thread_tmp_679_cast_fu_22069_p1() {
    tmp_679_cast_fu_22069_p1 = esl_zext<12,9>(tmp_792_cast_fu_22066_p1.read());
}

void ShuffleNetV2::thread_tmp_679_fu_9471_p1() {
    tmp_679_fu_9471_p1 = esl_sext<64,33>(tmp_677_fu_9466_p2.read());
}

void ShuffleNetV2::thread_tmp_680_fu_22644_p2() {
    tmp_680_fu_22644_p2 = (!p_shl124_cast_fu_22628_p1.read().is_01() || !p_shl125_cast_fu_22640_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl124_cast_fu_22628_p1.read()) - sc_biguint<7>(p_shl125_cast_fu_22640_p1.read()));
}

void ShuffleNetV2::thread_tmp_681_cast_fu_19342_p1() {
    tmp_681_cast_fu_19342_p1 = esl_sext<11,8>(tmp_597_fu_19336_p2.read());
}

void ShuffleNetV2::thread_tmp_681_fu_22654_p2() {
    tmp_681_fu_22654_p2 = (!i110_cast1_reg_39340.read().is_01() || !tmp_680_fu_22644_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(i110_cast1_reg_39340.read()) + sc_biguint<7>(tmp_680_fu_22644_p2.read()));
}

void ShuffleNetV2::thread_tmp_682_fu_22691_p1() {
    tmp_682_fu_22691_p1 = esl_zext<64,32>(tmp_780_cast_fu_22688_p1.read());
}

void ShuffleNetV2::thread_tmp_683_fu_22665_p2() {
    tmp_683_fu_22665_p2 = (!tmp40_fu_22659_p2.read().is_01() || !i110_cast_reg_39335.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp40_fu_22659_p2.read()) + sc_biguint<11>(i110_cast_reg_39335.read()));
}

void ShuffleNetV2::thread_tmp_684_cast_fu_22670_p1() {
    tmp_684_cast_fu_22670_p1 = esl_zext<33,11>(tmp_683_reg_39366.read());
}

void ShuffleNetV2::thread_tmp_684_fu_9481_p1() {
    tmp_684_fu_9481_p1 = co_reg_4353.read().range(3-1, 0);
}

void ShuffleNetV2::thread_tmp_685_fu_22411_p2() {
    tmp_685_fu_22411_p2 = (!p_shl128_cast_fu_22395_p1.read().is_01() || !p_shl129_cast_fu_22407_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl128_cast_fu_22395_p1.read()) - sc_biguint<7>(p_shl129_cast_fu_22407_p1.read()));
}

void ShuffleNetV2::thread_tmp_686_fu_22421_p2() {
    tmp_686_fu_22421_p2 = (!tmp_685_fu_22411_p2.read().is_01() || !tmp_777_cast_reg_39238.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_685_fu_22411_p2.read()) + sc_biguint<7>(tmp_777_cast_reg_39238.read()));
}

void ShuffleNetV2::thread_tmp_687_fu_22450_p2() {
    tmp_687_fu_22450_p2 = (!p_shl130_cast_fu_22434_p1.read().is_01() || !p_shl131_cast_fu_22446_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl130_cast_fu_22434_p1.read()) - sc_biguint<8>(p_shl131_cast_fu_22446_p1.read()));
}

void ShuffleNetV2::thread_tmp_688_fu_22466_p2() {
    tmp_688_fu_22466_p2 = (!tmp39_fu_22460_p2.read().is_01() || !co113_cast_reg_39220.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp39_fu_22460_p2.read()) + sc_biguint<11>(co113_cast_reg_39220.read()));
}

void ShuffleNetV2::thread_tmp_689_fu_22476_p4() {
    tmp_689_fu_22476_p4 = tmp_686_fu_22421_p2.read().range(6, 3);
}

void ShuffleNetV2::thread_tmp_690_fu_22861_p2() {
    tmp_690_fu_22861_p2 = (!co116_cast_fu_22815_p1.read().is_01() || !ap_const_lv7_30.is_01())? sc_lv<7>(): (sc_biguint<7>(co116_cast_fu_22815_p1.read()) + sc_biguint<7>(ap_const_lv7_30));
}

void ShuffleNetV2::thread_tmp_691_cast1_fu_22750_p1() {
    tmp_691_cast1_fu_22750_p1 = esl_zext<10,4>(h_83_fu_22744_p2.read());
}

void ShuffleNetV2::thread_tmp_691_cast_fu_19976_p1() {
    tmp_691_cast_fu_19976_p1 = esl_zext<7,4>(p_lshr_f9_cast_fu_19966_p4.read());
}

void ShuffleNetV2::thread_tmp_691_fu_9447_p1() {
    tmp_691_fu_9447_p1 = esl_sext<33,11>(tmp_625_fu_9441_p2.read());
}

void ShuffleNetV2::thread_tmp_692_fu_23070_p2() {
    tmp_692_fu_23070_p2 = (!p_shl132_cast_fu_23054_p1.read().is_01() || !p_shl133_cast_fu_23066_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl132_cast_fu_23054_p1.read()) - sc_biguint<7>(p_shl133_cast_fu_23066_p1.read()));
}

void ShuffleNetV2::thread_tmp_693_cast1_fu_22909_p1() {
    tmp_693_cast1_fu_22909_p1 = esl_zext<11,4>(h_85_fu_22903_p2.read());
}

void ShuffleNetV2::thread_tmp_693_cast_fu_22913_p1() {
    tmp_693_cast_fu_22913_p1 = esl_zext<10,4>(h_85_fu_22903_p2.read());
}

void ShuffleNetV2::thread_tmp_693_fu_9451_p2() {
    tmp_693_fu_9451_p2 = (!tmp_764_cast_reg_34324.read().is_01() || !tmp_691_fu_9447_p1.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_764_cast_reg_34324.read()) + sc_bigint<33>(tmp_691_fu_9447_p1.read()));
}

void ShuffleNetV2::thread_tmp_694_cast1_fu_22801_p1() {
    tmp_694_cast1_fu_22801_p1 = esl_zext<15,4>(w_86_fu_22795_p2.read());
}

void ShuffleNetV2::thread_tmp_694_cast_fu_20298_p1() {
    tmp_694_cast_fu_20298_p1 = esl_sext<11,7>(tmp_609_fu_20292_p2.read());
}

void ShuffleNetV2::thread_tmp_694_fu_9456_p1() {
    tmp_694_fu_9456_p1 = esl_sext<64,33>(tmp_693_fu_9451_p2.read());
}

void ShuffleNetV2::thread_tmp_695_cast_fu_20336_p1() {
    tmp_695_cast_fu_20336_p1 = esl_sext<32,7>(tmp_610_reg_38506.read());
}

void ShuffleNetV2::thread_tmp_695_fu_23116_p2() {
    tmp_695_fu_23116_p2 = (!tmp_692_reg_39488.read().is_01() || !ci52_cast_fu_23100_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_692_reg_39488.read()) + sc_biguint<7>(ci52_cast_fu_23100_p1.read()));
}

void ShuffleNetV2::thread_tmp_696_cast_fu_23121_p1() {
    tmp_696_cast_fu_23121_p1 = esl_sext<10,7>(tmp_695_fu_23116_p2.read());
}

void ShuffleNetV2::thread_tmp_696_fu_9363_p3() {
    tmp_696_fu_9363_p3 = esl_concat<8,1>(tmp_634_reg_34456.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_697_cast_fu_23125_p1() {
    tmp_697_cast_fu_23125_p1 = esl_zext<18,5>(ci52_reg_6642.read());
}

void ShuffleNetV2::thread_tmp_697_fu_9333_p3() {
    tmp_697_fu_9333_p3 = esl_concat<8,5>(tmp_646_fu_9328_p2.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_698_cast1_fu_22999_p1() {
    tmp_698_cast1_fu_22999_p1 = esl_zext<15,4>(w_88_fu_22993_p2.read());
}

void ShuffleNetV2::thread_tmp_698_cast_fu_23003_p1() {
    tmp_698_cast_fu_23003_p1 = esl_zext<14,4>(w_88_fu_22993_p2.read());
}

void ShuffleNetV2::thread_tmp_698_fu_9345_p2() {
    tmp_698_fu_9345_p2 = (!tmp_604_reg_34389.read().is_01() || !tmp_648_fu_9341_p1.read().is_01())? sc_lv<64>(): (sc_bigint<64>(tmp_604_reg_34389.read()) + sc_biguint<64>(tmp_648_fu_9341_p1.read()));
}

void ShuffleNetV2::thread_tmp_699_fu_23402_p2() {
    tmp_699_fu_23402_p2 = (!p_shl134_cast_fu_23386_p1.read().is_01() || !p_shl135_cast_fu_23398_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl134_cast_fu_23386_p1.read()) - sc_biguint<7>(p_shl135_cast_fu_23398_p1.read()));
}

void ShuffleNetV2::thread_tmp_700_fu_23412_p2() {
    tmp_700_fu_23412_p2 = (!i116_cast1_reg_39595.read().is_01() || !tmp_699_fu_23402_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(i116_cast1_reg_39595.read()) + sc_biguint<7>(tmp_699_fu_23402_p2.read()));
}

void ShuffleNetV2::thread_tmp_701_fu_23449_p1() {
    tmp_701_fu_23449_p1 = esl_zext<64,32>(tmp_811_cast_fu_23446_p1.read());
}

void ShuffleNetV2::thread_tmp_702_fu_23423_p2() {
    tmp_702_fu_23423_p2 = (!tmp42_fu_23417_p2.read().is_01() || !i116_cast_reg_39590.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp42_fu_23417_p2.read()) + sc_biguint<11>(i116_cast_reg_39590.read()));
}

void ShuffleNetV2::thread_tmp_703_cast_fu_23428_p1() {
    tmp_703_cast_fu_23428_p1 = esl_zext<33,11>(tmp_702_reg_39621.read());
}

void ShuffleNetV2::thread_tmp_703_fu_9613_p2() {
    tmp_703_fu_9613_p2 = (!tmp_763_cast_reg_34261.read().is_01() || !ap_const_lv33_30.is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_763_cast_reg_34261.read()) + sc_biguint<33>(ap_const_lv33_30));
}

void ShuffleNetV2::thread_tmp_704_fu_23169_p2() {
    tmp_704_fu_23169_p2 = (!p_shl136_cast_fu_23153_p1.read().is_01() || !p_shl137_cast_fu_23165_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl136_cast_fu_23153_p1.read()) - sc_biguint<7>(p_shl137_cast_fu_23165_p1.read()));
}

void ShuffleNetV2::thread_tmp_705_fu_23179_p2() {
    tmp_705_fu_23179_p2 = (!tmp_704_fu_23169_p2.read().is_01() || !tmp_807_cast_reg_39493.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_704_fu_23169_p2.read()) + sc_biguint<7>(tmp_807_cast_reg_39493.read()));
}

void ShuffleNetV2::thread_tmp_706_fu_23208_p2() {
    tmp_706_fu_23208_p2 = (!p_shl138_cast_fu_23192_p1.read().is_01() || !p_shl139_cast_fu_23204_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl138_cast_fu_23192_p1.read()) - sc_biguint<8>(p_shl139_cast_fu_23204_p1.read()));
}

void ShuffleNetV2::thread_tmp_707_cast_fu_20104_p1() {
    tmp_707_cast_fu_20104_p1 = esl_sext<11,8>(tmp_616_fu_20098_p2.read());
}

void ShuffleNetV2::thread_tmp_707_fu_23224_p2() {
    tmp_707_fu_23224_p2 = (!tmp41_fu_23218_p2.read().is_01() || !co118_cast_reg_39475.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp41_fu_23218_p2.read()) + sc_biguint<11>(co118_cast_reg_39475.read()));
}

void ShuffleNetV2::thread_tmp_708_fu_23234_p4() {
    tmp_708_fu_23234_p4 = tmp_705_fu_23179_p2.read().range(6, 3);
}

void ShuffleNetV2::thread_tmp_709_cast1_fu_23486_p1() {
    tmp_709_cast1_fu_23486_p1 = esl_zext<13,2>(w89_reg_6697.read());
}

void ShuffleNetV2::thread_tmp_709_cast_fu_23490_p1() {
    tmp_709_cast_fu_23490_p1 = esl_zext<36,2>(w89_reg_6697.read());
}

void ShuffleNetV2::thread_tmp_709_fu_9618_p1() {
    tmp_709_fu_9618_p1 = esl_sext<64,33>(tmp_703_fu_9613_p2.read());
}

void ShuffleNetV2::thread_tmp_710_fu_23875_p2() {
    tmp_710_fu_23875_p2 = (!p_shl142_cast_fu_23859_p1.read().is_01() || !p_shl143_cast_fu_23871_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl142_cast_fu_23859_p1.read()) - sc_biguint<7>(p_shl143_cast_fu_23871_p1.read()));
}

void ShuffleNetV2::thread_tmp_711_cast_fu_20663_p1() {
    tmp_711_cast_fu_20663_p1 = esl_sext<11,7>(tmp_621_fu_20657_p2.read());
}

void ShuffleNetV2::thread_tmp_711_fu_23779_p2() {
    tmp_711_fu_23779_p2 = (!p_shl140_cast_fu_23763_p1.read().is_01() || !p_shl141_cast_fu_23775_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl140_cast_fu_23763_p1.read()) - sc_biguint<7>(p_shl141_cast_fu_23775_p1.read()));
}

void ShuffleNetV2::thread_tmp_712_cast_fu_20701_p1() {
    tmp_712_cast_fu_20701_p1 = esl_sext<32,7>(tmp_622_reg_38649.read());
}

void ShuffleNetV2::thread_tmp_712_fu_23789_p2() {
    tmp_712_fu_23789_p2 = (!i119_cast1_reg_39738.read().is_01() || !tmp_711_fu_23779_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(i119_cast1_reg_39738.read()) + sc_biguint<7>(tmp_711_fu_23779_p2.read()));
}

void ShuffleNetV2::thread_tmp_713_fu_23826_p1() {
    tmp_713_fu_23826_p1 = esl_zext<64,32>(tmp_828_cast_fu_23823_p1.read());
}

void ShuffleNetV2::thread_tmp_714_fu_23800_p2() {
    tmp_714_fu_23800_p2 = (!tmp44_fu_23794_p2.read().is_01() || !i119_cast_reg_39733.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp44_fu_23794_p2.read()) + sc_biguint<11>(i119_cast_reg_39733.read()));
}

void ShuffleNetV2::thread_tmp_715_cast_fu_23805_p1() {
    tmp_715_cast_fu_23805_p1 = esl_zext<33,11>(tmp_714_reg_39764.read());
}

void ShuffleNetV2::thread_tmp_715_fu_9653_p3() {
    tmp_715_fu_9653_p3 = esl_concat<9,2>(tmp_658_fu_9644_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_716_cast_fu_23510_p1() {
    tmp_716_cast_fu_23510_p1 = esl_zext<10,2>(h86_reg_6708.read());
}

void ShuffleNetV2::thread_tmp_716_fu_23506_p1() {
    tmp_716_fu_23506_p1 = esl_zext<64,2>(h86_reg_6708.read());
}

void ShuffleNetV2::thread_tmp_717_fu_23921_p2() {
    tmp_717_fu_23921_p2 = (!tmp_710_reg_39788.read().is_01() || !ci54_cast_fu_23905_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_710_reg_39788.read()) + sc_biguint<7>(ci54_cast_fu_23905_p1.read()));
}

void ShuffleNetV2::thread_tmp_718_cast_fu_23926_p1() {
    tmp_718_cast_fu_23926_p1 = esl_sext<10,7>(tmp_717_fu_23921_p2.read());
}

void ShuffleNetV2::thread_tmp_718_fu_9665_p2() {
    tmp_718_fu_9665_p2 = (!p_shl193_fu_9661_p1.read().is_01() || !tmp_926_cast_fu_9649_p1.read().is_01())? sc_lv<64>(): (sc_bigint<64>(p_shl193_fu_9661_p1.read()) - sc_bigint<64>(tmp_926_cast_fu_9649_p1.read()));
}

void ShuffleNetV2::thread_tmp_719_cast1_fu_23930_p1() {
    tmp_719_cast1_fu_23930_p1 = esl_zext<18,5>(ci54_reg_6763.read());
}

void ShuffleNetV2::thread_tmp_719_cast_fu_20769_p1() {
    tmp_719_cast_fu_20769_p1 = esl_zext<7,4>(p_lshr_f10_cast_fu_20759_p4.read());
}

void ShuffleNetV2::thread_tmp_719_fu_9671_p2() {
    tmp_719_fu_9671_p2 = (!tmp_718_fu_9665_p2.read().is_01() || !tmp_603_reg_34365.read().is_01())? sc_lv<64>(): (sc_biguint<64>(tmp_718_fu_9665_p2.read()) + sc_bigint<64>(tmp_603_reg_34365.read()));
}

void ShuffleNetV2::thread_tmp_720_fu_23554_p2() {
    tmp_720_fu_23554_p2 = (!p_shl146_cast_fu_23538_p1.read().is_01() || !p_shl147_cast_fu_23550_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl146_cast_fu_23538_p1.read()) - sc_biguint<7>(p_shl147_cast_fu_23550_p1.read()));
}

void ShuffleNetV2::thread_tmp_721_cast_fu_21091_p1() {
    tmp_721_cast_fu_21091_p1 = esl_sext<11,7>(tmp_635_fu_21085_p2.read());
}

void ShuffleNetV2::thread_tmp_721_fu_23564_p2() {
    tmp_721_fu_23564_p2 = (!tmp_720_fu_23554_p2.read().is_01() || !co121_cast_reg_39637.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_720_fu_23554_p2.read()) + sc_biguint<7>(co121_cast_reg_39637.read()));
}

void ShuffleNetV2::thread_tmp_722_cast1_fu_23583_p1() {
    tmp_722_cast1_fu_23583_p1 = esl_zext<35,32>(tmp_847_cast_fu_23580_p1.read());
}

void ShuffleNetV2::thread_tmp_722_cast_fu_21129_p1() {
    tmp_722_cast_fu_21129_p1 = esl_sext<32,7>(tmp_636_reg_38806.read());
}

void ShuffleNetV2::thread_tmp_722_fu_9791_p2() {
    tmp_722_fu_9791_p2 = (!tmp_763_cast_reg_34261.read().is_01() || !ap_const_lv33_48.is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_763_cast_reg_34261.read()) + sc_biguint<33>(ap_const_lv33_48));
}

void ShuffleNetV2::thread_tmp_723_fu_23575_p2() {
    tmp_723_fu_23575_p2 = (!co121_cast362_cast_reg_39632.read().is_01() || !tmp43_fu_23569_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(co121_cast362_cast_reg_39632.read()) + sc_biguint<8>(tmp43_fu_23569_p2.read()));
}

void ShuffleNetV2::thread_tmp_724_cast_fu_23628_p1() {
    tmp_724_cast_fu_23628_p1 = esl_zext<12,9>(tmp_850_cast_fu_23625_p1.read());
}

void ShuffleNetV2::thread_tmp_724_fu_9796_p1() {
    tmp_724_fu_9796_p1 = esl_sext<64,33>(tmp_722_fu_9791_p2.read());
}

void ShuffleNetV2::thread_tmp_725_fu_24207_p2() {
    tmp_725_fu_24207_p2 = (!p_shl144_cast_fu_24191_p1.read().is_01() || !p_shl145_cast_fu_24203_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl144_cast_fu_24191_p1.read()) - sc_biguint<7>(p_shl145_cast_fu_24203_p1.read()));
}

void ShuffleNetV2::thread_tmp_726_fu_24217_p2() {
    tmp_726_fu_24217_p2 = (!i122_cast1_reg_39895.read().is_01() || !tmp_725_fu_24207_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(i122_cast1_reg_39895.read()) + sc_biguint<7>(tmp_725_fu_24207_p2.read()));
}

void ShuffleNetV2::thread_tmp_727_fu_24254_p1() {
    tmp_727_fu_24254_p1 = esl_zext<64,32>(tmp_838_cast_fu_24251_p1.read());
}

void ShuffleNetV2::thread_tmp_728_fu_24228_p2() {
    tmp_728_fu_24228_p2 = (!tmp46_fu_24222_p2.read().is_01() || !i122_cast_reg_39890.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp46_fu_24222_p2.read()) + sc_biguint<11>(i122_cast_reg_39890.read()));
}

void ShuffleNetV2::thread_tmp_729_cast_fu_24233_p1() {
    tmp_729_cast_fu_24233_p1 = esl_zext<33,11>(tmp_728_reg_39921.read());
}

void ShuffleNetV2::thread_tmp_729_fu_9742_p3() {
    tmp_729_fu_9742_p3 = esl_concat<6,5>(tmp_315_fu_9736_p2.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_730_cast_fu_20450_p1() {
    tmp_730_cast_fu_20450_p1 = esl_sext<9,7>(tmp_630_fu_20444_p2.read());
}

void ShuffleNetV2::thread_tmp_730_fu_23974_p2() {
    tmp_730_fu_23974_p2 = (!p_shl148_cast_fu_23958_p1.read().is_01() || !p_shl149_cast_fu_23970_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl148_cast_fu_23958_p1.read()) - sc_biguint<7>(p_shl149_cast_fu_23970_p1.read()));
}

void ShuffleNetV2::thread_tmp_731_cast_fu_20470_p1() {
    tmp_731_cast_fu_20470_p1 = esl_sext<32,7>(tmp_631_reg_38584.read());
}

void ShuffleNetV2::thread_tmp_731_fu_23984_p2() {
    tmp_731_fu_23984_p2 = (!tmp_730_fu_23974_p2.read().is_01() || !tmp_835_cast_reg_39793.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_730_fu_23974_p2.read()) + sc_biguint<7>(tmp_835_cast_reg_39793.read()));
}

void ShuffleNetV2::thread_tmp_732_fu_24013_p2() {
    tmp_732_fu_24013_p2 = (!p_shl150_cast_fu_23997_p1.read().is_01() || !p_shl151_cast_fu_24009_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl150_cast_fu_23997_p1.read()) - sc_biguint<8>(p_shl151_cast_fu_24009_p1.read()));
}

void ShuffleNetV2::thread_tmp_733_fu_24029_p2() {
    tmp_733_fu_24029_p2 = (!tmp45_fu_24023_p2.read().is_01() || !co123_cast_reg_39775.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp45_fu_24023_p2.read()) + sc_biguint<11>(co123_cast_reg_39775.read()));
}

void ShuffleNetV2::thread_tmp_734_fu_24039_p4() {
    tmp_734_fu_24039_p4 = tmp_731_fu_23984_p2.read().range(6, 3);
}

void ShuffleNetV2::thread_tmp_735_fu_24424_p2() {
    tmp_735_fu_24424_p2 = (!co126_cast_fu_24378_p1.read().is_01() || !ap_const_lv7_30.is_01())? sc_lv<7>(): (sc_biguint<7>(co126_cast_fu_24378_p1.read()) + sc_biguint<7>(ap_const_lv7_30));
}

void ShuffleNetV2::thread_tmp_736_cast_fu_24313_p1() {
    tmp_736_cast_fu_24313_p1 = esl_zext<10,4>(h_89_fu_24307_p2.read());
}

void ShuffleNetV2::thread_tmp_736_fu_9754_p3() {
    tmp_736_fu_9754_p3 = esl_concat<6,3>(tmp_315_fu_9736_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_737_fu_24633_p2() {
    tmp_737_fu_24633_p2 = (!p_shl152_cast_fu_24617_p1.read().is_01() || !p_shl153_cast_fu_24629_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl152_cast_fu_24617_p1.read()) - sc_biguint<7>(p_shl153_cast_fu_24629_p1.read()));
}

void ShuffleNetV2::thread_tmp_738_cast1_fu_24472_p1() {
    tmp_738_cast1_fu_24472_p1 = esl_zext<11,4>(h_91_fu_24466_p2.read());
}

void ShuffleNetV2::thread_tmp_738_cast_fu_24476_p1() {
    tmp_738_cast_fu_24476_p1 = esl_zext<10,4>(h_91_fu_24466_p2.read());
}

void ShuffleNetV2::thread_tmp_738_fu_9766_p2() {
    tmp_738_fu_9766_p2 = (!p_shl287_cast_fu_9750_p1.read().is_01() || !p_shl288_cast_fu_9762_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(p_shl287_cast_fu_9750_p1.read()) - sc_biguint<12>(p_shl288_cast_fu_9762_p1.read()));
}

void ShuffleNetV2::thread_tmp_739_cast1_fu_24364_p1() {
    tmp_739_cast1_fu_24364_p1 = esl_zext<15,4>(w_92_fu_24358_p2.read());
}

void ShuffleNetV2::thread_tmp_739_cast_fu_20897_p1() {
    tmp_739_cast_fu_20897_p1 = esl_sext<11,8>(tmp_642_fu_20891_p2.read());
}

void ShuffleNetV2::thread_tmp_739_fu_9806_p1() {
    tmp_739_fu_9806_p1 = co9_reg_4433.read().range(3-1, 0);
}

void ShuffleNetV2::thread_tmp_740_fu_24679_p2() {
    tmp_740_fu_24679_p2 = (!tmp_737_reg_40043.read().is_01() || !ci56_cast_fu_24663_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_737_reg_40043.read()) + sc_biguint<7>(ci56_cast_fu_24663_p1.read()));
}

void ShuffleNetV2::thread_tmp_741_cast_fu_24684_p1() {
    tmp_741_cast_fu_24684_p1 = esl_sext<10,7>(tmp_740_fu_24679_p2.read());
}

void ShuffleNetV2::thread_tmp_741_fu_9820_p3() {
    tmp_741_fu_9820_p3 = esl_concat<2,5>(newIndex4_fu_9810_p4.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_742_cast_fu_24688_p1() {
    tmp_742_cast_fu_24688_p1 = esl_zext<18,5>(ci56_reg_6884.read());
}

void ShuffleNetV2::thread_tmp_742_fu_9832_p3() {
    tmp_742_fu_9832_p3 = esl_concat<2,3>(newIndex4_fu_9810_p4.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_743_cast1_fu_24562_p1() {
    tmp_743_cast1_fu_24562_p1 = esl_zext<15,4>(w_94_fu_24556_p2.read());
}

void ShuffleNetV2::thread_tmp_743_cast_fu_24566_p1() {
    tmp_743_cast_fu_24566_p1 = esl_zext<14,4>(w_94_fu_24556_p2.read());
}

void ShuffleNetV2::thread_tmp_743_fu_9844_p2() {
    tmp_743_fu_9844_p2 = (!p_shl285_cast_fu_9828_p1.read().is_01() || !p_shl286_cast_fu_9840_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl285_cast_fu_9828_p1.read()) - sc_biguint<8>(p_shl286_cast_fu_9840_p1.read()));
}

void ShuffleNetV2::thread_tmp_744_fu_24973_p2() {
    tmp_744_fu_24973_p2 = (!p_shl154_cast_fu_24957_p1.read().is_01() || !p_shl155_cast_fu_24969_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl154_cast_fu_24957_p1.read()) - sc_biguint<7>(p_shl155_cast_fu_24969_p1.read()));
}

void ShuffleNetV2::thread_tmp_745_fu_24983_p2() {
    tmp_745_fu_24983_p2 = (!i128_cast1_reg_40150.read().is_01() || !tmp_744_fu_24973_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(i128_cast1_reg_40150.read()) + sc_biguint<7>(tmp_744_fu_24973_p2.read()));
}

void ShuffleNetV2::thread_tmp_746_fu_25020_p1() {
    tmp_746_fu_25020_p1 = esl_zext<64,32>(tmp_869_cast_fu_25017_p1.read());
}

void ShuffleNetV2::thread_tmp_747_fu_24994_p2() {
    tmp_747_fu_24994_p2 = (!tmp48_fu_24988_p2.read().is_01() || !i128_cast_reg_40145.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp48_fu_24988_p2.read()) + sc_biguint<11>(i128_cast_reg_40145.read()));
}

void ShuffleNetV2::thread_tmp_748_cast_fu_24999_p1() {
    tmp_748_cast_fu_24999_p1 = esl_zext<33,11>(tmp_747_reg_40176.read());
}

void ShuffleNetV2::thread_tmp_748_fu_9772_p1() {
    tmp_748_fu_9772_p1 = esl_sext<33,12>(tmp_738_fu_9766_p2.read());
}

void ShuffleNetV2::thread_tmp_749_cast_fu_21527_p1() {
    tmp_749_cast_fu_21527_p1 = esl_zext<7,4>(p_lshr_f11_cast_fu_21517_p4.read());
}

void ShuffleNetV2::thread_tmp_749_fu_24732_p2() {
    tmp_749_fu_24732_p2 = (!p_shl156_cast_fu_24716_p1.read().is_01() || !p_shl157_cast_fu_24728_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl156_cast_fu_24716_p1.read()) - sc_biguint<7>(p_shl157_cast_fu_24728_p1.read()));
}

void ShuffleNetV2::thread_tmp_750_fu_24742_p2() {
    tmp_750_fu_24742_p2 = (!tmp_749_fu_24732_p2.read().is_01() || !tmp_865_cast_reg_40048.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_749_fu_24732_p2.read()) + sc_biguint<7>(tmp_865_cast_reg_40048.read()));
}

void ShuffleNetV2::thread_tmp_751_fu_24771_p2() {
    tmp_751_fu_24771_p2 = (!p_shl158_cast_fu_24755_p1.read().is_01() || !p_shl159_cast_fu_24767_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl158_cast_fu_24755_p1.read()) - sc_biguint<8>(p_shl159_cast_fu_24767_p1.read()));
}

void ShuffleNetV2::thread_tmp_752_cast_fu_21849_p1() {
    tmp_752_cast_fu_21849_p1 = esl_sext<11,7>(tmp_654_fu_21843_p2.read());
}

void ShuffleNetV2::thread_tmp_752_fu_24787_p2() {
    tmp_752_fu_24787_p2 = (!tmp47_fu_24781_p2.read().is_01() || !co128_cast337_cast_reg_40030.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp47_fu_24781_p2.read()) + sc_biguint<10>(co128_cast337_cast_reg_40030.read()));
}

void ShuffleNetV2::thread_tmp_753_cast_fu_21887_p1() {
    tmp_753_cast_fu_21887_p1 = esl_sext<32,7>(tmp_655_reg_39061.read());
}

void ShuffleNetV2::thread_tmp_753_fu_24797_p4() {
    tmp_753_fu_24797_p4 = tmp_750_fu_24742_p2.read().range(6, 3);
}

void ShuffleNetV2::thread_tmp_754_cast1_fu_25057_p1() {
    tmp_754_cast1_fu_25057_p1 = esl_zext<14,2>(w95_reg_6939.read());
}

void ShuffleNetV2::thread_tmp_754_cast_fu_25061_p1() {
    tmp_754_cast_fu_25061_p1 = esl_zext<36,2>(w95_reg_6939.read());
}

void ShuffleNetV2::thread_tmp_754_fu_9776_p2() {
    tmp_754_fu_9776_p2 = (!tmp_764_cast_reg_34324.read().is_01() || !tmp_748_fu_9772_p1.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_764_cast_reg_34324.read()) + sc_bigint<33>(tmp_748_fu_9772_p1.read()));
}

void ShuffleNetV2::thread_tmp_755_fu_25438_p2() {
    tmp_755_fu_25438_p2 = (!p_shl162_cast_fu_25422_p1.read().is_01() || !p_shl163_cast_fu_25434_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl162_cast_fu_25422_p1.read()) - sc_biguint<7>(p_shl163_cast_fu_25434_p1.read()));
}

void ShuffleNetV2::thread_tmp_756_fu_25342_p2() {
    tmp_756_fu_25342_p2 = (!p_shl160_cast_fu_25326_p1.read().is_01() || !p_shl161_cast_fu_25338_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl160_cast_fu_25326_p1.read()) - sc_biguint<7>(p_shl161_cast_fu_25338_p1.read()));
}

void ShuffleNetV2::thread_tmp_757_fu_25352_p2() {
    tmp_757_fu_25352_p2 = (!i131_cast1_reg_40293.read().is_01() || !tmp_756_fu_25342_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(i131_cast1_reg_40293.read()) + sc_biguint<7>(tmp_756_fu_25342_p2.read()));
}

void ShuffleNetV2::thread_tmp_758_fu_25389_p1() {
    tmp_758_fu_25389_p1 = esl_zext<64,32>(tmp_886_cast_fu_25386_p1.read());
}

void ShuffleNetV2::thread_tmp_759_fu_25363_p2() {
    tmp_759_fu_25363_p2 = (!tmp50_fu_25357_p2.read().is_01() || !i131_cast_reg_40288.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp50_fu_25357_p2.read()) + sc_biguint<11>(i131_cast_reg_40288.read()));
}

void ShuffleNetV2::thread_tmp_760_cast_fu_25368_p1() {
    tmp_760_cast_fu_25368_p1 = esl_zext<33,11>(tmp_759_reg_40319.read());
}

void ShuffleNetV2::thread_tmp_760_fu_9781_p1() {
    tmp_760_fu_9781_p1 = esl_sext<64,33>(tmp_754_fu_9776_p2.read());
}

void ShuffleNetV2::thread_tmp_761_cast_fu_25081_p1() {
    tmp_761_cast_fu_25081_p1 = esl_zext<10,2>(h92_reg_6950.read());
}

void ShuffleNetV2::thread_tmp_761_fu_25077_p1() {
    tmp_761_fu_25077_p1 = esl_zext<64,2>(h92_reg_6950.read());
}

void ShuffleNetV2::thread_tmp_762_fu_25484_p2() {
    tmp_762_fu_25484_p2 = (!tmp_755_reg_40343.read().is_01() || !ci58_cast_fu_25468_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_755_reg_40343.read()) + sc_biguint<7>(ci58_cast_fu_25468_p1.read()));
}

void ShuffleNetV2::thread_tmp_763_cast_fu_9168_p1() {
    tmp_763_cast_fu_9168_p1 = esl_sext<33,32>(bias_V_read_reg_34219.read());
}

void ShuffleNetV2::thread_tmp_763_fu_9698_p2() {
    tmp_763_fu_9698_p2 = (!tmp_316_fu_9694_p1.read().is_01() || !tmp_718_reg_34603.read().is_01())? sc_lv<64>(): (sc_biguint<64>(tmp_316_fu_9694_p1.read()) + sc_biguint<64>(tmp_718_reg_34603.read()));
}

void ShuffleNetV2::thread_tmp_764_cast_fu_9171_p1() {
    tmp_764_cast_fu_9171_p1 = esl_sext<33,32>(shuffle_conv_1x1_V_r_reg_34235.read());
}

void ShuffleNetV2::thread_tmp_764_fu_9866_p2() {
    tmp_764_fu_9866_p2 = (!tmp_743_reg_34659.read().is_01() || !tmp_320_cast_fu_9862_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_743_reg_34659.read()) + sc_biguint<8>(tmp_320_cast_fu_9862_p1.read()));
}

void ShuffleNetV2::thread_tmp_765_cast1_fu_25489_p1() {
    tmp_765_cast1_fu_25489_p1 = esl_sext<10,7>(tmp_762_fu_25484_p2.read());
}

void ShuffleNetV2::thread_tmp_765_cast_fu_21655_p1() {
    tmp_765_cast_fu_21655_p1 = esl_sext<11,8>(tmp_661_fu_21649_p2.read());
}

void ShuffleNetV2::thread_tmp_765_fu_9920_p3() {
    tmp_765_fu_9920_p3 = esl_concat<5,2>(co12_reg_4468.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_766_fu_9932_p2() {
    tmp_766_fu_9932_p2 = (!p_shl290_cast_fu_9928_p1.read().is_01() || !tmp_321_cast_fu_9916_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl290_cast_fu_9928_p1.read()) - sc_biguint<8>(tmp_321_cast_fu_9916_p1.read()));
}

void ShuffleNetV2::thread_tmp_767_fu_9952_p3() {
    tmp_767_fu_9952_p3 = esl_concat<6,2>(tmp_322_fu_9942_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_768_cast_fu_25493_p1() {
    tmp_768_cast_fu_25493_p1 = esl_zext<18,5>(ci58_reg_7005.read());
}

void ShuffleNetV2::thread_tmp_768_fu_9964_p2() {
    tmp_768_fu_9964_p2 = (!p_shl289_cast_fu_9960_p1.read().is_01() || !tmp_323_cast_fu_9948_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(p_shl289_cast_fu_9960_p1.read()) - sc_biguint<9>(tmp_323_cast_fu_9948_p1.read()));
}

void ShuffleNetV2::thread_tmp_769_cast_fu_22222_p1() {
    tmp_769_cast_fu_22222_p1 = esl_sext<11,7>(tmp_666_fu_22216_p2.read());
}

void ShuffleNetV2::thread_tmp_770_cast_fu_22260_p1() {
    tmp_770_cast_fu_22260_p1 = esl_sext<32,7>(tmp_667_reg_39204.read());
}

void ShuffleNetV2::thread_tmp_770_fu_25125_p2() {
    tmp_770_fu_25125_p2 = (!p_shl166_cast_fu_25109_p1.read().is_01() || !p_shl167_cast_fu_25121_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl166_cast_fu_25109_p1.read()) - sc_biguint<7>(p_shl167_cast_fu_25121_p1.read()));
}

void ShuffleNetV2::thread_tmp_771_fu_25135_p2() {
    tmp_771_fu_25135_p2 = (!tmp_770_fu_25125_p2.read().is_01() || !co131_cast1_reg_40192.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_770_fu_25125_p2.read()) + sc_biguint<7>(co131_cast1_reg_40192.read()));
}

void ShuffleNetV2::thread_tmp_772_cast_fu_25154_p1() {
    tmp_772_cast_fu_25154_p1 = esl_zext<35,32>(tmp_905_cast_fu_25151_p1.read());
}

void ShuffleNetV2::thread_tmp_772_fu_10076_p3() {
    tmp_772_fu_10076_p3 = esl_concat<1,5>(ap_const_lv1_1, tmp_769_reg_4501.read());
}

void ShuffleNetV2::thread_tmp_773_fu_25146_p2() {
    tmp_773_fu_25146_p2 = (!co131_cast_reg_40187.read().is_01() || !tmp49_fu_25140_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(co131_cast_reg_40187.read()) + sc_biguint<10>(tmp49_fu_25140_p2.read()));
}

void ShuffleNetV2::thread_tmp_774_cast_fu_25196_p1() {
    tmp_774_cast_fu_25196_p1 = esl_zext<13,10>(tmp_773_reg_40255.read());
}

void ShuffleNetV2::thread_tmp_774_fu_10084_p1() {
    tmp_774_fu_10084_p1 = esl_sext<7,6>(tmp_772_fu_10076_p3.read());
}

void ShuffleNetV2::thread_tmp_775_fu_25778_p2() {
    tmp_775_fu_25778_p2 = (!p_shl164_cast_fu_25762_p1.read().is_01() || !p_shl165_cast_fu_25774_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl164_cast_fu_25762_p1.read()) - sc_biguint<7>(p_shl165_cast_fu_25774_p1.read()));
}

void ShuffleNetV2::thread_tmp_776_fu_25788_p2() {
    tmp_776_fu_25788_p2 = (!i134_cast_reg_40450.read().is_01() || !tmp_775_fu_25778_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(i134_cast_reg_40450.read()) + sc_biguint<7>(tmp_775_fu_25778_p2.read()));
}

void ShuffleNetV2::thread_tmp_777_cast_fu_22328_p1() {
    tmp_777_cast_fu_22328_p1 = esl_zext<7,4>(p_lshr_f12_cast_fu_22318_p4.read());
}

void ShuffleNetV2::thread_tmp_777_fu_25829_p1() {
    tmp_777_fu_25829_p1 = esl_zext<64,32>(tmp_896_cast_fu_25826_p1.read());
}

void ShuffleNetV2::thread_tmp_778_fu_25799_p2() {
    tmp_778_fu_25799_p2 = (!tmp52_fu_25793_p2.read().is_01() || !i134_cast305_cast_reg_40445.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp52_fu_25793_p2.read()) + sc_biguint<10>(i134_cast305_cast_reg_40445.read()));
}

void ShuffleNetV2::thread_tmp_779_cast1_fu_25807_p1() {
    tmp_779_cast1_fu_25807_p1 = esl_zext<33,11>(tmp_899_cast_fu_25804_p1.read());
}

void ShuffleNetV2::thread_tmp_779_cast_fu_22650_p1() {
    tmp_779_cast_fu_22650_p1 = esl_sext<11,7>(tmp_680_fu_22644_p2.read());
}

void ShuffleNetV2::thread_tmp_779_fu_10088_p1() {
    tmp_779_fu_10088_p1 = esl_zext<33,7>(tmp_774_fu_10084_p1.read());
}

void ShuffleNetV2::thread_tmp_780_cast_fu_22688_p1() {
    tmp_780_cast_fu_22688_p1 = esl_sext<32,7>(tmp_681_reg_39361.read());
}

void ShuffleNetV2::thread_tmp_780_fu_25537_p2() {
    tmp_780_fu_25537_p2 = (!p_shl168_cast_fu_25521_p1.read().is_01() || !p_shl169_cast_fu_25533_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl168_cast_fu_25521_p1.read()) - sc_biguint<7>(p_shl169_cast_fu_25533_p1.read()));
}

void ShuffleNetV2::thread_tmp_781_fu_25547_p2() {
    tmp_781_fu_25547_p2 = (!tmp_780_fu_25537_p2.read().is_01() || !tmp_893_cast_reg_40348.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_780_fu_25537_p2.read()) + sc_biguint<7>(tmp_893_cast_reg_40348.read()));
}

void ShuffleNetV2::thread_tmp_782_fu_25576_p2() {
    tmp_782_fu_25576_p2 = (!p_shl170_cast_fu_25560_p1.read().is_01() || !p_shl171_cast_fu_25572_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl170_cast_fu_25560_p1.read()) - sc_biguint<8>(p_shl171_cast_fu_25572_p1.read()));
}

void ShuffleNetV2::thread_tmp_783_fu_25592_p2() {
    tmp_783_fu_25592_p2 = (!tmp51_fu_25586_p2.read().is_01() || !co133_cast314_cast_reg_40330.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp51_fu_25586_p2.read()) + sc_biguint<10>(co133_cast314_cast_reg_40330.read()));
}

void ShuffleNetV2::thread_tmp_784_fu_25602_p4() {
    tmp_784_fu_25602_p4 = tmp_781_fu_25547_p2.read().range(6, 3);
}

void ShuffleNetV2::thread_tmp_785_fu_25999_p2() {
    tmp_785_fu_25999_p2 = (!co136_cast_fu_25953_p1.read().is_01() || !ap_const_lv7_30.is_01())? sc_lv<7>(): (sc_biguint<7>(co136_cast_fu_25953_p1.read()) + sc_biguint<7>(ap_const_lv7_30));
}

void ShuffleNetV2::thread_tmp_786_cast_fu_25888_p1() {
    tmp_786_cast_fu_25888_p1 = esl_zext<10,4>(h_95_fu_25882_p2.read());
}

void ShuffleNetV2::thread_tmp_786_fu_10092_p2() {
    tmp_786_fu_10092_p2 = (!tmp_779_fu_10088_p1.read().is_01() || !tmp_763_cast_reg_34261.read().is_01())? sc_lv<33>(): (sc_biguint<33>(tmp_779_fu_10088_p1.read()) + sc_bigint<33>(tmp_763_cast_reg_34261.read()));
}

void ShuffleNetV2::thread_tmp_787_cast_fu_9281_p1() {
    tmp_787_cast_fu_9281_p1 = esl_zext<8,7>(tmp_606_fu_9273_p3.read());
}

void ShuffleNetV2::thread_tmp_787_fu_10097_p1() {
    tmp_787_fu_10097_p1 = esl_sext<64,33>(tmp_786_fu_10092_p2.read());
}

void ShuffleNetV2::thread_tmp_788_cast_cast_fu_22001_p1() {
    tmp_788_cast_cast_fu_22001_p1 = esl_sext<8,7>(tmp_675_fu_21995_p2.read());
}

void ShuffleNetV2::thread_tmp_788_fu_9986_p2() {
    tmp_788_fu_9986_p2 = (!tmp_327_cast_fu_9982_p1.read().is_01() || !tmp_768_reg_34733.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_327_cast_fu_9982_p1.read()) + sc_biguint<9>(tmp_768_reg_34733.read()));
}

void ShuffleNetV2::thread_tmp_789_cast_fu_22021_p1() {
    tmp_789_cast_fu_22021_p1 = esl_sext<32,7>(tmp_676_reg_39139.read());
}

void ShuffleNetV2::thread_tmp_789_fu_26208_p2() {
    tmp_789_fu_26208_p2 = (!p_shl172_cast_fu_26192_p1.read().is_01() || !p_shl173_cast_fu_26204_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl172_cast_fu_26192_p1.read()) - sc_biguint<7>(p_shl173_cast_fu_26204_p1.read()));
}

void ShuffleNetV2::thread_tmp_790_fu_9995_p3() {
    tmp_790_fu_9995_p3 = esl_concat<9,2>(tmp_788_fu_9986_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_791_cast1_fu_26047_p1() {
    tmp_791_cast1_fu_26047_p1 = esl_zext<11,4>(h_97_fu_26041_p2.read());
}

void ShuffleNetV2::thread_tmp_791_cast_fu_26051_p1() {
    tmp_791_cast_fu_26051_p1 = esl_zext<10,4>(h_97_fu_26041_p2.read());
}

void ShuffleNetV2::thread_tmp_791_fu_10007_p2() {
    tmp_791_fu_10007_p2 = (!p_shl197_fu_10003_p1.read().is_01() || !tmp_1044_cast_fu_9991_p1.read().is_01())? sc_lv<64>(): (sc_bigint<64>(p_shl197_fu_10003_p1.read()) - sc_bigint<64>(tmp_1044_cast_fu_9991_p1.read()));
}

void ShuffleNetV2::thread_tmp_792_cast1_fu_25939_p1() {
    tmp_792_cast1_fu_25939_p1 = esl_zext<15,4>(w_98_fu_25933_p2.read());
}

void ShuffleNetV2::thread_tmp_792_cast_fu_22066_p1() {
    tmp_792_cast_fu_22066_p1 = esl_sext<9,8>(tmp_678_reg_39145.read());
}

void ShuffleNetV2::thread_tmp_792_fu_10013_p2() {
    tmp_792_fu_10013_p2 = (!tmp_327_cast_fu_9982_p1.read().is_01() || !tmp_1024_cast1_reg_34728.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_327_cast_fu_9982_p1.read()) + sc_bigint<9>(tmp_1024_cast1_reg_34728.read()));
}

void ShuffleNetV2::thread_tmp_793_fu_26254_p2() {
    tmp_793_fu_26254_p2 = (!tmp_789_reg_40598.read().is_01() || !ci60_cast_fu_26238_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_789_reg_40598.read()) + sc_biguint<7>(ci60_cast_fu_26238_p1.read()));
}

void ShuffleNetV2::thread_tmp_794_cast_fu_26259_p1() {
    tmp_794_cast_fu_26259_p1 = esl_sext<10,7>(tmp_793_fu_26254_p2.read());
}

void ShuffleNetV2::thread_tmp_794_fu_10029_p2() {
    tmp_794_fu_10029_p2 = (!ap_const_lv9_2.is_01())? sc_lv<9>(): tmp_792_reg_34746.read() << (unsigned short)ap_const_lv9_2.to_uint();
}

void ShuffleNetV2::thread_tmp_795_cast_fu_26263_p1() {
    tmp_795_cast_fu_26263_p1 = esl_zext<18,5>(ci60_reg_7126.read());
}

void ShuffleNetV2::thread_tmp_795_fu_10034_p2() {
    tmp_795_fu_10034_p2 = (!tmp_794_fu_10029_p2.read().is_01() || !tmp_792_reg_34746.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_794_fu_10029_p2.read()) - sc_biguint<9>(tmp_792_reg_34746.read()));
}

void ShuffleNetV2::thread_tmp_796_cast1_fu_26137_p1() {
    tmp_796_cast1_fu_26137_p1 = esl_zext<15,4>(w_100_fu_26131_p2.read());
}

void ShuffleNetV2::thread_tmp_796_cast_fu_26141_p1() {
    tmp_796_cast_fu_26141_p1 = esl_zext<14,4>(w_100_fu_26131_p2.read());
}

void ShuffleNetV2::thread_tmp_796_fu_10018_p2() {
    tmp_796_fu_10018_p2 = (!tmp_603_reg_34365.read().is_01() || !tmp_791_fu_10007_p2.read().is_01())? sc_lv<64>(): (sc_bigint<64>(tmp_603_reg_34365.read()) + sc_biguint<64>(tmp_791_fu_10007_p2.read()));
}

void ShuffleNetV2::thread_tmp_797_cast_fu_22456_p1() {
    tmp_797_cast_fu_22456_p1 = esl_sext<11,8>(tmp_687_fu_22450_p2.read());
}

void ShuffleNetV2::thread_tmp_797_fu_26548_p2() {
    tmp_797_fu_26548_p2 = (!p_shl174_cast_fu_26532_p1.read().is_01() || !p_shl175_cast_fu_26544_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl174_cast_fu_26532_p1.read()) - sc_biguint<7>(p_shl175_cast_fu_26544_p1.read()));
}

void ShuffleNetV2::thread_tmp_798_fu_26558_p2() {
    tmp_798_fu_26558_p2 = (!i140_cast_reg_40705.read().is_01() || !tmp_797_fu_26548_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(i140_cast_reg_40705.read()) + sc_biguint<7>(tmp_797_fu_26548_p2.read()));
}

void ShuffleNetV2::thread_tmp_799_fu_26599_p1() {
    tmp_799_fu_26599_p1 = esl_zext<64,32>(tmp_927_cast_fu_26596_p1.read());
}

void ShuffleNetV2::thread_tmp_800_fu_26569_p2() {
    tmp_800_fu_26569_p2 = (!tmp54_fu_26563_p2.read().is_01() || !i140_cast290_cast_reg_40700.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp54_fu_26563_p2.read()) + sc_biguint<10>(i140_cast290_cast_reg_40700.read()));
}

void ShuffleNetV2::thread_tmp_801_cast_fu_26577_p1() {
    tmp_801_cast_fu_26577_p1 = esl_zext<33,11>(tmp_930_cast_fu_26574_p1.read());
}

void ShuffleNetV2::thread_tmp_801_fu_10183_p2() {
    tmp_801_fu_10183_p2 = (!tmp_763_cast_reg_34261.read().is_01() || !ap_const_lv33_78.is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_763_cast_reg_34261.read()) + sc_biguint<33>(ap_const_lv33_78));
}

void ShuffleNetV2::thread_tmp_802_fu_26307_p2() {
    tmp_802_fu_26307_p2 = (!p_shl176_cast_fu_26291_p1.read().is_01() || !p_shl177_cast_fu_26303_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl176_cast_fu_26291_p1.read()) - sc_biguint<7>(p_shl177_cast_fu_26303_p1.read()));
}

void ShuffleNetV2::thread_tmp_803_fu_26317_p2() {
    tmp_803_fu_26317_p2 = (!tmp_802_fu_26307_p2.read().is_01() || !tmp_923_cast_reg_40603.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_802_fu_26307_p2.read()) + sc_biguint<7>(tmp_923_cast_reg_40603.read()));
}

void ShuffleNetV2::thread_tmp_804_fu_26346_p2() {
    tmp_804_fu_26346_p2 = (!p_shl178_cast_fu_26330_p1.read().is_01() || !p_shl179_cast_fu_26342_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl178_cast_fu_26330_p1.read()) - sc_biguint<8>(p_shl179_cast_fu_26342_p1.read()));
}

void ShuffleNetV2::thread_tmp_805_fu_26362_p2() {
    tmp_805_fu_26362_p2 = (!tmp53_fu_26356_p2.read().is_01() || !co138_cast299_cast_reg_40585.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp53_fu_26356_p2.read()) + sc_biguint<9>(co138_cast299_cast_reg_40585.read()));
}

void ShuffleNetV2::thread_tmp_806_fu_26372_p4() {
    tmp_806_fu_26372_p4 = tmp_803_fu_26317_p2.read().range(6, 3);
}

void ShuffleNetV2::thread_tmp_807_cast_fu_23086_p1() {
    tmp_807_cast_fu_23086_p1 = esl_zext<7,4>(p_lshr_f13_cast_fu_23076_p4.read());
}

void ShuffleNetV2::thread_tmp_807_fu_10188_p1() {
    tmp_807_fu_10188_p1 = esl_sext<64,33>(tmp_801_fu_10183_p2.read());
}

void ShuffleNetV2::thread_tmp_808_cast1_fu_26636_p1() {
    tmp_808_cast1_fu_26636_p1 = esl_zext<13,2>(w101_reg_7181.read());
}

void ShuffleNetV2::thread_tmp_808_cast_fu_26640_p1() {
    tmp_808_cast_fu_26640_p1 = esl_zext<36,2>(w101_reg_7181.read());
}

void ShuffleNetV2::thread_tmp_808_fu_10134_p3() {
    tmp_808_fu_10134_p3 = esl_concat<7,5>(tmp_328_fu_10128_p2.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_809_fu_27017_p2() {
    tmp_809_fu_27017_p2 = (!p_shl182_cast_fu_27001_p1.read().is_01() || !p_shl183_cast_fu_27013_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl182_cast_fu_27001_p1.read()) - sc_biguint<7>(p_shl183_cast_fu_27013_p1.read()));
}

void ShuffleNetV2::thread_tmp_810_cast_fu_23408_p1() {
    tmp_810_cast_fu_23408_p1 = esl_sext<11,7>(tmp_699_fu_23402_p2.read());
}

void ShuffleNetV2::thread_tmp_810_fu_26917_p2() {
    tmp_810_fu_26917_p2 = (!p_shl180_cast_fu_26901_p1.read().is_01() || !p_shl181_cast_fu_26913_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl180_cast_fu_26901_p1.read()) - sc_biguint<7>(p_shl181_cast_fu_26913_p1.read()));
}

void ShuffleNetV2::thread_tmp_811_cast_fu_23446_p1() {
    tmp_811_cast_fu_23446_p1 = esl_sext<32,7>(tmp_700_reg_39616.read());
}

void ShuffleNetV2::thread_tmp_811_fu_26927_p2() {
    tmp_811_fu_26927_p2 = (!i143_cast_reg_40848.read().is_01() || !tmp_810_fu_26917_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(i143_cast_reg_40848.read()) + sc_biguint<7>(tmp_810_fu_26917_p2.read()));
}

void ShuffleNetV2::thread_tmp_812_fu_26968_p1() {
    tmp_812_fu_26968_p1 = esl_zext<64,32>(tmp_944_cast_fu_26965_p1.read());
}

void ShuffleNetV2::thread_tmp_813_fu_26938_p2() {
    tmp_813_fu_26938_p2 = (!tmp56_fu_26932_p2.read().is_01() || !i143_cast280_cast_reg_40843.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp56_fu_26932_p2.read()) + sc_biguint<10>(i143_cast280_cast_reg_40843.read()));
}

void ShuffleNetV2::thread_tmp_814_cast_fu_26946_p1() {
    tmp_814_cast_fu_26946_p1 = esl_zext<33,11>(tmp_947_cast_fu_26943_p1.read());
}

void ShuffleNetV2::thread_tmp_814_fu_10146_p3() {
    tmp_814_fu_10146_p3 = esl_concat<7,3>(tmp_328_fu_10128_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_815_cast_fu_26660_p1() {
    tmp_815_cast_fu_26660_p1 = esl_zext<10,2>(h98_reg_7192.read());
}

void ShuffleNetV2::thread_tmp_815_fu_26656_p1() {
    tmp_815_fu_26656_p1 = esl_zext<64,2>(h98_reg_7192.read());
}

void ShuffleNetV2::thread_tmp_816_fu_27063_p2() {
    tmp_816_fu_27063_p2 = (!tmp_809_reg_40898.read().is_01() || !ci62_cast_fu_27047_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_809_reg_40898.read()) + sc_biguint<7>(ci62_cast_fu_27047_p1.read()));
}

void ShuffleNetV2::thread_tmp_817_fu_10158_p2() {
    tmp_817_fu_10158_p2 = (!p_shl295_cast_fu_10142_p1.read().is_01() || !p_shl296_cast_fu_10154_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl295_cast_fu_10142_p1.read()) - sc_biguint<13>(p_shl296_cast_fu_10154_p1.read()));
}

void ShuffleNetV2::thread_tmp_818_fu_10198_p1() {
    tmp_818_fu_10198_p1 = co16_reg_4513.read().range(3-1, 0);
}

void ShuffleNetV2::thread_tmp_819_cast_fu_27068_p1() {
    tmp_819_cast_fu_27068_p1 = esl_sext<10,7>(tmp_816_fu_27063_p2.read());
}

void ShuffleNetV2::thread_tmp_819_fu_10212_p3() {
    tmp_819_fu_10212_p3 = esl_concat<2,5>(newIndex5_fu_10202_p4.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_820_fu_10224_p3() {
    tmp_820_fu_10224_p3 = esl_concat<2,3>(newIndex5_fu_10202_p4.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_821_fu_10236_p2() {
    tmp_821_fu_10236_p2 = (!p_shl293_cast_fu_10220_p1.read().is_01() || !p_shl294_cast_fu_10232_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl293_cast_fu_10220_p1.read()) - sc_biguint<8>(p_shl294_cast_fu_10232_p1.read()));
}

void ShuffleNetV2::thread_tmp_822_cast_fu_27072_p1() {
    tmp_822_cast_fu_27072_p1 = esl_zext<19,5>(ci62_reg_7247.read());
}

void ShuffleNetV2::thread_tmp_822_fu_10164_p1() {
    tmp_822_fu_10164_p1 = esl_sext<33,13>(tmp_817_fu_10158_p2.read());
}

void ShuffleNetV2::thread_tmp_823_cast_fu_23214_p1() {
    tmp_823_cast_fu_23214_p1 = esl_sext<11,8>(tmp_706_fu_23208_p2.read());
}

void ShuffleNetV2::thread_tmp_823_fu_10168_p2() {
    tmp_823_fu_10168_p2 = (!tmp_764_cast_reg_34324.read().is_01() || !tmp_822_fu_10164_p1.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_764_cast_reg_34324.read()) + sc_bigint<33>(tmp_822_fu_10164_p1.read()));
}

void ShuffleNetV2::thread_tmp_824_fu_26704_p2() {
    tmp_824_fu_26704_p2 = (!p_shl186_cast_fu_26688_p1.read().is_01() || !p_shl187_cast_fu_26700_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl186_cast_fu_26688_p1.read()) - sc_biguint<7>(p_shl187_cast_fu_26700_p1.read()));
}

void ShuffleNetV2::thread_tmp_825_fu_26714_p2() {
    tmp_825_fu_26714_p2 = (!tmp_824_fu_26704_p2.read().is_01() || !co141_cast1_reg_40747.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_824_fu_26704_p2.read()) + sc_biguint<7>(co141_cast1_reg_40747.read()));
}

void ShuffleNetV2::thread_tmp_826_cast_fu_26733_p1() {
    tmp_826_cast_fu_26733_p1 = esl_zext<35,32>(tmp_963_cast_fu_26730_p1.read());
}

void ShuffleNetV2::thread_tmp_826_fu_10173_p1() {
    tmp_826_fu_10173_p1 = esl_sext<64,33>(tmp_823_fu_10168_p2.read());
}

void ShuffleNetV2::thread_tmp_827_cast_fu_23785_p1() {
    tmp_827_cast_fu_23785_p1 = esl_sext<11,7>(tmp_711_fu_23779_p2.read());
}

void ShuffleNetV2::thread_tmp_827_fu_26725_p2() {
    tmp_827_fu_26725_p2 = (!co141_cast_reg_40742.read().is_01() || !tmp55_fu_26719_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(co141_cast_reg_40742.read()) + sc_biguint<10>(tmp55_fu_26719_p2.read()));
}

void ShuffleNetV2::thread_tmp_828_cast1_fu_26775_p1() {
    tmp_828_cast1_fu_26775_p1 = esl_zext<13,10>(tmp_827_reg_40810.read());
}

void ShuffleNetV2::thread_tmp_828_cast_fu_23823_p1() {
    tmp_828_cast_fu_23823_p1 = esl_sext<32,7>(tmp_712_reg_39759.read());
}

void ShuffleNetV2::thread_tmp_828_fu_10055_p2() {
    tmp_828_fu_10055_p2 = (!tmp_795_reg_34758.read().is_01() || !tmp_329_cast_fu_10051_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_795_reg_34758.read()) + sc_biguint<9>(tmp_329_cast_fu_10051_p1.read()));
}

void ShuffleNetV2::thread_tmp_829_fu_27357_p2() {
    tmp_829_fu_27357_p2 = (!p_shl184_cast_fu_27341_p1.read().is_01() || !p_shl185_cast_fu_27353_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl184_cast_fu_27341_p1.read()) - sc_biguint<7>(p_shl185_cast_fu_27353_p1.read()));
}

void ShuffleNetV2::thread_tmp_830_fu_27367_p2() {
    tmp_830_fu_27367_p2 = (!i146_cast_reg_41005.read().is_01() || !tmp_829_fu_27357_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(i146_cast_reg_41005.read()) + sc_biguint<7>(tmp_829_fu_27357_p2.read()));
}

void ShuffleNetV2::thread_tmp_831_fu_27408_p1() {
    tmp_831_fu_27408_p1 = esl_zext<64,32>(tmp_954_cast_fu_27405_p1.read());
}

void ShuffleNetV2::thread_tmp_832_fu_27378_p2() {
    tmp_832_fu_27378_p2 = (!tmp58_fu_27372_p2.read().is_01() || !i146_cast267_cast_reg_41000.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp58_fu_27372_p2.read()) + sc_biguint<10>(i146_cast267_cast_reg_41000.read()));
}

void ShuffleNetV2::thread_tmp_833_cast_fu_27386_p1() {
    tmp_833_cast_fu_27386_p1 = esl_zext<33,11>(tmp_957_cast_fu_27383_p1.read());
}

void ShuffleNetV2::thread_tmp_833_fu_10258_p2() {
    tmp_833_fu_10258_p2 = (!tmp_821_reg_34814.read().is_01() || !tmp_333_cast_fu_10254_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_821_reg_34814.read()) + sc_biguint<8>(tmp_333_cast_fu_10254_p1.read()));
}

void ShuffleNetV2::thread_tmp_834_fu_27116_p2() {
    tmp_834_fu_27116_p2 = (!p_shl188_cast_fu_27100_p1.read().is_01() || !p_shl189_cast_fu_27112_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl188_cast_fu_27100_p1.read()) - sc_biguint<7>(p_shl189_cast_fu_27112_p1.read()));
}

void ShuffleNetV2::thread_tmp_835_cast_fu_23891_p1() {
    tmp_835_cast_fu_23891_p1 = esl_zext<7,4>(p_lshr_f14_cast_fu_23881_p4.read());
}

void ShuffleNetV2::thread_tmp_835_fu_27126_p2() {
    tmp_835_fu_27126_p2 = (!tmp_834_fu_27116_p2.read().is_01() || !tmp_951_cast_reg_40903.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_834_fu_27116_p2.read()) + sc_biguint<7>(tmp_951_cast_reg_40903.read()));
}

void ShuffleNetV2::thread_tmp_836_fu_27155_p2() {
    tmp_836_fu_27155_p2 = (!p_shl190_cast_fu_27139_p1.read().is_01() || !p_shl191_cast_fu_27151_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl190_cast_fu_27139_p1.read()) - sc_biguint<8>(p_shl191_cast_fu_27151_p1.read()));
}

void ShuffleNetV2::thread_tmp_837_cast_fu_24213_p1() {
    tmp_837_cast_fu_24213_p1 = esl_sext<11,7>(tmp_725_fu_24207_p2.read());
}

void ShuffleNetV2::thread_tmp_837_fu_27179_p2() {
    tmp_837_fu_27179_p2 = (!tmp57_cast_fu_27175_p1.read().is_01() || !co143_cast_reg_40885.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp57_cast_fu_27175_p1.read()) + sc_biguint<12>(co143_cast_reg_40885.read()));
}

void ShuffleNetV2::thread_tmp_838_cast_fu_24251_p1() {
    tmp_838_cast_fu_24251_p1 = esl_sext<32,7>(tmp_726_reg_39916.read());
}

void ShuffleNetV2::thread_tmp_838_fu_27189_p4() {
    tmp_838_fu_27189_p4 = tmp_835_fu_27126_p2.read().range(6, 3);
}

void ShuffleNetV2::thread_tmp_839_fu_27574_p2() {
    tmp_839_fu_27574_p2 = (!p_shl192_cast_fu_27560_p1.read().is_01() || !p_shl193_cast_fu_27570_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl192_cast_fu_27560_p1.read()) - sc_biguint<8>(p_shl193_cast_fu_27570_p1.read()));
}

void ShuffleNetV2::thread_tmp_840_cast_fu_27467_p1() {
    tmp_840_cast_fu_27467_p1 = esl_zext<10,4>(h_101_fu_27461_p2.read());
}

void ShuffleNetV2::thread_tmp_840_fu_10308_p3() {
    tmp_840_fu_10308_p3 = esl_concat<5,4>(co19_reg_4548.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_841_fu_10320_p3() {
    tmp_841_fu_10320_p3 = esl_concat<5,1>(co19_reg_4548.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_842_fu_10332_p2() {
    tmp_842_fu_10332_p2 = (!p_shl300_cast_fu_10328_p1.read().is_01() || !p_shl299_cast_fu_10316_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl300_cast_fu_10328_p1.read()) + sc_biguint<10>(p_shl299_cast_fu_10316_p1.read()));
}

void ShuffleNetV2::thread_tmp_843_fu_27610_p2() {
    tmp_843_fu_27610_p2 = (!tmp_839_reg_41099.read().is_01() || !ci64_cast_fu_27594_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_839_reg_41099.read()) + sc_biguint<8>(ci64_cast_fu_27594_p1.read()));
}

void ShuffleNetV2::thread_tmp_844_fu_10344_p3() {
    tmp_844_fu_10344_p3 = esl_concat<6,4>(tmp_334_fu_10338_p2.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_845_cast_fu_27615_p1() {
    tmp_845_cast_fu_27615_p1 = esl_sext<12,8>(tmp_843_fu_27610_p2.read());
}

void ShuffleNetV2::thread_tmp_845_fu_10356_p3() {
    tmp_845_fu_10356_p3 = esl_concat<6,1>(tmp_334_fu_10338_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_846_cast_cast_fu_23560_p1() {
    tmp_846_cast_cast_fu_23560_p1 = esl_sext<8,7>(tmp_720_fu_23554_p2.read());
}

void ShuffleNetV2::thread_tmp_846_cast_fu_27619_p1() {
    tmp_846_cast_fu_27619_p1 = esl_zext<19,5>(ci64_reg_7335.read());
}

void ShuffleNetV2::thread_tmp_846_fu_10368_p2() {
    tmp_846_fu_10368_p2 = (!p_shl298_cast_fu_10364_p1.read().is_01() || !p_shl297_cast_fu_10352_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl298_cast_fu_10364_p1.read()) + sc_biguint<11>(p_shl297_cast_fu_10352_p1.read()));
}

void ShuffleNetV2::thread_tmp_847_cast1_fu_27518_p1() {
    tmp_847_cast1_fu_27518_p1 = esl_zext<15,4>(w_104_fu_27512_p2.read());
}

void ShuffleNetV2::thread_tmp_847_cast_fu_23580_p1() {
    tmp_847_cast_fu_23580_p1 = esl_sext<32,7>(tmp_721_reg_39694.read());
}

void ShuffleNetV2::thread_tmp_847_fu_10566_p2() {
    tmp_847_fu_10566_p2 = (!tmp_763_cast_reg_34261.read().is_01() || !ap_const_lv33_90.is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_763_cast_reg_34261.read()) + sc_biguint<33>(ap_const_lv33_90));
}

void ShuffleNetV2::thread_tmp_848_fu_27886_p2() {
    tmp_848_fu_27886_p2 = (!p_shl194_cast_fu_27870_p1.read().is_01() || !p_shl195_cast_fu_27882_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl194_cast_fu_27870_p1.read()) - sc_biguint<8>(p_shl195_cast_fu_27882_p1.read()));
}

void ShuffleNetV2::thread_tmp_849_fu_27896_p2() {
    tmp_849_fu_27896_p2 = (!i152_cast_reg_41206.read().is_01() || !tmp_848_fu_27886_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(i152_cast_reg_41206.read()) + sc_biguint<8>(tmp_848_fu_27886_p2.read()));
}

void ShuffleNetV2::thread_tmp_850_cast_fu_23625_p1() {
    tmp_850_cast_fu_23625_p1 = esl_sext<9,8>(tmp_723_reg_39700.read());
}

void ShuffleNetV2::thread_tmp_850_fu_27937_p1() {
    tmp_850_fu_27937_p1 = esl_zext<64,32>(tmp_980_cast_fu_27934_p1.read());
}

void ShuffleNetV2::thread_tmp_851_fu_27907_p2() {
    tmp_851_fu_27907_p2 = (!tmp60_fu_27901_p2.read().is_01() || !i152_cast253_cast_reg_41201.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp60_fu_27901_p2.read()) + sc_biguint<10>(i152_cast253_cast_reg_41201.read()));
}

void ShuffleNetV2::thread_tmp_852_cast_fu_27915_p1() {
    tmp_852_cast_fu_27915_p1 = esl_zext<33,11>(tmp_983_cast_fu_27912_p1.read());
}

void ShuffleNetV2::thread_tmp_852_fu_10571_p1() {
    tmp_852_fu_10571_p1 = esl_sext<64,33>(tmp_847_fu_10566_p2.read());
}

void ShuffleNetV2::thread_tmp_853_fu_27665_p2() {
    tmp_853_fu_27665_p2 = (!p_shl196_cast_fu_27651_p1.read().is_01() || !p_shl197_cast_fu_27661_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl196_cast_fu_27651_p1.read()) - sc_biguint<8>(p_shl197_cast_fu_27661_p1.read()));
}

void ShuffleNetV2::thread_tmp_854_fu_27675_p2() {
    tmp_854_fu_27675_p2 = (!tmp_853_fu_27665_p2.read().is_01() || !tmp_977_cast_reg_41109.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_853_fu_27665_p2.read()) + sc_biguint<8>(tmp_977_cast_reg_41109.read()));
}

void ShuffleNetV2::thread_tmp_855_cast_fu_24019_p1() {
    tmp_855_cast_fu_24019_p1 = esl_sext<11,8>(tmp_732_fu_24013_p2.read());
}

void ShuffleNetV2::thread_tmp_855_fu_27692_p2() {
    tmp_855_fu_27692_p2 = (!p_shl198_cast_fu_27688_p1.read().is_01() || !p_shl196_cast1_fu_27647_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl198_cast_fu_27688_p1.read()) - sc_biguint<10>(p_shl196_cast1_fu_27647_p1.read()));
}

void ShuffleNetV2::thread_tmp_856_fu_27708_p2() {
    tmp_856_fu_27708_p2 = (!tmp59_fu_27702_p2.read().is_01() || !co146_cast_reg_41086.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp59_fu_27702_p2.read()) + sc_biguint<12>(co146_cast_reg_41086.read()));
}

void ShuffleNetV2::thread_tmp_857_fu_27718_p4() {
    tmp_857_fu_27718_p4 = tmp_854_fu_27675_p2.read().range(7, 3);
}

void ShuffleNetV2::thread_tmp_858_cast1_fu_27974_p1() {
    tmp_858_cast1_fu_27974_p1 = esl_zext<13,2>(w105_reg_7390.read());
}

void ShuffleNetV2::thread_tmp_858_cast_fu_27978_p1() {
    tmp_858_cast_fu_27978_p1 = esl_zext<36,2>(w105_reg_7390.read());
}

void ShuffleNetV2::thread_tmp_858_fu_10517_p3() {
    tmp_858_fu_10517_p3 = esl_concat<7,5>(tmp_335_fu_10511_p2.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_859_fu_28353_p2() {
    tmp_859_fu_28353_p2 = (!p_shl201_cast_fu_28339_p1.read().is_01() || !p_shl202_cast_fu_28349_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl201_cast_fu_28339_p1.read()) - sc_biguint<8>(p_shl202_cast_fu_28349_p1.read()));
}

void ShuffleNetV2::thread_tmp_860_fu_28255_p2() {
    tmp_860_fu_28255_p2 = (!p_shl199_cast_fu_28239_p1.read().is_01() || !p_shl200_cast_fu_28251_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl199_cast_fu_28239_p1.read()) - sc_biguint<8>(p_shl200_cast_fu_28251_p1.read()));
}

void ShuffleNetV2::thread_tmp_861_fu_10529_p3() {
    tmp_861_fu_10529_p3 = esl_concat<7,3>(tmp_335_fu_10511_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_862_fu_28265_p2() {
    tmp_862_fu_28265_p2 = (!i155_cast_reg_41349.read().is_01() || !tmp_860_fu_28255_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(i155_cast_reg_41349.read()) + sc_biguint<8>(tmp_860_fu_28255_p2.read()));
}

void ShuffleNetV2::thread_tmp_863_fu_28306_p1() {
    tmp_863_fu_28306_p1 = esl_zext<64,32>(tmp_997_cast_fu_28303_p1.read());
}

void ShuffleNetV2::thread_tmp_864_fu_28276_p2() {
    tmp_864_fu_28276_p2 = (!tmp62_fu_28270_p2.read().is_01() || !i155_cast243_cast_reg_41344.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp62_fu_28270_p2.read()) + sc_biguint<9>(i155_cast243_cast_reg_41344.read()));
}

void ShuffleNetV2::thread_tmp_865_cast1_fu_28284_p1() {
    tmp_865_cast1_fu_28284_p1 = esl_zext<33,11>(tmp_1000_cast_fu_28281_p1.read());
}

void ShuffleNetV2::thread_tmp_865_cast_fu_24649_p1() {
    tmp_865_cast_fu_24649_p1 = esl_zext<7,4>(p_lshr_f15_cast_fu_24639_p4.read());
}

void ShuffleNetV2::thread_tmp_865_fu_10541_p2() {
    tmp_865_fu_10541_p2 = (!p_shl307_cast_fu_10525_p1.read().is_01() || !p_shl308_cast_fu_10537_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl307_cast_fu_10525_p1.read()) - sc_biguint<13>(p_shl308_cast_fu_10537_p1.read()));
}

void ShuffleNetV2::thread_tmp_866_cast_fu_27998_p1() {
    tmp_866_cast_fu_27998_p1 = esl_zext<11,2>(h102_reg_7401.read());
}

void ShuffleNetV2::thread_tmp_866_fu_27994_p1() {
    tmp_866_fu_27994_p1 = esl_zext<64,2>(h102_reg_7401.read());
}

void ShuffleNetV2::thread_tmp_867_fu_28389_p2() {
    tmp_867_fu_28389_p2 = (!tmp_859_reg_41399.read().is_01() || !ci66_cast_fu_28373_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_859_reg_41399.read()) + sc_biguint<8>(ci66_cast_fu_28373_p1.read()));
}

void ShuffleNetV2::thread_tmp_868_cast1_fu_28394_p1() {
    tmp_868_cast1_fu_28394_p1 = esl_sext<12,8>(tmp_867_fu_28389_p2.read());
}

void ShuffleNetV2::thread_tmp_868_cast_fu_24979_p1() {
    tmp_868_cast_fu_24979_p1 = esl_sext<11,7>(tmp_744_fu_24973_p2.read());
}

void ShuffleNetV2::thread_tmp_868_fu_10581_p1() {
    tmp_868_fu_10581_p1 = co22_reg_4581.read().range(3-1, 0);
}

void ShuffleNetV2::thread_tmp_869_cast1_fu_28398_p1() {
    tmp_869_cast1_fu_28398_p1 = esl_zext<19,5>(ci66_reg_7456.read());
}

void ShuffleNetV2::thread_tmp_869_cast_fu_25017_p1() {
    tmp_869_cast_fu_25017_p1 = esl_sext<32,7>(tmp_745_reg_40171.read());
}

void ShuffleNetV2::thread_tmp_869_fu_10595_p3() {
    tmp_869_fu_10595_p3 = esl_concat<2,5>(newIndex6_fu_10585_p4.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_870_fu_28042_p2() {
    tmp_870_fu_28042_p2 = (!p_shl205_cast_fu_28026_p1.read().is_01() || !p_shl206_cast_fu_28038_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl205_cast_fu_28026_p1.read()) - sc_biguint<8>(p_shl206_cast_fu_28038_p1.read()));
}

void ShuffleNetV2::thread_tmp_871_fu_10607_p3() {
    tmp_871_fu_10607_p3 = esl_concat<2,3>(newIndex6_fu_10585_p4.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_872_fu_10619_p2() {
    tmp_872_fu_10619_p2 = (!p_shl305_cast_fu_10603_p1.read().is_01() || !p_shl306_cast_fu_10615_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl305_cast_fu_10603_p1.read()) - sc_biguint<8>(p_shl306_cast_fu_10615_p1.read()));
}

void ShuffleNetV2::thread_tmp_873_fu_28052_p2() {
    tmp_873_fu_28052_p2 = (!tmp_870_fu_28042_p2.read().is_01() || !co149_cast1_reg_41248.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_870_fu_28042_p2.read()) + sc_biguint<8>(co149_cast1_reg_41248.read()));
}

void ShuffleNetV2::thread_tmp_874_fu_10547_p1() {
    tmp_874_fu_10547_p1 = esl_sext<33,13>(tmp_865_fu_10541_p2.read());
}

void ShuffleNetV2::thread_tmp_875_fu_10551_p2() {
    tmp_875_fu_10551_p2 = (!tmp_764_cast_reg_34324.read().is_01() || !tmp_874_fu_10547_p1.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_764_cast_reg_34324.read()) + sc_bigint<33>(tmp_874_fu_10547_p1.read()));
}

void ShuffleNetV2::thread_tmp_876_cast_fu_28071_p1() {
    tmp_876_cast_fu_28071_p1 = esl_zext<35,32>(tmp_1016_cast_fu_28068_p1.read());
}

void ShuffleNetV2::thread_tmp_876_fu_10556_p1() {
    tmp_876_fu_10556_p1 = esl_sext<64,33>(tmp_875_fu_10551_p2.read());
}

void ShuffleNetV2::thread_tmp_877_fu_10394_p2() {
    tmp_877_fu_10394_p2 = (!tmp_336_cast_fu_10390_p1.read().is_01() || !tmp_846_reg_34888.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_336_cast_fu_10390_p1.read()) + sc_biguint<11>(tmp_846_reg_34888.read()));
}

void ShuffleNetV2::thread_tmp_878_fu_28063_p2() {
    tmp_878_fu_28063_p2 = (!co149_cast_reg_41243.read().is_01() || !tmp61_fu_28057_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(co149_cast_reg_41243.read()) + sc_biguint<10>(tmp61_fu_28057_p2.read()));
}

void ShuffleNetV2::thread_tmp_879_cast_fu_28113_p1() {
    tmp_879_cast_fu_28113_p1 = esl_zext<13,10>(tmp_878_reg_41311.read());
}

void ShuffleNetV2::thread_tmp_879_fu_10407_p3() {
    tmp_879_fu_10407_p3 = esl_concat<11,1>(tmp_877_fu_10394_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_880_fu_28665_p2() {
    tmp_880_fu_28665_p2 = (!p_shl203_cast_fu_28649_p1.read().is_01() || !p_shl204_cast_fu_28661_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl203_cast_fu_28649_p1.read()) - sc_biguint<8>(p_shl204_cast_fu_28661_p1.read()));
}

void ShuffleNetV2::thread_tmp_881_cast_cast_fu_24777_p1() {
    tmp_881_cast_cast_fu_24777_p1 = esl_sext<10,8>(tmp_751_fu_24771_p2.read());
}

void ShuffleNetV2::thread_tmp_881_fu_28675_p2() {
    tmp_881_fu_28675_p2 = (!i158_cast1_reg_41506.read().is_01() || !tmp_880_fu_28665_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(i158_cast1_reg_41506.read()) + sc_biguint<8>(tmp_880_fu_28665_p2.read()));
}

void ShuffleNetV2::thread_tmp_882_fu_28720_p1() {
    tmp_882_fu_28720_p1 = esl_zext<64,32>(tmp_1007_cast_fu_28717_p1.read());
}

void ShuffleNetV2::thread_tmp_883_fu_28694_p2() {
    tmp_883_fu_28694_p2 = (!tmp64_cast_fu_28690_p1.read().is_01() || !i158_cast_reg_41501.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp64_cast_fu_28690_p1.read()) + sc_biguint<12>(i158_cast_reg_41501.read()));
}

void ShuffleNetV2::thread_tmp_884_cast_fu_28699_p1() {
    tmp_884_cast_fu_28699_p1 = esl_zext<33,12>(tmp_883_reg_41532.read());
}

void ShuffleNetV2::thread_tmp_884_fu_10419_p2() {
    tmp_884_fu_10419_p2 = (!p_shl303_cast_fu_10399_p3.read().is_01() || !p_shl304_cast_fu_10415_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl303_cast_fu_10399_p3.read()) + sc_biguint<15>(p_shl304_cast_fu_10415_p1.read()));
}

void ShuffleNetV2::thread_tmp_885_cast_fu_25348_p1() {
    tmp_885_cast_fu_25348_p1 = esl_sext<11,7>(tmp_756_fu_25342_p2.read());
}

void ShuffleNetV2::thread_tmp_885_fu_28444_p2() {
    tmp_885_fu_28444_p2 = (!p_shl207_cast_fu_28430_p1.read().is_01() || !p_shl208_cast_fu_28440_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl207_cast_fu_28430_p1.read()) - sc_biguint<8>(p_shl208_cast_fu_28440_p1.read()));
}

void ShuffleNetV2::thread_tmp_886_cast_fu_25386_p1() {
    tmp_886_cast_fu_25386_p1 = esl_sext<32,7>(tmp_757_reg_40314.read());
}

void ShuffleNetV2::thread_tmp_886_fu_28454_p2() {
    tmp_886_fu_28454_p2 = (!tmp_885_fu_28444_p2.read().is_01() || !tmp_1004_cast_reg_41409.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_885_fu_28444_p2.read()) + sc_biguint<8>(tmp_1004_cast_reg_41409.read()));
}

void ShuffleNetV2::thread_tmp_887_fu_28471_p2() {
    tmp_887_fu_28471_p2 = (!p_shl209_cast_fu_28467_p1.read().is_01() || !p_shl207_cast1_fu_28426_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl209_cast_fu_28467_p1.read()) - sc_biguint<10>(p_shl207_cast1_fu_28426_p1.read()));
}

void ShuffleNetV2::thread_tmp_888_fu_28487_p2() {
    tmp_888_fu_28487_p2 = (!tmp63_fu_28481_p2.read().is_01() || !co151_cast_reg_41386.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp63_fu_28481_p2.read()) + sc_biguint<12>(co151_cast_reg_41386.read()));
}

void ShuffleNetV2::thread_tmp_889_fu_28497_p4() {
    tmp_889_fu_28497_p4 = tmp_886_fu_28454_p2.read().range(7, 3);
}

void ShuffleNetV2::thread_tmp_890_cast1_fu_28757_p1() {
    tmp_890_cast1_fu_28757_p1 = esl_zext<13,2>(w107_reg_7511.read());
}

void ShuffleNetV2::thread_tmp_890_cast_fu_28761_p1() {
    tmp_890_cast_fu_28761_p1 = esl_zext<36,2>(w107_reg_7511.read());
}

void ShuffleNetV2::thread_tmp_890_fu_10425_p2() {
    tmp_890_fu_10425_p2 = (!tmp_336_cast1_fu_10386_p1.read().is_01() || !tmp_842_reg_34883.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_336_cast1_fu_10386_p1.read()) + sc_biguint<10>(tmp_842_reg_34883.read()));
}

void ShuffleNetV2::thread_tmp_891_fu_29132_p2() {
    tmp_891_fu_29132_p2 = (!p_shl212_cast_fu_29118_p1.read().is_01() || !p_shl213_cast_fu_29128_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl212_cast_fu_29118_p1.read()) - sc_biguint<8>(p_shl213_cast_fu_29128_p1.read()));
}

void ShuffleNetV2::thread_tmp_892_fu_29038_p2() {
    tmp_892_fu_29038_p2 = (!p_shl210_cast_fu_29022_p1.read().is_01() || !p_shl211_cast_fu_29034_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl210_cast_fu_29022_p1.read()) - sc_biguint<8>(p_shl211_cast_fu_29034_p1.read()));
}

void ShuffleNetV2::thread_tmp_893_cast_fu_25454_p1() {
    tmp_893_cast_fu_25454_p1 = esl_zext<7,4>(p_lshr_f16_cast_fu_25444_p4.read());
}

void ShuffleNetV2::thread_tmp_893_fu_29048_p2() {
    tmp_893_fu_29048_p2 = (!i163_cast1_reg_41649.read().is_01() || !tmp_892_fu_29038_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(i163_cast1_reg_41649.read()) + sc_biguint<8>(tmp_892_fu_29038_p2.read()));
}

void ShuffleNetV2::thread_tmp_894_fu_29085_p1() {
    tmp_894_fu_29085_p1 = esl_zext<64,32>(tmp_1029_cast_fu_29082_p1.read());
}

void ShuffleNetV2::thread_tmp_895_cast_cast_fu_25784_p1() {
    tmp_895_cast_cast_fu_25784_p1 = esl_sext<10,7>(tmp_775_fu_25778_p2.read());
}

void ShuffleNetV2::thread_tmp_895_cast_fu_9546_p1() {
    tmp_895_cast_fu_9546_p1 = esl_sext<64,8>(tmp_649_fu_9541_p2.read());
}

void ShuffleNetV2::thread_tmp_895_fu_10438_p3() {
    tmp_895_fu_10438_p3 = esl_concat<10,1>(tmp_890_fu_10425_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_896_cast1_fu_9401_p1() {
    tmp_896_cast1_fu_9401_p1 = esl_zext<64,13>(tmp_651_reg_34481.read());
}

void ShuffleNetV2::thread_tmp_896_cast_fu_25826_p1() {
    tmp_896_cast_fu_25826_p1 = esl_sext<32,7>(tmp_776_reg_40471.read());
}

void ShuffleNetV2::thread_tmp_896_fu_10450_p2() {
    tmp_896_fu_10450_p2 = (!p_shl301_cast_fu_10430_p3.read().is_01() || !p_shl302_cast_fu_10446_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl301_cast_fu_10430_p3.read()) + sc_biguint<14>(p_shl302_cast_fu_10446_p1.read()));
}

void ShuffleNetV2::thread_tmp_897_fu_29059_p2() {
    tmp_897_fu_29059_p2 = (!tmp66_fu_29053_p2.read().is_01() || !i163_cast_reg_41644.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp66_fu_29053_p2.read()) + sc_biguint<12>(i163_cast_reg_41644.read()));
}

void ShuffleNetV2::thread_tmp_898_fu_10641_p2() {
    tmp_898_fu_10641_p2 = (!tmp_872_reg_34953.read().is_01() || !tmp_340_cast_fu_10637_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_872_reg_34953.read()) + sc_biguint<8>(tmp_340_cast_fu_10637_p1.read()));
}

void ShuffleNetV2::thread_tmp_899_cast1_fu_29064_p1() {
    tmp_899_cast1_fu_29064_p1 = esl_zext<33,12>(tmp_897_reg_41675.read());
}

void ShuffleNetV2::thread_tmp_899_cast_fu_25804_p1() {
    tmp_899_cast_fu_25804_p1 = esl_sext<11,10>(tmp_778_reg_40476.read());
}

void ShuffleNetV2::thread_tmp_899_fu_10476_p2() {
    tmp_899_fu_10476_p2 = (!tmp_884_reg_34901.read().is_01() || !tmp_341_cast_fu_10472_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_884_reg_34901.read()) + sc_biguint<15>(tmp_341_cast_fu_10472_p1.read()));
}

void ShuffleNetV2::thread_tmp_900_cast_fu_28781_p1() {
    tmp_900_cast_fu_28781_p1 = esl_zext<11,2>(h104_reg_7522.read());
}

void ShuffleNetV2::thread_tmp_900_fu_28777_p1() {
    tmp_900_fu_28777_p1 = esl_zext<64,2>(h104_reg_7522.read());
}

void ShuffleNetV2::thread_tmp_901_fu_29168_p2() {
    tmp_901_fu_29168_p2 = (!tmp_891_reg_41699.read().is_01() || !ci68_cast_fu_29152_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_891_reg_41699.read()) + sc_biguint<8>(ci68_cast_fu_29152_p1.read()));
}

void ShuffleNetV2::thread_tmp_902_cast_fu_29173_p1() {
    tmp_902_cast_fu_29173_p1 = esl_sext<12,8>(tmp_901_fu_29168_p2.read());
}

void ShuffleNetV2::thread_tmp_902_fu_10486_p2() {
    tmp_902_fu_10486_p2 = (!tmp_896_reg_34906.read().is_01() || !tmp_341_cast1_fu_10468_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_896_reg_34906.read()) + sc_biguint<14>(tmp_341_cast1_fu_10468_p1.read()));
}

void ShuffleNetV2::thread_tmp_903_cast_fu_29177_p1() {
    tmp_903_cast_fu_29177_p1 = esl_zext<19,5>(ci68_reg_7577.read());
}

void ShuffleNetV2::thread_tmp_903_fu_10745_p2() {
    tmp_903_fu_10745_p2 = (!tmp_763_cast_reg_34261.read().is_01() || !ap_const_lv33_A8.is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_763_cast_reg_34261.read()) + sc_biguint<33>(ap_const_lv33_A8));
}

void ShuffleNetV2::thread_tmp_904_cast_fu_25131_p1() {
    tmp_904_cast_fu_25131_p1 = esl_sext<10,7>(tmp_770_fu_25125_p2.read());
}

void ShuffleNetV2::thread_tmp_904_fu_28825_p2() {
    tmp_904_fu_28825_p2 = (!p_shl216_cast_fu_28809_p1.read().is_01() || !p_shl217_cast_fu_28821_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl216_cast_fu_28809_p1.read()) - sc_biguint<8>(p_shl217_cast_fu_28821_p1.read()));
}

void ShuffleNetV2::thread_tmp_905_cast_fu_25151_p1() {
    tmp_905_cast_fu_25151_p1 = esl_sext<32,7>(tmp_771_reg_40249.read());
}

void ShuffleNetV2::thread_tmp_905_fu_28835_p2() {
    tmp_905_fu_28835_p2 = (!tmp_904_fu_28825_p2.read().is_01() || !co153_cast1_reg_41548.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_904_fu_28825_p2.read()) + sc_biguint<8>(co153_cast1_reg_41548.read()));
}

void ShuffleNetV2::thread_tmp_906_cast_fu_28854_p1() {
    tmp_906_cast_fu_28854_p1 = esl_zext<35,32>(tmp_1048_cast_fu_28851_p1.read());
}

void ShuffleNetV2::thread_tmp_906_fu_10750_p1() {
    tmp_906_fu_10750_p1 = esl_sext<64,33>(tmp_903_fu_10745_p2.read());
}

void ShuffleNetV2::thread_tmp_907_fu_28846_p2() {
    tmp_907_fu_28846_p2 = (!co153_cast_reg_41543.read().is_01() || !tmp65_fu_28840_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(co153_cast_reg_41543.read()) + sc_biguint<10>(tmp65_fu_28840_p2.read()));
}

void ShuffleNetV2::thread_tmp_908_cast_fu_28896_p1() {
    tmp_908_cast_fu_28896_p1 = esl_zext<13,10>(tmp_907_reg_41611.read());
}

void ShuffleNetV2::thread_tmp_908_fu_10695_p3() {
    tmp_908_fu_10695_p3 = esl_concat<5,2>(co25_reg_4616.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_909_fu_29546_p2() {
    tmp_909_fu_29546_p2 = (!co157_cast_fu_29496_p1.read().is_01() || !ap_const_lv8_60.is_01())? sc_lv<8>(): (sc_biguint<8>(co157_cast_fu_29496_p1.read()) + sc_biguint<8>(ap_const_lv8_60));
}

void ShuffleNetV2::thread_tmp_910_fu_29444_p2() {
    tmp_910_fu_29444_p2 = (!p_shl214_cast_fu_29428_p1.read().is_01() || !p_shl215_cast_fu_29440_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl214_cast_fu_29428_p1.read()) - sc_biguint<8>(p_shl215_cast_fu_29440_p1.read()));
}

void ShuffleNetV2::thread_tmp_911_fu_29454_p2() {
    tmp_911_fu_29454_p2 = (!i166_cast1_reg_41806.read().is_01() || !tmp_910_fu_29444_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(i166_cast1_reg_41806.read()) + sc_biguint<8>(tmp_910_fu_29444_p2.read()));
}

void ShuffleNetV2::thread_tmp_912_fu_29491_p1() {
    tmp_912_fu_29491_p1 = esl_zext<64,32>(tmp_1039_cast_fu_29488_p1.read());
}

void ShuffleNetV2::thread_tmp_913_cast_cast_fu_25582_p1() {
    tmp_913_cast_cast_fu_25582_p1 = esl_sext<10,8>(tmp_782_fu_25576_p2.read());
}

void ShuffleNetV2::thread_tmp_913_fu_29465_p2() {
    tmp_913_fu_29465_p2 = (!tmp68_fu_29459_p2.read().is_01() || !i166_cast_reg_41801.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp68_fu_29459_p2.read()) + sc_biguint<12>(i166_cast_reg_41801.read()));
}

void ShuffleNetV2::thread_tmp_914_cast_fu_29470_p1() {
    tmp_914_cast_fu_29470_p1 = esl_zext<33,12>(tmp_913_reg_41832.read());
}

void ShuffleNetV2::thread_tmp_914_fu_10707_p2() {
    tmp_914_fu_10707_p2 = (!p_shl310_cast_fu_10703_p1.read().is_01() || !tmp_342_cast_fu_10691_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl310_cast_fu_10703_p1.read()) - sc_biguint<8>(tmp_342_cast_fu_10691_p1.read()));
}

void ShuffleNetV2::thread_tmp_915_fu_10727_p3() {
    tmp_915_fu_10727_p3 = esl_concat<7,2>(tmp_343_fu_10717_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_916_fu_29223_p2() {
    tmp_916_fu_29223_p2 = (!p_shl220_cast_fu_29209_p1.read().is_01() || !p_shl221_cast_fu_29219_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl220_cast_fu_29209_p1.read()) - sc_biguint<8>(p_shl221_cast_fu_29219_p1.read()));
}

void ShuffleNetV2::thread_tmp_917_fu_29233_p2() {
    tmp_917_fu_29233_p2 = (!tmp_916_fu_29223_p2.read().is_01() || !tmp_1036_cast_reg_41709.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_916_fu_29223_p2.read()) + sc_biguint<8>(tmp_1036_cast_reg_41709.read()));
}

void ShuffleNetV2::thread_tmp_918_fu_29250_p2() {
    tmp_918_fu_29250_p2 = (!p_shl222_cast_fu_29246_p1.read().is_01() || !p_shl220_cast1_fu_29205_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl222_cast_fu_29246_p1.read()) - sc_biguint<10>(p_shl220_cast1_fu_29205_p1.read()));
}

void ShuffleNetV2::thread_tmp_919_fu_29266_p2() {
    tmp_919_fu_29266_p2 = (!tmp67_fu_29260_p2.read().is_01() || !co155_cast_reg_41686.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp67_fu_29260_p2.read()) + sc_biguint<12>(co155_cast_reg_41686.read()));
}

void ShuffleNetV2::thread_tmp_920_fu_29276_p4() {
    tmp_920_fu_29276_p4 = tmp_917_fu_29233_p2.read().range(7, 3);
}

void ShuffleNetV2::thread_tmp_921_fu_29749_p2() {
    tmp_921_fu_29749_p2 = (!p_shl218_cast_fu_29735_p1.read().is_01() || !p_shl219_cast_fu_29745_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl218_cast_fu_29735_p1.read()) - sc_biguint<8>(p_shl219_cast_fu_29745_p1.read()));
}

void ShuffleNetV2::thread_tmp_922_cast1_fu_29598_p1() {
    tmp_922_cast1_fu_29598_p1 = esl_zext<12,3>(h_107_fu_29592_p2.read());
}

void ShuffleNetV2::thread_tmp_922_cast_fu_29602_p1() {
    tmp_922_cast_fu_29602_p1 = esl_zext<13,3>(h_107_fu_29592_p2.read());
}

void ShuffleNetV2::thread_tmp_922_fu_10739_p2() {
    tmp_922_fu_10739_p2 = (!p_shl309_cast_fu_10735_p1.read().is_01() || !tmp_344_cast_fu_10723_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl309_cast_fu_10735_p1.read()) - sc_biguint<10>(tmp_344_cast_fu_10723_p1.read()));
}

void ShuffleNetV2::thread_tmp_923_cast_fu_26224_p1() {
    tmp_923_cast_fu_26224_p1 = esl_zext<7,4>(p_lshr_f17_cast_fu_26214_p4.read());
}

void ShuffleNetV2::thread_tmp_923_fu_29785_p2() {
    tmp_923_fu_29785_p2 = (!tmp_921_reg_41910.read().is_01() || !ci70_cast_fu_29769_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_921_reg_41910.read()) + sc_biguint<8>(ci70_cast_fu_29769_p1.read()));
}

void ShuffleNetV2::thread_tmp_924_cast_fu_29790_p1() {
    tmp_924_cast_fu_29790_p1 = esl_sext<12,8>(tmp_923_fu_29785_p2.read());
}

void ShuffleNetV2::thread_tmp_924_fu_10780_p2() {
    tmp_924_fu_10780_p2 = (!tmp_348_cast_fu_10776_p1.read().is_01() || !tmp_922_reg_35027.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_348_cast_fu_10776_p1.read()) + sc_biguint<10>(tmp_922_reg_35027.read()));
}

void ShuffleNetV2::thread_tmp_925_cast_fu_9609_p1() {
    tmp_925_cast_fu_9609_p1 = esl_sext<9,8>(tmp_653_fu_9603_p2.read());
}

void ShuffleNetV2::thread_tmp_925_fu_10789_p3() {
    tmp_925_fu_10789_p3 = esl_concat<10,2>(tmp_924_fu_10780_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_926_cast_cast_fu_26554_p1() {
    tmp_926_cast_cast_fu_26554_p1 = esl_sext<10,7>(tmp_797_fu_26548_p2.read());
}

void ShuffleNetV2::thread_tmp_926_cast_fu_9649_p1() {
    tmp_926_cast_fu_9649_p1 = esl_sext<64,9>(tmp_658_fu_9644_p2.read());
}

void ShuffleNetV2::thread_tmp_926_fu_10801_p2() {
    tmp_926_fu_10801_p2 = (!p_shl202_fu_10797_p1.read().is_01() || !tmp_1194_cast_fu_10785_p1.read().is_01())? sc_lv<64>(): (sc_bigint<64>(p_shl202_fu_10797_p1.read()) - sc_bigint<64>(tmp_1194_cast_fu_10785_p1.read()));
}

void ShuffleNetV2::thread_tmp_927_cast1_fu_29794_p1() {
    tmp_927_cast1_fu_29794_p1 = esl_zext<19,5>(ci70_reg_7665.read());
}

void ShuffleNetV2::thread_tmp_927_cast_fu_26596_p1() {
    tmp_927_cast_fu_26596_p1 = esl_sext<32,7>(tmp_798_reg_40726.read());
}

void ShuffleNetV2::thread_tmp_927_fu_10807_p2() {
    tmp_927_fu_10807_p2 = (!tmp_348_cast1_fu_10772_p1.read().is_01() || !tmp_1191_cast_reg_35022.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_348_cast1_fu_10772_p1.read()) + sc_bigint<9>(tmp_1191_cast_reg_35022.read()));
}

void ShuffleNetV2::thread_tmp_928_fu_10823_p2() {
    tmp_928_fu_10823_p2 = (!ap_const_lv9_2.is_01())? sc_lv<9>(): tmp_927_reg_35046.read() << (unsigned short)ap_const_lv9_2.to_uint();
}

void ShuffleNetV2::thread_tmp_929_cast1_fu_29680_p1() {
    tmp_929_cast1_fu_29680_p1 = esl_zext<13,3>(w_110_fu_29674_p2.read());
}

void ShuffleNetV2::thread_tmp_929_cast_fu_29684_p1() {
    tmp_929_cast_fu_29684_p1 = esl_zext<14,3>(w_110_fu_29674_p2.read());
}

void ShuffleNetV2::thread_tmp_929_fu_10828_p2() {
    tmp_929_fu_10828_p2 = (!tmp_928_fu_10823_p2.read().is_01() || !tmp_927_reg_35046.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_928_fu_10823_p2.read()) - sc_biguint<9>(tmp_927_reg_35046.read()));
}

void ShuffleNetV2::thread_tmp_930_cast_fu_26574_p1() {
    tmp_930_cast_fu_26574_p1 = esl_sext<11,10>(tmp_800_reg_40731.read());
}

void ShuffleNetV2::thread_tmp_930_fu_30061_p2() {
    tmp_930_fu_30061_p2 = (!p_shl223_cast_fu_30045_p1.read().is_01() || !p_shl224_cast_fu_30057_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl223_cast_fu_30045_p1.read()) - sc_biguint<8>(p_shl224_cast_fu_30057_p1.read()));
}

void ShuffleNetV2::thread_tmp_931_fu_30071_p2() {
    tmp_931_fu_30071_p2 = (!i172_cast1_reg_42017.read().is_01() || !tmp_930_fu_30061_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(i172_cast1_reg_42017.read()) + sc_biguint<8>(tmp_930_fu_30061_p2.read()));
}

void ShuffleNetV2::thread_tmp_932_fu_30108_p1() {
    tmp_932_fu_30108_p1 = esl_zext<64,32>(tmp_1067_cast_fu_30105_p1.read());
}

void ShuffleNetV2::thread_tmp_933_fu_30082_p2() {
    tmp_933_fu_30082_p2 = (!tmp70_fu_30076_p2.read().is_01() || !i172_cast_reg_42012.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp70_fu_30076_p2.read()) + sc_biguint<12>(i172_cast_reg_42012.read()));
}

void ShuffleNetV2::thread_tmp_934_cast_fu_30087_p1() {
    tmp_934_cast_fu_30087_p1 = esl_zext<33,12>(tmp_933_reg_42043.read());
}

void ShuffleNetV2::thread_tmp_934_fu_10812_p2() {
    tmp_934_fu_10812_p2 = (!tmp_603_reg_34365.read().is_01() || !tmp_926_fu_10801_p2.read().is_01())? sc_lv<64>(): (sc_bigint<64>(tmp_603_reg_34365.read()) + sc_biguint<64>(tmp_926_fu_10801_p2.read()));
}

void ShuffleNetV2::thread_tmp_935_fu_29840_p2() {
    tmp_935_fu_29840_p2 = (!p_shl225_cast_fu_29826_p1.read().is_01() || !p_shl226_cast_fu_29836_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl225_cast_fu_29826_p1.read()) - sc_biguint<8>(p_shl226_cast_fu_29836_p1.read()));
}

void ShuffleNetV2::thread_tmp_936_fu_29850_p2() {
    tmp_936_fu_29850_p2 = (!tmp_935_fu_29840_p2.read().is_01() || !tmp_1058_cast_reg_41920.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_935_fu_29840_p2.read()) + sc_biguint<8>(tmp_1058_cast_reg_41920.read()));
}

void ShuffleNetV2::thread_tmp_937_fu_29867_p2() {
    tmp_937_fu_29867_p2 = (!p_shl227_cast_fu_29863_p1.read().is_01() || !p_shl225_cast1_fu_29822_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl227_cast_fu_29863_p1.read()) - sc_biguint<10>(p_shl225_cast1_fu_29822_p1.read()));
}

void ShuffleNetV2::thread_tmp_938_fu_29883_p2() {
    tmp_938_fu_29883_p2 = (!tmp69_fu_29877_p2.read().is_01() || !co158_cast_reg_41897.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp69_fu_29877_p2.read()) + sc_biguint<12>(co158_cast_reg_41897.read()));
}

void ShuffleNetV2::thread_tmp_939_cast_cast_fu_26352_p1() {
    tmp_939_cast_cast_fu_26352_p1 = esl_sext<9,8>(tmp_804_fu_26346_p2.read());
}

void ShuffleNetV2::thread_tmp_939_fu_29893_p4() {
    tmp_939_fu_29893_p4 = tmp_936_fu_29850_p2.read().range(7, 3);
}

void ShuffleNetV2::thread_tmp_940_cast1_fu_30145_p1() {
    tmp_940_cast1_fu_30145_p1 = esl_zext<13,2>(w111_reg_7720.read());
}

void ShuffleNetV2::thread_tmp_940_cast_fu_30149_p1() {
    tmp_940_cast_fu_30149_p1 = esl_zext<36,2>(w111_reg_7720.read());
}

void ShuffleNetV2::thread_tmp_940_fu_10887_p4() {
    tmp_940_fu_10887_p4 = esl_concat<6,5>(esl_concat<1,5>(ap_const_lv1_1, co29_reg_4661.read()), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_941_fu_30520_p2() {
    tmp_941_fu_30520_p2 = (!p_shl230_cast_fu_30506_p1.read().is_01() || !p_shl231_cast_fu_30516_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl230_cast_fu_30506_p1.read()) - sc_biguint<8>(p_shl231_cast_fu_30516_p1.read()));
}

void ShuffleNetV2::thread_tmp_942_fu_30426_p2() {
    tmp_942_fu_30426_p2 = (!p_shl228_cast_fu_30410_p1.read().is_01() || !p_shl229_cast_fu_30422_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl228_cast_fu_30410_p1.read()) - sc_biguint<8>(p_shl229_cast_fu_30422_p1.read()));
}

void ShuffleNetV2::thread_tmp_943_cast_cast_fu_26923_p1() {
    tmp_943_cast_cast_fu_26923_p1 = esl_sext<10,7>(tmp_810_fu_26917_p2.read());
}

void ShuffleNetV2::thread_tmp_943_fu_30436_p2() {
    tmp_943_fu_30436_p2 = (!i175_cast1_reg_42160.read().is_01() || !tmp_942_fu_30426_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(i175_cast1_reg_42160.read()) + sc_biguint<8>(tmp_942_fu_30426_p2.read()));
}

void ShuffleNetV2::thread_tmp_944_cast_fu_26965_p1() {
    tmp_944_cast_fu_26965_p1 = esl_sext<32,7>(tmp_811_reg_40869.read());
}

void ShuffleNetV2::thread_tmp_944_fu_10897_p1() {
    tmp_944_fu_10897_p1 = esl_sext<12,11>(tmp_940_fu_10887_p4.read());
}

void ShuffleNetV2::thread_tmp_945_fu_10905_p4() {
    tmp_945_fu_10905_p4 = esl_concat<6,3>(esl_concat<1,5>(ap_const_lv1_1, co29_reg_4661.read()), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_946_fu_30473_p1() {
    tmp_946_fu_30473_p1 = esl_zext<64,32>(tmp_1084_cast_fu_30470_p1.read());
}

void ShuffleNetV2::thread_tmp_947_cast_fu_26943_p1() {
    tmp_947_cast_fu_26943_p1 = esl_sext<11,10>(tmp_813_reg_40874.read());
}

void ShuffleNetV2::thread_tmp_947_fu_10915_p1() {
    tmp_947_fu_10915_p1 = esl_sext<10,9>(tmp_945_fu_10905_p4.read());
}

void ShuffleNetV2::thread_tmp_948_fu_30447_p2() {
    tmp_948_fu_30447_p2 = (!tmp72_fu_30441_p2.read().is_01() || !i175_cast_reg_42155.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp72_fu_30441_p2.read()) + sc_biguint<12>(i175_cast_reg_42155.read()));
}

void ShuffleNetV2::thread_tmp_949_cast_fu_30452_p1() {
    tmp_949_cast_fu_30452_p1 = esl_zext<33,12>(tmp_948_reg_42186.read());
}

void ShuffleNetV2::thread_tmp_949_fu_10923_p2() {
    tmp_949_fu_10923_p2 = (!p_shl315_cast_fu_10901_p1.read().is_01() || !p_shl316_cast_fu_10919_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl315_cast_fu_10901_p1.read()) - sc_biguint<13>(p_shl316_cast_fu_10919_p1.read()));
}

void ShuffleNetV2::thread_tmp_950_cast_fu_30169_p1() {
    tmp_950_cast_fu_30169_p1 = esl_zext<11,2>(h108_reg_7731.read());
}

void ShuffleNetV2::thread_tmp_950_fu_30165_p1() {
    tmp_950_fu_30165_p1 = esl_zext<64,2>(h108_reg_7731.read());
}

void ShuffleNetV2::thread_tmp_951_cast_fu_27033_p1() {
    tmp_951_cast_fu_27033_p1 = esl_zext<7,4>(p_lshr_f18_cast_fu_27023_p4.read());
}

void ShuffleNetV2::thread_tmp_951_fu_30556_p2() {
    tmp_951_fu_30556_p2 = (!tmp_941_reg_42210.read().is_01() || !ci72_cast_fu_30540_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_941_reg_42210.read()) + sc_biguint<8>(ci72_cast_fu_30540_p1.read()));
}

void ShuffleNetV2::thread_tmp_952_cast_fu_30561_p1() {
    tmp_952_cast_fu_30561_p1 = esl_sext<12,8>(tmp_951_fu_30556_p2.read());
}

void ShuffleNetV2::thread_tmp_952_fu_10948_p1() {
    tmp_952_fu_10948_p1 = co29_reg_4661.read().range(3-1, 0);
}

void ShuffleNetV2::thread_tmp_953_cast_cast_fu_27363_p1() {
    tmp_953_cast_cast_fu_27363_p1 = esl_sext<10,7>(tmp_829_fu_27357_p2.read());
}

void ShuffleNetV2::thread_tmp_953_cast_fu_30565_p1() {
    tmp_953_cast_fu_30565_p1 = esl_zext<19,5>(ci72_reg_7786.read());
}

void ShuffleNetV2::thread_tmp_953_fu_10962_p3() {
    tmp_953_fu_10962_p3 = esl_concat<2,5>(newIndex7_fu_10952_p4.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_954_cast_fu_27405_p1() {
    tmp_954_cast_fu_27405_p1 = esl_sext<32,7>(tmp_830_reg_41026.read());
}

void ShuffleNetV2::thread_tmp_954_fu_30213_p2() {
    tmp_954_fu_30213_p2 = (!p_shl234_cast_fu_30197_p1.read().is_01() || !p_shl235_cast_fu_30209_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl234_cast_fu_30197_p1.read()) - sc_biguint<8>(p_shl235_cast_fu_30209_p1.read()));
}

void ShuffleNetV2::thread_tmp_955_fu_30223_p2() {
    tmp_955_fu_30223_p2 = (!tmp_954_fu_30213_p2.read().is_01() || !co161_cast1_reg_42059.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_954_fu_30213_p2.read()) + sc_biguint<8>(co161_cast1_reg_42059.read()));
}

void ShuffleNetV2::thread_tmp_956_cast_fu_30242_p1() {
    tmp_956_cast_fu_30242_p1 = esl_zext<35,32>(tmp_1103_cast_fu_30239_p1.read());
}

void ShuffleNetV2::thread_tmp_956_fu_10974_p3() {
    tmp_956_fu_10974_p3 = esl_concat<2,3>(newIndex7_fu_10952_p4.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_957_cast_fu_27383_p1() {
    tmp_957_cast_fu_27383_p1 = esl_sext<11,10>(tmp_832_reg_41031.read());
}

void ShuffleNetV2::thread_tmp_957_fu_30234_p2() {
    tmp_957_fu_30234_p2 = (!co161_cast_reg_42054.read().is_01() || !tmp71_fu_30228_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(co161_cast_reg_42054.read()) + sc_biguint<10>(tmp71_fu_30228_p2.read()));
}

void ShuffleNetV2::thread_tmp_958_cast_fu_30284_p1() {
    tmp_958_cast_fu_30284_p1 = esl_zext<13,10>(tmp_957_reg_42122.read());
}

void ShuffleNetV2::thread_tmp_958_fu_10986_p2() {
    tmp_958_fu_10986_p2 = (!p_shl313_cast_fu_10970_p1.read().is_01() || !p_shl314_cast_fu_10982_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl313_cast_fu_10970_p1.read()) - sc_biguint<8>(p_shl314_cast_fu_10982_p1.read()));
}

void ShuffleNetV2::thread_tmp_959_fu_30840_p2() {
    tmp_959_fu_30840_p2 = (!p_shl232_cast_fu_30824_p1.read().is_01() || !p_shl233_cast_fu_30836_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl232_cast_fu_30824_p1.read()) - sc_biguint<8>(p_shl233_cast_fu_30836_p1.read()));
}

void ShuffleNetV2::thread_tmp_960_fu_30850_p2() {
    tmp_960_fu_30850_p2 = (!i178_cast1_reg_42317.read().is_01() || !tmp_959_fu_30840_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(i178_cast1_reg_42317.read()) + sc_biguint<8>(tmp_959_fu_30840_p2.read()));
}

void ShuffleNetV2::thread_tmp_961_fu_30887_p1() {
    tmp_961_fu_30887_p1 = esl_zext<64,32>(tmp_1094_cast_fu_30884_p1.read());
}

void ShuffleNetV2::thread_tmp_962_cast_fu_26710_p1() {
    tmp_962_cast_fu_26710_p1 = esl_sext<10,7>(tmp_824_fu_26704_p2.read());
}

void ShuffleNetV2::thread_tmp_962_fu_30861_p2() {
    tmp_962_fu_30861_p2 = (!tmp74_fu_30855_p2.read().is_01() || !i178_cast_reg_42312.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp74_fu_30855_p2.read()) + sc_biguint<12>(i178_cast_reg_42312.read()));
}

void ShuffleNetV2::thread_tmp_963_cast1_fu_30866_p1() {
    tmp_963_cast1_fu_30866_p1 = esl_zext<33,12>(tmp_962_reg_42343.read());
}

void ShuffleNetV2::thread_tmp_963_cast_fu_26730_p1() {
    tmp_963_cast_fu_26730_p1 = esl_sext<32,7>(tmp_825_reg_40804.read());
}

void ShuffleNetV2::thread_tmp_963_fu_10929_p1() {
    tmp_963_fu_10929_p1 = esl_sext<33,13>(tmp_949_fu_10923_p2.read());
}

void ShuffleNetV2::thread_tmp_964_fu_30611_p2() {
    tmp_964_fu_30611_p2 = (!p_shl236_cast_fu_30597_p1.read().is_01() || !p_shl237_cast_fu_30607_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl236_cast_fu_30597_p1.read()) - sc_biguint<8>(p_shl237_cast_fu_30607_p1.read()));
}

void ShuffleNetV2::thread_tmp_965_fu_30621_p2() {
    tmp_965_fu_30621_p2 = (!tmp_964_fu_30611_p2.read().is_01() || !tmp_1091_cast_reg_42220.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_964_fu_30611_p2.read()) + sc_biguint<8>(tmp_1091_cast_reg_42220.read()));
}

void ShuffleNetV2::thread_tmp_966_fu_30638_p2() {
    tmp_966_fu_30638_p2 = (!p_shl238_cast_fu_30634_p1.read().is_01() || !p_shl236_cast1_fu_30593_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl238_cast_fu_30634_p1.read()) - sc_biguint<10>(p_shl236_cast1_fu_30593_p1.read()));
}

void ShuffleNetV2::thread_tmp_967_fu_30654_p2() {
    tmp_967_fu_30654_p2 = (!tmp73_fu_30648_p2.read().is_01() || !co163_cast179_cast_reg_42197.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp73_fu_30648_p2.read()) + sc_biguint<11>(co163_cast179_cast_reg_42197.read()));
}

void ShuffleNetV2::thread_tmp_968_fu_30664_p4() {
    tmp_968_fu_30664_p4 = tmp_965_fu_30621_p2.read().range(7, 3);
}

void ShuffleNetV2::thread_tmp_969_fu_31065_p2() {
    tmp_969_fu_31065_p2 = (!co166_cast_fu_31015_p1.read().is_01() || !ap_const_lv8_60.is_01())? sc_lv<8>(): (sc_biguint<8>(co166_cast_fu_31015_p1.read()) + sc_biguint<8>(ap_const_lv8_60));
}

void ShuffleNetV2::thread_tmp_970_cast_fu_30950_p1() {
    tmp_970_cast_fu_30950_p1 = esl_zext<12,3>(h_111_fu_30944_p2.read());
}

void ShuffleNetV2::thread_tmp_970_fu_10933_p2() {
    tmp_970_fu_10933_p2 = (!tmp_764_cast_reg_34324.read().is_01() || !tmp_963_fu_10929_p1.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_764_cast_reg_34324.read()) + sc_bigint<33>(tmp_963_fu_10929_p1.read()));
}

void ShuffleNetV2::thread_tmp_971_cast_cast_fu_27161_p1() {
    tmp_971_cast_cast_fu_27161_p1 = esl_sext<9,8>(tmp_836_fu_27155_p2.read());
}

void ShuffleNetV2::thread_tmp_971_fu_31268_p2() {
    tmp_971_fu_31268_p2 = (!p_shl239_cast_fu_31254_p1.read().is_01() || !p_shl240_cast_fu_31264_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl239_cast_fu_31254_p1.read()) - sc_biguint<8>(p_shl240_cast_fu_31264_p1.read()));
}

void ShuffleNetV2::thread_tmp_972_cast1_fu_31117_p1() {
    tmp_972_cast1_fu_31117_p1 = esl_zext<13,3>(h_113_fu_31111_p2.read());
}

void ShuffleNetV2::thread_tmp_972_cast_fu_31121_p1() {
    tmp_972_cast_fu_31121_p1 = esl_zext<12,3>(h_113_fu_31111_p2.read());
}

void ShuffleNetV2::thread_tmp_972_fu_10938_p1() {
    tmp_972_fu_10938_p1 = esl_sext<64,33>(tmp_970_fu_10933_p2.read());
}

void ShuffleNetV2::thread_tmp_973_fu_10849_p2() {
    tmp_973_fu_10849_p2 = (!tmp_929_reg_35058.read().is_01() || !tmp_349_cast_fu_10845_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_929_reg_35058.read()) + sc_biguint<9>(tmp_349_cast_fu_10845_p1.read()));
}

void ShuffleNetV2::thread_tmp_975_cast_fu_31001_p1() {
    tmp_975_cast_fu_31001_p1 = esl_zext<14,3>(w_114_fu_30995_p2.read());
}

void ShuffleNetV2::thread_tmp_975_fu_11037_p3() {
    tmp_975_fu_11037_p3 = esl_concat<2,5>(ap_const_lv2_2, tmp_974_reg_4684.read());
}

void ShuffleNetV2::thread_tmp_976_fu_11045_p1() {
    tmp_976_fu_11045_p1 = esl_sext<8,7>(tmp_975_fu_11037_p3.read());
}

void ShuffleNetV2::thread_tmp_977_cast_fu_27590_p1() {
    tmp_977_cast_fu_27590_p1 = esl_zext<8,3>(p_lshr_f19_cast_fu_27580_p4.read());
}

void ShuffleNetV2::thread_tmp_977_fu_31304_p2() {
    tmp_977_fu_31304_p2 = (!tmp_971_reg_42465.read().is_01() || !ci74_cast_fu_31288_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_971_reg_42465.read()) + sc_biguint<8>(ci74_cast_fu_31288_p1.read()));
}

void ShuffleNetV2::thread_tmp_978_cast_fu_31309_p1() {
    tmp_978_cast_fu_31309_p1 = esl_sext<12,8>(tmp_977_fu_31304_p2.read());
}

void ShuffleNetV2::thread_tmp_978_fu_11049_p1() {
    tmp_978_fu_11049_p1 = esl_zext<33,8>(tmp_976_fu_11045_p1.read());
}

void ShuffleNetV2::thread_tmp_979_cast_cast_fu_27892_p1() {
    tmp_979_cast_cast_fu_27892_p1 = esl_sext<10,8>(tmp_848_fu_27886_p2.read());
}

void ShuffleNetV2::thread_tmp_979_cast_fu_31313_p1() {
    tmp_979_cast_fu_31313_p1 = esl_zext<20,5>(ci74_reg_7907.read());
}

void ShuffleNetV2::thread_tmp_979_fu_11053_p2() {
    tmp_979_fu_11053_p2 = (!tmp_978_fu_11049_p1.read().is_01() || !tmp_763_cast_reg_34261.read().is_01())? sc_lv<33>(): (sc_biguint<33>(tmp_978_fu_11049_p1.read()) + sc_bigint<33>(tmp_763_cast_reg_34261.read()));
}

void ShuffleNetV2::thread_tmp_980_cast1_fu_31199_p1() {
    tmp_980_cast1_fu_31199_p1 = esl_zext<14,3>(w_116_fu_31193_p2.read());
}

void ShuffleNetV2::thread_tmp_980_cast2_fu_31203_p1() {
    tmp_980_cast2_fu_31203_p1 = esl_zext<13,3>(w_116_fu_31193_p2.read());
}

void ShuffleNetV2::thread_tmp_980_cast_fu_27934_p1() {
    tmp_980_cast_fu_27934_p1 = esl_sext<32,8>(tmp_849_reg_41227.read());
}

void ShuffleNetV2::thread_tmp_980_fu_11058_p1() {
    tmp_980_fu_11058_p1 = esl_sext<64,33>(tmp_979_fu_11053_p2.read());
}

void ShuffleNetV2::thread_tmp_981_fu_31580_p2() {
    tmp_981_fu_31580_p2 = (!p_shl241_cast_fu_31564_p1.read().is_01() || !p_shl242_cast_fu_31576_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl241_cast_fu_31564_p1.read()) - sc_biguint<8>(p_shl242_cast_fu_31576_p1.read()));
}

void ShuffleNetV2::thread_tmp_982_fu_31590_p2() {
    tmp_982_fu_31590_p2 = (!i184_cast1_reg_42572.read().is_01() || !tmp_981_fu_31580_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(i184_cast1_reg_42572.read()) + sc_biguint<8>(tmp_981_fu_31580_p2.read()));
}

void ShuffleNetV2::thread_tmp_983_cast_fu_27912_p1() {
    tmp_983_cast_fu_27912_p1 = esl_sext<11,10>(tmp_851_reg_41232.read());
}

void ShuffleNetV2::thread_tmp_983_fu_31627_p1() {
    tmp_983_fu_31627_p1 = esl_zext<64,32>(tmp_1125_cast_fu_31624_p1.read());
}

void ShuffleNetV2::thread_tmp_984_fu_31601_p2() {
    tmp_984_fu_31601_p2 = (!tmp76_fu_31595_p2.read().is_01() || !i184_cast_reg_42567.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp76_fu_31595_p2.read()) + sc_biguint<12>(i184_cast_reg_42567.read()));
}

void ShuffleNetV2::thread_tmp_985_cast_fu_31606_p1() {
    tmp_985_cast_fu_31606_p1 = esl_zext<33,12>(tmp_984_reg_42598.read());
}

void ShuffleNetV2::thread_tmp_985_fu_11008_p2() {
    tmp_985_fu_11008_p2 = (!tmp_958_reg_35102.read().is_01() || !tmp_353_cast_fu_11004_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_958_reg_35102.read()) + sc_biguint<8>(tmp_353_cast_fu_11004_p1.read()));
}

void ShuffleNetV2::thread_tmp_986_fu_31359_p2() {
    tmp_986_fu_31359_p2 = (!p_shl243_cast_fu_31345_p1.read().is_01() || !p_shl244_cast_fu_31355_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl243_cast_fu_31345_p1.read()) - sc_biguint<8>(p_shl244_cast_fu_31355_p1.read()));
}

void ShuffleNetV2::thread_tmp_987_fu_31369_p2() {
    tmp_987_fu_31369_p2 = (!tmp_986_fu_31359_p2.read().is_01() || !tmp_1121_cast_reg_42475.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_986_fu_31359_p2.read()) + sc_biguint<8>(tmp_1121_cast_reg_42475.read()));
}

void ShuffleNetV2::thread_tmp_988_fu_31386_p2() {
    tmp_988_fu_31386_p2 = (!p_shl245_cast_fu_31382_p1.read().is_01() || !p_shl243_cast1_fu_31341_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl245_cast_fu_31382_p1.read()) - sc_biguint<10>(p_shl243_cast1_fu_31341_p1.read()));
}

void ShuffleNetV2::thread_tmp_989_fu_31402_p2() {
    tmp_989_fu_31402_p2 = (!tmp75_fu_31396_p2.read().is_01() || !co168_cast_reg_42452.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp75_fu_31396_p2.read()) + sc_biguint<13>(co168_cast_reg_42452.read()));
}

void ShuffleNetV2::thread_tmp_990_fu_31412_p4() {
    tmp_990_fu_31412_p4 = tmp_987_fu_31369_p2.read().range(7, 3);
}

void ShuffleNetV2::thread_tmp_991_cast1_fu_31664_p1() {
    tmp_991_cast1_fu_31664_p1 = esl_zext<14,2>(w117_reg_7962.read());
}

void ShuffleNetV2::thread_tmp_991_cast_fu_31668_p1() {
    tmp_991_cast_fu_31668_p1 = esl_zext<36,2>(w117_reg_7962.read());
}

void ShuffleNetV2::thread_tmp_991_fu_11085_p3() {
    tmp_991_fu_11085_p3 = esl_concat<5,4>(co32_reg_4696.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_992_cast_fu_27698_p1() {
    tmp_992_cast_fu_27698_p1 = esl_sext<12,10>(tmp_855_fu_27692_p2.read());
}

void ShuffleNetV2::thread_tmp_992_fu_32051_p2() {
    tmp_992_fu_32051_p2 = (!p_shl248_cast_fu_32037_p1.read().is_01() || !p_shl249_cast_fu_32047_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl248_cast_fu_32037_p1.read()) - sc_biguint<8>(p_shl249_cast_fu_32047_p1.read()));
}

void ShuffleNetV2::thread_tmp_993_fu_11097_p3() {
    tmp_993_fu_11097_p3 = esl_concat<5,1>(co32_reg_4696.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_994_fu_31957_p2() {
    tmp_994_fu_31957_p2 = (!p_shl246_cast_fu_31941_p1.read().is_01() || !p_shl247_cast_fu_31953_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl246_cast_fu_31941_p1.read()) - sc_biguint<8>(p_shl247_cast_fu_31953_p1.read()));
}

void ShuffleNetV2::thread_tmp_995_fu_11109_p2() {
    tmp_995_fu_11109_p2 = (!p_shl318_cast_fu_11105_p1.read().is_01() || !p_shl317_cast_fu_11093_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl318_cast_fu_11105_p1.read()) + sc_biguint<10>(p_shl317_cast_fu_11093_p1.read()));
}

void ShuffleNetV2::thread_tmp_996_cast_cast_fu_28261_p1() {
    tmp_996_cast_cast_fu_28261_p1 = esl_sext<9,8>(tmp_860_fu_28255_p2.read());
}

void ShuffleNetV2::thread_tmp_996_fu_31967_p2() {
    tmp_996_fu_31967_p2 = (!i187_cast1_reg_42715.read().is_01() || !tmp_994_fu_31957_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(i187_cast1_reg_42715.read()) + sc_biguint<8>(tmp_994_fu_31957_p2.read()));
}

void ShuffleNetV2::thread_tmp_997_cast_fu_28303_p1() {
    tmp_997_cast_fu_28303_p1 = esl_sext<32,8>(tmp_862_reg_41370.read());
}

void ShuffleNetV2::thread_tmp_997_fu_32004_p1() {
    tmp_997_fu_32004_p1 = esl_zext<64,32>(tmp_1142_cast_fu_32001_p1.read());
}

void ShuffleNetV2::thread_tmp_998_fu_31978_p2() {
    tmp_998_fu_31978_p2 = (!tmp78_fu_31972_p2.read().is_01() || !i187_cast_reg_42710.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp78_fu_31972_p2.read()) + sc_biguint<12>(i187_cast_reg_42710.read()));
}

void ShuffleNetV2::thread_tmp_999_cast_fu_31983_p1() {
    tmp_999_cast_fu_31983_p1 = esl_zext<33,12>(tmp_998_reg_42741.read());
}

void ShuffleNetV2::thread_tmp_999_fu_11208_p3() {
    tmp_999_fu_11208_p3 = esl_concat<5,4>(co35_reg_4729.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_fu_9207_p1() {
    tmp_fu_9207_p1 = esl_zext<64,5>(i_reg_4284.read());
}

void ShuffleNetV2::thread_tmp_s_fu_9239_p1() {
    tmp_s_fu_9239_p1 = esl_zext<64,10>(i1_reg_4296.read());
}

void ShuffleNetV2::thread_w_100_fu_26131_p2() {
    w_100_fu_26131_p2 = (!w99_reg_7104.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w99_reg_7104.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_102_fu_26630_p2() {
    w_102_fu_26630_p2 = (!w101_reg_7181.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w101_reg_7181.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_104_fu_27512_p2() {
    w_104_fu_27512_p2 = (!w103_reg_7313.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w103_reg_7313.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_106_fu_27968_p2() {
    w_106_fu_27968_p2 = (!w105_reg_7390.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w105_reg_7390.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_108_fu_28751_p2() {
    w_108_fu_28751_p2 = (!w107_reg_7511.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w107_reg_7511.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_110_fu_29674_p2() {
    w_110_fu_29674_p2 = (!w109_reg_7643.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(w109_reg_7643.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_w_112_fu_30139_p2() {
    w_112_fu_30139_p2 = (!w111_reg_7720.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w111_reg_7720.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_114_fu_30995_p2() {
    w_114_fu_30995_p2 = (!w113_reg_7852.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(w113_reg_7852.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_w_116_fu_31193_p2() {
    w_116_fu_31193_p2 = (!w115_reg_7885.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(w115_reg_7885.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_w_118_fu_31658_p2() {
    w_118_fu_31658_p2 = (!w117_reg_7962.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w117_reg_7962.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_120_fu_32518_p2() {
    w_120_fu_32518_p2 = (!w119_reg_8094.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(w119_reg_8094.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_w_122_fu_32716_p2() {
    w_122_fu_32716_p2 = (!w121_reg_8127.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(w121_reg_8127.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_w_124_fu_33181_p2() {
    w_124_fu_33181_p2 = (!w123_reg_8204.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w123_reg_8204.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_127_fu_34117_p2() {
    w_127_fu_34117_p2 = (!w125_reg_8358.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(w125_reg_8358.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_w_1_fu_34033_p2() {
    w_1_fu_34033_p2 = (!w126_reg_8336.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(w126_reg_8336.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_w_37_fu_9309_p2() {
    w_37_fu_9309_p2 = (!w_reg_4331.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(w_reg_4331.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void ShuffleNetV2::thread_w_38_fu_9634_p2() {
    w_38_fu_9634_p2 = (!w6_reg_4399.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w6_reg_4399.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_39_fu_9976_p2() {
    w_39_fu_9976_p2 = (!w13_reg_4479.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w13_reg_4479.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_40_fu_10462_p2() {
    w_40_fu_10462_p2 = (!w21_reg_4570.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(w21_reg_4570.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_w_41_fu_10766_p2() {
    w_41_fu_10766_p2 = (!w26_reg_4627.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w26_reg_4627.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_42_fu_11172_p2() {
    w_42_fu_11172_p2 = (!w34_reg_4718.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(w34_reg_4718.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_w_43_fu_11362_p2() {
    w_43_fu_11362_p2 = (!w37_reg_4751.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(w37_reg_4751.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_w_44_fu_11666_p2() {
    w_44_fu_11666_p2 = (!w42_reg_4808.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w42_reg_4808.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_46_fu_12054_p2() {
    w_46_fu_12054_p2 = (!w45_reg_4899.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(w45_reg_4899.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_w_48_fu_12244_p2() {
    w_48_fu_12244_p2 = (!w47_reg_4932.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(w47_reg_4932.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_w_50_fu_12572_p2() {
    w_50_fu_12572_p2 = (!w49_reg_4989.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w49_reg_4989.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_52_fu_12962_p2() {
    w_52_fu_12962_p2 = (!w51_reg_5080.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(w51_reg_5080.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_w_54_fu_13436_p2() {
    w_54_fu_13436_p2 = (!w53_reg_5157.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w53_reg_5157.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_56_fu_14241_p2() {
    w_56_fu_14241_p2 = (!w55_reg_5278.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w55_reg_5278.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_58_fu_15190_p2() {
    w_58_fu_15190_p2 = (!w57_reg_5410.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w57_reg_5410.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_60_fu_15677_p2() {
    w_60_fu_15677_p2 = (!w59_reg_5487.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w59_reg_5487.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_62_fu_16551_p2() {
    w_62_fu_16551_p2 = (!w61_reg_5619.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w61_reg_5619.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_64_fu_16749_p2() {
    w_64_fu_16749_p2 = (!w63_reg_5652.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w63_reg_5652.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_66_fu_17236_p2() {
    w_66_fu_17236_p2 = (!w65_reg_5729.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w65_reg_5729.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_68_fu_18114_p2() {
    w_68_fu_18114_p2 = (!w67_reg_5861.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w67_reg_5861.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_70_fu_18312_p2() {
    w_70_fu_18312_p2 = (!w69_reg_5894.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w69_reg_5894.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_72_fu_18811_p2() {
    w_72_fu_18811_p2 = (!w71_reg_5971.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w71_reg_5971.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_74_fu_19685_p2() {
    w_74_fu_19685_p2 = (!w73_reg_6103.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w73_reg_6103.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_76_fu_19883_p2() {
    w_76_fu_19883_p2 = (!w75_reg_6136.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w75_reg_6136.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_78_fu_20370_p2() {
    w_78_fu_20370_p2 = (!w77_reg_6213.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w77_reg_6213.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_80_fu_21236_p2() {
    w_80_fu_21236_p2 = (!w79_reg_6345.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w79_reg_6345.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_82_fu_21434_p2() {
    w_82_fu_21434_p2 = (!w81_reg_6378.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w81_reg_6378.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_84_fu_21921_p2() {
    w_84_fu_21921_p2 = (!w83_reg_6455.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w83_reg_6455.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_86_fu_22795_p2() {
    w_86_fu_22795_p2 = (!w85_reg_6587.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w85_reg_6587.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_88_fu_22993_p2() {
    w_88_fu_22993_p2 = (!w87_reg_6620.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w87_reg_6620.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_90_fu_23480_p2() {
    w_90_fu_23480_p2 = (!w89_reg_6697.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w89_reg_6697.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_92_fu_24358_p2() {
    w_92_fu_24358_p2 = (!w91_reg_6829.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w91_reg_6829.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_94_fu_24556_p2() {
    w_94_fu_24556_p2 = (!w93_reg_6862.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w93_reg_6862.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_96_fu_25051_p2() {
    w_96_fu_25051_p2 = (!w95_reg_6939.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w95_reg_6939.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_98_fu_25933_p2() {
    w_98_fu_25933_p2 = (!w97_reg_7071.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w97_reg_7071.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_weights_24_1_3x3_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state332.read())) {
        weights_24_1_3x3_V_address0 =  (sc_lv<8>) (tmp_1316_cast_fu_12660_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state259.read())) {
        weights_24_1_3x3_V_address0 =  (sc_lv<8>) (tmp_1261_cast_fu_11754_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state186.read())) {
        weights_24_1_3x3_V_address0 =  (sc_lv<8>) (tmp_1209_cast1_fu_10854_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read())) {
        weights_24_1_3x3_V_address0 =  (sc_lv<8>) (tmp_1112_cast_fu_10060_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read())) {
        weights_24_1_3x3_V_address0 =  (sc_lv<8>) (tmp_763_reg_34622.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        weights_24_1_3x3_V_address0 = grp_subconv_3x3_32_strid_fu_8830_weight_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state196.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state269.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state342.read()))) {
        weights_24_1_3x3_V_address0 = grp_subconv_3x3_16_no_re_fu_8804_weight_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read())) {
        weights_24_1_3x3_V_address0 = grp_subconv_3x3_32_strid_1_fu_8674_weight_V_address0.read();
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
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        weights_24_1_3x3_V_ce0 = grp_subconv_3x3_32_strid_fu_8830_weight_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state196.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state269.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state342.read()))) {
        weights_24_1_3x3_V_ce0 = grp_subconv_3x3_16_no_re_fu_8804_weight_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read())) {
        weights_24_1_3x3_V_ce0 = grp_subconv_3x3_32_strid_1_fu_8674_weight_V_ce0.read();
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

void ShuffleNetV2::thread_weights_24_24_1x1_V_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read())) {
        weights_24_24_1x1_V_1_address0 = weights_24_24_1x1_V_64_reg_35797.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read())) {
        weights_24_24_1x1_V_1_address0 = weights_24_24_1x1_V_56_reg_35636.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read())) {
        weights_24_24_1x1_V_1_address0 = weights_24_24_1x1_V_48_reg_35459.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read())) {
        weights_24_24_1x1_V_1_address0 = weights_24_24_1x1_V_40_reg_35304.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        weights_24_24_1x1_V_1_address0 = weights_24_24_1x1_V_32_reg_35115.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read())) {
        weights_24_24_1x1_V_1_address0 = weights_24_24_1x1_V_24_reg_34966.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read())) {
        weights_24_24_1x1_V_1_address0 = weights_24_24_1x1_V_16_reg_34827.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        weights_24_24_1x1_V_1_address0 = weights_24_24_1x1_V_8_reg_34672.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        weights_24_24_1x1_V_1_address0 = weights_24_24_1x1_V_s_reg_34528.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_1_address0 = grp_subconv_1x1_16_p_fu_8634_weight_1_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_1_address0 = grp_subconv_1x1_32_p_fu_8380_weight_1_V_address0.read();
    } else {
        weights_24_24_1x1_V_1_address0 =  (sc_lv<7>) ("XXXXXXX");
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
        weights_24_24_1x1_V_1_ce0 = grp_subconv_1x1_16_p_fu_8634_weight_1_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_1_ce0 = grp_subconv_1x1_32_p_fu_8380_weight_1_V_ce0.read();
    } else {
        weights_24_24_1x1_V_1_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_1_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_1_ce1 = grp_subconv_1x1_32_p_fu_8380_weight_1_V_ce1.read();
    } else {
        weights_24_24_1x1_V_1_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_1_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && 
          esl_seteq<1,3,3>(tmp_684_reg_34511.read(), ap_const_lv3_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) && 
          esl_seteq<1,3,3>(tmp_739_reg_34655.read(), ap_const_lv3_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) && 
          esl_seteq<1,3,3>(tmp_818_reg_34810.read(), ap_const_lv3_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) && 
          esl_seteq<1,3,3>(tmp_868_reg_34949.read(), ap_const_lv3_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) && 
          esl_seteq<1,3,3>(tmp_952_reg_35098.read(), ap_const_lv3_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) && 
          esl_seteq<1,3,3>(tmp_1031_reg_35287.read(), ap_const_lv3_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) && 
          esl_seteq<1,3,3>(tmp_1094_reg_35442.read(), ap_const_lv3_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) && 
          esl_seteq<1,3,3>(tmp_1119_reg_35619.read(), ap_const_lv3_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()) && 
          esl_seteq<1,3,3>(tmp_1162_reg_35780.read(), ap_const_lv3_1)))) {
        weights_24_24_1x1_V_1_we0 = ap_const_logic_1;
    } else {
        weights_24_24_1x1_V_1_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read())) {
        weights_24_24_1x1_V_2_address0 = weights_24_24_1x1_V_69_reg_35822.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read())) {
        weights_24_24_1x1_V_2_address0 = weights_24_24_1x1_V_61_reg_35661.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read())) {
        weights_24_24_1x1_V_2_address0 = weights_24_24_1x1_V_53_reg_35484.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read())) {
        weights_24_24_1x1_V_2_address0 = weights_24_24_1x1_V_45_reg_35329.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        weights_24_24_1x1_V_2_address0 = weights_24_24_1x1_V_37_reg_35140.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read())) {
        weights_24_24_1x1_V_2_address0 = weights_24_24_1x1_V_29_reg_34991.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read())) {
        weights_24_24_1x1_V_2_address0 = weights_24_24_1x1_V_21_reg_34852.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        weights_24_24_1x1_V_2_address0 = weights_24_24_1x1_V_13_reg_34697.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        weights_24_24_1x1_V_2_address0 = weights_24_24_1x1_V_5_reg_34553.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_2_address0 = grp_subconv_1x1_16_p_fu_8634_weight_2_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_2_address0 = grp_subconv_1x1_32_p_fu_8380_weight_2_V_address0.read();
    } else {
        weights_24_24_1x1_V_2_address0 =  (sc_lv<7>) ("XXXXXXX");
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
        weights_24_24_1x1_V_2_ce0 = grp_subconv_1x1_16_p_fu_8634_weight_2_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_2_ce0 = grp_subconv_1x1_32_p_fu_8380_weight_2_V_ce0.read();
    } else {
        weights_24_24_1x1_V_2_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_2_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_2_ce1 = grp_subconv_1x1_32_p_fu_8380_weight_2_V_ce1.read();
    } else {
        weights_24_24_1x1_V_2_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_2_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && 
          esl_seteq<1,3,3>(tmp_684_reg_34511.read(), ap_const_lv3_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) && 
          esl_seteq<1,3,3>(tmp_739_reg_34655.read(), ap_const_lv3_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) && 
          esl_seteq<1,3,3>(tmp_818_reg_34810.read(), ap_const_lv3_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) && 
          esl_seteq<1,3,3>(tmp_868_reg_34949.read(), ap_const_lv3_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) && 
          esl_seteq<1,3,3>(tmp_952_reg_35098.read(), ap_const_lv3_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) && 
          esl_seteq<1,3,3>(tmp_1031_reg_35287.read(), ap_const_lv3_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) && 
          esl_seteq<1,3,3>(tmp_1094_reg_35442.read(), ap_const_lv3_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) && 
          esl_seteq<1,3,3>(tmp_1119_reg_35619.read(), ap_const_lv3_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()) && 
          esl_seteq<1,3,3>(tmp_1162_reg_35780.read(), ap_const_lv3_2)))) {
        weights_24_24_1x1_V_2_we0 = ap_const_logic_1;
    } else {
        weights_24_24_1x1_V_2_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read())) {
        weights_24_24_1x1_V_3_address0 = weights_24_24_1x1_V_68_reg_35817.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read())) {
        weights_24_24_1x1_V_3_address0 = weights_24_24_1x1_V_60_reg_35656.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read())) {
        weights_24_24_1x1_V_3_address0 = weights_24_24_1x1_V_52_reg_35479.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read())) {
        weights_24_24_1x1_V_3_address0 = weights_24_24_1x1_V_44_reg_35324.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        weights_24_24_1x1_V_3_address0 = weights_24_24_1x1_V_36_reg_35135.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read())) {
        weights_24_24_1x1_V_3_address0 = weights_24_24_1x1_V_28_reg_34986.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read())) {
        weights_24_24_1x1_V_3_address0 = weights_24_24_1x1_V_20_reg_34847.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        weights_24_24_1x1_V_3_address0 = weights_24_24_1x1_V_12_reg_34692.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        weights_24_24_1x1_V_3_address0 = weights_24_24_1x1_V_4_reg_34548.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_3_address0 = grp_subconv_1x1_16_p_fu_8634_weight_3_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_3_address0 = grp_subconv_1x1_32_p_fu_8380_weight_3_V_address0.read();
    } else {
        weights_24_24_1x1_V_3_address0 =  (sc_lv<7>) ("XXXXXXX");
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
        weights_24_24_1x1_V_3_ce0 = grp_subconv_1x1_16_p_fu_8634_weight_3_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_3_ce0 = grp_subconv_1x1_32_p_fu_8380_weight_3_V_ce0.read();
    } else {
        weights_24_24_1x1_V_3_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_3_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_3_ce1 = grp_subconv_1x1_32_p_fu_8380_weight_3_V_ce1.read();
    } else {
        weights_24_24_1x1_V_3_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_3_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && 
          esl_seteq<1,3,3>(tmp_684_reg_34511.read(), ap_const_lv3_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) && 
          esl_seteq<1,3,3>(tmp_739_reg_34655.read(), ap_const_lv3_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) && 
          esl_seteq<1,3,3>(tmp_818_reg_34810.read(), ap_const_lv3_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) && 
          esl_seteq<1,3,3>(tmp_868_reg_34949.read(), ap_const_lv3_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) && 
          esl_seteq<1,3,3>(tmp_952_reg_35098.read(), ap_const_lv3_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) && 
          esl_seteq<1,3,3>(tmp_1031_reg_35287.read(), ap_const_lv3_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) && 
          esl_seteq<1,3,3>(tmp_1094_reg_35442.read(), ap_const_lv3_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) && 
          esl_seteq<1,3,3>(tmp_1119_reg_35619.read(), ap_const_lv3_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()) && 
          esl_seteq<1,3,3>(tmp_1162_reg_35780.read(), ap_const_lv3_3)))) {
        weights_24_24_1x1_V_3_we0 = ap_const_logic_1;
    } else {
        weights_24_24_1x1_V_3_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read())) {
        weights_24_24_1x1_V_4_address0 = weights_24_24_1x1_V_71_reg_35832.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read())) {
        weights_24_24_1x1_V_4_address0 = weights_24_24_1x1_V_63_reg_35671.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read())) {
        weights_24_24_1x1_V_4_address0 = weights_24_24_1x1_V_55_reg_35494.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read())) {
        weights_24_24_1x1_V_4_address0 = weights_24_24_1x1_V_47_reg_35339.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        weights_24_24_1x1_V_4_address0 = weights_24_24_1x1_V_39_reg_35150.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read())) {
        weights_24_24_1x1_V_4_address0 = weights_24_24_1x1_V_31_reg_35001.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read())) {
        weights_24_24_1x1_V_4_address0 = weights_24_24_1x1_V_23_reg_34862.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        weights_24_24_1x1_V_4_address0 = weights_24_24_1x1_V_15_reg_34707.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        weights_24_24_1x1_V_4_address0 = weights_24_24_1x1_V_7_reg_34563.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_4_address0 = grp_subconv_1x1_16_p_fu_8634_weight_4_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_4_address0 = grp_subconv_1x1_32_p_fu_8380_weight_4_V_address0.read();
    } else {
        weights_24_24_1x1_V_4_address0 =  (sc_lv<7>) ("XXXXXXX");
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
        weights_24_24_1x1_V_4_ce0 = grp_subconv_1x1_16_p_fu_8634_weight_4_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_4_ce0 = grp_subconv_1x1_32_p_fu_8380_weight_4_V_ce0.read();
    } else {
        weights_24_24_1x1_V_4_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_4_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_4_ce1 = grp_subconv_1x1_32_p_fu_8380_weight_4_V_ce1.read();
    } else {
        weights_24_24_1x1_V_4_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_4_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && 
          esl_seteq<1,3,3>(tmp_684_reg_34511.read(), ap_const_lv3_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) && 
          esl_seteq<1,3,3>(tmp_739_reg_34655.read(), ap_const_lv3_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) && 
          esl_seteq<1,3,3>(tmp_818_reg_34810.read(), ap_const_lv3_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) && 
          esl_seteq<1,3,3>(tmp_868_reg_34949.read(), ap_const_lv3_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) && 
          esl_seteq<1,3,3>(tmp_952_reg_35098.read(), ap_const_lv3_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) && 
          esl_seteq<1,3,3>(tmp_1031_reg_35287.read(), ap_const_lv3_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) && 
          esl_seteq<1,3,3>(tmp_1094_reg_35442.read(), ap_const_lv3_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) && 
          esl_seteq<1,3,3>(tmp_1119_reg_35619.read(), ap_const_lv3_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()) && 
          esl_seteq<1,3,3>(tmp_1162_reg_35780.read(), ap_const_lv3_4)))) {
        weights_24_24_1x1_V_4_we0 = ap_const_logic_1;
    } else {
        weights_24_24_1x1_V_4_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read())) {
        weights_24_24_1x1_V_5_address0 = weights_24_24_1x1_V_65_reg_35802.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read())) {
        weights_24_24_1x1_V_5_address0 = weights_24_24_1x1_V_57_reg_35641.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read())) {
        weights_24_24_1x1_V_5_address0 = weights_24_24_1x1_V_49_reg_35464.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read())) {
        weights_24_24_1x1_V_5_address0 = weights_24_24_1x1_V_41_reg_35309.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        weights_24_24_1x1_V_5_address0 = weights_24_24_1x1_V_33_reg_35120.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read())) {
        weights_24_24_1x1_V_5_address0 = weights_24_24_1x1_V_25_reg_34971.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read())) {
        weights_24_24_1x1_V_5_address0 = weights_24_24_1x1_V_17_reg_34832.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        weights_24_24_1x1_V_5_address0 = weights_24_24_1x1_V_9_reg_34677.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        weights_24_24_1x1_V_5_address0 = weights_24_24_1x1_V_1_reg_34533.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_5_address0 = grp_subconv_1x1_16_p_fu_8634_weight_5_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_5_address0 = grp_subconv_1x1_32_p_fu_8380_weight_5_V_address0.read();
    } else {
        weights_24_24_1x1_V_5_address0 =  (sc_lv<7>) ("XXXXXXX");
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
        weights_24_24_1x1_V_5_ce0 = grp_subconv_1x1_16_p_fu_8634_weight_5_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_5_ce0 = grp_subconv_1x1_32_p_fu_8380_weight_5_V_ce0.read();
    } else {
        weights_24_24_1x1_V_5_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_5_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_5_ce1 = grp_subconv_1x1_32_p_fu_8380_weight_5_V_ce1.read();
    } else {
        weights_24_24_1x1_V_5_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_5_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && 
          esl_seteq<1,3,3>(tmp_684_reg_34511.read(), ap_const_lv3_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) && 
          esl_seteq<1,3,3>(tmp_739_reg_34655.read(), ap_const_lv3_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) && 
          esl_seteq<1,3,3>(tmp_818_reg_34810.read(), ap_const_lv3_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) && 
          esl_seteq<1,3,3>(tmp_868_reg_34949.read(), ap_const_lv3_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) && 
          esl_seteq<1,3,3>(tmp_952_reg_35098.read(), ap_const_lv3_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) && 
          esl_seteq<1,3,3>(tmp_1031_reg_35287.read(), ap_const_lv3_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) && 
          esl_seteq<1,3,3>(tmp_1094_reg_35442.read(), ap_const_lv3_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) && 
          esl_seteq<1,3,3>(tmp_1119_reg_35619.read(), ap_const_lv3_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()) && 
          esl_seteq<1,3,3>(tmp_1162_reg_35780.read(), ap_const_lv3_5)))) {
        weights_24_24_1x1_V_5_we0 = ap_const_logic_1;
    } else {
        weights_24_24_1x1_V_5_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read())) {
        weights_24_24_1x1_V_6_address0 = weights_24_24_1x1_V_67_reg_35812.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read())) {
        weights_24_24_1x1_V_6_address0 = weights_24_24_1x1_V_59_reg_35651.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read())) {
        weights_24_24_1x1_V_6_address0 = weights_24_24_1x1_V_51_reg_35474.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read())) {
        weights_24_24_1x1_V_6_address0 = weights_24_24_1x1_V_43_reg_35319.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        weights_24_24_1x1_V_6_address0 = weights_24_24_1x1_V_35_reg_35130.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read())) {
        weights_24_24_1x1_V_6_address0 = weights_24_24_1x1_V_27_reg_34981.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read())) {
        weights_24_24_1x1_V_6_address0 = weights_24_24_1x1_V_19_reg_34842.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        weights_24_24_1x1_V_6_address0 = weights_24_24_1x1_V_11_reg_34687.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        weights_24_24_1x1_V_6_address0 = weights_24_24_1x1_V_3_reg_34543.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_6_address0 = grp_subconv_1x1_16_p_fu_8634_weight_6_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_6_address0 = grp_subconv_1x1_32_p_fu_8380_weight_6_V_address0.read();
    } else {
        weights_24_24_1x1_V_6_address0 =  (sc_lv<7>) ("XXXXXXX");
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
        weights_24_24_1x1_V_6_ce0 = grp_subconv_1x1_16_p_fu_8634_weight_6_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_6_ce0 = grp_subconv_1x1_32_p_fu_8380_weight_6_V_ce0.read();
    } else {
        weights_24_24_1x1_V_6_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_6_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_6_ce1 = grp_subconv_1x1_32_p_fu_8380_weight_6_V_ce1.read();
    } else {
        weights_24_24_1x1_V_6_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_6_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && 
          esl_seteq<1,3,3>(tmp_684_reg_34511.read(), ap_const_lv3_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) && 
          esl_seteq<1,3,3>(tmp_739_reg_34655.read(), ap_const_lv3_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) && 
          esl_seteq<1,3,3>(tmp_818_reg_34810.read(), ap_const_lv3_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) && 
          esl_seteq<1,3,3>(tmp_868_reg_34949.read(), ap_const_lv3_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) && 
          esl_seteq<1,3,3>(tmp_952_reg_35098.read(), ap_const_lv3_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) && 
          esl_seteq<1,3,3>(tmp_1031_reg_35287.read(), ap_const_lv3_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) && 
          esl_seteq<1,3,3>(tmp_1094_reg_35442.read(), ap_const_lv3_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) && 
          esl_seteq<1,3,3>(tmp_1119_reg_35619.read(), ap_const_lv3_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()) && 
          esl_seteq<1,3,3>(tmp_1162_reg_35780.read(), ap_const_lv3_6)))) {
        weights_24_24_1x1_V_6_we0 = ap_const_logic_1;
    } else {
        weights_24_24_1x1_V_6_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_7_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read())) {
        weights_24_24_1x1_V_7_address0 = weights_24_24_1x1_V_66_reg_35807.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read())) {
        weights_24_24_1x1_V_7_address0 = weights_24_24_1x1_V_58_reg_35646.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read())) {
        weights_24_24_1x1_V_7_address0 = weights_24_24_1x1_V_50_reg_35469.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read())) {
        weights_24_24_1x1_V_7_address0 = weights_24_24_1x1_V_42_reg_35314.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        weights_24_24_1x1_V_7_address0 = weights_24_24_1x1_V_34_reg_35125.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read())) {
        weights_24_24_1x1_V_7_address0 = weights_24_24_1x1_V_26_reg_34976.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read())) {
        weights_24_24_1x1_V_7_address0 = weights_24_24_1x1_V_18_reg_34837.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        weights_24_24_1x1_V_7_address0 = weights_24_24_1x1_V_10_reg_34682.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        weights_24_24_1x1_V_7_address0 = weights_24_24_1x1_V_2_reg_34538.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_7_address0 = grp_subconv_1x1_16_p_fu_8634_weight_7_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_7_address0 = grp_subconv_1x1_32_p_fu_8380_weight_7_V_address0.read();
    } else {
        weights_24_24_1x1_V_7_address0 =  (sc_lv<7>) ("XXXXXXX");
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
        weights_24_24_1x1_V_7_ce0 = grp_subconv_1x1_16_p_fu_8634_weight_7_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_7_ce0 = grp_subconv_1x1_32_p_fu_8380_weight_7_V_ce0.read();
    } else {
        weights_24_24_1x1_V_7_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_7_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_7_ce1 = grp_subconv_1x1_32_p_fu_8380_weight_7_V_ce1.read();
    } else {
        weights_24_24_1x1_V_7_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_7_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && 
          esl_seteq<1,3,3>(tmp_684_reg_34511.read(), ap_const_lv3_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) && 
          esl_seteq<1,3,3>(tmp_739_reg_34655.read(), ap_const_lv3_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) && 
          esl_seteq<1,3,3>(tmp_818_reg_34810.read(), ap_const_lv3_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) && 
          esl_seteq<1,3,3>(tmp_868_reg_34949.read(), ap_const_lv3_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) && 
          esl_seteq<1,3,3>(tmp_952_reg_35098.read(), ap_const_lv3_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) && 
          esl_seteq<1,3,3>(tmp_1031_reg_35287.read(), ap_const_lv3_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) && 
          esl_seteq<1,3,3>(tmp_1094_reg_35442.read(), ap_const_lv3_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) && 
          esl_seteq<1,3,3>(tmp_1119_reg_35619.read(), ap_const_lv3_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()) && 
          esl_seteq<1,3,3>(tmp_1162_reg_35780.read(), ap_const_lv3_7)))) {
        weights_24_24_1x1_V_7_we0 = ap_const_logic_1;
    } else {
        weights_24_24_1x1_V_7_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_s_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read())) {
        weights_24_24_1x1_V_s_address0 = weights_24_24_1x1_V_70_reg_35827.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read())) {
        weights_24_24_1x1_V_s_address0 = weights_24_24_1x1_V_62_reg_35666.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read())) {
        weights_24_24_1x1_V_s_address0 = weights_24_24_1x1_V_54_reg_35489.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read())) {
        weights_24_24_1x1_V_s_address0 = weights_24_24_1x1_V_46_reg_35334.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        weights_24_24_1x1_V_s_address0 = weights_24_24_1x1_V_38_reg_35145.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read())) {
        weights_24_24_1x1_V_s_address0 = weights_24_24_1x1_V_30_reg_34996.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read())) {
        weights_24_24_1x1_V_s_address0 = weights_24_24_1x1_V_22_reg_34857.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        weights_24_24_1x1_V_s_address0 = weights_24_24_1x1_V_14_reg_34702.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        weights_24_24_1x1_V_s_address0 = weights_24_24_1x1_V_6_reg_34558.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_s_address0 = grp_subconv_1x1_16_p_fu_8634_weight_0_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_s_address0 = grp_subconv_1x1_32_p_fu_8380_weight_0_V_address0.read();
    } else {
        weights_24_24_1x1_V_s_address0 =  (sc_lv<7>) ("XXXXXXX");
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
        weights_24_24_1x1_V_s_ce0 = grp_subconv_1x1_16_p_fu_8634_weight_0_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_s_ce0 = grp_subconv_1x1_32_p_fu_8380_weight_0_V_ce0.read();
    } else {
        weights_24_24_1x1_V_s_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_s_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_s_ce1 = grp_subconv_1x1_32_p_fu_8380_weight_0_V_ce1.read();
    } else {
        weights_24_24_1x1_V_s_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_s_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && 
          esl_seteq<1,3,3>(tmp_684_reg_34511.read(), ap_const_lv3_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) && 
          esl_seteq<1,3,3>(tmp_739_reg_34655.read(), ap_const_lv3_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) && 
          esl_seteq<1,3,3>(tmp_818_reg_34810.read(), ap_const_lv3_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) && 
          esl_seteq<1,3,3>(tmp_868_reg_34949.read(), ap_const_lv3_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) && 
          esl_seteq<1,3,3>(tmp_952_reg_35098.read(), ap_const_lv3_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) && 
          esl_seteq<1,3,3>(tmp_1031_reg_35287.read(), ap_const_lv3_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) && 
          esl_seteq<1,3,3>(tmp_1094_reg_35442.read(), ap_const_lv3_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) && 
          esl_seteq<1,3,3>(tmp_1119_reg_35619.read(), ap_const_lv3_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()) && 
          esl_seteq<1,3,3>(tmp_1162_reg_35780.read(), ap_const_lv3_0)))) {
        weights_24_24_1x1_V_s_we0 = ap_const_logic_1;
    } else {
        weights_24_24_1x1_V_s_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_1_3x3_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1192.read())) {
        weights_48_1_3x3_V_address0 =  (sc_lv<9>) (tmp_2010_cast_fu_26853_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1101.read())) {
        weights_48_1_3x3_V_address0 =  (sc_lv<9>) (tmp_1929_cast_fu_25278_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1010.read())) {
        weights_48_1_3x3_V_address0 =  (sc_lv<9>) (tmp_1849_cast_fu_23715_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state919.read())) {
        weights_48_1_3x3_V_address0 =  (sc_lv<9>) (tmp_1771_cast_fu_22152_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state828.read())) {
        weights_48_1_3x3_V_address0 =  (sc_lv<9>) (tmp_1694_cast_fu_20593_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state737.read())) {
        weights_48_1_3x3_V_address0 =  (sc_lv<9>) (tmp_1617_cast_fu_19034_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state646.read())) {
        weights_48_1_3x3_V_address0 =  (sc_lv<9>) (tmp_1538_cast_fu_17463_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state555.read())) {
        weights_48_1_3x3_V_address0 =  (sc_lv<9>) (tmp_1461_cast_fu_15908_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state467.read())) {
        weights_48_1_3x3_V_address0 =  (sc_lv<9>) (tmp_1392_cast_fu_14464_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state410.read())) {
        weights_48_1_3x3_V_address0 =  (sc_lv<9>) (tmp_1357_cast_fu_13663_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state480.read())) {
        weights_48_1_3x3_V_address0 = grp_subconv_3x3_16_strid_1_fu_8854_weight_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state568.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state659.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state750.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state841.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state932.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1023.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1114.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1205.read()))) {
        weights_48_1_3x3_V_address0 = grp_subconv_3x3_8_no_rel_fu_8778_weight_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state423.read())) {
        weights_48_1_3x3_V_address0 = grp_subconv_3x3_16_strid_fu_8752_weight_V_address0.read();
    } else {
        weights_48_1_3x3_V_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_1_3x3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state410.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state467.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state555.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state646.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state737.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state828.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state919.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1010.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1101.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1192.read()))) {
        weights_48_1_3x3_V_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state480.read())) {
        weights_48_1_3x3_V_ce0 = grp_subconv_3x3_16_strid_1_fu_8854_weight_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state568.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state659.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state750.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state841.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state932.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1023.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1114.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1205.read()))) {
        weights_48_1_3x3_V_ce0 = grp_subconv_3x3_8_no_rel_fu_8778_weight_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state423.read())) {
        weights_48_1_3x3_V_ce0 = grp_subconv_3x3_16_strid_fu_8752_weight_V_ce0.read();
    } else {
        weights_48_1_3x3_V_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_1_3x3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state410.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state467.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state555.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state646.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state737.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state828.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state919.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1010.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1101.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1192.read()))) {
        weights_48_1_3x3_V_we0 = ap_const_logic_1;
    } else {
        weights_48_1_3x3_V_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read())) {
        weights_48_48_1x1_V_1_address0 = weights_48_48_1x1_V_151_reg_40995.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read())) {
        weights_48_48_1x1_V_1_address0 = weights_48_48_1x1_V_143_reg_40695.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read())) {
        weights_48_48_1x1_V_1_address0 = weights_48_48_1x1_V_135_reg_40440.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read())) {
        weights_48_48_1x1_V_1_address0 = weights_48_48_1x1_V_127_reg_40140.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read())) {
        weights_48_48_1x1_V_1_address0 = weights_48_48_1x1_V_119_reg_39885.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read())) {
        weights_48_48_1x1_V_1_address0 = weights_48_48_1x1_V_111_reg_39585.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read())) {
        weights_48_48_1x1_V_1_address0 = weights_48_48_1x1_V_103_reg_39330.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read())) {
        weights_48_48_1x1_V_1_address0 = weights_48_48_1x1_V_95_reg_39030.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read())) {
        weights_48_48_1x1_V_1_address0 = weights_48_48_1x1_V_87_reg_38775.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read())) {
        weights_48_48_1x1_V_1_address0 = weights_48_48_1x1_V_79_reg_38475.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read())) {
        weights_48_48_1x1_V_1_address0 = weights_48_48_1x1_V_71_reg_38220.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read())) {
        weights_48_48_1x1_V_1_address0 = weights_48_48_1x1_V_63_reg_37920.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read())) {
        weights_48_48_1x1_V_1_address0 = weights_48_48_1x1_V_55_reg_37665.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read())) {
        weights_48_48_1x1_V_1_address0 = weights_48_48_1x1_V_47_reg_37365.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read())) {
        weights_48_48_1x1_V_1_address0 = weights_48_48_1x1_V_39_reg_37110.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read())) {
        weights_48_48_1x1_V_1_address0 = weights_48_48_1x1_V_31_reg_36810.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read())) {
        weights_48_48_1x1_V_1_address0 = weights_48_48_1x1_V_23_reg_36599.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read())) {
        weights_48_48_1x1_V_1_address0 = weights_48_48_1x1_V_15_reg_36299.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read())) {
        weights_48_48_1x1_V_1_address0 = weights_48_48_1x1_V_7_reg_35999.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state540.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state595.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state631.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state722.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state777.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state813.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state868.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state904.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state959.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state995.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1050.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1086.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1141.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1177.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1232.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state450.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state507.read()))) {
        weights_48_48_1x1_V_1_address0 = grp_subconv_1x1_8_p_fu_8594_weight_1_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        weights_48_48_1x1_V_1_address0 = grp_subconv_1x1_16p_p_fu_8514_weight_1_V_address0.read();
    } else {
        weights_48_48_1x1_V_1_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read()))) {
        weights_48_48_1x1_V_1_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state540.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state595.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state631.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state722.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state777.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state813.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state868.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state904.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state959.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state995.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1050.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1086.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1141.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1177.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1232.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state450.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state507.read()))) {
        weights_48_48_1x1_V_1_ce0 = grp_subconv_1x1_8_p_fu_8594_weight_1_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        weights_48_48_1x1_V_1_ce0 = grp_subconv_1x1_16p_p_fu_8514_weight_1_V_ce0.read();
    } else {
        weights_48_48_1x1_V_1_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_1_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read()) && 
          esl_seteq<1,3,3>(arrayNo1_reg_35949.read(), ap_const_lv3_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read()) && 
          esl_seteq<1,3,3>(arrayNo2_reg_36249.read(), ap_const_lv3_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read()) && 
          esl_seteq<1,3,3>(arrayNo3_reg_36549.read(), ap_const_lv3_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read()) && 
          esl_seteq<1,3,3>(arrayNo4_reg_36760.read(), ap_const_lv3_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read()) && 
          esl_seteq<1,3,3>(arrayNo5_reg_37060.read(), ap_const_lv3_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read()) && 
          esl_seteq<1,3,3>(arrayNo6_reg_37315.read(), ap_const_lv3_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read()) && 
          esl_seteq<1,3,3>(arrayNo7_reg_37615.read(), ap_const_lv3_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read()) && 
          esl_seteq<1,3,3>(arrayNo8_reg_37870.read(), ap_const_lv3_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read()) && 
          esl_seteq<1,3,3>(arrayNo9_reg_38170.read(), ap_const_lv3_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read()) && 
          esl_seteq<1,3,3>(arrayNo10_reg_38425.read(), ap_const_lv3_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read()) && 
          esl_seteq<1,3,3>(arrayNo11_reg_38725.read(), ap_const_lv3_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) && 
          esl_seteq<1,3,3>(arrayNo12_reg_38980.read(), ap_const_lv3_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read()) && 
          esl_seteq<1,3,3>(arrayNo13_reg_39280.read(), ap_const_lv3_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read()) && 
          esl_seteq<1,3,3>(arrayNo14_reg_39535.read(), ap_const_lv3_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read()) && 
          esl_seteq<1,3,3>(arrayNo15_reg_39835.read(), ap_const_lv3_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read()) && 
          esl_seteq<1,3,3>(arrayNo16_reg_40090.read(), ap_const_lv3_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read()) && 
          esl_seteq<1,3,3>(arrayNo17_reg_40390.read(), ap_const_lv3_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read()) && 
          esl_seteq<1,3,3>(arrayNo18_reg_40645.read(), ap_const_lv3_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read()) && 
          esl_seteq<1,3,3>(arrayNo19_reg_40945.read(), ap_const_lv3_1)))) {
        weights_48_48_1x1_V_1_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_1_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read())) {
        weights_48_48_1x1_V_2_address0 = weights_48_48_1x1_V_149_reg_40985.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read())) {
        weights_48_48_1x1_V_2_address0 = weights_48_48_1x1_V_141_reg_40685.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read())) {
        weights_48_48_1x1_V_2_address0 = weights_48_48_1x1_V_133_reg_40430.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read())) {
        weights_48_48_1x1_V_2_address0 = weights_48_48_1x1_V_125_reg_40130.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read())) {
        weights_48_48_1x1_V_2_address0 = weights_48_48_1x1_V_117_reg_39875.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read())) {
        weights_48_48_1x1_V_2_address0 = weights_48_48_1x1_V_109_reg_39575.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read())) {
        weights_48_48_1x1_V_2_address0 = weights_48_48_1x1_V_101_reg_39320.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read())) {
        weights_48_48_1x1_V_2_address0 = weights_48_48_1x1_V_93_reg_39020.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read())) {
        weights_48_48_1x1_V_2_address0 = weights_48_48_1x1_V_85_reg_38765.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read())) {
        weights_48_48_1x1_V_2_address0 = weights_48_48_1x1_V_77_reg_38465.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read())) {
        weights_48_48_1x1_V_2_address0 = weights_48_48_1x1_V_69_reg_38210.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read())) {
        weights_48_48_1x1_V_2_address0 = weights_48_48_1x1_V_61_reg_37910.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read())) {
        weights_48_48_1x1_V_2_address0 = weights_48_48_1x1_V_53_reg_37655.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read())) {
        weights_48_48_1x1_V_2_address0 = weights_48_48_1x1_V_45_reg_37355.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read())) {
        weights_48_48_1x1_V_2_address0 = weights_48_48_1x1_V_37_reg_37100.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read())) {
        weights_48_48_1x1_V_2_address0 = weights_48_48_1x1_V_29_reg_36800.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read())) {
        weights_48_48_1x1_V_2_address0 = weights_48_48_1x1_V_21_reg_36589.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read())) {
        weights_48_48_1x1_V_2_address0 = weights_48_48_1x1_V_13_reg_36289.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read())) {
        weights_48_48_1x1_V_2_address0 = weights_48_48_1x1_V_5_reg_35989.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state540.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state595.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state631.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state722.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state777.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state813.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state868.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state904.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state959.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state995.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1050.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1086.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1141.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1177.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1232.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state450.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state507.read()))) {
        weights_48_48_1x1_V_2_address0 = grp_subconv_1x1_8_p_fu_8594_weight_2_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        weights_48_48_1x1_V_2_address0 = grp_subconv_1x1_16p_p_fu_8514_weight_2_V_address0.read();
    } else {
        weights_48_48_1x1_V_2_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read()))) {
        weights_48_48_1x1_V_2_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state540.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state595.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state631.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state722.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state777.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state813.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state868.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state904.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state959.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state995.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1050.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1086.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1141.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1177.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1232.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state450.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state507.read()))) {
        weights_48_48_1x1_V_2_ce0 = grp_subconv_1x1_8_p_fu_8594_weight_2_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        weights_48_48_1x1_V_2_ce0 = grp_subconv_1x1_16p_p_fu_8514_weight_2_V_ce0.read();
    } else {
        weights_48_48_1x1_V_2_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_2_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read()) && 
          esl_seteq<1,3,3>(arrayNo1_reg_35949.read(), ap_const_lv3_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read()) && 
          esl_seteq<1,3,3>(arrayNo2_reg_36249.read(), ap_const_lv3_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read()) && 
          esl_seteq<1,3,3>(arrayNo3_reg_36549.read(), ap_const_lv3_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read()) && 
          esl_seteq<1,3,3>(arrayNo4_reg_36760.read(), ap_const_lv3_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read()) && 
          esl_seteq<1,3,3>(arrayNo5_reg_37060.read(), ap_const_lv3_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read()) && 
          esl_seteq<1,3,3>(arrayNo6_reg_37315.read(), ap_const_lv3_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read()) && 
          esl_seteq<1,3,3>(arrayNo7_reg_37615.read(), ap_const_lv3_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read()) && 
          esl_seteq<1,3,3>(arrayNo8_reg_37870.read(), ap_const_lv3_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read()) && 
          esl_seteq<1,3,3>(arrayNo9_reg_38170.read(), ap_const_lv3_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read()) && 
          esl_seteq<1,3,3>(arrayNo10_reg_38425.read(), ap_const_lv3_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read()) && 
          esl_seteq<1,3,3>(arrayNo11_reg_38725.read(), ap_const_lv3_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) && 
          esl_seteq<1,3,3>(arrayNo12_reg_38980.read(), ap_const_lv3_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read()) && 
          esl_seteq<1,3,3>(arrayNo13_reg_39280.read(), ap_const_lv3_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read()) && 
          esl_seteq<1,3,3>(arrayNo14_reg_39535.read(), ap_const_lv3_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read()) && 
          esl_seteq<1,3,3>(arrayNo15_reg_39835.read(), ap_const_lv3_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read()) && 
          esl_seteq<1,3,3>(arrayNo16_reg_40090.read(), ap_const_lv3_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read()) && 
          esl_seteq<1,3,3>(arrayNo17_reg_40390.read(), ap_const_lv3_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read()) && 
          esl_seteq<1,3,3>(arrayNo18_reg_40645.read(), ap_const_lv3_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read()) && 
          esl_seteq<1,3,3>(arrayNo19_reg_40945.read(), ap_const_lv3_2)))) {
        weights_48_48_1x1_V_2_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_2_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read())) {
        weights_48_48_1x1_V_3_address0 = weights_48_48_1x1_V_150_reg_40990.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read())) {
        weights_48_48_1x1_V_3_address0 = weights_48_48_1x1_V_142_reg_40690.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read())) {
        weights_48_48_1x1_V_3_address0 = weights_48_48_1x1_V_134_reg_40435.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read())) {
        weights_48_48_1x1_V_3_address0 = weights_48_48_1x1_V_126_reg_40135.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read())) {
        weights_48_48_1x1_V_3_address0 = weights_48_48_1x1_V_118_reg_39880.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read())) {
        weights_48_48_1x1_V_3_address0 = weights_48_48_1x1_V_110_reg_39580.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read())) {
        weights_48_48_1x1_V_3_address0 = weights_48_48_1x1_V_102_reg_39325.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read())) {
        weights_48_48_1x1_V_3_address0 = weights_48_48_1x1_V_94_reg_39025.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read())) {
        weights_48_48_1x1_V_3_address0 = weights_48_48_1x1_V_86_reg_38770.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read())) {
        weights_48_48_1x1_V_3_address0 = weights_48_48_1x1_V_78_reg_38470.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read())) {
        weights_48_48_1x1_V_3_address0 = weights_48_48_1x1_V_70_reg_38215.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read())) {
        weights_48_48_1x1_V_3_address0 = weights_48_48_1x1_V_62_reg_37915.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read())) {
        weights_48_48_1x1_V_3_address0 = weights_48_48_1x1_V_54_reg_37660.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read())) {
        weights_48_48_1x1_V_3_address0 = weights_48_48_1x1_V_46_reg_37360.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read())) {
        weights_48_48_1x1_V_3_address0 = weights_48_48_1x1_V_38_reg_37105.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read())) {
        weights_48_48_1x1_V_3_address0 = weights_48_48_1x1_V_30_reg_36805.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read())) {
        weights_48_48_1x1_V_3_address0 = weights_48_48_1x1_V_22_reg_36594.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read())) {
        weights_48_48_1x1_V_3_address0 = weights_48_48_1x1_V_14_reg_36294.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read())) {
        weights_48_48_1x1_V_3_address0 = weights_48_48_1x1_V_6_reg_35994.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state540.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state595.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state631.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state722.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state777.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state813.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state868.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state904.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state959.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state995.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1050.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1086.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1141.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1177.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1232.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state450.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state507.read()))) {
        weights_48_48_1x1_V_3_address0 = grp_subconv_1x1_8_p_fu_8594_weight_3_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        weights_48_48_1x1_V_3_address0 = grp_subconv_1x1_16p_p_fu_8514_weight_3_V_address0.read();
    } else {
        weights_48_48_1x1_V_3_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read()))) {
        weights_48_48_1x1_V_3_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state540.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state595.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state631.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state722.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state777.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state813.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state868.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state904.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state959.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state995.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1050.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1086.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1141.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1177.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1232.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state450.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state507.read()))) {
        weights_48_48_1x1_V_3_ce0 = grp_subconv_1x1_8_p_fu_8594_weight_3_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        weights_48_48_1x1_V_3_ce0 = grp_subconv_1x1_16p_p_fu_8514_weight_3_V_ce0.read();
    } else {
        weights_48_48_1x1_V_3_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_3_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read()) && 
          esl_seteq<1,3,3>(arrayNo1_reg_35949.read(), ap_const_lv3_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read()) && 
          esl_seteq<1,3,3>(arrayNo2_reg_36249.read(), ap_const_lv3_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read()) && 
          esl_seteq<1,3,3>(arrayNo3_reg_36549.read(), ap_const_lv3_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read()) && 
          esl_seteq<1,3,3>(arrayNo4_reg_36760.read(), ap_const_lv3_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read()) && 
          esl_seteq<1,3,3>(arrayNo5_reg_37060.read(), ap_const_lv3_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read()) && 
          esl_seteq<1,3,3>(arrayNo6_reg_37315.read(), ap_const_lv3_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read()) && 
          esl_seteq<1,3,3>(arrayNo7_reg_37615.read(), ap_const_lv3_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read()) && 
          esl_seteq<1,3,3>(arrayNo8_reg_37870.read(), ap_const_lv3_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read()) && 
          esl_seteq<1,3,3>(arrayNo9_reg_38170.read(), ap_const_lv3_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read()) && 
          esl_seteq<1,3,3>(arrayNo10_reg_38425.read(), ap_const_lv3_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read()) && 
          esl_seteq<1,3,3>(arrayNo11_reg_38725.read(), ap_const_lv3_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) && 
          esl_seteq<1,3,3>(arrayNo12_reg_38980.read(), ap_const_lv3_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read()) && 
          esl_seteq<1,3,3>(arrayNo13_reg_39280.read(), ap_const_lv3_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read()) && 
          esl_seteq<1,3,3>(arrayNo14_reg_39535.read(), ap_const_lv3_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read()) && 
          esl_seteq<1,3,3>(arrayNo15_reg_39835.read(), ap_const_lv3_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read()) && 
          esl_seteq<1,3,3>(arrayNo16_reg_40090.read(), ap_const_lv3_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read()) && 
          esl_seteq<1,3,3>(arrayNo17_reg_40390.read(), ap_const_lv3_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read()) && 
          esl_seteq<1,3,3>(arrayNo18_reg_40645.read(), ap_const_lv3_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read()) && 
          esl_seteq<1,3,3>(arrayNo19_reg_40945.read(), ap_const_lv3_3)))) {
        weights_48_48_1x1_V_3_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_3_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read())) {
        weights_48_48_1x1_V_4_address0 = weights_48_48_1x1_V_147_reg_40975.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read())) {
        weights_48_48_1x1_V_4_address0 = weights_48_48_1x1_V_139_reg_40675.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read())) {
        weights_48_48_1x1_V_4_address0 = weights_48_48_1x1_V_131_reg_40420.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read())) {
        weights_48_48_1x1_V_4_address0 = weights_48_48_1x1_V_123_reg_40120.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read())) {
        weights_48_48_1x1_V_4_address0 = weights_48_48_1x1_V_115_reg_39865.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read())) {
        weights_48_48_1x1_V_4_address0 = weights_48_48_1x1_V_107_reg_39565.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read())) {
        weights_48_48_1x1_V_4_address0 = weights_48_48_1x1_V_99_reg_39310.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read())) {
        weights_48_48_1x1_V_4_address0 = weights_48_48_1x1_V_91_reg_39010.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read())) {
        weights_48_48_1x1_V_4_address0 = weights_48_48_1x1_V_83_reg_38755.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read())) {
        weights_48_48_1x1_V_4_address0 = weights_48_48_1x1_V_75_reg_38455.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read())) {
        weights_48_48_1x1_V_4_address0 = weights_48_48_1x1_V_67_reg_38200.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read())) {
        weights_48_48_1x1_V_4_address0 = weights_48_48_1x1_V_59_reg_37900.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read())) {
        weights_48_48_1x1_V_4_address0 = weights_48_48_1x1_V_51_reg_37645.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read())) {
        weights_48_48_1x1_V_4_address0 = weights_48_48_1x1_V_43_reg_37345.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read())) {
        weights_48_48_1x1_V_4_address0 = weights_48_48_1x1_V_35_reg_37090.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read())) {
        weights_48_48_1x1_V_4_address0 = weights_48_48_1x1_V_27_reg_36790.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read())) {
        weights_48_48_1x1_V_4_address0 = weights_48_48_1x1_V_19_reg_36579.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read())) {
        weights_48_48_1x1_V_4_address0 = weights_48_48_1x1_V_11_reg_36279.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read())) {
        weights_48_48_1x1_V_4_address0 = weights_48_48_1x1_V_3_reg_35979.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state540.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state595.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state631.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state722.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state777.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state813.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state868.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state904.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state959.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state995.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1050.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1086.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1141.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1177.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1232.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state450.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state507.read()))) {
        weights_48_48_1x1_V_4_address0 = grp_subconv_1x1_8_p_fu_8594_weight_4_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        weights_48_48_1x1_V_4_address0 = grp_subconv_1x1_16p_p_fu_8514_weight_4_V_address0.read();
    } else {
        weights_48_48_1x1_V_4_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read()))) {
        weights_48_48_1x1_V_4_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state540.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state595.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state631.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state722.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state777.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state813.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state868.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state904.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state959.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state995.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1050.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1086.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1141.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1177.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1232.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state450.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state507.read()))) {
        weights_48_48_1x1_V_4_ce0 = grp_subconv_1x1_8_p_fu_8594_weight_4_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        weights_48_48_1x1_V_4_ce0 = grp_subconv_1x1_16p_p_fu_8514_weight_4_V_ce0.read();
    } else {
        weights_48_48_1x1_V_4_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_4_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read()) && 
          esl_seteq<1,3,3>(arrayNo1_reg_35949.read(), ap_const_lv3_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read()) && 
          esl_seteq<1,3,3>(arrayNo2_reg_36249.read(), ap_const_lv3_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read()) && 
          esl_seteq<1,3,3>(arrayNo3_reg_36549.read(), ap_const_lv3_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read()) && 
          esl_seteq<1,3,3>(arrayNo4_reg_36760.read(), ap_const_lv3_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read()) && 
          esl_seteq<1,3,3>(arrayNo5_reg_37060.read(), ap_const_lv3_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read()) && 
          esl_seteq<1,3,3>(arrayNo6_reg_37315.read(), ap_const_lv3_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read()) && 
          esl_seteq<1,3,3>(arrayNo7_reg_37615.read(), ap_const_lv3_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read()) && 
          esl_seteq<1,3,3>(arrayNo8_reg_37870.read(), ap_const_lv3_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read()) && 
          esl_seteq<1,3,3>(arrayNo9_reg_38170.read(), ap_const_lv3_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read()) && 
          esl_seteq<1,3,3>(arrayNo10_reg_38425.read(), ap_const_lv3_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read()) && 
          esl_seteq<1,3,3>(arrayNo11_reg_38725.read(), ap_const_lv3_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) && 
          esl_seteq<1,3,3>(arrayNo12_reg_38980.read(), ap_const_lv3_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read()) && 
          esl_seteq<1,3,3>(arrayNo13_reg_39280.read(), ap_const_lv3_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read()) && 
          esl_seteq<1,3,3>(arrayNo14_reg_39535.read(), ap_const_lv3_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read()) && 
          esl_seteq<1,3,3>(arrayNo15_reg_39835.read(), ap_const_lv3_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read()) && 
          esl_seteq<1,3,3>(arrayNo16_reg_40090.read(), ap_const_lv3_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read()) && 
          esl_seteq<1,3,3>(arrayNo17_reg_40390.read(), ap_const_lv3_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read()) && 
          esl_seteq<1,3,3>(arrayNo18_reg_40645.read(), ap_const_lv3_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read()) && 
          esl_seteq<1,3,3>(arrayNo19_reg_40945.read(), ap_const_lv3_4)))) {
        weights_48_48_1x1_V_4_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_4_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read())) {
        weights_48_48_1x1_V_5_address0 = weights_48_48_1x1_V_144_reg_40960.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read())) {
        weights_48_48_1x1_V_5_address0 = weights_48_48_1x1_V_136_reg_40660.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read())) {
        weights_48_48_1x1_V_5_address0 = weights_48_48_1x1_V_128_reg_40405.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read())) {
        weights_48_48_1x1_V_5_address0 = weights_48_48_1x1_V_120_reg_40105.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read())) {
        weights_48_48_1x1_V_5_address0 = weights_48_48_1x1_V_112_reg_39850.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read())) {
        weights_48_48_1x1_V_5_address0 = weights_48_48_1x1_V_104_reg_39550.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read())) {
        weights_48_48_1x1_V_5_address0 = weights_48_48_1x1_V_96_reg_39295.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read())) {
        weights_48_48_1x1_V_5_address0 = weights_48_48_1x1_V_88_reg_38995.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read())) {
        weights_48_48_1x1_V_5_address0 = weights_48_48_1x1_V_80_reg_38740.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read())) {
        weights_48_48_1x1_V_5_address0 = weights_48_48_1x1_V_72_reg_38440.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read())) {
        weights_48_48_1x1_V_5_address0 = weights_48_48_1x1_V_64_reg_38185.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read())) {
        weights_48_48_1x1_V_5_address0 = weights_48_48_1x1_V_56_reg_37885.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read())) {
        weights_48_48_1x1_V_5_address0 = weights_48_48_1x1_V_48_reg_37630.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read())) {
        weights_48_48_1x1_V_5_address0 = weights_48_48_1x1_V_40_reg_37330.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read())) {
        weights_48_48_1x1_V_5_address0 = weights_48_48_1x1_V_32_reg_37075.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read())) {
        weights_48_48_1x1_V_5_address0 = weights_48_48_1x1_V_24_reg_36775.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read())) {
        weights_48_48_1x1_V_5_address0 = weights_48_48_1x1_V_16_reg_36564.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read())) {
        weights_48_48_1x1_V_5_address0 = weights_48_48_1x1_V_8_reg_36264.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read())) {
        weights_48_48_1x1_V_5_address0 = weights_48_48_1x1_V_s_reg_35964.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state540.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state595.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state631.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state722.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state777.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state813.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state868.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state904.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state959.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state995.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1050.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1086.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1141.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1177.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1232.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state450.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state507.read()))) {
        weights_48_48_1x1_V_5_address0 = grp_subconv_1x1_8_p_fu_8594_weight_5_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        weights_48_48_1x1_V_5_address0 = grp_subconv_1x1_16p_p_fu_8514_weight_5_V_address0.read();
    } else {
        weights_48_48_1x1_V_5_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read()))) {
        weights_48_48_1x1_V_5_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state540.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state595.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state631.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state722.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state777.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state813.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state868.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state904.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state959.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state995.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1050.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1086.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1141.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1177.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1232.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state450.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state507.read()))) {
        weights_48_48_1x1_V_5_ce0 = grp_subconv_1x1_8_p_fu_8594_weight_5_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        weights_48_48_1x1_V_5_ce0 = grp_subconv_1x1_16p_p_fu_8514_weight_5_V_ce0.read();
    } else {
        weights_48_48_1x1_V_5_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_5_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read()) && 
          esl_seteq<1,3,3>(arrayNo1_reg_35949.read(), ap_const_lv3_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read()) && 
          esl_seteq<1,3,3>(arrayNo2_reg_36249.read(), ap_const_lv3_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read()) && 
          esl_seteq<1,3,3>(arrayNo3_reg_36549.read(), ap_const_lv3_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read()) && 
          esl_seteq<1,3,3>(arrayNo4_reg_36760.read(), ap_const_lv3_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read()) && 
          esl_seteq<1,3,3>(arrayNo5_reg_37060.read(), ap_const_lv3_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read()) && 
          esl_seteq<1,3,3>(arrayNo6_reg_37315.read(), ap_const_lv3_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read()) && 
          esl_seteq<1,3,3>(arrayNo7_reg_37615.read(), ap_const_lv3_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read()) && 
          esl_seteq<1,3,3>(arrayNo8_reg_37870.read(), ap_const_lv3_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read()) && 
          esl_seteq<1,3,3>(arrayNo9_reg_38170.read(), ap_const_lv3_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read()) && 
          esl_seteq<1,3,3>(arrayNo10_reg_38425.read(), ap_const_lv3_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read()) && 
          esl_seteq<1,3,3>(arrayNo11_reg_38725.read(), ap_const_lv3_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) && 
          esl_seteq<1,3,3>(arrayNo12_reg_38980.read(), ap_const_lv3_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read()) && 
          esl_seteq<1,3,3>(arrayNo13_reg_39280.read(), ap_const_lv3_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read()) && 
          esl_seteq<1,3,3>(arrayNo14_reg_39535.read(), ap_const_lv3_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read()) && 
          esl_seteq<1,3,3>(arrayNo15_reg_39835.read(), ap_const_lv3_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read()) && 
          esl_seteq<1,3,3>(arrayNo16_reg_40090.read(), ap_const_lv3_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read()) && 
          esl_seteq<1,3,3>(arrayNo17_reg_40390.read(), ap_const_lv3_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read()) && 
          esl_seteq<1,3,3>(arrayNo18_reg_40645.read(), ap_const_lv3_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read()) && 
          esl_seteq<1,3,3>(arrayNo19_reg_40945.read(), ap_const_lv3_5)))) {
        weights_48_48_1x1_V_5_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_5_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read())) {
        weights_48_48_1x1_V_6_address0 = weights_48_48_1x1_V_146_reg_40970.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read())) {
        weights_48_48_1x1_V_6_address0 = weights_48_48_1x1_V_138_reg_40670.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read())) {
        weights_48_48_1x1_V_6_address0 = weights_48_48_1x1_V_130_reg_40415.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read())) {
        weights_48_48_1x1_V_6_address0 = weights_48_48_1x1_V_122_reg_40115.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read())) {
        weights_48_48_1x1_V_6_address0 = weights_48_48_1x1_V_114_reg_39860.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read())) {
        weights_48_48_1x1_V_6_address0 = weights_48_48_1x1_V_106_reg_39560.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read())) {
        weights_48_48_1x1_V_6_address0 = weights_48_48_1x1_V_98_reg_39305.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read())) {
        weights_48_48_1x1_V_6_address0 = weights_48_48_1x1_V_90_reg_39005.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read())) {
        weights_48_48_1x1_V_6_address0 = weights_48_48_1x1_V_82_reg_38750.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read())) {
        weights_48_48_1x1_V_6_address0 = weights_48_48_1x1_V_74_reg_38450.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read())) {
        weights_48_48_1x1_V_6_address0 = weights_48_48_1x1_V_66_reg_38195.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read())) {
        weights_48_48_1x1_V_6_address0 = weights_48_48_1x1_V_58_reg_37895.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read())) {
        weights_48_48_1x1_V_6_address0 = weights_48_48_1x1_V_50_reg_37640.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read())) {
        weights_48_48_1x1_V_6_address0 = weights_48_48_1x1_V_42_reg_37340.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read())) {
        weights_48_48_1x1_V_6_address0 = weights_48_48_1x1_V_34_reg_37085.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read())) {
        weights_48_48_1x1_V_6_address0 = weights_48_48_1x1_V_26_reg_36785.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read())) {
        weights_48_48_1x1_V_6_address0 = weights_48_48_1x1_V_18_reg_36574.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read())) {
        weights_48_48_1x1_V_6_address0 = weights_48_48_1x1_V_10_reg_36274.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read())) {
        weights_48_48_1x1_V_6_address0 = weights_48_48_1x1_V_2_reg_35974.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state540.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state595.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state631.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state722.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state777.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state813.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state868.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state904.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state959.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state995.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1050.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1086.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1141.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1177.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1232.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state450.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state507.read()))) {
        weights_48_48_1x1_V_6_address0 = grp_subconv_1x1_8_p_fu_8594_weight_6_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        weights_48_48_1x1_V_6_address0 = grp_subconv_1x1_16p_p_fu_8514_weight_6_V_address0.read();
    } else {
        weights_48_48_1x1_V_6_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read()))) {
        weights_48_48_1x1_V_6_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state540.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state595.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state631.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state722.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state777.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state813.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state868.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state904.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state959.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state995.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1050.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1086.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1141.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1177.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1232.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state450.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state507.read()))) {
        weights_48_48_1x1_V_6_ce0 = grp_subconv_1x1_8_p_fu_8594_weight_6_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        weights_48_48_1x1_V_6_ce0 = grp_subconv_1x1_16p_p_fu_8514_weight_6_V_ce0.read();
    } else {
        weights_48_48_1x1_V_6_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_6_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read()) && 
          esl_seteq<1,3,3>(arrayNo1_reg_35949.read(), ap_const_lv3_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read()) && 
          esl_seteq<1,3,3>(arrayNo2_reg_36249.read(), ap_const_lv3_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read()) && 
          esl_seteq<1,3,3>(arrayNo3_reg_36549.read(), ap_const_lv3_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read()) && 
          esl_seteq<1,3,3>(arrayNo4_reg_36760.read(), ap_const_lv3_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read()) && 
          esl_seteq<1,3,3>(arrayNo5_reg_37060.read(), ap_const_lv3_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read()) && 
          esl_seteq<1,3,3>(arrayNo6_reg_37315.read(), ap_const_lv3_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read()) && 
          esl_seteq<1,3,3>(arrayNo7_reg_37615.read(), ap_const_lv3_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read()) && 
          esl_seteq<1,3,3>(arrayNo8_reg_37870.read(), ap_const_lv3_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read()) && 
          esl_seteq<1,3,3>(arrayNo9_reg_38170.read(), ap_const_lv3_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read()) && 
          esl_seteq<1,3,3>(arrayNo10_reg_38425.read(), ap_const_lv3_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read()) && 
          esl_seteq<1,3,3>(arrayNo11_reg_38725.read(), ap_const_lv3_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) && 
          esl_seteq<1,3,3>(arrayNo12_reg_38980.read(), ap_const_lv3_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read()) && 
          esl_seteq<1,3,3>(arrayNo13_reg_39280.read(), ap_const_lv3_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read()) && 
          esl_seteq<1,3,3>(arrayNo14_reg_39535.read(), ap_const_lv3_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read()) && 
          esl_seteq<1,3,3>(arrayNo15_reg_39835.read(), ap_const_lv3_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read()) && 
          esl_seteq<1,3,3>(arrayNo16_reg_40090.read(), ap_const_lv3_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read()) && 
          esl_seteq<1,3,3>(arrayNo17_reg_40390.read(), ap_const_lv3_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read()) && 
          esl_seteq<1,3,3>(arrayNo18_reg_40645.read(), ap_const_lv3_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read()) && 
          esl_seteq<1,3,3>(arrayNo19_reg_40945.read(), ap_const_lv3_6)))) {
        weights_48_48_1x1_V_6_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_6_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_7_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read())) {
        weights_48_48_1x1_V_7_address0 = weights_48_48_1x1_V_148_reg_40980.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read())) {
        weights_48_48_1x1_V_7_address0 = weights_48_48_1x1_V_140_reg_40680.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read())) {
        weights_48_48_1x1_V_7_address0 = weights_48_48_1x1_V_132_reg_40425.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read())) {
        weights_48_48_1x1_V_7_address0 = weights_48_48_1x1_V_124_reg_40125.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read())) {
        weights_48_48_1x1_V_7_address0 = weights_48_48_1x1_V_116_reg_39870.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read())) {
        weights_48_48_1x1_V_7_address0 = weights_48_48_1x1_V_108_reg_39570.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read())) {
        weights_48_48_1x1_V_7_address0 = weights_48_48_1x1_V_100_reg_39315.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read())) {
        weights_48_48_1x1_V_7_address0 = weights_48_48_1x1_V_92_reg_39015.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read())) {
        weights_48_48_1x1_V_7_address0 = weights_48_48_1x1_V_84_reg_38760.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read())) {
        weights_48_48_1x1_V_7_address0 = weights_48_48_1x1_V_76_reg_38460.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read())) {
        weights_48_48_1x1_V_7_address0 = weights_48_48_1x1_V_68_reg_38205.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read())) {
        weights_48_48_1x1_V_7_address0 = weights_48_48_1x1_V_60_reg_37905.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read())) {
        weights_48_48_1x1_V_7_address0 = weights_48_48_1x1_V_52_reg_37650.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read())) {
        weights_48_48_1x1_V_7_address0 = weights_48_48_1x1_V_44_reg_37350.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read())) {
        weights_48_48_1x1_V_7_address0 = weights_48_48_1x1_V_36_reg_37095.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read())) {
        weights_48_48_1x1_V_7_address0 = weights_48_48_1x1_V_28_reg_36795.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read())) {
        weights_48_48_1x1_V_7_address0 = weights_48_48_1x1_V_20_reg_36584.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read())) {
        weights_48_48_1x1_V_7_address0 = weights_48_48_1x1_V_12_reg_36284.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read())) {
        weights_48_48_1x1_V_7_address0 = weights_48_48_1x1_V_4_reg_35984.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state540.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state595.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state631.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state722.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state777.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state813.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state868.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state904.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state959.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state995.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1050.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1086.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1141.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1177.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1232.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state450.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state507.read()))) {
        weights_48_48_1x1_V_7_address0 = grp_subconv_1x1_8_p_fu_8594_weight_7_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        weights_48_48_1x1_V_7_address0 = grp_subconv_1x1_16p_p_fu_8514_weight_7_V_address0.read();
    } else {
        weights_48_48_1x1_V_7_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_7_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read()))) {
        weights_48_48_1x1_V_7_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state540.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state595.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state631.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state722.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state777.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state813.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state868.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state904.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state959.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state995.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1050.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1086.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1141.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1177.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1232.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state450.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state507.read()))) {
        weights_48_48_1x1_V_7_ce0 = grp_subconv_1x1_8_p_fu_8594_weight_7_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        weights_48_48_1x1_V_7_ce0 = grp_subconv_1x1_16p_p_fu_8514_weight_7_V_ce0.read();
    } else {
        weights_48_48_1x1_V_7_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_7_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read()) && 
          esl_seteq<1,3,3>(arrayNo1_reg_35949.read(), ap_const_lv3_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read()) && 
          esl_seteq<1,3,3>(arrayNo2_reg_36249.read(), ap_const_lv3_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read()) && 
          esl_seteq<1,3,3>(arrayNo3_reg_36549.read(), ap_const_lv3_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read()) && 
          esl_seteq<1,3,3>(arrayNo4_reg_36760.read(), ap_const_lv3_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read()) && 
          esl_seteq<1,3,3>(arrayNo5_reg_37060.read(), ap_const_lv3_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read()) && 
          esl_seteq<1,3,3>(arrayNo6_reg_37315.read(), ap_const_lv3_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read()) && 
          esl_seteq<1,3,3>(arrayNo7_reg_37615.read(), ap_const_lv3_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read()) && 
          esl_seteq<1,3,3>(arrayNo8_reg_37870.read(), ap_const_lv3_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read()) && 
          esl_seteq<1,3,3>(arrayNo9_reg_38170.read(), ap_const_lv3_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read()) && 
          esl_seteq<1,3,3>(arrayNo10_reg_38425.read(), ap_const_lv3_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read()) && 
          esl_seteq<1,3,3>(arrayNo11_reg_38725.read(), ap_const_lv3_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) && 
          esl_seteq<1,3,3>(arrayNo12_reg_38980.read(), ap_const_lv3_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read()) && 
          esl_seteq<1,3,3>(arrayNo13_reg_39280.read(), ap_const_lv3_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read()) && 
          esl_seteq<1,3,3>(arrayNo14_reg_39535.read(), ap_const_lv3_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read()) && 
          esl_seteq<1,3,3>(arrayNo15_reg_39835.read(), ap_const_lv3_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read()) && 
          esl_seteq<1,3,3>(arrayNo16_reg_40090.read(), ap_const_lv3_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read()) && 
          esl_seteq<1,3,3>(arrayNo17_reg_40390.read(), ap_const_lv3_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read()) && 
          esl_seteq<1,3,3>(arrayNo18_reg_40645.read(), ap_const_lv3_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read()) && 
          esl_seteq<1,3,3>(arrayNo19_reg_40945.read(), ap_const_lv3_7)))) {
        weights_48_48_1x1_V_7_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_7_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_s_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read())) {
        weights_48_48_1x1_V_s_address0 = weights_48_48_1x1_V_145_reg_40965.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read())) {
        weights_48_48_1x1_V_s_address0 = weights_48_48_1x1_V_137_reg_40665.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read())) {
        weights_48_48_1x1_V_s_address0 = weights_48_48_1x1_V_129_reg_40410.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read())) {
        weights_48_48_1x1_V_s_address0 = weights_48_48_1x1_V_121_reg_40110.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read())) {
        weights_48_48_1x1_V_s_address0 = weights_48_48_1x1_V_113_reg_39855.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read())) {
        weights_48_48_1x1_V_s_address0 = weights_48_48_1x1_V_105_reg_39555.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read())) {
        weights_48_48_1x1_V_s_address0 = weights_48_48_1x1_V_97_reg_39300.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read())) {
        weights_48_48_1x1_V_s_address0 = weights_48_48_1x1_V_89_reg_39000.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read())) {
        weights_48_48_1x1_V_s_address0 = weights_48_48_1x1_V_81_reg_38745.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read())) {
        weights_48_48_1x1_V_s_address0 = weights_48_48_1x1_V_73_reg_38445.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read())) {
        weights_48_48_1x1_V_s_address0 = weights_48_48_1x1_V_65_reg_38190.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read())) {
        weights_48_48_1x1_V_s_address0 = weights_48_48_1x1_V_57_reg_37890.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read())) {
        weights_48_48_1x1_V_s_address0 = weights_48_48_1x1_V_49_reg_37635.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read())) {
        weights_48_48_1x1_V_s_address0 = weights_48_48_1x1_V_41_reg_37335.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read())) {
        weights_48_48_1x1_V_s_address0 = weights_48_48_1x1_V_33_reg_37080.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read())) {
        weights_48_48_1x1_V_s_address0 = weights_48_48_1x1_V_25_reg_36780.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read())) {
        weights_48_48_1x1_V_s_address0 = weights_48_48_1x1_V_17_reg_36569.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read())) {
        weights_48_48_1x1_V_s_address0 = weights_48_48_1x1_V_9_reg_36269.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read())) {
        weights_48_48_1x1_V_s_address0 = weights_48_48_1x1_V_1_reg_35969.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state540.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state595.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state631.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state722.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state777.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state813.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state868.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state904.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state959.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state995.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1050.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1086.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1141.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1177.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1232.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state450.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state507.read()))) {
        weights_48_48_1x1_V_s_address0 = grp_subconv_1x1_8_p_fu_8594_weight_0_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        weights_48_48_1x1_V_s_address0 = grp_subconv_1x1_16p_p_fu_8514_weight_0_V_address0.read();
    } else {
        weights_48_48_1x1_V_s_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_s_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read()))) {
        weights_48_48_1x1_V_s_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state540.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state595.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state631.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state722.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state777.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state813.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state868.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state904.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state959.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state995.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1050.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1086.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1141.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1177.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1232.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state450.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state507.read()))) {
        weights_48_48_1x1_V_s_ce0 = grp_subconv_1x1_8_p_fu_8594_weight_0_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        weights_48_48_1x1_V_s_ce0 = grp_subconv_1x1_16p_p_fu_8514_weight_0_V_ce0.read();
    } else {
        weights_48_48_1x1_V_s_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_s_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read()) && 
          esl_seteq<1,3,3>(arrayNo1_reg_35949.read(), ap_const_lv3_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read()) && 
          esl_seteq<1,3,3>(arrayNo2_reg_36249.read(), ap_const_lv3_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read()) && 
          esl_seteq<1,3,3>(arrayNo3_reg_36549.read(), ap_const_lv3_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read()) && 
          esl_seteq<1,3,3>(arrayNo4_reg_36760.read(), ap_const_lv3_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read()) && 
          esl_seteq<1,3,3>(arrayNo5_reg_37060.read(), ap_const_lv3_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read()) && 
          esl_seteq<1,3,3>(arrayNo6_reg_37315.read(), ap_const_lv3_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read()) && 
          esl_seteq<1,3,3>(arrayNo7_reg_37615.read(), ap_const_lv3_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read()) && 
          esl_seteq<1,3,3>(arrayNo8_reg_37870.read(), ap_const_lv3_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read()) && 
          esl_seteq<1,3,3>(arrayNo9_reg_38170.read(), ap_const_lv3_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read()) && 
          esl_seteq<1,3,3>(arrayNo10_reg_38425.read(), ap_const_lv3_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read()) && 
          esl_seteq<1,3,3>(arrayNo11_reg_38725.read(), ap_const_lv3_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) && 
          esl_seteq<1,3,3>(arrayNo12_reg_38980.read(), ap_const_lv3_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read()) && 
          esl_seteq<1,3,3>(arrayNo13_reg_39280.read(), ap_const_lv3_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read()) && 
          esl_seteq<1,3,3>(arrayNo14_reg_39535.read(), ap_const_lv3_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read()) && 
          esl_seteq<1,3,3>(arrayNo15_reg_39835.read(), ap_const_lv3_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read()) && 
          esl_seteq<1,3,3>(arrayNo16_reg_40090.read(), ap_const_lv3_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read()) && 
          esl_seteq<1,3,3>(arrayNo17_reg_40390.read(), ap_const_lv3_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read()) && 
          esl_seteq<1,3,3>(arrayNo18_reg_40645.read(), ap_const_lv3_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read()) && 
          esl_seteq<1,3,3>(arrayNo19_reg_40945.read(), ap_const_lv3_0)))) {
        weights_48_48_1x1_V_s_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_s_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_1_3x3_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1606.read())) {
        weights_96_1_3x3_V_address0 =  (sc_lv<10>) (tmp_2324_cast_fu_33408_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1515.read())) {
        weights_96_1_3x3_V_address0 =  (sc_lv<10>) (tmp_2248_cast_fu_31893_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1424.read())) {
        weights_96_1_3x3_V_address0 =  (sc_lv<10>) (tmp_2171_cast_fu_30362_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1336.read())) {
        weights_96_1_3x3_V_address0 =  (sc_lv<10>) (tmp_2104_cast_fu_28974_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1279.read())) {
        weights_96_1_3x3_V_address0 =  (sc_lv<10>) (tmp_2070_cast_fu_28191_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read())) {
        weights_96_1_3x3_V_address0 = grp_subconv_3x3_8_stride_1_fu_8842_weight_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        weights_96_1_3x3_V_address0 = grp_subconv_3x3_8_stride_fu_8726_weight_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1437.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1528.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1619.read()))) {
        weights_96_1_3x3_V_address0 = grp_subconv_3x3_4_no_rel_fu_8700_weight_V_address0.read();
    } else {
        weights_96_1_3x3_V_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_1_3x3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1279.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1336.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1424.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1515.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1606.read()))) {
        weights_96_1_3x3_V_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read())) {
        weights_96_1_3x3_V_ce0 = grp_subconv_3x3_8_stride_1_fu_8842_weight_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        weights_96_1_3x3_V_ce0 = grp_subconv_3x3_8_stride_fu_8726_weight_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1437.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1528.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1619.read()))) {
        weights_96_1_3x3_V_ce0 = grp_subconv_3x3_4_no_rel_fu_8700_weight_V_ce0.read();
    } else {
        weights_96_1_3x3_V_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_1_3x3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1279.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1336.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1424.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1515.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1606.read()))) {
        weights_96_1_3x3_V_we0 = ap_const_logic_1;
    } else {
        weights_96_1_3x3_V_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read())) {
        weights_96_96_1x1_V_1_address0 = weights_96_96_1x1_V_65_reg_43387.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read())) {
        weights_96_96_1x1_V_1_address0 = weights_96_96_1x1_V_57_reg_43087.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read())) {
        weights_96_96_1x1_V_1_address0 = weights_96_96_1x1_V_49_reg_42832.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read())) {
        weights_96_96_1x1_V_1_address0 = weights_96_96_1x1_V_41_reg_42532.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read())) {
        weights_96_96_1x1_V_1_address0 = weights_96_96_1x1_V_33_reg_42277.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read())) {
        weights_96_96_1x1_V_1_address0 = weights_96_96_1x1_V_25_reg_41977.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read())) {
        weights_96_96_1x1_V_1_address0 = weights_96_96_1x1_V_17_reg_41766.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_1_address0 = weights_96_96_1x1_V_9_reg_41466.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read())) {
        weights_96_96_1x1_V_1_address0 = weights_96_96_1x1_V_1_reg_41166.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_1_address0 = grp_subconv_1x1_8p_p_fu_8554_weight_1_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_1_address0 = grp_subconv_1x1_4_p_fu_8474_weight_1_V_address0.read();
    } else {
        weights_96_96_1x1_V_1_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()))) {
        weights_96_96_1x1_V_1_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_1_ce0 = grp_subconv_1x1_8p_p_fu_8554_weight_1_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_1_ce0 = grp_subconv_1x1_4_p_fu_8474_weight_1_V_ce0.read();
    } else {
        weights_96_96_1x1_V_1_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_1_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) && 
          esl_seteq<1,3,3>(arrayNo20_reg_41146.read(), ap_const_lv3_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) && 
          esl_seteq<1,3,3>(arrayNo21_reg_41446.read(), ap_const_lv3_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) && 
          esl_seteq<1,3,3>(arrayNo22_reg_41746.read(), ap_const_lv3_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) && 
          esl_seteq<1,3,3>(arrayNo23_reg_41957.read(), ap_const_lv3_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) && 
          esl_seteq<1,3,3>(arrayNo24_reg_42257.read(), ap_const_lv3_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) && 
          esl_seteq<1,3,3>(arrayNo25_reg_42512.read(), ap_const_lv3_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) && 
          esl_seteq<1,3,3>(arrayNo26_reg_42812.read(), ap_const_lv3_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()) && 
          esl_seteq<1,3,3>(arrayNo27_reg_43067.read(), ap_const_lv3_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) && 
          esl_seteq<1,3,3>(arrayNo_reg_43367.read(), ap_const_lv3_1)))) {
        weights_96_96_1x1_V_1_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_1_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read())) {
        weights_96_96_1x1_V_2_address0 = weights_96_96_1x1_V_64_reg_43382.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read())) {
        weights_96_96_1x1_V_2_address0 = weights_96_96_1x1_V_56_reg_43082.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read())) {
        weights_96_96_1x1_V_2_address0 = weights_96_96_1x1_V_48_reg_42827.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read())) {
        weights_96_96_1x1_V_2_address0 = weights_96_96_1x1_V_40_reg_42527.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read())) {
        weights_96_96_1x1_V_2_address0 = weights_96_96_1x1_V_32_reg_42272.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read())) {
        weights_96_96_1x1_V_2_address0 = weights_96_96_1x1_V_24_reg_41972.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read())) {
        weights_96_96_1x1_V_2_address0 = weights_96_96_1x1_V_16_reg_41761.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_2_address0 = weights_96_96_1x1_V_8_reg_41461.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read())) {
        weights_96_96_1x1_V_2_address0 = weights_96_96_1x1_V_s_reg_41161.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_2_address0 = grp_subconv_1x1_8p_p_fu_8554_weight_2_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_2_address0 = grp_subconv_1x1_4_p_fu_8474_weight_2_V_address0.read();
    } else {
        weights_96_96_1x1_V_2_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()))) {
        weights_96_96_1x1_V_2_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_2_ce0 = grp_subconv_1x1_8p_p_fu_8554_weight_2_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_2_ce0 = grp_subconv_1x1_4_p_fu_8474_weight_2_V_ce0.read();
    } else {
        weights_96_96_1x1_V_2_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_2_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) && 
          esl_seteq<1,3,3>(arrayNo20_reg_41146.read(), ap_const_lv3_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) && 
          esl_seteq<1,3,3>(arrayNo21_reg_41446.read(), ap_const_lv3_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) && 
          esl_seteq<1,3,3>(arrayNo22_reg_41746.read(), ap_const_lv3_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) && 
          esl_seteq<1,3,3>(arrayNo23_reg_41957.read(), ap_const_lv3_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) && 
          esl_seteq<1,3,3>(arrayNo24_reg_42257.read(), ap_const_lv3_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) && 
          esl_seteq<1,3,3>(arrayNo25_reg_42512.read(), ap_const_lv3_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) && 
          esl_seteq<1,3,3>(arrayNo26_reg_42812.read(), ap_const_lv3_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()) && 
          esl_seteq<1,3,3>(arrayNo27_reg_43067.read(), ap_const_lv3_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) && 
          esl_seteq<1,3,3>(arrayNo_reg_43367.read(), ap_const_lv3_2)))) {
        weights_96_96_1x1_V_2_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_2_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read())) {
        weights_96_96_1x1_V_3_address0 = weights_96_96_1x1_V_67_reg_43397.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read())) {
        weights_96_96_1x1_V_3_address0 = weights_96_96_1x1_V_59_reg_43097.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read())) {
        weights_96_96_1x1_V_3_address0 = weights_96_96_1x1_V_51_reg_42842.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read())) {
        weights_96_96_1x1_V_3_address0 = weights_96_96_1x1_V_43_reg_42542.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read())) {
        weights_96_96_1x1_V_3_address0 = weights_96_96_1x1_V_35_reg_42287.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read())) {
        weights_96_96_1x1_V_3_address0 = weights_96_96_1x1_V_27_reg_41987.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read())) {
        weights_96_96_1x1_V_3_address0 = weights_96_96_1x1_V_19_reg_41776.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_3_address0 = weights_96_96_1x1_V_11_reg_41476.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read())) {
        weights_96_96_1x1_V_3_address0 = weights_96_96_1x1_V_3_reg_41176.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_3_address0 = grp_subconv_1x1_8p_p_fu_8554_weight_3_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_3_address0 = grp_subconv_1x1_4_p_fu_8474_weight_3_V_address0.read();
    } else {
        weights_96_96_1x1_V_3_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()))) {
        weights_96_96_1x1_V_3_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_3_ce0 = grp_subconv_1x1_8p_p_fu_8554_weight_3_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_3_ce0 = grp_subconv_1x1_4_p_fu_8474_weight_3_V_ce0.read();
    } else {
        weights_96_96_1x1_V_3_ce0 = ap_const_logic_0;
    }
}

}

