#include "ShuffleNetV2.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void ShuffleNetV2::thread_tmp_1263_fu_24007_p1() {
    tmp_1263_fu_24007_p1 = co154_reg_6227.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1264_cast_fu_14180_p1() {
    tmp_1264_cast_fu_14180_p1 = esl_sext<36,35>(tmp_906_fu_14174_p2.read());
}

void ShuffleNetV2::thread_tmp_1264_fu_24023_p2() {
    tmp_1264_fu_24023_p2 = (!ap_const_lv5_3.is_01())? sc_lv<5>(): co154_reg_6227.read() << (unsigned short)ap_const_lv5_3.to_uint();
}

void ShuffleNetV2::thread_tmp_1265_fu_23925_p1() {
    tmp_1265_fu_23925_p1 = k55_reg_6216.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1266_fu_23721_p1() {
    tmp_1266_fu_23721_p1 = i156_reg_6194.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1267_fu_23778_p3() {
    tmp_1267_fu_23778_p3 = esl_concat<10,2>(tmp_732_reg_33899.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1268_cast_fu_14218_p1() {
    tmp_1268_cast_fu_14218_p1 = esl_zext<64,10>(tmp_911_reg_30589.read());
}

void ShuffleNetV2::thread_tmp_1268_fu_23789_p2() {
    tmp_1268_fu_23789_p2 = (!p_shl458_cast_fu_23785_p1.read().is_01() || !tmp_733_cast_fu_23775_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl458_cast_fu_23785_p1.read()) - sc_biguint<13>(tmp_733_cast_fu_23775_p1.read()));
}

void ShuffleNetV2::thread_tmp_1269_fu_23795_p2() {
    tmp_1269_fu_23795_p2 = (!tmp_1268_fu_23789_p2.read().is_01() || !tmp_719_cast_reg_33868.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_1268_fu_23789_p2.read()) + sc_biguint<13>(tmp_719_cast_reg_33868.read()));
}

void ShuffleNetV2::thread_tmp_126_fu_7367_p1() {
    tmp_126_fu_7367_p1 = esl_zext<64,10>(i7_reg_2999.read());
}

void ShuffleNetV2::thread_tmp_1270_cast_fu_14712_p1() {
    tmp_1270_cast_fu_14712_p1 = esl_zext<10,9>(tmp_912_fu_14704_p3.read());
}

void ShuffleNetV2::thread_tmp_1270_fu_23812_p2() {
    tmp_1270_fu_23812_p2 = (!p_shl457_cast_fu_23804_p3.read().is_01() || !tmp_1786_cast_fu_23800_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl457_cast_fu_23804_p3.read()) - sc_bigint<15>(tmp_1786_cast_fu_23800_p1.read()));
}

void ShuffleNetV2::thread_tmp_1271_fu_23818_p2() {
    tmp_1271_fu_23818_p2 = (!tmp_1270_fu_23812_p2.read().is_01() || !tmp_727_cast_reg_33886.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1270_fu_23812_p2.read()) + sc_biguint<15>(tmp_727_cast_reg_33886.read()));
}

void ShuffleNetV2::thread_tmp_1272_fu_23830_p3() {
    tmp_1272_fu_23830_p3 = esl_concat<8,2>(tmp_735_reg_33905.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1273_fu_23837_p1() {
    tmp_1273_fu_23837_p1 = esl_sext<34,10>(tmp_1272_fu_23830_p3.read());
}

void ShuffleNetV2::thread_tmp_1274_fu_23845_p2() {
    tmp_1274_fu_23845_p2 = (!p_shl456_cast_fu_23841_p1.read().is_01() || !tmp_736_cast_fu_23826_p1.read().is_01())? sc_lv<35>(): (sc_biguint<35>(p_shl456_cast_fu_23841_p1.read()) - sc_biguint<35>(tmp_736_cast_fu_23826_p1.read()));
}

void ShuffleNetV2::thread_tmp_1275_fu_23855_p2() {
    tmp_1275_fu_23855_p2 = (!tmp_1792_cast_fu_23851_p1.read().is_01() || !tmp_719_cast1_reg_33863.read().is_01())? sc_lv<36>(): (sc_bigint<36>(tmp_1792_cast_fu_23851_p1.read()) + sc_biguint<36>(tmp_719_cast1_reg_33863.read()));
}

void ShuffleNetV2::thread_tmp_1276_fu_23860_p1() {
    tmp_1276_fu_23860_p1 = tmp_1275_fu_23855_p2.read().range(11-1, 0);
}

void ShuffleNetV2::thread_tmp_1277_cast_fu_14572_p1() {
    tmp_1277_cast_fu_14572_p1 = esl_sext<17,16>(tmp_917_fu_14566_p2.read());
}

void ShuffleNetV2::thread_tmp_1277_fu_23864_p1() {
    tmp_1277_fu_23864_p1 = tmp_1275_fu_23855_p2.read().range(9-1, 0);
}

void ShuffleNetV2::thread_tmp_1278_cast_fu_14581_p1() {
    tmp_1278_cast_fu_14581_p1 = esl_sext<64,17>(tmp_918_fu_14576_p2.read());
}

void ShuffleNetV2::thread_tmp_1278_fu_23879_p2() {
    tmp_1278_fu_23879_p2 = (!p_shl455_cast_fu_23872_p3.read().is_01() || !tmp_1276_reg_33916.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl455_cast_fu_23872_p3.read()) - sc_biguint<11>(tmp_1276_reg_33916.read()));
}

void ShuffleNetV2::thread_tmp_1279_fu_23884_p2() {
    tmp_1279_fu_23884_p2 = (!tmp_1278_fu_23879_p2.read().is_01() || !tmp_727_cast1_reg_33881.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_1278_fu_23879_p2.read()) + sc_biguint<11>(tmp_727_cast1_reg_33881.read()));
}

void ShuffleNetV2::thread_tmp_127_fu_7388_p2() {
    tmp_127_fu_7388_p2 = (!i8_cast758_cast_fu_7372_p1.read().is_01() || !ap_const_lv10_218.is_01())? sc_lv<10>(): (sc_biguint<10>(i8_cast758_cast_fu_7372_p1.read()) + sc_bigint<10>(ap_const_lv10_218));
}

void ShuffleNetV2::thread_tmp_1280_fu_24365_p3() {
    tmp_1280_fu_24365_p3 = esl_concat<8,2>(tmp_738_fu_24359_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1281_fu_24377_p3() {
    tmp_1281_fu_24377_p3 = esl_concat<7,2>(co156_reg_6282.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1282_fu_24277_p1() {
    tmp_1282_fu_24277_p1 = k57_reg_6271.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1283_fu_24094_p1() {
    tmp_1283_fu_24094_p1 = i158_reg_6249.read().range(4-1, 0);
}

void ShuffleNetV2::thread_tmp_1284_fu_24199_p3() {
    tmp_1284_fu_24199_p3 = esl_concat<12,5>(tmp_745_reg_34026.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1285_fu_24210_p3() {
    tmp_1285_fu_24210_p3 = esl_concat<12,3>(tmp_745_reg_34026.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1286_cast_fu_14586_p1() {
    tmp_1286_cast_fu_14586_p1 = esl_sext<64,13>(tmp_922_reg_30690.read());
}

void ShuffleNetV2::thread_tmp_1286_fu_24221_p2() {
    tmp_1286_fu_24221_p2 = (!p_shl461_cast_fu_24206_p1.read().is_01() || !p_shl462_cast_fu_24217_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(p_shl461_cast_fu_24206_p1.read()) - sc_biguint<18>(p_shl462_cast_fu_24217_p1.read()));
}

void ShuffleNetV2::thread_tmp_1287_fu_24231_p2() {
    tmp_1287_fu_24231_p2 = (!tmp_728_cast_reg_34008.read().is_01() || !tmp_1807_cast_fu_24227_p1.read().is_01())? sc_lv<19>(): (sc_biguint<19>(tmp_728_cast_reg_34008.read()) + sc_bigint<19>(tmp_1807_cast_fu_24227_p1.read()));
}

void ShuffleNetV2::thread_tmp_1288_cast_fu_14805_p1() {
    tmp_1288_cast_fu_14805_p1 = esl_zext<11,10>(tmp_923_fu_14797_p3.read());
}

void ShuffleNetV2::thread_tmp_1288_fu_24147_p2() {
    tmp_1288_fu_24147_p2 = (!ap_const_lv5_1.is_01())? sc_lv<5>(): i158_reg_6249.read() << (unsigned short)ap_const_lv5_1.to_uint();
}

void ShuffleNetV2::thread_tmp_1289_fu_24168_p3() {
    tmp_1289_fu_24168_p3 = esl_concat<8,7>(tmp_747_fu_24163_p2.read(), ap_const_lv7_0);
}

void ShuffleNetV2::thread_tmp_128_fu_7398_p1() {
    tmp_128_fu_7398_p1 = esl_zext<64,12>(tmp_179_cast_fu_7394_p1.read());
}

void ShuffleNetV2::thread_tmp_1290_cast_fu_14817_p1() {
    tmp_1290_cast_fu_14817_p1 = esl_zext<10,9>(tmp_924_fu_14809_p3.read());
}

void ShuffleNetV2::thread_tmp_1290_fu_24176_p3() {
    tmp_1290_fu_24176_p3 = esl_concat<8,5>(tmp_747_fu_24163_p2.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1291_fu_24188_p2() {
    tmp_1291_fu_24188_p2 = (!tmp_1289_fu_24168_p3.read().is_01() || !p_shl460_cast_fu_24184_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1289_fu_24168_p3.read()) - sc_bigint<15>(p_shl460_cast_fu_24184_p1.read()));
}

void ShuffleNetV2::thread_tmp_1292_fu_24194_p2() {
    tmp_1292_fu_24194_p2 = (!tmp_730_cast1_reg_34013.read().is_01() || !tmp_1291_fu_24188_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(tmp_730_cast1_reg_34013.read()) + sc_biguint<15>(tmp_1291_fu_24188_p2.read()));
}

void ShuffleNetV2::thread_tmp_1293_cast_fu_14745_p1() {
    tmp_1293_cast_fu_14745_p1 = esl_zext<14,13>(tmp_926_fu_14737_p3.read());
}

void ShuffleNetV2::thread_tmp_1293_fu_24490_p1() {
    tmp_1293_fu_24490_p1 = co158_reg_6315.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1294_fu_24506_p2() {
    tmp_1294_fu_24506_p2 = (!ap_const_lv5_3.is_01())? sc_lv<5>(): co158_reg_6315.read() << (unsigned short)ap_const_lv5_3.to_uint();
}

void ShuffleNetV2::thread_tmp_1295_fu_24409_p2() {
    tmp_1295_fu_24409_p2 = (!tmp_749_cast_fu_24405_p1.read().is_01() || !tmp_1798_cast_reg_34091.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_749_cast_fu_24405_p1.read()) + sc_biguint<11>(tmp_1798_cast_reg_34091.read()));
}

void ShuffleNetV2::thread_tmp_1296_fu_24422_p2() {
    tmp_1296_fu_24422_p2 = (!tmp_749_cast1_fu_24401_p1.read().is_01() || !tmp_1800_cast_reg_34096.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_749_cast1_fu_24401_p1.read()) + sc_biguint<10>(tmp_1800_cast_reg_34096.read()));
}

void ShuffleNetV2::thread_tmp_1297_fu_24455_p2() {
    tmp_1297_fu_24455_p2 = (!tmp_1820_cast_reg_34109.read().is_01() || !tmp_755_cast_fu_24451_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_1820_cast_reg_34109.read()) + sc_biguint<13>(tmp_755_cast_fu_24451_p1.read()));
}

void ShuffleNetV2::thread_tmp_1298_cast_fu_14846_p3() {
    tmp_1298_cast_fu_14846_p3 = esl_concat<11,3>(tmp_928_fu_14841_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1298_fu_24465_p2() {
    tmp_1298_fu_24465_p2 = (!tmp_1823_cast_reg_34114.read().is_01() || !tmp_755_cast1_fu_24447_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp_1823_cast_reg_34114.read()) + sc_biguint<12>(tmp_755_cast1_fu_24447_p1.read()));
}

void ShuffleNetV2::thread_tmp_1299_fu_24760_p1() {
    tmp_1299_fu_24760_p1 = k59_reg_6359.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_129_fu_7403_p1() {
    tmp_129_fu_7403_p1 = esl_zext<64,4>(i8_reg_3011.read());
}

void ShuffleNetV2::thread_tmp_1300_fu_24577_p1() {
    tmp_1300_fu_24577_p1 = i162_reg_6337.read().range(4-1, 0);
}

void ShuffleNetV2::thread_tmp_1301_cast_fu_14859_p3() {
    tmp_1301_cast_fu_14859_p3 = esl_concat<10,3>(tmp_929_fu_14854_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1301_fu_24682_p3() {
    tmp_1301_fu_24682_p3 = esl_concat<12,5>(tmp_762_reg_34186.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1302_cast_fu_14770_p1() {
    tmp_1302_cast_fu_14770_p1 = esl_zext<64,14>(tmp_930_fu_14765_p2.read());
}

void ShuffleNetV2::thread_tmp_1302_fu_24693_p3() {
    tmp_1302_fu_24693_p3 = esl_concat<12,3>(tmp_762_reg_34186.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1303_cast_fu_14892_p1() {
    tmp_1303_cast_fu_14892_p1 = esl_zext<64,14>(tmp_931_fu_14887_p2.read());
}

void ShuffleNetV2::thread_tmp_1303_fu_24704_p2() {
    tmp_1303_fu_24704_p2 = (!p_shl465_cast_fu_24689_p1.read().is_01() || !p_shl466_cast_fu_24700_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(p_shl465_cast_fu_24689_p1.read()) - sc_biguint<18>(p_shl466_cast_fu_24700_p1.read()));
}

void ShuffleNetV2::thread_tmp_1304_cast_fu_14902_p1() {
    tmp_1304_cast_fu_14902_p1 = esl_zext<64,13>(tmp_932_reg_30834.read());
}

void ShuffleNetV2::thread_tmp_1304_fu_24714_p2() {
    tmp_1304_fu_24714_p2 = (!tmp_750_cast_reg_34168.read().is_01() || !tmp_1832_cast_fu_24710_p1.read().is_01())? sc_lv<19>(): (sc_biguint<19>(tmp_750_cast_reg_34168.read()) + sc_bigint<19>(tmp_1832_cast_fu_24710_p1.read()));
}

void ShuffleNetV2::thread_tmp_1305_fu_24630_p2() {
    tmp_1305_fu_24630_p2 = (!ap_const_lv5_1.is_01())? sc_lv<5>(): i162_reg_6337.read() << (unsigned short)ap_const_lv5_1.to_uint();
}

void ShuffleNetV2::thread_tmp_1306_fu_24651_p3() {
    tmp_1306_fu_24651_p3 = esl_concat<8,7>(tmp_764_fu_24646_p2.read(), ap_const_lv7_0);
}

void ShuffleNetV2::thread_tmp_1307_fu_24659_p3() {
    tmp_1307_fu_24659_p3 = esl_concat<8,5>(tmp_764_fu_24646_p2.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1308_fu_24671_p2() {
    tmp_1308_fu_24671_p2 = (!tmp_1306_fu_24651_p3.read().is_01() || !p_shl464_cast_fu_24667_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1306_fu_24651_p3.read()) - sc_bigint<15>(p_shl464_cast_fu_24667_p1.read()));
}

void ShuffleNetV2::thread_tmp_1309_fu_24677_p2() {
    tmp_1309_fu_24677_p2 = (!tmp_753_cast_reg_34173.read().is_01() || !tmp_1308_fu_24671_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(tmp_753_cast_reg_34173.read()) + sc_biguint<15>(tmp_1308_fu_24671_p2.read()));
}

void ShuffleNetV2::thread_tmp_130_fu_7496_p2() {
    tmp_130_fu_7496_p2 = (!i3_cast_fu_7480_p1.read().is_01() || !ap_const_lv6_18.is_01())? sc_lv<6>(): (sc_biguint<6>(i3_cast_fu_7480_p1.read()) + sc_biguint<6>(ap_const_lv6_18));
}

void ShuffleNetV2::thread_tmp_1310_fu_25184_p1() {
    tmp_1310_fu_25184_p1 = co162_reg_6436.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1311_fu_25200_p2() {
    tmp_1311_fu_25200_p2 = (!ap_const_lv5_3.is_01())? sc_lv<5>(): co162_reg_6436.read() << (unsigned short)ap_const_lv5_3.to_uint();
}

void ShuffleNetV2::thread_tmp_1312_fu_25102_p1() {
    tmp_1312_fu_25102_p1 = k61_reg_6425.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1313_cast_fu_15162_p1() {
    tmp_1313_cast_fu_15162_p1 = esl_sext<17,16>(tmp_939_fu_15156_p2.read());
}

void ShuffleNetV2::thread_tmp_1313_fu_24898_p1() {
    tmp_1313_fu_24898_p1 = i168_reg_6403.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1314_cast_fu_15171_p1() {
    tmp_1314_cast_fu_15171_p1 = esl_sext<64,17>(tmp_940_fu_15166_p2.read());
}

void ShuffleNetV2::thread_tmp_1314_fu_24955_p3() {
    tmp_1314_fu_24955_p3 = esl_concat<10,2>(tmp_777_reg_34305.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1315_fu_24966_p2() {
    tmp_1315_fu_24966_p2 = (!p_shl470_cast_fu_24962_p1.read().is_01() || !tmp_779_cast_fu_24952_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl470_cast_fu_24962_p1.read()) - sc_biguint<13>(tmp_779_cast_fu_24952_p1.read()));
}

void ShuffleNetV2::thread_tmp_1316_fu_24972_p2() {
    tmp_1316_fu_24972_p2 = (!tmp_1315_fu_24966_p2.read().is_01() || !tmp_765_cast1_reg_34274.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_1315_fu_24966_p2.read()) + sc_biguint<13>(tmp_765_cast1_reg_34274.read()));
}

void ShuffleNetV2::thread_tmp_1317_fu_24989_p2() {
    tmp_1317_fu_24989_p2 = (!p_shl469_cast_fu_24981_p3.read().is_01() || !tmp_1849_cast_fu_24977_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl469_cast_fu_24981_p3.read()) - sc_bigint<15>(tmp_1849_cast_fu_24977_p1.read()));
}

void ShuffleNetV2::thread_tmp_1318_fu_24995_p2() {
    tmp_1318_fu_24995_p2 = (!tmp_1317_fu_24989_p2.read().is_01() || !tmp_772_cast_reg_34292.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1317_fu_24989_p2.read()) + sc_biguint<15>(tmp_772_cast_reg_34292.read()));
}

void ShuffleNetV2::thread_tmp_1319_fu_25007_p3() {
    tmp_1319_fu_25007_p3 = esl_concat<8,2>(tmp_780_reg_34311.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_131_fu_7502_p1() {
    tmp_131_fu_7502_p1 = esl_zext<64,6>(tmp_130_fu_7496_p2.read());
}

void ShuffleNetV2::thread_tmp_1320_fu_25014_p1() {
    tmp_1320_fu_25014_p1 = esl_sext<34,10>(tmp_1319_fu_25007_p3.read());
}

void ShuffleNetV2::thread_tmp_1321_fu_25022_p2() {
    tmp_1321_fu_25022_p2 = (!p_shl468_cast_fu_25018_p1.read().is_01() || !tmp_782_cast_fu_25003_p1.read().is_01())? sc_lv<35>(): (sc_biguint<35>(p_shl468_cast_fu_25018_p1.read()) - sc_biguint<35>(tmp_782_cast_fu_25003_p1.read()));
}

void ShuffleNetV2::thread_tmp_1322_cast_fu_15176_p1() {
    tmp_1322_cast_fu_15176_p1 = esl_sext<64,13>(tmp_944_reg_30894.read());
}

void ShuffleNetV2::thread_tmp_1322_fu_25032_p2() {
    tmp_1322_fu_25032_p2 = (!tmp_1855_cast_fu_25028_p1.read().is_01() || !tmp_765_cast_reg_34269.read().is_01())? sc_lv<36>(): (sc_bigint<36>(tmp_1855_cast_fu_25028_p1.read()) + sc_biguint<36>(tmp_765_cast_reg_34269.read()));
}

void ShuffleNetV2::thread_tmp_1323_fu_25037_p1() {
    tmp_1323_fu_25037_p1 = tmp_1322_fu_25032_p2.read().range(11-1, 0);
}

void ShuffleNetV2::thread_tmp_1324_fu_25041_p1() {
    tmp_1324_fu_25041_p1 = tmp_1322_fu_25032_p2.read().range(9-1, 0);
}

void ShuffleNetV2::thread_tmp_1325_fu_25056_p2() {
    tmp_1325_fu_25056_p2 = (!p_shl467_cast_fu_25049_p3.read().is_01() || !tmp_1323_reg_34322.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl467_cast_fu_25049_p3.read()) - sc_biguint<11>(tmp_1323_reg_34322.read()));
}

void ShuffleNetV2::thread_tmp_1326_fu_25061_p2() {
    tmp_1326_fu_25061_p2 = (!tmp_1325_fu_25056_p2.read().is_01() || !tmp_772_cast1_reg_34287.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_1325_fu_25056_p2.read()) + sc_biguint<11>(tmp_772_cast1_reg_34287.read()));
}

void ShuffleNetV2::thread_tmp_1327_fu_25540_p3() {
    tmp_1327_fu_25540_p3 = esl_concat<7,2>(co164_reg_6491.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1328_fu_25462_p1() {
    tmp_1328_fu_25462_p1 = k63_reg_6480.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1329_fu_25271_p1() {
    tmp_1329_fu_25271_p1 = i170_reg_6458.read().range(4-1, 0);
}

void ShuffleNetV2::thread_tmp_132_fu_7507_p1() {
    tmp_132_fu_7507_p1 = esl_zext<64,5>(i3_reg_3045.read());
}

void ShuffleNetV2::thread_tmp_1330_fu_25376_p3() {
    tmp_1330_fu_25376_p3 = esl_concat<11,5>(tmp_789_reg_34432.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1331_cast_fu_15433_p1() {
    tmp_1331_cast_fu_15433_p1 = esl_sext<15,12>(tmp_950_fu_15428_p2.read());
}

void ShuffleNetV2::thread_tmp_1331_fu_25383_p1() {
    tmp_1331_fu_25383_p1 = esl_sext<17,16>(tmp_1330_fu_25376_p3.read());
}

void ShuffleNetV2::thread_tmp_1332_fu_25391_p3() {
    tmp_1332_fu_25391_p3 = esl_concat<11,3>(tmp_789_reg_34432.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1333_fu_25398_p1() {
    tmp_1333_fu_25398_p1 = esl_sext<15,14>(tmp_1332_fu_25391_p3.read());
}

void ShuffleNetV2::thread_tmp_1334_cast_fu_15505_p1() {
    tmp_1334_cast_fu_15505_p1 = esl_zext<64,15>(tmp_953_reg_31019.read());
}

void ShuffleNetV2::thread_tmp_1334_fu_25406_p2() {
    tmp_1334_fu_25406_p2 = (!p_shl473_cast_fu_25387_p1.read().is_01() || !p_shl474_cast_fu_25402_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(p_shl473_cast_fu_25387_p1.read()) - sc_biguint<18>(p_shl474_cast_fu_25402_p1.read()));
}

void ShuffleNetV2::thread_tmp_1335_fu_25416_p2() {
    tmp_1335_fu_25416_p2 = (!tmp_773_cast_reg_34414.read().is_01() || !tmp_1870_cast_fu_25412_p1.read().is_01())? sc_lv<19>(): (sc_biguint<19>(tmp_773_cast_reg_34414.read()) + sc_bigint<19>(tmp_1870_cast_fu_25412_p1.read()));
}

void ShuffleNetV2::thread_tmp_1336_fu_25324_p2() {
    tmp_1336_fu_25324_p2 = (!ap_const_lv5_1.is_01())? sc_lv<5>(): i170_reg_6458.read() << (unsigned short)ap_const_lv5_1.to_uint();
}

void ShuffleNetV2::thread_tmp_1337_cast_fu_15488_p1() {
    tmp_1337_cast_fu_15488_p1 = esl_sext<36,35>(tmp_956_fu_15482_p2.read());
}

void ShuffleNetV2::thread_tmp_1337_fu_25345_p3() {
    tmp_1337_fu_25345_p3 = esl_concat<8,7>(tmp_791_fu_25340_p2.read(), ap_const_lv7_0);
}

void ShuffleNetV2::thread_tmp_1338_fu_25353_p3() {
    tmp_1338_fu_25353_p3 = esl_concat<8,5>(tmp_791_fu_25340_p2.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1339_fu_25365_p2() {
    tmp_1339_fu_25365_p2 = (!tmp_1337_fu_25345_p3.read().is_01() || !p_shl472_cast_fu_25361_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1337_fu_25345_p3.read()) - sc_bigint<15>(p_shl472_cast_fu_25361_p1.read()));
}

void ShuffleNetV2::thread_tmp_133_cast_fu_7466_p1() {
    tmp_133_cast_fu_7466_p1 = esl_zext<12,5>(ci9_reg_3034.read());
}

void ShuffleNetV2::thread_tmp_133_fu_10492_p1() {
    tmp_133_fu_10492_p1 = i28_reg_3774.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1340_fu_25371_p2() {
    tmp_1340_fu_25371_p2 = (!tmp_775_cast_reg_34419.read().is_01() || !tmp_1339_fu_25365_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(tmp_775_cast_reg_34419.read()) + sc_biguint<15>(tmp_1339_fu_25365_p2.read()));
}

void ShuffleNetV2::thread_tmp_1341_cast_fu_15526_p1() {
    tmp_1341_cast_fu_15526_p1 = esl_zext<64,10>(tmp_961_reg_31039.read());
}

void ShuffleNetV2::thread_tmp_1341_fu_25633_p3() {
    tmp_1341_fu_25633_p3 = esl_concat<8,2>(tmp_792_fu_25627_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1342_fu_25645_p3() {
    tmp_1342_fu_25645_p3 = esl_concat<7,2>(co166_reg_6524.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1343_cast_fu_16020_p1() {
    tmp_1343_cast_fu_16020_p1 = esl_zext<10,9>(tmp_962_fu_16012_p3.read());
}

void ShuffleNetV2::thread_tmp_1343_fu_25568_p2() {
    tmp_1343_fu_25568_p2 = (!tmp_1861_cast_reg_34497.read().is_01() || !tmp_793_cast_fu_25564_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_1861_cast_reg_34497.read()) + sc_biguint<10>(tmp_793_cast_fu_25564_p1.read()));
}

void ShuffleNetV2::thread_tmp_1344_fu_25573_p3() {
    tmp_1344_fu_25573_p3 = esl_concat<10,2>(tmp_1343_fu_25568_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1345_fu_25758_p1() {
    tmp_1345_fu_25758_p1 = co168_reg_6557.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1346_fu_25774_p2() {
    tmp_1346_fu_25774_p2 = (!ap_const_lv5_3.is_01())? sc_lv<5>(): co168_reg_6557.read() << (unsigned short)ap_const_lv5_3.to_uint();
}

void ShuffleNetV2::thread_tmp_1347_fu_25677_p2() {
    tmp_1347_fu_25677_p2 = (!tmp_795_cast2_fu_25673_p1.read().is_01() || !tmp_1882_cast_reg_34546.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_795_cast2_fu_25673_p1.read()) + sc_biguint<10>(tmp_1882_cast_reg_34546.read()));
}

void ShuffleNetV2::thread_tmp_1348_fu_25690_p2() {
    tmp_1348_fu_25690_p2 = (!tmp_795_cast1_fu_25669_p1.read().is_01() || !tmp_1880_cast_reg_34541.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_795_cast1_fu_25669_p1.read()) + sc_biguint<11>(tmp_1880_cast_reg_34541.read()));
}

void ShuffleNetV2::thread_tmp_1349_fu_25601_p2() {
    tmp_1349_fu_25601_p2 = (!tmp_1885_cast_reg_34510.read().is_01() || !tmp_796_cast_fu_25597_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_1885_cast_reg_34510.read()) + sc_biguint<13>(tmp_796_cast_fu_25597_p1.read()));
}

void ShuffleNetV2::thread_tmp_134_cast_fu_7524_p1() {
    tmp_134_cast_fu_7524_p1 = esl_zext<8,5>(co12_reg_3057.read());
}

void ShuffleNetV2::thread_tmp_134_fu_11121_p1() {
    tmp_134_fu_11121_p1 = co60_reg_3873.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1350_cast_fu_15880_p1() {
    tmp_1350_cast_fu_15880_p1 = esl_sext<18,17>(tmp_967_fu_15874_p2.read());
}

void ShuffleNetV2::thread_tmp_1350_fu_25723_p2() {
    tmp_1350_fu_25723_p2 = (!tmp_1890_cast_reg_34559.read().is_01() || !tmp_802_cast_fu_25719_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp_1890_cast_reg_34559.read()) + sc_biguint<12>(tmp_802_cast_fu_25719_p1.read()));
}

void ShuffleNetV2::thread_tmp_1351_cast_fu_15889_p1() {
    tmp_1351_cast_fu_15889_p1 = esl_sext<64,18>(tmp_968_fu_15884_p2.read());
}

void ShuffleNetV2::thread_tmp_1351_fu_25728_p2() {
    tmp_1351_fu_25728_p2 = (!tmp_1893_cast_reg_34564.read().is_01() || !tmp_802_cast1_fu_25715_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_1893_cast_reg_34564.read()) + sc_biguint<13>(tmp_802_cast1_fu_25715_p1.read()));
}

void ShuffleNetV2::thread_tmp_1352_fu_26024_p1() {
    tmp_1352_fu_26024_p1 = k65_reg_6601.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1353_fu_25845_p1() {
    tmp_1353_fu_25845_p1 = i174_reg_6579.read().range(4-1, 0);
}

void ShuffleNetV2::thread_tmp_1354_fu_25950_p3() {
    tmp_1354_fu_25950_p3 = esl_concat<13,5>(tmp_810_reg_34636.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1355_fu_25961_p3() {
    tmp_1355_fu_25961_p3 = esl_concat<13,3>(tmp_810_reg_34636.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1356_fu_25972_p2() {
    tmp_1356_fu_25972_p2 = (!p_shl477_cast_fu_25957_p1.read().is_01() || !p_shl478_cast_fu_25968_p1.read().is_01())? sc_lv<19>(): (sc_biguint<19>(p_shl477_cast_fu_25957_p1.read()) - sc_biguint<19>(p_shl478_cast_fu_25968_p1.read()));
}

void ShuffleNetV2::thread_tmp_1357_fu_25978_p2() {
    tmp_1357_fu_25978_p2 = (!tmp_797_cast_reg_34618.read().is_01() || !tmp_1356_fu_25972_p2.read().is_01())? sc_lv<19>(): (sc_biguint<19>(tmp_797_cast_reg_34618.read()) + sc_biguint<19>(tmp_1356_fu_25972_p2.read()));
}

void ShuffleNetV2::thread_tmp_1358_fu_25898_p2() {
    tmp_1358_fu_25898_p2 = (!ap_const_lv5_1.is_01())? sc_lv<5>(): i174_reg_6579.read() << (unsigned short)ap_const_lv5_1.to_uint();
}

void ShuffleNetV2::thread_tmp_1359_cast_fu_15894_p1() {
    tmp_1359_cast_fu_15894_p1 = esl_sext<64,13>(tmp_972_reg_31140.read());
}

void ShuffleNetV2::thread_tmp_1359_fu_25919_p3() {
    tmp_1359_fu_25919_p3 = esl_concat<8,7>(tmp_813_fu_25914_p2.read(), ap_const_lv7_0);
}

void ShuffleNetV2::thread_tmp_135_fu_7635_p2() {
    tmp_135_fu_7635_p2 = (!i4_cast_fu_7619_p1.read().is_01() || !ap_const_lv7_30.is_01())? sc_lv<7>(): (sc_biguint<7>(i4_cast_fu_7619_p1.read()) + sc_biguint<7>(ap_const_lv7_30));
}

void ShuffleNetV2::thread_tmp_1360_fu_25927_p3() {
    tmp_1360_fu_25927_p3 = esl_concat<8,5>(tmp_813_fu_25914_p2.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1361_cast_fu_16113_p1() {
    tmp_1361_cast_fu_16113_p1 = esl_zext<11,10>(tmp_973_fu_16105_p3.read());
}

void ShuffleNetV2::thread_tmp_1361_fu_25939_p2() {
    tmp_1361_fu_25939_p2 = (!tmp_1359_fu_25919_p3.read().is_01() || !p_shl476_cast_fu_25935_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1359_fu_25919_p3.read()) - sc_bigint<15>(p_shl476_cast_fu_25935_p1.read()));
}

void ShuffleNetV2::thread_tmp_1362_fu_25945_p2() {
    tmp_1362_fu_25945_p2 = (!tmp_801_cast_reg_34623.read().is_01() || !tmp_1361_fu_25939_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(tmp_801_cast_reg_34623.read()) + sc_biguint<15>(tmp_1361_fu_25939_p2.read()));
}

void ShuffleNetV2::thread_tmp_1363_cast_fu_16125_p1() {
    tmp_1363_cast_fu_16125_p1 = esl_zext<10,9>(tmp_974_fu_16117_p3.read());
}

void ShuffleNetV2::thread_tmp_1363_fu_26464_p1() {
    tmp_1363_fu_26464_p1 = co172_reg_6678.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1364_fu_26480_p2() {
    tmp_1364_fu_26480_p2 = (!ap_const_lv5_3.is_01())? sc_lv<5>(): co172_reg_6678.read() << (unsigned short)ap_const_lv5_3.to_uint();
}

void ShuffleNetV2::thread_tmp_1365_fu_26382_p1() {
    tmp_1365_fu_26382_p1 = k67_reg_6667.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1366_cast_fu_16053_p1() {
    tmp_1366_cast_fu_16053_p1 = esl_zext<14,13>(tmp_976_fu_16045_p3.read());
}

void ShuffleNetV2::thread_tmp_1366_fu_26162_p1() {
    tmp_1366_fu_26162_p1 = i180_reg_6645.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1367_fu_26223_p3() {
    tmp_1367_fu_26223_p3 = esl_concat<9,2>(tmp_827_reg_34755.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1368_fu_26230_p1() {
    tmp_1368_fu_26230_p1 = esl_sext<12,11>(tmp_1367_fu_26223_p3.read());
}

void ShuffleNetV2::thread_tmp_1369_fu_26238_p2() {
    tmp_1369_fu_26238_p2 = (!p_shl482_cast_fu_26234_p1.read().is_01() || !tmp_829_cast_fu_26219_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl482_cast_fu_26234_p1.read()) - sc_biguint<13>(tmp_829_cast_fu_26219_p1.read()));
}

void ShuffleNetV2::thread_tmp_136_fu_7641_p1() {
    tmp_136_fu_7641_p1 = esl_zext<64,7>(tmp_135_fu_7635_p2.read());
}

void ShuffleNetV2::thread_tmp_1370_fu_26248_p2() {
    tmp_1370_fu_26248_p2 = (!tmp_1920_cast_fu_26244_p1.read().is_01() || !tmp_814_cast2_reg_34724.read().is_01())? sc_lv<14>(): (sc_bigint<14>(tmp_1920_cast_fu_26244_p1.read()) + sc_biguint<14>(tmp_814_cast2_reg_34724.read()));
}

void ShuffleNetV2::thread_tmp_1371_cast_fu_16154_p3() {
    tmp_1371_cast_fu_16154_p3 = esl_concat<11,3>(tmp_978_fu_16149_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1371_fu_26257_p1() {
    tmp_1371_fu_26257_p1 = tmp_1370_fu_26248_p2.read().range(13-1, 0);
}

void ShuffleNetV2::thread_tmp_1372_fu_26269_p2() {
    tmp_1372_fu_26269_p2 = (!p_shl481_cast_fu_26261_p3.read().is_01() || !tmp_1921_cast_fu_26253_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl481_cast_fu_26261_p3.read()) - sc_bigint<15>(tmp_1921_cast_fu_26253_p1.read()));
}

void ShuffleNetV2::thread_tmp_1373_fu_26275_p2() {
    tmp_1373_fu_26275_p2 = (!tmp_1372_fu_26269_p2.read().is_01() || !tmp_821_cast_reg_34742.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1372_fu_26269_p2.read()) + sc_biguint<15>(tmp_821_cast_reg_34742.read()));
}

void ShuffleNetV2::thread_tmp_1374_cast_fu_16167_p3() {
    tmp_1374_cast_fu_16167_p3 = esl_concat<10,3>(tmp_979_fu_16162_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1374_fu_26287_p3() {
    tmp_1374_fu_26287_p3 = esl_concat<8,2>(tmp_830_reg_34761.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1375_cast_fu_16078_p1() {
    tmp_1375_cast_fu_16078_p1 = esl_zext<64,14>(tmp_980_fu_16073_p2.read());
}

void ShuffleNetV2::thread_tmp_1375_fu_26294_p1() {
    tmp_1375_fu_26294_p1 = esl_sext<34,10>(tmp_1374_fu_26287_p3.read());
}

void ShuffleNetV2::thread_tmp_1376_cast_fu_16200_p1() {
    tmp_1376_cast_fu_16200_p1 = esl_zext<64,14>(tmp_981_fu_16195_p2.read());
}

void ShuffleNetV2::thread_tmp_1376_fu_26302_p2() {
    tmp_1376_fu_26302_p2 = (!p_shl480_cast_fu_26298_p1.read().is_01() || !tmp_831_cast_fu_26283_p1.read().is_01())? sc_lv<35>(): (sc_biguint<35>(p_shl480_cast_fu_26298_p1.read()) - sc_biguint<35>(tmp_831_cast_fu_26283_p1.read()));
}

void ShuffleNetV2::thread_tmp_1377_cast_fu_16210_p1() {
    tmp_1377_cast_fu_16210_p1 = esl_zext<64,13>(tmp_982_reg_31284.read());
}

void ShuffleNetV2::thread_tmp_1377_fu_26312_p2() {
    tmp_1377_fu_26312_p2 = (!tmp_1927_cast_fu_26308_p1.read().is_01() || !tmp_814_cast1_reg_34719.read().is_01())? sc_lv<36>(): (sc_bigint<36>(tmp_1927_cast_fu_26308_p1.read()) + sc_biguint<36>(tmp_814_cast1_reg_34719.read()));
}

void ShuffleNetV2::thread_tmp_1378_fu_26317_p1() {
    tmp_1378_fu_26317_p1 = tmp_1377_fu_26312_p2.read().range(11-1, 0);
}

void ShuffleNetV2::thread_tmp_1379_fu_26321_p1() {
    tmp_1379_fu_26321_p1 = tmp_1377_fu_26312_p2.read().range(9-1, 0);
}

void ShuffleNetV2::thread_tmp_137_fu_7646_p1() {
    tmp_137_fu_7646_p1 = esl_zext<64,5>(i4_reg_3090.read());
}

void ShuffleNetV2::thread_tmp_1380_fu_26336_p2() {
    tmp_1380_fu_26336_p2 = (!p_shl479_cast_fu_26329_p3.read().is_01() || !tmp_1378_reg_34772.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl479_cast_fu_26329_p3.read()) - sc_biguint<11>(tmp_1378_reg_34772.read()));
}

void ShuffleNetV2::thread_tmp_1381_fu_26341_p2() {
    tmp_1381_fu_26341_p2 = (!tmp_1380_fu_26336_p2.read().is_01() || !tmp_821_cast1_reg_34737.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_1380_fu_26336_p2.read()) + sc_biguint<11>(tmp_821_cast1_reg_34737.read()));
}

void ShuffleNetV2::thread_tmp_1382_fu_26808_p3() {
    tmp_1382_fu_26808_p3 = esl_concat<7,2>(co174_reg_6733.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1383_fu_26730_p1() {
    tmp_1383_fu_26730_p1 = k69_reg_6722.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1384_cast_fu_16462_p1() {
    tmp_1384_cast_fu_16462_p1 = esl_sext<18,17>(tmp_987_fu_16456_p2.read());
}

void ShuffleNetV2::thread_tmp_1384_fu_26551_p1() {
    tmp_1384_fu_26551_p1 = i182_reg_6700.read().range(4-1, 0);
}

void ShuffleNetV2::thread_tmp_1385_cast_fu_16471_p1() {
    tmp_1385_cast_fu_16471_p1 = esl_sext<64,18>(tmp_988_fu_16466_p2.read());
}

void ShuffleNetV2::thread_tmp_1385_fu_26656_p3() {
    tmp_1385_fu_26656_p3 = esl_concat<13,5>(tmp_838_reg_34882.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1386_fu_26667_p3() {
    tmp_1386_fu_26667_p3 = esl_concat<13,3>(tmp_838_reg_34882.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1387_fu_26678_p2() {
    tmp_1387_fu_26678_p2 = (!p_shl485_cast_fu_26663_p1.read().is_01() || !p_shl486_cast_fu_26674_p1.read().is_01())? sc_lv<19>(): (sc_biguint<19>(p_shl485_cast_fu_26663_p1.read()) - sc_biguint<19>(p_shl486_cast_fu_26674_p1.read()));
}

void ShuffleNetV2::thread_tmp_1388_fu_26684_p2() {
    tmp_1388_fu_26684_p2 = (!tmp_822_cast1_reg_34864.read().is_01() || !tmp_1387_fu_26678_p2.read().is_01())? sc_lv<19>(): (sc_biguint<19>(tmp_822_cast1_reg_34864.read()) + sc_biguint<19>(tmp_1387_fu_26678_p2.read()));
}

void ShuffleNetV2::thread_tmp_1389_fu_26604_p2() {
    tmp_1389_fu_26604_p2 = (!ap_const_lv5_1.is_01())? sc_lv<5>(): i182_reg_6700.read() << (unsigned short)ap_const_lv5_1.to_uint();
}

void ShuffleNetV2::thread_tmp_138_cast_fu_7562_p1() {
    tmp_138_cast_fu_7562_p1 = esl_zext<9,2>(w13_reg_3068.read());
}

void ShuffleNetV2::thread_tmp_138_fu_11035_p1() {
    tmp_138_fu_11035_p1 = k2_reg_3862.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1390_fu_26625_p3() {
    tmp_1390_fu_26625_p3 = esl_concat<8,7>(tmp_840_fu_26620_p2.read(), ap_const_lv7_0);
}

void ShuffleNetV2::thread_tmp_1391_fu_26633_p3() {
    tmp_1391_fu_26633_p3 = esl_concat<8,5>(tmp_840_fu_26620_p2.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1392_fu_26645_p2() {
    tmp_1392_fu_26645_p2 = (!tmp_1390_fu_26625_p3.read().is_01() || !p_shl484_cast_fu_26641_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1390_fu_26625_p3.read()) - sc_bigint<15>(p_shl484_cast_fu_26641_p1.read()));
}

void ShuffleNetV2::thread_tmp_1393_cast_fu_16476_p1() {
    tmp_1393_cast_fu_16476_p1 = esl_sext<64,13>(tmp_992_reg_31344.read());
}

void ShuffleNetV2::thread_tmp_1393_fu_26651_p2() {
    tmp_1393_fu_26651_p2 = (!tmp_824_cast_reg_34869.read().is_01() || !tmp_1392_fu_26645_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(tmp_824_cast_reg_34869.read()) + sc_biguint<15>(tmp_1392_fu_26645_p2.read()));
}

void ShuffleNetV2::thread_tmp_1394_fu_26901_p3() {
    tmp_1394_fu_26901_p3 = esl_concat<8,2>(tmp_841_fu_26895_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1395_fu_26913_p3() {
    tmp_1395_fu_26913_p3 = esl_concat<7,2>(co176_reg_6766.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1396_fu_26836_p2() {
    tmp_1396_fu_26836_p2 = (!tmp_1933_cast_reg_34947.read().is_01() || !tmp_842_cast_fu_26832_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_1933_cast_reg_34947.read()) + sc_biguint<10>(tmp_842_cast_fu_26832_p1.read()));
}

void ShuffleNetV2::thread_tmp_1397_fu_26841_p3() {
    tmp_1397_fu_26841_p3 = esl_concat<10,2>(tmp_1396_fu_26836_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1398_fu_27026_p1() {
    tmp_1398_fu_27026_p1 = co178_reg_6799.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1399_fu_27042_p2() {
    tmp_1399_fu_27042_p2 = (!ap_const_lv5_3.is_01())? sc_lv<5>(): co178_reg_6799.read() << (unsigned short)ap_const_lv5_3.to_uint();
}

void ShuffleNetV2::thread_tmp_139_fu_7667_p2() {
    tmp_139_fu_7667_p2 = (!co16_cast_fu_7651_p1.read().is_01() || !ap_const_lv6_18.is_01())? sc_lv<6>(): (sc_biguint<6>(co16_cast_fu_7651_p1.read()) + sc_biguint<6>(ap_const_lv6_18));
}

void ShuffleNetV2::thread_tmp_1400_fu_26945_p2() {
    tmp_1400_fu_26945_p2 = (!tmp_844_cast2_fu_26941_p1.read().is_01() || !tmp_1950_cast_reg_34991.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_844_cast2_fu_26941_p1.read()) + sc_biguint<11>(tmp_1950_cast_reg_34991.read()));
}

void ShuffleNetV2::thread_tmp_1401_fu_26958_p2() {
    tmp_1401_fu_26958_p2 = (!tmp_844_cast1_fu_26937_p1.read().is_01() || !tmp_1952_cast_reg_34996.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_844_cast1_fu_26937_p1.read()) + sc_biguint<10>(tmp_1952_cast_reg_34996.read()));
}

void ShuffleNetV2::thread_tmp_1402_cast_fu_16729_p1() {
    tmp_1402_cast_fu_16729_p1 = esl_sext<15,12>(tmp_998_fu_16724_p2.read());
}

void ShuffleNetV2::thread_tmp_1402_fu_26869_p2() {
    tmp_1402_fu_26869_p2 = (!tmp_1955_cast_reg_34960.read().is_01() || !tmp_846_cast_fu_26865_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_1955_cast_reg_34960.read()) + sc_biguint<13>(tmp_846_cast_fu_26865_p1.read()));
}

void ShuffleNetV2::thread_tmp_1403_fu_26991_p2() {
    tmp_1403_fu_26991_p2 = (!tmp_1960_cast_reg_35009.read().is_01() || !tmp_850_cast2_fu_26987_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_1960_cast_reg_35009.read()) + sc_biguint<13>(tmp_850_cast2_fu_26987_p1.read()));
}

void ShuffleNetV2::thread_tmp_1404_fu_27001_p2() {
    tmp_1404_fu_27001_p2 = (!tmp_1963_cast_reg_35014.read().is_01() || !tmp_850_cast1_fu_26983_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp_1963_cast_reg_35014.read()) + sc_biguint<12>(tmp_850_cast1_fu_26983_p1.read()));
}

void ShuffleNetV2::thread_tmp_1405_cast_fu_16801_p1() {
    tmp_1405_cast_fu_16801_p1 = esl_zext<64,15>(tmp_1001_reg_31469.read());
}

void ShuffleNetV2::thread_tmp_1405_fu_27292_p1() {
    tmp_1405_fu_27292_p1 = k71_reg_6843.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1406_fu_27113_p1() {
    tmp_1406_fu_27113_p1 = i186_reg_6821.read().range(4-1, 0);
}

void ShuffleNetV2::thread_tmp_1407_fu_27218_p3() {
    tmp_1407_fu_27218_p3 = esl_concat<13,5>(tmp_861_reg_35086.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1408_cast_fu_16784_p1() {
    tmp_1408_cast_fu_16784_p1 = esl_sext<36,35>(tmp_1004_fu_16778_p2.read());
}

void ShuffleNetV2::thread_tmp_1408_fu_27229_p3() {
    tmp_1408_fu_27229_p3 = esl_concat<13,3>(tmp_861_reg_35086.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1409_fu_27240_p2() {
    tmp_1409_fu_27240_p2 = (!p_shl489_cast_fu_27225_p1.read().is_01() || !p_shl490_cast_fu_27236_p1.read().is_01())? sc_lv<19>(): (sc_biguint<19>(p_shl489_cast_fu_27225_p1.read()) - sc_biguint<19>(p_shl490_cast_fu_27236_p1.read()));
}

void ShuffleNetV2::thread_tmp_140_cast_fu_7605_p1() {
    tmp_140_cast_fu_7605_p1 = esl_zext<15,2>(h14_reg_3079.read());
}

void ShuffleNetV2::thread_tmp_140_fu_10823_p1() {
    tmp_140_fu_10823_p1 = i33_reg_3840.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1410_fu_27246_p2() {
    tmp_1410_fu_27246_p2 = (!tmp_847_cast_reg_35068.read().is_01() || !tmp_1409_fu_27240_p2.read().is_01())? sc_lv<19>(): (sc_biguint<19>(tmp_847_cast_reg_35068.read()) + sc_biguint<19>(tmp_1409_fu_27240_p2.read()));
}

void ShuffleNetV2::thread_tmp_1411_fu_27166_p2() {
    tmp_1411_fu_27166_p2 = (!ap_const_lv5_1.is_01())? sc_lv<5>(): i186_reg_6821.read() << (unsigned short)ap_const_lv5_1.to_uint();
}

void ShuffleNetV2::thread_tmp_1412_cast_fu_16822_p1() {
    tmp_1412_cast_fu_16822_p1 = esl_zext<64,10>(tmp_1009_reg_31489.read());
}

void ShuffleNetV2::thread_tmp_1412_fu_27187_p3() {
    tmp_1412_fu_27187_p3 = esl_concat<8,7>(tmp_863_fu_27182_p2.read(), ap_const_lv7_0);
}

void ShuffleNetV2::thread_tmp_1413_fu_27195_p3() {
    tmp_1413_fu_27195_p3 = esl_concat<8,5>(tmp_863_fu_27182_p2.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1414_cast_fu_17308_p1() {
    tmp_1414_cast_fu_17308_p1 = esl_zext<10,9>(tmp_1010_fu_17300_p3.read());
}

void ShuffleNetV2::thread_tmp_1414_fu_27207_p2() {
    tmp_1414_fu_27207_p2 = (!tmp_1412_fu_27187_p3.read().is_01() || !p_shl488_cast_fu_27203_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1412_fu_27187_p3.read()) - sc_bigint<15>(p_shl488_cast_fu_27203_p1.read()));
}

void ShuffleNetV2::thread_tmp_1415_fu_27213_p2() {
    tmp_1415_fu_27213_p2 = (!tmp_849_cast_reg_35073.read().is_01() || !tmp_1414_fu_27207_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(tmp_849_cast_reg_35073.read()) + sc_biguint<15>(tmp_1414_fu_27207_p2.read()));
}

void ShuffleNetV2::thread_tmp_1416_fu_27714_p1() {
    tmp_1416_fu_27714_p1 = co182_reg_6920.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1417_fu_27730_p2() {
    tmp_1417_fu_27730_p2 = (!ap_const_lv5_3.is_01())? sc_lv<5>(): co182_reg_6920.read() << (unsigned short)ap_const_lv5_3.to_uint();
}

void ShuffleNetV2::thread_tmp_1418_fu_27632_p1() {
    tmp_1418_fu_27632_p1 = k73_reg_6909.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1419_fu_27430_p1() {
    tmp_1419_fu_27430_p1 = i192_reg_6887.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_141_fu_7792_p2() {
    tmp_141_fu_7792_p2 = (!i6_cast_fu_7776_p1.read().is_01() || !ap_const_lv7_48.is_01())? sc_lv<7>(): (sc_biguint<7>(i6_cast_fu_7776_p1.read()) + sc_bigint<7>(ap_const_lv7_48));
}

void ShuffleNetV2::thread_tmp_1420_fu_27487_p3() {
    tmp_1420_fu_27487_p3 = esl_concat<11,2>(tmp_877_reg_35205.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1421_cast_fu_17172_p1() {
    tmp_1421_cast_fu_17172_p1 = esl_sext<18,17>(tmp_1015_fu_17166_p2.read());
}

void ShuffleNetV2::thread_tmp_1421_fu_27498_p2() {
    tmp_1421_fu_27498_p2 = (!p_shl494_cast_fu_27494_p1.read().is_01() || !tmp_879_cast_fu_27484_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl494_cast_fu_27494_p1.read()) - sc_biguint<14>(tmp_879_cast_fu_27484_p1.read()));
}

void ShuffleNetV2::thread_tmp_1422_cast_fu_17181_p1() {
    tmp_1422_cast_fu_17181_p1 = esl_sext<64,18>(tmp_1016_fu_17176_p2.read());
}

void ShuffleNetV2::thread_tmp_1422_fu_27508_p2() {
    tmp_1422_fu_27508_p2 = (!tmp_1989_cast_fu_27504_p1.read().is_01() || !tmp_864_cast_reg_35174.read().is_01())? sc_lv<15>(): (sc_bigint<15>(tmp_1989_cast_fu_27504_p1.read()) + sc_biguint<15>(tmp_864_cast_reg_35174.read()));
}

void ShuffleNetV2::thread_tmp_1423_fu_27513_p2() {
    tmp_1423_fu_27513_p2 = (!ap_const_lv15_2.is_01())? sc_lv<15>(): tmp_1422_fu_27508_p2.read() << (unsigned short)ap_const_lv15_2.to_uint();
}

void ShuffleNetV2::thread_tmp_1424_fu_27519_p2() {
    tmp_1424_fu_27519_p2 = (!tmp_1423_fu_27513_p2.read().is_01() || !tmp_1422_fu_27508_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1423_fu_27513_p2.read()) - sc_biguint<15>(tmp_1422_fu_27508_p2.read()));
}

void ShuffleNetV2::thread_tmp_1425_fu_27525_p2() {
    tmp_1425_fu_27525_p2 = (!tmp_1424_fu_27519_p2.read().is_01() || !tmp_871_cast_reg_35192.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1424_fu_27519_p2.read()) + sc_biguint<15>(tmp_871_cast_reg_35192.read()));
}

void ShuffleNetV2::thread_tmp_1426_fu_27537_p3() {
    tmp_1426_fu_27537_p3 = esl_concat<8,2>(tmp_880_reg_35211.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1427_fu_27544_p1() {
    tmp_1427_fu_27544_p1 = esl_sext<34,10>(tmp_1426_fu_27537_p3.read());
}

void ShuffleNetV2::thread_tmp_1428_fu_27552_p2() {
    tmp_1428_fu_27552_p2 = (!p_shl492_cast_fu_27548_p1.read().is_01() || !tmp_881_cast_fu_27533_p1.read().is_01())? sc_lv<35>(): (sc_biguint<35>(p_shl492_cast_fu_27548_p1.read()) - sc_biguint<35>(tmp_881_cast_fu_27533_p1.read()));
}

void ShuffleNetV2::thread_tmp_1429_fu_27562_p2() {
    tmp_1429_fu_27562_p2 = (!tmp_1996_cast_fu_27558_p1.read().is_01() || !tmp_864_cast1_reg_35169.read().is_01())? sc_lv<36>(): (sc_bigint<36>(tmp_1996_cast_fu_27558_p1.read()) + sc_biguint<36>(tmp_864_cast1_reg_35169.read()));
}

void ShuffleNetV2::thread_tmp_142_fu_7798_p1() {
    tmp_142_fu_7798_p1 = esl_zext<64,7>(tmp_141_fu_7792_p2.read());
}

void ShuffleNetV2::thread_tmp_1430_cast_fu_17186_p1() {
    tmp_1430_cast_fu_17186_p1 = esl_sext<64,13>(tmp_1020_reg_31590.read());
}

void ShuffleNetV2::thread_tmp_1430_fu_27567_p1() {
    tmp_1430_fu_27567_p1 = tmp_1429_fu_27562_p2.read().range(11-1, 0);
}

void ShuffleNetV2::thread_tmp_1431_fu_27571_p1() {
    tmp_1431_fu_27571_p1 = tmp_1429_fu_27562_p2.read().range(9-1, 0);
}

void ShuffleNetV2::thread_tmp_1432_cast_fu_17401_p1() {
    tmp_1432_cast_fu_17401_p1 = esl_zext<11,10>(tmp_1021_fu_17393_p3.read());
}

void ShuffleNetV2::thread_tmp_1432_fu_27586_p2() {
    tmp_1432_fu_27586_p2 = (!p_shl491_cast_fu_27579_p3.read().is_01() || !tmp_1430_reg_35222.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl491_cast_fu_27579_p3.read()) - sc_biguint<11>(tmp_1430_reg_35222.read()));
}

void ShuffleNetV2::thread_tmp_1433_fu_27591_p2() {
    tmp_1433_fu_27591_p2 = (!tmp_1432_fu_27586_p2.read().is_01() || !tmp_871_cast1_reg_35187.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_1432_fu_27586_p2.read()) + sc_biguint<11>(tmp_871_cast1_reg_35187.read()));
}

void ShuffleNetV2::thread_tmp_1434_cast_fu_17413_p1() {
    tmp_1434_cast_fu_17413_p1 = esl_zext<10,9>(tmp_1022_fu_17405_p3.read());
}

void ShuffleNetV2::thread_tmp_1434_fu_28058_p3() {
    tmp_1434_fu_28058_p3 = esl_concat<7,2>(co184_reg_6975.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1435_fu_27980_p1() {
    tmp_1435_fu_27980_p1 = k75_reg_6964.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1436_fu_27801_p1() {
    tmp_1436_fu_27801_p1 = i194_reg_6942.read().range(4-1, 0);
}

void ShuffleNetV2::thread_tmp_1437_cast_fu_17341_p1() {
    tmp_1437_cast_fu_17341_p1 = esl_zext<14,13>(tmp_1024_fu_17333_p3.read());
}

void ShuffleNetV2::thread_tmp_1437_fu_27906_p3() {
    tmp_1437_fu_27906_p3 = esl_concat<13,5>(tmp_888_reg_35332.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1438_fu_27917_p3() {
    tmp_1438_fu_27917_p3 = esl_concat<13,3>(tmp_888_reg_35332.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1439_fu_27928_p2() {
    tmp_1439_fu_27928_p2 = (!p_shl497_cast_fu_27913_p1.read().is_01() || !p_shl498_cast_fu_27924_p1.read().is_01())? sc_lv<19>(): (sc_biguint<19>(p_shl497_cast_fu_27913_p1.read()) - sc_biguint<19>(p_shl498_cast_fu_27924_p1.read()));
}

void ShuffleNetV2::thread_tmp_143_fu_7803_p1() {
    tmp_143_fu_7803_p1 = esl_zext<64,5>(i6_reg_3124.read());
}

void ShuffleNetV2::thread_tmp_1440_fu_27934_p2() {
    tmp_1440_fu_27934_p2 = (!tmp_872_cast_reg_35314.read().is_01() || !tmp_1439_fu_27928_p2.read().is_01())? sc_lv<19>(): (sc_biguint<19>(tmp_872_cast_reg_35314.read()) + sc_biguint<19>(tmp_1439_fu_27928_p2.read()));
}

void ShuffleNetV2::thread_tmp_1441_fu_27854_p2() {
    tmp_1441_fu_27854_p2 = (!ap_const_lv5_1.is_01())? sc_lv<5>(): i194_reg_6942.read() << (unsigned short)ap_const_lv5_1.to_uint();
}

void ShuffleNetV2::thread_tmp_1442_cast_fu_17442_p3() {
    tmp_1442_cast_fu_17442_p3 = esl_concat<11,3>(tmp_1026_fu_17437_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1442_fu_27875_p3() {
    tmp_1442_fu_27875_p3 = esl_concat<8,7>(tmp_890_fu_27870_p2.read(), ap_const_lv7_0);
}

void ShuffleNetV2::thread_tmp_1443_fu_27883_p3() {
    tmp_1443_fu_27883_p3 = esl_concat<8,5>(tmp_890_fu_27870_p2.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1444_fu_27895_p2() {
    tmp_1444_fu_27895_p2 = (!tmp_1442_fu_27875_p3.read().is_01() || !p_shl496_cast_fu_27891_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1442_fu_27875_p3.read()) - sc_bigint<15>(p_shl496_cast_fu_27891_p1.read()));
}

void ShuffleNetV2::thread_tmp_1445_cast_fu_17455_p3() {
    tmp_1445_cast_fu_17455_p3 = esl_concat<10,3>(tmp_1027_fu_17450_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1445_fu_27901_p2() {
    tmp_1445_fu_27901_p2 = (!tmp_874_cast_reg_35319.read().is_01() || !tmp_1444_fu_27895_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(tmp_874_cast_reg_35319.read()) + sc_biguint<15>(tmp_1444_fu_27895_p2.read()));
}

void ShuffleNetV2::thread_tmp_1446_cast_fu_17366_p1() {
    tmp_1446_cast_fu_17366_p1 = esl_zext<64,14>(tmp_1028_fu_17361_p2.read());
}

void ShuffleNetV2::thread_tmp_1446_fu_28145_p3() {
    tmp_1446_fu_28145_p3 = esl_concat<4,9>(co_i_reg_7008.read(), ap_const_lv9_0);
}

void ShuffleNetV2::thread_tmp_1447_cast_fu_17488_p1() {
    tmp_1447_cast_fu_17488_p1 = esl_zext<64,14>(tmp_1029_fu_17483_p2.read());
}

void ShuffleNetV2::thread_tmp_1447_fu_28086_p2() {
    tmp_1447_fu_28086_p2 = (!tmp_2002_cast_reg_35397.read().is_01() || !tmp_891_cast_fu_28082_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_2002_cast_reg_35397.read()) + sc_biguint<10>(tmp_891_cast_fu_28082_p1.read()));
}

void ShuffleNetV2::thread_tmp_1448_cast_fu_17498_p1() {
    tmp_1448_cast_fu_17498_p1 = esl_zext<64,13>(tmp_1030_reg_31734.read());
}

void ShuffleNetV2::thread_tmp_1448_fu_28091_p3() {
    tmp_1448_fu_28091_p3 = esl_concat<10,2>(tmp_1447_fu_28086_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1449_fu_28178_p2() {
    tmp_1449_fu_28178_p2 = (!tmp_2019_cast_reg_35447.read().is_01() || !tmp_i_cast_fu_28174_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_2019_cast_reg_35447.read()) + sc_biguint<14>(tmp_i_cast_fu_28174_p1.read()));
}

void ShuffleNetV2::thread_tmp_144_cast1_fu_7749_p1() {
    tmp_144_cast1_fu_7749_p1 = esl_zext<11,5>(ci10_reg_3113.read());
}

void ShuffleNetV2::thread_tmp_144_cast_fu_7753_p1() {
    tmp_144_cast_fu_7753_p1 = esl_zext<13,5>(ci10_reg_3113.read());
}

void ShuffleNetV2::thread_tmp_144_fu_10910_p3() {
    tmp_144_fu_10910_p3 = esl_concat<12,2>(tmp_659_fu_10901_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1450_fu_28119_p2() {
    tmp_1450_fu_28119_p2 = (!tmp_2022_cast_reg_35410.read().is_01() || !tmp_892_cast_fu_28115_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_2022_cast_reg_35410.read()) + sc_biguint<13>(tmp_892_cast_fu_28115_p1.read()));
}

void ShuffleNetV2::thread_tmp_1455_cast_fu_17750_p1() {
    tmp_1455_cast_fu_17750_p1 = esl_sext<18,17>(tmp_1035_fu_17744_p2.read());
}

void ShuffleNetV2::thread_tmp_1456_cast_fu_17759_p1() {
    tmp_1456_cast_fu_17759_p1 = esl_sext<64,18>(tmp_1036_fu_17754_p2.read());
}

void ShuffleNetV2::thread_tmp_145_fu_7824_p2() {
    tmp_145_fu_7824_p2 = (!co19_cast_fu_7808_p1.read().is_01() || !ap_const_lv6_18.is_01())? sc_lv<6>(): (sc_biguint<6>(co19_cast_fu_7808_p1.read()) + sc_biguint<6>(ap_const_lv6_18));
}

void ShuffleNetV2::thread_tmp_1464_cast_fu_17764_p1() {
    tmp_1464_cast_fu_17764_p1 = esl_sext<64,13>(tmp_1040_reg_31794.read());
}

void ShuffleNetV2::thread_tmp_146_cast_fu_7830_p1() {
    tmp_146_cast_fu_7830_p1 = esl_zext<9,6>(tmp_145_fu_7824_p2.read());
}

void ShuffleNetV2::thread_tmp_146_fu_10970_p1() {
    tmp_146_fu_10970_p1 = tmp_677_fu_10965_p2.read().range(10-1, 0);
}

void ShuffleNetV2::thread_tmp_1474_cast_fu_18025_p1() {
    tmp_1474_cast_fu_18025_p1 = esl_sext<15,12>(tmp_1047_fu_18020_p2.read());
}

void ShuffleNetV2::thread_tmp_1477_cast_fu_18097_p1() {
    tmp_1477_cast_fu_18097_p1 = esl_zext<64,15>(tmp_1050_reg_31919.read());
}

void ShuffleNetV2::thread_tmp_147_cast_fu_7852_p1() {
    tmp_147_cast_fu_7852_p1 = esl_zext<8,5>(co19_reg_3136.read());
}

void ShuffleNetV2::thread_tmp_147_fu_10974_p1() {
    tmp_147_fu_10974_p1 = tmp_677_fu_10965_p2.read().range(8-1, 0);
}

void ShuffleNetV2::thread_tmp_1480_cast_fu_18080_p1() {
    tmp_1480_cast_fu_18080_p1 = esl_sext<36,35>(tmp_1053_fu_18074_p2.read());
}

void ShuffleNetV2::thread_tmp_1484_cast_fu_18118_p1() {
    tmp_1484_cast_fu_18118_p1 = esl_zext<64,10>(tmp_1058_reg_31939.read());
}

void ShuffleNetV2::thread_tmp_1486_cast_fu_18604_p1() {
    tmp_1486_cast_fu_18604_p1 = esl_zext<10,9>(tmp_1059_fu_18596_p3.read());
}

void ShuffleNetV2::thread_tmp_148_fu_7989_p3() {
    tmp_148_fu_7989_p3 = esl_concat<1,5>(ap_const_lv1_1, i9_reg_3169.read());
}

void ShuffleNetV2::thread_tmp_1493_cast_fu_18468_p1() {
    tmp_1493_cast_fu_18468_p1 = esl_sext<18,17>(tmp_1064_fu_18462_p2.read());
}

void ShuffleNetV2::thread_tmp_1494_cast_fu_18477_p1() {
    tmp_1494_cast_fu_18477_p1 = esl_sext<64,18>(tmp_1065_fu_18472_p2.read());
}

void ShuffleNetV2::thread_tmp_149_fu_8001_p1() {
    tmp_149_fu_8001_p1 = esl_zext<64,7>(tmp_203_cast_fu_7997_p1.read());
}

void ShuffleNetV2::thread_tmp_1502_cast_fu_18482_p1() {
    tmp_1502_cast_fu_18482_p1 = esl_sext<64,13>(tmp_1069_reg_32040.read());
}

void ShuffleNetV2::thread_tmp_1504_cast_fu_18697_p1() {
    tmp_1504_cast_fu_18697_p1 = esl_zext<11,10>(tmp_1070_fu_18689_p3.read());
}

void ShuffleNetV2::thread_tmp_1506_cast_fu_18709_p1() {
    tmp_1506_cast_fu_18709_p1 = esl_zext<10,9>(tmp_1071_fu_18701_p3.read());
}

void ShuffleNetV2::thread_tmp_1509_cast_fu_18637_p1() {
    tmp_1509_cast_fu_18637_p1 = esl_zext<14,13>(tmp_1073_fu_18629_p3.read());
}

void ShuffleNetV2::thread_tmp_150_fu_8006_p1() {
    tmp_150_fu_8006_p1 = esl_zext<64,5>(i9_reg_3169.read());
}

void ShuffleNetV2::thread_tmp_1514_cast_fu_18738_p3() {
    tmp_1514_cast_fu_18738_p3 = esl_concat<11,3>(tmp_1075_fu_18733_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1517_cast_fu_18751_p3() {
    tmp_1517_cast_fu_18751_p3 = esl_concat<10,3>(tmp_1076_fu_18746_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1518_cast_fu_18662_p1() {
    tmp_1518_cast_fu_18662_p1 = esl_zext<64,14>(tmp_1077_fu_18657_p2.read());
}

void ShuffleNetV2::thread_tmp_1519_cast_fu_18784_p1() {
    tmp_1519_cast_fu_18784_p1 = esl_zext<64,14>(tmp_1078_fu_18779_p2.read());
}

void ShuffleNetV2::thread_tmp_151_cast_fu_7890_p1() {
    tmp_151_cast_fu_7890_p1 = esl_zext<9,2>(w20_reg_3147.read());
}

void ShuffleNetV2::thread_tmp_151_fu_11403_p1() {
    tmp_151_fu_11403_p1 = k3_reg_3917.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1520_cast_fu_18794_p1() {
    tmp_1520_cast_fu_18794_p1 = esl_zext<64,13>(tmp_1079_reg_32184.read());
}

void ShuffleNetV2::thread_tmp_1527_cast_fu_19046_p1() {
    tmp_1527_cast_fu_19046_p1 = esl_sext<18,17>(tmp_1084_fu_19040_p2.read());
}

void ShuffleNetV2::thread_tmp_1528_cast_fu_19055_p1() {
    tmp_1528_cast_fu_19055_p1 = esl_sext<64,18>(tmp_1085_fu_19050_p2.read());
}

void ShuffleNetV2::thread_tmp_152_fu_8027_p2() {
    tmp_152_fu_8027_p2 = (!co23_cast_fu_8011_p1.read().is_01() || !ap_const_lv7_30.is_01())? sc_lv<7>(): (sc_biguint<7>(co23_cast_fu_8011_p1.read()) + sc_biguint<7>(ap_const_lv7_30));
}

void ShuffleNetV2::thread_tmp_1536_cast_fu_19060_p1() {
    tmp_1536_cast_fu_19060_p1 = esl_sext<64,13>(tmp_1089_reg_32244.read());
}

void ShuffleNetV2::thread_tmp_153_cast1_fu_7950_p1() {
    tmp_153_cast1_fu_7950_p1 = esl_zext<9,2>(h21_reg_3158.read());
}

void ShuffleNetV2::thread_tmp_153_cast_fu_7954_p1() {
    tmp_153_cast_fu_7954_p1 = esl_zext<15,2>(h21_reg_3158.read());
}

void ShuffleNetV2::thread_tmp_153_fu_11210_p1() {
    tmp_153_fu_11210_p1 = i35_reg_3895.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1545_cast_fu_19316_p1() {
    tmp_1545_cast_fu_19316_p1 = esl_sext<13,12>(tmp_1095_fu_19310_p2.read());
}

void ShuffleNetV2::thread_tmp_1546_cast_fu_19325_p1() {
    tmp_1546_cast_fu_19325_p1 = esl_sext<15,13>(tmp_1096_fu_19320_p2.read());
}

void ShuffleNetV2::thread_tmp_1549_cast_fu_19393_p1() {
    tmp_1549_cast_fu_19393_p1 = esl_zext<64,15>(tmp_1098_reg_32369.read());
}

void ShuffleNetV2::thread_tmp_154_fu_8152_p2() {
    tmp_154_fu_8152_p2 = (!i10_cast_fu_8136_p1.read().is_01() || !ap_const_lv8_78.is_01())? sc_lv<8>(): (sc_biguint<8>(i10_cast_fu_8136_p1.read()) + sc_biguint<8>(ap_const_lv8_78));
}

void ShuffleNetV2::thread_tmp_1552_cast_fu_19376_p1() {
    tmp_1552_cast_fu_19376_p1 = esl_sext<36,35>(tmp_1101_fu_19370_p2.read());
}

void ShuffleNetV2::thread_tmp_1556_cast_fu_19414_p1() {
    tmp_1556_cast_fu_19414_p1 = esl_zext<64,10>(tmp_1106_reg_32389.read());
}

void ShuffleNetV2::thread_tmp_1558_cast_fu_19900_p1() {
    tmp_1558_cast_fu_19900_p1 = esl_zext<10,9>(tmp_1107_fu_19892_p3.read());
}

void ShuffleNetV2::thread_tmp_155_fu_8158_p1() {
    tmp_155_fu_8158_p1 = esl_zext<64,8>(tmp_154_fu_8152_p2.read());
}

void ShuffleNetV2::thread_tmp_1565_cast_fu_19764_p1() {
    tmp_1565_cast_fu_19764_p1 = esl_sext<18,17>(tmp_1112_fu_19758_p2.read());
}

void ShuffleNetV2::thread_tmp_1566_cast_fu_19773_p1() {
    tmp_1566_cast_fu_19773_p1 = esl_sext<64,18>(tmp_1113_fu_19768_p2.read());
}

void ShuffleNetV2::thread_tmp_156_fu_8163_p1() {
    tmp_156_fu_8163_p1 = esl_zext<64,5>(i10_reg_3203.read());
}

void ShuffleNetV2::thread_tmp_1574_cast_fu_19778_p1() {
    tmp_1574_cast_fu_19778_p1 = esl_sext<64,13>(tmp_1117_reg_32490.read());
}

void ShuffleNetV2::thread_tmp_1576_cast_fu_19993_p1() {
    tmp_1576_cast_fu_19993_p1 = esl_zext<11,10>(tmp_1118_fu_19985_p3.read());
}

void ShuffleNetV2::thread_tmp_1578_cast_fu_20005_p1() {
    tmp_1578_cast_fu_20005_p1 = esl_zext<10,9>(tmp_1119_fu_19997_p3.read());
}

void ShuffleNetV2::thread_tmp_157_cast1_fu_8109_p1() {
    tmp_157_cast1_fu_8109_p1 = esl_zext<11,5>(ci12_reg_3192.read());
}

void ShuffleNetV2::thread_tmp_157_cast_fu_8113_p1() {
    tmp_157_cast_fu_8113_p1 = esl_zext<14,5>(ci12_reg_3192.read());
}

void ShuffleNetV2::thread_tmp_157_fu_11835_p1() {
    tmp_157_fu_11835_p1 = co64_reg_3994.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1581_cast_fu_19933_p1() {
    tmp_1581_cast_fu_19933_p1 = esl_zext<14,13>(tmp_1121_fu_19925_p3.read());
}

void ShuffleNetV2::thread_tmp_1586_cast_fu_20034_p3() {
    tmp_1586_cast_fu_20034_p3 = esl_concat<11,3>(tmp_1123_fu_20029_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1589_cast_fu_20047_p3() {
    tmp_1589_cast_fu_20047_p3 = esl_concat<10,3>(tmp_1124_fu_20042_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_158_fu_8184_p2() {
    tmp_158_fu_8184_p2 = (!co26_cast_fu_8168_p1.read().is_01() || !ap_const_lv6_18.is_01())? sc_lv<6>(): (sc_biguint<6>(co26_cast_fu_8168_p1.read()) + sc_biguint<6>(ap_const_lv6_18));
}

void ShuffleNetV2::thread_tmp_1590_cast_fu_19958_p1() {
    tmp_1590_cast_fu_19958_p1 = esl_zext<64,14>(tmp_1125_fu_19953_p2.read());
}

void ShuffleNetV2::thread_tmp_1591_cast_fu_20080_p1() {
    tmp_1591_cast_fu_20080_p1 = esl_zext<64,14>(tmp_1126_fu_20075_p2.read());
}

void ShuffleNetV2::thread_tmp_1592_cast_fu_20090_p1() {
    tmp_1592_cast_fu_20090_p1 = esl_zext<64,13>(tmp_1127_reg_32634.read());
}

void ShuffleNetV2::thread_tmp_159_fu_8315_p2() {
    tmp_159_fu_8315_p2 = (!co29_cast_fu_8299_p1.read().is_01() || !ap_const_lv7_48.is_01())? sc_lv<7>(): (sc_biguint<7>(co29_cast_fu_8299_p1.read()) + sc_bigint<7>(ap_const_lv7_48));
}

void ShuffleNetV2::thread_tmp_1601_cast_fu_20350_p1() {
    tmp_1601_cast_fu_20350_p1 = esl_sext<18,17>(tmp_1134_fu_20344_p2.read());
}

void ShuffleNetV2::thread_tmp_1602_cast_fu_20359_p1() {
    tmp_1602_cast_fu_20359_p1 = esl_sext<64,18>(tmp_1135_fu_20354_p2.read());
}

void ShuffleNetV2::thread_tmp_160_cast1_fu_8226_p1() {
    tmp_160_cast1_fu_8226_p1 = esl_zext<11,5>(h26_reg_3226.read());
}

void ShuffleNetV2::thread_tmp_160_cast_fu_8230_p1() {
    tmp_160_cast_fu_8230_p1 = esl_zext<10,5>(h26_reg_3226.read());
}

void ShuffleNetV2::thread_tmp_160_fu_11753_p1() {
    tmp_160_fu_11753_p1 = k4_reg_3983.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1610_cast_fu_20364_p1() {
    tmp_1610_cast_fu_20364_p1 = esl_sext<64,13>(tmp_1139_reg_32694.read());
}

void ShuffleNetV2::thread_tmp_1618_cast_fu_20612_p1() {
    tmp_1618_cast_fu_20612_p1 = esl_sext<14,13>(tmp_1144_fu_20606_p2.read());
}

void ShuffleNetV2::thread_tmp_1619_cast_fu_20621_p1() {
    tmp_1619_cast_fu_20621_p1 = esl_sext<15,14>(tmp_1145_fu_20616_p2.read());
}

void ShuffleNetV2::thread_tmp_161_fu_8440_p2() {
    tmp_161_fu_8440_p2 = (!i11_cast_fu_8424_p1.read().is_01() || !ap_const_lv8_90.is_01())? sc_lv<8>(): (sc_biguint<8>(i11_cast_fu_8424_p1.read()) + sc_bigint<8>(ap_const_lv8_90));
}

void ShuffleNetV2::thread_tmp_1622_cast_fu_20693_p1() {
    tmp_1622_cast_fu_20693_p1 = esl_zext<64,15>(tmp_1148_reg_32819.read());
}

void ShuffleNetV2::thread_tmp_1625_cast_fu_20676_p1() {
    tmp_1625_cast_fu_20676_p1 = esl_sext<36,35>(tmp_1151_fu_20670_p2.read());
}

void ShuffleNetV2::thread_tmp_1629_cast_fu_20714_p1() {
    tmp_1629_cast_fu_20714_p1 = esl_zext<64,10>(tmp_1156_reg_32839.read());
}

void ShuffleNetV2::thread_tmp_162_fu_8446_p1() {
    tmp_162_fu_8446_p1 = esl_zext<64,8>(tmp_161_fu_8440_p2.read());
}

void ShuffleNetV2::thread_tmp_1631_cast_fu_21212_p1() {
    tmp_1631_cast_fu_21212_p1 = esl_zext<10,9>(tmp_1157_fu_21204_p3.read());
}

void ShuffleNetV2::thread_tmp_163_fu_8451_p1() {
    tmp_163_fu_8451_p1 = esl_zext<64,5>(i11_reg_3270.read());
}

void ShuffleNetV2::thread_tmp_1640_cast_fu_21072_p1() {
    tmp_1640_cast_fu_21072_p1 = esl_sext<18,17>(tmp_1164_fu_21066_p2.read());
}

void ShuffleNetV2::thread_tmp_1641_cast_fu_21081_p1() {
    tmp_1641_cast_fu_21081_p1 = esl_sext<64,18>(tmp_1165_fu_21076_p2.read());
}

void ShuffleNetV2::thread_tmp_1649_cast_fu_21086_p1() {
    tmp_1649_cast_fu_21086_p1 = esl_sext<64,13>(tmp_1169_reg_32940.read());
}

void ShuffleNetV2::thread_tmp_164_cast1_fu_8397_p1() {
    tmp_164_cast1_fu_8397_p1 = esl_zext<11,5>(ci14_reg_3259.read());
}

void ShuffleNetV2::thread_tmp_164_cast_fu_8401_p1() {
    tmp_164_cast_fu_8401_p1 = esl_zext<14,5>(ci14_reg_3259.read());
}

void ShuffleNetV2::thread_tmp_164_fu_11545_p1() {
    tmp_164_fu_11545_p1 = i40_reg_3961.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1651_cast_fu_21305_p1() {
    tmp_1651_cast_fu_21305_p1 = esl_zext<11,10>(tmp_1170_fu_21297_p3.read());
}

void ShuffleNetV2::thread_tmp_1653_cast_fu_21317_p1() {
    tmp_1653_cast_fu_21317_p1 = esl_zext<10,9>(tmp_1171_fu_21309_p3.read());
}

void ShuffleNetV2::thread_tmp_1656_cast_fu_21245_p1() {
    tmp_1656_cast_fu_21245_p1 = esl_zext<14,13>(tmp_1173_fu_21237_p3.read());
}

void ShuffleNetV2::thread_tmp_165_cast1_fu_8272_p1() {
    tmp_165_cast1_fu_8272_p1 = esl_zext<15,5>(w26_reg_3237.read());
}

void ShuffleNetV2::thread_tmp_165_cast_fu_8276_p1() {
    tmp_165_cast_fu_8276_p1 = esl_zext<14,5>(w26_reg_3237.read());
}

void ShuffleNetV2::thread_tmp_165_fu_11628_p3() {
    tmp_165_fu_11628_p3 = esl_concat<11,2>(tmp_709_fu_11619_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1661_cast_fu_21346_p3() {
    tmp_1661_cast_fu_21346_p3 = esl_concat<11,3>(tmp_1175_fu_21341_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1664_cast_fu_21359_p3() {
    tmp_1664_cast_fu_21359_p3 = esl_concat<10,3>(tmp_1176_fu_21354_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1665_cast_fu_21270_p1() {
    tmp_1665_cast_fu_21270_p1 = esl_zext<64,14>(tmp_1177_fu_21265_p2.read());
}

void ShuffleNetV2::thread_tmp_1666_cast_fu_21392_p1() {
    tmp_1666_cast_fu_21392_p1 = esl_zext<64,14>(tmp_1178_fu_21387_p2.read());
}

void ShuffleNetV2::thread_tmp_1667_cast_fu_21402_p1() {
    tmp_1667_cast_fu_21402_p1 = esl_zext<64,13>(tmp_1179_reg_33084.read());
}

void ShuffleNetV2::thread_tmp_166_fu_8472_p2() {
    tmp_166_fu_8472_p2 = (!co31_cast_fu_8456_p1.read().is_01() || !ap_const_lv7_30.is_01())? sc_lv<7>(): (sc_biguint<7>(co31_cast_fu_8456_p1.read()) + sc_biguint<7>(ap_const_lv7_30));
}

void ShuffleNetV2::thread_tmp_1676_cast_fu_21662_p1() {
    tmp_1676_cast_fu_21662_p1 = esl_sext<18,17>(tmp_1186_fu_21656_p2.read());
}

void ShuffleNetV2::thread_tmp_1677_cast_fu_21671_p1() {
    tmp_1677_cast_fu_21671_p1 = esl_sext<64,18>(tmp_1187_fu_21666_p2.read());
}

void ShuffleNetV2::thread_tmp_167_cast_fu_8478_p1() {
    tmp_167_cast_fu_8478_p1 = esl_zext<10,7>(tmp_166_fu_8472_p2.read());
}

void ShuffleNetV2::thread_tmp_167_fu_11688_p1() {
    tmp_167_fu_11688_p1 = tmp_733_fu_11683_p2.read().range(10-1, 0);
}

void ShuffleNetV2::thread_tmp_1685_cast_fu_21676_p1() {
    tmp_1685_cast_fu_21676_p1 = esl_sext<64,13>(tmp_1191_reg_33144.read());
}

void ShuffleNetV2::thread_tmp_168_cast_fu_8500_p1() {
    tmp_168_cast_fu_8500_p1 = esl_zext<8,5>(co31_reg_3282.read());
}

void ShuffleNetV2::thread_tmp_168_fu_11692_p1() {
    tmp_168_fu_11692_p1 = tmp_733_fu_11683_p2.read().range(8-1, 0);
}

void ShuffleNetV2::thread_tmp_1694_cast_fu_21933_p1() {
    tmp_1694_cast_fu_21933_p1 = esl_sext<15,13>(tmp_1197_fu_21928_p2.read());
}

void ShuffleNetV2::thread_tmp_1697_cast_fu_22001_p1() {
    tmp_1697_cast_fu_22001_p1 = esl_zext<64,15>(tmp_1199_reg_33269.read());
}

void ShuffleNetV2::thread_tmp_169_fu_8645_p2() {
    tmp_169_fu_8645_p2 = (!i12_cast_fu_8629_p1.read().is_01() || !ap_const_lv8_A8.is_01())? sc_lv<8>(): (sc_biguint<8>(i12_cast_fu_8629_p1.read()) + sc_bigint<8>(ap_const_lv8_A8));
}

void ShuffleNetV2::thread_tmp_1700_cast_fu_21984_p1() {
    tmp_1700_cast_fu_21984_p1 = esl_sext<36,35>(tmp_1202_fu_21978_p2.read());
}

void ShuffleNetV2::thread_tmp_1704_cast_fu_22022_p1() {
    tmp_1704_cast_fu_22022_p1 = esl_zext<64,10>(tmp_1207_reg_33289.read());
}

void ShuffleNetV2::thread_tmp_1706_cast_fu_22524_p1() {
    tmp_1706_cast_fu_22524_p1 = esl_zext<10,9>(tmp_1208_fu_22516_p3.read());
}

void ShuffleNetV2::thread_tmp_170_fu_8651_p1() {
    tmp_170_fu_8651_p1 = esl_zext<64,8>(tmp_169_fu_8645_p2.read());
}

void ShuffleNetV2::thread_tmp_1713_cast_fu_22384_p1() {
    tmp_1713_cast_fu_22384_p1 = esl_sext<19,18>(tmp_1213_fu_22378_p2.read());
}

void ShuffleNetV2::thread_tmp_1714_cast_fu_22393_p1() {
    tmp_1714_cast_fu_22393_p1 = esl_sext<64,19>(tmp_1214_fu_22388_p2.read());
}

void ShuffleNetV2::thread_tmp_171_fu_8656_p1() {
    tmp_171_fu_8656_p1 = esl_zext<64,5>(i12_reg_3315.read());
}

void ShuffleNetV2::thread_tmp_1722_cast_fu_22398_p1() {
    tmp_1722_cast_fu_22398_p1 = esl_sext<64,13>(tmp_1218_reg_33390.read());
}

void ShuffleNetV2::thread_tmp_1727_cast_fu_22557_p1() {
    tmp_1727_cast_fu_22557_p1 = esl_zext<14,13>(tmp_1222_fu_22549_p3.read());
}

void ShuffleNetV2::thread_tmp_1728_cast_fu_22582_p1() {
    tmp_1728_cast_fu_22582_p1 = esl_zext<64,14>(tmp_1223_fu_22577_p2.read());
}

void ShuffleNetV2::thread_tmp_172_cast1_fu_8538_p1() {
    tmp_172_cast1_fu_8538_p1 = esl_zext<9,2>(w28_reg_3293.read());
}

void ShuffleNetV2::thread_tmp_172_cast_fu_8542_p1() {
    tmp_172_cast_fu_8542_p1 = esl_zext<10,2>(w28_reg_3293.read());
}

void ShuffleNetV2::thread_tmp_172_fu_12121_p1() {
    tmp_172_fu_12121_p1 = k5_reg_4038.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1735_cast_fu_22823_p1() {
    tmp_1735_cast_fu_22823_p1 = esl_sext<19,18>(tmp_1228_fu_22817_p2.read());
}

void ShuffleNetV2::thread_tmp_1736_cast_fu_22832_p1() {
    tmp_1736_cast_fu_22832_p1 = esl_sext<64,19>(tmp_1229_fu_22827_p2.read());
}

void ShuffleNetV2::thread_tmp_173_cast1_fu_8602_p1() {
    tmp_173_cast1_fu_8602_p1 = esl_zext<9,2>(h28_reg_3304.read());
}

void ShuffleNetV2::thread_tmp_173_cast_fu_8606_p1() {
    tmp_173_cast_fu_8606_p1 = esl_zext<15,2>(h28_reg_3304.read());
}

void ShuffleNetV2::thread_tmp_173_fu_11924_p1() {
    tmp_173_fu_11924_p1 = i42_reg_4016.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1743_cast_fu_22837_p1() {
    tmp_1743_cast_fu_22837_p1 = esl_sext<64,15>(tmp_1234_reg_33540.read());
}

void ShuffleNetV2::thread_tmp_174_fu_8800_p3() {
    tmp_174_fu_8800_p3 = esl_concat<2,5>(ap_const_lv2_2, i13_reg_3349.read());
}

void ShuffleNetV2::thread_tmp_1752_cast_fu_23094_p1() {
    tmp_1752_cast_fu_23094_p1 = esl_sext<15,13>(tmp_1241_fu_23089_p2.read());
}

void ShuffleNetV2::thread_tmp_1755_cast_fu_23162_p1() {
    tmp_1755_cast_fu_23162_p1 = esl_zext<64,15>(tmp_1243_reg_33665.read());
}

void ShuffleNetV2::thread_tmp_1758_cast_fu_23145_p1() {
    tmp_1758_cast_fu_23145_p1 = esl_sext<36,35>(tmp_1246_fu_23139_p2.read());
}

void ShuffleNetV2::thread_tmp_175_fu_8812_p1() {
    tmp_175_fu_8812_p1 = esl_zext<64,8>(tmp_238_cast_fu_8808_p1.read());
}

void ShuffleNetV2::thread_tmp_1762_cast_fu_23183_p1() {
    tmp_1762_cast_fu_23183_p1 = esl_zext<64,11>(tmp_1251_reg_33685.read());
}

void ShuffleNetV2::thread_tmp_1769_cast_fu_23525_p1() {
    tmp_1769_cast_fu_23525_p1 = esl_sext<19,18>(tmp_1256_fu_23519_p2.read());
}

void ShuffleNetV2::thread_tmp_176_fu_8817_p1() {
    tmp_176_fu_8817_p1 = esl_zext<64,5>(i13_reg_3349.read());
}

void ShuffleNetV2::thread_tmp_1770_cast_fu_23534_p1() {
    tmp_1770_cast_fu_23534_p1 = esl_sext<64,19>(tmp_1257_fu_23529_p2.read());
}

void ShuffleNetV2::thread_tmp_1777_cast_fu_23539_p1() {
    tmp_1777_cast_fu_23539_p1 = esl_sext<64,15>(tmp_1262_reg_33786.read());
}

void ShuffleNetV2::thread_tmp_177_cast1_fu_8761_p1() {
    tmp_177_cast1_fu_8761_p1 = esl_zext<11,5>(ci16_reg_3338.read());
}

void ShuffleNetV2::thread_tmp_177_cast_fu_8765_p1() {
    tmp_177_cast_fu_8765_p1 = esl_zext<14,5>(ci16_reg_3338.read());
}

void ShuffleNetV2::thread_tmp_177_fu_12334_p1() {
    tmp_177_fu_12334_p1 = co68_reg_4082.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1786_cast_fu_23800_p1() {
    tmp_1786_cast_fu_23800_p1 = esl_sext<15,13>(tmp_1269_fu_23795_p2.read());
}

void ShuffleNetV2::thread_tmp_1789_cast_fu_23868_p1() {
    tmp_1789_cast_fu_23868_p1 = esl_zext<64,15>(tmp_1271_reg_33911.read());
}

void ShuffleNetV2::thread_tmp_178_fu_8921_p2() {
    tmp_178_fu_8921_p2 = (!co36_cast_fu_8905_p1.read().is_01() || !ap_const_lv6_18.is_01())? sc_lv<6>(): (sc_biguint<6>(co36_cast_fu_8905_p1.read()) + sc_biguint<6>(ap_const_lv6_18));
}

void ShuffleNetV2::thread_tmp_1792_cast_fu_23851_p1() {
    tmp_1792_cast_fu_23851_p1 = esl_sext<36,35>(tmp_1274_fu_23845_p2.read());
}

void ShuffleNetV2::thread_tmp_1796_cast_fu_23889_p1() {
    tmp_1796_cast_fu_23889_p1 = esl_zext<64,11>(tmp_1279_reg_33931.read());
}

void ShuffleNetV2::thread_tmp_1798_cast_fu_24373_p1() {
    tmp_1798_cast_fu_24373_p1 = esl_zext<11,10>(tmp_1280_fu_24365_p3.read());
}

void ShuffleNetV2::thread_tmp_179_cast1_fu_8858_p1() {
    tmp_179_cast1_fu_8858_p1 = esl_zext<10,5>(h30_reg_3372.read());
}

void ShuffleNetV2::thread_tmp_179_cast_fu_7394_p1() {
    tmp_179_cast_fu_7394_p1 = esl_sext<12,10>(tmp_127_fu_7388_p2.read());
}

void ShuffleNetV2::thread_tmp_179_fu_12616_p1() {
    tmp_179_fu_12616_p1 = k6_reg_4126.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1800_cast_fu_24385_p1() {
    tmp_1800_cast_fu_24385_p1 = esl_zext<10,9>(tmp_1281_fu_24377_p3.read());
}

void ShuffleNetV2::thread_tmp_1807_cast_fu_24227_p1() {
    tmp_1807_cast_fu_24227_p1 = esl_sext<19,18>(tmp_1286_fu_24221_p2.read());
}

void ShuffleNetV2::thread_tmp_1808_cast_fu_24236_p1() {
    tmp_1808_cast_fu_24236_p1 = esl_sext<64,19>(tmp_1287_fu_24231_p2.read());
}

void ShuffleNetV2::thread_tmp_180_fu_9052_p2() {
    tmp_180_fu_9052_p2 = (!co38_cast_fu_9036_p1.read().is_01() || !ap_const_lv8_78.is_01())? sc_lv<8>(): (sc_biguint<8>(co38_cast_fu_9036_p1.read()) + sc_biguint<8>(ap_const_lv8_78));
}

void ShuffleNetV2::thread_tmp_1815_cast_fu_24241_p1() {
    tmp_1815_cast_fu_24241_p1 = esl_sext<64,15>(tmp_1292_reg_34032.read());
}

void ShuffleNetV2::thread_tmp_181_cast1_fu_8963_p1() {
    tmp_181_cast1_fu_8963_p1 = esl_zext<11,5>(h31_reg_3405.read());
}

void ShuffleNetV2::thread_tmp_181_cast_fu_8967_p1() {
    tmp_181_cast_fu_8967_p1 = esl_zext<10,5>(h31_reg_3405.read());
}

void ShuffleNetV2::thread_tmp_181_fu_12423_p1() {
    tmp_181_fu_12423_p1 = i46_reg_4104.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1820_cast_fu_24414_p3() {
    tmp_1820_cast_fu_24414_p3 = esl_concat<11,2>(tmp_1295_fu_24409_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1823_cast_fu_24427_p3() {
    tmp_1823_cast_fu_24427_p3 = esl_concat<10,2>(tmp_1296_fu_24422_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1824_cast_fu_24460_p1() {
    tmp_1824_cast_fu_24460_p1 = esl_zext<64,13>(tmp_1297_fu_24455_p2.read());
}

void ShuffleNetV2::thread_tmp_1825_cast_fu_24470_p1() {
    tmp_1825_cast_fu_24470_p1 = esl_zext<64,12>(tmp_1298_reg_34132.read());
}

void ShuffleNetV2::thread_tmp_182_cast_fu_8891_p1() {
    tmp_182_cast_fu_8891_p1 = esl_zext<15,5>(w30_reg_3383.read());
}

void ShuffleNetV2::thread_tmp_182_fu_13048_p1() {
    tmp_182_fu_13048_p1 = co72_reg_4203.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1832_cast_fu_24710_p1() {
    tmp_1832_cast_fu_24710_p1 = esl_sext<19,18>(tmp_1303_fu_24704_p2.read());
}

void ShuffleNetV2::thread_tmp_1833_cast_fu_24719_p1() {
    tmp_1833_cast_fu_24719_p1 = esl_sext<64,19>(tmp_1304_fu_24714_p2.read());
}

void ShuffleNetV2::thread_tmp_183_fu_9177_p2() {
    tmp_183_fu_9177_p2 = (!i15_cast706_cast_fu_9161_p1.read().is_01() || !ap_const_lv7_58.is_01())? sc_lv<7>(): (sc_biguint<7>(i15_cast706_cast_fu_9161_p1.read()) + sc_bigint<7>(ap_const_lv7_58));
}

void ShuffleNetV2::thread_tmp_1840_cast_fu_24724_p1() {
    tmp_1840_cast_fu_24724_p1 = esl_sext<64,15>(tmp_1309_reg_34192.read());
}

void ShuffleNetV2::thread_tmp_1849_cast_fu_24977_p1() {
    tmp_1849_cast_fu_24977_p1 = esl_sext<15,13>(tmp_1316_fu_24972_p2.read());
}

void ShuffleNetV2::thread_tmp_184_fu_9187_p1() {
    tmp_184_fu_9187_p1 = esl_zext<64,8>(tmp_251_cast_fu_9183_p1.read());
}

void ShuffleNetV2::thread_tmp_1852_cast_fu_25045_p1() {
    tmp_1852_cast_fu_25045_p1 = esl_zext<64,15>(tmp_1318_reg_34317.read());
}

void ShuffleNetV2::thread_tmp_1855_cast_fu_25028_p1() {
    tmp_1855_cast_fu_25028_p1 = esl_sext<36,35>(tmp_1321_fu_25022_p2.read());
}

void ShuffleNetV2::thread_tmp_1859_cast_fu_25066_p1() {
    tmp_1859_cast_fu_25066_p1 = esl_zext<64,11>(tmp_1326_reg_34337.read());
}

void ShuffleNetV2::thread_tmp_185_fu_9192_p1() {
    tmp_185_fu_9192_p1 = esl_zext<64,5>(i15_reg_3449.read());
}

void ShuffleNetV2::thread_tmp_1861_cast_fu_25548_p1() {
    tmp_1861_cast_fu_25548_p1 = esl_zext<10,9>(tmp_1327_fu_25540_p3.read());
}

void ShuffleNetV2::thread_tmp_186_cast1_fu_9134_p1() {
    tmp_186_cast1_fu_9134_p1 = esl_zext<11,5>(ci18_reg_3438.read());
}

void ShuffleNetV2::thread_tmp_186_cast_fu_9138_p1() {
    tmp_186_cast_fu_9138_p1 = esl_zext<15,5>(ci18_reg_3438.read());
}

void ShuffleNetV2::thread_tmp_186_fu_12966_p1() {
    tmp_186_fu_12966_p1 = k7_reg_4192.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1870_cast_fu_25412_p1() {
    tmp_1870_cast_fu_25412_p1 = esl_sext<19,18>(tmp_1334_fu_25406_p2.read());
}

void ShuffleNetV2::thread_tmp_1871_cast_fu_25421_p1() {
    tmp_1871_cast_fu_25421_p1 = esl_sext<64,19>(tmp_1335_fu_25416_p2.read());
}

void ShuffleNetV2::thread_tmp_1878_cast_fu_25426_p1() {
    tmp_1878_cast_fu_25426_p1 = esl_sext<64,15>(tmp_1340_reg_34438.read());
}

void ShuffleNetV2::thread_tmp_187_cast1_fu_9009_p1() {
    tmp_187_cast1_fu_9009_p1 = esl_zext<15,5>(w32_reg_3416.read());
}

void ShuffleNetV2::thread_tmp_187_cast_fu_9013_p1() {
    tmp_187_cast_fu_9013_p1 = esl_zext<14,5>(w32_reg_3416.read());
}

void ShuffleNetV2::thread_tmp_187_fu_12754_p1() {
    tmp_187_fu_12754_p1 = i52_reg_4170.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1880_cast_fu_25641_p1() {
    tmp_1880_cast_fu_25641_p1 = esl_zext<11,10>(tmp_1341_fu_25633_p3.read());
}

void ShuffleNetV2::thread_tmp_1882_cast_fu_25653_p1() {
    tmp_1882_cast_fu_25653_p1 = esl_zext<10,9>(tmp_1342_fu_25645_p3.read());
}

void ShuffleNetV2::thread_tmp_1885_cast_fu_25581_p1() {
    tmp_1885_cast_fu_25581_p1 = esl_zext<13,12>(tmp_1344_fu_25573_p3.read());
}

void ShuffleNetV2::thread_tmp_188_fu_9213_p2() {
    tmp_188_fu_9213_p2 = (!co41_cast_fu_9197_p1.read().is_01() || !ap_const_lv7_48.is_01())? sc_lv<7>(): (sc_biguint<7>(co41_cast_fu_9197_p1.read()) + sc_bigint<7>(ap_const_lv7_48));
}

void ShuffleNetV2::thread_tmp_1890_cast_fu_25682_p3() {
    tmp_1890_cast_fu_25682_p3 = esl_concat<10,2>(tmp_1347_fu_25677_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1893_cast_fu_25695_p3() {
    tmp_1893_cast_fu_25695_p3 = esl_concat<11,2>(tmp_1348_fu_25690_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1894_cast_fu_25606_p1() {
    tmp_1894_cast_fu_25606_p1 = esl_zext<64,13>(tmp_1349_fu_25601_p2.read());
}

void ShuffleNetV2::thread_tmp_1895_cast_fu_25738_p1() {
    tmp_1895_cast_fu_25738_p1 = esl_zext<64,12>(tmp_1350_reg_34577.read());
}

void ShuffleNetV2::thread_tmp_1896_cast_fu_25733_p1() {
    tmp_1896_cast_fu_25733_p1 = esl_zext<64,13>(tmp_1351_fu_25728_p2.read());
}

void ShuffleNetV2::thread_tmp_189_cast_fu_9219_p1() {
    tmp_189_cast_fu_9219_p1 = esl_zext<10,7>(tmp_188_fu_9213_p2.read());
}

void ShuffleNetV2::thread_tmp_189_fu_12901_p1() {
    tmp_189_fu_12901_p1 = tmp_828_fu_12896_p2.read().range(10-1, 0);
}

void ShuffleNetV2::thread_tmp_1904_cast_fu_25983_p1() {
    tmp_1904_cast_fu_25983_p1 = esl_sext<64,19>(tmp_1357_fu_25978_p2.read());
}

void ShuffleNetV2::thread_tmp_190_cast_fu_9241_p1() {
    tmp_190_cast_fu_9241_p1 = esl_zext<8,5>(co40_reg_3461.read());
}

void ShuffleNetV2::thread_tmp_190_fu_12905_p1() {
    tmp_190_fu_12905_p1 = tmp_828_fu_12896_p2.read().range(8-1, 0);
}

void ShuffleNetV2::thread_tmp_1911_cast_fu_25988_p1() {
    tmp_1911_cast_fu_25988_p1 = esl_sext<64,15>(tmp_1362_reg_34642.read());
}

void ShuffleNetV2::thread_tmp_191_fu_9386_p2() {
    tmp_191_fu_9386_p2 = (!i17_cast_fu_9370_p1.read().is_01() || !ap_const_lv9_F0.is_01())? sc_lv<9>(): (sc_biguint<9>(i17_cast_fu_9370_p1.read()) + sc_biguint<9>(ap_const_lv9_F0));
}

void ShuffleNetV2::thread_tmp_1920_cast_fu_26244_p1() {
    tmp_1920_cast_fu_26244_p1 = esl_sext<14,13>(tmp_1369_fu_26238_p2.read());
}

void ShuffleNetV2::thread_tmp_1921_cast_fu_26253_p1() {
    tmp_1921_cast_fu_26253_p1 = esl_sext<15,14>(tmp_1370_fu_26248_p2.read());
}

void ShuffleNetV2::thread_tmp_1924_cast_fu_26325_p1() {
    tmp_1924_cast_fu_26325_p1 = esl_zext<64,15>(tmp_1373_reg_34767.read());
}

void ShuffleNetV2::thread_tmp_1927_cast_fu_26308_p1() {
    tmp_1927_cast_fu_26308_p1 = esl_sext<36,35>(tmp_1376_fu_26302_p2.read());
}

void ShuffleNetV2::thread_tmp_192_fu_9392_p1() {
    tmp_192_fu_9392_p1 = esl_zext<64,9>(tmp_191_fu_9386_p2.read());
}

void ShuffleNetV2::thread_tmp_1931_cast_fu_26346_p1() {
    tmp_1931_cast_fu_26346_p1 = esl_zext<64,11>(tmp_1381_reg_34787.read());
}

void ShuffleNetV2::thread_tmp_1933_cast_fu_26816_p1() {
    tmp_1933_cast_fu_26816_p1 = esl_zext<10,9>(tmp_1382_fu_26808_p3.read());
}

void ShuffleNetV2::thread_tmp_193_fu_9397_p1() {
    tmp_193_fu_9397_p1 = esl_zext<64,5>(i17_reg_3494.read());
}

void ShuffleNetV2::thread_tmp_1941_cast_fu_26689_p1() {
    tmp_1941_cast_fu_26689_p1 = esl_sext<64,19>(tmp_1388_fu_26684_p2.read());
}

void ShuffleNetV2::thread_tmp_1948_cast_fu_26694_p1() {
    tmp_1948_cast_fu_26694_p1 = esl_sext<64,15>(tmp_1393_reg_34888.read());
}

void ShuffleNetV2::thread_tmp_194_cast1_fu_9279_p1() {
    tmp_194_cast1_fu_9279_p1 = esl_zext<9,2>(w34_reg_3472.read());
}

void ShuffleNetV2::thread_tmp_194_cast_fu_9283_p1() {
    tmp_194_cast_fu_9283_p1 = esl_zext<10,2>(w34_reg_3472.read());
}

void ShuffleNetV2::thread_tmp_194_fu_13330_p1() {
    tmp_194_fu_13330_p1 = k8_reg_4247.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1950_cast_fu_26909_p1() {
    tmp_1950_cast_fu_26909_p1 = esl_zext<11,10>(tmp_1394_fu_26901_p3.read());
}

void ShuffleNetV2::thread_tmp_1952_cast_fu_26921_p1() {
    tmp_1952_cast_fu_26921_p1 = esl_zext<10,9>(tmp_1395_fu_26913_p3.read());
}

void ShuffleNetV2::thread_tmp_1955_cast_fu_26849_p1() {
    tmp_1955_cast_fu_26849_p1 = esl_zext<13,12>(tmp_1397_fu_26841_p3.read());
}

void ShuffleNetV2::thread_tmp_195_fu_9418_p2() {
    tmp_195_fu_9418_p2 = (!co43_cast_fu_9402_p1.read().is_01() || !ap_const_lv8_90.is_01())? sc_lv<8>(): (sc_biguint<8>(co43_cast_fu_9402_p1.read()) + sc_bigint<8>(ap_const_lv8_90));
}

void ShuffleNetV2::thread_tmp_1960_cast_fu_26950_p3() {
    tmp_1960_cast_fu_26950_p3 = esl_concat<11,2>(tmp_1400_fu_26945_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1963_cast_fu_26963_p3() {
    tmp_1963_cast_fu_26963_p3 = esl_concat<10,2>(tmp_1401_fu_26958_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1964_cast_fu_26874_p1() {
    tmp_1964_cast_fu_26874_p1 = esl_zext<64,13>(tmp_1402_fu_26869_p2.read());
}

void ShuffleNetV2::thread_tmp_1965_cast_fu_26996_p1() {
    tmp_1965_cast_fu_26996_p1 = esl_zext<64,13>(tmp_1403_fu_26991_p2.read());
}

void ShuffleNetV2::thread_tmp_1966_cast_fu_27006_p1() {
    tmp_1966_cast_fu_27006_p1 = esl_zext<64,12>(tmp_1404_reg_35032.read());
}

void ShuffleNetV2::thread_tmp_196_cast1_fu_9343_p1() {
    tmp_196_cast1_fu_9343_p1 = esl_zext<9,2>(h33_reg_3483.read());
}

void ShuffleNetV2::thread_tmp_196_cast_fu_9347_p1() {
    tmp_196_cast_fu_9347_p1 = esl_zext<15,2>(h33_reg_3483.read());
}

void ShuffleNetV2::thread_tmp_196_fu_13137_p1() {
    tmp_196_fu_13137_p1 = i54_reg_4225.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1974_cast_fu_27251_p1() {
    tmp_1974_cast_fu_27251_p1 = esl_sext<64,19>(tmp_1410_fu_27246_p2.read());
}

void ShuffleNetV2::thread_tmp_197_fu_9543_p2() {
    tmp_197_fu_9543_p2 = (!i19_cast_fu_9527_p1.read().is_01() || !ap_const_lv9_108.is_01())? sc_lv<9>(): (sc_biguint<9>(i19_cast_fu_9527_p1.read()) + sc_bigint<9>(ap_const_lv9_108));
}

void ShuffleNetV2::thread_tmp_1981_cast_fu_27256_p1() {
    tmp_1981_cast_fu_27256_p1 = esl_sext<64,15>(tmp_1415_reg_35092.read());
}

void ShuffleNetV2::thread_tmp_1989_cast_fu_27504_p1() {
    tmp_1989_cast_fu_27504_p1 = esl_sext<15,14>(tmp_1421_fu_27498_p2.read());
}

void ShuffleNetV2::thread_tmp_198_fu_9549_p1() {
    tmp_198_fu_9549_p1 = esl_zext<64,9>(tmp_197_fu_9543_p2.read());
}

void ShuffleNetV2::thread_tmp_1993_cast_fu_27575_p1() {
    tmp_1993_cast_fu_27575_p1 = esl_zext<64,15>(tmp_1425_reg_35217.read());
}

void ShuffleNetV2::thread_tmp_1996_cast_fu_27558_p1() {
    tmp_1996_cast_fu_27558_p1 = esl_sext<36,35>(tmp_1428_fu_27552_p2.read());
}

void ShuffleNetV2::thread_tmp_199_fu_9554_p1() {
    tmp_199_fu_9554_p1 = esl_zext<64,5>(i19_reg_3528.read());
}

void ShuffleNetV2::thread_tmp_2000_cast_fu_27596_p1() {
    tmp_2000_cast_fu_27596_p1 = esl_zext<64,11>(tmp_1433_reg_35237.read());
}

void ShuffleNetV2::thread_tmp_2002_cast_fu_28066_p1() {
    tmp_2002_cast_fu_28066_p1 = esl_zext<10,9>(tmp_1434_fu_28058_p3.read());
}

void ShuffleNetV2::thread_tmp_200_cast1_fu_9500_p1() {
    tmp_200_cast1_fu_9500_p1 = esl_zext<11,5>(ci20_reg_3517.read());
}

void ShuffleNetV2::thread_tmp_200_cast_fu_9504_p1() {
    tmp_200_cast_fu_9504_p1 = esl_zext<15,5>(ci20_reg_3517.read());
}

void ShuffleNetV2::thread_tmp_200_fu_13441_p3() {
    tmp_200_fu_13441_p3 = esl_concat<10,3>(tmp_864_fu_13436_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_2010_cast_fu_27939_p1() {
    tmp_2010_cast_fu_27939_p1 = esl_sext<64,19>(tmp_1440_fu_27934_p2.read());
}

void ShuffleNetV2::thread_tmp_2017_cast_fu_27944_p1() {
    tmp_2017_cast_fu_27944_p1 = esl_sext<64,15>(tmp_1445_reg_35338.read());
}

void ShuffleNetV2::thread_tmp_2019_cast_fu_28153_p1() {
    tmp_2019_cast_fu_28153_p1 = esl_zext<14,13>(tmp_1446_fu_28145_p3.read());
}

void ShuffleNetV2::thread_tmp_201_fu_9658_p2() {
    tmp_201_fu_9658_p2 = (!co46_cast_fu_9642_p1.read().is_01() || !ap_const_lv6_18.is_01())? sc_lv<6>(): (sc_biguint<6>(co46_cast_fu_9642_p1.read()) + sc_biguint<6>(ap_const_lv6_18));
}

void ShuffleNetV2::thread_tmp_2022_cast_fu_28099_p1() {
    tmp_2022_cast_fu_28099_p1 = esl_zext<13,12>(tmp_1448_fu_28091_p3.read());
}

void ShuffleNetV2::thread_tmp_2023_cast_fu_28183_p1() {
    tmp_2023_cast_fu_28183_p1 = esl_zext<64,14>(tmp_1449_fu_28178_p2.read());
}

void ShuffleNetV2::thread_tmp_2024_cast_fu_28124_p1() {
    tmp_2024_cast_fu_28124_p1 = esl_zext<64,13>(tmp_1450_fu_28119_p2.read());
}

void ShuffleNetV2::thread_tmp_202_cast_fu_9595_p1() {
    tmp_202_cast_fu_9595_p1 = esl_zext<10,5>(h35_reg_3551.read());
}

void ShuffleNetV2::thread_tmp_202_fu_13626_p1() {
    tmp_202_fu_13626_p1 = co78_reg_4324.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_203_cast_fu_7997_p1() {
    tmp_203_cast_fu_7997_p1 = esl_sext<7,6>(tmp_148_fu_7989_p3.read());
}

void ShuffleNetV2::thread_tmp_203_fu_9789_p2() {
    tmp_203_fu_9789_p2 = (!co48_cast_fu_9773_p1.read().is_01() || !ap_const_lv8_A8.is_01())? sc_lv<8>(): (sc_biguint<8>(co48_cast_fu_9773_p1.read()) + sc_bigint<8>(ap_const_lv8_A8));
}

void ShuffleNetV2::thread_tmp_204_cast1_fu_9700_p1() {
    tmp_204_cast1_fu_9700_p1 = esl_zext<11,5>(h37_reg_3584.read());
}

void ShuffleNetV2::thread_tmp_204_cast_fu_9704_p1() {
    tmp_204_cast_fu_9704_p1 = esl_zext<10,5>(h37_reg_3584.read());
}

void ShuffleNetV2::thread_tmp_204_fu_13908_p1() {
    tmp_204_fu_13908_p1 = k9_reg_4368.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_205_cast_fu_9628_p1() {
    tmp_205_cast_fu_9628_p1 = esl_zext<15,5>(w36_reg_3562.read());
}

void ShuffleNetV2::thread_tmp_205_fu_13715_p1() {
    tmp_205_fu_13715_p1 = i58_reg_4346.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_206_fu_9910_p3() {
    tmp_206_fu_9910_p3 = esl_concat<4,5>(ap_const_lv4_9, i21_reg_3628.read());
}

void ShuffleNetV2::thread_tmp_207_fu_9918_p1() {
    tmp_207_fu_9918_p1 = esl_zext<64,9>(tmp_206_fu_9910_p3.read());
}

void ShuffleNetV2::thread_tmp_208_fu_9923_p1() {
    tmp_208_fu_9923_p1 = esl_zext<64,5>(i21_reg_3628.read());
}

void ShuffleNetV2::thread_tmp_209_cast1_fu_9871_p1() {
    tmp_209_cast1_fu_9871_p1 = esl_zext<11,5>(ci22_reg_3617.read());
}

void ShuffleNetV2::thread_tmp_209_cast_fu_9875_p1() {
    tmp_209_cast_fu_9875_p1 = esl_zext<15,5>(ci22_reg_3617.read());
}

void ShuffleNetV2::thread_tmp_209_fu_14340_p1() {
    tmp_209_fu_14340_p1 = co82_reg_4445.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_210_cast1_fu_9746_p1() {
    tmp_210_cast1_fu_9746_p1 = esl_zext<15,5>(w38_reg_3595.read());
}

void ShuffleNetV2::thread_tmp_210_cast_fu_9750_p1() {
    tmp_210_cast_fu_9750_p1 = esl_zext<14,5>(w38_reg_3595.read());
}

void ShuffleNetV2::thread_tmp_210_fu_7420_p3() {
    tmp_210_fu_7420_p3 = esl_concat<5,5>(co9_reg_3023.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_211_fu_9940_p3() {
    tmp_211_fu_9940_p3 = esl_concat<1,5>(ap_const_lv1_1, co50_reg_3640.read());
}

void ShuffleNetV2::thread_tmp_212_cast_fu_9952_p1() {
    tmp_212_cast_fu_9952_p1 = esl_zext<10,7>(tmp_287_cast_fu_9948_p1.read());
}

void ShuffleNetV2::thread_tmp_212_fu_7432_p3() {
    tmp_212_fu_7432_p3 = esl_concat<5,3>(co9_reg_3023.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_213_cast_fu_9984_p1() {
    tmp_213_cast_fu_9984_p1 = esl_zext<8,5>(co50_reg_3640.read());
}

void ShuffleNetV2::thread_tmp_213_fu_7444_p2() {
    tmp_213_fu_7444_p2 = (!p_shl275_cast_fu_7428_p1.read().is_01() || !p_shl276_cast_fu_7440_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl275_cast_fu_7428_p1.read()) - sc_biguint<11>(p_shl276_cast_fu_7440_p1.read()));
}

void ShuffleNetV2::thread_tmp_214_fu_10129_p2() {
    tmp_214_fu_10129_p2 = (!i23_cast_fu_10113_p1.read().is_01() || !ap_const_lv9_138.is_01())? sc_lv<9>(): (sc_biguint<9>(i23_cast_fu_10113_p1.read()) + sc_bigint<9>(ap_const_lv9_138));
}

void ShuffleNetV2::thread_tmp_215_fu_10135_p1() {
    tmp_215_fu_10135_p1 = esl_zext<64,9>(tmp_214_fu_10129_p2.read());
}

void ShuffleNetV2::thread_tmp_216_fu_10140_p1() {
    tmp_216_fu_10140_p1 = esl_zext<64,5>(i23_reg_3673.read());
}

void ShuffleNetV2::thread_tmp_217_cast1_fu_10022_p1() {
    tmp_217_cast1_fu_10022_p1 = esl_zext<9,2>(w40_reg_3651.read());
}

void ShuffleNetV2::thread_tmp_217_cast_fu_10026_p1() {
    tmp_217_cast_fu_10026_p1 = esl_zext<11,2>(w40_reg_3651.read());
}

void ShuffleNetV2::thread_tmp_217_fu_7470_p2() {
    tmp_217_fu_7470_p2 = (!tmp_387_cast_reg_28240.read().is_01() || !tmp_133_cast_fu_7466_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(tmp_387_cast_reg_28240.read()) + sc_biguint<12>(tmp_133_cast_fu_7466_p1.read()));
}

void ShuffleNetV2::thread_tmp_218_cast1_fu_10086_p1() {
    tmp_218_cast1_fu_10086_p1 = esl_zext<9,2>(h39_reg_3662.read());
}

void ShuffleNetV2::thread_tmp_218_cast_fu_10090_p1() {
    tmp_218_cast_fu_10090_p1 = esl_zext<15,2>(h39_reg_3662.read());
}

void ShuffleNetV2::thread_tmp_218_fu_7528_p3() {
    tmp_218_fu_7528_p3 = esl_concat<5,2>(co12_reg_3057.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_219_fu_10288_p2() {
    tmp_219_fu_10288_p2 = (!i25_cast_fu_10272_p1.read().is_01() || !ap_const_lv9_150.is_01())? sc_lv<9>(): (sc_biguint<9>(i25_cast_fu_10272_p1.read()) + sc_bigint<9>(ap_const_lv9_150));
}

void ShuffleNetV2::thread_tmp_220_fu_10294_p1() {
    tmp_220_fu_10294_p1 = esl_zext<64,9>(tmp_219_fu_10288_p2.read());
}

void ShuffleNetV2::thread_tmp_221_fu_10299_p1() {
    tmp_221_fu_10299_p1 = esl_zext<64,5>(i25_reg_3707.read());
}

void ShuffleNetV2::thread_tmp_222_cast1_fu_10245_p1() {
    tmp_222_cast1_fu_10245_p1 = esl_zext<11,5>(ci24_reg_3696.read());
}

void ShuffleNetV2::thread_tmp_222_cast_fu_10249_p1() {
    tmp_222_cast_fu_10249_p1 = esl_zext<15,5>(ci24_reg_3696.read());
}

void ShuffleNetV2::thread_tmp_222_fu_7540_p2() {
    tmp_222_fu_7540_p2 = (!p_shl277_cast_fu_7536_p1.read().is_01() || !tmp_134_cast_fu_7524_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl277_cast_fu_7536_p1.read()) - sc_biguint<8>(tmp_134_cast_fu_7524_p1.read()));
}

void ShuffleNetV2::thread_tmp_223_fu_10431_p2() {
    tmp_223_fu_10431_p2 = (!p_shl_cast_fu_10415_p1.read().is_01() || !p_shl1_cast_fu_10427_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl_cast_fu_10415_p1.read()) - sc_biguint<7>(p_shl1_cast_fu_10427_p1.read()));
}

void ShuffleNetV2::thread_tmp_224_cast_fu_10340_p1() {
    tmp_224_cast_fu_10340_p1 = esl_zext<10,5>(h41_reg_3730.read());
}

void ShuffleNetV2::thread_tmp_224_fu_7566_p2() {
    tmp_224_fu_7566_p2 = (!tmp_138_cast_fu_7562_p1.read().is_01() || !tmp_406_cast_reg_28284.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_138_cast_fu_7562_p1.read()) + sc_bigint<9>(tmp_406_cast_reg_28284.read()));
}

void ShuffleNetV2::thread_tmp_225_cast_fu_10467_p1() {
    tmp_225_cast_fu_10467_p1 = esl_zext<16,5>(ci26_reg_3763.read());
}

void ShuffleNetV2::thread_tmp_225_fu_7587_p2() {
    tmp_225_fu_7587_p2 = (!p_shl278_cast_fu_7583_p1.read().is_01() || !tmp_409_cast1_fu_7571_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_shl278_cast_fu_7583_p1.read()) - sc_bigint<15>(tmp_409_cast1_fu_7571_p1.read()));
}

void ShuffleNetV2::thread_tmp_226_fu_10471_p2() {
    tmp_226_fu_10471_p2 = (!tmp_223_reg_29300.read().is_01() || !ci26_cast_fu_10451_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_223_reg_29300.read()) + sc_biguint<7>(ci26_cast_fu_10451_p1.read()));
}

void ShuffleNetV2::thread_tmp_227_cast_fu_10476_p1() {
    tmp_227_cast_fu_10476_p1 = esl_sext<13,7>(tmp_226_fu_10471_p2.read());
}

void ShuffleNetV2::thread_tmp_227_fu_7673_p3() {
    tmp_227_fu_7673_p3 = esl_concat<6,5>(tmp_139_fu_7667_p2.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_228_cast_fu_10373_p1() {
    tmp_228_cast_fu_10373_p1 = esl_zext<15,5>(w42_reg_3741.read());
}

void ShuffleNetV2::thread_tmp_228_fu_7685_p3() {
    tmp_228_fu_7685_p3 = esl_concat<6,3>(tmp_139_fu_7667_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_229_fu_10713_p2() {
    tmp_229_fu_10713_p2 = (!p_shl2_cast_fu_10697_p1.read().is_01() || !p_shl3_cast_fu_10709_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl2_cast_fu_10697_p1.read()) - sc_biguint<7>(p_shl3_cast_fu_10709_p1.read()));
}

void ShuffleNetV2::thread_tmp_230_fu_10729_p2() {
    tmp_230_fu_10729_p2 = (!i27_cast1_reg_29357.read().is_01() || !tmp2_fu_10723_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(i27_cast1_reg_29357.read()) + sc_biguint<9>(tmp2_fu_10723_p2.read()));
}

void ShuffleNetV2::thread_tmp_231_fu_10739_p1() {
    tmp_231_fu_10739_p1 = esl_zext<64,9>(tmp_230_reg_29378.read());
}

void ShuffleNetV2::thread_tmp_232_fu_10734_p2() {
    tmp_232_fu_10734_p2 = (!tmp_229_fu_10713_p2.read().is_01() || !i27_cast_reg_29352.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_229_fu_10713_p2.read()) + sc_biguint<7>(i27_cast_reg_29352.read()));
}

void ShuffleNetV2::thread_tmp_233_fu_10746_p1() {
    tmp_233_fu_10746_p1 = esl_zext<64,32>(tmp_312_cast_fu_10743_p1.read());
}

void ShuffleNetV2::thread_tmp_234_fu_10520_p2() {
    tmp_234_fu_10520_p2 = (!p_shl4_cast_fu_10504_p1.read().is_01() || !p_shl5_cast_fu_10516_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl4_cast_fu_10504_p1.read()) - sc_biguint<8>(p_shl5_cast_fu_10516_p1.read()));
}

void ShuffleNetV2::thread_tmp_235_fu_10536_p2() {
    tmp_235_fu_10536_p2 = (!tmp1_fu_10530_p2.read().is_01() || !co56_cast_reg_29287.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp1_fu_10530_p2.read()) + sc_biguint<9>(co56_cast_reg_29287.read()));
}

void ShuffleNetV2::thread_tmp_236_fu_10565_p2() {
    tmp_236_fu_10565_p2 = (!p_shl6_cast_fu_10549_p1.read().is_01() || !p_shl7_cast_fu_10561_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl6_cast_fu_10549_p1.read()) - sc_biguint<7>(p_shl7_cast_fu_10561_p1.read()));
}

void ShuffleNetV2::thread_tmp_237_fu_10571_p2() {
    tmp_237_fu_10571_p2 = (!tmp_236_fu_10565_p2.read().is_01() || !tmp_305_cast_reg_29305.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_236_fu_10565_p2.read()) + sc_biguint<7>(tmp_305_cast_reg_29305.read()));
}

void ShuffleNetV2::thread_tmp_238_cast1_fu_10783_p1() {
    tmp_238_cast1_fu_10783_p1 = esl_zext<36,2>(w44_reg_3818.read());
}

void ShuffleNetV2::thread_tmp_238_cast2_fu_10787_p1() {
    tmp_238_cast2_fu_10787_p1 = esl_zext<12,2>(w44_reg_3818.read());
}

void ShuffleNetV2::thread_tmp_238_cast_fu_8808_p1() {
    tmp_238_cast_fu_8808_p1 = esl_sext<8,7>(tmp_174_fu_8800_p3.read());
}

void ShuffleNetV2::thread_tmp_238_fu_7697_p2() {
    tmp_238_fu_7697_p2 = (!p_shl281_cast_fu_7681_p1.read().is_01() || !p_shl282_cast_fu_7693_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(p_shl281_cast_fu_7681_p1.read()) - sc_biguint<12>(p_shl282_cast_fu_7693_p1.read()));
}

void ShuffleNetV2::thread_tmp_239_fu_11149_p2() {
    tmp_239_fu_11149_p2 = (!p_shl10_cast_fu_11133_p1.read().is_01() || !p_shl11_cast_fu_11145_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl10_cast_fu_11133_p1.read()) - sc_biguint<7>(p_shl11_cast_fu_11145_p1.read()));
}

void ShuffleNetV2::thread_tmp_240_fu_11063_p2() {
    tmp_240_fu_11063_p2 = (!p_shl8_cast_fu_11047_p1.read().is_01() || !p_shl9_cast_fu_11059_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl8_cast_fu_11047_p1.read()) - sc_biguint<7>(p_shl9_cast_fu_11059_p1.read()));
}

void ShuffleNetV2::thread_tmp_241_fu_11079_p2() {
    tmp_241_fu_11079_p2 = (!i29_cast648_cast_reg_29497.read().is_01() || !tmp4_fu_11073_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(i29_cast648_cast_reg_29497.read()) + sc_biguint<8>(tmp4_fu_11073_p2.read()));
}

void ShuffleNetV2::thread_tmp_242_fu_11092_p1() {
    tmp_242_fu_11092_p1 = esl_zext<64,9>(tmp_328_cast_fu_11089_p1.read());
}

void ShuffleNetV2::thread_tmp_243_fu_11084_p2() {
    tmp_243_fu_11084_p2 = (!tmp_240_fu_11063_p2.read().is_01() || !i29_cast_reg_29492.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_240_fu_11063_p2.read()) + sc_biguint<7>(i29_cast_reg_29492.read()));
}

void ShuffleNetV2::thread_tmp_244_fu_11100_p1() {
    tmp_244_fu_11100_p1 = esl_zext<64,32>(tmp_330_cast_fu_11097_p1.read());
}

void ShuffleNetV2::thread_tmp_245_cast1_fu_10803_p1() {
    tmp_245_cast1_fu_10803_p1 = esl_zext<10,2>(h43_reg_3829.read());
}

void ShuffleNetV2::thread_tmp_245_cast_fu_10807_p1() {
    tmp_245_cast_fu_10807_p1 = esl_zext<15,2>(h43_reg_3829.read());
}

void ShuffleNetV2::thread_tmp_245_fu_7707_p3() {
    tmp_245_fu_7707_p3 = esl_concat<5,5>(co16_reg_3102.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_246_cast_fu_11185_p1() {
    tmp_246_cast_fu_11185_p1 = esl_zext<16,5>(ci28_reg_3884.read());
}

void ShuffleNetV2::thread_tmp_246_fu_7719_p3() {
    tmp_246_fu_7719_p3 = esl_concat<5,3>(co16_reg_3102.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_247_fu_11189_p2() {
    tmp_247_fu_11189_p2 = (!tmp_239_reg_29546.read().is_01() || !ci28_cast_fu_11169_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_239_reg_29546.read()) + sc_biguint<7>(ci28_cast_fu_11169_p1.read()));
}

void ShuffleNetV2::thread_tmp_248_cast_fu_11194_p1() {
    tmp_248_cast_fu_11194_p1 = esl_sext<13,7>(tmp_247_fu_11189_p2.read());
}

void ShuffleNetV2::thread_tmp_248_fu_7731_p2() {
    tmp_248_fu_7731_p2 = (!p_shl279_cast_fu_7715_p1.read().is_01() || !p_shl280_cast_fu_7727_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl279_cast_fu_7715_p1.read()) - sc_biguint<11>(p_shl280_cast_fu_7727_p1.read()));
}

void ShuffleNetV2::thread_tmp_249_fu_10851_p2() {
    tmp_249_fu_10851_p2 = (!p_shl14_cast_fu_10835_p1.read().is_01() || !p_shl15_cast_fu_10847_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl14_cast_fu_10835_p1.read()) - sc_biguint<7>(p_shl15_cast_fu_10847_p1.read()));
}

void ShuffleNetV2::thread_tmp_250_fu_10867_p2() {
    tmp_250_fu_10867_p2 = (!tmp3_fu_10861_p2.read().is_01() || !co59_cast1_reg_29398.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp3_fu_10861_p2.read()) + sc_biguint<8>(co59_cast1_reg_29398.read()));
}

void ShuffleNetV2::thread_tmp_251_cast1_fu_10877_p1() {
    tmp_251_cast1_fu_10877_p1 = esl_zext<11,8>(tmp_250_reg_29455.read());
}

void ShuffleNetV2::thread_tmp_251_cast_fu_9183_p1() {
    tmp_251_cast_fu_9183_p1 = esl_sext<8,7>(tmp_183_fu_9177_p2.read());
}

void ShuffleNetV2::thread_tmp_251_fu_7609_p2() {
    tmp_251_fu_7609_p2 = (!tmp_225_reg_28297.read().is_01() || !tmp_140_cast_fu_7605_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_225_reg_28297.read()) + sc_biguint<15>(tmp_140_cast_fu_7605_p1.read()));
}

void ShuffleNetV2::thread_tmp_252_fu_10872_p2() {
    tmp_252_fu_10872_p2 = (!co59_cast_reg_29393.read().is_01() || !tmp_249_fu_10851_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(co59_cast_reg_29393.read()) + sc_biguint<7>(tmp_249_fu_10851_p2.read()));
}

void ShuffleNetV2::thread_tmp_253_cast_fu_10936_p1() {
    tmp_253_cast_fu_10936_p1 = esl_zext<35,32>(tmp_349_cast_fu_10933_p1.read());
}

void ShuffleNetV2::thread_tmp_253_fu_7757_p2() {
    tmp_253_fu_7757_p2 = (!tmp_440_cast_reg_28341.read().is_01() || !tmp_144_cast_fu_7753_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(tmp_440_cast_reg_28341.read()) + sc_biguint<13>(tmp_144_cast_fu_7753_p1.read()));
}

void ShuffleNetV2::thread_tmp_254_fu_11431_p2() {
    tmp_254_fu_11431_p2 = (!p_shl12_cast_fu_11415_p1.read().is_01() || !p_shl13_cast_fu_11427_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl12_cast_fu_11415_p1.read()) - sc_biguint<7>(p_shl13_cast_fu_11427_p1.read()));
}

void ShuffleNetV2::thread_tmp_255_fu_11447_p2() {
    tmp_255_fu_11447_p2 = (!i32_cast635_cast_reg_29603.read().is_01() || !tmp6_fu_11441_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(i32_cast635_cast_reg_29603.read()) + sc_biguint<8>(tmp6_fu_11441_p2.read()));
}

void ShuffleNetV2::thread_tmp_256_fu_11460_p1() {
    tmp_256_fu_11460_p1 = esl_zext<64,9>(tmp_338_cast_fu_11457_p1.read());
}

void ShuffleNetV2::thread_tmp_257_fu_11452_p2() {
    tmp_257_fu_11452_p2 = (!tmp_254_fu_11431_p2.read().is_01() || !i32_cast_reg_29598.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_254_fu_11431_p2.read()) + sc_biguint<7>(i32_cast_reg_29598.read()));
}

void ShuffleNetV2::thread_tmp_258_fu_11468_p1() {
    tmp_258_fu_11468_p1 = esl_zext<64,32>(tmp_340_cast_fu_11465_p1.read());
}

void ShuffleNetV2::thread_tmp_259_fu_11238_p2() {
    tmp_259_fu_11238_p2 = (!p_shl16_cast_fu_11222_p1.read().is_01() || !p_shl17_cast_fu_11234_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl16_cast_fu_11222_p1.read()) - sc_biguint<8>(p_shl17_cast_fu_11234_p1.read()));
}

void ShuffleNetV2::thread_tmp_260_fu_11254_p2() {
    tmp_260_fu_11254_p2 = (!tmp5_fu_11248_p2.read().is_01() || !co61_cast_reg_29533.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp5_fu_11248_p2.read()) + sc_biguint<9>(co61_cast_reg_29533.read()));
}

void ShuffleNetV2::thread_tmp_261_fu_11283_p2() {
    tmp_261_fu_11283_p2 = (!p_shl18_cast_fu_11267_p1.read().is_01() || !p_shl19_cast_fu_11279_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl18_cast_fu_11267_p1.read()) - sc_biguint<7>(p_shl19_cast_fu_11279_p1.read()));
}

void ShuffleNetV2::thread_tmp_262_fu_11289_p2() {
    tmp_262_fu_11289_p2 = (!tmp_261_fu_11283_p2.read().is_01() || !tmp_334_cast_reg_29551.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_261_fu_11283_p2.read()) + sc_biguint<7>(tmp_334_cast_reg_29551.read()));
}

void ShuffleNetV2::thread_tmp_263_cast1_fu_11505_p1() {
    tmp_263_cast1_fu_11505_p1 = esl_zext<36,2>(w46_reg_3939.read());
}

void ShuffleNetV2::thread_tmp_263_cast_fu_11509_p1() {
    tmp_263_cast_fu_11509_p1 = esl_zext<11,2>(w46_reg_3939.read());
}

void ShuffleNetV2::thread_tmp_263_fu_7767_p2() {
    tmp_263_fu_7767_p2 = (!tmp_248_reg_28346.read().is_01() || !tmp_144_cast1_fu_7749_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_248_reg_28346.read()) + sc_biguint<11>(tmp_144_cast1_fu_7749_p1.read()));
}

void ShuffleNetV2::thread_tmp_264_fu_11863_p2() {
    tmp_264_fu_11863_p2 = (!p_shl22_cast_fu_11847_p1.read().is_01() || !p_shl23_cast_fu_11859_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl22_cast_fu_11847_p1.read()) - sc_biguint<7>(p_shl23_cast_fu_11859_p1.read()));
}

void ShuffleNetV2::thread_tmp_265_fu_11781_p2() {
    tmp_265_fu_11781_p2 = (!p_shl20_cast_fu_11765_p1.read().is_01() || !p_shl21_cast_fu_11777_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl20_cast_fu_11765_p1.read()) - sc_biguint<7>(p_shl21_cast_fu_11777_p1.read()));
}

void ShuffleNetV2::thread_tmp_266_fu_11797_p2() {
    tmp_266_fu_11797_p2 = (!i37_cast1_reg_29743.read().is_01() || !tmp8_fu_11791_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(i37_cast1_reg_29743.read()) + sc_biguint<10>(tmp8_fu_11791_p2.read()));
}

void ShuffleNetV2::thread_tmp_267_fu_11807_p1() {
    tmp_267_fu_11807_p1 = esl_zext<64,10>(tmp_266_reg_29764.read());
}

void ShuffleNetV2::thread_tmp_268_fu_11802_p2() {
    tmp_268_fu_11802_p2 = (!tmp_265_fu_11781_p2.read().is_01() || !i37_cast_reg_29738.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_265_fu_11781_p2.read()) + sc_biguint<7>(i37_cast_reg_29738.read()));
}

void ShuffleNetV2::thread_tmp_269_fu_11814_p1() {
    tmp_269_fu_11814_p1 = esl_zext<64,32>(tmp_363_cast_fu_11811_p1.read());
}

void ShuffleNetV2::thread_tmp_270_cast1_fu_11525_p1() {
    tmp_270_cast1_fu_11525_p1 = esl_zext<10,2>(h45_reg_3950.read());
}

void ShuffleNetV2::thread_tmp_270_cast_fu_11529_p1() {
    tmp_270_cast_fu_11529_p1 = esl_zext<15,2>(h45_reg_3950.read());
}

void ShuffleNetV2::thread_tmp_270_fu_7834_p3() {
    tmp_270_fu_7834_p3 = esl_concat<6,2>(tmp_145_fu_7824_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_271_cast_fu_11899_p1() {
    tmp_271_cast_fu_11899_p1 = esl_zext<17,5>(ci30_reg_4005.read());
}

void ShuffleNetV2::thread_tmp_271_fu_7846_p2() {
    tmp_271_fu_7846_p2 = (!p_shl284_cast_fu_7842_p1.read().is_01() || !tmp_146_cast_fu_7830_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(p_shl284_cast_fu_7842_p1.read()) - sc_biguint<9>(tmp_146_cast_fu_7830_p1.read()));
}

void ShuffleNetV2::thread_tmp_272_fu_11903_p2() {
    tmp_272_fu_11903_p2 = (!tmp_264_reg_29792.read().is_01() || !ci30_cast_fu_11883_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_264_reg_29792.read()) + sc_biguint<7>(ci30_cast_fu_11883_p1.read()));
}

void ShuffleNetV2::thread_tmp_273_cast_fu_11908_p1() {
    tmp_273_cast_fu_11908_p1 = esl_sext<13,7>(tmp_272_fu_11903_p2.read());
}

void ShuffleNetV2::thread_tmp_273_fu_7856_p3() {
    tmp_273_fu_7856_p3 = esl_concat<5,2>(co19_reg_3136.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_274_fu_11573_p2() {
    tmp_274_fu_11573_p2 = (!p_shl26_cast_fu_11557_p1.read().is_01() || !p_shl27_cast_fu_11569_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl26_cast_fu_11557_p1.read()) - sc_biguint<7>(p_shl27_cast_fu_11569_p1.read()));
}

void ShuffleNetV2::thread_tmp_275_fu_11589_p2() {
    tmp_275_fu_11589_p2 = (!tmp7_fu_11583_p2.read().is_01() || !co63_cast1_reg_29644.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp7_fu_11583_p2.read()) + sc_biguint<8>(co63_cast1_reg_29644.read()));
}

void ShuffleNetV2::thread_tmp_276_cast_fu_11599_p1() {
    tmp_276_cast_fu_11599_p1 = esl_zext<11,8>(tmp_275_reg_29701.read());
}

void ShuffleNetV2::thread_tmp_276_fu_7868_p2() {
    tmp_276_fu_7868_p2 = (!p_shl283_cast_fu_7864_p1.read().is_01() || !tmp_147_cast_fu_7852_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl283_cast_fu_7864_p1.read()) - sc_biguint<8>(tmp_147_cast_fu_7852_p1.read()));
}

void ShuffleNetV2::thread_tmp_277_fu_11594_p2() {
    tmp_277_fu_11594_p2 = (!co63_cast_reg_29639.read().is_01() || !tmp_274_fu_11573_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(co63_cast_reg_29639.read()) + sc_biguint<7>(tmp_274_fu_11573_p2.read()));
}

void ShuffleNetV2::thread_tmp_278_cast_fu_11654_p1() {
    tmp_278_cast_fu_11654_p1 = esl_zext<35,32>(tmp_382_cast_fu_11651_p1.read());
}

void ShuffleNetV2::thread_tmp_278_fu_7894_p2() {
    tmp_278_fu_7894_p2 = (!tmp_271_reg_28390.read().is_01() || !tmp_151_cast_fu_7890_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_271_reg_28390.read()) + sc_biguint<9>(tmp_151_cast_fu_7890_p1.read()));
}

void ShuffleNetV2::thread_tmp_279_fu_12203_p2() {
    tmp_279_fu_12203_p2 = (!co67_cast_fu_12187_p1.read().is_01() || !ap_const_lv7_30.is_01())? sc_lv<7>(): (sc_biguint<7>(co67_cast_fu_12187_p1.read()) + sc_biguint<7>(ap_const_lv7_30));
}

void ShuffleNetV2::thread_tmp_280_fu_12149_p2() {
    tmp_280_fu_12149_p2 = (!p_shl24_cast_fu_12133_p1.read().is_01() || !p_shl25_cast_fu_12145_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl24_cast_fu_12133_p1.read()) - sc_biguint<7>(p_shl25_cast_fu_12145_p1.read()));
}

void ShuffleNetV2::thread_tmp_281_fu_12165_p2() {
    tmp_281_fu_12165_p2 = (!i39_cast1_reg_29849.read().is_01() || !tmp10_fu_12159_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(i39_cast1_reg_29849.read()) + sc_biguint<10>(tmp10_fu_12159_p2.read()));
}

void ShuffleNetV2::thread_tmp_282_fu_12175_p1() {
    tmp_282_fu_12175_p1 = esl_zext<64,10>(tmp_281_reg_29870.read());
}

void ShuffleNetV2::thread_tmp_283_fu_12170_p2() {
    tmp_283_fu_12170_p2 = (!tmp_280_fu_12149_p2.read().is_01() || !i39_cast_reg_29844.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_280_fu_12149_p2.read()) + sc_biguint<7>(i39_cast_reg_29844.read()));
}

void ShuffleNetV2::thread_tmp_284_fu_12182_p1() {
    tmp_284_fu_12182_p1 = esl_zext<64,32>(tmp_373_cast_fu_12179_p1.read());
}

void ShuffleNetV2::thread_tmp_285_fu_11952_p2() {
    tmp_285_fu_11952_p2 = (!p_shl30_cast_fu_11936_p1.read().is_01() || !p_shl31_cast_fu_11948_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl30_cast_fu_11936_p1.read()) - sc_biguint<8>(p_shl31_cast_fu_11948_p1.read()));
}

void ShuffleNetV2::thread_tmp_286_fu_11972_p2() {
    tmp_286_fu_11972_p2 = (!tmp9_cast_fu_11968_p1.read().is_01() || !co65_cast_reg_29779.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp9_cast_fu_11968_p1.read()) + sc_biguint<10>(co65_cast_reg_29779.read()));
}

void ShuffleNetV2::thread_tmp_287_cast_fu_9948_p1() {
    tmp_287_cast_fu_9948_p1 = esl_sext<7,6>(tmp_211_fu_9940_p3.read());
}

void ShuffleNetV2::thread_tmp_287_fu_12001_p2() {
    tmp_287_fu_12001_p2 = (!p_shl32_cast_fu_11985_p1.read().is_01() || !p_shl33_cast_fu_11997_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl32_cast_fu_11985_p1.read()) - sc_biguint<7>(p_shl33_cast_fu_11997_p1.read()));
}

void ShuffleNetV2::thread_tmp_288_fu_12007_p2() {
    tmp_288_fu_12007_p2 = (!tmp_287_fu_12001_p2.read().is_01() || !tmp_367_cast_reg_29797.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_287_fu_12001_p2.read()) + sc_biguint<7>(tmp_367_cast_reg_29797.read()));
}

void ShuffleNetV2::thread_tmp_289_fu_12362_p2() {
    tmp_289_fu_12362_p2 = (!p_shl28_cast_fu_12346_p1.read().is_01() || !p_shl29_cast_fu_12358_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl28_cast_fu_12346_p1.read()) - sc_biguint<7>(p_shl29_cast_fu_12358_p1.read()));
}

void ShuffleNetV2::thread_tmp_290_cast1_fu_12245_p1() {
    tmp_290_cast1_fu_12245_p1 = esl_zext<10,4>(h47_reg_4060.read());
}

void ShuffleNetV2::thread_tmp_290_cast_fu_12249_p1() {
    tmp_290_cast_fu_12249_p1 = esl_zext<11,4>(h47_reg_4060.read());
}

void ShuffleNetV2::thread_tmp_290_fu_7915_p2() {
    tmp_290_fu_7915_p2 = (!p_shl286_cast_fu_7911_p1.read().is_01() || !tmp_534_cast_fu_7899_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_shl286_cast_fu_7911_p1.read()) - sc_bigint<15>(tmp_534_cast_fu_7899_p1.read()));
}

void ShuffleNetV2::thread_tmp_291_cast_fu_12398_p1() {
    tmp_291_cast_fu_12398_p1 = esl_zext<17,5>(ci32_reg_4093.read());
}

void ShuffleNetV2::thread_tmp_291_fu_7921_p2() {
    tmp_291_fu_7921_p2 = (!tmp_526_cast_reg_28395.read().is_01() || !tmp_151_cast_fu_7890_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_526_cast_reg_28395.read()) + sc_biguint<9>(tmp_151_cast_fu_7890_p1.read()));
}

void ShuffleNetV2::thread_tmp_292_fu_12402_p2() {
    tmp_292_fu_12402_p2 = (!tmp_289_reg_29952.read().is_01() || !ci32_cast_fu_12382_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_289_reg_29952.read()) + sc_biguint<7>(ci32_cast_fu_12382_p1.read()));
}

void ShuffleNetV2::thread_tmp_293_cast_fu_12407_p1() {
    tmp_293_cast_fu_12407_p1 = esl_sext<13,7>(tmp_292_fu_12402_p2.read());
}

void ShuffleNetV2::thread_tmp_293_fu_7932_p2() {
    tmp_293_fu_7932_p2 = (!tmp_113_fu_7926_p2.read().is_01() || !tmp_291_fu_7921_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_113_fu_7926_p2.read()) - sc_biguint<9>(tmp_291_fu_7921_p2.read()));
}

void ShuffleNetV2::thread_tmp_294_cast1_fu_12291_p1() {
    tmp_294_cast1_fu_12291_p1 = esl_zext<13,4>(w48_reg_4071.read());
}

void ShuffleNetV2::thread_tmp_294_cast_fu_12295_p1() {
    tmp_294_cast_fu_12295_p1 = esl_zext<14,4>(w48_reg_4071.read());
}

void ShuffleNetV2::thread_tmp_294_fu_8033_p3() {
    tmp_294_fu_8033_p3 = esl_concat<7,5>(tmp_152_fu_8027_p2.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_295_fu_12644_p2() {
    tmp_295_fu_12644_p2 = (!p_shl34_cast_fu_12628_p1.read().is_01() || !p_shl35_cast_fu_12640_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl34_cast_fu_12628_p1.read()) - sc_biguint<7>(p_shl35_cast_fu_12640_p1.read()));
}

void ShuffleNetV2::thread_tmp_296_fu_12660_p2() {
    tmp_296_fu_12660_p2 = (!i45_cast1_reg_30009.read().is_01() || !tmp12_fu_12654_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(i45_cast1_reg_30009.read()) + sc_biguint<10>(tmp12_fu_12654_p2.read()));
}

void ShuffleNetV2::thread_tmp_297_fu_12670_p1() {
    tmp_297_fu_12670_p1 = esl_zext<64,10>(tmp_296_reg_30030.read());
}

void ShuffleNetV2::thread_tmp_298_fu_12665_p2() {
    tmp_298_fu_12665_p2 = (!tmp_295_fu_12644_p2.read().is_01() || !i45_cast_reg_30004.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_295_fu_12644_p2.read()) + sc_biguint<7>(i45_cast_reg_30004.read()));
}

void ShuffleNetV2::thread_tmp_299_fu_12677_p1() {
    tmp_299_fu_12677_p1 = esl_zext<64,32>(tmp_402_cast_fu_12674_p1.read());
}

void ShuffleNetV2::thread_tmp_300_fu_12451_p2() {
    tmp_300_fu_12451_p2 = (!p_shl36_cast_fu_12435_p1.read().is_01() || !p_shl37_cast_fu_12447_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl36_cast_fu_12435_p1.read()) - sc_biguint<8>(p_shl37_cast_fu_12447_p1.read()));
}

void ShuffleNetV2::thread_tmp_301_fu_12467_p2() {
    tmp_301_fu_12467_p2 = (!tmp11_fu_12461_p2.read().is_01() || !co68_cast_reg_29939.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp11_fu_12461_p2.read()) + sc_biguint<10>(co68_cast_reg_29939.read()));
}

void ShuffleNetV2::thread_tmp_302_fu_12496_p2() {
    tmp_302_fu_12496_p2 = (!p_shl38_cast_fu_12480_p1.read().is_01() || !p_shl39_cast_fu_12492_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl38_cast_fu_12480_p1.read()) - sc_biguint<7>(p_shl39_cast_fu_12492_p1.read()));
}

void ShuffleNetV2::thread_tmp_303_fu_12502_p2() {
    tmp_303_fu_12502_p2 = (!tmp_302_fu_12496_p2.read().is_01() || !tmp_389_cast_reg_29957.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_302_fu_12496_p2.read()) + sc_biguint<7>(tmp_389_cast_reg_29957.read()));
}

void ShuffleNetV2::thread_tmp_304_cast1_fu_12714_p1() {
    tmp_304_cast1_fu_12714_p1 = esl_zext<36,2>(w49_reg_4148.read());
}

void ShuffleNetV2::thread_tmp_304_cast_fu_12718_p1() {
    tmp_304_cast_fu_12718_p1 = esl_zext<13,2>(w49_reg_4148.read());
}

void ShuffleNetV2::thread_tmp_304_fu_8045_p3() {
    tmp_304_fu_8045_p3 = esl_concat<7,3>(tmp_152_fu_8027_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_305_cast_fu_10447_p1() {
    tmp_305_cast_fu_10447_p1 = esl_zext<7,4>(p_lshr_f_cast_fu_10437_p4.read());
}

void ShuffleNetV2::thread_tmp_305_fu_13076_p2() {
    tmp_305_fu_13076_p2 = (!p_shl42_cast_fu_13060_p1.read().is_01() || !p_shl43_cast_fu_13072_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl42_cast_fu_13060_p1.read()) - sc_biguint<7>(p_shl43_cast_fu_13072_p1.read()));
}

void ShuffleNetV2::thread_tmp_306_fu_12994_p2() {
    tmp_306_fu_12994_p2 = (!p_shl40_cast_fu_12978_p1.read().is_01() || !p_shl41_cast_fu_12990_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl40_cast_fu_12978_p1.read()) - sc_biguint<7>(p_shl41_cast_fu_12990_p1.read()));
}

void ShuffleNetV2::thread_tmp_307_fu_13010_p2() {
    tmp_307_fu_13010_p2 = (!i49_cast1_reg_30149.read().is_01() || !tmp14_fu_13004_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(i49_cast1_reg_30149.read()) + sc_biguint<10>(tmp14_fu_13004_p2.read()));
}

void ShuffleNetV2::thread_tmp_308_cast_fu_10719_p1() {
    tmp_308_cast_fu_10719_p1 = esl_sext<9,7>(tmp_229_fu_10713_p2.read());
}

void ShuffleNetV2::thread_tmp_308_fu_13020_p1() {
    tmp_308_fu_13020_p1 = esl_zext<64,10>(tmp_307_reg_30170.read());
}

void ShuffleNetV2::thread_tmp_309_fu_13015_p2() {
    tmp_309_fu_13015_p2 = (!tmp_306_fu_12994_p2.read().is_01() || !i49_cast_reg_30144.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_306_fu_12994_p2.read()) + sc_biguint<7>(i49_cast_reg_30144.read()));
}

void ShuffleNetV2::thread_tmp_310_fu_13027_p1() {
    tmp_310_fu_13027_p1 = esl_zext<64,32>(tmp_420_cast_fu_13024_p1.read());
}

void ShuffleNetV2::thread_tmp_311_cast1_fu_12734_p1() {
    tmp_311_cast1_fu_12734_p1 = esl_zext<10,2>(h49_reg_4159.read());
}

void ShuffleNetV2::thread_tmp_311_cast_fu_12738_p1() {
    tmp_311_cast_fu_12738_p1 = esl_zext<15,2>(h49_reg_4159.read());
}

void ShuffleNetV2::thread_tmp_311_fu_8057_p2() {
    tmp_311_fu_8057_p2 = (!p_shl289_cast_fu_8041_p1.read().is_01() || !p_shl290_cast_fu_8053_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl289_cast_fu_8041_p1.read()) - sc_biguint<13>(p_shl290_cast_fu_8053_p1.read()));
}

void ShuffleNetV2::thread_tmp_312_cast1_fu_13112_p1() {
    tmp_312_cast1_fu_13112_p1 = esl_zext<17,5>(ci34_reg_4214.read());
}

void ShuffleNetV2::thread_tmp_312_cast_fu_10743_p1() {
    tmp_312_cast_fu_10743_p1 = esl_sext<32,7>(tmp_232_reg_29383.read());
}

void ShuffleNetV2::thread_tmp_312_fu_8067_p3() {
    tmp_312_fu_8067_p3 = esl_concat<5,5>(co23_reg_3181.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_313_fu_13116_p2() {
    tmp_313_fu_13116_p2 = (!tmp_305_reg_30198.read().is_01() || !ci34_cast_fu_13096_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_305_reg_30198.read()) + sc_biguint<7>(ci34_cast_fu_13096_p1.read()));
}

void ShuffleNetV2::thread_tmp_314_cast_fu_13121_p1() {
    tmp_314_cast_fu_13121_p1 = esl_sext<13,7>(tmp_313_fu_13116_p2.read());
}

void ShuffleNetV2::thread_tmp_314_fu_8079_p3() {
    tmp_314_fu_8079_p3 = esl_concat<5,3>(co23_reg_3181.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_315_fu_12782_p2() {
    tmp_315_fu_12782_p2 = (!p_shl46_cast_fu_12766_p1.read().is_01() || !p_shl47_cast_fu_12778_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl46_cast_fu_12766_p1.read()) - sc_biguint<7>(p_shl47_cast_fu_12778_p1.read()));
}

void ShuffleNetV2::thread_tmp_316_fu_12802_p2() {
    tmp_316_fu_12802_p2 = (!co71_cast1_reg_30050.read().is_01() || !tmp13_cast_fu_12798_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(co71_cast1_reg_30050.read()) + sc_biguint<9>(tmp13_cast_fu_12798_p1.read()));
}

void ShuffleNetV2::thread_tmp_317_cast_fu_12812_p1() {
    tmp_317_cast_fu_12812_p1 = esl_zext<12,9>(tmp_316_reg_30107.read());
}

void ShuffleNetV2::thread_tmp_317_fu_8091_p2() {
    tmp_317_fu_8091_p2 = (!p_shl287_cast_fu_8075_p1.read().is_01() || !p_shl288_cast_fu_8087_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl287_cast_fu_8075_p1.read()) - sc_biguint<11>(p_shl288_cast_fu_8087_p1.read()));
}

void ShuffleNetV2::thread_tmp_318_fu_12807_p2() {
    tmp_318_fu_12807_p2 = (!tmp_315_fu_12782_p2.read().is_01() || !co71_cast_reg_30045.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_315_fu_12782_p2.read()) + sc_biguint<7>(co71_cast_reg_30045.read()));
}

void ShuffleNetV2::thread_tmp_319_cast1_fu_12867_p1() {
    tmp_319_cast1_fu_12867_p1 = esl_zext<35,32>(tmp_439_cast_fu_12864_p1.read());
}

void ShuffleNetV2::thread_tmp_319_cast_fu_10526_p1() {
    tmp_319_cast_fu_10526_p1 = esl_sext<9,8>(tmp_234_fu_10520_p2.read());
}

void ShuffleNetV2::thread_tmp_319_fu_7958_p2() {
    tmp_319_fu_7958_p2 = (!tmp_290_reg_28408.read().is_01() || !tmp_153_cast_fu_7954_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_290_reg_28408.read()) + sc_biguint<15>(tmp_153_cast_fu_7954_p1.read()));
}

void ShuffleNetV2::thread_tmp_320_fu_13358_p2() {
    tmp_320_fu_13358_p2 = (!p_shl44_cast_fu_13342_p1.read().is_01() || !p_shl45_cast_fu_13354_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl44_cast_fu_13342_p1.read()) - sc_biguint<7>(p_shl45_cast_fu_13354_p1.read()));
}

void ShuffleNetV2::thread_tmp_321_fu_13374_p2() {
    tmp_321_fu_13374_p2 = (!i51_cast1_reg_30255.read().is_01() || !tmp16_fu_13368_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(i51_cast1_reg_30255.read()) + sc_biguint<10>(tmp16_fu_13368_p2.read()));
}

void ShuffleNetV2::thread_tmp_322_fu_13384_p1() {
    tmp_322_fu_13384_p1 = esl_zext<64,10>(tmp_321_reg_30276.read());
}

void ShuffleNetV2::thread_tmp_323_fu_13379_p2() {
    tmp_323_fu_13379_p2 = (!tmp_320_fu_13358_p2.read().is_01() || !i51_cast_reg_30250.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_320_fu_13358_p2.read()) + sc_biguint<7>(i51_cast_reg_30250.read()));
}

void ShuffleNetV2::thread_tmp_324_fu_13391_p1() {
    tmp_324_fu_13391_p1 = esl_zext<64,32>(tmp_430_cast_fu_13388_p1.read());
}

void ShuffleNetV2::thread_tmp_325_fu_13165_p2() {
    tmp_325_fu_13165_p2 = (!p_shl48_cast_fu_13149_p1.read().is_01() || !p_shl49_cast_fu_13161_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl48_cast_fu_13149_p1.read()) - sc_biguint<8>(p_shl49_cast_fu_13161_p1.read()));
}

void ShuffleNetV2::thread_tmp_326_cast_cast_fu_11069_p1() {
    tmp_326_cast_cast_fu_11069_p1 = esl_sext<8,7>(tmp_240_fu_11063_p2.read());
}

void ShuffleNetV2::thread_tmp_326_fu_13181_p2() {
    tmp_326_fu_13181_p2 = (!tmp15_fu_13175_p2.read().is_01() || !co73_cast_reg_30185.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp15_fu_13175_p2.read()) + sc_biguint<10>(co73_cast_reg_30185.read()));
}

void ShuffleNetV2::thread_tmp_327_fu_13210_p2() {
    tmp_327_fu_13210_p2 = (!p_shl50_cast_fu_13194_p1.read().is_01() || !p_shl51_cast_fu_13206_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl50_cast_fu_13194_p1.read()) - sc_biguint<7>(p_shl51_cast_fu_13206_p1.read()));
}

void ShuffleNetV2::thread_tmp_328_cast_fu_11089_p1() {
    tmp_328_cast_fu_11089_p1 = esl_sext<9,8>(tmp_241_reg_29518.read());
}

void ShuffleNetV2::thread_tmp_328_fu_13216_p2() {
    tmp_328_fu_13216_p2 = (!tmp_327_fu_13210_p2.read().is_01() || !tmp_424_cast_reg_30203.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_327_fu_13210_p2.read()) + sc_biguint<7>(tmp_424_cast_reg_30203.read()));
}

void ShuffleNetV2::thread_tmp_329_fu_13495_p2() {
    tmp_329_fu_13495_p2 = (!co76_cast_fu_13479_p1.read().is_01() || !ap_const_lv7_30.is_01())? sc_lv<7>(): (sc_biguint<7>(co76_cast_fu_13479_p1.read()) + sc_biguint<7>(ap_const_lv7_30));
}

void ShuffleNetV2::thread_tmp_330_cast1_fu_13432_p1() {
    tmp_330_cast1_fu_13432_p1 = esl_zext<10,4>(h51_reg_4269.read());
}

void ShuffleNetV2::thread_tmp_330_cast_fu_11097_p1() {
    tmp_330_cast_fu_11097_p1 = esl_sext<32,7>(tmp_243_reg_29523.read());
}

void ShuffleNetV2::thread_tmp_330_fu_7968_p2() {
    tmp_330_fu_7968_p2 = (!tmp_293_reg_28413.read().is_01() || !tmp_153_cast1_fu_7950_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_293_reg_28413.read()) + sc_biguint<9>(tmp_153_cast1_fu_7950_p1.read()));
}

void ShuffleNetV2::thread_tmp_331_fu_13654_p2() {
    tmp_331_fu_13654_p2 = (!p_shl52_cast_fu_13638_p1.read().is_01() || !p_shl53_cast_fu_13650_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl52_cast_fu_13638_p1.read()) - sc_biguint<7>(p_shl53_cast_fu_13650_p1.read()));
}

void ShuffleNetV2::thread_tmp_332_cast1_fu_13537_p1() {
    tmp_332_cast1_fu_13537_p1 = esl_zext<11,4>(h53_reg_4302.read());
}

void ShuffleNetV2::thread_tmp_332_cast_fu_13541_p1() {
    tmp_332_cast_fu_13541_p1 = esl_zext<10,4>(h53_reg_4302.read());
}

void ShuffleNetV2::thread_tmp_332_fu_8117_p2() {
    tmp_332_fu_8117_p2 = (!tmp_587_cast_reg_28457.read().is_01() || !tmp_157_cast_fu_8113_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(tmp_587_cast_reg_28457.read()) + sc_biguint<14>(tmp_157_cast_fu_8113_p1.read()));
}

void ShuffleNetV2::thread_tmp_333_cast_fu_13465_p1() {
    tmp_333_cast_fu_13465_p1 = esl_zext<14,4>(w51_reg_4280.read());
}

void ShuffleNetV2::thread_tmp_333_fu_8127_p2() {
    tmp_333_fu_8127_p2 = (!tmp_317_reg_28462.read().is_01() || !tmp_157_cast1_fu_8109_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_317_reg_28462.read()) + sc_biguint<11>(tmp_157_cast1_fu_8109_p1.read()));
}

void ShuffleNetV2::thread_tmp_334_cast1_fu_13690_p1() {
    tmp_334_cast1_fu_13690_p1 = esl_zext<17,5>(ci36_reg_4335.read());
}

void ShuffleNetV2::thread_tmp_334_cast_fu_11165_p1() {
    tmp_334_cast_fu_11165_p1 = esl_zext<7,4>(p_lshr_f1_cast_fu_11155_p4.read());
}

void ShuffleNetV2::thread_tmp_334_fu_8190_p3() {
    tmp_334_fu_8190_p3 = esl_concat<6,4>(tmp_158_fu_8184_p2.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_335_fu_13694_p2() {
    tmp_335_fu_13694_p2 = (!tmp_331_reg_30402.read().is_01() || !ci36_cast_fu_13674_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_331_reg_30402.read()) + sc_biguint<7>(ci36_cast_fu_13674_p1.read()));
}

void ShuffleNetV2::thread_tmp_336_cast_cast_fu_11437_p1() {
    tmp_336_cast_cast_fu_11437_p1 = esl_sext<8,7>(tmp_254_fu_11431_p2.read());
}

void ShuffleNetV2::thread_tmp_336_cast_fu_13699_p1() {
    tmp_336_cast_fu_13699_p1 = esl_sext<13,7>(tmp_335_fu_13694_p2.read());
}

void ShuffleNetV2::thread_tmp_336_fu_8202_p3() {
    tmp_336_fu_8202_p3 = esl_concat<5,4>(co26_reg_3215.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_337_cast1_fu_13583_p1() {
    tmp_337_cast1_fu_13583_p1 = esl_zext<14,4>(w53_reg_4313.read());
}

void ShuffleNetV2::thread_tmp_337_cast_fu_13587_p1() {
    tmp_337_cast_fu_13587_p1 = esl_zext<13,4>(w53_reg_4313.read());
}

void ShuffleNetV2::thread_tmp_337_fu_8321_p3() {
    tmp_337_fu_8321_p3 = esl_concat<7,5>(tmp_159_fu_8315_p2.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_338_cast_fu_11457_p1() {
    tmp_338_cast_fu_11457_p1 = esl_sext<9,8>(tmp_255_reg_29624.read());
}

void ShuffleNetV2::thread_tmp_338_fu_13936_p2() {
    tmp_338_fu_13936_p2 = (!p_shl54_cast_fu_13920_p1.read().is_01() || !p_shl55_cast_fu_13932_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl54_cast_fu_13920_p1.read()) - sc_biguint<7>(p_shl55_cast_fu_13932_p1.read()));
}

void ShuffleNetV2::thread_tmp_339_fu_13952_p2() {
    tmp_339_fu_13952_p2 = (!i57_cast1_reg_30459.read().is_01() || !tmp18_fu_13946_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(i57_cast1_reg_30459.read()) + sc_biguint<10>(tmp18_fu_13946_p2.read()));
}

void ShuffleNetV2::thread_tmp_340_cast_fu_11465_p1() {
    tmp_340_cast_fu_11465_p1 = esl_sext<32,7>(tmp_257_reg_29629.read());
}

void ShuffleNetV2::thread_tmp_340_fu_13962_p1() {
    tmp_340_fu_13962_p1 = esl_zext<64,10>(tmp_339_reg_30480.read());
}

void ShuffleNetV2::thread_tmp_341_fu_13957_p2() {
    tmp_341_fu_13957_p2 = (!tmp_338_fu_13936_p2.read().is_01() || !i57_cast_reg_30454.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_338_fu_13936_p2.read()) + sc_biguint<7>(i57_cast_reg_30454.read()));
}

void ShuffleNetV2::thread_tmp_342_fu_13969_p1() {
    tmp_342_fu_13969_p1 = esl_zext<64,32>(tmp_462_cast_fu_13966_p1.read());
}

void ShuffleNetV2::thread_tmp_343_fu_13743_p2() {
    tmp_343_fu_13743_p2 = (!p_shl56_cast_fu_13727_p1.read().is_01() || !p_shl57_cast_fu_13739_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl56_cast_fu_13727_p1.read()) - sc_biguint<8>(p_shl57_cast_fu_13739_p1.read()));
}

void ShuffleNetV2::thread_tmp_344_fu_13759_p2() {
    tmp_344_fu_13759_p2 = (!tmp17_fu_13753_p2.read().is_01() || !co78_cast_reg_30389.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp17_fu_13753_p2.read()) + sc_biguint<10>(co78_cast_reg_30389.read()));
}

void ShuffleNetV2::thread_tmp_345_cast_fu_10857_p1() {
    tmp_345_cast_fu_10857_p1 = esl_sext<8,7>(tmp_249_fu_10851_p2.read());
}

void ShuffleNetV2::thread_tmp_345_fu_13788_p2() {
    tmp_345_fu_13788_p2 = (!p_shl58_cast_fu_13772_p1.read().is_01() || !p_shl59_cast_fu_13784_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl58_cast_fu_13772_p1.read()) - sc_biguint<7>(p_shl59_cast_fu_13784_p1.read()));
}

void ShuffleNetV2::thread_tmp_346_fu_13794_p2() {
    tmp_346_fu_13794_p2 = (!tmp_345_fu_13788_p2.read().is_01() || !tmp_454_cast_reg_30407.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_345_fu_13788_p2.read()) + sc_biguint<7>(tmp_454_cast_reg_30407.read()));
}

void ShuffleNetV2::thread_tmp_347_cast1_fu_14006_p1() {
    tmp_347_cast1_fu_14006_p1 = esl_zext<36,2>(w55_reg_4390.read());
}

void ShuffleNetV2::thread_tmp_347_cast_fu_14010_p1() {
    tmp_347_cast_fu_14010_p1 = esl_zext<13,2>(w55_reg_4390.read());
}

void ShuffleNetV2::thread_tmp_347_fu_8333_p3() {
    tmp_347_fu_8333_p3 = esl_concat<7,3>(tmp_159_fu_8315_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_348_fu_14368_p2() {
    tmp_348_fu_14368_p2 = (!p_shl62_cast_fu_14352_p1.read().is_01() || !p_shl63_cast_fu_14364_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl62_cast_fu_14352_p1.read()) - sc_biguint<7>(p_shl63_cast_fu_14364_p1.read()));
}

void ShuffleNetV2::thread_tmp_349_cast_fu_10933_p1() {
    tmp_349_cast_fu_10933_p1 = esl_sext<32,7>(tmp_252_reg_29461.read());
}

void ShuffleNetV2::thread_tmp_349_fu_14282_p2() {
    tmp_349_fu_14282_p2 = (!p_shl60_cast_fu_14266_p1.read().is_01() || !p_shl61_cast_fu_14278_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl60_cast_fu_14266_p1.read()) - sc_biguint<7>(p_shl61_cast_fu_14278_p1.read()));
}

void ShuffleNetV2::thread_tmp_350_fu_14298_p2() {
    tmp_350_fu_14298_p2 = (!i61_cast544_cast_reg_30599.read().is_01() || !tmp20_fu_14292_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(i61_cast544_cast_reg_30599.read()) + sc_biguint<9>(tmp20_fu_14292_p2.read()));
}

void ShuffleNetV2::thread_tmp_351_fu_14311_p1() {
    tmp_351_fu_14311_p1 = esl_zext<64,10>(tmp_478_cast_fu_14308_p1.read());
}

void ShuffleNetV2::thread_tmp_352_cast_fu_11244_p1() {
    tmp_352_cast_fu_11244_p1 = esl_sext<9,8>(tmp_259_fu_11238_p2.read());
}

void ShuffleNetV2::thread_tmp_352_fu_14303_p2() {
    tmp_352_fu_14303_p2 = (!tmp_349_fu_14282_p2.read().is_01() || !i61_cast_reg_30594.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_349_fu_14282_p2.read()) + sc_biguint<7>(i61_cast_reg_30594.read()));
}

void ShuffleNetV2::thread_tmp_353_fu_14319_p1() {
    tmp_353_fu_14319_p1 = esl_zext<64,32>(tmp_480_cast_fu_14316_p1.read());
}

void ShuffleNetV2::thread_tmp_354_cast1_fu_14026_p1() {
    tmp_354_cast1_fu_14026_p1 = esl_zext<10,2>(h55_reg_4401.read());
}

void ShuffleNetV2::thread_tmp_354_cast_fu_14030_p1() {
    tmp_354_cast_fu_14030_p1 = esl_zext<15,2>(h55_reg_4401.read());
}

void ShuffleNetV2::thread_tmp_354_fu_8345_p2() {
    tmp_354_fu_8345_p2 = (!p_shl293_cast_fu_8329_p1.read().is_01() || !p_shl294_cast_fu_8341_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl293_cast_fu_8329_p1.read()) - sc_biguint<13>(p_shl294_cast_fu_8341_p1.read()));
}

void ShuffleNetV2::thread_tmp_355_cast_fu_14404_p1() {
    tmp_355_cast_fu_14404_p1 = esl_zext<17,5>(ci38_reg_4456.read());
}

void ShuffleNetV2::thread_tmp_355_fu_8355_p3() {
    tmp_355_fu_8355_p3 = esl_concat<5,5>(co29_reg_3248.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_356_fu_14408_p2() {
    tmp_356_fu_14408_p2 = (!tmp_348_reg_30648.read().is_01() || !ci38_cast_fu_14388_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_348_reg_30648.read()) + sc_biguint<7>(ci38_cast_fu_14388_p1.read()));
}

void ShuffleNetV2::thread_tmp_357_cast_fu_14413_p1() {
    tmp_357_cast_fu_14413_p1 = esl_sext<13,7>(tmp_356_fu_14408_p2.read());
}

void ShuffleNetV2::thread_tmp_357_fu_8367_p3() {
    tmp_357_fu_8367_p3 = esl_concat<5,3>(co29_reg_3248.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_358_fu_14074_p2() {
    tmp_358_fu_14074_p2 = (!p_shl66_cast_fu_14058_p1.read().is_01() || !p_shl67_cast_fu_14070_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl66_cast_fu_14058_p1.read()) - sc_biguint<7>(p_shl67_cast_fu_14070_p1.read()));
}

void ShuffleNetV2::thread_tmp_359_cast_fu_11787_p1() {
    tmp_359_cast_fu_11787_p1 = esl_sext<10,7>(tmp_265_fu_11781_p2.read());
}

void ShuffleNetV2::thread_tmp_359_fu_14090_p2() {
    tmp_359_fu_14090_p2 = (!co81_cast1_reg_30500.read().is_01() || !tmp19_fu_14084_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(co81_cast1_reg_30500.read()) + sc_biguint<9>(tmp19_fu_14084_p2.read()));
}

void ShuffleNetV2::thread_tmp_360_cast_fu_14100_p1() {
    tmp_360_cast_fu_14100_p1 = esl_zext<12,9>(tmp_359_reg_30557.read());
}

void ShuffleNetV2::thread_tmp_360_fu_8379_p2() {
    tmp_360_fu_8379_p2 = (!p_shl291_cast_fu_8363_p1.read().is_01() || !p_shl292_cast_fu_8375_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl291_cast_fu_8363_p1.read()) - sc_biguint<11>(p_shl292_cast_fu_8375_p1.read()));
}

void ShuffleNetV2::thread_tmp_361_fu_14095_p2() {
    tmp_361_fu_14095_p2 = (!tmp_358_fu_14074_p2.read().is_01() || !co81_cast_reg_30495.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_358_fu_14074_p2.read()) + sc_biguint<7>(co81_cast_reg_30495.read()));
}

void ShuffleNetV2::thread_tmp_362_cast_fu_14155_p1() {
    tmp_362_cast_fu_14155_p1 = esl_zext<35,32>(tmp_499_cast_fu_14152_p1.read());
}

void ShuffleNetV2::thread_tmp_362_fu_8234_p2() {
    tmp_362_fu_8234_p2 = (!tmp_160_cast_fu_8230_p1.read().is_01() || !tmp_659_cast_reg_28511.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_160_cast_fu_8230_p1.read()) + sc_biguint<10>(tmp_659_cast_reg_28511.read()));
}

void ShuffleNetV2::thread_tmp_363_cast_fu_11811_p1() {
    tmp_363_cast_fu_11811_p1 = esl_sext<32,7>(tmp_268_reg_29769.read());
}

void ShuffleNetV2::thread_tmp_363_fu_14650_p2() {
    tmp_363_fu_14650_p2 = (!p_shl64_cast_fu_14634_p1.read().is_01() || !p_shl65_cast_fu_14646_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl64_cast_fu_14634_p1.read()) - sc_biguint<7>(p_shl65_cast_fu_14646_p1.read()));
}

void ShuffleNetV2::thread_tmp_364_fu_14666_p2() {
    tmp_364_fu_14666_p2 = (!i63_cast531_cast_reg_30705.read().is_01() || !tmp22_fu_14660_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(i63_cast531_cast_reg_30705.read()) + sc_biguint<9>(tmp22_fu_14660_p2.read()));
}

void ShuffleNetV2::thread_tmp_365_fu_14679_p1() {
    tmp_365_fu_14679_p1 = esl_zext<64,10>(tmp_488_cast_fu_14676_p1.read());
}

void ShuffleNetV2::thread_tmp_366_fu_14671_p2() {
    tmp_366_fu_14671_p2 = (!tmp_363_fu_14650_p2.read().is_01() || !i63_cast_reg_30700.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_363_fu_14650_p2.read()) + sc_biguint<7>(i63_cast_reg_30700.read()));
}

void ShuffleNetV2::thread_tmp_367_cast_fu_11879_p1() {
    tmp_367_cast_fu_11879_p1 = esl_zext<7,4>(p_lshr_f2_cast_fu_11869_p4.read());
}

void ShuffleNetV2::thread_tmp_367_fu_14687_p1() {
    tmp_367_fu_14687_p1 = esl_zext<64,32>(tmp_490_cast_fu_14684_p1.read());
}

void ShuffleNetV2::thread_tmp_368_fu_14457_p2() {
    tmp_368_fu_14457_p2 = (!p_shl68_cast_fu_14441_p1.read().is_01() || !p_shl69_cast_fu_14453_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl68_cast_fu_14441_p1.read()) - sc_biguint<8>(p_shl69_cast_fu_14453_p1.read()));
}

void ShuffleNetV2::thread_tmp_369_cast_fu_12155_p1() {
    tmp_369_cast_fu_12155_p1 = esl_sext<10,7>(tmp_280_fu_12149_p2.read());
}

void ShuffleNetV2::thread_tmp_369_fu_14473_p2() {
    tmp_369_fu_14473_p2 = (!tmp21_fu_14467_p2.read().is_01() || !co83_cast_reg_30635.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp21_fu_14467_p2.read()) + sc_biguint<10>(co83_cast_reg_30635.read()));
}

void ShuffleNetV2::thread_tmp_370_fu_14502_p2() {
    tmp_370_fu_14502_p2 = (!p_shl70_cast_fu_14486_p1.read().is_01() || !p_shl71_cast_fu_14498_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl70_cast_fu_14486_p1.read()) - sc_biguint<7>(p_shl71_cast_fu_14498_p1.read()));
}

void ShuffleNetV2::thread_tmp_371_fu_14508_p2() {
    tmp_371_fu_14508_p2 = (!tmp_370_fu_14502_p2.read().is_01() || !tmp_484_cast_reg_30653.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_370_fu_14502_p2.read()) + sc_biguint<7>(tmp_484_cast_reg_30653.read()));
}

void ShuffleNetV2::thread_tmp_372_fu_14791_p2() {
    tmp_372_fu_14791_p2 = (!co86_cast_fu_14775_p1.read().is_01() || !ap_const_lv7_30.is_01())? sc_lv<7>(): (sc_biguint<7>(co86_cast_fu_14775_p1.read()) + sc_biguint<7>(ap_const_lv7_30));
}

void ShuffleNetV2::thread_tmp_373_cast1_fu_14728_p1() {
    tmp_373_cast1_fu_14728_p1 = esl_zext<10,4>(h57_reg_4511.read());
}

void ShuffleNetV2::thread_tmp_373_cast_fu_12179_p1() {
    tmp_373_cast_fu_12179_p1 = esl_sext<32,7>(tmp_283_reg_29875.read());
}

void ShuffleNetV2::thread_tmp_373_fu_8247_p2() {
    tmp_373_fu_8247_p2 = (!tmp_160_cast1_fu_8226_p1.read().is_01() || !tmp_640_cast_reg_28506.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_160_cast1_fu_8226_p1.read()) + sc_biguint<11>(tmp_640_cast_reg_28506.read()));
}

void ShuffleNetV2::thread_tmp_374_fu_14950_p2() {
    tmp_374_fu_14950_p2 = (!p_shl72_cast_fu_14934_p1.read().is_01() || !p_shl73_cast_fu_14946_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl72_cast_fu_14934_p1.read()) - sc_biguint<7>(p_shl73_cast_fu_14946_p1.read()));
}

void ShuffleNetV2::thread_tmp_375_cast1_fu_14833_p1() {
    tmp_375_cast1_fu_14833_p1 = esl_zext<10,4>(h59_reg_4544.read());
}

void ShuffleNetV2::thread_tmp_375_cast_fu_14837_p1() {
    tmp_375_cast_fu_14837_p1 = esl_zext<11,4>(h59_reg_4544.read());
}

void ShuffleNetV2::thread_tmp_375_fu_8405_p2() {
    tmp_375_fu_8405_p2 = (!tmp_687_cast_reg_28560.read().is_01() || !tmp_164_cast_fu_8401_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(tmp_687_cast_reg_28560.read()) + sc_biguint<14>(tmp_164_cast_fu_8401_p1.read()));
}

void ShuffleNetV2::thread_tmp_376_fu_8415_p2() {
    tmp_376_fu_8415_p2 = (!tmp_360_reg_28565.read().is_01() || !tmp_164_cast1_fu_8397_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_360_reg_28565.read()) + sc_biguint<11>(tmp_164_cast1_fu_8397_p1.read()));
}

void ShuffleNetV2::thread_tmp_377_cast_fu_14761_p1() {
    tmp_377_cast_fu_14761_p1 = esl_zext<14,4>(w57_reg_4522.read());
}

void ShuffleNetV2::thread_tmp_377_fu_8280_p2() {
    tmp_377_fu_8280_p2 = (!tmp_734_cast_reg_28524.read().is_01() || !tmp_165_cast_fu_8276_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_734_cast_reg_28524.read()) + sc_biguint<14>(tmp_165_cast_fu_8276_p1.read()));
}

void ShuffleNetV2::thread_tmp_378_cast1_fu_14986_p1() {
    tmp_378_cast1_fu_14986_p1 = esl_zext<17,5>(ci40_reg_4577.read());
}

void ShuffleNetV2::thread_tmp_378_cast_fu_11579_p1() {
    tmp_378_cast_fu_11579_p1 = esl_sext<8,7>(tmp_274_fu_11573_p2.read());
}

void ShuffleNetV2::thread_tmp_378_fu_8285_p2() {
    tmp_378_fu_8285_p2 = (!tmp_754_cast1_reg_28529.read().is_01() || !tmp_165_cast1_fu_8272_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_754_cast1_reg_28529.read()) + sc_biguint<15>(tmp_165_cast1_fu_8272_p1.read()));
}

void ShuffleNetV2::thread_tmp_379_fu_14990_p2() {
    tmp_379_fu_14990_p2 = (!tmp_374_reg_30852.read().is_01() || !ci40_cast_fu_14970_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_374_reg_30852.read()) + sc_biguint<7>(ci40_cast_fu_14970_p1.read()));
}

void ShuffleNetV2::thread_tmp_380_cast_fu_14995_p1() {
    tmp_380_cast_fu_14995_p1 = esl_sext<13,7>(tmp_379_fu_14990_p2.read());
}

void ShuffleNetV2::thread_tmp_380_fu_8482_p3() {
    tmp_380_fu_8482_p3 = esl_concat<7,2>(tmp_166_fu_8472_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_381_cast1_fu_14879_p1() {
    tmp_381_cast1_fu_14879_p1 = esl_zext<13,4>(w59_reg_4555.read());
}

void ShuffleNetV2::thread_tmp_381_cast_fu_14883_p1() {
    tmp_381_cast_fu_14883_p1 = esl_zext<14,4>(w59_reg_4555.read());
}

void ShuffleNetV2::thread_tmp_381_fu_8494_p2() {
    tmp_381_fu_8494_p2 = (!p_shl296_cast_fu_8490_p1.read().is_01() || !tmp_167_cast_fu_8478_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl296_cast_fu_8490_p1.read()) - sc_biguint<10>(tmp_167_cast_fu_8478_p1.read()));
}

void ShuffleNetV2::thread_tmp_382_cast_fu_11651_p1() {
    tmp_382_cast_fu_11651_p1 = esl_sext<32,7>(tmp_277_reg_29707.read());
}

void ShuffleNetV2::thread_tmp_382_fu_15240_p2() {
    tmp_382_fu_15240_p2 = (!p_shl74_cast_fu_15224_p1.read().is_01() || !p_shl75_cast_fu_15236_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl74_cast_fu_15224_p1.read()) - sc_biguint<7>(p_shl75_cast_fu_15236_p1.read()));
}

void ShuffleNetV2::thread_tmp_383_fu_15256_p2() {
    tmp_383_fu_15256_p2 = (!i69_cast512_cast_reg_30909.read().is_01() || !tmp24_fu_15250_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(i69_cast512_cast_reg_30909.read()) + sc_biguint<9>(tmp24_fu_15250_p2.read()));
}

void ShuffleNetV2::thread_tmp_384_fu_8504_p3() {
    tmp_384_fu_8504_p3 = esl_concat<5,2>(co31_reg_3282.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_385_fu_15269_p1() {
    tmp_385_fu_15269_p1 = esl_zext<64,10>(tmp_520_cast_fu_15266_p1.read());
}

void ShuffleNetV2::thread_tmp_386_fu_15261_p2() {
    tmp_386_fu_15261_p2 = (!tmp_382_fu_15240_p2.read().is_01() || !i69_cast_reg_30904.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_382_fu_15240_p2.read()) + sc_biguint<7>(i69_cast_reg_30904.read()));
}

void ShuffleNetV2::thread_tmp_387_cast_fu_7450_p1() {
    tmp_387_cast_fu_7450_p1 = esl_sext<12,11>(tmp_213_fu_7444_p2.read());
}

void ShuffleNetV2::thread_tmp_387_fu_8516_p2() {
    tmp_387_fu_8516_p2 = (!p_shl295_cast_fu_8512_p1.read().is_01() || !tmp_168_cast_fu_8500_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl295_cast_fu_8512_p1.read()) - sc_biguint<8>(tmp_168_cast_fu_8500_p1.read()));
}

void ShuffleNetV2::thread_tmp_388_fu_15277_p1() {
    tmp_388_fu_15277_p1 = esl_zext<64,32>(tmp_522_cast_fu_15274_p1.read());
}

void ShuffleNetV2::thread_tmp_389_cast1_fu_7475_p1() {
    tmp_389_cast1_fu_7475_p1 = esl_sext<64,12>(tmp_217_fu_7470_p2.read());
}

void ShuffleNetV2::thread_tmp_389_cast_fu_12378_p1() {
    tmp_389_cast_fu_12378_p1 = esl_zext<7,4>(p_lshr_f3_cast_fu_12368_p4.read());
}

void ShuffleNetV2::thread_tmp_389_fu_8546_p2() {
    tmp_389_fu_8546_p2 = (!tmp_381_reg_28609.read().is_01() || !tmp_172_cast_fu_8542_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_381_reg_28609.read()) + sc_biguint<10>(tmp_172_cast_fu_8542_p1.read()));
}

void ShuffleNetV2::thread_tmp_390_cast_fu_11958_p1() {
    tmp_390_cast_fu_11958_p1 = esl_sext<9,8>(tmp_285_fu_11952_p2.read());
}

void ShuffleNetV2::thread_tmp_390_fu_8567_p2() {
    tmp_390_fu_8567_p2 = (!p_shl298_cast_fu_8563_p1.read().is_01() || !tmp_845_cast_fu_8551_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_shl298_cast_fu_8563_p1.read()) - sc_bigint<15>(tmp_845_cast_fu_8551_p1.read()));
}

void ShuffleNetV2::thread_tmp_391_fu_15039_p2() {
    tmp_391_fu_15039_p2 = (!p_shl76_cast_fu_15023_p1.read().is_01() || !p_shl77_cast_fu_15035_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl76_cast_fu_15023_p1.read()) - sc_biguint<8>(p_shl77_cast_fu_15035_p1.read()));
}

void ShuffleNetV2::thread_tmp_392_fu_15055_p2() {
    tmp_392_fu_15055_p2 = (!tmp23_fu_15049_p2.read().is_01() || !co88_cast522_cast_reg_30839.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp23_fu_15049_p2.read()) + sc_biguint<9>(co88_cast522_cast_reg_30839.read()));
}

void ShuffleNetV2::thread_tmp_393_fu_15084_p2() {
    tmp_393_fu_15084_p2 = (!p_shl78_cast_fu_15068_p1.read().is_01() || !p_shl79_cast_fu_15080_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl78_cast_fu_15068_p1.read()) - sc_biguint<7>(p_shl79_cast_fu_15080_p1.read()));
}

void ShuffleNetV2::thread_tmp_394_fu_15090_p2() {
    tmp_394_fu_15090_p2 = (!tmp_393_fu_15084_p2.read().is_01() || !tmp_514_cast_reg_30857.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_393_fu_15084_p2.read()) + sc_biguint<7>(tmp_514_cast_reg_30857.read()));
}

void ShuffleNetV2::thread_tmp_395_cast1_fu_15314_p1() {
    tmp_395_cast1_fu_15314_p1 = esl_zext<36,2>(w61_reg_4632.read());
}

void ShuffleNetV2::thread_tmp_395_cast_fu_15318_p1() {
    tmp_395_cast_fu_15318_p1 = esl_zext<12,2>(w61_reg_4632.read());
}

void ShuffleNetV2::thread_tmp_395_fu_8573_p2() {
    tmp_395_fu_8573_p2 = (!tmp_828_cast_reg_28614.read().is_01() || !tmp_172_cast1_fu_8538_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_828_cast_reg_28614.read()) + sc_biguint<9>(tmp_172_cast1_fu_8538_p1.read()));
}

void ShuffleNetV2::thread_tmp_396_fu_15676_p2() {
    tmp_396_fu_15676_p2 = (!p_shl82_cast_fu_15660_p1.read().is_01() || !p_shl83_cast_fu_15672_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl82_cast_fu_15660_p1.read()) - sc_biguint<7>(p_shl83_cast_fu_15672_p1.read()));
}

void ShuffleNetV2::thread_tmp_397_fu_15590_p2() {
    tmp_397_fu_15590_p2 = (!p_shl80_cast_fu_15574_p1.read().is_01() || !p_shl81_cast_fu_15586_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl80_cast_fu_15574_p1.read()) - sc_biguint<7>(p_shl81_cast_fu_15586_p1.read()));
}

void ShuffleNetV2::thread_tmp_398_cast_fu_12650_p1() {
    tmp_398_cast_fu_12650_p1 = esl_sext<10,7>(tmp_295_fu_12644_p2.read());
}

void ShuffleNetV2::thread_tmp_398_fu_15606_p2() {
    tmp_398_fu_15606_p2 = (!i73_cast502_cast_reg_31049.read().is_01() || !tmp26_fu_15600_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(i73_cast502_cast_reg_31049.read()) + sc_biguint<8>(tmp26_fu_15600_p2.read()));
}

void ShuffleNetV2::thread_tmp_399_fu_15619_p1() {
    tmp_399_fu_15619_p1 = esl_zext<64,10>(tmp_538_cast_fu_15616_p1.read());
}

void ShuffleNetV2::thread_tmp_400_fu_15611_p2() {
    tmp_400_fu_15611_p2 = (!tmp_397_fu_15590_p2.read().is_01() || !i73_cast_reg_31044.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_397_fu_15590_p2.read()) + sc_biguint<7>(i73_cast_reg_31044.read()));
}

void ShuffleNetV2::thread_tmp_401_fu_15627_p1() {
    tmp_401_fu_15627_p1 = esl_zext<64,32>(tmp_540_cast_fu_15624_p1.read());
}

void ShuffleNetV2::thread_tmp_402_cast1_fu_15334_p1() {
    tmp_402_cast1_fu_15334_p1 = esl_zext<10,2>(h61_reg_4643.read());
}

void ShuffleNetV2::thread_tmp_402_cast2_fu_15338_p1() {
    tmp_402_cast2_fu_15338_p1 = esl_zext<15,2>(h61_reg_4643.read());
}

void ShuffleNetV2::thread_tmp_402_cast_fu_12674_p1() {
    tmp_402_cast_fu_12674_p1 = esl_sext<32,7>(tmp_298_reg_30035.read());
}

void ShuffleNetV2::thread_tmp_402_fu_8584_p2() {
    tmp_402_fu_8584_p2 = (!tmp_115_fu_8578_p2.read().is_01() || !tmp_395_fu_8573_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_115_fu_8578_p2.read()) - sc_biguint<9>(tmp_395_fu_8573_p2.read()));
}

void ShuffleNetV2::thread_tmp_403_cast_fu_15712_p1() {
    tmp_403_cast_fu_15712_p1 = esl_zext<18,5>(ci42_reg_4698.read());
}

void ShuffleNetV2::thread_tmp_403_fu_8673_p4() {
    tmp_403_fu_8673_p4 = esl_concat<6,5>(esl_concat<1,5>(ap_const_lv1_1, co33_reg_3327.read()), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_404_fu_15716_p2() {
    tmp_404_fu_15716_p2 = (!tmp_396_reg_31098.read().is_01() || !ci42_cast_fu_15696_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_396_reg_31098.read()) + sc_biguint<7>(ci42_cast_fu_15696_p1.read()));
}

void ShuffleNetV2::thread_tmp_405_cast_fu_15721_p1() {
    tmp_405_cast_fu_15721_p1 = esl_sext<13,7>(tmp_404_fu_15716_p2.read());
}

void ShuffleNetV2::thread_tmp_405_fu_8683_p1() {
    tmp_405_fu_8683_p1 = esl_sext<12,11>(tmp_403_fu_8673_p4.read());
}

void ShuffleNetV2::thread_tmp_406_cast_fu_7546_p1() {
    tmp_406_cast_fu_7546_p1 = esl_sext<9,8>(tmp_222_fu_7540_p2.read());
}

void ShuffleNetV2::thread_tmp_406_fu_8691_p4() {
    tmp_406_fu_8691_p4 = esl_concat<6,3>(esl_concat<1,5>(ap_const_lv1_1, co33_reg_3327.read()), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_407_fu_15382_p2() {
    tmp_407_fu_15382_p2 = (!p_shl86_cast_fu_15366_p1.read().is_01() || !p_shl87_cast_fu_15378_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl86_cast_fu_15366_p1.read()) - sc_biguint<7>(p_shl87_cast_fu_15378_p1.read()));
}

void ShuffleNetV2::thread_tmp_408_fu_15398_p2() {
    tmp_408_fu_15398_p2 = (!tmp25_fu_15392_p2.read().is_01() || !co91_cast1_reg_30950.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp25_fu_15392_p2.read()) + sc_biguint<9>(co91_cast1_reg_30950.read()));
}

void ShuffleNetV2::thread_tmp_409_cast1_fu_7571_p1() {
    tmp_409_cast1_fu_7571_p1 = esl_sext<15,9>(tmp_224_fu_7566_p2.read());
}

void ShuffleNetV2::thread_tmp_409_cast_fu_12457_p1() {
    tmp_409_cast_fu_12457_p1 = esl_sext<10,8>(tmp_300_fu_12451_p2.read());
}

void ShuffleNetV2::thread_tmp_409_fu_8701_p1() {
    tmp_409_fu_8701_p1 = esl_sext<10,9>(tmp_406_fu_8691_p4.read());
}

void ShuffleNetV2::thread_tmp_410_cast_fu_15408_p1() {
    tmp_410_cast_fu_15408_p1 = esl_zext<12,9>(tmp_408_reg_31007.read());
}

void ShuffleNetV2::thread_tmp_410_fu_8709_p2() {
    tmp_410_fu_8709_p2 = (!p_shl301_cast_fu_8687_p1.read().is_01() || !p_shl302_cast_fu_8705_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl301_cast_fu_8687_p1.read()) - sc_biguint<13>(p_shl302_cast_fu_8705_p1.read()));
}

void ShuffleNetV2::thread_tmp_411_fu_15403_p2() {
    tmp_411_fu_15403_p2 = (!co91_cast_reg_30945.read().is_01() || !tmp_407_fu_15382_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(co91_cast_reg_30945.read()) + sc_biguint<7>(tmp_407_fu_15382_p2.read()));
}

void ShuffleNetV2::thread_tmp_412_cast_fu_15463_p1() {
    tmp_412_cast_fu_15463_p1 = esl_zext<35,32>(tmp_559_cast_fu_15460_p1.read());
}

void ShuffleNetV2::thread_tmp_412_fu_8719_p3() {
    tmp_412_fu_8719_p3 = esl_concat<5,5>(co33_reg_3327.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_413_fu_15958_p2() {
    tmp_413_fu_15958_p2 = (!p_shl84_cast_fu_15942_p1.read().is_01() || !p_shl85_cast_fu_15954_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl84_cast_fu_15942_p1.read()) - sc_biguint<7>(p_shl85_cast_fu_15954_p1.read()));
}

void ShuffleNetV2::thread_tmp_414_fu_15978_p2() {
    tmp_414_fu_15978_p2 = (!i75_cast1_reg_31155.read().is_01() || !tmp28_cast_fu_15974_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(i75_cast1_reg_31155.read()) + sc_biguint<11>(tmp28_cast_fu_15974_p1.read()));
}

void ShuffleNetV2::thread_tmp_415_fu_15988_p1() {
    tmp_415_fu_15988_p1 = esl_zext<64,11>(tmp_414_reg_31176.read());
}

void ShuffleNetV2::thread_tmp_416_cast_fu_13000_p1() {
    tmp_416_cast_fu_13000_p1 = esl_sext<10,7>(tmp_306_fu_12994_p2.read());
}

void ShuffleNetV2::thread_tmp_416_fu_15983_p2() {
    tmp_416_fu_15983_p2 = (!tmp_413_fu_15958_p2.read().is_01() || !i75_cast_reg_31150.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_413_fu_15958_p2.read()) + sc_biguint<7>(i75_cast_reg_31150.read()));
}

void ShuffleNetV2::thread_tmp_417_fu_15995_p1() {
    tmp_417_fu_15995_p1 = esl_zext<64,32>(tmp_550_cast_fu_15992_p1.read());
}

void ShuffleNetV2::thread_tmp_418_fu_15765_p2() {
    tmp_418_fu_15765_p2 = (!p_shl88_cast_fu_15749_p1.read().is_01() || !p_shl89_cast_fu_15761_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl88_cast_fu_15749_p1.read()) - sc_biguint<8>(p_shl89_cast_fu_15761_p1.read()));
}

void ShuffleNetV2::thread_tmp_419_fu_15781_p2() {
    tmp_419_fu_15781_p2 = (!tmp27_fu_15775_p2.read().is_01() || !co93_cast_reg_31085.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp27_fu_15775_p2.read()) + sc_biguint<11>(co93_cast_reg_31085.read()));
}

void ShuffleNetV2::thread_tmp_420_cast_fu_13024_p1() {
    tmp_420_cast_fu_13024_p1 = esl_sext<32,7>(tmp_309_reg_30175.read());
}

void ShuffleNetV2::thread_tmp_420_fu_15810_p2() {
    tmp_420_fu_15810_p2 = (!p_shl90_cast_fu_15794_p1.read().is_01() || !p_shl91_cast_fu_15806_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl90_cast_fu_15794_p1.read()) - sc_biguint<7>(p_shl91_cast_fu_15806_p1.read()));
}

void ShuffleNetV2::thread_tmp_421_fu_15816_p2() {
    tmp_421_fu_15816_p2 = (!tmp_420_fu_15810_p2.read().is_01() || !tmp_544_cast_reg_31103.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_420_fu_15810_p2.read()) + sc_biguint<7>(tmp_544_cast_reg_31103.read()));
}

void ShuffleNetV2::thread_tmp_422_fu_16099_p2() {
    tmp_422_fu_16099_p2 = (!co96_cast_fu_16083_p1.read().is_01() || !ap_const_lv7_30.is_01())? sc_lv<7>(): (sc_biguint<7>(co96_cast_fu_16083_p1.read()) + sc_biguint<7>(ap_const_lv7_30));
}

void ShuffleNetV2::thread_tmp_423_cast_fu_16036_p1() {
    tmp_423_cast_fu_16036_p1 = esl_zext<10,4>(h63_reg_4753.read());
}

void ShuffleNetV2::thread_tmp_423_fu_8731_p3() {
    tmp_423_fu_8731_p3 = esl_concat<5,3>(co33_reg_3327.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_424_cast_fu_13092_p1() {
    tmp_424_cast_fu_13092_p1 = esl_zext<7,4>(p_lshr_f4_cast_fu_13082_p4.read());
}

void ShuffleNetV2::thread_tmp_424_fu_16258_p2() {
    tmp_424_fu_16258_p2 = (!p_shl92_cast_fu_16242_p1.read().is_01() || !p_shl93_cast_fu_16254_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl92_cast_fu_16242_p1.read()) - sc_biguint<7>(p_shl93_cast_fu_16254_p1.read()));
}

void ShuffleNetV2::thread_tmp_425_cast1_fu_16141_p1() {
    tmp_425_cast1_fu_16141_p1 = esl_zext<10,4>(h65_reg_4786.read());
}

void ShuffleNetV2::thread_tmp_425_cast_fu_16145_p1() {
    tmp_425_cast_fu_16145_p1 = esl_zext<11,4>(h65_reg_4786.read());
}

void ShuffleNetV2::thread_tmp_425_fu_8743_p2() {
    tmp_425_fu_8743_p2 = (!p_shl299_cast_fu_8727_p1.read().is_01() || !p_shl300_cast_fu_8739_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl299_cast_fu_8727_p1.read()) - sc_biguint<11>(p_shl300_cast_fu_8739_p1.read()));
}

void ShuffleNetV2::thread_tmp_426_cast_fu_13364_p1() {
    tmp_426_cast_fu_13364_p1 = esl_sext<10,7>(tmp_320_fu_13358_p2.read());
}

void ShuffleNetV2::thread_tmp_426_fu_8610_p2() {
    tmp_426_fu_8610_p2 = (!tmp_390_reg_28627.read().is_01() || !tmp_173_cast_fu_8606_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_390_reg_28627.read()) + sc_biguint<15>(tmp_173_cast_fu_8606_p1.read()));
}

void ShuffleNetV2::thread_tmp_427_cast_fu_16069_p1() {
    tmp_427_cast_fu_16069_p1 = esl_zext<14,4>(w63_reg_4764.read());
}

void ShuffleNetV2::thread_tmp_427_fu_8620_p2() {
    tmp_427_fu_8620_p2 = (!tmp_402_reg_28632.read().is_01() || !tmp_173_cast1_fu_8602_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_402_reg_28632.read()) + sc_biguint<9>(tmp_173_cast1_fu_8602_p1.read()));
}

void ShuffleNetV2::thread_tmp_428_cast_fu_16294_p1() {
    tmp_428_cast_fu_16294_p1 = esl_zext<18,5>(ci44_reg_4819.read());
}

void ShuffleNetV2::thread_tmp_428_fu_8769_p2() {
    tmp_428_fu_8769_p2 = (!tmp_908_cast_reg_28676.read().is_01() || !tmp_177_cast_fu_8765_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(tmp_908_cast_reg_28676.read()) + sc_biguint<14>(tmp_177_cast_fu_8765_p1.read()));
}

void ShuffleNetV2::thread_tmp_429_fu_16298_p2() {
    tmp_429_fu_16298_p2 = (!tmp_424_reg_31302.read().is_01() || !ci44_cast_fu_16278_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_424_reg_31302.read()) + sc_biguint<7>(ci44_cast_fu_16278_p1.read()));
}

void ShuffleNetV2::thread_tmp_430_cast1_fu_16303_p1() {
    tmp_430_cast1_fu_16303_p1 = esl_sext<13,7>(tmp_429_fu_16298_p2.read());
}

void ShuffleNetV2::thread_tmp_430_cast_fu_13388_p1() {
    tmp_430_cast_fu_13388_p1 = esl_sext<32,7>(tmp_323_reg_30281.read());
}

void ShuffleNetV2::thread_tmp_430_fu_8779_p2() {
    tmp_430_fu_8779_p2 = (!tmp_425_reg_28681.read().is_01() || !tmp_177_cast1_fu_8761_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_425_reg_28681.read()) + sc_biguint<11>(tmp_177_cast1_fu_8761_p1.read()));
}

void ShuffleNetV2::thread_tmp_431_cast1_fu_16187_p1() {
    tmp_431_cast1_fu_16187_p1 = esl_zext<13,4>(w65_reg_4797.read());
}

void ShuffleNetV2::thread_tmp_431_cast_fu_16191_p1() {
    tmp_431_cast_fu_16191_p1 = esl_zext<14,4>(w65_reg_4797.read());
}

void ShuffleNetV2::thread_tmp_431_fu_8834_p3() {
    tmp_431_fu_8834_p3 = esl_concat<5,4>(co35_reg_3361.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_432_fu_16540_p2() {
    tmp_432_fu_16540_p2 = (!p_shl94_cast_fu_16524_p1.read().is_01() || !p_shl95_cast_fu_16536_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl94_cast_fu_16524_p1.read()) - sc_biguint<7>(p_shl95_cast_fu_16536_p1.read()));
}

void ShuffleNetV2::thread_tmp_433_fu_16556_p2() {
    tmp_433_fu_16556_p2 = (!i81_cast1_reg_31359.read().is_01() || !tmp30_fu_16550_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(i81_cast1_reg_31359.read()) + sc_biguint<11>(tmp30_fu_16550_p2.read()));
}

void ShuffleNetV2::thread_tmp_434_fu_8927_p3() {
    tmp_434_fu_8927_p3 = esl_concat<6,4>(tmp_178_fu_8921_p2.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_435_fu_16566_p1() {
    tmp_435_fu_16566_p1 = esl_zext<64,11>(tmp_433_reg_31380.read());
}

void ShuffleNetV2::thread_tmp_436_fu_16561_p2() {
    tmp_436_fu_16561_p2 = (!tmp_432_fu_16540_p2.read().is_01() || !i81_cast_reg_31354.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_432_fu_16540_p2.read()) + sc_biguint<7>(i81_cast_reg_31354.read()));
}

void ShuffleNetV2::thread_tmp_437_fu_8939_p3() {
    tmp_437_fu_8939_p3 = esl_concat<5,4>(co36_reg_3394.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_438_fu_16573_p1() {
    tmp_438_fu_16573_p1 = esl_zext<64,32>(tmp_582_cast_fu_16570_p1.read());
}

void ShuffleNetV2::thread_tmp_439_cast_fu_12864_p1() {
    tmp_439_cast_fu_12864_p1 = esl_sext<32,7>(tmp_318_reg_30113.read());
}

void ShuffleNetV2::thread_tmp_439_fu_8862_p2() {
    tmp_439_fu_8862_p2 = (!tmp_961_cast_reg_28725.read().is_01() || !tmp_179_cast1_fu_8858_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_961_cast_reg_28725.read()) + sc_biguint<10>(tmp_179_cast1_fu_8858_p1.read()));
}

void ShuffleNetV2::thread_tmp_440_cast_fu_7703_p1() {
    tmp_440_cast_fu_7703_p1 = esl_sext<13,12>(tmp_238_fu_7697_p2.read());
}

void ShuffleNetV2::thread_tmp_440_fu_9058_p3() {
    tmp_440_fu_9058_p3 = esl_concat<8,5>(tmp_180_fu_9052_p2.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_441_fu_16347_p2() {
    tmp_441_fu_16347_p2 = (!p_shl96_cast_fu_16331_p1.read().is_01() || !p_shl97_cast_fu_16343_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl96_cast_fu_16331_p1.read()) - sc_biguint<8>(p_shl97_cast_fu_16343_p1.read()));
}

void ShuffleNetV2::thread_tmp_442_cast_fu_13171_p1() {
    tmp_442_cast_fu_13171_p1 = esl_sext<10,8>(tmp_325_fu_13165_p2.read());
}

void ShuffleNetV2::thread_tmp_442_fu_16363_p2() {
    tmp_442_fu_16363_p2 = (!tmp29_fu_16357_p2.read().is_01() || !co98_cast_reg_31289.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp29_fu_16357_p2.read()) + sc_biguint<11>(co98_cast_reg_31289.read()));
}

void ShuffleNetV2::thread_tmp_443_fu_16392_p2() {
    tmp_443_fu_16392_p2 = (!p_shl98_cast_fu_16376_p1.read().is_01() || !p_shl99_cast_fu_16388_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl98_cast_fu_16376_p1.read()) - sc_biguint<7>(p_shl99_cast_fu_16388_p1.read()));
}

void ShuffleNetV2::thread_tmp_444_fu_16398_p2() {
    tmp_444_fu_16398_p2 = (!tmp_443_fu_16392_p2.read().is_01() || !tmp_574_cast_reg_31307.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_443_fu_16392_p2.read()) + sc_biguint<7>(tmp_574_cast_reg_31307.read()));
}

void ShuffleNetV2::thread_tmp_445_cast1_fu_16610_p1() {
    tmp_445_cast1_fu_16610_p1 = esl_zext<36,2>(w67_reg_4874.read());
}

void ShuffleNetV2::thread_tmp_445_cast_fu_16614_p1() {
    tmp_445_cast_fu_16614_p1 = esl_zext<12,2>(w67_reg_4874.read());
}

void ShuffleNetV2::thread_tmp_445_fu_9070_p3() {
    tmp_445_fu_9070_p3 = esl_concat<8,3>(tmp_180_fu_9052_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_446_fu_16968_p2() {
    tmp_446_fu_16968_p2 = (!p_shl102_cast_fu_16952_p1.read().is_01() || !p_shl103_cast_fu_16964_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl102_cast_fu_16952_p1.read()) - sc_biguint<7>(p_shl103_cast_fu_16964_p1.read()));
}

void ShuffleNetV2::thread_tmp_447_fu_16886_p2() {
    tmp_447_fu_16886_p2 = (!p_shl100_cast_fu_16870_p1.read().is_01() || !p_shl101_cast_fu_16882_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl100_cast_fu_16870_p1.read()) - sc_biguint<7>(p_shl101_cast_fu_16882_p1.read()));
}

void ShuffleNetV2::thread_tmp_448_fu_16902_p2() {
    tmp_448_fu_16902_p2 = (!i85_cast1_reg_31499.read().is_01() || !tmp32_fu_16896_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(i85_cast1_reg_31499.read()) + sc_biguint<11>(tmp32_fu_16896_p2.read()));
}

void ShuffleNetV2::thread_tmp_449_fu_16912_p1() {
    tmp_449_fu_16912_p1 = esl_zext<64,11>(tmp_448_reg_31520.read());
}

void ShuffleNetV2::thread_tmp_450_fu_16907_p2() {
    tmp_450_fu_16907_p2 = (!tmp_447_fu_16886_p2.read().is_01() || !i85_cast_reg_31494.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_447_fu_16886_p2.read()) + sc_biguint<7>(i85_cast_reg_31494.read()));
}

void ShuffleNetV2::thread_tmp_451_fu_16919_p1() {
    tmp_451_fu_16919_p1 = esl_zext<64,32>(tmp_600_cast_fu_16916_p1.read());
}

void ShuffleNetV2::thread_tmp_452_cast1_fu_16630_p1() {
    tmp_452_cast1_fu_16630_p1 = esl_zext<10,2>(h67_reg_4885.read());
}

void ShuffleNetV2::thread_tmp_452_cast_fu_16634_p1() {
    tmp_452_cast_fu_16634_p1 = esl_zext<15,2>(h67_reg_4885.read());
}

void ShuffleNetV2::thread_tmp_452_fu_9082_p2() {
    tmp_452_fu_9082_p2 = (!p_shl305_cast_fu_9066_p1.read().is_01() || !p_shl306_cast_fu_9078_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl305_cast_fu_9066_p1.read()) - sc_biguint<14>(p_shl306_cast_fu_9078_p1.read()));
}

void ShuffleNetV2::thread_tmp_453_cast_fu_17004_p1() {
    tmp_453_cast_fu_17004_p1 = esl_zext<18,5>(ci46_reg_4940.read());
}

void ShuffleNetV2::thread_tmp_453_fu_9092_p3() {
    tmp_453_fu_9092_p3 = esl_concat<5,5>(co38_reg_3427.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_454_cast_fu_13670_p1() {
    tmp_454_cast_fu_13670_p1 = esl_zext<7,4>(p_lshr_f5_cast_fu_13660_p4.read());
}

void ShuffleNetV2::thread_tmp_454_fu_17008_p2() {
    tmp_454_fu_17008_p2 = (!tmp_446_reg_31548.read().is_01() || !ci46_cast_fu_16988_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_446_reg_31548.read()) + sc_biguint<7>(ci46_cast_fu_16988_p1.read()));
}

void ShuffleNetV2::thread_tmp_455_cast_fu_17013_p1() {
    tmp_455_cast_fu_17013_p1 = esl_sext<13,7>(tmp_454_fu_17008_p2.read());
}

void ShuffleNetV2::thread_tmp_455_fu_9104_p3() {
    tmp_455_fu_9104_p3 = esl_concat<5,3>(co38_reg_3427.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_456_fu_9116_p2() {
    tmp_456_fu_9116_p2 = (!p_shl303_cast_fu_9100_p1.read().is_01() || !p_shl304_cast_fu_9112_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl303_cast_fu_9100_p1.read()) - sc_biguint<11>(p_shl304_cast_fu_9112_p1.read()));
}

void ShuffleNetV2::thread_tmp_457_fu_16678_p2() {
    tmp_457_fu_16678_p2 = (!p_shl106_cast_fu_16662_p1.read().is_01() || !p_shl107_cast_fu_16674_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl106_cast_fu_16662_p1.read()) - sc_biguint<7>(p_shl107_cast_fu_16674_p1.read()));
}

void ShuffleNetV2::thread_tmp_458_cast_fu_13942_p1() {
    tmp_458_cast_fu_13942_p1 = esl_sext<10,7>(tmp_338_fu_13936_p2.read());
}

void ShuffleNetV2::thread_tmp_458_fu_16694_p2() {
    tmp_458_fu_16694_p2 = (!tmp31_fu_16688_p2.read().is_01() || !co101_cast1_reg_31400.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp31_fu_16688_p2.read()) + sc_biguint<9>(co101_cast1_reg_31400.read()));
}

void ShuffleNetV2::thread_tmp_459_fu_8971_p2() {
    tmp_459_fu_8971_p2 = (!tmp_181_cast_fu_8967_p1.read().is_01() || !tmp_965_cast_reg_28774.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_181_cast_fu_8967_p1.read()) + sc_biguint<10>(tmp_965_cast_reg_28774.read()));
}

void ShuffleNetV2::thread_tmp_460_cast_fu_16704_p1() {
    tmp_460_cast_fu_16704_p1 = esl_zext<12,9>(tmp_458_reg_31457.read());
}

void ShuffleNetV2::thread_tmp_460_fu_8984_p2() {
    tmp_460_fu_8984_p2 = (!tmp_181_cast1_fu_8963_p1.read().is_01() || !tmp_963_cast1_reg_28769.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_181_cast1_fu_8963_p1.read()) + sc_biguint<11>(tmp_963_cast1_reg_28769.read()));
}

void ShuffleNetV2::thread_tmp_461_fu_16699_p2() {
    tmp_461_fu_16699_p2 = (!co101_cast_reg_31395.read().is_01() || !tmp_457_fu_16678_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(co101_cast_reg_31395.read()) + sc_biguint<7>(tmp_457_fu_16678_p2.read()));
}

void ShuffleNetV2::thread_tmp_462_cast1_fu_16759_p1() {
    tmp_462_cast1_fu_16759_p1 = esl_zext<35,32>(tmp_619_cast_fu_16756_p1.read());
}

void ShuffleNetV2::thread_tmp_462_cast_fu_13966_p1() {
    tmp_462_cast_fu_13966_p1 = esl_sext<32,7>(tmp_341_reg_30485.read());
}

void ShuffleNetV2::thread_tmp_462_fu_8895_p2() {
    tmp_462_fu_8895_p2 = (!tmp_968_cast_reg_28738.read().is_01() || !tmp_182_cast_fu_8891_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_968_cast_reg_28738.read()) + sc_biguint<15>(tmp_182_cast_fu_8891_p1.read()));
}

void ShuffleNetV2::thread_tmp_463_fu_17250_p2() {
    tmp_463_fu_17250_p2 = (!p_shl104_cast_fu_17234_p1.read().is_01() || !p_shl105_cast_fu_17246_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl104_cast_fu_17234_p1.read()) - sc_biguint<7>(p_shl105_cast_fu_17246_p1.read()));
}

void ShuffleNetV2::thread_tmp_464_fu_17266_p2() {
    tmp_464_fu_17266_p2 = (!i87_cast1_reg_31605.read().is_01() || !tmp34_fu_17260_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(i87_cast1_reg_31605.read()) + sc_biguint<11>(tmp34_fu_17260_p2.read()));
}

void ShuffleNetV2::thread_tmp_465_fu_17276_p1() {
    tmp_465_fu_17276_p1 = esl_zext<64,11>(tmp_464_reg_31626.read());
}

void ShuffleNetV2::thread_tmp_466_fu_17271_p2() {
    tmp_466_fu_17271_p2 = (!tmp_463_fu_17250_p2.read().is_01() || !i87_cast_reg_31600.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_463_fu_17250_p2.read()) + sc_biguint<7>(i87_cast_reg_31600.read()));
}

void ShuffleNetV2::thread_tmp_467_fu_17283_p1() {
    tmp_467_fu_17283_p1 = esl_zext<64,32>(tmp_610_cast_fu_17280_p1.read());
}

void ShuffleNetV2::thread_tmp_468_fu_17057_p2() {
    tmp_468_fu_17057_p2 = (!p_shl108_cast_fu_17041_p1.read().is_01() || !p_shl109_cast_fu_17053_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl108_cast_fu_17041_p1.read()) - sc_biguint<8>(p_shl109_cast_fu_17053_p1.read()));
}

void ShuffleNetV2::thread_tmp_469_cast_fu_13749_p1() {
    tmp_469_cast_fu_13749_p1 = esl_sext<10,8>(tmp_343_fu_13743_p2.read());
}

void ShuffleNetV2::thread_tmp_469_fu_17073_p2() {
    tmp_469_fu_17073_p2 = (!tmp33_fu_17067_p2.read().is_01() || !co103_cast_reg_31535.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp33_fu_17067_p2.read()) + sc_biguint<11>(co103_cast_reg_31535.read()));
}

void ShuffleNetV2::thread_tmp_470_fu_17102_p2() {
    tmp_470_fu_17102_p2 = (!p_shl110_cast_fu_17086_p1.read().is_01() || !p_shl111_cast_fu_17098_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl110_cast_fu_17086_p1.read()) - sc_biguint<7>(p_shl111_cast_fu_17098_p1.read()));
}

void ShuffleNetV2::thread_tmp_471_fu_17108_p2() {
    tmp_471_fu_17108_p2 = (!tmp_470_fu_17102_p2.read().is_01() || !tmp_604_cast_reg_31553.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_470_fu_17102_p2.read()) + sc_biguint<7>(tmp_604_cast_reg_31553.read()));
}

void ShuffleNetV2::thread_tmp_472_fu_17387_p2() {
    tmp_472_fu_17387_p2 = (!co106_cast_fu_17371_p1.read().is_01() || !ap_const_lv7_30.is_01())? sc_lv<7>(): (sc_biguint<7>(co106_cast_fu_17371_p1.read()) + sc_biguint<7>(ap_const_lv7_30));
}

void ShuffleNetV2::thread_tmp_473_cast_fu_17324_p1() {
    tmp_473_cast_fu_17324_p1 = esl_zext<10,4>(h69_reg_4995.read());
}

void ShuffleNetV2::thread_tmp_473_fu_9142_p2() {
    tmp_473_fu_9142_p2 = (!tmp_971_cast_reg_28823.read().is_01() || !tmp_186_cast_fu_9138_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(tmp_971_cast_reg_28823.read()) + sc_biguint<15>(tmp_186_cast_fu_9138_p1.read()));
}

void ShuffleNetV2::thread_tmp_474_fu_17546_p2() {
    tmp_474_fu_17546_p2 = (!p_shl112_cast_fu_17530_p1.read().is_01() || !p_shl113_cast_fu_17542_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl112_cast_fu_17530_p1.read()) - sc_biguint<7>(p_shl113_cast_fu_17542_p1.read()));
}

void ShuffleNetV2::thread_tmp_475_cast1_fu_17429_p1() {
    tmp_475_cast1_fu_17429_p1 = esl_zext<10,4>(h71_reg_5028.read());
}

void ShuffleNetV2::thread_tmp_475_cast_fu_17433_p1() {
    tmp_475_cast_fu_17433_p1 = esl_zext<11,4>(h71_reg_5028.read());
}

void ShuffleNetV2::thread_tmp_475_fu_9152_p2() {
    tmp_475_fu_9152_p2 = (!tmp_456_reg_28828.read().is_01() || !tmp_186_cast1_fu_9134_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_456_reg_28828.read()) + sc_biguint<11>(tmp_186_cast1_fu_9134_p1.read()));
}

void ShuffleNetV2::thread_tmp_476_cast_cast_fu_14288_p1() {
    tmp_476_cast_cast_fu_14288_p1 = esl_sext<9,7>(tmp_349_fu_14282_p2.read());
}

void ShuffleNetV2::thread_tmp_476_fu_9017_p2() {
    tmp_476_fu_9017_p2 = (!tmp_977_cast_reg_28787.read().is_01() || !tmp_187_cast_fu_9013_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_977_cast_reg_28787.read()) + sc_biguint<14>(tmp_187_cast_fu_9013_p1.read()));
}

void ShuffleNetV2::thread_tmp_477_cast_fu_17357_p1() {
    tmp_477_cast_fu_17357_p1 = esl_zext<14,4>(w69_reg_5006.read());
}

void ShuffleNetV2::thread_tmp_477_fu_9022_p2() {
    tmp_477_fu_9022_p2 = (!tmp_980_cast_reg_28792.read().is_01() || !tmp_187_cast1_fu_9009_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_980_cast_reg_28792.read()) + sc_biguint<15>(tmp_187_cast1_fu_9009_p1.read()));
}

void ShuffleNetV2::thread_tmp_478_cast1_fu_17582_p1() {
    tmp_478_cast1_fu_17582_p1 = esl_zext<18,5>(ci48_reg_5061.read());
}

void ShuffleNetV2::thread_tmp_478_cast_fu_14308_p1() {
    tmp_478_cast_fu_14308_p1 = esl_sext<10,9>(tmp_350_reg_30620.read());
}

void ShuffleNetV2::thread_tmp_478_fu_9223_p3() {
    tmp_478_fu_9223_p3 = esl_concat<7,2>(tmp_188_fu_9213_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_479_fu_17586_p2() {
    tmp_479_fu_17586_p2 = (!tmp_474_reg_31752.read().is_01() || !ci48_cast_fu_17566_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_474_reg_31752.read()) + sc_biguint<7>(ci48_cast_fu_17566_p1.read()));
}

void ShuffleNetV2::thread_tmp_480_cast1_fu_17591_p1() {
    tmp_480_cast1_fu_17591_p1 = esl_sext<13,7>(tmp_479_fu_17586_p2.read());
}

void ShuffleNetV2::thread_tmp_480_cast_fu_14316_p1() {
    tmp_480_cast_fu_14316_p1 = esl_sext<32,7>(tmp_352_reg_30625.read());
}

void ShuffleNetV2::thread_tmp_480_fu_9235_p2() {
    tmp_480_fu_9235_p2 = (!p_shl308_cast_fu_9231_p1.read().is_01() || !tmp_189_cast_fu_9219_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl308_cast_fu_9231_p1.read()) - sc_biguint<10>(tmp_189_cast_fu_9219_p1.read()));
}

void ShuffleNetV2::thread_tmp_481_cast1_fu_17475_p1() {
    tmp_481_cast1_fu_17475_p1 = esl_zext<13,4>(w71_reg_5039.read());
}

void ShuffleNetV2::thread_tmp_481_cast_fu_17479_p1() {
    tmp_481_cast_fu_17479_p1 = esl_zext<14,4>(w71_reg_5039.read());
}

void ShuffleNetV2::thread_tmp_481_fu_9245_p3() {
    tmp_481_fu_9245_p3 = esl_concat<5,2>(co40_reg_3461.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_482_fu_17828_p2() {
    tmp_482_fu_17828_p2 = (!p_shl114_cast_fu_17812_p1.read().is_01() || !p_shl115_cast_fu_17824_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl114_cast_fu_17812_p1.read()) - sc_biguint<7>(p_shl115_cast_fu_17824_p1.read()));
}

void ShuffleNetV2::thread_tmp_483_fu_17844_p2() {
    tmp_483_fu_17844_p2 = (!i93_cast1_reg_31809.read().is_01() || !tmp36_fu_17838_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(i93_cast1_reg_31809.read()) + sc_biguint<11>(tmp36_fu_17838_p2.read()));
}

void ShuffleNetV2::thread_tmp_484_cast1_fu_7614_p1() {
    tmp_484_cast1_fu_7614_p1 = esl_zext<64,15>(tmp_251_fu_7609_p2.read());
}

void ShuffleNetV2::thread_tmp_484_cast_fu_14384_p1() {
    tmp_484_cast_fu_14384_p1 = esl_zext<7,4>(p_lshr_f6_cast_fu_14374_p4.read());
}

void ShuffleNetV2::thread_tmp_484_fu_9257_p2() {
    tmp_484_fu_9257_p2 = (!p_shl307_cast_fu_9253_p1.read().is_01() || !tmp_190_cast_fu_9241_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl307_cast_fu_9253_p1.read()) - sc_biguint<8>(tmp_190_cast_fu_9241_p1.read()));
}

void ShuffleNetV2::thread_tmp_485_fu_17854_p1() {
    tmp_485_fu_17854_p1 = esl_zext<64,11>(tmp_483_reg_31830.read());
}

void ShuffleNetV2::thread_tmp_486_cast_cast_fu_14656_p1() {
    tmp_486_cast_cast_fu_14656_p1 = esl_sext<9,7>(tmp_363_fu_14650_p2.read());
}

void ShuffleNetV2::thread_tmp_486_fu_17849_p2() {
    tmp_486_fu_17849_p2 = (!tmp_482_fu_17828_p2.read().is_01() || !i93_cast_reg_31804.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_482_fu_17828_p2.read()) + sc_biguint<7>(i93_cast_reg_31804.read()));
}

void ShuffleNetV2::thread_tmp_487_cast_fu_7762_p1() {
    tmp_487_cast_fu_7762_p1 = esl_sext<64,13>(tmp_253_fu_7757_p2.read());
}

void ShuffleNetV2::thread_tmp_487_fu_9287_p2() {
    tmp_487_fu_9287_p2 = (!tmp_480_reg_28872.read().is_01() || !tmp_194_cast_fu_9283_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_480_reg_28872.read()) + sc_biguint<10>(tmp_194_cast_fu_9283_p1.read()));
}

void ShuffleNetV2::thread_tmp_488_cast_fu_14676_p1() {
    tmp_488_cast_fu_14676_p1 = esl_sext<10,9>(tmp_364_reg_30726.read());
}

void ShuffleNetV2::thread_tmp_488_fu_17861_p1() {
    tmp_488_fu_17861_p1 = esl_zext<64,32>(tmp_642_cast_fu_17858_p1.read());
}

void ShuffleNetV2::thread_tmp_489_cast_fu_7772_p1() {
    tmp_489_cast_fu_7772_p1 = esl_sext<64,11>(tmp_263_reg_28364.read());
}

void ShuffleNetV2::thread_tmp_489_fu_9308_p2() {
    tmp_489_fu_9308_p2 = (!p_shl310_cast_fu_9304_p1.read().is_01() || !tmp_990_cast_fu_9292_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_shl310_cast_fu_9304_p1.read()) - sc_bigint<15>(tmp_990_cast_fu_9292_p1.read()));
}

void ShuffleNetV2::thread_tmp_490_cast_fu_14684_p1() {
    tmp_490_cast_fu_14684_p1 = esl_sext<32,7>(tmp_366_reg_30731.read());
}

void ShuffleNetV2::thread_tmp_490_fu_9314_p2() {
    tmp_490_fu_9314_p2 = (!tmp_989_cast1_reg_28877.read().is_01() || !tmp_194_cast1_fu_9279_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_989_cast1_reg_28877.read()) + sc_biguint<9>(tmp_194_cast1_fu_9279_p1.read()));
}

void ShuffleNetV2::thread_tmp_491_fu_17635_p2() {
    tmp_491_fu_17635_p2 = (!p_shl116_cast_fu_17619_p1.read().is_01() || !p_shl117_cast_fu_17631_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl116_cast_fu_17619_p1.read()) - sc_biguint<8>(p_shl117_cast_fu_17631_p1.read()));
}

void ShuffleNetV2::thread_tmp_492_fu_17651_p2() {
    tmp_492_fu_17651_p2 = (!tmp35_fu_17645_p2.read().is_01() || !co108_cast_reg_31739.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp35_fu_17645_p2.read()) + sc_biguint<11>(co108_cast_reg_31739.read()));
}

void ShuffleNetV2::thread_tmp_493_fu_17680_p2() {
    tmp_493_fu_17680_p2 = (!p_shl118_cast_fu_17664_p1.read().is_01() || !p_shl119_cast_fu_17676_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl118_cast_fu_17664_p1.read()) - sc_biguint<7>(p_shl119_cast_fu_17676_p1.read()));
}

void ShuffleNetV2::thread_tmp_494_fu_17686_p2() {
    tmp_494_fu_17686_p2 = (!tmp_493_fu_17680_p2.read().is_01() || !tmp_634_cast_reg_31757.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_493_fu_17680_p2.read()) + sc_biguint<7>(tmp_634_cast_reg_31757.read()));
}

void ShuffleNetV2::thread_tmp_495_cast1_fu_17898_p1() {
    tmp_495_cast1_fu_17898_p1 = esl_zext<36,2>(w73_reg_5116.read());
}

void ShuffleNetV2::thread_tmp_495_cast2_fu_17902_p1() {
    tmp_495_cast2_fu_17902_p1 = esl_zext<12,2>(w73_reg_5116.read());
}

void ShuffleNetV2::thread_tmp_495_cast_fu_14080_p1() {
    tmp_495_cast_fu_14080_p1 = esl_sext<9,7>(tmp_358_fu_14074_p2.read());
}

void ShuffleNetV2::thread_tmp_495_fu_9325_p2() {
    tmp_495_fu_9325_p2 = (!tmp_118_fu_9319_p2.read().is_01() || !tmp_490_fu_9314_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_118_fu_9319_p2.read()) - sc_biguint<9>(tmp_490_fu_9314_p2.read()));
}

void ShuffleNetV2::thread_tmp_496_fu_18264_p2() {
    tmp_496_fu_18264_p2 = (!p_shl122_cast_fu_18248_p1.read().is_01() || !p_shl123_cast_fu_18260_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl122_cast_fu_18248_p1.read()) - sc_biguint<7>(p_shl123_cast_fu_18260_p1.read()));
}

void ShuffleNetV2::thread_tmp_497_fu_18182_p2() {
    tmp_497_fu_18182_p2 = (!p_shl120_cast_fu_18166_p1.read().is_01() || !p_shl121_cast_fu_18178_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl120_cast_fu_18166_p1.read()) - sc_biguint<7>(p_shl121_cast_fu_18178_p1.read()));
}

void ShuffleNetV2::thread_tmp_498_fu_18198_p2() {
    tmp_498_fu_18198_p2 = (!i97_cast1_reg_31949.read().is_01() || !tmp38_fu_18192_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(i97_cast1_reg_31949.read()) + sc_biguint<11>(tmp38_fu_18192_p2.read()));
}

void ShuffleNetV2::thread_tmp_499_cast_fu_14152_p1() {
    tmp_499_cast_fu_14152_p1 = esl_sext<32,7>(tmp_361_reg_30563.read());
}

void ShuffleNetV2::thread_tmp_499_fu_18208_p1() {
    tmp_499_fu_18208_p1 = esl_zext<64,11>(tmp_498_reg_31970.read());
}

void ShuffleNetV2::thread_tmp_500_fu_18203_p2() {
    tmp_500_fu_18203_p2 = (!tmp_497_fu_18182_p2.read().is_01() || !i97_cast_reg_31944.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_497_fu_18182_p2.read()) + sc_biguint<7>(i97_cast_reg_31944.read()));
}

void ShuffleNetV2::thread_tmp_501_fu_18215_p1() {
    tmp_501_fu_18215_p1 = esl_zext<64,32>(tmp_660_cast_fu_18212_p1.read());
}

void ShuffleNetV2::thread_tmp_502_cast1_fu_17918_p1() {
    tmp_502_cast1_fu_17918_p1 = esl_zext<10,2>(h73_reg_5127.read());
}

void ShuffleNetV2::thread_tmp_502_cast2_fu_17922_p1() {
    tmp_502_cast2_fu_17922_p1 = esl_zext<15,2>(h73_reg_5127.read());
}

void ShuffleNetV2::thread_tmp_502_cast_fu_14463_p1() {
    tmp_502_cast_fu_14463_p1 = esl_sext<10,8>(tmp_368_fu_14457_p2.read());
}

void ShuffleNetV2::thread_tmp_502_fu_9424_p3() {
    tmp_502_fu_9424_p3 = esl_concat<8,5>(tmp_195_fu_9418_p2.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_503_cast_fu_18300_p1() {
    tmp_503_cast_fu_18300_p1 = esl_zext<18,5>(ci50_reg_5182.read());
}

void ShuffleNetV2::thread_tmp_503_fu_9436_p3() {
    tmp_503_fu_9436_p3 = esl_concat<8,3>(tmp_195_fu_9418_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_504_fu_18304_p2() {
    tmp_504_fu_18304_p2 = (!tmp_496_reg_31998.read().is_01() || !ci50_cast_fu_18284_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_496_reg_31998.read()) + sc_biguint<7>(ci50_cast_fu_18284_p1.read()));
}

void ShuffleNetV2::thread_tmp_505_cast_fu_18309_p1() {
    tmp_505_cast_fu_18309_p1 = esl_sext<13,7>(tmp_504_fu_18304_p2.read());
}

void ShuffleNetV2::thread_tmp_505_fu_9448_p2() {
    tmp_505_fu_9448_p2 = (!p_shl313_cast_fu_9432_p1.read().is_01() || !p_shl314_cast_fu_9444_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl313_cast_fu_9432_p1.read()) - sc_biguint<14>(p_shl314_cast_fu_9444_p1.read()));
}

void ShuffleNetV2::thread_tmp_506_fu_9458_p3() {
    tmp_506_fu_9458_p3 = esl_concat<5,5>(co42_reg_3506.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_507_fu_17966_p2() {
    tmp_507_fu_17966_p2 = (!p_shl126_cast_fu_17950_p1.read().is_01() || !p_shl127_cast_fu_17962_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl126_cast_fu_17950_p1.read()) - sc_biguint<7>(p_shl127_cast_fu_17962_p1.read()));
}

void ShuffleNetV2::thread_tmp_508_fu_17982_p2() {
    tmp_508_fu_17982_p2 = (!tmp37_fu_17976_p2.read().is_01() || !co111_cast424_cast_reg_31850.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp37_fu_17976_p2.read()) + sc_biguint<8>(co111_cast424_cast_reg_31850.read()));
}

void ShuffleNetV2::thread_tmp_509_fu_9470_p3() {
    tmp_509_fu_9470_p3 = esl_concat<5,3>(co42_reg_3506.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_510_cast_fu_17995_p1() {
    tmp_510_cast_fu_17995_p1 = esl_zext<12,9>(tmp_677_cast_fu_17992_p1.read());
}

void ShuffleNetV2::thread_tmp_510_fu_9482_p2() {
    tmp_510_fu_9482_p2 = (!p_shl311_cast_fu_9466_p1.read().is_01() || !p_shl312_cast_fu_9478_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl311_cast_fu_9466_p1.read()) - sc_biguint<11>(p_shl312_cast_fu_9478_p1.read()));
}

void ShuffleNetV2::thread_tmp_511_fu_17987_p2() {
    tmp_511_fu_17987_p2 = (!co111_cast_reg_31845.read().is_01() || !tmp_507_fu_17966_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(co111_cast_reg_31845.read()) + sc_biguint<7>(tmp_507_fu_17966_p2.read()));
}

void ShuffleNetV2::thread_tmp_512_cast_fu_18055_p1() {
    tmp_512_cast_fu_18055_p1 = esl_zext<35,32>(tmp_679_cast_fu_18052_p1.read());
}

void ShuffleNetV2::thread_tmp_512_fu_9351_p2() {
    tmp_512_fu_9351_p2 = (!tmp_489_reg_28890.read().is_01() || !tmp_196_cast_fu_9347_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_489_reg_28890.read()) + sc_biguint<15>(tmp_196_cast_fu_9347_p1.read()));
}

void ShuffleNetV2::thread_tmp_513_fu_18546_p2() {
    tmp_513_fu_18546_p2 = (!p_shl124_cast_fu_18530_p1.read().is_01() || !p_shl125_cast_fu_18542_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl124_cast_fu_18530_p1.read()) - sc_biguint<7>(p_shl125_cast_fu_18542_p1.read()));
}

void ShuffleNetV2::thread_tmp_514_cast_fu_14966_p1() {
    tmp_514_cast_fu_14966_p1 = esl_zext<7,4>(p_lshr_f7_cast_fu_14956_p4.read());
}

void ShuffleNetV2::thread_tmp_514_fu_18562_p2() {
    tmp_514_fu_18562_p2 = (!i99_cast1_reg_32055.read().is_01() || !tmp40_fu_18556_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(i99_cast1_reg_32055.read()) + sc_biguint<11>(tmp40_fu_18556_p2.read()));
}

void ShuffleNetV2::thread_tmp_515_fu_18572_p1() {
    tmp_515_fu_18572_p1 = esl_zext<64,11>(tmp_514_reg_32076.read());
}

void ShuffleNetV2::thread_tmp_516_fu_18567_p2() {
    tmp_516_fu_18567_p2 = (!tmp_513_fu_18546_p2.read().is_01() || !i99_cast_reg_32050.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_513_fu_18546_p2.read()) + sc_biguint<7>(i99_cast_reg_32050.read()));
}

void ShuffleNetV2::thread_tmp_517_fu_18579_p1() {
    tmp_517_fu_18579_p1 = esl_zext<64,32>(tmp_670_cast_fu_18576_p1.read());
}

void ShuffleNetV2::thread_tmp_518_cast_cast_fu_15246_p1() {
    tmp_518_cast_cast_fu_15246_p1 = esl_sext<9,7>(tmp_382_fu_15240_p2.read());
}

void ShuffleNetV2::thread_tmp_518_fu_18353_p2() {
    tmp_518_fu_18353_p2 = (!p_shl128_cast_fu_18337_p1.read().is_01() || !p_shl129_cast_fu_18349_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl128_cast_fu_18337_p1.read()) - sc_biguint<8>(p_shl129_cast_fu_18349_p1.read()));
}

void ShuffleNetV2::thread_tmp_519_fu_18369_p2() {
    tmp_519_fu_18369_p2 = (!tmp39_fu_18363_p2.read().is_01() || !co113_cast_reg_31985.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp39_fu_18363_p2.read()) + sc_biguint<11>(co113_cast_reg_31985.read()));
}

void ShuffleNetV2::thread_tmp_520_cast_fu_15266_p1() {
    tmp_520_cast_fu_15266_p1 = esl_sext<10,9>(tmp_383_reg_30930.read());
}

void ShuffleNetV2::thread_tmp_520_fu_18398_p2() {
    tmp_520_fu_18398_p2 = (!p_shl130_cast_fu_18382_p1.read().is_01() || !p_shl131_cast_fu_18394_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl130_cast_fu_18382_p1.read()) - sc_biguint<7>(p_shl131_cast_fu_18394_p1.read()));
}

}

