#include "ShuffleNetV2.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void ShuffleNetV2::thread_tmp_402_cast1_fu_13464_p1() {
    tmp_402_cast1_fu_13464_p1 = esl_zext<12,2>(w53_reg_5169.read());
}

void ShuffleNetV2::thread_tmp_402_cast_fu_13468_p1() {
    tmp_402_cast_fu_13468_p1 = esl_zext<36,2>(w53_reg_5169.read());
}

void ShuffleNetV2::thread_tmp_403_fu_13849_p2() {
    tmp_403_fu_13849_p2 = (!p_shl10_cast_fu_13833_p1.read().is_01() || !p_shl11_cast_fu_13845_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl10_cast_fu_13833_p1.read()) - sc_biguint<7>(p_shl11_cast_fu_13845_p1.read()));
}

void ShuffleNetV2::thread_tmp_404_cast_fu_12537_p1() {
    tmp_404_cast_fu_12537_p1 = esl_sext<7,6>(tmp_375_fu_12529_p3.read());
}

void ShuffleNetV2::thread_tmp_404_fu_13749_p2() {
    tmp_404_fu_13749_p2 = (!p_shl8_cast_fu_13733_p1.read().is_01() || !p_shl9_cast_fu_13745_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl8_cast_fu_13733_p1.read()) - sc_biguint<7>(p_shl9_cast_fu_13745_p1.read()));
}

void ShuffleNetV2::thread_tmp_405_fu_13759_p2() {
    tmp_405_fu_13759_p2 = (!i39_cast_reg_36174.read().is_01() || !tmp_404_fu_13749_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(i39_cast_reg_36174.read()) + sc_biguint<7>(tmp_404_fu_13749_p2.read()));
}

void ShuffleNetV2::thread_tmp_406_fu_13800_p1() {
    tmp_406_fu_13800_p1 = esl_zext<64,32>(tmp_441_cast_fu_13797_p1.read());
}

void ShuffleNetV2::thread_tmp_407_fu_13770_p2() {
    tmp_407_fu_13770_p2 = (!tmp4_fu_13764_p2.read().is_01() || !i39_cast606_cast_reg_36169.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp4_fu_13764_p2.read()) + sc_biguint<8>(i39_cast606_cast_reg_36169.read()));
}

void ShuffleNetV2::thread_tmp_408_cast_fu_13778_p1() {
    tmp_408_cast_fu_13778_p1 = esl_zext<33,9>(tmp_444_cast_fu_13775_p1.read());
}

void ShuffleNetV2::thread_tmp_409_cast_fu_13488_p1() {
    tmp_409_cast_fu_13488_p1 = esl_zext<10,2>(h49_reg_5180.read());
}

void ShuffleNetV2::thread_tmp_409_fu_13484_p1() {
    tmp_409_fu_13484_p1 = esl_zext<64,2>(h49_reg_5180.read());
}

void ShuffleNetV2::thread_tmp_410_fu_13895_p2() {
    tmp_410_fu_13895_p2 = (!tmp_403_reg_36224.read().is_01() || !ci29_cast_fu_13879_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_403_reg_36224.read()) + sc_biguint<7>(ci29_cast_fu_13879_p1.read()));
}

void ShuffleNetV2::thread_tmp_411_cast_fu_13900_p1() {
    tmp_411_cast_fu_13900_p1 = esl_sext<10,7>(tmp_410_fu_13895_p2.read());
}

void ShuffleNetV2::thread_tmp_412_cast_fu_13904_p1() {
    tmp_412_cast_fu_13904_p1 = esl_zext<16,5>(ci29_reg_5235.read());
}

void ShuffleNetV2::thread_tmp_413_fu_13532_p2() {
    tmp_413_fu_13532_p2 = (!p_shl14_cast_fu_13516_p1.read().is_01() || !p_shl15_cast_fu_13528_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl14_cast_fu_13516_p1.read()) - sc_biguint<7>(p_shl15_cast_fu_13528_p1.read()));
}

void ShuffleNetV2::thread_tmp_414_fu_13542_p2() {
    tmp_414_fu_13542_p2 = (!tmp_413_fu_13532_p2.read().is_01() || !co59_cast1_reg_36073.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_413_fu_13532_p2.read()) + sc_biguint<7>(co59_cast1_reg_36073.read()));
}

void ShuffleNetV2::thread_tmp_415_cast_fu_13561_p1() {
    tmp_415_cast_fu_13561_p1 = esl_zext<35,32>(tmp_460_cast_fu_13558_p1.read());
}

void ShuffleNetV2::thread_tmp_416_fu_13553_p2() {
    tmp_416_fu_13553_p2 = (!co59_cast_reg_36068.read().is_01() || !tmp3_fu_13547_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(co59_cast_reg_36068.read()) + sc_biguint<8>(tmp3_fu_13547_p2.read()));
}

void ShuffleNetV2::thread_tmp_417_cast_fu_13603_p1() {
    tmp_417_cast_fu_13603_p1 = esl_zext<11,8>(tmp_416_reg_36136.read());
}

void ShuffleNetV2::thread_tmp_418_fu_14181_p2() {
    tmp_418_fu_14181_p2 = (!p_shl12_cast_fu_14165_p1.read().is_01() || !p_shl13_cast_fu_14177_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl12_cast_fu_14165_p1.read()) - sc_biguint<7>(p_shl13_cast_fu_14177_p1.read()));
}

void ShuffleNetV2::thread_tmp_419_fu_14191_p2() {
    tmp_419_fu_14191_p2 = (!i42_cast_reg_36331.read().is_01() || !tmp_418_fu_14181_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(i42_cast_reg_36331.read()) + sc_biguint<7>(tmp_418_fu_14181_p2.read()));
}

void ShuffleNetV2::thread_tmp_420_fu_14232_p1() {
    tmp_420_fu_14232_p1 = esl_zext<64,32>(tmp_451_cast_fu_14229_p1.read());
}

void ShuffleNetV2::thread_tmp_421_cast_fu_13064_p1() {
    tmp_421_cast_fu_13064_p1 = esl_zext<7,4>(p_lshr_f_cast_fu_13054_p4.read());
}

void ShuffleNetV2::thread_tmp_421_fu_14202_p2() {
    tmp_421_fu_14202_p2 = (!tmp6_fu_14196_p2.read().is_01() || !i42_cast593_cast_reg_36326.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp6_fu_14196_p2.read()) + sc_biguint<8>(i42_cast593_cast_reg_36326.read()));
}

void ShuffleNetV2::thread_tmp_422_cast_fu_14210_p1() {
    tmp_422_cast_fu_14210_p1 = esl_zext<33,9>(tmp_454_cast_fu_14207_p1.read());
}

void ShuffleNetV2::thread_tmp_423_cast_fu_13386_p1() {
    tmp_423_cast_fu_13386_p1 = esl_sext<9,7>(tmp_392_fu_13380_p2.read());
}

void ShuffleNetV2::thread_tmp_423_fu_13948_p2() {
    tmp_423_fu_13948_p2 = (!p_shl16_cast_fu_13932_p1.read().is_01() || !p_shl17_cast_fu_13944_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl16_cast_fu_13932_p1.read()) - sc_biguint<7>(p_shl17_cast_fu_13944_p1.read()));
}

void ShuffleNetV2::thread_tmp_424_cast_fu_13424_p1() {
    tmp_424_cast_fu_13424_p1 = esl_sext<32,7>(tmp_393_reg_36052.read());
}

void ShuffleNetV2::thread_tmp_424_fu_13958_p2() {
    tmp_424_fu_13958_p2 = (!tmp_423_fu_13948_p2.read().is_01() || !tmp_448_cast_reg_36229.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_423_fu_13948_p2.read()) + sc_biguint<7>(tmp_448_cast_reg_36229.read()));
}

void ShuffleNetV2::thread_tmp_425_fu_13987_p2() {
    tmp_425_fu_13987_p2 = (!p_shl18_cast_fu_13971_p1.read().is_01() || !p_shl19_cast_fu_13983_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl18_cast_fu_13971_p1.read()) - sc_biguint<8>(p_shl19_cast_fu_13983_p1.read()));
}

void ShuffleNetV2::thread_tmp_426_fu_14003_p2() {
    tmp_426_fu_14003_p2 = (!tmp5_fu_13997_p2.read().is_01() || !co61_cast_reg_36211.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp5_fu_13997_p2.read()) + sc_biguint<9>(co61_cast_reg_36211.read()));
}

void ShuffleNetV2::thread_tmp_427_fu_14013_p4() {
    tmp_427_fu_14013_p4 = tmp_424_fu_13958_p2.read().range(6, 3);
}

void ShuffleNetV2::thread_tmp_428_cast1_fu_14269_p1() {
    tmp_428_cast1_fu_14269_p1 = esl_zext<11,2>(w55_reg_5290.read());
}

void ShuffleNetV2::thread_tmp_428_cast_fu_14273_p1() {
    tmp_428_cast_fu_14273_p1 = esl_zext<36,2>(w55_reg_5290.read());
}

void ShuffleNetV2::thread_tmp_429_fu_14646_p2() {
    tmp_429_fu_14646_p2 = (!p_shl22_cast_fu_14630_p1.read().is_01() || !p_shl23_cast_fu_14642_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl22_cast_fu_14630_p1.read()) - sc_biguint<7>(p_shl23_cast_fu_14642_p1.read()));
}

void ShuffleNetV2::thread_tmp_430_fu_14550_p2() {
    tmp_430_fu_14550_p2 = (!p_shl20_cast_fu_14534_p1.read().is_01() || !p_shl21_cast_fu_14546_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl20_cast_fu_14534_p1.read()) - sc_biguint<7>(p_shl21_cast_fu_14546_p1.read()));
}

void ShuffleNetV2::thread_tmp_431_fu_14560_p2() {
    tmp_431_fu_14560_p2 = (!i47_cast1_reg_36474.read().is_01() || !tmp_430_fu_14550_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(i47_cast1_reg_36474.read()) + sc_biguint<7>(tmp_430_fu_14550_p2.read()));
}

void ShuffleNetV2::thread_tmp_432_fu_14597_p1() {
    tmp_432_fu_14597_p1 = esl_zext<64,32>(tmp_473_cast_fu_14594_p1.read());
}

void ShuffleNetV2::thread_tmp_433_fu_14571_p2() {
    tmp_433_fu_14571_p2 = (!tmp8_fu_14565_p2.read().is_01() || !i47_cast_reg_36469.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp8_fu_14565_p2.read()) + sc_biguint<10>(i47_cast_reg_36469.read()));
}

void ShuffleNetV2::thread_tmp_434_cast_fu_14576_p1() {
    tmp_434_cast_fu_14576_p1 = esl_zext<33,10>(tmp_433_reg_36500.read());
}

void ShuffleNetV2::thread_tmp_435_cast_fu_14293_p1() {
    tmp_435_cast_fu_14293_p1 = esl_zext<10,2>(h51_reg_5301.read());
}

void ShuffleNetV2::thread_tmp_435_fu_14289_p1() {
    tmp_435_fu_14289_p1 = esl_zext<64,2>(h51_reg_5301.read());
}

void ShuffleNetV2::thread_tmp_436_cast_fu_13192_p1() {
    tmp_436_cast_fu_13192_p1 = esl_sext<9,8>(tmp_399_fu_13186_p2.read());
}

void ShuffleNetV2::thread_tmp_436_fu_14692_p2() {
    tmp_436_fu_14692_p2 = (!tmp_429_reg_36524.read().is_01() || !ci31_cast_fu_14676_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_429_reg_36524.read()) + sc_biguint<7>(ci31_cast_fu_14676_p1.read()));
}

void ShuffleNetV2::thread_tmp_437_cast_fu_14697_p1() {
    tmp_437_cast_fu_14697_p1 = esl_sext<10,7>(tmp_436_fu_14692_p2.read());
}

void ShuffleNetV2::thread_tmp_438_cast_fu_14701_p1() {
    tmp_438_cast_fu_14701_p1 = esl_zext<17,5>(ci31_reg_5356.read());
}

void ShuffleNetV2::thread_tmp_439_fu_14337_p2() {
    tmp_439_fu_14337_p2 = (!p_shl26_cast_fu_14321_p1.read().is_01() || !p_shl27_cast_fu_14333_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl26_cast_fu_14321_p1.read()) - sc_biguint<7>(p_shl27_cast_fu_14333_p1.read()));
}

void ShuffleNetV2::thread_tmp_440_cast_cast_fu_13755_p1() {
    tmp_440_cast_cast_fu_13755_p1 = esl_sext<8,7>(tmp_404_fu_13749_p2.read());
}

void ShuffleNetV2::thread_tmp_440_fu_14347_p2() {
    tmp_440_fu_14347_p2 = (!tmp_439_fu_14337_p2.read().is_01() || !co63_cast1_reg_36373.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_439_fu_14337_p2.read()) + sc_biguint<7>(co63_cast1_reg_36373.read()));
}

void ShuffleNetV2::thread_tmp_441_cast1_fu_14366_p1() {
    tmp_441_cast1_fu_14366_p1 = esl_zext<35,32>(tmp_492_cast_fu_14363_p1.read());
}

void ShuffleNetV2::thread_tmp_441_cast_fu_13797_p1() {
    tmp_441_cast_fu_13797_p1 = esl_sext<32,7>(tmp_405_reg_36195.read());
}

void ShuffleNetV2::thread_tmp_442_fu_14358_p2() {
    tmp_442_fu_14358_p2 = (!co63_cast_reg_36368.read().is_01() || !tmp7_fu_14352_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(co63_cast_reg_36368.read()) + sc_biguint<8>(tmp7_fu_14352_p2.read()));
}

void ShuffleNetV2::thread_tmp_443_cast_fu_14408_p1() {
    tmp_443_cast_fu_14408_p1 = esl_zext<11,8>(tmp_442_reg_36436.read());
}

void ShuffleNetV2::thread_tmp_444_cast_fu_13775_p1() {
    tmp_444_cast_fu_13775_p1 = esl_sext<9,8>(tmp_407_reg_36200.read());
}

void ShuffleNetV2::thread_tmp_444_fu_15080_p2() {
    tmp_444_fu_15080_p2 = (!co67_cast_fu_15034_p1.read().is_01() || !ap_const_lv7_30.is_01())? sc_lv<7>(): (sc_biguint<7>(co67_cast_fu_15034_p1.read()) + sc_biguint<7>(ap_const_lv7_30));
}

void ShuffleNetV2::thread_tmp_445_fu_14982_p2() {
    tmp_445_fu_14982_p2 = (!p_shl24_cast_fu_14966_p1.read().is_01() || !p_shl25_cast_fu_14978_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl24_cast_fu_14966_p1.read()) - sc_biguint<7>(p_shl25_cast_fu_14978_p1.read()));
}

void ShuffleNetV2::thread_tmp_446_fu_14992_p2() {
    tmp_446_fu_14992_p2 = (!i50_cast1_reg_36631.read().is_01() || !tmp_445_fu_14982_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(i50_cast1_reg_36631.read()) + sc_biguint<7>(tmp_445_fu_14982_p2.read()));
}

void ShuffleNetV2::thread_tmp_447_fu_15029_p1() {
    tmp_447_fu_15029_p1 = esl_zext<64,32>(tmp_483_cast_fu_15026_p1.read());
}

void ShuffleNetV2::thread_tmp_448_cast_fu_13865_p1() {
    tmp_448_cast_fu_13865_p1 = esl_zext<7,4>(p_lshr_f1_cast_fu_13855_p4.read());
}

void ShuffleNetV2::thread_tmp_448_fu_15003_p2() {
    tmp_448_fu_15003_p2 = (!tmp10_fu_14997_p2.read().is_01() || !i50_cast_reg_36626.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp10_fu_14997_p2.read()) + sc_biguint<10>(i50_cast_reg_36626.read()));
}

void ShuffleNetV2::thread_tmp_449_cast_fu_15008_p1() {
    tmp_449_cast_fu_15008_p1 = esl_zext<33,10>(tmp_448_reg_36657.read());
}

void ShuffleNetV2::thread_tmp_450_cast_cast_fu_14187_p1() {
    tmp_450_cast_cast_fu_14187_p1 = esl_sext<8,7>(tmp_418_fu_14181_p2.read());
}

void ShuffleNetV2::thread_tmp_450_fu_14745_p2() {
    tmp_450_fu_14745_p2 = (!p_shl30_cast_fu_14729_p1.read().is_01() || !p_shl31_cast_fu_14741_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl30_cast_fu_14729_p1.read()) - sc_biguint<7>(p_shl31_cast_fu_14741_p1.read()));
}

void ShuffleNetV2::thread_tmp_451_cast_fu_14229_p1() {
    tmp_451_cast_fu_14229_p1 = esl_sext<32,7>(tmp_419_reg_36352.read());
}

void ShuffleNetV2::thread_tmp_451_fu_14755_p2() {
    tmp_451_fu_14755_p2 = (!tmp_450_fu_14745_p2.read().is_01() || !tmp_480_cast_reg_36529.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_450_fu_14745_p2.read()) + sc_biguint<7>(tmp_480_cast_reg_36529.read()));
}

void ShuffleNetV2::thread_tmp_452_fu_14784_p2() {
    tmp_452_fu_14784_p2 = (!p_shl32_cast_fu_14768_p1.read().is_01() || !p_shl33_cast_fu_14780_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl32_cast_fu_14768_p1.read()) - sc_biguint<8>(p_shl33_cast_fu_14780_p1.read()));
}

void ShuffleNetV2::thread_tmp_453_fu_14804_p2() {
    tmp_453_fu_14804_p2 = (!tmp9_cast_fu_14800_p1.read().is_01() || !co65_cast_reg_36511.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp9_cast_fu_14800_p1.read()) + sc_biguint<10>(co65_cast_reg_36511.read()));
}

void ShuffleNetV2::thread_tmp_454_cast_fu_14207_p1() {
    tmp_454_cast_fu_14207_p1 = esl_sext<9,8>(tmp_421_reg_36357.read());
}

void ShuffleNetV2::thread_tmp_454_fu_14814_p4() {
    tmp_454_fu_14814_p4 = tmp_451_fu_14755_p2.read().range(6, 3);
}

void ShuffleNetV2::thread_tmp_455_fu_15289_p2() {
    tmp_455_fu_15289_p2 = (!p_shl28_cast_fu_15273_p1.read().is_01() || !p_shl29_cast_fu_15285_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl28_cast_fu_15273_p1.read()) - sc_biguint<7>(p_shl29_cast_fu_15285_p1.read()));
}

void ShuffleNetV2::thread_tmp_456_cast1_fu_15132_p1() {
    tmp_456_cast1_fu_15132_p1 = esl_zext<10,4>(h_54_fu_15122_p2.read());
}

void ShuffleNetV2::thread_tmp_456_cast_fu_15128_p1() {
    tmp_456_cast_fu_15128_p1 = esl_zext<11,4>(h_54_fu_15122_p2.read());
}

void ShuffleNetV2::thread_tmp_457_fu_15335_p2() {
    tmp_457_fu_15335_p2 = (!tmp_455_reg_36735.read().is_01() || !ci33_cast_fu_15319_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_455_reg_36735.read()) + sc_biguint<7>(ci33_cast_fu_15319_p1.read()));
}

void ShuffleNetV2::thread_tmp_458_cast_fu_15340_p1() {
    tmp_458_cast_fu_15340_p1 = esl_sext<10,7>(tmp_457_fu_15335_p2.read());
}

void ShuffleNetV2::thread_tmp_459_cast1_fu_15344_p1() {
    tmp_459_cast1_fu_15344_p1 = esl_zext<17,5>(ci33_reg_5444.read());
}

void ShuffleNetV2::thread_tmp_459_cast_fu_13538_p1() {
    tmp_459_cast_fu_13538_p1 = esl_sext<8,7>(tmp_413_fu_13532_p2.read());
}

void ShuffleNetV2::thread_tmp_460_cast1_fu_15218_p1() {
    tmp_460_cast1_fu_15218_p1 = esl_zext<15,4>(w_58_fu_15212_p2.read());
}

void ShuffleNetV2::thread_tmp_460_cast2_fu_15222_p1() {
    tmp_460_cast2_fu_15222_p1 = esl_zext<14,4>(w_58_fu_15212_p2.read());
}

void ShuffleNetV2::thread_tmp_460_cast_fu_13558_p1() {
    tmp_460_cast_fu_13558_p1 = esl_sext<32,7>(tmp_414_reg_36130.read());
}

void ShuffleNetV2::thread_tmp_461_fu_15621_p2() {
    tmp_461_fu_15621_p2 = (!p_shl34_cast_fu_15605_p1.read().is_01() || !p_shl35_cast_fu_15617_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl34_cast_fu_15605_p1.read()) - sc_biguint<7>(p_shl35_cast_fu_15617_p1.read()));
}

void ShuffleNetV2::thread_tmp_462_fu_15631_p2() {
    tmp_462_fu_15631_p2 = (!i56_cast1_reg_36842.read().is_01() || !tmp_461_fu_15621_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(i56_cast1_reg_36842.read()) + sc_biguint<7>(tmp_461_fu_15621_p2.read()));
}

void ShuffleNetV2::thread_tmp_463_fu_15668_p1() {
    tmp_463_fu_15668_p1 = esl_zext<64,32>(tmp_511_cast_fu_15665_p1.read());
}

void ShuffleNetV2::thread_tmp_464_fu_15642_p2() {
    tmp_464_fu_15642_p2 = (!tmp12_fu_15636_p2.read().is_01() || !i56_cast_reg_36837.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp12_fu_15636_p2.read()) + sc_biguint<10>(i56_cast_reg_36837.read()));
}

void ShuffleNetV2::thread_tmp_465_cast_fu_15647_p1() {
    tmp_465_cast_fu_15647_p1 = esl_zext<33,10>(tmp_464_reg_36868.read());
}

void ShuffleNetV2::thread_tmp_466_fu_15388_p2() {
    tmp_466_fu_15388_p2 = (!p_shl36_cast_fu_15372_p1.read().is_01() || !p_shl37_cast_fu_15384_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl36_cast_fu_15372_p1.read()) - sc_biguint<7>(p_shl37_cast_fu_15384_p1.read()));
}

void ShuffleNetV2::thread_tmp_467_fu_15398_p2() {
    tmp_467_fu_15398_p2 = (!tmp_466_fu_15388_p2.read().is_01() || !tmp_502_cast_reg_36740.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_466_fu_15388_p2.read()) + sc_biguint<7>(tmp_502_cast_reg_36740.read()));
}

void ShuffleNetV2::thread_tmp_468_cast_fu_13993_p1() {
    tmp_468_cast_fu_13993_p1 = esl_sext<9,8>(tmp_425_fu_13987_p2.read());
}

void ShuffleNetV2::thread_tmp_468_fu_15427_p2() {
    tmp_468_fu_15427_p2 = (!p_shl38_cast_fu_15411_p1.read().is_01() || !p_shl39_cast_fu_15423_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl38_cast_fu_15411_p1.read()) - sc_biguint<8>(p_shl39_cast_fu_15423_p1.read()));
}

void ShuffleNetV2::thread_tmp_469_fu_15443_p2() {
    tmp_469_fu_15443_p2 = (!tmp11_fu_15437_p2.read().is_01() || !co68_cast_reg_36722.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp11_fu_15437_p2.read()) + sc_biguint<10>(co68_cast_reg_36722.read()));
}

void ShuffleNetV2::thread_tmp_470_fu_15453_p4() {
    tmp_470_fu_15453_p4 = tmp_467_fu_15398_p2.read().range(6, 3);
}

void ShuffleNetV2::thread_tmp_471_cast1_fu_15705_p1() {
    tmp_471_cast1_fu_15705_p1 = esl_zext<13,2>(w59_reg_5499.read());
}

void ShuffleNetV2::thread_tmp_471_cast_fu_15709_p1() {
    tmp_471_cast_fu_15709_p1 = esl_zext<36,2>(w59_reg_5499.read());
}

void ShuffleNetV2::thread_tmp_472_cast_fu_14556_p1() {
    tmp_472_cast_fu_14556_p1 = esl_sext<10,7>(tmp_430_fu_14550_p2.read());
}

void ShuffleNetV2::thread_tmp_472_fu_16090_p2() {
    tmp_472_fu_16090_p2 = (!p_shl42_cast_fu_16074_p1.read().is_01() || !p_shl43_cast_fu_16086_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl42_cast_fu_16074_p1.read()) - sc_biguint<7>(p_shl43_cast_fu_16086_p1.read()));
}

void ShuffleNetV2::thread_tmp_473_cast_fu_14594_p1() {
    tmp_473_cast_fu_14594_p1 = esl_sext<32,7>(tmp_431_reg_36495.read());
}

void ShuffleNetV2::thread_tmp_473_fu_15994_p2() {
    tmp_473_fu_15994_p2 = (!p_shl40_cast_fu_15978_p1.read().is_01() || !p_shl41_cast_fu_15990_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl40_cast_fu_15978_p1.read()) - sc_biguint<7>(p_shl41_cast_fu_15990_p1.read()));
}

void ShuffleNetV2::thread_tmp_474_fu_16004_p2() {
    tmp_474_fu_16004_p2 = (!i59_cast1_reg_36985.read().is_01() || !tmp_473_fu_15994_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(i59_cast1_reg_36985.read()) + sc_biguint<7>(tmp_473_fu_15994_p2.read()));
}

void ShuffleNetV2::thread_tmp_475_fu_16041_p1() {
    tmp_475_fu_16041_p1 = esl_zext<64,32>(tmp_528_cast_fu_16038_p1.read());
}

void ShuffleNetV2::thread_tmp_476_fu_16015_p2() {
    tmp_476_fu_16015_p2 = (!tmp14_fu_16009_p2.read().is_01() || !i59_cast_reg_36980.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp14_fu_16009_p2.read()) + sc_biguint<10>(i59_cast_reg_36980.read()));
}

void ShuffleNetV2::thread_tmp_477_cast_fu_16020_p1() {
    tmp_477_cast_fu_16020_p1 = esl_zext<33,10>(tmp_476_reg_37011.read());
}

void ShuffleNetV2::thread_tmp_478_cast_fu_15729_p1() {
    tmp_478_cast_fu_15729_p1 = esl_zext<10,2>(h55_reg_5510.read());
}

void ShuffleNetV2::thread_tmp_478_fu_15725_p1() {
    tmp_478_fu_15725_p1 = esl_zext<64,2>(h55_reg_5510.read());
}

void ShuffleNetV2::thread_tmp_479_fu_16136_p2() {
    tmp_479_fu_16136_p2 = (!tmp_472_reg_37035.read().is_01() || !ci35_cast_fu_16120_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_472_reg_37035.read()) + sc_biguint<7>(ci35_cast_fu_16120_p1.read()));
}

void ShuffleNetV2::thread_tmp_480_cast1_fu_16141_p1() {
    tmp_480_cast1_fu_16141_p1 = esl_sext<10,7>(tmp_479_fu_16136_p2.read());
}

void ShuffleNetV2::thread_tmp_480_cast_fu_14662_p1() {
    tmp_480_cast_fu_14662_p1 = esl_zext<7,4>(p_lshr_f2_cast_fu_14652_p4.read());
}

void ShuffleNetV2::thread_tmp_481_cast_fu_16145_p1() {
    tmp_481_cast_fu_16145_p1 = esl_zext<17,5>(ci35_reg_5565.read());
}

void ShuffleNetV2::thread_tmp_482_cast_fu_14988_p1() {
    tmp_482_cast_fu_14988_p1 = esl_sext<10,7>(tmp_445_fu_14982_p2.read());
}

void ShuffleNetV2::thread_tmp_482_fu_15773_p2() {
    tmp_482_fu_15773_p2 = (!p_shl46_cast_fu_15757_p1.read().is_01() || !p_shl47_cast_fu_15769_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl46_cast_fu_15757_p1.read()) - sc_biguint<7>(p_shl47_cast_fu_15769_p1.read()));
}

void ShuffleNetV2::thread_tmp_483_cast_fu_15026_p1() {
    tmp_483_cast_fu_15026_p1 = esl_sext<32,7>(tmp_446_reg_36652.read());
}

void ShuffleNetV2::thread_tmp_483_fu_15779_p2() {
    tmp_483_fu_15779_p2 = (!tmp_482_fu_15773_p2.read().is_01() || !co71_cast1_reg_36884.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_482_fu_15773_p2.read()) + sc_biguint<7>(co71_cast1_reg_36884.read()));
}

void ShuffleNetV2::thread_tmp_484_cast_fu_15806_p1() {
    tmp_484_cast_fu_15806_p1 = esl_zext<35,32>(tmp_547_cast_fu_15803_p1.read());
}

void ShuffleNetV2::thread_tmp_485_fu_15798_p2() {
    tmp_485_fu_15798_p2 = (!co71_cast_reg_36879.read().is_01() || !tmp13_cast_fu_15794_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(co71_cast_reg_36879.read()) + sc_biguint<9>(tmp13_cast_fu_15794_p1.read()));
}

void ShuffleNetV2::thread_tmp_486_cast_fu_15848_p1() {
    tmp_486_cast_fu_15848_p1 = esl_zext<12,9>(tmp_485_reg_36947.read());
}

void ShuffleNetV2::thread_tmp_487_fu_16422_p2() {
    tmp_487_fu_16422_p2 = (!p_shl44_cast_fu_16406_p1.read().is_01() || !p_shl45_cast_fu_16418_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl44_cast_fu_16406_p1.read()) - sc_biguint<7>(p_shl45_cast_fu_16418_p1.read()));
}

void ShuffleNetV2::thread_tmp_488_fu_16432_p2() {
    tmp_488_fu_16432_p2 = (!i62_cast1_reg_37142.read().is_01() || !tmp_487_fu_16422_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(i62_cast1_reg_37142.read()) + sc_biguint<7>(tmp_487_fu_16422_p2.read()));
}

void ShuffleNetV2::thread_tmp_489_fu_16469_p1() {
    tmp_489_fu_16469_p1 = esl_zext<64,32>(tmp_538_cast_fu_16466_p1.read());
}

void ShuffleNetV2::thread_tmp_490_fu_16443_p2() {
    tmp_490_fu_16443_p2 = (!tmp16_fu_16437_p2.read().is_01() || !i62_cast_reg_37137.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp16_fu_16437_p2.read()) + sc_biguint<10>(i62_cast_reg_37137.read()));
}

void ShuffleNetV2::thread_tmp_491_cast1_fu_16448_p1() {
    tmp_491_cast1_fu_16448_p1 = esl_zext<33,10>(tmp_490_reg_37168.read());
}

void ShuffleNetV2::thread_tmp_491_cast_fu_14343_p1() {
    tmp_491_cast_fu_14343_p1 = esl_sext<8,7>(tmp_439_fu_14337_p2.read());
}

void ShuffleNetV2::thread_tmp_492_cast_fu_14363_p1() {
    tmp_492_cast_fu_14363_p1 = esl_sext<32,7>(tmp_440_reg_36430.read());
}

void ShuffleNetV2::thread_tmp_492_fu_16189_p2() {
    tmp_492_fu_16189_p2 = (!p_shl48_cast_fu_16173_p1.read().is_01() || !p_shl49_cast_fu_16185_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl48_cast_fu_16173_p1.read()) - sc_biguint<7>(p_shl49_cast_fu_16185_p1.read()));
}

void ShuffleNetV2::thread_tmp_493_fu_16199_p2() {
    tmp_493_fu_16199_p2 = (!tmp_492_fu_16189_p2.read().is_01() || !tmp_535_cast_reg_37040.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_492_fu_16189_p2.read()) + sc_biguint<7>(tmp_535_cast_reg_37040.read()));
}

void ShuffleNetV2::thread_tmp_494_fu_16228_p2() {
    tmp_494_fu_16228_p2 = (!p_shl50_cast_fu_16212_p1.read().is_01() || !p_shl51_cast_fu_16224_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl50_cast_fu_16212_p1.read()) - sc_biguint<8>(p_shl51_cast_fu_16224_p1.read()));
}

void ShuffleNetV2::thread_tmp_495_fu_16244_p2() {
    tmp_495_fu_16244_p2 = (!tmp15_fu_16238_p2.read().is_01() || !co73_cast_reg_37022.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp15_fu_16238_p2.read()) + sc_biguint<10>(co73_cast_reg_37022.read()));
}

void ShuffleNetV2::thread_tmp_496_fu_16254_p4() {
    tmp_496_fu_16254_p4 = tmp_493_fu_16199_p2.read().range(6, 3);
}

void ShuffleNetV2::thread_tmp_497_fu_16639_p2() {
    tmp_497_fu_16639_p2 = (!co76_cast_fu_16593_p1.read().is_01() || !ap_const_lv7_30.is_01())? sc_lv<7>(): (sc_biguint<7>(co76_cast_fu_16593_p1.read()) + sc_biguint<7>(ap_const_lv7_30));
}

void ShuffleNetV2::thread_tmp_498_cast_fu_16528_p1() {
    tmp_498_cast_fu_16528_p1 = esl_zext<10,4>(h_58_fu_16522_p2.read());
}

void ShuffleNetV2::thread_tmp_499_fu_16848_p2() {
    tmp_499_fu_16848_p2 = (!p_shl52_cast_fu_16832_p1.read().is_01() || !p_shl53_cast_fu_16844_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl52_cast_fu_16832_p1.read()) - sc_biguint<7>(p_shl53_cast_fu_16844_p1.read()));
}

void ShuffleNetV2::thread_tmp_500_cast1_fu_16687_p1() {
    tmp_500_cast1_fu_16687_p1 = esl_zext<11,4>(h_60_fu_16681_p2.read());
}

void ShuffleNetV2::thread_tmp_500_cast_fu_16691_p1() {
    tmp_500_cast_fu_16691_p1 = esl_zext<10,4>(h_60_fu_16681_p2.read());
}

void ShuffleNetV2::thread_tmp_501_cast_fu_16579_p1() {
    tmp_501_cast_fu_16579_p1 = esl_zext<15,4>(w_62_fu_16573_p2.read());
}

void ShuffleNetV2::thread_tmp_502_cast_fu_15305_p1() {
    tmp_502_cast_fu_15305_p1 = esl_zext<7,4>(p_lshr_f3_cast_fu_15295_p4.read());
}

void ShuffleNetV2::thread_tmp_502_fu_16894_p2() {
    tmp_502_fu_16894_p2 = (!tmp_499_reg_37290.read().is_01() || !ci37_cast_fu_16878_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_499_reg_37290.read()) + sc_biguint<7>(ci37_cast_fu_16878_p1.read()));
}

void ShuffleNetV2::thread_tmp_503_cast_fu_16899_p1() {
    tmp_503_cast_fu_16899_p1 = esl_sext<10,7>(tmp_502_fu_16894_p2.read());
}

void ShuffleNetV2::thread_tmp_504_cast_fu_16903_p1() {
    tmp_504_cast_fu_16903_p1 = esl_zext<17,5>(ci37_reg_5686.read());
}

void ShuffleNetV2::thread_tmp_505_cast1_fu_16777_p1() {
    tmp_505_cast1_fu_16777_p1 = esl_zext<15,4>(w_64_fu_16771_p2.read());
}

void ShuffleNetV2::thread_tmp_505_cast2_fu_16781_p1() {
    tmp_505_cast2_fu_16781_p1 = esl_zext<14,4>(w_64_fu_16771_p2.read());
}

void ShuffleNetV2::thread_tmp_505_cast_fu_14790_p1() {
    tmp_505_cast_fu_14790_p1 = esl_sext<9,8>(tmp_452_fu_14784_p2.read());
}

void ShuffleNetV2::thread_tmp_506_fu_17180_p2() {
    tmp_506_fu_17180_p2 = (!p_shl54_cast_fu_17164_p1.read().is_01() || !p_shl55_cast_fu_17176_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl54_cast_fu_17164_p1.read()) - sc_biguint<7>(p_shl55_cast_fu_17176_p1.read()));
}

void ShuffleNetV2::thread_tmp_507_fu_17190_p2() {
    tmp_507_fu_17190_p2 = (!i68_cast1_reg_37397.read().is_01() || !tmp_506_fu_17180_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(i68_cast1_reg_37397.read()) + sc_biguint<7>(tmp_506_fu_17180_p2.read()));
}

void ShuffleNetV2::thread_tmp_508_fu_17227_p1() {
    tmp_508_fu_17227_p1 = esl_zext<64,32>(tmp_569_cast_fu_17224_p1.read());
}

void ShuffleNetV2::thread_tmp_509_fu_17201_p2() {
    tmp_509_fu_17201_p2 = (!tmp18_fu_17195_p2.read().is_01() || !i68_cast_reg_37392.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp18_fu_17195_p2.read()) + sc_biguint<10>(i68_cast_reg_37392.read()));
}

void ShuffleNetV2::thread_tmp_510_cast1_fu_17206_p1() {
    tmp_510_cast1_fu_17206_p1 = esl_zext<33,10>(tmp_509_reg_37423.read());
}

void ShuffleNetV2::thread_tmp_510_cast_fu_15627_p1() {
    tmp_510_cast_fu_15627_p1 = esl_sext<10,7>(tmp_461_fu_15621_p2.read());
}

void ShuffleNetV2::thread_tmp_511_cast_fu_15665_p1() {
    tmp_511_cast_fu_15665_p1 = esl_sext<32,7>(tmp_462_reg_36863.read());
}

void ShuffleNetV2::thread_tmp_511_fu_16947_p2() {
    tmp_511_fu_16947_p2 = (!p_shl56_cast_fu_16931_p1.read().is_01() || !p_shl57_cast_fu_16943_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl56_cast_fu_16931_p1.read()) - sc_biguint<7>(p_shl57_cast_fu_16943_p1.read()));
}

void ShuffleNetV2::thread_tmp_512_fu_16957_p2() {
    tmp_512_fu_16957_p2 = (!tmp_511_fu_16947_p2.read().is_01() || !tmp_565_cast_reg_37295.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_511_fu_16947_p2.read()) + sc_biguint<7>(tmp_565_cast_reg_37295.read()));
}

void ShuffleNetV2::thread_tmp_513_fu_16986_p2() {
    tmp_513_fu_16986_p2 = (!p_shl58_cast_fu_16970_p1.read().is_01() || !p_shl59_cast_fu_16982_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl58_cast_fu_16970_p1.read()) - sc_biguint<8>(p_shl59_cast_fu_16982_p1.read()));
}

void ShuffleNetV2::thread_tmp_514_fu_17002_p2() {
    tmp_514_fu_17002_p2 = (!tmp17_fu_16996_p2.read().is_01() || !co78_cast_reg_37277.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp17_fu_16996_p2.read()) + sc_biguint<10>(co78_cast_reg_37277.read()));
}

void ShuffleNetV2::thread_tmp_515_fu_17012_p4() {
    tmp_515_fu_17012_p4 = tmp_512_fu_16957_p2.read().range(6, 3);
}

void ShuffleNetV2::thread_tmp_516_cast1_fu_17268_p1() {
    tmp_516_cast1_fu_17268_p1 = esl_zext<36,2>(w65_reg_5741.read());
}

void ShuffleNetV2::thread_tmp_516_cast_fu_17264_p1() {
    tmp_516_cast_fu_17264_p1 = esl_zext<13,2>(w65_reg_5741.read());
}

void ShuffleNetV2::thread_tmp_517_fu_17649_p2() {
    tmp_517_fu_17649_p2 = (!p_shl62_cast_fu_17633_p1.read().is_01() || !p_shl63_cast_fu_17645_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl62_cast_fu_17633_p1.read()) - sc_biguint<7>(p_shl63_cast_fu_17645_p1.read()));
}

void ShuffleNetV2::thread_tmp_518_fu_17549_p2() {
    tmp_518_fu_17549_p2 = (!p_shl60_cast_fu_17533_p1.read().is_01() || !p_shl61_cast_fu_17545_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl60_cast_fu_17533_p1.read()) - sc_biguint<7>(p_shl61_cast_fu_17545_p1.read()));
}

void ShuffleNetV2::thread_tmp_519_fu_17559_p2() {
    tmp_519_fu_17559_p2 = (!i71_cast_reg_37540.read().is_01() || !tmp_518_fu_17549_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(i71_cast_reg_37540.read()) + sc_biguint<7>(tmp_518_fu_17549_p2.read()));
}

void ShuffleNetV2::thread_tmp_520_fu_17600_p1() {
    tmp_520_fu_17600_p1 = esl_zext<64,32>(tmp_586_cast_fu_17597_p1.read());
}

void ShuffleNetV2::thread_tmp_521_fu_17570_p2() {
    tmp_521_fu_17570_p2 = (!tmp20_fu_17564_p2.read().is_01() || !i71_cast508_cast_reg_37535.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp20_fu_17564_p2.read()) + sc_biguint<9>(i71_cast508_cast_reg_37535.read()));
}

void ShuffleNetV2::thread_tmp_522_cast_fu_17578_p1() {
    tmp_522_cast_fu_17578_p1 = esl_zext<33,10>(tmp_589_cast_fu_17575_p1.read());
}

void ShuffleNetV2::thread_tmp_523_cast1_fu_17288_p1() {
    tmp_523_cast1_fu_17288_p1 = esl_zext<10,2>(h61_reg_5752.read());
}

void ShuffleNetV2::thread_tmp_523_cast_fu_15433_p1() {
    tmp_523_cast_fu_15433_p1 = esl_sext<10,8>(tmp_468_fu_15427_p2.read());
}

void ShuffleNetV2::thread_tmp_523_fu_17284_p1() {
    tmp_523_fu_17284_p1 = esl_zext<64,2>(h61_reg_5752.read());
}

void ShuffleNetV2::thread_tmp_524_fu_17695_p2() {
    tmp_524_fu_17695_p2 = (!tmp_517_reg_37590.read().is_01() || !ci39_cast_fu_17679_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_517_reg_37590.read()) + sc_biguint<7>(ci39_cast_fu_17679_p1.read()));
}

void ShuffleNetV2::thread_tmp_525_cast_fu_17700_p1() {
    tmp_525_cast_fu_17700_p1 = esl_sext<10,7>(tmp_524_fu_17695_p2.read());
}

void ShuffleNetV2::thread_tmp_526_cast_fu_17704_p1() {
    tmp_526_cast_fu_17704_p1 = esl_zext<17,5>(ci39_reg_5807.read());
}

void ShuffleNetV2::thread_tmp_527_cast_fu_16000_p1() {
    tmp_527_cast_fu_16000_p1 = esl_sext<10,7>(tmp_473_fu_15994_p2.read());
}

void ShuffleNetV2::thread_tmp_527_fu_17332_p2() {
    tmp_527_fu_17332_p2 = (!p_shl66_cast_fu_17316_p1.read().is_01() || !p_shl67_cast_fu_17328_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl66_cast_fu_17316_p1.read()) - sc_biguint<7>(p_shl67_cast_fu_17328_p1.read()));
}

void ShuffleNetV2::thread_tmp_528_cast_fu_16038_p1() {
    tmp_528_cast_fu_16038_p1 = esl_sext<32,7>(tmp_474_reg_37006.read());
}

void ShuffleNetV2::thread_tmp_528_fu_17342_p2() {
    tmp_528_fu_17342_p2 = (!tmp_527_fu_17332_p2.read().is_01() || !co81_cast1_reg_37439.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_527_fu_17332_p2.read()) + sc_biguint<7>(co81_cast1_reg_37439.read()));
}

void ShuffleNetV2::thread_tmp_529_cast_fu_17361_p1() {
    tmp_529_cast_fu_17361_p1 = esl_zext<35,32>(tmp_605_cast_fu_17358_p1.read());
}

void ShuffleNetV2::thread_tmp_530_fu_17353_p2() {
    tmp_530_fu_17353_p2 = (!co81_cast_reg_37434.read().is_01() || !tmp19_fu_17347_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(co81_cast_reg_37434.read()) + sc_biguint<9>(tmp19_fu_17347_p2.read()));
}

void ShuffleNetV2::thread_tmp_531_cast_fu_17403_p1() {
    tmp_531_cast_fu_17403_p1 = esl_zext<12,9>(tmp_530_reg_37502.read());
}

void ShuffleNetV2::thread_tmp_532_fu_17981_p2() {
    tmp_532_fu_17981_p2 = (!p_shl64_cast_fu_17965_p1.read().is_01() || !p_shl65_cast_fu_17977_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl64_cast_fu_17965_p1.read()) - sc_biguint<7>(p_shl65_cast_fu_17977_p1.read()));
}

void ShuffleNetV2::thread_tmp_533_fu_17991_p2() {
    tmp_533_fu_17991_p2 = (!i74_cast_reg_37697.read().is_01() || !tmp_532_fu_17981_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(i74_cast_reg_37697.read()) + sc_biguint<7>(tmp_532_fu_17981_p2.read()));
}

void ShuffleNetV2::thread_tmp_534_fu_18032_p1() {
    tmp_534_fu_18032_p1 = esl_zext<64,32>(tmp_596_cast_fu_18029_p1.read());
}

void ShuffleNetV2::thread_tmp_535_cast_fu_16106_p1() {
    tmp_535_cast_fu_16106_p1 = esl_zext<7,4>(p_lshr_f4_cast_fu_16096_p4.read());
}

void ShuffleNetV2::thread_tmp_535_fu_18002_p2() {
    tmp_535_fu_18002_p2 = (!tmp22_fu_17996_p2.read().is_01() || !i74_cast495_cast_reg_37692.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp22_fu_17996_p2.read()) + sc_biguint<9>(i74_cast495_cast_reg_37692.read()));
}

void ShuffleNetV2::thread_tmp_536_cast_fu_18010_p1() {
    tmp_536_cast_fu_18010_p1 = esl_zext<33,10>(tmp_599_cast_fu_18007_p1.read());
}

void ShuffleNetV2::thread_tmp_537_cast_fu_16428_p1() {
    tmp_537_cast_fu_16428_p1 = esl_sext<10,7>(tmp_487_fu_16422_p2.read());
}

void ShuffleNetV2::thread_tmp_537_fu_17748_p2() {
    tmp_537_fu_17748_p2 = (!p_shl68_cast_fu_17732_p1.read().is_01() || !p_shl69_cast_fu_17744_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl68_cast_fu_17732_p1.read()) - sc_biguint<7>(p_shl69_cast_fu_17744_p1.read()));
}

void ShuffleNetV2::thread_tmp_538_cast_fu_16466_p1() {
    tmp_538_cast_fu_16466_p1 = esl_sext<32,7>(tmp_488_reg_37163.read());
}

void ShuffleNetV2::thread_tmp_538_fu_17758_p2() {
    tmp_538_fu_17758_p2 = (!tmp_537_fu_17748_p2.read().is_01() || !tmp_593_cast_reg_37595.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_537_fu_17748_p2.read()) + sc_biguint<7>(tmp_593_cast_reg_37595.read()));
}

void ShuffleNetV2::thread_tmp_539_fu_17787_p2() {
    tmp_539_fu_17787_p2 = (!p_shl70_cast_fu_17771_p1.read().is_01() || !p_shl71_cast_fu_17783_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl70_cast_fu_17771_p1.read()) - sc_biguint<8>(p_shl71_cast_fu_17783_p1.read()));
}

void ShuffleNetV2::thread_tmp_540_fu_17803_p2() {
    tmp_540_fu_17803_p2 = (!tmp21_fu_17797_p2.read().is_01() || !co83_cast_reg_37577.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp21_fu_17797_p2.read()) + sc_biguint<10>(co83_cast_reg_37577.read()));
}

void ShuffleNetV2::thread_tmp_541_fu_17813_p4() {
    tmp_541_fu_17813_p4 = tmp_538_fu_17758_p2.read().range(6, 3);
}

void ShuffleNetV2::thread_tmp_542_fu_18202_p2() {
    tmp_542_fu_18202_p2 = (!co86_cast_fu_18156_p1.read().is_01() || !ap_const_lv7_30.is_01())? sc_lv<7>(): (sc_biguint<7>(co86_cast_fu_18156_p1.read()) + sc_biguint<7>(ap_const_lv7_30));
}

void ShuffleNetV2::thread_tmp_543_cast_fu_18091_p1() {
    tmp_543_cast_fu_18091_p1 = esl_zext<10,4>(h_64_fu_18085_p2.read());
}

void ShuffleNetV2::thread_tmp_544_fu_18411_p2() {
    tmp_544_fu_18411_p2 = (!p_shl72_cast_fu_18395_p1.read().is_01() || !p_shl73_cast_fu_18407_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl72_cast_fu_18395_p1.read()) - sc_biguint<7>(p_shl73_cast_fu_18407_p1.read()));
}

void ShuffleNetV2::thread_tmp_545_cast1_fu_18250_p1() {
    tmp_545_cast1_fu_18250_p1 = esl_zext<11,4>(h_66_fu_18244_p2.read());
}

void ShuffleNetV2::thread_tmp_545_cast_fu_18254_p1() {
    tmp_545_cast_fu_18254_p1 = esl_zext<10,4>(h_66_fu_18244_p2.read());
}

void ShuffleNetV2::thread_tmp_546_cast_fu_18142_p1() {
    tmp_546_cast_fu_18142_p1 = esl_zext<15,4>(w_68_fu_18136_p2.read());
}

void ShuffleNetV2::thread_tmp_547_cast_fu_15803_p1() {
    tmp_547_cast_fu_15803_p1 = esl_sext<32,7>(tmp_483_reg_36941.read());
}

void ShuffleNetV2::thread_tmp_547_fu_18457_p2() {
    tmp_547_fu_18457_p2 = (!tmp_544_reg_37845.read().is_01() || !ci41_cast_fu_18441_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_544_reg_37845.read()) + sc_biguint<7>(ci41_cast_fu_18441_p1.read()));
}

void ShuffleNetV2::thread_tmp_548_cast_fu_18462_p1() {
    tmp_548_cast_fu_18462_p1 = esl_sext<10,7>(tmp_547_fu_18457_p2.read());
}

void ShuffleNetV2::thread_tmp_549_cast_fu_18466_p1() {
    tmp_549_cast_fu_18466_p1 = esl_zext<17,5>(ci41_reg_5928.read());
}

void ShuffleNetV2::thread_tmp_550_cast1_fu_18340_p1() {
    tmp_550_cast1_fu_18340_p1 = esl_zext<15,4>(w_70_fu_18334_p2.read());
}

void ShuffleNetV2::thread_tmp_550_cast_fu_18344_p1() {
    tmp_550_cast_fu_18344_p1 = esl_zext<14,4>(w_70_fu_18334_p2.read());
}

void ShuffleNetV2::thread_tmp_551_fu_18751_p2() {
    tmp_551_fu_18751_p2 = (!p_shl74_cast_fu_18735_p1.read().is_01() || !p_shl75_cast_fu_18747_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl74_cast_fu_18735_p1.read()) - sc_biguint<7>(p_shl75_cast_fu_18747_p1.read()));
}

void ShuffleNetV2::thread_tmp_552_fu_18761_p2() {
    tmp_552_fu_18761_p2 = (!i80_cast_reg_37952.read().is_01() || !tmp_551_fu_18751_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(i80_cast_reg_37952.read()) + sc_biguint<7>(tmp_551_fu_18751_p2.read()));
}

void ShuffleNetV2::thread_tmp_553_fu_18802_p1() {
    tmp_553_fu_18802_p1 = esl_zext<64,32>(tmp_627_cast_fu_18799_p1.read());
}

void ShuffleNetV2::thread_tmp_554_fu_18772_p2() {
    tmp_554_fu_18772_p2 = (!tmp24_fu_18766_p2.read().is_01() || !i80_cast480_cast_reg_37947.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp24_fu_18766_p2.read()) + sc_biguint<9>(i80_cast480_cast_reg_37947.read()));
}

void ShuffleNetV2::thread_tmp_555_cast1_fu_18780_p1() {
    tmp_555_cast1_fu_18780_p1 = esl_zext<33,10>(tmp_630_cast_fu_18777_p1.read());
}

void ShuffleNetV2::thread_tmp_555_cast_fu_16234_p1() {
    tmp_555_cast_fu_16234_p1 = esl_sext<10,8>(tmp_494_fu_16228_p2.read());
}

void ShuffleNetV2::thread_tmp_556_fu_18510_p2() {
    tmp_556_fu_18510_p2 = (!p_shl76_cast_fu_18494_p1.read().is_01() || !p_shl77_cast_fu_18506_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl76_cast_fu_18494_p1.read()) - sc_biguint<7>(p_shl77_cast_fu_18506_p1.read()));
}

void ShuffleNetV2::thread_tmp_557_fu_18520_p2() {
    tmp_557_fu_18520_p2 = (!tmp_556_fu_18510_p2.read().is_01() || !tmp_623_cast_reg_37850.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_556_fu_18510_p2.read()) + sc_biguint<7>(tmp_623_cast_reg_37850.read()));
}

void ShuffleNetV2::thread_tmp_558_fu_18549_p2() {
    tmp_558_fu_18549_p2 = (!p_shl78_cast_fu_18533_p1.read().is_01() || !p_shl79_cast_fu_18545_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl78_cast_fu_18533_p1.read()) - sc_biguint<8>(p_shl79_cast_fu_18545_p1.read()));
}

void ShuffleNetV2::thread_tmp_559_fu_18565_p2() {
    tmp_559_fu_18565_p2 = (!tmp23_fu_18559_p2.read().is_01() || !co88_cast489_cast_reg_37832.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp23_fu_18559_p2.read()) + sc_biguint<9>(co88_cast489_cast_reg_37832.read()));
}

void ShuffleNetV2::thread_tmp_560_fu_18575_p4() {
    tmp_560_fu_18575_p4 = tmp_557_fu_18520_p2.read().range(6, 3);
}

void ShuffleNetV2::thread_tmp_561_cast1_fu_18839_p1() {
    tmp_561_cast1_fu_18839_p1 = esl_zext<12,2>(w71_reg_5983.read());
}

void ShuffleNetV2::thread_tmp_561_cast_fu_18843_p1() {
    tmp_561_cast_fu_18843_p1 = esl_zext<36,2>(w71_reg_5983.read());
}

void ShuffleNetV2::thread_tmp_561_fu_9180_p1() {
    tmp_561_fu_9180_p1 = esl_sext<64,32>(bias_V_read_reg_34241.read());
}

void ShuffleNetV2::thread_tmp_562_fu_19220_p2() {
    tmp_562_fu_19220_p2 = (!p_shl82_cast_fu_19204_p1.read().is_01() || !p_shl83_cast_fu_19216_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl82_cast_fu_19204_p1.read()) - sc_biguint<7>(p_shl83_cast_fu_19216_p1.read()));
}

void ShuffleNetV2::thread_tmp_563_fu_19120_p2() {
    tmp_563_fu_19120_p2 = (!p_shl80_cast_fu_19104_p1.read().is_01() || !p_shl81_cast_fu_19116_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl80_cast_fu_19104_p1.read()) - sc_biguint<7>(p_shl81_cast_fu_19116_p1.read()));
}

void ShuffleNetV2::thread_tmp_564_fu_19130_p2() {
    tmp_564_fu_19130_p2 = (!i83_cast_reg_38095.read().is_01() || !tmp_563_fu_19120_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(i83_cast_reg_38095.read()) + sc_biguint<7>(tmp_563_fu_19120_p2.read()));
}

void ShuffleNetV2::thread_tmp_565_cast_fu_16864_p1() {
    tmp_565_cast_fu_16864_p1 = esl_zext<7,4>(p_lshr_f5_cast_fu_16854_p4.read());
}

void ShuffleNetV2::thread_tmp_565_fu_19171_p1() {
    tmp_565_fu_19171_p1 = esl_zext<64,32>(tmp_644_cast_fu_19168_p1.read());
}

void ShuffleNetV2::thread_tmp_566_fu_19141_p2() {
    tmp_566_fu_19141_p2 = (!tmp26_fu_19135_p2.read().is_01() || !i83_cast470_cast_reg_38090.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp26_fu_19135_p2.read()) + sc_biguint<8>(i83_cast470_cast_reg_38090.read()));
}

void ShuffleNetV2::thread_tmp_567_cast_fu_19149_p1() {
    tmp_567_cast_fu_19149_p1 = esl_zext<33,10>(tmp_647_cast_fu_19146_p1.read());
}

void ShuffleNetV2::thread_tmp_567_fu_9196_p1() {
    tmp_567_fu_9196_p1 = esl_sext<64,32>(shuffle_conv_3x3_V_r_reg_34262.read());
}

void ShuffleNetV2::thread_tmp_568_cast1_fu_18863_p1() {
    tmp_568_cast1_fu_18863_p1 = esl_zext<10,2>(h67_reg_5994.read());
}

void ShuffleNetV2::thread_tmp_568_cast_fu_17186_p1() {
    tmp_568_cast_fu_17186_p1 = esl_sext<10,7>(tmp_506_fu_17180_p2.read());
}

void ShuffleNetV2::thread_tmp_568_fu_18859_p1() {
    tmp_568_fu_18859_p1 = esl_zext<64,2>(h67_reg_5994.read());
}

void ShuffleNetV2::thread_tmp_569_cast_fu_17224_p1() {
    tmp_569_cast_fu_17224_p1 = esl_sext<32,7>(tmp_507_reg_37418.read());
}

void ShuffleNetV2::thread_tmp_569_fu_19266_p2() {
    tmp_569_fu_19266_p2 = (!tmp_562_reg_38145.read().is_01() || !ci43_cast_fu_19250_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_562_reg_38145.read()) + sc_biguint<7>(ci43_cast_fu_19250_p1.read()));
}

void ShuffleNetV2::thread_tmp_570_cast_fu_19271_p1() {
    tmp_570_cast_fu_19271_p1 = esl_sext<10,7>(tmp_569_fu_19266_p2.read());
}

void ShuffleNetV2::thread_tmp_570_fu_9199_p1() {
    tmp_570_fu_9199_p1 = esl_sext<64,32>(image_V_read_reg_34272.read());
}

void ShuffleNetV2::thread_tmp_571_cast_fu_19275_p1() {
    tmp_571_cast_fu_19275_p1 = esl_zext<18,5>(ci43_reg_6049.read());
}

void ShuffleNetV2::thread_tmp_571_fu_9295_p3() {
    tmp_571_fu_9295_p3 = esl_concat<2,5>(ci_reg_4332.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_572_fu_18907_p2() {
    tmp_572_fu_18907_p2 = (!p_shl86_cast_fu_18891_p1.read().is_01() || !p_shl87_cast_fu_18903_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl86_cast_fu_18891_p1.read()) - sc_biguint<7>(p_shl87_cast_fu_18903_p1.read()));
}

void ShuffleNetV2::thread_tmp_573_fu_18917_p2() {
    tmp_573_fu_18917_p2 = (!tmp_572_fu_18907_p2.read().is_01() || !co91_cast1_reg_37994.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_572_fu_18907_p2.read()) + sc_biguint<7>(co91_cast1_reg_37994.read()));
}

void ShuffleNetV2::thread_tmp_574_cast_fu_18936_p1() {
    tmp_574_cast_fu_18936_p1 = esl_zext<35,32>(tmp_663_cast_fu_18933_p1.read());
}

void ShuffleNetV2::thread_tmp_574_fu_9307_p3() {
    tmp_574_fu_9307_p3 = esl_concat<2,1>(ci_reg_4332.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_575_fu_18928_p2() {
    tmp_575_fu_18928_p2 = (!co91_cast_reg_37989.read().is_01() || !tmp25_fu_18922_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(co91_cast_reg_37989.read()) + sc_biguint<9>(tmp25_fu_18922_p2.read()));
}

void ShuffleNetV2::thread_tmp_576_cast_fu_18978_p1() {
    tmp_576_cast_fu_18978_p1 = esl_zext<12,9>(tmp_575_reg_38057.read());
}

void ShuffleNetV2::thread_tmp_576_fu_9319_p2() {
    tmp_576_fu_9319_p2 = (!p_shl276_cast_fu_9315_p1.read().is_01() || !tmp_751_cast_fu_9303_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl276_cast_fu_9315_p1.read()) + sc_biguint<8>(tmp_751_cast_fu_9303_p1.read()));
}

void ShuffleNetV2::thread_tmp_577_fu_19552_p2() {
    tmp_577_fu_19552_p2 = (!p_shl84_cast_fu_19536_p1.read().is_01() || !p_shl85_cast_fu_19548_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl84_cast_fu_19536_p1.read()) - sc_biguint<7>(p_shl85_cast_fu_19548_p1.read()));
}

void ShuffleNetV2::thread_tmp_578_fu_19558_p2() {
    tmp_578_fu_19558_p2 = (!i86_cast1_reg_38252.read().is_01() || !tmp_577_fu_19552_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(i86_cast1_reg_38252.read()) + sc_biguint<7>(tmp_577_fu_19552_p2.read()));
}

void ShuffleNetV2::thread_tmp_579_fu_19603_p1() {
    tmp_579_fu_19603_p1 = esl_zext<64,32>(tmp_654_cast_fu_19600_p1.read());
}

void ShuffleNetV2::thread_tmp_580_fu_19577_p2() {
    tmp_580_fu_19577_p2 = (!tmp28_cast_fu_19573_p1.read().is_01() || !i86_cast_reg_38247.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp28_cast_fu_19573_p1.read()) + sc_biguint<11>(i86_cast_reg_38247.read()));
}

void ShuffleNetV2::thread_tmp_581_cast1_fu_19582_p1() {
    tmp_581_cast1_fu_19582_p1 = esl_zext<33,11>(tmp_580_reg_38278.read());
}

void ShuffleNetV2::thread_tmp_581_cast_fu_16992_p1() {
    tmp_581_cast_fu_16992_p1 = esl_sext<10,8>(tmp_513_fu_16986_p2.read());
}

void ShuffleNetV2::thread_tmp_581_fu_9439_p3() {
    tmp_581_fu_9439_p3 = esl_concat<5,5>(co_reg_4365.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_582_fu_19319_p2() {
    tmp_582_fu_19319_p2 = (!p_shl88_cast_fu_19303_p1.read().is_01() || !p_shl89_cast_fu_19315_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl88_cast_fu_19303_p1.read()) - sc_biguint<7>(p_shl89_cast_fu_19315_p1.read()));
}

void ShuffleNetV2::thread_tmp_583_fu_19329_p2() {
    tmp_583_fu_19329_p2 = (!tmp_582_fu_19319_p2.read().is_01() || !tmp_651_cast_reg_38150.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_582_fu_19319_p2.read()) + sc_biguint<7>(tmp_651_cast_reg_38150.read()));
}

void ShuffleNetV2::thread_tmp_584_fu_19358_p2() {
    tmp_584_fu_19358_p2 = (!p_shl90_cast_fu_19342_p1.read().is_01() || !p_shl91_cast_fu_19354_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl90_cast_fu_19342_p1.read()) - sc_biguint<8>(p_shl91_cast_fu_19354_p1.read()));
}

void ShuffleNetV2::thread_tmp_585_cast_cast_fu_17555_p1() {
    tmp_585_cast_cast_fu_17555_p1 = esl_sext<9,7>(tmp_518_fu_17549_p2.read());
}

void ShuffleNetV2::thread_tmp_585_fu_19374_p2() {
    tmp_585_fu_19374_p2 = (!tmp27_fu_19368_p2.read().is_01() || !co93_cast_reg_38132.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp27_fu_19368_p2.read()) + sc_biguint<11>(co93_cast_reg_38132.read()));
}

void ShuffleNetV2::thread_tmp_586_cast_fu_17597_p1() {
    tmp_586_cast_fu_17597_p1 = esl_sext<32,7>(tmp_519_reg_37561.read());
}

void ShuffleNetV2::thread_tmp_586_fu_19384_p4() {
    tmp_586_fu_19384_p4 = tmp_583_fu_19329_p2.read().range(6, 3);
}

void ShuffleNetV2::thread_tmp_587_fu_19773_p2() {
    tmp_587_fu_19773_p2 = (!co96_cast_fu_19727_p1.read().is_01() || !ap_const_lv7_30.is_01())? sc_lv<7>(): (sc_biguint<7>(co96_cast_fu_19727_p1.read()) + sc_biguint<7>(ap_const_lv7_30));
}

void ShuffleNetV2::thread_tmp_588_cast_fu_19662_p1() {
    tmp_588_cast_fu_19662_p1 = esl_zext<10,4>(h_70_fu_19656_p2.read());
}

void ShuffleNetV2::thread_tmp_588_fu_9451_p3() {
    tmp_588_fu_9451_p3 = esl_concat<5,3>(co_reg_4365.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_589_cast_fu_17575_p1() {
    tmp_589_cast_fu_17575_p1 = esl_sext<10,9>(tmp_521_reg_37566.read());
}

void ShuffleNetV2::thread_tmp_589_fu_19982_p2() {
    tmp_589_fu_19982_p2 = (!p_shl92_cast_fu_19966_p1.read().is_01() || !p_shl93_cast_fu_19978_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl92_cast_fu_19966_p1.read()) - sc_biguint<7>(p_shl93_cast_fu_19978_p1.read()));
}

void ShuffleNetV2::thread_tmp_590_cast1_fu_19821_p1() {
    tmp_590_cast1_fu_19821_p1 = esl_zext<10,4>(h_72_fu_19815_p2.read());
}

void ShuffleNetV2::thread_tmp_590_cast_fu_19825_p1() {
    tmp_590_cast_fu_19825_p1 = esl_zext<11,4>(h_72_fu_19815_p2.read());
}

void ShuffleNetV2::thread_tmp_590_fu_9463_p2() {
    tmp_590_fu_9463_p2 = (!p_shl281_cast_fu_9447_p1.read().is_01() || !p_shl282_cast_fu_9459_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl281_cast_fu_9447_p1.read()) - sc_biguint<11>(p_shl282_cast_fu_9459_p1.read()));
}

void ShuffleNetV2::thread_tmp_591_cast_fu_19713_p1() {
    tmp_591_cast_fu_19713_p1 = esl_zext<15,4>(w_74_fu_19707_p2.read());
}

void ShuffleNetV2::thread_tmp_591_fu_9517_p3() {
    tmp_591_fu_9517_p3 = esl_concat<2,5>(newIndex_fu_9507_p4.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_592_fu_20028_p2() {
    tmp_592_fu_20028_p2 = (!tmp_589_reg_38400.read().is_01() || !ci45_cast_fu_20012_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_589_reg_38400.read()) + sc_biguint<7>(ci45_cast_fu_20012_p1.read()));
}

void ShuffleNetV2::thread_tmp_593_cast1_fu_20033_p1() {
    tmp_593_cast1_fu_20033_p1 = esl_sext<10,7>(tmp_592_fu_20028_p2.read());
}

void ShuffleNetV2::thread_tmp_593_cast_fu_17665_p1() {
    tmp_593_cast_fu_17665_p1 = esl_zext<7,4>(p_lshr_f6_cast_fu_17655_p4.read());
}

void ShuffleNetV2::thread_tmp_593_fu_9529_p3() {
    tmp_593_fu_9529_p3 = esl_concat<2,3>(newIndex_fu_9507_p4.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_594_cast_fu_20037_p1() {
    tmp_594_cast_fu_20037_p1 = esl_zext<18,5>(ci45_reg_6170.read());
}

void ShuffleNetV2::thread_tmp_594_fu_9541_p2() {
    tmp_594_fu_9541_p2 = (!p_shl279_cast_fu_9525_p1.read().is_01() || !p_shl280_cast_fu_9537_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl279_cast_fu_9525_p1.read()) - sc_biguint<8>(p_shl280_cast_fu_9537_p1.read()));
}

void ShuffleNetV2::thread_tmp_595_cast1_fu_19911_p1() {
    tmp_595_cast1_fu_19911_p1 = esl_zext<14,4>(w_76_fu_19905_p2.read());
}

void ShuffleNetV2::thread_tmp_595_cast_cast_fu_17987_p1() {
    tmp_595_cast_cast_fu_17987_p1 = esl_sext<9,7>(tmp_532_fu_17981_p2.read());
}

void ShuffleNetV2::thread_tmp_595_cast_fu_19915_p1() {
    tmp_595_cast_fu_19915_p1 = esl_zext<15,4>(w_76_fu_19905_p2.read());
}

void ShuffleNetV2::thread_tmp_595_fu_9341_p2() {
    tmp_595_fu_9341_p2 = (!tmp_289_cast_fu_9337_p1.read().is_01() || !tmp_576_reg_34465.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_289_cast_fu_9337_p1.read()) + sc_biguint<8>(tmp_576_reg_34465.read()));
}

void ShuffleNetV2::thread_tmp_596_cast_fu_18029_p1() {
    tmp_596_cast_fu_18029_p1 = esl_sext<32,7>(tmp_533_reg_37718.read());
}

void ShuffleNetV2::thread_tmp_596_fu_20314_p2() {
    tmp_596_fu_20314_p2 = (!p_shl94_cast_fu_20298_p1.read().is_01() || !p_shl95_cast_fu_20310_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl94_cast_fu_20298_p1.read()) - sc_biguint<7>(p_shl95_cast_fu_20310_p1.read()));
}

void ShuffleNetV2::thread_tmp_597_fu_20324_p2() {
    tmp_597_fu_20324_p2 = (!i92_cast1_reg_38507.read().is_01() || !tmp_596_fu_20314_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(i92_cast1_reg_38507.read()) + sc_biguint<7>(tmp_596_fu_20314_p2.read()));
}

void ShuffleNetV2::thread_tmp_598_fu_20361_p1() {
    tmp_598_fu_20361_p1 = esl_zext<64,32>(tmp_685_cast_fu_20358_p1.read());
}

void ShuffleNetV2::thread_tmp_599_cast_fu_18007_p1() {
    tmp_599_cast_fu_18007_p1 = esl_sext<10,9>(tmp_535_reg_37723.read());
}

void ShuffleNetV2::thread_tmp_599_fu_20335_p2() {
    tmp_599_fu_20335_p2 = (!tmp30_fu_20329_p2.read().is_01() || !i92_cast_reg_38502.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp30_fu_20329_p2.read()) + sc_biguint<11>(i92_cast_reg_38502.read()));
}

void ShuffleNetV2::thread_tmp_600_cast_fu_20340_p1() {
    tmp_600_cast_fu_20340_p1 = esl_zext<33,11>(tmp_599_reg_38533.read());
}

void ShuffleNetV2::thread_tmp_600_fu_9396_p2() {
    tmp_600_fu_9396_p2 = (!p_shl277_cast_fu_9378_p3.read().is_01() || !p_shl278_cast_fu_9392_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl277_cast_fu_9378_p3.read()) + sc_biguint<13>(p_shl278_cast_fu_9392_p1.read()));
}

void ShuffleNetV2::thread_tmp_601_fu_20081_p2() {
    tmp_601_fu_20081_p2 = (!p_shl96_cast_fu_20065_p1.read().is_01() || !p_shl97_cast_fu_20077_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl96_cast_fu_20065_p1.read()) - sc_biguint<7>(p_shl97_cast_fu_20077_p1.read()));
}

void ShuffleNetV2::thread_tmp_602_fu_20091_p2() {
    tmp_602_fu_20091_p2 = (!tmp_601_fu_20081_p2.read().is_01() || !tmp_681_cast_reg_38405.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_601_fu_20081_p2.read()) + sc_biguint<7>(tmp_681_cast_reg_38405.read()));
}

void ShuffleNetV2::thread_tmp_603_fu_20120_p2() {
    tmp_603_fu_20120_p2 = (!p_shl98_cast_fu_20104_p1.read().is_01() || !p_shl99_cast_fu_20116_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl98_cast_fu_20104_p1.read()) - sc_biguint<8>(p_shl99_cast_fu_20116_p1.read()));
}

void ShuffleNetV2::thread_tmp_604_cast_fu_17338_p1() {
    tmp_604_cast_fu_17338_p1 = esl_sext<9,7>(tmp_527_fu_17332_p2.read());
}

void ShuffleNetV2::thread_tmp_604_fu_20136_p2() {
    tmp_604_fu_20136_p2 = (!tmp29_fu_20130_p2.read().is_01() || !co98_cast_reg_38387.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp29_fu_20130_p2.read()) + sc_biguint<11>(co98_cast_reg_38387.read()));
}

void ShuffleNetV2::thread_tmp_605_cast_fu_17358_p1() {
    tmp_605_cast_fu_17358_p1 = esl_sext<32,7>(tmp_528_reg_37496.read());
}

void ShuffleNetV2::thread_tmp_605_fu_20146_p4() {
    tmp_605_fu_20146_p4 = tmp_602_fu_20091_p2.read().range(6, 3);
}

void ShuffleNetV2::thread_tmp_606_cast1_fu_20398_p1() {
    tmp_606_cast1_fu_20398_p1 = esl_zext<12,2>(w77_reg_6225.read());
}

void ShuffleNetV2::thread_tmp_606_cast_fu_20402_p1() {
    tmp_606_cast_fu_20402_p1 = esl_zext<36,2>(w77_reg_6225.read());
}

void ShuffleNetV2::thread_tmp_606_fu_9350_p2() {
    tmp_606_fu_9350_p2 = (!tmp_290_cast_fu_9346_p1.read().is_01() || !tmp_751_cast_reg_34460.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_290_cast_fu_9346_p1.read()) + sc_biguint<8>(tmp_751_cast_reg_34460.read()));
}

void ShuffleNetV2::thread_tmp_607_fu_20775_p2() {
    tmp_607_fu_20775_p2 = (!p_shl102_cast_fu_20759_p1.read().is_01() || !p_shl103_cast_fu_20771_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl102_cast_fu_20759_p1.read()) - sc_biguint<7>(p_shl103_cast_fu_20771_p1.read()));
}

void ShuffleNetV2::thread_tmp_608_fu_20679_p2() {
    tmp_608_fu_20679_p2 = (!p_shl100_cast_fu_20663_p1.read().is_01() || !p_shl101_cast_fu_20675_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl100_cast_fu_20663_p1.read()) - sc_biguint<7>(p_shl101_cast_fu_20675_p1.read()));
}

void ShuffleNetV2::thread_tmp_609_fu_20689_p2() {
    tmp_609_fu_20689_p2 = (!i95_cast1_reg_38650.read().is_01() || !tmp_608_fu_20679_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(i95_cast1_reg_38650.read()) + sc_biguint<7>(tmp_608_fu_20679_p2.read()));
}

void ShuffleNetV2::thread_tmp_610_fu_20726_p1() {
    tmp_610_fu_20726_p1 = esl_zext<64,32>(tmp_702_cast_fu_20723_p1.read());
}

void ShuffleNetV2::thread_tmp_611_fu_20700_p2() {
    tmp_611_fu_20700_p2 = (!tmp32_fu_20694_p2.read().is_01() || !i95_cast_reg_38645.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp32_fu_20694_p2.read()) + sc_biguint<11>(i95_cast_reg_38645.read()));
}

void ShuffleNetV2::thread_tmp_612_cast_fu_20705_p1() {
    tmp_612_cast_fu_20705_p1 = esl_zext<33,11>(tmp_611_reg_38676.read());
}

void ShuffleNetV2::thread_tmp_612_fu_9363_p1() {
    tmp_612_fu_9363_p1 = esl_zext<64,13>(tmp_711_fu_9355_p3.read());
}

void ShuffleNetV2::thread_tmp_613_cast1_fu_20422_p1() {
    tmp_613_cast1_fu_20422_p1 = esl_zext<10,2>(h73_reg_6236.read());
}

void ShuffleNetV2::thread_tmp_613_cast_fu_17793_p1() {
    tmp_613_cast_fu_17793_p1 = esl_sext<10,8>(tmp_539_fu_17787_p2.read());
}

void ShuffleNetV2::thread_tmp_613_fu_20418_p1() {
    tmp_613_fu_20418_p1 = esl_zext<64,2>(h73_reg_6236.read());
}

void ShuffleNetV2::thread_tmp_614_fu_20821_p2() {
    tmp_614_fu_20821_p2 = (!tmp_607_reg_38700.read().is_01() || !ci47_cast_fu_20805_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_607_reg_38700.read()) + sc_biguint<7>(ci47_cast_fu_20805_p1.read()));
}

void ShuffleNetV2::thread_tmp_615_cast_fu_20826_p1() {
    tmp_615_cast_fu_20826_p1 = esl_sext<10,7>(tmp_614_fu_20821_p2.read());
}

void ShuffleNetV2::thread_tmp_615_fu_9563_p2() {
    tmp_615_fu_9563_p2 = (!tmp_594_reg_34537.read().is_01() || !tmp_294_cast_fu_9559_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_594_reg_34537.read()) + sc_biguint<8>(tmp_294_cast_fu_9559_p1.read()));
}

void ShuffleNetV2::thread_tmp_616_cast_fu_20830_p1() {
    tmp_616_cast_fu_20830_p1 = esl_zext<18,5>(ci47_reg_6291.read());
}

void ShuffleNetV2::thread_tmp_616_fu_9418_p2() {
    tmp_616_fu_9418_p2 = (!tmp_600_reg_34490.read().is_01() || !tmp_295_cast_fu_9414_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_600_reg_34490.read()) + sc_biguint<13>(tmp_295_cast_fu_9414_p1.read()));
}

void ShuffleNetV2::thread_tmp_617_fu_20466_p2() {
    tmp_617_fu_20466_p2 = (!p_shl106_cast_fu_20450_p1.read().is_01() || !p_shl107_cast_fu_20462_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl106_cast_fu_20450_p1.read()) - sc_biguint<7>(p_shl107_cast_fu_20462_p1.read()));
}

void ShuffleNetV2::thread_tmp_618_fu_20476_p2() {
    tmp_618_fu_20476_p2 = (!tmp_617_fu_20466_p2.read().is_01() || !co101_cast1_reg_38549.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_617_fu_20466_p2.read()) + sc_biguint<7>(co101_cast1_reg_38549.read()));
}

void ShuffleNetV2::thread_tmp_619_cast_fu_20495_p1() {
    tmp_619_cast_fu_20495_p1 = esl_zext<35,32>(tmp_721_cast_fu_20492_p1.read());
}

void ShuffleNetV2::thread_tmp_619_fu_9613_p3() {
    tmp_619_fu_9613_p3 = esl_concat<5,2>(co5_reg_4400.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_620_fu_20487_p2() {
    tmp_620_fu_20487_p2 = (!co101_cast_reg_38544.read().is_01() || !tmp31_fu_20481_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(co101_cast_reg_38544.read()) + sc_biguint<9>(tmp31_fu_20481_p2.read()));
}

void ShuffleNetV2::thread_tmp_621_cast_fu_20537_p1() {
    tmp_621_cast_fu_20537_p1 = esl_zext<12,9>(tmp_620_reg_38612.read());
}

void ShuffleNetV2::thread_tmp_621_fu_9625_p2() {
    tmp_621_fu_9625_p2 = (!p_shl283_cast_fu_9621_p1.read().is_01() || !tmp_297_cast_fu_9609_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl283_cast_fu_9621_p1.read()) - sc_biguint<8>(tmp_297_cast_fu_9609_p1.read()));
}

void ShuffleNetV2::thread_tmp_622_fu_21107_p2() {
    tmp_622_fu_21107_p2 = (!p_shl104_cast_fu_21091_p1.read().is_01() || !p_shl105_cast_fu_21103_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl104_cast_fu_21091_p1.read()) - sc_biguint<7>(p_shl105_cast_fu_21103_p1.read()));
}

void ShuffleNetV2::thread_tmp_623_cast_fu_18427_p1() {
    tmp_623_cast_fu_18427_p1 = esl_zext<7,4>(p_lshr_f7_cast_fu_18417_p4.read());
}

void ShuffleNetV2::thread_tmp_623_fu_21117_p2() {
    tmp_623_fu_21117_p2 = (!i98_cast1_reg_38807.read().is_01() || !tmp_622_fu_21107_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(i98_cast1_reg_38807.read()) + sc_biguint<7>(tmp_622_fu_21107_p2.read()));
}

void ShuffleNetV2::thread_tmp_624_fu_21154_p1() {
    tmp_624_fu_21154_p1 = esl_zext<64,32>(tmp_712_cast_fu_21151_p1.read());
}

void ShuffleNetV2::thread_tmp_625_fu_21128_p2() {
    tmp_625_fu_21128_p2 = (!tmp34_fu_21122_p2.read().is_01() || !i98_cast_reg_38802.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp34_fu_21122_p2.read()) + sc_biguint<11>(i98_cast_reg_38802.read()));
}

void ShuffleNetV2::thread_tmp_626_cast_cast_fu_18757_p1() {
    tmp_626_cast_cast_fu_18757_p1 = esl_sext<9,7>(tmp_551_fu_18751_p2.read());
}

void ShuffleNetV2::thread_tmp_626_cast_fu_21133_p1() {
    tmp_626_cast_fu_21133_p1 = esl_zext<33,11>(tmp_625_reg_38833.read());
}

void ShuffleNetV2::thread_tmp_626_fu_9666_p2() {
    tmp_626_fu_9666_p2 = (!tmp_882_cast_reg_34606.read().is_01() || !tmp_301_cast_fu_9662_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_882_cast_reg_34606.read()) + sc_biguint<9>(tmp_301_cast_fu_9662_p1.read()));
}

void ShuffleNetV2::thread_tmp_627_cast_fu_18799_p1() {
    tmp_627_cast_fu_18799_p1 = esl_sext<32,7>(tmp_552_reg_37973.read());
}

void ShuffleNetV2::thread_tmp_627_fu_20874_p2() {
    tmp_627_fu_20874_p2 = (!p_shl108_cast_fu_20858_p1.read().is_01() || !p_shl109_cast_fu_20870_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl108_cast_fu_20858_p1.read()) - sc_biguint<7>(p_shl109_cast_fu_20870_p1.read()));
}

void ShuffleNetV2::thread_tmp_628_fu_20884_p2() {
    tmp_628_fu_20884_p2 = (!tmp_627_fu_20874_p2.read().is_01() || !tmp_709_cast_reg_38705.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_627_fu_20874_p2.read()) + sc_biguint<7>(tmp_709_cast_reg_38705.read()));
}

void ShuffleNetV2::thread_tmp_629_fu_20913_p2() {
    tmp_629_fu_20913_p2 = (!p_shl110_cast_fu_20897_p1.read().is_01() || !p_shl111_cast_fu_20909_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl110_cast_fu_20897_p1.read()) - sc_biguint<8>(p_shl111_cast_fu_20909_p1.read()));
}

void ShuffleNetV2::thread_tmp_630_cast_fu_18777_p1() {
    tmp_630_cast_fu_18777_p1 = esl_sext<10,9>(tmp_554_reg_37978.read());
}

void ShuffleNetV2::thread_tmp_630_fu_20929_p2() {
    tmp_630_fu_20929_p2 = (!tmp33_fu_20923_p2.read().is_01() || !co103_cast_reg_38687.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp33_fu_20923_p2.read()) + sc_biguint<11>(co103_cast_reg_38687.read()));
}

void ShuffleNetV2::thread_tmp_631_fu_20939_p4() {
    tmp_631_fu_20939_p4 = tmp_628_fu_20884_p2.read().range(6, 3);
}

void ShuffleNetV2::thread_tmp_632_fu_21324_p2() {
    tmp_632_fu_21324_p2 = (!co106_cast_fu_21278_p1.read().is_01() || !ap_const_lv7_30.is_01())? sc_lv<7>(): (sc_biguint<7>(co106_cast_fu_21278_p1.read()) + sc_biguint<7>(ap_const_lv7_30));
}

void ShuffleNetV2::thread_tmp_633_cast_fu_21213_p1() {
    tmp_633_cast_fu_21213_p1 = esl_zext<10,4>(h_76_fu_21207_p2.read());
}

void ShuffleNetV2::thread_tmp_633_fu_9687_p2() {
    tmp_633_fu_9687_p2 = (!p_shl193_fu_9683_p1.read().is_01() || !tmp_883_cast1_fu_9671_p1.read().is_01())? sc_lv<64>(): (sc_bigint<64>(p_shl193_fu_9683_p1.read()) - sc_bigint<64>(tmp_883_cast1_fu_9671_p1.read()));
}

void ShuffleNetV2::thread_tmp_634_fu_21533_p2() {
    tmp_634_fu_21533_p2 = (!p_shl112_cast_fu_21517_p1.read().is_01() || !p_shl113_cast_fu_21529_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl112_cast_fu_21517_p1.read()) - sc_biguint<7>(p_shl113_cast_fu_21529_p1.read()));
}

void ShuffleNetV2::thread_tmp_635_cast1_fu_21372_p1() {
    tmp_635_cast1_fu_21372_p1 = esl_zext<11,4>(h_78_fu_21366_p2.read());
}

void ShuffleNetV2::thread_tmp_635_cast_fu_21376_p1() {
    tmp_635_cast_fu_21376_p1 = esl_zext<10,4>(h_78_fu_21366_p2.read());
}

void ShuffleNetV2::thread_tmp_635_fu_9764_p3() {
    tmp_635_fu_9764_p3 = esl_concat<6,5>(tmp_302_fu_9758_p2.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_636_cast_fu_21264_p1() {
    tmp_636_cast_fu_21264_p1 = esl_zext<15,4>(w_80_fu_21258_p2.read());
}

void ShuffleNetV2::thread_tmp_636_fu_9776_p3() {
    tmp_636_fu_9776_p3 = esl_concat<6,3>(tmp_302_fu_9758_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_637_fu_21579_p2() {
    tmp_637_fu_21579_p2 = (!tmp_634_reg_38955.read().is_01() || !ci49_cast_fu_21563_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_634_reg_38955.read()) + sc_biguint<7>(ci49_cast_fu_21563_p1.read()));
}

void ShuffleNetV2::thread_tmp_638_cast_fu_21584_p1() {
    tmp_638_cast_fu_21584_p1 = esl_sext<10,7>(tmp_637_fu_21579_p2.read());
}

void ShuffleNetV2::thread_tmp_638_fu_9788_p2() {
    tmp_638_fu_9788_p2 = (!p_shl287_cast_fu_9772_p1.read().is_01() || !p_shl288_cast_fu_9784_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(p_shl287_cast_fu_9772_p1.read()) - sc_biguint<12>(p_shl288_cast_fu_9784_p1.read()));
}

void ShuffleNetV2::thread_tmp_639_cast_cast_fu_18555_p1() {
    tmp_639_cast_cast_fu_18555_p1 = esl_sext<9,8>(tmp_558_fu_18549_p2.read());
}

void ShuffleNetV2::thread_tmp_639_cast_fu_21588_p1() {
    tmp_639_cast_fu_21588_p1 = esl_zext<18,5>(ci49_reg_6412.read());
}

void ShuffleNetV2::thread_tmp_639_fu_9842_p3() {
    tmp_639_fu_9842_p3 = esl_concat<2,5>(newIndex4_fu_9832_p4.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_640_cast1_fu_21462_p1() {
    tmp_640_cast1_fu_21462_p1 = esl_zext<15,4>(w_82_fu_21456_p2.read());
}

void ShuffleNetV2::thread_tmp_640_cast_fu_21466_p1() {
    tmp_640_cast_fu_21466_p1 = esl_zext<14,4>(w_82_fu_21456_p2.read());
}

void ShuffleNetV2::thread_tmp_640_fu_9854_p3() {
    tmp_640_fu_9854_p3 = esl_concat<2,3>(newIndex4_fu_9832_p4.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_641_fu_21865_p2() {
    tmp_641_fu_21865_p2 = (!p_shl114_cast_fu_21849_p1.read().is_01() || !p_shl115_cast_fu_21861_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl114_cast_fu_21849_p1.read()) - sc_biguint<7>(p_shl115_cast_fu_21861_p1.read()));
}

void ShuffleNetV2::thread_tmp_642_fu_21875_p2() {
    tmp_642_fu_21875_p2 = (!i104_cast1_reg_39062.read().is_01() || !tmp_641_fu_21865_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(i104_cast1_reg_39062.read()) + sc_biguint<7>(tmp_641_fu_21865_p2.read()));
}

void ShuffleNetV2::thread_tmp_643_cast_cast_fu_19126_p1() {
    tmp_643_cast_cast_fu_19126_p1 = esl_sext<8,7>(tmp_563_fu_19120_p2.read());
}

void ShuffleNetV2::thread_tmp_643_fu_21912_p1() {
    tmp_643_fu_21912_p1 = esl_zext<64,32>(tmp_743_cast_fu_21909_p1.read());
}

void ShuffleNetV2::thread_tmp_644_cast_fu_19168_p1() {
    tmp_644_cast_fu_19168_p1 = esl_sext<32,7>(tmp_564_reg_38116.read());
}

void ShuffleNetV2::thread_tmp_644_fu_21886_p2() {
    tmp_644_fu_21886_p2 = (!tmp36_fu_21880_p2.read().is_01() || !i104_cast_reg_39057.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp36_fu_21880_p2.read()) + sc_biguint<11>(i104_cast_reg_39057.read()));
}

void ShuffleNetV2::thread_tmp_645_cast_fu_21891_p1() {
    tmp_645_cast_fu_21891_p1 = esl_zext<33,11>(tmp_644_reg_39088.read());
}

void ShuffleNetV2::thread_tmp_645_fu_9866_p2() {
    tmp_645_fu_9866_p2 = (!p_shl285_cast_fu_9850_p1.read().is_01() || !p_shl286_cast_fu_9862_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl285_cast_fu_9850_p1.read()) - sc_biguint<8>(p_shl286_cast_fu_9862_p1.read()));
}

void ShuffleNetV2::thread_tmp_646_fu_21632_p2() {
    tmp_646_fu_21632_p2 = (!p_shl116_cast_fu_21616_p1.read().is_01() || !p_shl117_cast_fu_21628_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl116_cast_fu_21616_p1.read()) - sc_biguint<7>(p_shl117_cast_fu_21628_p1.read()));
}

void ShuffleNetV2::thread_tmp_647_cast_fu_19146_p1() {
    tmp_647_cast_fu_19146_p1 = esl_sext<10,8>(tmp_566_reg_38121.read());
}

void ShuffleNetV2::thread_tmp_647_fu_21642_p2() {
    tmp_647_fu_21642_p2 = (!tmp_646_fu_21632_p2.read().is_01() || !tmp_739_cast_reg_38960.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_646_fu_21632_p2.read()) + sc_biguint<7>(tmp_739_cast_reg_38960.read()));
}

void ShuffleNetV2::thread_tmp_648_fu_21671_p2() {
    tmp_648_fu_21671_p2 = (!p_shl118_cast_fu_21655_p1.read().is_01() || !p_shl119_cast_fu_21667_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl118_cast_fu_21655_p1.read()) - sc_biguint<8>(p_shl119_cast_fu_21667_p1.read()));
}

void ShuffleNetV2::thread_tmp_649_fu_21687_p2() {
    tmp_649_fu_21687_p2 = (!tmp35_fu_21681_p2.read().is_01() || !co108_cast_reg_38942.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp35_fu_21681_p2.read()) + sc_biguint<11>(co108_cast_reg_38942.read()));
}

void ShuffleNetV2::thread_tmp_650_fu_21697_p4() {
    tmp_650_fu_21697_p4 = tmp_647_fu_21642_p2.read().range(6, 3);
}

void ShuffleNetV2::thread_tmp_651_cast1_fu_21949_p1() {
    tmp_651_cast1_fu_21949_p1 = esl_zext<12,2>(w83_reg_6467.read());
}

void ShuffleNetV2::thread_tmp_651_cast2_fu_21953_p1() {
    tmp_651_cast2_fu_21953_p1 = esl_zext<36,2>(w83_reg_6467.read());
}

void ShuffleNetV2::thread_tmp_651_cast_fu_19236_p1() {
    tmp_651_cast_fu_19236_p1 = esl_zext<7,4>(p_lshr_f8_cast_fu_19226_p4.read());
}

void ShuffleNetV2::thread_tmp_651_fu_9720_p2() {
    tmp_651_fu_9720_p2 = (!tmp_303_fu_9716_p1.read().is_01() || !tmp_633_reg_34625.read().is_01())? sc_lv<64>(): (sc_biguint<64>(tmp_303_fu_9716_p1.read()) + sc_biguint<64>(tmp_633_reg_34625.read()));
}

void ShuffleNetV2::thread_tmp_652_fu_22334_p2() {
    tmp_652_fu_22334_p2 = (!p_shl122_cast_fu_22318_p1.read().is_01() || !p_shl123_cast_fu_22330_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl122_cast_fu_22318_p1.read()) - sc_biguint<7>(p_shl123_cast_fu_22330_p1.read()));
}

void ShuffleNetV2::thread_tmp_653_fu_22238_p2() {
    tmp_653_fu_22238_p2 = (!p_shl120_cast_fu_22222_p1.read().is_01() || !p_shl121_cast_fu_22234_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl120_cast_fu_22222_p1.read()) - sc_biguint<7>(p_shl121_cast_fu_22234_p1.read()));
}

void ShuffleNetV2::thread_tmp_654_cast_fu_19600_p1() {
    tmp_654_cast_fu_19600_p1 = esl_sext<32,7>(tmp_578_reg_38273.read());
}

void ShuffleNetV2::thread_tmp_654_fu_22248_p2() {
    tmp_654_fu_22248_p2 = (!i107_cast1_reg_39205.read().is_01() || !tmp_653_fu_22238_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(i107_cast1_reg_39205.read()) + sc_biguint<7>(tmp_653_fu_22238_p2.read()));
}

void ShuffleNetV2::thread_tmp_655_fu_22285_p1() {
    tmp_655_fu_22285_p1 = esl_zext<64,32>(tmp_760_cast_fu_22282_p1.read());
}

void ShuffleNetV2::thread_tmp_656_fu_22259_p2() {
    tmp_656_fu_22259_p2 = (!tmp38_fu_22253_p2.read().is_01() || !i107_cast_reg_39200.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp38_fu_22253_p2.read()) + sc_biguint<11>(i107_cast_reg_39200.read()));
}

void ShuffleNetV2::thread_tmp_657_cast_fu_22264_p1() {
    tmp_657_cast_fu_22264_p1 = esl_zext<33,11>(tmp_656_reg_39231.read());
}

void ShuffleNetV2::thread_tmp_657_fu_9888_p2() {
    tmp_657_fu_9888_p2 = (!tmp_645_reg_34681.read().is_01() || !tmp_307_cast_fu_9884_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_645_reg_34681.read()) + sc_biguint<8>(tmp_307_cast_fu_9884_p1.read()));
}

void ShuffleNetV2::thread_tmp_658_cast_fu_21973_p1() {
    tmp_658_cast_fu_21973_p1 = esl_zext<10,2>(h79_reg_6478.read());
}

void ShuffleNetV2::thread_tmp_658_fu_21969_p1() {
    tmp_658_fu_21969_p1 = esl_zext<64,2>(h79_reg_6478.read());
}

void ShuffleNetV2::thread_tmp_659_fu_22380_p2() {
    tmp_659_fu_22380_p2 = (!tmp_652_reg_39255.read().is_01() || !ci51_cast_fu_22364_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_652_reg_39255.read()) + sc_biguint<7>(ci51_cast_fu_22364_p1.read()));
}

void ShuffleNetV2::thread_tmp_660_cast_fu_22385_p1() {
    tmp_660_cast_fu_22385_p1 = esl_sext<10,7>(tmp_659_fu_22380_p2.read());
}

void ShuffleNetV2::thread_tmp_660_fu_9942_p3() {
    tmp_660_fu_9942_p3 = esl_concat<5,2>(co12_reg_4480.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_661_cast_fu_22389_p1() {
    tmp_661_cast_fu_22389_p1 = esl_zext<18,5>(ci51_reg_6533.read());
}

void ShuffleNetV2::thread_tmp_661_fu_9954_p2() {
    tmp_661_fu_9954_p2 = (!p_shl290_cast_fu_9950_p1.read().is_01() || !tmp_308_cast_fu_9938_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl290_cast_fu_9950_p1.read()) - sc_biguint<8>(tmp_308_cast_fu_9938_p1.read()));
}

void ShuffleNetV2::thread_tmp_662_cast_fu_18913_p1() {
    tmp_662_cast_fu_18913_p1 = esl_sext<9,7>(tmp_572_fu_18907_p2.read());
}

void ShuffleNetV2::thread_tmp_662_fu_22017_p2() {
    tmp_662_fu_22017_p2 = (!p_shl126_cast_fu_22001_p1.read().is_01() || !p_shl127_cast_fu_22013_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl126_cast_fu_22001_p1.read()) - sc_biguint<7>(p_shl127_cast_fu_22013_p1.read()));
}

void ShuffleNetV2::thread_tmp_663_cast_fu_18933_p1() {
    tmp_663_cast_fu_18933_p1 = esl_sext<32,7>(tmp_573_reg_38051.read());
}

void ShuffleNetV2::thread_tmp_663_fu_22027_p2() {
    tmp_663_fu_22027_p2 = (!tmp_662_fu_22017_p2.read().is_01() || !co111_cast_reg_39104.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_662_fu_22017_p2.read()) + sc_biguint<7>(co111_cast_reg_39104.read()));
}

void ShuffleNetV2::thread_tmp_664_cast_fu_22046_p1() {
    tmp_664_cast_fu_22046_p1 = esl_zext<35,32>(tmp_779_cast_fu_22043_p1.read());
}

void ShuffleNetV2::thread_tmp_664_fu_9974_p3() {
    tmp_664_fu_9974_p3 = esl_concat<6,2>(tmp_309_fu_9964_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_665_fu_22038_p2() {
    tmp_665_fu_22038_p2 = (!co111_cast400_cast_reg_39099.read().is_01() || !tmp37_fu_22032_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(co111_cast400_cast_reg_39099.read()) + sc_biguint<8>(tmp37_fu_22032_p2.read()));
}

void ShuffleNetV2::thread_tmp_666_cast_fu_22091_p1() {
    tmp_666_cast_fu_22091_p1 = esl_zext<12,9>(tmp_782_cast_fu_22088_p1.read());
}

void ShuffleNetV2::thread_tmp_666_fu_9986_p2() {
    tmp_666_fu_9986_p2 = (!p_shl289_cast_fu_9982_p1.read().is_01() || !tmp_310_cast_fu_9970_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(p_shl289_cast_fu_9982_p1.read()) - sc_biguint<9>(tmp_310_cast_fu_9970_p1.read()));
}

void ShuffleNetV2::thread_tmp_667_fu_22666_p2() {
    tmp_667_fu_22666_p2 = (!p_shl124_cast_fu_22650_p1.read().is_01() || !p_shl125_cast_fu_22662_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl124_cast_fu_22650_p1.read()) - sc_biguint<7>(p_shl125_cast_fu_22662_p1.read()));
}

void ShuffleNetV2::thread_tmp_668_fu_22676_p2() {
    tmp_668_fu_22676_p2 = (!i110_cast1_reg_39362.read().is_01() || !tmp_667_fu_22666_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(i110_cast1_reg_39362.read()) + sc_biguint<7>(tmp_667_fu_22666_p2.read()));
}

void ShuffleNetV2::thread_tmp_669_fu_22713_p1() {
    tmp_669_fu_22713_p1 = esl_zext<64,32>(tmp_770_cast_fu_22710_p1.read());
}

void ShuffleNetV2::thread_tmp_670_fu_22687_p2() {
    tmp_670_fu_22687_p2 = (!tmp40_fu_22681_p2.read().is_01() || !i110_cast_reg_39357.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp40_fu_22681_p2.read()) + sc_biguint<11>(i110_cast_reg_39357.read()));
}

void ShuffleNetV2::thread_tmp_671_cast1_fu_22692_p1() {
    tmp_671_cast1_fu_22692_p1 = esl_zext<33,11>(tmp_670_reg_39388.read());
}

void ShuffleNetV2::thread_tmp_671_cast_fu_19364_p1() {
    tmp_671_cast_fu_19364_p1 = esl_sext<11,8>(tmp_584_fu_19358_p2.read());
}

void ShuffleNetV2::thread_tmp_671_fu_10008_p2() {
    tmp_671_fu_10008_p2 = (!tmp_314_cast_fu_10004_p1.read().is_01() || !tmp_666_reg_34755.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_314_cast_fu_10004_p1.read()) + sc_biguint<9>(tmp_666_reg_34755.read()));
}

void ShuffleNetV2::thread_tmp_672_fu_22433_p2() {
    tmp_672_fu_22433_p2 = (!p_shl128_cast_fu_22417_p1.read().is_01() || !p_shl129_cast_fu_22429_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl128_cast_fu_22417_p1.read()) - sc_biguint<7>(p_shl129_cast_fu_22429_p1.read()));
}

void ShuffleNetV2::thread_tmp_673_fu_22443_p2() {
    tmp_673_fu_22443_p2 = (!tmp_672_fu_22433_p2.read().is_01() || !tmp_767_cast_reg_39260.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_672_fu_22433_p2.read()) + sc_biguint<7>(tmp_767_cast_reg_39260.read()));
}

void ShuffleNetV2::thread_tmp_674_fu_22472_p2() {
    tmp_674_fu_22472_p2 = (!p_shl130_cast_fu_22456_p1.read().is_01() || !p_shl131_cast_fu_22468_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl130_cast_fu_22456_p1.read()) - sc_biguint<8>(p_shl131_cast_fu_22468_p1.read()));
}

void ShuffleNetV2::thread_tmp_675_fu_22488_p2() {
    tmp_675_fu_22488_p2 = (!tmp39_fu_22482_p2.read().is_01() || !co113_cast_reg_39242.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp39_fu_22482_p2.read()) + sc_biguint<11>(co113_cast_reg_39242.read()));
}

void ShuffleNetV2::thread_tmp_676_fu_22498_p4() {
    tmp_676_fu_22498_p4 = tmp_673_fu_22443_p2.read().range(6, 3);
}

void ShuffleNetV2::thread_tmp_677_fu_22883_p2() {
    tmp_677_fu_22883_p2 = (!co116_cast_fu_22837_p1.read().is_01() || !ap_const_lv7_30.is_01())? sc_lv<7>(): (sc_biguint<7>(co116_cast_fu_22837_p1.read()) + sc_biguint<7>(ap_const_lv7_30));
}

void ShuffleNetV2::thread_tmp_678_cast_fu_22772_p1() {
    tmp_678_cast_fu_22772_p1 = esl_zext<10,4>(h_82_fu_22766_p2.read());
}

void ShuffleNetV2::thread_tmp_678_fu_10029_p2() {
    tmp_678_fu_10029_p2 = (!p_shl197_fu_10025_p1.read().is_01() || !tmp_995_cast_fu_10013_p1.read().is_01())? sc_lv<64>(): (sc_bigint<64>(p_shl197_fu_10025_p1.read()) - sc_bigint<64>(tmp_995_cast_fu_10013_p1.read()));
}

void ShuffleNetV2::thread_tmp_679_fu_23092_p2() {
    tmp_679_fu_23092_p2 = (!p_shl132_cast_fu_23076_p1.read().is_01() || !p_shl133_cast_fu_23088_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl132_cast_fu_23076_p1.read()) - sc_biguint<7>(p_shl133_cast_fu_23088_p1.read()));
}

void ShuffleNetV2::thread_tmp_680_cast1_fu_22931_p1() {
    tmp_680_cast1_fu_22931_p1 = esl_zext<10,4>(h_84_fu_22925_p2.read());
}

void ShuffleNetV2::thread_tmp_680_cast_fu_22935_p1() {
    tmp_680_cast_fu_22935_p1 = esl_zext<11,4>(h_84_fu_22925_p2.read());
}

void ShuffleNetV2::thread_tmp_680_fu_9214_p2() {
    tmp_680_fu_9214_p2 = (!tmp_720_cast1_reg_34283.read().is_01() || !ap_const_lv33_C18.is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_720_cast1_reg_34283.read()) + sc_biguint<33>(ap_const_lv33_C18));
}

void ShuffleNetV2::thread_tmp_681_cast1_fu_22823_p1() {
    tmp_681_cast1_fu_22823_p1 = esl_zext<15,4>(w_86_fu_22817_p2.read());
}

void ShuffleNetV2::thread_tmp_681_cast_fu_19998_p1() {
    tmp_681_cast_fu_19998_p1 = esl_zext<7,4>(p_lshr_f9_cast_fu_19988_p4.read());
}

void ShuffleNetV2::thread_tmp_681_fu_9219_p1() {
    tmp_681_fu_9219_p1 = esl_sext<64,33>(tmp_680_fu_9214_p2.read());
}

void ShuffleNetV2::thread_tmp_682_fu_23138_p2() {
    tmp_682_fu_23138_p2 = (!tmp_679_reg_39510.read().is_01() || !ci53_cast_fu_23122_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_679_reg_39510.read()) + sc_biguint<7>(ci53_cast_fu_23122_p1.read()));
}

void ShuffleNetV2::thread_tmp_683_cast_fu_23143_p1() {
    tmp_683_cast_fu_23143_p1 = esl_sext<10,7>(tmp_682_fu_23138_p2.read());
}

void ShuffleNetV2::thread_tmp_683_fu_9246_p2() {
    tmp_683_fu_9246_p2 = (!tmp_720_cast1_reg_34283.read().is_01() || !ap_const_lv33_E18.is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_720_cast1_reg_34283.read()) + sc_biguint<33>(ap_const_lv33_E18));
}

void ShuffleNetV2::thread_tmp_684_cast1_fu_23147_p1() {
    tmp_684_cast1_fu_23147_p1 = esl_zext<18,5>(ci53_reg_6654.read());
}

void ShuffleNetV2::thread_tmp_684_cast_fu_20320_p1() {
    tmp_684_cast_fu_20320_p1 = esl_sext<11,7>(tmp_596_fu_20314_p2.read());
}

void ShuffleNetV2::thread_tmp_684_fu_9251_p1() {
    tmp_684_fu_9251_p1 = esl_sext<64,33>(tmp_683_fu_9246_p2.read());
}

void ShuffleNetV2::thread_tmp_685_cast1_fu_23021_p1() {
    tmp_685_cast1_fu_23021_p1 = esl_zext<14,4>(w_88_fu_23015_p2.read());
}

void ShuffleNetV2::thread_tmp_685_cast2_fu_23025_p1() {
    tmp_685_cast2_fu_23025_p1 = esl_zext<15,4>(w_88_fu_23015_p2.read());
}

void ShuffleNetV2::thread_tmp_685_cast_fu_20358_p1() {
    tmp_685_cast_fu_20358_p1 = esl_sext<32,7>(tmp_597_reg_38528.read());
}

void ShuffleNetV2::thread_tmp_685_fu_9488_p2() {
    tmp_685_fu_9488_p2 = (!tmp_720_cast1_reg_34283.read().is_01() || !ap_const_lv33_18.is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_720_cast1_reg_34283.read()) + sc_biguint<33>(ap_const_lv33_18));
}

void ShuffleNetV2::thread_tmp_686_fu_23424_p2() {
    tmp_686_fu_23424_p2 = (!p_shl134_cast_fu_23408_p1.read().is_01() || !p_shl135_cast_fu_23420_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl134_cast_fu_23408_p1.read()) - sc_biguint<7>(p_shl135_cast_fu_23420_p1.read()));
}

void ShuffleNetV2::thread_tmp_687_fu_23434_p2() {
    tmp_687_fu_23434_p2 = (!i116_cast1_reg_39617.read().is_01() || !tmp_686_fu_23424_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(i116_cast1_reg_39617.read()) + sc_biguint<7>(tmp_686_fu_23424_p2.read()));
}

void ShuffleNetV2::thread_tmp_688_fu_23471_p1() {
    tmp_688_fu_23471_p1 = esl_zext<64,32>(tmp_801_cast_fu_23468_p1.read());
}

void ShuffleNetV2::thread_tmp_689_fu_23445_p2() {
    tmp_689_fu_23445_p2 = (!tmp42_fu_23439_p2.read().is_01() || !i116_cast_reg_39612.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp42_fu_23439_p2.read()) + sc_biguint<11>(i116_cast_reg_39612.read()));
}

void ShuffleNetV2::thread_tmp_690_cast_fu_23450_p1() {
    tmp_690_cast_fu_23450_p1 = esl_zext<33,11>(tmp_689_reg_39643.read());
}

void ShuffleNetV2::thread_tmp_690_fu_9493_p1() {
    tmp_690_fu_9493_p1 = esl_sext<64,33>(tmp_685_fu_9488_p2.read());
}

void ShuffleNetV2::thread_tmp_691_fu_23191_p2() {
    tmp_691_fu_23191_p2 = (!p_shl136_cast_fu_23175_p1.read().is_01() || !p_shl137_cast_fu_23187_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl136_cast_fu_23175_p1.read()) - sc_biguint<7>(p_shl137_cast_fu_23187_p1.read()));
}

void ShuffleNetV2::thread_tmp_692_fu_23201_p2() {
    tmp_692_fu_23201_p2 = (!tmp_691_fu_23191_p2.read().is_01() || !tmp_797_cast_reg_39515.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_691_fu_23191_p2.read()) + sc_biguint<7>(tmp_797_cast_reg_39515.read()));
}

void ShuffleNetV2::thread_tmp_693_fu_23230_p2() {
    tmp_693_fu_23230_p2 = (!p_shl138_cast_fu_23214_p1.read().is_01() || !p_shl139_cast_fu_23226_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl138_cast_fu_23214_p1.read()) - sc_biguint<8>(p_shl139_cast_fu_23226_p1.read()));
}

void ShuffleNetV2::thread_tmp_694_fu_23246_p2() {
    tmp_694_fu_23246_p2 = (!tmp41_fu_23240_p2.read().is_01() || !co118_cast_reg_39497.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp41_fu_23240_p2.read()) + sc_biguint<11>(co118_cast_reg_39497.read()));
}

void ShuffleNetV2::thread_tmp_695_fu_23256_p4() {
    tmp_695_fu_23256_p4 = tmp_692_fu_23201_p2.read().range(6, 3);
}

void ShuffleNetV2::thread_tmp_696_cast1_fu_23508_p1() {
    tmp_696_cast1_fu_23508_p1 = esl_zext<13,2>(w89_reg_6709.read());
}

void ShuffleNetV2::thread_tmp_696_cast_fu_23512_p1() {
    tmp_696_cast_fu_23512_p1 = esl_zext<36,2>(w89_reg_6709.read());
}

void ShuffleNetV2::thread_tmp_696_fu_9503_p1() {
    tmp_696_fu_9503_p1 = co_reg_4365.read().range(3-1, 0);
}

void ShuffleNetV2::thread_tmp_697_cast_fu_20126_p1() {
    tmp_697_cast_fu_20126_p1 = esl_sext<11,8>(tmp_603_fu_20120_p2.read());
}

void ShuffleNetV2::thread_tmp_697_fu_23897_p2() {
    tmp_697_fu_23897_p2 = (!p_shl142_cast_fu_23881_p1.read().is_01() || !p_shl143_cast_fu_23893_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl142_cast_fu_23881_p1.read()) - sc_biguint<7>(p_shl143_cast_fu_23893_p1.read()));
}

void ShuffleNetV2::thread_tmp_698_fu_23801_p2() {
    tmp_698_fu_23801_p2 = (!p_shl140_cast_fu_23785_p1.read().is_01() || !p_shl141_cast_fu_23797_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl140_cast_fu_23785_p1.read()) - sc_biguint<7>(p_shl141_cast_fu_23797_p1.read()));
}

void ShuffleNetV2::thread_tmp_699_fu_23811_p2() {
    tmp_699_fu_23811_p2 = (!i119_cast1_reg_39760.read().is_01() || !tmp_698_fu_23801_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(i119_cast1_reg_39760.read()) + sc_biguint<7>(tmp_698_fu_23801_p2.read()));
}

void ShuffleNetV2::thread_tmp_700_fu_23848_p1() {
    tmp_700_fu_23848_p1 = esl_zext<64,32>(tmp_818_cast_fu_23845_p1.read());
}

void ShuffleNetV2::thread_tmp_701_cast_fu_20685_p1() {
    tmp_701_cast_fu_20685_p1 = esl_sext<11,7>(tmp_608_fu_20679_p2.read());
}

void ShuffleNetV2::thread_tmp_701_fu_23822_p2() {
    tmp_701_fu_23822_p2 = (!tmp44_fu_23816_p2.read().is_01() || !i119_cast_reg_39755.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp44_fu_23816_p2.read()) + sc_biguint<11>(i119_cast_reg_39755.read()));
}

void ShuffleNetV2::thread_tmp_702_cast1_fu_23827_p1() {
    tmp_702_cast1_fu_23827_p1 = esl_zext<33,11>(tmp_701_reg_39786.read());
}

void ShuffleNetV2::thread_tmp_702_cast_fu_20723_p1() {
    tmp_702_cast_fu_20723_p1 = esl_sext<32,7>(tmp_609_reg_38671.read());
}

void ShuffleNetV2::thread_tmp_702_fu_9469_p1() {
    tmp_702_fu_9469_p1 = esl_sext<33,11>(tmp_590_fu_9463_p2.read());
}

void ShuffleNetV2::thread_tmp_703_cast_fu_23532_p1() {
    tmp_703_cast_fu_23532_p1 = esl_zext<10,2>(h85_reg_6720.read());
}

void ShuffleNetV2::thread_tmp_703_fu_23528_p1() {
    tmp_703_fu_23528_p1 = esl_zext<64,2>(h85_reg_6720.read());
}

void ShuffleNetV2::thread_tmp_704_fu_23943_p2() {
    tmp_704_fu_23943_p2 = (!tmp_697_reg_39810.read().is_01() || !ci55_cast_fu_23927_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_697_reg_39810.read()) + sc_biguint<7>(ci55_cast_fu_23927_p1.read()));
}

void ShuffleNetV2::thread_tmp_705_cast_fu_23948_p1() {
    tmp_705_cast_fu_23948_p1 = esl_sext<10,7>(tmp_704_fu_23943_p2.read());
}

void ShuffleNetV2::thread_tmp_705_fu_9473_p2() {
    tmp_705_fu_9473_p2 = (!tmp_721_cast1_reg_34346.read().is_01() || !tmp_702_fu_9469_p1.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_721_cast1_reg_34346.read()) + sc_bigint<33>(tmp_702_fu_9469_p1.read()));
}

void ShuffleNetV2::thread_tmp_706_cast_fu_23952_p1() {
    tmp_706_cast_fu_23952_p1 = esl_zext<18,5>(ci55_reg_6775.read());
}

void ShuffleNetV2::thread_tmp_706_fu_9478_p1() {
    tmp_706_fu_9478_p1 = esl_sext<64,33>(tmp_705_fu_9473_p2.read());
}

void ShuffleNetV2::thread_tmp_707_fu_23576_p2() {
    tmp_707_fu_23576_p2 = (!p_shl146_cast_fu_23560_p1.read().is_01() || !p_shl147_cast_fu_23572_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl146_cast_fu_23560_p1.read()) - sc_biguint<7>(p_shl147_cast_fu_23572_p1.read()));
}

void ShuffleNetV2::thread_tmp_708_fu_23586_p2() {
    tmp_708_fu_23586_p2 = (!tmp_707_fu_23576_p2.read().is_01() || !co121_cast_reg_39659.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_707_fu_23576_p2.read()) + sc_biguint<7>(co121_cast_reg_39659.read()));
}

void ShuffleNetV2::thread_tmp_709_cast1_fu_23605_p1() {
    tmp_709_cast1_fu_23605_p1 = esl_zext<35,32>(tmp_837_cast_fu_23602_p1.read());
}

void ShuffleNetV2::thread_tmp_709_cast_fu_20791_p1() {
    tmp_709_cast_fu_20791_p1 = esl_zext<7,4>(p_lshr_f10_cast_fu_20781_p4.read());
}

void ShuffleNetV2::thread_tmp_709_fu_9385_p3() {
    tmp_709_fu_9385_p3 = esl_concat<8,1>(tmp_595_reg_34478.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_710_fu_23597_p2() {
    tmp_710_fu_23597_p2 = (!co121_cast362_cast_reg_39654.read().is_01() || !tmp43_fu_23591_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(co121_cast362_cast_reg_39654.read()) + sc_biguint<8>(tmp43_fu_23591_p2.read()));
}

void ShuffleNetV2::thread_tmp_711_cast1_fu_23650_p1() {
    tmp_711_cast1_fu_23650_p1 = esl_zext<12,9>(tmp_840_cast_fu_23647_p1.read());
}

void ShuffleNetV2::thread_tmp_711_cast_fu_21113_p1() {
    tmp_711_cast_fu_21113_p1 = esl_sext<11,7>(tmp_622_fu_21107_p2.read());
}

void ShuffleNetV2::thread_tmp_711_fu_9355_p3() {
    tmp_711_fu_9355_p3 = esl_concat<8,5>(tmp_606_fu_9350_p2.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_712_cast_fu_21151_p1() {
    tmp_712_cast_fu_21151_p1 = esl_sext<32,7>(tmp_623_reg_38828.read());
}

void ShuffleNetV2::thread_tmp_712_fu_24229_p2() {
    tmp_712_fu_24229_p2 = (!p_shl144_cast_fu_24213_p1.read().is_01() || !p_shl145_cast_fu_24225_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl144_cast_fu_24213_p1.read()) - sc_biguint<7>(p_shl145_cast_fu_24225_p1.read()));
}

void ShuffleNetV2::thread_tmp_713_fu_24239_p2() {
    tmp_713_fu_24239_p2 = (!i122_cast1_reg_39917.read().is_01() || !tmp_712_fu_24229_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(i122_cast1_reg_39917.read()) + sc_biguint<7>(tmp_712_fu_24229_p2.read()));
}

void ShuffleNetV2::thread_tmp_714_fu_24276_p1() {
    tmp_714_fu_24276_p1 = esl_zext<64,32>(tmp_828_cast_fu_24273_p1.read());
}

void ShuffleNetV2::thread_tmp_715_fu_24250_p2() {
    tmp_715_fu_24250_p2 = (!tmp46_fu_24244_p2.read().is_01() || !i122_cast_reg_39912.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp46_fu_24244_p2.read()) + sc_biguint<11>(i122_cast_reg_39912.read()));
}

void ShuffleNetV2::thread_tmp_716_cast_fu_24255_p1() {
    tmp_716_cast_fu_24255_p1 = esl_zext<33,11>(tmp_715_reg_39943.read());
}

void ShuffleNetV2::thread_tmp_716_fu_9367_p2() {
    tmp_716_fu_9367_p2 = (!tmp_570_reg_34411.read().is_01() || !tmp_612_fu_9363_p1.read().is_01())? sc_lv<64>(): (sc_bigint<64>(tmp_570_reg_34411.read()) + sc_biguint<64>(tmp_612_fu_9363_p1.read()));
}

void ShuffleNetV2::thread_tmp_717_fu_23996_p2() {
    tmp_717_fu_23996_p2 = (!p_shl148_cast_fu_23980_p1.read().is_01() || !p_shl149_cast_fu_23992_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl148_cast_fu_23980_p1.read()) - sc_biguint<7>(p_shl149_cast_fu_23992_p1.read()));
}

void ShuffleNetV2::thread_tmp_718_fu_24006_p2() {
    tmp_718_fu_24006_p2 = (!tmp_717_fu_23996_p2.read().is_01() || !tmp_825_cast_reg_39815.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_717_fu_23996_p2.read()) + sc_biguint<7>(tmp_825_cast_reg_39815.read()));
}

void ShuffleNetV2::thread_tmp_719_fu_24035_p2() {
    tmp_719_fu_24035_p2 = (!p_shl150_cast_fu_24019_p1.read().is_01() || !p_shl151_cast_fu_24031_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl150_cast_fu_24019_p1.read()) - sc_biguint<8>(p_shl151_cast_fu_24031_p1.read()));
}

void ShuffleNetV2::thread_tmp_720_cast1_fu_9190_p1() {
    tmp_720_cast1_fu_9190_p1 = esl_sext<33,32>(bias_V_read_reg_34241.read());
}

void ShuffleNetV2::thread_tmp_720_cast_fu_20472_p1() {
    tmp_720_cast_fu_20472_p1 = esl_sext<9,7>(tmp_617_fu_20466_p2.read());
}

void ShuffleNetV2::thread_tmp_720_fu_9635_p2() {
    tmp_720_fu_9635_p2 = (!tmp_720_cast1_reg_34283.read().is_01() || !ap_const_lv33_30.is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_720_cast1_reg_34283.read()) + sc_biguint<33>(ap_const_lv33_30));
}

void ShuffleNetV2::thread_tmp_721_cast1_fu_9193_p1() {
    tmp_721_cast1_fu_9193_p1 = esl_sext<33,32>(shuffle_conv_1x1_V_r_reg_34257.read());
}

void ShuffleNetV2::thread_tmp_721_cast_fu_20492_p1() {
    tmp_721_cast_fu_20492_p1 = esl_sext<32,7>(tmp_618_reg_38606.read());
}

void ShuffleNetV2::thread_tmp_721_fu_9640_p1() {
    tmp_721_fu_9640_p1 = esl_sext<64,33>(tmp_720_fu_9635_p2.read());
}

void ShuffleNetV2::thread_tmp_722_fu_24051_p2() {
    tmp_722_fu_24051_p2 = (!tmp45_fu_24045_p2.read().is_01() || !co123_cast_reg_39797.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp45_fu_24045_p2.read()) + sc_biguint<11>(co123_cast_reg_39797.read()));
}

void ShuffleNetV2::thread_tmp_723_fu_9675_p3() {
    tmp_723_fu_9675_p3 = esl_concat<9,2>(tmp_626_fu_9666_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_724_fu_24061_p4() {
    tmp_724_fu_24061_p4 = tmp_718_fu_24006_p2.read().range(6, 3);
}

void ShuffleNetV2::thread_tmp_725_fu_24446_p2() {
    tmp_725_fu_24446_p2 = (!co126_cast_fu_24400_p1.read().is_01() || !ap_const_lv7_30.is_01())? sc_lv<7>(): (sc_biguint<7>(co126_cast_fu_24400_p1.read()) + sc_biguint<7>(ap_const_lv7_30));
}

void ShuffleNetV2::thread_tmp_726_cast_fu_24335_p1() {
    tmp_726_cast_fu_24335_p1 = esl_zext<10,4>(h_88_fu_24329_p2.read());
}

void ShuffleNetV2::thread_tmp_726_fu_9693_p2() {
    tmp_726_fu_9693_p2 = (!tmp_633_fu_9687_p2.read().is_01() || !tmp_567_reg_34387.read().is_01())? sc_lv<64>(): (sc_biguint<64>(tmp_633_fu_9687_p2.read()) + sc_bigint<64>(tmp_567_reg_34387.read()));
}

void ShuffleNetV2::thread_tmp_727_fu_24655_p2() {
    tmp_727_fu_24655_p2 = (!p_shl152_cast_fu_24639_p1.read().is_01() || !p_shl153_cast_fu_24651_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl152_cast_fu_24639_p1.read()) - sc_biguint<7>(p_shl153_cast_fu_24651_p1.read()));
}

void ShuffleNetV2::thread_tmp_728_cast1_fu_24494_p1() {
    tmp_728_cast1_fu_24494_p1 = esl_zext<11,4>(h_90_fu_24488_p2.read());
}

void ShuffleNetV2::thread_tmp_728_cast_fu_24498_p1() {
    tmp_728_cast_fu_24498_p1 = esl_zext<10,4>(h_90_fu_24488_p2.read());
}

void ShuffleNetV2::thread_tmp_728_fu_9813_p2() {
    tmp_728_fu_9813_p2 = (!tmp_720_cast1_reg_34283.read().is_01() || !ap_const_lv33_48.is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_720_cast1_reg_34283.read()) + sc_biguint<33>(ap_const_lv33_48));
}

void ShuffleNetV2::thread_tmp_729_cast1_fu_24386_p1() {
    tmp_729_cast1_fu_24386_p1 = esl_zext<15,4>(w_92_fu_24380_p2.read());
}

void ShuffleNetV2::thread_tmp_729_cast_fu_20919_p1() {
    tmp_729_cast_fu_20919_p1 = esl_sext<11,8>(tmp_629_fu_20913_p2.read());
}

void ShuffleNetV2::thread_tmp_729_fu_9818_p1() {
    tmp_729_fu_9818_p1 = esl_sext<64,33>(tmp_728_fu_9813_p2.read());
}

void ShuffleNetV2::thread_tmp_730_fu_24701_p2() {
    tmp_730_fu_24701_p2 = (!tmp_727_reg_40065.read().is_01() || !ci57_cast_fu_24685_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_727_reg_40065.read()) + sc_biguint<7>(ci57_cast_fu_24685_p1.read()));
}

void ShuffleNetV2::thread_tmp_731_cast_fu_24706_p1() {
    tmp_731_cast_fu_24706_p1 = esl_sext<10,7>(tmp_730_fu_24701_p2.read());
}

void ShuffleNetV2::thread_tmp_731_fu_9828_p1() {
    tmp_731_fu_9828_p1 = co9_reg_4445.read().range(3-1, 0);
}

void ShuffleNetV2::thread_tmp_732_cast_fu_24710_p1() {
    tmp_732_cast_fu_24710_p1 = esl_zext<18,5>(ci57_reg_6896.read());
}

void ShuffleNetV2::thread_tmp_732_fu_9794_p1() {
    tmp_732_fu_9794_p1 = esl_sext<33,12>(tmp_638_fu_9788_p2.read());
}

void ShuffleNetV2::thread_tmp_733_cast1_fu_24584_p1() {
    tmp_733_cast1_fu_24584_p1 = esl_zext<15,4>(w_94_fu_24578_p2.read());
}

void ShuffleNetV2::thread_tmp_733_cast_fu_24588_p1() {
    tmp_733_cast_fu_24588_p1 = esl_zext<14,4>(w_94_fu_24578_p2.read());
}

void ShuffleNetV2::thread_tmp_733_fu_9798_p2() {
    tmp_733_fu_9798_p2 = (!tmp_721_cast1_reg_34346.read().is_01() || !tmp_732_fu_9794_p1.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_721_cast1_reg_34346.read()) + sc_bigint<33>(tmp_732_fu_9794_p1.read()));
}

void ShuffleNetV2::thread_tmp_734_fu_24995_p2() {
    tmp_734_fu_24995_p2 = (!p_shl154_cast_fu_24979_p1.read().is_01() || !p_shl155_cast_fu_24991_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl154_cast_fu_24979_p1.read()) - sc_biguint<7>(p_shl155_cast_fu_24991_p1.read()));
}

void ShuffleNetV2::thread_tmp_735_fu_25005_p2() {
    tmp_735_fu_25005_p2 = (!i128_cast1_reg_40172.read().is_01() || !tmp_734_fu_24995_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(i128_cast1_reg_40172.read()) + sc_biguint<7>(tmp_734_fu_24995_p2.read()));
}

void ShuffleNetV2::thread_tmp_736_fu_25042_p1() {
    tmp_736_fu_25042_p1 = esl_zext<64,32>(tmp_859_cast_fu_25039_p1.read());
}

void ShuffleNetV2::thread_tmp_737_fu_25016_p2() {
    tmp_737_fu_25016_p2 = (!tmp48_fu_25010_p2.read().is_01() || !i128_cast_reg_40167.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp48_fu_25010_p2.read()) + sc_biguint<11>(i128_cast_reg_40167.read()));
}

void ShuffleNetV2::thread_tmp_738_cast_fu_25021_p1() {
    tmp_738_cast_fu_25021_p1 = esl_zext<33,11>(tmp_737_reg_40198.read());
}

void ShuffleNetV2::thread_tmp_738_fu_9803_p1() {
    tmp_738_fu_9803_p1 = esl_sext<64,33>(tmp_733_fu_9798_p2.read());
}

void ShuffleNetV2::thread_tmp_739_cast_fu_21549_p1() {
    tmp_739_cast_fu_21549_p1 = esl_zext<7,4>(p_lshr_f11_cast_fu_21539_p4.read());
}

void ShuffleNetV2::thread_tmp_739_fu_24754_p2() {
    tmp_739_fu_24754_p2 = (!p_shl156_cast_fu_24738_p1.read().is_01() || !p_shl157_cast_fu_24750_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl156_cast_fu_24738_p1.read()) - sc_biguint<7>(p_shl157_cast_fu_24750_p1.read()));
}

void ShuffleNetV2::thread_tmp_741_fu_24764_p2() {
    tmp_741_fu_24764_p2 = (!tmp_739_fu_24754_p2.read().is_01() || !tmp_855_cast_reg_40070.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_739_fu_24754_p2.read()) + sc_biguint<7>(tmp_855_cast_reg_40070.read()));
}

void ShuffleNetV2::thread_tmp_742_cast_fu_21871_p1() {
    tmp_742_cast_fu_21871_p1 = esl_sext<11,7>(tmp_641_fu_21865_p2.read());
}

void ShuffleNetV2::thread_tmp_742_fu_24793_p2() {
    tmp_742_fu_24793_p2 = (!p_shl158_cast_fu_24777_p1.read().is_01() || !p_shl159_cast_fu_24789_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl158_cast_fu_24777_p1.read()) - sc_biguint<8>(p_shl159_cast_fu_24789_p1.read()));
}

void ShuffleNetV2::thread_tmp_743_cast_fu_21909_p1() {
    tmp_743_cast_fu_21909_p1 = esl_sext<32,7>(tmp_642_reg_39083.read());
}

void ShuffleNetV2::thread_tmp_743_fu_24809_p2() {
    tmp_743_fu_24809_p2 = (!tmp47_fu_24803_p2.read().is_01() || !co128_cast337_cast_reg_40052.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp47_fu_24803_p2.read()) + sc_biguint<10>(co128_cast337_cast_reg_40052.read()));
}

void ShuffleNetV2::thread_tmp_744_fu_24819_p4() {
    tmp_744_fu_24819_p4 = tmp_741_fu_24764_p2.read().range(6, 3);
}

void ShuffleNetV2::thread_tmp_745_cast1_fu_25079_p1() {
    tmp_745_cast1_fu_25079_p1 = esl_zext<14,2>(w95_reg_6951.read());
}

void ShuffleNetV2::thread_tmp_745_cast_fu_25083_p1() {
    tmp_745_cast_fu_25083_p1 = esl_zext<36,2>(w95_reg_6951.read());
}

void ShuffleNetV2::thread_tmp_745_fu_10098_p3() {
    tmp_745_fu_10098_p3 = esl_concat<1,5>(ap_const_lv1_1, tmp_740_reg_4513.read());
}

void ShuffleNetV2::thread_tmp_746_fu_25460_p2() {
    tmp_746_fu_25460_p2 = (!p_shl162_cast_fu_25444_p1.read().is_01() || !p_shl163_cast_fu_25456_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl162_cast_fu_25444_p1.read()) - sc_biguint<7>(p_shl163_cast_fu_25456_p1.read()));
}

void ShuffleNetV2::thread_tmp_747_fu_25364_p2() {
    tmp_747_fu_25364_p2 = (!p_shl160_cast_fu_25348_p1.read().is_01() || !p_shl161_cast_fu_25360_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl160_cast_fu_25348_p1.read()) - sc_biguint<7>(p_shl161_cast_fu_25360_p1.read()));
}

void ShuffleNetV2::thread_tmp_748_fu_25374_p2() {
    tmp_748_fu_25374_p2 = (!i131_cast1_reg_40315.read().is_01() || !tmp_747_fu_25364_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(i131_cast1_reg_40315.read()) + sc_biguint<7>(tmp_747_fu_25364_p2.read()));
}

void ShuffleNetV2::thread_tmp_749_fu_25411_p1() {
    tmp_749_fu_25411_p1 = esl_zext<64,32>(tmp_876_cast_fu_25408_p1.read());
}

void ShuffleNetV2::thread_tmp_750_fu_10106_p1() {
    tmp_750_fu_10106_p1 = esl_sext<7,6>(tmp_745_fu_10098_p3.read());
}

void ShuffleNetV2::thread_tmp_751_cast_fu_9303_p1() {
    tmp_751_cast_fu_9303_p1 = esl_zext<8,7>(tmp_571_fu_9295_p3.read());
}

void ShuffleNetV2::thread_tmp_751_fu_10110_p1() {
    tmp_751_fu_10110_p1 = esl_zext<33,7>(tmp_750_fu_10106_p1.read());
}

void ShuffleNetV2::thread_tmp_752_fu_25385_p2() {
    tmp_752_fu_25385_p2 = (!tmp50_fu_25379_p2.read().is_01() || !i131_cast_reg_40310.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp50_fu_25379_p2.read()) + sc_biguint<11>(i131_cast_reg_40310.read()));
}

void ShuffleNetV2::thread_tmp_753_fu_10114_p2() {
    tmp_753_fu_10114_p2 = (!tmp_751_fu_10110_p1.read().is_01() || !tmp_720_cast1_reg_34283.read().is_01())? sc_lv<33>(): (sc_biguint<33>(tmp_751_fu_10110_p1.read()) + sc_bigint<33>(tmp_720_cast1_reg_34283.read()));
}

void ShuffleNetV2::thread_tmp_754_fu_10119_p1() {
    tmp_754_fu_10119_p1 = esl_sext<64,33>(tmp_753_fu_10114_p2.read());
}

void ShuffleNetV2::thread_tmp_755_cast1_fu_25390_p1() {
    tmp_755_cast1_fu_25390_p1 = esl_zext<33,11>(tmp_752_reg_40341.read());
}

void ShuffleNetV2::thread_tmp_755_cast_fu_21677_p1() {
    tmp_755_cast_fu_21677_p1 = esl_sext<11,8>(tmp_648_fu_21671_p2.read());
}

void ShuffleNetV2::thread_tmp_755_fu_10017_p3() {
    tmp_755_fu_10017_p3 = esl_concat<9,2>(tmp_671_fu_10008_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_756_fu_10035_p2() {
    tmp_756_fu_10035_p2 = (!tmp_314_cast_fu_10004_p1.read().is_01() || !tmp_982_cast1_reg_34750.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_314_cast_fu_10004_p1.read()) + sc_bigint<9>(tmp_982_cast1_reg_34750.read()));
}

void ShuffleNetV2::thread_tmp_757_cast_fu_25103_p1() {
    tmp_757_cast_fu_25103_p1 = esl_zext<10,2>(h91_reg_6962.read());
}

void ShuffleNetV2::thread_tmp_757_fu_25099_p1() {
    tmp_757_fu_25099_p1 = esl_zext<64,2>(h91_reg_6962.read());
}

void ShuffleNetV2::thread_tmp_758_fu_25506_p2() {
    tmp_758_fu_25506_p2 = (!tmp_746_reg_40365.read().is_01() || !ci59_cast_fu_25490_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_746_reg_40365.read()) + sc_biguint<7>(ci59_cast_fu_25490_p1.read()));
}

void ShuffleNetV2::thread_tmp_759_cast1_fu_25511_p1() {
    tmp_759_cast1_fu_25511_p1 = esl_sext<10,7>(tmp_758_fu_25506_p2.read());
}

void ShuffleNetV2::thread_tmp_759_cast_fu_22244_p1() {
    tmp_759_cast_fu_22244_p1 = esl_sext<11,7>(tmp_653_fu_22238_p2.read());
}

void ShuffleNetV2::thread_tmp_759_fu_10051_p2() {
    tmp_759_fu_10051_p2 = (!ap_const_lv9_2.is_01())? sc_lv<9>(): tmp_756_reg_34768.read() << (unsigned short)ap_const_lv9_2.to_uint();
}

void ShuffleNetV2::thread_tmp_760_cast1_fu_25515_p1() {
    tmp_760_cast1_fu_25515_p1 = esl_zext<18,5>(ci59_reg_7017.read());
}

void ShuffleNetV2::thread_tmp_760_cast_fu_22282_p1() {
    tmp_760_cast_fu_22282_p1 = esl_sext<32,7>(tmp_654_reg_39226.read());
}

void ShuffleNetV2::thread_tmp_760_fu_10056_p2() {
    tmp_760_fu_10056_p2 = (!tmp_759_fu_10051_p2.read().is_01() || !tmp_756_reg_34768.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_759_fu_10051_p2.read()) - sc_biguint<9>(tmp_756_reg_34768.read()));
}

void ShuffleNetV2::thread_tmp_761_fu_25147_p2() {
    tmp_761_fu_25147_p2 = (!p_shl166_cast_fu_25131_p1.read().is_01() || !p_shl167_cast_fu_25143_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl166_cast_fu_25131_p1.read()) - sc_biguint<7>(p_shl167_cast_fu_25143_p1.read()));
}

void ShuffleNetV2::thread_tmp_762_fu_25157_p2() {
    tmp_762_fu_25157_p2 = (!tmp_761_fu_25147_p2.read().is_01() || !co131_cast1_reg_40214.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_761_fu_25147_p2.read()) + sc_biguint<7>(co131_cast1_reg_40214.read()));
}

void ShuffleNetV2::thread_tmp_763_cast_fu_25176_p1() {
    tmp_763_cast_fu_25176_p1 = esl_zext<35,32>(tmp_895_cast_fu_25173_p1.read());
}

void ShuffleNetV2::thread_tmp_763_fu_10040_p2() {
    tmp_763_fu_10040_p2 = (!tmp_567_reg_34387.read().is_01() || !tmp_678_fu_10029_p2.read().is_01())? sc_lv<64>(): (sc_bigint<64>(tmp_567_reg_34387.read()) + sc_biguint<64>(tmp_678_fu_10029_p2.read()));
}

void ShuffleNetV2::thread_tmp_764_fu_25168_p2() {
    tmp_764_fu_25168_p2 = (!co131_cast_reg_40209.read().is_01() || !tmp49_fu_25162_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(co131_cast_reg_40209.read()) + sc_biguint<10>(tmp49_fu_25162_p2.read()));
}

void ShuffleNetV2::thread_tmp_765_cast_fu_25218_p1() {
    tmp_765_cast_fu_25218_p1 = esl_zext<13,10>(tmp_764_reg_40277.read());
}

void ShuffleNetV2::thread_tmp_765_fu_10205_p2() {
    tmp_765_fu_10205_p2 = (!tmp_720_cast1_reg_34283.read().is_01() || !ap_const_lv33_78.is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_720_cast1_reg_34283.read()) + sc_biguint<33>(ap_const_lv33_78));
}

void ShuffleNetV2::thread_tmp_766_fu_25800_p2() {
    tmp_766_fu_25800_p2 = (!p_shl164_cast_fu_25784_p1.read().is_01() || !p_shl165_cast_fu_25796_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl164_cast_fu_25784_p1.read()) - sc_biguint<7>(p_shl165_cast_fu_25796_p1.read()));
}

void ShuffleNetV2::thread_tmp_767_cast_fu_22350_p1() {
    tmp_767_cast_fu_22350_p1 = esl_zext<7,4>(p_lshr_f12_cast_fu_22340_p4.read());
}

void ShuffleNetV2::thread_tmp_767_fu_25810_p2() {
    tmp_767_fu_25810_p2 = (!i134_cast_reg_40472.read().is_01() || !tmp_766_fu_25800_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(i134_cast_reg_40472.read()) + sc_biguint<7>(tmp_766_fu_25800_p2.read()));
}

void ShuffleNetV2::thread_tmp_768_fu_25851_p1() {
    tmp_768_fu_25851_p1 = esl_zext<64,32>(tmp_886_cast_fu_25848_p1.read());
}

void ShuffleNetV2::thread_tmp_769_cast_fu_22672_p1() {
    tmp_769_cast_fu_22672_p1 = esl_sext<11,7>(tmp_667_fu_22666_p2.read());
}

void ShuffleNetV2::thread_tmp_769_fu_25821_p2() {
    tmp_769_fu_25821_p2 = (!tmp52_fu_25815_p2.read().is_01() || !i134_cast305_cast_reg_40467.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp52_fu_25815_p2.read()) + sc_biguint<10>(i134_cast305_cast_reg_40467.read()));
}

void ShuffleNetV2::thread_tmp_770_cast1_fu_25829_p1() {
    tmp_770_cast1_fu_25829_p1 = esl_zext<33,11>(tmp_889_cast_fu_25826_p1.read());
}

void ShuffleNetV2::thread_tmp_770_cast_fu_22710_p1() {
    tmp_770_cast_fu_22710_p1 = esl_sext<32,7>(tmp_668_reg_39383.read());
}

void ShuffleNetV2::thread_tmp_770_fu_10210_p1() {
    tmp_770_fu_10210_p1 = esl_sext<64,33>(tmp_765_fu_10205_p2.read());
}

void ShuffleNetV2::thread_tmp_771_fu_25559_p2() {
    tmp_771_fu_25559_p2 = (!p_shl168_cast_fu_25543_p1.read().is_01() || !p_shl169_cast_fu_25555_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl168_cast_fu_25543_p1.read()) - sc_biguint<7>(p_shl169_cast_fu_25555_p1.read()));
}

void ShuffleNetV2::thread_tmp_772_fu_25569_p2() {
    tmp_772_fu_25569_p2 = (!tmp_771_fu_25559_p2.read().is_01() || !tmp_883_cast_reg_40370.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_771_fu_25559_p2.read()) + sc_biguint<7>(tmp_883_cast_reg_40370.read()));
}

void ShuffleNetV2::thread_tmp_773_fu_25598_p2() {
    tmp_773_fu_25598_p2 = (!p_shl170_cast_fu_25582_p1.read().is_01() || !p_shl171_cast_fu_25594_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl170_cast_fu_25582_p1.read()) - sc_biguint<8>(p_shl171_cast_fu_25594_p1.read()));
}

void ShuffleNetV2::thread_tmp_774_fu_10156_p3() {
    tmp_774_fu_10156_p3 = esl_concat<7,5>(tmp_315_fu_10150_p2.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_775_fu_10168_p3() {
    tmp_775_fu_10168_p3 = esl_concat<7,3>(tmp_315_fu_10150_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_776_fu_25614_p2() {
    tmp_776_fu_25614_p2 = (!tmp51_fu_25608_p2.read().is_01() || !co133_cast314_cast_reg_40352.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp51_fu_25608_p2.read()) + sc_biguint<10>(co133_cast314_cast_reg_40352.read()));
}

void ShuffleNetV2::thread_tmp_777_fu_10180_p2() {
    tmp_777_fu_10180_p2 = (!p_shl295_cast_fu_10164_p1.read().is_01() || !p_shl296_cast_fu_10176_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl295_cast_fu_10164_p1.read()) - sc_biguint<13>(p_shl296_cast_fu_10176_p1.read()));
}

void ShuffleNetV2::thread_tmp_778_cast_cast_fu_22023_p1() {
    tmp_778_cast_cast_fu_22023_p1 = esl_sext<8,7>(tmp_662_fu_22017_p2.read());
}

void ShuffleNetV2::thread_tmp_778_fu_25624_p4() {
    tmp_778_fu_25624_p4 = tmp_772_fu_25569_p2.read().range(6, 3);
}

void ShuffleNetV2::thread_tmp_779_cast_fu_22043_p1() {
    tmp_779_cast_fu_22043_p1 = esl_sext<32,7>(tmp_663_reg_39161.read());
}

void ShuffleNetV2::thread_tmp_779_fu_26021_p2() {
    tmp_779_fu_26021_p2 = (!co136_cast_fu_25975_p1.read().is_01() || !ap_const_lv7_30.is_01())? sc_lv<7>(): (sc_biguint<7>(co136_cast_fu_25975_p1.read()) + sc_biguint<7>(ap_const_lv7_30));
}

void ShuffleNetV2::thread_tmp_780_cast_fu_25910_p1() {
    tmp_780_cast_fu_25910_p1 = esl_zext<10,4>(h_94_fu_25904_p2.read());
}

void ShuffleNetV2::thread_tmp_780_fu_10220_p1() {
    tmp_780_fu_10220_p1 = co16_reg_4525.read().range(3-1, 0);
}

void ShuffleNetV2::thread_tmp_781_fu_26230_p2() {
    tmp_781_fu_26230_p2 = (!p_shl172_cast_fu_26214_p1.read().is_01() || !p_shl173_cast_fu_26226_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl172_cast_fu_26214_p1.read()) - sc_biguint<7>(p_shl173_cast_fu_26226_p1.read()));
}

void ShuffleNetV2::thread_tmp_782_cast1_fu_26069_p1() {
    tmp_782_cast1_fu_26069_p1 = esl_zext<11,4>(h_96_fu_26063_p2.read());
}

void ShuffleNetV2::thread_tmp_782_cast2_fu_26073_p1() {
    tmp_782_cast2_fu_26073_p1 = esl_zext<10,4>(h_96_fu_26063_p2.read());
}

void ShuffleNetV2::thread_tmp_782_cast_fu_22088_p1() {
    tmp_782_cast_fu_22088_p1 = esl_sext<9,8>(tmp_665_reg_39167.read());
}

void ShuffleNetV2::thread_tmp_782_fu_10234_p3() {
    tmp_782_fu_10234_p3 = esl_concat<2,5>(newIndex5_fu_10224_p4.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_783_cast_fu_25961_p1() {
    tmp_783_cast_fu_25961_p1 = esl_zext<15,4>(w_98_fu_25955_p2.read());
}

void ShuffleNetV2::thread_tmp_783_fu_10246_p3() {
    tmp_783_fu_10246_p3 = esl_concat<2,3>(newIndex5_fu_10224_p4.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_784_fu_26276_p2() {
    tmp_784_fu_26276_p2 = (!tmp_781_reg_40620.read().is_01() || !ci61_cast_fu_26260_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_781_reg_40620.read()) + sc_biguint<7>(ci61_cast_fu_26260_p1.read()));
}

void ShuffleNetV2::thread_tmp_785_cast_fu_26281_p1() {
    tmp_785_cast_fu_26281_p1 = esl_sext<10,7>(tmp_784_fu_26276_p2.read());
}

void ShuffleNetV2::thread_tmp_785_fu_10258_p2() {
    tmp_785_fu_10258_p2 = (!p_shl293_cast_fu_10242_p1.read().is_01() || !p_shl294_cast_fu_10254_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl293_cast_fu_10242_p1.read()) - sc_biguint<8>(p_shl294_cast_fu_10254_p1.read()));
}

void ShuffleNetV2::thread_tmp_786_cast_fu_26285_p1() {
    tmp_786_cast_fu_26285_p1 = esl_zext<18,5>(ci61_reg_7138.read());
}

void ShuffleNetV2::thread_tmp_786_fu_10186_p1() {
    tmp_786_fu_10186_p1 = esl_sext<33,13>(tmp_777_fu_10180_p2.read());
}

void ShuffleNetV2::thread_tmp_787_cast1_fu_26159_p1() {
    tmp_787_cast1_fu_26159_p1 = esl_zext<15,4>(w_100_fu_26153_p2.read());
}

void ShuffleNetV2::thread_tmp_787_cast2_fu_26163_p1() {
    tmp_787_cast2_fu_26163_p1 = esl_zext<14,4>(w_100_fu_26153_p2.read());
}

void ShuffleNetV2::thread_tmp_787_cast_fu_22478_p1() {
    tmp_787_cast_fu_22478_p1 = esl_sext<11,8>(tmp_674_fu_22472_p2.read());
}

void ShuffleNetV2::thread_tmp_787_fu_10190_p2() {
    tmp_787_fu_10190_p2 = (!tmp_721_cast1_reg_34346.read().is_01() || !tmp_786_fu_10186_p1.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_721_cast1_reg_34346.read()) + sc_bigint<33>(tmp_786_fu_10186_p1.read()));
}

void ShuffleNetV2::thread_tmp_788_fu_26570_p2() {
    tmp_788_fu_26570_p2 = (!p_shl174_cast_fu_26554_p1.read().is_01() || !p_shl175_cast_fu_26566_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl174_cast_fu_26554_p1.read()) - sc_biguint<7>(p_shl175_cast_fu_26566_p1.read()));
}

void ShuffleNetV2::thread_tmp_789_fu_26580_p2() {
    tmp_789_fu_26580_p2 = (!i140_cast_reg_40727.read().is_01() || !tmp_788_fu_26570_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(i140_cast_reg_40727.read()) + sc_biguint<7>(tmp_788_fu_26570_p2.read()));
}

void ShuffleNetV2::thread_tmp_790_fu_26621_p1() {
    tmp_790_fu_26621_p1 = esl_zext<64,32>(tmp_917_cast_fu_26618_p1.read());
}

void ShuffleNetV2::thread_tmp_791_fu_26591_p2() {
    tmp_791_fu_26591_p2 = (!tmp54_fu_26585_p2.read().is_01() || !i140_cast290_cast_reg_40722.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp54_fu_26585_p2.read()) + sc_biguint<10>(i140_cast290_cast_reg_40722.read()));
}

void ShuffleNetV2::thread_tmp_792_cast_fu_26599_p1() {
    tmp_792_cast_fu_26599_p1 = esl_zext<33,11>(tmp_920_cast_fu_26596_p1.read());
}

void ShuffleNetV2::thread_tmp_792_fu_10195_p1() {
    tmp_792_fu_10195_p1 = esl_sext<64,33>(tmp_787_fu_10190_p2.read());
}

void ShuffleNetV2::thread_tmp_793_fu_26329_p2() {
    tmp_793_fu_26329_p2 = (!p_shl176_cast_fu_26313_p1.read().is_01() || !p_shl177_cast_fu_26325_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl176_cast_fu_26313_p1.read()) - sc_biguint<7>(p_shl177_cast_fu_26325_p1.read()));
}

void ShuffleNetV2::thread_tmp_794_fu_10077_p2() {
    tmp_794_fu_10077_p2 = (!tmp_760_reg_34780.read().is_01() || !tmp_316_cast_fu_10073_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_760_reg_34780.read()) + sc_biguint<9>(tmp_316_cast_fu_10073_p1.read()));
}

void ShuffleNetV2::thread_tmp_795_fu_26339_p2() {
    tmp_795_fu_26339_p2 = (!tmp_793_fu_26329_p2.read().is_01() || !tmp_913_cast_reg_40625.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_793_fu_26329_p2.read()) + sc_biguint<7>(tmp_913_cast_reg_40625.read()));
}

void ShuffleNetV2::thread_tmp_796_fu_26368_p2() {
    tmp_796_fu_26368_p2 = (!p_shl178_cast_fu_26352_p1.read().is_01() || !p_shl179_cast_fu_26364_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl178_cast_fu_26352_p1.read()) - sc_biguint<8>(p_shl179_cast_fu_26364_p1.read()));
}

void ShuffleNetV2::thread_tmp_797_cast_fu_23108_p1() {
    tmp_797_cast_fu_23108_p1 = esl_zext<7,4>(p_lshr_f13_cast_fu_23098_p4.read());
}

void ShuffleNetV2::thread_tmp_797_fu_26384_p2() {
    tmp_797_fu_26384_p2 = (!tmp53_fu_26378_p2.read().is_01() || !co138_cast299_cast_reg_40607.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp53_fu_26378_p2.read()) + sc_biguint<9>(co138_cast299_cast_reg_40607.read()));
}

void ShuffleNetV2::thread_tmp_798_fu_26394_p4() {
    tmp_798_fu_26394_p4 = tmp_795_fu_26339_p2.read().range(6, 3);
}

void ShuffleNetV2::thread_tmp_799_cast1_fu_26658_p1() {
    tmp_799_cast1_fu_26658_p1 = esl_zext<13,2>(w101_reg_7193.read());
}

void ShuffleNetV2::thread_tmp_799_cast_fu_26662_p1() {
    tmp_799_cast_fu_26662_p1 = esl_zext<36,2>(w101_reg_7193.read());
}

void ShuffleNetV2::thread_tmp_799_fu_10280_p2() {
    tmp_799_fu_10280_p2 = (!tmp_785_reg_34836.read().is_01() || !tmp_320_cast_fu_10276_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_785_reg_34836.read()) + sc_biguint<8>(tmp_320_cast_fu_10276_p1.read()));
}

void ShuffleNetV2::thread_tmp_800_cast_fu_23430_p1() {
    tmp_800_cast_fu_23430_p1 = esl_sext<11,7>(tmp_686_fu_23424_p2.read());
}

void ShuffleNetV2::thread_tmp_800_fu_27039_p2() {
    tmp_800_fu_27039_p2 = (!p_shl182_cast_fu_27023_p1.read().is_01() || !p_shl183_cast_fu_27035_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl182_cast_fu_27023_p1.read()) - sc_biguint<7>(p_shl183_cast_fu_27035_p1.read()));
}

void ShuffleNetV2::thread_tmp_801_cast_fu_23468_p1() {
    tmp_801_cast_fu_23468_p1 = esl_sext<32,7>(tmp_687_reg_39638.read());
}

void ShuffleNetV2::thread_tmp_801_fu_26939_p2() {
    tmp_801_fu_26939_p2 = (!p_shl180_cast_fu_26923_p1.read().is_01() || !p_shl181_cast_fu_26935_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl180_cast_fu_26923_p1.read()) - sc_biguint<7>(p_shl181_cast_fu_26935_p1.read()));
}

void ShuffleNetV2::thread_tmp_802_fu_26949_p2() {
    tmp_802_fu_26949_p2 = (!i143_cast_reg_40870.read().is_01() || !tmp_801_fu_26939_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(i143_cast_reg_40870.read()) + sc_biguint<7>(tmp_801_fu_26939_p2.read()));
}

void ShuffleNetV2::thread_tmp_803_fu_26990_p1() {
    tmp_803_fu_26990_p1 = esl_zext<64,32>(tmp_934_cast_fu_26987_p1.read());
}

void ShuffleNetV2::thread_tmp_804_fu_10330_p3() {
    tmp_804_fu_10330_p3 = esl_concat<5,4>(co19_reg_4560.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_805_fu_10342_p3() {
    tmp_805_fu_10342_p3 = esl_concat<5,1>(co19_reg_4560.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_806_fu_26960_p2() {
    tmp_806_fu_26960_p2 = (!tmp56_fu_26954_p2.read().is_01() || !i143_cast280_cast_reg_40865.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp56_fu_26954_p2.read()) + sc_biguint<10>(i143_cast280_cast_reg_40865.read()));
}

void ShuffleNetV2::thread_tmp_807_fu_10354_p2() {
    tmp_807_fu_10354_p2 = (!p_shl300_cast_fu_10350_p1.read().is_01() || !p_shl299_cast_fu_10338_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl300_cast_fu_10350_p1.read()) + sc_biguint<10>(p_shl299_cast_fu_10338_p1.read()));
}

void ShuffleNetV2::thread_tmp_808_fu_10366_p3() {
    tmp_808_fu_10366_p3 = esl_concat<6,4>(tmp_321_fu_10360_p2.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_809_cast_fu_26968_p1() {
    tmp_809_cast_fu_26968_p1 = esl_zext<33,11>(tmp_937_cast_fu_26965_p1.read());
}

void ShuffleNetV2::thread_tmp_809_fu_10378_p3() {
    tmp_809_fu_10378_p3 = esl_concat<6,1>(tmp_321_fu_10360_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_810_fu_10390_p2() {
    tmp_810_fu_10390_p2 = (!p_shl298_cast_fu_10386_p1.read().is_01() || !p_shl297_cast_fu_10374_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl298_cast_fu_10386_p1.read()) + sc_biguint<11>(p_shl297_cast_fu_10374_p1.read()));
}

void ShuffleNetV2::thread_tmp_811_cast_fu_26682_p1() {
    tmp_811_cast_fu_26682_p1 = esl_zext<10,2>(h97_reg_7204.read());
}

void ShuffleNetV2::thread_tmp_811_fu_26678_p1() {
    tmp_811_fu_26678_p1 = esl_zext<64,2>(h97_reg_7204.read());
}

void ShuffleNetV2::thread_tmp_812_fu_27085_p2() {
    tmp_812_fu_27085_p2 = (!tmp_800_reg_40920.read().is_01() || !ci63_cast_fu_27069_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_800_reg_40920.read()) + sc_biguint<7>(ci63_cast_fu_27069_p1.read()));
}

void ShuffleNetV2::thread_tmp_813_cast1_fu_27090_p1() {
    tmp_813_cast1_fu_27090_p1 = esl_sext<10,7>(tmp_812_fu_27085_p2.read());
}

void ShuffleNetV2::thread_tmp_813_cast_fu_23236_p1() {
    tmp_813_cast_fu_23236_p1 = esl_sext<11,8>(tmp_693_fu_23230_p2.read());
}

void ShuffleNetV2::thread_tmp_813_fu_10588_p2() {
    tmp_813_fu_10588_p2 = (!tmp_720_cast1_reg_34283.read().is_01() || !ap_const_lv33_90.is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_720_cast1_reg_34283.read()) + sc_biguint<33>(ap_const_lv33_90));
}

void ShuffleNetV2::thread_tmp_814_cast_fu_27094_p1() {
    tmp_814_cast_fu_27094_p1 = esl_zext<19,5>(ci63_reg_7259.read());
}

void ShuffleNetV2::thread_tmp_814_fu_10593_p1() {
    tmp_814_fu_10593_p1 = esl_sext<64,33>(tmp_813_fu_10588_p2.read());
}

void ShuffleNetV2::thread_tmp_815_fu_26726_p2() {
    tmp_815_fu_26726_p2 = (!p_shl186_cast_fu_26710_p1.read().is_01() || !p_shl187_cast_fu_26722_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl186_cast_fu_26710_p1.read()) - sc_biguint<7>(p_shl187_cast_fu_26722_p1.read()));
}

void ShuffleNetV2::thread_tmp_816_fu_26736_p2() {
    tmp_816_fu_26736_p2 = (!tmp_815_fu_26726_p2.read().is_01() || !co141_cast1_reg_40769.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_815_fu_26726_p2.read()) + sc_biguint<7>(co141_cast1_reg_40769.read()));
}

void ShuffleNetV2::thread_tmp_817_cast1_fu_26755_p1() {
    tmp_817_cast1_fu_26755_p1 = esl_zext<35,32>(tmp_953_cast_fu_26752_p1.read());
}

void ShuffleNetV2::thread_tmp_817_cast_fu_23807_p1() {
    tmp_817_cast_fu_23807_p1 = esl_sext<11,7>(tmp_698_fu_23801_p2.read());
}

void ShuffleNetV2::thread_tmp_817_fu_10539_p3() {
    tmp_817_fu_10539_p3 = esl_concat<7,5>(tmp_322_fu_10533_p2.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_818_cast_fu_23845_p1() {
    tmp_818_cast_fu_23845_p1 = esl_sext<32,7>(tmp_699_reg_39781.read());
}

void ShuffleNetV2::thread_tmp_818_fu_26747_p2() {
    tmp_818_fu_26747_p2 = (!co141_cast_reg_40764.read().is_01() || !tmp55_fu_26741_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(co141_cast_reg_40764.read()) + sc_biguint<10>(tmp55_fu_26741_p2.read()));
}

void ShuffleNetV2::thread_tmp_819_cast_fu_26797_p1() {
    tmp_819_cast_fu_26797_p1 = esl_zext<13,10>(tmp_818_reg_40832.read());
}

void ShuffleNetV2::thread_tmp_819_fu_10551_p3() {
    tmp_819_fu_10551_p3 = esl_concat<7,3>(tmp_322_fu_10533_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_820_fu_27379_p2() {
    tmp_820_fu_27379_p2 = (!p_shl184_cast_fu_27363_p1.read().is_01() || !p_shl185_cast_fu_27375_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl184_cast_fu_27363_p1.read()) - sc_biguint<7>(p_shl185_cast_fu_27375_p1.read()));
}

void ShuffleNetV2::thread_tmp_821_fu_27389_p2() {
    tmp_821_fu_27389_p2 = (!i146_cast_reg_41027.read().is_01() || !tmp_820_fu_27379_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(i146_cast_reg_41027.read()) + sc_biguint<7>(tmp_820_fu_27379_p2.read()));
}

void ShuffleNetV2::thread_tmp_822_fu_27430_p1() {
    tmp_822_fu_27430_p1 = esl_zext<64,32>(tmp_944_cast_fu_27427_p1.read());
}

void ShuffleNetV2::thread_tmp_823_fu_27400_p2() {
    tmp_823_fu_27400_p2 = (!tmp58_fu_27394_p2.read().is_01() || !i146_cast267_cast_reg_41022.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp58_fu_27394_p2.read()) + sc_biguint<10>(i146_cast267_cast_reg_41022.read()));
}

void ShuffleNetV2::thread_tmp_824_cast_fu_27408_p1() {
    tmp_824_cast_fu_27408_p1 = esl_zext<33,11>(tmp_947_cast_fu_27405_p1.read());
}

void ShuffleNetV2::thread_tmp_824_fu_10563_p2() {
    tmp_824_fu_10563_p2 = (!p_shl307_cast_fu_10547_p1.read().is_01() || !p_shl308_cast_fu_10559_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl307_cast_fu_10547_p1.read()) - sc_biguint<13>(p_shl308_cast_fu_10559_p1.read()));
}

void ShuffleNetV2::thread_tmp_825_cast_fu_23913_p1() {
    tmp_825_cast_fu_23913_p1 = esl_zext<7,4>(p_lshr_f14_cast_fu_23903_p4.read());
}

void ShuffleNetV2::thread_tmp_825_fu_27138_p2() {
    tmp_825_fu_27138_p2 = (!p_shl188_cast_fu_27122_p1.read().is_01() || !p_shl189_cast_fu_27134_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl188_cast_fu_27122_p1.read()) - sc_biguint<7>(p_shl189_cast_fu_27134_p1.read()));
}

void ShuffleNetV2::thread_tmp_826_fu_27148_p2() {
    tmp_826_fu_27148_p2 = (!tmp_825_fu_27138_p2.read().is_01() || !tmp_941_cast_reg_40925.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_825_fu_27138_p2.read()) + sc_biguint<7>(tmp_941_cast_reg_40925.read()));
}

void ShuffleNetV2::thread_tmp_827_cast_fu_24235_p1() {
    tmp_827_cast_fu_24235_p1 = esl_sext<11,7>(tmp_712_fu_24229_p2.read());
}

void ShuffleNetV2::thread_tmp_827_fu_27177_p2() {
    tmp_827_fu_27177_p2 = (!p_shl190_cast_fu_27161_p1.read().is_01() || !p_shl191_cast_fu_27173_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl190_cast_fu_27161_p1.read()) - sc_biguint<8>(p_shl191_cast_fu_27173_p1.read()));
}

void ShuffleNetV2::thread_tmp_828_cast_fu_24273_p1() {
    tmp_828_cast_fu_24273_p1 = esl_sext<32,7>(tmp_713_reg_39938.read());
}

void ShuffleNetV2::thread_tmp_828_fu_10603_p1() {
    tmp_828_fu_10603_p1 = co22_reg_4593.read().range(3-1, 0);
}

void ShuffleNetV2::thread_tmp_829_fu_10617_p3() {
    tmp_829_fu_10617_p3 = esl_concat<2,5>(newIndex6_fu_10607_p4.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_830_fu_27201_p2() {
    tmp_830_fu_27201_p2 = (!tmp57_cast_fu_27197_p1.read().is_01() || !co143_cast_reg_40907.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp57_cast_fu_27197_p1.read()) + sc_biguint<12>(co143_cast_reg_40907.read()));
}

void ShuffleNetV2::thread_tmp_831_fu_10629_p3() {
    tmp_831_fu_10629_p3 = esl_concat<2,3>(newIndex6_fu_10607_p4.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_832_fu_27211_p4() {
    tmp_832_fu_27211_p4 = tmp_826_fu_27148_p2.read().range(6, 3);
}

void ShuffleNetV2::thread_tmp_833_fu_27596_p2() {
    tmp_833_fu_27596_p2 = (!p_shl192_cast_fu_27582_p1.read().is_01() || !p_shl193_cast_fu_27592_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl192_cast_fu_27582_p1.read()) - sc_biguint<8>(p_shl193_cast_fu_27592_p1.read()));
}

void ShuffleNetV2::thread_tmp_834_cast_fu_27489_p1() {
    tmp_834_cast_fu_27489_p1 = esl_zext<10,4>(h_100_fu_27483_p2.read());
}

void ShuffleNetV2::thread_tmp_834_fu_10641_p2() {
    tmp_834_fu_10641_p2 = (!p_shl305_cast_fu_10625_p1.read().is_01() || !p_shl306_cast_fu_10637_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl305_cast_fu_10625_p1.read()) - sc_biguint<8>(p_shl306_cast_fu_10637_p1.read()));
}

void ShuffleNetV2::thread_tmp_835_fu_27632_p2() {
    tmp_835_fu_27632_p2 = (!tmp_833_reg_41121.read().is_01() || !ci65_cast_fu_27616_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_833_reg_41121.read()) + sc_biguint<8>(ci65_cast_fu_27616_p1.read()));
}

void ShuffleNetV2::thread_tmp_836_cast_cast_fu_23582_p1() {
    tmp_836_cast_cast_fu_23582_p1 = esl_sext<8,7>(tmp_707_fu_23576_p2.read());
}

void ShuffleNetV2::thread_tmp_836_cast_fu_27637_p1() {
    tmp_836_cast_fu_27637_p1 = esl_sext<12,8>(tmp_835_fu_27632_p2.read());
}

void ShuffleNetV2::thread_tmp_836_fu_10569_p1() {
    tmp_836_fu_10569_p1 = esl_sext<33,13>(tmp_824_fu_10563_p2.read());
}

void ShuffleNetV2::thread_tmp_837_cast1_fu_27641_p1() {
    tmp_837_cast1_fu_27641_p1 = esl_zext<19,5>(ci65_reg_7347.read());
}

void ShuffleNetV2::thread_tmp_837_cast_fu_23602_p1() {
    tmp_837_cast_fu_23602_p1 = esl_sext<32,7>(tmp_708_reg_39716.read());
}

void ShuffleNetV2::thread_tmp_837_fu_10573_p2() {
    tmp_837_fu_10573_p2 = (!tmp_721_cast1_reg_34346.read().is_01() || !tmp_836_fu_10569_p1.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_721_cast1_reg_34346.read()) + sc_bigint<33>(tmp_836_fu_10569_p1.read()));
}

void ShuffleNetV2::thread_tmp_838_cast_fu_27540_p1() {
    tmp_838_cast_fu_27540_p1 = esl_zext<15,4>(w_104_fu_27534_p2.read());
}

void ShuffleNetV2::thread_tmp_838_fu_10578_p1() {
    tmp_838_fu_10578_p1 = esl_sext<64,33>(tmp_837_fu_10573_p2.read());
}

void ShuffleNetV2::thread_tmp_839_fu_27908_p2() {
    tmp_839_fu_27908_p2 = (!p_shl194_cast_fu_27892_p1.read().is_01() || !p_shl195_cast_fu_27904_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl194_cast_fu_27892_p1.read()) - sc_biguint<8>(p_shl195_cast_fu_27904_p1.read()));
}

void ShuffleNetV2::thread_tmp_840_cast_fu_23647_p1() {
    tmp_840_cast_fu_23647_p1 = esl_sext<9,8>(tmp_710_reg_39722.read());
}

void ShuffleNetV2::thread_tmp_840_fu_27918_p2() {
    tmp_840_fu_27918_p2 = (!i152_cast_reg_41228.read().is_01() || !tmp_839_fu_27908_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(i152_cast_reg_41228.read()) + sc_biguint<8>(tmp_839_fu_27908_p2.read()));
}

void ShuffleNetV2::thread_tmp_841_fu_27959_p1() {
    tmp_841_fu_27959_p1 = esl_zext<64,32>(tmp_970_cast_fu_27956_p1.read());
}

void ShuffleNetV2::thread_tmp_842_fu_27929_p2() {
    tmp_842_fu_27929_p2 = (!tmp60_fu_27923_p2.read().is_01() || !i152_cast253_cast_reg_41223.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp60_fu_27923_p2.read()) + sc_biguint<10>(i152_cast253_cast_reg_41223.read()));
}

void ShuffleNetV2::thread_tmp_843_cast_fu_27937_p1() {
    tmp_843_cast_fu_27937_p1 = esl_zext<33,11>(tmp_973_cast_fu_27934_p1.read());
}

void ShuffleNetV2::thread_tmp_843_fu_10416_p2() {
    tmp_843_fu_10416_p2 = (!tmp_323_cast_fu_10412_p1.read().is_01() || !tmp_810_reg_34910.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_323_cast_fu_10412_p1.read()) + sc_biguint<11>(tmp_810_reg_34910.read()));
}

void ShuffleNetV2::thread_tmp_844_fu_27687_p2() {
    tmp_844_fu_27687_p2 = (!p_shl196_cast_fu_27673_p1.read().is_01() || !p_shl197_cast_fu_27683_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl196_cast_fu_27673_p1.read()) - sc_biguint<8>(p_shl197_cast_fu_27683_p1.read()));
}

void ShuffleNetV2::thread_tmp_845_cast_fu_24041_p1() {
    tmp_845_cast_fu_24041_p1 = esl_sext<11,8>(tmp_719_fu_24035_p2.read());
}

void ShuffleNetV2::thread_tmp_845_fu_27697_p2() {
    tmp_845_fu_27697_p2 = (!tmp_844_fu_27687_p2.read().is_01() || !tmp_967_cast_reg_41131.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_844_fu_27687_p2.read()) + sc_biguint<8>(tmp_967_cast_reg_41131.read()));
}

void ShuffleNetV2::thread_tmp_846_fu_27714_p2() {
    tmp_846_fu_27714_p2 = (!p_shl198_cast_fu_27710_p1.read().is_01() || !p_shl196_cast1_fu_27669_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl198_cast_fu_27710_p1.read()) - sc_biguint<10>(p_shl196_cast1_fu_27669_p1.read()));
}

void ShuffleNetV2::thread_tmp_847_fu_27730_p2() {
    tmp_847_fu_27730_p2 = (!tmp59_fu_27724_p2.read().is_01() || !co146_cast_reg_41108.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp59_fu_27724_p2.read()) + sc_biguint<12>(co146_cast_reg_41108.read()));
}

void ShuffleNetV2::thread_tmp_848_fu_10429_p3() {
    tmp_848_fu_10429_p3 = esl_concat<11,1>(tmp_843_fu_10416_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_849_fu_27740_p4() {
    tmp_849_fu_27740_p4 = tmp_845_fu_27697_p2.read().range(7, 3);
}

void ShuffleNetV2::thread_tmp_850_cast1_fu_27996_p1() {
    tmp_850_cast1_fu_27996_p1 = esl_zext<13,2>(w105_reg_7402.read());
}

void ShuffleNetV2::thread_tmp_850_cast_fu_28000_p1() {
    tmp_850_cast_fu_28000_p1 = esl_zext<36,2>(w105_reg_7402.read());
}

void ShuffleNetV2::thread_tmp_850_fu_10441_p2() {
    tmp_850_fu_10441_p2 = (!p_shl303_cast_fu_10421_p3.read().is_01() || !p_shl304_cast_fu_10437_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl303_cast_fu_10421_p3.read()) + sc_biguint<15>(p_shl304_cast_fu_10437_p1.read()));
}

void ShuffleNetV2::thread_tmp_851_fu_28375_p2() {
    tmp_851_fu_28375_p2 = (!p_shl201_cast_fu_28361_p1.read().is_01() || !p_shl202_cast_fu_28371_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl201_cast_fu_28361_p1.read()) - sc_biguint<8>(p_shl202_cast_fu_28371_p1.read()));
}

void ShuffleNetV2::thread_tmp_852_fu_28277_p2() {
    tmp_852_fu_28277_p2 = (!p_shl199_cast_fu_28261_p1.read().is_01() || !p_shl200_cast_fu_28273_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl199_cast_fu_28261_p1.read()) - sc_biguint<8>(p_shl200_cast_fu_28273_p1.read()));
}

void ShuffleNetV2::thread_tmp_853_fu_28287_p2() {
    tmp_853_fu_28287_p2 = (!i155_cast_reg_41371.read().is_01() || !tmp_852_fu_28277_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(i155_cast_reg_41371.read()) + sc_biguint<8>(tmp_852_fu_28277_p2.read()));
}

void ShuffleNetV2::thread_tmp_854_fu_28328_p1() {
    tmp_854_fu_28328_p1 = esl_zext<64,32>(tmp_987_cast_fu_28325_p1.read());
}

void ShuffleNetV2::thread_tmp_855_cast_fu_24671_p1() {
    tmp_855_cast_fu_24671_p1 = esl_zext<7,4>(p_lshr_f15_cast_fu_24661_p4.read());
}

void ShuffleNetV2::thread_tmp_855_fu_28298_p2() {
    tmp_855_fu_28298_p2 = (!tmp62_fu_28292_p2.read().is_01() || !i155_cast243_cast_reg_41366.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp62_fu_28292_p2.read()) + sc_biguint<9>(i155_cast243_cast_reg_41366.read()));
}

void ShuffleNetV2::thread_tmp_856_cast_fu_28306_p1() {
    tmp_856_cast_fu_28306_p1 = esl_zext<33,11>(tmp_990_cast_fu_28303_p1.read());
}

void ShuffleNetV2::thread_tmp_856_fu_10447_p2() {
    tmp_856_fu_10447_p2 = (!tmp_323_cast1_fu_10408_p1.read().is_01() || !tmp_807_reg_34905.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_323_cast1_fu_10408_p1.read()) + sc_biguint<10>(tmp_807_reg_34905.read()));
}

void ShuffleNetV2::thread_tmp_857_cast_fu_28020_p1() {
    tmp_857_cast_fu_28020_p1 = esl_zext<11,2>(h101_reg_7413.read());
}

void ShuffleNetV2::thread_tmp_857_fu_28016_p1() {
    tmp_857_fu_28016_p1 = esl_zext<64,2>(h101_reg_7413.read());
}

void ShuffleNetV2::thread_tmp_858_cast_fu_25001_p1() {
    tmp_858_cast_fu_25001_p1 = esl_sext<11,7>(tmp_734_fu_24995_p2.read());
}

void ShuffleNetV2::thread_tmp_858_fu_10460_p3() {
    tmp_858_fu_10460_p3 = esl_concat<10,1>(tmp_856_fu_10447_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_859_cast1_fu_9568_p1() {
    tmp_859_cast1_fu_9568_p1 = esl_sext<64,8>(tmp_615_fu_9563_p2.read());
}

void ShuffleNetV2::thread_tmp_859_cast_fu_25039_p1() {
    tmp_859_cast_fu_25039_p1 = esl_sext<32,7>(tmp_735_reg_40193.read());
}

void ShuffleNetV2::thread_tmp_859_fu_10472_p2() {
    tmp_859_fu_10472_p2 = (!p_shl301_cast_fu_10452_p3.read().is_01() || !p_shl302_cast_fu_10468_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl301_cast_fu_10452_p3.read()) + sc_biguint<14>(p_shl302_cast_fu_10468_p1.read()));
}

void ShuffleNetV2::thread_tmp_860_fu_28411_p2() {
    tmp_860_fu_28411_p2 = (!tmp_851_reg_41421.read().is_01() || !ci67_cast_fu_28395_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_851_reg_41421.read()) + sc_biguint<8>(ci67_cast_fu_28395_p1.read()));
}

void ShuffleNetV2::thread_tmp_861_cast_fu_9423_p1() {
    tmp_861_cast_fu_9423_p1 = esl_zext<64,13>(tmp_616_reg_34503.read());
}

void ShuffleNetV2::thread_tmp_861_fu_10663_p2() {
    tmp_861_fu_10663_p2 = (!tmp_834_reg_34975.read().is_01() || !tmp_327_cast_fu_10659_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_834_reg_34975.read()) + sc_biguint<8>(tmp_327_cast_fu_10659_p1.read()));
}

void ShuffleNetV2::thread_tmp_862_fu_10498_p2() {
    tmp_862_fu_10498_p2 = (!tmp_850_reg_34923.read().is_01() || !tmp_328_cast_fu_10494_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_850_reg_34923.read()) + sc_biguint<15>(tmp_328_cast_fu_10494_p1.read()));
}

void ShuffleNetV2::thread_tmp_863_cast_fu_28416_p1() {
    tmp_863_cast_fu_28416_p1 = esl_sext<12,8>(tmp_860_fu_28411_p2.read());
}

void ShuffleNetV2::thread_tmp_863_fu_10508_p2() {
    tmp_863_fu_10508_p2 = (!tmp_859_reg_34928.read().is_01() || !tmp_328_cast1_fu_10490_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_859_reg_34928.read()) + sc_biguint<14>(tmp_328_cast1_fu_10490_p1.read()));
}

void ShuffleNetV2::thread_tmp_864_fu_10767_p2() {
    tmp_864_fu_10767_p2 = (!tmp_720_cast1_reg_34283.read().is_01() || !ap_const_lv33_A8.is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_720_cast1_reg_34283.read()) + sc_biguint<33>(ap_const_lv33_A8));
}

void ShuffleNetV2::thread_tmp_865_cast_fu_28420_p1() {
    tmp_865_cast_fu_28420_p1 = esl_zext<19,5>(ci67_reg_7468.read());
}

void ShuffleNetV2::thread_tmp_865_fu_10772_p1() {
    tmp_865_fu_10772_p1 = esl_sext<64,33>(tmp_864_fu_10767_p2.read());
}

void ShuffleNetV2::thread_tmp_866_fu_28064_p2() {
    tmp_866_fu_28064_p2 = (!p_shl205_cast_fu_28048_p1.read().is_01() || !p_shl206_cast_fu_28060_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl205_cast_fu_28048_p1.read()) - sc_biguint<8>(p_shl206_cast_fu_28060_p1.read()));
}

void ShuffleNetV2::thread_tmp_867_fu_28074_p2() {
    tmp_867_fu_28074_p2 = (!tmp_866_fu_28064_p2.read().is_01() || !co149_cast1_reg_41270.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_866_fu_28064_p2.read()) + sc_biguint<8>(co149_cast1_reg_41270.read()));
}

void ShuffleNetV2::thread_tmp_868_cast_fu_28093_p1() {
    tmp_868_cast_fu_28093_p1 = esl_zext<35,32>(tmp_1006_cast_fu_28090_p1.read());
}

void ShuffleNetV2::thread_tmp_868_fu_10717_p3() {
    tmp_868_fu_10717_p3 = esl_concat<5,2>(co25_reg_4628.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_869_fu_28085_p2() {
    tmp_869_fu_28085_p2 = (!co149_cast_reg_41265.read().is_01() || !tmp61_fu_28079_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(co149_cast_reg_41265.read()) + sc_biguint<10>(tmp61_fu_28079_p2.read()));
}

void ShuffleNetV2::thread_tmp_870_cast_fu_28135_p1() {
    tmp_870_cast_fu_28135_p1 = esl_zext<13,10>(tmp_869_reg_41333.read());
}

void ShuffleNetV2::thread_tmp_870_fu_10729_p2() {
    tmp_870_fu_10729_p2 = (!p_shl310_cast_fu_10725_p1.read().is_01() || !tmp_329_cast_fu_10713_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl310_cast_fu_10725_p1.read()) - sc_biguint<8>(tmp_329_cast_fu_10713_p1.read()));
}

void ShuffleNetV2::thread_tmp_871_cast_cast_fu_24799_p1() {
    tmp_871_cast_cast_fu_24799_p1 = esl_sext<10,8>(tmp_742_fu_24793_p2.read());
}

void ShuffleNetV2::thread_tmp_871_fu_28687_p2() {
    tmp_871_fu_28687_p2 = (!p_shl203_cast_fu_28671_p1.read().is_01() || !p_shl204_cast_fu_28683_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl203_cast_fu_28671_p1.read()) - sc_biguint<8>(p_shl204_cast_fu_28683_p1.read()));
}

void ShuffleNetV2::thread_tmp_872_fu_28697_p2() {
    tmp_872_fu_28697_p2 = (!i158_cast1_reg_41528.read().is_01() || !tmp_871_fu_28687_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(i158_cast1_reg_41528.read()) + sc_biguint<8>(tmp_871_fu_28687_p2.read()));
}

void ShuffleNetV2::thread_tmp_873_fu_28742_p1() {
    tmp_873_fu_28742_p1 = esl_zext<64,32>(tmp_997_cast_fu_28739_p1.read());
}

void ShuffleNetV2::thread_tmp_874_fu_28716_p2() {
    tmp_874_fu_28716_p2 = (!tmp64_cast_fu_28712_p1.read().is_01() || !i158_cast_reg_41523.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp64_cast_fu_28712_p1.read()) + sc_biguint<12>(i158_cast_reg_41523.read()));
}

void ShuffleNetV2::thread_tmp_875_cast1_fu_28721_p1() {
    tmp_875_cast1_fu_28721_p1 = esl_zext<33,12>(tmp_874_reg_41554.read());
}

void ShuffleNetV2::thread_tmp_875_cast_fu_25370_p1() {
    tmp_875_cast_fu_25370_p1 = esl_sext<11,7>(tmp_747_fu_25364_p2.read());
}

void ShuffleNetV2::thread_tmp_875_fu_10749_p3() {
    tmp_875_fu_10749_p3 = esl_concat<7,2>(tmp_330_fu_10739_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_876_cast_fu_25408_p1() {
    tmp_876_cast_fu_25408_p1 = esl_sext<32,7>(tmp_748_reg_40336.read());
}

void ShuffleNetV2::thread_tmp_876_fu_28466_p2() {
    tmp_876_fu_28466_p2 = (!p_shl207_cast_fu_28452_p1.read().is_01() || !p_shl208_cast_fu_28462_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl207_cast_fu_28452_p1.read()) - sc_biguint<8>(p_shl208_cast_fu_28462_p1.read()));
}

void ShuffleNetV2::thread_tmp_877_fu_28476_p2() {
    tmp_877_fu_28476_p2 = (!tmp_876_fu_28466_p2.read().is_01() || !tmp_994_cast_reg_41431.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_876_fu_28466_p2.read()) + sc_biguint<8>(tmp_994_cast_reg_41431.read()));
}

void ShuffleNetV2::thread_tmp_878_fu_28493_p2() {
    tmp_878_fu_28493_p2 = (!p_shl209_cast_fu_28489_p1.read().is_01() || !p_shl207_cast1_fu_28448_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl209_cast_fu_28489_p1.read()) - sc_biguint<10>(p_shl207_cast1_fu_28448_p1.read()));
}

void ShuffleNetV2::thread_tmp_879_fu_28509_p2() {
    tmp_879_fu_28509_p2 = (!tmp63_fu_28503_p2.read().is_01() || !co151_cast_reg_41408.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp63_fu_28503_p2.read()) + sc_biguint<12>(co151_cast_reg_41408.read()));
}

void ShuffleNetV2::thread_tmp_880_fu_28519_p4() {
    tmp_880_fu_28519_p4 = tmp_877_fu_28476_p2.read().range(7, 3);
}

void ShuffleNetV2::thread_tmp_881_cast1_fu_28779_p1() {
    tmp_881_cast1_fu_28779_p1 = esl_zext<13,2>(w107_reg_7523.read());
}

void ShuffleNetV2::thread_tmp_881_cast_fu_28783_p1() {
    tmp_881_cast_fu_28783_p1 = esl_zext<36,2>(w107_reg_7523.read());
}

void ShuffleNetV2::thread_tmp_881_fu_10761_p2() {
    tmp_881_fu_10761_p2 = (!p_shl309_cast_fu_10757_p1.read().is_01() || !tmp_331_cast_fu_10745_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl309_cast_fu_10757_p1.read()) - sc_biguint<10>(tmp_331_cast_fu_10745_p1.read()));
}

void ShuffleNetV2::thread_tmp_882_cast_fu_9631_p1() {
    tmp_882_cast_fu_9631_p1 = esl_sext<9,8>(tmp_621_fu_9625_p2.read());
}

void ShuffleNetV2::thread_tmp_882_fu_10802_p2() {
    tmp_882_fu_10802_p2 = (!tmp_335_cast_fu_10798_p1.read().is_01() || !tmp_881_reg_35049.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_335_cast_fu_10798_p1.read()) + sc_biguint<10>(tmp_881_reg_35049.read()));
}

void ShuffleNetV2::thread_tmp_883_cast1_fu_9671_p1() {
    tmp_883_cast1_fu_9671_p1 = esl_sext<64,9>(tmp_626_fu_9666_p2.read());
}

void ShuffleNetV2::thread_tmp_883_cast_fu_25476_p1() {
    tmp_883_cast_fu_25476_p1 = esl_zext<7,4>(p_lshr_f16_cast_fu_25466_p4.read());
}

void ShuffleNetV2::thread_tmp_883_fu_10811_p3() {
    tmp_883_fu_10811_p3 = esl_concat<10,2>(tmp_882_fu_10802_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_884_fu_29154_p2() {
    tmp_884_fu_29154_p2 = (!p_shl212_cast_fu_29140_p1.read().is_01() || !p_shl213_cast_fu_29150_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl212_cast_fu_29140_p1.read()) - sc_biguint<8>(p_shl213_cast_fu_29150_p1.read()));
}

void ShuffleNetV2::thread_tmp_885_cast_cast_fu_25806_p1() {
    tmp_885_cast_cast_fu_25806_p1 = esl_sext<10,7>(tmp_766_fu_25800_p2.read());
}

void ShuffleNetV2::thread_tmp_885_fu_10823_p2() {
    tmp_885_fu_10823_p2 = (!p_shl202_fu_10819_p1.read().is_01() || !tmp_1177_cast_fu_10807_p1.read().is_01())? sc_lv<64>(): (sc_bigint<64>(p_shl202_fu_10819_p1.read()) - sc_bigint<64>(tmp_1177_cast_fu_10807_p1.read()));
}

void ShuffleNetV2::thread_tmp_886_cast_fu_25848_p1() {
    tmp_886_cast_fu_25848_p1 = esl_sext<32,7>(tmp_767_reg_40493.read());
}

void ShuffleNetV2::thread_tmp_886_fu_29060_p2() {
    tmp_886_fu_29060_p2 = (!p_shl210_cast_fu_29044_p1.read().is_01() || !p_shl211_cast_fu_29056_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl210_cast_fu_29044_p1.read()) - sc_biguint<8>(p_shl211_cast_fu_29056_p1.read()));
}

void ShuffleNetV2::thread_tmp_887_fu_29070_p2() {
    tmp_887_fu_29070_p2 = (!i163_cast1_reg_41671.read().is_01() || !tmp_886_fu_29060_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(i163_cast1_reg_41671.read()) + sc_biguint<8>(tmp_886_fu_29060_p2.read()));
}

void ShuffleNetV2::thread_tmp_888_fu_29107_p1() {
    tmp_888_fu_29107_p1 = esl_zext<64,32>(tmp_1019_cast_fu_29104_p1.read());
}

void ShuffleNetV2::thread_tmp_889_cast_fu_25826_p1() {
    tmp_889_cast_fu_25826_p1 = esl_sext<11,10>(tmp_769_reg_40498.read());
}

void ShuffleNetV2::thread_tmp_889_fu_29081_p2() {
    tmp_889_fu_29081_p2 = (!tmp66_fu_29075_p2.read().is_01() || !i163_cast_reg_41666.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp66_fu_29075_p2.read()) + sc_biguint<12>(i163_cast_reg_41666.read()));
}

void ShuffleNetV2::thread_tmp_890_cast_fu_29086_p1() {
    tmp_890_cast_fu_29086_p1 = esl_zext<33,12>(tmp_889_reg_41697.read());
}

void ShuffleNetV2::thread_tmp_890_fu_10829_p2() {
    tmp_890_fu_10829_p2 = (!tmp_335_cast1_fu_10794_p1.read().is_01() || !tmp_1174_cast_reg_35044.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_335_cast1_fu_10794_p1.read()) + sc_bigint<9>(tmp_1174_cast_reg_35044.read()));
}

void ShuffleNetV2::thread_tmp_891_cast_fu_28803_p1() {
    tmp_891_cast_fu_28803_p1 = esl_zext<11,2>(h103_reg_7534.read());
}

void ShuffleNetV2::thread_tmp_891_fu_28799_p1() {
    tmp_891_fu_28799_p1 = esl_zext<64,2>(h103_reg_7534.read());
}

void ShuffleNetV2::thread_tmp_892_fu_29190_p2() {
    tmp_892_fu_29190_p2 = (!tmp_884_reg_41721.read().is_01() || !ci69_cast_fu_29174_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_884_reg_41721.read()) + sc_biguint<8>(ci69_cast_fu_29174_p1.read()));
}

void ShuffleNetV2::thread_tmp_893_cast_fu_29195_p1() {
    tmp_893_cast_fu_29195_p1 = esl_sext<12,8>(tmp_892_fu_29190_p2.read());
}

void ShuffleNetV2::thread_tmp_893_fu_10845_p2() {
    tmp_893_fu_10845_p2 = (!ap_const_lv9_2.is_01())? sc_lv<9>(): tmp_890_reg_35068.read() << (unsigned short)ap_const_lv9_2.to_uint();
}

void ShuffleNetV2::thread_tmp_894_cast1_fu_29199_p1() {
    tmp_894_cast1_fu_29199_p1 = esl_zext<19,5>(ci69_reg_7589.read());
}

void ShuffleNetV2::thread_tmp_894_cast_fu_25153_p1() {
    tmp_894_cast_fu_25153_p1 = esl_sext<10,7>(tmp_761_fu_25147_p2.read());
}

void ShuffleNetV2::thread_tmp_894_fu_10850_p2() {
    tmp_894_fu_10850_p2 = (!tmp_893_fu_10845_p2.read().is_01() || !tmp_890_reg_35068.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_893_fu_10845_p2.read()) - sc_biguint<9>(tmp_890_reg_35068.read()));
}

void ShuffleNetV2::thread_tmp_895_cast_fu_25173_p1() {
    tmp_895_cast_fu_25173_p1 = esl_sext<32,7>(tmp_762_reg_40271.read());
}

void ShuffleNetV2::thread_tmp_895_fu_28847_p2() {
    tmp_895_fu_28847_p2 = (!p_shl216_cast_fu_28831_p1.read().is_01() || !p_shl217_cast_fu_28843_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl216_cast_fu_28831_p1.read()) - sc_biguint<8>(p_shl217_cast_fu_28843_p1.read()));
}

void ShuffleNetV2::thread_tmp_896_fu_28857_p2() {
    tmp_896_fu_28857_p2 = (!tmp_895_fu_28847_p2.read().is_01() || !co153_cast1_reg_41570.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_895_fu_28847_p2.read()) + sc_biguint<8>(co153_cast1_reg_41570.read()));
}

void ShuffleNetV2::thread_tmp_897_cast_fu_28876_p1() {
    tmp_897_cast_fu_28876_p1 = esl_zext<35,32>(tmp_1038_cast_fu_28873_p1.read());
}

void ShuffleNetV2::thread_tmp_897_fu_10834_p2() {
    tmp_897_fu_10834_p2 = (!tmp_567_reg_34387.read().is_01() || !tmp_885_fu_10823_p2.read().is_01())? sc_lv<64>(): (sc_bigint<64>(tmp_567_reg_34387.read()) + sc_biguint<64>(tmp_885_fu_10823_p2.read()));
}

void ShuffleNetV2::thread_tmp_898_fu_28868_p2() {
    tmp_898_fu_28868_p2 = (!co153_cast_reg_41565.read().is_01() || !tmp65_fu_28862_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(co153_cast_reg_41565.read()) + sc_biguint<10>(tmp65_fu_28862_p2.read()));
}

void ShuffleNetV2::thread_tmp_899_cast_fu_28918_p1() {
    tmp_899_cast_fu_28918_p1 = esl_zext<13,10>(tmp_898_reg_41633.read());
}

void ShuffleNetV2::thread_tmp_899_fu_10909_p4() {
    tmp_899_fu_10909_p4 = esl_concat<6,5>(esl_concat<1,5>(ap_const_lv1_1, co29_reg_4673.read()), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_900_fu_29568_p2() {
    tmp_900_fu_29568_p2 = (!co157_cast_fu_29518_p1.read().is_01() || !ap_const_lv8_60.is_01())? sc_lv<8>(): (sc_biguint<8>(co157_cast_fu_29518_p1.read()) + sc_biguint<8>(ap_const_lv8_60));
}

void ShuffleNetV2::thread_tmp_901_fu_29466_p2() {
    tmp_901_fu_29466_p2 = (!p_shl214_cast_fu_29450_p1.read().is_01() || !p_shl215_cast_fu_29462_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl214_cast_fu_29450_p1.read()) - sc_biguint<8>(p_shl215_cast_fu_29462_p1.read()));
}

void ShuffleNetV2::thread_tmp_902_fu_10919_p1() {
    tmp_902_fu_10919_p1 = esl_sext<12,11>(tmp_899_fu_10909_p4.read());
}

void ShuffleNetV2::thread_tmp_903_cast_cast_fu_25604_p1() {
    tmp_903_cast_cast_fu_25604_p1 = esl_sext<10,8>(tmp_773_fu_25598_p2.read());
}

void ShuffleNetV2::thread_tmp_903_fu_29476_p2() {
    tmp_903_fu_29476_p2 = (!i166_cast1_reg_41828.read().is_01() || !tmp_901_fu_29466_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(i166_cast1_reg_41828.read()) + sc_biguint<8>(tmp_901_fu_29466_p2.read()));
}

void ShuffleNetV2::thread_tmp_904_fu_29513_p1() {
    tmp_904_fu_29513_p1 = esl_zext<64,32>(tmp_1029_cast_fu_29510_p1.read());
}

void ShuffleNetV2::thread_tmp_905_fu_29487_p2() {
    tmp_905_fu_29487_p2 = (!tmp68_fu_29481_p2.read().is_01() || !i166_cast_reg_41823.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp68_fu_29481_p2.read()) + sc_biguint<12>(i166_cast_reg_41823.read()));
}

void ShuffleNetV2::thread_tmp_906_cast_fu_29492_p1() {
    tmp_906_cast_fu_29492_p1 = esl_zext<33,12>(tmp_905_reg_41854.read());
}

void ShuffleNetV2::thread_tmp_906_fu_10927_p4() {
    tmp_906_fu_10927_p4 = esl_concat<6,3>(esl_concat<1,5>(ap_const_lv1_1, co29_reg_4673.read()), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_907_fu_29245_p2() {
    tmp_907_fu_29245_p2 = (!p_shl220_cast_fu_29231_p1.read().is_01() || !p_shl221_cast_fu_29241_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl220_cast_fu_29231_p1.read()) - sc_biguint<8>(p_shl221_cast_fu_29241_p1.read()));
}

void ShuffleNetV2::thread_tmp_908_fu_29255_p2() {
    tmp_908_fu_29255_p2 = (!tmp_907_fu_29245_p2.read().is_01() || !tmp_1026_cast_reg_41731.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_907_fu_29245_p2.read()) + sc_biguint<8>(tmp_1026_cast_reg_41731.read()));
}

void ShuffleNetV2::thread_tmp_909_fu_29272_p2() {
    tmp_909_fu_29272_p2 = (!p_shl222_cast_fu_29268_p1.read().is_01() || !p_shl220_cast1_fu_29227_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl222_cast_fu_29268_p1.read()) - sc_biguint<10>(p_shl220_cast1_fu_29227_p1.read()));
}

void ShuffleNetV2::thread_tmp_910_fu_29288_p2() {
    tmp_910_fu_29288_p2 = (!tmp67_fu_29282_p2.read().is_01() || !co155_cast_reg_41708.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp67_fu_29282_p2.read()) + sc_biguint<12>(co155_cast_reg_41708.read()));
}

void ShuffleNetV2::thread_tmp_911_fu_29298_p4() {
    tmp_911_fu_29298_p4 = tmp_908_fu_29255_p2.read().range(7, 3);
}

void ShuffleNetV2::thread_tmp_912_fu_10937_p1() {
    tmp_912_fu_10937_p1 = esl_sext<10,9>(tmp_906_fu_10927_p4.read());
}

void ShuffleNetV2::thread_tmp_913_cast_fu_26246_p1() {
    tmp_913_cast_fu_26246_p1 = esl_zext<7,4>(p_lshr_f17_cast_fu_26236_p4.read());
}

void ShuffleNetV2::thread_tmp_913_fu_10945_p2() {
    tmp_913_fu_10945_p2 = (!p_shl315_cast_fu_10923_p1.read().is_01() || !p_shl316_cast_fu_10941_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl315_cast_fu_10923_p1.read()) - sc_biguint<13>(p_shl316_cast_fu_10941_p1.read()));
}

void ShuffleNetV2::thread_tmp_914_fu_29771_p2() {
    tmp_914_fu_29771_p2 = (!p_shl218_cast_fu_29757_p1.read().is_01() || !p_shl219_cast_fu_29767_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl218_cast_fu_29757_p1.read()) - sc_biguint<8>(p_shl219_cast_fu_29767_p1.read()));
}

void ShuffleNetV2::thread_tmp_915_fu_10970_p1() {
    tmp_915_fu_10970_p1 = co29_reg_4673.read().range(3-1, 0);
}

void ShuffleNetV2::thread_tmp_916_cast1_fu_29620_p1() {
    tmp_916_cast1_fu_29620_p1 = esl_zext<13,3>(h_106_fu_29614_p2.read());
}

void ShuffleNetV2::thread_tmp_916_cast_cast_fu_26576_p1() {
    tmp_916_cast_cast_fu_26576_p1 = esl_sext<10,7>(tmp_788_fu_26570_p2.read());
}

void ShuffleNetV2::thread_tmp_916_cast_fu_29624_p1() {
    tmp_916_cast_fu_29624_p1 = esl_zext<12,3>(h_106_fu_29614_p2.read());
}

void ShuffleNetV2::thread_tmp_916_fu_10984_p3() {
    tmp_916_fu_10984_p3 = esl_concat<2,5>(newIndex7_fu_10974_p4.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_917_cast_fu_26618_p1() {
    tmp_917_cast_fu_26618_p1 = esl_sext<32,7>(tmp_789_reg_40748.read());
}

void ShuffleNetV2::thread_tmp_917_fu_29807_p2() {
    tmp_917_fu_29807_p2 = (!tmp_914_reg_41932.read().is_01() || !ci71_cast_fu_29791_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_914_reg_41932.read()) + sc_biguint<8>(ci71_cast_fu_29791_p1.read()));
}

void ShuffleNetV2::thread_tmp_918_cast_fu_29812_p1() {
    tmp_918_cast_fu_29812_p1 = esl_sext<12,8>(tmp_917_fu_29807_p2.read());
}

void ShuffleNetV2::thread_tmp_918_fu_10996_p3() {
    tmp_918_fu_10996_p3 = esl_concat<2,3>(newIndex7_fu_10974_p4.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_919_cast_fu_29816_p1() {
    tmp_919_cast_fu_29816_p1 = esl_zext<19,5>(ci71_reg_7677.read());
}

void ShuffleNetV2::thread_tmp_919_fu_11008_p2() {
    tmp_919_fu_11008_p2 = (!p_shl313_cast_fu_10992_p1.read().is_01() || !p_shl314_cast_fu_11004_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl313_cast_fu_10992_p1.read()) - sc_biguint<8>(p_shl314_cast_fu_11004_p1.read()));
}

void ShuffleNetV2::thread_tmp_920_cast1_fu_29702_p1() {
    tmp_920_cast1_fu_29702_p1 = esl_zext<14,3>(w_110_fu_29696_p2.read());
}

void ShuffleNetV2::thread_tmp_920_cast2_fu_29706_p1() {
    tmp_920_cast2_fu_29706_p1 = esl_zext<13,3>(w_110_fu_29696_p2.read());
}

void ShuffleNetV2::thread_tmp_920_cast_fu_26596_p1() {
    tmp_920_cast_fu_26596_p1 = esl_sext<11,10>(tmp_791_reg_40753.read());
}

void ShuffleNetV2::thread_tmp_920_fu_10951_p1() {
    tmp_920_fu_10951_p1 = esl_sext<33,13>(tmp_913_fu_10945_p2.read());
}

void ShuffleNetV2::thread_tmp_921_fu_30083_p2() {
    tmp_921_fu_30083_p2 = (!p_shl223_cast_fu_30067_p1.read().is_01() || !p_shl224_cast_fu_30079_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl223_cast_fu_30067_p1.read()) - sc_biguint<8>(p_shl224_cast_fu_30079_p1.read()));
}

void ShuffleNetV2::thread_tmp_922_fu_30093_p2() {
    tmp_922_fu_30093_p2 = (!i172_cast1_reg_42039.read().is_01() || !tmp_921_fu_30083_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(i172_cast1_reg_42039.read()) + sc_biguint<8>(tmp_921_fu_30083_p2.read()));
}

void ShuffleNetV2::thread_tmp_923_fu_30130_p1() {
    tmp_923_fu_30130_p1 = esl_zext<64,32>(tmp_1057_cast_fu_30127_p1.read());
}

void ShuffleNetV2::thread_tmp_924_fu_30104_p2() {
    tmp_924_fu_30104_p2 = (!tmp70_fu_30098_p2.read().is_01() || !i172_cast_reg_42034.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp70_fu_30098_p2.read()) + sc_biguint<12>(i172_cast_reg_42034.read()));
}

void ShuffleNetV2::thread_tmp_925_cast_fu_30109_p1() {
    tmp_925_cast_fu_30109_p1 = esl_zext<33,12>(tmp_924_reg_42065.read());
}

void ShuffleNetV2::thread_tmp_925_fu_10955_p2() {
    tmp_925_fu_10955_p2 = (!tmp_721_cast1_reg_34346.read().is_01() || !tmp_920_fu_10951_p1.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_721_cast1_reg_34346.read()) + sc_bigint<33>(tmp_920_fu_10951_p1.read()));
}

void ShuffleNetV2::thread_tmp_926_fu_29862_p2() {
    tmp_926_fu_29862_p2 = (!p_shl225_cast_fu_29848_p1.read().is_01() || !p_shl226_cast_fu_29858_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl225_cast_fu_29848_p1.read()) - sc_biguint<8>(p_shl226_cast_fu_29858_p1.read()));
}

void ShuffleNetV2::thread_tmp_927_fu_29872_p2() {
    tmp_927_fu_29872_p2 = (!tmp_926_fu_29862_p2.read().is_01() || !tmp_1048_cast_reg_41942.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_926_fu_29862_p2.read()) + sc_biguint<8>(tmp_1048_cast_reg_41942.read()));
}

void ShuffleNetV2::thread_tmp_928_fu_29889_p2() {
    tmp_928_fu_29889_p2 = (!p_shl227_cast_fu_29885_p1.read().is_01() || !p_shl225_cast1_fu_29844_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl227_cast_fu_29885_p1.read()) - sc_biguint<10>(p_shl225_cast1_fu_29844_p1.read()));
}

void ShuffleNetV2::thread_tmp_929_cast_cast_fu_26374_p1() {
    tmp_929_cast_cast_fu_26374_p1 = esl_sext<9,8>(tmp_796_fu_26368_p2.read());
}

void ShuffleNetV2::thread_tmp_929_fu_29905_p2() {
    tmp_929_fu_29905_p2 = (!tmp69_fu_29899_p2.read().is_01() || !co158_cast_reg_41919.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp69_fu_29899_p2.read()) + sc_biguint<12>(co158_cast_reg_41919.read()));
}

void ShuffleNetV2::thread_tmp_930_fu_29915_p4() {
    tmp_930_fu_29915_p4 = tmp_927_fu_29872_p2.read().range(7, 3);
}

void ShuffleNetV2::thread_tmp_931_fu_10960_p1() {
    tmp_931_fu_10960_p1 = esl_sext<64,33>(tmp_925_fu_10955_p2.read());
}

void ShuffleNetV2::thread_tmp_932_fu_10871_p2() {
    tmp_932_fu_10871_p2 = (!tmp_894_reg_35080.read().is_01() || !tmp_336_cast_fu_10867_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_894_reg_35080.read()) + sc_biguint<9>(tmp_336_cast_fu_10867_p1.read()));
}

void ShuffleNetV2::thread_tmp_933_cast1_fu_30167_p1() {
    tmp_933_cast1_fu_30167_p1 = esl_zext<13,2>(w111_reg_7732.read());
}

void ShuffleNetV2::thread_tmp_933_cast_cast_fu_26945_p1() {
    tmp_933_cast_cast_fu_26945_p1 = esl_sext<10,7>(tmp_801_fu_26939_p2.read());
}

void ShuffleNetV2::thread_tmp_933_cast_fu_30171_p1() {
    tmp_933_cast_fu_30171_p1 = esl_zext<36,2>(w111_reg_7732.read());
}

void ShuffleNetV2::thread_tmp_934_cast_fu_26987_p1() {
    tmp_934_cast_fu_26987_p1 = esl_sext<32,7>(tmp_802_reg_40891.read());
}

void ShuffleNetV2::thread_tmp_934_fu_11059_p3() {
    tmp_934_fu_11059_p3 = esl_concat<2,5>(ap_const_lv2_2, tmp_933_reg_4696.read());
}

void ShuffleNetV2::thread_tmp_935_fu_30542_p2() {
    tmp_935_fu_30542_p2 = (!p_shl230_cast_fu_30528_p1.read().is_01() || !p_shl231_cast_fu_30538_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl230_cast_fu_30528_p1.read()) - sc_biguint<8>(p_shl231_cast_fu_30538_p1.read()));
}

void ShuffleNetV2::thread_tmp_936_fu_30448_p2() {
    tmp_936_fu_30448_p2 = (!p_shl228_cast_fu_30432_p1.read().is_01() || !p_shl229_cast_fu_30444_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl228_cast_fu_30432_p1.read()) - sc_biguint<8>(p_shl229_cast_fu_30444_p1.read()));
}

void ShuffleNetV2::thread_tmp_937_cast_fu_26965_p1() {
    tmp_937_cast_fu_26965_p1 = esl_sext<11,10>(tmp_806_reg_40896.read());
}

void ShuffleNetV2::thread_tmp_937_fu_30458_p2() {
    tmp_937_fu_30458_p2 = (!i175_cast1_reg_42182.read().is_01() || !tmp_936_fu_30448_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(i175_cast1_reg_42182.read()) + sc_biguint<8>(tmp_936_fu_30448_p2.read()));
}

void ShuffleNetV2::thread_tmp_938_fu_30495_p1() {
    tmp_938_fu_30495_p1 = esl_zext<64,32>(tmp_1074_cast_fu_30492_p1.read());
}

void ShuffleNetV2::thread_tmp_939_fu_30469_p2() {
    tmp_939_fu_30469_p2 = (!tmp72_fu_30463_p2.read().is_01() || !i175_cast_reg_42177.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp72_fu_30463_p2.read()) + sc_biguint<12>(i175_cast_reg_42177.read()));
}

void ShuffleNetV2::thread_tmp_940_cast_fu_30474_p1() {
    tmp_940_cast_fu_30474_p1 = esl_zext<33,12>(tmp_939_reg_42208.read());
}

void ShuffleNetV2::thread_tmp_940_fu_11067_p1() {
    tmp_940_fu_11067_p1 = esl_sext<8,7>(tmp_934_fu_11059_p3.read());
}

void ShuffleNetV2::thread_tmp_941_cast1_fu_30191_p1() {
    tmp_941_cast1_fu_30191_p1 = esl_zext<11,2>(h107_reg_7743.read());
}

void ShuffleNetV2::thread_tmp_941_cast_fu_27055_p1() {
    tmp_941_cast_fu_27055_p1 = esl_zext<7,4>(p_lshr_f18_cast_fu_27045_p4.read());
}

void ShuffleNetV2::thread_tmp_941_fu_30187_p1() {
    tmp_941_fu_30187_p1 = esl_zext<64,2>(h107_reg_7743.read());
}

void ShuffleNetV2::thread_tmp_942_fu_30578_p2() {
    tmp_942_fu_30578_p2 = (!tmp_935_reg_42232.read().is_01() || !ci73_cast_fu_30562_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_935_reg_42232.read()) + sc_biguint<8>(ci73_cast_fu_30562_p1.read()));
}

void ShuffleNetV2::thread_tmp_943_cast_cast_fu_27385_p1() {
    tmp_943_cast_cast_fu_27385_p1 = esl_sext<10,7>(tmp_820_fu_27379_p2.read());
}

void ShuffleNetV2::thread_tmp_943_cast_fu_30583_p1() {
    tmp_943_cast_fu_30583_p1 = esl_sext<12,8>(tmp_942_fu_30578_p2.read());
}

void ShuffleNetV2::thread_tmp_943_fu_11071_p1() {
    tmp_943_fu_11071_p1 = esl_zext<33,8>(tmp_940_fu_11067_p1.read());
}

void ShuffleNetV2::thread_tmp_944_cast1_fu_30587_p1() {
    tmp_944_cast1_fu_30587_p1 = esl_zext<19,5>(ci73_reg_7798.read());
}

void ShuffleNetV2::thread_tmp_944_cast_fu_27427_p1() {
    tmp_944_cast_fu_27427_p1 = esl_sext<32,7>(tmp_821_reg_41048.read());
}

void ShuffleNetV2::thread_tmp_944_fu_11075_p2() {
    tmp_944_fu_11075_p2 = (!tmp_943_fu_11071_p1.read().is_01() || !tmp_720_cast1_reg_34283.read().is_01())? sc_lv<33>(): (sc_biguint<33>(tmp_943_fu_11071_p1.read()) + sc_bigint<33>(tmp_720_cast1_reg_34283.read()));
}

void ShuffleNetV2::thread_tmp_945_fu_30235_p2() {
    tmp_945_fu_30235_p2 = (!p_shl234_cast_fu_30219_p1.read().is_01() || !p_shl235_cast_fu_30231_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl234_cast_fu_30219_p1.read()) - sc_biguint<8>(p_shl235_cast_fu_30231_p1.read()));
}

void ShuffleNetV2::thread_tmp_946_fu_30245_p2() {
    tmp_946_fu_30245_p2 = (!tmp_945_fu_30235_p2.read().is_01() || !co161_cast1_reg_42081.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_945_fu_30235_p2.read()) + sc_biguint<8>(co161_cast1_reg_42081.read()));
}

void ShuffleNetV2::thread_tmp_947_cast1_fu_30264_p1() {
    tmp_947_cast1_fu_30264_p1 = esl_zext<35,32>(tmp_1093_cast_fu_30261_p1.read());
}

void ShuffleNetV2::thread_tmp_947_cast_fu_27405_p1() {
    tmp_947_cast_fu_27405_p1 = esl_sext<11,10>(tmp_823_reg_41053.read());
}

void ShuffleNetV2::thread_tmp_947_fu_11080_p1() {
    tmp_947_fu_11080_p1 = esl_sext<64,33>(tmp_944_fu_11075_p2.read());
}

void ShuffleNetV2::thread_tmp_948_fu_30256_p2() {
    tmp_948_fu_30256_p2 = (!co161_cast_reg_42076.read().is_01() || !tmp71_fu_30250_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(co161_cast_reg_42076.read()) + sc_biguint<10>(tmp71_fu_30250_p2.read()));
}

void ShuffleNetV2::thread_tmp_949_cast_fu_30306_p1() {
    tmp_949_cast_fu_30306_p1 = esl_zext<13,10>(tmp_948_reg_42144.read());
}

void ShuffleNetV2::thread_tmp_949_fu_11030_p2() {
    tmp_949_fu_11030_p2 = (!tmp_919_reg_35124.read().is_01() || !tmp_340_cast_fu_11026_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_919_reg_35124.read()) + sc_biguint<8>(tmp_340_cast_fu_11026_p1.read()));
}

void ShuffleNetV2::thread_tmp_950_fu_30862_p2() {
    tmp_950_fu_30862_p2 = (!p_shl232_cast_fu_30846_p1.read().is_01() || !p_shl233_cast_fu_30858_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl232_cast_fu_30846_p1.read()) - sc_biguint<8>(p_shl233_cast_fu_30858_p1.read()));
}

void ShuffleNetV2::thread_tmp_951_fu_30872_p2() {
    tmp_951_fu_30872_p2 = (!i178_cast1_reg_42339.read().is_01() || !tmp_950_fu_30862_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(i178_cast1_reg_42339.read()) + sc_biguint<8>(tmp_950_fu_30862_p2.read()));
}

void ShuffleNetV2::thread_tmp_952_cast_fu_26732_p1() {
    tmp_952_cast_fu_26732_p1 = esl_sext<10,7>(tmp_815_fu_26726_p2.read());
}

void ShuffleNetV2::thread_tmp_952_fu_30909_p1() {
    tmp_952_fu_30909_p1 = esl_zext<64,32>(tmp_1084_cast_fu_30906_p1.read());
}

void ShuffleNetV2::thread_tmp_953_cast_fu_26752_p1() {
    tmp_953_cast_fu_26752_p1 = esl_sext<32,7>(tmp_816_reg_40826.read());
}

void ShuffleNetV2::thread_tmp_953_fu_30883_p2() {
    tmp_953_fu_30883_p2 = (!tmp74_fu_30877_p2.read().is_01() || !i178_cast_reg_42334.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp74_fu_30877_p2.read()) + sc_biguint<12>(i178_cast_reg_42334.read()));
}

void ShuffleNetV2::thread_tmp_954_cast_fu_30888_p1() {
    tmp_954_cast_fu_30888_p1 = esl_zext<33,12>(tmp_953_reg_42365.read());
}

void ShuffleNetV2::thread_tmp_954_fu_11107_p3() {
    tmp_954_fu_11107_p3 = esl_concat<5,4>(co32_reg_4708.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_955_fu_30633_p2() {
    tmp_955_fu_30633_p2 = (!p_shl236_cast_fu_30619_p1.read().is_01() || !p_shl237_cast_fu_30629_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl236_cast_fu_30619_p1.read()) - sc_biguint<8>(p_shl237_cast_fu_30629_p1.read()));
}

void ShuffleNetV2::thread_tmp_956_fu_30643_p2() {
    tmp_956_fu_30643_p2 = (!tmp_955_fu_30633_p2.read().is_01() || !tmp_1081_cast_reg_42242.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_955_fu_30633_p2.read()) + sc_biguint<8>(tmp_1081_cast_reg_42242.read()));
}

void ShuffleNetV2::thread_tmp_957_fu_30660_p2() {
    tmp_957_fu_30660_p2 = (!p_shl238_cast_fu_30656_p1.read().is_01() || !p_shl236_cast1_fu_30615_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl238_cast_fu_30656_p1.read()) - sc_biguint<10>(p_shl236_cast1_fu_30615_p1.read()));
}

void ShuffleNetV2::thread_tmp_958_fu_30676_p2() {
    tmp_958_fu_30676_p2 = (!tmp73_fu_30670_p2.read().is_01() || !co163_cast179_cast_reg_42219.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp73_fu_30670_p2.read()) + sc_biguint<11>(co163_cast179_cast_reg_42219.read()));
}

void ShuffleNetV2::thread_tmp_959_fu_30686_p4() {
    tmp_959_fu_30686_p4 = tmp_956_fu_30643_p2.read().range(7, 3);
}

void ShuffleNetV2::thread_tmp_960_fu_11119_p3() {
    tmp_960_fu_11119_p3 = esl_concat<5,1>(co32_reg_4708.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_961_cast_cast_fu_27183_p1() {
    tmp_961_cast_cast_fu_27183_p1 = esl_sext<9,8>(tmp_827_fu_27177_p2.read());
}

void ShuffleNetV2::thread_tmp_961_fu_11131_p2() {
    tmp_961_fu_11131_p2 = (!p_shl318_cast_fu_11127_p1.read().is_01() || !p_shl317_cast_fu_11115_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl318_cast_fu_11127_p1.read()) + sc_biguint<10>(p_shl317_cast_fu_11115_p1.read()));
}

void ShuffleNetV2::thread_tmp_962_fu_31087_p2() {
    tmp_962_fu_31087_p2 = (!co166_cast_fu_31037_p1.read().is_01() || !ap_const_lv8_60.is_01())? sc_lv<8>(): (sc_biguint<8>(co166_cast_fu_31037_p1.read()) + sc_biguint<8>(ap_const_lv8_60));
}

void ShuffleNetV2::thread_tmp_963_cast_fu_9893_p1() {
    tmp_963_cast_fu_9893_p1 = esl_sext<64,8>(tmp_657_fu_9888_p2.read());
}

void ShuffleNetV2::thread_tmp_963_fu_11230_p3() {
    tmp_963_fu_11230_p3 = esl_concat<5,4>(co35_reg_4741.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_964_cast_fu_30972_p1() {
    tmp_964_cast_fu_30972_p1 = esl_zext<12,3>(h_110_fu_30966_p2.read());
}

void ShuffleNetV2::thread_tmp_964_fu_11242_p3() {
    tmp_964_fu_11242_p3 = esl_concat<5,1>(co35_reg_4741.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_965_fu_31290_p2() {
    tmp_965_fu_31290_p2 = (!p_shl239_cast_fu_31276_p1.read().is_01() || !p_shl240_cast_fu_31286_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl239_cast_fu_31276_p1.read()) - sc_biguint<8>(p_shl240_cast_fu_31286_p1.read()));
}

void ShuffleNetV2::thread_tmp_966_cast1_fu_31139_p1() {
    tmp_966_cast1_fu_31139_p1 = esl_zext<13,3>(h_112_fu_31133_p2.read());
}

void ShuffleNetV2::thread_tmp_966_cast_fu_31143_p1() {
    tmp_966_cast_fu_31143_p1 = esl_zext<12,3>(h_112_fu_31133_p2.read());
}

void ShuffleNetV2::thread_tmp_966_fu_11254_p2() {
    tmp_966_fu_11254_p2 = (!p_shl324_cast_fu_11250_p1.read().is_01() || !p_shl323_cast_fu_11238_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl324_cast_fu_11250_p1.read()) + sc_biguint<10>(p_shl323_cast_fu_11238_p1.read()));
}

void ShuffleNetV2::thread_tmp_967_cast1_fu_31023_p1() {
    tmp_967_cast1_fu_31023_p1 = esl_zext<14,3>(w_114_fu_31017_p2.read());
}

void ShuffleNetV2::thread_tmp_967_cast_fu_27612_p1() {
    tmp_967_cast_fu_27612_p1 = esl_zext<8,3>(p_lshr_f19_cast_fu_27602_p4.read());
}

void ShuffleNetV2::thread_tmp_967_fu_11266_p3() {
    tmp_967_fu_11266_p3 = esl_concat<6,4>(tmp_341_fu_11260_p2.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_968_fu_31326_p2() {
    tmp_968_fu_31326_p2 = (!tmp_965_reg_42487.read().is_01() || !ci75_cast_fu_31310_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_965_reg_42487.read()) + sc_biguint<8>(ci75_cast_fu_31310_p1.read()));
}

void ShuffleNetV2::thread_tmp_969_cast_cast_fu_27914_p1() {
    tmp_969_cast_cast_fu_27914_p1 = esl_sext<10,8>(tmp_839_fu_27908_p2.read());
}

void ShuffleNetV2::thread_tmp_969_cast_fu_31331_p1() {
    tmp_969_cast_fu_31331_p1 = esl_sext<12,8>(tmp_968_fu_31326_p2.read());
}

void ShuffleNetV2::thread_tmp_969_fu_11278_p3() {
    tmp_969_fu_11278_p3 = esl_concat<6,1>(tmp_341_fu_11260_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_970_cast1_fu_31335_p1() {
    tmp_970_cast1_fu_31335_p1 = esl_zext<20,5>(ci75_reg_7919.read());
}

void ShuffleNetV2::thread_tmp_970_cast_fu_27956_p1() {
    tmp_970_cast_fu_27956_p1 = esl_sext<32,8>(tmp_840_reg_41249.read());
}

void ShuffleNetV2::thread_tmp_970_fu_11290_p2() {
    tmp_970_fu_11290_p2 = (!p_shl322_cast_fu_11286_p1.read().is_01() || !p_shl321_cast_fu_11274_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl322_cast_fu_11286_p1.read()) + sc_biguint<11>(p_shl321_cast_fu_11274_p1.read()));
}

void ShuffleNetV2::thread_tmp_971_cast1_fu_31221_p1() {
    tmp_971_cast1_fu_31221_p1 = esl_zext<14,3>(w_116_fu_31215_p2.read());
}

void ShuffleNetV2::thread_tmp_971_cast_fu_31225_p1() {
    tmp_971_cast_fu_31225_p1 = esl_zext<13,3>(w_116_fu_31215_p2.read());
}

void ShuffleNetV2::thread_tmp_971_fu_11153_p2() {
    tmp_971_fu_11153_p2 = (!tmp_342_cast_fu_11149_p1.read().is_01() || !tmp_961_reg_35199.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_342_cast_fu_11149_p1.read()) + sc_biguint<10>(tmp_961_reg_35199.read()));
}

void ShuffleNetV2::thread_tmp_972_fu_31602_p2() {
    tmp_972_fu_31602_p2 = (!p_shl241_cast_fu_31586_p1.read().is_01() || !p_shl242_cast_fu_31598_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl241_cast_fu_31586_p1.read()) - sc_biguint<8>(p_shl242_cast_fu_31598_p1.read()));
}

void ShuffleNetV2::thread_tmp_973_cast_fu_27934_p1() {
    tmp_973_cast_fu_27934_p1 = esl_sext<11,10>(tmp_842_reg_41254.read());
}

void ShuffleNetV2::thread_tmp_973_fu_31612_p2() {
    tmp_973_fu_31612_p2 = (!i184_cast1_reg_42594.read().is_01() || !tmp_972_fu_31602_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(i184_cast1_reg_42594.read()) + sc_biguint<8>(tmp_972_fu_31602_p2.read()));
}

void ShuffleNetV2::thread_tmp_974_fu_31649_p1() {
    tmp_974_fu_31649_p1 = esl_zext<64,32>(tmp_1115_cast_fu_31646_p1.read());
}

void ShuffleNetV2::thread_tmp_975_fu_31623_p2() {
    tmp_975_fu_31623_p2 = (!tmp76_fu_31617_p2.read().is_01() || !i184_cast_reg_42589.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp76_fu_31617_p2.read()) + sc_biguint<12>(i184_cast_reg_42589.read()));
}

void ShuffleNetV2::thread_tmp_976_cast_fu_31628_p1() {
    tmp_976_cast_fu_31628_p1 = esl_zext<33,12>(tmp_975_reg_42620.read());
}

void ShuffleNetV2::thread_tmp_976_fu_11158_p3() {
    tmp_976_fu_11158_p3 = esl_concat<10,4>(tmp_971_fu_11153_p2.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_977_fu_31381_p2() {
    tmp_977_fu_31381_p2 = (!p_shl243_cast_fu_31367_p1.read().is_01() || !p_shl244_cast_fu_31377_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl243_cast_fu_31367_p1.read()) - sc_biguint<8>(p_shl244_cast_fu_31377_p1.read()));
}

void ShuffleNetV2::thread_tmp_978_fu_31391_p2() {
    tmp_978_fu_31391_p2 = (!tmp_977_fu_31381_p2.read().is_01() || !tmp_1111_cast_reg_42497.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_977_fu_31381_p2.read()) + sc_biguint<8>(tmp_1111_cast_reg_42497.read()));
}

void ShuffleNetV2::thread_tmp_979_fu_31408_p2() {
    tmp_979_fu_31408_p2 = (!p_shl245_cast_fu_31404_p1.read().is_01() || !p_shl243_cast1_fu_31363_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl245_cast_fu_31404_p1.read()) - sc_biguint<10>(p_shl243_cast1_fu_31363_p1.read()));
}

void ShuffleNetV2::thread_tmp_980_fu_11170_p3() {
    tmp_980_fu_11170_p3 = esl_concat<10,1>(tmp_971_fu_11153_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_981_fu_31424_p2() {
    tmp_981_fu_31424_p2 = (!tmp75_fu_31418_p2.read().is_01() || !co168_cast_reg_42474.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp75_fu_31418_p2.read()) + sc_biguint<13>(co168_cast_reg_42474.read()));
}

void ShuffleNetV2::thread_tmp_982_cast1_fu_9960_p1() {
    tmp_982_cast1_fu_9960_p1 = esl_sext<9,8>(tmp_661_fu_9954_p2.read());
}

void ShuffleNetV2::thread_tmp_982_cast_fu_27720_p1() {
    tmp_982_cast_fu_27720_p1 = esl_sext<12,10>(tmp_846_fu_27714_p2.read());
}

void ShuffleNetV2::thread_tmp_982_fu_11182_p2() {
    tmp_982_fu_11182_p2 = (!p_shl319_cast_fu_11166_p1.read().is_01() || !p_shl320_cast_fu_11178_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl319_cast_fu_11166_p1.read()) + sc_biguint<15>(p_shl320_cast_fu_11178_p1.read()));
}

void ShuffleNetV2::thread_tmp_983_fu_31434_p4() {
    tmp_983_fu_31434_p4 = tmp_978_fu_31391_p2.read().range(7, 3);
}

void ShuffleNetV2::thread_tmp_984_cast1_fu_31686_p1() {
    tmp_984_cast1_fu_31686_p1 = esl_zext<14,2>(w117_reg_7974.read());
}

void ShuffleNetV2::thread_tmp_984_cast_fu_31690_p1() {
    tmp_984_cast_fu_31690_p1 = esl_zext<36,2>(w117_reg_7974.read());
}

void ShuffleNetV2::thread_tmp_984_fu_11488_p2() {
    tmp_984_fu_11488_p2 = (!tmp_720_cast1_reg_34283.read().is_01() || !ap_const_lv33_D8.is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_720_cast1_reg_34283.read()) + sc_biguint<33>(ap_const_lv33_D8));
}

void ShuffleNetV2::thread_tmp_985_fu_32073_p2() {
    tmp_985_fu_32073_p2 = (!p_shl248_cast_fu_32059_p1.read().is_01() || !p_shl249_cast_fu_32069_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl248_cast_fu_32059_p1.read()) - sc_biguint<8>(p_shl249_cast_fu_32069_p1.read()));
}

void ShuffleNetV2::thread_tmp_986_cast_cast_fu_28283_p1() {
    tmp_986_cast_cast_fu_28283_p1 = esl_sext<9,8>(tmp_852_fu_28277_p2.read());
}

void ShuffleNetV2::thread_tmp_986_fu_31979_p2() {
    tmp_986_fu_31979_p2 = (!p_shl246_cast_fu_31963_p1.read().is_01() || !p_shl247_cast_fu_31975_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl246_cast_fu_31963_p1.read()) - sc_biguint<8>(p_shl247_cast_fu_31975_p1.read()));
}

void ShuffleNetV2::thread_tmp_987_cast_fu_28325_p1() {
    tmp_987_cast_fu_28325_p1 = esl_sext<32,8>(tmp_853_reg_41392.read());
}

void ShuffleNetV2::thread_tmp_987_fu_31989_p2() {
    tmp_987_fu_31989_p2 = (!i187_cast1_reg_42737.read().is_01() || !tmp_986_fu_31979_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(i187_cast1_reg_42737.read()) + sc_biguint<8>(tmp_986_fu_31979_p2.read()));
}

void ShuffleNetV2::thread_tmp_988_fu_32026_p1() {
    tmp_988_fu_32026_p1 = esl_zext<64,32>(tmp_1132_cast_fu_32023_p1.read());
}

void ShuffleNetV2::thread_tmp_989_fu_32000_p2() {
    tmp_989_fu_32000_p2 = (!tmp78_fu_31994_p2.read().is_01() || !i187_cast_reg_42732.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp78_fu_31994_p2.read()) + sc_biguint<12>(i187_cast_reg_42732.read()));
}

void ShuffleNetV2::thread_tmp_990_cast1_fu_32005_p1() {
    tmp_990_cast1_fu_32005_p1 = esl_zext<33,12>(tmp_989_reg_42763.read());
}

void ShuffleNetV2::thread_tmp_990_cast_fu_28303_p1() {
    tmp_990_cast_fu_28303_p1 = esl_sext<11,9>(tmp_855_reg_41397.read());
}

void ShuffleNetV2::thread_tmp_990_fu_11493_p1() {
    tmp_990_fu_11493_p1 = esl_sext<64,33>(tmp_984_fu_11488_p2.read());
}

void ShuffleNetV2::thread_tmp_991_cast_fu_31710_p1() {
    tmp_991_cast_fu_31710_p1 = esl_zext<11,2>(h113_reg_7985.read());
}

void ShuffleNetV2::thread_tmp_991_fu_31706_p1() {
    tmp_991_fu_31706_p1 = esl_zext<64,2>(h113_reg_7985.read());
}

void ShuffleNetV2::thread_tmp_992_fu_11439_p3() {
    tmp_992_fu_11439_p3 = esl_concat<8,5>(tmp_343_fu_11433_p2.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_993_fu_11451_p3() {
    tmp_993_fu_11451_p3 = esl_concat<8,3>(tmp_343_fu_11433_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_994_cast_fu_28391_p1() {
    tmp_994_cast_fu_28391_p1 = esl_zext<8,3>(p_lshr_f20_cast_fu_28381_p4.read());
}

void ShuffleNetV2::thread_tmp_994_fu_32109_p2() {
    tmp_994_fu_32109_p2 = (!tmp_985_reg_42787.read().is_01() || !ci77_cast_fu_32093_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_985_reg_42787.read()) + sc_biguint<8>(ci77_cast_fu_32093_p1.read()));
}

void ShuffleNetV2::thread_tmp_995_cast_fu_10013_p1() {
    tmp_995_cast_fu_10013_p1 = esl_sext<64,9>(tmp_671_fu_10008_p2.read());
}

void ShuffleNetV2::thread_tmp_995_fu_11463_p2() {
    tmp_995_fu_11463_p2 = (!p_shl331_cast_fu_11447_p1.read().is_01() || !p_shl332_cast_fu_11459_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl331_cast_fu_11447_p1.read()) - sc_biguint<14>(p_shl332_cast_fu_11459_p1.read()));
}

void ShuffleNetV2::thread_tmp_996_cast_cast_fu_28693_p1() {
    tmp_996_cast_cast_fu_28693_p1 = esl_sext<9,8>(tmp_871_fu_28687_p2.read());
}

void ShuffleNetV2::thread_tmp_996_cast_fu_32114_p1() {
    tmp_996_cast_fu_32114_p1 = esl_sext<12,8>(tmp_994_fu_32109_p2.read());
}

void ShuffleNetV2::thread_tmp_996_fu_11503_p1() {
    tmp_996_fu_11503_p1 = co38_reg_4774.read().range(3-1, 0);
}

void ShuffleNetV2::thread_tmp_997_cast1_fu_32118_p1() {
    tmp_997_cast1_fu_32118_p1 = esl_zext<20,5>(ci77_reg_8040.read());
}

void ShuffleNetV2::thread_tmp_997_cast_fu_28739_p1() {
    tmp_997_cast_fu_28739_p1 = esl_sext<32,8>(tmp_872_reg_41549.read());
}

void ShuffleNetV2::thread_tmp_997_fu_11517_p3() {
    tmp_997_fu_11517_p3 = esl_concat<2,5>(newIndex8_fu_11507_p4.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_998_fu_31754_p2() {
    tmp_998_fu_31754_p2 = (!p_shl252_cast_fu_31738_p1.read().is_01() || !p_shl253_cast_fu_31750_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl252_cast_fu_31738_p1.read()) - sc_biguint<8>(p_shl253_cast_fu_31750_p1.read()));
}

void ShuffleNetV2::thread_tmp_999_fu_31764_p2() {
    tmp_999_fu_31764_p2 = (!tmp_998_fu_31754_p2.read().is_01() || !co171_cast_reg_42636.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_998_fu_31754_p2.read()) + sc_biguint<8>(co171_cast_reg_42636.read()));
}

void ShuffleNetV2::thread_tmp_fu_9229_p1() {
    tmp_fu_9229_p1 = esl_zext<64,5>(i_reg_4296.read());
}

void ShuffleNetV2::thread_tmp_s_fu_9261_p1() {
    tmp_s_fu_9261_p1 = esl_zext<64,10>(i1_reg_4308.read());
}

void ShuffleNetV2::thread_w_100_fu_26153_p2() {
    w_100_fu_26153_p2 = (!w99_reg_7116.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w99_reg_7116.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_102_fu_26652_p2() {
    w_102_fu_26652_p2 = (!w101_reg_7193.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w101_reg_7193.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_104_fu_27534_p2() {
    w_104_fu_27534_p2 = (!w103_reg_7325.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w103_reg_7325.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_106_fu_27990_p2() {
    w_106_fu_27990_p2 = (!w105_reg_7402.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w105_reg_7402.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_108_fu_28773_p2() {
    w_108_fu_28773_p2 = (!w107_reg_7523.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w107_reg_7523.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_110_fu_29696_p2() {
    w_110_fu_29696_p2 = (!w109_reg_7655.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(w109_reg_7655.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_w_112_fu_30161_p2() {
    w_112_fu_30161_p2 = (!w111_reg_7732.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w111_reg_7732.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_114_fu_31017_p2() {
    w_114_fu_31017_p2 = (!w113_reg_7864.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(w113_reg_7864.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_w_116_fu_31215_p2() {
    w_116_fu_31215_p2 = (!w115_reg_7897.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(w115_reg_7897.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_w_118_fu_31680_p2() {
    w_118_fu_31680_p2 = (!w117_reg_7974.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w117_reg_7974.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_120_fu_32540_p2() {
    w_120_fu_32540_p2 = (!w119_reg_8106.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(w119_reg_8106.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_w_122_fu_32738_p2() {
    w_122_fu_32738_p2 = (!w121_reg_8139.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(w121_reg_8139.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_w_124_fu_33203_p2() {
    w_124_fu_33203_p2 = (!w123_reg_8216.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w123_reg_8216.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_127_fu_34139_p2() {
    w_127_fu_34139_p2 = (!w125_reg_8370.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(w125_reg_8370.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_w_1_fu_34055_p2() {
    w_1_fu_34055_p2 = (!w126_reg_8348.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(w126_reg_8348.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_w_37_fu_9331_p2() {
    w_37_fu_9331_p2 = (!w_reg_4343.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(w_reg_4343.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void ShuffleNetV2::thread_w_38_fu_9656_p2() {
    w_38_fu_9656_p2 = (!w6_reg_4411.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w6_reg_4411.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_39_fu_9998_p2() {
    w_39_fu_9998_p2 = (!w13_reg_4491.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w13_reg_4491.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_40_fu_10484_p2() {
    w_40_fu_10484_p2 = (!w21_reg_4582.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(w21_reg_4582.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_w_41_fu_10788_p2() {
    w_41_fu_10788_p2 = (!w26_reg_4639.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w26_reg_4639.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_42_fu_11194_p2() {
    w_42_fu_11194_p2 = (!w34_reg_4730.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(w34_reg_4730.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_w_43_fu_11384_p2() {
    w_43_fu_11384_p2 = (!w37_reg_4763.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(w37_reg_4763.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_w_44_fu_11688_p2() {
    w_44_fu_11688_p2 = (!w42_reg_4820.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w42_reg_4820.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_46_fu_12076_p2() {
    w_46_fu_12076_p2 = (!w45_reg_4911.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(w45_reg_4911.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_w_48_fu_12266_p2() {
    w_48_fu_12266_p2 = (!w47_reg_4944.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(w47_reg_4944.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_w_50_fu_12594_p2() {
    w_50_fu_12594_p2 = (!w49_reg_5001.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w49_reg_5001.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_52_fu_12984_p2() {
    w_52_fu_12984_p2 = (!w51_reg_5092.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(w51_reg_5092.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_w_54_fu_13458_p2() {
    w_54_fu_13458_p2 = (!w53_reg_5169.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w53_reg_5169.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_56_fu_14263_p2() {
    w_56_fu_14263_p2 = (!w55_reg_5290.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w55_reg_5290.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_58_fu_15212_p2() {
    w_58_fu_15212_p2 = (!w57_reg_5422.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w57_reg_5422.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_60_fu_15699_p2() {
    w_60_fu_15699_p2 = (!w59_reg_5499.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w59_reg_5499.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_62_fu_16573_p2() {
    w_62_fu_16573_p2 = (!w61_reg_5631.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w61_reg_5631.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_64_fu_16771_p2() {
    w_64_fu_16771_p2 = (!w63_reg_5664.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w63_reg_5664.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_66_fu_17258_p2() {
    w_66_fu_17258_p2 = (!w65_reg_5741.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w65_reg_5741.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_68_fu_18136_p2() {
    w_68_fu_18136_p2 = (!w67_reg_5873.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w67_reg_5873.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_70_fu_18334_p2() {
    w_70_fu_18334_p2 = (!w69_reg_5906.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w69_reg_5906.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_72_fu_18833_p2() {
    w_72_fu_18833_p2 = (!w71_reg_5983.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w71_reg_5983.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_74_fu_19707_p2() {
    w_74_fu_19707_p2 = (!w73_reg_6115.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w73_reg_6115.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_76_fu_19905_p2() {
    w_76_fu_19905_p2 = (!w75_reg_6148.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w75_reg_6148.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_78_fu_20392_p2() {
    w_78_fu_20392_p2 = (!w77_reg_6225.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w77_reg_6225.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_80_fu_21258_p2() {
    w_80_fu_21258_p2 = (!w79_reg_6357.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w79_reg_6357.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_82_fu_21456_p2() {
    w_82_fu_21456_p2 = (!w81_reg_6390.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w81_reg_6390.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_84_fu_21943_p2() {
    w_84_fu_21943_p2 = (!w83_reg_6467.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w83_reg_6467.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_86_fu_22817_p2() {
    w_86_fu_22817_p2 = (!w85_reg_6599.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w85_reg_6599.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_88_fu_23015_p2() {
    w_88_fu_23015_p2 = (!w87_reg_6632.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w87_reg_6632.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_90_fu_23502_p2() {
    w_90_fu_23502_p2 = (!w89_reg_6709.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w89_reg_6709.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_92_fu_24380_p2() {
    w_92_fu_24380_p2 = (!w91_reg_6841.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w91_reg_6841.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_94_fu_24578_p2() {
    w_94_fu_24578_p2 = (!w93_reg_6874.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w93_reg_6874.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_96_fu_25073_p2() {
    w_96_fu_25073_p2 = (!w95_reg_6951.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w95_reg_6951.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_98_fu_25955_p2() {
    w_98_fu_25955_p2 = (!w97_reg_7083.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w97_reg_7083.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_weights_24_1_3x3_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state332.read())) {
        weights_24_1_3x3_V_address0 =  (sc_lv<8>) (tmp_1299_cast_fu_12682_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state259.read())) {
        weights_24_1_3x3_V_address0 =  (sc_lv<8>) (tmp_1244_cast_fu_11776_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state186.read())) {
        weights_24_1_3x3_V_address0 =  (sc_lv<8>) (tmp_1192_cast_fu_10876_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read())) {
        weights_24_1_3x3_V_address0 =  (sc_lv<8>) (tmp_1085_cast_fu_10082_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read())) {
        weights_24_1_3x3_V_address0 =  (sc_lv<8>) (tmp_651_reg_34644.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state196.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state269.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state342.read()))) {
        weights_24_1_3x3_V_address0 = grp_subconv_3x3_16_no_re_fu_8838_weight_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()))) {
        weights_24_1_3x3_V_address0 = grp_subconv_3x3_32_strid_fu_8700_weight_V_address0.read();
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
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state196.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state269.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state342.read()))) {
        weights_24_1_3x3_V_ce0 = grp_subconv_3x3_16_no_re_fu_8838_weight_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()))) {
        weights_24_1_3x3_V_ce0 = grp_subconv_3x3_32_strid_fu_8700_weight_V_ce0.read();
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
        weights_24_24_1x1_V_1_address0 = weights_24_24_1x1_V_71_reg_35854.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read())) {
        weights_24_24_1x1_V_1_address0 = weights_24_24_1x1_V_63_reg_35693.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read())) {
        weights_24_24_1x1_V_1_address0 = weights_24_24_1x1_V_55_reg_35516.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read())) {
        weights_24_24_1x1_V_1_address0 = weights_24_24_1x1_V_47_reg_35361.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        weights_24_24_1x1_V_1_address0 = weights_24_24_1x1_V_39_reg_35172.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read())) {
        weights_24_24_1x1_V_1_address0 = weights_24_24_1x1_V_31_reg_35023.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read())) {
        weights_24_24_1x1_V_1_address0 = weights_24_24_1x1_V_23_reg_34884.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        weights_24_24_1x1_V_1_address0 = weights_24_24_1x1_V_15_reg_34729.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        weights_24_24_1x1_V_1_address0 = weights_24_24_1x1_V_7_reg_34585.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_1_address0 = grp_subconv_1x1_16_p_fu_8660_weight_1_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_1_address0 = grp_subconv_1x1_32_p_fu_8446_weight_1_V_address0.read();
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
        weights_24_24_1x1_V_1_ce0 = grp_subconv_1x1_16_p_fu_8660_weight_1_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_1_ce0 = grp_subconv_1x1_32_p_fu_8446_weight_1_V_ce0.read();
    } else {
        weights_24_24_1x1_V_1_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_1_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && 
          esl_seteq<1,3,3>(tmp_696_reg_34533.read(), ap_const_lv3_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) && 
          esl_seteq<1,3,3>(tmp_731_reg_34677.read(), ap_const_lv3_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) && 
          esl_seteq<1,3,3>(tmp_780_reg_34832.read(), ap_const_lv3_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) && 
          esl_seteq<1,3,3>(tmp_828_reg_34971.read(), ap_const_lv3_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) && 
          esl_seteq<1,3,3>(tmp_915_reg_35120.read(), ap_const_lv3_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) && 
          esl_seteq<1,3,3>(tmp_996_reg_35309.read(), ap_const_lv3_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) && 
          esl_seteq<1,3,3>(tmp_1074_reg_35464.read(), ap_const_lv3_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) && 
          esl_seteq<1,3,3>(tmp_1099_reg_35641.read(), ap_const_lv3_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()) && 
          esl_seteq<1,3,3>(tmp_1142_reg_35802.read(), ap_const_lv3_1)))) {
        weights_24_24_1x1_V_1_we0 = ap_const_logic_1;
    } else {
        weights_24_24_1x1_V_1_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read())) {
        weights_24_24_1x1_V_2_address0 = weights_24_24_1x1_V_68_reg_35839.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read())) {
        weights_24_24_1x1_V_2_address0 = weights_24_24_1x1_V_60_reg_35678.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read())) {
        weights_24_24_1x1_V_2_address0 = weights_24_24_1x1_V_52_reg_35501.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read())) {
        weights_24_24_1x1_V_2_address0 = weights_24_24_1x1_V_44_reg_35346.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        weights_24_24_1x1_V_2_address0 = weights_24_24_1x1_V_36_reg_35157.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read())) {
        weights_24_24_1x1_V_2_address0 = weights_24_24_1x1_V_28_reg_35008.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read())) {
        weights_24_24_1x1_V_2_address0 = weights_24_24_1x1_V_20_reg_34869.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        weights_24_24_1x1_V_2_address0 = weights_24_24_1x1_V_12_reg_34714.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        weights_24_24_1x1_V_2_address0 = weights_24_24_1x1_V_4_reg_34570.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_2_address0 = grp_subconv_1x1_16_p_fu_8660_weight_2_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_2_address0 = grp_subconv_1x1_32_p_fu_8446_weight_2_V_address0.read();
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
        weights_24_24_1x1_V_2_ce0 = grp_subconv_1x1_16_p_fu_8660_weight_2_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_2_ce0 = grp_subconv_1x1_32_p_fu_8446_weight_2_V_ce0.read();
    } else {
        weights_24_24_1x1_V_2_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_2_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && 
          esl_seteq<1,3,3>(tmp_696_reg_34533.read(), ap_const_lv3_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) && 
          esl_seteq<1,3,3>(tmp_731_reg_34677.read(), ap_const_lv3_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) && 
          esl_seteq<1,3,3>(tmp_780_reg_34832.read(), ap_const_lv3_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) && 
          esl_seteq<1,3,3>(tmp_828_reg_34971.read(), ap_const_lv3_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) && 
          esl_seteq<1,3,3>(tmp_915_reg_35120.read(), ap_const_lv3_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) && 
          esl_seteq<1,3,3>(tmp_996_reg_35309.read(), ap_const_lv3_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) && 
          esl_seteq<1,3,3>(tmp_1074_reg_35464.read(), ap_const_lv3_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) && 
          esl_seteq<1,3,3>(tmp_1099_reg_35641.read(), ap_const_lv3_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()) && 
          esl_seteq<1,3,3>(tmp_1142_reg_35802.read(), ap_const_lv3_2)))) {
        weights_24_24_1x1_V_2_we0 = ap_const_logic_1;
    } else {
        weights_24_24_1x1_V_2_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read())) {
        weights_24_24_1x1_V_3_address0 = weights_24_24_1x1_V_64_reg_35819.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read())) {
        weights_24_24_1x1_V_3_address0 = weights_24_24_1x1_V_56_reg_35658.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read())) {
        weights_24_24_1x1_V_3_address0 = weights_24_24_1x1_V_48_reg_35481.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read())) {
        weights_24_24_1x1_V_3_address0 = weights_24_24_1x1_V_40_reg_35326.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        weights_24_24_1x1_V_3_address0 = weights_24_24_1x1_V_32_reg_35137.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read())) {
        weights_24_24_1x1_V_3_address0 = weights_24_24_1x1_V_24_reg_34988.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read())) {
        weights_24_24_1x1_V_3_address0 = weights_24_24_1x1_V_16_reg_34849.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        weights_24_24_1x1_V_3_address0 = weights_24_24_1x1_V_8_reg_34694.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        weights_24_24_1x1_V_3_address0 = weights_24_24_1x1_V_s_reg_34550.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_3_address0 = grp_subconv_1x1_16_p_fu_8660_weight_3_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_3_address0 = grp_subconv_1x1_32_p_fu_8446_weight_3_V_address0.read();
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
        weights_24_24_1x1_V_3_ce0 = grp_subconv_1x1_16_p_fu_8660_weight_3_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_3_ce0 = grp_subconv_1x1_32_p_fu_8446_weight_3_V_ce0.read();
    } else {
        weights_24_24_1x1_V_3_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_3_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && 
          esl_seteq<1,3,3>(tmp_696_reg_34533.read(), ap_const_lv3_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) && 
          esl_seteq<1,3,3>(tmp_731_reg_34677.read(), ap_const_lv3_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) && 
          esl_seteq<1,3,3>(tmp_780_reg_34832.read(), ap_const_lv3_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) && 
          esl_seteq<1,3,3>(tmp_828_reg_34971.read(), ap_const_lv3_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) && 
          esl_seteq<1,3,3>(tmp_915_reg_35120.read(), ap_const_lv3_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) && 
          esl_seteq<1,3,3>(tmp_996_reg_35309.read(), ap_const_lv3_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) && 
          esl_seteq<1,3,3>(tmp_1074_reg_35464.read(), ap_const_lv3_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) && 
          esl_seteq<1,3,3>(tmp_1099_reg_35641.read(), ap_const_lv3_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()) && 
          esl_seteq<1,3,3>(tmp_1142_reg_35802.read(), ap_const_lv3_3)))) {
        weights_24_24_1x1_V_3_we0 = ap_const_logic_1;
    } else {
        weights_24_24_1x1_V_3_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read())) {
        weights_24_24_1x1_V_4_address0 = weights_24_24_1x1_V_70_reg_35849.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read())) {
        weights_24_24_1x1_V_4_address0 = weights_24_24_1x1_V_62_reg_35688.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read())) {
        weights_24_24_1x1_V_4_address0 = weights_24_24_1x1_V_54_reg_35511.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read())) {
        weights_24_24_1x1_V_4_address0 = weights_24_24_1x1_V_46_reg_35356.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        weights_24_24_1x1_V_4_address0 = weights_24_24_1x1_V_38_reg_35167.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read())) {
        weights_24_24_1x1_V_4_address0 = weights_24_24_1x1_V_30_reg_35018.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read())) {
        weights_24_24_1x1_V_4_address0 = weights_24_24_1x1_V_22_reg_34879.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        weights_24_24_1x1_V_4_address0 = weights_24_24_1x1_V_14_reg_34724.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        weights_24_24_1x1_V_4_address0 = weights_24_24_1x1_V_6_reg_34580.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_4_address0 = grp_subconv_1x1_16_p_fu_8660_weight_4_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_4_address0 = grp_subconv_1x1_32_p_fu_8446_weight_4_V_address0.read();
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
        weights_24_24_1x1_V_4_ce0 = grp_subconv_1x1_16_p_fu_8660_weight_4_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_4_ce0 = grp_subconv_1x1_32_p_fu_8446_weight_4_V_ce0.read();
    } else {
        weights_24_24_1x1_V_4_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_4_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && 
          esl_seteq<1,3,3>(tmp_696_reg_34533.read(), ap_const_lv3_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) && 
          esl_seteq<1,3,3>(tmp_731_reg_34677.read(), ap_const_lv3_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) && 
          esl_seteq<1,3,3>(tmp_780_reg_34832.read(), ap_const_lv3_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) && 
          esl_seteq<1,3,3>(tmp_828_reg_34971.read(), ap_const_lv3_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) && 
          esl_seteq<1,3,3>(tmp_915_reg_35120.read(), ap_const_lv3_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) && 
          esl_seteq<1,3,3>(tmp_996_reg_35309.read(), ap_const_lv3_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) && 
          esl_seteq<1,3,3>(tmp_1074_reg_35464.read(), ap_const_lv3_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) && 
          esl_seteq<1,3,3>(tmp_1099_reg_35641.read(), ap_const_lv3_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()) && 
          esl_seteq<1,3,3>(tmp_1142_reg_35802.read(), ap_const_lv3_4)))) {
        weights_24_24_1x1_V_4_we0 = ap_const_logic_1;
    } else {
        weights_24_24_1x1_V_4_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read())) {
        weights_24_24_1x1_V_5_address0 = weights_24_24_1x1_V_67_reg_35834.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read())) {
        weights_24_24_1x1_V_5_address0 = weights_24_24_1x1_V_59_reg_35673.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read())) {
        weights_24_24_1x1_V_5_address0 = weights_24_24_1x1_V_51_reg_35496.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read())) {
        weights_24_24_1x1_V_5_address0 = weights_24_24_1x1_V_43_reg_35341.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        weights_24_24_1x1_V_5_address0 = weights_24_24_1x1_V_35_reg_35152.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read())) {
        weights_24_24_1x1_V_5_address0 = weights_24_24_1x1_V_27_reg_35003.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read())) {
        weights_24_24_1x1_V_5_address0 = weights_24_24_1x1_V_19_reg_34864.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        weights_24_24_1x1_V_5_address0 = weights_24_24_1x1_V_11_reg_34709.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        weights_24_24_1x1_V_5_address0 = weights_24_24_1x1_V_3_reg_34565.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_5_address0 = grp_subconv_1x1_16_p_fu_8660_weight_5_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_5_address0 = grp_subconv_1x1_32_p_fu_8446_weight_5_V_address0.read();
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
        weights_24_24_1x1_V_5_ce0 = grp_subconv_1x1_16_p_fu_8660_weight_5_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_5_ce0 = grp_subconv_1x1_32_p_fu_8446_weight_5_V_ce0.read();
    } else {
        weights_24_24_1x1_V_5_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_5_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && 
          esl_seteq<1,3,3>(tmp_696_reg_34533.read(), ap_const_lv3_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) && 
          esl_seteq<1,3,3>(tmp_731_reg_34677.read(), ap_const_lv3_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) && 
          esl_seteq<1,3,3>(tmp_780_reg_34832.read(), ap_const_lv3_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) && 
          esl_seteq<1,3,3>(tmp_828_reg_34971.read(), ap_const_lv3_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) && 
          esl_seteq<1,3,3>(tmp_915_reg_35120.read(), ap_const_lv3_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) && 
          esl_seteq<1,3,3>(tmp_996_reg_35309.read(), ap_const_lv3_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) && 
          esl_seteq<1,3,3>(tmp_1074_reg_35464.read(), ap_const_lv3_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) && 
          esl_seteq<1,3,3>(tmp_1099_reg_35641.read(), ap_const_lv3_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()) && 
          esl_seteq<1,3,3>(tmp_1142_reg_35802.read(), ap_const_lv3_5)))) {
        weights_24_24_1x1_V_5_we0 = ap_const_logic_1;
    } else {
        weights_24_24_1x1_V_5_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read())) {
        weights_24_24_1x1_V_6_address0 = weights_24_24_1x1_V_65_reg_35824.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read())) {
        weights_24_24_1x1_V_6_address0 = weights_24_24_1x1_V_57_reg_35663.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read())) {
        weights_24_24_1x1_V_6_address0 = weights_24_24_1x1_V_49_reg_35486.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read())) {
        weights_24_24_1x1_V_6_address0 = weights_24_24_1x1_V_41_reg_35331.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        weights_24_24_1x1_V_6_address0 = weights_24_24_1x1_V_33_reg_35142.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read())) {
        weights_24_24_1x1_V_6_address0 = weights_24_24_1x1_V_25_reg_34993.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read())) {
        weights_24_24_1x1_V_6_address0 = weights_24_24_1x1_V_17_reg_34854.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        weights_24_24_1x1_V_6_address0 = weights_24_24_1x1_V_9_reg_34699.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        weights_24_24_1x1_V_6_address0 = weights_24_24_1x1_V_1_reg_34555.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_6_address0 = grp_subconv_1x1_16_p_fu_8660_weight_6_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_6_address0 = grp_subconv_1x1_32_p_fu_8446_weight_6_V_address0.read();
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
        weights_24_24_1x1_V_6_ce0 = grp_subconv_1x1_16_p_fu_8660_weight_6_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_6_ce0 = grp_subconv_1x1_32_p_fu_8446_weight_6_V_ce0.read();
    } else {
        weights_24_24_1x1_V_6_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_6_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && 
          esl_seteq<1,3,3>(tmp_696_reg_34533.read(), ap_const_lv3_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) && 
          esl_seteq<1,3,3>(tmp_731_reg_34677.read(), ap_const_lv3_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) && 
          esl_seteq<1,3,3>(tmp_780_reg_34832.read(), ap_const_lv3_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) && 
          esl_seteq<1,3,3>(tmp_828_reg_34971.read(), ap_const_lv3_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) && 
          esl_seteq<1,3,3>(tmp_915_reg_35120.read(), ap_const_lv3_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) && 
          esl_seteq<1,3,3>(tmp_996_reg_35309.read(), ap_const_lv3_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) && 
          esl_seteq<1,3,3>(tmp_1074_reg_35464.read(), ap_const_lv3_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) && 
          esl_seteq<1,3,3>(tmp_1099_reg_35641.read(), ap_const_lv3_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()) && 
          esl_seteq<1,3,3>(tmp_1142_reg_35802.read(), ap_const_lv3_6)))) {
        weights_24_24_1x1_V_6_we0 = ap_const_logic_1;
    } else {
        weights_24_24_1x1_V_6_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_7_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read())) {
        weights_24_24_1x1_V_7_address0 = weights_24_24_1x1_V_69_reg_35844.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read())) {
        weights_24_24_1x1_V_7_address0 = weights_24_24_1x1_V_61_reg_35683.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read())) {
        weights_24_24_1x1_V_7_address0 = weights_24_24_1x1_V_53_reg_35506.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read())) {
        weights_24_24_1x1_V_7_address0 = weights_24_24_1x1_V_45_reg_35351.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        weights_24_24_1x1_V_7_address0 = weights_24_24_1x1_V_37_reg_35162.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read())) {
        weights_24_24_1x1_V_7_address0 = weights_24_24_1x1_V_29_reg_35013.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read())) {
        weights_24_24_1x1_V_7_address0 = weights_24_24_1x1_V_21_reg_34874.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        weights_24_24_1x1_V_7_address0 = weights_24_24_1x1_V_13_reg_34719.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        weights_24_24_1x1_V_7_address0 = weights_24_24_1x1_V_5_reg_34575.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_7_address0 = grp_subconv_1x1_16_p_fu_8660_weight_7_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_7_address0 = grp_subconv_1x1_32_p_fu_8446_weight_7_V_address0.read();
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
        weights_24_24_1x1_V_7_ce0 = grp_subconv_1x1_16_p_fu_8660_weight_7_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_7_ce0 = grp_subconv_1x1_32_p_fu_8446_weight_7_V_ce0.read();
    } else {
        weights_24_24_1x1_V_7_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_7_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && 
          esl_seteq<1,3,3>(tmp_696_reg_34533.read(), ap_const_lv3_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) && 
          esl_seteq<1,3,3>(tmp_731_reg_34677.read(), ap_const_lv3_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) && 
          esl_seteq<1,3,3>(tmp_780_reg_34832.read(), ap_const_lv3_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) && 
          esl_seteq<1,3,3>(tmp_828_reg_34971.read(), ap_const_lv3_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) && 
          esl_seteq<1,3,3>(tmp_915_reg_35120.read(), ap_const_lv3_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) && 
          esl_seteq<1,3,3>(tmp_996_reg_35309.read(), ap_const_lv3_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) && 
          esl_seteq<1,3,3>(tmp_1074_reg_35464.read(), ap_const_lv3_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) && 
          esl_seteq<1,3,3>(tmp_1099_reg_35641.read(), ap_const_lv3_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()) && 
          esl_seteq<1,3,3>(tmp_1142_reg_35802.read(), ap_const_lv3_7)))) {
        weights_24_24_1x1_V_7_we0 = ap_const_logic_1;
    } else {
        weights_24_24_1x1_V_7_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_s_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read())) {
        weights_24_24_1x1_V_s_address0 = weights_24_24_1x1_V_66_reg_35829.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read())) {
        weights_24_24_1x1_V_s_address0 = weights_24_24_1x1_V_58_reg_35668.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read())) {
        weights_24_24_1x1_V_s_address0 = weights_24_24_1x1_V_50_reg_35491.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read())) {
        weights_24_24_1x1_V_s_address0 = weights_24_24_1x1_V_42_reg_35336.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        weights_24_24_1x1_V_s_address0 = weights_24_24_1x1_V_34_reg_35147.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read())) {
        weights_24_24_1x1_V_s_address0 = weights_24_24_1x1_V_26_reg_34998.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read())) {
        weights_24_24_1x1_V_s_address0 = weights_24_24_1x1_V_18_reg_34859.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        weights_24_24_1x1_V_s_address0 = weights_24_24_1x1_V_10_reg_34704.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        weights_24_24_1x1_V_s_address0 = weights_24_24_1x1_V_2_reg_34560.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_s_address0 = grp_subconv_1x1_16_p_fu_8660_weight_0_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_s_address0 = grp_subconv_1x1_32_p_fu_8446_weight_0_V_address0.read();
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
        weights_24_24_1x1_V_s_ce0 = grp_subconv_1x1_16_p_fu_8660_weight_0_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_s_ce0 = grp_subconv_1x1_32_p_fu_8446_weight_0_V_ce0.read();
    } else {
        weights_24_24_1x1_V_s_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_s_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && 
          esl_seteq<1,3,3>(tmp_696_reg_34533.read(), ap_const_lv3_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) && 
          esl_seteq<1,3,3>(tmp_731_reg_34677.read(), ap_const_lv3_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) && 
          esl_seteq<1,3,3>(tmp_780_reg_34832.read(), ap_const_lv3_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) && 
          esl_seteq<1,3,3>(tmp_828_reg_34971.read(), ap_const_lv3_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) && 
          esl_seteq<1,3,3>(tmp_915_reg_35120.read(), ap_const_lv3_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) && 
          esl_seteq<1,3,3>(tmp_996_reg_35309.read(), ap_const_lv3_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) && 
          esl_seteq<1,3,3>(tmp_1074_reg_35464.read(), ap_const_lv3_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) && 
          esl_seteq<1,3,3>(tmp_1099_reg_35641.read(), ap_const_lv3_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()) && 
          esl_seteq<1,3,3>(tmp_1142_reg_35802.read(), ap_const_lv3_0)))) {
        weights_24_24_1x1_V_s_we0 = ap_const_logic_1;
    } else {
        weights_24_24_1x1_V_s_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_1_3x3_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1192.read())) {
        weights_48_1_3x3_V_address0 =  (sc_lv<9>) (tmp_1993_cast_fu_26875_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1101.read())) {
        weights_48_1_3x3_V_address0 =  (sc_lv<9>) (tmp_1912_cast_fu_25300_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1010.read())) {
        weights_48_1_3x3_V_address0 =  (sc_lv<9>) (tmp_1832_cast_fu_23737_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state919.read())) {
        weights_48_1_3x3_V_address0 =  (sc_lv<9>) (tmp_1754_cast_fu_22174_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state828.read())) {
        weights_48_1_3x3_V_address0 =  (sc_lv<9>) (tmp_1677_cast_fu_20615_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state737.read())) {
        weights_48_1_3x3_V_address0 =  (sc_lv<9>) (tmp_1600_cast_fu_19056_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state646.read())) {
        weights_48_1_3x3_V_address0 =  (sc_lv<9>) (tmp_1521_cast_fu_17485_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state555.read())) {
        weights_48_1_3x3_V_address0 =  (sc_lv<9>) (tmp_1444_cast_fu_15930_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state467.read())) {
        weights_48_1_3x3_V_address0 =  (sc_lv<9>) (tmp_1375_cast_fu_14486_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state410.read())) {
        weights_48_1_3x3_V_address0 =  (sc_lv<9>) (tmp_1340_cast_fu_13685_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state480.read())) {
        weights_48_1_3x3_V_address0 = grp_subconv_3x3_16_strid_1_fu_8876_weight_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state568.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state659.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state750.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state841.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state932.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1023.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1114.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1205.read()))) {
        weights_48_1_3x3_V_address0 = grp_subconv_3x3_8_no_rel_fu_8812_weight_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state423.read())) {
        weights_48_1_3x3_V_address0 = grp_subconv_3x3_16_strid_fu_8786_weight_V_address0.read();
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
        weights_48_1_3x3_V_ce0 = grp_subconv_3x3_16_strid_1_fu_8876_weight_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state568.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state659.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state750.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state841.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state932.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1023.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1114.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1205.read()))) {
        weights_48_1_3x3_V_ce0 = grp_subconv_3x3_8_no_rel_fu_8812_weight_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state423.read())) {
        weights_48_1_3x3_V_ce0 = grp_subconv_3x3_16_strid_fu_8786_weight_V_ce0.read();
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
        weights_48_48_1x1_V_1_address0 = weights_48_48_1x1_V_147_reg_40997.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read())) {
        weights_48_48_1x1_V_1_address0 = weights_48_48_1x1_V_139_reg_40697.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read())) {
        weights_48_48_1x1_V_1_address0 = weights_48_48_1x1_V_131_reg_40442.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read())) {
        weights_48_48_1x1_V_1_address0 = weights_48_48_1x1_V_123_reg_40142.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read())) {
        weights_48_48_1x1_V_1_address0 = weights_48_48_1x1_V_115_reg_39887.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read())) {
        weights_48_48_1x1_V_1_address0 = weights_48_48_1x1_V_107_reg_39587.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read())) {
        weights_48_48_1x1_V_1_address0 = weights_48_48_1x1_V_99_reg_39332.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read())) {
        weights_48_48_1x1_V_1_address0 = weights_48_48_1x1_V_91_reg_39032.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read())) {
        weights_48_48_1x1_V_1_address0 = weights_48_48_1x1_V_83_reg_38777.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read())) {
        weights_48_48_1x1_V_1_address0 = weights_48_48_1x1_V_75_reg_38477.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read())) {
        weights_48_48_1x1_V_1_address0 = weights_48_48_1x1_V_67_reg_38222.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read())) {
        weights_48_48_1x1_V_1_address0 = weights_48_48_1x1_V_59_reg_37922.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read())) {
        weights_48_48_1x1_V_1_address0 = weights_48_48_1x1_V_51_reg_37667.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read())) {
        weights_48_48_1x1_V_1_address0 = weights_48_48_1x1_V_43_reg_37367.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read())) {
        weights_48_48_1x1_V_1_address0 = weights_48_48_1x1_V_35_reg_37112.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read())) {
        weights_48_48_1x1_V_1_address0 = weights_48_48_1x1_V_27_reg_36812.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read())) {
        weights_48_48_1x1_V_1_address0 = weights_48_48_1x1_V_19_reg_36601.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read())) {
        weights_48_48_1x1_V_1_address0 = weights_48_48_1x1_V_11_reg_36301.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read())) {
        weights_48_48_1x1_V_1_address0 = weights_48_48_1x1_V_3_reg_36001.read();
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
        weights_48_48_1x1_V_1_address0 = grp_subconv_1x1_8_p_fu_8620_weight_1_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        weights_48_48_1x1_V_1_address0 = grp_subconv_1x1_16p_p_fu_8540_weight_1_V_address0.read();
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
        weights_48_48_1x1_V_1_ce0 = grp_subconv_1x1_8_p_fu_8620_weight_1_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        weights_48_48_1x1_V_1_ce0 = grp_subconv_1x1_16p_p_fu_8540_weight_1_V_ce0.read();
    } else {
        weights_48_48_1x1_V_1_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_1_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read()) && 
          esl_seteq<1,3,3>(arrayNo1_reg_35971.read(), ap_const_lv3_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read()) && 
          esl_seteq<1,3,3>(arrayNo2_reg_36271.read(), ap_const_lv3_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read()) && 
          esl_seteq<1,3,3>(arrayNo3_reg_36571.read(), ap_const_lv3_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read()) && 
          esl_seteq<1,3,3>(arrayNo4_reg_36782.read(), ap_const_lv3_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read()) && 
          esl_seteq<1,3,3>(arrayNo5_reg_37082.read(), ap_const_lv3_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read()) && 
          esl_seteq<1,3,3>(arrayNo6_reg_37337.read(), ap_const_lv3_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read()) && 
          esl_seteq<1,3,3>(arrayNo7_reg_37637.read(), ap_const_lv3_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read()) && 
          esl_seteq<1,3,3>(arrayNo8_reg_37892.read(), ap_const_lv3_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read()) && 
          esl_seteq<1,3,3>(arrayNo9_reg_38192.read(), ap_const_lv3_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read()) && 
          esl_seteq<1,3,3>(arrayNo10_reg_38447.read(), ap_const_lv3_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read()) && 
          esl_seteq<1,3,3>(arrayNo11_reg_38747.read(), ap_const_lv3_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) && 
          esl_seteq<1,3,3>(arrayNo12_reg_39002.read(), ap_const_lv3_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read()) && 
          esl_seteq<1,3,3>(arrayNo13_reg_39302.read(), ap_const_lv3_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read()) && 
          esl_seteq<1,3,3>(arrayNo14_reg_39557.read(), ap_const_lv3_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read()) && 
          esl_seteq<1,3,3>(arrayNo15_reg_39857.read(), ap_const_lv3_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read()) && 
          esl_seteq<1,3,3>(arrayNo16_reg_40112.read(), ap_const_lv3_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read()) && 
          esl_seteq<1,3,3>(arrayNo17_reg_40412.read(), ap_const_lv3_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read()) && 
          esl_seteq<1,3,3>(arrayNo18_reg_40667.read(), ap_const_lv3_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read()) && 
          esl_seteq<1,3,3>(arrayNo19_reg_40967.read(), ap_const_lv3_1)))) {
        weights_48_48_1x1_V_1_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_1_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read())) {
        weights_48_48_1x1_V_2_address0 = weights_48_48_1x1_V_148_reg_41002.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read())) {
        weights_48_48_1x1_V_2_address0 = weights_48_48_1x1_V_140_reg_40702.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read())) {
        weights_48_48_1x1_V_2_address0 = weights_48_48_1x1_V_132_reg_40447.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read())) {
        weights_48_48_1x1_V_2_address0 = weights_48_48_1x1_V_124_reg_40147.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read())) {
        weights_48_48_1x1_V_2_address0 = weights_48_48_1x1_V_116_reg_39892.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read())) {
        weights_48_48_1x1_V_2_address0 = weights_48_48_1x1_V_108_reg_39592.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read())) {
        weights_48_48_1x1_V_2_address0 = weights_48_48_1x1_V_100_reg_39337.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read())) {
        weights_48_48_1x1_V_2_address0 = weights_48_48_1x1_V_92_reg_39037.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read())) {
        weights_48_48_1x1_V_2_address0 = weights_48_48_1x1_V_84_reg_38782.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read())) {
        weights_48_48_1x1_V_2_address0 = weights_48_48_1x1_V_76_reg_38482.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read())) {
        weights_48_48_1x1_V_2_address0 = weights_48_48_1x1_V_68_reg_38227.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read())) {
        weights_48_48_1x1_V_2_address0 = weights_48_48_1x1_V_60_reg_37927.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read())) {
        weights_48_48_1x1_V_2_address0 = weights_48_48_1x1_V_52_reg_37672.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read())) {
        weights_48_48_1x1_V_2_address0 = weights_48_48_1x1_V_44_reg_37372.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read())) {
        weights_48_48_1x1_V_2_address0 = weights_48_48_1x1_V_36_reg_37117.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read())) {
        weights_48_48_1x1_V_2_address0 = weights_48_48_1x1_V_28_reg_36817.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read())) {
        weights_48_48_1x1_V_2_address0 = weights_48_48_1x1_V_20_reg_36606.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read())) {
        weights_48_48_1x1_V_2_address0 = weights_48_48_1x1_V_12_reg_36306.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read())) {
        weights_48_48_1x1_V_2_address0 = weights_48_48_1x1_V_4_reg_36006.read();
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
        weights_48_48_1x1_V_2_address0 = grp_subconv_1x1_8_p_fu_8620_weight_2_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        weights_48_48_1x1_V_2_address0 = grp_subconv_1x1_16p_p_fu_8540_weight_2_V_address0.read();
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
        weights_48_48_1x1_V_2_ce0 = grp_subconv_1x1_8_p_fu_8620_weight_2_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        weights_48_48_1x1_V_2_ce0 = grp_subconv_1x1_16p_p_fu_8540_weight_2_V_ce0.read();
    } else {
        weights_48_48_1x1_V_2_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_2_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read()) && 
          esl_seteq<1,3,3>(arrayNo1_reg_35971.read(), ap_const_lv3_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read()) && 
          esl_seteq<1,3,3>(arrayNo2_reg_36271.read(), ap_const_lv3_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read()) && 
          esl_seteq<1,3,3>(arrayNo3_reg_36571.read(), ap_const_lv3_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read()) && 
          esl_seteq<1,3,3>(arrayNo4_reg_36782.read(), ap_const_lv3_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read()) && 
          esl_seteq<1,3,3>(arrayNo5_reg_37082.read(), ap_const_lv3_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read()) && 
          esl_seteq<1,3,3>(arrayNo6_reg_37337.read(), ap_const_lv3_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read()) && 
          esl_seteq<1,3,3>(arrayNo7_reg_37637.read(), ap_const_lv3_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read()) && 
          esl_seteq<1,3,3>(arrayNo8_reg_37892.read(), ap_const_lv3_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read()) && 
          esl_seteq<1,3,3>(arrayNo9_reg_38192.read(), ap_const_lv3_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read()) && 
          esl_seteq<1,3,3>(arrayNo10_reg_38447.read(), ap_const_lv3_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read()) && 
          esl_seteq<1,3,3>(arrayNo11_reg_38747.read(), ap_const_lv3_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) && 
          esl_seteq<1,3,3>(arrayNo12_reg_39002.read(), ap_const_lv3_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read()) && 
          esl_seteq<1,3,3>(arrayNo13_reg_39302.read(), ap_const_lv3_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read()) && 
          esl_seteq<1,3,3>(arrayNo14_reg_39557.read(), ap_const_lv3_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read()) && 
          esl_seteq<1,3,3>(arrayNo15_reg_39857.read(), ap_const_lv3_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read()) && 
          esl_seteq<1,3,3>(arrayNo16_reg_40112.read(), ap_const_lv3_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read()) && 
          esl_seteq<1,3,3>(arrayNo17_reg_40412.read(), ap_const_lv3_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read()) && 
          esl_seteq<1,3,3>(arrayNo18_reg_40667.read(), ap_const_lv3_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read()) && 
          esl_seteq<1,3,3>(arrayNo19_reg_40967.read(), ap_const_lv3_2)))) {
        weights_48_48_1x1_V_2_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_2_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read())) {
        weights_48_48_1x1_V_3_address0 = weights_48_48_1x1_V_146_reg_40992.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read())) {
        weights_48_48_1x1_V_3_address0 = weights_48_48_1x1_V_138_reg_40692.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read())) {
        weights_48_48_1x1_V_3_address0 = weights_48_48_1x1_V_130_reg_40437.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read())) {
        weights_48_48_1x1_V_3_address0 = weights_48_48_1x1_V_122_reg_40137.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read())) {
        weights_48_48_1x1_V_3_address0 = weights_48_48_1x1_V_114_reg_39882.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read())) {
        weights_48_48_1x1_V_3_address0 = weights_48_48_1x1_V_106_reg_39582.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read())) {
        weights_48_48_1x1_V_3_address0 = weights_48_48_1x1_V_98_reg_39327.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read())) {
        weights_48_48_1x1_V_3_address0 = weights_48_48_1x1_V_90_reg_39027.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read())) {
        weights_48_48_1x1_V_3_address0 = weights_48_48_1x1_V_82_reg_38772.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read())) {
        weights_48_48_1x1_V_3_address0 = weights_48_48_1x1_V_74_reg_38472.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read())) {
        weights_48_48_1x1_V_3_address0 = weights_48_48_1x1_V_66_reg_38217.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read())) {
        weights_48_48_1x1_V_3_address0 = weights_48_48_1x1_V_58_reg_37917.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read())) {
        weights_48_48_1x1_V_3_address0 = weights_48_48_1x1_V_50_reg_37662.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read())) {
        weights_48_48_1x1_V_3_address0 = weights_48_48_1x1_V_42_reg_37362.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read())) {
        weights_48_48_1x1_V_3_address0 = weights_48_48_1x1_V_34_reg_37107.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read())) {
        weights_48_48_1x1_V_3_address0 = weights_48_48_1x1_V_26_reg_36807.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read())) {
        weights_48_48_1x1_V_3_address0 = weights_48_48_1x1_V_18_reg_36596.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read())) {
        weights_48_48_1x1_V_3_address0 = weights_48_48_1x1_V_10_reg_36296.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read())) {
        weights_48_48_1x1_V_3_address0 = weights_48_48_1x1_V_2_reg_35996.read();
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
        weights_48_48_1x1_V_3_address0 = grp_subconv_1x1_8_p_fu_8620_weight_3_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        weights_48_48_1x1_V_3_address0 = grp_subconv_1x1_16p_p_fu_8540_weight_3_V_address0.read();
    } else {
        weights_48_48_1x1_V_3_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

}

