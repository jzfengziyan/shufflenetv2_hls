#include "ShuffleNetV2.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void ShuffleNetV2::thread_tmp_1248_fu_38288_p3() {
    tmp_1248_fu_38288_p3 = esl_concat<7,1>(co176_reg_13419.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1249_fu_38300_p2() {
    tmp_1249_fu_38300_p2 = (!p_shl629_cast_fu_38284_p1.read().is_01() || !p_shl630_cast_fu_38296_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl629_cast_fu_38284_p1.read()) - sc_biguint<11>(p_shl630_cast_fu_38296_p1.read()));
}

void ShuffleNetV2::thread_tmp_1250_fu_38332_p3() {
    tmp_1250_fu_38332_p3 = esl_concat<8,3>(tmp_437_fu_38326_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1251_fu_38344_p3() {
    tmp_1251_fu_38344_p3 = esl_concat<8,1>(tmp_437_fu_38326_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1252_cast_fu_25160_p1() {
    tmp_1252_cast_fu_25160_p1 = esl_sext<18,17>(tmp_914_fu_25154_p2.read());
}

void ShuffleNetV2::thread_tmp_1252_fu_38356_p2() {
    tmp_1252_fu_38356_p2 = (!p_shl631_cast_fu_38340_p1.read().is_01() || !p_shl632_cast_fu_38352_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(p_shl631_cast_fu_38340_p1.read()) - sc_biguint<12>(p_shl632_cast_fu_38352_p1.read()));
}

void ShuffleNetV2::thread_tmp_1253_cast_fu_25169_p1() {
    tmp_1253_cast_fu_25169_p1 = esl_sext<32,18>(tmp_915_fu_25164_p2.read());
}

void ShuffleNetV2::thread_tmp_1253_fu_38215_p2() {
    tmp_1253_fu_38215_p2 = (!tmp_1866_cast_reg_48640.read().is_01() || !h_125_cast_cast_fu_38211_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(tmp_1866_cast_reg_48640.read()) + sc_biguint<12>(h_125_cast_cast_fu_38211_p1.read()));
}

void ShuffleNetV2::thread_tmp_1254_fu_38244_p2() {
    tmp_1254_fu_38244_p2 = (!p_shl633_cast_fu_38224_p3.read().is_01() || !p_shl634_cast_fu_38240_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl633_cast_fu_38224_p3.read()) - sc_bigint<14>(p_shl634_cast_fu_38240_p1.read()));
}

void ShuffleNetV2::thread_tmp_1255_fu_38386_p2() {
    tmp_1255_fu_38386_p2 = (!h_127_cast_cast_fu_38382_p1.read().is_01() || !tmp_1887_cast_reg_48697.read().is_01())? sc_lv<13>(): (sc_biguint<13>(h_127_cast_cast_fu_38382_p1.read()) + sc_bigint<13>(tmp_1887_cast_reg_48697.read()));
}

void ShuffleNetV2::thread_tmp_1256_fu_38411_p2() {
    tmp_1256_fu_38411_p2 = (!p_shl635_cast_fu_38395_p3.read().is_01() || !p_shl636_cast_fu_38403_p3.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl635_cast_fu_38395_p3.read()) - sc_biguint<14>(p_shl636_cast_fu_38403_p3.read()));
}

void ShuffleNetV2::thread_tmp_1257_fu_38417_p2() {
    tmp_1257_fu_38417_p2 = (!h_127_cast_cast1_fu_38378_p1.read().is_01() || !tmp_1884_cast_reg_48684.read().is_01())? sc_lv<12>(): (sc_biguint<12>(h_127_cast_cast1_fu_38378_p1.read()) + sc_bigint<12>(tmp_1884_cast_reg_48684.read()));
}

void ShuffleNetV2::thread_tmp_1258_fu_38442_p2() {
    tmp_1258_fu_38442_p2 = (!p_shl637_cast_fu_38426_p3.read().is_01() || !p_shl638_cast_fu_38434_p3.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl637_cast_fu_38426_p3.read()) - sc_biguint<13>(p_shl638_cast_fu_38434_p3.read()));
}

void ShuffleNetV2::thread_tmp_1259_cast_fu_25235_p1() {
    tmp_1259_cast_fu_25235_p1 = esl_sext<32,8>(tmp_917_reg_44548.read());
}

void ShuffleNetV2::thread_tmp_1259_fu_38266_p2() {
    tmp_1259_fu_38266_p2 = (!tmp_1254_reg_48661.read().is_01() || !w_126_cast_cast_fu_38262_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1254_reg_48661.read()) + sc_biguint<14>(w_126_cast_cast_fu_38262_p1.read()));
}

void ShuffleNetV2::thread_tmp_1260_fu_38468_p2() {
    tmp_1260_fu_38468_p2 = (!tmp_1256_reg_48710.read().is_01() || !w_128_cast_cast_fu_38464_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1256_reg_48710.read()) + sc_biguint<14>(w_128_cast_cast_fu_38464_p1.read()));
}

void ShuffleNetV2::thread_tmp_1261_fu_38478_p2() {
    tmp_1261_fu_38478_p2 = (!tmp_1258_reg_48715.read().is_01() || !w_128_cast_cast1_fu_38460_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_1258_reg_48715.read()) + sc_biguint<13>(w_128_cast_cast1_fu_38460_p1.read()));
}

void ShuffleNetV2::thread_tmp_1262_fu_38677_p3() {
    tmp_1262_fu_38677_p3 = esl_concat<13,5>(sum92_reg_48793.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1263_fu_38688_p3() {
    tmp_1263_fu_38688_p3 = esl_concat<13,3>(sum92_reg_48793.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1264_fu_38699_p2() {
    tmp_1264_fu_38699_p2 = (!p_shl639_cast_fu_38684_p1.read().is_01() || !p_shl640_cast_fu_38695_p1.read().is_01())? sc_lv<19>(): (sc_biguint<19>(p_shl639_cast_fu_38684_p1.read()) - sc_biguint<19>(p_shl640_cast_fu_38695_p1.read()));
}

void ShuffleNetV2::thread_tmp_1265_fu_38709_p2() {
    tmp_1265_fu_38709_p2 = (!ci86_cast1_cast_reg_48761.read().is_01() || !tmp_1912_cast_fu_38705_p1.read().is_01())? sc_lv<20>(): (sc_biguint<20>(ci86_cast1_cast_reg_48761.read()) + sc_bigint<20>(tmp_1912_cast_fu_38705_p1.read()));
}

void ShuffleNetV2::thread_tmp_1266_fu_38765_p2() {
    tmp_1266_fu_38765_p2 = (!p_shl641_cast_fu_38751_p3.read().is_01() || !p_shl642_cast_fu_38758_p3.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl641_cast_fu_38751_p3.read()) - sc_biguint<10>(p_shl642_cast_fu_38758_p3.read()));
}

void ShuffleNetV2::thread_tmp_1267_fu_38771_p2() {
    tmp_1267_fu_38771_p2 = (!tmp_533_cast_cast_reg_48774.read().is_01() || !tmp_1266_fu_38765_p2.read().is_01())? sc_lv<10>(): (sc_bigint<10>(tmp_533_cast_cast_reg_48774.read()) + sc_biguint<10>(tmp_1266_fu_38765_p2.read()));
}

void ShuffleNetV2::thread_tmp_1268_fu_39030_p3() {
    tmp_1268_fu_39030_p3 = esl_concat<8,2>(tmp_450_fu_39021_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1269_fu_39042_p2() {
    tmp_1269_fu_39042_p2 = (!p_shl643_cast_fu_39038_p1.read().is_01() || !tmp_545_cast_cast_fu_39026_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(p_shl643_cast_fu_39038_p1.read()) - sc_bigint<11>(tmp_545_cast_cast_fu_39026_p1.read()));
}

void ShuffleNetV2::thread_tmp_1270_fu_39048_p2() {
    tmp_1270_fu_39048_p2 = (!w129_cast_cast_reg_48888.read().is_01() || !tmp_1269_fu_39042_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(w129_cast_cast_reg_48888.read()) + sc_biguint<11>(tmp_1269_fu_39042_p2.read()));
}

void ShuffleNetV2::thread_tmp_1271_fu_39069_p2() {
    tmp_1271_fu_39069_p2 = (!tmp_2653_fu_39064_p2.read().is_01() || !tmp_1270_reg_48927.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_2653_fu_39064_p2.read()) - sc_biguint<11>(tmp_1270_reg_48927.read()));
}

void ShuffleNetV2::thread_tmp_1272_fu_39074_p2() {
    tmp_1272_fu_39074_p2 = (!h128_cast_cast_reg_48906.read().is_01() || !tmp_1271_fu_39069_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(h128_cast_cast_reg_48906.read()) + sc_biguint<11>(tmp_1271_fu_39069_p2.read()));
}

void ShuffleNetV2::thread_tmp_1273_fu_39082_p3() {
    tmp_1273_fu_39082_p3 = esl_concat<11,2>(sum45_reg_48933.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1274_fu_39093_p2() {
    tmp_1274_fu_39093_p2 = (!p_shl645_cast_fu_39089_p1.read().is_01() || !sum45_cast_cast_fu_39079_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl645_cast_fu_39089_p1.read()) - sc_biguint<14>(sum45_cast_cast_fu_39079_p1.read()));
}

void ShuffleNetV2::thread_tmp_1275_fu_39103_p2() {
    tmp_1275_fu_39103_p2 = (!w129_cast_cast1_reg_48883.read().is_01() || !tmp_1933_cast_fu_39099_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(w129_cast_cast1_reg_48883.read()) + sc_bigint<15>(tmp_1933_cast_fu_39099_p1.read()));
}

void ShuffleNetV2::thread_tmp_1276_fu_39122_p2() {
    tmp_1276_fu_39122_p2 = (!p_shl276_fu_39118_p1.read().is_01() || !tmp_1934_cast_fu_39108_p1.read().is_01())? sc_lv<32>(): (sc_bigint<32>(p_shl276_fu_39118_p1.read()) - sc_bigint<32>(tmp_1934_cast_fu_39108_p1.read()));
}

void ShuffleNetV2::thread_tmp_1277_fu_39128_p2() {
    tmp_1277_fu_39128_p2 = (!h128_cast_reg_48901.read().is_01() || !tmp_1276_fu_39122_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(h128_cast_reg_48901.read()) + sc_biguint<32>(tmp_1276_fu_39122_p2.read()));
}

void ShuffleNetV2::thread_tmp_1278_fu_39676_p3() {
    tmp_1278_fu_39676_p3 = esl_concat<7,3>(co184_reg_13628.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1279_fu_39688_p3() {
    tmp_1279_fu_39688_p3 = esl_concat<7,1>(co184_reg_13628.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1280_cast_fu_25484_p1() {
    tmp_1280_cast_fu_25484_p1 = esl_zext<32,15>(tmp_930_fu_25479_p2.read());
}

void ShuffleNetV2::thread_tmp_1280_fu_39700_p2() {
    tmp_1280_fu_39700_p2 = (!p_shl647_cast_fu_39684_p1.read().is_01() || !p_shl648_cast_fu_39696_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl647_cast_fu_39684_p1.read()) - sc_biguint<11>(p_shl648_cast_fu_39696_p1.read()));
}

void ShuffleNetV2::thread_tmp_1281_cast_fu_25686_p1() {
    tmp_1281_cast_fu_25686_p1 = esl_zext<32,15>(tmp_931_fu_25681_p2.read());
}

void ShuffleNetV2::thread_tmp_1281_fu_39442_p3() {
    tmp_1281_fu_39442_p3 = esl_concat<13,5>(sum95_reg_49053.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1282_cast_fu_25696_p1() {
    tmp_1282_cast_fu_25696_p1 = esl_zext<32,14>(tmp_932_reg_44691.read());
}

void ShuffleNetV2::thread_tmp_1282_fu_39453_p3() {
    tmp_1282_fu_39453_p3 = esl_concat<13,3>(sum95_reg_49053.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1283_fu_39464_p2() {
    tmp_1283_fu_39464_p2 = (!p_shl649_cast_fu_39449_p1.read().is_01() || !p_shl650_cast_fu_39460_p1.read().is_01())? sc_lv<19>(): (sc_biguint<19>(p_shl649_cast_fu_39449_p1.read()) - sc_biguint<19>(p_shl650_cast_fu_39460_p1.read()));
}

void ShuffleNetV2::thread_tmp_1284_fu_39474_p2() {
    tmp_1284_fu_39474_p2 = (!ci88_cast1_cast_reg_49021.read().is_01() || !tmp_1948_cast_fu_39470_p1.read().is_01())? sc_lv<20>(): (sc_biguint<20>(ci88_cast1_cast_reg_49021.read()) + sc_bigint<20>(tmp_1948_cast_fu_39470_p1.read()));
}

void ShuffleNetV2::thread_tmp_1285_fu_39530_p2() {
    tmp_1285_fu_39530_p2 = (!p_shl651_cast_fu_39516_p3.read().is_01() || !p_shl652_cast_fu_39523_p3.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl651_cast_fu_39516_p3.read()) - sc_biguint<10>(p_shl652_cast_fu_39523_p3.read()));
}

void ShuffleNetV2::thread_tmp_1286_fu_39536_p2() {
    tmp_1286_fu_39536_p2 = (!tmp_550_cast_cast_reg_49034.read().is_01() || !tmp_1285_fu_39530_p2.read().is_01())? sc_lv<10>(): (sc_bigint<10>(tmp_550_cast_cast_reg_49034.read()) + sc_biguint<10>(tmp_1285_fu_39530_p2.read()));
}

void ShuffleNetV2::thread_tmp_1287_fu_39799_p3() {
    tmp_1287_fu_39799_p3 = esl_concat<8,3>(ci89_reg_13661.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1288_fu_39811_p3() {
    tmp_1288_fu_39811_p3 = esl_concat<8,1>(ci89_reg_13661.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1289_fu_39823_p2() {
    tmp_1289_fu_39823_p2 = (!p_shl653_cast_fu_39807_p1.read().is_01() || !p_shl654_cast_fu_39819_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(p_shl653_cast_fu_39807_p1.read()) - sc_biguint<12>(p_shl654_cast_fu_39819_p1.read()));
}

void ShuffleNetV2::thread_tmp_1290_fu_39833_p3() {
    tmp_1290_fu_39833_p3 = esl_concat<8,2>(ci89_reg_13661.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1291_cast_fu_25930_p1() {
    tmp_1291_cast_fu_25930_p1 = esl_sext<18,17>(tmp_935_fu_25924_p2.read());
}

void ShuffleNetV2::thread_tmp_1291_fu_39738_p2() {
    tmp_1291_fu_39738_p2 = (!tmp_1940_cast_reg_49125.read().is_01() || !h_131_cast_cast_fu_39734_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(tmp_1940_cast_reg_49125.read()) + sc_biguint<12>(h_131_cast_cast_fu_39734_p1.read()));
}

void ShuffleNetV2::thread_tmp_1292_cast_fu_25939_p1() {
    tmp_1292_cast_fu_25939_p1 = esl_sext<32,18>(tmp_936_fu_25934_p2.read());
}

void ShuffleNetV2::thread_tmp_1292_fu_39767_p2() {
    tmp_1292_fu_39767_p2 = (!p_shl655_cast_fu_39747_p3.read().is_01() || !p_shl656_cast_fu_39763_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl655_cast_fu_39747_p3.read()) - sc_bigint<14>(p_shl656_cast_fu_39763_p1.read()));
}

void ShuffleNetV2::thread_tmp_1293_fu_39861_p2() {
    tmp_1293_fu_39861_p2 = (!w131_cast_cast_fu_39857_p1.read().is_01() || !tmp_1960_cast_reg_49174.read().is_01())? sc_lv<11>(): (sc_biguint<11>(w131_cast_cast_fu_39857_p1.read()) + sc_biguint<11>(tmp_1960_cast_reg_49174.read()));
}

void ShuffleNetV2::thread_tmp_1294_fu_39890_p2() {
    tmp_1294_fu_39890_p2 = (!w_133_cast_cast_fu_39886_p1.read().is_01() || !tmp_1958_cast_reg_49169.read().is_01())? sc_lv<13>(): (sc_biguint<13>(w_133_cast_cast_fu_39886_p1.read()) + sc_bigint<13>(tmp_1958_cast_reg_49169.read()));
}

void ShuffleNetV2::thread_tmp_1295_fu_39915_p2() {
    tmp_1295_fu_39915_p2 = (!p_shl657_cast_fu_39899_p3.read().is_01() || !p_shl658_cast_fu_39907_p3.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl657_cast_fu_39899_p3.read()) - sc_biguint<14>(p_shl658_cast_fu_39907_p3.read()));
}

void ShuffleNetV2::thread_tmp_1296_fu_39789_p2() {
    tmp_1296_fu_39789_p2 = (!tmp_1292_reg_49146.read().is_01() || !w_134_cast_cast_fu_39785_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1292_reg_49146.read()) + sc_biguint<14>(w_134_cast_cast_fu_39785_p1.read()));
}

void ShuffleNetV2::thread_tmp_1297_fu_39925_p2() {
    tmp_1297_fu_39925_p2 = (!tmp_1967_cast_reg_49187.read().is_01() || !h132_cast_cast_fu_39921_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_1967_cast_reg_49187.read()) + sc_biguint<13>(h132_cast_cast_fu_39921_p1.read()));
}

void ShuffleNetV2::thread_tmp_1298_cast_fu_26005_p1() {
    tmp_1298_cast_fu_26005_p1 = esl_sext<32,8>(tmp_938_reg_44773.read());
}

void ShuffleNetV2::thread_tmp_1298_fu_39951_p2() {
    tmp_1298_fu_39951_p2 = (!tmp_1295_reg_49200.read().is_01() || !h_133_cast_cast_fu_39947_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1295_reg_49200.read()) + sc_biguint<14>(h_133_cast_cast_fu_39947_p1.read()));
}

void ShuffleNetV2::thread_tmp_1310_cast_fu_26365_p1() {
    tmp_1310_cast_fu_26365_p1 = esl_zext<32,10>(tmp_943_reg_44897.read());
}

void ShuffleNetV2::thread_tmp_1313_cast_fu_26329_p1() {
    tmp_1313_cast_fu_26329_p1 = esl_sext<32,12>(tmp_946_reg_44902.read());
}

void ShuffleNetV2::thread_tmp_1328_cast_fu_26703_p1() {
    tmp_1328_cast_fu_26703_p1 = esl_sext<18,17>(tmp_954_fu_26697_p2.read());
}

void ShuffleNetV2::thread_tmp_1329_cast_fu_26712_p1() {
    tmp_1329_cast_fu_26712_p1 = esl_sext<32,18>(tmp_955_fu_26707_p2.read());
}

void ShuffleNetV2::thread_tmp_1335_cast_fu_26778_p1() {
    tmp_1335_cast_fu_26778_p1 = esl_sext<32,8>(tmp_957_reg_45033.read());
}

void ShuffleNetV2::thread_tmp_1356_cast_fu_27023_p1() {
    tmp_1356_cast_fu_27023_p1 = esl_zext<32,15>(tmp_970_fu_27018_p2.read());
}

void ShuffleNetV2::thread_tmp_1357_cast_fu_27225_p1() {
    tmp_1357_cast_fu_27225_p1 = esl_zext<32,15>(tmp_971_fu_27220_p2.read());
}

void ShuffleNetV2::thread_tmp_1358_cast_fu_27235_p1() {
    tmp_1358_cast_fu_27235_p1 = esl_zext<32,14>(tmp_972_reg_45176.read());
}

void ShuffleNetV2::thread_tmp_1367_cast_fu_27469_p1() {
    tmp_1367_cast_fu_27469_p1 = esl_sext<18,17>(tmp_975_fu_27463_p2.read());
}

void ShuffleNetV2::thread_tmp_1368_cast_fu_27478_p1() {
    tmp_1368_cast_fu_27478_p1 = esl_sext<32,18>(tmp_976_fu_27473_p2.read());
}

void ShuffleNetV2::thread_tmp_1374_cast_fu_27544_p1() {
    tmp_1374_cast_fu_27544_p1 = esl_sext<32,8>(tmp_978_reg_45258.read());
}

void ShuffleNetV2::thread_tmp_1386_cast_fu_27912_p1() {
    tmp_1386_cast_fu_27912_p1 = esl_zext<32,10>(tmp_983_reg_45382.read());
}

void ShuffleNetV2::thread_tmp_1390_cast_fu_27876_p1() {
    tmp_1390_cast_fu_27876_p1 = esl_sext<32,12>(tmp_987_reg_45387.read());
}

void ShuffleNetV2::thread_tmp_1405_cast_fu_28250_p1() {
    tmp_1405_cast_fu_28250_p1 = esl_sext<18,17>(tmp_995_fu_28244_p2.read());
}

void ShuffleNetV2::thread_tmp_1406_cast_fu_28259_p1() {
    tmp_1406_cast_fu_28259_p1 = esl_sext<32,18>(tmp_996_fu_28254_p2.read());
}

void ShuffleNetV2::thread_tmp_1412_cast_fu_28325_p1() {
    tmp_1412_cast_fu_28325_p1 = esl_sext<32,8>(tmp_998_reg_45518.read());
}

void ShuffleNetV2::thread_tmp_1433_cast_fu_28570_p1() {
    tmp_1433_cast_fu_28570_p1 = esl_zext<32,15>(tmp_1011_fu_28565_p2.read());
}

void ShuffleNetV2::thread_tmp_1434_cast_fu_28772_p1() {
    tmp_1434_cast_fu_28772_p1 = esl_zext<32,15>(tmp_1012_fu_28767_p2.read());
}

void ShuffleNetV2::thread_tmp_1435_cast_fu_28782_p1() {
    tmp_1435_cast_fu_28782_p1 = esl_zext<32,14>(tmp_1013_reg_45661.read());
}

void ShuffleNetV2::thread_tmp_1444_cast_fu_29016_p1() {
    tmp_1444_cast_fu_29016_p1 = esl_sext<18,17>(tmp_1016_fu_29010_p2.read());
}

void ShuffleNetV2::thread_tmp_1445_cast_fu_29025_p1() {
    tmp_1445_cast_fu_29025_p1 = esl_sext<32,18>(tmp_1017_fu_29020_p2.read());
}

void ShuffleNetV2::thread_tmp_144_fu_17278_p2() {
    tmp_144_fu_17278_p2 = (!co35_cast_fu_17262_p1.read().is_01() || !ap_const_lv6_18.is_01())? sc_lv<6>(): (sc_biguint<6>(co35_cast_fu_17262_p1.read()) + sc_biguint<6>(ap_const_lv6_18));
}

void ShuffleNetV2::thread_tmp_1451_cast_fu_29091_p1() {
    tmp_1451_cast_fu_29091_p1 = esl_sext<32,8>(tmp_1019_reg_45743.read());
}

void ShuffleNetV2::thread_tmp_145_fu_18066_p2() {
    tmp_145_fu_18066_p2 = (!co47_cast_fu_18050_p1.read().is_01() || !ap_const_lv6_18.is_01())? sc_lv<6>(): (sc_biguint<6>(co47_cast_fu_18050_p1.read()) + sc_biguint<6>(ap_const_lv6_18));
}

void ShuffleNetV2::thread_tmp_1463_cast_fu_29463_p1() {
    tmp_1463_cast_fu_29463_p1 = esl_zext<32,10>(tmp_1024_reg_45867.read());
}

void ShuffleNetV2::thread_tmp_1466_cast_fu_29418_p1() {
    tmp_1466_cast_fu_29418_p1 = esl_sext<13,12>(tmp_1027_fu_29412_p2.read());
}

void ShuffleNetV2::thread_tmp_1467_cast_fu_29427_p1() {
    tmp_1467_cast_fu_29427_p1 = esl_sext<32,13>(tmp_1028_reg_45872.read());
}

void ShuffleNetV2::thread_tmp_147_fu_18878_p2() {
    tmp_147_fu_18878_p2 = (!p_shl_cast_fu_18862_p1.read().is_01() || !p_shl1_cast_fu_18874_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl_cast_fu_18862_p1.read()) - sc_biguint<7>(p_shl1_cast_fu_18874_p1.read()));
}

void ShuffleNetV2::thread_tmp_1482_cast_fu_29801_p1() {
    tmp_1482_cast_fu_29801_p1 = esl_sext<18,17>(tmp_1036_fu_29795_p2.read());
}

void ShuffleNetV2::thread_tmp_1483_cast_fu_29810_p1() {
    tmp_1483_cast_fu_29810_p1 = esl_sext<32,18>(tmp_1037_fu_29805_p2.read());
}

void ShuffleNetV2::thread_tmp_1489_cast_fu_29876_p1() {
    tmp_1489_cast_fu_29876_p1 = esl_sext<32,8>(tmp_1039_reg_46003.read());
}

void ShuffleNetV2::thread_tmp_148_cast_cast_fu_18894_p1() {
    tmp_148_cast_cast_fu_18894_p1 = esl_zext<9,4>(tmp_2328_fu_18884_p4.read());
}

void ShuffleNetV2::thread_tmp_149_cast_fu_19232_p1() {
    tmp_149_cast_fu_19232_p1 = esl_sext<9,7>(tmp_149_fu_19226_p2.read());
}

void ShuffleNetV2::thread_tmp_149_fu_19226_p2() {
    tmp_149_fu_19226_p2 = (!p_shl2_cast_fu_19210_p1.read().is_01() || !p_shl3_cast_fu_19222_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl2_cast_fu_19210_p1.read()) - sc_biguint<7>(p_shl3_cast_fu_19222_p1.read()));
}

void ShuffleNetV2::thread_tmp_150_cast_fu_19266_p1() {
    tmp_150_cast_fu_19266_p1 = esl_sext<32,7>(tmp_150_reg_42651.read());
}

void ShuffleNetV2::thread_tmp_150_fu_19236_p2() {
    tmp_150_fu_19236_p2 = (!tmp_149_fu_19226_p2.read().is_01() || !i37_cast1_reg_42630.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_149_fu_19226_p2.read()) + sc_biguint<7>(i37_cast1_reg_42630.read()));
}

void ShuffleNetV2::thread_tmp_1510_cast_fu_30121_p1() {
    tmp_1510_cast_fu_30121_p1 = esl_zext<32,15>(tmp_1052_fu_30116_p2.read());
}

void ShuffleNetV2::thread_tmp_1511_cast_fu_30323_p1() {
    tmp_1511_cast_fu_30323_p1 = esl_zext<32,15>(tmp_1053_fu_30318_p2.read());
}

void ShuffleNetV2::thread_tmp_1512_cast_fu_30333_p1() {
    tmp_1512_cast_fu_30333_p1 = esl_zext<32,14>(tmp_1054_reg_46146.read());
}

void ShuffleNetV2::thread_tmp_1523_cast_fu_30575_p1() {
    tmp_1523_cast_fu_30575_p1 = esl_sext<18,17>(tmp_1059_fu_30569_p2.read());
}

void ShuffleNetV2::thread_tmp_1524_cast_fu_30584_p1() {
    tmp_1524_cast_fu_30584_p1 = esl_sext<32,18>(tmp_1060_fu_30579_p2.read());
}

void ShuffleNetV2::thread_tmp_152_cast_cast_fu_18923_p1() {
    tmp_152_cast_cast_fu_18923_p1 = esl_sext<8,7>(tmp_152_fu_18918_p2.read());
}

void ShuffleNetV2::thread_tmp_152_fu_18918_p2() {
    tmp_152_fu_18918_p2 = (!tmp_147_reg_42553.read().is_01() || !ci34_cast_fu_18898_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_147_reg_42553.read()) + sc_biguint<7>(ci34_cast_fu_18898_p1.read()));
}

void ShuffleNetV2::thread_tmp_1530_cast_fu_30650_p1() {
    tmp_1530_cast_fu_30650_p1 = esl_sext<32,8>(tmp_1062_reg_46228.read());
}

void ShuffleNetV2::thread_tmp_153_cast_cast_fu_18973_p1() {
    tmp_153_cast_cast_fu_18973_p1 = esl_sext<9,7>(tmp_153_fu_18967_p2.read());
}

void ShuffleNetV2::thread_tmp_153_fu_18967_p2() {
    tmp_153_fu_18967_p2 = (!p_shl4_cast_fu_18951_p1.read().is_01() || !p_shl5_cast_fu_18963_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl4_cast_fu_18951_p1.read()) - sc_biguint<7>(p_shl5_cast_fu_18963_p1.read()));
}

void ShuffleNetV2::thread_tmp_1542_cast_fu_31014_p1() {
    tmp_1542_cast_fu_31014_p1 = esl_zext<32,10>(tmp_1067_reg_46352.read());
}

void ShuffleNetV2::thread_tmp_1544_cast_fu_30969_p1() {
    tmp_1544_cast_fu_30969_p1 = esl_sext<14,13>(tmp_1069_fu_30963_p2.read());
}

void ShuffleNetV2::thread_tmp_1545_cast_fu_30978_p1() {
    tmp_1545_cast_fu_30978_p1 = esl_sext<32,14>(tmp_1070_reg_46357.read());
}

void ShuffleNetV2::thread_tmp_154_cast_fu_19033_p1() {
    tmp_154_cast_fu_19033_p1 = esl_sext<10,9>(tmp_154_reg_42589.read());
}

void ShuffleNetV2::thread_tmp_154_fu_18977_p2() {
    tmp_154_fu_18977_p2 = (!tmp_153_cast_cast_fu_18973_p1.read().is_01() || !tmp_148_cast_cast_reg_42558.read().is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_153_cast_cast_fu_18973_p1.read()) + sc_biguint<9>(tmp_148_cast_cast_reg_42558.read()));
}

void ShuffleNetV2::thread_tmp_155_cast_fu_19012_p1() {
    tmp_155_cast_fu_19012_p1 = esl_sext<9,8>(tmp_155_fu_19006_p2.read());
}

void ShuffleNetV2::thread_tmp_155_fu_19006_p2() {
    tmp_155_fu_19006_p2 = (!p_shl6_cast_fu_18990_p1.read().is_01() || !p_shl7_cast_fu_19002_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl6_cast_fu_18990_p1.read()) - sc_biguint<8>(p_shl7_cast_fu_19002_p1.read()));
}

void ShuffleNetV2::thread_tmp_1562_cast_fu_31360_p1() {
    tmp_1562_cast_fu_31360_p1 = esl_sext<18,17>(tmp_1080_fu_31354_p2.read());
}

void ShuffleNetV2::thread_tmp_1563_cast_fu_31369_p1() {
    tmp_1563_cast_fu_31369_p1 = esl_sext<32,18>(tmp_1081_fu_31364_p2.read());
}

void ShuffleNetV2::thread_tmp_1569_cast_fu_31435_p1() {
    tmp_1569_cast_fu_31435_p1 = esl_sext<32,8>(tmp_1083_reg_46488.read());
}

void ShuffleNetV2::thread_tmp_157_cast_cast_fu_19573_p1() {
    tmp_157_cast_cast_fu_19573_p1 = esl_sext<8,7>(tmp_157_fu_19567_p2.read());
}

void ShuffleNetV2::thread_tmp_157_fu_19567_p2() {
    tmp_157_fu_19567_p2 = (!p_shl8_cast_fu_19551_p1.read().is_01() || !p_shl9_cast_fu_19563_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl8_cast_fu_19551_p1.read()) - sc_biguint<7>(p_shl9_cast_fu_19563_p1.read()));
}

void ShuffleNetV2::thread_tmp_158_cast_fu_19611_p1() {
    tmp_158_cast_fu_19611_p1 = esl_sext<32,7>(tmp_158_reg_42784.read());
}

void ShuffleNetV2::thread_tmp_158_fu_19577_p2() {
    tmp_158_fu_19577_p2 = (!tmp_157_fu_19567_p2.read().is_01() || !i39_cast_reg_42763.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_157_fu_19567_p2.read()) + sc_biguint<7>(i39_cast_reg_42763.read()));
}

void ShuffleNetV2::thread_tmp_1590_cast_fu_31684_p1() {
    tmp_1590_cast_fu_31684_p1 = esl_zext<32,15>(tmp_1096_fu_31679_p2.read());
}

void ShuffleNetV2::thread_tmp_1591_cast_fu_31886_p1() {
    tmp_1591_cast_fu_31886_p1 = esl_zext<32,15>(tmp_1097_fu_31881_p2.read());
}

void ShuffleNetV2::thread_tmp_1592_cast_fu_31896_p1() {
    tmp_1592_cast_fu_31896_p1 = esl_zext<32,14>(tmp_1098_reg_46631.read());
}

void ShuffleNetV2::thread_tmp_1603_cast_fu_32138_p1() {
    tmp_1603_cast_fu_32138_p1 = esl_sext<18,17>(tmp_1103_fu_32132_p2.read());
}

void ShuffleNetV2::thread_tmp_1604_cast_fu_32147_p1() {
    tmp_1604_cast_fu_32147_p1 = esl_sext<32,18>(tmp_1104_fu_32142_p2.read());
}

void ShuffleNetV2::thread_tmp_1610_cast_fu_32213_p1() {
    tmp_1610_cast_fu_32213_p1 = esl_sext<32,8>(tmp_1106_reg_46713.read());
}

void ShuffleNetV2::thread_tmp_161_fu_19659_p2() {
    tmp_161_fu_19659_p2 = (!p_shl10_cast_fu_19643_p1.read().is_01() || !p_shl11_cast_fu_19655_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl10_cast_fu_19643_p1.read()) - sc_biguint<7>(p_shl11_cast_fu_19655_p1.read()));
}

void ShuffleNetV2::thread_tmp_1622_cast_fu_32577_p1() {
    tmp_1622_cast_fu_32577_p1 = esl_zext<32,10>(tmp_1111_reg_46837.read());
}

void ShuffleNetV2::thread_tmp_1625_cast_fu_32541_p1() {
    tmp_1625_cast_fu_32541_p1 = esl_sext<32,13>(tmp_1114_reg_46842.read());
}

void ShuffleNetV2::thread_tmp_162_cast_cast_fu_19675_p1() {
    tmp_162_cast_cast_fu_19675_p1 = esl_zext<9,4>(tmp_2337_fu_19665_p4.read());
}

void ShuffleNetV2::thread_tmp_163_cast_fu_19376_p1() {
    tmp_163_cast_fu_19376_p1 = esl_sext<8,7>(tmp_163_fu_19370_p2.read());
}

void ShuffleNetV2::thread_tmp_163_fu_19370_p2() {
    tmp_163_fu_19370_p2 = (!p_shl12_cast_fu_19354_p1.read().is_01() || !p_shl13_cast_fu_19366_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl12_cast_fu_19354_p1.read()) - sc_biguint<7>(p_shl13_cast_fu_19366_p1.read()));
}

void ShuffleNetV2::thread_tmp_1640_cast_fu_32927_p1() {
    tmp_1640_cast_fu_32927_p1 = esl_sext<19,18>(tmp_1122_fu_32921_p2.read());
}

void ShuffleNetV2::thread_tmp_1641_cast_fu_32936_p1() {
    tmp_1641_cast_fu_32936_p1 = esl_sext<32,19>(tmp_1123_fu_32931_p2.read());
}

void ShuffleNetV2::thread_tmp_1647_cast_fu_33002_p1() {
    tmp_1647_cast_fu_33002_p1 = esl_sext<32,8>(tmp_1125_reg_46973.read());
}

void ShuffleNetV2::thread_tmp_164_cast_cast_fu_19385_p1() {
    tmp_164_cast_cast_fu_19385_p1 = esl_sext<10,7>(tmp_164_fu_19380_p2.read());
}

void ShuffleNetV2::thread_tmp_164_fu_19380_p2() {
    tmp_164_fu_19380_p2 = (!co59_cast1_reg_42672.read().is_01() || !tmp_163_fu_19370_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(co59_cast1_reg_42672.read()) + sc_biguint<7>(tmp_163_fu_19370_p2.read()));
}

void ShuffleNetV2::thread_tmp_1654_cast_fu_33251_p1() {
    tmp_1654_cast_fu_33251_p1 = esl_zext<32,15>(tmp_1128_fu_33246_p2.read());
}

void ShuffleNetV2::thread_tmp_1662_cast_fu_33474_p1() {
    tmp_1662_cast_fu_33474_p1 = esl_sext<19,18>(tmp_1131_fu_33468_p2.read());
}

void ShuffleNetV2::thread_tmp_1663_cast_fu_33483_p1() {
    tmp_1663_cast_fu_33483_p1 = esl_sext<32,19>(tmp_1132_fu_33478_p2.read());
}

void ShuffleNetV2::thread_tmp_1669_cast_fu_33549_p1() {
    tmp_1669_cast_fu_33549_p1 = esl_sext<32,10>(tmp_1134_reg_47144.read());
}

void ShuffleNetV2::thread_tmp_166_cast_cast_fu_20013_p1() {
    tmp_166_cast_cast_fu_20013_p1 = esl_sext<8,7>(tmp_166_fu_20007_p2.read());
}

void ShuffleNetV2::thread_tmp_166_fu_20007_p2() {
    tmp_166_fu_20007_p2 = (!p_shl14_cast_fu_19991_p1.read().is_01() || !p_shl15_cast_fu_20003_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl14_cast_fu_19991_p1.read()) - sc_biguint<7>(p_shl15_cast_fu_20003_p1.read()));
}

void ShuffleNetV2::thread_tmp_167_cast_fu_20051_p1() {
    tmp_167_cast_fu_20051_p1 = esl_sext<32,7>(tmp_167_reg_42911.read());
}

void ShuffleNetV2::thread_tmp_167_fu_20017_p2() {
    tmp_167_fu_20017_p2 = (!tmp_166_fu_20007_p2.read().is_01() || !i43_cast_reg_42890.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_166_fu_20007_p2.read()) + sc_biguint<7>(i43_cast_reg_42890.read()));
}

void ShuffleNetV2::thread_tmp_1681_cast_fu_33913_p1() {
    tmp_1681_cast_fu_33913_p1 = esl_zext<32,11>(tmp_1139_reg_47268.read());
}

void ShuffleNetV2::thread_tmp_1684_cast_fu_33877_p1() {
    tmp_1684_cast_fu_33877_p1 = esl_sext<32,13>(tmp_1142_reg_47273.read());
}

void ShuffleNetV2::thread_tmp_1695_cast_fu_34243_p1() {
    tmp_1695_cast_fu_34243_p1 = esl_sext<19,18>(tmp_1147_fu_34237_p2.read());
}

void ShuffleNetV2::thread_tmp_1696_cast_fu_34252_p1() {
    tmp_1696_cast_fu_34252_p1 = esl_sext<32,19>(tmp_1148_fu_34247_p2.read());
}

void ShuffleNetV2::thread_tmp_169_cast_cast_fu_19704_p1() {
    tmp_169_cast_cast_fu_19704_p1 = esl_sext<8,7>(tmp_169_fu_19699_p2.read());
}

void ShuffleNetV2::thread_tmp_169_fu_19699_p2() {
    tmp_169_fu_19699_p2 = (!tmp_161_reg_42813.read().is_01() || !ci36_cast_fu_19679_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_161_reg_42813.read()) + sc_biguint<7>(ci36_cast_fu_19679_p1.read()));
}

void ShuffleNetV2::thread_tmp_1702_cast_fu_34318_p1() {
    tmp_1702_cast_fu_34318_p1 = esl_sext<32,10>(tmp_1150_reg_47404.read());
}

void ShuffleNetV2::thread_tmp_170_cast_cast_fu_19754_p1() {
    tmp_170_cast_cast_fu_19754_p1 = esl_sext<9,7>(tmp_170_fu_19748_p2.read());
}

void ShuffleNetV2::thread_tmp_170_fu_19748_p2() {
    tmp_170_fu_19748_p2 = (!p_shl16_cast_fu_19732_p1.read().is_01() || !p_shl17_cast_fu_19744_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl16_cast_fu_19732_p1.read()) - sc_biguint<7>(p_shl17_cast_fu_19744_p1.read()));
}

void ShuffleNetV2::thread_tmp_1714_cast_fu_34686_p1() {
    tmp_1714_cast_fu_34686_p1 = esl_zext<32,11>(tmp_1155_reg_47528.read());
}

void ShuffleNetV2::thread_tmp_1717_cast_fu_34650_p1() {
    tmp_1717_cast_fu_34650_p1 = esl_sext<32,13>(tmp_1158_reg_47533.read());
}

void ShuffleNetV2::thread_tmp_171_cast_fu_19814_p1() {
    tmp_171_cast_fu_19814_p1 = esl_sext<10,9>(tmp_171_reg_42849.read());
}

void ShuffleNetV2::thread_tmp_171_fu_19758_p2() {
    tmp_171_fu_19758_p2 = (!tmp_170_cast_cast_fu_19754_p1.read().is_01() || !tmp_162_cast_cast_reg_42818.read().is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_170_cast_cast_fu_19754_p1.read()) + sc_biguint<9>(tmp_162_cast_cast_reg_42818.read()));
}

void ShuffleNetV2::thread_tmp_1723_cast_fu_35248_p1() {
    tmp_1723_cast_fu_35248_p1 = esl_sext<12,11>(tmp_1163_fu_35242_p2.read());
}

void ShuffleNetV2::thread_tmp_1726_cast_fu_35304_p1() {
    tmp_1726_cast_fu_35304_p1 = esl_sext<13,12>(tmp_1166_fu_35298_p2.read());
}

void ShuffleNetV2::thread_tmp_172_cast_fu_19793_p1() {
    tmp_172_cast_fu_19793_p1 = esl_sext<9,8>(tmp_172_fu_19787_p2.read());
}

void ShuffleNetV2::thread_tmp_172_fu_19787_p2() {
    tmp_172_fu_19787_p2 = (!p_shl18_cast_fu_19771_p1.read().is_01() || !p_shl19_cast_fu_19783_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl18_cast_fu_19771_p1.read()) - sc_biguint<8>(p_shl19_cast_fu_19783_p1.read()));
}

void ShuffleNetV2::thread_tmp_1734_cast_fu_35012_p1() {
    tmp_1734_cast_fu_35012_p1 = esl_sext<19,18>(tmp_1169_fu_35006_p2.read());
}

void ShuffleNetV2::thread_tmp_1735_cast_fu_35021_p1() {
    tmp_1735_cast_fu_35021_p1 = esl_sext<32,19>(tmp_1170_fu_35016_p2.read());
}

void ShuffleNetV2::thread_tmp_1741_cast_fu_35087_p1() {
    tmp_1741_cast_fu_35087_p1 = esl_sext<32,10>(tmp_1172_reg_47664.read());
}

void ShuffleNetV2::thread_tmp_174_cast_fu_20354_p1() {
    tmp_174_cast_fu_20354_p1 = esl_sext<10,7>(tmp_174_fu_20348_p2.read());
}

void ShuffleNetV2::thread_tmp_174_fu_20348_p2() {
    tmp_174_fu_20348_p2 = (!p_shl20_cast_fu_20332_p1.read().is_01() || !p_shl21_cast_fu_20344_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl20_cast_fu_20332_p1.read()) - sc_biguint<7>(p_shl21_cast_fu_20344_p1.read()));
}

void ShuffleNetV2::thread_tmp_1752_cast_fu_35415_p1() {
    tmp_1752_cast_fu_35415_p1 = esl_zext<32,14>(tmp_1177_fu_35410_p2.read());
}

void ShuffleNetV2::thread_tmp_1753_cast_fu_35425_p1() {
    tmp_1753_cast_fu_35425_p1 = esl_zext<32,13>(tmp_1178_reg_47763.read());
}

void ShuffleNetV2::thread_tmp_175_cast_fu_20388_p1() {
    tmp_175_cast_fu_20388_p1 = esl_sext<32,7>(tmp_175_reg_43044.read());
}

void ShuffleNetV2::thread_tmp_175_fu_20358_p2() {
    tmp_175_fu_20358_p2 = (!tmp_174_fu_20348_p2.read().is_01() || !i47_cast1_reg_43023.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_174_fu_20348_p2.read()) + sc_biguint<7>(i47_cast1_reg_43023.read()));
}

void ShuffleNetV2::thread_tmp_1761_cast_fu_35647_p1() {
    tmp_1761_cast_fu_35647_p1 = esl_sext<19,18>(tmp_1181_fu_35641_p2.read());
}

void ShuffleNetV2::thread_tmp_1762_cast_fu_35656_p1() {
    tmp_1762_cast_fu_35656_p1 = esl_sext<32,19>(tmp_1182_fu_35651_p2.read());
}

void ShuffleNetV2::thread_tmp_1768_cast_fu_35722_p1() {
    tmp_1768_cast_fu_35722_p1 = esl_sext<32,10>(tmp_1184_reg_47845.read());
}

void ShuffleNetV2::thread_tmp_1780_cast_fu_36082_p1() {
    tmp_1780_cast_fu_36082_p1 = esl_zext<32,11>(tmp_1189_reg_47969.read());
}

void ShuffleNetV2::thread_tmp_1783_cast_fu_36046_p1() {
    tmp_1783_cast_fu_36046_p1 = esl_sext<32,13>(tmp_1192_reg_47974.read());
}

void ShuffleNetV2::thread_tmp_1789_cast_fu_36652_p1() {
    tmp_1789_cast_fu_36652_p1 = esl_sext<12,11>(tmp_1197_fu_36646_p2.read());
}

void ShuffleNetV2::thread_tmp_178_fu_20436_p2() {
    tmp_178_fu_20436_p2 = (!p_shl22_cast_fu_20420_p1.read().is_01() || !p_shl23_cast_fu_20432_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl22_cast_fu_20420_p1.read()) - sc_biguint<7>(p_shl23_cast_fu_20432_p1.read()));
}

void ShuffleNetV2::thread_tmp_1799_cast_fu_36416_p1() {
    tmp_1799_cast_fu_36416_p1 = esl_sext<19,18>(tmp_1202_fu_36410_p2.read());
}

void ShuffleNetV2::thread_tmp_179_cast_cast_fu_20452_p1() {
    tmp_179_cast_cast_fu_20452_p1 = esl_zext<9,4>(tmp_2348_fu_20442_p4.read());
}

void ShuffleNetV2::thread_tmp_1800_cast_fu_36425_p1() {
    tmp_1800_cast_fu_36425_p1 = esl_sext<32,19>(tmp_1203_fu_36420_p2.read());
}

void ShuffleNetV2::thread_tmp_1806_cast_fu_36491_p1() {
    tmp_1806_cast_fu_36491_p1 = esl_sext<32,10>(tmp_1205_reg_48105.read());
}

void ShuffleNetV2::thread_tmp_1809_cast_fu_36775_p1() {
    tmp_1809_cast_fu_36775_p1 = esl_sext<12,11>(tmp_1208_fu_36769_p2.read());
}

void ShuffleNetV2::thread_tmp_180_cast_fu_20161_p1() {
    tmp_180_cast_fu_20161_p1 = esl_sext<8,7>(tmp_180_fu_20155_p2.read());
}

void ShuffleNetV2::thread_tmp_180_fu_20155_p2() {
    tmp_180_fu_20155_p2 = (!p_shl24_cast_fu_20139_p1.read().is_01() || !p_shl25_cast_fu_20151_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl24_cast_fu_20139_p1.read()) - sc_biguint<7>(p_shl25_cast_fu_20151_p1.read()));
}

void ShuffleNetV2::thread_tmp_1812_cast_fu_36831_p1() {
    tmp_1812_cast_fu_36831_p1 = esl_sext<13,12>(tmp_1211_fu_36825_p2.read());
}

void ShuffleNetV2::thread_tmp_181_cast_cast_fu_20170_p1() {
    tmp_181_cast_cast_fu_20170_p1 = esl_sext<10,7>(tmp_181_fu_20165_p2.read());
}

void ShuffleNetV2::thread_tmp_181_fu_20165_p2() {
    tmp_181_fu_20165_p2 = (!co63_cast1_reg_42932.read().is_01() || !tmp_180_fu_20155_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(co63_cast1_reg_42932.read()) + sc_biguint<7>(tmp_180_fu_20155_p2.read()));
}

void ShuffleNetV2::thread_tmp_1827_cast_fu_36740_p1() {
    tmp_1827_cast_fu_36740_p1 = esl_zext<32,14>(tmp_1218_fu_36735_p2.read());
}

void ShuffleNetV2::thread_tmp_1828_cast_fu_36942_p1() {
    tmp_1828_cast_fu_36942_p1 = esl_zext<32,14>(tmp_1219_fu_36937_p2.read());
}

void ShuffleNetV2::thread_tmp_1829_cast_fu_36952_p1() {
    tmp_1829_cast_fu_36952_p1 = esl_zext<32,13>(tmp_1220_reg_48248.read());
}

void ShuffleNetV2::thread_tmp_1837_cast_fu_37174_p1() {
    tmp_1837_cast_fu_37174_p1 = esl_sext<20,19>(tmp_1223_fu_37168_p2.read());
}

void ShuffleNetV2::thread_tmp_1838_cast_fu_37183_p1() {
    tmp_1838_cast_fu_37183_p1 = esl_sext<32,20>(tmp_1224_fu_37178_p2.read());
}

void ShuffleNetV2::thread_tmp_183_cast_fu_20794_p1() {
    tmp_183_cast_fu_20794_p1 = esl_sext<10,7>(tmp_183_fu_20788_p2.read());
}

void ShuffleNetV2::thread_tmp_183_fu_20788_p2() {
    tmp_183_fu_20788_p2 = (!p_shl26_cast_fu_20772_p1.read().is_01() || !p_shl27_cast_fu_20784_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl26_cast_fu_20772_p1.read()) - sc_biguint<7>(p_shl27_cast_fu_20784_p1.read()));
}

void ShuffleNetV2::thread_tmp_1844_cast_fu_37249_p1() {
    tmp_1844_cast_fu_37249_p1 = esl_sext<32,10>(tmp_1226_reg_48330.read());
}

void ShuffleNetV2::thread_tmp_184_cast_fu_20828_p1() {
    tmp_184_cast_fu_20828_p1 = esl_sext<32,7>(tmp_184_reg_43171.read());
}

void ShuffleNetV2::thread_tmp_184_fu_20798_p2() {
    tmp_184_fu_20798_p2 = (!tmp_183_fu_20788_p2.read().is_01() || !i51_cast1_reg_43150.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_183_fu_20788_p2.read()) + sc_biguint<7>(i51_cast1_reg_43150.read()));
}

void ShuffleNetV2::thread_tmp_1856_cast_fu_37621_p1() {
    tmp_1856_cast_fu_37621_p1 = esl_zext<32,11>(tmp_1231_reg_48454.read());
}

void ShuffleNetV2::thread_tmp_1859_cast_fu_37576_p1() {
    tmp_1859_cast_fu_37576_p1 = esl_sext<14,13>(tmp_1234_fu_37570_p2.read());
}

void ShuffleNetV2::thread_tmp_1860_cast_fu_37585_p1() {
    tmp_1860_cast_fu_37585_p1 = esl_sext<32,14>(tmp_1235_reg_48459.read());
}

void ShuffleNetV2::thread_tmp_1866_cast_fu_38183_p1() {
    tmp_1866_cast_fu_38183_p1 = esl_sext<12,11>(tmp_1240_fu_38177_p2.read());
}

void ShuffleNetV2::thread_tmp_186_cast_cast_fu_20481_p1() {
    tmp_186_cast_cast_fu_20481_p1 = esl_sext<8,7>(tmp_186_fu_20476_p2.read());
}

void ShuffleNetV2::thread_tmp_186_fu_20476_p2() {
    tmp_186_fu_20476_p2 = (!tmp_178_reg_43073.read().is_01() || !ci38_cast_fu_20456_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_178_reg_43073.read()) + sc_biguint<7>(ci38_cast_fu_20456_p1.read()));
}

void ShuffleNetV2::thread_tmp_1874_cast_fu_37947_p1() {
    tmp_1874_cast_fu_37947_p1 = esl_sext<20,19>(tmp_1243_fu_37941_p2.read());
}

void ShuffleNetV2::thread_tmp_1875_cast_fu_37956_p1() {
    tmp_1875_cast_fu_37956_p1 = esl_sext<32,20>(tmp_1244_fu_37951_p2.read());
}

void ShuffleNetV2::thread_tmp_187_fu_20878_p2() {
    tmp_187_fu_20878_p2 = (!co67_cast_fu_20862_p1.read().is_01() || !ap_const_lv7_30.is_01())? sc_lv<7>(): (sc_biguint<7>(co67_cast_fu_20862_p1.read()) + sc_biguint<7>(ap_const_lv7_30));
}

void ShuffleNetV2::thread_tmp_1881_cast_fu_38022_p1() {
    tmp_1881_cast_fu_38022_p1 = esl_sext<32,10>(tmp_1246_reg_48590.read());
}

void ShuffleNetV2::thread_tmp_1884_cast_fu_38306_p1() {
    tmp_1884_cast_fu_38306_p1 = esl_sext<12,11>(tmp_1249_fu_38300_p2.read());
}

void ShuffleNetV2::thread_tmp_1887_cast_fu_38362_p1() {
    tmp_1887_cast_fu_38362_p1 = esl_sext<13,12>(tmp_1252_fu_38356_p2.read());
}

void ShuffleNetV2::thread_tmp_189_fu_21087_p2() {
    tmp_189_fu_21087_p2 = (!p_shl28_cast_fu_21071_p1.read().is_01() || !p_shl29_cast_fu_21083_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl28_cast_fu_21071_p1.read()) - sc_biguint<7>(p_shl29_cast_fu_21083_p1.read()));
}

void ShuffleNetV2::thread_tmp_1902_cast_fu_38271_p1() {
    tmp_1902_cast_fu_38271_p1 = esl_zext<32,14>(tmp_1259_fu_38266_p2.read());
}

void ShuffleNetV2::thread_tmp_1903_cast_fu_38473_p1() {
    tmp_1903_cast_fu_38473_p1 = esl_zext<32,14>(tmp_1260_fu_38468_p2.read());
}

void ShuffleNetV2::thread_tmp_1904_cast_fu_38483_p1() {
    tmp_1904_cast_fu_38483_p1 = esl_zext<32,13>(tmp_1261_reg_48733.read());
}

void ShuffleNetV2::thread_tmp_190_cast_cast_fu_21103_p1() {
    tmp_190_cast_cast_fu_21103_p1 = esl_zext<9,4>(tmp_2359_fu_21093_p4.read());
}

void ShuffleNetV2::thread_tmp_1912_cast_fu_38705_p1() {
    tmp_1912_cast_fu_38705_p1 = esl_sext<20,19>(tmp_1264_fu_38699_p2.read());
}

void ShuffleNetV2::thread_tmp_1913_cast_fu_38714_p1() {
    tmp_1913_cast_fu_38714_p1 = esl_sext<32,20>(tmp_1265_fu_38709_p2.read());
}

void ShuffleNetV2::thread_tmp_1919_cast_fu_38780_p1() {
    tmp_1919_cast_fu_38780_p1 = esl_sext<32,10>(tmp_1267_reg_48815.read());
}

void ShuffleNetV2::thread_tmp_191_cast_cast_fu_20531_p1() {
    tmp_191_cast_cast_fu_20531_p1 = esl_sext<9,7>(tmp_191_fu_20525_p2.read());
}

void ShuffleNetV2::thread_tmp_191_fu_20525_p2() {
    tmp_191_fu_20525_p2 = (!p_shl30_cast_fu_20509_p1.read().is_01() || !p_shl31_cast_fu_20521_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl30_cast_fu_20509_p1.read()) - sc_biguint<7>(p_shl31_cast_fu_20521_p1.read()));
}

void ShuffleNetV2::thread_tmp_192_cast_fu_20595_p1() {
    tmp_192_cast_fu_20595_p1 = esl_sext<10,9>(tmp_192_reg_43109.read());
}

void ShuffleNetV2::thread_tmp_192_fu_20535_p2() {
    tmp_192_fu_20535_p2 = (!tmp_191_cast_cast_fu_20531_p1.read().is_01() || !tmp_179_cast_cast_reg_43078.read().is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_191_cast_cast_fu_20531_p1.read()) + sc_biguint<9>(tmp_179_cast_cast_reg_43078.read()));
}

void ShuffleNetV2::thread_tmp_1931_cast_fu_39144_p1() {
    tmp_1931_cast_fu_39144_p1 = esl_zext<32,11>(tmp_1272_reg_48939.read());
}

void ShuffleNetV2::thread_tmp_1933_cast_fu_39099_p1() {
    tmp_1933_cast_fu_39099_p1 = esl_sext<15,14>(tmp_1274_fu_39093_p2.read());
}

void ShuffleNetV2::thread_tmp_1934_cast_fu_39108_p1() {
    tmp_1934_cast_fu_39108_p1 = esl_sext<32,15>(tmp_1275_reg_48944.read());
}

void ShuffleNetV2::thread_tmp_193_cast_fu_20570_p1() {
    tmp_193_cast_fu_20570_p1 = esl_sext<9,8>(tmp_193_fu_20564_p2.read());
}

void ShuffleNetV2::thread_tmp_193_fu_20564_p2() {
    tmp_193_fu_20564_p2 = (!p_shl32_cast_fu_20548_p1.read().is_01() || !p_shl33_cast_fu_20560_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl32_cast_fu_20548_p1.read()) - sc_biguint<8>(p_shl33_cast_fu_20560_p1.read()));
}

void ShuffleNetV2::thread_tmp_1940_cast_fu_39706_p1() {
    tmp_1940_cast_fu_39706_p1 = esl_sext<12,11>(tmp_1280_fu_39700_p2.read());
}

void ShuffleNetV2::thread_tmp_1948_cast_fu_39470_p1() {
    tmp_1948_cast_fu_39470_p1 = esl_sext<20,19>(tmp_1283_fu_39464_p2.read());
}

void ShuffleNetV2::thread_tmp_1949_cast_fu_39479_p1() {
    tmp_1949_cast_fu_39479_p1 = esl_sext<32,20>(tmp_1284_fu_39474_p2.read());
}

void ShuffleNetV2::thread_tmp_1955_cast_fu_39545_p1() {
    tmp_1955_cast_fu_39545_p1 = esl_sext<32,10>(tmp_1286_reg_49075.read());
}

void ShuffleNetV2::thread_tmp_1958_cast_fu_39829_p1() {
    tmp_1958_cast_fu_39829_p1 = esl_sext<13,12>(tmp_1289_fu_39823_p2.read());
}

void ShuffleNetV2::thread_tmp_195_cast_fu_21441_p1() {
    tmp_195_cast_fu_21441_p1 = esl_sext<10,7>(tmp_195_fu_21435_p2.read());
}

void ShuffleNetV2::thread_tmp_195_fu_21435_p2() {
    tmp_195_fu_21435_p2 = (!p_shl34_cast_fu_21419_p1.read().is_01() || !p_shl35_cast_fu_21431_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl34_cast_fu_21419_p1.read()) - sc_biguint<7>(p_shl35_cast_fu_21431_p1.read()));
}

void ShuffleNetV2::thread_tmp_1960_cast_fu_39841_p1() {
    tmp_1960_cast_fu_39841_p1 = esl_zext<11,10>(tmp_1290_fu_39833_p3.read());
}

void ShuffleNetV2::thread_tmp_1967_cast_fu_39866_p3() {
    tmp_1967_cast_fu_39866_p3 = esl_concat<11,2>(tmp_1293_fu_39861_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_196_cast_fu_21475_p1() {
    tmp_196_cast_fu_21475_p1 = esl_sext<32,7>(tmp_196_reg_43352.read());
}

void ShuffleNetV2::thread_tmp_196_fu_21445_p2() {
    tmp_196_fu_21445_p2 = (!tmp_195_fu_21435_p2.read().is_01() || !i56_cast1_reg_43331.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_195_fu_21435_p2.read()) + sc_biguint<7>(i56_cast1_reg_43331.read()));
}

void ShuffleNetV2::thread_tmp_1972_cast_fu_39794_p1() {
    tmp_1972_cast_fu_39794_p1 = esl_zext<32,14>(tmp_1296_fu_39789_p2.read());
}

void ShuffleNetV2::thread_tmp_1973_cast_fu_39930_p1() {
    tmp_1973_cast_fu_39930_p1 = esl_zext<32,13>(tmp_1297_fu_39925_p2.read());
}

void ShuffleNetV2::thread_tmp_1974_cast_fu_39956_p1() {
    tmp_1974_cast_fu_39956_p1 = esl_zext<32,14>(tmp_1298_fu_39951_p2.read());
}

void ShuffleNetV2::thread_tmp_198_cast_cast_fu_21132_p1() {
    tmp_198_cast_cast_fu_21132_p1 = esl_sext<8,7>(tmp_198_fu_21127_p2.read());
}

void ShuffleNetV2::thread_tmp_198_fu_21127_p2() {
    tmp_198_fu_21127_p2 = (!tmp_189_reg_43254.read().is_01() || !ci40_cast_fu_21107_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_189_reg_43254.read()) + sc_biguint<7>(ci40_cast_fu_21107_p1.read()));
}

void ShuffleNetV2::thread_tmp_199_cast_cast_fu_21182_p1() {
    tmp_199_cast_cast_fu_21182_p1 = esl_sext<9,7>(tmp_199_fu_21176_p2.read());
}

void ShuffleNetV2::thread_tmp_199_fu_21176_p2() {
    tmp_199_fu_21176_p2 = (!p_shl36_cast_fu_21160_p1.read().is_01() || !p_shl37_cast_fu_21172_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl36_cast_fu_21160_p1.read()) - sc_biguint<7>(p_shl37_cast_fu_21172_p1.read()));
}

void ShuffleNetV2::thread_tmp_200_cast_fu_21242_p1() {
    tmp_200_cast_fu_21242_p1 = esl_sext<10,9>(tmp_200_reg_43290.read());
}

void ShuffleNetV2::thread_tmp_200_fu_21186_p2() {
    tmp_200_fu_21186_p2 = (!tmp_199_cast_cast_fu_21182_p1.read().is_01() || !tmp_190_cast_cast_reg_43259.read().is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_199_cast_cast_fu_21182_p1.read()) + sc_biguint<9>(tmp_190_cast_cast_reg_43259.read()));
}

void ShuffleNetV2::thread_tmp_201_cast_fu_21221_p1() {
    tmp_201_cast_fu_21221_p1 = esl_sext<10,8>(tmp_201_fu_21215_p2.read());
}

void ShuffleNetV2::thread_tmp_201_fu_21215_p2() {
    tmp_201_fu_21215_p2 = (!p_shl38_cast_fu_21199_p1.read().is_01() || !p_shl39_cast_fu_21211_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl38_cast_fu_21199_p1.read()) - sc_biguint<8>(p_shl39_cast_fu_21211_p1.read()));
}

void ShuffleNetV2::thread_tmp_203_cast_fu_21786_p1() {
    tmp_203_cast_fu_21786_p1 = esl_sext<10,7>(tmp_203_fu_21780_p2.read());
}

void ShuffleNetV2::thread_tmp_203_fu_21780_p2() {
    tmp_203_fu_21780_p2 = (!p_shl40_cast_fu_21764_p1.read().is_01() || !p_shl41_cast_fu_21776_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl40_cast_fu_21764_p1.read()) - sc_biguint<7>(p_shl41_cast_fu_21776_p1.read()));
}

void ShuffleNetV2::thread_tmp_204_cast_fu_21820_p1() {
    tmp_204_cast_fu_21820_p1 = esl_sext<32,7>(tmp_204_reg_43485.read());
}

void ShuffleNetV2::thread_tmp_204_fu_21790_p2() {
    tmp_204_fu_21790_p2 = (!tmp_203_fu_21780_p2.read().is_01() || !i59_cast1_reg_43464.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_203_fu_21780_p2.read()) + sc_biguint<7>(i59_cast1_reg_43464.read()));
}

void ShuffleNetV2::thread_tmp_207_fu_21868_p2() {
    tmp_207_fu_21868_p2 = (!p_shl42_cast_fu_21852_p1.read().is_01() || !p_shl43_cast_fu_21864_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl42_cast_fu_21852_p1.read()) - sc_biguint<7>(p_shl43_cast_fu_21864_p1.read()));
}

void ShuffleNetV2::thread_tmp_208_cast_cast_fu_21884_p1() {
    tmp_208_cast_cast_fu_21884_p1 = esl_zext<9,4>(tmp_2370_fu_21874_p4.read());
}

void ShuffleNetV2::thread_tmp_209_fu_21579_p2() {
    tmp_209_fu_21579_p2 = (!p_shl44_cast_fu_21563_p1.read().is_01() || !p_shl45_cast_fu_21575_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl44_cast_fu_21563_p1.read()) - sc_biguint<7>(p_shl45_cast_fu_21575_p1.read()));
}

void ShuffleNetV2::thread_tmp_210_cast_cast_fu_21590_p1() {
    tmp_210_cast_cast_fu_21590_p1 = esl_sext<10,7>(tmp_210_fu_21585_p2.read());
}

void ShuffleNetV2::thread_tmp_210_fu_21585_p2() {
    tmp_210_fu_21585_p2 = (!co71_cast1_reg_43373.read().is_01() || !tmp_209_fu_21579_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(co71_cast1_reg_43373.read()) + sc_biguint<7>(tmp_209_fu_21579_p2.read()));
}

void ShuffleNetV2::thread_tmp_212_cast_fu_22222_p1() {
    tmp_212_cast_fu_22222_p1 = esl_sext<10,7>(tmp_212_fu_22216_p2.read());
}

void ShuffleNetV2::thread_tmp_212_fu_22216_p2() {
    tmp_212_fu_22216_p2 = (!p_shl46_cast_fu_22200_p1.read().is_01() || !p_shl47_cast_fu_22212_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl46_cast_fu_22200_p1.read()) - sc_biguint<7>(p_shl47_cast_fu_22212_p1.read()));
}

void ShuffleNetV2::thread_tmp_213_cast_fu_22256_p1() {
    tmp_213_cast_fu_22256_p1 = esl_sext<32,7>(tmp_213_reg_43612.read());
}

void ShuffleNetV2::thread_tmp_213_fu_22226_p2() {
    tmp_213_fu_22226_p2 = (!tmp_212_fu_22216_p2.read().is_01() || !i63_cast1_reg_43591.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_212_fu_22216_p2.read()) + sc_biguint<7>(i63_cast1_reg_43591.read()));
}

void ShuffleNetV2::thread_tmp_215_cast_cast_fu_21913_p1() {
    tmp_215_cast_cast_fu_21913_p1 = esl_sext<8,7>(tmp_215_fu_21908_p2.read());
}

void ShuffleNetV2::thread_tmp_215_fu_21908_p2() {
    tmp_215_fu_21908_p2 = (!tmp_207_reg_43514.read().is_01() || !ci42_cast_fu_21888_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_207_reg_43514.read()) + sc_biguint<7>(ci42_cast_fu_21888_p1.read()));
}

void ShuffleNetV2::thread_tmp_216_cast_cast_fu_21963_p1() {
    tmp_216_cast_cast_fu_21963_p1 = esl_sext<9,7>(tmp_216_fu_21957_p2.read());
}

void ShuffleNetV2::thread_tmp_216_fu_21957_p2() {
    tmp_216_fu_21957_p2 = (!p_shl48_cast_fu_21941_p1.read().is_01() || !p_shl49_cast_fu_21953_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl48_cast_fu_21941_p1.read()) - sc_biguint<7>(p_shl49_cast_fu_21953_p1.read()));
}

void ShuffleNetV2::thread_tmp_217_cast_fu_22023_p1() {
    tmp_217_cast_fu_22023_p1 = esl_sext<10,9>(tmp_217_reg_43550.read());
}

void ShuffleNetV2::thread_tmp_217_fu_21967_p2() {
    tmp_217_fu_21967_p2 = (!tmp_216_cast_cast_fu_21963_p1.read().is_01() || !tmp_208_cast_cast_reg_43519.read().is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_216_cast_cast_fu_21963_p1.read()) + sc_biguint<9>(tmp_208_cast_cast_reg_43519.read()));
}

void ShuffleNetV2::thread_tmp_218_cast_fu_22002_p1() {
    tmp_218_cast_fu_22002_p1 = esl_sext<10,8>(tmp_218_fu_21996_p2.read());
}

void ShuffleNetV2::thread_tmp_218_fu_21996_p2() {
    tmp_218_fu_21996_p2 = (!p_shl50_cast_fu_21980_p1.read().is_01() || !p_shl51_cast_fu_21992_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl50_cast_fu_21980_p1.read()) - sc_biguint<8>(p_shl51_cast_fu_21992_p1.read()));
}

void ShuffleNetV2::thread_tmp_220_fu_22425_p2() {
    tmp_220_fu_22425_p2 = (!co77_cast_fu_22409_p1.read().is_01() || !ap_const_lv7_30.is_01())? sc_lv<7>(): (sc_biguint<7>(co77_cast_fu_22409_p1.read()) + sc_biguint<7>(ap_const_lv7_30));
}

void ShuffleNetV2::thread_tmp_222_fu_22634_p2() {
    tmp_222_fu_22634_p2 = (!p_shl52_cast_fu_22618_p1.read().is_01() || !p_shl53_cast_fu_22630_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl52_cast_fu_22618_p1.read()) - sc_biguint<7>(p_shl53_cast_fu_22630_p1.read()));
}

void ShuffleNetV2::thread_tmp_223_cast_cast_fu_22650_p1() {
    tmp_223_cast_cast_fu_22650_p1 = esl_zext<9,4>(tmp_2383_fu_22640_p4.read());
}

void ShuffleNetV2::thread_tmp_224_cast_fu_22988_p1() {
    tmp_224_cast_fu_22988_p1 = esl_sext<10,7>(tmp_224_fu_22982_p2.read());
}

void ShuffleNetV2::thread_tmp_224_fu_22982_p2() {
    tmp_224_fu_22982_p2 = (!p_shl54_cast_fu_22966_p1.read().is_01() || !p_shl55_cast_fu_22978_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl54_cast_fu_22966_p1.read()) - sc_biguint<7>(p_shl55_cast_fu_22978_p1.read()));
}

void ShuffleNetV2::thread_tmp_2255_fu_15485_p2() {
    tmp_2255_fu_15485_p2 = (!bias_V_read_reg_40190.read().is_01() || !ap_const_lv32_C18.is_01())? sc_lv<32>(): (sc_biguint<32>(bias_V_read_reg_40190.read()) + sc_biguint<32>(ap_const_lv32_C18));
}

void ShuffleNetV2::thread_tmp_2256_fu_15512_p2() {
    tmp_2256_fu_15512_p2 = (!bias_V_read_reg_40190.read().is_01() || !ap_const_lv32_E18.is_01())? sc_lv<32>(): (sc_biguint<32>(bias_V_read_reg_40190.read()) + sc_biguint<32>(ap_const_lv32_E18));
}

void ShuffleNetV2::thread_tmp_2257_fu_15590_p3() {
    tmp_2257_fu_15590_p3 = esl_concat<8,5>(tmp_632_fu_15585_p2.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_2258_fu_15740_p2() {
    tmp_2258_fu_15740_p2 = (!bias_V_read_reg_40190.read().is_01() || !ap_const_lv32_18.is_01())? sc_lv<32>(): (sc_biguint<32>(bias_V_read_reg_40190.read()) + sc_biguint<32>(ap_const_lv32_18));
}

void ShuffleNetV2::thread_tmp_2259_fu_15725_p1() {
    tmp_2259_fu_15725_p1 = esl_sext<32,11>(tmp_631_fu_15707_p2.read());
}

void ShuffleNetV2::thread_tmp_225_cast_fu_23022_p1() {
    tmp_225_cast_fu_23022_p1 = esl_sext<32,7>(tmp_225_reg_43837.read());
}

void ShuffleNetV2::thread_tmp_225_fu_22992_p2() {
    tmp_225_fu_22992_p2 = (!tmp_224_fu_22982_p2.read().is_01() || !i68_cast1_reg_43816.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_224_fu_22982_p2.read()) + sc_biguint<7>(i68_cast1_reg_43816.read()));
}

void ShuffleNetV2::thread_tmp_2260_fu_15729_p2() {
    tmp_2260_fu_15729_p2 = (!tmp_2259_fu_15725_p1.read().is_01() || !shuffle_conv_1x1_V_r_reg_40264.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_2259_fu_15725_p1.read()) + sc_biguint<32>(shuffle_conv_1x1_V_r_reg_40264.read()));
}

void ShuffleNetV2::thread_tmp_2261_fu_15641_p3() {
    tmp_2261_fu_15641_p3 = esl_concat<8,1>(tmp_634_reg_40422.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_2262_fu_15623_p2() {
    tmp_2262_fu_15623_p2 = (!tmp_633_fu_15598_p1.read().is_01() || !image_V_read_reg_40334.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_633_fu_15598_p1.read()) + sc_biguint<32>(image_V_read_reg_40334.read()));
}

void ShuffleNetV2::thread_tmp_2263_fu_15845_p2() {
    tmp_2263_fu_15845_p2 = (!bias_V_read_reg_40190.read().is_01() || !ap_const_lv32_30.is_01())? sc_lv<32>(): (sc_biguint<32>(bias_V_read_reg_40190.read()) + sc_biguint<32>(ap_const_lv32_30));
}

void ShuffleNetV2::thread_tmp_2264_fu_15869_p3() {
    tmp_2264_fu_15869_p3 = esl_concat<9,2>(tmp_639_fu_15860_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_2265_fu_15899_p2() {
    tmp_2265_fu_15899_p2 = (!tmp_640_fu_15881_p2.read().is_01() || !shuffle_conv_3x3_V_r_reg_40305.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_640_fu_15881_p2.read()) + sc_biguint<32>(shuffle_conv_3x3_V_r_reg_40305.read()));
}

void ShuffleNetV2::thread_tmp_2266_fu_16015_p2() {
    tmp_2266_fu_16015_p2 = (!bias_V_read_reg_40190.read().is_01() || !ap_const_lv32_48.is_01())? sc_lv<32>(): (sc_biguint<32>(bias_V_read_reg_40190.read()) + sc_biguint<32>(ap_const_lv32_48));
}

void ShuffleNetV2::thread_tmp_2267_fu_16000_p1() {
    tmp_2267_fu_16000_p1 = esl_sext<32,12>(tmp_644_fu_15994_p2.read());
}

void ShuffleNetV2::thread_tmp_2268_fu_16004_p2() {
    tmp_2268_fu_16004_p2 = (!shuffle_conv_1x1_V_r_reg_40264.read().is_01() || !tmp_2267_fu_16000_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(shuffle_conv_1x1_V_r_reg_40264.read()) + sc_bigint<32>(tmp_2267_fu_16000_p1.read()));
}

void ShuffleNetV2::thread_tmp_2270_fu_16165_p3() {
    tmp_2270_fu_16165_p3 = esl_concat<9,2>(tmp_649_fu_16156_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_2271_fu_16188_p2() {
    tmp_2271_fu_16188_p2 = (!ap_const_lv9_2.is_01())? sc_lv<9>(): tmp_651_fu_16183_p2.read() << (unsigned short)ap_const_lv9_2.to_uint();
}

void ShuffleNetV2::thread_tmp_2272_fu_16265_p3() {
    tmp_2272_fu_16265_p3 = esl_concat<1,5>(ap_const_lv1_1, tmp_2269_reg_9826.read());
}

void ShuffleNetV2::thread_tmp_2273_fu_16273_p1() {
    tmp_2273_fu_16273_p1 = esl_sext<7,6>(tmp_2272_fu_16265_p3.read());
}

void ShuffleNetV2::thread_tmp_2274_fu_16277_p1() {
    tmp_2274_fu_16277_p1 = esl_zext<32,7>(tmp_2273_fu_16273_p1.read());
}

void ShuffleNetV2::thread_tmp_2275_fu_16281_p2() {
    tmp_2275_fu_16281_p2 = (!tmp_2274_fu_16277_p1.read().is_01() || !bias_V_read_reg_40190.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_2274_fu_16277_p1.read()) + sc_biguint<32>(bias_V_read_reg_40190.read()));
}

void ShuffleNetV2::thread_tmp_2276_fu_16212_p2() {
    tmp_2276_fu_16212_p2 = (!tmp_650_fu_16177_p2.read().is_01() || !shuffle_conv_3x3_V_r_reg_40305.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_650_fu_16177_p2.read()) + sc_biguint<32>(shuffle_conv_3x3_V_r_reg_40305.read()));
}

void ShuffleNetV2::thread_tmp_2277_fu_16359_p2() {
    tmp_2277_fu_16359_p2 = (!bias_V_read_reg_40190.read().is_01() || !ap_const_lv32_78.is_01())? sc_lv<32>(): (sc_biguint<32>(bias_V_read_reg_40190.read()) + sc_biguint<32>(ap_const_lv32_78));
}

void ShuffleNetV2::thread_tmp_2278_fu_16344_p1() {
    tmp_2278_fu_16344_p1 = esl_sext<32,13>(tmp_656_fu_16338_p2.read());
}

void ShuffleNetV2::thread_tmp_2279_fu_16348_p2() {
    tmp_2279_fu_16348_p2 = (!shuffle_conv_1x1_V_r_reg_40264.read().is_01() || !tmp_2278_fu_16344_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(shuffle_conv_1x1_V_r_reg_40264.read()) + sc_bigint<32>(tmp_2278_fu_16344_p1.read()));
}

void ShuffleNetV2::thread_tmp_227_cast_cast_fu_22679_p1() {
    tmp_227_cast_cast_fu_22679_p1 = esl_sext<8,7>(tmp_227_fu_22674_p2.read());
}

void ShuffleNetV2::thread_tmp_227_fu_22674_p2() {
    tmp_227_fu_22674_p2 = (!tmp_222_reg_43739.read().is_01() || !ci44_cast_fu_22654_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_222_reg_43739.read()) + sc_biguint<7>(ci44_cast_fu_22654_p1.read()));
}

void ShuffleNetV2::thread_tmp_2280_fu_16696_p2() {
    tmp_2280_fu_16696_p2 = (!bias_V_read_reg_40190.read().is_01() || !ap_const_lv32_90.is_01())? sc_lv<32>(): (sc_biguint<32>(bias_V_read_reg_40190.read()) + sc_biguint<32>(ap_const_lv32_90));
}

void ShuffleNetV2::thread_tmp_2281_fu_16681_p1() {
    tmp_2281_fu_16681_p1 = esl_sext<32,13>(tmp_665_fu_16675_p2.read());
}

void ShuffleNetV2::thread_tmp_2282_fu_16685_p2() {
    tmp_2282_fu_16685_p2 = (!shuffle_conv_1x1_V_r_reg_40264.read().is_01() || !tmp_2281_fu_16681_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(shuffle_conv_1x1_V_r_reg_40264.read()) + sc_bigint<32>(tmp_2281_fu_16681_p1.read()));
}

void ShuffleNetV2::thread_tmp_2283_fu_16541_p3() {
    tmp_2283_fu_16541_p3 = esl_concat<11,1>(tmp_666_fu_16528_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_2284_fu_16572_p3() {
    tmp_2284_fu_16572_p3 = esl_concat<10,1>(tmp_668_fu_16559_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_2285_fu_16833_p2() {
    tmp_2285_fu_16833_p2 = (!bias_V_read_reg_40190.read().is_01() || !ap_const_lv32_A8.is_01())? sc_lv<32>(): (sc_biguint<32>(bias_V_read_reg_40190.read()) + sc_biguint<32>(ap_const_lv32_A8));
}

void ShuffleNetV2::thread_tmp_2286_fu_16861_p3() {
    tmp_2286_fu_16861_p3 = esl_concat<10,2>(tmp_676_fu_16852_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_2287_fu_16884_p2() {
    tmp_2287_fu_16884_p2 = (!ap_const_lv9_2.is_01())? sc_lv<9>(): tmp_678_fu_16879_p2.read() << (unsigned short)ap_const_lv9_2.to_uint();
}

void ShuffleNetV2::thread_tmp_2288_fu_16908_p2() {
    tmp_2288_fu_16908_p2 = (!tmp_677_fu_16873_p2.read().is_01() || !shuffle_conv_3x3_V_r_reg_40305.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_677_fu_16873_p2.read()) + sc_biguint<32>(shuffle_conv_3x3_V_r_reg_40305.read()));
}

void ShuffleNetV2::thread_tmp_2289_fu_17015_p1() {
    tmp_2289_fu_17015_p1 = esl_sext<32,13>(tmp_685_fu_17009_p2.read());
}

void ShuffleNetV2::thread_tmp_228_cast_cast_fu_22729_p1() {
    tmp_228_cast_cast_fu_22729_p1 = esl_sext<9,7>(tmp_228_fu_22723_p2.read());
}

void ShuffleNetV2::thread_tmp_228_fu_22723_p2() {
    tmp_228_fu_22723_p2 = (!p_shl56_cast_fu_22707_p1.read().is_01() || !p_shl57_cast_fu_22719_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl56_cast_fu_22707_p1.read()) - sc_biguint<7>(p_shl57_cast_fu_22719_p1.read()));
}

void ShuffleNetV2::thread_tmp_2290_fu_17019_p2() {
    tmp_2290_fu_17019_p2 = (!shuffle_conv_1x1_V_r_reg_40264.read().is_01() || !tmp_2289_fu_17015_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(shuffle_conv_1x1_V_r_reg_40264.read()) + sc_bigint<32>(tmp_2289_fu_17015_p1.read()));
}

void ShuffleNetV2::thread_tmp_2292_fu_17086_p3() {
    tmp_2292_fu_17086_p3 = esl_concat<2,5>(ap_const_lv2_2, tmp_2291_reg_10005.read());
}

void ShuffleNetV2::thread_tmp_2293_fu_17094_p1() {
    tmp_2293_fu_17094_p1 = esl_sext<8,7>(tmp_2292_fu_17086_p3.read());
}

void ShuffleNetV2::thread_tmp_2294_fu_17098_p1() {
    tmp_2294_fu_17098_p1 = esl_zext<32,8>(tmp_2293_fu_17094_p1.read());
}

void ShuffleNetV2::thread_tmp_2295_fu_17102_p2() {
    tmp_2295_fu_17102_p2 = (!tmp_2294_fu_17098_p1.read().is_01() || !bias_V_read_reg_40190.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_2294_fu_17098_p1.read()) + sc_biguint<32>(bias_V_read_reg_40190.read()));
}

void ShuffleNetV2::thread_tmp_2296_fu_17176_p3() {
    tmp_2296_fu_17176_p3 = esl_concat<10,4>(tmp_695_fu_17171_p2.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_2297_fu_17188_p3() {
    tmp_2297_fu_17188_p3 = esl_concat<10,1>(tmp_695_fu_17171_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_2298_fu_17502_p2() {
    tmp_2298_fu_17502_p2 = (!bias_V_read_reg_40190.read().is_01() || !ap_const_lv32_D8.is_01())? sc_lv<32>(): (sc_biguint<32>(bias_V_read_reg_40190.read()) + sc_biguint<32>(ap_const_lv32_D8));
}

void ShuffleNetV2::thread_tmp_2299_fu_17487_p1() {
    tmp_2299_fu_17487_p1 = esl_sext<32,14>(tmp_699_fu_17481_p2.read());
}

void ShuffleNetV2::thread_tmp_229_cast_fu_22789_p1() {
    tmp_229_cast_fu_22789_p1 = esl_sext<10,9>(tmp_229_reg_43775.read());
}

void ShuffleNetV2::thread_tmp_229_fu_22733_p2() {
    tmp_229_fu_22733_p2 = (!tmp_228_cast_cast_fu_22729_p1.read().is_01() || !tmp_223_cast_cast_reg_43744.read().is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_228_cast_cast_fu_22729_p1.read()) + sc_biguint<9>(tmp_223_cast_cast_reg_43744.read()));
}

void ShuffleNetV2::thread_tmp_2300_fu_17491_p2() {
    tmp_2300_fu_17491_p2 = (!shuffle_conv_1x1_V_r_reg_40264.read().is_01() || !tmp_2299_fu_17487_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(shuffle_conv_1x1_V_r_reg_40264.read()) + sc_bigint<32>(tmp_2299_fu_17487_p1.read()));
}

void ShuffleNetV2::thread_tmp_2301_fu_17347_p3() {
    tmp_2301_fu_17347_p3 = esl_concat<11,1>(tmp_700_fu_17334_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_2302_fu_17378_p3() {
    tmp_2302_fu_17378_p3 = esl_concat<10,1>(tmp_702_fu_17365_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_2303_fu_17639_p2() {
    tmp_2303_fu_17639_p2 = (!bias_V_read_reg_40190.read().is_01() || !ap_const_lv32_F0.is_01())? sc_lv<32>(): (sc_biguint<32>(bias_V_read_reg_40190.read()) + sc_biguint<32>(ap_const_lv32_F0));
}

void ShuffleNetV2::thread_tmp_2304_fu_17667_p3() {
    tmp_2304_fu_17667_p3 = esl_concat<10,2>(tmp_711_fu_17658_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_2305_fu_17690_p2() {
    tmp_2305_fu_17690_p2 = (!ap_const_lv9_2.is_01())? sc_lv<9>(): tmp_713_fu_17685_p2.read() << (unsigned short)ap_const_lv9_2.to_uint();
}

void ShuffleNetV2::thread_tmp_2306_fu_17714_p2() {
    tmp_2306_fu_17714_p2 = (!tmp_712_fu_17679_p2.read().is_01() || !shuffle_conv_3x3_V_r_reg_40305.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_712_fu_17679_p2.read()) + sc_biguint<32>(shuffle_conv_3x3_V_r_reg_40305.read()));
}

void ShuffleNetV2::thread_tmp_2307_fu_17834_p2() {
    tmp_2307_fu_17834_p2 = (!bias_V_read_reg_40190.read().is_01() || !ap_const_lv32_108.is_01())? sc_lv<32>(): (sc_biguint<32>(bias_V_read_reg_40190.read()) + sc_biguint<32>(ap_const_lv32_108));
}

void ShuffleNetV2::thread_tmp_2308_fu_17819_p1() {
    tmp_2308_fu_17819_p1 = esl_sext<32,14>(tmp_718_fu_17813_p2.read());
}

void ShuffleNetV2::thread_tmp_2309_fu_17823_p2() {
    tmp_2309_fu_17823_p2 = (!shuffle_conv_1x1_V_r_reg_40264.read().is_01() || !tmp_2308_fu_17819_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(shuffle_conv_1x1_V_r_reg_40264.read()) + sc_bigint<32>(tmp_2308_fu_17819_p1.read()));
}

void ShuffleNetV2::thread_tmp_230_cast_fu_22768_p1() {
    tmp_230_cast_fu_22768_p1 = esl_sext<10,8>(tmp_230_fu_22762_p2.read());
}

void ShuffleNetV2::thread_tmp_230_fu_22762_p2() {
    tmp_230_fu_22762_p2 = (!p_shl58_cast_fu_22746_p1.read().is_01() || !p_shl59_cast_fu_22758_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl58_cast_fu_22746_p1.read()) - sc_biguint<8>(p_shl59_cast_fu_22758_p1.read()));
}

void ShuffleNetV2::thread_tmp_2310_fu_17964_p3() {
    tmp_2310_fu_17964_p3 = esl_concat<10,4>(tmp_728_fu_17959_p2.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_2311_fu_17976_p3() {
    tmp_2311_fu_17976_p3 = esl_concat<10,1>(tmp_728_fu_17959_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_2312_fu_18275_p1() {
    tmp_2312_fu_18275_p1 = esl_sext<32,14>(tmp_732_fu_18269_p2.read());
}

void ShuffleNetV2::thread_tmp_2313_fu_18279_p2() {
    tmp_2313_fu_18279_p2 = (!shuffle_conv_1x1_V_r_reg_40264.read().is_01() || !tmp_2312_fu_18275_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(shuffle_conv_1x1_V_r_reg_40264.read()) + sc_bigint<32>(tmp_2312_fu_18275_p1.read()));
}

void ShuffleNetV2::thread_tmp_2314_fu_18135_p3() {
    tmp_2314_fu_18135_p3 = esl_concat<11,1>(tmp_733_fu_18122_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_2315_fu_18166_p3() {
    tmp_2315_fu_18166_p3 = esl_concat<10,1>(tmp_735_fu_18153_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_2317_fu_18346_p3() {
    tmp_2317_fu_18346_p3 = esl_concat<4,5>(ap_const_lv4_9, tmp_2316_reg_10283.read());
}

void ShuffleNetV2::thread_tmp_2318_fu_18354_p1() {
    tmp_2318_fu_18354_p1 = esl_zext<32,9>(tmp_2317_fu_18346_p3.read());
}

void ShuffleNetV2::thread_tmp_2319_fu_18358_p2() {
    tmp_2319_fu_18358_p2 = (!tmp_2318_fu_18354_p1.read().is_01() || !bias_V_read_reg_40190.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_2318_fu_18354_p1.read()) + sc_biguint<32>(bias_V_read_reg_40190.read()));
}

void ShuffleNetV2::thread_tmp_2320_fu_18451_p2() {
    tmp_2320_fu_18451_p2 = (!bias_V_read_reg_40190.read().is_01() || !ap_const_lv32_138.is_01())? sc_lv<32>(): (sc_biguint<32>(bias_V_read_reg_40190.read()) + sc_biguint<32>(ap_const_lv32_138));
}

void ShuffleNetV2::thread_tmp_2321_fu_18479_p3() {
    tmp_2321_fu_18479_p3 = esl_concat<11,2>(tmp_745_fu_18470_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_2322_fu_18502_p2() {
    tmp_2322_fu_18502_p2 = (!ap_const_lv9_2.is_01())? sc_lv<9>(): tmp_747_fu_18497_p2.read() << (unsigned short)ap_const_lv9_2.to_uint();
}

void ShuffleNetV2::thread_tmp_2323_fu_18526_p2() {
    tmp_2323_fu_18526_p2 = (!tmp_746_fu_18491_p2.read().is_01() || !shuffle_conv_3x3_V_r_reg_40305.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_746_fu_18491_p2.read()) + sc_biguint<32>(shuffle_conv_3x3_V_r_reg_40305.read()));
}

void ShuffleNetV2::thread_tmp_2324_fu_18648_p2() {
    tmp_2324_fu_18648_p2 = (!bias_V_read_reg_40190.read().is_01() || !ap_const_lv32_150.is_01())? sc_lv<32>(): (sc_biguint<32>(bias_V_read_reg_40190.read()) + sc_biguint<32>(ap_const_lv32_150));
}

void ShuffleNetV2::thread_tmp_2325_fu_18633_p1() {
    tmp_2325_fu_18633_p1 = esl_sext<32,14>(tmp_754_fu_18627_p2.read());
}

void ShuffleNetV2::thread_tmp_2326_fu_18637_p2() {
    tmp_2326_fu_18637_p2 = (!shuffle_conv_1x1_V_r_reg_40264.read().is_01() || !tmp_2325_fu_18633_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(shuffle_conv_1x1_V_r_reg_40264.read()) + sc_bigint<32>(tmp_2325_fu_18633_p1.read()));
}

void ShuffleNetV2::thread_tmp_2327_fu_18850_p1() {
    tmp_2327_fu_18850_p1 = co57_reg_10405.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2328_fu_18884_p4() {
    tmp_2328_fu_18884_p4 = co57_reg_10405.read().range(4, 1);
}

void ShuffleNetV2::thread_tmp_2329_fu_18778_p3() {
    tmp_2329_fu_18778_p3 = esl_concat<10,4>(tmp_758_fu_18773_p2.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_232_cast_cast_fu_23329_p1() {
    tmp_232_cast_cast_fu_23329_p1 = esl_sext<9,7>(tmp_232_fu_23323_p2.read());
}

void ShuffleNetV2::thread_tmp_232_fu_23323_p2() {
    tmp_232_fu_23323_p2 = (!p_shl60_cast_fu_23307_p1.read().is_01() || !p_shl61_cast_fu_23319_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl60_cast_fu_23307_p1.read()) - sc_biguint<7>(p_shl61_cast_fu_23319_p1.read()));
}

void ShuffleNetV2::thread_tmp_2330_fu_18790_p3() {
    tmp_2330_fu_18790_p3 = esl_concat<10,1>(tmp_758_fu_18773_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_2331_fu_19198_p1() {
    tmp_2331_fu_19198_p1 = k_reg_10449.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2332_fu_18939_p1() {
    tmp_2332_fu_18939_p1 = i36_reg_10427.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_2333_fu_19135_p1() {
    tmp_2333_fu_19135_p1 = grp_fu_19027_p2.read().range(6-1, 0);
}

void ShuffleNetV2::thread_tmp_2336_fu_19631_p1() {
    tmp_2336_fu_19631_p1 = co61_reg_10526.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2337_fu_19665_p4() {
    tmp_2337_fu_19665_p4 = co61_reg_10526.read().range(4, 1);
}

void ShuffleNetV2::thread_tmp_2338_fu_19539_p1() {
    tmp_2338_fu_19539_p1 = k8_reg_10515.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2339_fu_19342_p1() {
    tmp_2339_fu_19342_p1 = i41_reg_10493.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_233_cast_fu_23367_p1() {
    tmp_233_cast_fu_23367_p1 = esl_sext<32,7>(tmp_233_reg_43970.read());
}

void ShuffleNetV2::thread_tmp_233_fu_23333_p2() {
    tmp_233_fu_23333_p2 = (!tmp_232_fu_23323_p2.read().is_01() || !i71_cast_reg_43949.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_232_fu_23323_p2.read()) + sc_biguint<7>(i71_cast_reg_43949.read()));
}

void ShuffleNetV2::thread_tmp_2340_fu_19423_p2() {
    tmp_2340_fu_19423_p2 = (!ap_const_lv10_2.is_01())? sc_lv<10>(): tmp_769_reg_42729.read() << (unsigned short)ap_const_lv10_2.to_uint();
}

void ShuffleNetV2::thread_tmp_2341_fu_19470_p3() {
    tmp_2341_fu_19470_p3 = esl_concat<12,2>(tmp_774_reg_42746.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_2342_fu_19979_p1() {
    tmp_2342_fu_19979_p1 = k9_reg_10570.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2343_fu_19720_p1() {
    tmp_2343_fu_19720_p1 = i43_reg_10548.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_2344_fu_19916_p1() {
    tmp_2344_fu_19916_p1 = grp_fu_19808_p2.read().range(6-1, 0);
}

void ShuffleNetV2::thread_tmp_2347_fu_20408_p1() {
    tmp_2347_fu_20408_p1 = co65_reg_10647.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2348_fu_20442_p4() {
    tmp_2348_fu_20442_p4 = co65_reg_10647.read().range(4, 1);
}

void ShuffleNetV2::thread_tmp_2349_fu_20320_p1() {
    tmp_2349_fu_20320_p1 = k10_reg_10636.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2350_fu_20127_p1() {
    tmp_2350_fu_20127_p1 = i48_reg_10614.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2351_fu_20208_p2() {
    tmp_2351_fu_20208_p2 = (!ap_const_lv10_2.is_01())? sc_lv<10>(): tmp_785_reg_42989.read() << (unsigned short)ap_const_lv10_2.to_uint();
}

void ShuffleNetV2::thread_tmp_2352_fu_20251_p3() {
    tmp_2352_fu_20251_p3 = esl_concat<11,2>(tmp_790_reg_43006.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_2353_fu_20760_p1() {
    tmp_2353_fu_20760_p1 = k12_reg_10691.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2354_fu_20497_p1() {
    tmp_2354_fu_20497_p1 = i50_reg_10669.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_2355_fu_20697_p1() {
    tmp_2355_fu_20697_p1 = grp_fu_20589_p2.read().range(6-1, 0);
}

void ShuffleNetV2::thread_tmp_2358_fu_21059_p1() {
    tmp_2358_fu_21059_p1 = co68_reg_10735.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2359_fu_21093_p4() {
    tmp_2359_fu_21093_p4 = co68_reg_10735.read().range(4, 1);
}

void ShuffleNetV2::thread_tmp_2360_fu_20939_p3() {
    tmp_2360_fu_20939_p3 = esl_concat<11,3>(tmp_805_fu_20934_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_2361_fu_20951_p3() {
    tmp_2361_fu_20951_p3 = esl_concat<11,1>(tmp_805_fu_20934_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_2362_fu_20974_p3() {
    tmp_2362_fu_20974_p3 = esl_concat<10,3>(tmp_807_fu_20969_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_2363_fu_20986_p3() {
    tmp_2363_fu_20986_p3 = esl_concat<10,1>(tmp_807_fu_20969_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_2364_fu_21407_p1() {
    tmp_2364_fu_21407_p1 = k14_reg_10779.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2365_fu_21148_p1() {
    tmp_2365_fu_21148_p1 = i54_reg_10757.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_2366_fu_21344_p1() {
    tmp_2366_fu_21344_p1 = grp_fu_21236_p2.read().range(6-1, 0);
}

void ShuffleNetV2::thread_tmp_2369_fu_21840_p1() {
    tmp_2369_fu_21840_p1 = co72_reg_10856.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_236_fu_23415_p2() {
    tmp_236_fu_23415_p2 = (!p_shl62_cast_fu_23399_p1.read().is_01() || !p_shl63_cast_fu_23411_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl62_cast_fu_23399_p1.read()) - sc_biguint<7>(p_shl63_cast_fu_23411_p1.read()));
}

void ShuffleNetV2::thread_tmp_2370_fu_21874_p4() {
    tmp_2370_fu_21874_p4 = co72_reg_10856.read().range(4, 1);
}

void ShuffleNetV2::thread_tmp_2371_fu_21752_p1() {
    tmp_2371_fu_21752_p1 = k16_reg_10845.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2372_fu_21551_p1() {
    tmp_2372_fu_21551_p1 = i59_reg_10823.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2373_fu_21636_p2() {
    tmp_2373_fu_21636_p2 = (!ap_const_lv10_2.is_01())? sc_lv<10>(): tmp_819_reg_43430.read() << (unsigned short)ap_const_lv10_2.to_uint();
}

void ShuffleNetV2::thread_tmp_2374_fu_21683_p3() {
    tmp_2374_fu_21683_p3 = esl_concat<13,2>(tmp_824_reg_43447.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_2375_fu_22188_p1() {
    tmp_2375_fu_22188_p1 = k18_reg_10900.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2376_fu_21929_p1() {
    tmp_2376_fu_21929_p1 = i61_reg_10878.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_2377_fu_22125_p1() {
    tmp_2377_fu_22125_p1 = grp_fu_22017_p2.read().range(6-1, 0);
}

void ShuffleNetV2::thread_tmp_237_cast_cast_fu_23431_p1() {
    tmp_237_cast_cast_fu_23431_p1 = esl_zext<9,4>(tmp_2394_fu_23421_p4.read());
}

void ShuffleNetV2::thread_tmp_2380_fu_22323_p3() {
    tmp_2380_fu_22323_p3 = esl_concat<10,3>(tmp_842_fu_22318_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_2381_fu_22335_p3() {
    tmp_2381_fu_22335_p3 = esl_concat<10,1>(tmp_842_fu_22318_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_2382_fu_22606_p1() {
    tmp_2382_fu_22606_p1 = co78_reg_10977.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2383_fu_22640_p4() {
    tmp_2383_fu_22640_p4 = co78_reg_10977.read().range(4, 1);
}

void ShuffleNetV2::thread_tmp_2384_fu_22486_p3() {
    tmp_2384_fu_22486_p3 = esl_concat<11,3>(tmp_844_fu_22481_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_2385_fu_22498_p3() {
    tmp_2385_fu_22498_p3 = esl_concat<11,1>(tmp_844_fu_22481_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_2386_fu_22521_p3() {
    tmp_2386_fu_22521_p3 = esl_concat<10,3>(tmp_846_fu_22516_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_2387_fu_22533_p3() {
    tmp_2387_fu_22533_p3 = esl_concat<10,1>(tmp_846_fu_22516_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_2388_fu_22954_p1() {
    tmp_2388_fu_22954_p1 = k20_reg_11021.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2389_fu_22695_p1() {
    tmp_2389_fu_22695_p1 = i65_reg_10999.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_238_cast_fu_23132_p1() {
    tmp_238_cast_fu_23132_p1 = esl_sext<9,7>(tmp_238_fu_23126_p2.read());
}

void ShuffleNetV2::thread_tmp_238_fu_23126_p2() {
    tmp_238_fu_23126_p2 = (!p_shl64_cast_fu_23110_p1.read().is_01() || !p_shl65_cast_fu_23122_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl64_cast_fu_23110_p1.read()) - sc_biguint<7>(p_shl65_cast_fu_23122_p1.read()));
}

void ShuffleNetV2::thread_tmp_2390_fu_22891_p1() {
    tmp_2390_fu_22891_p1 = grp_fu_22783_p2.read().range(6-1, 0);
}

void ShuffleNetV2::thread_tmp_2393_fu_23387_p1() {
    tmp_2393_fu_23387_p1 = co82_reg_11098.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2394_fu_23421_p4() {
    tmp_2394_fu_23421_p4 = co82_reg_11098.read().range(4, 1);
}

void ShuffleNetV2::thread_tmp_2395_fu_23295_p1() {
    tmp_2395_fu_23295_p1 = k22_reg_11087.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2396_fu_23098_p1() {
    tmp_2396_fu_23098_p1 = i70_reg_11065.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2397_fu_23179_p2() {
    tmp_2397_fu_23179_p2 = (!ap_const_lv10_2.is_01())? sc_lv<10>(): tmp_859_reg_43915.read() << (unsigned short)ap_const_lv10_2.to_uint();
}

void ShuffleNetV2::thread_tmp_2398_fu_23226_p3() {
    tmp_2398_fu_23226_p3 = esl_concat<13,2>(tmp_864_reg_43932.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_2399_fu_23735_p1() {
    tmp_2399_fu_23735_p1 = k24_reg_11142.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_239_cast_cast_fu_23141_p1() {
    tmp_239_cast_cast_fu_23141_p1 = esl_sext<10,7>(tmp_239_fu_23136_p2.read());
}

void ShuffleNetV2::thread_tmp_239_fu_23136_p2() {
    tmp_239_fu_23136_p2 = (!co81_cast1_reg_43858.read().is_01() || !tmp_238_fu_23126_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(co81_cast1_reg_43858.read()) + sc_biguint<7>(tmp_238_fu_23126_p2.read()));
}

void ShuffleNetV2::thread_tmp_2400_fu_23476_p1() {
    tmp_2400_fu_23476_p1 = i72_reg_11120.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_2401_fu_23672_p1() {
    tmp_2401_fu_23672_p1 = grp_fu_23564_p2.read().range(6-1, 0);
}

void ShuffleNetV2::thread_tmp_2404_fu_23874_p3() {
    tmp_2404_fu_23874_p3 = esl_concat<10,3>(tmp_882_fu_23869_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_2405_fu_23886_p3() {
    tmp_2405_fu_23886_p3 = esl_concat<10,1>(tmp_882_fu_23869_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_2406_fu_24157_p1() {
    tmp_2406_fu_24157_p1 = co88_reg_11219.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2407_fu_24191_p4() {
    tmp_2407_fu_24191_p4 = co88_reg_11219.read().range(4, 1);
}

void ShuffleNetV2::thread_tmp_2408_fu_24037_p3() {
    tmp_2408_fu_24037_p3 = esl_concat<11,3>(tmp_884_fu_24032_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_2409_fu_24049_p3() {
    tmp_2409_fu_24049_p3 = esl_concat<11,1>(tmp_884_fu_24032_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_2410_fu_24072_p3() {
    tmp_2410_fu_24072_p3 = esl_concat<10,3>(tmp_886_fu_24067_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_2411_fu_24084_p3() {
    tmp_2411_fu_24084_p3 = esl_concat<10,1>(tmp_886_fu_24067_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_2412_fu_24513_p1() {
    tmp_2412_fu_24513_p1 = k26_reg_11263.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2413_fu_24246_p1() {
    tmp_2413_fu_24246_p1 = i76_reg_11241.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_2414_fu_24450_p1() {
    tmp_2414_fu_24450_p1 = grp_fu_24334_p2.read().range(6-1, 0);
}

void ShuffleNetV2::thread_tmp_2417_fu_24946_p1() {
    tmp_2417_fu_24946_p1 = co92_reg_11340.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2418_fu_24980_p4() {
    tmp_2418_fu_24980_p4 = co92_reg_11340.read().range(4, 1);
}

void ShuffleNetV2::thread_tmp_2419_fu_24854_p1() {
    tmp_2419_fu_24854_p1 = k28_reg_11329.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_241_cast_cast_fu_23769_p1() {
    tmp_241_cast_cast_fu_23769_p1 = esl_sext<9,7>(tmp_241_fu_23763_p2.read());
}

void ShuffleNetV2::thread_tmp_241_fu_23763_p2() {
    tmp_241_fu_23763_p2 = (!p_shl66_cast_fu_23747_p1.read().is_01() || !p_shl67_cast_fu_23759_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl66_cast_fu_23747_p1.read()) - sc_biguint<7>(p_shl67_cast_fu_23759_p1.read()));
}

void ShuffleNetV2::thread_tmp_2420_fu_24661_p1() {
    tmp_2420_fu_24661_p1 = i81_reg_11307.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2421_fu_24742_p2() {
    tmp_2421_fu_24742_p2 = (!ap_const_lv10_2.is_01())? sc_lv<10>(): tmp_901_reg_44400.read() << (unsigned short)ap_const_lv10_2.to_uint();
}

void ShuffleNetV2::thread_tmp_2422_fu_24785_p3() {
    tmp_2422_fu_24785_p3 = esl_concat<12,2>(tmp_906_reg_44417.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_2423_fu_25294_p1() {
    tmp_2423_fu_25294_p1 = k30_reg_11384.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2424_fu_25035_p1() {
    tmp_2424_fu_25035_p1 = i83_reg_11362.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_2425_fu_25231_p1() {
    tmp_2425_fu_25231_p1 = grp_fu_25123_p2.read().range(6-1, 0);
}

void ShuffleNetV2::thread_tmp_2428_fu_25433_p3() {
    tmp_2428_fu_25433_p3 = esl_concat<10,3>(tmp_924_fu_25428_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_2429_fu_25445_p3() {
    tmp_2429_fu_25445_p3 = esl_concat<10,1>(tmp_924_fu_25428_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_242_cast_fu_23807_p1() {
    tmp_242_cast_fu_23807_p1 = esl_sext<32,7>(tmp_242_reg_44097.read());
}

void ShuffleNetV2::thread_tmp_242_fu_23773_p2() {
    tmp_242_fu_23773_p2 = (!tmp_241_fu_23763_p2.read().is_01() || !i75_cast_reg_44076.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_241_fu_23763_p2.read()) + sc_biguint<7>(i75_cast_reg_44076.read()));
}

void ShuffleNetV2::thread_tmp_2430_fu_25716_p1() {
    tmp_2430_fu_25716_p1 = co98_reg_11461.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2431_fu_25750_p4() {
    tmp_2431_fu_25750_p4 = co98_reg_11461.read().range(4, 1);
}

void ShuffleNetV2::thread_tmp_2432_fu_25596_p3() {
    tmp_2432_fu_25596_p3 = esl_concat<11,3>(tmp_926_fu_25591_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_2433_fu_25608_p3() {
    tmp_2433_fu_25608_p3 = esl_concat<11,1>(tmp_926_fu_25591_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_2434_fu_25631_p3() {
    tmp_2434_fu_25631_p3 = esl_concat<10,3>(tmp_928_fu_25626_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_2435_fu_25643_p3() {
    tmp_2435_fu_25643_p3 = esl_concat<10,1>(tmp_928_fu_25626_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_2436_fu_26064_p1() {
    tmp_2436_fu_26064_p1 = k32_reg_11505.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2437_fu_25805_p1() {
    tmp_2437_fu_25805_p1 = i87_reg_11483.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_2438_fu_26001_p1() {
    tmp_2438_fu_26001_p1 = grp_fu_25893_p2.read().range(6-1, 0);
}

void ShuffleNetV2::thread_tmp_2441_fu_26489_p1() {
    tmp_2441_fu_26489_p1 = co102_reg_11582.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2442_fu_26523_p4() {
    tmp_2442_fu_26523_p4 = co102_reg_11582.read().range(4, 1);
}

void ShuffleNetV2::thread_tmp_2443_fu_26401_p1() {
    tmp_2443_fu_26401_p1 = k34_reg_11571.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2444_fu_26208_p1() {
    tmp_2444_fu_26208_p1 = i92_reg_11549.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2445_fu_26289_p2() {
    tmp_2445_fu_26289_p2 = (!ap_const_lv10_2.is_01())? sc_lv<10>(): tmp_941_reg_44885.read() << (unsigned short)ap_const_lv10_2.to_uint();
}

void ShuffleNetV2::thread_tmp_2446_fu_26332_p3() {
    tmp_2446_fu_26332_p3 = esl_concat<12,2>(tmp_946_reg_44902.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_2447_fu_26837_p1() {
    tmp_2447_fu_26837_p1 = k36_reg_11626.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2448_fu_26578_p1() {
    tmp_2448_fu_26578_p1 = i94_reg_11604.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_2449_fu_26774_p1() {
    tmp_2449_fu_26774_p1 = grp_fu_26666_p2.read().range(6-1, 0);
}

void ShuffleNetV2::thread_tmp_244_cast_cast_fu_23460_p1() {
    tmp_244_cast_cast_fu_23460_p1 = esl_sext<8,7>(tmp_244_fu_23455_p2.read());
}

void ShuffleNetV2::thread_tmp_244_fu_23455_p2() {
    tmp_244_fu_23455_p2 = (!tmp_236_reg_43999.read().is_01() || !ci46_cast_fu_23435_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_236_reg_43999.read()) + sc_biguint<7>(ci46_cast_fu_23435_p1.read()));
}

void ShuffleNetV2::thread_tmp_2452_fu_26972_p3() {
    tmp_2452_fu_26972_p3 = esl_concat<10,3>(tmp_964_fu_26967_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_2453_fu_26984_p3() {
    tmp_2453_fu_26984_p3 = esl_concat<10,1>(tmp_964_fu_26967_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_2454_fu_27255_p1() {
    tmp_2454_fu_27255_p1 = co108_reg_11703.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2455_fu_27289_p4() {
    tmp_2455_fu_27289_p4 = co108_reg_11703.read().range(4, 1);
}

void ShuffleNetV2::thread_tmp_2456_fu_27135_p3() {
    tmp_2456_fu_27135_p3 = esl_concat<11,3>(tmp_966_fu_27130_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_2457_fu_27147_p3() {
    tmp_2457_fu_27147_p3 = esl_concat<11,1>(tmp_966_fu_27130_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_2458_fu_27170_p3() {
    tmp_2458_fu_27170_p3 = esl_concat<10,3>(tmp_968_fu_27165_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_2459_fu_27182_p3() {
    tmp_2459_fu_27182_p3 = esl_concat<10,1>(tmp_968_fu_27165_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_245_cast_cast_fu_23510_p1() {
    tmp_245_cast_cast_fu_23510_p1 = esl_sext<9,7>(tmp_245_fu_23504_p2.read());
}

void ShuffleNetV2::thread_tmp_245_fu_23504_p2() {
    tmp_245_fu_23504_p2 = (!p_shl68_cast_fu_23488_p1.read().is_01() || !p_shl69_cast_fu_23500_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl68_cast_fu_23488_p1.read()) - sc_biguint<7>(p_shl69_cast_fu_23500_p1.read()));
}

void ShuffleNetV2::thread_tmp_2460_fu_27603_p1() {
    tmp_2460_fu_27603_p1 = k38_reg_11747.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2461_fu_27344_p1() {
    tmp_2461_fu_27344_p1 = i98_reg_11725.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_2462_fu_27540_p1() {
    tmp_2462_fu_27540_p1 = grp_fu_27432_p2.read().range(6-1, 0);
}

void ShuffleNetV2::thread_tmp_2465_fu_28036_p1() {
    tmp_2465_fu_28036_p1 = co112_reg_11824.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2466_fu_28070_p4() {
    tmp_2466_fu_28070_p4 = co112_reg_11824.read().range(4, 1);
}

void ShuffleNetV2::thread_tmp_2467_fu_27948_p1() {
    tmp_2467_fu_27948_p1 = k40_reg_11813.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2468_fu_27747_p1() {
    tmp_2468_fu_27747_p1 = i103_reg_11791.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2469_fu_27828_p2() {
    tmp_2469_fu_27828_p2 = (!ap_const_lv10_2.is_01())? sc_lv<10>(): tmp_981_reg_45370.read() << (unsigned short)ap_const_lv10_2.to_uint();
}

void ShuffleNetV2::thread_tmp_246_cast_fu_23570_p1() {
    tmp_246_cast_fu_23570_p1 = esl_sext<10,9>(tmp_246_reg_44035.read());
}

void ShuffleNetV2::thread_tmp_246_fu_23514_p2() {
    tmp_246_fu_23514_p2 = (!tmp_245_cast_cast_fu_23510_p1.read().is_01() || !tmp_237_cast_cast_reg_44004.read().is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_245_cast_cast_fu_23510_p1.read()) + sc_biguint<9>(tmp_237_cast_cast_reg_44004.read()));
}

void ShuffleNetV2::thread_tmp_2470_fu_27879_p3() {
    tmp_2470_fu_27879_p3 = esl_concat<12,2>(tmp_987_reg_45387.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_2471_fu_28384_p1() {
    tmp_2471_fu_28384_p1 = k42_reg_11868.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2472_fu_28125_p1() {
    tmp_2472_fu_28125_p1 = i105_reg_11846.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_2473_fu_28321_p1() {
    tmp_2473_fu_28321_p1 = grp_fu_28213_p2.read().range(6-1, 0);
}

void ShuffleNetV2::thread_tmp_2476_fu_28519_p3() {
    tmp_2476_fu_28519_p3 = esl_concat<10,3>(tmp_1005_fu_28514_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_2477_fu_28531_p3() {
    tmp_2477_fu_28531_p3 = esl_concat<10,1>(tmp_1005_fu_28514_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_2478_fu_28802_p1() {
    tmp_2478_fu_28802_p1 = co118_reg_11945.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2479_fu_28836_p4() {
    tmp_2479_fu_28836_p4 = co118_reg_11945.read().range(4, 1);
}

void ShuffleNetV2::thread_tmp_247_cast_fu_23549_p1() {
    tmp_247_cast_fu_23549_p1 = esl_sext<10,8>(tmp_247_fu_23543_p2.read());
}

void ShuffleNetV2::thread_tmp_247_fu_23543_p2() {
    tmp_247_fu_23543_p2 = (!p_shl70_cast_fu_23527_p1.read().is_01() || !p_shl71_cast_fu_23539_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl70_cast_fu_23527_p1.read()) - sc_biguint<8>(p_shl71_cast_fu_23539_p1.read()));
}

void ShuffleNetV2::thread_tmp_2480_fu_28682_p3() {
    tmp_2480_fu_28682_p3 = esl_concat<11,3>(tmp_1007_fu_28677_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_2481_fu_28694_p3() {
    tmp_2481_fu_28694_p3 = esl_concat<11,1>(tmp_1007_fu_28677_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_2482_fu_28717_p3() {
    tmp_2482_fu_28717_p3 = esl_concat<10,3>(tmp_1009_fu_28712_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_2483_fu_28729_p3() {
    tmp_2483_fu_28729_p3 = esl_concat<10,1>(tmp_1009_fu_28712_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_2484_fu_29150_p1() {
    tmp_2484_fu_29150_p1 = k44_reg_11989.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2485_fu_28891_p1() {
    tmp_2485_fu_28891_p1 = i109_reg_11967.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_2486_fu_29087_p1() {
    tmp_2486_fu_29087_p1 = grp_fu_28979_p2.read().range(6-1, 0);
}

void ShuffleNetV2::thread_tmp_2489_fu_29587_p1() {
    tmp_2489_fu_29587_p1 = co122_reg_12066.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2490_fu_29621_p4() {
    tmp_2490_fu_29621_p4 = co122_reg_12066.read().range(4, 1);
}

void ShuffleNetV2::thread_tmp_2491_fu_29499_p1() {
    tmp_2491_fu_29499_p1 = k46_reg_12055.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2492_fu_29294_p1() {
    tmp_2492_fu_29294_p1 = i114_reg_12033.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2493_fu_29375_p2() {
    tmp_2493_fu_29375_p2 = (!ap_const_lv10_2.is_01())? sc_lv<10>(): tmp_1022_reg_45855.read() << (unsigned short)ap_const_lv10_2.to_uint();
}

void ShuffleNetV2::thread_tmp_2494_fu_29430_p3() {
    tmp_2494_fu_29430_p3 = esl_concat<13,2>(tmp_1028_reg_45872.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_2495_fu_29935_p1() {
    tmp_2495_fu_29935_p1 = k48_reg_12110.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2496_fu_29676_p1() {
    tmp_2496_fu_29676_p1 = i116_reg_12088.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_2497_fu_29872_p1() {
    tmp_2497_fu_29872_p1 = grp_fu_29764_p2.read().range(6-1, 0);
}

void ShuffleNetV2::thread_tmp_249_fu_23976_p2() {
    tmp_249_fu_23976_p2 = (!co87_cast_fu_23960_p1.read().is_01() || !ap_const_lv7_30.is_01())? sc_lv<7>(): (sc_biguint<7>(co87_cast_fu_23960_p1.read()) + sc_biguint<7>(ap_const_lv7_30));
}

void ShuffleNetV2::thread_tmp_2500_fu_30070_p3() {
    tmp_2500_fu_30070_p3 = esl_concat<10,3>(tmp_1046_fu_30065_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_2501_fu_30082_p3() {
    tmp_2501_fu_30082_p3 = esl_concat<10,1>(tmp_1046_fu_30065_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_2502_fu_30353_p1() {
    tmp_2502_fu_30353_p1 = co128_reg_12187.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2503_fu_30387_p4() {
    tmp_2503_fu_30387_p4 = co128_reg_12187.read().range(4, 1);
}

void ShuffleNetV2::thread_tmp_2504_fu_30233_p3() {
    tmp_2504_fu_30233_p3 = esl_concat<11,3>(tmp_1048_fu_30228_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_2505_fu_30245_p3() {
    tmp_2505_fu_30245_p3 = esl_concat<11,1>(tmp_1048_fu_30228_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_2506_fu_30268_p3() {
    tmp_2506_fu_30268_p3 = esl_concat<10,3>(tmp_1050_fu_30263_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_2507_fu_30280_p3() {
    tmp_2507_fu_30280_p3 = esl_concat<10,1>(tmp_1050_fu_30263_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_2508_fu_30709_p1() {
    tmp_2508_fu_30709_p1 = k50_reg_12231.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2509_fu_30442_p1() {
    tmp_2509_fu_30442_p1 = i120_reg_12209.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_2510_fu_30646_p1() {
    tmp_2510_fu_30646_p1 = grp_fu_30530_p2.read().range(6-1, 0);
}

void ShuffleNetV2::thread_tmp_2513_fu_31138_p1() {
    tmp_2513_fu_31138_p1 = co132_reg_12308.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2514_fu_31172_p4() {
    tmp_2514_fu_31172_p4 = co132_reg_12308.read().range(4, 1);
}

void ShuffleNetV2::thread_tmp_2515_fu_31050_p1() {
    tmp_2515_fu_31050_p1 = k52_reg_12297.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2516_fu_30853_p1() {
    tmp_2516_fu_30853_p1 = i125_reg_12275.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2517_fu_30934_p2() {
    tmp_2517_fu_30934_p2 = (!ap_const_lv10_2.is_01())? sc_lv<10>(): tmp_1065_reg_46340.read() << (unsigned short)ap_const_lv10_2.to_uint();
}

void ShuffleNetV2::thread_tmp_2518_fu_30981_p3() {
    tmp_2518_fu_30981_p3 = esl_concat<14,2>(tmp_1070_reg_46357.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_2519_fu_31494_p1() {
    tmp_2519_fu_31494_p1 = k54_reg_12352.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_251_fu_24185_p2() {
    tmp_251_fu_24185_p2 = (!p_shl72_cast_fu_24169_p1.read().is_01() || !p_shl73_cast_fu_24181_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl72_cast_fu_24169_p1.read()) - sc_biguint<7>(p_shl73_cast_fu_24181_p1.read()));
}

void ShuffleNetV2::thread_tmp_2520_fu_31227_p1() {
    tmp_2520_fu_31227_p1 = i127_reg_12330.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_2521_fu_31431_p1() {
    tmp_2521_fu_31431_p1 = grp_fu_31315_p2.read().range(6-1, 0);
}

void ShuffleNetV2::thread_tmp_2524_fu_31633_p3() {
    tmp_2524_fu_31633_p3 = esl_concat<10,3>(tmp_1090_fu_31628_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_2525_fu_31645_p3() {
    tmp_2525_fu_31645_p3 = esl_concat<10,1>(tmp_1090_fu_31628_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_2526_fu_31916_p1() {
    tmp_2526_fu_31916_p1 = co138_reg_12429.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2527_fu_31950_p4() {
    tmp_2527_fu_31950_p4 = co138_reg_12429.read().range(4, 1);
}

void ShuffleNetV2::thread_tmp_2528_fu_31796_p3() {
    tmp_2528_fu_31796_p3 = esl_concat<11,3>(tmp_1092_fu_31791_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_2529_fu_31808_p3() {
    tmp_2529_fu_31808_p3 = esl_concat<11,1>(tmp_1092_fu_31791_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_252_cast_cast_fu_24201_p1() {
    tmp_252_cast_cast_fu_24201_p1 = esl_zext<9,4>(tmp_2407_fu_24191_p4.read());
}

void ShuffleNetV2::thread_tmp_2530_fu_31831_p3() {
    tmp_2530_fu_31831_p3 = esl_concat<10,3>(tmp_1094_fu_31826_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_2531_fu_31843_p3() {
    tmp_2531_fu_31843_p3 = esl_concat<10,1>(tmp_1094_fu_31826_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_2532_fu_32272_p1() {
    tmp_2532_fu_32272_p1 = k56_reg_12473.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2533_fu_32005_p1() {
    tmp_2533_fu_32005_p1 = i131_reg_12451.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_2534_fu_32209_p1() {
    tmp_2534_fu_32209_p1 = grp_fu_32093_p2.read().range(6-1, 0);
}

void ShuffleNetV2::thread_tmp_2537_fu_32705_p1() {
    tmp_2537_fu_32705_p1 = co142_reg_12550.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2538_fu_32739_p4() {
    tmp_2538_fu_32739_p4 = co142_reg_12550.read().range(4, 1);
}

void ShuffleNetV2::thread_tmp_2539_fu_32613_p1() {
    tmp_2539_fu_32613_p1 = k58_reg_12539.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_253_cast_cast_fu_24547_p1() {
    tmp_253_cast_cast_fu_24547_p1 = esl_sext<9,7>(tmp_253_fu_24541_p2.read());
}

void ShuffleNetV2::thread_tmp_253_fu_24541_p2() {
    tmp_253_fu_24541_p2 = (!p_shl74_cast_fu_24525_p1.read().is_01() || !p_shl75_cast_fu_24537_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl74_cast_fu_24525_p1.read()) - sc_biguint<7>(p_shl75_cast_fu_24537_p1.read()));
}

void ShuffleNetV2::thread_tmp_2540_fu_32420_p1() {
    tmp_2540_fu_32420_p1 = i136_reg_12517.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2541_fu_32501_p2() {
    tmp_2541_fu_32501_p2 = (!ap_const_lv10_2.is_01())? sc_lv<10>(): tmp_1109_reg_46825.read() << (unsigned short)ap_const_lv10_2.to_uint();
}

void ShuffleNetV2::thread_tmp_2542_fu_32544_p3() {
    tmp_2542_fu_32544_p3 = esl_concat<13,2>(tmp_1114_reg_46842.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_2543_fu_33061_p1() {
    tmp_2543_fu_33061_p1 = k60_reg_12594.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2544_fu_32794_p1() {
    tmp_2544_fu_32794_p1 = i138_reg_12572.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_2545_fu_32998_p1() {
    tmp_2545_fu_32998_p1 = grp_fu_32890_p2.read().range(6-1, 0);
}

void ShuffleNetV2::thread_tmp_2548_fu_33272_p1() {
    tmp_2548_fu_33272_p1 = co146_reg_12638.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_2549_fu_33288_p2() {
    tmp_2549_fu_33288_p2 = (!ap_const_lv5_3.is_01())? sc_lv<5>(): co146_reg_12638.read() << (unsigned short)ap_const_lv5_3.to_uint();
}

void ShuffleNetV2::thread_tmp_254_cast_fu_24585_p1() {
    tmp_254_cast_fu_24585_p1 = esl_sext<32,7>(tmp_254_reg_44322.read());
}

void ShuffleNetV2::thread_tmp_254_fu_24551_p2() {
    tmp_254_fu_24551_p2 = (!tmp_253_fu_24541_p2.read().is_01() || !i80_cast_reg_44301.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_253_fu_24541_p2.read()) + sc_biguint<7>(i80_cast_reg_44301.read()));
}

void ShuffleNetV2::thread_tmp_2550_fu_33304_p4() {
    tmp_2550_fu_33304_p4 = co146_reg_12638.read().range(4, 2);
}

void ShuffleNetV2::thread_tmp_2551_fu_33200_p3() {
    tmp_2551_fu_33200_p3 = esl_concat<10,3>(tmp_1126_fu_33195_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_2552_fu_33212_p3() {
    tmp_2552_fu_33212_p3 = esl_concat<10,1>(tmp_1126_fu_33195_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_2553_fu_33608_p1() {
    tmp_2553_fu_33608_p1 = k62_reg_12682.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_2554_fu_33359_p1() {
    tmp_2554_fu_33359_p1 = i142_reg_12660.read().range(4-1, 0);
}

void ShuffleNetV2::thread_tmp_2555_fu_33379_p2() {
    tmp_2555_fu_33379_p2 = (!ap_const_lv5_1.is_01())? sc_lv<5>(): i142_reg_12660.read() << (unsigned short)ap_const_lv5_1.to_uint();
}

void ShuffleNetV2::thread_tmp_2556_fu_33545_p1() {
    tmp_2556_fu_33545_p1 = grp_fu_33437_p2.read().range(6-1, 0);
}

void ShuffleNetV2::thread_tmp_2559_fu_34041_p1() {
    tmp_2559_fu_34041_p1 = co150_reg_12759.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_2560_fu_34057_p2() {
    tmp_2560_fu_34057_p2 = (!ap_const_lv5_3.is_01())? sc_lv<5>(): co150_reg_12759.read() << (unsigned short)ap_const_lv5_3.to_uint();
}

void ShuffleNetV2::thread_tmp_2561_fu_34073_p4() {
    tmp_2561_fu_34073_p4 = co150_reg_12759.read().range(4, 2);
}

void ShuffleNetV2::thread_tmp_2562_fu_33949_p1() {
    tmp_2562_fu_33949_p1 = k64_reg_12748.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_2563_fu_33756_p1() {
    tmp_2563_fu_33756_p1 = i147_reg_12726.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_2564_fu_33837_p2() {
    tmp_2564_fu_33837_p2 = (!ap_const_lv11_2.is_01())? sc_lv<11>(): tmp_1137_reg_47256.read() << (unsigned short)ap_const_lv11_2.to_uint();
}

void ShuffleNetV2::thread_tmp_2565_fu_33880_p3() {
    tmp_2565_fu_33880_p3 = esl_concat<13,2>(tmp_1142_reg_47273.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_2566_fu_34377_p1() {
    tmp_2566_fu_34377_p1 = k66_reg_12803.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_2567_fu_34128_p1() {
    tmp_2567_fu_34128_p1 = i149_reg_12781.read().range(4-1, 0);
}

void ShuffleNetV2::thread_tmp_2568_fu_34148_p2() {
    tmp_2568_fu_34148_p2 = (!ap_const_lv5_1.is_01())? sc_lv<5>(): i149_reg_12781.read() << (unsigned short)ap_const_lv5_1.to_uint();
}

void ShuffleNetV2::thread_tmp_2569_fu_34314_p1() {
    tmp_2569_fu_34314_p1 = grp_fu_34206_p2.read().range(6-1, 0);
}

void ShuffleNetV2::thread_tmp_256_cast_cast_fu_24230_p1() {
    tmp_256_cast_cast_fu_24230_p1 = esl_sext<8,7>(tmp_256_fu_24225_p2.read());
}

void ShuffleNetV2::thread_tmp_256_fu_24225_p2() {
    tmp_256_fu_24225_p2 = (!tmp_251_reg_44224.read().is_01() || !ci48_cast_fu_24205_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_251_reg_44224.read()) + sc_biguint<7>(ci48_cast_fu_24205_p1.read()));
}

void ShuffleNetV2::thread_tmp_2572_fu_34810_p1() {
    tmp_2572_fu_34810_p1 = co154_reg_12880.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_2573_fu_34826_p2() {
    tmp_2573_fu_34826_p2 = (!ap_const_lv5_3.is_01())? sc_lv<5>(): co154_reg_12880.read() << (unsigned short)ap_const_lv5_3.to_uint();
}

void ShuffleNetV2::thread_tmp_2574_fu_34842_p4() {
    tmp_2574_fu_34842_p4 = co154_reg_12880.read().range(4, 2);
}

void ShuffleNetV2::thread_tmp_2575_fu_34722_p1() {
    tmp_2575_fu_34722_p1 = k68_reg_12869.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_2576_fu_34529_p1() {
    tmp_2576_fu_34529_p1 = i154_reg_12847.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_2577_fu_34610_p2() {
    tmp_2577_fu_34610_p2 = (!ap_const_lv11_2.is_01())? sc_lv<11>(): tmp_1153_reg_47516.read() << (unsigned short)ap_const_lv11_2.to_uint();
}

void ShuffleNetV2::thread_tmp_2578_fu_34653_p3() {
    tmp_2578_fu_34653_p3 = esl_concat<13,2>(tmp_1158_reg_47533.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_2579_fu_35146_p1() {
    tmp_2579_fu_35146_p1 = k70_reg_12924.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_257_cast_cast_fu_24280_p1() {
    tmp_257_cast_cast_fu_24280_p1 = esl_sext<9,7>(tmp_257_fu_24274_p2.read());
}

void ShuffleNetV2::thread_tmp_257_fu_24274_p2() {
    tmp_257_fu_24274_p2 = (!p_shl76_cast_fu_24258_p1.read().is_01() || !p_shl77_cast_fu_24270_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl76_cast_fu_24258_p1.read()) - sc_biguint<7>(p_shl77_cast_fu_24270_p1.read()));
}

void ShuffleNetV2::thread_tmp_2580_fu_34897_p1() {
    tmp_2580_fu_34897_p1 = i156_reg_12902.read().range(4-1, 0);
}

void ShuffleNetV2::thread_tmp_2581_fu_34917_p2() {
    tmp_2581_fu_34917_p2 = (!ap_const_lv5_1.is_01())? sc_lv<5>(): i156_reg_12902.read() << (unsigned short)ap_const_lv5_1.to_uint();
}

void ShuffleNetV2::thread_tmp_2582_fu_35083_p1() {
    tmp_2582_fu_35083_p1 = grp_fu_34975_p2.read().range(6-1, 0);
}

void ShuffleNetV2::thread_tmp_2585_fu_35445_p1() {
    tmp_2585_fu_35445_p1 = co158_reg_12968.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_2586_fu_35461_p2() {
    tmp_2586_fu_35461_p2 = (!ap_const_lv5_3.is_01())? sc_lv<5>(): co158_reg_12968.read() << (unsigned short)ap_const_lv5_3.to_uint();
}

void ShuffleNetV2::thread_tmp_2587_fu_35477_p4() {
    tmp_2587_fu_35477_p4 = co158_reg_12968.read().range(4, 2);
}

void ShuffleNetV2::thread_tmp_2588_fu_35333_p1() {
    tmp_2588_fu_35333_p1 = tmp_1173_fu_35328_p2.read().range(11-1, 0);
}

void ShuffleNetV2::thread_tmp_2589_fu_35364_p1() {
    tmp_2589_fu_35364_p1 = tmp_1175_fu_35359_p2.read().range(10-1, 0);
}

void ShuffleNetV2::thread_tmp_258_cast_fu_24340_p1() {
    tmp_258_cast_fu_24340_p1 = esl_sext<10,9>(tmp_258_reg_44260.read());
}

void ShuffleNetV2::thread_tmp_258_fu_24284_p2() {
    tmp_258_fu_24284_p2 = (!tmp_252_cast_cast_reg_44229.read().is_01() || !tmp_257_cast_cast_fu_24280_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_252_cast_cast_reg_44229.read()) + sc_bigint<9>(tmp_257_cast_cast_fu_24280_p1.read()));
}

void ShuffleNetV2::thread_tmp_2590_fu_35781_p1() {
    tmp_2590_fu_35781_p1 = k72_reg_13012.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_2591_fu_35532_p1() {
    tmp_2591_fu_35532_p1 = i160_reg_12990.read().range(4-1, 0);
}

void ShuffleNetV2::thread_tmp_2592_fu_35552_p2() {
    tmp_2592_fu_35552_p2 = (!ap_const_lv5_1.is_01())? sc_lv<5>(): i160_reg_12990.read() << (unsigned short)ap_const_lv5_1.to_uint();
}

void ShuffleNetV2::thread_tmp_2593_fu_35718_p1() {
    tmp_2593_fu_35718_p1 = grp_fu_35610_p2.read().range(6-1, 0);
}

void ShuffleNetV2::thread_tmp_2596_fu_36206_p1() {
    tmp_2596_fu_36206_p1 = co162_reg_13089.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_2597_fu_36222_p2() {
    tmp_2597_fu_36222_p2 = (!ap_const_lv5_3.is_01())? sc_lv<5>(): co162_reg_13089.read() << (unsigned short)ap_const_lv5_3.to_uint();
}

void ShuffleNetV2::thread_tmp_2598_fu_36238_p4() {
    tmp_2598_fu_36238_p4 = co162_reg_13089.read().range(4, 2);
}

void ShuffleNetV2::thread_tmp_2599_fu_36118_p1() {
    tmp_2599_fu_36118_p1 = k74_reg_13078.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_259_cast_cast_fu_24319_p1() {
    tmp_259_cast_cast_fu_24319_p1 = esl_sext<9,8>(tmp_259_fu_24313_p2.read());
}

void ShuffleNetV2::thread_tmp_259_fu_24313_p2() {
    tmp_259_fu_24313_p2 = (!p_shl78_cast_fu_24297_p1.read().is_01() || !p_shl79_cast_fu_24309_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl78_cast_fu_24297_p1.read()) - sc_biguint<8>(p_shl79_cast_fu_24309_p1.read()));
}

void ShuffleNetV2::thread_tmp_2600_fu_35925_p1() {
    tmp_2600_fu_35925_p1 = i165_reg_13056.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_2601_fu_36006_p2() {
    tmp_2601_fu_36006_p2 = (!ap_const_lv11_2.is_01())? sc_lv<11>(): tmp_1187_reg_47957.read() << (unsigned short)ap_const_lv11_2.to_uint();
}

void ShuffleNetV2::thread_tmp_2602_fu_36049_p3() {
    tmp_2602_fu_36049_p3 = esl_concat<13,2>(tmp_1192_reg_47974.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_2603_fu_36550_p1() {
    tmp_2603_fu_36550_p1 = k76_reg_13133.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_2604_fu_36293_p1() {
    tmp_2604_fu_36293_p1 = i167_reg_13111.read().range(4-1, 0);
}

void ShuffleNetV2::thread_tmp_2605_fu_36313_p2() {
    tmp_2605_fu_36313_p2 = (!ap_const_lv5_1.is_01())? sc_lv<5>(): i167_reg_13111.read() << (unsigned short)ap_const_lv5_1.to_uint();
}

void ShuffleNetV2::thread_tmp_2606_fu_36487_p1() {
    tmp_2606_fu_36487_p1 = grp_fu_36371_p2.read().range(6-1, 0);
}

void ShuffleNetV2::thread_tmp_2609_fu_36689_p1() {
    tmp_2609_fu_36689_p1 = tmp_1212_fu_36684_p2.read().range(11-1, 0);
}

void ShuffleNetV2::thread_tmp_2610_fu_36701_p3() {
    tmp_2610_fu_36701_p3 = esl_concat<12,1>(tmp_1212_fu_36684_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_2611_fu_36972_p1() {
    tmp_2611_fu_36972_p1 = co168_reg_13210.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_2612_fu_36988_p2() {
    tmp_2612_fu_36988_p2 = (!ap_const_lv5_3.is_01())? sc_lv<5>(): co168_reg_13210.read() << (unsigned short)ap_const_lv5_3.to_uint();
}

void ShuffleNetV2::thread_tmp_2613_fu_37004_p4() {
    tmp_2613_fu_37004_p4 = co168_reg_13210.read().range(4, 2);
}

void ShuffleNetV2::thread_tmp_2614_fu_36860_p1() {
    tmp_2614_fu_36860_p1 = tmp_1214_fu_36855_p2.read().range(11-1, 0);
}

void ShuffleNetV2::thread_tmp_2615_fu_36891_p1() {
    tmp_2615_fu_36891_p1 = tmp_1216_fu_36886_p2.read().range(10-1, 0);
}

void ShuffleNetV2::thread_tmp_2616_fu_37308_p1() {
    tmp_2616_fu_37308_p1 = k78_reg_13254.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_2617_fu_37059_p1() {
    tmp_2617_fu_37059_p1 = i171_reg_13232.read().range(4-1, 0);
}

void ShuffleNetV2::thread_tmp_2618_fu_37079_p2() {
    tmp_2618_fu_37079_p2 = (!ap_const_lv5_1.is_01())? sc_lv<5>(): i171_reg_13232.read() << (unsigned short)ap_const_lv5_1.to_uint();
}

void ShuffleNetV2::thread_tmp_2619_fu_37245_p1() {
    tmp_2619_fu_37245_p1 = grp_fu_37137_p2.read().range(6-1, 0);
}

void ShuffleNetV2::thread_tmp_261_cast_cast_fu_24888_p1() {
    tmp_261_cast_cast_fu_24888_p1 = esl_sext<8,7>(tmp_261_fu_24882_p2.read());
}

void ShuffleNetV2::thread_tmp_261_fu_24882_p2() {
    tmp_261_fu_24882_p2 = (!p_shl80_cast_fu_24866_p1.read().is_01() || !p_shl81_cast_fu_24878_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl80_cast_fu_24866_p1.read()) - sc_biguint<7>(p_shl81_cast_fu_24878_p1.read()));
}

void ShuffleNetV2::thread_tmp_2622_fu_37745_p1() {
    tmp_2622_fu_37745_p1 = co172_reg_13331.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_2623_fu_37761_p2() {
    tmp_2623_fu_37761_p2 = (!ap_const_lv5_3.is_01())? sc_lv<5>(): co172_reg_13331.read() << (unsigned short)ap_const_lv5_3.to_uint();
}

void ShuffleNetV2::thread_tmp_2624_fu_37777_p4() {
    tmp_2624_fu_37777_p4 = co172_reg_13331.read().range(4, 2);
}

void ShuffleNetV2::thread_tmp_2625_fu_37657_p1() {
    tmp_2625_fu_37657_p1 = k80_reg_13320.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_2626_fu_37452_p1() {
    tmp_2626_fu_37452_p1 = i176_reg_13298.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_2627_fu_37533_p2() {
    tmp_2627_fu_37533_p2 = (!ap_const_lv11_2.is_01())? sc_lv<11>(): tmp_1229_reg_48442.read() << (unsigned short)ap_const_lv11_2.to_uint();
}

void ShuffleNetV2::thread_tmp_2628_fu_37588_p3() {
    tmp_2628_fu_37588_p3 = esl_concat<14,2>(tmp_1235_reg_48459.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_2629_fu_38081_p1() {
    tmp_2629_fu_38081_p1 = k82_reg_13375.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_262_cast_fu_24926_p1() {
    tmp_262_cast_fu_24926_p1 = esl_sext<32,7>(tmp_262_reg_44455.read());
}

void ShuffleNetV2::thread_tmp_262_fu_24892_p2() {
    tmp_262_fu_24892_p2 = (!tmp_261_fu_24882_p2.read().is_01() || !i83_cast_reg_44434.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_261_fu_24882_p2.read()) + sc_biguint<7>(i83_cast_reg_44434.read()));
}

void ShuffleNetV2::thread_tmp_2630_fu_37832_p1() {
    tmp_2630_fu_37832_p1 = i178_reg_13353.read().range(4-1, 0);
}

void ShuffleNetV2::thread_tmp_2631_fu_37852_p2() {
    tmp_2631_fu_37852_p2 = (!ap_const_lv5_1.is_01())? sc_lv<5>(): i178_reg_13353.read() << (unsigned short)ap_const_lv5_1.to_uint();
}

void ShuffleNetV2::thread_tmp_2632_fu_38018_p1() {
    tmp_2632_fu_38018_p1 = grp_fu_37910_p2.read().range(6-1, 0);
}

void ShuffleNetV2::thread_tmp_2635_fu_38220_p1() {
    tmp_2635_fu_38220_p1 = tmp_1253_fu_38215_p2.read().range(11-1, 0);
}

void ShuffleNetV2::thread_tmp_2636_fu_38232_p3() {
    tmp_2636_fu_38232_p3 = esl_concat<12,1>(tmp_1253_fu_38215_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_2637_fu_38503_p1() {
    tmp_2637_fu_38503_p1 = co178_reg_13452.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_2638_fu_38519_p2() {
    tmp_2638_fu_38519_p2 = (!ap_const_lv5_3.is_01())? sc_lv<5>(): co178_reg_13452.read() << (unsigned short)ap_const_lv5_3.to_uint();
}

void ShuffleNetV2::thread_tmp_2639_fu_38535_p4() {
    tmp_2639_fu_38535_p4 = co178_reg_13452.read().range(4, 2);
}

void ShuffleNetV2::thread_tmp_2640_fu_38391_p1() {
    tmp_2640_fu_38391_p1 = tmp_1255_fu_38386_p2.read().range(11-1, 0);
}

void ShuffleNetV2::thread_tmp_2641_fu_38422_p1() {
    tmp_2641_fu_38422_p1 = tmp_1257_fu_38417_p2.read().range(10-1, 0);
}

void ShuffleNetV2::thread_tmp_2642_fu_38839_p1() {
    tmp_2642_fu_38839_p1 = k84_reg_13496.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_2643_fu_38590_p1() {
    tmp_2643_fu_38590_p1 = i182_reg_13474.read().range(4-1, 0);
}

void ShuffleNetV2::thread_tmp_2644_fu_38610_p2() {
    tmp_2644_fu_38610_p2 = (!ap_const_lv5_1.is_01())? sc_lv<5>(): i182_reg_13474.read() << (unsigned short)ap_const_lv5_1.to_uint();
}

void ShuffleNetV2::thread_tmp_2645_fu_38776_p1() {
    tmp_2645_fu_38776_p1 = grp_fu_38668_p2.read().range(6-1, 0);
}

void ShuffleNetV2::thread_tmp_2648_fu_39268_p1() {
    tmp_2648_fu_39268_p1 = co182_reg_13573.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_2649_fu_39284_p2() {
    tmp_2649_fu_39284_p2 = (!ap_const_lv5_3.is_01())? sc_lv<5>(): co182_reg_13573.read() << (unsigned short)ap_const_lv5_3.to_uint();
}

void ShuffleNetV2::thread_tmp_2650_fu_39300_p4() {
    tmp_2650_fu_39300_p4 = co182_reg_13573.read().range(4, 2);
}

void ShuffleNetV2::thread_tmp_2651_fu_39180_p1() {
    tmp_2651_fu_39180_p1 = k86_reg_13562.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_2652_fu_38983_p1() {
    tmp_2652_fu_38983_p1 = i187_reg_13540.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_2653_fu_39064_p2() {
    tmp_2653_fu_39064_p2 = (!ap_const_lv11_2.is_01())? sc_lv<11>(): tmp_1270_reg_48927.read() << (unsigned short)ap_const_lv11_2.to_uint();
}

void ShuffleNetV2::thread_tmp_2654_fu_39111_p3() {
    tmp_2654_fu_39111_p3 = esl_concat<15,2>(tmp_1275_reg_48944.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_2655_fu_39604_p1() {
    tmp_2655_fu_39604_p1 = k88_reg_13617.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_2656_fu_39355_p1() {
    tmp_2656_fu_39355_p1 = i189_reg_13595.read().range(4-1, 0);
}

void ShuffleNetV2::thread_tmp_2657_fu_39375_p2() {
    tmp_2657_fu_39375_p2 = (!ap_const_lv5_1.is_01())? sc_lv<5>(): i189_reg_13595.read() << (unsigned short)ap_const_lv5_1.to_uint();
}

void ShuffleNetV2::thread_tmp_2658_fu_39541_p1() {
    tmp_2658_fu_39541_p1 = grp_fu_39433_p2.read().range(6-1, 0);
}

void ShuffleNetV2::thread_tmp_265_fu_24974_p2() {
    tmp_265_fu_24974_p2 = (!p_shl82_cast_fu_24958_p1.read().is_01() || !p_shl83_cast_fu_24970_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl82_cast_fu_24958_p1.read()) - sc_biguint<7>(p_shl83_cast_fu_24970_p1.read()));
}

void ShuffleNetV2::thread_tmp_2661_fu_39743_p1() {
    tmp_2661_fu_39743_p1 = tmp_1291_fu_39738_p2.read().range(11-1, 0);
}

void ShuffleNetV2::thread_tmp_2662_fu_39755_p3() {
    tmp_2662_fu_39755_p3 = esl_concat<12,1>(tmp_1291_fu_39738_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_2663_fu_39895_p1() {
    tmp_2663_fu_39895_p1 = tmp_1294_fu_39890_p2.read().range(11-1, 0);
}

void ShuffleNetV2::thread_tmp_266_cast_cast_fu_24990_p1() {
    tmp_266_cast_cast_fu_24990_p1 = esl_zext<9,4>(tmp_2418_fu_24980_p4.read());
}

void ShuffleNetV2::thread_tmp_267_cast_fu_24695_p1() {
    tmp_267_cast_fu_24695_p1 = esl_sext<9,7>(tmp_267_fu_24689_p2.read());
}

void ShuffleNetV2::thread_tmp_267_fu_24689_p2() {
    tmp_267_fu_24689_p2 = (!p_shl84_cast_fu_24673_p1.read().is_01() || !p_shl85_cast_fu_24685_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl84_cast_fu_24673_p1.read()) - sc_biguint<7>(p_shl85_cast_fu_24685_p1.read()));
}

void ShuffleNetV2::thread_tmp_268_cast_cast_fu_24704_p1() {
    tmp_268_cast_cast_fu_24704_p1 = esl_sext<10,7>(tmp_268_fu_24699_p2.read());
}

void ShuffleNetV2::thread_tmp_268_fu_24699_p2() {
    tmp_268_fu_24699_p2 = (!co91_cast1_reg_44343.read().is_01() || !tmp_267_fu_24689_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(co91_cast1_reg_44343.read()) + sc_biguint<7>(tmp_267_fu_24689_p2.read()));
}

void ShuffleNetV2::thread_tmp_269_fu_25014_p2() {
    tmp_269_fu_25014_p2 = (!tmp_265_reg_44484.read().is_01() || !ci50_cast_fu_24994_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_265_reg_44484.read()) + sc_biguint<7>(ci50_cast_fu_24994_p1.read()));
}

void ShuffleNetV2::thread_tmp_270_fu_25322_p2() {
    tmp_270_fu_25322_p2 = (!p_shl86_cast_fu_25306_p1.read().is_01() || !p_shl87_cast_fu_25318_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl86_cast_fu_25306_p1.read()) - sc_biguint<7>(p_shl87_cast_fu_25318_p1.read()));
}

void ShuffleNetV2::thread_tmp_271_cast_fu_25366_p1() {
    tmp_271_cast_fu_25366_p1 = esl_sext<32,7>(tmp_271_reg_44582.read());
}

void ShuffleNetV2::thread_tmp_271_fu_25328_p2() {
    tmp_271_fu_25328_p2 = (!tmp_270_fu_25322_p2.read().is_01() || !i87_cast1_reg_44561.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_270_fu_25322_p2.read()) + sc_biguint<7>(i87_cast1_reg_44561.read()));
}

void ShuffleNetV2::thread_tmp_272_fu_25063_p2() {
    tmp_272_fu_25063_p2 = (!p_shl88_cast_fu_25047_p1.read().is_01() || !p_shl89_cast_fu_25059_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl88_cast_fu_25047_p1.read()) - sc_biguint<7>(p_shl89_cast_fu_25059_p1.read()));
}

void ShuffleNetV2::thread_tmp_273_cast_cast_fu_25019_p1() {
    tmp_273_cast_cast_fu_25019_p1 = esl_sext<8,7>(tmp_269_fu_25014_p2.read());
}

void ShuffleNetV2::thread_tmp_273_cast_fu_25129_p1() {
    tmp_273_cast_fu_25129_p1 = esl_sext<10,9>(tmp_273_reg_44520.read());
}

void ShuffleNetV2::thread_tmp_273_fu_25073_p2() {
    tmp_273_fu_25073_p2 = (!tmp_274_cast_cast_fu_25069_p1.read().is_01() || !tmp_266_cast_cast_reg_44489.read().is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_274_cast_cast_fu_25069_p1.read()) + sc_biguint<9>(tmp_266_cast_cast_reg_44489.read()));
}

void ShuffleNetV2::thread_tmp_274_cast_cast_fu_25069_p1() {
    tmp_274_cast_cast_fu_25069_p1 = esl_sext<9,7>(tmp_272_fu_25063_p2.read());
}

void ShuffleNetV2::thread_tmp_274_fu_25102_p2() {
    tmp_274_fu_25102_p2 = (!p_shl90_cast_fu_25086_p1.read().is_01() || !p_shl91_cast_fu_25098_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl90_cast_fu_25086_p1.read()) - sc_biguint<8>(p_shl91_cast_fu_25098_p1.read()));
}

void ShuffleNetV2::thread_tmp_275_fu_25535_p2() {
    tmp_275_fu_25535_p2 = (!co97_cast_fu_25519_p1.read().is_01() || !ap_const_lv7_30.is_01())? sc_lv<7>(): (sc_biguint<7>(co97_cast_fu_25519_p1.read()) + sc_biguint<7>(ap_const_lv7_30));
}

void ShuffleNetV2::thread_tmp_276_cast_fu_25108_p1() {
    tmp_276_cast_fu_25108_p1 = esl_sext<11,8>(tmp_274_fu_25102_p2.read());
}

void ShuffleNetV2::thread_tmp_276_fu_25744_p2() {
    tmp_276_fu_25744_p2 = (!p_shl92_cast_fu_25728_p1.read().is_01() || !p_shl93_cast_fu_25740_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl92_cast_fu_25728_p1.read()) - sc_biguint<7>(p_shl93_cast_fu_25740_p1.read()));
}

void ShuffleNetV2::thread_tmp_277_fu_25784_p2() {
    tmp_277_fu_25784_p2 = (!tmp_276_reg_44709.read().is_01() || !ci52_cast_fu_25764_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_276_reg_44709.read()) + sc_biguint<7>(ci52_cast_fu_25764_p1.read()));
}

void ShuffleNetV2::thread_tmp_278_fu_26092_p2() {
    tmp_278_fu_26092_p2 = (!p_shl94_cast_fu_26076_p1.read().is_01() || !p_shl95_cast_fu_26088_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl94_cast_fu_26076_p1.read()) - sc_biguint<7>(p_shl95_cast_fu_26088_p1.read()));
}

void ShuffleNetV2::thread_tmp_279_fu_26102_p2() {
    tmp_279_fu_26102_p2 = (!tmp_278_fu_26092_p2.read().is_01() || !i92_cast1_reg_44786.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_278_fu_26092_p2.read()) + sc_biguint<7>(i92_cast1_reg_44786.read()));
}

void ShuffleNetV2::thread_tmp_280_fu_25833_p2() {
    tmp_280_fu_25833_p2 = (!p_shl96_cast_fu_25817_p1.read().is_01() || !p_shl97_cast_fu_25829_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl96_cast_fu_25817_p1.read()) - sc_biguint<7>(p_shl97_cast_fu_25829_p1.read()));
}

void ShuffleNetV2::thread_tmp_281_cast_cast_fu_25760_p1() {
    tmp_281_cast_cast_fu_25760_p1 = esl_zext<9,4>(tmp_2431_fu_25750_p4.read());
}

void ShuffleNetV2::thread_tmp_281_cast_fu_25899_p1() {
    tmp_281_cast_fu_25899_p1 = esl_sext<10,9>(tmp_281_reg_44745.read());
}

void ShuffleNetV2::thread_tmp_281_fu_25843_p2() {
    tmp_281_fu_25843_p2 = (!tmp_286_cast_cast_fu_25839_p1.read().is_01() || !tmp_281_cast_cast_reg_44714.read().is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_286_cast_cast_fu_25839_p1.read()) + sc_biguint<9>(tmp_281_cast_cast_reg_44714.read()));
}

void ShuffleNetV2::thread_tmp_282_cast_fu_26098_p1() {
    tmp_282_cast_fu_26098_p1 = esl_sext<11,7>(tmp_278_fu_26092_p2.read());
}

void ShuffleNetV2::thread_tmp_282_fu_25872_p2() {
    tmp_282_fu_25872_p2 = (!p_shl98_cast_fu_25856_p1.read().is_01() || !p_shl99_cast_fu_25868_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl98_cast_fu_25856_p1.read()) - sc_biguint<8>(p_shl99_cast_fu_25868_p1.read()));
}

void ShuffleNetV2::thread_tmp_283_cast_fu_26132_p1() {
    tmp_283_cast_fu_26132_p1 = esl_sext<32,7>(tmp_279_reg_44807.read());
}

void ShuffleNetV2::thread_tmp_283_fu_26517_p2() {
    tmp_283_fu_26517_p2 = (!p_shl102_cast_fu_26501_p1.read().is_01() || !p_shl103_cast_fu_26513_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl102_cast_fu_26501_p1.read()) - sc_biguint<7>(p_shl103_cast_fu_26513_p1.read()));
}

void ShuffleNetV2::thread_tmp_284_fu_26429_p2() {
    tmp_284_fu_26429_p2 = (!p_shl100_cast_fu_26413_p1.read().is_01() || !p_shl101_cast_fu_26425_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl100_cast_fu_26413_p1.read()) - sc_biguint<7>(p_shl101_cast_fu_26425_p1.read()));
}

void ShuffleNetV2::thread_tmp_285_cast_cast_fu_25789_p1() {
    tmp_285_cast_cast_fu_25789_p1 = esl_sext<8,7>(tmp_277_fu_25784_p2.read());
}

void ShuffleNetV2::thread_tmp_285_fu_26439_p2() {
    tmp_285_fu_26439_p2 = (!tmp_284_fu_26429_p2.read().is_01() || !i95_cast1_reg_44919.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_284_fu_26429_p2.read()) + sc_biguint<7>(i95_cast1_reg_44919.read()));
}

void ShuffleNetV2::thread_tmp_286_cast_cast_fu_25839_p1() {
    tmp_286_cast_cast_fu_25839_p1 = esl_sext<9,7>(tmp_280_fu_25833_p2.read());
}

void ShuffleNetV2::thread_tmp_286_fu_26557_p2() {
    tmp_286_fu_26557_p2 = (!tmp_283_reg_44969.read().is_01() || !ci54_cast_fu_26537_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_283_reg_44969.read()) + sc_biguint<7>(ci54_cast_fu_26537_p1.read()));
}

void ShuffleNetV2::thread_tmp_287_fu_26236_p2() {
    tmp_287_fu_26236_p2 = (!p_shl104_cast_fu_26220_p1.read().is_01() || !p_shl105_cast_fu_26232_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl104_cast_fu_26220_p1.read()) - sc_biguint<7>(p_shl105_cast_fu_26232_p1.read()));
}

void ShuffleNetV2::thread_tmp_288_cast_fu_25878_p1() {
    tmp_288_cast_fu_25878_p1 = esl_sext<11,8>(tmp_282_fu_25872_p2.read());
}

void ShuffleNetV2::thread_tmp_288_fu_26246_p2() {
    tmp_288_fu_26246_p2 = (!co101_cast1_reg_44828.read().is_01() || !tmp_287_fu_26236_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(co101_cast1_reg_44828.read()) + sc_biguint<7>(tmp_287_fu_26236_p2.read()));
}

void ShuffleNetV2::thread_tmp_289_fu_26865_p2() {
    tmp_289_fu_26865_p2 = (!p_shl106_cast_fu_26849_p1.read().is_01() || !p_shl107_cast_fu_26861_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl106_cast_fu_26849_p1.read()) - sc_biguint<7>(p_shl107_cast_fu_26861_p1.read()));
}

void ShuffleNetV2::thread_tmp_290_cast_fu_26435_p1() {
    tmp_290_cast_fu_26435_p1 = esl_sext<11,7>(tmp_284_fu_26429_p2.read());
}

void ShuffleNetV2::thread_tmp_290_fu_26875_p2() {
    tmp_290_fu_26875_p2 = (!tmp_289_fu_26865_p2.read().is_01() || !i99_cast1_reg_45046.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_289_fu_26865_p2.read()) + sc_biguint<7>(i99_cast1_reg_45046.read()));
}

void ShuffleNetV2::thread_tmp_291_cast_fu_26469_p1() {
    tmp_291_cast_fu_26469_p1 = esl_sext<32,7>(tmp_285_reg_44940.read());
}

void ShuffleNetV2::thread_tmp_291_fu_26606_p2() {
    tmp_291_fu_26606_p2 = (!p_shl108_cast_fu_26590_p1.read().is_01() || !p_shl109_cast_fu_26602_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl108_cast_fu_26590_p1.read()) - sc_biguint<7>(p_shl109_cast_fu_26602_p1.read()));
}

void ShuffleNetV2::thread_tmp_292_cast_fu_26672_p1() {
    tmp_292_cast_fu_26672_p1 = esl_sext<10,9>(tmp_292_reg_45005.read());
}

void ShuffleNetV2::thread_tmp_292_fu_26616_p2() {
    tmp_292_fu_26616_p2 = (!tmp_303_cast_cast_fu_26612_p1.read().is_01() || !tmp_295_cast_cast_reg_44974.read().is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_303_cast_cast_fu_26612_p1.read()) + sc_biguint<9>(tmp_295_cast_cast_reg_44974.read()));
}

void ShuffleNetV2::thread_tmp_293_fu_26645_p2() {
    tmp_293_fu_26645_p2 = (!p_shl110_cast_fu_26629_p1.read().is_01() || !p_shl111_cast_fu_26641_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl110_cast_fu_26629_p1.read()) - sc_biguint<8>(p_shl111_cast_fu_26641_p1.read()));
}

void ShuffleNetV2::thread_tmp_294_fu_27074_p2() {
    tmp_294_fu_27074_p2 = (!co107_cast_fu_27058_p1.read().is_01() || !ap_const_lv7_30.is_01())? sc_lv<7>(): (sc_biguint<7>(co107_cast_fu_27058_p1.read()) + sc_biguint<7>(ap_const_lv7_30));
}

void ShuffleNetV2::thread_tmp_295_cast_cast_fu_26533_p1() {
    tmp_295_cast_cast_fu_26533_p1 = esl_zext<9,4>(tmp_2442_fu_26523_p4.read());
}

void ShuffleNetV2::thread_tmp_295_fu_27283_p2() {
    tmp_295_fu_27283_p2 = (!p_shl112_cast_fu_27267_p1.read().is_01() || !p_shl113_cast_fu_27279_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl112_cast_fu_27267_p1.read()) - sc_biguint<7>(p_shl113_cast_fu_27279_p1.read()));
}

void ShuffleNetV2::thread_tmp_296_cast_fu_26242_p1() {
    tmp_296_cast_fu_26242_p1 = esl_sext<9,7>(tmp_287_fu_26236_p2.read());
}

void ShuffleNetV2::thread_tmp_296_fu_27323_p2() {
    tmp_296_fu_27323_p2 = (!tmp_295_reg_45194.read().is_01() || !ci56_cast_fu_27303_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_295_reg_45194.read()) + sc_biguint<7>(ci56_cast_fu_27303_p1.read()));
}

void ShuffleNetV2::thread_tmp_297_cast_cast_fu_26251_p1() {
    tmp_297_cast_cast_fu_26251_p1 = esl_sext<10,7>(tmp_288_fu_26246_p2.read());
}

void ShuffleNetV2::thread_tmp_297_fu_27631_p2() {
    tmp_297_fu_27631_p2 = (!p_shl114_cast_fu_27615_p1.read().is_01() || !p_shl115_cast_fu_27627_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl114_cast_fu_27615_p1.read()) - sc_biguint<7>(p_shl115_cast_fu_27627_p1.read()));
}

void ShuffleNetV2::thread_tmp_298_fu_27641_p2() {
    tmp_298_fu_27641_p2 = (!tmp_297_fu_27631_p2.read().is_01() || !i104_cast1_reg_45271.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_297_fu_27631_p2.read()) + sc_biguint<7>(i104_cast1_reg_45271.read()));
}

void ShuffleNetV2::thread_tmp_299_cast_fu_26871_p1() {
    tmp_299_cast_fu_26871_p1 = esl_sext<11,7>(tmp_289_fu_26865_p2.read());
}

void ShuffleNetV2::thread_tmp_299_fu_27372_p2() {
    tmp_299_fu_27372_p2 = (!p_shl116_cast_fu_27356_p1.read().is_01() || !p_shl117_cast_fu_27368_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl116_cast_fu_27356_p1.read()) - sc_biguint<7>(p_shl117_cast_fu_27368_p1.read()));
}

void ShuffleNetV2::thread_tmp_300_cast1_fu_27438_p1() {
    tmp_300_cast1_fu_27438_p1 = esl_sext<10,9>(tmp_300_reg_45230.read());
}

void ShuffleNetV2::thread_tmp_300_cast_fu_26905_p1() {
    tmp_300_cast_fu_26905_p1 = esl_sext<32,7>(tmp_290_reg_45067.read());
}

void ShuffleNetV2::thread_tmp_300_fu_27382_p2() {
    tmp_300_fu_27382_p2 = (!tmp_315_cast_cast_fu_27378_p1.read().is_01() || !tmp_310_cast_cast_reg_45199.read().is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_315_cast_cast_fu_27378_p1.read()) + sc_biguint<9>(tmp_310_cast_cast_reg_45199.read()));
}

void ShuffleNetV2::thread_tmp_301_fu_27411_p2() {
    tmp_301_fu_27411_p2 = (!p_shl118_cast_fu_27395_p1.read().is_01() || !p_shl119_cast_fu_27407_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl118_cast_fu_27395_p1.read()) - sc_biguint<8>(p_shl119_cast_fu_27407_p1.read()));
}

void ShuffleNetV2::thread_tmp_302_cast_cast_fu_26562_p1() {
    tmp_302_cast_cast_fu_26562_p1 = esl_sext<8,7>(tmp_286_fu_26557_p2.read());
}

void ShuffleNetV2::thread_tmp_302_fu_28064_p2() {
    tmp_302_fu_28064_p2 = (!p_shl122_cast_fu_28048_p1.read().is_01() || !p_shl123_cast_fu_28060_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl122_cast_fu_28048_p1.read()) - sc_biguint<7>(p_shl123_cast_fu_28060_p1.read()));
}

void ShuffleNetV2::thread_tmp_303_cast_cast_fu_26612_p1() {
    tmp_303_cast_cast_fu_26612_p1 = esl_sext<9,7>(tmp_291_fu_26606_p2.read());
}

void ShuffleNetV2::thread_tmp_303_fu_27976_p2() {
    tmp_303_fu_27976_p2 = (!p_shl120_cast_fu_27960_p1.read().is_01() || !p_shl121_cast_fu_27972_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl120_cast_fu_27960_p1.read()) - sc_biguint<7>(p_shl121_cast_fu_27972_p1.read()));
}

void ShuffleNetV2::thread_tmp_304_fu_27986_p2() {
    tmp_304_fu_27986_p2 = (!tmp_303_fu_27976_p2.read().is_01() || !i107_cast1_reg_45404.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_303_fu_27976_p2.read()) + sc_biguint<7>(i107_cast1_reg_45404.read()));
}

void ShuffleNetV2::thread_tmp_305_cast_fu_26651_p1() {
    tmp_305_cast_fu_26651_p1 = esl_sext<11,8>(tmp_293_fu_26645_p2.read());
}

void ShuffleNetV2::thread_tmp_305_fu_28104_p2() {
    tmp_305_fu_28104_p2 = (!tmp_302_reg_45454.read().is_01() || !ci58_cast_fu_28084_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_302_reg_45454.read()) + sc_biguint<7>(ci58_cast_fu_28084_p1.read()));
}

void ShuffleNetV2::thread_tmp_306_fu_27775_p2() {
    tmp_306_fu_27775_p2 = (!p_shl124_cast_fu_27759_p1.read().is_01() || !p_shl125_cast_fu_27771_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl124_cast_fu_27759_p1.read()) - sc_biguint<7>(p_shl125_cast_fu_27771_p1.read()));
}

void ShuffleNetV2::thread_tmp_307_fu_27785_p2() {
    tmp_307_fu_27785_p2 = (!tmp_306_fu_27775_p2.read().is_01() || !co111_cast_reg_45313.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_306_fu_27775_p2.read()) + sc_biguint<7>(co111_cast_reg_45313.read()));
}

void ShuffleNetV2::thread_tmp_308_fu_28412_p2() {
    tmp_308_fu_28412_p2 = (!p_shl126_cast_fu_28396_p1.read().is_01() || !p_shl127_cast_fu_28408_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl126_cast_fu_28396_p1.read()) - sc_biguint<7>(p_shl127_cast_fu_28408_p1.read()));
}

void ShuffleNetV2::thread_tmp_309_fu_28422_p2() {
    tmp_309_fu_28422_p2 = (!tmp_308_fu_28412_p2.read().is_01() || !i111_cast1_reg_45531.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_308_fu_28412_p2.read()) + sc_biguint<7>(i111_cast1_reg_45531.read()));
}

void ShuffleNetV2::thread_tmp_310_cast_cast_fu_27299_p1() {
    tmp_310_cast_cast_fu_27299_p1 = esl_zext<9,4>(tmp_2455_fu_27289_p4.read());
}

void ShuffleNetV2::thread_tmp_310_fu_28153_p2() {
    tmp_310_fu_28153_p2 = (!p_shl128_cast_fu_28137_p1.read().is_01() || !p_shl129_cast_fu_28149_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl128_cast_fu_28137_p1.read()) - sc_biguint<7>(p_shl129_cast_fu_28149_p1.read()));
}

void ShuffleNetV2::thread_tmp_311_cast1_fu_28219_p1() {
    tmp_311_cast1_fu_28219_p1 = esl_sext<10,9>(tmp_311_reg_45490.read());
}

void ShuffleNetV2::thread_tmp_311_cast_fu_27637_p1() {
    tmp_311_cast_fu_27637_p1 = esl_sext<11,7>(tmp_297_fu_27631_p2.read());
}

void ShuffleNetV2::thread_tmp_311_fu_28163_p2() {
    tmp_311_fu_28163_p2 = (!tmp_332_cast_cast_fu_28159_p1.read().is_01() || !tmp_324_cast_cast_reg_45459.read().is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_332_cast_cast_fu_28159_p1.read()) + sc_biguint<9>(tmp_324_cast_cast_reg_45459.read()));
}

void ShuffleNetV2::thread_tmp_312_cast_fu_27671_p1() {
    tmp_312_cast_fu_27671_p1 = esl_sext<32,7>(tmp_298_reg_45292.read());
}

void ShuffleNetV2::thread_tmp_312_fu_28192_p2() {
    tmp_312_fu_28192_p2 = (!p_shl130_cast_fu_28176_p1.read().is_01() || !p_shl131_cast_fu_28188_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl130_cast_fu_28176_p1.read()) - sc_biguint<8>(p_shl131_cast_fu_28188_p1.read()));
}

void ShuffleNetV2::thread_tmp_313_fu_28621_p2() {
    tmp_313_fu_28621_p2 = (!co117_cast_fu_28605_p1.read().is_01() || !ap_const_lv7_30.is_01())? sc_lv<7>(): (sc_biguint<7>(co117_cast_fu_28605_p1.read()) + sc_biguint<7>(ap_const_lv7_30));
}

void ShuffleNetV2::thread_tmp_314_cast_cast_fu_27328_p1() {
    tmp_314_cast_cast_fu_27328_p1 = esl_sext<8,7>(tmp_296_fu_27323_p2.read());
}

void ShuffleNetV2::thread_tmp_314_fu_28830_p2() {
    tmp_314_fu_28830_p2 = (!p_shl132_cast_fu_28814_p1.read().is_01() || !p_shl133_cast_fu_28826_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl132_cast_fu_28814_p1.read()) - sc_biguint<7>(p_shl133_cast_fu_28826_p1.read()));
}

void ShuffleNetV2::thread_tmp_315_cast_cast_fu_27378_p1() {
    tmp_315_cast_cast_fu_27378_p1 = esl_sext<9,7>(tmp_299_fu_27372_p2.read());
}

void ShuffleNetV2::thread_tmp_315_fu_28870_p2() {
    tmp_315_fu_28870_p2 = (!tmp_314_reg_45679.read().is_01() || !ci60_cast_fu_28850_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_314_reg_45679.read()) + sc_biguint<7>(ci60_cast_fu_28850_p1.read()));
}

void ShuffleNetV2::thread_tmp_316_fu_29178_p2() {
    tmp_316_fu_29178_p2 = (!p_shl134_cast_fu_29162_p1.read().is_01() || !p_shl135_cast_fu_29174_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl134_cast_fu_29162_p1.read()) - sc_biguint<7>(p_shl135_cast_fu_29174_p1.read()));
}

void ShuffleNetV2::thread_tmp_317_cast_fu_27417_p1() {
    tmp_317_cast_fu_27417_p1 = esl_sext<11,8>(tmp_301_fu_27411_p2.read());
}

void ShuffleNetV2::thread_tmp_317_fu_29188_p2() {
    tmp_317_fu_29188_p2 = (!tmp_316_fu_29178_p2.read().is_01() || !i116_cast1_reg_45756.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_316_fu_29178_p2.read()) + sc_biguint<7>(i116_cast1_reg_45756.read()));
}

void ShuffleNetV2::thread_tmp_318_fu_28919_p2() {
    tmp_318_fu_28919_p2 = (!p_shl136_cast_fu_28903_p1.read().is_01() || !p_shl137_cast_fu_28915_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl136_cast_fu_28903_p1.read()) - sc_biguint<7>(p_shl137_cast_fu_28915_p1.read()));
}

void ShuffleNetV2::thread_tmp_319_cast1_fu_28985_p1() {
    tmp_319_cast1_fu_28985_p1 = esl_sext<10,9>(tmp_319_reg_45715.read());
}

void ShuffleNetV2::thread_tmp_319_cast_fu_27982_p1() {
    tmp_319_cast_fu_27982_p1 = esl_sext<11,7>(tmp_303_fu_27976_p2.read());
}

void ShuffleNetV2::thread_tmp_319_fu_28929_p2() {
    tmp_319_fu_28929_p2 = (!tmp_344_cast_cast_fu_28925_p1.read().is_01() || !tmp_339_cast_cast_reg_45684.read().is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_344_cast_cast_fu_28925_p1.read()) + sc_biguint<9>(tmp_339_cast_cast_reg_45684.read()));
}

void ShuffleNetV2::thread_tmp_320_cast_fu_28016_p1() {
    tmp_320_cast_fu_28016_p1 = esl_sext<32,7>(tmp_304_reg_45425.read());
}

void ShuffleNetV2::thread_tmp_320_fu_28958_p2() {
    tmp_320_fu_28958_p2 = (!p_shl138_cast_fu_28942_p1.read().is_01() || !p_shl139_cast_fu_28954_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl138_cast_fu_28942_p1.read()) - sc_biguint<8>(p_shl139_cast_fu_28954_p1.read()));
}

void ShuffleNetV2::thread_tmp_321_fu_29615_p2() {
    tmp_321_fu_29615_p2 = (!p_shl142_cast_fu_29599_p1.read().is_01() || !p_shl143_cast_fu_29611_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl142_cast_fu_29599_p1.read()) - sc_biguint<7>(p_shl143_cast_fu_29611_p1.read()));
}

void ShuffleNetV2::thread_tmp_322_fu_29527_p2() {
    tmp_322_fu_29527_p2 = (!p_shl140_cast_fu_29511_p1.read().is_01() || !p_shl141_cast_fu_29523_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl140_cast_fu_29511_p1.read()) - sc_biguint<7>(p_shl141_cast_fu_29523_p1.read()));
}

void ShuffleNetV2::thread_tmp_323_fu_29537_p2() {
    tmp_323_fu_29537_p2 = (!tmp_322_fu_29527_p2.read().is_01() || !i119_cast1_reg_45889.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_322_fu_29527_p2.read()) + sc_biguint<7>(i119_cast1_reg_45889.read()));
}

void ShuffleNetV2::thread_tmp_324_cast_cast_fu_28080_p1() {
    tmp_324_cast_cast_fu_28080_p1 = esl_zext<9,4>(tmp_2466_fu_28070_p4.read());
}

void ShuffleNetV2::thread_tmp_324_fu_29655_p2() {
    tmp_324_fu_29655_p2 = (!tmp_321_reg_45939.read().is_01() || !ci62_cast_fu_29635_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_321_reg_45939.read()) + sc_biguint<7>(ci62_cast_fu_29635_p1.read()));
}

void ShuffleNetV2::thread_tmp_325_cast_cast_fu_27781_p1() {
    tmp_325_cast_cast_fu_27781_p1 = esl_sext<8,7>(tmp_306_fu_27775_p2.read());
}

void ShuffleNetV2::thread_tmp_325_fu_29322_p2() {
    tmp_325_fu_29322_p2 = (!p_shl144_cast_fu_29306_p1.read().is_01() || !p_shl145_cast_fu_29318_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl144_cast_fu_29306_p1.read()) - sc_biguint<7>(p_shl145_cast_fu_29318_p1.read()));
}

void ShuffleNetV2::thread_tmp_326_cast_cast_fu_27790_p1() {
    tmp_326_cast_cast_fu_27790_p1 = esl_sext<10,7>(tmp_307_fu_27785_p2.read());
}

void ShuffleNetV2::thread_tmp_326_fu_29332_p2() {
    tmp_326_fu_29332_p2 = (!tmp_325_fu_29322_p2.read().is_01() || !co121_cast_reg_45798.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_325_fu_29322_p2.read()) + sc_biguint<7>(co121_cast_reg_45798.read()));
}

void ShuffleNetV2::thread_tmp_327_fu_29963_p2() {
    tmp_327_fu_29963_p2 = (!p_shl146_cast_fu_29947_p1.read().is_01() || !p_shl147_cast_fu_29959_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl146_cast_fu_29947_p1.read()) - sc_biguint<7>(p_shl147_cast_fu_29959_p1.read()));
}

void ShuffleNetV2::thread_tmp_328_cast_fu_28418_p1() {
    tmp_328_cast_fu_28418_p1 = esl_sext<11,7>(tmp_308_fu_28412_p2.read());
}

void ShuffleNetV2::thread_tmp_328_fu_29973_p2() {
    tmp_328_fu_29973_p2 = (!tmp_327_fu_29963_p2.read().is_01() || !i123_cast1_reg_46016.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_327_fu_29963_p2.read()) + sc_biguint<7>(i123_cast1_reg_46016.read()));
}

void ShuffleNetV2::thread_tmp_329_cast_fu_28452_p1() {
    tmp_329_cast_fu_28452_p1 = esl_sext<32,7>(tmp_309_reg_45552.read());
}

void ShuffleNetV2::thread_tmp_329_fu_29704_p2() {
    tmp_329_fu_29704_p2 = (!p_shl148_cast_fu_29688_p1.read().is_01() || !p_shl149_cast_fu_29700_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl148_cast_fu_29688_p1.read()) - sc_biguint<7>(p_shl149_cast_fu_29700_p1.read()));
}

void ShuffleNetV2::thread_tmp_330_cast_fu_29770_p1() {
    tmp_330_cast_fu_29770_p1 = esl_sext<10,9>(tmp_330_reg_45975.read());
}

void ShuffleNetV2::thread_tmp_330_fu_29714_p2() {
    tmp_330_fu_29714_p2 = (!tmp_361_cast_cast_fu_29710_p1.read().is_01() || !tmp_353_cast_cast_reg_45944.read().is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_361_cast_cast_fu_29710_p1.read()) + sc_biguint<9>(tmp_353_cast_cast_reg_45944.read()));
}

void ShuffleNetV2::thread_tmp_331_cast_cast_fu_28109_p1() {
    tmp_331_cast_cast_fu_28109_p1 = esl_sext<8,7>(tmp_305_fu_28104_p2.read());
}

void ShuffleNetV2::thread_tmp_331_fu_29743_p2() {
    tmp_331_fu_29743_p2 = (!p_shl150_cast_fu_29727_p1.read().is_01() || !p_shl151_cast_fu_29739_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl150_cast_fu_29727_p1.read()) - sc_biguint<8>(p_shl151_cast_fu_29739_p1.read()));
}

void ShuffleNetV2::thread_tmp_332_cast_cast_fu_28159_p1() {
    tmp_332_cast_cast_fu_28159_p1 = esl_sext<9,7>(tmp_310_fu_28153_p2.read());
}

void ShuffleNetV2::thread_tmp_332_fu_30172_p2() {
    tmp_332_fu_30172_p2 = (!co127_cast_fu_30156_p1.read().is_01() || !ap_const_lv7_30.is_01())? sc_lv<7>(): (sc_biguint<7>(co127_cast_fu_30156_p1.read()) + sc_biguint<7>(ap_const_lv7_30));
}

void ShuffleNetV2::thread_tmp_333_fu_30381_p2() {
    tmp_333_fu_30381_p2 = (!p_shl152_cast_fu_30365_p1.read().is_01() || !p_shl153_cast_fu_30377_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl152_cast_fu_30365_p1.read()) - sc_biguint<7>(p_shl153_cast_fu_30377_p1.read()));
}

void ShuffleNetV2::thread_tmp_334_cast_fu_28198_p1() {
    tmp_334_cast_fu_28198_p1 = esl_sext<11,8>(tmp_312_fu_28192_p2.read());
}

void ShuffleNetV2::thread_tmp_334_fu_30421_p2() {
    tmp_334_fu_30421_p2 = (!tmp_333_reg_46164.read().is_01() || !ci64_cast_fu_30401_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_333_reg_46164.read()) + sc_biguint<7>(ci64_cast_fu_30401_p1.read()));
}

void ShuffleNetV2::thread_tmp_335_fu_30737_p2() {
    tmp_335_fu_30737_p2 = (!p_shl154_cast_fu_30721_p1.read().is_01() || !p_shl155_cast_fu_30733_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl154_cast_fu_30721_p1.read()) - sc_biguint<7>(p_shl155_cast_fu_30733_p1.read()));
}

void ShuffleNetV2::thread_tmp_336_fu_30747_p2() {
    tmp_336_fu_30747_p2 = (!tmp_335_fu_30737_p2.read().is_01() || !i128_cast1_reg_46241.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_335_fu_30737_p2.read()) + sc_biguint<7>(i128_cast1_reg_46241.read()));
}

void ShuffleNetV2::thread_tmp_337_fu_30470_p2() {
    tmp_337_fu_30470_p2 = (!p_shl156_cast_fu_30454_p1.read().is_01() || !p_shl157_cast_fu_30466_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl156_cast_fu_30454_p1.read()) - sc_biguint<7>(p_shl157_cast_fu_30466_p1.read()));
}

void ShuffleNetV2::thread_tmp_338_cast_fu_30536_p1() {
    tmp_338_cast_fu_30536_p1 = esl_sext<10,9>(tmp_338_reg_46200.read());
}

void ShuffleNetV2::thread_tmp_338_fu_30480_p2() {
    tmp_338_fu_30480_p2 = (!tmp_368_cast_cast_reg_46169.read().is_01() || !tmp_373_cast_cast_fu_30476_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_368_cast_cast_reg_46169.read()) + sc_bigint<9>(tmp_373_cast_cast_fu_30476_p1.read()));
}

void ShuffleNetV2::thread_tmp_339_cast_cast_fu_28846_p1() {
    tmp_339_cast_cast_fu_28846_p1 = esl_zext<9,4>(tmp_2479_fu_28836_p4.read());
}

void ShuffleNetV2::thread_tmp_339_fu_30509_p2() {
    tmp_339_fu_30509_p2 = (!p_shl158_cast_fu_30493_p1.read().is_01() || !p_shl159_cast_fu_30505_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl158_cast_fu_30493_p1.read()) - sc_biguint<8>(p_shl159_cast_fu_30505_p1.read()));
}

void ShuffleNetV2::thread_tmp_340_cast_fu_29184_p1() {
    tmp_340_cast_fu_29184_p1 = esl_sext<11,7>(tmp_316_fu_29178_p2.read());
}

void ShuffleNetV2::thread_tmp_340_fu_31166_p2() {
    tmp_340_fu_31166_p2 = (!p_shl162_cast_fu_31150_p1.read().is_01() || !p_shl163_cast_fu_31162_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl162_cast_fu_31150_p1.read()) - sc_biguint<7>(p_shl163_cast_fu_31162_p1.read()));
}

void ShuffleNetV2::thread_tmp_341_cast_fu_29218_p1() {
    tmp_341_cast_fu_29218_p1 = esl_sext<32,7>(tmp_317_reg_45777.read());
}

void ShuffleNetV2::thread_tmp_341_fu_31078_p2() {
    tmp_341_fu_31078_p2 = (!p_shl160_cast_fu_31062_p1.read().is_01() || !p_shl161_cast_fu_31074_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl160_cast_fu_31062_p1.read()) - sc_biguint<7>(p_shl161_cast_fu_31074_p1.read()));
}

void ShuffleNetV2::thread_tmp_342_fu_31088_p2() {
    tmp_342_fu_31088_p2 = (!tmp_341_fu_31078_p2.read().is_01() || !i131_cast1_reg_46374.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_341_fu_31078_p2.read()) + sc_biguint<7>(i131_cast1_reg_46374.read()));
}

void ShuffleNetV2::thread_tmp_343_cast_cast_fu_28875_p1() {
    tmp_343_cast_cast_fu_28875_p1 = esl_sext<8,7>(tmp_315_fu_28870_p2.read());
}

void ShuffleNetV2::thread_tmp_343_fu_31206_p2() {
    tmp_343_fu_31206_p2 = (!tmp_340_reg_46424.read().is_01() || !ci66_cast_fu_31186_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_340_reg_46424.read()) + sc_biguint<7>(ci66_cast_fu_31186_p1.read()));
}

void ShuffleNetV2::thread_tmp_344_cast_cast_fu_28925_p1() {
    tmp_344_cast_cast_fu_28925_p1 = esl_sext<9,7>(tmp_318_fu_28919_p2.read());
}

void ShuffleNetV2::thread_tmp_344_fu_30881_p2() {
    tmp_344_fu_30881_p2 = (!p_shl164_cast_fu_30865_p1.read().is_01() || !p_shl165_cast_fu_30877_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl164_cast_fu_30865_p1.read()) - sc_biguint<7>(p_shl165_cast_fu_30877_p1.read()));
}

void ShuffleNetV2::thread_tmp_345_fu_30891_p2() {
    tmp_345_fu_30891_p2 = (!co131_cast1_reg_46283.read().is_01() || !tmp_344_fu_30881_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(co131_cast1_reg_46283.read()) + sc_biguint<7>(tmp_344_fu_30881_p2.read()));
}

void ShuffleNetV2::thread_tmp_346_cast_fu_28964_p1() {
    tmp_346_cast_fu_28964_p1 = esl_sext<11,8>(tmp_320_fu_28958_p2.read());
}

void ShuffleNetV2::thread_tmp_346_fu_31522_p2() {
    tmp_346_fu_31522_p2 = (!p_shl166_cast_fu_31506_p1.read().is_01() || !p_shl167_cast_fu_31518_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl166_cast_fu_31506_p1.read()) - sc_biguint<7>(p_shl167_cast_fu_31518_p1.read()));
}

void ShuffleNetV2::thread_tmp_347_fu_31532_p2() {
    tmp_347_fu_31532_p2 = (!tmp_346_fu_31522_p2.read().is_01() || !i135_cast_reg_46501.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_346_fu_31522_p2.read()) + sc_biguint<7>(i135_cast_reg_46501.read()));
}

void ShuffleNetV2::thread_tmp_348_cast_fu_29533_p1() {
    tmp_348_cast_fu_29533_p1 = esl_sext<11,7>(tmp_322_fu_29527_p2.read());
}

void ShuffleNetV2::thread_tmp_348_fu_31255_p2() {
    tmp_348_fu_31255_p2 = (!p_shl168_cast_fu_31239_p1.read().is_01() || !p_shl169_cast_fu_31251_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl168_cast_fu_31239_p1.read()) - sc_biguint<7>(p_shl169_cast_fu_31251_p1.read()));
}

void ShuffleNetV2::thread_tmp_349_cast1_fu_31321_p1() {
    tmp_349_cast1_fu_31321_p1 = esl_sext<10,9>(tmp_349_reg_46460.read());
}

void ShuffleNetV2::thread_tmp_349_cast_fu_29567_p1() {
    tmp_349_cast_fu_29567_p1 = esl_sext<32,7>(tmp_323_reg_45910.read());
}

void ShuffleNetV2::thread_tmp_349_fu_31265_p2() {
    tmp_349_fu_31265_p2 = (!tmp_382_cast_cast_reg_46429.read().is_01() || !tmp_390_cast_cast_fu_31261_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_382_cast_cast_reg_46429.read()) + sc_bigint<9>(tmp_390_cast_cast_fu_31261_p1.read()));
}

void ShuffleNetV2::thread_tmp_350_fu_31294_p2() {
    tmp_350_fu_31294_p2 = (!p_shl170_cast_fu_31278_p1.read().is_01() || !p_shl171_cast_fu_31290_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl170_cast_fu_31278_p1.read()) - sc_biguint<8>(p_shl171_cast_fu_31290_p1.read()));
}

void ShuffleNetV2::thread_tmp_351_fu_31735_p2() {
    tmp_351_fu_31735_p2 = (!co137_cast_fu_31719_p1.read().is_01() || !ap_const_lv7_30.is_01())? sc_lv<7>(): (sc_biguint<7>(co137_cast_fu_31719_p1.read()) + sc_biguint<7>(ap_const_lv7_30));
}

void ShuffleNetV2::thread_tmp_352_fu_31944_p2() {
    tmp_352_fu_31944_p2 = (!p_shl172_cast_fu_31928_p1.read().is_01() || !p_shl173_cast_fu_31940_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl172_cast_fu_31928_p1.read()) - sc_biguint<7>(p_shl173_cast_fu_31940_p1.read()));
}

void ShuffleNetV2::thread_tmp_353_cast_cast_fu_29631_p1() {
    tmp_353_cast_cast_fu_29631_p1 = esl_zext<9,4>(tmp_2490_fu_29621_p4.read());
}

void ShuffleNetV2::thread_tmp_353_fu_31984_p2() {
    tmp_353_fu_31984_p2 = (!tmp_352_reg_46649.read().is_01() || !ci68_cast_fu_31964_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_352_reg_46649.read()) + sc_biguint<7>(ci68_cast_fu_31964_p1.read()));
}

void ShuffleNetV2::thread_tmp_354_cast_cast_fu_29328_p1() {
    tmp_354_cast_cast_fu_29328_p1 = esl_sext<8,7>(tmp_325_fu_29322_p2.read());
}

void ShuffleNetV2::thread_tmp_354_fu_32300_p2() {
    tmp_354_fu_32300_p2 = (!p_shl174_cast_fu_32284_p1.read().is_01() || !p_shl175_cast_fu_32296_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl174_cast_fu_32284_p1.read()) - sc_biguint<7>(p_shl175_cast_fu_32296_p1.read()));
}

void ShuffleNetV2::thread_tmp_355_cast_cast_fu_29337_p1() {
    tmp_355_cast_cast_fu_29337_p1 = esl_sext<10,7>(tmp_326_fu_29332_p2.read());
}

void ShuffleNetV2::thread_tmp_355_fu_32310_p2() {
    tmp_355_fu_32310_p2 = (!tmp_354_fu_32300_p2.read().is_01() || !i140_cast_reg_46726.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_354_fu_32300_p2.read()) + sc_biguint<7>(i140_cast_reg_46726.read()));
}

void ShuffleNetV2::thread_tmp_356_fu_32033_p2() {
    tmp_356_fu_32033_p2 = (!p_shl176_cast_fu_32017_p1.read().is_01() || !p_shl177_cast_fu_32029_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl176_cast_fu_32017_p1.read()) - sc_biguint<7>(p_shl177_cast_fu_32029_p1.read()));
}

void ShuffleNetV2::thread_tmp_357_cast1_fu_32099_p1() {
    tmp_357_cast1_fu_32099_p1 = esl_sext<10,9>(tmp_357_reg_46685.read());
}

void ShuffleNetV2::thread_tmp_357_cast_fu_29969_p1() {
    tmp_357_cast_fu_29969_p1 = esl_sext<11,7>(tmp_327_fu_29963_p2.read());
}

void ShuffleNetV2::thread_tmp_357_fu_32043_p2() {
    tmp_357_fu_32043_p2 = (!tmp_397_cast_cast_reg_46654.read().is_01() || !tmp_402_cast_cast_fu_32039_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_397_cast_cast_reg_46654.read()) + sc_bigint<9>(tmp_402_cast_cast_fu_32039_p1.read()));
}

void ShuffleNetV2::thread_tmp_358_cast_fu_30003_p1() {
    tmp_358_cast_fu_30003_p1 = esl_sext<32,7>(tmp_328_reg_46037.read());
}

void ShuffleNetV2::thread_tmp_358_fu_32072_p2() {
    tmp_358_fu_32072_p2 = (!p_shl178_cast_fu_32056_p1.read().is_01() || !p_shl179_cast_fu_32068_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl178_cast_fu_32056_p1.read()) - sc_biguint<8>(p_shl179_cast_fu_32068_p1.read()));
}

void ShuffleNetV2::thread_tmp_359_fu_32733_p2() {
    tmp_359_fu_32733_p2 = (!p_shl182_cast_fu_32717_p1.read().is_01() || !p_shl183_cast_fu_32729_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl182_cast_fu_32717_p1.read()) - sc_biguint<7>(p_shl183_cast_fu_32729_p1.read()));
}

void ShuffleNetV2::thread_tmp_360_cast_cast_fu_29660_p1() {
    tmp_360_cast_cast_fu_29660_p1 = esl_sext<8,7>(tmp_324_fu_29655_p2.read());
}

void ShuffleNetV2::thread_tmp_360_fu_32641_p2() {
    tmp_360_fu_32641_p2 = (!p_shl180_cast_fu_32625_p1.read().is_01() || !p_shl181_cast_fu_32637_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl180_cast_fu_32625_p1.read()) - sc_biguint<7>(p_shl181_cast_fu_32637_p1.read()));
}

void ShuffleNetV2::thread_tmp_361_cast_cast_fu_29710_p1() {
    tmp_361_cast_cast_fu_29710_p1 = esl_sext<9,7>(tmp_329_fu_29704_p2.read());
}

void ShuffleNetV2::thread_tmp_361_fu_32651_p2() {
    tmp_361_fu_32651_p2 = (!tmp_360_fu_32641_p2.read().is_01() || !i143_cast_reg_46859.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_360_fu_32641_p2.read()) + sc_biguint<7>(i143_cast_reg_46859.read()));
}

void ShuffleNetV2::thread_tmp_362_fu_32773_p2() {
    tmp_362_fu_32773_p2 = (!tmp_359_reg_46909.read().is_01() || !ci70_cast_fu_32753_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_359_reg_46909.read()) + sc_biguint<7>(ci70_cast_fu_32753_p1.read()));
}

void ShuffleNetV2::thread_tmp_363_cast_fu_29749_p1() {
    tmp_363_cast_fu_29749_p1 = esl_sext<11,8>(tmp_331_fu_29743_p2.read());
}

void ShuffleNetV2::thread_tmp_363_fu_32448_p2() {
    tmp_363_fu_32448_p2 = (!p_shl184_cast_fu_32432_p1.read().is_01() || !p_shl185_cast_fu_32444_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl184_cast_fu_32432_p1.read()) - sc_biguint<7>(p_shl185_cast_fu_32444_p1.read()));
}

void ShuffleNetV2::thread_tmp_364_fu_32458_p2() {
    tmp_364_fu_32458_p2 = (!co141_cast1_reg_46768.read().is_01() || !tmp_363_fu_32448_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(co141_cast1_reg_46768.read()) + sc_biguint<7>(tmp_363_fu_32448_p2.read()));
}

void ShuffleNetV2::thread_tmp_365_fu_33089_p2() {
    tmp_365_fu_33089_p2 = (!p_shl186_cast_fu_33073_p1.read().is_01() || !p_shl187_cast_fu_33085_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl186_cast_fu_33073_p1.read()) - sc_biguint<7>(p_shl187_cast_fu_33085_p1.read()));
}

void ShuffleNetV2::thread_tmp_366_fu_33099_p2() {
    tmp_366_fu_33099_p2 = (!tmp_365_fu_33089_p2.read().is_01() || !i147_cast_reg_46986.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_365_fu_33089_p2.read()) + sc_biguint<7>(i147_cast_reg_46986.read()));
}

void ShuffleNetV2::thread_tmp_367_fu_32822_p2() {
    tmp_367_fu_32822_p2 = (!p_shl188_cast_fu_32806_p1.read().is_01() || !p_shl189_cast_fu_32818_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl188_cast_fu_32806_p1.read()) - sc_biguint<7>(p_shl189_cast_fu_32818_p1.read()));
}

void ShuffleNetV2::thread_tmp_368_cast_cast_fu_30397_p1() {
    tmp_368_cast_cast_fu_30397_p1 = esl_zext<9,4>(tmp_2503_fu_30387_p4.read());
}

void ShuffleNetV2::thread_tmp_368_cast_fu_32896_p1() {
    tmp_368_cast_fu_32896_p1 = esl_sext<10,9>(tmp_368_reg_46945.read());
}

void ShuffleNetV2::thread_tmp_368_fu_32832_p2() {
    tmp_368_fu_32832_p2 = (!tmp_419_cast_cast_fu_32828_p1.read().is_01() || !tmp_411_cast_cast_reg_46914.read().is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_419_cast_cast_fu_32828_p1.read()) + sc_biguint<9>(tmp_411_cast_cast_reg_46914.read()));
}

void ShuffleNetV2::thread_tmp_369_cast_fu_30743_p1() {
    tmp_369_cast_fu_30743_p1 = esl_sext<11,7>(tmp_335_fu_30737_p2.read());
}

void ShuffleNetV2::thread_tmp_369_fu_32861_p2() {
    tmp_369_fu_32861_p2 = (!p_shl190_cast_fu_32845_p1.read().is_01() || !p_shl191_cast_fu_32857_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl190_cast_fu_32845_p1.read()) - sc_biguint<8>(p_shl191_cast_fu_32857_p1.read()));
}

void ShuffleNetV2::thread_tmp_370_cast_fu_30777_p1() {
    tmp_370_cast_fu_30777_p1 = esl_sext<32,7>(tmp_336_reg_46262.read());
}

void ShuffleNetV2::thread_tmp_370_fu_33298_p2() {
    tmp_370_fu_33298_p2 = (!p_shl192_cast_fu_33284_p1.read().is_01() || !p_shl193_cast_fu_33294_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl192_cast_fu_33284_p1.read()) - sc_biguint<8>(p_shl193_cast_fu_33294_p1.read()));
}

void ShuffleNetV2::thread_tmp_371_fu_33338_p2() {
    tmp_371_fu_33338_p2 = (!tmp_370_reg_47080.read().is_01() || !ci72_cast_fu_33318_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_370_reg_47080.read()) + sc_biguint<8>(ci72_cast_fu_33318_p1.read()));
}

void ShuffleNetV2::thread_tmp_372_cast_cast_fu_30426_p1() {
    tmp_372_cast_cast_fu_30426_p1 = esl_sext<8,7>(tmp_334_fu_30421_p2.read());
}

void ShuffleNetV2::thread_tmp_372_fu_33636_p2() {
    tmp_372_fu_33636_p2 = (!p_shl194_cast_fu_33620_p1.read().is_01() || !p_shl195_cast_fu_33632_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl194_cast_fu_33620_p1.read()) - sc_biguint<8>(p_shl195_cast_fu_33632_p1.read()));
}

void ShuffleNetV2::thread_tmp_373_cast_cast_fu_30476_p1() {
    tmp_373_cast_cast_fu_30476_p1 = esl_sext<9,7>(tmp_337_fu_30470_p2.read());
}

void ShuffleNetV2::thread_tmp_373_fu_33646_p2() {
    tmp_373_fu_33646_p2 = (!tmp_372_fu_33636_p2.read().is_01() || !i152_cast_reg_47157.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_372_fu_33636_p2.read()) + sc_biguint<8>(i152_cast_reg_47157.read()));
}

void ShuffleNetV2::thread_tmp_374_fu_33389_p2() {
    tmp_374_fu_33389_p2 = (!p_shl196_cast_fu_33375_p1.read().is_01() || !p_shl197_cast_fu_33385_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl196_cast_fu_33375_p1.read()) - sc_biguint<8>(p_shl197_cast_fu_33385_p1.read()));
}

void ShuffleNetV2::thread_tmp_375_cast_cast_fu_30515_p1() {
    tmp_375_cast_cast_fu_30515_p1 = esl_sext<10,8>(tmp_339_fu_30509_p2.read());
}

void ShuffleNetV2::thread_tmp_375_cast_fu_33443_p1() {
    tmp_375_cast_fu_33443_p1 = esl_sext<11,10>(tmp_375_reg_47116.read());
}

void ShuffleNetV2::thread_tmp_375_fu_33399_p2() {
    tmp_375_fu_33399_p2 = (!tmp_430_cast_cast_fu_33395_p1.read().is_01() || !tmp_425_cast_cast_reg_47085.read().is_01())? sc_lv<10>(): (sc_bigint<10>(tmp_430_cast_cast_fu_33395_p1.read()) + sc_biguint<10>(tmp_425_cast_cast_reg_47085.read()));
}

void ShuffleNetV2::thread_tmp_376_fu_33416_p2() {
    tmp_376_fu_33416_p2 = (!p_shl198_cast_fu_33412_p1.read().is_01() || !p_shl196_cast1_fu_33371_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl198_cast_fu_33412_p1.read()) - sc_biguint<10>(p_shl196_cast1_fu_33371_p1.read()));
}

void ShuffleNetV2::thread_tmp_377_cast_fu_31084_p1() {
    tmp_377_cast_fu_31084_p1 = esl_sext<11,7>(tmp_341_fu_31078_p2.read());
}

void ShuffleNetV2::thread_tmp_377_fu_34067_p2() {
    tmp_377_fu_34067_p2 = (!p_shl201_cast_fu_34053_p1.read().is_01() || !p_shl202_cast_fu_34063_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl201_cast_fu_34053_p1.read()) - sc_biguint<8>(p_shl202_cast_fu_34063_p1.read()));
}

void ShuffleNetV2::thread_tmp_378_cast_fu_31118_p1() {
    tmp_378_cast_fu_31118_p1 = esl_sext<32,7>(tmp_342_reg_46395.read());
}

void ShuffleNetV2::thread_tmp_378_fu_33977_p2() {
    tmp_378_fu_33977_p2 = (!p_shl199_cast_fu_33961_p1.read().is_01() || !p_shl200_cast_fu_33973_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl199_cast_fu_33961_p1.read()) - sc_biguint<8>(p_shl200_cast_fu_33973_p1.read()));
}

void ShuffleNetV2::thread_tmp_379_fu_33987_p2() {
    tmp_379_fu_33987_p2 = (!tmp_378_fu_33977_p2.read().is_01() || !i155_cast_reg_47290.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_378_fu_33977_p2.read()) + sc_biguint<8>(i155_cast_reg_47290.read()));
}

void ShuffleNetV2::thread_tmp_380_fu_34107_p2() {
    tmp_380_fu_34107_p2 = (!tmp_377_reg_47340.read().is_01() || !ci74_cast_fu_34087_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_377_reg_47340.read()) + sc_biguint<8>(ci74_cast_fu_34087_p1.read()));
}

void ShuffleNetV2::thread_tmp_381_fu_33784_p2() {
    tmp_381_fu_33784_p2 = (!p_shl203_cast_fu_33768_p1.read().is_01() || !p_shl204_cast_fu_33780_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl203_cast_fu_33768_p1.read()) - sc_biguint<8>(p_shl204_cast_fu_33780_p1.read()));
}

void ShuffleNetV2::thread_tmp_382_cast_cast_fu_31182_p1() {
    tmp_382_cast_cast_fu_31182_p1 = esl_zext<9,4>(tmp_2514_fu_31172_p4.read());
}

void ShuffleNetV2::thread_tmp_382_fu_33794_p2() {
    tmp_382_fu_33794_p2 = (!co149_cast1_reg_47199.read().is_01() || !tmp_381_fu_33784_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(co149_cast1_reg_47199.read()) + sc_biguint<8>(tmp_381_fu_33784_p2.read()));
}

void ShuffleNetV2::thread_tmp_383_cast_fu_30887_p1() {
    tmp_383_cast_fu_30887_p1 = esl_sext<10,7>(tmp_344_fu_30881_p2.read());
}

void ShuffleNetV2::thread_tmp_383_fu_34405_p2() {
    tmp_383_fu_34405_p2 = (!p_shl205_cast_fu_34389_p1.read().is_01() || !p_shl206_cast_fu_34401_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl205_cast_fu_34389_p1.read()) - sc_biguint<8>(p_shl206_cast_fu_34401_p1.read()));
}

void ShuffleNetV2::thread_tmp_384_cast_cast_fu_30896_p1() {
    tmp_384_cast_cast_fu_30896_p1 = esl_sext<10,7>(tmp_345_fu_30891_p2.read());
}

void ShuffleNetV2::thread_tmp_384_fu_34415_p2() {
    tmp_384_fu_34415_p2 = (!tmp_383_fu_34405_p2.read().is_01() || !i159_cast1_reg_47417.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_383_fu_34405_p2.read()) + sc_biguint<8>(i159_cast1_reg_47417.read()));
}

void ShuffleNetV2::thread_tmp_385_fu_34158_p2() {
    tmp_385_fu_34158_p2 = (!p_shl207_cast_fu_34144_p1.read().is_01() || !p_shl208_cast_fu_34154_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl207_cast_fu_34144_p1.read()) - sc_biguint<8>(p_shl208_cast_fu_34154_p1.read()));
}

void ShuffleNetV2::thread_tmp_386_cast_cast_fu_31528_p1() {
    tmp_386_cast_cast_fu_31528_p1 = esl_sext<10,7>(tmp_346_fu_31522_p2.read());
}

void ShuffleNetV2::thread_tmp_386_cast_fu_34212_p1() {
    tmp_386_cast_fu_34212_p1 = esl_sext<11,10>(tmp_386_reg_47376.read());
}

void ShuffleNetV2::thread_tmp_386_fu_34168_p2() {
    tmp_386_fu_34168_p2 = (!tmp_447_cast_cast_fu_34164_p1.read().is_01() || !tmp_439_cast_cast_reg_47345.read().is_01())? sc_lv<10>(): (sc_bigint<10>(tmp_447_cast_cast_fu_34164_p1.read()) + sc_biguint<10>(tmp_439_cast_cast_reg_47345.read()));
}

void ShuffleNetV2::thread_tmp_387_cast_fu_31566_p1() {
    tmp_387_cast_fu_31566_p1 = esl_sext<32,7>(tmp_347_reg_46522.read());
}

void ShuffleNetV2::thread_tmp_387_fu_34185_p2() {
    tmp_387_fu_34185_p2 = (!p_shl209_cast_fu_34181_p1.read().is_01() || !p_shl207_cast1_fu_34140_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl209_cast_fu_34181_p1.read()) - sc_biguint<10>(p_shl207_cast1_fu_34140_p1.read()));
}

void ShuffleNetV2::thread_tmp_388_fu_34836_p2() {
    tmp_388_fu_34836_p2 = (!p_shl212_cast_fu_34822_p1.read().is_01() || !p_shl213_cast_fu_34832_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl212_cast_fu_34822_p1.read()) - sc_biguint<8>(p_shl213_cast_fu_34832_p1.read()));
}

void ShuffleNetV2::thread_tmp_389_cast_cast_fu_31211_p1() {
    tmp_389_cast_cast_fu_31211_p1 = esl_sext<8,7>(tmp_343_fu_31206_p2.read());
}

void ShuffleNetV2::thread_tmp_389_fu_34750_p2() {
    tmp_389_fu_34750_p2 = (!p_shl210_cast_fu_34734_p1.read().is_01() || !p_shl211_cast_fu_34746_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl210_cast_fu_34734_p1.read()) - sc_biguint<8>(p_shl211_cast_fu_34746_p1.read()));
}

void ShuffleNetV2::thread_tmp_390_cast_cast_fu_31261_p1() {
    tmp_390_cast_cast_fu_31261_p1 = esl_sext<9,7>(tmp_348_fu_31255_p2.read());
}

void ShuffleNetV2::thread_tmp_390_fu_34760_p2() {
    tmp_390_fu_34760_p2 = (!tmp_389_fu_34750_p2.read().is_01() || !i163_cast1_reg_47550.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_389_fu_34750_p2.read()) + sc_biguint<8>(i163_cast1_reg_47550.read()));
}

void ShuffleNetV2::thread_tmp_391_fu_34876_p2() {
    tmp_391_fu_34876_p2 = (!tmp_388_reg_47600.read().is_01() || !ci76_cast_fu_34856_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_388_reg_47600.read()) + sc_biguint<8>(ci76_cast_fu_34856_p1.read()));
}

void ShuffleNetV2::thread_tmp_392_cast_cast_fu_31300_p1() {
    tmp_392_cast_cast_fu_31300_p1 = esl_sext<10,8>(tmp_350_fu_31294_p2.read());
}

void ShuffleNetV2::thread_tmp_392_fu_34557_p2() {
    tmp_392_fu_34557_p2 = (!p_shl214_cast_fu_34541_p1.read().is_01() || !p_shl215_cast_fu_34553_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl214_cast_fu_34541_p1.read()) - sc_biguint<8>(p_shl215_cast_fu_34553_p1.read()));
}

void ShuffleNetV2::thread_tmp_393_fu_34567_p2() {
    tmp_393_fu_34567_p2 = (!co153_cast1_reg_47459.read().is_01() || !tmp_392_fu_34557_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(co153_cast1_reg_47459.read()) + sc_biguint<8>(tmp_392_fu_34557_p2.read()));
}

void ShuffleNetV2::thread_tmp_394_fu_35268_p2() {
    tmp_394_fu_35268_p2 = (!co157_cast_fu_35252_p1.read().is_01() || !ap_const_lv8_60.is_01())? sc_lv<8>(): (sc_biguint<8>(co157_cast_fu_35252_p1.read()) + sc_biguint<8>(ap_const_lv8_60));
}

void ShuffleNetV2::thread_tmp_395_fu_35174_p2() {
    tmp_395_fu_35174_p2 = (!p_shl216_cast_fu_35158_p1.read().is_01() || !p_shl217_cast_fu_35170_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl216_cast_fu_35158_p1.read()) - sc_biguint<8>(p_shl217_cast_fu_35170_p1.read()));
}

void ShuffleNetV2::thread_tmp_396_fu_35184_p2() {
    tmp_396_fu_35184_p2 = (!tmp_395_fu_35174_p2.read().is_01() || !i167_cast1_reg_47677.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_395_fu_35174_p2.read()) + sc_biguint<8>(i167_cast1_reg_47677.read()));
}

void ShuffleNetV2::thread_tmp_397_cast_cast_fu_31960_p1() {
    tmp_397_cast_cast_fu_31960_p1 = esl_zext<9,4>(tmp_2527_fu_31950_p4.read());
}

void ShuffleNetV2::thread_tmp_397_fu_34927_p2() {
    tmp_397_fu_34927_p2 = (!p_shl220_cast_fu_34913_p1.read().is_01() || !p_shl221_cast_fu_34923_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl220_cast_fu_34913_p1.read()) - sc_biguint<8>(p_shl221_cast_fu_34923_p1.read()));
}

void ShuffleNetV2::thread_tmp_398_cast_cast_fu_32306_p1() {
    tmp_398_cast_cast_fu_32306_p1 = esl_sext<10,7>(tmp_354_fu_32300_p2.read());
}

void ShuffleNetV2::thread_tmp_398_cast_fu_34981_p1() {
    tmp_398_cast_fu_34981_p1 = esl_sext<11,10>(tmp_398_reg_47636.read());
}

void ShuffleNetV2::thread_tmp_398_fu_34937_p2() {
    tmp_398_fu_34937_p2 = (!tmp_468_cast_cast_fu_34933_p1.read().is_01() || !tmp_456_cast_cast_reg_47605.read().is_01())? sc_lv<10>(): (sc_bigint<10>(tmp_468_cast_cast_fu_34933_p1.read()) + sc_biguint<10>(tmp_456_cast_cast_reg_47605.read()));
}

void ShuffleNetV2::thread_tmp_399_cast_fu_32344_p1() {
    tmp_399_cast_fu_32344_p1 = esl_sext<32,7>(tmp_355_reg_46747.read());
}

void ShuffleNetV2::thread_tmp_399_fu_34954_p2() {
    tmp_399_fu_34954_p2 = (!p_shl222_cast_fu_34950_p1.read().is_01() || !p_shl220_cast1_fu_34909_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl222_cast_fu_34950_p1.read()) - sc_biguint<10>(p_shl220_cast1_fu_34909_p1.read()));
}

void ShuffleNetV2::thread_tmp_400_fu_35471_p2() {
    tmp_400_fu_35471_p2 = (!p_shl218_cast_fu_35457_p1.read().is_01() || !p_shl219_cast_fu_35467_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl218_cast_fu_35457_p1.read()) - sc_biguint<8>(p_shl219_cast_fu_35467_p1.read()));
}

void ShuffleNetV2::thread_tmp_401_cast_cast_fu_31989_p1() {
    tmp_401_cast_cast_fu_31989_p1 = esl_sext<8,7>(tmp_353_fu_31984_p2.read());
}

void ShuffleNetV2::thread_tmp_401_fu_35511_p2() {
    tmp_401_fu_35511_p2 = (!tmp_400_reg_47781.read().is_01() || !ci78_cast_fu_35491_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_400_reg_47781.read()) + sc_biguint<8>(ci78_cast_fu_35491_p1.read()));
}

void ShuffleNetV2::thread_tmp_402_cast_cast_fu_32039_p1() {
    tmp_402_cast_cast_fu_32039_p1 = esl_sext<9,7>(tmp_356_fu_32033_p2.read());
}

void ShuffleNetV2::thread_tmp_402_fu_35809_p2() {
    tmp_402_fu_35809_p2 = (!p_shl223_cast_fu_35793_p1.read().is_01() || !p_shl224_cast_fu_35805_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl223_cast_fu_35793_p1.read()) - sc_biguint<8>(p_shl224_cast_fu_35805_p1.read()));
}

void ShuffleNetV2::thread_tmp_403_fu_35819_p2() {
    tmp_403_fu_35819_p2 = (!tmp_402_fu_35809_p2.read().is_01() || !i172_cast1_reg_47858.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_402_fu_35809_p2.read()) + sc_biguint<8>(i172_cast1_reg_47858.read()));
}

void ShuffleNetV2::thread_tmp_404_cast_cast_fu_32078_p1() {
    tmp_404_cast_cast_fu_32078_p1 = esl_sext<9,8>(tmp_358_fu_32072_p2.read());
}

void ShuffleNetV2::thread_tmp_404_fu_35562_p2() {
    tmp_404_fu_35562_p2 = (!p_shl225_cast_fu_35548_p1.read().is_01() || !p_shl226_cast_fu_35558_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl225_cast_fu_35548_p1.read()) - sc_biguint<8>(p_shl226_cast_fu_35558_p1.read()));
}

void ShuffleNetV2::thread_tmp_405_cast_fu_35616_p1() {
    tmp_405_cast_fu_35616_p1 = esl_sext<11,10>(tmp_405_reg_47817.read());
}

void ShuffleNetV2::thread_tmp_405_fu_35572_p2() {
    tmp_405_fu_35572_p2 = (!tmp_476_cast_cast_fu_35568_p1.read().is_01() || !tmp_467_cast_cast_reg_47786.read().is_01())? sc_lv<10>(): (sc_bigint<10>(tmp_476_cast_cast_fu_35568_p1.read()) + sc_biguint<10>(tmp_467_cast_cast_reg_47786.read()));
}

void ShuffleNetV2::thread_tmp_406_cast_cast_fu_32647_p1() {
    tmp_406_cast_cast_fu_32647_p1 = esl_sext<10,7>(tmp_360_fu_32641_p2.read());
}

void ShuffleNetV2::thread_tmp_406_fu_35589_p2() {
    tmp_406_fu_35589_p2 = (!p_shl227_cast_fu_35585_p1.read().is_01() || !p_shl225_cast1_fu_35544_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl227_cast_fu_35585_p1.read()) - sc_biguint<10>(p_shl225_cast1_fu_35544_p1.read()));
}

void ShuffleNetV2::thread_tmp_407_cast_fu_32685_p1() {
    tmp_407_cast_fu_32685_p1 = esl_sext<32,7>(tmp_361_reg_46880.read());
}

void ShuffleNetV2::thread_tmp_407_fu_36232_p2() {
    tmp_407_fu_36232_p2 = (!p_shl230_cast_fu_36218_p1.read().is_01() || !p_shl231_cast_fu_36228_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl230_cast_fu_36218_p1.read()) - sc_biguint<8>(p_shl231_cast_fu_36228_p1.read()));
}

void ShuffleNetV2::thread_tmp_408_fu_36146_p2() {
    tmp_408_fu_36146_p2 = (!p_shl228_cast_fu_36130_p1.read().is_01() || !p_shl229_cast_fu_36142_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl228_cast_fu_36130_p1.read()) - sc_biguint<8>(p_shl229_cast_fu_36142_p1.read()));
}

void ShuffleNetV2::thread_tmp_409_fu_36156_p2() {
    tmp_409_fu_36156_p2 = (!tmp_408_fu_36146_p2.read().is_01() || !i175_cast1_reg_47991.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_408_fu_36146_p2.read()) + sc_biguint<8>(i175_cast1_reg_47991.read()));
}

void ShuffleNetV2::thread_tmp_410_fu_36272_p2() {
    tmp_410_fu_36272_p2 = (!tmp_407_reg_48041.read().is_01() || !ci80_cast_fu_36252_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_407_reg_48041.read()) + sc_biguint<8>(ci80_cast_fu_36252_p1.read()));
}

void ShuffleNetV2::thread_tmp_411_cast_cast_fu_32749_p1() {
    tmp_411_cast_cast_fu_32749_p1 = esl_zext<9,4>(tmp_2538_fu_32739_p4.read());
}

void ShuffleNetV2::thread_tmp_411_fu_35953_p2() {
    tmp_411_fu_35953_p2 = (!p_shl232_cast_fu_35937_p1.read().is_01() || !p_shl233_cast_fu_35949_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl232_cast_fu_35937_p1.read()) - sc_biguint<8>(p_shl233_cast_fu_35949_p1.read()));
}

void ShuffleNetV2::thread_tmp_412_cast_fu_32454_p1() {
    tmp_412_cast_fu_32454_p1 = esl_sext<10,7>(tmp_363_fu_32448_p2.read());
}

void ShuffleNetV2::thread_tmp_412_fu_35963_p2() {
    tmp_412_fu_35963_p2 = (!co161_cast1_reg_47900.read().is_01() || !tmp_411_fu_35953_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(co161_cast1_reg_47900.read()) + sc_biguint<8>(tmp_411_fu_35953_p2.read()));
}

void ShuffleNetV2::thread_tmp_413_cast_cast_fu_32463_p1() {
    tmp_413_cast_cast_fu_32463_p1 = esl_sext<10,7>(tmp_364_fu_32458_p2.read());
}

void ShuffleNetV2::thread_tmp_413_fu_36578_p2() {
    tmp_413_fu_36578_p2 = (!p_shl234_cast_fu_36562_p1.read().is_01() || !p_shl235_cast_fu_36574_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl234_cast_fu_36562_p1.read()) - sc_biguint<8>(p_shl235_cast_fu_36574_p1.read()));
}

void ShuffleNetV2::thread_tmp_414_fu_36588_p2() {
    tmp_414_fu_36588_p2 = (!tmp_413_fu_36578_p2.read().is_01() || !i179_cast1_reg_48118.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_413_fu_36578_p2.read()) + sc_biguint<8>(i179_cast1_reg_48118.read()));
}

void ShuffleNetV2::thread_tmp_415_cast_cast_fu_33095_p1() {
    tmp_415_cast_cast_fu_33095_p1 = esl_sext<10,7>(tmp_365_fu_33089_p2.read());
}

void ShuffleNetV2::thread_tmp_415_fu_36323_p2() {
    tmp_415_fu_36323_p2 = (!p_shl236_cast_fu_36309_p1.read().is_01() || !p_shl237_cast_fu_36319_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl236_cast_fu_36309_p1.read()) - sc_biguint<8>(p_shl237_cast_fu_36319_p1.read()));
}

void ShuffleNetV2::thread_tmp_416_cast1_fu_36377_p1() {
    tmp_416_cast1_fu_36377_p1 = esl_sext<11,10>(tmp_416_reg_48077.read());
}

void ShuffleNetV2::thread_tmp_416_cast_fu_33133_p1() {
    tmp_416_cast_fu_33133_p1 = esl_sext<32,7>(tmp_366_reg_47007.read());
}

void ShuffleNetV2::thread_tmp_416_fu_36333_p2() {
    tmp_416_fu_36333_p2 = (!tmp_485_cast_cast_reg_48046.read().is_01() || !tmp_493_cast_cast_fu_36329_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_485_cast_cast_reg_48046.read()) + sc_bigint<10>(tmp_493_cast_cast_fu_36329_p1.read()));
}

void ShuffleNetV2::thread_tmp_417_fu_36350_p2() {
    tmp_417_fu_36350_p2 = (!p_shl238_cast_fu_36346_p1.read().is_01() || !p_shl236_cast1_fu_36305_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl238_cast_fu_36346_p1.read()) - sc_biguint<10>(p_shl236_cast1_fu_36305_p1.read()));
}

void ShuffleNetV2::thread_tmp_418_cast_cast_fu_32778_p1() {
    tmp_418_cast_cast_fu_32778_p1 = esl_sext<8,7>(tmp_362_fu_32773_p2.read());
}

void ShuffleNetV2::thread_tmp_418_fu_36795_p2() {
    tmp_418_fu_36795_p2 = (!co167_cast_fu_36779_p1.read().is_01() || !ap_const_lv8_60.is_01())? sc_lv<8>(): (sc_biguint<8>(co167_cast_fu_36779_p1.read()) + sc_biguint<8>(ap_const_lv8_60));
}

void ShuffleNetV2::thread_tmp_419_cast_cast_fu_32828_p1() {
    tmp_419_cast_cast_fu_32828_p1 = esl_sext<9,7>(tmp_367_fu_32822_p2.read());
}

void ShuffleNetV2::thread_tmp_419_fu_36998_p2() {
    tmp_419_fu_36998_p2 = (!p_shl239_cast_fu_36984_p1.read().is_01() || !p_shl240_cast_fu_36994_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl239_cast_fu_36984_p1.read()) - sc_biguint<8>(p_shl240_cast_fu_36994_p1.read()));
}

void ShuffleNetV2::thread_tmp_420_fu_37038_p2() {
    tmp_420_fu_37038_p2 = (!tmp_419_reg_48266.read().is_01() || !ci82_cast_fu_37018_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_419_reg_48266.read()) + sc_biguint<8>(ci82_cast_fu_37018_p1.read()));
}

void ShuffleNetV2::thread_tmp_421_cast_cast_fu_32867_p1() {
    tmp_421_cast_cast_fu_32867_p1 = esl_sext<9,8>(tmp_369_fu_32861_p2.read());
}

void ShuffleNetV2::thread_tmp_421_fu_37336_p2() {
    tmp_421_fu_37336_p2 = (!p_shl241_cast_fu_37320_p1.read().is_01() || !p_shl242_cast_fu_37332_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl241_cast_fu_37320_p1.read()) - sc_biguint<8>(p_shl242_cast_fu_37332_p1.read()));
}

void ShuffleNetV2::thread_tmp_422_fu_37346_p2() {
    tmp_422_fu_37346_p2 = (!tmp_421_fu_37336_p2.read().is_01() || !i184_cast1_reg_48343.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_421_fu_37336_p2.read()) + sc_biguint<8>(i184_cast1_reg_48343.read()));
}

void ShuffleNetV2::thread_tmp_423_fu_37089_p2() {
    tmp_423_fu_37089_p2 = (!p_shl243_cast_fu_37075_p1.read().is_01() || !p_shl244_cast_fu_37085_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl243_cast_fu_37075_p1.read()) - sc_biguint<8>(p_shl244_cast_fu_37085_p1.read()));
}

void ShuffleNetV2::thread_tmp_424_cast_fu_37143_p1() {
    tmp_424_cast_fu_37143_p1 = esl_sext<11,10>(tmp_424_reg_48302.read());
}

void ShuffleNetV2::thread_tmp_424_fu_37099_p2() {
    tmp_424_fu_37099_p2 = (!tmp_505_cast_cast_fu_37095_p1.read().is_01() || !tmp_500_cast_cast_reg_48271.read().is_01())? sc_lv<10>(): (sc_bigint<10>(tmp_505_cast_cast_fu_37095_p1.read()) + sc_biguint<10>(tmp_500_cast_cast_reg_48271.read()));
}

void ShuffleNetV2::thread_tmp_425_cast_cast_fu_33314_p1() {
    tmp_425_cast_cast_fu_33314_p1 = esl_zext<10,3>(tmp_2550_fu_33304_p4.read());
}

void ShuffleNetV2::thread_tmp_425_fu_37116_p2() {
    tmp_425_fu_37116_p2 = (!p_shl245_cast_fu_37112_p1.read().is_01() || !p_shl243_cast1_fu_37071_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl245_cast_fu_37112_p1.read()) - sc_biguint<10>(p_shl243_cast1_fu_37071_p1.read()));
}

void ShuffleNetV2::thread_tmp_426_cast_cast_fu_33642_p1() {
    tmp_426_cast_cast_fu_33642_p1 = esl_sext<10,8>(tmp_372_fu_33636_p2.read());
}

void ShuffleNetV2::thread_tmp_426_fu_37771_p2() {
    tmp_426_fu_37771_p2 = (!p_shl248_cast_fu_37757_p1.read().is_01() || !p_shl249_cast_fu_37767_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl248_cast_fu_37757_p1.read()) - sc_biguint<8>(p_shl249_cast_fu_37767_p1.read()));
}

void ShuffleNetV2::thread_tmp_427_cast_fu_33680_p1() {
    tmp_427_cast_fu_33680_p1 = esl_sext<32,8>(tmp_373_reg_47178.read());
}

void ShuffleNetV2::thread_tmp_427_fu_37685_p2() {
    tmp_427_fu_37685_p2 = (!p_shl246_cast_fu_37669_p1.read().is_01() || !p_shl247_cast_fu_37681_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl246_cast_fu_37669_p1.read()) - sc_biguint<8>(p_shl247_cast_fu_37681_p1.read()));
}

void ShuffleNetV2::thread_tmp_428_fu_37695_p2() {
    tmp_428_fu_37695_p2 = (!tmp_427_fu_37685_p2.read().is_01() || !i187_cast1_reg_48476.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_427_fu_37685_p2.read()) + sc_biguint<8>(i187_cast1_reg_48476.read()));
}

void ShuffleNetV2::thread_tmp_429_cast_cast_fu_33343_p1() {
    tmp_429_cast_cast_fu_33343_p1 = esl_sext<10,8>(tmp_371_fu_33338_p2.read());
}

void ShuffleNetV2::thread_tmp_429_fu_37811_p2() {
    tmp_429_fu_37811_p2 = (!tmp_426_reg_48526.read().is_01() || !ci84_cast_fu_37791_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_426_reg_48526.read()) + sc_biguint<8>(ci84_cast_fu_37791_p1.read()));
}

void ShuffleNetV2::thread_tmp_430_cast_cast_fu_33395_p1() {
    tmp_430_cast_cast_fu_33395_p1 = esl_sext<10,8>(tmp_374_fu_33389_p2.read());
}

void ShuffleNetV2::thread_tmp_430_fu_37480_p2() {
    tmp_430_fu_37480_p2 = (!p_shl250_cast_fu_37464_p1.read().is_01() || !p_shl251_cast_fu_37476_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl250_cast_fu_37464_p1.read()) - sc_biguint<8>(p_shl251_cast_fu_37476_p1.read()));
}

void ShuffleNetV2::thread_tmp_431_fu_37490_p2() {
    tmp_431_fu_37490_p2 = (!tmp_430_fu_37480_p2.read().is_01() || !co171_cast_reg_48385.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_430_fu_37480_p2.read()) + sc_biguint<8>(co171_cast_reg_48385.read()));
}

void ShuffleNetV2::thread_tmp_432_cast_fu_33422_p1() {
    tmp_432_cast_fu_33422_p1 = esl_sext<12,10>(tmp_376_fu_33416_p2.read());
}

void ShuffleNetV2::thread_tmp_432_fu_38109_p2() {
    tmp_432_fu_38109_p2 = (!p_shl252_cast_fu_38093_p1.read().is_01() || !p_shl253_cast_fu_38105_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl252_cast_fu_38093_p1.read()) - sc_biguint<8>(p_shl253_cast_fu_38105_p1.read()));
}

void ShuffleNetV2::thread_tmp_433_fu_38119_p2() {
    tmp_433_fu_38119_p2 = (!tmp_432_fu_38109_p2.read().is_01() || !i191_cast1_reg_48603.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_432_fu_38109_p2.read()) + sc_biguint<8>(i191_cast1_reg_48603.read()));
}

void ShuffleNetV2::thread_tmp_434_cast_cast_fu_33983_p1() {
    tmp_434_cast_cast_fu_33983_p1 = esl_sext<9,8>(tmp_378_fu_33977_p2.read());
}

void ShuffleNetV2::thread_tmp_434_fu_37862_p2() {
    tmp_434_fu_37862_p2 = (!p_shl254_cast_fu_37848_p1.read().is_01() || !p_shl255_cast_fu_37858_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl254_cast_fu_37848_p1.read()) - sc_biguint<8>(p_shl255_cast_fu_37858_p1.read()));
}

void ShuffleNetV2::thread_tmp_435_cast1_fu_37916_p1() {
    tmp_435_cast1_fu_37916_p1 = esl_sext<11,10>(tmp_435_reg_48562.read());
}

void ShuffleNetV2::thread_tmp_435_cast_fu_34021_p1() {
    tmp_435_cast_fu_34021_p1 = esl_sext<32,8>(tmp_379_reg_47311.read());
}

void ShuffleNetV2::thread_tmp_435_fu_37872_p2() {
    tmp_435_fu_37872_p2 = (!tmp_522_cast_cast_fu_37868_p1.read().is_01() || !tmp_514_cast_cast_reg_48531.read().is_01())? sc_lv<10>(): (sc_bigint<10>(tmp_522_cast_cast_fu_37868_p1.read()) + sc_biguint<10>(tmp_514_cast_cast_reg_48531.read()));
}

void ShuffleNetV2::thread_tmp_436_fu_37889_p2() {
    tmp_436_fu_37889_p2 = (!p_shl256_cast_fu_37885_p1.read().is_01() || !p_shl254_cast1_fu_37844_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl256_cast_fu_37885_p1.read()) - sc_biguint<10>(p_shl254_cast1_fu_37844_p1.read()));
}

void ShuffleNetV2::thread_tmp_437_fu_38326_p2() {
    tmp_437_fu_38326_p2 = (!co177_cast_fu_38310_p1.read().is_01() || !ap_const_lv8_60.is_01())? sc_lv<8>(): (sc_biguint<8>(co177_cast_fu_38310_p1.read()) + sc_biguint<8>(ap_const_lv8_60));
}

void ShuffleNetV2::thread_tmp_438_fu_38529_p2() {
    tmp_438_fu_38529_p2 = (!p_shl257_cast_fu_38515_p1.read().is_01() || !p_shl258_cast_fu_38525_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl257_cast_fu_38515_p1.read()) - sc_biguint<8>(p_shl258_cast_fu_38525_p1.read()));
}

void ShuffleNetV2::thread_tmp_439_cast_cast_fu_34083_p1() {
    tmp_439_cast_cast_fu_34083_p1 = esl_zext<10,3>(tmp_2561_fu_34073_p4.read());
}

void ShuffleNetV2::thread_tmp_439_fu_38569_p2() {
    tmp_439_fu_38569_p2 = (!tmp_438_reg_48751.read().is_01() || !ci86_cast_fu_38549_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_438_reg_48751.read()) + sc_biguint<8>(ci86_cast_fu_38549_p1.read()));
}

void ShuffleNetV2::thread_tmp_440_cast_fu_33790_p1() {
    tmp_440_cast_fu_33790_p1 = esl_sext<10,8>(tmp_381_fu_33784_p2.read());
}

void ShuffleNetV2::thread_tmp_440_fu_38867_p2() {
    tmp_440_fu_38867_p2 = (!p_shl259_cast_fu_38851_p1.read().is_01() || !p_shl260_cast_fu_38863_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl259_cast_fu_38851_p1.read()) - sc_biguint<8>(p_shl260_cast_fu_38863_p1.read()));
}

void ShuffleNetV2::thread_tmp_441_cast_cast_fu_33799_p1() {
    tmp_441_cast_cast_fu_33799_p1 = esl_sext<11,8>(tmp_382_fu_33794_p2.read());
}

void ShuffleNetV2::thread_tmp_441_fu_38877_p2() {
    tmp_441_fu_38877_p2 = (!tmp_440_fu_38867_p2.read().is_01() || !i196_cast1_reg_48828.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_440_fu_38867_p2.read()) + sc_biguint<8>(i196_cast1_reg_48828.read()));
}

void ShuffleNetV2::thread_tmp_442_fu_38620_p2() {
    tmp_442_fu_38620_p2 = (!p_shl261_cast_fu_38606_p1.read().is_01() || !p_shl262_cast_fu_38616_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl261_cast_fu_38606_p1.read()) - sc_biguint<8>(p_shl262_cast_fu_38616_p1.read()));
}

void ShuffleNetV2::thread_tmp_443_cast_cast_fu_34411_p1() {
    tmp_443_cast_cast_fu_34411_p1 = esl_sext<9,8>(tmp_383_fu_34405_p2.read());
}

void ShuffleNetV2::thread_tmp_443_cast_fu_38674_p1() {
    tmp_443_cast_fu_38674_p1 = esl_sext<11,10>(tmp_443_reg_48787.read());
}

void ShuffleNetV2::thread_tmp_443_fu_38630_p2() {
    tmp_443_fu_38630_p2 = (!tmp_534_cast_cast_fu_38626_p1.read().is_01() || !tmp_529_cast_cast_reg_48756.read().is_01())? sc_lv<10>(): (sc_bigint<10>(tmp_534_cast_cast_fu_38626_p1.read()) + sc_biguint<10>(tmp_529_cast_cast_reg_48756.read()));
}

void ShuffleNetV2::thread_tmp_444_cast_fu_34453_p1() {
    tmp_444_cast_fu_34453_p1 = esl_sext<32,8>(tmp_384_reg_47438.read());
}

void ShuffleNetV2::thread_tmp_444_fu_38647_p2() {
    tmp_444_fu_38647_p2 = (!p_shl263_cast_fu_38643_p1.read().is_01() || !p_shl261_cast1_fu_38602_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl263_cast_fu_38643_p1.read()) - sc_biguint<10>(p_shl261_cast1_fu_38602_p1.read()));
}

void ShuffleNetV2::thread_tmp_445_fu_39294_p2() {
    tmp_445_fu_39294_p2 = (!p_shl266_cast_fu_39280_p1.read().is_01() || !p_shl267_cast_fu_39290_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl266_cast_fu_39280_p1.read()) - sc_biguint<8>(p_shl267_cast_fu_39290_p1.read()));
}

void ShuffleNetV2::thread_tmp_446_cast_cast_fu_34112_p1() {
    tmp_446_cast_cast_fu_34112_p1 = esl_sext<10,8>(tmp_380_fu_34107_p2.read());
}

void ShuffleNetV2::thread_tmp_446_fu_39208_p2() {
    tmp_446_fu_39208_p2 = (!p_shl264_cast_fu_39192_p1.read().is_01() || !p_shl265_cast_fu_39204_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl264_cast_fu_39192_p1.read()) - sc_biguint<8>(p_shl265_cast_fu_39204_p1.read()));
}

void ShuffleNetV2::thread_tmp_447_cast_cast_fu_34164_p1() {
    tmp_447_cast_cast_fu_34164_p1 = esl_sext<10,8>(tmp_385_fu_34158_p2.read());
}

void ShuffleNetV2::thread_tmp_447_fu_39218_p2() {
    tmp_447_fu_39218_p2 = (!tmp_446_fu_39208_p2.read().is_01() || !i199_cast1_reg_48961.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_446_fu_39208_p2.read()) + sc_biguint<8>(i199_cast1_reg_48961.read()));
}

void ShuffleNetV2::thread_tmp_448_fu_39334_p2() {
    tmp_448_fu_39334_p2 = (!tmp_445_reg_49011.read().is_01() || !ci88_cast_fu_39314_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_445_reg_49011.read()) + sc_biguint<8>(ci88_cast_fu_39314_p1.read()));
}

void ShuffleNetV2::thread_tmp_449_cast_fu_34191_p1() {
    tmp_449_cast_fu_34191_p1 = esl_sext<12,10>(tmp_387_fu_34185_p2.read());
}

void ShuffleNetV2::thread_tmp_449_fu_39011_p2() {
    tmp_449_fu_39011_p2 = (!p_shl268_cast_fu_38995_p1.read().is_01() || !p_shl269_cast_fu_39007_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl268_cast_fu_38995_p1.read()) - sc_biguint<8>(p_shl269_cast_fu_39007_p1.read()));
}

void ShuffleNetV2::thread_tmp_450_fu_39021_p2() {
    tmp_450_fu_39021_p2 = (!co181_cast1_reg_48870.read().is_01() || !tmp_449_fu_39011_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(co181_cast1_reg_48870.read()) + sc_biguint<8>(tmp_449_fu_39011_p2.read()));
}

void ShuffleNetV2::thread_tmp_451_cast_fu_34756_p1() {
    tmp_451_cast_fu_34756_p1 = esl_sext<12,8>(tmp_389_fu_34750_p2.read());
}

void ShuffleNetV2::thread_tmp_451_fu_39632_p2() {
    tmp_451_fu_39632_p2 = (!p_shl270_cast_fu_39616_p1.read().is_01() || !p_shl271_cast_fu_39628_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl270_cast_fu_39616_p1.read()) - sc_biguint<8>(p_shl271_cast_fu_39628_p1.read()));
}

void ShuffleNetV2::thread_tmp_452_cast_fu_34790_p1() {
    tmp_452_cast_fu_34790_p1 = esl_sext<32,8>(tmp_390_reg_47571.read());
}

void ShuffleNetV2::thread_tmp_452_fu_39642_p2() {
    tmp_452_fu_39642_p2 = (!tmp_451_fu_39632_p2.read().is_01() || !i203_cast1_reg_49088.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_451_fu_39632_p2.read()) + sc_biguint<8>(i203_cast1_reg_49088.read()));
}

void ShuffleNetV2::thread_tmp_453_fu_39385_p2() {
    tmp_453_fu_39385_p2 = (!p_shl272_cast_fu_39371_p1.read().is_01() || !p_shl273_cast_fu_39381_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl272_cast_fu_39371_p1.read()) - sc_biguint<8>(p_shl273_cast_fu_39381_p1.read()));
}

void ShuffleNetV2::thread_tmp_454_cast_fu_39439_p1() {
    tmp_454_cast_fu_39439_p1 = esl_sext<11,10>(tmp_454_reg_49047.read());
}

void ShuffleNetV2::thread_tmp_454_fu_39395_p2() {
    tmp_454_fu_39395_p2 = (!tmp_551_cast_cast_fu_39391_p1.read().is_01() || !tmp_543_cast_cast_reg_49016.read().is_01())? sc_lv<10>(): (sc_bigint<10>(tmp_551_cast_cast_fu_39391_p1.read()) + sc_biguint<10>(tmp_543_cast_cast_reg_49016.read()));
}

void ShuffleNetV2::thread_tmp_455_fu_39412_p2() {
    tmp_455_fu_39412_p2 = (!p_shl274_cast_fu_39408_p1.read().is_01() || !p_shl272_cast1_fu_39367_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl274_cast_fu_39408_p1.read()) - sc_biguint<10>(p_shl272_cast1_fu_39367_p1.read()));
}

void ShuffleNetV2::thread_tmp_456_cast_cast_fu_34852_p1() {
    tmp_456_cast_cast_fu_34852_p1 = esl_zext<10,3>(tmp_2574_fu_34842_p4.read());
}

void ShuffleNetV2::thread_tmp_457_cast_fu_34563_p1() {
    tmp_457_cast_fu_34563_p1 = esl_sext<10,8>(tmp_392_fu_34557_p2.read());
}

void ShuffleNetV2::thread_tmp_458_cast_cast_fu_34572_p1() {
    tmp_458_cast_cast_fu_34572_p1 = esl_sext<11,8>(tmp_393_fu_34567_p2.read());
}

void ShuffleNetV2::thread_tmp_460_cast_fu_35180_p1() {
    tmp_460_cast_fu_35180_p1 = esl_sext<12,8>(tmp_395_fu_35174_p2.read());
}

void ShuffleNetV2::thread_tmp_461_cast_fu_35214_p1() {
    tmp_461_cast_fu_35214_p1 = esl_sext<32,8>(tmp_396_reg_47698.read());
}

void ShuffleNetV2::thread_tmp_463_cast_cast_fu_34881_p1() {
    tmp_463_cast_cast_fu_34881_p1 = esl_sext<10,8>(tmp_391_fu_34876_p2.read());
}

void ShuffleNetV2::thread_tmp_467_cast_cast_fu_35487_p1() {
    tmp_467_cast_cast_fu_35487_p1 = esl_zext<10,3>(tmp_2587_fu_35477_p4.read());
}

void ShuffleNetV2::thread_tmp_468_cast_cast_fu_34933_p1() {
    tmp_468_cast_cast_fu_34933_p1 = esl_sext<10,8>(tmp_397_fu_34927_p2.read());
}

void ShuffleNetV2::thread_tmp_470_cast_fu_34960_p1() {
    tmp_470_cast_fu_34960_p1 = esl_sext<12,10>(tmp_399_fu_34954_p2.read());
}

}

