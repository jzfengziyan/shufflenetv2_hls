#include "ShuffleNetV2.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void ShuffleNetV2::thread_DATA_BIAS_ARADDR() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1701.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_59_reg_49119.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1672.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_58_reg_48992.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1644.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_57_reg_48859.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1605.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_56_reg_48634.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1575.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_55_reg_48507.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1547.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_54_reg_48374.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1508.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_53_reg_48149.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1478.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_52_reg_48022.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_51_reg_47889.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1414.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_50_reg_47708.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1384.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_49_reg_47581.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1354.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_48_reg_47448.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1324.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_47_reg_47321.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1296.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_46_reg_47188.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1261.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_45_reg_47017.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1232.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_44_reg_46890.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1204.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_43_reg_46757.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1166.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_42_reg_46532.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1137.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_41_reg_46405.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1109.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_40_reg_46272.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1071.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_39_reg_46047.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1042.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_38_reg_45920.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1014.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_37_reg_45787.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state976.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_36_reg_45562.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state947.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_35_reg_45435.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state919.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_34_reg_45302.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state881.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_33_reg_45077.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state852.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_32_reg_44950.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state824.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_31_reg_44817.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state786.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_30_reg_44592.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state757.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_29_reg_44465.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state729.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_28_reg_44332.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state691.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_27_reg_44107.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state662.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_26_reg_43980.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state634.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_25_reg_43847.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state596.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_24_reg_43622.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state567.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_23_reg_43495.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state539.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_22_reg_43362.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state504.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_21_reg_43181.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state475.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_20_reg_43054.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state445.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_19_reg_42921.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state416.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_18_reg_42794.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state388.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_17_reg_42661.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state354.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_16_reg_42349.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state333.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_15_reg_42284.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state312.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_14_reg_42260.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state281.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_13_reg_41860.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state260.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_12_reg_41795.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state239.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_11_reg_41630.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state209.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_10_reg_41512.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state187.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_9_reg_41306.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state166.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_8_reg_41141.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state139.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_7_reg_40926.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state118.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_6_reg_40906.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_5_reg_40696.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state73.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_4_reg_40631.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_3_reg_40471.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_2_reg_40377.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_1_reg_40358.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
            DATA_BIAS_ARADDR = bias_V_read_reg_40190.read();
        } else {
            DATA_BIAS_ARADDR = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        DATA_BIAS_ARADDR = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void ShuffleNetV2::thread_DATA_BIAS_ARLEN() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state118.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state209.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state312.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state388.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state416.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state445.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state475.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state504.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state539.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state567.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state596.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state634.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state662.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state691.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state729.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state757.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state786.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state824.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state852.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state881.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state919.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state947.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state976.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1014.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1042.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1071.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1109.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1137.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1166.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1204.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1232.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1261.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1296.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1324.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1354.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1384.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1414.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1478.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1508.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1547.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1575.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1605.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1644.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1672.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1701.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())))) {
        DATA_BIAS_ARLEN = ap_const_lv32_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read()))) {
        DATA_BIAS_ARLEN = ap_const_lv32_A;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read()))) {
        DATA_BIAS_ARLEN = ap_const_lv32_200;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state73.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state139.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state166.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state187.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state239.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state260.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state281.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state333.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state354.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())))) {
        DATA_BIAS_ARLEN = ap_const_lv32_18;
    } else {
        DATA_BIAS_ARLEN = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void ShuffleNetV2::thread_DATA_BIAS_ARVALID() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state73.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state118.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state139.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state166.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state187.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state209.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state239.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state260.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state281.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state312.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state333.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state354.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state388.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state416.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state445.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state475.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state504.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state539.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state567.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state596.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state634.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state662.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state691.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state729.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state757.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state786.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state824.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state852.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state881.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state919.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state947.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state976.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1014.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1042.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1071.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1109.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1137.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1166.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1204.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1232.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1261.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1296.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1324.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1354.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1384.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1414.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1478.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1508.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1547.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1575.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1605.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1644.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1672.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1701.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())))) {
        DATA_BIAS_ARVALID = ap_const_logic_1;
    } else {
        DATA_BIAS_ARVALID = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_DATA_BIAS_RREADY() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_fu_15473_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_fu_15473_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, DATA_BIAS_RVALID.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond57_fu_15500_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond57_fu_15500_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, DATA_BIAS_RVALID.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond58_fu_15527_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond58_fu_15527_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, DATA_BIAS_RVALID.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond62_fu_15795_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond62_fu_15795_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, DATA_BIAS_RVALID.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state80.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond66_fu_15936_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond66_fu_15936_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, DATA_BIAS_RVALID.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state101.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond70_fu_16070_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond70_fu_16070_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, DATA_BIAS_RVALID.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state125.read()) && 
          esl_seteq<1,1,1>(DATA_BIAS_RVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state146.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond77_fu_16414_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond77_fu_16414_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, DATA_BIAS_RVALID.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state173.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond82_fu_16751_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond82_fu_16751_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, DATA_BIAS_RVALID.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state194.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond86_fu_16949_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond86_fu_16949_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, DATA_BIAS_RVALID.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state216.read()) && 
          esl_seteq<1,1,1>(DATA_BIAS_RVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state246.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond98_fu_17557_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond98_fu_17557_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, DATA_BIAS_RVALID.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state267.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond102_fu_17755_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond102_fu_17755_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, DATA_BIAS_RVALID.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state288.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond106_fu_17889_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond106_fu_17889_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, DATA_BIAS_RVALID.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state319.read()) && 
          esl_seteq<1,1,1>(DATA_BIAS_RVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state340.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond118_fu_18567_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond118_fu_18567_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, DATA_BIAS_RVALID.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state361.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond122_fu_18703_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond122_fu_18703_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, DATA_BIAS_RVALID.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read()) && 
          esl_seteq<1,1,1>(DATA_BIAS_RVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state423.read()) && 
          esl_seteq<1,1,1>(DATA_BIAS_RVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state452.read()) && 
          esl_seteq<1,1,1>(DATA_BIAS_RVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state482.read()) && 
          esl_seteq<1,1,1>(DATA_BIAS_RVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state511.read()) && 
          esl_seteq<1,1,1>(DATA_BIAS_RVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state546.read()) && 
          esl_seteq<1,1,1>(DATA_BIAS_RVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state574.read()) && 
          esl_seteq<1,1,1>(DATA_BIAS_RVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state603.read()) && 
          esl_seteq<1,1,1>(DATA_BIAS_RVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state641.read()) && 
          esl_seteq<1,1,1>(DATA_BIAS_RVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state669.read()) && 
          esl_seteq<1,1,1>(DATA_BIAS_RVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state698.read()) && 
          esl_seteq<1,1,1>(DATA_BIAS_RVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state736.read()) && 
          esl_seteq<1,1,1>(DATA_BIAS_RVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state764.read()) && 
          esl_seteq<1,1,1>(DATA_BIAS_RVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state793.read()) && 
          esl_seteq<1,1,1>(DATA_BIAS_RVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state831.read()) && 
          esl_seteq<1,1,1>(DATA_BIAS_RVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state859.read()) && 
          esl_seteq<1,1,1>(DATA_BIAS_RVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state888.read()) && 
          esl_seteq<1,1,1>(DATA_BIAS_RVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state926.read()) && 
          esl_seteq<1,1,1>(DATA_BIAS_RVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state954.read()) && 
          esl_seteq<1,1,1>(DATA_BIAS_RVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state983.read()) && 
          esl_seteq<1,1,1>(DATA_BIAS_RVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1021.read()) && 
          esl_seteq<1,1,1>(DATA_BIAS_RVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1049.read()) && 
          esl_seteq<1,1,1>(DATA_BIAS_RVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1078.read()) && 
          esl_seteq<1,1,1>(DATA_BIAS_RVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1116.read()) && 
          esl_seteq<1,1,1>(DATA_BIAS_RVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1144.read()) && 
          esl_seteq<1,1,1>(DATA_BIAS_RVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1173.read()) && 
          esl_seteq<1,1,1>(DATA_BIAS_RVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1211.read()) && 
          esl_seteq<1,1,1>(DATA_BIAS_RVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1239.read()) && 
          esl_seteq<1,1,1>(DATA_BIAS_RVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1268.read()) && 
          esl_seteq<1,1,1>(DATA_BIAS_RVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1303.read()) && 
          esl_seteq<1,1,1>(DATA_BIAS_RVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1331.read()) && 
          esl_seteq<1,1,1>(DATA_BIAS_RVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1361.read()) && 
          esl_seteq<1,1,1>(DATA_BIAS_RVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1391.read()) && 
          esl_seteq<1,1,1>(DATA_BIAS_RVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1421.read()) && 
          esl_seteq<1,1,1>(DATA_BIAS_RVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1457.read()) && 
          esl_seteq<1,1,1>(DATA_BIAS_RVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1485.read()) && 
          esl_seteq<1,1,1>(DATA_BIAS_RVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1515.read()) && 
          esl_seteq<1,1,1>(DATA_BIAS_RVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1554.read()) && 
          esl_seteq<1,1,1>(DATA_BIAS_RVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1582.read()) && 
          esl_seteq<1,1,1>(DATA_BIAS_RVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1612.read()) && 
          esl_seteq<1,1,1>(DATA_BIAS_RVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1651.read()) && 
          esl_seteq<1,1,1>(DATA_BIAS_RVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1679.read()) && 
          esl_seteq<1,1,1>(DATA_BIAS_RVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1708.read()) && 
          esl_seteq<1,1,1>(DATA_BIAS_RVALID.read(), ap_const_logic_1)))) {
        DATA_BIAS_RREADY = ap_const_logic_1;
    } else {
        DATA_BIAS_RREADY = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_DATA_BIAS_blk_n_AR() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state73.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state118.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state139.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state166.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state187.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state209.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state239.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state260.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state281.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state312.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state333.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state354.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state388.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state416.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state445.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state475.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state504.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state539.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state567.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state596.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state634.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state662.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state691.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state729.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state757.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state786.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state824.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state852.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state881.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state919.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state947.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state976.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1014.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1042.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1071.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1109.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1137.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1166.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1204.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1232.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1261.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1296.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1324.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1354.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1384.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1414.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1478.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1508.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1547.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1575.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1605.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1644.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1672.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1701.read()))) {
        DATA_BIAS_blk_n_AR = m_axi_DATA_BIAS_ARREADY.read();
    } else {
        DATA_BIAS_blk_n_AR = ap_const_logic_1;
    }
}

void ShuffleNetV2::thread_DATA_BIAS_blk_n_R() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_fu_15473_p2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond57_fu_15500_p2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond58_fu_15527_p2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond62_fu_15795_p2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state80.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond66_fu_15936_p2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state101.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond70_fu_16070_p2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state125.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state146.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond77_fu_16414_p2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state173.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond82_fu_16751_p2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state194.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond86_fu_16949_p2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state216.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state246.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond98_fu_17557_p2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state267.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond102_fu_17755_p2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state288.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond106_fu_17889_p2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state319.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state340.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond118_fu_18567_p2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state361.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond122_fu_18703_p2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state423.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state452.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state482.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state511.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state546.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state574.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state603.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state641.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state669.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state698.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state736.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state764.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state793.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state831.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state859.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state888.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state926.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state954.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state983.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1021.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1049.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1078.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1116.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1144.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1173.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1211.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1239.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1268.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1303.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1331.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1361.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1391.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1421.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1457.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1485.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1515.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1554.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1582.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1612.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1651.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1679.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1708.read()))) {
        DATA_BIAS_blk_n_R = m_axi_DATA_BIAS_RVALID.read();
    } else {
        DATA_BIAS_blk_n_R = ap_const_logic_1;
    }
}

void ShuffleNetV2::thread_DATA_INPUT_OUTPUT_ARVALID() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_INPUT_OUTPUT_ARREADY.read()))) {
        DATA_INPUT_OUTPUT_ARVALID = ap_const_logic_1;
    } else {
        DATA_INPUT_OUTPUT_ARVALID = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_DATA_INPUT_OUTPUT_AWVALID() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1723.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1724.read()))) {
        DATA_INPUT_OUTPUT_AWVALID = grp_fc_fu_15360_m_axi_output_V_AWVALID.read();
    } else {
        DATA_INPUT_OUTPUT_AWVALID = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_DATA_INPUT_OUTPUT_BREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1723.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1724.read()))) {
        DATA_INPUT_OUTPUT_BREADY = grp_fc_fu_15360_m_axi_output_V_BREADY.read();
    } else {
        DATA_INPUT_OUTPUT_BREADY = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_DATA_INPUT_OUTPUT_RREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) && 
         esl_seteq<1,1,1>(exitcond64_fu_15658_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(exitcond64_fu_15658_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, DATA_INPUT_OUTPUT_RVALID.read())))) {
        DATA_INPUT_OUTPUT_RREADY = ap_const_logic_1;
    } else {
        DATA_INPUT_OUTPUT_RREADY = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_DATA_INPUT_OUTPUT_WVALID() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1723.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1724.read()))) {
        DATA_INPUT_OUTPUT_WVALID = grp_fc_fu_15360_m_axi_output_V_WVALID.read();
    } else {
        DATA_INPUT_OUTPUT_WVALID = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_DATA_INPUT_OUTPUT_blk_n_AR() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read())) {
        DATA_INPUT_OUTPUT_blk_n_AR = m_axi_DATA_INPUT_OUTPUT_ARREADY.read();
    } else {
        DATA_INPUT_OUTPUT_blk_n_AR = ap_const_logic_1;
    }
}

void ShuffleNetV2::thread_DATA_INPUT_OUTPUT_blk_n_R() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) && 
         esl_seteq<1,1,1>(exitcond64_fu_15658_p2.read(), ap_const_lv1_0))) {
        DATA_INPUT_OUTPUT_blk_n_R = m_axi_DATA_INPUT_OUTPUT_RVALID.read();
    } else {
        DATA_INPUT_OUTPUT_blk_n_R = ap_const_logic_1;
    }
}

void ShuffleNetV2::thread_DATA_OTHER_WEIGHTS_ARADDR() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1723.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1724.read()))) {
        DATA_OTHER_WEIGHTS_ARADDR = grp_fc_fu_15360_m_axi_weight_V_ARADDR.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1716.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_1, exitcond301_fu_39845_p2.read())) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1720.read()))) {
        DATA_OTHER_WEIGHTS_ARADDR = grp_conv_last_fu_14423_m_axi_weight_V_ARADDR.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_1, exitcond59_fu_15569_p2.read())))) {
        DATA_OTHER_WEIGHTS_ARADDR = grp_conv1_p_fu_14110_m_axi_weight_V_ARADDR.read();
    } else {
        DATA_OTHER_WEIGHTS_ARADDR = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void ShuffleNetV2::thread_DATA_OTHER_WEIGHTS_ARBURST() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1723.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1724.read()))) {
        DATA_OTHER_WEIGHTS_ARBURST = grp_fc_fu_15360_m_axi_weight_V_ARBURST.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1716.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_1, exitcond301_fu_39845_p2.read())) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1720.read()))) {
        DATA_OTHER_WEIGHTS_ARBURST = grp_conv_last_fu_14423_m_axi_weight_V_ARBURST.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_1, exitcond59_fu_15569_p2.read())))) {
        DATA_OTHER_WEIGHTS_ARBURST = grp_conv1_p_fu_14110_m_axi_weight_V_ARBURST.read();
    } else {
        DATA_OTHER_WEIGHTS_ARBURST =  (sc_lv<2>) ("XX");
    }
}

void ShuffleNetV2::thread_DATA_OTHER_WEIGHTS_ARCACHE() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1723.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1724.read()))) {
        DATA_OTHER_WEIGHTS_ARCACHE = grp_fc_fu_15360_m_axi_weight_V_ARCACHE.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1716.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_1, exitcond301_fu_39845_p2.read())) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1720.read()))) {
        DATA_OTHER_WEIGHTS_ARCACHE = grp_conv_last_fu_14423_m_axi_weight_V_ARCACHE.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_1, exitcond59_fu_15569_p2.read())))) {
        DATA_OTHER_WEIGHTS_ARCACHE = grp_conv1_p_fu_14110_m_axi_weight_V_ARCACHE.read();
    } else {
        DATA_OTHER_WEIGHTS_ARCACHE =  (sc_lv<4>) ("XXXX");
    }
}

void ShuffleNetV2::thread_DATA_OTHER_WEIGHTS_ARID() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1723.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1724.read()))) {
        DATA_OTHER_WEIGHTS_ARID = grp_fc_fu_15360_m_axi_weight_V_ARID.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1716.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_1, exitcond301_fu_39845_p2.read())) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1720.read()))) {
        DATA_OTHER_WEIGHTS_ARID = grp_conv_last_fu_14423_m_axi_weight_V_ARID.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_1, exitcond59_fu_15569_p2.read())))) {
        DATA_OTHER_WEIGHTS_ARID = grp_conv1_p_fu_14110_m_axi_weight_V_ARID.read();
    } else {
        DATA_OTHER_WEIGHTS_ARID =  (sc_lv<1>) ("X");
    }
}

void ShuffleNetV2::thread_DATA_OTHER_WEIGHTS_ARLEN() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1723.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1724.read()))) {
        DATA_OTHER_WEIGHTS_ARLEN = grp_fc_fu_15360_m_axi_weight_V_ARLEN.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1716.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_1, exitcond301_fu_39845_p2.read())) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1720.read()))) {
        DATA_OTHER_WEIGHTS_ARLEN = grp_conv_last_fu_14423_m_axi_weight_V_ARLEN.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_1, exitcond59_fu_15569_p2.read())))) {
        DATA_OTHER_WEIGHTS_ARLEN = grp_conv1_p_fu_14110_m_axi_weight_V_ARLEN.read();
    } else {
        DATA_OTHER_WEIGHTS_ARLEN = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void ShuffleNetV2::thread_DATA_OTHER_WEIGHTS_ARLOCK() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1723.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1724.read()))) {
        DATA_OTHER_WEIGHTS_ARLOCK = grp_fc_fu_15360_m_axi_weight_V_ARLOCK.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1716.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_1, exitcond301_fu_39845_p2.read())) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1720.read()))) {
        DATA_OTHER_WEIGHTS_ARLOCK = grp_conv_last_fu_14423_m_axi_weight_V_ARLOCK.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_1, exitcond59_fu_15569_p2.read())))) {
        DATA_OTHER_WEIGHTS_ARLOCK = grp_conv1_p_fu_14110_m_axi_weight_V_ARLOCK.read();
    } else {
        DATA_OTHER_WEIGHTS_ARLOCK =  (sc_lv<2>) ("XX");
    }
}

void ShuffleNetV2::thread_DATA_OTHER_WEIGHTS_ARPROT() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1723.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1724.read()))) {
        DATA_OTHER_WEIGHTS_ARPROT = grp_fc_fu_15360_m_axi_weight_V_ARPROT.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1716.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_1, exitcond301_fu_39845_p2.read())) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1720.read()))) {
        DATA_OTHER_WEIGHTS_ARPROT = grp_conv_last_fu_14423_m_axi_weight_V_ARPROT.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_1, exitcond59_fu_15569_p2.read())))) {
        DATA_OTHER_WEIGHTS_ARPROT = grp_conv1_p_fu_14110_m_axi_weight_V_ARPROT.read();
    } else {
        DATA_OTHER_WEIGHTS_ARPROT =  (sc_lv<3>) ("XXX");
    }
}

void ShuffleNetV2::thread_DATA_OTHER_WEIGHTS_ARQOS() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1723.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1724.read()))) {
        DATA_OTHER_WEIGHTS_ARQOS = grp_fc_fu_15360_m_axi_weight_V_ARQOS.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1716.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_1, exitcond301_fu_39845_p2.read())) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1720.read()))) {
        DATA_OTHER_WEIGHTS_ARQOS = grp_conv_last_fu_14423_m_axi_weight_V_ARQOS.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_1, exitcond59_fu_15569_p2.read())))) {
        DATA_OTHER_WEIGHTS_ARQOS = grp_conv1_p_fu_14110_m_axi_weight_V_ARQOS.read();
    } else {
        DATA_OTHER_WEIGHTS_ARQOS =  (sc_lv<4>) ("XXXX");
    }
}

void ShuffleNetV2::thread_DATA_OTHER_WEIGHTS_ARREGION() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1723.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1724.read()))) {
        DATA_OTHER_WEIGHTS_ARREGION = grp_fc_fu_15360_m_axi_weight_V_ARREGION.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1716.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_1, exitcond301_fu_39845_p2.read())) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1720.read()))) {
        DATA_OTHER_WEIGHTS_ARREGION = grp_conv_last_fu_14423_m_axi_weight_V_ARREGION.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_1, exitcond59_fu_15569_p2.read())))) {
        DATA_OTHER_WEIGHTS_ARREGION = grp_conv1_p_fu_14110_m_axi_weight_V_ARREGION.read();
    } else {
        DATA_OTHER_WEIGHTS_ARREGION =  (sc_lv<4>) ("XXXX");
    }
}

void ShuffleNetV2::thread_DATA_OTHER_WEIGHTS_ARSIZE() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1723.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1724.read()))) {
        DATA_OTHER_WEIGHTS_ARSIZE = grp_fc_fu_15360_m_axi_weight_V_ARSIZE.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1716.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_1, exitcond301_fu_39845_p2.read())) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1720.read()))) {
        DATA_OTHER_WEIGHTS_ARSIZE = grp_conv_last_fu_14423_m_axi_weight_V_ARSIZE.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_1, exitcond59_fu_15569_p2.read())))) {
        DATA_OTHER_WEIGHTS_ARSIZE = grp_conv1_p_fu_14110_m_axi_weight_V_ARSIZE.read();
    } else {
        DATA_OTHER_WEIGHTS_ARSIZE =  (sc_lv<3>) ("XXX");
    }
}

void ShuffleNetV2::thread_DATA_OTHER_WEIGHTS_ARUSER() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1723.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1724.read()))) {
        DATA_OTHER_WEIGHTS_ARUSER = grp_fc_fu_15360_m_axi_weight_V_ARUSER.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1716.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_1, exitcond301_fu_39845_p2.read())) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1720.read()))) {
        DATA_OTHER_WEIGHTS_ARUSER = grp_conv_last_fu_14423_m_axi_weight_V_ARUSER.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_1, exitcond59_fu_15569_p2.read())))) {
        DATA_OTHER_WEIGHTS_ARUSER = grp_conv1_p_fu_14110_m_axi_weight_V_ARUSER.read();
    } else {
        DATA_OTHER_WEIGHTS_ARUSER =  (sc_lv<1>) ("X");
    }
}

void ShuffleNetV2::thread_DATA_OTHER_WEIGHTS_ARVALID() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1723.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1724.read()))) {
        DATA_OTHER_WEIGHTS_ARVALID = grp_fc_fu_15360_m_axi_weight_V_ARVALID.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1716.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_1, exitcond301_fu_39845_p2.read())) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1720.read()))) {
        DATA_OTHER_WEIGHTS_ARVALID = grp_conv_last_fu_14423_m_axi_weight_V_ARVALID.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_1, exitcond59_fu_15569_p2.read())))) {
        DATA_OTHER_WEIGHTS_ARVALID = grp_conv1_p_fu_14110_m_axi_weight_V_ARVALID.read();
    } else {
        DATA_OTHER_WEIGHTS_ARVALID = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_DATA_OTHER_WEIGHTS_RREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1723.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1724.read()))) {
        DATA_OTHER_WEIGHTS_RREADY = grp_fc_fu_15360_m_axi_weight_V_RREADY.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1716.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_1, exitcond301_fu_39845_p2.read())) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1720.read()))) {
        DATA_OTHER_WEIGHTS_RREADY = grp_conv_last_fu_14423_m_axi_weight_V_RREADY.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_1, exitcond59_fu_15569_p2.read())))) {
        DATA_OTHER_WEIGHTS_RREADY = grp_conv1_p_fu_14110_m_axi_weight_V_RREADY.read();
    } else {
        DATA_OTHER_WEIGHTS_RREADY = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_10_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        ShuffleConvs_0_Downs_10_address0 = grp_subconv_3x3_32_strid_fu_14682_input_20_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_10_address0 = grp_subconv_1x1_32_p_fu_14169_ShuffleConvs_0_Downs_10_address0.read();
    } else {
        ShuffleConvs_0_Downs_10_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_10_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        ShuffleConvs_0_Downs_10_ce0 = grp_subconv_3x3_32_strid_fu_14682_input_20_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_10_ce0 = grp_subconv_1x1_32_p_fu_14169_ShuffleConvs_0_Downs_10_ce0.read();
    } else {
        ShuffleConvs_0_Downs_10_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_10_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_10_ce1 = grp_subconv_1x1_32_p_fu_14169_ShuffleConvs_0_Downs_10_ce1.read();
    } else {
        ShuffleConvs_0_Downs_10_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_10_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_10_we0 = grp_subconv_1x1_32_p_fu_14169_ShuffleConvs_0_Downs_10_we0.read();
    } else {
        ShuffleConvs_0_Downs_10_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_10_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_10_we1 = grp_subconv_1x1_32_p_fu_14169_ShuffleConvs_0_Downs_10_we1.read();
    } else {
        ShuffleConvs_0_Downs_10_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_11_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        ShuffleConvs_0_Downs_11_address0 = grp_subconv_3x3_32_strid_fu_14682_input_2_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_11_address0 = grp_subconv_1x1_32_p_fu_14169_ShuffleConvs_0_Downs_11_address0.read();
    } else {
        ShuffleConvs_0_Downs_11_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_11_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        ShuffleConvs_0_Downs_11_ce0 = grp_subconv_3x3_32_strid_fu_14682_input_2_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_11_ce0 = grp_subconv_1x1_32_p_fu_14169_ShuffleConvs_0_Downs_11_ce0.read();
    } else {
        ShuffleConvs_0_Downs_11_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_11_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_11_ce1 = grp_subconv_1x1_32_p_fu_14169_ShuffleConvs_0_Downs_11_ce1.read();
    } else {
        ShuffleConvs_0_Downs_11_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_11_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_11_we0 = grp_subconv_1x1_32_p_fu_14169_ShuffleConvs_0_Downs_11_we0.read();
    } else {
        ShuffleConvs_0_Downs_11_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_11_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_11_we1 = grp_subconv_1x1_32_p_fu_14169_ShuffleConvs_0_Downs_11_we1.read();
    } else {
        ShuffleConvs_0_Downs_11_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_12_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        ShuffleConvs_0_Downs_12_address0 = grp_subconv_3x3_32_strid_fu_14682_input_19_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_12_address0 = grp_subconv_1x1_32_p_fu_14169_ShuffleConvs_0_Downs_12_address0.read();
    } else {
        ShuffleConvs_0_Downs_12_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_12_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        ShuffleConvs_0_Downs_12_ce0 = grp_subconv_3x3_32_strid_fu_14682_input_19_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_12_ce0 = grp_subconv_1x1_32_p_fu_14169_ShuffleConvs_0_Downs_12_ce0.read();
    } else {
        ShuffleConvs_0_Downs_12_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_12_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_12_ce1 = grp_subconv_1x1_32_p_fu_14169_ShuffleConvs_0_Downs_12_ce1.read();
    } else {
        ShuffleConvs_0_Downs_12_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_12_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_12_we0 = grp_subconv_1x1_32_p_fu_14169_ShuffleConvs_0_Downs_12_we0.read();
    } else {
        ShuffleConvs_0_Downs_12_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_12_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_12_we1 = grp_subconv_1x1_32_p_fu_14169_ShuffleConvs_0_Downs_12_we1.read();
    } else {
        ShuffleConvs_0_Downs_12_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_13_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        ShuffleConvs_0_Downs_13_address0 = grp_subconv_3x3_32_strid_fu_14682_input_18_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_13_address0 = grp_subconv_1x1_32_p_fu_14169_ShuffleConvs_0_Downs_13_address0.read();
    } else {
        ShuffleConvs_0_Downs_13_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_13_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        ShuffleConvs_0_Downs_13_ce0 = grp_subconv_3x3_32_strid_fu_14682_input_18_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_13_ce0 = grp_subconv_1x1_32_p_fu_14169_ShuffleConvs_0_Downs_13_ce0.read();
    } else {
        ShuffleConvs_0_Downs_13_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_13_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_13_ce1 = grp_subconv_1x1_32_p_fu_14169_ShuffleConvs_0_Downs_13_ce1.read();
    } else {
        ShuffleConvs_0_Downs_13_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_13_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_13_we0 = grp_subconv_1x1_32_p_fu_14169_ShuffleConvs_0_Downs_13_we0.read();
    } else {
        ShuffleConvs_0_Downs_13_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_13_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_13_we1 = grp_subconv_1x1_32_p_fu_14169_ShuffleConvs_0_Downs_13_we1.read();
    } else {
        ShuffleConvs_0_Downs_13_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_14_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        ShuffleConvs_0_Downs_14_address0 = grp_subconv_3x3_32_strid_fu_14682_input_17_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_14_address0 = grp_subconv_1x1_32_p_fu_14169_ShuffleConvs_0_Downs_14_address0.read();
    } else {
        ShuffleConvs_0_Downs_14_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_14_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        ShuffleConvs_0_Downs_14_ce0 = grp_subconv_3x3_32_strid_fu_14682_input_17_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_14_ce0 = grp_subconv_1x1_32_p_fu_14169_ShuffleConvs_0_Downs_14_ce0.read();
    } else {
        ShuffleConvs_0_Downs_14_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_14_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_14_ce1 = grp_subconv_1x1_32_p_fu_14169_ShuffleConvs_0_Downs_14_ce1.read();
    } else {
        ShuffleConvs_0_Downs_14_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_14_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_14_we0 = grp_subconv_1x1_32_p_fu_14169_ShuffleConvs_0_Downs_14_we0.read();
    } else {
        ShuffleConvs_0_Downs_14_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_14_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_14_we1 = grp_subconv_1x1_32_p_fu_14169_ShuffleConvs_0_Downs_14_we1.read();
    } else {
        ShuffleConvs_0_Downs_14_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_15_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        ShuffleConvs_0_Downs_15_address0 = grp_subconv_3x3_32_strid_fu_14682_input_16_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_15_address0 = grp_subconv_1x1_32_p_fu_14169_ShuffleConvs_0_Downs_15_address0.read();
    } else {
        ShuffleConvs_0_Downs_15_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_15_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        ShuffleConvs_0_Downs_15_ce0 = grp_subconv_3x3_32_strid_fu_14682_input_16_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_15_ce0 = grp_subconv_1x1_32_p_fu_14169_ShuffleConvs_0_Downs_15_ce0.read();
    } else {
        ShuffleConvs_0_Downs_15_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_15_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_15_ce1 = grp_subconv_1x1_32_p_fu_14169_ShuffleConvs_0_Downs_15_ce1.read();
    } else {
        ShuffleConvs_0_Downs_15_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_15_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_15_we0 = grp_subconv_1x1_32_p_fu_14169_ShuffleConvs_0_Downs_15_we0.read();
    } else {
        ShuffleConvs_0_Downs_15_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_15_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_15_we1 = grp_subconv_1x1_32_p_fu_14169_ShuffleConvs_0_Downs_15_we1.read();
    } else {
        ShuffleConvs_0_Downs_15_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_16_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        ShuffleConvs_0_Downs_16_address0 = grp_subconv_3x3_32_strid_fu_14682_input_15_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_16_address0 = grp_subconv_1x1_32_p_fu_14169_ShuffleConvs_0_Downs_16_address0.read();
    } else {
        ShuffleConvs_0_Downs_16_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_16_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        ShuffleConvs_0_Downs_16_ce0 = grp_subconv_3x3_32_strid_fu_14682_input_15_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_16_ce0 = grp_subconv_1x1_32_p_fu_14169_ShuffleConvs_0_Downs_16_ce0.read();
    } else {
        ShuffleConvs_0_Downs_16_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_16_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_16_ce1 = grp_subconv_1x1_32_p_fu_14169_ShuffleConvs_0_Downs_16_ce1.read();
    } else {
        ShuffleConvs_0_Downs_16_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_16_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_16_we0 = grp_subconv_1x1_32_p_fu_14169_ShuffleConvs_0_Downs_16_we0.read();
    } else {
        ShuffleConvs_0_Downs_16_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_16_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_16_we1 = grp_subconv_1x1_32_p_fu_14169_ShuffleConvs_0_Downs_16_we1.read();
    } else {
        ShuffleConvs_0_Downs_16_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_17_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        ShuffleConvs_0_Downs_17_address0 = grp_subconv_3x3_32_strid_fu_14682_input_14_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_17_address0 = grp_subconv_1x1_32_p_fu_14169_ShuffleConvs_0_Downs_17_address0.read();
    } else {
        ShuffleConvs_0_Downs_17_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_17_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        ShuffleConvs_0_Downs_17_ce0 = grp_subconv_3x3_32_strid_fu_14682_input_14_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_17_ce0 = grp_subconv_1x1_32_p_fu_14169_ShuffleConvs_0_Downs_17_ce0.read();
    } else {
        ShuffleConvs_0_Downs_17_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_17_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_17_ce1 = grp_subconv_1x1_32_p_fu_14169_ShuffleConvs_0_Downs_17_ce1.read();
    } else {
        ShuffleConvs_0_Downs_17_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_17_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_17_we0 = grp_subconv_1x1_32_p_fu_14169_ShuffleConvs_0_Downs_17_we0.read();
    } else {
        ShuffleConvs_0_Downs_17_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_17_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_17_we1 = grp_subconv_1x1_32_p_fu_14169_ShuffleConvs_0_Downs_17_we1.read();
    } else {
        ShuffleConvs_0_Downs_17_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_18_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        ShuffleConvs_0_Downs_18_address0 = grp_subconv_3x3_32_strid_fu_14682_input_13_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_18_address0 = grp_subconv_1x1_32_p_fu_14169_ShuffleConvs_0_Downs_18_address0.read();
    } else {
        ShuffleConvs_0_Downs_18_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_18_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        ShuffleConvs_0_Downs_18_ce0 = grp_subconv_3x3_32_strid_fu_14682_input_13_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_18_ce0 = grp_subconv_1x1_32_p_fu_14169_ShuffleConvs_0_Downs_18_ce0.read();
    } else {
        ShuffleConvs_0_Downs_18_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_18_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_18_ce1 = grp_subconv_1x1_32_p_fu_14169_ShuffleConvs_0_Downs_18_ce1.read();
    } else {
        ShuffleConvs_0_Downs_18_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_18_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_18_we0 = grp_subconv_1x1_32_p_fu_14169_ShuffleConvs_0_Downs_18_we0.read();
    } else {
        ShuffleConvs_0_Downs_18_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_18_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_18_we1 = grp_subconv_1x1_32_p_fu_14169_ShuffleConvs_0_Downs_18_we1.read();
    } else {
        ShuffleConvs_0_Downs_18_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_19_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        ShuffleConvs_0_Downs_19_address0 = grp_subconv_3x3_32_strid_fu_14682_input_12_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_19_address0 = grp_subconv_1x1_32_p_fu_14169_ShuffleConvs_0_Downs_19_address0.read();
    } else {
        ShuffleConvs_0_Downs_19_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_19_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        ShuffleConvs_0_Downs_19_ce0 = grp_subconv_3x3_32_strid_fu_14682_input_12_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_19_ce0 = grp_subconv_1x1_32_p_fu_14169_ShuffleConvs_0_Downs_19_ce0.read();
    } else {
        ShuffleConvs_0_Downs_19_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_19_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_19_ce1 = grp_subconv_1x1_32_p_fu_14169_ShuffleConvs_0_Downs_19_ce1.read();
    } else {
        ShuffleConvs_0_Downs_19_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_19_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_19_we0 = grp_subconv_1x1_32_p_fu_14169_ShuffleConvs_0_Downs_19_we0.read();
    } else {
        ShuffleConvs_0_Downs_19_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_19_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_19_we1 = grp_subconv_1x1_32_p_fu_14169_ShuffleConvs_0_Downs_19_we1.read();
    } else {
        ShuffleConvs_0_Downs_19_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        ShuffleConvs_0_Downs_1_address0 = grp_subconv_3x3_32_strid_fu_14682_input_8_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_1_address0 = grp_subconv_1x1_32_p_fu_14169_ShuffleConvs_0_Downs_1_address0.read();
    } else {
        ShuffleConvs_0_Downs_1_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        ShuffleConvs_0_Downs_1_ce0 = grp_subconv_3x3_32_strid_fu_14682_input_8_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_1_ce0 = grp_subconv_1x1_32_p_fu_14169_ShuffleConvs_0_Downs_1_ce0.read();
    } else {
        ShuffleConvs_0_Downs_1_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_1_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_1_ce1 = grp_subconv_1x1_32_p_fu_14169_ShuffleConvs_0_Downs_1_ce1.read();
    } else {
        ShuffleConvs_0_Downs_1_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_1_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_1_we0 = grp_subconv_1x1_32_p_fu_14169_ShuffleConvs_0_Downs_1_we0.read();
    } else {
        ShuffleConvs_0_Downs_1_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_1_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_1_we1 = grp_subconv_1x1_32_p_fu_14169_ShuffleConvs_0_Downs_1_we1.read();
    } else {
        ShuffleConvs_0_Downs_1_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_20_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        ShuffleConvs_0_Downs_20_address0 = grp_subconv_3x3_32_strid_fu_14682_input_11_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_20_address0 = grp_subconv_1x1_32_p_fu_14169_ShuffleConvs_0_Downs_20_address0.read();
    } else {
        ShuffleConvs_0_Downs_20_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_20_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        ShuffleConvs_0_Downs_20_ce0 = grp_subconv_3x3_32_strid_fu_14682_input_11_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_20_ce0 = grp_subconv_1x1_32_p_fu_14169_ShuffleConvs_0_Downs_20_ce0.read();
    } else {
        ShuffleConvs_0_Downs_20_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_20_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_20_ce1 = grp_subconv_1x1_32_p_fu_14169_ShuffleConvs_0_Downs_20_ce1.read();
    } else {
        ShuffleConvs_0_Downs_20_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_20_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_20_we0 = grp_subconv_1x1_32_p_fu_14169_ShuffleConvs_0_Downs_20_we0.read();
    } else {
        ShuffleConvs_0_Downs_20_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_20_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_20_we1 = grp_subconv_1x1_32_p_fu_14169_ShuffleConvs_0_Downs_20_we1.read();
    } else {
        ShuffleConvs_0_Downs_20_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_21_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        ShuffleConvs_0_Downs_21_address0 = grp_subconv_3x3_32_strid_fu_14682_input_10_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_21_address0 = grp_subconv_1x1_32_p_fu_14169_ShuffleConvs_0_Downs_21_address0.read();
    } else {
        ShuffleConvs_0_Downs_21_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_21_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        ShuffleConvs_0_Downs_21_ce0 = grp_subconv_3x3_32_strid_fu_14682_input_10_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_21_ce0 = grp_subconv_1x1_32_p_fu_14169_ShuffleConvs_0_Downs_21_ce0.read();
    } else {
        ShuffleConvs_0_Downs_21_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_21_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_21_ce1 = grp_subconv_1x1_32_p_fu_14169_ShuffleConvs_0_Downs_21_ce1.read();
    } else {
        ShuffleConvs_0_Downs_21_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_21_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_21_we0 = grp_subconv_1x1_32_p_fu_14169_ShuffleConvs_0_Downs_21_we0.read();
    } else {
        ShuffleConvs_0_Downs_21_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_21_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_21_we1 = grp_subconv_1x1_32_p_fu_14169_ShuffleConvs_0_Downs_21_we1.read();
    } else {
        ShuffleConvs_0_Downs_21_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_22_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        ShuffleConvs_0_Downs_22_address0 = grp_subconv_3x3_32_strid_fu_14682_input_1_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_22_address0 = grp_subconv_1x1_32_p_fu_14169_ShuffleConvs_0_Downs_22_address0.read();
    } else {
        ShuffleConvs_0_Downs_22_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_22_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        ShuffleConvs_0_Downs_22_ce0 = grp_subconv_3x3_32_strid_fu_14682_input_1_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_22_ce0 = grp_subconv_1x1_32_p_fu_14169_ShuffleConvs_0_Downs_22_ce0.read();
    } else {
        ShuffleConvs_0_Downs_22_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_22_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_22_ce1 = grp_subconv_1x1_32_p_fu_14169_ShuffleConvs_0_Downs_22_ce1.read();
    } else {
        ShuffleConvs_0_Downs_22_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_22_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_22_we0 = grp_subconv_1x1_32_p_fu_14169_ShuffleConvs_0_Downs_22_we0.read();
    } else {
        ShuffleConvs_0_Downs_22_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_22_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_22_we1 = grp_subconv_1x1_32_p_fu_14169_ShuffleConvs_0_Downs_22_we1.read();
    } else {
        ShuffleConvs_0_Downs_22_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_23_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        ShuffleConvs_0_Downs_23_address0 = grp_subconv_3x3_32_strid_fu_14682_input_0_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_23_address0 = grp_subconv_1x1_32_p_fu_14169_ShuffleConvs_0_Downs_23_address0.read();
    } else {
        ShuffleConvs_0_Downs_23_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_23_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        ShuffleConvs_0_Downs_23_ce0 = grp_subconv_3x3_32_strid_fu_14682_input_0_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_23_ce0 = grp_subconv_1x1_32_p_fu_14169_ShuffleConvs_0_Downs_23_ce0.read();
    } else {
        ShuffleConvs_0_Downs_23_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_23_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_23_ce1 = grp_subconv_1x1_32_p_fu_14169_ShuffleConvs_0_Downs_23_ce1.read();
    } else {
        ShuffleConvs_0_Downs_23_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_23_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_23_we0 = grp_subconv_1x1_32_p_fu_14169_ShuffleConvs_0_Downs_23_we0.read();
    } else {
        ShuffleConvs_0_Downs_23_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_23_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_23_we1 = grp_subconv_1x1_32_p_fu_14169_ShuffleConvs_0_Downs_23_we1.read();
    } else {
        ShuffleConvs_0_Downs_23_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        ShuffleConvs_0_Downs_2_address0 = grp_subconv_3x3_32_strid_fu_14682_input_7_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_2_address0 = grp_subconv_1x1_32_p_fu_14169_ShuffleConvs_0_Downs_2_address0.read();
    } else {
        ShuffleConvs_0_Downs_2_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        ShuffleConvs_0_Downs_2_ce0 = grp_subconv_3x3_32_strid_fu_14682_input_7_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_2_ce0 = grp_subconv_1x1_32_p_fu_14169_ShuffleConvs_0_Downs_2_ce0.read();
    } else {
        ShuffleConvs_0_Downs_2_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_2_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_2_ce1 = grp_subconv_1x1_32_p_fu_14169_ShuffleConvs_0_Downs_2_ce1.read();
    } else {
        ShuffleConvs_0_Downs_2_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_2_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_2_we0 = grp_subconv_1x1_32_p_fu_14169_ShuffleConvs_0_Downs_2_we0.read();
    } else {
        ShuffleConvs_0_Downs_2_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_2_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_2_we1 = grp_subconv_1x1_32_p_fu_14169_ShuffleConvs_0_Downs_2_we1.read();
    } else {
        ShuffleConvs_0_Downs_2_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        ShuffleConvs_0_Downs_3_address0 = grp_subconv_3x3_32_strid_fu_14682_input_6_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_3_address0 = grp_subconv_1x1_32_p_fu_14169_ShuffleConvs_0_Downs_3_address0.read();
    } else {
        ShuffleConvs_0_Downs_3_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        ShuffleConvs_0_Downs_3_ce0 = grp_subconv_3x3_32_strid_fu_14682_input_6_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_3_ce0 = grp_subconv_1x1_32_p_fu_14169_ShuffleConvs_0_Downs_3_ce0.read();
    } else {
        ShuffleConvs_0_Downs_3_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_3_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_3_ce1 = grp_subconv_1x1_32_p_fu_14169_ShuffleConvs_0_Downs_3_ce1.read();
    } else {
        ShuffleConvs_0_Downs_3_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_3_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_3_we0 = grp_subconv_1x1_32_p_fu_14169_ShuffleConvs_0_Downs_3_we0.read();
    } else {
        ShuffleConvs_0_Downs_3_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_3_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_3_we1 = grp_subconv_1x1_32_p_fu_14169_ShuffleConvs_0_Downs_3_we1.read();
    } else {
        ShuffleConvs_0_Downs_3_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        ShuffleConvs_0_Downs_4_address0 = grp_subconv_3x3_32_strid_fu_14682_input_5_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_4_address0 = grp_subconv_1x1_32_p_fu_14169_ShuffleConvs_0_Downs_4_address0.read();
    } else {
        ShuffleConvs_0_Downs_4_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        ShuffleConvs_0_Downs_4_ce0 = grp_subconv_3x3_32_strid_fu_14682_input_5_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_4_ce0 = grp_subconv_1x1_32_p_fu_14169_ShuffleConvs_0_Downs_4_ce0.read();
    } else {
        ShuffleConvs_0_Downs_4_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_4_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_4_ce1 = grp_subconv_1x1_32_p_fu_14169_ShuffleConvs_0_Downs_4_ce1.read();
    } else {
        ShuffleConvs_0_Downs_4_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_4_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_4_we0 = grp_subconv_1x1_32_p_fu_14169_ShuffleConvs_0_Downs_4_we0.read();
    } else {
        ShuffleConvs_0_Downs_4_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_4_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_4_we1 = grp_subconv_1x1_32_p_fu_14169_ShuffleConvs_0_Downs_4_we1.read();
    } else {
        ShuffleConvs_0_Downs_4_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        ShuffleConvs_0_Downs_5_address0 = grp_subconv_3x3_32_strid_fu_14682_input_4_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_5_address0 = grp_subconv_1x1_32_p_fu_14169_ShuffleConvs_0_Downs_5_address0.read();
    } else {
        ShuffleConvs_0_Downs_5_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        ShuffleConvs_0_Downs_5_ce0 = grp_subconv_3x3_32_strid_fu_14682_input_4_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_5_ce0 = grp_subconv_1x1_32_p_fu_14169_ShuffleConvs_0_Downs_5_ce0.read();
    } else {
        ShuffleConvs_0_Downs_5_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_5_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_5_ce1 = grp_subconv_1x1_32_p_fu_14169_ShuffleConvs_0_Downs_5_ce1.read();
    } else {
        ShuffleConvs_0_Downs_5_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_5_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_5_we0 = grp_subconv_1x1_32_p_fu_14169_ShuffleConvs_0_Downs_5_we0.read();
    } else {
        ShuffleConvs_0_Downs_5_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_5_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_5_we1 = grp_subconv_1x1_32_p_fu_14169_ShuffleConvs_0_Downs_5_we1.read();
    } else {
        ShuffleConvs_0_Downs_5_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        ShuffleConvs_0_Downs_6_address0 = grp_subconv_3x3_32_strid_fu_14682_input_3_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_6_address0 = grp_subconv_1x1_32_p_fu_14169_ShuffleConvs_0_Downs_6_address0.read();
    } else {
        ShuffleConvs_0_Downs_6_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        ShuffleConvs_0_Downs_6_ce0 = grp_subconv_3x3_32_strid_fu_14682_input_3_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_6_ce0 = grp_subconv_1x1_32_p_fu_14169_ShuffleConvs_0_Downs_6_ce0.read();
    } else {
        ShuffleConvs_0_Downs_6_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_6_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_6_ce1 = grp_subconv_1x1_32_p_fu_14169_ShuffleConvs_0_Downs_6_ce1.read();
    } else {
        ShuffleConvs_0_Downs_6_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_6_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_6_we0 = grp_subconv_1x1_32_p_fu_14169_ShuffleConvs_0_Downs_6_we0.read();
    } else {
        ShuffleConvs_0_Downs_6_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_6_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_6_we1 = grp_subconv_1x1_32_p_fu_14169_ShuffleConvs_0_Downs_6_we1.read();
    } else {
        ShuffleConvs_0_Downs_6_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_7_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        ShuffleConvs_0_Downs_7_address0 = grp_subconv_3x3_32_strid_fu_14682_input_23_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_7_address0 = grp_subconv_1x1_32_p_fu_14169_ShuffleConvs_0_Downs_7_address0.read();
    } else {
        ShuffleConvs_0_Downs_7_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_7_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        ShuffleConvs_0_Downs_7_ce0 = grp_subconv_3x3_32_strid_fu_14682_input_23_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_7_ce0 = grp_subconv_1x1_32_p_fu_14169_ShuffleConvs_0_Downs_7_ce0.read();
    } else {
        ShuffleConvs_0_Downs_7_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_7_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_7_ce1 = grp_subconv_1x1_32_p_fu_14169_ShuffleConvs_0_Downs_7_ce1.read();
    } else {
        ShuffleConvs_0_Downs_7_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_7_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_7_we0 = grp_subconv_1x1_32_p_fu_14169_ShuffleConvs_0_Downs_7_we0.read();
    } else {
        ShuffleConvs_0_Downs_7_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_7_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_7_we1 = grp_subconv_1x1_32_p_fu_14169_ShuffleConvs_0_Downs_7_we1.read();
    } else {
        ShuffleConvs_0_Downs_7_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_8_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        ShuffleConvs_0_Downs_8_address0 = grp_subconv_3x3_32_strid_fu_14682_input_22_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_8_address0 = grp_subconv_1x1_32_p_fu_14169_ShuffleConvs_0_Downs_8_address0.read();
    } else {
        ShuffleConvs_0_Downs_8_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_8_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        ShuffleConvs_0_Downs_8_ce0 = grp_subconv_3x3_32_strid_fu_14682_input_22_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_8_ce0 = grp_subconv_1x1_32_p_fu_14169_ShuffleConvs_0_Downs_8_ce0.read();
    } else {
        ShuffleConvs_0_Downs_8_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_8_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_8_ce1 = grp_subconv_1x1_32_p_fu_14169_ShuffleConvs_0_Downs_8_ce1.read();
    } else {
        ShuffleConvs_0_Downs_8_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_8_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_8_we0 = grp_subconv_1x1_32_p_fu_14169_ShuffleConvs_0_Downs_8_we0.read();
    } else {
        ShuffleConvs_0_Downs_8_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_8_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_8_we1 = grp_subconv_1x1_32_p_fu_14169_ShuffleConvs_0_Downs_8_we1.read();
    } else {
        ShuffleConvs_0_Downs_8_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_9_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        ShuffleConvs_0_Downs_9_address0 = grp_subconv_3x3_32_strid_fu_14682_input_21_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_9_address0 = grp_subconv_1x1_32_p_fu_14169_ShuffleConvs_0_Downs_9_address0.read();
    } else {
        ShuffleConvs_0_Downs_9_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_9_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        ShuffleConvs_0_Downs_9_ce0 = grp_subconv_3x3_32_strid_fu_14682_input_21_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_9_ce0 = grp_subconv_1x1_32_p_fu_14169_ShuffleConvs_0_Downs_9_ce0.read();
    } else {
        ShuffleConvs_0_Downs_9_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_9_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_9_ce1 = grp_subconv_1x1_32_p_fu_14169_ShuffleConvs_0_Downs_9_ce1.read();
    } else {
        ShuffleConvs_0_Downs_9_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_9_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_9_we0 = grp_subconv_1x1_32_p_fu_14169_ShuffleConvs_0_Downs_9_we0.read();
    } else {
        ShuffleConvs_0_Downs_9_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_9_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_9_we1 = grp_subconv_1x1_32_p_fu_14169_ShuffleConvs_0_Downs_9_we1.read();
    } else {
        ShuffleConvs_0_Downs_9_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        ShuffleConvs_0_Downs_address0 = grp_subconv_3x3_32_strid_fu_14682_input_9_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_address0 = grp_subconv_1x1_32_p_fu_14169_ShuffleConvs_0_Downs_address0.read();
    } else {
        ShuffleConvs_0_Downs_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        ShuffleConvs_0_Downs_ce0 = grp_subconv_3x3_32_strid_fu_14682_input_9_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_ce0 = grp_subconv_1x1_32_p_fu_14169_ShuffleConvs_0_Downs_ce0.read();
    } else {
        ShuffleConvs_0_Downs_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_ce1 = grp_subconv_1x1_32_p_fu_14169_ShuffleConvs_0_Downs_ce1.read();
    } else {
        ShuffleConvs_0_Downs_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_we0 = grp_subconv_1x1_32_p_fu_14169_ShuffleConvs_0_Downs_we0.read();
    } else {
        ShuffleConvs_0_Downs_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_we1 = grp_subconv_1x1_32_p_fu_14169_ShuffleConvs_0_Downs_we1.read();
    } else {
        ShuffleConvs_0_Downs_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_10_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state425.read())) {
        ShuffleConvs_1_Downs_10_address0 = grp_subconv_3x3_16_strid_1_fu_14566_ShuffleConvs_1_Downs_10_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        ShuffleConvs_1_Downs_10_address0 = grp_subconv_1x1_16p_p_fu_14006_ShuffleConvs_1_Downs_10_address0.read();
    } else {
        ShuffleConvs_1_Downs_10_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_10_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state425.read())) {
        ShuffleConvs_1_Downs_10_ce0 = grp_subconv_3x3_16_strid_1_fu_14566_ShuffleConvs_1_Downs_10_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        ShuffleConvs_1_Downs_10_ce0 = grp_subconv_1x1_16p_p_fu_14006_ShuffleConvs_1_Downs_10_ce0.read();
    } else {
        ShuffleConvs_1_Downs_10_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_10_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        ShuffleConvs_1_Downs_10_ce1 = grp_subconv_1x1_16p_p_fu_14006_ShuffleConvs_1_Downs_10_ce1.read();
    } else {
        ShuffleConvs_1_Downs_10_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_10_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        ShuffleConvs_1_Downs_10_we0 = grp_subconv_1x1_16p_p_fu_14006_ShuffleConvs_1_Downs_10_we0.read();
    } else {
        ShuffleConvs_1_Downs_10_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_10_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        ShuffleConvs_1_Downs_10_we1 = grp_subconv_1x1_16p_p_fu_14006_ShuffleConvs_1_Downs_10_we1.read();
    } else {
        ShuffleConvs_1_Downs_10_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_11_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state425.read())) {
        ShuffleConvs_1_Downs_11_address0 = grp_subconv_3x3_16_strid_1_fu_14566_ShuffleConvs_1_Downs_11_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        ShuffleConvs_1_Downs_11_address0 = grp_subconv_1x1_16p_p_fu_14006_ShuffleConvs_1_Downs_11_address0.read();
    } else {
        ShuffleConvs_1_Downs_11_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_11_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state425.read())) {
        ShuffleConvs_1_Downs_11_ce0 = grp_subconv_3x3_16_strid_1_fu_14566_ShuffleConvs_1_Downs_11_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        ShuffleConvs_1_Downs_11_ce0 = grp_subconv_1x1_16p_p_fu_14006_ShuffleConvs_1_Downs_11_ce0.read();
    } else {
        ShuffleConvs_1_Downs_11_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_11_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        ShuffleConvs_1_Downs_11_ce1 = grp_subconv_1x1_16p_p_fu_14006_ShuffleConvs_1_Downs_11_ce1.read();
    } else {
        ShuffleConvs_1_Downs_11_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_11_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        ShuffleConvs_1_Downs_11_we0 = grp_subconv_1x1_16p_p_fu_14006_ShuffleConvs_1_Downs_11_we0.read();
    } else {
        ShuffleConvs_1_Downs_11_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_11_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        ShuffleConvs_1_Downs_11_we1 = grp_subconv_1x1_16p_p_fu_14006_ShuffleConvs_1_Downs_11_we1.read();
    } else {
        ShuffleConvs_1_Downs_11_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_12_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state425.read())) {
        ShuffleConvs_1_Downs_12_address0 = grp_subconv_3x3_16_strid_1_fu_14566_ShuffleConvs_1_Downs_12_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        ShuffleConvs_1_Downs_12_address0 = grp_subconv_1x1_16p_p_fu_14006_ShuffleConvs_1_Downs_12_address0.read();
    } else {
        ShuffleConvs_1_Downs_12_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_12_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state425.read())) {
        ShuffleConvs_1_Downs_12_ce0 = grp_subconv_3x3_16_strid_1_fu_14566_ShuffleConvs_1_Downs_12_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        ShuffleConvs_1_Downs_12_ce0 = grp_subconv_1x1_16p_p_fu_14006_ShuffleConvs_1_Downs_12_ce0.read();
    } else {
        ShuffleConvs_1_Downs_12_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_12_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        ShuffleConvs_1_Downs_12_ce1 = grp_subconv_1x1_16p_p_fu_14006_ShuffleConvs_1_Downs_12_ce1.read();
    } else {
        ShuffleConvs_1_Downs_12_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_12_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        ShuffleConvs_1_Downs_12_we0 = grp_subconv_1x1_16p_p_fu_14006_ShuffleConvs_1_Downs_12_we0.read();
    } else {
        ShuffleConvs_1_Downs_12_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_12_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        ShuffleConvs_1_Downs_12_we1 = grp_subconv_1x1_16p_p_fu_14006_ShuffleConvs_1_Downs_12_we1.read();
    } else {
        ShuffleConvs_1_Downs_12_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_13_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state425.read())) {
        ShuffleConvs_1_Downs_13_address0 = grp_subconv_3x3_16_strid_1_fu_14566_ShuffleConvs_1_Downs_13_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        ShuffleConvs_1_Downs_13_address0 = grp_subconv_1x1_16p_p_fu_14006_ShuffleConvs_1_Downs_13_address0.read();
    } else {
        ShuffleConvs_1_Downs_13_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_13_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state425.read())) {
        ShuffleConvs_1_Downs_13_ce0 = grp_subconv_3x3_16_strid_1_fu_14566_ShuffleConvs_1_Downs_13_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        ShuffleConvs_1_Downs_13_ce0 = grp_subconv_1x1_16p_p_fu_14006_ShuffleConvs_1_Downs_13_ce0.read();
    } else {
        ShuffleConvs_1_Downs_13_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_13_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        ShuffleConvs_1_Downs_13_ce1 = grp_subconv_1x1_16p_p_fu_14006_ShuffleConvs_1_Downs_13_ce1.read();
    } else {
        ShuffleConvs_1_Downs_13_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_13_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        ShuffleConvs_1_Downs_13_we0 = grp_subconv_1x1_16p_p_fu_14006_ShuffleConvs_1_Downs_13_we0.read();
    } else {
        ShuffleConvs_1_Downs_13_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_13_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        ShuffleConvs_1_Downs_13_we1 = grp_subconv_1x1_16p_p_fu_14006_ShuffleConvs_1_Downs_13_we1.read();
    } else {
        ShuffleConvs_1_Downs_13_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_14_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state425.read())) {
        ShuffleConvs_1_Downs_14_address0 = grp_subconv_3x3_16_strid_1_fu_14566_ShuffleConvs_1_Downs_14_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        ShuffleConvs_1_Downs_14_address0 = grp_subconv_1x1_16p_p_fu_14006_ShuffleConvs_1_Downs_14_address0.read();
    } else {
        ShuffleConvs_1_Downs_14_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_14_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state425.read())) {
        ShuffleConvs_1_Downs_14_ce0 = grp_subconv_3x3_16_strid_1_fu_14566_ShuffleConvs_1_Downs_14_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        ShuffleConvs_1_Downs_14_ce0 = grp_subconv_1x1_16p_p_fu_14006_ShuffleConvs_1_Downs_14_ce0.read();
    } else {
        ShuffleConvs_1_Downs_14_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_14_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        ShuffleConvs_1_Downs_14_ce1 = grp_subconv_1x1_16p_p_fu_14006_ShuffleConvs_1_Downs_14_ce1.read();
    } else {
        ShuffleConvs_1_Downs_14_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_14_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        ShuffleConvs_1_Downs_14_we0 = grp_subconv_1x1_16p_p_fu_14006_ShuffleConvs_1_Downs_14_we0.read();
    } else {
        ShuffleConvs_1_Downs_14_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_14_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        ShuffleConvs_1_Downs_14_we1 = grp_subconv_1x1_16p_p_fu_14006_ShuffleConvs_1_Downs_14_we1.read();
    } else {
        ShuffleConvs_1_Downs_14_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_15_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state425.read())) {
        ShuffleConvs_1_Downs_15_address0 = grp_subconv_3x3_16_strid_1_fu_14566_ShuffleConvs_1_Downs_15_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        ShuffleConvs_1_Downs_15_address0 = grp_subconv_1x1_16p_p_fu_14006_ShuffleConvs_1_Downs_15_address0.read();
    } else {
        ShuffleConvs_1_Downs_15_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_15_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state425.read())) {
        ShuffleConvs_1_Downs_15_ce0 = grp_subconv_3x3_16_strid_1_fu_14566_ShuffleConvs_1_Downs_15_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        ShuffleConvs_1_Downs_15_ce0 = grp_subconv_1x1_16p_p_fu_14006_ShuffleConvs_1_Downs_15_ce0.read();
    } else {
        ShuffleConvs_1_Downs_15_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_15_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        ShuffleConvs_1_Downs_15_ce1 = grp_subconv_1x1_16p_p_fu_14006_ShuffleConvs_1_Downs_15_ce1.read();
    } else {
        ShuffleConvs_1_Downs_15_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_15_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        ShuffleConvs_1_Downs_15_we0 = grp_subconv_1x1_16p_p_fu_14006_ShuffleConvs_1_Downs_15_we0.read();
    } else {
        ShuffleConvs_1_Downs_15_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_15_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        ShuffleConvs_1_Downs_15_we1 = grp_subconv_1x1_16p_p_fu_14006_ShuffleConvs_1_Downs_15_we1.read();
    } else {
        ShuffleConvs_1_Downs_15_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_16_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state425.read())) {
        ShuffleConvs_1_Downs_16_address0 = grp_subconv_3x3_16_strid_1_fu_14566_ShuffleConvs_1_Downs_16_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        ShuffleConvs_1_Downs_16_address0 = grp_subconv_1x1_16p_p_fu_14006_ShuffleConvs_1_Downs_16_address0.read();
    } else {
        ShuffleConvs_1_Downs_16_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_16_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state425.read())) {
        ShuffleConvs_1_Downs_16_ce0 = grp_subconv_3x3_16_strid_1_fu_14566_ShuffleConvs_1_Downs_16_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        ShuffleConvs_1_Downs_16_ce0 = grp_subconv_1x1_16p_p_fu_14006_ShuffleConvs_1_Downs_16_ce0.read();
    } else {
        ShuffleConvs_1_Downs_16_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_16_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        ShuffleConvs_1_Downs_16_ce1 = grp_subconv_1x1_16p_p_fu_14006_ShuffleConvs_1_Downs_16_ce1.read();
    } else {
        ShuffleConvs_1_Downs_16_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_16_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        ShuffleConvs_1_Downs_16_we0 = grp_subconv_1x1_16p_p_fu_14006_ShuffleConvs_1_Downs_16_we0.read();
    } else {
        ShuffleConvs_1_Downs_16_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_16_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        ShuffleConvs_1_Downs_16_we1 = grp_subconv_1x1_16p_p_fu_14006_ShuffleConvs_1_Downs_16_we1.read();
    } else {
        ShuffleConvs_1_Downs_16_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_17_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state425.read())) {
        ShuffleConvs_1_Downs_17_address0 = grp_subconv_3x3_16_strid_1_fu_14566_ShuffleConvs_1_Downs_17_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        ShuffleConvs_1_Downs_17_address0 = grp_subconv_1x1_16p_p_fu_14006_ShuffleConvs_1_Downs_17_address0.read();
    } else {
        ShuffleConvs_1_Downs_17_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_17_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state425.read())) {
        ShuffleConvs_1_Downs_17_ce0 = grp_subconv_3x3_16_strid_1_fu_14566_ShuffleConvs_1_Downs_17_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        ShuffleConvs_1_Downs_17_ce0 = grp_subconv_1x1_16p_p_fu_14006_ShuffleConvs_1_Downs_17_ce0.read();
    } else {
        ShuffleConvs_1_Downs_17_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_17_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        ShuffleConvs_1_Downs_17_ce1 = grp_subconv_1x1_16p_p_fu_14006_ShuffleConvs_1_Downs_17_ce1.read();
    } else {
        ShuffleConvs_1_Downs_17_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_17_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        ShuffleConvs_1_Downs_17_we0 = grp_subconv_1x1_16p_p_fu_14006_ShuffleConvs_1_Downs_17_we0.read();
    } else {
        ShuffleConvs_1_Downs_17_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_17_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        ShuffleConvs_1_Downs_17_we1 = grp_subconv_1x1_16p_p_fu_14006_ShuffleConvs_1_Downs_17_we1.read();
    } else {
        ShuffleConvs_1_Downs_17_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_18_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state425.read())) {
        ShuffleConvs_1_Downs_18_address0 = grp_subconv_3x3_16_strid_1_fu_14566_ShuffleConvs_1_Downs_18_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        ShuffleConvs_1_Downs_18_address0 = grp_subconv_1x1_16p_p_fu_14006_ShuffleConvs_1_Downs_18_address0.read();
    } else {
        ShuffleConvs_1_Downs_18_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_18_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state425.read())) {
        ShuffleConvs_1_Downs_18_ce0 = grp_subconv_3x3_16_strid_1_fu_14566_ShuffleConvs_1_Downs_18_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        ShuffleConvs_1_Downs_18_ce0 = grp_subconv_1x1_16p_p_fu_14006_ShuffleConvs_1_Downs_18_ce0.read();
    } else {
        ShuffleConvs_1_Downs_18_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_18_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        ShuffleConvs_1_Downs_18_ce1 = grp_subconv_1x1_16p_p_fu_14006_ShuffleConvs_1_Downs_18_ce1.read();
    } else {
        ShuffleConvs_1_Downs_18_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_18_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        ShuffleConvs_1_Downs_18_we0 = grp_subconv_1x1_16p_p_fu_14006_ShuffleConvs_1_Downs_18_we0.read();
    } else {
        ShuffleConvs_1_Downs_18_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_18_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        ShuffleConvs_1_Downs_18_we1 = grp_subconv_1x1_16p_p_fu_14006_ShuffleConvs_1_Downs_18_we1.read();
    } else {
        ShuffleConvs_1_Downs_18_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_19_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state425.read())) {
        ShuffleConvs_1_Downs_19_address0 = grp_subconv_3x3_16_strid_1_fu_14566_ShuffleConvs_1_Downs_19_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        ShuffleConvs_1_Downs_19_address0 = grp_subconv_1x1_16p_p_fu_14006_ShuffleConvs_1_Downs_19_address0.read();
    } else {
        ShuffleConvs_1_Downs_19_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_19_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state425.read())) {
        ShuffleConvs_1_Downs_19_ce0 = grp_subconv_3x3_16_strid_1_fu_14566_ShuffleConvs_1_Downs_19_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        ShuffleConvs_1_Downs_19_ce0 = grp_subconv_1x1_16p_p_fu_14006_ShuffleConvs_1_Downs_19_ce0.read();
    } else {
        ShuffleConvs_1_Downs_19_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_19_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        ShuffleConvs_1_Downs_19_ce1 = grp_subconv_1x1_16p_p_fu_14006_ShuffleConvs_1_Downs_19_ce1.read();
    } else {
        ShuffleConvs_1_Downs_19_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_19_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        ShuffleConvs_1_Downs_19_we0 = grp_subconv_1x1_16p_p_fu_14006_ShuffleConvs_1_Downs_19_we0.read();
    } else {
        ShuffleConvs_1_Downs_19_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_19_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        ShuffleConvs_1_Downs_19_we1 = grp_subconv_1x1_16p_p_fu_14006_ShuffleConvs_1_Downs_19_we1.read();
    } else {
        ShuffleConvs_1_Downs_19_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state425.read())) {
        ShuffleConvs_1_Downs_1_address0 = grp_subconv_3x3_16_strid_1_fu_14566_ShuffleConvs_1_Downs_1_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        ShuffleConvs_1_Downs_1_address0 = grp_subconv_1x1_16p_p_fu_14006_ShuffleConvs_1_Downs_1_address0.read();
    } else {
        ShuffleConvs_1_Downs_1_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state425.read())) {
        ShuffleConvs_1_Downs_1_ce0 = grp_subconv_3x3_16_strid_1_fu_14566_ShuffleConvs_1_Downs_1_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        ShuffleConvs_1_Downs_1_ce0 = grp_subconv_1x1_16p_p_fu_14006_ShuffleConvs_1_Downs_1_ce0.read();
    } else {
        ShuffleConvs_1_Downs_1_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_1_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        ShuffleConvs_1_Downs_1_ce1 = grp_subconv_1x1_16p_p_fu_14006_ShuffleConvs_1_Downs_1_ce1.read();
    } else {
        ShuffleConvs_1_Downs_1_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_1_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        ShuffleConvs_1_Downs_1_we0 = grp_subconv_1x1_16p_p_fu_14006_ShuffleConvs_1_Downs_1_we0.read();
    } else {
        ShuffleConvs_1_Downs_1_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_1_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        ShuffleConvs_1_Downs_1_we1 = grp_subconv_1x1_16p_p_fu_14006_ShuffleConvs_1_Downs_1_we1.read();
    } else {
        ShuffleConvs_1_Downs_1_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_20_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state425.read())) {
        ShuffleConvs_1_Downs_20_address0 = grp_subconv_3x3_16_strid_1_fu_14566_ShuffleConvs_1_Downs_20_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        ShuffleConvs_1_Downs_20_address0 = grp_subconv_1x1_16p_p_fu_14006_ShuffleConvs_1_Downs_20_address0.read();
    } else {
        ShuffleConvs_1_Downs_20_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_20_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state425.read())) {
        ShuffleConvs_1_Downs_20_ce0 = grp_subconv_3x3_16_strid_1_fu_14566_ShuffleConvs_1_Downs_20_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        ShuffleConvs_1_Downs_20_ce0 = grp_subconv_1x1_16p_p_fu_14006_ShuffleConvs_1_Downs_20_ce0.read();
    } else {
        ShuffleConvs_1_Downs_20_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_20_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        ShuffleConvs_1_Downs_20_ce1 = grp_subconv_1x1_16p_p_fu_14006_ShuffleConvs_1_Downs_20_ce1.read();
    } else {
        ShuffleConvs_1_Downs_20_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_20_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        ShuffleConvs_1_Downs_20_we0 = grp_subconv_1x1_16p_p_fu_14006_ShuffleConvs_1_Downs_20_we0.read();
    } else {
        ShuffleConvs_1_Downs_20_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_20_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        ShuffleConvs_1_Downs_20_we1 = grp_subconv_1x1_16p_p_fu_14006_ShuffleConvs_1_Downs_20_we1.read();
    } else {
        ShuffleConvs_1_Downs_20_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_21_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state425.read())) {
        ShuffleConvs_1_Downs_21_address0 = grp_subconv_3x3_16_strid_1_fu_14566_ShuffleConvs_1_Downs_21_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        ShuffleConvs_1_Downs_21_address0 = grp_subconv_1x1_16p_p_fu_14006_ShuffleConvs_1_Downs_21_address0.read();
    } else {
        ShuffleConvs_1_Downs_21_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_21_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state425.read())) {
        ShuffleConvs_1_Downs_21_ce0 = grp_subconv_3x3_16_strid_1_fu_14566_ShuffleConvs_1_Downs_21_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        ShuffleConvs_1_Downs_21_ce0 = grp_subconv_1x1_16p_p_fu_14006_ShuffleConvs_1_Downs_21_ce0.read();
    } else {
        ShuffleConvs_1_Downs_21_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_21_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        ShuffleConvs_1_Downs_21_ce1 = grp_subconv_1x1_16p_p_fu_14006_ShuffleConvs_1_Downs_21_ce1.read();
    } else {
        ShuffleConvs_1_Downs_21_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_21_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        ShuffleConvs_1_Downs_21_we0 = grp_subconv_1x1_16p_p_fu_14006_ShuffleConvs_1_Downs_21_we0.read();
    } else {
        ShuffleConvs_1_Downs_21_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_21_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        ShuffleConvs_1_Downs_21_we1 = grp_subconv_1x1_16p_p_fu_14006_ShuffleConvs_1_Downs_21_we1.read();
    } else {
        ShuffleConvs_1_Downs_21_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_22_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state425.read())) {
        ShuffleConvs_1_Downs_22_address0 = grp_subconv_3x3_16_strid_1_fu_14566_ShuffleConvs_1_Downs_22_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        ShuffleConvs_1_Downs_22_address0 = grp_subconv_1x1_16p_p_fu_14006_ShuffleConvs_1_Downs_22_address0.read();
    } else {
        ShuffleConvs_1_Downs_22_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_22_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state425.read())) {
        ShuffleConvs_1_Downs_22_ce0 = grp_subconv_3x3_16_strid_1_fu_14566_ShuffleConvs_1_Downs_22_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        ShuffleConvs_1_Downs_22_ce0 = grp_subconv_1x1_16p_p_fu_14006_ShuffleConvs_1_Downs_22_ce0.read();
    } else {
        ShuffleConvs_1_Downs_22_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_22_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        ShuffleConvs_1_Downs_22_ce1 = grp_subconv_1x1_16p_p_fu_14006_ShuffleConvs_1_Downs_22_ce1.read();
    } else {
        ShuffleConvs_1_Downs_22_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_22_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        ShuffleConvs_1_Downs_22_we0 = grp_subconv_1x1_16p_p_fu_14006_ShuffleConvs_1_Downs_22_we0.read();
    } else {
        ShuffleConvs_1_Downs_22_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_22_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        ShuffleConvs_1_Downs_22_we1 = grp_subconv_1x1_16p_p_fu_14006_ShuffleConvs_1_Downs_22_we1.read();
    } else {
        ShuffleConvs_1_Downs_22_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_23_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state425.read())) {
        ShuffleConvs_1_Downs_23_address0 = grp_subconv_3x3_16_strid_1_fu_14566_ShuffleConvs_1_Downs_23_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        ShuffleConvs_1_Downs_23_address0 = grp_subconv_1x1_16p_p_fu_14006_ShuffleConvs_1_Downs_23_address0.read();
    } else {
        ShuffleConvs_1_Downs_23_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_23_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state425.read())) {
        ShuffleConvs_1_Downs_23_ce0 = grp_subconv_3x3_16_strid_1_fu_14566_ShuffleConvs_1_Downs_23_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        ShuffleConvs_1_Downs_23_ce0 = grp_subconv_1x1_16p_p_fu_14006_ShuffleConvs_1_Downs_23_ce0.read();
    } else {
        ShuffleConvs_1_Downs_23_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_23_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        ShuffleConvs_1_Downs_23_ce1 = grp_subconv_1x1_16p_p_fu_14006_ShuffleConvs_1_Downs_23_ce1.read();
    } else {
        ShuffleConvs_1_Downs_23_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_23_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        ShuffleConvs_1_Downs_23_we0 = grp_subconv_1x1_16p_p_fu_14006_ShuffleConvs_1_Downs_23_we0.read();
    } else {
        ShuffleConvs_1_Downs_23_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_23_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        ShuffleConvs_1_Downs_23_we1 = grp_subconv_1x1_16p_p_fu_14006_ShuffleConvs_1_Downs_23_we1.read();
    } else {
        ShuffleConvs_1_Downs_23_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state425.read())) {
        ShuffleConvs_1_Downs_2_address0 = grp_subconv_3x3_16_strid_1_fu_14566_ShuffleConvs_1_Downs_2_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        ShuffleConvs_1_Downs_2_address0 = grp_subconv_1x1_16p_p_fu_14006_ShuffleConvs_1_Downs_2_address0.read();
    } else {
        ShuffleConvs_1_Downs_2_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state425.read())) {
        ShuffleConvs_1_Downs_2_ce0 = grp_subconv_3x3_16_strid_1_fu_14566_ShuffleConvs_1_Downs_2_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        ShuffleConvs_1_Downs_2_ce0 = grp_subconv_1x1_16p_p_fu_14006_ShuffleConvs_1_Downs_2_ce0.read();
    } else {
        ShuffleConvs_1_Downs_2_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_2_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        ShuffleConvs_1_Downs_2_ce1 = grp_subconv_1x1_16p_p_fu_14006_ShuffleConvs_1_Downs_2_ce1.read();
    } else {
        ShuffleConvs_1_Downs_2_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_2_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        ShuffleConvs_1_Downs_2_we0 = grp_subconv_1x1_16p_p_fu_14006_ShuffleConvs_1_Downs_2_we0.read();
    } else {
        ShuffleConvs_1_Downs_2_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_2_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        ShuffleConvs_1_Downs_2_we1 = grp_subconv_1x1_16p_p_fu_14006_ShuffleConvs_1_Downs_2_we1.read();
    } else {
        ShuffleConvs_1_Downs_2_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state425.read())) {
        ShuffleConvs_1_Downs_3_address0 = grp_subconv_3x3_16_strid_1_fu_14566_ShuffleConvs_1_Downs_3_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        ShuffleConvs_1_Downs_3_address0 = grp_subconv_1x1_16p_p_fu_14006_ShuffleConvs_1_Downs_3_address0.read();
    } else {
        ShuffleConvs_1_Downs_3_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state425.read())) {
        ShuffleConvs_1_Downs_3_ce0 = grp_subconv_3x3_16_strid_1_fu_14566_ShuffleConvs_1_Downs_3_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        ShuffleConvs_1_Downs_3_ce0 = grp_subconv_1x1_16p_p_fu_14006_ShuffleConvs_1_Downs_3_ce0.read();
    } else {
        ShuffleConvs_1_Downs_3_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_3_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        ShuffleConvs_1_Downs_3_ce1 = grp_subconv_1x1_16p_p_fu_14006_ShuffleConvs_1_Downs_3_ce1.read();
    } else {
        ShuffleConvs_1_Downs_3_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_3_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        ShuffleConvs_1_Downs_3_we0 = grp_subconv_1x1_16p_p_fu_14006_ShuffleConvs_1_Downs_3_we0.read();
    } else {
        ShuffleConvs_1_Downs_3_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_3_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        ShuffleConvs_1_Downs_3_we1 = grp_subconv_1x1_16p_p_fu_14006_ShuffleConvs_1_Downs_3_we1.read();
    } else {
        ShuffleConvs_1_Downs_3_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state425.read())) {
        ShuffleConvs_1_Downs_4_address0 = grp_subconv_3x3_16_strid_1_fu_14566_ShuffleConvs_1_Downs_4_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        ShuffleConvs_1_Downs_4_address0 = grp_subconv_1x1_16p_p_fu_14006_ShuffleConvs_1_Downs_4_address0.read();
    } else {
        ShuffleConvs_1_Downs_4_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state425.read())) {
        ShuffleConvs_1_Downs_4_ce0 = grp_subconv_3x3_16_strid_1_fu_14566_ShuffleConvs_1_Downs_4_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        ShuffleConvs_1_Downs_4_ce0 = grp_subconv_1x1_16p_p_fu_14006_ShuffleConvs_1_Downs_4_ce0.read();
    } else {
        ShuffleConvs_1_Downs_4_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_4_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        ShuffleConvs_1_Downs_4_ce1 = grp_subconv_1x1_16p_p_fu_14006_ShuffleConvs_1_Downs_4_ce1.read();
    } else {
        ShuffleConvs_1_Downs_4_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_4_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        ShuffleConvs_1_Downs_4_we0 = grp_subconv_1x1_16p_p_fu_14006_ShuffleConvs_1_Downs_4_we0.read();
    } else {
        ShuffleConvs_1_Downs_4_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_4_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        ShuffleConvs_1_Downs_4_we1 = grp_subconv_1x1_16p_p_fu_14006_ShuffleConvs_1_Downs_4_we1.read();
    } else {
        ShuffleConvs_1_Downs_4_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state425.read())) {
        ShuffleConvs_1_Downs_5_address0 = grp_subconv_3x3_16_strid_1_fu_14566_ShuffleConvs_1_Downs_5_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        ShuffleConvs_1_Downs_5_address0 = grp_subconv_1x1_16p_p_fu_14006_ShuffleConvs_1_Downs_5_address0.read();
    } else {
        ShuffleConvs_1_Downs_5_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state425.read())) {
        ShuffleConvs_1_Downs_5_ce0 = grp_subconv_3x3_16_strid_1_fu_14566_ShuffleConvs_1_Downs_5_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        ShuffleConvs_1_Downs_5_ce0 = grp_subconv_1x1_16p_p_fu_14006_ShuffleConvs_1_Downs_5_ce0.read();
    } else {
        ShuffleConvs_1_Downs_5_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_5_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        ShuffleConvs_1_Downs_5_ce1 = grp_subconv_1x1_16p_p_fu_14006_ShuffleConvs_1_Downs_5_ce1.read();
    } else {
        ShuffleConvs_1_Downs_5_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_5_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        ShuffleConvs_1_Downs_5_we0 = grp_subconv_1x1_16p_p_fu_14006_ShuffleConvs_1_Downs_5_we0.read();
    } else {
        ShuffleConvs_1_Downs_5_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_5_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        ShuffleConvs_1_Downs_5_we1 = grp_subconv_1x1_16p_p_fu_14006_ShuffleConvs_1_Downs_5_we1.read();
    } else {
        ShuffleConvs_1_Downs_5_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state425.read())) {
        ShuffleConvs_1_Downs_6_address0 = grp_subconv_3x3_16_strid_1_fu_14566_ShuffleConvs_1_Downs_6_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        ShuffleConvs_1_Downs_6_address0 = grp_subconv_1x1_16p_p_fu_14006_ShuffleConvs_1_Downs_6_address0.read();
    } else {
        ShuffleConvs_1_Downs_6_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state425.read())) {
        ShuffleConvs_1_Downs_6_ce0 = grp_subconv_3x3_16_strid_1_fu_14566_ShuffleConvs_1_Downs_6_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        ShuffleConvs_1_Downs_6_ce0 = grp_subconv_1x1_16p_p_fu_14006_ShuffleConvs_1_Downs_6_ce0.read();
    } else {
        ShuffleConvs_1_Downs_6_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_6_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        ShuffleConvs_1_Downs_6_ce1 = grp_subconv_1x1_16p_p_fu_14006_ShuffleConvs_1_Downs_6_ce1.read();
    } else {
        ShuffleConvs_1_Downs_6_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_6_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        ShuffleConvs_1_Downs_6_we0 = grp_subconv_1x1_16p_p_fu_14006_ShuffleConvs_1_Downs_6_we0.read();
    } else {
        ShuffleConvs_1_Downs_6_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_6_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        ShuffleConvs_1_Downs_6_we1 = grp_subconv_1x1_16p_p_fu_14006_ShuffleConvs_1_Downs_6_we1.read();
    } else {
        ShuffleConvs_1_Downs_6_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_7_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state425.read())) {
        ShuffleConvs_1_Downs_7_address0 = grp_subconv_3x3_16_strid_1_fu_14566_ShuffleConvs_1_Downs_7_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        ShuffleConvs_1_Downs_7_address0 = grp_subconv_1x1_16p_p_fu_14006_ShuffleConvs_1_Downs_7_address0.read();
    } else {
        ShuffleConvs_1_Downs_7_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_7_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state425.read())) {
        ShuffleConvs_1_Downs_7_ce0 = grp_subconv_3x3_16_strid_1_fu_14566_ShuffleConvs_1_Downs_7_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        ShuffleConvs_1_Downs_7_ce0 = grp_subconv_1x1_16p_p_fu_14006_ShuffleConvs_1_Downs_7_ce0.read();
    } else {
        ShuffleConvs_1_Downs_7_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_7_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        ShuffleConvs_1_Downs_7_ce1 = grp_subconv_1x1_16p_p_fu_14006_ShuffleConvs_1_Downs_7_ce1.read();
    } else {
        ShuffleConvs_1_Downs_7_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_7_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        ShuffleConvs_1_Downs_7_we0 = grp_subconv_1x1_16p_p_fu_14006_ShuffleConvs_1_Downs_7_we0.read();
    } else {
        ShuffleConvs_1_Downs_7_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_7_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        ShuffleConvs_1_Downs_7_we1 = grp_subconv_1x1_16p_p_fu_14006_ShuffleConvs_1_Downs_7_we1.read();
    } else {
        ShuffleConvs_1_Downs_7_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_8_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state425.read())) {
        ShuffleConvs_1_Downs_8_address0 = grp_subconv_3x3_16_strid_1_fu_14566_ShuffleConvs_1_Downs_8_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        ShuffleConvs_1_Downs_8_address0 = grp_subconv_1x1_16p_p_fu_14006_ShuffleConvs_1_Downs_8_address0.read();
    } else {
        ShuffleConvs_1_Downs_8_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_8_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state425.read())) {
        ShuffleConvs_1_Downs_8_ce0 = grp_subconv_3x3_16_strid_1_fu_14566_ShuffleConvs_1_Downs_8_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        ShuffleConvs_1_Downs_8_ce0 = grp_subconv_1x1_16p_p_fu_14006_ShuffleConvs_1_Downs_8_ce0.read();
    } else {
        ShuffleConvs_1_Downs_8_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_8_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        ShuffleConvs_1_Downs_8_ce1 = grp_subconv_1x1_16p_p_fu_14006_ShuffleConvs_1_Downs_8_ce1.read();
    } else {
        ShuffleConvs_1_Downs_8_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_8_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        ShuffleConvs_1_Downs_8_we0 = grp_subconv_1x1_16p_p_fu_14006_ShuffleConvs_1_Downs_8_we0.read();
    } else {
        ShuffleConvs_1_Downs_8_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_8_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        ShuffleConvs_1_Downs_8_we1 = grp_subconv_1x1_16p_p_fu_14006_ShuffleConvs_1_Downs_8_we1.read();
    } else {
        ShuffleConvs_1_Downs_8_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_9_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state425.read())) {
        ShuffleConvs_1_Downs_9_address0 = grp_subconv_3x3_16_strid_1_fu_14566_ShuffleConvs_1_Downs_9_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        ShuffleConvs_1_Downs_9_address0 = grp_subconv_1x1_16p_p_fu_14006_ShuffleConvs_1_Downs_9_address0.read();
    } else {
        ShuffleConvs_1_Downs_9_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_9_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state425.read())) {
        ShuffleConvs_1_Downs_9_ce0 = grp_subconv_3x3_16_strid_1_fu_14566_ShuffleConvs_1_Downs_9_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        ShuffleConvs_1_Downs_9_ce0 = grp_subconv_1x1_16p_p_fu_14006_ShuffleConvs_1_Downs_9_ce0.read();
    } else {
        ShuffleConvs_1_Downs_9_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_9_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        ShuffleConvs_1_Downs_9_ce1 = grp_subconv_1x1_16p_p_fu_14006_ShuffleConvs_1_Downs_9_ce1.read();
    } else {
        ShuffleConvs_1_Downs_9_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_9_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        ShuffleConvs_1_Downs_9_we0 = grp_subconv_1x1_16p_p_fu_14006_ShuffleConvs_1_Downs_9_we0.read();
    } else {
        ShuffleConvs_1_Downs_9_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_9_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        ShuffleConvs_1_Downs_9_we1 = grp_subconv_1x1_16p_p_fu_14006_ShuffleConvs_1_Downs_9_we1.read();
    } else {
        ShuffleConvs_1_Downs_9_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state425.read())) {
        ShuffleConvs_1_Downs_address0 = grp_subconv_3x3_16_strid_1_fu_14566_ShuffleConvs_1_Downs_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        ShuffleConvs_1_Downs_address0 = grp_subconv_1x1_16p_p_fu_14006_ShuffleConvs_1_Downs_address0.read();
    } else {
        ShuffleConvs_1_Downs_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state425.read())) {
        ShuffleConvs_1_Downs_ce0 = grp_subconv_3x3_16_strid_1_fu_14566_ShuffleConvs_1_Downs_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        ShuffleConvs_1_Downs_ce0 = grp_subconv_1x1_16p_p_fu_14006_ShuffleConvs_1_Downs_ce0.read();
    } else {
        ShuffleConvs_1_Downs_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        ShuffleConvs_1_Downs_ce1 = grp_subconv_1x1_16p_p_fu_14006_ShuffleConvs_1_Downs_ce1.read();
    } else {
        ShuffleConvs_1_Downs_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        ShuffleConvs_1_Downs_we0 = grp_subconv_1x1_16p_p_fu_14006_ShuffleConvs_1_Downs_we0.read();
    } else {
        ShuffleConvs_1_Downs_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        ShuffleConvs_1_Downs_we1 = grp_subconv_1x1_16p_p_fu_14006_ShuffleConvs_1_Downs_we1.read();
    } else {
        ShuffleConvs_1_Downs_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_10_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1333.read())) {
        ShuffleConvs_2_Downs_10_address0 = grp_subconv_3x3_8_stride_1_fu_14508_ShuffleConvs_2_Downs_10_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        ShuffleConvs_2_Downs_10_address0 = grp_subconv_1x1_8p_p_fu_13798_ShuffleConvs_2_Downs_10_address0.read();
    } else {
        ShuffleConvs_2_Downs_10_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_10_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1333.read())) {
        ShuffleConvs_2_Downs_10_ce0 = grp_subconv_3x3_8_stride_1_fu_14508_ShuffleConvs_2_Downs_10_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        ShuffleConvs_2_Downs_10_ce0 = grp_subconv_1x1_8p_p_fu_13798_ShuffleConvs_2_Downs_10_ce0.read();
    } else {
        ShuffleConvs_2_Downs_10_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_10_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        ShuffleConvs_2_Downs_10_ce1 = grp_subconv_1x1_8p_p_fu_13798_ShuffleConvs_2_Downs_10_ce1.read();
    } else {
        ShuffleConvs_2_Downs_10_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_10_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        ShuffleConvs_2_Downs_10_we0 = grp_subconv_1x1_8p_p_fu_13798_ShuffleConvs_2_Downs_10_we0.read();
    } else {
        ShuffleConvs_2_Downs_10_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_10_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        ShuffleConvs_2_Downs_10_we1 = grp_subconv_1x1_8p_p_fu_13798_ShuffleConvs_2_Downs_10_we1.read();
    } else {
        ShuffleConvs_2_Downs_10_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_11_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1333.read())) {
        ShuffleConvs_2_Downs_11_address0 = grp_subconv_3x3_8_stride_1_fu_14508_ShuffleConvs_2_Downs_11_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        ShuffleConvs_2_Downs_11_address0 = grp_subconv_1x1_8p_p_fu_13798_ShuffleConvs_2_Downs_11_address0.read();
    } else {
        ShuffleConvs_2_Downs_11_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_11_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1333.read())) {
        ShuffleConvs_2_Downs_11_ce0 = grp_subconv_3x3_8_stride_1_fu_14508_ShuffleConvs_2_Downs_11_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        ShuffleConvs_2_Downs_11_ce0 = grp_subconv_1x1_8p_p_fu_13798_ShuffleConvs_2_Downs_11_ce0.read();
    } else {
        ShuffleConvs_2_Downs_11_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_11_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        ShuffleConvs_2_Downs_11_ce1 = grp_subconv_1x1_8p_p_fu_13798_ShuffleConvs_2_Downs_11_ce1.read();
    } else {
        ShuffleConvs_2_Downs_11_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_11_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        ShuffleConvs_2_Downs_11_we0 = grp_subconv_1x1_8p_p_fu_13798_ShuffleConvs_2_Downs_11_we0.read();
    } else {
        ShuffleConvs_2_Downs_11_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_11_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        ShuffleConvs_2_Downs_11_we1 = grp_subconv_1x1_8p_p_fu_13798_ShuffleConvs_2_Downs_11_we1.read();
    } else {
        ShuffleConvs_2_Downs_11_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_12_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1333.read())) {
        ShuffleConvs_2_Downs_12_address0 = grp_subconv_3x3_8_stride_1_fu_14508_ShuffleConvs_2_Downs_12_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        ShuffleConvs_2_Downs_12_address0 = grp_subconv_1x1_8p_p_fu_13798_ShuffleConvs_2_Downs_12_address0.read();
    } else {
        ShuffleConvs_2_Downs_12_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_12_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1333.read())) {
        ShuffleConvs_2_Downs_12_ce0 = grp_subconv_3x3_8_stride_1_fu_14508_ShuffleConvs_2_Downs_12_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        ShuffleConvs_2_Downs_12_ce0 = grp_subconv_1x1_8p_p_fu_13798_ShuffleConvs_2_Downs_12_ce0.read();
    } else {
        ShuffleConvs_2_Downs_12_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_12_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        ShuffleConvs_2_Downs_12_ce1 = grp_subconv_1x1_8p_p_fu_13798_ShuffleConvs_2_Downs_12_ce1.read();
    } else {
        ShuffleConvs_2_Downs_12_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_12_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        ShuffleConvs_2_Downs_12_we0 = grp_subconv_1x1_8p_p_fu_13798_ShuffleConvs_2_Downs_12_we0.read();
    } else {
        ShuffleConvs_2_Downs_12_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_12_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        ShuffleConvs_2_Downs_12_we1 = grp_subconv_1x1_8p_p_fu_13798_ShuffleConvs_2_Downs_12_we1.read();
    } else {
        ShuffleConvs_2_Downs_12_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_13_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1333.read())) {
        ShuffleConvs_2_Downs_13_address0 = grp_subconv_3x3_8_stride_1_fu_14508_ShuffleConvs_2_Downs_13_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        ShuffleConvs_2_Downs_13_address0 = grp_subconv_1x1_8p_p_fu_13798_ShuffleConvs_2_Downs_13_address0.read();
    } else {
        ShuffleConvs_2_Downs_13_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_13_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1333.read())) {
        ShuffleConvs_2_Downs_13_ce0 = grp_subconv_3x3_8_stride_1_fu_14508_ShuffleConvs_2_Downs_13_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        ShuffleConvs_2_Downs_13_ce0 = grp_subconv_1x1_8p_p_fu_13798_ShuffleConvs_2_Downs_13_ce0.read();
    } else {
        ShuffleConvs_2_Downs_13_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_13_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        ShuffleConvs_2_Downs_13_ce1 = grp_subconv_1x1_8p_p_fu_13798_ShuffleConvs_2_Downs_13_ce1.read();
    } else {
        ShuffleConvs_2_Downs_13_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_13_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        ShuffleConvs_2_Downs_13_we0 = grp_subconv_1x1_8p_p_fu_13798_ShuffleConvs_2_Downs_13_we0.read();
    } else {
        ShuffleConvs_2_Downs_13_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_13_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        ShuffleConvs_2_Downs_13_we1 = grp_subconv_1x1_8p_p_fu_13798_ShuffleConvs_2_Downs_13_we1.read();
    } else {
        ShuffleConvs_2_Downs_13_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_14_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1333.read())) {
        ShuffleConvs_2_Downs_14_address0 = grp_subconv_3x3_8_stride_1_fu_14508_ShuffleConvs_2_Downs_14_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        ShuffleConvs_2_Downs_14_address0 = grp_subconv_1x1_8p_p_fu_13798_ShuffleConvs_2_Downs_14_address0.read();
    } else {
        ShuffleConvs_2_Downs_14_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_14_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1333.read())) {
        ShuffleConvs_2_Downs_14_ce0 = grp_subconv_3x3_8_stride_1_fu_14508_ShuffleConvs_2_Downs_14_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        ShuffleConvs_2_Downs_14_ce0 = grp_subconv_1x1_8p_p_fu_13798_ShuffleConvs_2_Downs_14_ce0.read();
    } else {
        ShuffleConvs_2_Downs_14_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_14_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        ShuffleConvs_2_Downs_14_ce1 = grp_subconv_1x1_8p_p_fu_13798_ShuffleConvs_2_Downs_14_ce1.read();
    } else {
        ShuffleConvs_2_Downs_14_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_14_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        ShuffleConvs_2_Downs_14_we0 = grp_subconv_1x1_8p_p_fu_13798_ShuffleConvs_2_Downs_14_we0.read();
    } else {
        ShuffleConvs_2_Downs_14_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_14_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        ShuffleConvs_2_Downs_14_we1 = grp_subconv_1x1_8p_p_fu_13798_ShuffleConvs_2_Downs_14_we1.read();
    } else {
        ShuffleConvs_2_Downs_14_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_15_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1333.read())) {
        ShuffleConvs_2_Downs_15_address0 = grp_subconv_3x3_8_stride_1_fu_14508_ShuffleConvs_2_Downs_15_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        ShuffleConvs_2_Downs_15_address0 = grp_subconv_1x1_8p_p_fu_13798_ShuffleConvs_2_Downs_15_address0.read();
    } else {
        ShuffleConvs_2_Downs_15_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_15_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1333.read())) {
        ShuffleConvs_2_Downs_15_ce0 = grp_subconv_3x3_8_stride_1_fu_14508_ShuffleConvs_2_Downs_15_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        ShuffleConvs_2_Downs_15_ce0 = grp_subconv_1x1_8p_p_fu_13798_ShuffleConvs_2_Downs_15_ce0.read();
    } else {
        ShuffleConvs_2_Downs_15_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_15_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        ShuffleConvs_2_Downs_15_ce1 = grp_subconv_1x1_8p_p_fu_13798_ShuffleConvs_2_Downs_15_ce1.read();
    } else {
        ShuffleConvs_2_Downs_15_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_15_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        ShuffleConvs_2_Downs_15_we0 = grp_subconv_1x1_8p_p_fu_13798_ShuffleConvs_2_Downs_15_we0.read();
    } else {
        ShuffleConvs_2_Downs_15_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_15_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        ShuffleConvs_2_Downs_15_we1 = grp_subconv_1x1_8p_p_fu_13798_ShuffleConvs_2_Downs_15_we1.read();
    } else {
        ShuffleConvs_2_Downs_15_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_16_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1333.read())) {
        ShuffleConvs_2_Downs_16_address0 = grp_subconv_3x3_8_stride_1_fu_14508_ShuffleConvs_2_Downs_16_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        ShuffleConvs_2_Downs_16_address0 = grp_subconv_1x1_8p_p_fu_13798_ShuffleConvs_2_Downs_16_address0.read();
    } else {
        ShuffleConvs_2_Downs_16_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_16_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1333.read())) {
        ShuffleConvs_2_Downs_16_ce0 = grp_subconv_3x3_8_stride_1_fu_14508_ShuffleConvs_2_Downs_16_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        ShuffleConvs_2_Downs_16_ce0 = grp_subconv_1x1_8p_p_fu_13798_ShuffleConvs_2_Downs_16_ce0.read();
    } else {
        ShuffleConvs_2_Downs_16_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_16_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        ShuffleConvs_2_Downs_16_ce1 = grp_subconv_1x1_8p_p_fu_13798_ShuffleConvs_2_Downs_16_ce1.read();
    } else {
        ShuffleConvs_2_Downs_16_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_16_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        ShuffleConvs_2_Downs_16_we0 = grp_subconv_1x1_8p_p_fu_13798_ShuffleConvs_2_Downs_16_we0.read();
    } else {
        ShuffleConvs_2_Downs_16_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_16_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        ShuffleConvs_2_Downs_16_we1 = grp_subconv_1x1_8p_p_fu_13798_ShuffleConvs_2_Downs_16_we1.read();
    } else {
        ShuffleConvs_2_Downs_16_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_17_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1333.read())) {
        ShuffleConvs_2_Downs_17_address0 = grp_subconv_3x3_8_stride_1_fu_14508_ShuffleConvs_2_Downs_17_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        ShuffleConvs_2_Downs_17_address0 = grp_subconv_1x1_8p_p_fu_13798_ShuffleConvs_2_Downs_17_address0.read();
    } else {
        ShuffleConvs_2_Downs_17_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_17_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1333.read())) {
        ShuffleConvs_2_Downs_17_ce0 = grp_subconv_3x3_8_stride_1_fu_14508_ShuffleConvs_2_Downs_17_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        ShuffleConvs_2_Downs_17_ce0 = grp_subconv_1x1_8p_p_fu_13798_ShuffleConvs_2_Downs_17_ce0.read();
    } else {
        ShuffleConvs_2_Downs_17_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_17_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        ShuffleConvs_2_Downs_17_ce1 = grp_subconv_1x1_8p_p_fu_13798_ShuffleConvs_2_Downs_17_ce1.read();
    } else {
        ShuffleConvs_2_Downs_17_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_17_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        ShuffleConvs_2_Downs_17_we0 = grp_subconv_1x1_8p_p_fu_13798_ShuffleConvs_2_Downs_17_we0.read();
    } else {
        ShuffleConvs_2_Downs_17_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_17_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        ShuffleConvs_2_Downs_17_we1 = grp_subconv_1x1_8p_p_fu_13798_ShuffleConvs_2_Downs_17_we1.read();
    } else {
        ShuffleConvs_2_Downs_17_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_18_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1333.read())) {
        ShuffleConvs_2_Downs_18_address0 = grp_subconv_3x3_8_stride_1_fu_14508_ShuffleConvs_2_Downs_18_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        ShuffleConvs_2_Downs_18_address0 = grp_subconv_1x1_8p_p_fu_13798_ShuffleConvs_2_Downs_18_address0.read();
    } else {
        ShuffleConvs_2_Downs_18_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_18_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1333.read())) {
        ShuffleConvs_2_Downs_18_ce0 = grp_subconv_3x3_8_stride_1_fu_14508_ShuffleConvs_2_Downs_18_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        ShuffleConvs_2_Downs_18_ce0 = grp_subconv_1x1_8p_p_fu_13798_ShuffleConvs_2_Downs_18_ce0.read();
    } else {
        ShuffleConvs_2_Downs_18_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_18_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        ShuffleConvs_2_Downs_18_ce1 = grp_subconv_1x1_8p_p_fu_13798_ShuffleConvs_2_Downs_18_ce1.read();
    } else {
        ShuffleConvs_2_Downs_18_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_18_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        ShuffleConvs_2_Downs_18_we0 = grp_subconv_1x1_8p_p_fu_13798_ShuffleConvs_2_Downs_18_we0.read();
    } else {
        ShuffleConvs_2_Downs_18_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_18_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        ShuffleConvs_2_Downs_18_we1 = grp_subconv_1x1_8p_p_fu_13798_ShuffleConvs_2_Downs_18_we1.read();
    } else {
        ShuffleConvs_2_Downs_18_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_19_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1333.read())) {
        ShuffleConvs_2_Downs_19_address0 = grp_subconv_3x3_8_stride_1_fu_14508_ShuffleConvs_2_Downs_19_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        ShuffleConvs_2_Downs_19_address0 = grp_subconv_1x1_8p_p_fu_13798_ShuffleConvs_2_Downs_19_address0.read();
    } else {
        ShuffleConvs_2_Downs_19_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_19_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1333.read())) {
        ShuffleConvs_2_Downs_19_ce0 = grp_subconv_3x3_8_stride_1_fu_14508_ShuffleConvs_2_Downs_19_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        ShuffleConvs_2_Downs_19_ce0 = grp_subconv_1x1_8p_p_fu_13798_ShuffleConvs_2_Downs_19_ce0.read();
    } else {
        ShuffleConvs_2_Downs_19_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_19_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        ShuffleConvs_2_Downs_19_ce1 = grp_subconv_1x1_8p_p_fu_13798_ShuffleConvs_2_Downs_19_ce1.read();
    } else {
        ShuffleConvs_2_Downs_19_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_19_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        ShuffleConvs_2_Downs_19_we0 = grp_subconv_1x1_8p_p_fu_13798_ShuffleConvs_2_Downs_19_we0.read();
    } else {
        ShuffleConvs_2_Downs_19_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_19_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        ShuffleConvs_2_Downs_19_we1 = grp_subconv_1x1_8p_p_fu_13798_ShuffleConvs_2_Downs_19_we1.read();
    } else {
        ShuffleConvs_2_Downs_19_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1333.read())) {
        ShuffleConvs_2_Downs_1_address0 = grp_subconv_3x3_8_stride_1_fu_14508_ShuffleConvs_2_Downs_1_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        ShuffleConvs_2_Downs_1_address0 = grp_subconv_1x1_8p_p_fu_13798_ShuffleConvs_2_Downs_1_address0.read();
    } else {
        ShuffleConvs_2_Downs_1_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1333.read())) {
        ShuffleConvs_2_Downs_1_ce0 = grp_subconv_3x3_8_stride_1_fu_14508_ShuffleConvs_2_Downs_1_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        ShuffleConvs_2_Downs_1_ce0 = grp_subconv_1x1_8p_p_fu_13798_ShuffleConvs_2_Downs_1_ce0.read();
    } else {
        ShuffleConvs_2_Downs_1_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_1_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        ShuffleConvs_2_Downs_1_ce1 = grp_subconv_1x1_8p_p_fu_13798_ShuffleConvs_2_Downs_1_ce1.read();
    } else {
        ShuffleConvs_2_Downs_1_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_1_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        ShuffleConvs_2_Downs_1_we0 = grp_subconv_1x1_8p_p_fu_13798_ShuffleConvs_2_Downs_1_we0.read();
    } else {
        ShuffleConvs_2_Downs_1_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_1_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        ShuffleConvs_2_Downs_1_we1 = grp_subconv_1x1_8p_p_fu_13798_ShuffleConvs_2_Downs_1_we1.read();
    } else {
        ShuffleConvs_2_Downs_1_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_20_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1333.read())) {
        ShuffleConvs_2_Downs_20_address0 = grp_subconv_3x3_8_stride_1_fu_14508_ShuffleConvs_2_Downs_20_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        ShuffleConvs_2_Downs_20_address0 = grp_subconv_1x1_8p_p_fu_13798_ShuffleConvs_2_Downs_20_address0.read();
    } else {
        ShuffleConvs_2_Downs_20_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_20_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1333.read())) {
        ShuffleConvs_2_Downs_20_ce0 = grp_subconv_3x3_8_stride_1_fu_14508_ShuffleConvs_2_Downs_20_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        ShuffleConvs_2_Downs_20_ce0 = grp_subconv_1x1_8p_p_fu_13798_ShuffleConvs_2_Downs_20_ce0.read();
    } else {
        ShuffleConvs_2_Downs_20_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_20_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        ShuffleConvs_2_Downs_20_ce1 = grp_subconv_1x1_8p_p_fu_13798_ShuffleConvs_2_Downs_20_ce1.read();
    } else {
        ShuffleConvs_2_Downs_20_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_20_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        ShuffleConvs_2_Downs_20_we0 = grp_subconv_1x1_8p_p_fu_13798_ShuffleConvs_2_Downs_20_we0.read();
    } else {
        ShuffleConvs_2_Downs_20_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_20_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        ShuffleConvs_2_Downs_20_we1 = grp_subconv_1x1_8p_p_fu_13798_ShuffleConvs_2_Downs_20_we1.read();
    } else {
        ShuffleConvs_2_Downs_20_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_21_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1333.read())) {
        ShuffleConvs_2_Downs_21_address0 = grp_subconv_3x3_8_stride_1_fu_14508_ShuffleConvs_2_Downs_21_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        ShuffleConvs_2_Downs_21_address0 = grp_subconv_1x1_8p_p_fu_13798_ShuffleConvs_2_Downs_21_address0.read();
    } else {
        ShuffleConvs_2_Downs_21_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_21_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1333.read())) {
        ShuffleConvs_2_Downs_21_ce0 = grp_subconv_3x3_8_stride_1_fu_14508_ShuffleConvs_2_Downs_21_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        ShuffleConvs_2_Downs_21_ce0 = grp_subconv_1x1_8p_p_fu_13798_ShuffleConvs_2_Downs_21_ce0.read();
    } else {
        ShuffleConvs_2_Downs_21_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_21_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        ShuffleConvs_2_Downs_21_ce1 = grp_subconv_1x1_8p_p_fu_13798_ShuffleConvs_2_Downs_21_ce1.read();
    } else {
        ShuffleConvs_2_Downs_21_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_21_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        ShuffleConvs_2_Downs_21_we0 = grp_subconv_1x1_8p_p_fu_13798_ShuffleConvs_2_Downs_21_we0.read();
    } else {
        ShuffleConvs_2_Downs_21_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_21_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        ShuffleConvs_2_Downs_21_we1 = grp_subconv_1x1_8p_p_fu_13798_ShuffleConvs_2_Downs_21_we1.read();
    } else {
        ShuffleConvs_2_Downs_21_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_22_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1333.read())) {
        ShuffleConvs_2_Downs_22_address0 = grp_subconv_3x3_8_stride_1_fu_14508_ShuffleConvs_2_Downs_22_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        ShuffleConvs_2_Downs_22_address0 = grp_subconv_1x1_8p_p_fu_13798_ShuffleConvs_2_Downs_22_address0.read();
    } else {
        ShuffleConvs_2_Downs_22_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_22_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1333.read())) {
        ShuffleConvs_2_Downs_22_ce0 = grp_subconv_3x3_8_stride_1_fu_14508_ShuffleConvs_2_Downs_22_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        ShuffleConvs_2_Downs_22_ce0 = grp_subconv_1x1_8p_p_fu_13798_ShuffleConvs_2_Downs_22_ce0.read();
    } else {
        ShuffleConvs_2_Downs_22_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_22_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        ShuffleConvs_2_Downs_22_ce1 = grp_subconv_1x1_8p_p_fu_13798_ShuffleConvs_2_Downs_22_ce1.read();
    } else {
        ShuffleConvs_2_Downs_22_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_22_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        ShuffleConvs_2_Downs_22_we0 = grp_subconv_1x1_8p_p_fu_13798_ShuffleConvs_2_Downs_22_we0.read();
    } else {
        ShuffleConvs_2_Downs_22_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_22_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        ShuffleConvs_2_Downs_22_we1 = grp_subconv_1x1_8p_p_fu_13798_ShuffleConvs_2_Downs_22_we1.read();
    } else {
        ShuffleConvs_2_Downs_22_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_23_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1333.read())) {
        ShuffleConvs_2_Downs_23_address0 = grp_subconv_3x3_8_stride_1_fu_14508_ShuffleConvs_2_Downs_23_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        ShuffleConvs_2_Downs_23_address0 = grp_subconv_1x1_8p_p_fu_13798_ShuffleConvs_2_Downs_23_address0.read();
    } else {
        ShuffleConvs_2_Downs_23_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_23_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1333.read())) {
        ShuffleConvs_2_Downs_23_ce0 = grp_subconv_3x3_8_stride_1_fu_14508_ShuffleConvs_2_Downs_23_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        ShuffleConvs_2_Downs_23_ce0 = grp_subconv_1x1_8p_p_fu_13798_ShuffleConvs_2_Downs_23_ce0.read();
    } else {
        ShuffleConvs_2_Downs_23_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_23_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        ShuffleConvs_2_Downs_23_ce1 = grp_subconv_1x1_8p_p_fu_13798_ShuffleConvs_2_Downs_23_ce1.read();
    } else {
        ShuffleConvs_2_Downs_23_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_23_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        ShuffleConvs_2_Downs_23_we0 = grp_subconv_1x1_8p_p_fu_13798_ShuffleConvs_2_Downs_23_we0.read();
    } else {
        ShuffleConvs_2_Downs_23_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_23_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        ShuffleConvs_2_Downs_23_we1 = grp_subconv_1x1_8p_p_fu_13798_ShuffleConvs_2_Downs_23_we1.read();
    } else {
        ShuffleConvs_2_Downs_23_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1333.read())) {
        ShuffleConvs_2_Downs_2_address0 = grp_subconv_3x3_8_stride_1_fu_14508_ShuffleConvs_2_Downs_2_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        ShuffleConvs_2_Downs_2_address0 = grp_subconv_1x1_8p_p_fu_13798_ShuffleConvs_2_Downs_2_address0.read();
    } else {
        ShuffleConvs_2_Downs_2_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1333.read())) {
        ShuffleConvs_2_Downs_2_ce0 = grp_subconv_3x3_8_stride_1_fu_14508_ShuffleConvs_2_Downs_2_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        ShuffleConvs_2_Downs_2_ce0 = grp_subconv_1x1_8p_p_fu_13798_ShuffleConvs_2_Downs_2_ce0.read();
    } else {
        ShuffleConvs_2_Downs_2_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_2_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        ShuffleConvs_2_Downs_2_ce1 = grp_subconv_1x1_8p_p_fu_13798_ShuffleConvs_2_Downs_2_ce1.read();
    } else {
        ShuffleConvs_2_Downs_2_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_2_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        ShuffleConvs_2_Downs_2_we0 = grp_subconv_1x1_8p_p_fu_13798_ShuffleConvs_2_Downs_2_we0.read();
    } else {
        ShuffleConvs_2_Downs_2_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_2_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        ShuffleConvs_2_Downs_2_we1 = grp_subconv_1x1_8p_p_fu_13798_ShuffleConvs_2_Downs_2_we1.read();
    } else {
        ShuffleConvs_2_Downs_2_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1333.read())) {
        ShuffleConvs_2_Downs_3_address0 = grp_subconv_3x3_8_stride_1_fu_14508_ShuffleConvs_2_Downs_3_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        ShuffleConvs_2_Downs_3_address0 = grp_subconv_1x1_8p_p_fu_13798_ShuffleConvs_2_Downs_3_address0.read();
    } else {
        ShuffleConvs_2_Downs_3_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1333.read())) {
        ShuffleConvs_2_Downs_3_ce0 = grp_subconv_3x3_8_stride_1_fu_14508_ShuffleConvs_2_Downs_3_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        ShuffleConvs_2_Downs_3_ce0 = grp_subconv_1x1_8p_p_fu_13798_ShuffleConvs_2_Downs_3_ce0.read();
    } else {
        ShuffleConvs_2_Downs_3_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_3_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        ShuffleConvs_2_Downs_3_ce1 = grp_subconv_1x1_8p_p_fu_13798_ShuffleConvs_2_Downs_3_ce1.read();
    } else {
        ShuffleConvs_2_Downs_3_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_3_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        ShuffleConvs_2_Downs_3_we0 = grp_subconv_1x1_8p_p_fu_13798_ShuffleConvs_2_Downs_3_we0.read();
    } else {
        ShuffleConvs_2_Downs_3_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_3_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        ShuffleConvs_2_Downs_3_we1 = grp_subconv_1x1_8p_p_fu_13798_ShuffleConvs_2_Downs_3_we1.read();
    } else {
        ShuffleConvs_2_Downs_3_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1333.read())) {
        ShuffleConvs_2_Downs_4_address0 = grp_subconv_3x3_8_stride_1_fu_14508_ShuffleConvs_2_Downs_4_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        ShuffleConvs_2_Downs_4_address0 = grp_subconv_1x1_8p_p_fu_13798_ShuffleConvs_2_Downs_4_address0.read();
    } else {
        ShuffleConvs_2_Downs_4_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1333.read())) {
        ShuffleConvs_2_Downs_4_ce0 = grp_subconv_3x3_8_stride_1_fu_14508_ShuffleConvs_2_Downs_4_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        ShuffleConvs_2_Downs_4_ce0 = grp_subconv_1x1_8p_p_fu_13798_ShuffleConvs_2_Downs_4_ce0.read();
    } else {
        ShuffleConvs_2_Downs_4_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_4_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        ShuffleConvs_2_Downs_4_ce1 = grp_subconv_1x1_8p_p_fu_13798_ShuffleConvs_2_Downs_4_ce1.read();
    } else {
        ShuffleConvs_2_Downs_4_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_4_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        ShuffleConvs_2_Downs_4_we0 = grp_subconv_1x1_8p_p_fu_13798_ShuffleConvs_2_Downs_4_we0.read();
    } else {
        ShuffleConvs_2_Downs_4_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_4_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        ShuffleConvs_2_Downs_4_we1 = grp_subconv_1x1_8p_p_fu_13798_ShuffleConvs_2_Downs_4_we1.read();
    } else {
        ShuffleConvs_2_Downs_4_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1333.read())) {
        ShuffleConvs_2_Downs_5_address0 = grp_subconv_3x3_8_stride_1_fu_14508_ShuffleConvs_2_Downs_5_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        ShuffleConvs_2_Downs_5_address0 = grp_subconv_1x1_8p_p_fu_13798_ShuffleConvs_2_Downs_5_address0.read();
    } else {
        ShuffleConvs_2_Downs_5_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1333.read())) {
        ShuffleConvs_2_Downs_5_ce0 = grp_subconv_3x3_8_stride_1_fu_14508_ShuffleConvs_2_Downs_5_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        ShuffleConvs_2_Downs_5_ce0 = grp_subconv_1x1_8p_p_fu_13798_ShuffleConvs_2_Downs_5_ce0.read();
    } else {
        ShuffleConvs_2_Downs_5_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_5_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        ShuffleConvs_2_Downs_5_ce1 = grp_subconv_1x1_8p_p_fu_13798_ShuffleConvs_2_Downs_5_ce1.read();
    } else {
        ShuffleConvs_2_Downs_5_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_5_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        ShuffleConvs_2_Downs_5_we0 = grp_subconv_1x1_8p_p_fu_13798_ShuffleConvs_2_Downs_5_we0.read();
    } else {
        ShuffleConvs_2_Downs_5_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_5_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        ShuffleConvs_2_Downs_5_we1 = grp_subconv_1x1_8p_p_fu_13798_ShuffleConvs_2_Downs_5_we1.read();
    } else {
        ShuffleConvs_2_Downs_5_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1333.read())) {
        ShuffleConvs_2_Downs_6_address0 = grp_subconv_3x3_8_stride_1_fu_14508_ShuffleConvs_2_Downs_6_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        ShuffleConvs_2_Downs_6_address0 = grp_subconv_1x1_8p_p_fu_13798_ShuffleConvs_2_Downs_6_address0.read();
    } else {
        ShuffleConvs_2_Downs_6_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1333.read())) {
        ShuffleConvs_2_Downs_6_ce0 = grp_subconv_3x3_8_stride_1_fu_14508_ShuffleConvs_2_Downs_6_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        ShuffleConvs_2_Downs_6_ce0 = grp_subconv_1x1_8p_p_fu_13798_ShuffleConvs_2_Downs_6_ce0.read();
    } else {
        ShuffleConvs_2_Downs_6_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_6_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        ShuffleConvs_2_Downs_6_ce1 = grp_subconv_1x1_8p_p_fu_13798_ShuffleConvs_2_Downs_6_ce1.read();
    } else {
        ShuffleConvs_2_Downs_6_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_6_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        ShuffleConvs_2_Downs_6_we0 = grp_subconv_1x1_8p_p_fu_13798_ShuffleConvs_2_Downs_6_we0.read();
    } else {
        ShuffleConvs_2_Downs_6_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_6_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        ShuffleConvs_2_Downs_6_we1 = grp_subconv_1x1_8p_p_fu_13798_ShuffleConvs_2_Downs_6_we1.read();
    } else {
        ShuffleConvs_2_Downs_6_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_7_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1333.read())) {
        ShuffleConvs_2_Downs_7_address0 = grp_subconv_3x3_8_stride_1_fu_14508_ShuffleConvs_2_Downs_7_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        ShuffleConvs_2_Downs_7_address0 = grp_subconv_1x1_8p_p_fu_13798_ShuffleConvs_2_Downs_7_address0.read();
    } else {
        ShuffleConvs_2_Downs_7_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_7_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1333.read())) {
        ShuffleConvs_2_Downs_7_ce0 = grp_subconv_3x3_8_stride_1_fu_14508_ShuffleConvs_2_Downs_7_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        ShuffleConvs_2_Downs_7_ce0 = grp_subconv_1x1_8p_p_fu_13798_ShuffleConvs_2_Downs_7_ce0.read();
    } else {
        ShuffleConvs_2_Downs_7_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_7_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        ShuffleConvs_2_Downs_7_ce1 = grp_subconv_1x1_8p_p_fu_13798_ShuffleConvs_2_Downs_7_ce1.read();
    } else {
        ShuffleConvs_2_Downs_7_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_7_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        ShuffleConvs_2_Downs_7_we0 = grp_subconv_1x1_8p_p_fu_13798_ShuffleConvs_2_Downs_7_we0.read();
    } else {
        ShuffleConvs_2_Downs_7_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_7_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        ShuffleConvs_2_Downs_7_we1 = grp_subconv_1x1_8p_p_fu_13798_ShuffleConvs_2_Downs_7_we1.read();
    } else {
        ShuffleConvs_2_Downs_7_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_8_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1333.read())) {
        ShuffleConvs_2_Downs_8_address0 = grp_subconv_3x3_8_stride_1_fu_14508_ShuffleConvs_2_Downs_8_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        ShuffleConvs_2_Downs_8_address0 = grp_subconv_1x1_8p_p_fu_13798_ShuffleConvs_2_Downs_8_address0.read();
    } else {
        ShuffleConvs_2_Downs_8_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_8_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1333.read())) {
        ShuffleConvs_2_Downs_8_ce0 = grp_subconv_3x3_8_stride_1_fu_14508_ShuffleConvs_2_Downs_8_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        ShuffleConvs_2_Downs_8_ce0 = grp_subconv_1x1_8p_p_fu_13798_ShuffleConvs_2_Downs_8_ce0.read();
    } else {
        ShuffleConvs_2_Downs_8_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_8_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        ShuffleConvs_2_Downs_8_ce1 = grp_subconv_1x1_8p_p_fu_13798_ShuffleConvs_2_Downs_8_ce1.read();
    } else {
        ShuffleConvs_2_Downs_8_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_8_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        ShuffleConvs_2_Downs_8_we0 = grp_subconv_1x1_8p_p_fu_13798_ShuffleConvs_2_Downs_8_we0.read();
    } else {
        ShuffleConvs_2_Downs_8_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_8_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        ShuffleConvs_2_Downs_8_we1 = grp_subconv_1x1_8p_p_fu_13798_ShuffleConvs_2_Downs_8_we1.read();
    } else {
        ShuffleConvs_2_Downs_8_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_9_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1333.read())) {
        ShuffleConvs_2_Downs_9_address0 = grp_subconv_3x3_8_stride_1_fu_14508_ShuffleConvs_2_Downs_9_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        ShuffleConvs_2_Downs_9_address0 = grp_subconv_1x1_8p_p_fu_13798_ShuffleConvs_2_Downs_9_address0.read();
    } else {
        ShuffleConvs_2_Downs_9_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_9_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1333.read())) {
        ShuffleConvs_2_Downs_9_ce0 = grp_subconv_3x3_8_stride_1_fu_14508_ShuffleConvs_2_Downs_9_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        ShuffleConvs_2_Downs_9_ce0 = grp_subconv_1x1_8p_p_fu_13798_ShuffleConvs_2_Downs_9_ce0.read();
    } else {
        ShuffleConvs_2_Downs_9_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_9_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        ShuffleConvs_2_Downs_9_ce1 = grp_subconv_1x1_8p_p_fu_13798_ShuffleConvs_2_Downs_9_ce1.read();
    } else {
        ShuffleConvs_2_Downs_9_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_9_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        ShuffleConvs_2_Downs_9_we0 = grp_subconv_1x1_8p_p_fu_13798_ShuffleConvs_2_Downs_9_we0.read();
    } else {
        ShuffleConvs_2_Downs_9_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_9_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        ShuffleConvs_2_Downs_9_we1 = grp_subconv_1x1_8p_p_fu_13798_ShuffleConvs_2_Downs_9_we1.read();
    } else {
        ShuffleConvs_2_Downs_9_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1333.read())) {
        ShuffleConvs_2_Downs_address0 = grp_subconv_3x3_8_stride_1_fu_14508_ShuffleConvs_2_Downs_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        ShuffleConvs_2_Downs_address0 = grp_subconv_1x1_8p_p_fu_13798_ShuffleConvs_2_Downs_address0.read();
    } else {
        ShuffleConvs_2_Downs_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1333.read())) {
        ShuffleConvs_2_Downs_ce0 = grp_subconv_3x3_8_stride_1_fu_14508_ShuffleConvs_2_Downs_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        ShuffleConvs_2_Downs_ce0 = grp_subconv_1x1_8p_p_fu_13798_ShuffleConvs_2_Downs_ce0.read();
    } else {
        ShuffleConvs_2_Downs_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        ShuffleConvs_2_Downs_ce1 = grp_subconv_1x1_8p_p_fu_13798_ShuffleConvs_2_Downs_ce1.read();
    } else {
        ShuffleConvs_2_Downs_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        ShuffleConvs_2_Downs_we0 = grp_subconv_1x1_8p_p_fu_13798_ShuffleConvs_2_Downs_we0.read();
    } else {
        ShuffleConvs_2_Downs_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        ShuffleConvs_2_Downs_we1 = grp_subconv_1x1_8p_p_fu_13798_ShuffleConvs_2_Downs_we1.read();
    } else {
        ShuffleConvs_2_Downs_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void ShuffleNetV2::thread_ap_CS_fsm_state10() {
    ap_CS_fsm_state10 = ap_CS_fsm.read()[9];
}

void ShuffleNetV2::thread_ap_CS_fsm_state100() {
    ap_CS_fsm_state100 = ap_CS_fsm.read()[99];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1000() {
    ap_CS_fsm_state1000 = ap_CS_fsm.read()[999];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1001() {
    ap_CS_fsm_state1001 = ap_CS_fsm.read()[1000];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1002() {
    ap_CS_fsm_state1002 = ap_CS_fsm.read()[1001];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1003() {
    ap_CS_fsm_state1003 = ap_CS_fsm.read()[1002];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1004() {
    ap_CS_fsm_state1004 = ap_CS_fsm.read()[1003];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1005() {
    ap_CS_fsm_state1005 = ap_CS_fsm.read()[1004];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1006() {
    ap_CS_fsm_state1006 = ap_CS_fsm.read()[1005];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1007() {
    ap_CS_fsm_state1007 = ap_CS_fsm.read()[1006];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1008() {
    ap_CS_fsm_state1008 = ap_CS_fsm.read()[1007];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1009() {
    ap_CS_fsm_state1009 = ap_CS_fsm.read()[1008];
}

void ShuffleNetV2::thread_ap_CS_fsm_state101() {
    ap_CS_fsm_state101 = ap_CS_fsm.read()[100];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1010() {
    ap_CS_fsm_state1010 = ap_CS_fsm.read()[1009];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1011() {
    ap_CS_fsm_state1011 = ap_CS_fsm.read()[1010];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1012() {
    ap_CS_fsm_state1012 = ap_CS_fsm.read()[1011];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1013() {
    ap_CS_fsm_state1013 = ap_CS_fsm.read()[1012];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1014() {
    ap_CS_fsm_state1014 = ap_CS_fsm.read()[1013];
}

void ShuffleNetV2::thread_ap_CS_fsm_state102() {
    ap_CS_fsm_state102 = ap_CS_fsm.read()[101];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1021() {
    ap_CS_fsm_state1021 = ap_CS_fsm.read()[1020];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1022() {
    ap_CS_fsm_state1022 = ap_CS_fsm.read()[1021];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1023() {
    ap_CS_fsm_state1023 = ap_CS_fsm.read()[1022];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1024() {
    ap_CS_fsm_state1024 = ap_CS_fsm.read()[1023];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1025() {
    ap_CS_fsm_state1025 = ap_CS_fsm.read()[1024];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1026() {
    ap_CS_fsm_state1026 = ap_CS_fsm.read()[1025];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1027() {
    ap_CS_fsm_state1027 = ap_CS_fsm.read()[1026];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1028() {
    ap_CS_fsm_state1028 = ap_CS_fsm.read()[1027];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1029() {
    ap_CS_fsm_state1029 = ap_CS_fsm.read()[1028];
}

void ShuffleNetV2::thread_ap_CS_fsm_state103() {
    ap_CS_fsm_state103 = ap_CS_fsm.read()[102];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1030() {
    ap_CS_fsm_state1030 = ap_CS_fsm.read()[1029];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1037() {
    ap_CS_fsm_state1037 = ap_CS_fsm.read()[1036];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1038() {
    ap_CS_fsm_state1038 = ap_CS_fsm.read()[1037];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1039() {
    ap_CS_fsm_state1039 = ap_CS_fsm.read()[1038];
}

void ShuffleNetV2::thread_ap_CS_fsm_state104() {
    ap_CS_fsm_state104 = ap_CS_fsm.read()[103];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1040() {
    ap_CS_fsm_state1040 = ap_CS_fsm.read()[1039];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1041() {
    ap_CS_fsm_state1041 = ap_CS_fsm.read()[1040];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1042() {
    ap_CS_fsm_state1042 = ap_CS_fsm.read()[1041];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1049() {
    ap_CS_fsm_state1049 = ap_CS_fsm.read()[1048];
}

void ShuffleNetV2::thread_ap_CS_fsm_state105() {
    ap_CS_fsm_state105 = ap_CS_fsm.read()[104];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1050() {
    ap_CS_fsm_state1050 = ap_CS_fsm.read()[1049];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1051() {
    ap_CS_fsm_state1051 = ap_CS_fsm.read()[1050];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1052() {
    ap_CS_fsm_state1052 = ap_CS_fsm.read()[1051];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1053() {
    ap_CS_fsm_state1053 = ap_CS_fsm.read()[1052];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1054() {
    ap_CS_fsm_state1054 = ap_CS_fsm.read()[1053];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1055() {
    ap_CS_fsm_state1055 = ap_CS_fsm.read()[1054];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1056() {
    ap_CS_fsm_state1056 = ap_CS_fsm.read()[1055];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1057() {
    ap_CS_fsm_state1057 = ap_CS_fsm.read()[1056];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1058() {
    ap_CS_fsm_state1058 = ap_CS_fsm.read()[1057];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1059() {
    ap_CS_fsm_state1059 = ap_CS_fsm.read()[1058];
}

void ShuffleNetV2::thread_ap_CS_fsm_state106() {
    ap_CS_fsm_state106 = ap_CS_fsm.read()[105];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1060() {
    ap_CS_fsm_state1060 = ap_CS_fsm.read()[1059];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1061() {
    ap_CS_fsm_state1061 = ap_CS_fsm.read()[1060];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1062() {
    ap_CS_fsm_state1062 = ap_CS_fsm.read()[1061];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1063() {
    ap_CS_fsm_state1063 = ap_CS_fsm.read()[1062];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1064() {
    ap_CS_fsm_state1064 = ap_CS_fsm.read()[1063];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1065() {
    ap_CS_fsm_state1065 = ap_CS_fsm.read()[1064];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1066() {
    ap_CS_fsm_state1066 = ap_CS_fsm.read()[1065];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1067() {
    ap_CS_fsm_state1067 = ap_CS_fsm.read()[1066];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1068() {
    ap_CS_fsm_state1068 = ap_CS_fsm.read()[1067];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1069() {
    ap_CS_fsm_state1069 = ap_CS_fsm.read()[1068];
}

void ShuffleNetV2::thread_ap_CS_fsm_state107() {
    ap_CS_fsm_state107 = ap_CS_fsm.read()[106];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1070() {
    ap_CS_fsm_state1070 = ap_CS_fsm.read()[1069];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1071() {
    ap_CS_fsm_state1071 = ap_CS_fsm.read()[1070];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1078() {
    ap_CS_fsm_state1078 = ap_CS_fsm.read()[1077];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1079() {
    ap_CS_fsm_state1079 = ap_CS_fsm.read()[1078];
}

void ShuffleNetV2::thread_ap_CS_fsm_state108() {
    ap_CS_fsm_state108 = ap_CS_fsm.read()[107];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1080() {
    ap_CS_fsm_state1080 = ap_CS_fsm.read()[1079];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1081() {
    ap_CS_fsm_state1081 = ap_CS_fsm.read()[1080];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1082() {
    ap_CS_fsm_state1082 = ap_CS_fsm.read()[1081];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1083() {
    ap_CS_fsm_state1083 = ap_CS_fsm.read()[1082];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1084() {
    ap_CS_fsm_state1084 = ap_CS_fsm.read()[1083];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1085() {
    ap_CS_fsm_state1085 = ap_CS_fsm.read()[1084];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1086() {
    ap_CS_fsm_state1086 = ap_CS_fsm.read()[1085];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1087() {
    ap_CS_fsm_state1087 = ap_CS_fsm.read()[1086];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1088() {
    ap_CS_fsm_state1088 = ap_CS_fsm.read()[1087];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1089() {
    ap_CS_fsm_state1089 = ap_CS_fsm.read()[1088];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1090() {
    ap_CS_fsm_state1090 = ap_CS_fsm.read()[1089];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1091() {
    ap_CS_fsm_state1091 = ap_CS_fsm.read()[1090];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1092() {
    ap_CS_fsm_state1092 = ap_CS_fsm.read()[1091];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1093() {
    ap_CS_fsm_state1093 = ap_CS_fsm.read()[1092];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1094() {
    ap_CS_fsm_state1094 = ap_CS_fsm.read()[1093];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1095() {
    ap_CS_fsm_state1095 = ap_CS_fsm.read()[1094];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1096() {
    ap_CS_fsm_state1096 = ap_CS_fsm.read()[1095];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1097() {
    ap_CS_fsm_state1097 = ap_CS_fsm.read()[1096];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1098() {
    ap_CS_fsm_state1098 = ap_CS_fsm.read()[1097];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1099() {
    ap_CS_fsm_state1099 = ap_CS_fsm.read()[1098];
}

void ShuffleNetV2::thread_ap_CS_fsm_state11() {
    ap_CS_fsm_state11 = ap_CS_fsm.read()[10];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1100() {
    ap_CS_fsm_state1100 = ap_CS_fsm.read()[1099];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1101() {
    ap_CS_fsm_state1101 = ap_CS_fsm.read()[1100];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1102() {
    ap_CS_fsm_state1102 = ap_CS_fsm.read()[1101];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1103() {
    ap_CS_fsm_state1103 = ap_CS_fsm.read()[1102];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1104() {
    ap_CS_fsm_state1104 = ap_CS_fsm.read()[1103];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1105() {
    ap_CS_fsm_state1105 = ap_CS_fsm.read()[1104];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1106() {
    ap_CS_fsm_state1106 = ap_CS_fsm.read()[1105];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1107() {
    ap_CS_fsm_state1107 = ap_CS_fsm.read()[1106];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1108() {
    ap_CS_fsm_state1108 = ap_CS_fsm.read()[1107];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1109() {
    ap_CS_fsm_state1109 = ap_CS_fsm.read()[1108];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1116() {
    ap_CS_fsm_state1116 = ap_CS_fsm.read()[1115];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1117() {
    ap_CS_fsm_state1117 = ap_CS_fsm.read()[1116];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1118() {
    ap_CS_fsm_state1118 = ap_CS_fsm.read()[1117];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1119() {
    ap_CS_fsm_state1119 = ap_CS_fsm.read()[1118];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1120() {
    ap_CS_fsm_state1120 = ap_CS_fsm.read()[1119];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1121() {
    ap_CS_fsm_state1121 = ap_CS_fsm.read()[1120];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1122() {
    ap_CS_fsm_state1122 = ap_CS_fsm.read()[1121];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1123() {
    ap_CS_fsm_state1123 = ap_CS_fsm.read()[1122];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1124() {
    ap_CS_fsm_state1124 = ap_CS_fsm.read()[1123];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1125() {
    ap_CS_fsm_state1125 = ap_CS_fsm.read()[1124];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1132() {
    ap_CS_fsm_state1132 = ap_CS_fsm.read()[1131];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1133() {
    ap_CS_fsm_state1133 = ap_CS_fsm.read()[1132];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1134() {
    ap_CS_fsm_state1134 = ap_CS_fsm.read()[1133];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1135() {
    ap_CS_fsm_state1135 = ap_CS_fsm.read()[1134];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1136() {
    ap_CS_fsm_state1136 = ap_CS_fsm.read()[1135];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1137() {
    ap_CS_fsm_state1137 = ap_CS_fsm.read()[1136];
}

void ShuffleNetV2::thread_ap_CS_fsm_state114() {
    ap_CS_fsm_state114 = ap_CS_fsm.read()[113];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1144() {
    ap_CS_fsm_state1144 = ap_CS_fsm.read()[1143];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1145() {
    ap_CS_fsm_state1145 = ap_CS_fsm.read()[1144];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1146() {
    ap_CS_fsm_state1146 = ap_CS_fsm.read()[1145];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1147() {
    ap_CS_fsm_state1147 = ap_CS_fsm.read()[1146];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1148() {
    ap_CS_fsm_state1148 = ap_CS_fsm.read()[1147];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1149() {
    ap_CS_fsm_state1149 = ap_CS_fsm.read()[1148];
}

void ShuffleNetV2::thread_ap_CS_fsm_state115() {
    ap_CS_fsm_state115 = ap_CS_fsm.read()[114];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1150() {
    ap_CS_fsm_state1150 = ap_CS_fsm.read()[1149];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1151() {
    ap_CS_fsm_state1151 = ap_CS_fsm.read()[1150];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1152() {
    ap_CS_fsm_state1152 = ap_CS_fsm.read()[1151];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1153() {
    ap_CS_fsm_state1153 = ap_CS_fsm.read()[1152];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1154() {
    ap_CS_fsm_state1154 = ap_CS_fsm.read()[1153];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1155() {
    ap_CS_fsm_state1155 = ap_CS_fsm.read()[1154];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1156() {
    ap_CS_fsm_state1156 = ap_CS_fsm.read()[1155];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1157() {
    ap_CS_fsm_state1157 = ap_CS_fsm.read()[1156];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1158() {
    ap_CS_fsm_state1158 = ap_CS_fsm.read()[1157];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1159() {
    ap_CS_fsm_state1159 = ap_CS_fsm.read()[1158];
}

void ShuffleNetV2::thread_ap_CS_fsm_state116() {
    ap_CS_fsm_state116 = ap_CS_fsm.read()[115];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1160() {
    ap_CS_fsm_state1160 = ap_CS_fsm.read()[1159];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1161() {
    ap_CS_fsm_state1161 = ap_CS_fsm.read()[1160];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1162() {
    ap_CS_fsm_state1162 = ap_CS_fsm.read()[1161];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1163() {
    ap_CS_fsm_state1163 = ap_CS_fsm.read()[1162];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1164() {
    ap_CS_fsm_state1164 = ap_CS_fsm.read()[1163];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1165() {
    ap_CS_fsm_state1165 = ap_CS_fsm.read()[1164];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1166() {
    ap_CS_fsm_state1166 = ap_CS_fsm.read()[1165];
}

void ShuffleNetV2::thread_ap_CS_fsm_state117() {
    ap_CS_fsm_state117 = ap_CS_fsm.read()[116];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1173() {
    ap_CS_fsm_state1173 = ap_CS_fsm.read()[1172];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1174() {
    ap_CS_fsm_state1174 = ap_CS_fsm.read()[1173];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1175() {
    ap_CS_fsm_state1175 = ap_CS_fsm.read()[1174];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1176() {
    ap_CS_fsm_state1176 = ap_CS_fsm.read()[1175];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1177() {
    ap_CS_fsm_state1177 = ap_CS_fsm.read()[1176];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1178() {
    ap_CS_fsm_state1178 = ap_CS_fsm.read()[1177];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1179() {
    ap_CS_fsm_state1179 = ap_CS_fsm.read()[1178];
}

void ShuffleNetV2::thread_ap_CS_fsm_state118() {
    ap_CS_fsm_state118 = ap_CS_fsm.read()[117];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1180() {
    ap_CS_fsm_state1180 = ap_CS_fsm.read()[1179];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1181() {
    ap_CS_fsm_state1181 = ap_CS_fsm.read()[1180];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1182() {
    ap_CS_fsm_state1182 = ap_CS_fsm.read()[1181];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1183() {
    ap_CS_fsm_state1183 = ap_CS_fsm.read()[1182];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1184() {
    ap_CS_fsm_state1184 = ap_CS_fsm.read()[1183];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1185() {
    ap_CS_fsm_state1185 = ap_CS_fsm.read()[1184];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1186() {
    ap_CS_fsm_state1186 = ap_CS_fsm.read()[1185];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1187() {
    ap_CS_fsm_state1187 = ap_CS_fsm.read()[1186];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1188() {
    ap_CS_fsm_state1188 = ap_CS_fsm.read()[1187];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1189() {
    ap_CS_fsm_state1189 = ap_CS_fsm.read()[1188];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1190() {
    ap_CS_fsm_state1190 = ap_CS_fsm.read()[1189];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1191() {
    ap_CS_fsm_state1191 = ap_CS_fsm.read()[1190];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1192() {
    ap_CS_fsm_state1192 = ap_CS_fsm.read()[1191];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1193() {
    ap_CS_fsm_state1193 = ap_CS_fsm.read()[1192];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1194() {
    ap_CS_fsm_state1194 = ap_CS_fsm.read()[1193];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1195() {
    ap_CS_fsm_state1195 = ap_CS_fsm.read()[1194];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1196() {
    ap_CS_fsm_state1196 = ap_CS_fsm.read()[1195];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1197() {
    ap_CS_fsm_state1197 = ap_CS_fsm.read()[1196];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1198() {
    ap_CS_fsm_state1198 = ap_CS_fsm.read()[1197];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1199() {
    ap_CS_fsm_state1199 = ap_CS_fsm.read()[1198];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1200() {
    ap_CS_fsm_state1200 = ap_CS_fsm.read()[1199];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1201() {
    ap_CS_fsm_state1201 = ap_CS_fsm.read()[1200];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1202() {
    ap_CS_fsm_state1202 = ap_CS_fsm.read()[1201];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1203() {
    ap_CS_fsm_state1203 = ap_CS_fsm.read()[1202];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1204() {
    ap_CS_fsm_state1204 = ap_CS_fsm.read()[1203];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1211() {
    ap_CS_fsm_state1211 = ap_CS_fsm.read()[1210];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1212() {
    ap_CS_fsm_state1212 = ap_CS_fsm.read()[1211];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1213() {
    ap_CS_fsm_state1213 = ap_CS_fsm.read()[1212];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1214() {
    ap_CS_fsm_state1214 = ap_CS_fsm.read()[1213];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1215() {
    ap_CS_fsm_state1215 = ap_CS_fsm.read()[1214];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1216() {
    ap_CS_fsm_state1216 = ap_CS_fsm.read()[1215];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1217() {
    ap_CS_fsm_state1217 = ap_CS_fsm.read()[1216];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1218() {
    ap_CS_fsm_state1218 = ap_CS_fsm.read()[1217];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1219() {
    ap_CS_fsm_state1219 = ap_CS_fsm.read()[1218];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1220() {
    ap_CS_fsm_state1220 = ap_CS_fsm.read()[1219];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1227() {
    ap_CS_fsm_state1227 = ap_CS_fsm.read()[1226];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1228() {
    ap_CS_fsm_state1228 = ap_CS_fsm.read()[1227];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1229() {
    ap_CS_fsm_state1229 = ap_CS_fsm.read()[1228];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1230() {
    ap_CS_fsm_state1230 = ap_CS_fsm.read()[1229];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1231() {
    ap_CS_fsm_state1231 = ap_CS_fsm.read()[1230];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1232() {
    ap_CS_fsm_state1232 = ap_CS_fsm.read()[1231];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1239() {
    ap_CS_fsm_state1239 = ap_CS_fsm.read()[1238];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1240() {
    ap_CS_fsm_state1240 = ap_CS_fsm.read()[1239];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1241() {
    ap_CS_fsm_state1241 = ap_CS_fsm.read()[1240];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1242() {
    ap_CS_fsm_state1242 = ap_CS_fsm.read()[1241];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1243() {
    ap_CS_fsm_state1243 = ap_CS_fsm.read()[1242];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1244() {
    ap_CS_fsm_state1244 = ap_CS_fsm.read()[1243];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1245() {
    ap_CS_fsm_state1245 = ap_CS_fsm.read()[1244];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1246() {
    ap_CS_fsm_state1246 = ap_CS_fsm.read()[1245];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1247() {
    ap_CS_fsm_state1247 = ap_CS_fsm.read()[1246];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1248() {
    ap_CS_fsm_state1248 = ap_CS_fsm.read()[1247];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1249() {
    ap_CS_fsm_state1249 = ap_CS_fsm.read()[1248];
}

void ShuffleNetV2::thread_ap_CS_fsm_state125() {
    ap_CS_fsm_state125 = ap_CS_fsm.read()[124];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1250() {
    ap_CS_fsm_state1250 = ap_CS_fsm.read()[1249];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1251() {
    ap_CS_fsm_state1251 = ap_CS_fsm.read()[1250];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1252() {
    ap_CS_fsm_state1252 = ap_CS_fsm.read()[1251];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1253() {
    ap_CS_fsm_state1253 = ap_CS_fsm.read()[1252];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1254() {
    ap_CS_fsm_state1254 = ap_CS_fsm.read()[1253];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1255() {
    ap_CS_fsm_state1255 = ap_CS_fsm.read()[1254];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1256() {
    ap_CS_fsm_state1256 = ap_CS_fsm.read()[1255];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1257() {
    ap_CS_fsm_state1257 = ap_CS_fsm.read()[1256];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1258() {
    ap_CS_fsm_state1258 = ap_CS_fsm.read()[1257];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1259() {
    ap_CS_fsm_state1259 = ap_CS_fsm.read()[1258];
}

void ShuffleNetV2::thread_ap_CS_fsm_state126() {
    ap_CS_fsm_state126 = ap_CS_fsm.read()[125];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1260() {
    ap_CS_fsm_state1260 = ap_CS_fsm.read()[1259];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1261() {
    ap_CS_fsm_state1261 = ap_CS_fsm.read()[1260];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1268() {
    ap_CS_fsm_state1268 = ap_CS_fsm.read()[1267];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1269() {
    ap_CS_fsm_state1269 = ap_CS_fsm.read()[1268];
}

void ShuffleNetV2::thread_ap_CS_fsm_state127() {
    ap_CS_fsm_state127 = ap_CS_fsm.read()[126];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1270() {
    ap_CS_fsm_state1270 = ap_CS_fsm.read()[1269];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1271() {
    ap_CS_fsm_state1271 = ap_CS_fsm.read()[1270];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1272() {
    ap_CS_fsm_state1272 = ap_CS_fsm.read()[1271];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1273() {
    ap_CS_fsm_state1273 = ap_CS_fsm.read()[1272];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1274() {
    ap_CS_fsm_state1274 = ap_CS_fsm.read()[1273];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1275() {
    ap_CS_fsm_state1275 = ap_CS_fsm.read()[1274];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1276() {
    ap_CS_fsm_state1276 = ap_CS_fsm.read()[1275];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1277() {
    ap_CS_fsm_state1277 = ap_CS_fsm.read()[1276];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1278() {
    ap_CS_fsm_state1278 = ap_CS_fsm.read()[1277];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1279() {
    ap_CS_fsm_state1279 = ap_CS_fsm.read()[1278];
}

void ShuffleNetV2::thread_ap_CS_fsm_state128() {
    ap_CS_fsm_state128 = ap_CS_fsm.read()[127];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1280() {
    ap_CS_fsm_state1280 = ap_CS_fsm.read()[1279];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1281() {
    ap_CS_fsm_state1281 = ap_CS_fsm.read()[1280];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1282() {
    ap_CS_fsm_state1282 = ap_CS_fsm.read()[1281];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1283() {
    ap_CS_fsm_state1283 = ap_CS_fsm.read()[1282];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1284() {
    ap_CS_fsm_state1284 = ap_CS_fsm.read()[1283];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1285() {
    ap_CS_fsm_state1285 = ap_CS_fsm.read()[1284];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1286() {
    ap_CS_fsm_state1286 = ap_CS_fsm.read()[1285];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1287() {
    ap_CS_fsm_state1287 = ap_CS_fsm.read()[1286];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1288() {
    ap_CS_fsm_state1288 = ap_CS_fsm.read()[1287];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1289() {
    ap_CS_fsm_state1289 = ap_CS_fsm.read()[1288];
}

void ShuffleNetV2::thread_ap_CS_fsm_state129() {
    ap_CS_fsm_state129 = ap_CS_fsm.read()[128];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1290() {
    ap_CS_fsm_state1290 = ap_CS_fsm.read()[1289];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1291() {
    ap_CS_fsm_state1291 = ap_CS_fsm.read()[1290];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1292() {
    ap_CS_fsm_state1292 = ap_CS_fsm.read()[1291];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1293() {
    ap_CS_fsm_state1293 = ap_CS_fsm.read()[1292];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1294() {
    ap_CS_fsm_state1294 = ap_CS_fsm.read()[1293];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1295() {
    ap_CS_fsm_state1295 = ap_CS_fsm.read()[1294];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1296() {
    ap_CS_fsm_state1296 = ap_CS_fsm.read()[1295];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1303() {
    ap_CS_fsm_state1303 = ap_CS_fsm.read()[1302];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1304() {
    ap_CS_fsm_state1304 = ap_CS_fsm.read()[1303];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1305() {
    ap_CS_fsm_state1305 = ap_CS_fsm.read()[1304];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1306() {
    ap_CS_fsm_state1306 = ap_CS_fsm.read()[1305];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1307() {
    ap_CS_fsm_state1307 = ap_CS_fsm.read()[1306];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1308() {
    ap_CS_fsm_state1308 = ap_CS_fsm.read()[1307];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1309() {
    ap_CS_fsm_state1309 = ap_CS_fsm.read()[1308];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1310() {
    ap_CS_fsm_state1310 = ap_CS_fsm.read()[1309];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1311() {
    ap_CS_fsm_state1311 = ap_CS_fsm.read()[1310];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1312() {
    ap_CS_fsm_state1312 = ap_CS_fsm.read()[1311];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1319() {
    ap_CS_fsm_state1319 = ap_CS_fsm.read()[1318];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1320() {
    ap_CS_fsm_state1320 = ap_CS_fsm.read()[1319];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1321() {
    ap_CS_fsm_state1321 = ap_CS_fsm.read()[1320];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1322() {
    ap_CS_fsm_state1322 = ap_CS_fsm.read()[1321];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1323() {
    ap_CS_fsm_state1323 = ap_CS_fsm.read()[1322];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1324() {
    ap_CS_fsm_state1324 = ap_CS_fsm.read()[1323];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1331() {
    ap_CS_fsm_state1331 = ap_CS_fsm.read()[1330];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1332() {
    ap_CS_fsm_state1332 = ap_CS_fsm.read()[1331];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1333() {
    ap_CS_fsm_state1333 = ap_CS_fsm.read()[1332];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1334() {
    ap_CS_fsm_state1334 = ap_CS_fsm.read()[1333];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1335() {
    ap_CS_fsm_state1335 = ap_CS_fsm.read()[1334];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1336() {
    ap_CS_fsm_state1336 = ap_CS_fsm.read()[1335];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1337() {
    ap_CS_fsm_state1337 = ap_CS_fsm.read()[1336];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1338() {
    ap_CS_fsm_state1338 = ap_CS_fsm.read()[1337];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1339() {
    ap_CS_fsm_state1339 = ap_CS_fsm.read()[1338];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1340() {
    ap_CS_fsm_state1340 = ap_CS_fsm.read()[1339];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1341() {
    ap_CS_fsm_state1341 = ap_CS_fsm.read()[1340];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1342() {
    ap_CS_fsm_state1342 = ap_CS_fsm.read()[1341];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1343() {
    ap_CS_fsm_state1343 = ap_CS_fsm.read()[1342];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1344() {
    ap_CS_fsm_state1344 = ap_CS_fsm.read()[1343];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1345() {
    ap_CS_fsm_state1345 = ap_CS_fsm.read()[1344];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1346() {
    ap_CS_fsm_state1346 = ap_CS_fsm.read()[1345];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1347() {
    ap_CS_fsm_state1347 = ap_CS_fsm.read()[1346];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1348() {
    ap_CS_fsm_state1348 = ap_CS_fsm.read()[1347];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1349() {
    ap_CS_fsm_state1349 = ap_CS_fsm.read()[1348];
}

void ShuffleNetV2::thread_ap_CS_fsm_state135() {
    ap_CS_fsm_state135 = ap_CS_fsm.read()[134];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1350() {
    ap_CS_fsm_state1350 = ap_CS_fsm.read()[1349];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1351() {
    ap_CS_fsm_state1351 = ap_CS_fsm.read()[1350];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1352() {
    ap_CS_fsm_state1352 = ap_CS_fsm.read()[1351];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1353() {
    ap_CS_fsm_state1353 = ap_CS_fsm.read()[1352];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1354() {
    ap_CS_fsm_state1354 = ap_CS_fsm.read()[1353];
}

void ShuffleNetV2::thread_ap_CS_fsm_state136() {
    ap_CS_fsm_state136 = ap_CS_fsm.read()[135];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1361() {
    ap_CS_fsm_state1361 = ap_CS_fsm.read()[1360];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1362() {
    ap_CS_fsm_state1362 = ap_CS_fsm.read()[1361];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1363() {
    ap_CS_fsm_state1363 = ap_CS_fsm.read()[1362];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1364() {
    ap_CS_fsm_state1364 = ap_CS_fsm.read()[1363];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1365() {
    ap_CS_fsm_state1365 = ap_CS_fsm.read()[1364];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1366() {
    ap_CS_fsm_state1366 = ap_CS_fsm.read()[1365];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1367() {
    ap_CS_fsm_state1367 = ap_CS_fsm.read()[1366];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1368() {
    ap_CS_fsm_state1368 = ap_CS_fsm.read()[1367];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1369() {
    ap_CS_fsm_state1369 = ap_CS_fsm.read()[1368];
}

void ShuffleNetV2::thread_ap_CS_fsm_state137() {
    ap_CS_fsm_state137 = ap_CS_fsm.read()[136];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1370() {
    ap_CS_fsm_state1370 = ap_CS_fsm.read()[1369];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1371() {
    ap_CS_fsm_state1371 = ap_CS_fsm.read()[1370];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1372() {
    ap_CS_fsm_state1372 = ap_CS_fsm.read()[1371];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1379() {
    ap_CS_fsm_state1379 = ap_CS_fsm.read()[1378];
}

void ShuffleNetV2::thread_ap_CS_fsm_state138() {
    ap_CS_fsm_state138 = ap_CS_fsm.read()[137];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1380() {
    ap_CS_fsm_state1380 = ap_CS_fsm.read()[1379];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1381() {
    ap_CS_fsm_state1381 = ap_CS_fsm.read()[1380];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1382() {
    ap_CS_fsm_state1382 = ap_CS_fsm.read()[1381];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1383() {
    ap_CS_fsm_state1383 = ap_CS_fsm.read()[1382];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1384() {
    ap_CS_fsm_state1384 = ap_CS_fsm.read()[1383];
}

void ShuffleNetV2::thread_ap_CS_fsm_state139() {
    ap_CS_fsm_state139 = ap_CS_fsm.read()[138];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1391() {
    ap_CS_fsm_state1391 = ap_CS_fsm.read()[1390];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1392() {
    ap_CS_fsm_state1392 = ap_CS_fsm.read()[1391];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1393() {
    ap_CS_fsm_state1393 = ap_CS_fsm.read()[1392];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1394() {
    ap_CS_fsm_state1394 = ap_CS_fsm.read()[1393];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1395() {
    ap_CS_fsm_state1395 = ap_CS_fsm.read()[1394];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1396() {
    ap_CS_fsm_state1396 = ap_CS_fsm.read()[1395];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1397() {
    ap_CS_fsm_state1397 = ap_CS_fsm.read()[1396];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1398() {
    ap_CS_fsm_state1398 = ap_CS_fsm.read()[1397];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1399() {
    ap_CS_fsm_state1399 = ap_CS_fsm.read()[1398];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1400() {
    ap_CS_fsm_state1400 = ap_CS_fsm.read()[1399];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1401() {
    ap_CS_fsm_state1401 = ap_CS_fsm.read()[1400];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1402() {
    ap_CS_fsm_state1402 = ap_CS_fsm.read()[1401];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1403() {
    ap_CS_fsm_state1403 = ap_CS_fsm.read()[1402];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1404() {
    ap_CS_fsm_state1404 = ap_CS_fsm.read()[1403];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1405() {
    ap_CS_fsm_state1405 = ap_CS_fsm.read()[1404];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1406() {
    ap_CS_fsm_state1406 = ap_CS_fsm.read()[1405];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1407() {
    ap_CS_fsm_state1407 = ap_CS_fsm.read()[1406];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1408() {
    ap_CS_fsm_state1408 = ap_CS_fsm.read()[1407];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1409() {
    ap_CS_fsm_state1409 = ap_CS_fsm.read()[1408];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1410() {
    ap_CS_fsm_state1410 = ap_CS_fsm.read()[1409];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1411() {
    ap_CS_fsm_state1411 = ap_CS_fsm.read()[1410];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1412() {
    ap_CS_fsm_state1412 = ap_CS_fsm.read()[1411];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1413() {
    ap_CS_fsm_state1413 = ap_CS_fsm.read()[1412];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1414() {
    ap_CS_fsm_state1414 = ap_CS_fsm.read()[1413];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1421() {
    ap_CS_fsm_state1421 = ap_CS_fsm.read()[1420];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1422() {
    ap_CS_fsm_state1422 = ap_CS_fsm.read()[1421];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1423() {
    ap_CS_fsm_state1423 = ap_CS_fsm.read()[1422];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1424() {
    ap_CS_fsm_state1424 = ap_CS_fsm.read()[1423];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1425() {
    ap_CS_fsm_state1425 = ap_CS_fsm.read()[1424];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1426() {
    ap_CS_fsm_state1426 = ap_CS_fsm.read()[1425];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1427() {
    ap_CS_fsm_state1427 = ap_CS_fsm.read()[1426];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1428() {
    ap_CS_fsm_state1428 = ap_CS_fsm.read()[1427];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1429() {
    ap_CS_fsm_state1429 = ap_CS_fsm.read()[1428];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1430() {
    ap_CS_fsm_state1430 = ap_CS_fsm.read()[1429];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1431() {
    ap_CS_fsm_state1431 = ap_CS_fsm.read()[1430];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1432() {
    ap_CS_fsm_state1432 = ap_CS_fsm.read()[1431];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1433() {
    ap_CS_fsm_state1433 = ap_CS_fsm.read()[1432];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1434() {
    ap_CS_fsm_state1434 = ap_CS_fsm.read()[1433];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1435() {
    ap_CS_fsm_state1435 = ap_CS_fsm.read()[1434];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1436() {
    ap_CS_fsm_state1436 = ap_CS_fsm.read()[1435];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1437() {
    ap_CS_fsm_state1437 = ap_CS_fsm.read()[1436];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1438() {
    ap_CS_fsm_state1438 = ap_CS_fsm.read()[1437];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1439() {
    ap_CS_fsm_state1439 = ap_CS_fsm.read()[1438];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1440() {
    ap_CS_fsm_state1440 = ap_CS_fsm.read()[1439];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1441() {
    ap_CS_fsm_state1441 = ap_CS_fsm.read()[1440];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1442() {
    ap_CS_fsm_state1442 = ap_CS_fsm.read()[1441];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1443() {
    ap_CS_fsm_state1443 = ap_CS_fsm.read()[1442];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1444() {
    ap_CS_fsm_state1444 = ap_CS_fsm.read()[1443];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1445() {
    ap_CS_fsm_state1445 = ap_CS_fsm.read()[1444];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1446() {
    ap_CS_fsm_state1446 = ap_CS_fsm.read()[1445];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1447() {
    ap_CS_fsm_state1447 = ap_CS_fsm.read()[1446];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1448() {
    ap_CS_fsm_state1448 = ap_CS_fsm.read()[1447];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1449() {
    ap_CS_fsm_state1449 = ap_CS_fsm.read()[1448];
}

void ShuffleNetV2::thread_ap_CS_fsm_state145() {
    ap_CS_fsm_state145 = ap_CS_fsm.read()[144];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1450() {
    ap_CS_fsm_state1450 = ap_CS_fsm.read()[1449];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1457() {
    ap_CS_fsm_state1457 = ap_CS_fsm.read()[1456];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1458() {
    ap_CS_fsm_state1458 = ap_CS_fsm.read()[1457];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1459() {
    ap_CS_fsm_state1459 = ap_CS_fsm.read()[1458];
}

void ShuffleNetV2::thread_ap_CS_fsm_state146() {
    ap_CS_fsm_state146 = ap_CS_fsm.read()[145];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1460() {
    ap_CS_fsm_state1460 = ap_CS_fsm.read()[1459];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1461() {
    ap_CS_fsm_state1461 = ap_CS_fsm.read()[1460];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1462() {
    ap_CS_fsm_state1462 = ap_CS_fsm.read()[1461];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1463() {
    ap_CS_fsm_state1463 = ap_CS_fsm.read()[1462];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1464() {
    ap_CS_fsm_state1464 = ap_CS_fsm.read()[1463];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1465() {
    ap_CS_fsm_state1465 = ap_CS_fsm.read()[1464];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1466() {
    ap_CS_fsm_state1466 = ap_CS_fsm.read()[1465];
}

void ShuffleNetV2::thread_ap_CS_fsm_state147() {
    ap_CS_fsm_state147 = ap_CS_fsm.read()[146];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1473() {
    ap_CS_fsm_state1473 = ap_CS_fsm.read()[1472];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1474() {
    ap_CS_fsm_state1474 = ap_CS_fsm.read()[1473];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1475() {
    ap_CS_fsm_state1475 = ap_CS_fsm.read()[1474];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1476() {
    ap_CS_fsm_state1476 = ap_CS_fsm.read()[1475];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1477() {
    ap_CS_fsm_state1477 = ap_CS_fsm.read()[1476];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1478() {
    ap_CS_fsm_state1478 = ap_CS_fsm.read()[1477];
}

void ShuffleNetV2::thread_ap_CS_fsm_state148() {
    ap_CS_fsm_state148 = ap_CS_fsm.read()[147];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1485() {
    ap_CS_fsm_state1485 = ap_CS_fsm.read()[1484];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1486() {
    ap_CS_fsm_state1486 = ap_CS_fsm.read()[1485];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1487() {
    ap_CS_fsm_state1487 = ap_CS_fsm.read()[1486];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1488() {
    ap_CS_fsm_state1488 = ap_CS_fsm.read()[1487];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1489() {
    ap_CS_fsm_state1489 = ap_CS_fsm.read()[1488];
}

void ShuffleNetV2::thread_ap_CS_fsm_state149() {
    ap_CS_fsm_state149 = ap_CS_fsm.read()[148];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1490() {
    ap_CS_fsm_state1490 = ap_CS_fsm.read()[1489];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1491() {
    ap_CS_fsm_state1491 = ap_CS_fsm.read()[1490];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1492() {
    ap_CS_fsm_state1492 = ap_CS_fsm.read()[1491];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1493() {
    ap_CS_fsm_state1493 = ap_CS_fsm.read()[1492];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1494() {
    ap_CS_fsm_state1494 = ap_CS_fsm.read()[1493];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1495() {
    ap_CS_fsm_state1495 = ap_CS_fsm.read()[1494];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1496() {
    ap_CS_fsm_state1496 = ap_CS_fsm.read()[1495];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1497() {
    ap_CS_fsm_state1497 = ap_CS_fsm.read()[1496];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1498() {
    ap_CS_fsm_state1498 = ap_CS_fsm.read()[1497];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1499() {
    ap_CS_fsm_state1499 = ap_CS_fsm.read()[1498];
}

void ShuffleNetV2::thread_ap_CS_fsm_state150() {
    ap_CS_fsm_state150 = ap_CS_fsm.read()[149];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1500() {
    ap_CS_fsm_state1500 = ap_CS_fsm.read()[1499];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1501() {
    ap_CS_fsm_state1501 = ap_CS_fsm.read()[1500];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1502() {
    ap_CS_fsm_state1502 = ap_CS_fsm.read()[1501];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1503() {
    ap_CS_fsm_state1503 = ap_CS_fsm.read()[1502];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1504() {
    ap_CS_fsm_state1504 = ap_CS_fsm.read()[1503];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1505() {
    ap_CS_fsm_state1505 = ap_CS_fsm.read()[1504];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1506() {
    ap_CS_fsm_state1506 = ap_CS_fsm.read()[1505];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1507() {
    ap_CS_fsm_state1507 = ap_CS_fsm.read()[1506];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1508() {
    ap_CS_fsm_state1508 = ap_CS_fsm.read()[1507];
}

void ShuffleNetV2::thread_ap_CS_fsm_state151() {
    ap_CS_fsm_state151 = ap_CS_fsm.read()[150];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1515() {
    ap_CS_fsm_state1515 = ap_CS_fsm.read()[1514];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1516() {
    ap_CS_fsm_state1516 = ap_CS_fsm.read()[1515];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1517() {
    ap_CS_fsm_state1517 = ap_CS_fsm.read()[1516];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1518() {
    ap_CS_fsm_state1518 = ap_CS_fsm.read()[1517];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1519() {
    ap_CS_fsm_state1519 = ap_CS_fsm.read()[1518];
}

void ShuffleNetV2::thread_ap_CS_fsm_state152() {
    ap_CS_fsm_state152 = ap_CS_fsm.read()[151];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1520() {
    ap_CS_fsm_state1520 = ap_CS_fsm.read()[1519];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1521() {
    ap_CS_fsm_state1521 = ap_CS_fsm.read()[1520];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1522() {
    ap_CS_fsm_state1522 = ap_CS_fsm.read()[1521];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1523() {
    ap_CS_fsm_state1523 = ap_CS_fsm.read()[1522];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1524() {
    ap_CS_fsm_state1524 = ap_CS_fsm.read()[1523];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1525() {
    ap_CS_fsm_state1525 = ap_CS_fsm.read()[1524];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1526() {
    ap_CS_fsm_state1526 = ap_CS_fsm.read()[1525];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1527() {
    ap_CS_fsm_state1527 = ap_CS_fsm.read()[1526];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1528() {
    ap_CS_fsm_state1528 = ap_CS_fsm.read()[1527];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1529() {
    ap_CS_fsm_state1529 = ap_CS_fsm.read()[1528];
}

void ShuffleNetV2::thread_ap_CS_fsm_state153() {
    ap_CS_fsm_state153 = ap_CS_fsm.read()[152];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1530() {
    ap_CS_fsm_state1530 = ap_CS_fsm.read()[1529];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1531() {
    ap_CS_fsm_state1531 = ap_CS_fsm.read()[1530];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1532() {
    ap_CS_fsm_state1532 = ap_CS_fsm.read()[1531];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1533() {
    ap_CS_fsm_state1533 = ap_CS_fsm.read()[1532];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1534() {
    ap_CS_fsm_state1534 = ap_CS_fsm.read()[1533];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1535() {
    ap_CS_fsm_state1535 = ap_CS_fsm.read()[1534];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1536() {
    ap_CS_fsm_state1536 = ap_CS_fsm.read()[1535];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1537() {
    ap_CS_fsm_state1537 = ap_CS_fsm.read()[1536];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1538() {
    ap_CS_fsm_state1538 = ap_CS_fsm.read()[1537];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1539() {
    ap_CS_fsm_state1539 = ap_CS_fsm.read()[1538];
}

void ShuffleNetV2::thread_ap_CS_fsm_state154() {
    ap_CS_fsm_state154 = ap_CS_fsm.read()[153];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1540() {
    ap_CS_fsm_state1540 = ap_CS_fsm.read()[1539];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1541() {
    ap_CS_fsm_state1541 = ap_CS_fsm.read()[1540];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1542() {
    ap_CS_fsm_state1542 = ap_CS_fsm.read()[1541];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1543() {
    ap_CS_fsm_state1543 = ap_CS_fsm.read()[1542];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1544() {
    ap_CS_fsm_state1544 = ap_CS_fsm.read()[1543];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1545() {
    ap_CS_fsm_state1545 = ap_CS_fsm.read()[1544];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1546() {
    ap_CS_fsm_state1546 = ap_CS_fsm.read()[1545];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1547() {
    ap_CS_fsm_state1547 = ap_CS_fsm.read()[1546];
}

void ShuffleNetV2::thread_ap_CS_fsm_state155() {
    ap_CS_fsm_state155 = ap_CS_fsm.read()[154];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1554() {
    ap_CS_fsm_state1554 = ap_CS_fsm.read()[1553];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1555() {
    ap_CS_fsm_state1555 = ap_CS_fsm.read()[1554];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1556() {
    ap_CS_fsm_state1556 = ap_CS_fsm.read()[1555];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1557() {
    ap_CS_fsm_state1557 = ap_CS_fsm.read()[1556];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1558() {
    ap_CS_fsm_state1558 = ap_CS_fsm.read()[1557];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1559() {
    ap_CS_fsm_state1559 = ap_CS_fsm.read()[1558];
}

void ShuffleNetV2::thread_ap_CS_fsm_state156() {
    ap_CS_fsm_state156 = ap_CS_fsm.read()[155];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1560() {
    ap_CS_fsm_state1560 = ap_CS_fsm.read()[1559];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1561() {
    ap_CS_fsm_state1561 = ap_CS_fsm.read()[1560];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1562() {
    ap_CS_fsm_state1562 = ap_CS_fsm.read()[1561];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1563() {
    ap_CS_fsm_state1563 = ap_CS_fsm.read()[1562];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1570() {
    ap_CS_fsm_state1570 = ap_CS_fsm.read()[1569];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1571() {
    ap_CS_fsm_state1571 = ap_CS_fsm.read()[1570];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1572() {
    ap_CS_fsm_state1572 = ap_CS_fsm.read()[1571];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1573() {
    ap_CS_fsm_state1573 = ap_CS_fsm.read()[1572];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1574() {
    ap_CS_fsm_state1574 = ap_CS_fsm.read()[1573];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1575() {
    ap_CS_fsm_state1575 = ap_CS_fsm.read()[1574];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1582() {
    ap_CS_fsm_state1582 = ap_CS_fsm.read()[1581];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1583() {
    ap_CS_fsm_state1583 = ap_CS_fsm.read()[1582];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1584() {
    ap_CS_fsm_state1584 = ap_CS_fsm.read()[1583];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1585() {
    ap_CS_fsm_state1585 = ap_CS_fsm.read()[1584];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1586() {
    ap_CS_fsm_state1586 = ap_CS_fsm.read()[1585];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1587() {
    ap_CS_fsm_state1587 = ap_CS_fsm.read()[1586];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1588() {
    ap_CS_fsm_state1588 = ap_CS_fsm.read()[1587];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1589() {
    ap_CS_fsm_state1589 = ap_CS_fsm.read()[1588];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1590() {
    ap_CS_fsm_state1590 = ap_CS_fsm.read()[1589];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1591() {
    ap_CS_fsm_state1591 = ap_CS_fsm.read()[1590];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1592() {
    ap_CS_fsm_state1592 = ap_CS_fsm.read()[1591];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1593() {
    ap_CS_fsm_state1593 = ap_CS_fsm.read()[1592];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1594() {
    ap_CS_fsm_state1594 = ap_CS_fsm.read()[1593];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1595() {
    ap_CS_fsm_state1595 = ap_CS_fsm.read()[1594];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1596() {
    ap_CS_fsm_state1596 = ap_CS_fsm.read()[1595];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1597() {
    ap_CS_fsm_state1597 = ap_CS_fsm.read()[1596];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1598() {
    ap_CS_fsm_state1598 = ap_CS_fsm.read()[1597];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1599() {
    ap_CS_fsm_state1599 = ap_CS_fsm.read()[1598];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1600() {
    ap_CS_fsm_state1600 = ap_CS_fsm.read()[1599];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1601() {
    ap_CS_fsm_state1601 = ap_CS_fsm.read()[1600];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1602() {
    ap_CS_fsm_state1602 = ap_CS_fsm.read()[1601];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1603() {
    ap_CS_fsm_state1603 = ap_CS_fsm.read()[1602];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1604() {
    ap_CS_fsm_state1604 = ap_CS_fsm.read()[1603];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1605() {
    ap_CS_fsm_state1605 = ap_CS_fsm.read()[1604];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1612() {
    ap_CS_fsm_state1612 = ap_CS_fsm.read()[1611];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1613() {
    ap_CS_fsm_state1613 = ap_CS_fsm.read()[1612];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1614() {
    ap_CS_fsm_state1614 = ap_CS_fsm.read()[1613];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1615() {
    ap_CS_fsm_state1615 = ap_CS_fsm.read()[1614];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1616() {
    ap_CS_fsm_state1616 = ap_CS_fsm.read()[1615];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1617() {
    ap_CS_fsm_state1617 = ap_CS_fsm.read()[1616];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1618() {
    ap_CS_fsm_state1618 = ap_CS_fsm.read()[1617];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1619() {
    ap_CS_fsm_state1619 = ap_CS_fsm.read()[1618];
}

void ShuffleNetV2::thread_ap_CS_fsm_state162() {
    ap_CS_fsm_state162 = ap_CS_fsm.read()[161];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1620() {
    ap_CS_fsm_state1620 = ap_CS_fsm.read()[1619];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1621() {
    ap_CS_fsm_state1621 = ap_CS_fsm.read()[1620];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1622() {
    ap_CS_fsm_state1622 = ap_CS_fsm.read()[1621];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1623() {
    ap_CS_fsm_state1623 = ap_CS_fsm.read()[1622];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1624() {
    ap_CS_fsm_state1624 = ap_CS_fsm.read()[1623];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1625() {
    ap_CS_fsm_state1625 = ap_CS_fsm.read()[1624];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1626() {
    ap_CS_fsm_state1626 = ap_CS_fsm.read()[1625];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1627() {
    ap_CS_fsm_state1627 = ap_CS_fsm.read()[1626];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1628() {
    ap_CS_fsm_state1628 = ap_CS_fsm.read()[1627];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1629() {
    ap_CS_fsm_state1629 = ap_CS_fsm.read()[1628];
}

void ShuffleNetV2::thread_ap_CS_fsm_state163() {
    ap_CS_fsm_state163 = ap_CS_fsm.read()[162];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1630() {
    ap_CS_fsm_state1630 = ap_CS_fsm.read()[1629];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1631() {
    ap_CS_fsm_state1631 = ap_CS_fsm.read()[1630];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1632() {
    ap_CS_fsm_state1632 = ap_CS_fsm.read()[1631];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1633() {
    ap_CS_fsm_state1633 = ap_CS_fsm.read()[1632];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1634() {
    ap_CS_fsm_state1634 = ap_CS_fsm.read()[1633];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1635() {
    ap_CS_fsm_state1635 = ap_CS_fsm.read()[1634];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1636() {
    ap_CS_fsm_state1636 = ap_CS_fsm.read()[1635];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1637() {
    ap_CS_fsm_state1637 = ap_CS_fsm.read()[1636];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1638() {
    ap_CS_fsm_state1638 = ap_CS_fsm.read()[1637];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1639() {
    ap_CS_fsm_state1639 = ap_CS_fsm.read()[1638];
}

void ShuffleNetV2::thread_ap_CS_fsm_state164() {
    ap_CS_fsm_state164 = ap_CS_fsm.read()[163];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1640() {
    ap_CS_fsm_state1640 = ap_CS_fsm.read()[1639];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1641() {
    ap_CS_fsm_state1641 = ap_CS_fsm.read()[1640];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1642() {
    ap_CS_fsm_state1642 = ap_CS_fsm.read()[1641];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1643() {
    ap_CS_fsm_state1643 = ap_CS_fsm.read()[1642];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1644() {
    ap_CS_fsm_state1644 = ap_CS_fsm.read()[1643];
}

void ShuffleNetV2::thread_ap_CS_fsm_state165() {
    ap_CS_fsm_state165 = ap_CS_fsm.read()[164];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1651() {
    ap_CS_fsm_state1651 = ap_CS_fsm.read()[1650];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1652() {
    ap_CS_fsm_state1652 = ap_CS_fsm.read()[1651];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1653() {
    ap_CS_fsm_state1653 = ap_CS_fsm.read()[1652];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1654() {
    ap_CS_fsm_state1654 = ap_CS_fsm.read()[1653];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1655() {
    ap_CS_fsm_state1655 = ap_CS_fsm.read()[1654];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1656() {
    ap_CS_fsm_state1656 = ap_CS_fsm.read()[1655];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1657() {
    ap_CS_fsm_state1657 = ap_CS_fsm.read()[1656];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1658() {
    ap_CS_fsm_state1658 = ap_CS_fsm.read()[1657];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1659() {
    ap_CS_fsm_state1659 = ap_CS_fsm.read()[1658];
}

void ShuffleNetV2::thread_ap_CS_fsm_state166() {
    ap_CS_fsm_state166 = ap_CS_fsm.read()[165];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1660() {
    ap_CS_fsm_state1660 = ap_CS_fsm.read()[1659];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1667() {
    ap_CS_fsm_state1667 = ap_CS_fsm.read()[1666];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1668() {
    ap_CS_fsm_state1668 = ap_CS_fsm.read()[1667];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1669() {
    ap_CS_fsm_state1669 = ap_CS_fsm.read()[1668];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1670() {
    ap_CS_fsm_state1670 = ap_CS_fsm.read()[1669];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1671() {
    ap_CS_fsm_state1671 = ap_CS_fsm.read()[1670];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1672() {
    ap_CS_fsm_state1672 = ap_CS_fsm.read()[1671];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1679() {
    ap_CS_fsm_state1679 = ap_CS_fsm.read()[1678];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1680() {
    ap_CS_fsm_state1680 = ap_CS_fsm.read()[1679];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1681() {
    ap_CS_fsm_state1681 = ap_CS_fsm.read()[1680];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1682() {
    ap_CS_fsm_state1682 = ap_CS_fsm.read()[1681];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1683() {
    ap_CS_fsm_state1683 = ap_CS_fsm.read()[1682];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1684() {
    ap_CS_fsm_state1684 = ap_CS_fsm.read()[1683];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1685() {
    ap_CS_fsm_state1685 = ap_CS_fsm.read()[1684];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1686() {
    ap_CS_fsm_state1686 = ap_CS_fsm.read()[1685];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1687() {
    ap_CS_fsm_state1687 = ap_CS_fsm.read()[1686];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1688() {
    ap_CS_fsm_state1688 = ap_CS_fsm.read()[1687];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1689() {
    ap_CS_fsm_state1689 = ap_CS_fsm.read()[1688];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1690() {
    ap_CS_fsm_state1690 = ap_CS_fsm.read()[1689];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1691() {
    ap_CS_fsm_state1691 = ap_CS_fsm.read()[1690];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1692() {
    ap_CS_fsm_state1692 = ap_CS_fsm.read()[1691];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1693() {
    ap_CS_fsm_state1693 = ap_CS_fsm.read()[1692];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1694() {
    ap_CS_fsm_state1694 = ap_CS_fsm.read()[1693];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1695() {
    ap_CS_fsm_state1695 = ap_CS_fsm.read()[1694];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1696() {
    ap_CS_fsm_state1696 = ap_CS_fsm.read()[1695];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1697() {
    ap_CS_fsm_state1697 = ap_CS_fsm.read()[1696];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1698() {
    ap_CS_fsm_state1698 = ap_CS_fsm.read()[1697];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1699() {
    ap_CS_fsm_state1699 = ap_CS_fsm.read()[1698];
}

void ShuffleNetV2::thread_ap_CS_fsm_state17() {
    ap_CS_fsm_state17 = ap_CS_fsm.read()[16];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1700() {
    ap_CS_fsm_state1700 = ap_CS_fsm.read()[1699];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1701() {
    ap_CS_fsm_state1701 = ap_CS_fsm.read()[1700];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1708() {
    ap_CS_fsm_state1708 = ap_CS_fsm.read()[1707];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1709() {
    ap_CS_fsm_state1709 = ap_CS_fsm.read()[1708];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1710() {
    ap_CS_fsm_state1710 = ap_CS_fsm.read()[1709];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1711() {
    ap_CS_fsm_state1711 = ap_CS_fsm.read()[1710];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1712() {
    ap_CS_fsm_state1712 = ap_CS_fsm.read()[1711];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1713() {
    ap_CS_fsm_state1713 = ap_CS_fsm.read()[1712];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1714() {
    ap_CS_fsm_state1714 = ap_CS_fsm.read()[1713];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1715() {
    ap_CS_fsm_state1715 = ap_CS_fsm.read()[1714];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1716() {
    ap_CS_fsm_state1716 = ap_CS_fsm.read()[1715];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1717() {
    ap_CS_fsm_state1717 = ap_CS_fsm.read()[1716];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1718() {
    ap_CS_fsm_state1718 = ap_CS_fsm.read()[1717];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1719() {
    ap_CS_fsm_state1719 = ap_CS_fsm.read()[1718];
}

void ShuffleNetV2::thread_ap_CS_fsm_state172() {
    ap_CS_fsm_state172 = ap_CS_fsm.read()[171];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1720() {
    ap_CS_fsm_state1720 = ap_CS_fsm.read()[1719];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1721() {
    ap_CS_fsm_state1721 = ap_CS_fsm.read()[1720];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1722() {
    ap_CS_fsm_state1722 = ap_CS_fsm.read()[1721];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1723() {
    ap_CS_fsm_state1723 = ap_CS_fsm.read()[1722];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1724() {
    ap_CS_fsm_state1724 = ap_CS_fsm.read()[1723];
}

void ShuffleNetV2::thread_ap_CS_fsm_state173() {
    ap_CS_fsm_state173 = ap_CS_fsm.read()[172];
}

void ShuffleNetV2::thread_ap_CS_fsm_state174() {
    ap_CS_fsm_state174 = ap_CS_fsm.read()[173];
}

void ShuffleNetV2::thread_ap_CS_fsm_state175() {
    ap_CS_fsm_state175 = ap_CS_fsm.read()[174];
}

void ShuffleNetV2::thread_ap_CS_fsm_state176() {
    ap_CS_fsm_state176 = ap_CS_fsm.read()[175];
}

void ShuffleNetV2::thread_ap_CS_fsm_state177() {
    ap_CS_fsm_state177 = ap_CS_fsm.read()[176];
}

void ShuffleNetV2::thread_ap_CS_fsm_state178() {
    ap_CS_fsm_state178 = ap_CS_fsm.read()[177];
}

void ShuffleNetV2::thread_ap_CS_fsm_state18() {
    ap_CS_fsm_state18 = ap_CS_fsm.read()[17];
}

void ShuffleNetV2::thread_ap_CS_fsm_state184() {
    ap_CS_fsm_state184 = ap_CS_fsm.read()[183];
}

void ShuffleNetV2::thread_ap_CS_fsm_state185() {
    ap_CS_fsm_state185 = ap_CS_fsm.read()[184];
}

void ShuffleNetV2::thread_ap_CS_fsm_state186() {
    ap_CS_fsm_state186 = ap_CS_fsm.read()[185];
}

void ShuffleNetV2::thread_ap_CS_fsm_state187() {
    ap_CS_fsm_state187 = ap_CS_fsm.read()[186];
}

void ShuffleNetV2::thread_ap_CS_fsm_state19() {
    ap_CS_fsm_state19 = ap_CS_fsm.read()[18];
}

void ShuffleNetV2::thread_ap_CS_fsm_state193() {
    ap_CS_fsm_state193 = ap_CS_fsm.read()[192];
}

void ShuffleNetV2::thread_ap_CS_fsm_state194() {
    ap_CS_fsm_state194 = ap_CS_fsm.read()[193];
}

void ShuffleNetV2::thread_ap_CS_fsm_state195() {
    ap_CS_fsm_state195 = ap_CS_fsm.read()[194];
}

void ShuffleNetV2::thread_ap_CS_fsm_state196() {
    ap_CS_fsm_state196 = ap_CS_fsm.read()[195];
}

void ShuffleNetV2::thread_ap_CS_fsm_state197() {
    ap_CS_fsm_state197 = ap_CS_fsm.read()[196];
}

void ShuffleNetV2::thread_ap_CS_fsm_state198() {
    ap_CS_fsm_state198 = ap_CS_fsm.read()[197];
}

void ShuffleNetV2::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void ShuffleNetV2::thread_ap_CS_fsm_state20() {
    ap_CS_fsm_state20 = ap_CS_fsm.read()[19];
}

void ShuffleNetV2::thread_ap_CS_fsm_state204() {
    ap_CS_fsm_state204 = ap_CS_fsm.read()[203];
}

void ShuffleNetV2::thread_ap_CS_fsm_state205() {
    ap_CS_fsm_state205 = ap_CS_fsm.read()[204];
}

void ShuffleNetV2::thread_ap_CS_fsm_state206() {
    ap_CS_fsm_state206 = ap_CS_fsm.read()[205];
}

void ShuffleNetV2::thread_ap_CS_fsm_state207() {
    ap_CS_fsm_state207 = ap_CS_fsm.read()[206];
}

void ShuffleNetV2::thread_ap_CS_fsm_state208() {
    ap_CS_fsm_state208 = ap_CS_fsm.read()[207];
}

void ShuffleNetV2::thread_ap_CS_fsm_state209() {
    ap_CS_fsm_state209 = ap_CS_fsm.read()[208];
}

void ShuffleNetV2::thread_ap_CS_fsm_state216() {
    ap_CS_fsm_state216 = ap_CS_fsm.read()[215];
}

void ShuffleNetV2::thread_ap_CS_fsm_state217() {
    ap_CS_fsm_state217 = ap_CS_fsm.read()[216];
}

void ShuffleNetV2::thread_ap_CS_fsm_state218() {
    ap_CS_fsm_state218 = ap_CS_fsm.read()[217];
}

}

