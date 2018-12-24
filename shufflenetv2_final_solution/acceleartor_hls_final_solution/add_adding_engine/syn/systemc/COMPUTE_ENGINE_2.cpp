#include "COMPUTE_ENGINE.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void COMPUTE_ENGINE::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        brmerge40_demorgan_i_35_reg_8025 = brmerge40_demorgan_i_35_fu_1716_p2.read();
        brmerge40_demorgan_i_36_reg_8050 = brmerge40_demorgan_i_36_fu_1834_p2.read();
        brmerge40_demorgan_i_37_reg_8075 = brmerge40_demorgan_i_37_fu_1952_p2.read();
        brmerge40_demorgan_i_38_reg_8100 = brmerge40_demorgan_i_38_fu_2070_p2.read();
        brmerge40_demorgan_i_39_reg_8125 = brmerge40_demorgan_i_39_fu_2188_p2.read();
        brmerge40_demorgan_i_40_reg_8150 = brmerge40_demorgan_i_40_fu_2306_p2.read();
        brmerge40_demorgan_i_41_reg_8175 = brmerge40_demorgan_i_41_fu_2424_p2.read();
        brmerge40_demorgan_i_42_reg_8200 = brmerge40_demorgan_i_42_fu_2542_p2.read();
        brmerge40_demorgan_i_43_reg_8225 = brmerge40_demorgan_i_43_fu_2660_p2.read();
        brmerge40_demorgan_i_44_reg_8250 = brmerge40_demorgan_i_44_fu_2778_p2.read();
        brmerge40_demorgan_i_45_reg_8275 = brmerge40_demorgan_i_45_fu_2896_p2.read();
        brmerge40_demorgan_i_46_reg_8300 = brmerge40_demorgan_i_46_fu_3014_p2.read();
        brmerge40_demorgan_i_47_reg_8325 = brmerge40_demorgan_i_47_fu_3132_p2.read();
        brmerge40_demorgan_i_48_reg_8350 = brmerge40_demorgan_i_48_fu_3250_p2.read();
        brmerge40_demorgan_i_57_reg_8000 = brmerge40_demorgan_i_57_fu_1598_p2.read();
        brmerge40_demorgan_i_reg_8375 = brmerge40_demorgan_i_fu_3368_p2.read();
        brmerge_i_i10_reg_8235 = brmerge_i_i10_fu_2682_p2.read();
        brmerge_i_i11_reg_8260 = brmerge_i_i11_fu_2800_p2.read();
        brmerge_i_i12_reg_8285 = brmerge_i_i12_fu_2918_p2.read();
        brmerge_i_i13_reg_8310 = brmerge_i_i13_fu_3036_p2.read();
        brmerge_i_i14_reg_8335 = brmerge_i_i14_fu_3154_p2.read();
        brmerge_i_i15_reg_8360 = brmerge_i_i15_fu_3272_p2.read();
        brmerge_i_i16_reg_8385 = brmerge_i_i16_fu_3390_p2.read();
        brmerge_i_i1_reg_8210 = brmerge_i_i1_fu_2564_p2.read();
        brmerge_i_i2_reg_8010 = brmerge_i_i2_fu_1620_p2.read();
        brmerge_i_i3_reg_8035 = brmerge_i_i3_fu_1738_p2.read();
        brmerge_i_i4_reg_8060 = brmerge_i_i4_fu_1856_p2.read();
        brmerge_i_i5_reg_8085 = brmerge_i_i5_fu_1974_p2.read();
        brmerge_i_i6_reg_8110 = brmerge_i_i6_fu_2092_p2.read();
        brmerge_i_i7_reg_8135 = brmerge_i_i7_fu_2210_p2.read();
        brmerge_i_i8_reg_8160 = brmerge_i_i8_fu_2328_p2.read();
        brmerge_i_i9_reg_8185 = brmerge_i_i9_fu_2446_p2.read();
        newsignbit_26_reg_8409 = p_Val2_63_fu_3440_p2.read().range(7, 7);
        newsignbit_27_reg_8441 = p_Val2_67_fu_3508_p2.read().range(7, 7);
        newsignbit_28_reg_8473 = p_Val2_71_fu_3576_p2.read().range(7, 7);
        newsignbit_29_reg_8505 = p_Val2_75_fu_3644_p2.read().range(7, 7);
        newsignbit_30_reg_8537 = p_Val2_79_fu_3712_p2.read().range(7, 7);
        newsignbit_31_reg_8569 = p_Val2_83_fu_3780_p2.read().range(7, 7);
        newsignbit_32_reg_8601 = p_Val2_87_fu_3848_p2.read().range(7, 7);
        newsignbit_33_reg_8633 = p_Val2_91_fu_3916_p2.read().range(7, 7);
        p_38_i10_reg_8215 = p_38_i10_fu_2632_p2.read();
        p_38_i11_reg_8240 = p_38_i11_fu_2750_p2.read();
        p_38_i12_reg_8265 = p_38_i12_fu_2868_p2.read();
        p_38_i13_reg_8290 = p_38_i13_fu_2986_p2.read();
        p_38_i14_reg_8315 = p_38_i14_fu_3104_p2.read();
        p_38_i15_reg_8340 = p_38_i15_fu_3222_p2.read();
        p_38_i1_reg_7990 = p_38_i1_fu_1570_p2.read();
        p_38_i2_reg_8015 = p_38_i2_fu_1688_p2.read();
        p_38_i3_reg_8040 = p_38_i3_fu_1806_p2.read();
        p_38_i4_reg_8065 = p_38_i4_fu_1924_p2.read();
        p_38_i5_reg_8090 = p_38_i5_fu_2042_p2.read();
        p_38_i6_reg_8115 = p_38_i6_fu_2160_p2.read();
        p_38_i7_reg_8140 = p_38_i7_fu_2278_p2.read();
        p_38_i8_reg_8165 = p_38_i8_fu_2396_p2.read();
        p_38_i9_reg_8190 = p_38_i9_fu_2514_p2.read();
        p_38_i_reg_8365 = p_38_i_fu_3340_p2.read();
        p_Result_16_reg_8416 = p_Val2_61_fu_3404_p2.read().range(15, 14);
        p_Result_17_reg_8448 = p_Val2_65_fu_3472_p2.read().range(15, 14);
        p_Result_18_reg_8480 = p_Val2_69_fu_3540_p2.read().range(15, 14);
        p_Result_19_reg_8512 = p_Val2_73_fu_3608_p2.read().range(15, 14);
        p_Result_20_reg_8544 = p_Val2_77_fu_3676_p2.read().range(15, 14);
        p_Result_21_reg_8576 = p_Val2_81_fu_3744_p2.read().range(15, 14);
        p_Result_22_reg_8608 = p_Val2_85_fu_3812_p2.read().range(15, 14);
        p_Result_23_reg_8640 = p_Val2_89_fu_3880_p2.read().range(15, 14);
        p_Val2_61_reg_8390 = p_Val2_61_fu_3404_p2.read();
        p_Val2_63_reg_8403 = p_Val2_63_fu_3440_p2.read();
        p_Val2_65_reg_8422 = p_Val2_65_fu_3472_p2.read();
        p_Val2_67_reg_8435 = p_Val2_67_fu_3508_p2.read();
        p_Val2_69_reg_8454 = p_Val2_69_fu_3540_p2.read();
        p_Val2_71_reg_8467 = p_Val2_71_fu_3576_p2.read();
        p_Val2_73_reg_8486 = p_Val2_73_fu_3608_p2.read();
        p_Val2_75_reg_8499 = p_Val2_75_fu_3644_p2.read();
        p_Val2_77_reg_8518 = p_Val2_77_fu_3676_p2.read();
        p_Val2_79_reg_8531 = p_Val2_79_fu_3712_p2.read();
        p_Val2_81_reg_8550 = p_Val2_81_fu_3744_p2.read();
        p_Val2_83_reg_8563 = p_Val2_83_fu_3780_p2.read();
        p_Val2_85_reg_8582 = p_Val2_85_fu_3812_p2.read();
        p_Val2_87_reg_8595 = p_Val2_87_fu_3848_p2.read();
        p_Val2_89_reg_8614 = p_Val2_89_fu_3880_p2.read();
        p_Val2_91_reg_8627 = p_Val2_91_fu_3916_p2.read();
        signbit_16_reg_8396 = p_Val2_61_fu_3404_p2.read().range(15, 15);
        signbit_17_reg_8428 = p_Val2_65_fu_3472_p2.read().range(15, 15);
        signbit_18_reg_8460 = p_Val2_69_fu_3540_p2.read().range(15, 15);
        signbit_19_reg_8492 = p_Val2_73_fu_3608_p2.read().range(15, 15);
        signbit_20_reg_8524 = p_Val2_77_fu_3676_p2.read().range(15, 15);
        signbit_21_reg_8556 = p_Val2_81_fu_3744_p2.read().range(15, 15);
        signbit_22_reg_8588 = p_Val2_85_fu_3812_p2.read().range(15, 15);
        signbit_23_reg_8620 = p_Val2_89_fu_3880_p2.read().range(15, 15);
        tmp_1087_reg_7995 = tmp_1087_fu_1587_p2.read();
        tmp_1091_reg_8020 = tmp_1091_fu_1705_p2.read();
        tmp_1095_reg_8045 = tmp_1095_fu_1823_p2.read();
        tmp_1099_reg_8070 = tmp_1099_fu_1941_p2.read();
        tmp_1103_reg_8095 = tmp_1103_fu_2059_p2.read();
        tmp_1107_reg_8120 = tmp_1107_fu_2177_p2.read();
        tmp_1111_reg_8145 = tmp_1111_fu_2295_p2.read();
        tmp_1115_reg_8170 = tmp_1115_fu_2413_p2.read();
        tmp_1119_reg_8195 = tmp_1119_fu_2531_p2.read();
        tmp_1123_reg_8220 = tmp_1123_fu_2649_p2.read();
        tmp_1127_reg_8245 = tmp_1127_fu_2767_p2.read();
        tmp_1131_reg_8270 = tmp_1131_fu_2885_p2.read();
        tmp_1135_reg_8295 = tmp_1135_fu_3003_p2.read();
        tmp_1139_reg_8320 = tmp_1139_fu_3121_p2.read();
        tmp_1143_reg_8345 = tmp_1143_fu_3239_p2.read();
        tmp_1147_reg_8370 = tmp_1147_fu_3357_p2.read();
        underflow_13_reg_8030 = underflow_13_fu_1733_p2.read();
        underflow_14_reg_8055 = underflow_14_fu_1851_p2.read();
        underflow_15_reg_8080 = underflow_15_fu_1969_p2.read();
        underflow_16_reg_8105 = underflow_16_fu_2087_p2.read();
        underflow_17_reg_8130 = underflow_17_fu_2205_p2.read();
        underflow_18_reg_8155 = underflow_18_fu_2323_p2.read();
        underflow_19_reg_8180 = underflow_19_fu_2441_p2.read();
        underflow_20_reg_8205 = underflow_20_fu_2559_p2.read();
        underflow_21_reg_8230 = underflow_21_fu_2677_p2.read();
        underflow_22_reg_8255 = underflow_22_fu_2795_p2.read();
        underflow_23_reg_8280 = underflow_23_fu_2913_p2.read();
        underflow_24_reg_8305 = underflow_24_fu_3031_p2.read();
        underflow_25_reg_8330 = underflow_25_fu_3149_p2.read();
        underflow_26_reg_8355 = underflow_26_fu_3267_p2.read();
        underflow_27_reg_8380 = underflow_27_fu_3385_p2.read();
        underflow_reg_8005 = underflow_fu_1615_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        brmerge40_demorgan_i_49_reg_8656 = brmerge40_demorgan_i_49_fu_4494_p2.read();
        brmerge40_demorgan_i_50_reg_8681 = brmerge40_demorgan_i_50_fu_4612_p2.read();
        brmerge40_demorgan_i_51_reg_8706 = brmerge40_demorgan_i_51_fu_4730_p2.read();
        brmerge40_demorgan_i_52_reg_8731 = brmerge40_demorgan_i_52_fu_4848_p2.read();
        brmerge40_demorgan_i_53_reg_8756 = brmerge40_demorgan_i_53_fu_4966_p2.read();
        brmerge40_demorgan_i_54_reg_8781 = brmerge40_demorgan_i_54_fu_5084_p2.read();
        brmerge40_demorgan_i_55_reg_8806 = brmerge40_demorgan_i_55_fu_5202_p2.read();
        brmerge40_demorgan_i_56_reg_8831 = brmerge40_demorgan_i_56_fu_5320_p2.read();
        brmerge_i_i17_reg_8666 = brmerge_i_i17_fu_4516_p2.read();
        brmerge_i_i18_reg_8691 = brmerge_i_i18_fu_4634_p2.read();
        brmerge_i_i19_reg_8716 = brmerge_i_i19_fu_4752_p2.read();
        brmerge_i_i20_reg_8741 = brmerge_i_i20_fu_4870_p2.read();
        brmerge_i_i21_reg_8766 = brmerge_i_i21_fu_4988_p2.read();
        brmerge_i_i22_reg_8791 = brmerge_i_i22_fu_5106_p2.read();
        brmerge_i_i23_reg_8816 = brmerge_i_i23_fu_5224_p2.read();
        brmerge_i_i24_reg_8841 = brmerge_i_i24_fu_5342_p2.read();
        isneg_1_reg_8866 = p_Val2_93_fu_5392_p2.read().range(8, 8);
        isneg_2_reg_8886 = p_Val2_96_fu_5428_p2.read().range(8, 8);
        isneg_3_reg_8906 = p_Val2_99_fu_5464_p2.read().range(8, 8);
        isneg_4_reg_8926 = p_Val2_107_fu_5500_p2.read().range(8, 8);
        isneg_5_reg_8946 = p_Val2_110_fu_5536_p2.read().range(8, 8);
        isneg_6_reg_8966 = p_Val2_113_fu_5572_p2.read().range(8, 8);
        isneg_7_reg_8986 = p_Val2_116_fu_5608_p2.read().range(8, 8);
        isneg_reg_8846 = p_Val2_104_fu_5356_p2.read().range(8, 8);
        newsignbit_34_reg_8859 = p_Val2_105_fu_5370_p2.read().range(7, 7);
        newsignbit_35_reg_8879 = p_Val2_94_fu_5406_p2.read().range(7, 7);
        newsignbit_36_reg_8899 = p_Val2_97_fu_5442_p2.read().range(7, 7);
        newsignbit_37_reg_8919 = p_Val2_100_fu_5478_p2.read().range(7, 7);
        newsignbit_38_reg_8939 = p_Val2_108_fu_5514_p2.read().range(7, 7);
        newsignbit_39_reg_8959 = p_Val2_111_fu_5550_p2.read().range(7, 7);
        newsignbit_40_reg_8979 = p_Val2_114_fu_5586_p2.read().range(7, 7);
        newsignbit_41_reg_8999 = p_Val2_117_fu_5622_p2.read().range(7, 7);
        p_38_i16_reg_8646 = p_38_i16_fu_4466_p2.read();
        p_38_i17_reg_8671 = p_38_i17_fu_4584_p2.read();
        p_38_i18_reg_8696 = p_38_i18_fu_4702_p2.read();
        p_38_i19_reg_8721 = p_38_i19_fu_4820_p2.read();
        p_38_i20_reg_8746 = p_38_i20_fu_4938_p2.read();
        p_38_i21_reg_8771 = p_38_i21_fu_5056_p2.read();
        p_38_i22_reg_8796 = p_38_i22_fu_5174_p2.read();
        p_38_i23_reg_8821 = p_38_i23_fu_5292_p2.read();
        p_Val2_100_reg_8913 = p_Val2_100_fu_5478_p2.read();
        p_Val2_105_reg_8853 = p_Val2_105_fu_5370_p2.read();
        p_Val2_108_reg_8933 = p_Val2_108_fu_5514_p2.read();
        p_Val2_111_reg_8953 = p_Val2_111_fu_5550_p2.read();
        p_Val2_114_reg_8973 = p_Val2_114_fu_5586_p2.read();
        p_Val2_117_reg_8993 = p_Val2_117_fu_5622_p2.read();
        p_Val2_94_reg_8873 = p_Val2_94_fu_5406_p2.read();
        p_Val2_97_reg_8893 = p_Val2_97_fu_5442_p2.read();
        tmp_1151_reg_8651 = tmp_1151_fu_4483_p2.read();
        tmp_1155_reg_8676 = tmp_1155_fu_4601_p2.read();
        tmp_1159_reg_8701 = tmp_1159_fu_4719_p2.read();
        tmp_1163_reg_8726 = tmp_1163_fu_4837_p2.read();
        tmp_1167_reg_8751 = tmp_1167_fu_4955_p2.read();
        tmp_1171_reg_8776 = tmp_1171_fu_5073_p2.read();
        tmp_1175_reg_8801 = tmp_1175_fu_5191_p2.read();
        tmp_1179_reg_8826 = tmp_1179_fu_5309_p2.read();
        underflow_28_reg_8661 = underflow_28_fu_4511_p2.read();
        underflow_29_reg_8686 = underflow_29_fu_4629_p2.read();
        underflow_30_reg_8711 = underflow_30_fu_4747_p2.read();
        underflow_31_reg_8736 = underflow_31_fu_4865_p2.read();
        underflow_32_reg_8761 = underflow_32_fu_4983_p2.read();
        underflow_33_reg_8786 = underflow_33_fu_5101_p2.read();
        underflow_34_reg_8811 = underflow_34_fu_5219_p2.read();
        underflow_35_reg_8836 = underflow_35_fu_5337_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        isneg_10_reg_9046 = p_Val2_125_fu_6316_p2.read().range(8, 8);
        isneg_11_reg_9066 = p_Val2_128_fu_6352_p2.read().range(8, 8);
        isneg_12_reg_9086 = p_Val2_132_fu_6388_p2.read().range(8, 8);
        isneg_13_reg_9106 = p_Val2_134_fu_6424_p2.read().range(8, 8);
        isneg_14_reg_9126 = p_Val2_137_fu_6460_p2.read().range(8, 8);
        isneg_15_reg_9146 = p_Val2_140_fu_6496_p2.read().range(8, 8);
        isneg_8_reg_9006 = p_Val2_119_fu_6244_p2.read().range(8, 8);
        isneg_9_reg_9026 = p_Val2_122_fu_6280_p2.read().range(8, 8);
        newsignbit_42_reg_9019 = p_Val2_120_fu_6258_p2.read().range(7, 7);
        newsignbit_43_reg_9039 = p_Val2_123_fu_6294_p2.read().range(7, 7);
        newsignbit_44_reg_9059 = p_Val2_126_fu_6330_p2.read().range(7, 7);
        newsignbit_45_reg_9079 = p_Val2_129_fu_6366_p2.read().range(7, 7);
        newsignbit_46_reg_9099 = p_Val2_133_fu_6402_p2.read().range(7, 7);
        newsignbit_47_reg_9119 = p_Val2_135_fu_6438_p2.read().range(7, 7);
        newsignbit_48_reg_9139 = p_Val2_138_fu_6474_p2.read().range(7, 7);
        newsignbit_49_reg_9159 = p_Val2_141_fu_6510_p2.read().range(7, 7);
        p_Val2_120_reg_9013 = p_Val2_120_fu_6258_p2.read();
        p_Val2_123_reg_9033 = p_Val2_123_fu_6294_p2.read();
        p_Val2_126_reg_9053 = p_Val2_126_fu_6330_p2.read();
        p_Val2_129_reg_9073 = p_Val2_129_fu_6366_p2.read();
        p_Val2_133_reg_9093 = p_Val2_133_fu_6402_p2.read();
        p_Val2_135_reg_9113 = p_Val2_135_fu_6438_p2.read();
        p_Val2_138_reg_9133 = p_Val2_138_fu_6474_p2.read();
        p_Val2_141_reg_9153 = p_Val2_141_fu_6510_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        isneg_16_reg_9166 = p_Val2_143_fu_6900_p2.read().range(8, 8);
        isneg_17_reg_9186 = p_Val2_146_fu_6936_p2.read().range(8, 8);
        isneg_18_reg_9206 = p_Val2_150_fu_6972_p2.read().range(8, 8);
        isneg_19_reg_9226 = p_Val2_152_fu_7008_p2.read().range(8, 8);
        newsignbit_50_reg_9179 = p_Val2_144_fu_6914_p2.read().range(7, 7);
        newsignbit_51_reg_9199 = p_Val2_147_fu_6950_p2.read().range(7, 7);
        newsignbit_52_reg_9219 = p_Val2_151_fu_6986_p2.read().range(7, 7);
        newsignbit_53_reg_9239 = p_Val2_153_fu_7022_p2.read().range(7, 7);
        p_Val2_144_reg_9173 = p_Val2_144_fu_6914_p2.read();
        p_Val2_147_reg_9193 = p_Val2_147_fu_6950_p2.read();
        p_Val2_151_reg_9213 = p_Val2_151_fu_6986_p2.read();
        p_Val2_153_reg_9233 = p_Val2_153_fu_7022_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        isneg_20_reg_9246 = p_Val2_155_fu_7228_p2.read().range(8, 8);
        isneg_21_reg_9268 = p_Val2_159_fu_7284_p2.read().range(8, 8);
        newsignbit_54_reg_9257 = p_Val2_156_fu_7242_p2.read().range(7, 7);
        newsignbit_55_reg_9279 = p_Val2_160_fu_7298_p2.read().range(7, 7);
        p_Val2_156_reg_9252 = p_Val2_156_fu_7242_p2.read();
        p_Val2_160_reg_9274 = p_Val2_160_fu_7298_p2.read();
        p_Val2_44_892_reg_9263 = p_Val2_44_892_fu_7268_p3.read();
        p_Val2_45_893_reg_9285 = p_Val2_45_893_fu_7324_p3.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        newsignbit_11_reg_7529 = p_Val2_3_fu_532_p2.read().range(7, 7);
        newsignbit_12_reg_7561 = p_Val2_7_fu_600_p2.read().range(7, 7);
        newsignbit_13_reg_7593 = p_Val2_11_fu_668_p2.read().range(7, 7);
        newsignbit_14_reg_7625 = p_Val2_15_fu_736_p2.read().range(7, 7);
        newsignbit_15_reg_7657 = p_Val2_19_fu_804_p2.read().range(7, 7);
        newsignbit_16_reg_7689 = p_Val2_23_fu_872_p2.read().range(7, 7);
        newsignbit_17_reg_7721 = p_Val2_27_fu_940_p2.read().range(7, 7);
        newsignbit_18_reg_7753 = p_Val2_31_fu_1008_p2.read().range(7, 7);
        newsignbit_19_reg_7785 = p_Val2_35_fu_1076_p2.read().range(7, 7);
        newsignbit_20_reg_7817 = p_Val2_39_fu_1144_p2.read().range(7, 7);
        newsignbit_21_reg_7849 = p_Val2_43_fu_1212_p2.read().range(7, 7);
        newsignbit_22_reg_7881 = p_Val2_47_fu_1280_p2.read().range(7, 7);
        newsignbit_23_reg_7913 = p_Val2_51_fu_1348_p2.read().range(7, 7);
        newsignbit_24_reg_7945 = p_Val2_55_fu_1416_p2.read().range(7, 7);
        newsignbit_25_reg_7977 = p_Val2_59_fu_1484_p2.read().range(7, 7);
        newsignbit_reg_7497 = p_Val2_102_fu_464_p2.read().range(7, 7);
        p_Result_10_reg_7824 = p_Val2_37_fu_1108_p2.read().range(15, 14);
        p_Result_11_reg_7856 = p_Val2_41_fu_1176_p2.read().range(15, 14);
        p_Result_12_reg_7888 = p_Val2_45_fu_1244_p2.read().range(15, 14);
        p_Result_13_reg_7920 = p_Val2_49_fu_1312_p2.read().range(15, 14);
        p_Result_14_reg_7952 = p_Val2_53_fu_1380_p2.read().range(15, 14);
        p_Result_15_reg_7984 = p_Val2_57_fu_1448_p2.read().range(15, 14);
        p_Result_1_reg_7536 = p_Val2_1_fu_496_p2.read().range(15, 14);
        p_Result_2_reg_7568 = p_Val2_5_fu_564_p2.read().range(15, 14);
        p_Result_3_reg_7600 = p_Val2_9_fu_632_p2.read().range(15, 14);
        p_Result_4_reg_7632 = p_Val2_13_fu_700_p2.read().range(15, 14);
        p_Result_5_reg_7664 = p_Val2_17_fu_768_p2.read().range(15, 14);
        p_Result_6_reg_7696 = p_Val2_21_fu_836_p2.read().range(15, 14);
        p_Result_7_reg_7728 = p_Val2_25_fu_904_p2.read().range(15, 14);
        p_Result_8_reg_7760 = p_Val2_29_fu_972_p2.read().range(15, 14);
        p_Result_9_reg_7792 = p_Val2_33_fu_1040_p2.read().range(15, 14);
        p_Result_s_reg_7504 = p_Val2_s_fu_428_p2.read().range(15, 14);
        p_Val2_102_reg_7491 = p_Val2_102_fu_464_p2.read();
        p_Val2_11_reg_7587 = p_Val2_11_fu_668_p2.read();
        p_Val2_13_reg_7606 = p_Val2_13_fu_700_p2.read();
        p_Val2_15_reg_7619 = p_Val2_15_fu_736_p2.read();
        p_Val2_17_reg_7638 = p_Val2_17_fu_768_p2.read();
        p_Val2_19_reg_7651 = p_Val2_19_fu_804_p2.read();
        p_Val2_1_reg_7510 = p_Val2_1_fu_496_p2.read();
        p_Val2_21_reg_7670 = p_Val2_21_fu_836_p2.read();
        p_Val2_23_reg_7683 = p_Val2_23_fu_872_p2.read();
        p_Val2_25_reg_7702 = p_Val2_25_fu_904_p2.read();
        p_Val2_27_reg_7715 = p_Val2_27_fu_940_p2.read();
        p_Val2_29_reg_7734 = p_Val2_29_fu_972_p2.read();
        p_Val2_31_reg_7747 = p_Val2_31_fu_1008_p2.read();
        p_Val2_33_reg_7766 = p_Val2_33_fu_1040_p2.read();
        p_Val2_35_reg_7779 = p_Val2_35_fu_1076_p2.read();
        p_Val2_37_reg_7798 = p_Val2_37_fu_1108_p2.read();
        p_Val2_39_reg_7811 = p_Val2_39_fu_1144_p2.read();
        p_Val2_3_reg_7523 = p_Val2_3_fu_532_p2.read();
        p_Val2_41_reg_7830 = p_Val2_41_fu_1176_p2.read();
        p_Val2_43_reg_7843 = p_Val2_43_fu_1212_p2.read();
        p_Val2_45_reg_7862 = p_Val2_45_fu_1244_p2.read();
        p_Val2_47_reg_7875 = p_Val2_47_fu_1280_p2.read();
        p_Val2_49_reg_7894 = p_Val2_49_fu_1312_p2.read();
        p_Val2_51_reg_7907 = p_Val2_51_fu_1348_p2.read();
        p_Val2_53_reg_7926 = p_Val2_53_fu_1380_p2.read();
        p_Val2_55_reg_7939 = p_Val2_55_fu_1416_p2.read();
        p_Val2_57_reg_7958 = p_Val2_57_fu_1448_p2.read();
        p_Val2_59_reg_7971 = p_Val2_59_fu_1484_p2.read();
        p_Val2_5_reg_7542 = p_Val2_5_fu_564_p2.read();
        p_Val2_7_reg_7555 = p_Val2_7_fu_600_p2.read();
        p_Val2_9_reg_7574 = p_Val2_9_fu_632_p2.read();
        p_Val2_s_reg_7478 = p_Val2_s_fu_428_p2.read();
        signbit_10_reg_7804 = p_Val2_37_fu_1108_p2.read().range(15, 15);
        signbit_11_reg_7836 = p_Val2_41_fu_1176_p2.read().range(15, 15);
        signbit_12_reg_7868 = p_Val2_45_fu_1244_p2.read().range(15, 15);
        signbit_13_reg_7900 = p_Val2_49_fu_1312_p2.read().range(15, 15);
        signbit_14_reg_7932 = p_Val2_53_fu_1380_p2.read().range(15, 15);
        signbit_15_reg_7964 = p_Val2_57_fu_1448_p2.read().range(15, 15);
        signbit_1_reg_7516 = p_Val2_1_fu_496_p2.read().range(15, 15);
        signbit_2_reg_7548 = p_Val2_5_fu_564_p2.read().range(15, 15);
        signbit_3_reg_7580 = p_Val2_9_fu_632_p2.read().range(15, 15);
        signbit_4_reg_7612 = p_Val2_13_fu_700_p2.read().range(15, 15);
        signbit_5_reg_7644 = p_Val2_17_fu_768_p2.read().range(15, 15);
        signbit_6_reg_7676 = p_Val2_21_fu_836_p2.read().range(15, 15);
        signbit_7_reg_7708 = p_Val2_25_fu_904_p2.read().range(15, 15);
        signbit_8_reg_7740 = p_Val2_29_fu_972_p2.read().range(15, 15);
        signbit_9_reg_7772 = p_Val2_33_fu_1040_p2.read().range(15, 15);
        signbit_reg_7484 = p_Val2_s_fu_428_p2.read().range(15, 15);
    }
}

void COMPUTE_ENGINE::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            ap_NS_fsm = ap_ST_fsm_state3;
            break;
        case 4 : 
            ap_NS_fsm = ap_ST_fsm_state4;
            break;
        case 8 : 
            ap_NS_fsm = ap_ST_fsm_state5;
            break;
        case 16 : 
            ap_NS_fsm = ap_ST_fsm_state6;
            break;
        case 32 : 
            ap_NS_fsm = ap_ST_fsm_state7;
            break;
        case 64 : 
            ap_NS_fsm = ap_ST_fsm_state1;
            break;
        default : 
            ap_NS_fsm = "XXXXXXX";
            break;
    }
}

}

