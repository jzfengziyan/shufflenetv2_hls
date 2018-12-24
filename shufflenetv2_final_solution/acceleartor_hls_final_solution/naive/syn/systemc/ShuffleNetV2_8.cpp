#include "ShuffleNetV2.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void ShuffleNetV2::thread_tmp_1601_fu_25002_p2() {
    tmp_1601_fu_25002_p2 = (!ap_const_lv5_1.is_01())? sc_lv<5>(): i150_reg_5442.read() << (unsigned short)ap_const_lv5_1.to_uint();
}

void ShuffleNetV2::thread_tmp_1602_fu_25023_p3() {
    tmp_1602_fu_25023_p3 = esl_concat<8,7>(tmp_820_fu_25018_p2.read(), ap_const_lv7_0);
}

void ShuffleNetV2::thread_tmp_1603_fu_25031_p3() {
    tmp_1603_fu_25031_p3 = esl_concat<8,5>(tmp_820_fu_25018_p2.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1604_fu_25043_p2() {
    tmp_1604_fu_25043_p2 = (!tmp_1602_fu_25023_p3.read().is_01() || !p_shl590_cast_fu_25039_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1602_fu_25023_p3.read()) - sc_bigint<15>(p_shl590_cast_fu_25039_p1.read()));
}

void ShuffleNetV2::thread_tmp_1605_fu_25049_p2() {
    tmp_1605_fu_25049_p2 = (!tmp_805_cast_reg_36445.read().is_01() || !tmp_1604_fu_25043_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(tmp_805_cast_reg_36445.read()) + sc_biguint<15>(tmp_1604_fu_25043_p2.read()));
}

void ShuffleNetV2::thread_tmp_1606_fu_25087_p3() {
    tmp_1606_fu_25087_p3 = esl_concat<12,5>(tmp_822_reg_36468.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1607_fu_25098_p3() {
    tmp_1607_fu_25098_p3 = esl_concat<12,3>(tmp_822_reg_36468.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1608_fu_25109_p2() {
    tmp_1608_fu_25109_p2 = (!p_shl587_cast_fu_25094_p1.read().is_01() || !p_shl588_cast_fu_25105_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(p_shl587_cast_fu_25094_p1.read()) - sc_biguint<18>(p_shl588_cast_fu_25105_p1.read()));
}

void ShuffleNetV2::thread_tmp_1609_fu_25119_p2() {
    tmp_1609_fu_25119_p2 = (!tmp_806_cast_reg_36450.read().is_01() || !tmp_1970_cast_fu_25115_p1.read().is_01())? sc_lv<19>(): (sc_biguint<19>(tmp_806_cast_reg_36450.read()) + sc_bigint<19>(tmp_1970_cast_fu_25115_p1.read()));
}

void ShuffleNetV2::thread_tmp_1610_fu_25648_p1() {
    tmp_1610_fu_25648_p1 = co152_reg_5541.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1611_fu_25664_p2() {
    tmp_1611_fu_25664_p2 = (!ap_const_lv5_3.is_01())? sc_lv<5>(): co152_reg_5541.read() << (unsigned short)ap_const_lv5_3.to_uint();
}

void ShuffleNetV2::thread_tmp_1612_fu_25552_p1() {
    tmp_1612_fu_25552_p1 = k56_reg_5530.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1613_fu_25339_p1() {
    tmp_1613_fu_25339_p1 = i156_reg_5508.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1614_fu_25400_p3() {
    tmp_1614_fu_25400_p3 = esl_concat<8,2>(tmp_836_reg_36584.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1615_fu_25407_p1() {
    tmp_1615_fu_25407_p1 = esl_sext<34,10>(tmp_1614_fu_25400_p3.read());
}

void ShuffleNetV2::thread_tmp_1616_fu_25415_p2() {
    tmp_1616_fu_25415_p2 = (!p_shl594_cast_fu_25411_p1.read().is_01() || !tmp_837_cast1_fu_25396_p1.read().is_01())? sc_lv<35>(): (sc_biguint<35>(p_shl594_cast_fu_25411_p1.read()) - sc_biguint<35>(tmp_837_cast1_fu_25396_p1.read()));
}

void ShuffleNetV2::thread_tmp_1617_fu_25425_p2() {
    tmp_1617_fu_25425_p2 = (!tmp_1980_cast_fu_25421_p1.read().is_01() || !tmp_823_cast_reg_36553.read().is_01())? sc_lv<36>(): (sc_bigint<36>(tmp_1980_cast_fu_25421_p1.read()) + sc_biguint<36>(tmp_823_cast_reg_36553.read()));
}

void ShuffleNetV2::thread_tmp_1618_fu_25430_p1() {
    tmp_1618_fu_25430_p1 = tmp_1617_fu_25425_p2.read().range(11-1, 0);
}

void ShuffleNetV2::thread_tmp_1619_fu_25434_p1() {
    tmp_1619_fu_25434_p1 = tmp_1617_fu_25425_p2.read().range(9-1, 0);
}

void ShuffleNetV2::thread_tmp_1620_cast_fu_18133_p1() {
    tmp_1620_cast_fu_18133_p1 = esl_zext<64,15>(tmp_1326_fu_18128_p2.read());
}

void ShuffleNetV2::thread_tmp_1620_fu_25470_p2() {
    tmp_1620_fu_25470_p2 = (!p_shl593_cast_fu_25463_p3.read().is_01() || !tmp_1618_reg_36596.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl593_cast_fu_25463_p3.read()) - sc_biguint<11>(tmp_1618_reg_36596.read()));
}

void ShuffleNetV2::thread_tmp_1621_cast_fu_18345_p1() {
    tmp_1621_cast_fu_18345_p1 = esl_zext<64,14>(tmp_1327_reg_34379.read());
}

void ShuffleNetV2::thread_tmp_1621_fu_25475_p2() {
    tmp_1621_fu_25475_p2 = (!tmp_1620_fu_25470_p2.read().is_01() || !tmp_830_cast_reg_36571.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_1620_fu_25470_p2.read()) + sc_biguint<11>(tmp_830_cast_reg_36571.read()));
}

void ShuffleNetV2::thread_tmp_1622_cast_fu_18340_p1() {
    tmp_1622_cast_fu_18340_p1 = esl_zext<64,15>(tmp_1328_fu_18335_p2.read());
}

void ShuffleNetV2::thread_tmp_1622_fu_25441_p3() {
    tmp_1622_fu_25441_p3 = esl_concat<10,2>(tmp_838_reg_36590.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1623_fu_25452_p2() {
    tmp_1623_fu_25452_p2 = (!p_shl592_cast_fu_25448_p1.read().is_01() || !tmp_839_cast_fu_25438_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl592_cast_fu_25448_p1.read()) - sc_biguint<13>(tmp_839_cast_fu_25438_p1.read()));
}

void ShuffleNetV2::thread_tmp_1624_fu_25458_p2() {
    tmp_1624_fu_25458_p2 = (!tmp_1623_fu_25452_p2.read().is_01() || !tmp_823_cast1_reg_36548.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_1623_fu_25452_p2.read()) + sc_biguint<13>(tmp_823_cast1_reg_36548.read()));
}

void ShuffleNetV2::thread_tmp_1625_fu_25483_p3() {
    tmp_1625_fu_25483_p3 = esl_concat<13,2>(tmp_1624_reg_36606.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1626_fu_25494_p2() {
    tmp_1626_fu_25494_p2 = (!p_shl267_fu_25490_p1.read().is_01() || !tmp_1987_cast_fu_25480_p1.read().is_01())? sc_lv<64>(): (sc_bigint<64>(p_shl267_fu_25490_p1.read()) - sc_bigint<64>(tmp_1987_cast_fu_25480_p1.read()));
}

void ShuffleNetV2::thread_tmp_1627_fu_25500_p2() {
    tmp_1627_fu_25500_p2 = (!tmp_1626_fu_25494_p2.read().is_01() || !tmp_830_reg_36566.read().is_01())? sc_lv<64>(): (sc_biguint<64>(tmp_1626_fu_25494_p2.read()) + sc_biguint<64>(tmp_830_reg_36566.read()));
}

void ShuffleNetV2::thread_tmp_1628_fu_26028_p3() {
    tmp_1628_fu_26028_p3 = esl_concat<7,3>(co154_reg_5596.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1629_fu_26040_p3() {
    tmp_1629_fu_26040_p3 = esl_concat<7,1>(co154_reg_5596.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1630_fu_26052_p2() {
    tmp_1630_fu_26052_p2 = (!p_shl601_cast_fu_26036_p1.read().is_01() || !p_shl602_cast_fu_26048_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl601_cast_fu_26036_p1.read()) - sc_biguint<11>(p_shl602_cast_fu_26048_p1.read()));
}

void ShuffleNetV2::thread_tmp_1631_fu_26068_p3() {
    tmp_1631_fu_26068_p3 = esl_concat<8,3>(tmp_841_fu_26062_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1632_cast_fu_18625_p1() {
    tmp_1632_cast_fu_18625_p1 = esl_sext<64,13>(tmp_1334_reg_34438.read());
}

void ShuffleNetV2::thread_tmp_1632_fu_26080_p3() {
    tmp_1632_fu_26080_p3 = esl_concat<8,1>(tmp_841_fu_26062_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1633_fu_26092_p2() {
    tmp_1633_fu_26092_p2 = (!p_shl599_cast_fu_26076_p1.read().is_01() || !p_shl600_cast_fu_26088_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(p_shl599_cast_fu_26076_p1.read()) - sc_biguint<12>(p_shl600_cast_fu_26088_p1.read()));
}

void ShuffleNetV2::thread_tmp_1634_fu_25932_p1() {
    tmp_1634_fu_25932_p1 = k58_reg_5585.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1635_fu_25735_p1() {
    tmp_1635_fu_25735_p1 = i158_reg_5563.read().range(4-1, 0);
}

void ShuffleNetV2::thread_tmp_1636_fu_25755_p2() {
    tmp_1636_fu_25755_p2 = (!ap_const_lv5_1.is_01())? sc_lv<5>(): i158_reg_5563.read() << (unsigned short)ap_const_lv5_1.to_uint();
}

void ShuffleNetV2::thread_tmp_1637_cast_fu_18597_p1() {
    tmp_1637_cast_fu_18597_p1 = esl_sext<18,17>(tmp_1337_fu_18591_p2.read());
}

void ShuffleNetV2::thread_tmp_1637_fu_25776_p3() {
    tmp_1637_fu_25776_p3 = esl_concat<8,7>(tmp_849_fu_25771_p2.read(), ap_const_lv7_0);
}

void ShuffleNetV2::thread_tmp_1638_cast_fu_18606_p1() {
    tmp_1638_cast_fu_18606_p1 = esl_sext<33,18>(tmp_1338_fu_18601_p2.read());
}

void ShuffleNetV2::thread_tmp_1638_fu_25784_p3() {
    tmp_1638_fu_25784_p3 = esl_concat<8,5>(tmp_849_fu_25771_p2.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1639_fu_25796_p2() {
    tmp_1639_fu_25796_p2 = (!tmp_1637_fu_25776_p3.read().is_01() || !p_shl598_cast_fu_25792_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1637_fu_25776_p3.read()) - sc_bigint<15>(p_shl598_cast_fu_25792_p1.read()));
}

void ShuffleNetV2::thread_tmp_1640_fu_25802_p2() {
    tmp_1640_fu_25802_p2 = (!tmp_833_cast_reg_36696.read().is_01() || !tmp_1639_fu_25796_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(tmp_833_cast_reg_36696.read()) + sc_biguint<15>(tmp_1639_fu_25796_p2.read()));
}

void ShuffleNetV2::thread_tmp_1641_fu_25840_p3() {
    tmp_1641_fu_25840_p3 = esl_concat<12,5>(tmp_851_reg_36719.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1642_fu_25851_p3() {
    tmp_1642_fu_25851_p3 = esl_concat<12,3>(tmp_851_reg_36719.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1643_fu_25862_p2() {
    tmp_1643_fu_25862_p2 = (!p_shl595_cast_fu_25847_p1.read().is_01() || !p_shl596_cast_fu_25858_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(p_shl595_cast_fu_25847_p1.read()) - sc_biguint<18>(p_shl596_cast_fu_25858_p1.read()));
}

void ShuffleNetV2::thread_tmp_1644_fu_25872_p2() {
    tmp_1644_fu_25872_p2 = (!tmp_834_cast1_reg_36701.read().is_01() || !tmp_2010_cast_fu_25868_p1.read().is_01())? sc_lv<19>(): (sc_biguint<19>(tmp_834_cast1_reg_36701.read()) + sc_bigint<19>(tmp_2010_cast_fu_25868_p1.read()));
}

void ShuffleNetV2::thread_tmp_1645_fu_26239_p1() {
    tmp_1645_fu_26239_p1 = co156_reg_5629.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1646_fu_26255_p2() {
    tmp_1646_fu_26255_p2 = (!ap_const_lv5_3.is_01())? sc_lv<5>(): co156_reg_5629.read() << (unsigned short)ap_const_lv5_3.to_uint();
}

void ShuffleNetV2::thread_tmp_1647_cast_fu_18895_p1() {
    tmp_1647_cast_fu_18895_p1 = esl_sext<36,35>(tmp_1344_fu_18889_p2.read());
}

void ShuffleNetV2::thread_tmp_1647_fu_26122_p2() {
    tmp_1647_fu_26122_p2 = (!tmp_853_cast2_fu_26118_p1.read().is_01() || !tmp_1993_cast_reg_36781.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp_853_cast2_fu_26118_p1.read()) + sc_bigint<12>(tmp_1993_cast_reg_36781.read()));
}

void ShuffleNetV2::thread_tmp_1648_fu_26127_p1() {
    tmp_1648_fu_26127_p1 = tmp_1647_fu_26122_p2.read().range(10-1, 0);
}

void ShuffleNetV2::thread_tmp_1649_fu_26147_p2() {
    tmp_1649_fu_26147_p2 = (!p_shl605_cast_fu_26131_p3.read().is_01() || !p_shl606_cast_fu_26139_p3.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl605_cast_fu_26131_p3.read()) - sc_biguint<13>(p_shl606_cast_fu_26139_p3.read()));
}

void ShuffleNetV2::thread_tmp_1650_fu_26153_p2() {
    tmp_1650_fu_26153_p2 = (!tmp_853_cast1_fu_26114_p1.read().is_01() || !tmp_1996_cast_reg_36786.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_853_cast1_fu_26114_p1.read()) + sc_bigint<13>(tmp_1996_cast_reg_36786.read()));
}

void ShuffleNetV2::thread_tmp_1651_cast_fu_18998_p1() {
    tmp_1651_cast_fu_18998_p1 = esl_zext<64,10>(tmp_1349_reg_34587.read());
}

void ShuffleNetV2::thread_tmp_1651_fu_26158_p1() {
    tmp_1651_fu_26158_p1 = tmp_1650_fu_26153_p2.read().range(11-1, 0);
}

void ShuffleNetV2::thread_tmp_1652_fu_26178_p2() {
    tmp_1652_fu_26178_p2 = (!p_shl603_cast_fu_26162_p3.read().is_01() || !p_shl604_cast_fu_26170_p3.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl603_cast_fu_26162_p3.read()) - sc_biguint<14>(p_shl604_cast_fu_26170_p3.read()));
}

void ShuffleNetV2::thread_tmp_1653_fu_26204_p2() {
    tmp_1653_fu_26204_p2 = (!tmp_1649_reg_36799.read().is_01() || !tmp_858_cast_fu_26200_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_1649_reg_36799.read()) + sc_biguint<13>(tmp_858_cast_fu_26200_p1.read()));
}

void ShuffleNetV2::thread_tmp_1654_fu_26209_p2() {
    tmp_1654_fu_26209_p2 = (!tmp_1652_reg_36804.read().is_01() || !tmp_858_cast1_fu_26196_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1652_reg_36804.read()) + sc_biguint<14>(tmp_858_cast1_fu_26196_p1.read()));
}

void ShuffleNetV2::thread_tmp_1655_cast_fu_18962_p1() {
    tmp_1655_cast_fu_18962_p1 = esl_sext<64,12>(tmp_1353_reg_34581.read());
}

void ShuffleNetV2::thread_tmp_1655_fu_26523_p1() {
    tmp_1655_fu_26523_p1 = k60_reg_5673.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1656_fu_26326_p1() {
    tmp_1656_fu_26326_p1 = i162_reg_5651.read().range(4-1, 0);
}

void ShuffleNetV2::thread_tmp_1657_fu_26346_p2() {
    tmp_1657_fu_26346_p2 = (!ap_const_lv5_1.is_01())? sc_lv<5>(): i162_reg_5651.read() << (unsigned short)ap_const_lv5_1.to_uint();
}

void ShuffleNetV2::thread_tmp_1658_fu_26367_p3() {
    tmp_1658_fu_26367_p3 = esl_concat<8,7>(tmp_866_fu_26362_p2.read(), ap_const_lv7_0);
}

void ShuffleNetV2::thread_tmp_1659_fu_26375_p3() {
    tmp_1659_fu_26375_p3 = esl_concat<8,5>(tmp_866_fu_26362_p2.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1660_fu_26387_p2() {
    tmp_1660_fu_26387_p2 = (!tmp_1658_fu_26367_p3.read().is_01() || !p_shl610_cast_fu_26383_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1658_fu_26367_p3.read()) - sc_bigint<15>(p_shl610_cast_fu_26383_p1.read()));
}

void ShuffleNetV2::thread_tmp_1661_fu_26393_p2() {
    tmp_1661_fu_26393_p2 = (!tmp_855_cast_reg_36858.read().is_01() || !tmp_1660_fu_26387_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(tmp_855_cast_reg_36858.read()) + sc_biguint<15>(tmp_1660_fu_26387_p2.read()));
}

void ShuffleNetV2::thread_tmp_1662_fu_26431_p3() {
    tmp_1662_fu_26431_p3 = esl_concat<12,5>(tmp_868_reg_36881.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1663_fu_26442_p3() {
    tmp_1663_fu_26442_p3 = esl_concat<12,3>(tmp_868_reg_36881.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1664_fu_26453_p2() {
    tmp_1664_fu_26453_p2 = (!p_shl607_cast_fu_26438_p1.read().is_01() || !p_shl608_cast_fu_26449_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(p_shl607_cast_fu_26438_p1.read()) - sc_biguint<18>(p_shl608_cast_fu_26449_p1.read()));
}

void ShuffleNetV2::thread_tmp_1665_fu_26463_p2() {
    tmp_1665_fu_26463_p2 = (!tmp_856_cast1_reg_36863.read().is_01() || !tmp_2037_cast_fu_26459_p1.read().is_01())? sc_lv<19>(): (sc_biguint<19>(tmp_856_cast1_reg_36863.read()) + sc_bigint<19>(tmp_2037_cast_fu_26459_p1.read()));
}

void ShuffleNetV2::thread_tmp_1666_fu_26984_p1() {
    tmp_1666_fu_26984_p1 = co160_reg_5750.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1667_fu_27000_p2() {
    tmp_1667_fu_27000_p2 = (!ap_const_lv5_3.is_01())? sc_lv<5>(): co160_reg_5750.read() << (unsigned short)ap_const_lv5_3.to_uint();
}

void ShuffleNetV2::thread_tmp_1668_fu_26888_p1() {
    tmp_1668_fu_26888_p1 = k62_reg_5739.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1669_fu_26675_p1() {
    tmp_1669_fu_26675_p1 = i168_reg_5717.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1670_fu_26736_p3() {
    tmp_1670_fu_26736_p3 = esl_concat<8,2>(tmp_881_reg_36997.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1671_cast_fu_19390_p1() {
    tmp_1671_cast_fu_19390_p1 = esl_sext<64,13>(tmp_1365_reg_34689.read());
}

void ShuffleNetV2::thread_tmp_1671_fu_26743_p1() {
    tmp_1671_fu_26743_p1 = esl_sext<34,10>(tmp_1670_fu_26736_p3.read());
}

void ShuffleNetV2::thread_tmp_1672_fu_26751_p2() {
    tmp_1672_fu_26751_p2 = (!p_shl614_cast_fu_26747_p1.read().is_01() || !tmp_882_cast1_fu_26732_p1.read().is_01())? sc_lv<35>(): (sc_biguint<35>(p_shl614_cast_fu_26747_p1.read()) - sc_biguint<35>(tmp_882_cast1_fu_26732_p1.read()));
}

void ShuffleNetV2::thread_tmp_1673_fu_26761_p2() {
    tmp_1673_fu_26761_p2 = (!tmp_2047_cast_fu_26757_p1.read().is_01() || !tmp_869_cast_reg_36966.read().is_01())? sc_lv<36>(): (sc_bigint<36>(tmp_2047_cast_fu_26757_p1.read()) + sc_biguint<36>(tmp_869_cast_reg_36966.read()));
}

void ShuffleNetV2::thread_tmp_1674_fu_26766_p1() {
    tmp_1674_fu_26766_p1 = tmp_1673_fu_26761_p2.read().range(11-1, 0);
}

void ShuffleNetV2::thread_tmp_1675_fu_26770_p1() {
    tmp_1675_fu_26770_p1 = tmp_1673_fu_26761_p2.read().range(9-1, 0);
}

void ShuffleNetV2::thread_tmp_1676_cast_fu_19362_p1() {
    tmp_1676_cast_fu_19362_p1 = esl_sext<18,17>(tmp_1368_fu_19356_p2.read());
}

void ShuffleNetV2::thread_tmp_1676_fu_26806_p2() {
    tmp_1676_fu_26806_p2 = (!p_shl613_cast_fu_26799_p3.read().is_01() || !tmp_1674_reg_37009.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl613_cast_fu_26799_p3.read()) - sc_biguint<11>(tmp_1674_reg_37009.read()));
}

void ShuffleNetV2::thread_tmp_1677_cast_fu_19371_p1() {
    tmp_1677_cast_fu_19371_p1 = esl_sext<33,18>(tmp_1369_fu_19366_p2.read());
}

void ShuffleNetV2::thread_tmp_1677_fu_26811_p2() {
    tmp_1677_fu_26811_p2 = (!tmp_1676_fu_26806_p2.read().is_01() || !tmp_876_cast_reg_36984.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_1676_fu_26806_p2.read()) + sc_biguint<11>(tmp_876_cast_reg_36984.read()));
}

void ShuffleNetV2::thread_tmp_1678_fu_26777_p3() {
    tmp_1678_fu_26777_p3 = esl_concat<10,2>(tmp_883_reg_37003.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1679_fu_26788_p2() {
    tmp_1679_fu_26788_p2 = (!p_shl612_cast_fu_26784_p1.read().is_01() || !tmp_885_cast1_fu_26774_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl612_cast_fu_26784_p1.read()) - sc_biguint<13>(tmp_885_cast1_fu_26774_p1.read()));
}

void ShuffleNetV2::thread_tmp_1680_fu_26794_p2() {
    tmp_1680_fu_26794_p2 = (!tmp_1679_fu_26788_p2.read().is_01() || !tmp_869_cast1_reg_36961.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_1679_fu_26788_p2.read()) + sc_biguint<13>(tmp_869_cast1_reg_36961.read()));
}

void ShuffleNetV2::thread_tmp_1681_fu_26819_p3() {
    tmp_1681_fu_26819_p3 = esl_concat<13,2>(tmp_1680_reg_37019.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1682_fu_26830_p2() {
    tmp_1682_fu_26830_p2 = (!p_shl273_fu_26826_p1.read().is_01() || !tmp_2054_cast_fu_26816_p1.read().is_01())? sc_lv<64>(): (sc_bigint<64>(p_shl273_fu_26826_p1.read()) - sc_bigint<64>(tmp_2054_cast_fu_26816_p1.read()));
}

void ShuffleNetV2::thread_tmp_1683_fu_26836_p2() {
    tmp_1683_fu_26836_p2 = (!tmp_1682_fu_26830_p2.read().is_01() || !tmp_876_reg_36979.read().is_01())? sc_lv<64>(): (sc_biguint<64>(tmp_1682_fu_26830_p2.read()) + sc_biguint<64>(tmp_876_reg_36979.read()));
}

void ShuffleNetV2::thread_tmp_1684_fu_27368_p3() {
    tmp_1684_fu_27368_p3 = esl_concat<7,3>(co162_reg_5805.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1685_fu_27380_p3() {
    tmp_1685_fu_27380_p3 = esl_concat<7,1>(co162_reg_5805.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1686_fu_27392_p2() {
    tmp_1686_fu_27392_p2 = (!p_shl619_cast_fu_27376_p1.read().is_01() || !p_shl620_cast_fu_27388_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl619_cast_fu_27376_p1.read()) - sc_biguint<11>(p_shl620_cast_fu_27388_p1.read()));
}

void ShuffleNetV2::thread_tmp_1687_fu_27276_p1() {
    tmp_1687_fu_27276_p1 = k64_reg_5794.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1688_fu_27071_p1() {
    tmp_1688_fu_27071_p1 = i170_reg_5772.read().range(4-1, 0);
}

void ShuffleNetV2::thread_tmp_1689_fu_27091_p2() {
    tmp_1689_fu_27091_p2 = (!ap_const_lv5_1.is_01())? sc_lv<5>(): i170_reg_5772.read() << (unsigned short)ap_const_lv5_1.to_uint();
}

void ShuffleNetV2::thread_tmp_1690_fu_27112_p3() {
    tmp_1690_fu_27112_p3 = esl_concat<8,7>(tmp_893_fu_27107_p2.read(), ap_const_lv7_0);
}

void ShuffleNetV2::thread_tmp_1691_fu_27120_p3() {
    tmp_1691_fu_27120_p3 = esl_concat<8,5>(tmp_893_fu_27107_p2.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1692_fu_27132_p2() {
    tmp_1692_fu_27132_p2 = (!tmp_1690_fu_27112_p3.read().is_01() || !p_shl618_cast_fu_27128_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1690_fu_27112_p3.read()) - sc_bigint<15>(p_shl618_cast_fu_27128_p1.read()));
}

void ShuffleNetV2::thread_tmp_1693_fu_27138_p2() {
    tmp_1693_fu_27138_p2 = (!tmp_878_cast_reg_37109.read().is_01() || !tmp_1692_fu_27132_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(tmp_878_cast_reg_37109.read()) + sc_biguint<15>(tmp_1692_fu_27132_p2.read()));
}

void ShuffleNetV2::thread_tmp_1694_fu_27176_p3() {
    tmp_1694_fu_27176_p3 = esl_concat<11,5>(tmp_895_reg_37132.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1695_fu_27183_p1() {
    tmp_1695_fu_27183_p1 = esl_sext<17,16>(tmp_1694_fu_27176_p3.read());
}

void ShuffleNetV2::thread_tmp_1696_fu_27191_p3() {
    tmp_1696_fu_27191_p3 = esl_concat<11,3>(tmp_895_reg_37132.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1697_fu_27198_p1() {
    tmp_1697_fu_27198_p1 = esl_sext<15,14>(tmp_1696_fu_27191_p3.read());
}

void ShuffleNetV2::thread_tmp_1698_cast_fu_19620_p1() {
    tmp_1698_cast_fu_19620_p1 = esl_zext<64,15>(tmp_1389_fu_19615_p2.read());
}

void ShuffleNetV2::thread_tmp_1698_fu_27206_p2() {
    tmp_1698_fu_27206_p2 = (!p_shl615_cast_fu_27187_p1.read().is_01() || !p_shl616_cast_fu_27202_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(p_shl615_cast_fu_27187_p1.read()) - sc_biguint<18>(p_shl616_cast_fu_27202_p1.read()));
}

void ShuffleNetV2::thread_tmp_1699_cast_fu_19822_p1() {
    tmp_1699_cast_fu_19822_p1 = esl_zext<64,15>(tmp_1390_fu_19817_p2.read());
}

void ShuffleNetV2::thread_tmp_1699_fu_27216_p2() {
    tmp_1699_fu_27216_p2 = (!tmp_879_cast_reg_37114.read().is_01() || !tmp_2076_cast_fu_27212_p1.read().is_01())? sc_lv<19>(): (sc_biguint<19>(tmp_879_cast_reg_37114.read()) + sc_bigint<19>(tmp_2076_cast_fu_27212_p1.read()));
}

void ShuffleNetV2::thread_tmp_1700_cast_fu_19832_p1() {
    tmp_1700_cast_fu_19832_p1 = esl_zext<64,14>(tmp_1391_reg_34841.read());
}

void ShuffleNetV2::thread_tmp_1700_fu_27495_p3() {
    tmp_1700_fu_27495_p3 = esl_concat<7,3>(co164_reg_5838.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1701_fu_27507_p3() {
    tmp_1701_fu_27507_p3 = esl_concat<7,1>(co164_reg_5838.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1702_fu_27519_p2() {
    tmp_1702_fu_27519_p2 = (!p_shl625_cast_fu_27503_p1.read().is_01() || !p_shl626_cast_fu_27515_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl625_cast_fu_27503_p1.read()) - sc_biguint<11>(p_shl626_cast_fu_27515_p1.read()));
}

void ShuffleNetV2::thread_tmp_1703_fu_27535_p3() {
    tmp_1703_fu_27535_p3 = esl_concat<8,3>(tmp_896_fu_27529_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1704_fu_27547_p3() {
    tmp_1704_fu_27547_p3 = esl_concat<8,1>(tmp_896_fu_27529_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1705_fu_27559_p2() {
    tmp_1705_fu_27559_p2 = (!p_shl623_cast_fu_27543_p1.read().is_01() || !p_shl624_cast_fu_27555_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(p_shl623_cast_fu_27543_p1.read()) - sc_biguint<12>(p_shl624_cast_fu_27555_p1.read()));
}

void ShuffleNetV2::thread_tmp_1706_fu_27418_p2() {
    tmp_1706_fu_27418_p2 = (!tmp_2060_cast_reg_37194.read().is_01() || !tmp_897_cast1_fu_27414_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(tmp_2060_cast_reg_37194.read()) + sc_biguint<12>(tmp_897_cast1_fu_27414_p1.read()));
}

void ShuffleNetV2::thread_tmp_1707_fu_27423_p1() {
    tmp_1707_fu_27423_p1 = tmp_1706_fu_27418_p2.read().range(11-1, 0);
}

void ShuffleNetV2::thread_tmp_1708_fu_27435_p3() {
    tmp_1708_fu_27435_p3 = esl_concat<12,1>(tmp_1706_fu_27418_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1709_fu_27447_p2() {
    tmp_1709_fu_27447_p2 = (!p_shl621_cast_fu_27427_p3.read().is_01() || !p_shl622_cast_fu_27443_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl621_cast_fu_27427_p3.read()) - sc_bigint<14>(p_shl622_cast_fu_27443_p1.read()));
}

void ShuffleNetV2::thread_tmp_1710_cast_fu_20112_p1() {
    tmp_1710_cast_fu_20112_p1 = esl_sext<64,13>(tmp_1397_reg_34895.read());
}

void ShuffleNetV2::thread_tmp_1710_fu_27706_p1() {
    tmp_1710_fu_27706_p1 = co166_reg_5871.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1711_fu_27722_p2() {
    tmp_1711_fu_27722_p2 = (!ap_const_lv5_3.is_01())? sc_lv<5>(): co166_reg_5871.read() << (unsigned short)ap_const_lv5_3.to_uint();
}

void ShuffleNetV2::thread_tmp_1712_fu_27589_p2() {
    tmp_1712_fu_27589_p2 = (!tmp_899_cast_fu_27585_p1.read().is_01() || !tmp_2083_cast_reg_37243.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_899_cast_fu_27585_p1.read()) + sc_bigint<13>(tmp_2083_cast_reg_37243.read()));
}

void ShuffleNetV2::thread_tmp_1713_fu_27594_p1() {
    tmp_1713_fu_27594_p1 = tmp_1712_fu_27589_p2.read().range(11-1, 0);
}

void ShuffleNetV2::thread_tmp_1714_fu_27614_p2() {
    tmp_1714_fu_27614_p2 = (!p_shl629_cast_fu_27598_p3.read().is_01() || !p_shl630_cast_fu_27606_p3.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl629_cast_fu_27598_p3.read()) - sc_biguint<14>(p_shl630_cast_fu_27606_p3.read()));
}

void ShuffleNetV2::thread_tmp_1715_cast_fu_20084_p1() {
    tmp_1715_cast_fu_20084_p1 = esl_sext<18,17>(tmp_1400_fu_20078_p2.read());
}

void ShuffleNetV2::thread_tmp_1715_fu_27620_p2() {
    tmp_1715_fu_27620_p2 = (!tmp_899_cast1_fu_27581_p1.read().is_01() || !tmp_2080_cast_reg_37238.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp_899_cast1_fu_27581_p1.read()) + sc_bigint<12>(tmp_2080_cast_reg_37238.read()));
}

void ShuffleNetV2::thread_tmp_1716_cast_fu_20093_p1() {
    tmp_1716_cast_fu_20093_p1 = esl_sext<33,18>(tmp_1401_fu_20088_p2.read());
}

void ShuffleNetV2::thread_tmp_1716_fu_27625_p1() {
    tmp_1716_fu_27625_p1 = tmp_1715_fu_27620_p2.read().range(10-1, 0);
}

void ShuffleNetV2::thread_tmp_1717_fu_27645_p2() {
    tmp_1717_fu_27645_p2 = (!p_shl627_cast_fu_27629_p3.read().is_01() || !p_shl628_cast_fu_27637_p3.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl627_cast_fu_27629_p3.read()) - sc_biguint<13>(p_shl628_cast_fu_27637_p3.read()));
}

void ShuffleNetV2::thread_tmp_1718_fu_27469_p2() {
    tmp_1718_fu_27469_p2 = (!tmp_1709_reg_37207.read().is_01() || !tmp_900_cast_fu_27465_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1709_reg_37207.read()) + sc_biguint<14>(tmp_900_cast_fu_27465_p1.read()));
}

void ShuffleNetV2::thread_tmp_1719_fu_27671_p2() {
    tmp_1719_fu_27671_p2 = (!tmp_1714_reg_37256.read().is_01() || !tmp_905_cast_fu_27667_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1714_reg_37256.read()) + sc_biguint<14>(tmp_905_cast_fu_27667_p1.read()));
}

void ShuffleNetV2::thread_tmp_1720_fu_27681_p2() {
    tmp_1720_fu_27681_p2 = (!tmp_1717_reg_37261.read().is_01() || !tmp_905_cast1_fu_27663_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_1717_reg_37261.read()) + sc_biguint<13>(tmp_905_cast1_fu_27663_p1.read()));
}

void ShuffleNetV2::thread_tmp_1721_fu_27990_p1() {
    tmp_1721_fu_27990_p1 = k66_reg_5915.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1722_fu_27793_p1() {
    tmp_1722_fu_27793_p1 = i174_reg_5893.read().range(4-1, 0);
}

void ShuffleNetV2::thread_tmp_1723_fu_27813_p2() {
    tmp_1723_fu_27813_p2 = (!ap_const_lv5_1.is_01())? sc_lv<5>(): i174_reg_5893.read() << (unsigned short)ap_const_lv5_1.to_uint();
}

void ShuffleNetV2::thread_tmp_1724_fu_27834_p3() {
    tmp_1724_fu_27834_p3 = esl_concat<8,7>(tmp_913_fu_27829_p2.read(), ap_const_lv7_0);
}

void ShuffleNetV2::thread_tmp_1725_cast_fu_20382_p1() {
    tmp_1725_cast_fu_20382_p1 = esl_sext<36,35>(tmp_1407_fu_20376_p2.read());
}

void ShuffleNetV2::thread_tmp_1725_fu_27842_p3() {
    tmp_1725_fu_27842_p3 = esl_concat<8,5>(tmp_913_fu_27829_p2.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1726_fu_27854_p2() {
    tmp_1726_fu_27854_p2 = (!tmp_1724_fu_27834_p3.read().is_01() || !p_shl634_cast_fu_27850_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1724_fu_27834_p3.read()) - sc_bigint<15>(p_shl634_cast_fu_27850_p1.read()));
}

void ShuffleNetV2::thread_tmp_1727_fu_27860_p2() {
    tmp_1727_fu_27860_p2 = (!tmp_902_cast_reg_37315.read().is_01() || !tmp_1726_fu_27854_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(tmp_902_cast_reg_37315.read()) + sc_biguint<15>(tmp_1726_fu_27854_p2.read()));
}

void ShuffleNetV2::thread_tmp_1728_fu_27898_p3() {
    tmp_1728_fu_27898_p3 = esl_concat<13,5>(tmp_916_reg_37338.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1729_cast_fu_20489_p1() {
    tmp_1729_cast_fu_20489_p1 = esl_zext<64,10>(tmp_1412_reg_35044.read());
}

void ShuffleNetV2::thread_tmp_1729_fu_27909_p3() {
    tmp_1729_fu_27909_p3 = esl_concat<13,3>(tmp_916_reg_37338.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1730_fu_27920_p2() {
    tmp_1730_fu_27920_p2 = (!p_shl631_cast_fu_27905_p1.read().is_01() || !p_shl632_cast_fu_27916_p1.read().is_01())? sc_lv<19>(): (sc_biguint<19>(p_shl631_cast_fu_27905_p1.read()) - sc_biguint<19>(p_shl632_cast_fu_27916_p1.read()));
}

void ShuffleNetV2::thread_tmp_1731_fu_27930_p2() {
    tmp_1731_fu_27930_p2 = (!tmp_903_cast1_reg_37320.read().is_01() || !tmp_2114_cast_fu_27926_p1.read().is_01())? sc_lv<20>(): (sc_biguint<20>(tmp_903_cast1_reg_37320.read()) + sc_bigint<20>(tmp_2114_cast_fu_27926_p1.read()));
}

void ShuffleNetV2::thread_tmp_1732_cast_fu_20427_p1() {
    tmp_1732_cast_fu_20427_p1 = esl_sext<13,12>(tmp_1415_fu_20421_p2.read());
}

void ShuffleNetV2::thread_tmp_1732_fu_28463_p1() {
    tmp_1732_fu_28463_p1 = co170_reg_5992.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1733_cast_fu_20453_p1() {
    tmp_1733_cast_fu_20453_p1 = esl_sext<64,13>(tmp_1416_reg_35038.read());
}

void ShuffleNetV2::thread_tmp_1733_fu_28479_p2() {
    tmp_1733_fu_28479_p2 = (!ap_const_lv5_3.is_01())? sc_lv<5>(): co170_reg_5992.read() << (unsigned short)ap_const_lv5_3.to_uint();
}

void ShuffleNetV2::thread_tmp_1734_fu_28367_p1() {
    tmp_1734_fu_28367_p1 = k68_reg_5981.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1735_fu_28142_p1() {
    tmp_1735_fu_28142_p1 = i180_reg_5959.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1736_fu_28203_p3() {
    tmp_1736_fu_28203_p3 = esl_concat<8,2>(tmp_930_reg_37454.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1737_fu_28210_p1() {
    tmp_1737_fu_28210_p1 = esl_sext<34,10>(tmp_1736_fu_28203_p3.read());
}

void ShuffleNetV2::thread_tmp_1738_fu_28218_p2() {
    tmp_1738_fu_28218_p2 = (!p_shl638_cast_fu_28214_p1.read().is_01() || !tmp_932_cast_fu_28199_p1.read().is_01())? sc_lv<35>(): (sc_biguint<35>(p_shl638_cast_fu_28214_p1.read()) - sc_biguint<35>(tmp_932_cast_fu_28199_p1.read()));
}

void ShuffleNetV2::thread_tmp_1739_fu_28228_p2() {
    tmp_1739_fu_28228_p2 = (!tmp_2124_cast_fu_28224_p1.read().is_01() || !tmp_918_cast_reg_37423.read().is_01())? sc_lv<36>(): (sc_bigint<36>(tmp_2124_cast_fu_28224_p1.read()) + sc_biguint<36>(tmp_918_cast_reg_37423.read()));
}

void ShuffleNetV2::thread_tmp_1740_fu_28233_p1() {
    tmp_1740_fu_28233_p1 = tmp_1739_fu_28228_p2.read().range(11-1, 0);
}

void ShuffleNetV2::thread_tmp_1741_fu_28237_p1() {
    tmp_1741_fu_28237_p1 = tmp_1739_fu_28228_p2.read().range(9-1, 0);
}

void ShuffleNetV2::thread_tmp_1742_fu_28285_p2() {
    tmp_1742_fu_28285_p2 = (!p_shl637_cast_fu_28278_p3.read().is_01() || !tmp_1740_reg_37466.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl637_cast_fu_28278_p3.read()) - sc_biguint<11>(tmp_1740_reg_37466.read()));
}

void ShuffleNetV2::thread_tmp_1743_fu_28290_p2() {
    tmp_1743_fu_28290_p2 = (!tmp_1742_fu_28285_p2.read().is_01() || !tmp_925_cast_reg_37441.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_1742_fu_28285_p2.read()) + sc_biguint<11>(tmp_925_cast_reg_37441.read()));
}

void ShuffleNetV2::thread_tmp_1744_fu_28248_p3() {
    tmp_1744_fu_28248_p3 = esl_concat<9,2>(tmp_933_reg_37460.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1745_fu_28255_p1() {
    tmp_1745_fu_28255_p1 = esl_sext<12,11>(tmp_1744_fu_28248_p3.read());
}

void ShuffleNetV2::thread_tmp_1746_fu_28263_p2() {
    tmp_1746_fu_28263_p2 = (!p_shl636_cast_fu_28259_p1.read().is_01() || !tmp_935_cast1_fu_28244_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl636_cast_fu_28259_p1.read()) - sc_biguint<13>(tmp_935_cast1_fu_28244_p1.read()));
}

void ShuffleNetV2::thread_tmp_1747_fu_28273_p2() {
    tmp_1747_fu_28273_p2 = (!tmp_2131_cast_fu_28269_p1.read().is_01() || !tmp_918_cast1_reg_37418.read().is_01())? sc_lv<14>(): (sc_bigint<14>(tmp_2131_cast_fu_28269_p1.read()) + sc_biguint<14>(tmp_918_cast1_reg_37418.read()));
}

void ShuffleNetV2::thread_tmp_1748_fu_28298_p3() {
    tmp_1748_fu_28298_p3 = esl_concat<14,2>(tmp_1747_reg_37476.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1749_cast_fu_20881_p1() {
    tmp_1749_cast_fu_20881_p1 = esl_sext<64,13>(tmp_1428_reg_35146.read());
}

void ShuffleNetV2::thread_tmp_1749_fu_28309_p2() {
    tmp_1749_fu_28309_p2 = (!p_shl275_fu_28305_p1.read().is_01() || !tmp_2132_cast_fu_28295_p1.read().is_01())? sc_lv<64>(): (sc_bigint<64>(p_shl275_fu_28305_p1.read()) - sc_bigint<64>(tmp_2132_cast_fu_28295_p1.read()));
}

void ShuffleNetV2::thread_tmp_1750_fu_28315_p2() {
    tmp_1750_fu_28315_p2 = (!tmp_1749_fu_28309_p2.read().is_01() || !tmp_925_reg_37436.read().is_01())? sc_lv<64>(): (sc_biguint<64>(tmp_1749_fu_28309_p2.read()) + sc_biguint<64>(tmp_925_reg_37436.read()));
}

void ShuffleNetV2::thread_tmp_1751_fu_28839_p3() {
    tmp_1751_fu_28839_p3 = esl_concat<7,3>(co172_reg_6047.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1752_fu_28851_p3() {
    tmp_1752_fu_28851_p3 = esl_concat<7,1>(co172_reg_6047.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1753_fu_28863_p2() {
    tmp_1753_fu_28863_p2 = (!p_shl643_cast_fu_28847_p1.read().is_01() || !p_shl644_cast_fu_28859_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl643_cast_fu_28847_p1.read()) - sc_biguint<11>(p_shl644_cast_fu_28859_p1.read()));
}

void ShuffleNetV2::thread_tmp_1754_cast_fu_20853_p1() {
    tmp_1754_cast_fu_20853_p1 = esl_sext<18,17>(tmp_1431_fu_20847_p2.read());
}

void ShuffleNetV2::thread_tmp_1754_fu_28747_p1() {
    tmp_1754_fu_28747_p1 = k70_reg_6036.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1755_cast_fu_20862_p1() {
    tmp_1755_cast_fu_20862_p1 = esl_sext<33,18>(tmp_1432_fu_20857_p2.read());
}

void ShuffleNetV2::thread_tmp_1755_fu_28550_p1() {
    tmp_1755_fu_28550_p1 = i182_reg_6014.read().range(4-1, 0);
}

void ShuffleNetV2::thread_tmp_1756_fu_28570_p2() {
    tmp_1756_fu_28570_p2 = (!ap_const_lv5_1.is_01())? sc_lv<5>(): i182_reg_6014.read() << (unsigned short)ap_const_lv5_1.to_uint();
}

void ShuffleNetV2::thread_tmp_1757_fu_28591_p3() {
    tmp_1757_fu_28591_p3 = esl_concat<8,7>(tmp_942_fu_28586_p2.read(), ap_const_lv7_0);
}

void ShuffleNetV2::thread_tmp_1758_fu_28599_p3() {
    tmp_1758_fu_28599_p3 = esl_concat<8,5>(tmp_942_fu_28586_p2.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1759_fu_28611_p2() {
    tmp_1759_fu_28611_p2 = (!tmp_1757_fu_28591_p3.read().is_01() || !p_shl642_cast_fu_28607_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1757_fu_28591_p3.read()) - sc_bigint<15>(p_shl642_cast_fu_28607_p1.read()));
}

void ShuffleNetV2::thread_tmp_1760_fu_28617_p2() {
    tmp_1760_fu_28617_p2 = (!tmp_927_cast_reg_37566.read().is_01() || !tmp_1759_fu_28611_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(tmp_927_cast_reg_37566.read()) + sc_biguint<15>(tmp_1759_fu_28611_p2.read()));
}

void ShuffleNetV2::thread_tmp_1761_fu_28655_p3() {
    tmp_1761_fu_28655_p3 = esl_concat<13,5>(tmp_944_reg_37589.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1762_fu_28666_p3() {
    tmp_1762_fu_28666_p3 = esl_concat<13,3>(tmp_944_reg_37589.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1763_fu_28677_p2() {
    tmp_1763_fu_28677_p2 = (!p_shl639_cast_fu_28662_p1.read().is_01() || !p_shl640_cast_fu_28673_p1.read().is_01())? sc_lv<19>(): (sc_biguint<19>(p_shl639_cast_fu_28662_p1.read()) - sc_biguint<19>(p_shl640_cast_fu_28673_p1.read()));
}

void ShuffleNetV2::thread_tmp_1764_fu_28687_p2() {
    tmp_1764_fu_28687_p2 = (!tmp_928_cast_reg_37571.read().is_01() || !tmp_2152_cast_fu_28683_p1.read().is_01())? sc_lv<20>(): (sc_biguint<20>(tmp_928_cast_reg_37571.read()) + sc_bigint<20>(tmp_2152_cast_fu_28683_p1.read()));
}

void ShuffleNetV2::thread_tmp_1765_fu_28966_p3() {
    tmp_1765_fu_28966_p3 = esl_concat<7,3>(co174_reg_6080.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1766_fu_28978_p3() {
    tmp_1766_fu_28978_p3 = esl_concat<7,1>(co174_reg_6080.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1767_fu_28990_p2() {
    tmp_1767_fu_28990_p2 = (!p_shl649_cast_fu_28974_p1.read().is_01() || !p_shl650_cast_fu_28986_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl649_cast_fu_28974_p1.read()) - sc_biguint<11>(p_shl650_cast_fu_28986_p1.read()));
}

void ShuffleNetV2::thread_tmp_1768_fu_29006_p3() {
    tmp_1768_fu_29006_p3 = esl_concat<8,3>(tmp_945_fu_29000_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1769_fu_29018_p3() {
    tmp_1769_fu_29018_p3 = esl_concat<8,1>(tmp_945_fu_29000_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1770_fu_29030_p2() {
    tmp_1770_fu_29030_p2 = (!p_shl647_cast_fu_29014_p1.read().is_01() || !p_shl648_cast_fu_29026_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(p_shl647_cast_fu_29014_p1.read()) - sc_biguint<12>(p_shl648_cast_fu_29026_p1.read()));
}

void ShuffleNetV2::thread_tmp_1771_fu_28889_p2() {
    tmp_1771_fu_28889_p2 = (!tmp_2138_cast_reg_37651.read().is_01() || !tmp_946_cast_fu_28885_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(tmp_2138_cast_reg_37651.read()) + sc_biguint<12>(tmp_946_cast_fu_28885_p1.read()));
}

void ShuffleNetV2::thread_tmp_1772_fu_28894_p1() {
    tmp_1772_fu_28894_p1 = tmp_1771_fu_28889_p2.read().range(11-1, 0);
}

void ShuffleNetV2::thread_tmp_1773_fu_28906_p3() {
    tmp_1773_fu_28906_p3 = esl_concat<12,1>(tmp_1771_fu_28889_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1774_fu_28918_p2() {
    tmp_1774_fu_28918_p2 = (!p_shl645_cast_fu_28898_p3.read().is_01() || !p_shl646_cast_fu_28914_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl645_cast_fu_28898_p3.read()) - sc_bigint<14>(p_shl646_cast_fu_28914_p1.read()));
}

void ShuffleNetV2::thread_tmp_1775_fu_29177_p1() {
    tmp_1775_fu_29177_p1 = co176_reg_6113.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1776_cast_fu_21111_p1() {
    tmp_1776_cast_fu_21111_p1 = esl_zext<64,15>(tmp_1452_fu_21106_p2.read());
}

void ShuffleNetV2::thread_tmp_1776_fu_29193_p2() {
    tmp_1776_fu_29193_p2 = (!ap_const_lv5_3.is_01())? sc_lv<5>(): co176_reg_6113.read() << (unsigned short)ap_const_lv5_3.to_uint();
}

void ShuffleNetV2::thread_tmp_1777_cast_fu_21323_p1() {
    tmp_1777_cast_fu_21323_p1 = esl_zext<64,14>(tmp_1453_reg_35293.read());
}

void ShuffleNetV2::thread_tmp_1777_fu_29060_p2() {
    tmp_1777_fu_29060_p2 = (!tmp_948_cast2_fu_29056_p1.read().is_01() || !tmp_2159_cast_reg_37700.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_948_cast2_fu_29056_p1.read()) + sc_bigint<13>(tmp_2159_cast_reg_37700.read()));
}

void ShuffleNetV2::thread_tmp_1778_cast_fu_21318_p1() {
    tmp_1778_cast_fu_21318_p1 = esl_zext<64,15>(tmp_1454_fu_21313_p2.read());
}

void ShuffleNetV2::thread_tmp_1778_fu_29065_p1() {
    tmp_1778_fu_29065_p1 = tmp_1777_fu_29060_p2.read().range(11-1, 0);
}

void ShuffleNetV2::thread_tmp_1779_fu_29085_p2() {
    tmp_1779_fu_29085_p2 = (!p_shl653_cast_fu_29069_p3.read().is_01() || !p_shl654_cast_fu_29077_p3.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl653_cast_fu_29069_p3.read()) - sc_biguint<14>(p_shl654_cast_fu_29077_p3.read()));
}

void ShuffleNetV2::thread_tmp_1780_fu_29091_p2() {
    tmp_1780_fu_29091_p2 = (!tmp_948_cast1_fu_29052_p1.read().is_01() || !tmp_2156_cast_reg_37695.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp_948_cast1_fu_29052_p1.read()) + sc_bigint<12>(tmp_2156_cast_reg_37695.read()));
}

void ShuffleNetV2::thread_tmp_1781_fu_29096_p1() {
    tmp_1781_fu_29096_p1 = tmp_1780_fu_29091_p2.read().range(10-1, 0);
}

void ShuffleNetV2::thread_tmp_1782_fu_29116_p2() {
    tmp_1782_fu_29116_p2 = (!p_shl651_cast_fu_29100_p3.read().is_01() || !p_shl652_cast_fu_29108_p3.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl651_cast_fu_29100_p3.read()) - sc_biguint<13>(p_shl652_cast_fu_29108_p3.read()));
}

void ShuffleNetV2::thread_tmp_1783_fu_28940_p2() {
    tmp_1783_fu_28940_p2 = (!tmp_1774_reg_37664.read().is_01() || !tmp_949_cast_fu_28936_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1774_reg_37664.read()) + sc_biguint<14>(tmp_949_cast_fu_28936_p1.read()));
}

void ShuffleNetV2::thread_tmp_1784_fu_29142_p2() {
    tmp_1784_fu_29142_p2 = (!tmp_1779_reg_37713.read().is_01() || !tmp_954_cast2_fu_29138_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1779_reg_37713.read()) + sc_biguint<14>(tmp_954_cast2_fu_29138_p1.read()));
}

void ShuffleNetV2::thread_tmp_1785_fu_29152_p2() {
    tmp_1785_fu_29152_p2 = (!tmp_1782_reg_37718.read().is_01() || !tmp_954_cast1_fu_29134_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_1782_reg_37718.read()) + sc_biguint<13>(tmp_954_cast1_fu_29134_p1.read()));
}

void ShuffleNetV2::thread_tmp_1786_fu_29461_p1() {
    tmp_1786_fu_29461_p1 = k72_reg_6157.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1787_fu_29264_p1() {
    tmp_1787_fu_29264_p1 = i186_reg_6135.read().range(4-1, 0);
}

void ShuffleNetV2::thread_tmp_1788_cast_fu_21611_p1() {
    tmp_1788_cast_fu_21611_p1 = esl_sext<64,13>(tmp_1460_reg_35352.read());
}

void ShuffleNetV2::thread_tmp_1788_fu_29284_p2() {
    tmp_1788_fu_29284_p2 = (!ap_const_lv5_1.is_01())? sc_lv<5>(): i186_reg_6135.read() << (unsigned short)ap_const_lv5_1.to_uint();
}

void ShuffleNetV2::thread_tmp_1789_fu_29305_p3() {
    tmp_1789_fu_29305_p3 = esl_concat<8,7>(tmp_964_fu_29300_p2.read(), ap_const_lv7_0);
}

void ShuffleNetV2::thread_tmp_1790_fu_29313_p3() {
    tmp_1790_fu_29313_p3 = esl_concat<8,5>(tmp_964_fu_29300_p2.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1791_fu_29325_p2() {
    tmp_1791_fu_29325_p2 = (!tmp_1789_fu_29305_p3.read().is_01() || !p_shl658_cast_fu_29321_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1789_fu_29305_p3.read()) - sc_bigint<15>(p_shl658_cast_fu_29321_p1.read()));
}

void ShuffleNetV2::thread_tmp_1792_fu_29331_p2() {
    tmp_1792_fu_29331_p2 = (!tmp_952_cast_reg_37772.read().is_01() || !tmp_1791_fu_29325_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(tmp_952_cast_reg_37772.read()) + sc_biguint<15>(tmp_1791_fu_29325_p2.read()));
}

void ShuffleNetV2::thread_tmp_1793_fu_29369_p3() {
    tmp_1793_fu_29369_p3 = esl_concat<13,5>(tmp_967_reg_37795.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1794_fu_29380_p3() {
    tmp_1794_fu_29380_p3 = esl_concat<13,3>(tmp_967_reg_37795.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1795_cast_fu_21583_p1() {
    tmp_1795_cast_fu_21583_p1 = esl_sext<18,17>(tmp_1465_fu_21577_p2.read());
}

void ShuffleNetV2::thread_tmp_1795_fu_29391_p2() {
    tmp_1795_fu_29391_p2 = (!p_shl655_cast_fu_29376_p1.read().is_01() || !p_shl656_cast_fu_29387_p1.read().is_01())? sc_lv<19>(): (sc_biguint<19>(p_shl655_cast_fu_29376_p1.read()) - sc_biguint<19>(p_shl656_cast_fu_29387_p1.read()));
}

void ShuffleNetV2::thread_tmp_1796_cast_fu_21592_p1() {
    tmp_1796_cast_fu_21592_p1 = esl_sext<33,18>(tmp_1466_fu_21587_p2.read());
}

void ShuffleNetV2::thread_tmp_1796_fu_29401_p2() {
    tmp_1796_fu_29401_p2 = (!tmp_953_cast1_reg_37777.read().is_01() || !tmp_2190_cast_fu_29397_p1.read().is_01())? sc_lv<20>(): (sc_biguint<20>(tmp_953_cast1_reg_37777.read()) + sc_bigint<20>(tmp_2190_cast_fu_29397_p1.read()));
}

void ShuffleNetV2::thread_tmp_1797_fu_29926_p1() {
    tmp_1797_fu_29926_p1 = co180_reg_6234.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1798_fu_29942_p2() {
    tmp_1798_fu_29942_p2 = (!ap_const_lv5_3.is_01())? sc_lv<5>(): co180_reg_6234.read() << (unsigned short)ap_const_lv5_3.to_uint();
}

void ShuffleNetV2::thread_tmp_1799_fu_29830_p1() {
    tmp_1799_fu_29830_p1 = k74_reg_6223.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1800_fu_29613_p1() {
    tmp_1800_fu_29613_p1 = i192_reg_6201.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1801_fu_29674_p3() {
    tmp_1801_fu_29674_p3 = esl_concat<8,2>(tmp_980_reg_37911.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1802_fu_29681_p1() {
    tmp_1802_fu_29681_p1 = esl_sext<34,10>(tmp_1801_fu_29674_p3.read());
}

void ShuffleNetV2::thread_tmp_1803_fu_29689_p2() {
    tmp_1803_fu_29689_p2 = (!p_shl662_cast_fu_29685_p1.read().is_01() || !tmp_982_cast_fu_29670_p1.read().is_01())? sc_lv<35>(): (sc_biguint<35>(p_shl662_cast_fu_29685_p1.read()) - sc_biguint<35>(tmp_982_cast_fu_29670_p1.read()));
}

void ShuffleNetV2::thread_tmp_1804_fu_29699_p2() {
    tmp_1804_fu_29699_p2 = (!tmp_2200_cast_fu_29695_p1.read().is_01() || !tmp_968_cast_reg_37880.read().is_01())? sc_lv<36>(): (sc_bigint<36>(tmp_2200_cast_fu_29695_p1.read()) + sc_biguint<36>(tmp_968_cast_reg_37880.read()));
}

void ShuffleNetV2::thread_tmp_1805_cast_fu_21881_p1() {
    tmp_1805_cast_fu_21881_p1 = esl_sext<36,35>(tmp_1472_fu_21875_p2.read());
}

void ShuffleNetV2::thread_tmp_1805_fu_29704_p1() {
    tmp_1805_fu_29704_p1 = tmp_1804_fu_29699_p2.read().range(11-1, 0);
}

void ShuffleNetV2::thread_tmp_1806_fu_29708_p1() {
    tmp_1806_fu_29708_p1 = tmp_1804_fu_29699_p2.read().range(9-1, 0);
}

void ShuffleNetV2::thread_tmp_1807_fu_29748_p2() {
    tmp_1807_fu_29748_p2 = (!p_shl661_cast_fu_29741_p3.read().is_01() || !tmp_1805_reg_37923.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl661_cast_fu_29741_p3.read()) - sc_biguint<11>(tmp_1805_reg_37923.read()));
}

void ShuffleNetV2::thread_tmp_1808_fu_29753_p2() {
    tmp_1808_fu_29753_p2 = (!tmp_1807_fu_29748_p2.read().is_01() || !tmp_975_cast_reg_37898.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_1807_fu_29748_p2.read()) + sc_biguint<11>(tmp_975_cast_reg_37898.read()));
}

void ShuffleNetV2::thread_tmp_1809_cast_fu_21980_p1() {
    tmp_1809_cast_fu_21980_p1 = esl_zext<64,10>(tmp_1477_reg_35501.read());
}

void ShuffleNetV2::thread_tmp_1809_fu_29715_p3() {
    tmp_1809_fu_29715_p3 = esl_concat<11,2>(tmp_983_reg_37917.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1810_fu_29726_p2() {
    tmp_1810_fu_29726_p2 = (!p_shl660_cast_fu_29722_p1.read().is_01() || !tmp_985_cast_fu_29712_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl660_cast_fu_29722_p1.read()) - sc_biguint<14>(tmp_985_cast_fu_29712_p1.read()));
}

void ShuffleNetV2::thread_tmp_1811_cast_fu_21918_p1() {
    tmp_1811_cast_fu_21918_p1 = esl_sext<14,13>(tmp_1479_fu_21912_p2.read());
}

void ShuffleNetV2::thread_tmp_1811_fu_29736_p2() {
    tmp_1811_fu_29736_p2 = (!tmp_2206_cast_fu_29732_p1.read().is_01() || !tmp_968_cast1_reg_37875.read().is_01())? sc_lv<15>(): (sc_bigint<15>(tmp_2206_cast_fu_29732_p1.read()) + sc_biguint<15>(tmp_968_cast1_reg_37875.read()));
}

void ShuffleNetV2::thread_tmp_1812_cast_fu_21944_p1() {
    tmp_1812_cast_fu_21944_p1 = esl_sext<64,14>(tmp_1480_reg_35495.read());
}

void ShuffleNetV2::thread_tmp_1812_fu_29761_p3() {
    tmp_1812_fu_29761_p3 = esl_concat<15,2>(tmp_1811_reg_37933.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1813_fu_29772_p2() {
    tmp_1813_fu_29772_p2 = (!p_shl276_fu_29768_p1.read().is_01() || !tmp_2207_cast_fu_29758_p1.read().is_01())? sc_lv<64>(): (sc_bigint<64>(p_shl276_fu_29768_p1.read()) - sc_bigint<64>(tmp_2207_cast_fu_29758_p1.read()));
}

void ShuffleNetV2::thread_tmp_1814_fu_29778_p2() {
    tmp_1814_fu_29778_p2 = (!tmp_1813_fu_29772_p2.read().is_01() || !tmp_975_reg_37893.read().is_01())? sc_lv<64>(): (sc_biguint<64>(tmp_1813_fu_29772_p2.read()) + sc_biguint<64>(tmp_975_reg_37893.read()));
}

void ShuffleNetV2::thread_tmp_1815_fu_30302_p3() {
    tmp_1815_fu_30302_p3 = esl_concat<7,3>(co182_reg_6289.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1816_fu_30314_p3() {
    tmp_1816_fu_30314_p3 = esl_concat<7,1>(co182_reg_6289.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1817_fu_30326_p2() {
    tmp_1817_fu_30326_p2 = (!p_shl667_cast_fu_30310_p1.read().is_01() || !p_shl668_cast_fu_30322_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl667_cast_fu_30310_p1.read()) - sc_biguint<11>(p_shl668_cast_fu_30322_p1.read()));
}

void ShuffleNetV2::thread_tmp_1818_fu_30210_p1() {
    tmp_1818_fu_30210_p1 = k76_reg_6278.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1819_fu_30013_p1() {
    tmp_1819_fu_30013_p1 = i194_reg_6256.read().range(4-1, 0);
}

void ShuffleNetV2::thread_tmp_1820_fu_30033_p2() {
    tmp_1820_fu_30033_p2 = (!ap_const_lv5_1.is_01())? sc_lv<5>(): i194_reg_6256.read() << (unsigned short)ap_const_lv5_1.to_uint();
}

void ShuffleNetV2::thread_tmp_1821_fu_30054_p3() {
    tmp_1821_fu_30054_p3 = esl_concat<8,7>(tmp_992_fu_30049_p2.read(), ap_const_lv7_0);
}

void ShuffleNetV2::thread_tmp_1822_fu_30062_p3() {
    tmp_1822_fu_30062_p3 = esl_concat<8,5>(tmp_992_fu_30049_p2.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1823_fu_30074_p2() {
    tmp_1823_fu_30074_p2 = (!tmp_1821_fu_30054_p3.read().is_01() || !p_shl666_cast_fu_30070_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1821_fu_30054_p3.read()) - sc_bigint<15>(p_shl666_cast_fu_30070_p1.read()));
}

void ShuffleNetV2::thread_tmp_1824_fu_30080_p2() {
    tmp_1824_fu_30080_p2 = (!tmp_977_cast1_reg_38023.read().is_01() || !tmp_1823_fu_30074_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(tmp_977_cast1_reg_38023.read()) + sc_biguint<15>(tmp_1823_fu_30074_p2.read()));
}

void ShuffleNetV2::thread_tmp_1825_fu_30118_p3() {
    tmp_1825_fu_30118_p3 = esl_concat<13,5>(tmp_994_reg_38046.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1826_fu_30129_p3() {
    tmp_1826_fu_30129_p3 = esl_concat<13,3>(tmp_994_reg_38046.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1827_fu_30140_p2() {
    tmp_1827_fu_30140_p2 = (!p_shl663_cast_fu_30125_p1.read().is_01() || !p_shl664_cast_fu_30136_p1.read().is_01())? sc_lv<19>(): (sc_biguint<19>(p_shl663_cast_fu_30125_p1.read()) - sc_biguint<19>(p_shl664_cast_fu_30136_p1.read()));
}

void ShuffleNetV2::thread_tmp_1828_cast_fu_22380_p1() {
    tmp_1828_cast_fu_22380_p1 = esl_sext<64,13>(tmp_1492_reg_35603.read());
}

void ShuffleNetV2::thread_tmp_1828_fu_30150_p2() {
    tmp_1828_fu_30150_p2 = (!tmp_978_cast_reg_38028.read().is_01() || !tmp_2227_cast_fu_30146_p1.read().is_01())? sc_lv<20>(): (sc_biguint<20>(tmp_978_cast_reg_38028.read()) + sc_bigint<20>(tmp_2227_cast_fu_30146_p1.read()));
}

void ShuffleNetV2::thread_tmp_1829_fu_30425_p3() {
    tmp_1829_fu_30425_p3 = esl_concat<8,2>(ci82_reg_6322.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1830_fu_30437_p3() {
    tmp_1830_fu_30437_p3 = esl_concat<8,3>(ci82_reg_6322.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1831_fu_30449_p3() {
    tmp_1831_fu_30449_p3 = esl_concat<8,1>(ci82_reg_6322.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1832_fu_30461_p2() {
    tmp_1832_fu_30461_p2 = (!p_shl671_cast_fu_30445_p1.read().is_01() || !p_shl672_cast_fu_30457_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(p_shl671_cast_fu_30445_p1.read()) - sc_biguint<12>(p_shl672_cast_fu_30457_p1.read()));
}

void ShuffleNetV2::thread_tmp_1833_fu_30352_p2() {
    tmp_1833_fu_30352_p2 = (!tmp_2213_cast_reg_38108.read().is_01() || !tmp_995_cast1_fu_30348_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(tmp_2213_cast_reg_38108.read()) + sc_biguint<12>(tmp_995_cast1_fu_30348_p1.read()));
}

void ShuffleNetV2::thread_tmp_1834_fu_30357_p1() {
    tmp_1834_fu_30357_p1 = tmp_1833_fu_30352_p2.read().range(11-1, 0);
}

void ShuffleNetV2::thread_tmp_1835_cast_fu_22352_p1() {
    tmp_1835_cast_fu_22352_p1 = esl_sext<18,17>(tmp_1497_fu_22346_p2.read());
}

void ShuffleNetV2::thread_tmp_1835_fu_30369_p3() {
    tmp_1835_fu_30369_p3 = esl_concat<12,1>(tmp_1833_fu_30352_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1836_cast_fu_22361_p1() {
    tmp_1836_cast_fu_22361_p1 = esl_sext<33,18>(tmp_1498_fu_22356_p2.read());
}

void ShuffleNetV2::thread_tmp_1836_fu_30381_p2() {
    tmp_1836_fu_30381_p2 = (!p_shl669_cast_fu_30361_p3.read().is_01() || !p_shl670_cast_fu_30377_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl669_cast_fu_30361_p3.read()) - sc_bigint<14>(p_shl670_cast_fu_30377_p1.read()));
}

void ShuffleNetV2::thread_tmp_1837_fu_30487_p2() {
    tmp_1837_fu_30487_p2 = (!tmp_996_cast_fu_30483_p1.read().is_01() || !tmp_2230_cast_reg_38152.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_996_cast_fu_30483_p1.read()) + sc_biguint<11>(tmp_2230_cast_reg_38152.read()));
}

void ShuffleNetV2::thread_tmp_1838_fu_30504_p2() {
    tmp_1838_fu_30504_p2 = (!tmp_997_cast_fu_30500_p1.read().is_01() || !tmp_2233_cast_reg_38157.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_997_cast_fu_30500_p1.read()) + sc_bigint<13>(tmp_2233_cast_reg_38157.read()));
}

void ShuffleNetV2::thread_tmp_1839_fu_30509_p1() {
    tmp_1839_fu_30509_p1 = tmp_1838_fu_30504_p2.read().range(11-1, 0);
}

void ShuffleNetV2::thread_tmp_1840_fu_30529_p2() {
    tmp_1840_fu_30529_p2 = (!p_shl673_cast_fu_30513_p3.read().is_01() || !p_shl674_cast_fu_30521_p3.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl673_cast_fu_30513_p3.read()) - sc_biguint<14>(p_shl674_cast_fu_30521_p3.read()));
}

void ShuffleNetV2::thread_tmp_1841_fu_30403_p2() {
    tmp_1841_fu_30403_p2 = (!tmp_1836_reg_38121.read().is_01() || !tmp_998_cast1_fu_30399_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1836_reg_38121.read()) + sc_biguint<14>(tmp_998_cast1_fu_30399_p1.read()));
}

void ShuffleNetV2::thread_tmp_1842_fu_30551_p2() {
    tmp_1842_fu_30551_p2 = (!tmp_2240_cast_reg_38170.read().is_01() || !tmp_999_cast_fu_30547_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_2240_cast_reg_38170.read()) + sc_biguint<13>(tmp_999_cast_fu_30547_p1.read()));
}

void ShuffleNetV2::thread_tmp_1843_fu_30560_p2() {
    tmp_1843_fu_30560_p2 = (!tmp_1840_reg_38175.read().is_01() || !tmp_1000_cast_fu_30556_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1840_reg_38175.read()) + sc_biguint<14>(tmp_1000_cast_fu_30556_p1.read()));
}

void ShuffleNetV2::thread_tmp_1857_cast_fu_22614_p1() {
    tmp_1857_cast_fu_22614_p1 = esl_zext<64,15>(tmp_1518_fu_22609_p2.read());
}

void ShuffleNetV2::thread_tmp_1858_cast_fu_22826_p1() {
    tmp_1858_cast_fu_22826_p1 = esl_zext<64,14>(tmp_1519_reg_35750.read());
}

void ShuffleNetV2::thread_tmp_1859_cast_fu_22821_p1() {
    tmp_1859_cast_fu_22821_p1 = esl_zext<64,15>(tmp_1520_fu_22816_p2.read());
}

void ShuffleNetV2::thread_tmp_1869_cast_fu_23114_p1() {
    tmp_1869_cast_fu_23114_p1 = esl_sext<64,13>(tmp_1526_reg_35809.read());
}

void ShuffleNetV2::thread_tmp_1876_cast_fu_23086_p1() {
    tmp_1876_cast_fu_23086_p1 = esl_sext<18,17>(tmp_1531_fu_23080_p2.read());
}

void ShuffleNetV2::thread_tmp_1877_cast_fu_23095_p1() {
    tmp_1877_cast_fu_23095_p1 = esl_sext<33,18>(tmp_1532_fu_23090_p2.read());
}

void ShuffleNetV2::thread_tmp_1886_cast_fu_23388_p1() {
    tmp_1886_cast_fu_23388_p1 = esl_sext<36,35>(tmp_1538_fu_23382_p2.read());
}

void ShuffleNetV2::thread_tmp_1890_cast_fu_23483_p1() {
    tmp_1890_cast_fu_23483_p1 = esl_zext<64,10>(tmp_1543_reg_35958.read());
}

void ShuffleNetV2::thread_tmp_1893_cast_fu_23447_p1() {
    tmp_1893_cast_fu_23447_p1 = esl_sext<64,13>(tmp_1546_reg_35952.read());
}

void ShuffleNetV2::thread_tmp_1909_cast_fu_23887_p1() {
    tmp_1909_cast_fu_23887_p1 = esl_sext<64,13>(tmp_1558_reg_36060.read());
}

void ShuffleNetV2::thread_tmp_1914_cast_fu_23859_p1() {
    tmp_1914_cast_fu_23859_p1 = esl_sext<19,18>(tmp_1561_fu_23853_p2.read());
}

void ShuffleNetV2::thread_tmp_1915_cast_fu_23868_p1() {
    tmp_1915_cast_fu_23868_p1 = esl_sext<33,19>(tmp_1562_fu_23863_p2.read());
}

void ShuffleNetV2::thread_tmp_1922_cast_fu_24121_p1() {
    tmp_1922_cast_fu_24121_p1 = esl_zext<64,15>(tmp_1569_fu_24116_p2.read());
}

void ShuffleNetV2::thread_tmp_1932_cast_fu_24390_p1() {
    tmp_1932_cast_fu_24390_p1 = esl_sext<64,15>(tmp_1576_reg_36212.read());
}

void ShuffleNetV2::thread_tmp_1936_cast_fu_24362_p1() {
    tmp_1936_cast_fu_24362_p1 = esl_sext<19,18>(tmp_1579_fu_24356_p2.read());
}

void ShuffleNetV2::thread_tmp_1937_cast_fu_24371_p1() {
    tmp_1937_cast_fu_24371_p1 = esl_sext<33,19>(tmp_1580_fu_24366_p2.read());
}

void ShuffleNetV2::thread_tmp_1946_cast_fu_24664_p1() {
    tmp_1946_cast_fu_24664_p1 = esl_sext<36,35>(tmp_1587_fu_24658_p2.read());
}

void ShuffleNetV2::thread_tmp_1950_cast_fu_24759_p1() {
    tmp_1950_cast_fu_24759_p1 = esl_zext<64,11>(tmp_1592_reg_36361.read());
}

void ShuffleNetV2::thread_tmp_1953_cast_fu_24723_p1() {
    tmp_1953_cast_fu_24723_p1 = esl_sext<64,13>(tmp_1595_reg_36355.read());
}

void ShuffleNetV2::thread_tmp_1966_cast_fu_25143_p1() {
    tmp_1966_cast_fu_25143_p1 = esl_sext<64,15>(tmp_1605_reg_36463.read());
}

void ShuffleNetV2::thread_tmp_1970_cast_fu_25115_p1() {
    tmp_1970_cast_fu_25115_p1 = esl_sext<19,18>(tmp_1608_fu_25109_p2.read());
}

void ShuffleNetV2::thread_tmp_1971_cast_fu_25124_p1() {
    tmp_1971_cast_fu_25124_p1 = esl_sext<33,19>(tmp_1609_fu_25119_p2.read());
}

void ShuffleNetV2::thread_tmp_1980_cast_fu_25421_p1() {
    tmp_1980_cast_fu_25421_p1 = esl_sext<36,35>(tmp_1616_fu_25415_p2.read());
}

void ShuffleNetV2::thread_tmp_1984_cast_fu_25516_p1() {
    tmp_1984_cast_fu_25516_p1 = esl_zext<64,11>(tmp_1621_reg_36612.read());
}

void ShuffleNetV2::thread_tmp_1987_cast_fu_25480_p1() {
    tmp_1987_cast_fu_25480_p1 = esl_sext<64,13>(tmp_1624_reg_36606.read());
}

void ShuffleNetV2::thread_tmp_1993_cast_fu_26058_p1() {
    tmp_1993_cast_fu_26058_p1 = esl_sext<12,11>(tmp_1630_fu_26052_p2.read());
}

void ShuffleNetV2::thread_tmp_1996_cast_fu_26098_p1() {
    tmp_1996_cast_fu_26098_p1 = esl_sext<13,12>(tmp_1633_fu_26092_p2.read());
}

void ShuffleNetV2::thread_tmp_2006_cast_fu_25896_p1() {
    tmp_2006_cast_fu_25896_p1 = esl_sext<64,15>(tmp_1640_reg_36714.read());
}

void ShuffleNetV2::thread_tmp_2010_cast_fu_25868_p1() {
    tmp_2010_cast_fu_25868_p1 = esl_sext<19,18>(tmp_1643_fu_25862_p2.read());
}

void ShuffleNetV2::thread_tmp_2011_cast_fu_25877_p1() {
    tmp_2011_cast_fu_25877_p1 = esl_sext<33,19>(tmp_1644_fu_25872_p2.read());
}

void ShuffleNetV2::thread_tmp_2022_cast_fu_26219_p1() {
    tmp_2022_cast_fu_26219_p1 = esl_zext<64,13>(tmp_1653_reg_36817.read());
}

void ShuffleNetV2::thread_tmp_2023_cast_fu_26214_p1() {
    tmp_2023_cast_fu_26214_p1 = esl_zext<64,14>(tmp_1654_fu_26209_p2.read());
}

void ShuffleNetV2::thread_tmp_2033_cast_fu_26487_p1() {
    tmp_2033_cast_fu_26487_p1 = esl_sext<64,15>(tmp_1661_reg_36876.read());
}

void ShuffleNetV2::thread_tmp_2037_cast_fu_26459_p1() {
    tmp_2037_cast_fu_26459_p1 = esl_sext<19,18>(tmp_1664_fu_26453_p2.read());
}

void ShuffleNetV2::thread_tmp_2038_cast_fu_26468_p1() {
    tmp_2038_cast_fu_26468_p1 = esl_sext<33,19>(tmp_1665_fu_26463_p2.read());
}

void ShuffleNetV2::thread_tmp_2047_cast_fu_26757_p1() {
    tmp_2047_cast_fu_26757_p1 = esl_sext<36,35>(tmp_1672_fu_26751_p2.read());
}

void ShuffleNetV2::thread_tmp_2051_cast_fu_26852_p1() {
    tmp_2051_cast_fu_26852_p1 = esl_zext<64,11>(tmp_1677_reg_37025.read());
}

void ShuffleNetV2::thread_tmp_2054_cast_fu_26816_p1() {
    tmp_2054_cast_fu_26816_p1 = esl_sext<64,13>(tmp_1680_reg_37019.read());
}

void ShuffleNetV2::thread_tmp_2060_cast_fu_27398_p1() {
    tmp_2060_cast_fu_27398_p1 = esl_sext<12,11>(tmp_1686_fu_27392_p2.read());
}

void ShuffleNetV2::thread_tmp_2070_cast_fu_27240_p1() {
    tmp_2070_cast_fu_27240_p1 = esl_sext<64,15>(tmp_1693_reg_37127.read());
}

void ShuffleNetV2::thread_tmp_2076_cast_fu_27212_p1() {
    tmp_2076_cast_fu_27212_p1 = esl_sext<19,18>(tmp_1698_fu_27206_p2.read());
}

void ShuffleNetV2::thread_tmp_2077_cast_fu_27221_p1() {
    tmp_2077_cast_fu_27221_p1 = esl_sext<33,19>(tmp_1699_fu_27216_p2.read());
}

void ShuffleNetV2::thread_tmp_2080_cast_fu_27525_p1() {
    tmp_2080_cast_fu_27525_p1 = esl_sext<12,11>(tmp_1702_fu_27519_p2.read());
}

void ShuffleNetV2::thread_tmp_2083_cast_fu_27565_p1() {
    tmp_2083_cast_fu_27565_p1 = esl_sext<13,12>(tmp_1705_fu_27559_p2.read());
}

void ShuffleNetV2::thread_tmp_2098_cast_fu_27474_p1() {
    tmp_2098_cast_fu_27474_p1 = esl_zext<64,14>(tmp_1718_fu_27469_p2.read());
}

void ShuffleNetV2::thread_tmp_2099_cast_fu_27676_p1() {
    tmp_2099_cast_fu_27676_p1 = esl_zext<64,14>(tmp_1719_fu_27671_p2.read());
}

void ShuffleNetV2::thread_tmp_2100_cast_fu_27686_p1() {
    tmp_2100_cast_fu_27686_p1 = esl_zext<64,13>(tmp_1720_reg_37279.read());
}

void ShuffleNetV2::thread_tmp_2110_cast_fu_27954_p1() {
    tmp_2110_cast_fu_27954_p1 = esl_sext<64,15>(tmp_1727_reg_37333.read());
}

void ShuffleNetV2::thread_tmp_2114_cast_fu_27926_p1() {
    tmp_2114_cast_fu_27926_p1 = esl_sext<20,19>(tmp_1730_fu_27920_p2.read());
}

void ShuffleNetV2::thread_tmp_2115_cast_fu_27935_p1() {
    tmp_2115_cast_fu_27935_p1 = esl_sext<33,20>(tmp_1731_fu_27930_p2.read());
}

void ShuffleNetV2::thread_tmp_2124_cast_fu_28224_p1() {
    tmp_2124_cast_fu_28224_p1 = esl_sext<36,35>(tmp_1738_fu_28218_p2.read());
}

void ShuffleNetV2::thread_tmp_2128_cast_fu_28331_p1() {
    tmp_2128_cast_fu_28331_p1 = esl_zext<64,11>(tmp_1743_reg_37482.read());
}

void ShuffleNetV2::thread_tmp_2131_cast_fu_28269_p1() {
    tmp_2131_cast_fu_28269_p1 = esl_sext<14,13>(tmp_1746_fu_28263_p2.read());
}

void ShuffleNetV2::thread_tmp_2132_cast_fu_28295_p1() {
    tmp_2132_cast_fu_28295_p1 = esl_sext<64,14>(tmp_1747_reg_37476.read());
}

void ShuffleNetV2::thread_tmp_2138_cast_fu_28869_p1() {
    tmp_2138_cast_fu_28869_p1 = esl_sext<12,11>(tmp_1753_fu_28863_p2.read());
}

void ShuffleNetV2::thread_tmp_2148_cast_fu_28711_p1() {
    tmp_2148_cast_fu_28711_p1 = esl_sext<64,15>(tmp_1760_reg_37584.read());
}

void ShuffleNetV2::thread_tmp_2152_cast_fu_28683_p1() {
    tmp_2152_cast_fu_28683_p1 = esl_sext<20,19>(tmp_1763_fu_28677_p2.read());
}

void ShuffleNetV2::thread_tmp_2153_cast_fu_28692_p1() {
    tmp_2153_cast_fu_28692_p1 = esl_sext<33,20>(tmp_1764_fu_28687_p2.read());
}

void ShuffleNetV2::thread_tmp_2156_cast_fu_28996_p1() {
    tmp_2156_cast_fu_28996_p1 = esl_sext<12,11>(tmp_1767_fu_28990_p2.read());
}

void ShuffleNetV2::thread_tmp_2159_cast_fu_29036_p1() {
    tmp_2159_cast_fu_29036_p1 = esl_sext<13,12>(tmp_1770_fu_29030_p2.read());
}

void ShuffleNetV2::thread_tmp_2174_cast_fu_28945_p1() {
    tmp_2174_cast_fu_28945_p1 = esl_zext<64,14>(tmp_1783_fu_28940_p2.read());
}

void ShuffleNetV2::thread_tmp_2175_cast_fu_29147_p1() {
    tmp_2175_cast_fu_29147_p1 = esl_zext<64,14>(tmp_1784_fu_29142_p2.read());
}

void ShuffleNetV2::thread_tmp_2176_cast_fu_29157_p1() {
    tmp_2176_cast_fu_29157_p1 = esl_zext<64,13>(tmp_1785_reg_37736.read());
}

void ShuffleNetV2::thread_tmp_2186_cast_fu_29425_p1() {
    tmp_2186_cast_fu_29425_p1 = esl_sext<64,15>(tmp_1792_reg_37790.read());
}

void ShuffleNetV2::thread_tmp_2190_cast_fu_29397_p1() {
    tmp_2190_cast_fu_29397_p1 = esl_sext<20,19>(tmp_1795_fu_29391_p2.read());
}

void ShuffleNetV2::thread_tmp_2191_cast_fu_29406_p1() {
    tmp_2191_cast_fu_29406_p1 = esl_sext<33,20>(tmp_1796_fu_29401_p2.read());
}

void ShuffleNetV2::thread_tmp_2200_cast_fu_29695_p1() {
    tmp_2200_cast_fu_29695_p1 = esl_sext<36,35>(tmp_1803_fu_29689_p2.read());
}

void ShuffleNetV2::thread_tmp_2204_cast_fu_29794_p1() {
    tmp_2204_cast_fu_29794_p1 = esl_zext<64,11>(tmp_1808_reg_37939.read());
}

void ShuffleNetV2::thread_tmp_2206_cast_fu_29732_p1() {
    tmp_2206_cast_fu_29732_p1 = esl_sext<15,14>(tmp_1810_fu_29726_p2.read());
}

void ShuffleNetV2::thread_tmp_2207_cast_fu_29758_p1() {
    tmp_2207_cast_fu_29758_p1 = esl_sext<64,15>(tmp_1811_reg_37933.read());
}

void ShuffleNetV2::thread_tmp_2213_cast_fu_30332_p1() {
    tmp_2213_cast_fu_30332_p1 = esl_sext<12,11>(tmp_1817_fu_30326_p2.read());
}

void ShuffleNetV2::thread_tmp_2223_cast_fu_30174_p1() {
    tmp_2223_cast_fu_30174_p1 = esl_sext<64,15>(tmp_1824_reg_38041.read());
}

void ShuffleNetV2::thread_tmp_2227_cast_fu_30146_p1() {
    tmp_2227_cast_fu_30146_p1 = esl_sext<20,19>(tmp_1827_fu_30140_p2.read());
}

void ShuffleNetV2::thread_tmp_2228_cast_fu_30155_p1() {
    tmp_2228_cast_fu_30155_p1 = esl_sext<33,20>(tmp_1828_fu_30150_p2.read());
}

void ShuffleNetV2::thread_tmp_2230_cast_fu_30433_p1() {
    tmp_2230_cast_fu_30433_p1 = esl_zext<11,10>(tmp_1829_fu_30425_p3.read());
}

void ShuffleNetV2::thread_tmp_2233_cast_fu_30467_p1() {
    tmp_2233_cast_fu_30467_p1 = esl_sext<13,12>(tmp_1832_fu_30461_p2.read());
}

void ShuffleNetV2::thread_tmp_2240_cast_fu_30492_p3() {
    tmp_2240_cast_fu_30492_p3 = esl_concat<11,2>(tmp_1837_fu_30487_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_2245_cast_fu_30408_p1() {
    tmp_2245_cast_fu_30408_p1 = esl_zext<64,14>(tmp_1841_fu_30403_p2.read());
}

void ShuffleNetV2::thread_tmp_2246_cast_fu_30570_p1() {
    tmp_2246_cast_fu_30570_p1 = esl_zext<64,13>(tmp_1842_reg_38188.read());
}

void ShuffleNetV2::thread_tmp_2247_cast_fu_30565_p1() {
    tmp_2247_cast_fu_30565_p1 = esl_zext<64,14>(tmp_1843_fu_30560_p2.read());
}

void ShuffleNetV2::thread_tmp_227_fu_6757_p1() {
    tmp_227_fu_6757_p1 = esl_zext<64,4>(i2_reg_2284.read());
}

void ShuffleNetV2::thread_tmp_230_cast_fu_6816_p1() {
    tmp_230_cast_fu_6816_p1 = esl_zext<8,6>(w_25_fu_6810_p2.read());
}

void ShuffleNetV2::thread_tmp_231_cast_fu_6825_p1() {
    tmp_231_cast_fu_6825_p1 = esl_zext<8,6>(w_reg_2307.read());
}

void ShuffleNetV2::thread_tmp_232_fu_7022_p1() {
    tmp_232_fu_7022_p1 = esl_zext<64,5>(i4_reg_2351.read());
}

void ShuffleNetV2::thread_tmp_235_cast_fu_6997_p1() {
    tmp_235_cast_fu_6997_p1 = esl_zext<12,5>(ci3_reg_2340.read());
}

void ShuffleNetV2::thread_tmp_236_cast_fu_6893_p1() {
    tmp_236_cast_fu_6893_p1 = esl_zext<13,6>(h_25_fu_6887_p2.read());
}

void ShuffleNetV2::thread_tmp_238_cast_fu_7039_p1() {
    tmp_238_cast_fu_7039_p1 = esl_zext<8,5>(co5_reg_2363.read());
}

void ShuffleNetV2::thread_tmp_239_fu_7167_p1() {
    tmp_239_fu_7167_p1 = esl_zext<64,5>(i8_reg_2396.read());
}

void ShuffleNetV2::thread_tmp_242_cast_fu_7092_p1() {
    tmp_242_cast_fu_7092_p1 = esl_zext<9,2>(w6_reg_2374.read());
}

void ShuffleNetV2::thread_tmp_243_fu_7188_p2() {
    tmp_243_fu_7188_p2 = (!co9_cast_fu_7172_p1.read().is_01() || !ap_const_lv6_18.is_01())? sc_lv<6>(): (sc_biguint<6>(co9_cast_fu_7172_p1.read()) + sc_biguint<6>(ap_const_lv6_18));
}

void ShuffleNetV2::thread_tmp_244_fu_7146_p1() {
    tmp_244_fu_7146_p1 = esl_zext<64,2>(h7_reg_2385.read());
}

void ShuffleNetV2::thread_tmp_245_fu_7325_p1() {
    tmp_245_fu_7325_p1 = esl_zext<64,5>(i6_reg_2431.read());
}

void ShuffleNetV2::thread_tmp_248_cast_fu_7300_p1() {
    tmp_248_cast_fu_7300_p1 = esl_zext<11,5>(ci10_reg_2420.read());
}

void ShuffleNetV2::thread_tmp_249_cast_fu_7346_p1() {
    tmp_249_cast_fu_7346_p1 = esl_zext<8,5>(co12_reg_2443.read());
}

void ShuffleNetV2::thread_tmp_250_fu_7372_p2() {
    tmp_250_fu_7372_p2 = (!co12_cast_fu_7330_p1.read().is_01() || !ap_const_lv6_18.is_01())? sc_lv<6>(): (sc_biguint<6>(co12_cast_fu_7330_p1.read()) + sc_biguint<6>(ap_const_lv6_18));
}

void ShuffleNetV2::thread_tmp_251_cast_fu_7378_p1() {
    tmp_251_cast_fu_7378_p1 = esl_zext<9,6>(tmp_250_fu_7372_p2.read());
}

void ShuffleNetV2::thread_tmp_252_fu_7539_p1() {
    tmp_252_fu_7539_p1 = esl_zext<64,5>(tmp_357_reg_2476.read());
}

void ShuffleNetV2::thread_tmp_255_cast_fu_7412_p1() {
    tmp_255_cast_fu_7412_p1 = esl_zext<9,2>(w13_reg_2454.read());
}

void ShuffleNetV2::thread_tmp_256_fu_7560_p2() {
    tmp_256_fu_7560_p2 = (!co16_cast_fu_7544_p1.read().is_01() || !ap_const_lv7_30.is_01())? sc_lv<7>(): (sc_biguint<7>(co16_cast_fu_7544_p1.read()) + sc_biguint<7>(ap_const_lv7_30));
}

void ShuffleNetV2::thread_tmp_257_cast_fu_7483_p1() {
    tmp_257_cast_fu_7483_p1 = esl_zext<9,2>(h14_reg_2465.read());
}

void ShuffleNetV2::thread_tmp_258_fu_7697_p1() {
    tmp_258_fu_7697_p1 = esl_zext<64,5>(i9_reg_2511.read());
}

void ShuffleNetV2::thread_tmp_261_cast_fu_7672_p1() {
    tmp_261_cast_fu_7672_p1 = esl_zext<11,5>(ci13_reg_2500.read());
}

void ShuffleNetV2::thread_tmp_262_fu_7748_p2() {
    tmp_262_fu_7748_p2 = (!co19_cast_fu_7702_p1.read().is_01() || !ap_const_lv6_18.is_01())? sc_lv<6>(): (sc_biguint<6>(co19_cast_fu_7702_p1.read()) + sc_biguint<6>(ap_const_lv6_18));
}

void ShuffleNetV2::thread_tmp_263_fu_7921_p2() {
    tmp_263_fu_7921_p2 = (!co22_cast_fu_7905_p1.read().is_01() || !ap_const_lv7_48.is_01())? sc_lv<7>(): (sc_biguint<7>(co22_cast_fu_7905_p1.read()) + sc_bigint<7>(ap_const_lv7_48));
}

void ShuffleNetV2::thread_tmp_264_cast1_fu_7796_p1() {
    tmp_264_cast1_fu_7796_p1 = esl_zext<11,5>(h_28_fu_7790_p2.read());
}

void ShuffleNetV2::thread_tmp_264_cast_fu_7800_p1() {
    tmp_264_cast_fu_7800_p1 = esl_zext<10,5>(h_28_fu_7790_p2.read());
}

void ShuffleNetV2::thread_tmp_265_fu_8058_p1() {
    tmp_265_fu_8058_p1 = esl_zext<64,5>(i10_reg_2579.read());
}

void ShuffleNetV2::thread_tmp_268_cast_fu_8033_p1() {
    tmp_268_cast_fu_8033_p1 = esl_zext<11,5>(ci15_reg_2568.read());
}

void ShuffleNetV2::thread_tmp_269_cast1_fu_7878_p1() {
    tmp_269_cast1_fu_7878_p1 = esl_zext<15,5>(w_28_fu_7872_p2.read());
}

void ShuffleNetV2::thread_tmp_269_cast_fu_7882_p1() {
    tmp_269_cast_fu_7882_p1 = esl_zext<14,5>(w_28_fu_7872_p2.read());
}

void ShuffleNetV2::thread_tmp_270_cast_fu_8079_p1() {
    tmp_270_cast_fu_8079_p1 = esl_zext<8,5>(co25_reg_2591.read());
}

void ShuffleNetV2::thread_tmp_271_fu_8105_p2() {
    tmp_271_fu_8105_p2 = (!co25_cast_fu_8063_p1.read().is_01() || !ap_const_lv7_30.is_01())? sc_lv<7>(): (sc_biguint<7>(co25_cast_fu_8063_p1.read()) + sc_biguint<7>(ap_const_lv7_30));
}

void ShuffleNetV2::thread_tmp_272_cast_fu_8111_p1() {
    tmp_272_cast_fu_8111_p1 = esl_zext<10,7>(tmp_271_fu_8105_p2.read());
}

void ShuffleNetV2::thread_tmp_273_fu_8258_p1() {
    tmp_273_fu_8258_p1 = esl_zext<64,5>(i11_reg_2624.read());
}

void ShuffleNetV2::thread_tmp_276_cast1_fu_8160_p1() {
    tmp_276_cast1_fu_8160_p1 = esl_zext<9,2>(w26_reg_2602.read());
}

void ShuffleNetV2::thread_tmp_276_cast_fu_8164_p1() {
    tmp_276_cast_fu_8164_p1 = esl_zext<10,2>(w26_reg_2602.read());
}

void ShuffleNetV2::thread_tmp_277_cast_fu_8233_p1() {
    tmp_277_cast_fu_8233_p1 = esl_zext<9,2>(h27_reg_2613.read());
}

void ShuffleNetV2::thread_tmp_278_fu_8434_p1() {
    tmp_278_fu_8434_p1 = esl_zext<64,5>(tmp_644_reg_2659.read());
}

void ShuffleNetV2::thread_tmp_281_cast_fu_8378_p1() {
    tmp_281_cast_fu_8378_p1 = esl_zext<11,5>(ci17_reg_2648.read());
}

void ShuffleNetV2::thread_tmp_282_fu_8604_p2() {
    tmp_282_fu_8604_p2 = (!co35_cast_fu_8558_p1.read().is_01() || !ap_const_lv6_18.is_01())? sc_lv<6>(): (sc_biguint<6>(co35_cast_fu_8558_p1.read()) + sc_biguint<6>(ap_const_lv6_18));
}

void ShuffleNetV2::thread_tmp_283_cast_fu_8493_p1() {
    tmp_283_cast_fu_8493_p1 = esl_zext<10,5>(h_31_fu_8487_p2.read());
}

void ShuffleNetV2::thread_tmp_284_fu_8777_p2() {
    tmp_284_fu_8777_p2 = (!co36_cast_fu_8761_p1.read().is_01() || !ap_const_lv8_78.is_01())? sc_lv<8>(): (sc_biguint<8>(co36_cast_fu_8761_p1.read()) + sc_biguint<8>(ap_const_lv8_78));
}

void ShuffleNetV2::thread_tmp_285_cast1_fu_8652_p1() {
    tmp_285_cast1_fu_8652_p1 = esl_zext<11,5>(h_33_fu_8646_p2.read());
}

void ShuffleNetV2::thread_tmp_285_cast_fu_8656_p1() {
    tmp_285_cast_fu_8656_p1 = esl_zext<10,5>(h_33_fu_8646_p2.read());
}

void ShuffleNetV2::thread_tmp_286_cast_fu_8544_p1() {
    tmp_286_cast_fu_8544_p1 = esl_zext<15,5>(w_31_fu_8538_p2.read());
}

void ShuffleNetV2::thread_tmp_287_fu_8914_p1() {
    tmp_287_fu_8914_p1 = esl_zext<64,5>(i14_reg_2760.read());
}

void ShuffleNetV2::thread_tmp_290_cast_fu_8889_p1() {
    tmp_290_cast_fu_8889_p1 = esl_zext<11,5>(ci19_reg_2749.read());
}

void ShuffleNetV2::thread_tmp_291_cast1_fu_8734_p1() {
    tmp_291_cast1_fu_8734_p1 = esl_zext<15,5>(w_33_fu_8728_p2.read());
}

void ShuffleNetV2::thread_tmp_291_cast_fu_8738_p1() {
    tmp_291_cast_fu_8738_p1 = esl_zext<14,5>(w_33_fu_8728_p2.read());
}

void ShuffleNetV2::thread_tmp_292_cast_fu_8935_p1() {
    tmp_292_cast_fu_8935_p1 = esl_zext<8,5>(co38_reg_2772.read());
}

void ShuffleNetV2::thread_tmp_293_fu_8961_p2() {
    tmp_293_fu_8961_p2 = (!co39_cast_fu_8919_p1.read().is_01() || !ap_const_lv7_48.is_01())? sc_lv<7>(): (sc_biguint<7>(co39_cast_fu_8919_p1.read()) + sc_bigint<7>(ap_const_lv7_48));
}

void ShuffleNetV2::thread_tmp_294_cast_fu_8967_p1() {
    tmp_294_cast_fu_8967_p1 = esl_zext<10,7>(tmp_293_fu_8961_p2.read());
}

void ShuffleNetV2::thread_tmp_295_fu_9114_p1() {
    tmp_295_fu_9114_p1 = esl_zext<64,5>(i16_reg_2805.read());
}

void ShuffleNetV2::thread_tmp_298_cast1_fu_9016_p1() {
    tmp_298_cast1_fu_9016_p1 = esl_zext<9,2>(w34_reg_2783.read());
}

void ShuffleNetV2::thread_tmp_298_cast_fu_9020_p1() {
    tmp_298_cast_fu_9020_p1 = esl_zext<10,2>(w34_reg_2783.read());
}

void ShuffleNetV2::thread_tmp_299_fu_9135_p2() {
    tmp_299_fu_9135_p2 = (!co41_cast_fu_9119_p1.read().is_01() || !ap_const_lv8_90.is_01())? sc_lv<8>(): (sc_biguint<8>(co41_cast_fu_9119_p1.read()) + sc_bigint<8>(ap_const_lv8_90));
}

void ShuffleNetV2::thread_tmp_300_cast_fu_9089_p1() {
    tmp_300_cast_fu_9089_p1 = esl_zext<9,2>(h34_reg_2794.read());
}

void ShuffleNetV2::thread_tmp_301_fu_9272_p1() {
    tmp_301_fu_9272_p1 = esl_zext<64,5>(i18_reg_2840.read());
}

void ShuffleNetV2::thread_tmp_304_cast_fu_9247_p1() {
    tmp_304_cast_fu_9247_p1 = esl_zext<11,5>(ci21_reg_2829.read());
}

void ShuffleNetV2::thread_tmp_305_fu_9442_p2() {
    tmp_305_fu_9442_p2 = (!co44_cast_fu_9396_p1.read().is_01() || !ap_const_lv6_18.is_01())? sc_lv<6>(): (sc_biguint<6>(co44_cast_fu_9396_p1.read()) + sc_biguint<6>(ap_const_lv6_18));
}

void ShuffleNetV2::thread_tmp_306_cast_fu_9331_p1() {
    tmp_306_cast_fu_9331_p1 = esl_zext<10,5>(h_37_fu_9325_p2.read());
}

void ShuffleNetV2::thread_tmp_307_fu_9615_p2() {
    tmp_307_fu_9615_p2 = (!co46_cast_fu_9599_p1.read().is_01() || !ap_const_lv8_A8.is_01())? sc_lv<8>(): (sc_biguint<8>(co46_cast_fu_9599_p1.read()) + sc_bigint<8>(ap_const_lv8_A8));
}

void ShuffleNetV2::thread_tmp_308_cast1_fu_9490_p1() {
    tmp_308_cast1_fu_9490_p1 = esl_zext<11,5>(h_39_fu_9484_p2.read());
}

void ShuffleNetV2::thread_tmp_308_cast_fu_9494_p1() {
    tmp_308_cast_fu_9494_p1 = esl_zext<10,5>(h_39_fu_9484_p2.read());
}

void ShuffleNetV2::thread_tmp_309_cast_fu_9382_p1() {
    tmp_309_cast_fu_9382_p1 = esl_zext<15,5>(w_37_fu_9376_p2.read());
}

void ShuffleNetV2::thread_tmp_310_fu_9764_p1() {
    tmp_310_fu_9764_p1 = esl_zext<64,5>(tmp_887_reg_2941.read());
}

void ShuffleNetV2::thread_tmp_313_cast_fu_9712_p1() {
    tmp_313_cast_fu_9712_p1 = esl_zext<11,5>(ci23_reg_2930.read());
}

void ShuffleNetV2::thread_tmp_313_fu_6693_p2() {
    tmp_313_fu_6693_p2 = (!tmp_482_cast_reg_30621.read().is_01() || !ap_const_lv33_C18.is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_482_cast_reg_30621.read()) + sc_biguint<33>(ap_const_lv33_C18));
}

void ShuffleNetV2::thread_tmp_314_cast1_fu_9572_p1() {
    tmp_314_cast1_fu_9572_p1 = esl_zext<15,5>(w_39_fu_9566_p2.read());
}

void ShuffleNetV2::thread_tmp_314_cast_fu_9576_p1() {
    tmp_314_cast_fu_9576_p1 = esl_zext<14,5>(w_39_fu_9566_p2.read());
}

void ShuffleNetV2::thread_tmp_314_fu_6698_p1() {
    tmp_314_fu_6698_p1 = esl_sext<64,33>(tmp_313_fu_6693_p2.read());
}

void ShuffleNetV2::thread_tmp_315_cast_fu_9781_p1() {
    tmp_315_cast_fu_9781_p1 = esl_zext<8,5>(co48_reg_2953.read());
}

void ShuffleNetV2::thread_tmp_315_fu_6725_p2() {
    tmp_315_fu_6725_p2 = (!tmp_482_cast_reg_30621.read().is_01() || !ap_const_lv33_E18.is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_482_cast_reg_30621.read()) + sc_biguint<33>(ap_const_lv33_E18));
}

void ShuffleNetV2::thread_tmp_316_fu_9807_p3() {
    tmp_316_fu_9807_p3 = esl_concat<1,5>(ap_const_lv1_1, co48_reg_2953.read());
}

void ShuffleNetV2::thread_tmp_317_cast_fu_9819_p1() {
    tmp_317_cast_fu_9819_p1 = esl_zext<10,7>(tmp_446_cast_fu_9815_p1.read());
}

void ShuffleNetV2::thread_tmp_317_fu_6730_p1() {
    tmp_317_fu_6730_p1 = esl_sext<64,33>(tmp_315_fu_6725_p2.read());
}

void ShuffleNetV2::thread_tmp_318_fu_9976_p1() {
    tmp_318_fu_9976_p1 = esl_zext<64,5>(i21_reg_2986.read());
}

void ShuffleNetV2::thread_tmp_319_fu_6967_p2() {
    tmp_319_fu_6967_p2 = (!tmp_482_cast_reg_30621.read().is_01() || !ap_const_lv33_18.is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_482_cast_reg_30621.read()) + sc_biguint<33>(ap_const_lv33_18));
}

void ShuffleNetV2::thread_tmp_320_fu_6972_p1() {
    tmp_320_fu_6972_p1 = esl_sext<64,33>(tmp_319_fu_6967_p2.read());
}

void ShuffleNetV2::thread_tmp_321_cast1_fu_9878_p1() {
    tmp_321_cast1_fu_9878_p1 = esl_zext<9,2>(w40_reg_2964.read());
}

void ShuffleNetV2::thread_tmp_321_cast_fu_9882_p1() {
    tmp_321_cast_fu_9882_p1 = esl_zext<11,2>(w40_reg_2964.read());
}

void ShuffleNetV2::thread_tmp_321_fu_6948_p1() {
    tmp_321_fu_6948_p1 = esl_sext<33,11>(tmp_396_fu_6942_p2.read());
}

void ShuffleNetV2::thread_tmp_322_cast_fu_9951_p1() {
    tmp_322_cast_fu_9951_p1 = esl_zext<9,2>(h40_reg_2975.read());
}

void ShuffleNetV2::thread_tmp_322_fu_6952_p2() {
    tmp_322_fu_6952_p2 = (!tmp_321_fu_6948_p1.read().is_01() || !tmp_490_cast_reg_30684.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_321_fu_6948_p1.read()) + sc_bigint<33>(tmp_490_cast_reg_30684.read()));
}

void ShuffleNetV2::thread_tmp_323_fu_10136_p1() {
    tmp_323_fu_10136_p1 = esl_zext<64,5>(i23_reg_3021.read());
}

void ShuffleNetV2::thread_tmp_324_fu_6957_p1() {
    tmp_324_fu_6957_p1 = esl_sext<64,33>(tmp_322_fu_6952_p2.read());
}

void ShuffleNetV2::thread_tmp_325_fu_6864_p3() {
    tmp_325_fu_6864_p3 = esl_concat<8,1>(tmp_397_reg_30816.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_326_cast_fu_10111_p1() {
    tmp_326_cast_fu_10111_p1 = esl_zext<11,5>(ci25_reg_3010.read());
}

void ShuffleNetV2::thread_tmp_326_fu_6834_p3() {
    tmp_326_fu_6834_p3 = esl_concat<8,5>(tmp_403_fu_6829_p2.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_327_fu_10304_p2() {
    tmp_327_fu_10304_p2 = (!p_shl_cast_fu_10288_p1.read().is_01() || !p_shl1_cast_fu_10300_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl_cast_fu_10288_p1.read()) - sc_biguint<7>(p_shl1_cast_fu_10300_p1.read()));
}

void ShuffleNetV2::thread_tmp_328_cast_fu_10195_p1() {
    tmp_328_cast_fu_10195_p1 = esl_zext<10,5>(h_43_fu_10189_p2.read());
}

void ShuffleNetV2::thread_tmp_328_fu_6846_p2() {
    tmp_328_fu_6846_p2 = (!tmp_376_reg_30749.read().is_01() || !tmp_408_fu_6842_p1.read().is_01())? sc_lv<64>(): (sc_bigint<64>(tmp_376_reg_30749.read()) + sc_biguint<64>(tmp_408_fu_6842_p1.read()));
}

void ShuffleNetV2::thread_tmp_329_fu_10340_p2() {
    tmp_329_fu_10340_p2 = (!tmp_327_reg_31910.read().is_01() || !ci27_cast_fu_10324_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_327_reg_31910.read()) + sc_biguint<7>(ci27_cast_fu_10324_p1.read()));
}

void ShuffleNetV2::thread_tmp_330_cast_fu_10345_p1() {
    tmp_330_cast_fu_10345_p1 = esl_sext<13,7>(tmp_329_fu_10340_p2.read());
}

void ShuffleNetV2::thread_tmp_330_fu_7065_p2() {
    tmp_330_fu_7065_p2 = (!tmp_482_cast_reg_30621.read().is_01() || !ap_const_lv33_30.is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_482_cast_reg_30621.read()) + sc_biguint<33>(ap_const_lv33_30));
}

void ShuffleNetV2::thread_tmp_331_cast_fu_10349_p1() {
    tmp_331_cast_fu_10349_p1 = esl_zext<16,5>(ci27_reg_3077.read());
}

void ShuffleNetV2::thread_tmp_331_fu_7070_p1() {
    tmp_331_fu_7070_p1 = esl_sext<64,33>(tmp_330_fu_7065_p2.read());
}

void ShuffleNetV2::thread_tmp_332_cast_fu_10246_p1() {
    tmp_332_cast_fu_10246_p1 = esl_zext<15,5>(w_43_fu_10240_p2.read());
}

void ShuffleNetV2::thread_tmp_332_fu_7105_p3() {
    tmp_332_fu_7105_p3 = esl_concat<9,2>(tmp_423_fu_7096_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_333_fu_10600_p2() {
    tmp_333_fu_10600_p2 = (!p_shl2_cast_fu_10584_p1.read().is_01() || !p_shl3_cast_fu_10596_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl2_cast_fu_10584_p1.read()) - sc_biguint<7>(p_shl3_cast_fu_10596_p1.read()));
}

void ShuffleNetV2::thread_tmp_334_fu_10610_p2() {
    tmp_334_fu_10610_p2 = (!i27_cast1_reg_31968.read().is_01() || !tmp_333_fu_10600_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(i27_cast1_reg_31968.read()) + sc_biguint<7>(tmp_333_fu_10600_p2.read()));
}

void ShuffleNetV2::thread_tmp_335_fu_10647_p1() {
    tmp_335_fu_10647_p1 = esl_zext<64,32>(tmp_467_cast_fu_10644_p1.read());
}

void ShuffleNetV2::thread_tmp_336_fu_10621_p2() {
    tmp_336_fu_10621_p2 = (!tmp2_fu_10615_p2.read().is_01() || !i27_cast_reg_31963.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp2_fu_10615_p2.read()) + sc_biguint<9>(i27_cast_reg_31963.read()));
}

void ShuffleNetV2::thread_tmp_337_cast_fu_10626_p1() {
    tmp_337_cast_fu_10626_p1 = esl_zext<33,9>(tmp_336_reg_31994.read());
}

void ShuffleNetV2::thread_tmp_337_fu_7123_p2() {
    tmp_337_fu_7123_p2 = (!tmp_428_fu_7117_p2.read().is_01() || !tmp_373_reg_30725.read().is_01())? sc_lv<64>(): (sc_biguint<64>(tmp_428_fu_7117_p2.read()) + sc_bigint<64>(tmp_373_reg_30725.read()));
}

void ShuffleNetV2::thread_tmp_338_fu_10393_p2() {
    tmp_338_fu_10393_p2 = (!p_shl4_cast_fu_10377_p1.read().is_01() || !p_shl5_cast_fu_10389_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl4_cast_fu_10377_p1.read()) - sc_biguint<7>(p_shl5_cast_fu_10389_p1.read()));
}

void ShuffleNetV2::thread_tmp_339_fu_10399_p2() {
    tmp_339_fu_10399_p2 = (!tmp_338_fu_10393_p2.read().is_01() || !tmp_464_cast_reg_31915.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_338_fu_10393_p2.read()) + sc_biguint<7>(tmp_464_cast_reg_31915.read()));
}

void ShuffleNetV2::thread_tmp_340_fu_10459_p2() {
    tmp_340_fu_10459_p2 = (!p_shl6_cast_fu_10443_p1.read().is_01() || !p_shl7_cast_fu_10455_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl6_cast_fu_10443_p1.read()) - sc_biguint<8>(p_shl7_cast_fu_10455_p1.read()));
}

void ShuffleNetV2::thread_tmp_341_fu_10475_p2() {
    tmp_341_fu_10475_p2 = (!tmp1_fu_10469_p2.read().is_01() || !co54_cast_reg_31897.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp1_fu_10469_p2.read()) + sc_biguint<9>(co54_cast_reg_31897.read()));
}

void ShuffleNetV2::thread_tmp_342_cast1_fu_10684_p1() {
    tmp_342_cast1_fu_10684_p1 = esl_zext<12,2>(w44_reg_3132.read());
}

void ShuffleNetV2::thread_tmp_342_cast_fu_10688_p1() {
    tmp_342_cast_fu_10688_p1 = esl_zext<36,2>(w44_reg_3132.read());
}

void ShuffleNetV2::thread_tmp_342_fu_7243_p2() {
    tmp_342_fu_7243_p2 = (!tmp_482_cast_reg_30621.read().is_01() || !ap_const_lv33_48.is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_482_cast_reg_30621.read()) + sc_biguint<33>(ap_const_lv33_48));
}

void ShuffleNetV2::thread_tmp_343_fu_11069_p2() {
    tmp_343_fu_11069_p2 = (!p_shl10_cast_fu_11053_p1.read().is_01() || !p_shl11_cast_fu_11065_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl10_cast_fu_11053_p1.read()) - sc_biguint<7>(p_shl11_cast_fu_11065_p1.read()));
}

void ShuffleNetV2::thread_tmp_344_fu_10969_p2() {
    tmp_344_fu_10969_p2 = (!p_shl8_cast_fu_10953_p1.read().is_01() || !p_shl9_cast_fu_10965_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl8_cast_fu_10953_p1.read()) - sc_biguint<7>(p_shl9_cast_fu_10965_p1.read()));
}

void ShuffleNetV2::thread_tmp_345_fu_10979_p2() {
    tmp_345_fu_10979_p2 = (!i29_cast_reg_32111.read().is_01() || !tmp_344_fu_10969_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(i29_cast_reg_32111.read()) + sc_biguint<7>(tmp_344_fu_10969_p2.read()));
}

void ShuffleNetV2::thread_tmp_346_fu_11020_p1() {
    tmp_346_fu_11020_p1 = esl_zext<64,32>(tmp_485_cast_fu_11017_p1.read());
}

void ShuffleNetV2::thread_tmp_347_fu_10990_p2() {
    tmp_347_fu_10990_p2 = (!tmp4_fu_10984_p2.read().is_01() || !i29_cast606_cast_reg_32106.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp4_fu_10984_p2.read()) + sc_biguint<8>(i29_cast606_cast_reg_32106.read()));
}

void ShuffleNetV2::thread_tmp_348_cast_fu_10998_p1() {
    tmp_348_cast_fu_10998_p1 = esl_zext<33,9>(tmp_488_cast_fu_10995_p1.read());
}

void ShuffleNetV2::thread_tmp_348_fu_7248_p1() {
    tmp_348_fu_7248_p1 = esl_sext<64,33>(tmp_342_fu_7243_p2.read());
}

void ShuffleNetV2::thread_tmp_349_cast_fu_10708_p1() {
    tmp_349_cast_fu_10708_p1 = esl_zext<10,2>(h44_reg_3143.read());
}

void ShuffleNetV2::thread_tmp_349_fu_10704_p1() {
    tmp_349_fu_10704_p1 = esl_zext<64,2>(h44_reg_3143.read());
}

void ShuffleNetV2::thread_tmp_350_fu_11105_p2() {
    tmp_350_fu_11105_p2 = (!tmp_343_reg_32161.read().is_01() || !ci29_cast_fu_11089_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_343_reg_32161.read()) + sc_biguint<7>(ci29_cast_fu_11089_p1.read()));
}

void ShuffleNetV2::thread_tmp_351_cast_fu_11110_p1() {
    tmp_351_cast_fu_11110_p1 = esl_sext<13,7>(tmp_350_fu_11105_p2.read());
}

void ShuffleNetV2::thread_tmp_351_fu_7224_p1() {
    tmp_351_fu_7224_p1 = esl_sext<33,12>(tmp_441_fu_7218_p2.read());
}

void ShuffleNetV2::thread_tmp_352_cast_fu_11114_p1() {
    tmp_352_cast_fu_11114_p1 = esl_zext<16,5>(ci29_reg_3198.read());
}

void ShuffleNetV2::thread_tmp_352_fu_7228_p2() {
    tmp_352_fu_7228_p2 = (!tmp_351_fu_7224_p1.read().is_01() || !tmp_490_cast_reg_30684.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_351_fu_7224_p1.read()) + sc_bigint<33>(tmp_490_cast_reg_30684.read()));
}

void ShuffleNetV2::thread_tmp_353_fu_10752_p2() {
    tmp_353_fu_10752_p2 = (!p_shl14_cast_fu_10736_p1.read().is_01() || !p_shl15_cast_fu_10748_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl14_cast_fu_10736_p1.read()) - sc_biguint<7>(p_shl15_cast_fu_10748_p1.read()));
}

void ShuffleNetV2::thread_tmp_354_fu_10762_p2() {
    tmp_354_fu_10762_p2 = (!tmp_353_fu_10752_p2.read().is_01() || !co57_cast1_reg_32010.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_353_fu_10752_p2.read()) + sc_biguint<7>(co57_cast1_reg_32010.read()));
}

void ShuffleNetV2::thread_tmp_355_cast_fu_10781_p1() {
    tmp_355_cast_fu_10781_p1 = esl_zext<35,32>(tmp_504_cast_fu_10778_p1.read());
}

void ShuffleNetV2::thread_tmp_355_fu_7233_p1() {
    tmp_355_fu_7233_p1 = esl_sext<64,33>(tmp_352_fu_7228_p2.read());
}

void ShuffleNetV2::thread_tmp_356_fu_10773_p2() {
    tmp_356_fu_10773_p2 = (!co57_cast_reg_32005.read().is_01() || !tmp3_fu_10767_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(co57_cast_reg_32005.read()) + sc_biguint<8>(tmp3_fu_10767_p2.read()));
}

void ShuffleNetV2::thread_tmp_357_cast_fu_10823_p1() {
    tmp_357_cast_fu_10823_p1 = esl_zext<11,8>(tmp_356_reg_32073.read());
}

void ShuffleNetV2::thread_tmp_358_fu_11365_p2() {
    tmp_358_fu_11365_p2 = (!p_shl12_cast_fu_11349_p1.read().is_01() || !p_shl13_cast_fu_11361_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl12_cast_fu_11349_p1.read()) - sc_biguint<7>(p_shl13_cast_fu_11361_p1.read()));
}

void ShuffleNetV2::thread_tmp_359_fu_11375_p2() {
    tmp_359_fu_11375_p2 = (!i32_cast_reg_32219.read().is_01() || !tmp_358_fu_11365_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(i32_cast_reg_32219.read()) + sc_biguint<7>(tmp_358_fu_11365_p2.read()));
}

void ShuffleNetV2::thread_tmp_360_fu_11416_p1() {
    tmp_360_fu_11416_p1 = esl_zext<64,32>(tmp_495_cast_fu_11413_p1.read());
}

void ShuffleNetV2::thread_tmp_361_fu_11386_p2() {
    tmp_361_fu_11386_p2 = (!tmp6_fu_11380_p2.read().is_01() || !i32_cast593_cast_reg_32214.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp6_fu_11380_p2.read()) + sc_biguint<8>(i32_cast593_cast_reg_32214.read()));
}

void ShuffleNetV2::thread_tmp_362_cast_fu_11394_p1() {
    tmp_362_cast_fu_11394_p1 = esl_zext<33,9>(tmp_498_cast_fu_11391_p1.read());
}

void ShuffleNetV2::thread_tmp_362_fu_7508_p3() {
    tmp_362_fu_7508_p3 = esl_concat<1,5>(ap_const_lv1_1, tmp_357_reg_2476.read());
}

void ShuffleNetV2::thread_tmp_363_fu_11158_p2() {
    tmp_363_fu_11158_p2 = (!p_shl16_cast_fu_11142_p1.read().is_01() || !p_shl17_cast_fu_11154_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl16_cast_fu_11142_p1.read()) - sc_biguint<7>(p_shl17_cast_fu_11154_p1.read()));
}

void ShuffleNetV2::thread_tmp_364_fu_11164_p2() {
    tmp_364_fu_11164_p2 = (!tmp_363_fu_11158_p2.read().is_01() || !tmp_492_cast_reg_32166.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_363_fu_11158_p2.read()) + sc_biguint<7>(tmp_492_cast_reg_32166.read()));
}

void ShuffleNetV2::thread_tmp_365_fu_11224_p2() {
    tmp_365_fu_11224_p2 = (!p_shl18_cast_fu_11208_p1.read().is_01() || !p_shl19_cast_fu_11220_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl18_cast_fu_11208_p1.read()) - sc_biguint<8>(p_shl19_cast_fu_11220_p1.read()));
}

void ShuffleNetV2::thread_tmp_366_fu_11240_p2() {
    tmp_366_fu_11240_p2 = (!tmp5_fu_11234_p2.read().is_01() || !co59_cast_reg_32148.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp5_fu_11234_p2.read()) + sc_biguint<9>(co59_cast_reg_32148.read()));
}

void ShuffleNetV2::thread_tmp_367_cast1_fu_11453_p1() {
    tmp_367_cast1_fu_11453_p1 = esl_zext<11,2>(w46_reg_3253.read());
}

void ShuffleNetV2::thread_tmp_367_cast_fu_11457_p1() {
    tmp_367_cast_fu_11457_p1 = esl_zext<36,2>(w46_reg_3253.read());
}

void ShuffleNetV2::thread_tmp_367_fu_6659_p1() {
    tmp_367_fu_6659_p1 = esl_sext<64,32>(bias_V_read_reg_30579.read());
}

void ShuffleNetV2::thread_tmp_368_fu_11830_p2() {
    tmp_368_fu_11830_p2 = (!p_shl22_cast_fu_11814_p1.read().is_01() || !p_shl23_cast_fu_11826_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl22_cast_fu_11814_p1.read()) - sc_biguint<7>(p_shl23_cast_fu_11826_p1.read()));
}

void ShuffleNetV2::thread_tmp_369_fu_11734_p2() {
    tmp_369_fu_11734_p2 = (!p_shl20_cast_fu_11718_p1.read().is_01() || !p_shl21_cast_fu_11730_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl20_cast_fu_11718_p1.read()) - sc_biguint<7>(p_shl21_cast_fu_11730_p1.read()));
}

void ShuffleNetV2::thread_tmp_370_fu_11744_p2() {
    tmp_370_fu_11744_p2 = (!i37_cast1_reg_32362.read().is_01() || !tmp_369_fu_11734_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(i37_cast1_reg_32362.read()) + sc_biguint<7>(tmp_369_fu_11734_p2.read()));
}

void ShuffleNetV2::thread_tmp_371_fu_11781_p1() {
    tmp_371_fu_11781_p1 = esl_zext<64,32>(tmp_518_cast_fu_11778_p1.read());
}

void ShuffleNetV2::thread_tmp_372_fu_11755_p2() {
    tmp_372_fu_11755_p2 = (!tmp8_fu_11749_p2.read().is_01() || !i37_cast_reg_32357.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp8_fu_11749_p2.read()) + sc_biguint<10>(i37_cast_reg_32357.read()));
}

void ShuffleNetV2::thread_tmp_373_cast_fu_11760_p1() {
    tmp_373_cast_fu_11760_p1 = esl_zext<33,10>(tmp_372_reg_32388.read());
}

void ShuffleNetV2::thread_tmp_373_fu_6675_p1() {
    tmp_373_fu_6675_p1 = esl_sext<64,32>(shuffle_conv_3x3_V_r_reg_30600.read());
}

void ShuffleNetV2::thread_tmp_374_cast_fu_11477_p1() {
    tmp_374_cast_fu_11477_p1 = esl_zext<10,2>(h46_reg_3264.read());
}

void ShuffleNetV2::thread_tmp_374_fu_11473_p1() {
    tmp_374_fu_11473_p1 = esl_zext<64,2>(h46_reg_3264.read());
}

void ShuffleNetV2::thread_tmp_375_fu_11866_p2() {
    tmp_375_fu_11866_p2 = (!tmp_368_reg_32412.read().is_01() || !ci31_cast_fu_11850_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_368_reg_32412.read()) + sc_biguint<7>(ci31_cast_fu_11850_p1.read()));
}

void ShuffleNetV2::thread_tmp_376_cast_fu_11871_p1() {
    tmp_376_cast_fu_11871_p1 = esl_sext<13,7>(tmp_375_fu_11866_p2.read());
}

void ShuffleNetV2::thread_tmp_376_fu_6678_p1() {
    tmp_376_fu_6678_p1 = esl_sext<64,32>(image_V_read_reg_30610.read());
}

void ShuffleNetV2::thread_tmp_377_cast_fu_11875_p1() {
    tmp_377_cast_fu_11875_p1 = esl_zext<17,5>(ci31_reg_3319.read());
}

void ShuffleNetV2::thread_tmp_377_fu_6774_p3() {
    tmp_377_fu_6774_p3 = esl_concat<2,5>(ci_reg_2296.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_378_fu_11521_p2() {
    tmp_378_fu_11521_p2 = (!p_shl26_cast_fu_11505_p1.read().is_01() || !p_shl27_cast_fu_11517_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl26_cast_fu_11505_p1.read()) - sc_biguint<7>(p_shl27_cast_fu_11517_p1.read()));
}

void ShuffleNetV2::thread_tmp_379_fu_11531_p2() {
    tmp_379_fu_11531_p2 = (!tmp_378_fu_11521_p2.read().is_01() || !co61_cast1_reg_32261.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_378_fu_11521_p2.read()) + sc_biguint<7>(co61_cast1_reg_32261.read()));
}

void ShuffleNetV2::thread_tmp_380_cast_fu_11550_p1() {
    tmp_380_cast_fu_11550_p1 = esl_zext<35,32>(tmp_537_cast_fu_11547_p1.read());
}

void ShuffleNetV2::thread_tmp_380_fu_6786_p3() {
    tmp_380_fu_6786_p3 = esl_concat<2,1>(ci_reg_2296.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_381_fu_11542_p2() {
    tmp_381_fu_11542_p2 = (!co61_cast_reg_32256.read().is_01() || !tmp7_fu_11536_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(co61_cast_reg_32256.read()) + sc_biguint<8>(tmp7_fu_11536_p2.read()));
}

void ShuffleNetV2::thread_tmp_382_cast_fu_11592_p1() {
    tmp_382_cast_fu_11592_p1 = esl_zext<11,8>(tmp_381_reg_32324.read());
}

void ShuffleNetV2::thread_tmp_382_fu_6798_p2() {
    tmp_382_fu_6798_p2 = (!p_shl276_cast_fu_6794_p1.read().is_01() || !tmp_512_cast_fu_6782_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl276_cast_fu_6794_p1.read()) + sc_biguint<8>(tmp_512_cast_fu_6782_p1.read()));
}

void ShuffleNetV2::thread_tmp_383_fu_12228_p2() {
    tmp_383_fu_12228_p2 = (!co65_cast_fu_12182_p1.read().is_01() || !ap_const_lv7_30.is_01())? sc_lv<7>(): (sc_biguint<7>(co65_cast_fu_12182_p1.read()) + sc_biguint<7>(ap_const_lv7_30));
}

void ShuffleNetV2::thread_tmp_384_fu_12130_p2() {
    tmp_384_fu_12130_p2 = (!p_shl24_cast_fu_12114_p1.read().is_01() || !p_shl25_cast_fu_12126_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl24_cast_fu_12114_p1.read()) - sc_biguint<7>(p_shl25_cast_fu_12126_p1.read()));
}

void ShuffleNetV2::thread_tmp_385_fu_12140_p2() {
    tmp_385_fu_12140_p2 = (!i39_cast1_reg_32470.read().is_01() || !tmp_384_fu_12130_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(i39_cast1_reg_32470.read()) + sc_biguint<7>(tmp_384_fu_12130_p2.read()));
}

void ShuffleNetV2::thread_tmp_386_fu_12177_p1() {
    tmp_386_fu_12177_p1 = esl_zext<64,32>(tmp_528_cast_fu_12174_p1.read());
}

void ShuffleNetV2::thread_tmp_387_fu_12151_p2() {
    tmp_387_fu_12151_p2 = (!tmp10_fu_12145_p2.read().is_01() || !i39_cast_reg_32465.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp10_fu_12145_p2.read()) + sc_biguint<10>(i39_cast_reg_32465.read()));
}

void ShuffleNetV2::thread_tmp_388_cast_fu_12156_p1() {
    tmp_388_cast_fu_12156_p1 = esl_zext<33,10>(tmp_387_reg_32496.read());
}

void ShuffleNetV2::thread_tmp_388_fu_6918_p3() {
    tmp_388_fu_6918_p3 = esl_concat<5,5>(co_reg_2329.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_389_fu_11919_p2() {
    tmp_389_fu_11919_p2 = (!p_shl30_cast_fu_11903_p1.read().is_01() || !p_shl31_cast_fu_11915_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl30_cast_fu_11903_p1.read()) - sc_biguint<7>(p_shl31_cast_fu_11915_p1.read()));
}

void ShuffleNetV2::thread_tmp_390_fu_11925_p2() {
    tmp_390_fu_11925_p2 = (!tmp_389_fu_11919_p2.read().is_01() || !tmp_525_cast_reg_32417.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_389_fu_11919_p2.read()) + sc_biguint<7>(tmp_525_cast_reg_32417.read()));
}

void ShuffleNetV2::thread_tmp_391_fu_11985_p2() {
    tmp_391_fu_11985_p2 = (!p_shl32_cast_fu_11969_p1.read().is_01() || !p_shl33_cast_fu_11981_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl32_cast_fu_11969_p1.read()) - sc_biguint<8>(p_shl33_cast_fu_11981_p1.read()));
}

void ShuffleNetV2::thread_tmp_392_fu_12005_p2() {
    tmp_392_fu_12005_p2 = (!tmp9_cast_fu_12001_p1.read().is_01() || !co63_cast_reg_32399.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp9_cast_fu_12001_p1.read()) + sc_biguint<10>(co63_cast_reg_32399.read()));
}

void ShuffleNetV2::thread_tmp_393_fu_12437_p2() {
    tmp_393_fu_12437_p2 = (!p_shl28_cast_fu_12421_p1.read().is_01() || !p_shl29_cast_fu_12433_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl28_cast_fu_12421_p1.read()) - sc_biguint<7>(p_shl29_cast_fu_12433_p1.read()));
}

void ShuffleNetV2::thread_tmp_394_cast1_fu_12276_p1() {
    tmp_394_cast1_fu_12276_p1 = esl_zext<10,4>(h_49_fu_12270_p2.read());
}

void ShuffleNetV2::thread_tmp_394_cast_fu_12280_p1() {
    tmp_394_cast_fu_12280_p1 = esl_zext<11,4>(h_49_fu_12270_p2.read());
}

void ShuffleNetV2::thread_tmp_394_fu_6930_p3() {
    tmp_394_fu_6930_p3 = esl_concat<5,3>(co_reg_2329.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_395_fu_12473_p2() {
    tmp_395_fu_12473_p2 = (!tmp_393_reg_32574.read().is_01() || !ci33_cast_fu_12457_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_393_reg_32574.read()) + sc_biguint<7>(ci33_cast_fu_12457_p1.read()));
}

void ShuffleNetV2::thread_tmp_396_cast_fu_12478_p1() {
    tmp_396_cast_fu_12478_p1 = esl_sext<13,7>(tmp_395_fu_12473_p2.read());
}

void ShuffleNetV2::thread_tmp_396_fu_6942_p2() {
    tmp_396_fu_6942_p2 = (!p_shl279_cast_fu_6926_p1.read().is_01() || !p_shl280_cast_fu_6938_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl279_cast_fu_6926_p1.read()) - sc_biguint<11>(p_shl280_cast_fu_6938_p1.read()));
}

void ShuffleNetV2::thread_tmp_397_cast_fu_12482_p1() {
    tmp_397_cast_fu_12482_p1 = esl_zext<17,5>(ci33_reg_3407.read());
}

void ShuffleNetV2::thread_tmp_397_fu_6820_p2() {
    tmp_397_fu_6820_p2 = (!tmp_230_cast_fu_6816_p1.read().is_01() || !tmp_382_reg_30803.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_230_cast_fu_6816_p1.read()) + sc_biguint<8>(tmp_382_reg_30803.read()));
}

void ShuffleNetV2::thread_tmp_398_cast1_fu_12366_p1() {
    tmp_398_cast1_fu_12366_p1 = esl_zext<14,4>(w_49_fu_12360_p2.read());
}

void ShuffleNetV2::thread_tmp_398_cast_fu_12370_p1() {
    tmp_398_cast_fu_12370_p1 = esl_zext<15,4>(w_49_fu_12360_p2.read());
}

void ShuffleNetV2::thread_tmp_398_fu_6875_p2() {
    tmp_398_fu_6875_p2 = (!p_shl277_cast_fu_6857_p3.read().is_01() || !p_shl278_cast_fu_6871_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl277_cast_fu_6857_p3.read()) + sc_biguint<13>(p_shl278_cast_fu_6871_p1.read()));
}

void ShuffleNetV2::thread_tmp_399_fu_12733_p2() {
    tmp_399_fu_12733_p2 = (!p_shl34_cast_fu_12717_p1.read().is_01() || !p_shl35_cast_fu_12729_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl34_cast_fu_12717_p1.read()) - sc_biguint<7>(p_shl35_cast_fu_12729_p1.read()));
}

void ShuffleNetV2::thread_tmp_400_fu_12743_p2() {
    tmp_400_fu_12743_p2 = (!i45_cast1_reg_32632.read().is_01() || !tmp_399_fu_12733_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(i45_cast1_reg_32632.read()) + sc_biguint<7>(tmp_399_fu_12733_p2.read()));
}

void ShuffleNetV2::thread_tmp_401_fu_12780_p1() {
    tmp_401_fu_12780_p1 = esl_zext<64,32>(tmp_557_cast_fu_12777_p1.read());
}

void ShuffleNetV2::thread_tmp_402_fu_12754_p2() {
    tmp_402_fu_12754_p2 = (!tmp12_fu_12748_p2.read().is_01() || !i45_cast_reg_32627.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp12_fu_12748_p2.read()) + sc_biguint<10>(i45_cast_reg_32627.read()));
}

void ShuffleNetV2::thread_tmp_403_cast_fu_12759_p1() {
    tmp_403_cast_fu_12759_p1 = esl_zext<33,10>(tmp_402_reg_32658.read());
}

void ShuffleNetV2::thread_tmp_403_fu_6829_p2() {
    tmp_403_fu_6829_p2 = (!tmp_231_cast_fu_6825_p1.read().is_01() || !tmp_512_cast_reg_30798.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_231_cast_fu_6825_p1.read()) + sc_biguint<8>(tmp_512_cast_reg_30798.read()));
}

void ShuffleNetV2::thread_tmp_404_fu_12526_p2() {
    tmp_404_fu_12526_p2 = (!p_shl36_cast_fu_12510_p1.read().is_01() || !p_shl37_cast_fu_12522_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl36_cast_fu_12510_p1.read()) - sc_biguint<7>(p_shl37_cast_fu_12522_p1.read()));
}

void ShuffleNetV2::thread_tmp_405_fu_12532_p2() {
    tmp_405_fu_12532_p2 = (!tmp_404_fu_12526_p2.read().is_01() || !tmp_547_cast_reg_32579.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_404_fu_12526_p2.read()) + sc_biguint<7>(tmp_547_cast_reg_32579.read()));
}

void ShuffleNetV2::thread_tmp_406_fu_12592_p2() {
    tmp_406_fu_12592_p2 = (!p_shl38_cast_fu_12576_p1.read().is_01() || !p_shl39_cast_fu_12588_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl38_cast_fu_12576_p1.read()) - sc_biguint<8>(p_shl39_cast_fu_12588_p1.read()));
}

void ShuffleNetV2::thread_tmp_407_fu_12608_p2() {
    tmp_407_fu_12608_p2 = (!tmp11_fu_12602_p2.read().is_01() || !co66_cast_reg_32561.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp11_fu_12602_p2.read()) + sc_biguint<10>(co66_cast_reg_32561.read()));
}

void ShuffleNetV2::thread_tmp_408_cast1_fu_12817_p1() {
    tmp_408_cast1_fu_12817_p1 = esl_zext<13,2>(w49_reg_3462.read());
}

void ShuffleNetV2::thread_tmp_408_cast_fu_12821_p1() {
    tmp_408_cast_fu_12821_p1 = esl_zext<36,2>(w49_reg_3462.read());
}

void ShuffleNetV2::thread_tmp_408_fu_6842_p1() {
    tmp_408_fu_6842_p1 = esl_zext<64,13>(tmp_326_fu_6834_p3.read());
}

void ShuffleNetV2::thread_tmp_409_fu_13202_p2() {
    tmp_409_fu_13202_p2 = (!p_shl42_cast_fu_13186_p1.read().is_01() || !p_shl43_cast_fu_13198_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl42_cast_fu_13186_p1.read()) - sc_biguint<7>(p_shl43_cast_fu_13198_p1.read()));
}

void ShuffleNetV2::thread_tmp_410_fu_13106_p2() {
    tmp_410_fu_13106_p2 = (!p_shl40_cast_fu_13090_p1.read().is_01() || !p_shl41_cast_fu_13102_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl40_cast_fu_13090_p1.read()) - sc_biguint<7>(p_shl41_cast_fu_13102_p1.read()));
}

void ShuffleNetV2::thread_tmp_411_fu_13116_p2() {
    tmp_411_fu_13116_p2 = (!i49_cast1_reg_32775.read().is_01() || !tmp_410_fu_13106_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(i49_cast1_reg_32775.read()) + sc_biguint<7>(tmp_410_fu_13106_p2.read()));
}

void ShuffleNetV2::thread_tmp_412_fu_13153_p1() {
    tmp_412_fu_13153_p1 = esl_zext<64,32>(tmp_575_cast_fu_13150_p1.read());
}

void ShuffleNetV2::thread_tmp_413_fu_13127_p2() {
    tmp_413_fu_13127_p2 = (!tmp14_fu_13121_p2.read().is_01() || !i49_cast_reg_32770.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp14_fu_13121_p2.read()) + sc_biguint<10>(i49_cast_reg_32770.read()));
}

void ShuffleNetV2::thread_tmp_414_cast_fu_13132_p1() {
    tmp_414_cast_fu_13132_p1 = esl_zext<33,10>(tmp_413_reg_32801.read());
}

void ShuffleNetV2::thread_tmp_414_fu_7001_p2() {
    tmp_414_fu_7001_p2 = (!tmp_546_cast_reg_30876.read().is_01() || !tmp_235_cast_fu_6997_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(tmp_546_cast_reg_30876.read()) + sc_biguint<12>(tmp_235_cast_fu_6997_p1.read()));
}

void ShuffleNetV2::thread_tmp_415_cast_fu_12841_p1() {
    tmp_415_cast_fu_12841_p1 = esl_zext<10,2>(h50_reg_3473.read());
}

void ShuffleNetV2::thread_tmp_415_fu_12837_p1() {
    tmp_415_fu_12837_p1 = esl_zext<64,2>(h50_reg_3473.read());
}

void ShuffleNetV2::thread_tmp_416_fu_13238_p2() {
    tmp_416_fu_13238_p2 = (!tmp_409_reg_32825.read().is_01() || !ci35_cast_fu_13222_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_409_reg_32825.read()) + sc_biguint<7>(ci35_cast_fu_13222_p1.read()));
}

void ShuffleNetV2::thread_tmp_417_cast_fu_13243_p1() {
    tmp_417_cast_fu_13243_p1 = esl_sext<13,7>(tmp_416_fu_13238_p2.read());
}

void ShuffleNetV2::thread_tmp_417_fu_6897_p2() {
    tmp_417_fu_6897_p2 = (!tmp_398_reg_30828.read().is_01() || !tmp_236_cast_fu_6893_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_398_reg_30828.read()) + sc_biguint<13>(tmp_236_cast_fu_6893_p1.read()));
}

void ShuffleNetV2::thread_tmp_418_cast_fu_13247_p1() {
    tmp_418_cast_fu_13247_p1 = esl_zext<17,5>(ci35_reg_3528.read());
}

void ShuffleNetV2::thread_tmp_418_fu_7043_p3() {
    tmp_418_fu_7043_p3 = esl_concat<5,2>(co5_reg_2363.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_419_fu_12885_p2() {
    tmp_419_fu_12885_p2 = (!p_shl46_cast_fu_12869_p1.read().is_01() || !p_shl47_cast_fu_12881_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl46_cast_fu_12869_p1.read()) - sc_biguint<7>(p_shl47_cast_fu_12881_p1.read()));
}

void ShuffleNetV2::thread_tmp_420_fu_12891_p2() {
    tmp_420_fu_12891_p2 = (!tmp_419_fu_12885_p2.read().is_01() || !co69_cast1_reg_32674.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_419_fu_12885_p2.read()) + sc_biguint<7>(co69_cast1_reg_32674.read()));
}

void ShuffleNetV2::thread_tmp_421_cast_fu_12918_p1() {
    tmp_421_cast_fu_12918_p1 = esl_zext<35,32>(tmp_594_cast_fu_12915_p1.read());
}

void ShuffleNetV2::thread_tmp_421_fu_7055_p2() {
    tmp_421_fu_7055_p2 = (!p_shl281_cast_fu_7051_p1.read().is_01() || !tmp_238_cast_fu_7039_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl281_cast_fu_7051_p1.read()) - sc_biguint<8>(tmp_238_cast_fu_7039_p1.read()));
}

void ShuffleNetV2::thread_tmp_422_fu_12910_p2() {
    tmp_422_fu_12910_p2 = (!co69_cast_reg_32669.read().is_01() || !tmp13_cast_fu_12906_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(co69_cast_reg_32669.read()) + sc_biguint<9>(tmp13_cast_fu_12906_p1.read()));
}

void ShuffleNetV2::thread_tmp_423_cast_fu_12960_p1() {
    tmp_423_cast_fu_12960_p1 = esl_zext<12,9>(tmp_422_reg_32737.read());
}

void ShuffleNetV2::thread_tmp_423_fu_7096_p2() {
    tmp_423_fu_7096_p2 = (!tmp_643_cast_reg_30910.read().is_01() || !tmp_242_cast_fu_7092_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_643_cast_reg_30910.read()) + sc_biguint<9>(tmp_242_cast_fu_7092_p1.read()));
}

void ShuffleNetV2::thread_tmp_424_fu_13498_p2() {
    tmp_424_fu_13498_p2 = (!p_shl44_cast_fu_13482_p1.read().is_01() || !p_shl45_cast_fu_13494_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl44_cast_fu_13482_p1.read()) - sc_biguint<7>(p_shl45_cast_fu_13494_p1.read()));
}

void ShuffleNetV2::thread_tmp_425_fu_13508_p2() {
    tmp_425_fu_13508_p2 = (!i51_cast1_reg_32883.read().is_01() || !tmp_424_fu_13498_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(i51_cast1_reg_32883.read()) + sc_biguint<7>(tmp_424_fu_13498_p2.read()));
}

void ShuffleNetV2::thread_tmp_426_fu_13545_p1() {
    tmp_426_fu_13545_p1 = esl_zext<64,32>(tmp_585_cast_fu_13542_p1.read());
}

void ShuffleNetV2::thread_tmp_427_fu_13519_p2() {
    tmp_427_fu_13519_p2 = (!tmp16_fu_13513_p2.read().is_01() || !i51_cast_reg_32878.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp16_fu_13513_p2.read()) + sc_biguint<10>(i51_cast_reg_32878.read()));
}

void ShuffleNetV2::thread_tmp_428_cast_fu_13524_p1() {
    tmp_428_cast_fu_13524_p1 = esl_zext<33,10>(tmp_427_reg_32909.read());
}

void ShuffleNetV2::thread_tmp_428_fu_7117_p2() {
    tmp_428_fu_7117_p2 = (!p_shl193_fu_7113_p1.read().is_01() || !tmp_644_cast_fu_7101_p1.read().is_01())? sc_lv<64>(): (sc_bigint<64>(p_shl193_fu_7113_p1.read()) - sc_bigint<64>(tmp_644_cast_fu_7101_p1.read()));
}

void ShuffleNetV2::thread_tmp_429_fu_13291_p2() {
    tmp_429_fu_13291_p2 = (!p_shl48_cast_fu_13275_p1.read().is_01() || !p_shl49_cast_fu_13287_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl48_cast_fu_13275_p1.read()) - sc_biguint<7>(p_shl49_cast_fu_13287_p1.read()));
}

void ShuffleNetV2::thread_tmp_430_fu_13297_p2() {
    tmp_430_fu_13297_p2 = (!tmp_429_fu_13291_p2.read().is_01() || !tmp_582_cast_reg_32830.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_429_fu_13291_p2.read()) + sc_biguint<7>(tmp_582_cast_reg_32830.read()));
}

void ShuffleNetV2::thread_tmp_431_fu_13357_p2() {
    tmp_431_fu_13357_p2 = (!p_shl50_cast_fu_13341_p1.read().is_01() || !p_shl51_cast_fu_13353_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl50_cast_fu_13341_p1.read()) - sc_biguint<8>(p_shl51_cast_fu_13353_p1.read()));
}

void ShuffleNetV2::thread_tmp_432_fu_13373_p2() {
    tmp_432_fu_13373_p2 = (!tmp15_fu_13367_p2.read().is_01() || !co71_cast_reg_32812.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp15_fu_13367_p2.read()) + sc_biguint<10>(co71_cast_reg_32812.read()));
}

void ShuffleNetV2::thread_tmp_433_fu_13715_p2() {
    tmp_433_fu_13715_p2 = (!co74_cast_fu_13669_p1.read().is_01() || !ap_const_lv7_30.is_01())? sc_lv<7>(): (sc_biguint<7>(co74_cast_fu_13669_p1.read()) + sc_biguint<7>(ap_const_lv7_30));
}

void ShuffleNetV2::thread_tmp_434_cast_fu_13604_p1() {
    tmp_434_cast_fu_13604_p1 = esl_zext<10,4>(h_53_fu_13598_p2.read());
}

void ShuffleNetV2::thread_tmp_434_fu_7258_p3() {
    tmp_434_fu_7258_p3 = esl_concat<5,5>(co9_reg_2408.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_435_fu_13924_p2() {
    tmp_435_fu_13924_p2 = (!p_shl52_cast_fu_13908_p1.read().is_01() || !p_shl53_cast_fu_13920_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl52_cast_fu_13908_p1.read()) - sc_biguint<7>(p_shl53_cast_fu_13920_p1.read()));
}

void ShuffleNetV2::thread_tmp_436_cast1_fu_13763_p1() {
    tmp_436_cast1_fu_13763_p1 = esl_zext<10,4>(h_55_fu_13757_p2.read());
}

void ShuffleNetV2::thread_tmp_436_cast_fu_13767_p1() {
    tmp_436_cast_fu_13767_p1 = esl_zext<11,4>(h_55_fu_13757_p2.read());
}

void ShuffleNetV2::thread_tmp_436_fu_7270_p3() {
    tmp_436_fu_7270_p3 = esl_concat<5,3>(co9_reg_2408.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_437_cast_fu_13655_p1() {
    tmp_437_cast_fu_13655_p1 = esl_zext<15,4>(w_52_fu_13649_p2.read());
}

void ShuffleNetV2::thread_tmp_437_fu_7282_p2() {
    tmp_437_fu_7282_p2 = (!p_shl285_cast_fu_7266_p1.read().is_01() || !p_shl286_cast_fu_7278_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl285_cast_fu_7266_p1.read()) - sc_biguint<11>(p_shl286_cast_fu_7278_p1.read()));
}

void ShuffleNetV2::thread_tmp_438_fu_13960_p2() {
    tmp_438_fu_13960_p2 = (!tmp_435_reg_33031.read().is_01() || !ci37_cast_fu_13944_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_435_reg_33031.read()) + sc_biguint<7>(ci37_cast_fu_13944_p1.read()));
}

void ShuffleNetV2::thread_tmp_439_cast_fu_13965_p1() {
    tmp_439_cast_fu_13965_p1 = esl_sext<13,7>(tmp_438_fu_13960_p2.read());
}

void ShuffleNetV2::thread_tmp_439_fu_7194_p3() {
    tmp_439_fu_7194_p3 = esl_concat<6,5>(tmp_243_fu_7188_p2.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_440_cast_fu_13969_p1() {
    tmp_440_cast_fu_13969_p1 = esl_zext<17,5>(ci37_reg_3649.read());
}

void ShuffleNetV2::thread_tmp_440_fu_7206_p3() {
    tmp_440_fu_7206_p3 = esl_concat<6,3>(tmp_243_fu_7188_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_441_cast1_fu_13853_p1() {
    tmp_441_cast1_fu_13853_p1 = esl_zext<14,4>(w_54_fu_13847_p2.read());
}

void ShuffleNetV2::thread_tmp_441_cast_fu_13857_p1() {
    tmp_441_cast_fu_13857_p1 = esl_zext<15,4>(w_54_fu_13847_p2.read());
}

void ShuffleNetV2::thread_tmp_441_fu_7218_p2() {
    tmp_441_fu_7218_p2 = (!p_shl283_cast_fu_7202_p1.read().is_01() || !p_shl284_cast_fu_7214_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(p_shl283_cast_fu_7202_p1.read()) - sc_biguint<12>(p_shl284_cast_fu_7214_p1.read()));
}

void ShuffleNetV2::thread_tmp_442_fu_14220_p2() {
    tmp_442_fu_14220_p2 = (!p_shl54_cast_fu_14204_p1.read().is_01() || !p_shl55_cast_fu_14216_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl54_cast_fu_14204_p1.read()) - sc_biguint<7>(p_shl55_cast_fu_14216_p1.read()));
}

void ShuffleNetV2::thread_tmp_443_fu_14230_p2() {
    tmp_443_fu_14230_p2 = (!i57_cast1_reg_33089.read().is_01() || !tmp_442_fu_14220_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(i57_cast1_reg_33089.read()) + sc_biguint<7>(tmp_442_fu_14220_p2.read()));
}

void ShuffleNetV2::thread_tmp_444_fu_14267_p1() {
    tmp_444_fu_14267_p1 = esl_zext<64,32>(tmp_617_cast_fu_14264_p1.read());
}

void ShuffleNetV2::thread_tmp_445_fu_14241_p2() {
    tmp_445_fu_14241_p2 = (!tmp18_fu_14235_p2.read().is_01() || !i57_cast_reg_33084.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp18_fu_14235_p2.read()) + sc_biguint<10>(i57_cast_reg_33084.read()));
}

void ShuffleNetV2::thread_tmp_446_cast1_fu_14246_p1() {
    tmp_446_cast1_fu_14246_p1 = esl_zext<33,10>(tmp_445_reg_33115.read());
}

void ShuffleNetV2::thread_tmp_446_cast_fu_9815_p1() {
    tmp_446_cast_fu_9815_p1 = esl_sext<7,6>(tmp_316_fu_9807_p3.read());
}

void ShuffleNetV2::thread_tmp_446_fu_7150_p2() {
    tmp_446_fu_7150_p2 = (!tmp_244_fu_7146_p1.read().is_01() || !tmp_428_reg_30929.read().is_01())? sc_lv<64>(): (sc_biguint<64>(tmp_244_fu_7146_p1.read()) + sc_biguint<64>(tmp_428_reg_30929.read()));
}

void ShuffleNetV2::thread_tmp_447_fu_14013_p2() {
    tmp_447_fu_14013_p2 = (!p_shl56_cast_fu_13997_p1.read().is_01() || !p_shl57_cast_fu_14009_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl56_cast_fu_13997_p1.read()) - sc_biguint<7>(p_shl57_cast_fu_14009_p1.read()));
}

void ShuffleNetV2::thread_tmp_448_fu_14019_p2() {
    tmp_448_fu_14019_p2 = (!tmp_447_fu_14013_p2.read().is_01() || !tmp_613_cast_reg_33036.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_447_fu_14013_p2.read()) + sc_biguint<7>(tmp_613_cast_reg_33036.read()));
}

void ShuffleNetV2::thread_tmp_449_fu_14079_p2() {
    tmp_449_fu_14079_p2 = (!p_shl58_cast_fu_14063_p1.read().is_01() || !p_shl59_cast_fu_14075_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl58_cast_fu_14063_p1.read()) - sc_biguint<8>(p_shl59_cast_fu_14075_p1.read()));
}

void ShuffleNetV2::thread_tmp_450_fu_14095_p2() {
    tmp_450_fu_14095_p2 = (!tmp17_fu_14089_p2.read().is_01() || !co76_cast_reg_33018.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp17_fu_14089_p2.read()) + sc_biguint<10>(co76_cast_reg_33018.read()));
}

void ShuffleNetV2::thread_tmp_451_cast1_fu_14304_p1() {
    tmp_451_cast1_fu_14304_p1 = esl_zext<13,2>(w55_reg_3704.read());
}

void ShuffleNetV2::thread_tmp_451_cast_fu_14308_p1() {
    tmp_451_cast_fu_14308_p1 = esl_zext<36,2>(w55_reg_3704.read());
}

void ShuffleNetV2::thread_tmp_451_fu_7304_p2() {
    tmp_451_fu_7304_p2 = (!tmp_437_reg_30981.read().is_01() || !tmp_248_cast_fu_7300_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_437_reg_30981.read()) + sc_biguint<11>(tmp_248_cast_fu_7300_p1.read()));
}

void ShuffleNetV2::thread_tmp_452_fu_14689_p2() {
    tmp_452_fu_14689_p2 = (!p_shl62_cast_fu_14673_p1.read().is_01() || !p_shl63_cast_fu_14685_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl62_cast_fu_14673_p1.read()) - sc_biguint<7>(p_shl63_cast_fu_14685_p1.read()));
}

void ShuffleNetV2::thread_tmp_453_fu_14589_p2() {
    tmp_453_fu_14589_p2 = (!p_shl60_cast_fu_14573_p1.read().is_01() || !p_shl61_cast_fu_14585_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl60_cast_fu_14573_p1.read()) - sc_biguint<7>(p_shl61_cast_fu_14585_p1.read()));
}

void ShuffleNetV2::thread_tmp_454_fu_14599_p2() {
    tmp_454_fu_14599_p2 = (!i61_cast_reg_33232.read().is_01() || !tmp_453_fu_14589_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(i61_cast_reg_33232.read()) + sc_biguint<7>(tmp_453_fu_14589_p2.read()));
}

void ShuffleNetV2::thread_tmp_455_fu_14640_p1() {
    tmp_455_fu_14640_p1 = esl_zext<64,32>(tmp_635_cast_fu_14637_p1.read());
}

void ShuffleNetV2::thread_tmp_456_fu_14610_p2() {
    tmp_456_fu_14610_p2 = (!tmp20_fu_14604_p2.read().is_01() || !i61_cast508_cast_reg_33227.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp20_fu_14604_p2.read()) + sc_biguint<9>(i61_cast508_cast_reg_33227.read()));
}

void ShuffleNetV2::thread_tmp_457_cast_fu_14618_p1() {
    tmp_457_cast_fu_14618_p1 = esl_zext<33,10>(tmp_638_cast_fu_14615_p1.read());
}

void ShuffleNetV2::thread_tmp_457_fu_7350_p3() {
    tmp_457_fu_7350_p3 = esl_concat<5,2>(co12_reg_2443.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_458_cast_fu_14328_p1() {
    tmp_458_cast_fu_14328_p1 = esl_zext<10,2>(h56_reg_3715.read());
}

void ShuffleNetV2::thread_tmp_458_fu_14324_p1() {
    tmp_458_fu_14324_p1 = esl_zext<64,2>(h56_reg_3715.read());
}

void ShuffleNetV2::thread_tmp_459_fu_14725_p2() {
    tmp_459_fu_14725_p2 = (!tmp_452_reg_33282.read().is_01() || !ci39_cast_fu_14709_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_452_reg_33282.read()) + sc_biguint<7>(ci39_cast_fu_14709_p1.read()));
}

void ShuffleNetV2::thread_tmp_460_cast_fu_14730_p1() {
    tmp_460_cast_fu_14730_p1 = esl_sext<13,7>(tmp_459_fu_14725_p2.read());
}

void ShuffleNetV2::thread_tmp_460_fu_7362_p2() {
    tmp_460_fu_7362_p2 = (!p_shl288_cast_fu_7358_p1.read().is_01() || !tmp_249_cast_fu_7346_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl288_cast_fu_7358_p1.read()) - sc_biguint<8>(tmp_249_cast_fu_7346_p1.read()));
}

void ShuffleNetV2::thread_tmp_461_cast_fu_14734_p1() {
    tmp_461_cast_fu_14734_p1 = esl_zext<17,5>(ci39_reg_3770.read());
}

void ShuffleNetV2::thread_tmp_461_fu_7382_p3() {
    tmp_461_fu_7382_p3 = esl_concat<6,2>(tmp_250_fu_7372_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_462_fu_14372_p2() {
    tmp_462_fu_14372_p2 = (!p_shl66_cast_fu_14356_p1.read().is_01() || !p_shl67_cast_fu_14368_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl66_cast_fu_14356_p1.read()) - sc_biguint<7>(p_shl67_cast_fu_14368_p1.read()));
}

void ShuffleNetV2::thread_tmp_463_fu_14382_p2() {
    tmp_463_fu_14382_p2 = (!tmp_462_fu_14372_p2.read().is_01() || !co79_cast1_reg_33131.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_462_fu_14372_p2.read()) + sc_biguint<7>(co79_cast1_reg_33131.read()));
}

void ShuffleNetV2::thread_tmp_464_cast1_fu_14401_p1() {
    tmp_464_cast1_fu_14401_p1 = esl_zext<35,32>(tmp_654_cast_fu_14398_p1.read());
}

void ShuffleNetV2::thread_tmp_464_cast_fu_10320_p1() {
    tmp_464_cast_fu_10320_p1 = esl_zext<7,4>(p_lshr_f_cast_fu_10310_p4.read());
}

void ShuffleNetV2::thread_tmp_464_fu_7394_p2() {
    tmp_464_fu_7394_p2 = (!p_shl287_cast_fu_7390_p1.read().is_01() || !tmp_251_cast_fu_7378_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(p_shl287_cast_fu_7390_p1.read()) - sc_biguint<9>(tmp_251_cast_fu_7378_p1.read()));
}

void ShuffleNetV2::thread_tmp_465_fu_14393_p2() {
    tmp_465_fu_14393_p2 = (!co79_cast_reg_33126.read().is_01() || !tmp19_fu_14387_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(co79_cast_reg_33126.read()) + sc_biguint<9>(tmp19_fu_14387_p2.read()));
}

void ShuffleNetV2::thread_tmp_466_cast1_fu_14443_p1() {
    tmp_466_cast1_fu_14443_p1 = esl_zext<12,9>(tmp_465_reg_33194.read());
}

void ShuffleNetV2::thread_tmp_466_cast_fu_10606_p1() {
    tmp_466_cast_fu_10606_p1 = esl_sext<9,7>(tmp_333_fu_10600_p2.read());
}

void ShuffleNetV2::thread_tmp_466_fu_7516_p1() {
    tmp_466_fu_7516_p1 = esl_sext<7,6>(tmp_362_fu_7508_p3.read());
}

void ShuffleNetV2::thread_tmp_467_cast_fu_10644_p1() {
    tmp_467_cast_fu_10644_p1 = esl_sext<32,7>(tmp_334_reg_31989.read());
}

void ShuffleNetV2::thread_tmp_467_fu_14985_p2() {
    tmp_467_fu_14985_p2 = (!p_shl64_cast_fu_14969_p1.read().is_01() || !p_shl65_cast_fu_14981_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl64_cast_fu_14969_p1.read()) - sc_biguint<7>(p_shl65_cast_fu_14981_p1.read()));
}

void ShuffleNetV2::thread_tmp_468_fu_14995_p2() {
    tmp_468_fu_14995_p2 = (!i63_cast_reg_33340.read().is_01() || !tmp_467_fu_14985_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(i63_cast_reg_33340.read()) + sc_biguint<7>(tmp_467_fu_14985_p2.read()));
}

void ShuffleNetV2::thread_tmp_469_fu_15036_p1() {
    tmp_469_fu_15036_p1 = esl_zext<64,32>(tmp_645_cast_fu_15033_p1.read());
}

void ShuffleNetV2::thread_tmp_470_fu_15006_p2() {
    tmp_470_fu_15006_p2 = (!tmp22_fu_15000_p2.read().is_01() || !i63_cast495_cast_reg_33335.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp22_fu_15000_p2.read()) + sc_biguint<9>(i63_cast495_cast_reg_33335.read()));
}

void ShuffleNetV2::thread_tmp_471_cast_fu_15014_p1() {
    tmp_471_cast_fu_15014_p1 = esl_zext<33,10>(tmp_648_cast_fu_15011_p1.read());
}

void ShuffleNetV2::thread_tmp_471_fu_7520_p1() {
    tmp_471_fu_7520_p1 = esl_zext<33,7>(tmp_466_fu_7516_p1.read());
}

void ShuffleNetV2::thread_tmp_472_fu_14778_p2() {
    tmp_472_fu_14778_p2 = (!p_shl68_cast_fu_14762_p1.read().is_01() || !p_shl69_cast_fu_14774_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl68_cast_fu_14762_p1.read()) - sc_biguint<7>(p_shl69_cast_fu_14774_p1.read()));
}

void ShuffleNetV2::thread_tmp_473_fu_14784_p2() {
    tmp_473_fu_14784_p2 = (!tmp_472_fu_14778_p2.read().is_01() || !tmp_642_cast_reg_33287.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_472_fu_14778_p2.read()) + sc_biguint<7>(tmp_642_cast_reg_33287.read()));
}

void ShuffleNetV2::thread_tmp_474_fu_14844_p2() {
    tmp_474_fu_14844_p2 = (!p_shl70_cast_fu_14828_p1.read().is_01() || !p_shl71_cast_fu_14840_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl70_cast_fu_14828_p1.read()) - sc_biguint<8>(p_shl71_cast_fu_14840_p1.read()));
}

void ShuffleNetV2::thread_tmp_475_fu_14860_p2() {
    tmp_475_fu_14860_p2 = (!tmp21_fu_14854_p2.read().is_01() || !co81_cast_reg_33269.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp21_fu_14854_p2.read()) + sc_biguint<10>(co81_cast_reg_33269.read()));
}

void ShuffleNetV2::thread_tmp_476_fu_15206_p2() {
    tmp_476_fu_15206_p2 = (!co84_cast_fu_15160_p1.read().is_01() || !ap_const_lv7_30.is_01())? sc_lv<7>(): (sc_biguint<7>(co84_cast_fu_15160_p1.read()) + sc_biguint<7>(ap_const_lv7_30));
}

void ShuffleNetV2::thread_tmp_477_cast_fu_15095_p1() {
    tmp_477_cast_fu_15095_p1 = esl_zext<10,4>(h_59_fu_15089_p2.read());
}

void ShuffleNetV2::thread_tmp_477_fu_7524_p2() {
    tmp_477_fu_7524_p2 = (!tmp_471_fu_7520_p1.read().is_01() || !tmp_482_cast_reg_30621.read().is_01())? sc_lv<33>(): (sc_biguint<33>(tmp_471_fu_7520_p1.read()) + sc_bigint<33>(tmp_482_cast_reg_30621.read()));
}

void ShuffleNetV2::thread_tmp_478_fu_15415_p2() {
    tmp_478_fu_15415_p2 = (!p_shl72_cast_fu_15399_p1.read().is_01() || !p_shl73_cast_fu_15411_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl72_cast_fu_15399_p1.read()) - sc_biguint<7>(p_shl73_cast_fu_15411_p1.read()));
}

void ShuffleNetV2::thread_tmp_479_cast1_fu_15254_p1() {
    tmp_479_cast1_fu_15254_p1 = esl_zext<11,4>(h_61_fu_15248_p2.read());
}

void ShuffleNetV2::thread_tmp_479_cast_fu_15258_p1() {
    tmp_479_cast_fu_15258_p1 = esl_zext<10,4>(h_61_fu_15248_p2.read());
}

void ShuffleNetV2::thread_tmp_479_fu_7529_p1() {
    tmp_479_fu_7529_p1 = esl_sext<64,33>(tmp_477_fu_7524_p2.read());
}

void ShuffleNetV2::thread_tmp_480_cast1_fu_15146_p1() {
    tmp_480_cast1_fu_15146_p1 = esl_zext<15,4>(w_58_fu_15140_p2.read());
}

void ShuffleNetV2::thread_tmp_480_cast_fu_10465_p1() {
    tmp_480_cast_fu_10465_p1 = esl_sext<9,8>(tmp_340_fu_10459_p2.read());
}

void ShuffleNetV2::thread_tmp_480_fu_7416_p2() {
    tmp_480_fu_7416_p2 = (!tmp_255_cast_fu_7412_p1.read().is_01() || !tmp_464_reg_31020.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_255_cast_fu_7412_p1.read()) + sc_biguint<9>(tmp_464_reg_31020.read()));
}

void ShuffleNetV2::thread_tmp_481_fu_15451_p2() {
    tmp_481_fu_15451_p2 = (!tmp_478_reg_33488.read().is_01() || !ci41_cast_fu_15435_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_478_reg_33488.read()) + sc_biguint<7>(ci41_cast_fu_15435_p1.read()));
}

void ShuffleNetV2::thread_tmp_482_cast_fu_6669_p1() {
    tmp_482_cast_fu_6669_p1 = esl_sext<33,32>(bias_V_read_reg_30579.read());
}

void ShuffleNetV2::thread_tmp_482_fu_7425_p3() {
    tmp_482_fu_7425_p3 = esl_concat<9,2>(tmp_480_fu_7416_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_483_cast_fu_15456_p1() {
    tmp_483_cast_fu_15456_p1 = esl_sext<13,7>(tmp_481_fu_15451_p2.read());
}

void ShuffleNetV2::thread_tmp_483_fu_7437_p2() {
    tmp_483_fu_7437_p2 = (!p_shl197_fu_7433_p1.read().is_01() || !tmp_762_cast1_fu_7421_p1.read().is_01())? sc_lv<64>(): (sc_bigint<64>(p_shl197_fu_7433_p1.read()) - sc_bigint<64>(tmp_762_cast1_fu_7421_p1.read()));
}

void ShuffleNetV2::thread_tmp_484_cast_cast_fu_10975_p1() {
    tmp_484_cast_cast_fu_10975_p1 = esl_sext<8,7>(tmp_344_fu_10969_p2.read());
}

void ShuffleNetV2::thread_tmp_484_cast_fu_15460_p1() {
    tmp_484_cast_fu_15460_p1 = esl_zext<17,5>(ci41_reg_3891.read());
}

void ShuffleNetV2::thread_tmp_484_fu_7443_p2() {
    tmp_484_fu_7443_p2 = (!tmp_255_cast_fu_7412_p1.read().is_01() || !tmp_743_cast_reg_31015.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_255_cast_fu_7412_p1.read()) + sc_bigint<9>(tmp_743_cast_reg_31015.read()));
}

void ShuffleNetV2::thread_tmp_485_cast1_fu_15344_p1() {
    tmp_485_cast1_fu_15344_p1 = esl_zext<15,4>(w_60_fu_15338_p2.read());
}

void ShuffleNetV2::thread_tmp_485_cast2_fu_15348_p1() {
    tmp_485_cast2_fu_15348_p1 = esl_zext<14,4>(w_60_fu_15338_p2.read());
}

void ShuffleNetV2::thread_tmp_485_cast_fu_11017_p1() {
    tmp_485_cast_fu_11017_p1 = esl_sext<32,7>(tmp_345_reg_32132.read());
}

void ShuffleNetV2::thread_tmp_485_fu_7448_p2() {
    tmp_485_fu_7448_p2 = (!ap_const_lv9_2.is_01())? sc_lv<9>(): tmp_484_fu_7443_p2.read() << (unsigned short)ap_const_lv9_2.to_uint();
}

void ShuffleNetV2::thread_tmp_486_fu_15719_p2() {
    tmp_486_fu_15719_p2 = (!p_shl74_cast_fu_15703_p1.read().is_01() || !p_shl75_cast_fu_15715_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl74_cast_fu_15703_p1.read()) - sc_biguint<7>(p_shl75_cast_fu_15715_p1.read()));
}

void ShuffleNetV2::thread_tmp_487_fu_15729_p2() {
    tmp_487_fu_15729_p2 = (!i69_cast_reg_33546.read().is_01() || !tmp_486_fu_15719_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(i69_cast_reg_33546.read()) + sc_biguint<7>(tmp_486_fu_15719_p2.read()));
}

void ShuffleNetV2::thread_tmp_488_cast_fu_10995_p1() {
    tmp_488_cast_fu_10995_p1 = esl_sext<9,8>(tmp_347_reg_32137.read());
}

void ShuffleNetV2::thread_tmp_488_fu_15770_p1() {
    tmp_488_fu_15770_p1 = esl_zext<64,32>(tmp_677_cast_fu_15767_p1.read());
}

void ShuffleNetV2::thread_tmp_489_fu_15740_p2() {
    tmp_489_fu_15740_p2 = (!tmp24_fu_15734_p2.read().is_01() || !i69_cast480_cast_reg_33541.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp24_fu_15734_p2.read()) + sc_biguint<9>(i69_cast480_cast_reg_33541.read()));
}

void ShuffleNetV2::thread_tmp_490_cast_fu_6672_p1() {
    tmp_490_cast_fu_6672_p1 = esl_sext<33,32>(shuffle_conv_1x1_V_r_reg_30595.read());
}

void ShuffleNetV2::thread_tmp_490_fu_7454_p2() {
    tmp_490_fu_7454_p2 = (!tmp_485_fu_7448_p2.read().is_01() || !tmp_484_fu_7443_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_485_fu_7448_p2.read()) - sc_biguint<9>(tmp_484_fu_7443_p2.read()));
}

void ShuffleNetV2::thread_tmp_491_cast_fu_15748_p1() {
    tmp_491_cast_fu_15748_p1 = esl_zext<33,10>(tmp_680_cast_fu_15745_p1.read());
}

void ShuffleNetV2::thread_tmp_491_fu_7460_p2() {
    tmp_491_fu_7460_p2 = (!tmp_373_reg_30725.read().is_01() || !tmp_483_fu_7437_p2.read().is_01())? sc_lv<64>(): (sc_bigint<64>(tmp_373_reg_30725.read()) + sc_biguint<64>(tmp_483_fu_7437_p2.read()));
}

void ShuffleNetV2::thread_tmp_492_cast_fu_11085_p1() {
    tmp_492_cast_fu_11085_p1 = esl_zext<7,4>(p_lshr_f1_cast_fu_11075_p4.read());
}

void ShuffleNetV2::thread_tmp_492_fu_15504_p2() {
    tmp_492_fu_15504_p2 = (!p_shl76_cast_fu_15488_p1.read().is_01() || !p_shl77_cast_fu_15500_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl76_cast_fu_15488_p1.read()) - sc_biguint<7>(p_shl77_cast_fu_15500_p1.read()));
}

void ShuffleNetV2::thread_tmp_493_fu_7615_p2() {
    tmp_493_fu_7615_p2 = (!tmp_482_cast_reg_30621.read().is_01() || !ap_const_lv33_78.is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_482_cast_reg_30621.read()) + sc_biguint<33>(ap_const_lv33_78));
}

void ShuffleNetV2::thread_tmp_494_cast_cast_fu_11371_p1() {
    tmp_494_cast_cast_fu_11371_p1 = esl_sext<8,7>(tmp_358_fu_11365_p2.read());
}

void ShuffleNetV2::thread_tmp_494_fu_7620_p1() {
    tmp_494_fu_7620_p1 = esl_sext<64,33>(tmp_493_fu_7615_p2.read());
}

void ShuffleNetV2::thread_tmp_495_cast_fu_11413_p1() {
    tmp_495_cast_fu_11413_p1 = esl_sext<32,7>(tmp_359_reg_32240.read());
}

void ShuffleNetV2::thread_tmp_495_fu_15510_p2() {
    tmp_495_fu_15510_p2 = (!tmp_492_fu_15504_p2.read().is_01() || !tmp_673_cast_reg_33493.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_492_fu_15504_p2.read()) + sc_biguint<7>(tmp_673_cast_reg_33493.read()));
}

void ShuffleNetV2::thread_tmp_496_fu_7630_p3() {
    tmp_496_fu_7630_p3 = esl_concat<5,5>(co16_reg_2488.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_497_fu_15570_p2() {
    tmp_497_fu_15570_p2 = (!p_shl78_cast_fu_15554_p1.read().is_01() || !p_shl79_cast_fu_15566_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl78_cast_fu_15554_p1.read()) - sc_biguint<8>(p_shl79_cast_fu_15566_p1.read()));
}

void ShuffleNetV2::thread_tmp_498_cast_fu_11391_p1() {
    tmp_498_cast_fu_11391_p1 = esl_sext<9,8>(tmp_361_reg_32245.read());
}

void ShuffleNetV2::thread_tmp_498_fu_15586_p2() {
    tmp_498_fu_15586_p2 = (!tmp23_fu_15580_p2.read().is_01() || !co86_cast489_cast_reg_33475.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp23_fu_15580_p2.read()) + sc_biguint<9>(co86_cast489_cast_reg_33475.read()));
}

void ShuffleNetV2::thread_tmp_499_cast1_fu_15807_p1() {
    tmp_499_cast1_fu_15807_p1 = esl_zext<12,2>(w61_reg_3946.read());
}

void ShuffleNetV2::thread_tmp_499_cast_fu_15811_p1() {
    tmp_499_cast_fu_15811_p1 = esl_zext<36,2>(w61_reg_3946.read());
}

void ShuffleNetV2::thread_tmp_499_fu_7642_p3() {
    tmp_499_fu_7642_p3 = esl_concat<5,3>(co16_reg_2488.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_500_fu_16188_p2() {
    tmp_500_fu_16188_p2 = (!p_shl82_cast_fu_16172_p1.read().is_01() || !p_shl83_cast_fu_16184_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl82_cast_fu_16172_p1.read()) - sc_biguint<7>(p_shl83_cast_fu_16184_p1.read()));
}

void ShuffleNetV2::thread_tmp_501_fu_16088_p2() {
    tmp_501_fu_16088_p2 = (!p_shl80_cast_fu_16072_p1.read().is_01() || !p_shl81_cast_fu_16084_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl80_cast_fu_16072_p1.read()) - sc_biguint<7>(p_shl81_cast_fu_16084_p1.read()));
}

void ShuffleNetV2::thread_tmp_502_fu_16098_p2() {
    tmp_502_fu_16098_p2 = (!i73_cast_reg_33689.read().is_01() || !tmp_501_fu_16088_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(i73_cast_reg_33689.read()) + sc_biguint<7>(tmp_501_fu_16088_p2.read()));
}

void ShuffleNetV2::thread_tmp_503_cast_fu_10758_p1() {
    tmp_503_cast_fu_10758_p1 = esl_sext<8,7>(tmp_353_fu_10752_p2.read());
}

void ShuffleNetV2::thread_tmp_503_fu_16139_p1() {
    tmp_503_fu_16139_p1 = esl_zext<64,32>(tmp_695_cast_fu_16136_p1.read());
}

void ShuffleNetV2::thread_tmp_504_cast_fu_10778_p1() {
    tmp_504_cast_fu_10778_p1 = esl_sext<32,7>(tmp_354_reg_32067.read());
}

void ShuffleNetV2::thread_tmp_504_fu_16109_p2() {
    tmp_504_fu_16109_p2 = (!tmp26_fu_16103_p2.read().is_01() || !i73_cast470_cast_reg_33684.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp26_fu_16103_p2.read()) + sc_biguint<8>(i73_cast470_cast_reg_33684.read()));
}

void ShuffleNetV2::thread_tmp_505_cast_fu_16117_p1() {
    tmp_505_cast_fu_16117_p1 = esl_zext<33,10>(tmp_698_cast_fu_16114_p1.read());
}

void ShuffleNetV2::thread_tmp_505_fu_7654_p2() {
    tmp_505_fu_7654_p2 = (!p_shl293_cast_fu_7638_p1.read().is_01() || !p_shl294_cast_fu_7650_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl293_cast_fu_7638_p1.read()) - sc_biguint<11>(p_shl294_cast_fu_7650_p1.read()));
}

void ShuffleNetV2::thread_tmp_506_cast_fu_15831_p1() {
    tmp_506_cast_fu_15831_p1 = esl_zext<10,2>(h62_reg_3957.read());
}

void ShuffleNetV2::thread_tmp_506_fu_15827_p1() {
    tmp_506_fu_15827_p1 = esl_zext<64,2>(h62_reg_3957.read());
}

void ShuffleNetV2::thread_tmp_507_fu_16224_p2() {
    tmp_507_fu_16224_p2 = (!tmp_500_reg_33739.read().is_01() || !ci43_cast_fu_16208_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_500_reg_33739.read()) + sc_biguint<7>(ci43_cast_fu_16208_p1.read()));
}

void ShuffleNetV2::thread_tmp_508_cast_fu_16229_p1() {
    tmp_508_cast_fu_16229_p1 = esl_sext<13,7>(tmp_507_fu_16224_p2.read());
}

void ShuffleNetV2::thread_tmp_508_fu_7566_p3() {
    tmp_508_fu_7566_p3 = esl_concat<7,5>(tmp_256_fu_7560_p2.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_509_cast_fu_16233_p1() {
    tmp_509_cast_fu_16233_p1 = esl_zext<18,5>(ci43_reg_4012.read());
}

void ShuffleNetV2::thread_tmp_509_fu_7578_p3() {
    tmp_509_fu_7578_p3 = esl_concat<7,3>(tmp_256_fu_7560_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_510_fu_15875_p2() {
    tmp_510_fu_15875_p2 = (!p_shl86_cast_fu_15859_p1.read().is_01() || !p_shl87_cast_fu_15871_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl86_cast_fu_15859_p1.read()) - sc_biguint<7>(p_shl87_cast_fu_15871_p1.read()));
}

void ShuffleNetV2::thread_tmp_511_fu_15885_p2() {
    tmp_511_fu_15885_p2 = (!tmp_510_fu_15875_p2.read().is_01() || !co89_cast1_reg_33588.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_510_fu_15875_p2.read()) + sc_biguint<7>(co89_cast1_reg_33588.read()));
}

void ShuffleNetV2::thread_tmp_512_cast_fu_6782_p1() {
    tmp_512_cast_fu_6782_p1 = esl_zext<8,7>(tmp_377_fu_6774_p3.read());
}

void ShuffleNetV2::thread_tmp_512_fu_7590_p2() {
    tmp_512_fu_7590_p2 = (!p_shl291_cast_fu_7574_p1.read().is_01() || !p_shl292_cast_fu_7586_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl291_cast_fu_7574_p1.read()) - sc_biguint<13>(p_shl292_cast_fu_7586_p1.read()));
}

void ShuffleNetV2::thread_tmp_513_cast1_fu_15904_p1() {
    tmp_513_cast1_fu_15904_p1 = esl_zext<35,32>(tmp_714_cast_fu_15901_p1.read());
}

void ShuffleNetV2::thread_tmp_513_cast_fu_11230_p1() {
    tmp_513_cast_fu_11230_p1 = esl_sext<9,8>(tmp_365_fu_11224_p2.read());
}

void ShuffleNetV2::thread_tmp_513_fu_7596_p1() {
    tmp_513_fu_7596_p1 = esl_sext<33,13>(tmp_512_fu_7590_p2.read());
}

void ShuffleNetV2::thread_tmp_514_fu_15896_p2() {
    tmp_514_fu_15896_p2 = (!co89_cast_reg_33583.read().is_01() || !tmp25_fu_15890_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(co89_cast_reg_33583.read()) + sc_biguint<9>(tmp25_fu_15890_p2.read()));
}

void ShuffleNetV2::thread_tmp_515_fu_7600_p2() {
    tmp_515_fu_7600_p2 = (!tmp_513_fu_7596_p1.read().is_01() || !tmp_490_cast_reg_30684.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_513_fu_7596_p1.read()) + sc_bigint<33>(tmp_490_cast_reg_30684.read()));
}

void ShuffleNetV2::thread_tmp_516_cast_fu_15946_p1() {
    tmp_516_cast_fu_15946_p1 = esl_zext<12,9>(tmp_514_reg_33651.read());
}

void ShuffleNetV2::thread_tmp_516_fu_7605_p1() {
    tmp_516_fu_7605_p1 = esl_sext<64,33>(tmp_515_fu_7600_p2.read());
}

void ShuffleNetV2::thread_tmp_517_cast_fu_11740_p1() {
    tmp_517_cast_fu_11740_p1 = esl_sext<10,7>(tmp_369_fu_11734_p2.read());
}

void ShuffleNetV2::thread_tmp_517_fu_16484_p2() {
    tmp_517_fu_16484_p2 = (!p_shl84_cast_fu_16468_p1.read().is_01() || !p_shl85_cast_fu_16480_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl84_cast_fu_16468_p1.read()) - sc_biguint<7>(p_shl85_cast_fu_16480_p1.read()));
}

void ShuffleNetV2::thread_tmp_518_cast_fu_11778_p1() {
    tmp_518_cast_fu_11778_p1 = esl_sext<32,7>(tmp_370_reg_32383.read());
}

void ShuffleNetV2::thread_tmp_518_fu_16490_p2() {
    tmp_518_fu_16490_p2 = (!i75_cast1_reg_33797.read().is_01() || !tmp_517_fu_16484_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(i75_cast1_reg_33797.read()) + sc_biguint<7>(tmp_517_fu_16484_p2.read()));
}

void ShuffleNetV2::thread_tmp_519_fu_16535_p1() {
    tmp_519_fu_16535_p1 = esl_zext<64,32>(tmp_705_cast_fu_16532_p1.read());
}

void ShuffleNetV2::thread_tmp_520_fu_16509_p2() {
    tmp_520_fu_16509_p2 = (!tmp28_cast_fu_16505_p1.read().is_01() || !i75_cast_reg_33792.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp28_cast_fu_16505_p1.read()) + sc_biguint<11>(i75_cast_reg_33792.read()));
}

void ShuffleNetV2::thread_tmp_521_cast_fu_16514_p1() {
    tmp_521_cast_fu_16514_p1 = esl_zext<33,11>(tmp_520_reg_33823.read());
}

void ShuffleNetV2::thread_tmp_521_fu_7487_p2() {
    tmp_521_fu_7487_p2 = (!tmp_490_reg_31033.read().is_01() || !tmp_257_cast_fu_7483_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_490_reg_31033.read()) + sc_biguint<9>(tmp_257_cast_fu_7483_p1.read()));
}

void ShuffleNetV2::thread_tmp_522_fu_16277_p2() {
    tmp_522_fu_16277_p2 = (!p_shl88_cast_fu_16261_p1.read().is_01() || !p_shl89_cast_fu_16273_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl88_cast_fu_16261_p1.read()) - sc_biguint<7>(p_shl89_cast_fu_16273_p1.read()));
}

void ShuffleNetV2::thread_tmp_523_fu_16283_p2() {
    tmp_523_fu_16283_p2 = (!tmp_522_fu_16277_p2.read().is_01() || !tmp_702_cast_reg_33744.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_522_fu_16277_p2.read()) + sc_biguint<7>(tmp_702_cast_reg_33744.read()));
}

void ShuffleNetV2::thread_tmp_524_fu_16343_p2() {
    tmp_524_fu_16343_p2 = (!p_shl90_cast_fu_16327_p1.read().is_01() || !p_shl91_cast_fu_16339_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl90_cast_fu_16327_p1.read()) - sc_biguint<8>(p_shl91_cast_fu_16339_p1.read()));
}

void ShuffleNetV2::thread_tmp_525_cast_fu_11846_p1() {
    tmp_525_cast_fu_11846_p1 = esl_zext<7,4>(p_lshr_f2_cast_fu_11836_p4.read());
}

void ShuffleNetV2::thread_tmp_525_fu_16359_p2() {
    tmp_525_fu_16359_p2 = (!tmp27_fu_16353_p2.read().is_01() || !co91_cast_reg_33726.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp27_fu_16353_p2.read()) + sc_biguint<11>(co91_cast_reg_33726.read()));
}

void ShuffleNetV2::thread_tmp_526_fu_16705_p2() {
    tmp_526_fu_16705_p2 = (!co94_cast_fu_16659_p1.read().is_01() || !ap_const_lv7_30.is_01())? sc_lv<7>(): (sc_biguint<7>(co94_cast_fu_16659_p1.read()) + sc_biguint<7>(ap_const_lv7_30));
}

void ShuffleNetV2::thread_tmp_527_cast1_fu_16594_p1() {
    tmp_527_cast1_fu_16594_p1 = esl_zext<10,4>(h_65_fu_16588_p2.read());
}

void ShuffleNetV2::thread_tmp_527_cast_fu_12136_p1() {
    tmp_527_cast_fu_12136_p1 = esl_sext<10,7>(tmp_384_fu_12130_p2.read());
}

void ShuffleNetV2::thread_tmp_527_fu_7676_p2() {
    tmp_527_fu_7676_p2 = (!tmp_505_reg_31091.read().is_01() || !tmp_261_cast_fu_7672_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_505_reg_31091.read()) + sc_biguint<11>(tmp_261_cast_fu_7672_p1.read()));
}

void ShuffleNetV2::thread_tmp_528_cast_fu_12174_p1() {
    tmp_528_cast_fu_12174_p1 = esl_sext<32,7>(tmp_385_reg_32491.read());
}

void ShuffleNetV2::thread_tmp_528_fu_16914_p2() {
    tmp_528_fu_16914_p2 = (!p_shl92_cast_fu_16898_p1.read().is_01() || !p_shl93_cast_fu_16910_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl92_cast_fu_16898_p1.read()) - sc_biguint<7>(p_shl93_cast_fu_16910_p1.read()));
}

void ShuffleNetV2::thread_tmp_529_cast1_fu_16753_p1() {
    tmp_529_cast1_fu_16753_p1 = esl_zext<10,4>(h_67_fu_16747_p2.read());
}

void ShuffleNetV2::thread_tmp_529_cast_fu_16757_p1() {
    tmp_529_cast_fu_16757_p1 = esl_zext<11,4>(h_67_fu_16747_p2.read());
}

void ShuffleNetV2::thread_tmp_529_fu_7718_p3() {
    tmp_529_fu_7718_p3 = esl_concat<5,4>(co19_reg_2523.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_530_cast_fu_16645_p1() {
    tmp_530_cast_fu_16645_p1 = esl_zext<15,4>(w_64_fu_16639_p2.read());
}

void ShuffleNetV2::thread_tmp_530_fu_7730_p3() {
    tmp_530_fu_7730_p3 = esl_concat<5,1>(co19_reg_2523.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_531_fu_16950_p2() {
    tmp_531_fu_16950_p2 = (!tmp_528_reg_33945.read().is_01() || !ci45_cast_fu_16934_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_528_reg_33945.read()) + sc_biguint<7>(ci45_cast_fu_16934_p1.read()));
}

void ShuffleNetV2::thread_tmp_532_fu_7742_p2() {
    tmp_532_fu_7742_p2 = (!p_shl298_cast_fu_7738_p1.read().is_01() || !p_shl297_cast_fu_7726_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl298_cast_fu_7738_p1.read()) + sc_biguint<10>(p_shl297_cast_fu_7726_p1.read()));
}

void ShuffleNetV2::thread_tmp_533_cast_fu_16955_p1() {
    tmp_533_cast_fu_16955_p1 = esl_sext<13,7>(tmp_531_fu_16950_p2.read());
}

void ShuffleNetV2::thread_tmp_533_fu_7754_p3() {
    tmp_533_fu_7754_p3 = esl_concat<6,4>(tmp_262_fu_7748_p2.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_534_cast_fu_16959_p1() {
    tmp_534_cast_fu_16959_p1 = esl_zext<18,5>(ci45_reg_4133.read());
}

void ShuffleNetV2::thread_tmp_534_fu_7766_p3() {
    tmp_534_fu_7766_p3 = esl_concat<6,1>(tmp_262_fu_7748_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_535_cast1_fu_16843_p1() {
    tmp_535_cast1_fu_16843_p1 = esl_zext<14,4>(w_66_fu_16837_p2.read());
}

void ShuffleNetV2::thread_tmp_535_cast_fu_16847_p1() {
    tmp_535_cast_fu_16847_p1 = esl_zext<15,4>(w_66_fu_16837_p2.read());
}

void ShuffleNetV2::thread_tmp_535_fu_7778_p2() {
    tmp_535_fu_7778_p2 = (!p_shl296_cast_fu_7774_p1.read().is_01() || !p_shl295_cast_fu_7762_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl296_cast_fu_7774_p1.read()) + sc_biguint<11>(p_shl295_cast_fu_7762_p1.read()));
}

void ShuffleNetV2::thread_tmp_536_cast_fu_11527_p1() {
    tmp_536_cast_fu_11527_p1 = esl_sext<8,7>(tmp_378_fu_11521_p2.read());
}

void ShuffleNetV2::thread_tmp_536_fu_17210_p2() {
    tmp_536_fu_17210_p2 = (!p_shl94_cast_fu_17194_p1.read().is_01() || !p_shl95_cast_fu_17206_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl94_cast_fu_17194_p1.read()) - sc_biguint<7>(p_shl95_cast_fu_17206_p1.read()));
}

void ShuffleNetV2::thread_tmp_537_cast_fu_11547_p1() {
    tmp_537_cast_fu_11547_p1 = esl_sext<32,7>(tmp_379_reg_32318.read());
}

void ShuffleNetV2::thread_tmp_537_fu_17220_p2() {
    tmp_537_fu_17220_p2 = (!i81_cast1_reg_34003.read().is_01() || !tmp_536_fu_17210_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(i81_cast1_reg_34003.read()) + sc_biguint<7>(tmp_536_fu_17210_p2.read()));
}

void ShuffleNetV2::thread_tmp_538_fu_17257_p1() {
    tmp_538_fu_17257_p1 = esl_zext<64,32>(tmp_737_cast_fu_17254_p1.read());
}

void ShuffleNetV2::thread_tmp_539_fu_17231_p2() {
    tmp_539_fu_17231_p2 = (!tmp30_fu_17225_p2.read().is_01() || !i81_cast_reg_33998.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp30_fu_17225_p2.read()) + sc_biguint<11>(i81_cast_reg_33998.read()));
}

void ShuffleNetV2::thread_tmp_540_fu_7976_p2() {
    tmp_540_fu_7976_p2 = (!tmp_482_cast_reg_30621.read().is_01() || !ap_const_lv33_90.is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_482_cast_reg_30621.read()) + sc_biguint<33>(ap_const_lv33_90));
}

void ShuffleNetV2::thread_tmp_541_cast_fu_17236_p1() {
    tmp_541_cast_fu_17236_p1 = esl_zext<33,11>(tmp_539_reg_34029.read());
}

void ShuffleNetV2::thread_tmp_541_fu_7981_p1() {
    tmp_541_fu_7981_p1 = esl_sext<64,33>(tmp_540_fu_7976_p2.read());
}

void ShuffleNetV2::thread_tmp_542_fu_17003_p2() {
    tmp_542_fu_17003_p2 = (!p_shl96_cast_fu_16987_p1.read().is_01() || !p_shl97_cast_fu_16999_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl96_cast_fu_16987_p1.read()) - sc_biguint<7>(p_shl97_cast_fu_16999_p1.read()));
}

void ShuffleNetV2::thread_tmp_543_fu_7991_p3() {
    tmp_543_fu_7991_p3 = esl_concat<5,5>(co22_reg_2556.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_544_fu_8003_p3() {
    tmp_544_fu_8003_p3 = esl_concat<5,3>(co22_reg_2556.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_545_fu_17009_p2() {
    tmp_545_fu_17009_p2 = (!tmp_542_fu_17003_p2.read().is_01() || !tmp_733_cast_reg_33950.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_542_fu_17003_p2.read()) + sc_biguint<7>(tmp_733_cast_reg_33950.read()));
}

void ShuffleNetV2::thread_tmp_546_cast_fu_6982_p1() {
    tmp_546_cast_fu_6982_p1 = esl_sext<12,11>(tmp_396_reg_30859.read());
}

void ShuffleNetV2::thread_tmp_546_fu_8015_p2() {
    tmp_546_fu_8015_p2 = (!p_shl305_cast_fu_7999_p1.read().is_01() || !p_shl306_cast_fu_8011_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl305_cast_fu_7999_p1.read()) - sc_biguint<11>(p_shl306_cast_fu_8011_p1.read()));
}

void ShuffleNetV2::thread_tmp_547_cast_fu_12453_p1() {
    tmp_547_cast_fu_12453_p1 = esl_zext<7,4>(p_lshr_f3_cast_fu_12443_p4.read());
}

void ShuffleNetV2::thread_tmp_547_fu_17069_p2() {
    tmp_547_fu_17069_p2 = (!p_shl98_cast_fu_17053_p1.read().is_01() || !p_shl99_cast_fu_17065_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl98_cast_fu_17053_p1.read()) - sc_biguint<8>(p_shl99_cast_fu_17065_p1.read()));
}

void ShuffleNetV2::thread_tmp_548_fu_17085_p2() {
    tmp_548_fu_17085_p2 = (!tmp29_fu_17079_p2.read().is_01() || !co96_cast_reg_33932.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp29_fu_17079_p2.read()) + sc_biguint<11>(co96_cast_reg_33932.read()));
}

void ShuffleNetV2::thread_tmp_549_cast1_fu_17294_p1() {
    tmp_549_cast1_fu_17294_p1 = esl_zext<12,2>(w67_reg_4188.read());
}

void ShuffleNetV2::thread_tmp_549_cast_fu_17298_p1() {
    tmp_549_cast_fu_17298_p1 = esl_zext<36,2>(w67_reg_4188.read());
}

void ShuffleNetV2::thread_tmp_549_fu_7927_p3() {
    tmp_549_fu_7927_p3 = esl_concat<7,5>(tmp_263_fu_7921_p2.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_550_fu_17671_p2() {
    tmp_550_fu_17671_p2 = (!p_shl102_cast_fu_17655_p1.read().is_01() || !p_shl103_cast_fu_17667_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl102_cast_fu_17655_p1.read()) - sc_biguint<7>(p_shl103_cast_fu_17667_p1.read()));
}

void ShuffleNetV2::thread_tmp_551_cast_fu_11991_p1() {
    tmp_551_cast_fu_11991_p1 = esl_sext<9,8>(tmp_391_fu_11985_p2.read());
}

void ShuffleNetV2::thread_tmp_551_fu_17575_p2() {
    tmp_551_fu_17575_p2 = (!p_shl100_cast_fu_17559_p1.read().is_01() || !p_shl101_cast_fu_17571_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl100_cast_fu_17559_p1.read()) - sc_biguint<7>(p_shl101_cast_fu_17571_p1.read()));
}

void ShuffleNetV2::thread_tmp_552_fu_17585_p2() {
    tmp_552_fu_17585_p2 = (!i85_cast1_reg_34146.read().is_01() || !tmp_551_fu_17575_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(i85_cast1_reg_34146.read()) + sc_biguint<7>(tmp_551_fu_17575_p2.read()));
}

void ShuffleNetV2::thread_tmp_553_fu_17622_p1() {
    tmp_553_fu_17622_p1 = esl_zext<64,32>(tmp_755_cast_fu_17619_p1.read());
}

void ShuffleNetV2::thread_tmp_554_fu_17596_p2() {
    tmp_554_fu_17596_p2 = (!tmp32_fu_17590_p2.read().is_01() || !i85_cast_reg_34141.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp32_fu_17590_p2.read()) + sc_biguint<11>(i85_cast_reg_34141.read()));
}

void ShuffleNetV2::thread_tmp_555_cast_fu_17601_p1() {
    tmp_555_cast_fu_17601_p1 = esl_zext<33,11>(tmp_554_reg_34172.read());
}

void ShuffleNetV2::thread_tmp_555_fu_7939_p3() {
    tmp_555_fu_7939_p3 = esl_concat<7,3>(tmp_263_fu_7921_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_556_cast1_fu_17318_p1() {
    tmp_556_cast1_fu_17318_p1 = esl_zext<10,2>(h68_reg_4199.read());
}

void ShuffleNetV2::thread_tmp_556_cast_fu_12739_p1() {
    tmp_556_cast_fu_12739_p1 = esl_sext<10,7>(tmp_399_fu_12733_p2.read());
}

void ShuffleNetV2::thread_tmp_556_fu_17314_p1() {
    tmp_556_fu_17314_p1 = esl_zext<64,2>(h68_reg_4199.read());
}

void ShuffleNetV2::thread_tmp_557_cast_fu_12777_p1() {
    tmp_557_cast_fu_12777_p1 = esl_sext<32,7>(tmp_400_reg_32653.read());
}

void ShuffleNetV2::thread_tmp_557_fu_17707_p2() {
    tmp_557_fu_17707_p2 = (!tmp_550_reg_34196.read().is_01() || !ci47_cast_fu_17691_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_550_reg_34196.read()) + sc_biguint<7>(ci47_cast_fu_17691_p1.read()));
}

void ShuffleNetV2::thread_tmp_558_cast_fu_17712_p1() {
    tmp_558_cast_fu_17712_p1 = esl_sext<13,7>(tmp_557_fu_17707_p2.read());
}

void ShuffleNetV2::thread_tmp_558_fu_7951_p2() {
    tmp_558_fu_7951_p2 = (!p_shl303_cast_fu_7935_p1.read().is_01() || !p_shl304_cast_fu_7947_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl303_cast_fu_7935_p1.read()) - sc_biguint<13>(p_shl304_cast_fu_7947_p1.read()));
}

void ShuffleNetV2::thread_tmp_559_cast_fu_17716_p1() {
    tmp_559_cast_fu_17716_p1 = esl_zext<18,5>(ci47_reg_4254.read());
}

void ShuffleNetV2::thread_tmp_559_fu_7957_p1() {
    tmp_559_fu_7957_p1 = esl_sext<33,13>(tmp_558_fu_7951_p2.read());
}

void ShuffleNetV2::thread_tmp_560_fu_17362_p2() {
    tmp_560_fu_17362_p2 = (!p_shl106_cast_fu_17346_p1.read().is_01() || !p_shl107_cast_fu_17358_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl106_cast_fu_17346_p1.read()) - sc_biguint<7>(p_shl107_cast_fu_17358_p1.read()));
}

void ShuffleNetV2::thread_tmp_561_fu_17372_p2() {
    tmp_561_fu_17372_p2 = (!tmp_560_fu_17362_p2.read().is_01() || !co99_cast1_reg_34045.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_560_fu_17362_p2.read()) + sc_biguint<7>(co99_cast1_reg_34045.read()));
}

void ShuffleNetV2::thread_tmp_562_fu_7961_p2() {
    tmp_562_fu_7961_p2 = (!tmp_559_fu_7957_p1.read().is_01() || !tmp_490_cast_reg_30684.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_559_fu_7957_p1.read()) + sc_bigint<33>(tmp_490_cast_reg_30684.read()));
}

void ShuffleNetV2::thread_tmp_563_cast_fu_17391_p1() {
    tmp_563_cast_fu_17391_p1 = esl_zext<35,32>(tmp_774_cast_fu_17388_p1.read());
}

void ShuffleNetV2::thread_tmp_563_fu_7966_p1() {
    tmp_563_fu_7966_p1 = esl_sext<64,33>(tmp_562_fu_7961_p2.read());
}

void ShuffleNetV2::thread_tmp_564_fu_17383_p2() {
    tmp_564_fu_17383_p2 = (!co99_cast_reg_34040.read().is_01() || !tmp31_fu_17377_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(co99_cast_reg_34040.read()) + sc_biguint<9>(tmp31_fu_17377_p2.read()));
}

void ShuffleNetV2::thread_tmp_565_fu_7804_p2() {
    tmp_565_fu_7804_p2 = (!tmp_264_cast_fu_7800_p1.read().is_01() || !tmp_532_reg_31125.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_264_cast_fu_7800_p1.read()) + sc_biguint<10>(tmp_532_reg_31125.read()));
}

void ShuffleNetV2::thread_tmp_566_cast_fu_17433_p1() {
    tmp_566_cast_fu_17433_p1 = esl_zext<12,9>(tmp_564_reg_34108.read());
}

void ShuffleNetV2::thread_tmp_566_fu_7817_p3() {
    tmp_566_fu_7817_p3 = esl_concat<10,1>(tmp_565_fu_7804_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_567_fu_17967_p2() {
    tmp_567_fu_17967_p2 = (!p_shl104_cast_fu_17951_p1.read().is_01() || !p_shl105_cast_fu_17963_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl104_cast_fu_17951_p1.read()) - sc_biguint<7>(p_shl105_cast_fu_17963_p1.read()));
}

void ShuffleNetV2::thread_tmp_568_fu_17977_p2() {
    tmp_568_fu_17977_p2 = (!i87_cast1_reg_34254.read().is_01() || !tmp_567_fu_17967_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(i87_cast1_reg_34254.read()) + sc_biguint<7>(tmp_567_fu_17967_p2.read()));
}

void ShuffleNetV2::thread_tmp_569_fu_18014_p1() {
    tmp_569_fu_18014_p1 = esl_zext<64,32>(tmp_765_cast_fu_18011_p1.read());
}

void ShuffleNetV2::thread_tmp_570_cast_fu_12598_p1() {
    tmp_570_cast_fu_12598_p1 = esl_sext<10,8>(tmp_406_fu_12592_p2.read());
}

void ShuffleNetV2::thread_tmp_570_fu_17988_p2() {
    tmp_570_fu_17988_p2 = (!tmp34_fu_17982_p2.read().is_01() || !i87_cast_reg_34249.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp34_fu_17982_p2.read()) + sc_biguint<11>(i87_cast_reg_34249.read()));
}

void ShuffleNetV2::thread_tmp_571_cast_fu_17993_p1() {
    tmp_571_cast_fu_17993_p1 = esl_zext<33,11>(tmp_570_reg_34280.read());
}

void ShuffleNetV2::thread_tmp_571_fu_7829_p2() {
    tmp_571_fu_7829_p2 = (!p_shl301_cast_fu_7809_p3.read().is_01() || !p_shl302_cast_fu_7825_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl301_cast_fu_7809_p3.read()) + sc_biguint<14>(p_shl302_cast_fu_7825_p1.read()));
}

void ShuffleNetV2::thread_tmp_572_fu_17760_p2() {
    tmp_572_fu_17760_p2 = (!p_shl108_cast_fu_17744_p1.read().is_01() || !p_shl109_cast_fu_17756_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl108_cast_fu_17744_p1.read()) - sc_biguint<7>(p_shl109_cast_fu_17756_p1.read()));
}

void ShuffleNetV2::thread_tmp_573_fu_17766_p2() {
    tmp_573_fu_17766_p2 = (!tmp_572_fu_17760_p2.read().is_01() || !tmp_762_cast_reg_34201.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_572_fu_17760_p2.read()) + sc_biguint<7>(tmp_762_cast_reg_34201.read()));
}

void ShuffleNetV2::thread_tmp_574_cast_fu_13112_p1() {
    tmp_574_cast_fu_13112_p1 = esl_sext<10,7>(tmp_410_fu_13106_p2.read());
}

void ShuffleNetV2::thread_tmp_574_fu_17826_p2() {
    tmp_574_fu_17826_p2 = (!p_shl110_cast_fu_17810_p1.read().is_01() || !p_shl111_cast_fu_17822_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl110_cast_fu_17810_p1.read()) - sc_biguint<8>(p_shl111_cast_fu_17822_p1.read()));
}

void ShuffleNetV2::thread_tmp_575_cast_fu_13150_p1() {
    tmp_575_cast_fu_13150_p1 = esl_sext<32,7>(tmp_411_reg_32796.read());
}

void ShuffleNetV2::thread_tmp_575_fu_17842_p2() {
    tmp_575_fu_17842_p2 = (!tmp33_fu_17836_p2.read().is_01() || !co101_cast_reg_34183.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp33_fu_17836_p2.read()) + sc_biguint<11>(co101_cast_reg_34183.read()));
}

void ShuffleNetV2::thread_tmp_576_fu_18184_p2() {
    tmp_576_fu_18184_p2 = (!co104_cast_fu_18138_p1.read().is_01() || !ap_const_lv7_30.is_01())? sc_lv<7>(): (sc_biguint<7>(co104_cast_fu_18138_p1.read()) + sc_biguint<7>(ap_const_lv7_30));
}

void ShuffleNetV2::thread_tmp_577_cast_fu_18073_p1() {
    tmp_577_cast_fu_18073_p1 = esl_zext<10,4>(h_71_fu_18067_p2.read());
}

void ShuffleNetV2::thread_tmp_577_fu_7835_p2() {
    tmp_577_fu_7835_p2 = (!tmp_264_cast1_fu_7796_p1.read().is_01() || !tmp_535_reg_31130.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_264_cast1_fu_7796_p1.read()) + sc_biguint<11>(tmp_535_reg_31130.read()));
}

void ShuffleNetV2::thread_tmp_578_fu_18393_p2() {
    tmp_578_fu_18393_p2 = (!p_shl112_cast_fu_18377_p1.read().is_01() || !p_shl113_cast_fu_18389_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl112_cast_fu_18377_p1.read()) - sc_biguint<7>(p_shl113_cast_fu_18389_p1.read()));
}

void ShuffleNetV2::thread_tmp_579_cast1_fu_18232_p1() {
    tmp_579_cast1_fu_18232_p1 = esl_zext<11,4>(h_73_fu_18226_p2.read());
}

void ShuffleNetV2::thread_tmp_579_cast_fu_18236_p1() {
    tmp_579_cast_fu_18236_p1 = esl_zext<10,4>(h_73_fu_18226_p2.read());
}

void ShuffleNetV2::thread_tmp_579_fu_7848_p3() {
    tmp_579_fu_7848_p3 = esl_concat<11,1>(tmp_577_fu_7835_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_580_cast_fu_18124_p1() {
    tmp_580_cast_fu_18124_p1 = esl_zext<15,4>(w_70_fu_18118_p2.read());
}

void ShuffleNetV2::thread_tmp_580_fu_7860_p2() {
    tmp_580_fu_7860_p2 = (!p_shl299_cast_fu_7840_p3.read().is_01() || !p_shl300_cast_fu_7856_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl299_cast_fu_7840_p3.read()) + sc_biguint<15>(p_shl300_cast_fu_7856_p1.read()));
}

void ShuffleNetV2::thread_tmp_581_fu_18429_p2() {
    tmp_581_fu_18429_p2 = (!tmp_578_reg_34402.read().is_01() || !ci49_cast_fu_18413_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_578_reg_34402.read()) + sc_biguint<7>(ci49_cast_fu_18413_p1.read()));
}

void ShuffleNetV2::thread_tmp_582_cast_fu_13218_p1() {
    tmp_582_cast_fu_13218_p1 = esl_zext<7,4>(p_lshr_f4_cast_fu_13208_p4.read());
}

void ShuffleNetV2::thread_tmp_582_fu_8037_p2() {
    tmp_582_fu_8037_p2 = (!tmp_546_reg_31191.read().is_01() || !tmp_268_cast_fu_8033_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_546_reg_31191.read()) + sc_biguint<11>(tmp_268_cast_fu_8033_p1.read()));
}

void ShuffleNetV2::thread_tmp_583_cast_fu_18434_p1() {
    tmp_583_cast_fu_18434_p1 = esl_sext<13,7>(tmp_581_fu_18429_p2.read());
}

void ShuffleNetV2::thread_tmp_583_fu_7886_p2() {
    tmp_583_fu_7886_p2 = (!tmp_571_reg_31143.read().is_01() || !tmp_269_cast_fu_7882_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_571_reg_31143.read()) + sc_biguint<14>(tmp_269_cast_fu_7882_p1.read()));
}

void ShuffleNetV2::thread_tmp_584_cast1_fu_18438_p1() {
    tmp_584_cast1_fu_18438_p1 = esl_zext<18,5>(ci49_reg_4375.read());
}

void ShuffleNetV2::thread_tmp_584_cast_fu_13504_p1() {
    tmp_584_cast_fu_13504_p1 = esl_sext<10,7>(tmp_424_fu_13498_p2.read());
}

void ShuffleNetV2::thread_tmp_584_fu_7891_p2() {
    tmp_584_fu_7891_p2 = (!tmp_580_reg_31148.read().is_01() || !tmp_269_cast1_fu_7878_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_580_reg_31148.read()) + sc_biguint<15>(tmp_269_cast1_fu_7878_p1.read()));
}

void ShuffleNetV2::thread_tmp_585_cast1_fu_18322_p1() {
    tmp_585_cast1_fu_18322_p1 = esl_zext<15,4>(w_72_fu_18316_p2.read());
}

void ShuffleNetV2::thread_tmp_585_cast2_fu_18326_p1() {
    tmp_585_cast2_fu_18326_p1 = esl_zext<14,4>(w_72_fu_18316_p2.read());
}

void ShuffleNetV2::thread_tmp_585_cast_fu_13542_p1() {
    tmp_585_cast_fu_13542_p1 = esl_sext<32,7>(tmp_425_reg_32904.read());
}

void ShuffleNetV2::thread_tmp_585_fu_8133_p2() {
    tmp_585_fu_8133_p2 = (!tmp_482_cast_reg_30621.read().is_01() || !ap_const_lv33_A8.is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_482_cast_reg_30621.read()) + sc_biguint<33>(ap_const_lv33_A8));
}

void ShuffleNetV2::thread_tmp_586_fu_18689_p2() {
    tmp_586_fu_18689_p2 = (!p_shl114_cast_fu_18673_p1.read().is_01() || !p_shl115_cast_fu_18685_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl114_cast_fu_18673_p1.read()) - sc_biguint<7>(p_shl115_cast_fu_18685_p1.read()));
}

void ShuffleNetV2::thread_tmp_587_fu_18699_p2() {
    tmp_587_fu_18699_p2 = (!i93_cast1_reg_34460.read().is_01() || !tmp_586_fu_18689_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(i93_cast1_reg_34460.read()) + sc_biguint<7>(tmp_586_fu_18689_p2.read()));
}

void ShuffleNetV2::thread_tmp_588_fu_18736_p1() {
    tmp_588_fu_18736_p1 = esl_zext<64,32>(tmp_797_cast_fu_18733_p1.read());
}

void ShuffleNetV2::thread_tmp_589_fu_18710_p2() {
    tmp_589_fu_18710_p2 = (!tmp36_fu_18704_p2.read().is_01() || !i93_cast_reg_34455.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp36_fu_18704_p2.read()) + sc_biguint<11>(i93_cast_reg_34455.read()));
}

void ShuffleNetV2::thread_tmp_590_fu_8138_p1() {
    tmp_590_fu_8138_p1 = esl_sext<64,33>(tmp_585_fu_8133_p2.read());
}

void ShuffleNetV2::thread_tmp_591_cast_fu_18715_p1() {
    tmp_591_cast_fu_18715_p1 = esl_zext<33,11>(tmp_589_reg_34486.read());
}

void ShuffleNetV2::thread_tmp_591_fu_8083_p3() {
    tmp_591_fu_8083_p3 = esl_concat<5,2>(co25_reg_2591.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_592_fu_18482_p2() {
    tmp_592_fu_18482_p2 = (!p_shl116_cast_fu_18466_p1.read().is_01() || !p_shl117_cast_fu_18478_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl116_cast_fu_18466_p1.read()) - sc_biguint<7>(p_shl117_cast_fu_18478_p1.read()));
}

void ShuffleNetV2::thread_tmp_593_fu_8095_p2() {
    tmp_593_fu_8095_p2 = (!p_shl308_cast_fu_8091_p1.read().is_01() || !tmp_270_cast_fu_8079_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl308_cast_fu_8091_p1.read()) - sc_biguint<8>(tmp_270_cast_fu_8079_p1.read()));
}

void ShuffleNetV2::thread_tmp_594_cast_fu_12915_p1() {
    tmp_594_cast_fu_12915_p1 = esl_sext<32,7>(tmp_420_reg_32731.read());
}

void ShuffleNetV2::thread_tmp_594_fu_8115_p3() {
    tmp_594_fu_8115_p3 = esl_concat<7,2>(tmp_271_fu_8105_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_595_fu_18488_p2() {
    tmp_595_fu_18488_p2 = (!tmp_592_fu_18482_p2.read().is_01() || !tmp_793_cast_reg_34407.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_592_fu_18482_p2.read()) + sc_biguint<7>(tmp_793_cast_reg_34407.read()));
}

void ShuffleNetV2::thread_tmp_596_fu_8127_p2() {
    tmp_596_fu_8127_p2 = (!p_shl307_cast_fu_8123_p1.read().is_01() || !tmp_272_cast_fu_8111_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl307_cast_fu_8123_p1.read()) - sc_biguint<10>(tmp_272_cast_fu_8111_p1.read()));
}

void ShuffleNetV2::thread_tmp_597_fu_18548_p2() {
    tmp_597_fu_18548_p2 = (!p_shl118_cast_fu_18532_p1.read().is_01() || !p_shl119_cast_fu_18544_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl118_cast_fu_18532_p1.read()) - sc_biguint<8>(p_shl119_cast_fu_18544_p1.read()));
}

void ShuffleNetV2::thread_tmp_598_fu_18564_p2() {
    tmp_598_fu_18564_p2 = (!tmp35_fu_18558_p2.read().is_01() || !co106_cast_reg_34389.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp35_fu_18558_p2.read()) + sc_biguint<11>(co106_cast_reg_34389.read()));
}

void ShuffleNetV2::thread_tmp_599_cast1_fu_18773_p1() {
    tmp_599_cast1_fu_18773_p1 = esl_zext<12,2>(w73_reg_4430.read());
}

void ShuffleNetV2::thread_tmp_599_cast_fu_18777_p1() {
    tmp_599_cast_fu_18777_p1 = esl_zext<36,2>(w73_reg_4430.read());
}

void ShuffleNetV2::thread_tmp_599_fu_8168_p2() {
    tmp_599_fu_8168_p2 = (!tmp_276_cast_fu_8164_p1.read().is_01() || !tmp_596_reg_31230.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_276_cast_fu_8164_p1.read()) + sc_biguint<10>(tmp_596_reg_31230.read()));
}

void ShuffleNetV2::thread_tmp_600_fu_19158_p2() {
    tmp_600_fu_19158_p2 = (!p_shl122_cast_fu_19142_p1.read().is_01() || !p_shl123_cast_fu_19154_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl122_cast_fu_19142_p1.read()) - sc_biguint<7>(p_shl123_cast_fu_19154_p1.read()));
}

void ShuffleNetV2::thread_tmp_601_fu_19062_p2() {
    tmp_601_fu_19062_p2 = (!p_shl120_cast_fu_19046_p1.read().is_01() || !p_shl121_cast_fu_19058_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl120_cast_fu_19046_p1.read()) - sc_biguint<7>(p_shl121_cast_fu_19058_p1.read()));
}

void ShuffleNetV2::thread_tmp_602_fu_19072_p2() {
    tmp_602_fu_19072_p2 = (!i97_cast1_reg_34603.read().is_01() || !tmp_601_fu_19062_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(i97_cast1_reg_34603.read()) + sc_biguint<7>(tmp_601_fu_19062_p2.read()));
}

void ShuffleNetV2::thread_tmp_603_cast_fu_13363_p1() {
    tmp_603_cast_fu_13363_p1 = esl_sext<10,8>(tmp_431_fu_13357_p2.read());
}

void ShuffleNetV2::thread_tmp_603_fu_19109_p1() {
    tmp_603_fu_19109_p1 = esl_zext<64,32>(tmp_815_cast_fu_19106_p1.read());
}

void ShuffleNetV2::thread_tmp_604_fu_19083_p2() {
    tmp_604_fu_19083_p2 = (!tmp38_fu_19077_p2.read().is_01() || !i97_cast_reg_34598.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp38_fu_19077_p2.read()) + sc_biguint<11>(i97_cast_reg_34598.read()));
}

void ShuffleNetV2::thread_tmp_605_cast_fu_19088_p1() {
    tmp_605_cast_fu_19088_p1 = esl_zext<33,11>(tmp_604_reg_34629.read());
}

void ShuffleNetV2::thread_tmp_605_fu_8177_p3() {
    tmp_605_fu_8177_p3 = esl_concat<10,2>(tmp_599_fu_8168_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_606_cast_fu_18797_p1() {
    tmp_606_cast_fu_18797_p1 = esl_zext<10,2>(h74_reg_4441.read());
}

void ShuffleNetV2::thread_tmp_606_fu_18793_p1() {
    tmp_606_fu_18793_p1 = esl_zext<64,2>(h74_reg_4441.read());
}

void ShuffleNetV2::thread_tmp_607_fu_19194_p2() {
    tmp_607_fu_19194_p2 = (!tmp_600_reg_34653.read().is_01() || !ci51_cast_fu_19178_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_600_reg_34653.read()) + sc_biguint<7>(ci51_cast_fu_19178_p1.read()));
}

void ShuffleNetV2::thread_tmp_608_cast_fu_19199_p1() {
    tmp_608_cast_fu_19199_p1 = esl_sext<13,7>(tmp_607_fu_19194_p2.read());
}

void ShuffleNetV2::thread_tmp_608_fu_8189_p2() {
    tmp_608_fu_8189_p2 = (!p_shl202_fu_8185_p1.read().is_01() || !tmp_1074_cast_fu_8173_p1.read().is_01())? sc_lv<64>(): (sc_bigint<64>(p_shl202_fu_8185_p1.read()) - sc_bigint<64>(tmp_1074_cast_fu_8173_p1.read()));
}

void ShuffleNetV2::thread_tmp_609_cast_fu_19203_p1() {
    tmp_609_cast_fu_19203_p1 = esl_zext<18,5>(ci51_reg_4496.read());
}

void ShuffleNetV2::thread_tmp_609_fu_8195_p2() {
    tmp_609_fu_8195_p2 = (!tmp_276_cast1_fu_8160_p1.read().is_01() || !tmp_1071_cast_reg_31225.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_276_cast1_fu_8160_p1.read()) + sc_bigint<9>(tmp_1071_cast_reg_31225.read()));
}

void ShuffleNetV2::thread_tmp_610_fu_18841_p2() {
    tmp_610_fu_18841_p2 = (!p_shl126_cast_fu_18825_p1.read().is_01() || !p_shl127_cast_fu_18837_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl126_cast_fu_18825_p1.read()) - sc_biguint<7>(p_shl127_cast_fu_18837_p1.read()));
}

void ShuffleNetV2::thread_tmp_611_fu_18851_p2() {
    tmp_611_fu_18851_p2 = (!tmp_610_fu_18841_p2.read().is_01() || !co109_cast_reg_34502.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_610_fu_18841_p2.read()) + sc_biguint<7>(co109_cast_reg_34502.read()));
}

void ShuffleNetV2::thread_tmp_612_cast_fu_7006_p1() {
    tmp_612_cast_fu_7006_p1 = esl_sext<64,12>(tmp_414_reg_30889.read());
}

void ShuffleNetV2::thread_tmp_612_fu_8211_p2() {
    tmp_612_fu_8211_p2 = (!ap_const_lv9_2.is_01())? sc_lv<9>(): tmp_609_reg_31249.read() << (unsigned short)ap_const_lv9_2.to_uint();
}

void ShuffleNetV2::thread_tmp_613_cast1_fu_18870_p1() {
    tmp_613_cast1_fu_18870_p1 = esl_zext<35,32>(tmp_834_cast_fu_18867_p1.read());
}

void ShuffleNetV2::thread_tmp_613_cast_fu_13940_p1() {
    tmp_613_cast_fu_13940_p1 = esl_zext<7,4>(p_lshr_f5_cast_fu_13930_p4.read());
}

void ShuffleNetV2::thread_tmp_613_fu_8216_p2() {
    tmp_613_fu_8216_p2 = (!tmp_612_fu_8211_p2.read().is_01() || !tmp_609_reg_31249.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_612_fu_8211_p2.read()) - sc_biguint<9>(tmp_609_reg_31249.read()));
}

void ShuffleNetV2::thread_tmp_614_fu_18862_p2() {
    tmp_614_fu_18862_p2 = (!co109_cast400_cast_reg_34497.read().is_01() || !tmp37_fu_18856_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(co109_cast400_cast_reg_34497.read()) + sc_biguint<8>(tmp37_fu_18856_p2.read()));
}

void ShuffleNetV2::thread_tmp_615_cast_fu_6902_p1() {
    tmp_615_cast_fu_6902_p1 = esl_zext<64,13>(tmp_417_reg_30841.read());
}

void ShuffleNetV2::thread_tmp_615_fu_8200_p2() {
    tmp_615_fu_8200_p2 = (!tmp_373_reg_30725.read().is_01() || !tmp_608_fu_8189_p2.read().is_01())? sc_lv<64>(): (sc_bigint<64>(tmp_373_reg_30725.read()) + sc_biguint<64>(tmp_608_fu_8189_p2.read()));
}

void ShuffleNetV2::thread_tmp_616_cast1_fu_18915_p1() {
    tmp_616_cast1_fu_18915_p1 = esl_zext<12,9>(tmp_837_cast_fu_18912_p1.read());
}

void ShuffleNetV2::thread_tmp_616_cast_fu_14226_p1() {
    tmp_616_cast_fu_14226_p1 = esl_sext<10,7>(tmp_442_fu_14220_p2.read());
}

void ShuffleNetV2::thread_tmp_616_fu_8336_p3() {
    tmp_616_fu_8336_p3 = esl_concat<5,5>(co29_reg_2636.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_617_cast_fu_14264_p1() {
    tmp_617_cast_fu_14264_p1 = esl_sext<32,7>(tmp_443_reg_33110.read());
}

void ShuffleNetV2::thread_tmp_617_fu_19454_p2() {
    tmp_617_fu_19454_p2 = (!p_shl124_cast_fu_19438_p1.read().is_01() || !p_shl125_cast_fu_19450_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl124_cast_fu_19438_p1.read()) - sc_biguint<7>(p_shl125_cast_fu_19450_p1.read()));
}

void ShuffleNetV2::thread_tmp_618_fu_19464_p2() {
    tmp_618_fu_19464_p2 = (!i99_cast1_reg_34711.read().is_01() || !tmp_617_fu_19454_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(i99_cast1_reg_34711.read()) + sc_biguint<7>(tmp_617_fu_19454_p2.read()));
}

void ShuffleNetV2::thread_tmp_619_fu_19501_p1() {
    tmp_619_fu_19501_p1 = esl_zext<64,32>(tmp_825_cast_fu_19498_p1.read());
}

void ShuffleNetV2::thread_tmp_620_fu_19475_p2() {
    tmp_620_fu_19475_p2 = (!tmp40_fu_19469_p2.read().is_01() || !i99_cast_reg_34706.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp40_fu_19469_p2.read()) + sc_biguint<11>(i99_cast_reg_34706.read()));
}

void ShuffleNetV2::thread_tmp_621_cast_fu_19480_p1() {
    tmp_621_cast_fu_19480_p1 = esl_zext<33,11>(tmp_620_reg_34737.read());
}

void ShuffleNetV2::thread_tmp_621_fu_8348_p3() {
    tmp_621_fu_8348_p3 = esl_concat<5,3>(co29_reg_2636.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_622_fu_19247_p2() {
    tmp_622_fu_19247_p2 = (!p_shl128_cast_fu_19231_p1.read().is_01() || !p_shl129_cast_fu_19243_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl128_cast_fu_19231_p1.read()) - sc_biguint<7>(p_shl129_cast_fu_19243_p1.read()));
}

void ShuffleNetV2::thread_tmp_623_fu_19253_p2() {
    tmp_623_fu_19253_p2 = (!tmp_622_fu_19247_p2.read().is_01() || !tmp_822_cast_reg_34658.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_622_fu_19247_p2.read()) + sc_biguint<7>(tmp_822_cast_reg_34658.read()));
}

void ShuffleNetV2::thread_tmp_624_fu_19313_p2() {
    tmp_624_fu_19313_p2 = (!p_shl130_cast_fu_19297_p1.read().is_01() || !p_shl131_cast_fu_19309_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl130_cast_fu_19297_p1.read()) - sc_biguint<8>(p_shl131_cast_fu_19309_p1.read()));
}

void ShuffleNetV2::thread_tmp_625_fu_19329_p2() {
    tmp_625_fu_19329_p2 = (!tmp39_fu_19323_p2.read().is_01() || !co111_cast_reg_34640.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp39_fu_19323_p2.read()) + sc_biguint<11>(co111_cast_reg_34640.read()));
}

void ShuffleNetV2::thread_tmp_626_fu_19671_p2() {
    tmp_626_fu_19671_p2 = (!co114_cast_fu_19625_p1.read().is_01() || !ap_const_lv7_30.is_01())? sc_lv<7>(): (sc_biguint<7>(co114_cast_fu_19625_p1.read()) + sc_biguint<7>(ap_const_lv7_30));
}

void ShuffleNetV2::thread_tmp_627_cast_fu_19560_p1() {
    tmp_627_cast_fu_19560_p1 = esl_zext<10,4>(h_77_fu_19554_p2.read());
}

void ShuffleNetV2::thread_tmp_627_fu_8360_p2() {
    tmp_627_fu_8360_p2 = (!p_shl313_cast_fu_8344_p1.read().is_01() || !p_shl314_cast_fu_8356_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl313_cast_fu_8344_p1.read()) - sc_biguint<11>(p_shl314_cast_fu_8356_p1.read()));
}

void ShuffleNetV2::thread_tmp_628_fu_19880_p2() {
    tmp_628_fu_19880_p2 = (!p_shl132_cast_fu_19864_p1.read().is_01() || !p_shl133_cast_fu_19876_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl132_cast_fu_19864_p1.read()) - sc_biguint<7>(p_shl133_cast_fu_19876_p1.read()));
}

void ShuffleNetV2::thread_tmp_629_cast1_fu_19719_p1() {
    tmp_629_cast1_fu_19719_p1 = esl_zext<10,4>(h_79_fu_19713_p2.read());
}

void ShuffleNetV2::thread_tmp_629_cast_fu_19723_p1() {
    tmp_629_cast_fu_19723_p1 = esl_zext<11,4>(h_79_fu_19713_p2.read());
}

void ShuffleNetV2::thread_tmp_629_fu_8275_p4() {
    tmp_629_fu_8275_p4 = esl_concat<6,5>(esl_concat<1,5>(ap_const_lv1_1, co29_reg_2636.read()), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_630_cast1_fu_19611_p1() {
    tmp_630_cast1_fu_19611_p1 = esl_zext<15,4>(w_76_fu_19605_p2.read());
}

void ShuffleNetV2::thread_tmp_630_cast_fu_14085_p1() {
    tmp_630_cast_fu_14085_p1 = esl_sext<10,8>(tmp_449_fu_14079_p2.read());
}

void ShuffleNetV2::thread_tmp_630_fu_8285_p1() {
    tmp_630_fu_8285_p1 = esl_sext<12,11>(tmp_629_fu_8275_p4.read());
}

void ShuffleNetV2::thread_tmp_631_fu_19916_p2() {
    tmp_631_fu_19916_p2 = (!tmp_628_reg_34859.read().is_01() || !ci53_cast_fu_19900_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_628_reg_34859.read()) + sc_biguint<7>(ci53_cast_fu_19900_p1.read()));
}

void ShuffleNetV2::thread_tmp_632_fu_8293_p4() {
    tmp_632_fu_8293_p4 = esl_concat<6,3>(esl_concat<1,5>(ap_const_lv1_1, co29_reg_2636.read()), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_633_cast_fu_19921_p1() {
    tmp_633_cast_fu_19921_p1 = esl_sext<13,7>(tmp_631_fu_19916_p2.read());
}

void ShuffleNetV2::thread_tmp_633_fu_8303_p1() {
    tmp_633_fu_8303_p1 = esl_sext<10,9>(tmp_632_fu_8293_p4.read());
}

void ShuffleNetV2::thread_tmp_634_cast_cast_fu_14595_p1() {
    tmp_634_cast_cast_fu_14595_p1 = esl_sext<9,7>(tmp_453_fu_14589_p2.read());
}

void ShuffleNetV2::thread_tmp_634_cast_fu_19925_p1() {
    tmp_634_cast_fu_19925_p1 = esl_zext<18,5>(ci53_reg_4617.read());
}

void ShuffleNetV2::thread_tmp_634_fu_8311_p2() {
    tmp_634_fu_8311_p2 = (!p_shl311_cast_fu_8289_p1.read().is_01() || !p_shl312_cast_fu_8307_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl311_cast_fu_8289_p1.read()) - sc_biguint<13>(p_shl312_cast_fu_8307_p1.read()));
}

void ShuffleNetV2::thread_tmp_635_cast1_fu_19809_p1() {
    tmp_635_cast1_fu_19809_p1 = esl_zext<14,4>(w_78_fu_19803_p2.read());
}

void ShuffleNetV2::thread_tmp_635_cast2_fu_19813_p1() {
    tmp_635_cast2_fu_19813_p1 = esl_zext<15,4>(w_78_fu_19803_p2.read());
}

void ShuffleNetV2::thread_tmp_635_cast_fu_14637_p1() {
    tmp_635_cast_fu_14637_p1 = esl_sext<32,7>(tmp_454_reg_33253.read());
}

void ShuffleNetV2::thread_tmp_635_fu_8317_p1() {
    tmp_635_fu_8317_p1 = esl_sext<33,13>(tmp_634_fu_8311_p2.read());
}

void ShuffleNetV2::thread_tmp_636_fu_20176_p2() {
    tmp_636_fu_20176_p2 = (!p_shl134_cast_fu_20160_p1.read().is_01() || !p_shl135_cast_fu_20172_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl134_cast_fu_20160_p1.read()) - sc_biguint<7>(p_shl135_cast_fu_20172_p1.read()));
}

void ShuffleNetV2::thread_tmp_637_fu_20186_p2() {
    tmp_637_fu_20186_p2 = (!i105_cast1_reg_34917.read().is_01() || !tmp_636_fu_20176_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(i105_cast1_reg_34917.read()) + sc_biguint<7>(tmp_636_fu_20176_p2.read()));
}

void ShuffleNetV2::thread_tmp_638_cast_fu_14615_p1() {
    tmp_638_cast_fu_14615_p1 = esl_sext<10,9>(tmp_456_reg_33258.read());
}

void ShuffleNetV2::thread_tmp_638_fu_20223_p1() {
    tmp_638_fu_20223_p1 = esl_zext<64,32>(tmp_857_cast_fu_20220_p1.read());
}

void ShuffleNetV2::thread_tmp_639_fu_20197_p2() {
    tmp_639_fu_20197_p2 = (!tmp42_fu_20191_p2.read().is_01() || !i105_cast_reg_34912.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp42_fu_20191_p2.read()) + sc_biguint<11>(i105_cast_reg_34912.read()));
}

void ShuffleNetV2::thread_tmp_640_fu_8321_p2() {
    tmp_640_fu_8321_p2 = (!tmp_635_fu_8317_p1.read().is_01() || !tmp_490_cast_reg_30684.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_635_fu_8317_p1.read()) + sc_bigint<33>(tmp_490_cast_reg_30684.read()));
}

void ShuffleNetV2::thread_tmp_641_cast_fu_20202_p1() {
    tmp_641_cast_fu_20202_p1 = esl_zext<33,11>(tmp_639_reg_34943.read());
}

void ShuffleNetV2::thread_tmp_641_fu_8326_p1() {
    tmp_641_fu_8326_p1 = esl_sext<64,33>(tmp_640_fu_8321_p2.read());
}

void ShuffleNetV2::thread_tmp_642_cast_fu_14705_p1() {
    tmp_642_cast_fu_14705_p1 = esl_zext<7,4>(p_lshr_f6_cast_fu_14695_p4.read());
}

void ShuffleNetV2::thread_tmp_642_fu_19969_p2() {
    tmp_642_fu_19969_p2 = (!p_shl136_cast_fu_19953_p1.read().is_01() || !p_shl137_cast_fu_19965_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl136_cast_fu_19953_p1.read()) - sc_biguint<7>(p_shl137_cast_fu_19965_p1.read()));
}

void ShuffleNetV2::thread_tmp_643_cast_fu_7061_p1() {
    tmp_643_cast_fu_7061_p1 = esl_sext<9,8>(tmp_421_fu_7055_p2.read());
}

void ShuffleNetV2::thread_tmp_643_fu_8237_p2() {
    tmp_643_fu_8237_p2 = (!tmp_613_reg_31261.read().is_01() || !tmp_277_cast_fu_8233_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_613_reg_31261.read()) + sc_biguint<9>(tmp_277_cast_fu_8233_p1.read()));
}

void ShuffleNetV2::thread_tmp_644_cast_cast_fu_14991_p1() {
    tmp_644_cast_cast_fu_14991_p1 = esl_sext<9,7>(tmp_467_fu_14985_p2.read());
}

void ShuffleNetV2::thread_tmp_644_cast_fu_7101_p1() {
    tmp_644_cast_fu_7101_p1 = esl_sext<64,9>(tmp_423_fu_7096_p2.read());
}

void ShuffleNetV2::thread_tmp_645_cast_fu_15033_p1() {
    tmp_645_cast_fu_15033_p1 = esl_sext<32,7>(tmp_468_reg_33361.read());
}

void ShuffleNetV2::thread_tmp_645_fu_19975_p2() {
    tmp_645_fu_19975_p2 = (!tmp_642_fu_19969_p2.read().is_01() || !tmp_853_cast_reg_34864.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_642_fu_19969_p2.read()) + sc_biguint<7>(tmp_853_cast_reg_34864.read()));
}

void ShuffleNetV2::thread_tmp_646_fu_8403_p3() {
    tmp_646_fu_8403_p3 = esl_concat<2,5>(ap_const_lv2_2, tmp_644_reg_2659.read());
}

void ShuffleNetV2::thread_tmp_647_fu_20035_p2() {
    tmp_647_fu_20035_p2 = (!p_shl138_cast_fu_20019_p1.read().is_01() || !p_shl139_cast_fu_20031_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl138_cast_fu_20019_p1.read()) - sc_biguint<8>(p_shl139_cast_fu_20031_p1.read()));
}

void ShuffleNetV2::thread_tmp_648_cast_fu_15011_p1() {
    tmp_648_cast_fu_15011_p1 = esl_sext<10,9>(tmp_470_reg_33366.read());
}

void ShuffleNetV2::thread_tmp_648_fu_20051_p2() {
    tmp_648_fu_20051_p2 = (!tmp41_fu_20045_p2.read().is_01() || !co116_cast_reg_34846.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp41_fu_20045_p2.read()) + sc_biguint<11>(co116_cast_reg_34846.read()));
}

void ShuffleNetV2::thread_tmp_649_cast1_fu_20260_p1() {
    tmp_649_cast1_fu_20260_p1 = esl_zext<13,2>(w79_reg_4672.read());
}

void ShuffleNetV2::thread_tmp_649_cast_fu_20264_p1() {
    tmp_649_cast_fu_20264_p1 = esl_zext<36,2>(w79_reg_4672.read());
}

void ShuffleNetV2::thread_tmp_649_fu_8411_p1() {
    tmp_649_fu_8411_p1 = esl_sext<8,7>(tmp_646_fu_8403_p3.read());
}

void ShuffleNetV2::thread_tmp_650_fu_20649_p2() {
    tmp_650_fu_20649_p2 = (!p_shl142_cast_fu_20633_p1.read().is_01() || !p_shl143_cast_fu_20645_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl142_cast_fu_20633_p1.read()) - sc_biguint<7>(p_shl143_cast_fu_20645_p1.read()));
}

void ShuffleNetV2::thread_tmp_651_fu_20553_p2() {
    tmp_651_fu_20553_p2 = (!p_shl140_cast_fu_20537_p1.read().is_01() || !p_shl141_cast_fu_20549_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl140_cast_fu_20537_p1.read()) - sc_biguint<7>(p_shl141_cast_fu_20549_p1.read()));
}

void ShuffleNetV2::thread_tmp_652_fu_20563_p2() {
    tmp_652_fu_20563_p2 = (!i109_cast1_reg_35060.read().is_01() || !tmp_651_fu_20553_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(i109_cast1_reg_35060.read()) + sc_biguint<7>(tmp_651_fu_20553_p2.read()));
}

void ShuffleNetV2::thread_tmp_653_cast_fu_14378_p1() {
    tmp_653_cast_fu_14378_p1 = esl_sext<9,7>(tmp_462_fu_14372_p2.read());
}

void ShuffleNetV2::thread_tmp_653_fu_20600_p1() {
    tmp_653_fu_20600_p1 = esl_zext<64,32>(tmp_875_cast_fu_20597_p1.read());
}

void ShuffleNetV2::thread_tmp_654_cast_fu_14398_p1() {
    tmp_654_cast_fu_14398_p1 = esl_sext<32,7>(tmp_463_reg_33188.read());
}

void ShuffleNetV2::thread_tmp_654_fu_20574_p2() {
    tmp_654_fu_20574_p2 = (!tmp44_fu_20568_p2.read().is_01() || !i109_cast_reg_35055.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp44_fu_20568_p2.read()) + sc_biguint<11>(i109_cast_reg_35055.read()));
}

void ShuffleNetV2::thread_tmp_655_cast_fu_20579_p1() {
    tmp_655_cast_fu_20579_p1 = esl_zext<33,11>(tmp_654_reg_35086.read());
}

void ShuffleNetV2::thread_tmp_655_fu_8415_p1() {
    tmp_655_fu_8415_p1 = esl_zext<33,8>(tmp_649_fu_8411_p1.read());
}

void ShuffleNetV2::thread_tmp_656_cast_fu_20284_p1() {
    tmp_656_cast_fu_20284_p1 = esl_zext<10,2>(h80_reg_4683.read());
}

void ShuffleNetV2::thread_tmp_656_fu_20280_p1() {
    tmp_656_fu_20280_p1 = esl_zext<64,2>(h80_reg_4683.read());
}

void ShuffleNetV2::thread_tmp_657_fu_20685_p2() {
    tmp_657_fu_20685_p2 = (!tmp_650_reg_35110.read().is_01() || !ci55_cast_fu_20669_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_650_reg_35110.read()) + sc_biguint<7>(ci55_cast_fu_20669_p1.read()));
}

void ShuffleNetV2::thread_tmp_658_cast_fu_20690_p1() {
    tmp_658_cast_fu_20690_p1 = esl_sext<13,7>(tmp_657_fu_20685_p2.read());
}

void ShuffleNetV2::thread_tmp_658_fu_8419_p2() {
    tmp_658_fu_8419_p2 = (!tmp_655_fu_8415_p1.read().is_01() || !tmp_482_cast_reg_30621.read().is_01())? sc_lv<33>(): (sc_biguint<33>(tmp_655_fu_8415_p1.read()) + sc_bigint<33>(tmp_482_cast_reg_30621.read()));
}

void ShuffleNetV2::thread_tmp_659_cast_fu_20694_p1() {
    tmp_659_cast_fu_20694_p1 = esl_zext<18,5>(ci55_reg_4738.read());
}

void ShuffleNetV2::thread_tmp_659_fu_8424_p1() {
    tmp_659_fu_8424_p1 = esl_sext<64,33>(tmp_658_fu_8419_p2.read());
}

void ShuffleNetV2::thread_tmp_660_fu_20328_p2() {
    tmp_660_fu_20328_p2 = (!p_shl146_cast_fu_20312_p1.read().is_01() || !p_shl147_cast_fu_20324_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl146_cast_fu_20312_p1.read()) - sc_biguint<7>(p_shl147_cast_fu_20324_p1.read()));
}

void ShuffleNetV2::thread_tmp_661_fu_20338_p2() {
    tmp_661_fu_20338_p2 = (!tmp_660_fu_20328_p2.read().is_01() || !co119_cast_reg_34959.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_660_fu_20328_p2.read()) + sc_biguint<7>(co119_cast_reg_34959.read()));
}

void ShuffleNetV2::thread_tmp_662_fu_8382_p2() {
    tmp_662_fu_8382_p2 = (!tmp_627_reg_31301.read().is_01() || !tmp_281_cast_fu_8378_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_627_reg_31301.read()) + sc_biguint<11>(tmp_281_cast_fu_8378_p1.read()));
}

void ShuffleNetV2::thread_tmp_663_cast1_fu_20357_p1() {
    tmp_663_cast1_fu_20357_p1 = esl_zext<35,32>(tmp_894_cast_fu_20354_p1.read());
}

void ShuffleNetV2::thread_tmp_663_cast_fu_14850_p1() {
    tmp_663_cast_fu_14850_p1 = esl_sext<10,8>(tmp_474_fu_14844_p2.read());
}

void ShuffleNetV2::thread_tmp_663_fu_8451_p3() {
    tmp_663_fu_8451_p3 = esl_concat<5,4>(co32_reg_2671.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_664_fu_20349_p2() {
    tmp_664_fu_20349_p2 = (!co119_cast362_cast_reg_34954.read().is_01() || !tmp43_fu_20343_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(co119_cast362_cast_reg_34954.read()) + sc_biguint<8>(tmp43_fu_20343_p2.read()));
}

void ShuffleNetV2::thread_tmp_665_fu_8463_p3() {
    tmp_665_fu_8463_p3 = esl_concat<5,1>(co32_reg_2671.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_666_cast_fu_20402_p1() {
    tmp_666_cast_fu_20402_p1 = esl_zext<12,9>(tmp_897_cast_fu_20399_p1.read());
}

void ShuffleNetV2::thread_tmp_666_fu_8475_p2() {
    tmp_666_fu_8475_p2 = (!p_shl316_cast_fu_8471_p1.read().is_01() || !p_shl315_cast_fu_8459_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl316_cast_fu_8471_p1.read()) + sc_biguint<10>(p_shl315_cast_fu_8459_p1.read()));
}

void ShuffleNetV2::thread_tmp_667_fu_20945_p2() {
    tmp_667_fu_20945_p2 = (!p_shl144_cast_fu_20929_p1.read().is_01() || !p_shl145_cast_fu_20941_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl144_cast_fu_20929_p1.read()) - sc_biguint<7>(p_shl145_cast_fu_20941_p1.read()));
}

void ShuffleNetV2::thread_tmp_668_fu_20955_p2() {
    tmp_668_fu_20955_p2 = (!i111_cast1_reg_35168.read().is_01() || !tmp_667_fu_20945_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(i111_cast1_reg_35168.read()) + sc_biguint<7>(tmp_667_fu_20945_p2.read()));
}

void ShuffleNetV2::thread_tmp_669_fu_20992_p1() {
    tmp_669_fu_20992_p1 = esl_zext<64,32>(tmp_885_cast_fu_20989_p1.read());
}

void ShuffleNetV2::thread_tmp_670_fu_20966_p2() {
    tmp_670_fu_20966_p2 = (!tmp46_fu_20960_p2.read().is_01() || !i111_cast_reg_35163.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp46_fu_20960_p2.read()) + sc_biguint<11>(i111_cast_reg_35163.read()));
}

void ShuffleNetV2::thread_tmp_671_cast_fu_20971_p1() {
    tmp_671_cast_fu_20971_p1 = esl_zext<33,11>(tmp_670_reg_35194.read());
}

void ShuffleNetV2::thread_tmp_671_fu_8574_p3() {
    tmp_671_fu_8574_p3 = esl_concat<5,4>(co35_reg_2704.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_672_fu_20738_p2() {
    tmp_672_fu_20738_p2 = (!p_shl148_cast_fu_20722_p1.read().is_01() || !p_shl149_cast_fu_20734_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl148_cast_fu_20722_p1.read()) - sc_biguint<7>(p_shl149_cast_fu_20734_p1.read()));
}

void ShuffleNetV2::thread_tmp_673_cast_fu_15431_p1() {
    tmp_673_cast_fu_15431_p1 = esl_zext<7,4>(p_lshr_f7_cast_fu_15421_p4.read());
}

void ShuffleNetV2::thread_tmp_673_fu_20744_p2() {
    tmp_673_fu_20744_p2 = (!tmp_672_fu_20738_p2.read().is_01() || !tmp_882_cast_reg_35115.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_672_fu_20738_p2.read()) + sc_biguint<7>(tmp_882_cast_reg_35115.read()));
}

void ShuffleNetV2::thread_tmp_674_fu_20804_p2() {
    tmp_674_fu_20804_p2 = (!p_shl150_cast_fu_20788_p1.read().is_01() || !p_shl151_cast_fu_20800_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl150_cast_fu_20788_p1.read()) - sc_biguint<8>(p_shl151_cast_fu_20800_p1.read()));
}

void ShuffleNetV2::thread_tmp_675_fu_20820_p2() {
    tmp_675_fu_20820_p2 = (!tmp45_fu_20814_p2.read().is_01() || !co121_cast_reg_35097.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp45_fu_20814_p2.read()) + sc_biguint<11>(co121_cast_reg_35097.read()));
}

void ShuffleNetV2::thread_tmp_676_cast_cast_fu_15725_p1() {
    tmp_676_cast_cast_fu_15725_p1 = esl_sext<9,7>(tmp_486_fu_15719_p2.read());
}

void ShuffleNetV2::thread_tmp_676_fu_21162_p2() {
    tmp_676_fu_21162_p2 = (!co124_cast_fu_21116_p1.read().is_01() || !ap_const_lv7_30.is_01())? sc_lv<7>(): (sc_biguint<7>(co124_cast_fu_21116_p1.read()) + sc_biguint<7>(ap_const_lv7_30));
}

void ShuffleNetV2::thread_tmp_677_cast1_fu_21051_p1() {
    tmp_677_cast1_fu_21051_p1 = esl_zext<10,4>(h_83_fu_21045_p2.read());
}

void ShuffleNetV2::thread_tmp_677_cast_fu_15767_p1() {
    tmp_677_cast_fu_15767_p1 = esl_sext<32,7>(tmp_487_reg_33567.read());
}

void ShuffleNetV2::thread_tmp_677_fu_8586_p3() {
    tmp_677_fu_8586_p3 = esl_concat<5,1>(co35_reg_2704.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_678_fu_21371_p2() {
    tmp_678_fu_21371_p2 = (!p_shl152_cast_fu_21355_p1.read().is_01() || !p_shl153_cast_fu_21367_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl152_cast_fu_21355_p1.read()) - sc_biguint<7>(p_shl153_cast_fu_21367_p1.read()));
}

void ShuffleNetV2::thread_tmp_679_cast1_fu_21210_p1() {
    tmp_679_cast1_fu_21210_p1 = esl_zext<11,4>(h_85_fu_21204_p2.read());
}

void ShuffleNetV2::thread_tmp_679_cast_fu_21214_p1() {
    tmp_679_cast_fu_21214_p1 = esl_zext<10,4>(h_85_fu_21204_p2.read());
}

void ShuffleNetV2::thread_tmp_679_fu_8598_p2() {
    tmp_679_fu_8598_p2 = (!p_shl322_cast_fu_8594_p1.read().is_01() || !p_shl321_cast_fu_8582_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl322_cast_fu_8594_p1.read()) + sc_biguint<10>(p_shl321_cast_fu_8582_p1.read()));
}

void ShuffleNetV2::thread_tmp_680_cast1_fu_21102_p1() {
    tmp_680_cast1_fu_21102_p1 = esl_zext<15,4>(w_82_fu_21096_p2.read());
}

void ShuffleNetV2::thread_tmp_680_cast_fu_15745_p1() {
    tmp_680_cast_fu_15745_p1 = esl_sext<10,9>(tmp_489_reg_33572.read());
}

void ShuffleNetV2::thread_tmp_680_fu_8610_p3() {
    tmp_680_fu_8610_p3 = esl_concat<6,4>(tmp_282_fu_8604_p2.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_681_fu_21407_p2() {
    tmp_681_fu_21407_p2 = (!tmp_678_reg_35316.read().is_01() || !ci57_cast_fu_21391_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_678_reg_35316.read()) + sc_biguint<7>(ci57_cast_fu_21391_p1.read()));
}

void ShuffleNetV2::thread_tmp_682_fu_8622_p3() {
    tmp_682_fu_8622_p3 = esl_concat<6,1>(tmp_282_fu_8604_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_683_cast_fu_21412_p1() {
    tmp_683_cast_fu_21412_p1 = esl_sext<13,7>(tmp_681_fu_21407_p2.read());
}

void ShuffleNetV2::thread_tmp_683_fu_8634_p2() {
    tmp_683_fu_8634_p2 = (!p_shl320_cast_fu_8630_p1.read().is_01() || !p_shl319_cast_fu_8618_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl320_cast_fu_8630_p1.read()) + sc_biguint<11>(p_shl319_cast_fu_8618_p1.read()));
}

void ShuffleNetV2::thread_tmp_684_cast_fu_21416_p1() {
    tmp_684_cast_fu_21416_p1 = esl_zext<18,5>(ci57_reg_4859.read());
}

}

