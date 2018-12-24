#include "ShuffleNetV2.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void ShuffleNetV2::thread_DATA_BIAS_ARADDR() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1636.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_59_reg_66535.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1610.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_58_reg_65953.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1582.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_57_reg_65820.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1546.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_56_reg_65140.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1519.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_55_reg_64558.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1491.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_54_reg_64425.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1455.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_53_reg_63745.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1428.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_52_reg_63163.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1400.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_51_reg_63030.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1367.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_50_reg_62394.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1340.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_49_reg_61812.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1310.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_48_reg_61679.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1283.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_47_reg_61097.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1255.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_46_reg_60964.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1223.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_45_reg_60338.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1196.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_44_reg_59996.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1168.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_43_reg_59863.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1132.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_42_reg_59423.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1105.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_41_reg_59081.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1077.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_40_reg_58948.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1041.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_39_reg_58508.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1014.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_38_reg_58166.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state986.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_37_reg_58033.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state950.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_36_reg_57593.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state923.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_35_reg_57251.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state895.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_34_reg_57118.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state859.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_33_reg_56678.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state832.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_32_reg_56336.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state804.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_31_reg_56203.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state768.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_30_reg_55763.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state741.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_29_reg_55421.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state713.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_28_reg_55288.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state677.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_27_reg_54848.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state650.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_26_reg_54506.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state622.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_25_reg_54373.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state586.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_24_reg_53933.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state559.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_23_reg_53591.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state531.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_22_reg_53458.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state498.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_21_reg_53062.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state471.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_20_reg_52720.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state441.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_19_reg_52587.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state414.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_18_reg_52245.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state386.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_17_reg_52112.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state354.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_16_reg_51585.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state333.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_15_reg_51520.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state312.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_14_reg_51496.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state281.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_13_reg_51096.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state260.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_12_reg_51031.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state239.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_11_reg_50866.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state209.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_10_reg_50748.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state187.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_9_reg_50542.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state166.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_8_reg_50377.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state139.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_7_reg_50162.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state118.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_6_reg_50142.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_5_reg_49932.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state73.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_4_reg_49867.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_3_reg_49707.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_2_reg_49613.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_1_reg_49594.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
            DATA_BIAS_ARADDR = bias_V_read_reg_49426.read();
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
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state386.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state414.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state441.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state471.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state498.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state531.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state559.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state586.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state622.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state650.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state677.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state713.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state741.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state768.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state804.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state832.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state859.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state895.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state923.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state950.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state986.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1014.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1041.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1077.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1105.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1132.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1168.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1196.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1223.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1255.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1283.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1310.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1340.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1367.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1400.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1428.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1455.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1491.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1519.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1546.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1582.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1610.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1636.read()) && 
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
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state386.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state414.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state441.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state471.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state498.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state531.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state559.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state586.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state622.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state650.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state677.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state713.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state741.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state768.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state804.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state832.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state859.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state895.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state923.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state950.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state986.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1014.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1041.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1077.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1105.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1132.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1168.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1196.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1223.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1255.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1283.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1310.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1340.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1367.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1400.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1428.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1455.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1491.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1519.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1546.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1582.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1610.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1636.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())))) {
        DATA_BIAS_ARVALID = ap_const_logic_1;
    } else {
        DATA_BIAS_ARVALID = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_DATA_BIAS_RREADY() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_fu_25618_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_fu_25618_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, DATA_BIAS_RVALID.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond57_fu_25645_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond57_fu_25645_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, DATA_BIAS_RVALID.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond58_fu_25672_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond58_fu_25672_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, DATA_BIAS_RVALID.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond62_fu_25940_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond62_fu_25940_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, DATA_BIAS_RVALID.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state80.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond66_fu_26081_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond66_fu_26081_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, DATA_BIAS_RVALID.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state101.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond70_fu_26215_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond70_fu_26215_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, DATA_BIAS_RVALID.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state125.read()) && 
          esl_seteq<1,1,1>(DATA_BIAS_RVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state146.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond77_fu_26559_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond77_fu_26559_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, DATA_BIAS_RVALID.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state173.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond82_fu_26896_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond82_fu_26896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, DATA_BIAS_RVALID.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state194.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond86_fu_27094_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond86_fu_27094_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, DATA_BIAS_RVALID.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state216.read()) && 
          esl_seteq<1,1,1>(DATA_BIAS_RVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state246.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond98_fu_27702_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond98_fu_27702_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, DATA_BIAS_RVALID.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state267.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond102_fu_27900_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond102_fu_27900_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, DATA_BIAS_RVALID.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state288.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond106_fu_28034_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond106_fu_28034_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, DATA_BIAS_RVALID.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state319.read()) && 
          esl_seteq<1,1,1>(DATA_BIAS_RVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state340.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond118_fu_28712_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond118_fu_28712_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, DATA_BIAS_RVALID.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state361.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond122_fu_28848_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond122_fu_28848_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, DATA_BIAS_RVALID.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state393.read()) && 
          esl_seteq<1,1,1>(DATA_BIAS_RVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state421.read()) && 
          esl_seteq<1,1,1>(DATA_BIAS_RVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state448.read()) && 
          esl_seteq<1,1,1>(DATA_BIAS_RVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state478.read()) && 
          esl_seteq<1,1,1>(DATA_BIAS_RVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state505.read()) && 
          esl_seteq<1,1,1>(DATA_BIAS_RVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state538.read()) && 
          esl_seteq<1,1,1>(DATA_BIAS_RVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state566.read()) && 
          esl_seteq<1,1,1>(DATA_BIAS_RVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state593.read()) && 
          esl_seteq<1,1,1>(DATA_BIAS_RVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read()) && 
          esl_seteq<1,1,1>(DATA_BIAS_RVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state657.read()) && 
          esl_seteq<1,1,1>(DATA_BIAS_RVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state684.read()) && 
          esl_seteq<1,1,1>(DATA_BIAS_RVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state720.read()) && 
          esl_seteq<1,1,1>(DATA_BIAS_RVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state748.read()) && 
          esl_seteq<1,1,1>(DATA_BIAS_RVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state775.read()) && 
          esl_seteq<1,1,1>(DATA_BIAS_RVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state811.read()) && 
          esl_seteq<1,1,1>(DATA_BIAS_RVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state839.read()) && 
          esl_seteq<1,1,1>(DATA_BIAS_RVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state866.read()) && 
          esl_seteq<1,1,1>(DATA_BIAS_RVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state902.read()) && 
          esl_seteq<1,1,1>(DATA_BIAS_RVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state930.read()) && 
          esl_seteq<1,1,1>(DATA_BIAS_RVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state957.read()) && 
          esl_seteq<1,1,1>(DATA_BIAS_RVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state993.read()) && 
          esl_seteq<1,1,1>(DATA_BIAS_RVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1021.read()) && 
          esl_seteq<1,1,1>(DATA_BIAS_RVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1048.read()) && 
          esl_seteq<1,1,1>(DATA_BIAS_RVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1084.read()) && 
          esl_seteq<1,1,1>(DATA_BIAS_RVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1112.read()) && 
          esl_seteq<1,1,1>(DATA_BIAS_RVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1139.read()) && 
          esl_seteq<1,1,1>(DATA_BIAS_RVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1175.read()) && 
          esl_seteq<1,1,1>(DATA_BIAS_RVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1203.read()) && 
          esl_seteq<1,1,1>(DATA_BIAS_RVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1230.read()) && 
          esl_seteq<1,1,1>(DATA_BIAS_RVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1262.read()) && 
          esl_seteq<1,1,1>(DATA_BIAS_RVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1290.read()) && 
          esl_seteq<1,1,1>(DATA_BIAS_RVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1317.read()) && 
          esl_seteq<1,1,1>(DATA_BIAS_RVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1347.read()) && 
          esl_seteq<1,1,1>(DATA_BIAS_RVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1374.read()) && 
          esl_seteq<1,1,1>(DATA_BIAS_RVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1407.read()) && 
          esl_seteq<1,1,1>(DATA_BIAS_RVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1435.read()) && 
          esl_seteq<1,1,1>(DATA_BIAS_RVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1462.read()) && 
          esl_seteq<1,1,1>(DATA_BIAS_RVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1498.read()) && 
          esl_seteq<1,1,1>(DATA_BIAS_RVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1526.read()) && 
          esl_seteq<1,1,1>(DATA_BIAS_RVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1553.read()) && 
          esl_seteq<1,1,1>(DATA_BIAS_RVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1589.read()) && 
          esl_seteq<1,1,1>(DATA_BIAS_RVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1617.read()) && 
          esl_seteq<1,1,1>(DATA_BIAS_RVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1643.read()) && 
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
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state386.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state414.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state441.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state471.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state498.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state531.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state559.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state586.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state622.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state650.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state677.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state713.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state741.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state768.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state804.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state832.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state859.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state895.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state923.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state950.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state986.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1014.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1041.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1077.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1105.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1132.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1168.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1196.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1223.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1255.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1283.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1310.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1340.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1367.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1400.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1428.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1455.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1491.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1519.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1546.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1582.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1610.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1636.read()))) {
        DATA_BIAS_blk_n_AR = m_axi_DATA_BIAS_ARREADY.read();
    } else {
        DATA_BIAS_blk_n_AR = ap_const_logic_1;
    }
}

void ShuffleNetV2::thread_DATA_BIAS_blk_n_R() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_fu_25618_p2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond57_fu_25645_p2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond58_fu_25672_p2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond62_fu_25940_p2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state80.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond66_fu_26081_p2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state101.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond70_fu_26215_p2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state125.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state146.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond77_fu_26559_p2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state173.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond82_fu_26896_p2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state194.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond86_fu_27094_p2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state216.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state246.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond98_fu_27702_p2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state267.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond102_fu_27900_p2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state288.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond106_fu_28034_p2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state319.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state340.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond118_fu_28712_p2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state361.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond122_fu_28848_p2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state393.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state421.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state448.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state478.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state505.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state538.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state566.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state593.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state657.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state684.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state720.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state748.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state775.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state811.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state839.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state866.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state902.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state930.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state957.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state993.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1021.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1048.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1084.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1112.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1139.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1175.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1203.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1230.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1262.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1290.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1317.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1347.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1374.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1407.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1435.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1462.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1498.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1526.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1553.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1589.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1617.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1643.read()))) {
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
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1656.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, exitcond34_i_fu_49226_p2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1661.read()))) {
        DATA_INPUT_OUTPUT_AWVALID = grp_fc_fu_25409_m_axi_output_V_AWVALID.read();
    } else {
        DATA_INPUT_OUTPUT_AWVALID = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_DATA_INPUT_OUTPUT_BREADY() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1656.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, exitcond34_i_fu_49226_p2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1661.read()))) {
        DATA_INPUT_OUTPUT_BREADY = grp_fc_fu_25409_m_axi_output_V_BREADY.read();
    } else {
        DATA_INPUT_OUTPUT_BREADY = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_DATA_INPUT_OUTPUT_RREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) && 
         esl_seteq<1,1,1>(exitcond64_fu_25803_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(exitcond64_fu_25803_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, DATA_INPUT_OUTPUT_RVALID.read())))) {
        DATA_INPUT_OUTPUT_RREADY = ap_const_logic_1;
    } else {
        DATA_INPUT_OUTPUT_RREADY = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_DATA_INPUT_OUTPUT_WVALID() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1656.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, exitcond34_i_fu_49226_p2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1661.read()))) {
        DATA_INPUT_OUTPUT_WVALID = grp_fc_fu_25409_m_axi_output_V_WVALID.read();
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
         esl_seteq<1,1,1>(exitcond64_fu_25803_p2.read(), ap_const_lv1_0))) {
        DATA_INPUT_OUTPUT_blk_n_R = m_axi_DATA_INPUT_OUTPUT_RVALID.read();
    } else {
        DATA_INPUT_OUTPUT_blk_n_R = ap_const_logic_1;
    }
}

void ShuffleNetV2::thread_DATA_OTHER_WEIGHTS_ARADDR() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1656.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, exitcond34_i_fu_49226_p2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1661.read()))) {
        DATA_OTHER_WEIGHTS_ARADDR = grp_fc_fu_25409_m_axi_weight_V_ARADDR.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_1, exitcond59_fu_25714_p2.read())))) {
        DATA_OTHER_WEIGHTS_ARADDR = grp_conv1_p_fu_23953_m_axi_weight_V_ARADDR.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1655.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1651.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_1, exitcond301_fu_49106_p2.read())))) {
        DATA_OTHER_WEIGHTS_ARADDR = grp_conv_last_fu_23522_m_axi_weight_V_ARADDR.read();
    } else {
        DATA_OTHER_WEIGHTS_ARADDR = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void ShuffleNetV2::thread_DATA_OTHER_WEIGHTS_ARBURST() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1656.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, exitcond34_i_fu_49226_p2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1661.read()))) {
        DATA_OTHER_WEIGHTS_ARBURST = grp_fc_fu_25409_m_axi_weight_V_ARBURST.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_1, exitcond59_fu_25714_p2.read())))) {
        DATA_OTHER_WEIGHTS_ARBURST = grp_conv1_p_fu_23953_m_axi_weight_V_ARBURST.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1655.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1651.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_1, exitcond301_fu_49106_p2.read())))) {
        DATA_OTHER_WEIGHTS_ARBURST = grp_conv_last_fu_23522_m_axi_weight_V_ARBURST.read();
    } else {
        DATA_OTHER_WEIGHTS_ARBURST =  (sc_lv<2>) ("XX");
    }
}

void ShuffleNetV2::thread_DATA_OTHER_WEIGHTS_ARCACHE() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1656.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, exitcond34_i_fu_49226_p2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1661.read()))) {
        DATA_OTHER_WEIGHTS_ARCACHE = grp_fc_fu_25409_m_axi_weight_V_ARCACHE.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_1, exitcond59_fu_25714_p2.read())))) {
        DATA_OTHER_WEIGHTS_ARCACHE = grp_conv1_p_fu_23953_m_axi_weight_V_ARCACHE.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1655.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1651.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_1, exitcond301_fu_49106_p2.read())))) {
        DATA_OTHER_WEIGHTS_ARCACHE = grp_conv_last_fu_23522_m_axi_weight_V_ARCACHE.read();
    } else {
        DATA_OTHER_WEIGHTS_ARCACHE =  (sc_lv<4>) ("XXXX");
    }
}

void ShuffleNetV2::thread_DATA_OTHER_WEIGHTS_ARID() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1656.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, exitcond34_i_fu_49226_p2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1661.read()))) {
        DATA_OTHER_WEIGHTS_ARID = grp_fc_fu_25409_m_axi_weight_V_ARID.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_1, exitcond59_fu_25714_p2.read())))) {
        DATA_OTHER_WEIGHTS_ARID = grp_conv1_p_fu_23953_m_axi_weight_V_ARID.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1655.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1651.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_1, exitcond301_fu_49106_p2.read())))) {
        DATA_OTHER_WEIGHTS_ARID = grp_conv_last_fu_23522_m_axi_weight_V_ARID.read();
    } else {
        DATA_OTHER_WEIGHTS_ARID =  (sc_lv<1>) ("X");
    }
}

void ShuffleNetV2::thread_DATA_OTHER_WEIGHTS_ARLEN() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1656.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, exitcond34_i_fu_49226_p2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1661.read()))) {
        DATA_OTHER_WEIGHTS_ARLEN = grp_fc_fu_25409_m_axi_weight_V_ARLEN.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_1, exitcond59_fu_25714_p2.read())))) {
        DATA_OTHER_WEIGHTS_ARLEN = grp_conv1_p_fu_23953_m_axi_weight_V_ARLEN.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1655.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1651.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_1, exitcond301_fu_49106_p2.read())))) {
        DATA_OTHER_WEIGHTS_ARLEN = grp_conv_last_fu_23522_m_axi_weight_V_ARLEN.read();
    } else {
        DATA_OTHER_WEIGHTS_ARLEN = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void ShuffleNetV2::thread_DATA_OTHER_WEIGHTS_ARLOCK() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1656.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, exitcond34_i_fu_49226_p2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1661.read()))) {
        DATA_OTHER_WEIGHTS_ARLOCK = grp_fc_fu_25409_m_axi_weight_V_ARLOCK.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_1, exitcond59_fu_25714_p2.read())))) {
        DATA_OTHER_WEIGHTS_ARLOCK = grp_conv1_p_fu_23953_m_axi_weight_V_ARLOCK.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1655.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1651.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_1, exitcond301_fu_49106_p2.read())))) {
        DATA_OTHER_WEIGHTS_ARLOCK = grp_conv_last_fu_23522_m_axi_weight_V_ARLOCK.read();
    } else {
        DATA_OTHER_WEIGHTS_ARLOCK =  (sc_lv<2>) ("XX");
    }
}

void ShuffleNetV2::thread_DATA_OTHER_WEIGHTS_ARPROT() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1656.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, exitcond34_i_fu_49226_p2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1661.read()))) {
        DATA_OTHER_WEIGHTS_ARPROT = grp_fc_fu_25409_m_axi_weight_V_ARPROT.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_1, exitcond59_fu_25714_p2.read())))) {
        DATA_OTHER_WEIGHTS_ARPROT = grp_conv1_p_fu_23953_m_axi_weight_V_ARPROT.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1655.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1651.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_1, exitcond301_fu_49106_p2.read())))) {
        DATA_OTHER_WEIGHTS_ARPROT = grp_conv_last_fu_23522_m_axi_weight_V_ARPROT.read();
    } else {
        DATA_OTHER_WEIGHTS_ARPROT =  (sc_lv<3>) ("XXX");
    }
}

void ShuffleNetV2::thread_DATA_OTHER_WEIGHTS_ARQOS() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1656.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, exitcond34_i_fu_49226_p2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1661.read()))) {
        DATA_OTHER_WEIGHTS_ARQOS = grp_fc_fu_25409_m_axi_weight_V_ARQOS.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_1, exitcond59_fu_25714_p2.read())))) {
        DATA_OTHER_WEIGHTS_ARQOS = grp_conv1_p_fu_23953_m_axi_weight_V_ARQOS.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1655.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1651.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_1, exitcond301_fu_49106_p2.read())))) {
        DATA_OTHER_WEIGHTS_ARQOS = grp_conv_last_fu_23522_m_axi_weight_V_ARQOS.read();
    } else {
        DATA_OTHER_WEIGHTS_ARQOS =  (sc_lv<4>) ("XXXX");
    }
}

void ShuffleNetV2::thread_DATA_OTHER_WEIGHTS_ARREGION() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1656.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, exitcond34_i_fu_49226_p2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1661.read()))) {
        DATA_OTHER_WEIGHTS_ARREGION = grp_fc_fu_25409_m_axi_weight_V_ARREGION.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_1, exitcond59_fu_25714_p2.read())))) {
        DATA_OTHER_WEIGHTS_ARREGION = grp_conv1_p_fu_23953_m_axi_weight_V_ARREGION.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1655.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1651.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_1, exitcond301_fu_49106_p2.read())))) {
        DATA_OTHER_WEIGHTS_ARREGION = grp_conv_last_fu_23522_m_axi_weight_V_ARREGION.read();
    } else {
        DATA_OTHER_WEIGHTS_ARREGION =  (sc_lv<4>) ("XXXX");
    }
}

void ShuffleNetV2::thread_DATA_OTHER_WEIGHTS_ARSIZE() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1656.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, exitcond34_i_fu_49226_p2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1661.read()))) {
        DATA_OTHER_WEIGHTS_ARSIZE = grp_fc_fu_25409_m_axi_weight_V_ARSIZE.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_1, exitcond59_fu_25714_p2.read())))) {
        DATA_OTHER_WEIGHTS_ARSIZE = grp_conv1_p_fu_23953_m_axi_weight_V_ARSIZE.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1655.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1651.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_1, exitcond301_fu_49106_p2.read())))) {
        DATA_OTHER_WEIGHTS_ARSIZE = grp_conv_last_fu_23522_m_axi_weight_V_ARSIZE.read();
    } else {
        DATA_OTHER_WEIGHTS_ARSIZE =  (sc_lv<3>) ("XXX");
    }
}

void ShuffleNetV2::thread_DATA_OTHER_WEIGHTS_ARUSER() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1656.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, exitcond34_i_fu_49226_p2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1661.read()))) {
        DATA_OTHER_WEIGHTS_ARUSER = grp_fc_fu_25409_m_axi_weight_V_ARUSER.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_1, exitcond59_fu_25714_p2.read())))) {
        DATA_OTHER_WEIGHTS_ARUSER = grp_conv1_p_fu_23953_m_axi_weight_V_ARUSER.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1655.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1651.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_1, exitcond301_fu_49106_p2.read())))) {
        DATA_OTHER_WEIGHTS_ARUSER = grp_conv_last_fu_23522_m_axi_weight_V_ARUSER.read();
    } else {
        DATA_OTHER_WEIGHTS_ARUSER =  (sc_lv<1>) ("X");
    }
}

void ShuffleNetV2::thread_DATA_OTHER_WEIGHTS_ARVALID() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1656.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, exitcond34_i_fu_49226_p2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1661.read()))) {
        DATA_OTHER_WEIGHTS_ARVALID = grp_fc_fu_25409_m_axi_weight_V_ARVALID.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_1, exitcond59_fu_25714_p2.read())))) {
        DATA_OTHER_WEIGHTS_ARVALID = grp_conv1_p_fu_23953_m_axi_weight_V_ARVALID.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1655.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1651.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_1, exitcond301_fu_49106_p2.read())))) {
        DATA_OTHER_WEIGHTS_ARVALID = grp_conv_last_fu_23522_m_axi_weight_V_ARVALID.read();
    } else {
        DATA_OTHER_WEIGHTS_ARVALID = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_DATA_OTHER_WEIGHTS_RREADY() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1656.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, exitcond34_i_fu_49226_p2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1661.read()))) {
        DATA_OTHER_WEIGHTS_RREADY = grp_fc_fu_25409_m_axi_weight_V_RREADY.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_1, exitcond59_fu_25714_p2.read())))) {
        DATA_OTHER_WEIGHTS_RREADY = grp_conv1_p_fu_23953_m_axi_weight_V_RREADY.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1655.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1651.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_1, exitcond301_fu_49106_p2.read())))) {
        DATA_OTHER_WEIGHTS_RREADY = grp_conv_last_fu_23522_m_axi_weight_V_RREADY.read();
    } else {
        DATA_OTHER_WEIGHTS_RREADY = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_10_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        ShuffleConvs_0_Downs_10_address0 = grp_subconv_3x3_32_strid_1_fu_24887_ShuffleConvs_0_Downs_10_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_10_address0 = grp_subconv_1x1_32_p_fu_23314_ShuffleConvs_0_Downs_10_address0.read();
    } else {
        ShuffleConvs_0_Downs_10_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_10_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        ShuffleConvs_0_Downs_10_ce0 = grp_subconv_3x3_32_strid_1_fu_24887_ShuffleConvs_0_Downs_10_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_10_ce0 = grp_subconv_1x1_32_p_fu_23314_ShuffleConvs_0_Downs_10_ce0.read();
    } else {
        ShuffleConvs_0_Downs_10_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_10_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_10_ce1 = grp_subconv_1x1_32_p_fu_23314_ShuffleConvs_0_Downs_10_ce1.read();
    } else {
        ShuffleConvs_0_Downs_10_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_10_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_10_we0 = grp_subconv_1x1_32_p_fu_23314_ShuffleConvs_0_Downs_10_we0.read();
    } else {
        ShuffleConvs_0_Downs_10_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_10_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_10_we1 = grp_subconv_1x1_32_p_fu_23314_ShuffleConvs_0_Downs_10_we1.read();
    } else {
        ShuffleConvs_0_Downs_10_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_11_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        ShuffleConvs_0_Downs_11_address0 = grp_subconv_3x3_32_strid_1_fu_24887_ShuffleConvs_0_Downs_11_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_11_address0 = grp_subconv_1x1_32_p_fu_23314_ShuffleConvs_0_Downs_11_address0.read();
    } else {
        ShuffleConvs_0_Downs_11_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_11_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        ShuffleConvs_0_Downs_11_ce0 = grp_subconv_3x3_32_strid_1_fu_24887_ShuffleConvs_0_Downs_11_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_11_ce0 = grp_subconv_1x1_32_p_fu_23314_ShuffleConvs_0_Downs_11_ce0.read();
    } else {
        ShuffleConvs_0_Downs_11_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_11_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_11_ce1 = grp_subconv_1x1_32_p_fu_23314_ShuffleConvs_0_Downs_11_ce1.read();
    } else {
        ShuffleConvs_0_Downs_11_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_11_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_11_we0 = grp_subconv_1x1_32_p_fu_23314_ShuffleConvs_0_Downs_11_we0.read();
    } else {
        ShuffleConvs_0_Downs_11_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_11_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_11_we1 = grp_subconv_1x1_32_p_fu_23314_ShuffleConvs_0_Downs_11_we1.read();
    } else {
        ShuffleConvs_0_Downs_11_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_12_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        ShuffleConvs_0_Downs_12_address0 = grp_subconv_3x3_32_strid_1_fu_24887_ShuffleConvs_0_Downs_12_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_12_address0 = grp_subconv_1x1_32_p_fu_23314_ShuffleConvs_0_Downs_12_address0.read();
    } else {
        ShuffleConvs_0_Downs_12_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_12_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        ShuffleConvs_0_Downs_12_ce0 = grp_subconv_3x3_32_strid_1_fu_24887_ShuffleConvs_0_Downs_12_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_12_ce0 = grp_subconv_1x1_32_p_fu_23314_ShuffleConvs_0_Downs_12_ce0.read();
    } else {
        ShuffleConvs_0_Downs_12_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_12_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_12_ce1 = grp_subconv_1x1_32_p_fu_23314_ShuffleConvs_0_Downs_12_ce1.read();
    } else {
        ShuffleConvs_0_Downs_12_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_12_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_12_we0 = grp_subconv_1x1_32_p_fu_23314_ShuffleConvs_0_Downs_12_we0.read();
    } else {
        ShuffleConvs_0_Downs_12_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_12_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_12_we1 = grp_subconv_1x1_32_p_fu_23314_ShuffleConvs_0_Downs_12_we1.read();
    } else {
        ShuffleConvs_0_Downs_12_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_13_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        ShuffleConvs_0_Downs_13_address0 = grp_subconv_3x3_32_strid_1_fu_24887_ShuffleConvs_0_Downs_13_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_13_address0 = grp_subconv_1x1_32_p_fu_23314_ShuffleConvs_0_Downs_13_address0.read();
    } else {
        ShuffleConvs_0_Downs_13_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_13_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        ShuffleConvs_0_Downs_13_ce0 = grp_subconv_3x3_32_strid_1_fu_24887_ShuffleConvs_0_Downs_13_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_13_ce0 = grp_subconv_1x1_32_p_fu_23314_ShuffleConvs_0_Downs_13_ce0.read();
    } else {
        ShuffleConvs_0_Downs_13_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_13_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_13_ce1 = grp_subconv_1x1_32_p_fu_23314_ShuffleConvs_0_Downs_13_ce1.read();
    } else {
        ShuffleConvs_0_Downs_13_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_13_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_13_we0 = grp_subconv_1x1_32_p_fu_23314_ShuffleConvs_0_Downs_13_we0.read();
    } else {
        ShuffleConvs_0_Downs_13_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_13_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_13_we1 = grp_subconv_1x1_32_p_fu_23314_ShuffleConvs_0_Downs_13_we1.read();
    } else {
        ShuffleConvs_0_Downs_13_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_14_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        ShuffleConvs_0_Downs_14_address0 = grp_subconv_3x3_32_strid_1_fu_24887_ShuffleConvs_0_Downs_14_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_14_address0 = grp_subconv_1x1_32_p_fu_23314_ShuffleConvs_0_Downs_14_address0.read();
    } else {
        ShuffleConvs_0_Downs_14_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_14_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        ShuffleConvs_0_Downs_14_ce0 = grp_subconv_3x3_32_strid_1_fu_24887_ShuffleConvs_0_Downs_14_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_14_ce0 = grp_subconv_1x1_32_p_fu_23314_ShuffleConvs_0_Downs_14_ce0.read();
    } else {
        ShuffleConvs_0_Downs_14_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_14_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_14_ce1 = grp_subconv_1x1_32_p_fu_23314_ShuffleConvs_0_Downs_14_ce1.read();
    } else {
        ShuffleConvs_0_Downs_14_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_14_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_14_we0 = grp_subconv_1x1_32_p_fu_23314_ShuffleConvs_0_Downs_14_we0.read();
    } else {
        ShuffleConvs_0_Downs_14_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_14_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_14_we1 = grp_subconv_1x1_32_p_fu_23314_ShuffleConvs_0_Downs_14_we1.read();
    } else {
        ShuffleConvs_0_Downs_14_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_15_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        ShuffleConvs_0_Downs_15_address0 = grp_subconv_3x3_32_strid_1_fu_24887_ShuffleConvs_0_Downs_15_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_15_address0 = grp_subconv_1x1_32_p_fu_23314_ShuffleConvs_0_Downs_15_address0.read();
    } else {
        ShuffleConvs_0_Downs_15_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_15_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        ShuffleConvs_0_Downs_15_ce0 = grp_subconv_3x3_32_strid_1_fu_24887_ShuffleConvs_0_Downs_15_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_15_ce0 = grp_subconv_1x1_32_p_fu_23314_ShuffleConvs_0_Downs_15_ce0.read();
    } else {
        ShuffleConvs_0_Downs_15_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_15_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_15_ce1 = grp_subconv_1x1_32_p_fu_23314_ShuffleConvs_0_Downs_15_ce1.read();
    } else {
        ShuffleConvs_0_Downs_15_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_15_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_15_we0 = grp_subconv_1x1_32_p_fu_23314_ShuffleConvs_0_Downs_15_we0.read();
    } else {
        ShuffleConvs_0_Downs_15_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_15_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_15_we1 = grp_subconv_1x1_32_p_fu_23314_ShuffleConvs_0_Downs_15_we1.read();
    } else {
        ShuffleConvs_0_Downs_15_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_16_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        ShuffleConvs_0_Downs_16_address0 = grp_subconv_3x3_32_strid_1_fu_24887_ShuffleConvs_0_Downs_16_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_16_address0 = grp_subconv_1x1_32_p_fu_23314_ShuffleConvs_0_Downs_16_address0.read();
    } else {
        ShuffleConvs_0_Downs_16_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_16_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        ShuffleConvs_0_Downs_16_ce0 = grp_subconv_3x3_32_strid_1_fu_24887_ShuffleConvs_0_Downs_16_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_16_ce0 = grp_subconv_1x1_32_p_fu_23314_ShuffleConvs_0_Downs_16_ce0.read();
    } else {
        ShuffleConvs_0_Downs_16_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_16_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_16_ce1 = grp_subconv_1x1_32_p_fu_23314_ShuffleConvs_0_Downs_16_ce1.read();
    } else {
        ShuffleConvs_0_Downs_16_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_16_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_16_we0 = grp_subconv_1x1_32_p_fu_23314_ShuffleConvs_0_Downs_16_we0.read();
    } else {
        ShuffleConvs_0_Downs_16_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_16_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_16_we1 = grp_subconv_1x1_32_p_fu_23314_ShuffleConvs_0_Downs_16_we1.read();
    } else {
        ShuffleConvs_0_Downs_16_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_17_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        ShuffleConvs_0_Downs_17_address0 = grp_subconv_3x3_32_strid_1_fu_24887_ShuffleConvs_0_Downs_17_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_17_address0 = grp_subconv_1x1_32_p_fu_23314_ShuffleConvs_0_Downs_17_address0.read();
    } else {
        ShuffleConvs_0_Downs_17_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_17_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        ShuffleConvs_0_Downs_17_ce0 = grp_subconv_3x3_32_strid_1_fu_24887_ShuffleConvs_0_Downs_17_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_17_ce0 = grp_subconv_1x1_32_p_fu_23314_ShuffleConvs_0_Downs_17_ce0.read();
    } else {
        ShuffleConvs_0_Downs_17_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_17_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_17_ce1 = grp_subconv_1x1_32_p_fu_23314_ShuffleConvs_0_Downs_17_ce1.read();
    } else {
        ShuffleConvs_0_Downs_17_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_17_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_17_we0 = grp_subconv_1x1_32_p_fu_23314_ShuffleConvs_0_Downs_17_we0.read();
    } else {
        ShuffleConvs_0_Downs_17_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_17_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_17_we1 = grp_subconv_1x1_32_p_fu_23314_ShuffleConvs_0_Downs_17_we1.read();
    } else {
        ShuffleConvs_0_Downs_17_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_18_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        ShuffleConvs_0_Downs_18_address0 = grp_subconv_3x3_32_strid_1_fu_24887_ShuffleConvs_0_Downs_18_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_18_address0 = grp_subconv_1x1_32_p_fu_23314_ShuffleConvs_0_Downs_18_address0.read();
    } else {
        ShuffleConvs_0_Downs_18_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_18_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        ShuffleConvs_0_Downs_18_ce0 = grp_subconv_3x3_32_strid_1_fu_24887_ShuffleConvs_0_Downs_18_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_18_ce0 = grp_subconv_1x1_32_p_fu_23314_ShuffleConvs_0_Downs_18_ce0.read();
    } else {
        ShuffleConvs_0_Downs_18_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_18_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_18_ce1 = grp_subconv_1x1_32_p_fu_23314_ShuffleConvs_0_Downs_18_ce1.read();
    } else {
        ShuffleConvs_0_Downs_18_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_18_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_18_we0 = grp_subconv_1x1_32_p_fu_23314_ShuffleConvs_0_Downs_18_we0.read();
    } else {
        ShuffleConvs_0_Downs_18_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_18_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_18_we1 = grp_subconv_1x1_32_p_fu_23314_ShuffleConvs_0_Downs_18_we1.read();
    } else {
        ShuffleConvs_0_Downs_18_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_19_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        ShuffleConvs_0_Downs_19_address0 = grp_subconv_3x3_32_strid_1_fu_24887_ShuffleConvs_0_Downs_19_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_19_address0 = grp_subconv_1x1_32_p_fu_23314_ShuffleConvs_0_Downs_19_address0.read();
    } else {
        ShuffleConvs_0_Downs_19_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_19_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        ShuffleConvs_0_Downs_19_ce0 = grp_subconv_3x3_32_strid_1_fu_24887_ShuffleConvs_0_Downs_19_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_19_ce0 = grp_subconv_1x1_32_p_fu_23314_ShuffleConvs_0_Downs_19_ce0.read();
    } else {
        ShuffleConvs_0_Downs_19_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_19_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_19_ce1 = grp_subconv_1x1_32_p_fu_23314_ShuffleConvs_0_Downs_19_ce1.read();
    } else {
        ShuffleConvs_0_Downs_19_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_19_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_19_we0 = grp_subconv_1x1_32_p_fu_23314_ShuffleConvs_0_Downs_19_we0.read();
    } else {
        ShuffleConvs_0_Downs_19_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_19_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_19_we1 = grp_subconv_1x1_32_p_fu_23314_ShuffleConvs_0_Downs_19_we1.read();
    } else {
        ShuffleConvs_0_Downs_19_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        ShuffleConvs_0_Downs_1_address0 = grp_subconv_3x3_32_strid_1_fu_24887_ShuffleConvs_0_Downs_1_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_1_address0 = grp_subconv_1x1_32_p_fu_23314_ShuffleConvs_0_Downs_1_address0.read();
    } else {
        ShuffleConvs_0_Downs_1_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        ShuffleConvs_0_Downs_1_ce0 = grp_subconv_3x3_32_strid_1_fu_24887_ShuffleConvs_0_Downs_1_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_1_ce0 = grp_subconv_1x1_32_p_fu_23314_ShuffleConvs_0_Downs_1_ce0.read();
    } else {
        ShuffleConvs_0_Downs_1_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_1_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_1_ce1 = grp_subconv_1x1_32_p_fu_23314_ShuffleConvs_0_Downs_1_ce1.read();
    } else {
        ShuffleConvs_0_Downs_1_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_1_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_1_we0 = grp_subconv_1x1_32_p_fu_23314_ShuffleConvs_0_Downs_1_we0.read();
    } else {
        ShuffleConvs_0_Downs_1_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_1_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_1_we1 = grp_subconv_1x1_32_p_fu_23314_ShuffleConvs_0_Downs_1_we1.read();
    } else {
        ShuffleConvs_0_Downs_1_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_20_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        ShuffleConvs_0_Downs_20_address0 = grp_subconv_3x3_32_strid_1_fu_24887_ShuffleConvs_0_Downs_20_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_20_address0 = grp_subconv_1x1_32_p_fu_23314_ShuffleConvs_0_Downs_20_address0.read();
    } else {
        ShuffleConvs_0_Downs_20_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_20_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        ShuffleConvs_0_Downs_20_ce0 = grp_subconv_3x3_32_strid_1_fu_24887_ShuffleConvs_0_Downs_20_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_20_ce0 = grp_subconv_1x1_32_p_fu_23314_ShuffleConvs_0_Downs_20_ce0.read();
    } else {
        ShuffleConvs_0_Downs_20_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_20_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_20_ce1 = grp_subconv_1x1_32_p_fu_23314_ShuffleConvs_0_Downs_20_ce1.read();
    } else {
        ShuffleConvs_0_Downs_20_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_20_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_20_we0 = grp_subconv_1x1_32_p_fu_23314_ShuffleConvs_0_Downs_20_we0.read();
    } else {
        ShuffleConvs_0_Downs_20_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_20_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_20_we1 = grp_subconv_1x1_32_p_fu_23314_ShuffleConvs_0_Downs_20_we1.read();
    } else {
        ShuffleConvs_0_Downs_20_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_21_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        ShuffleConvs_0_Downs_21_address0 = grp_subconv_3x3_32_strid_1_fu_24887_ShuffleConvs_0_Downs_21_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_21_address0 = grp_subconv_1x1_32_p_fu_23314_ShuffleConvs_0_Downs_21_address0.read();
    } else {
        ShuffleConvs_0_Downs_21_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_21_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        ShuffleConvs_0_Downs_21_ce0 = grp_subconv_3x3_32_strid_1_fu_24887_ShuffleConvs_0_Downs_21_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_21_ce0 = grp_subconv_1x1_32_p_fu_23314_ShuffleConvs_0_Downs_21_ce0.read();
    } else {
        ShuffleConvs_0_Downs_21_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_21_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_21_ce1 = grp_subconv_1x1_32_p_fu_23314_ShuffleConvs_0_Downs_21_ce1.read();
    } else {
        ShuffleConvs_0_Downs_21_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_21_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_21_we0 = grp_subconv_1x1_32_p_fu_23314_ShuffleConvs_0_Downs_21_we0.read();
    } else {
        ShuffleConvs_0_Downs_21_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_21_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_21_we1 = grp_subconv_1x1_32_p_fu_23314_ShuffleConvs_0_Downs_21_we1.read();
    } else {
        ShuffleConvs_0_Downs_21_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_22_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        ShuffleConvs_0_Downs_22_address0 = grp_subconv_3x3_32_strid_1_fu_24887_ShuffleConvs_0_Downs_22_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_22_address0 = grp_subconv_1x1_32_p_fu_23314_ShuffleConvs_0_Downs_22_address0.read();
    } else {
        ShuffleConvs_0_Downs_22_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_22_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        ShuffleConvs_0_Downs_22_ce0 = grp_subconv_3x3_32_strid_1_fu_24887_ShuffleConvs_0_Downs_22_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_22_ce0 = grp_subconv_1x1_32_p_fu_23314_ShuffleConvs_0_Downs_22_ce0.read();
    } else {
        ShuffleConvs_0_Downs_22_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_22_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_22_ce1 = grp_subconv_1x1_32_p_fu_23314_ShuffleConvs_0_Downs_22_ce1.read();
    } else {
        ShuffleConvs_0_Downs_22_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_22_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_22_we0 = grp_subconv_1x1_32_p_fu_23314_ShuffleConvs_0_Downs_22_we0.read();
    } else {
        ShuffleConvs_0_Downs_22_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_22_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_22_we1 = grp_subconv_1x1_32_p_fu_23314_ShuffleConvs_0_Downs_22_we1.read();
    } else {
        ShuffleConvs_0_Downs_22_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_23_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        ShuffleConvs_0_Downs_23_address0 = grp_subconv_3x3_32_strid_1_fu_24887_ShuffleConvs_0_Downs_23_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_23_address0 = grp_subconv_1x1_32_p_fu_23314_ShuffleConvs_0_Downs_23_address0.read();
    } else {
        ShuffleConvs_0_Downs_23_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_23_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        ShuffleConvs_0_Downs_23_ce0 = grp_subconv_3x3_32_strid_1_fu_24887_ShuffleConvs_0_Downs_23_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_23_ce0 = grp_subconv_1x1_32_p_fu_23314_ShuffleConvs_0_Downs_23_ce0.read();
    } else {
        ShuffleConvs_0_Downs_23_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_23_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_23_ce1 = grp_subconv_1x1_32_p_fu_23314_ShuffleConvs_0_Downs_23_ce1.read();
    } else {
        ShuffleConvs_0_Downs_23_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_23_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_23_we0 = grp_subconv_1x1_32_p_fu_23314_ShuffleConvs_0_Downs_23_we0.read();
    } else {
        ShuffleConvs_0_Downs_23_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_23_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_23_we1 = grp_subconv_1x1_32_p_fu_23314_ShuffleConvs_0_Downs_23_we1.read();
    } else {
        ShuffleConvs_0_Downs_23_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        ShuffleConvs_0_Downs_2_address0 = grp_subconv_3x3_32_strid_1_fu_24887_ShuffleConvs_0_Downs_2_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_2_address0 = grp_subconv_1x1_32_p_fu_23314_ShuffleConvs_0_Downs_2_address0.read();
    } else {
        ShuffleConvs_0_Downs_2_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        ShuffleConvs_0_Downs_2_ce0 = grp_subconv_3x3_32_strid_1_fu_24887_ShuffleConvs_0_Downs_2_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_2_ce0 = grp_subconv_1x1_32_p_fu_23314_ShuffleConvs_0_Downs_2_ce0.read();
    } else {
        ShuffleConvs_0_Downs_2_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_2_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_2_ce1 = grp_subconv_1x1_32_p_fu_23314_ShuffleConvs_0_Downs_2_ce1.read();
    } else {
        ShuffleConvs_0_Downs_2_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_2_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_2_we0 = grp_subconv_1x1_32_p_fu_23314_ShuffleConvs_0_Downs_2_we0.read();
    } else {
        ShuffleConvs_0_Downs_2_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_2_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_2_we1 = grp_subconv_1x1_32_p_fu_23314_ShuffleConvs_0_Downs_2_we1.read();
    } else {
        ShuffleConvs_0_Downs_2_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        ShuffleConvs_0_Downs_3_address0 = grp_subconv_3x3_32_strid_1_fu_24887_ShuffleConvs_0_Downs_3_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_3_address0 = grp_subconv_1x1_32_p_fu_23314_ShuffleConvs_0_Downs_3_address0.read();
    } else {
        ShuffleConvs_0_Downs_3_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        ShuffleConvs_0_Downs_3_ce0 = grp_subconv_3x3_32_strid_1_fu_24887_ShuffleConvs_0_Downs_3_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_3_ce0 = grp_subconv_1x1_32_p_fu_23314_ShuffleConvs_0_Downs_3_ce0.read();
    } else {
        ShuffleConvs_0_Downs_3_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_3_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_3_ce1 = grp_subconv_1x1_32_p_fu_23314_ShuffleConvs_0_Downs_3_ce1.read();
    } else {
        ShuffleConvs_0_Downs_3_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_3_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_3_we0 = grp_subconv_1x1_32_p_fu_23314_ShuffleConvs_0_Downs_3_we0.read();
    } else {
        ShuffleConvs_0_Downs_3_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_3_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_3_we1 = grp_subconv_1x1_32_p_fu_23314_ShuffleConvs_0_Downs_3_we1.read();
    } else {
        ShuffleConvs_0_Downs_3_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        ShuffleConvs_0_Downs_4_address0 = grp_subconv_3x3_32_strid_1_fu_24887_ShuffleConvs_0_Downs_4_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_4_address0 = grp_subconv_1x1_32_p_fu_23314_ShuffleConvs_0_Downs_4_address0.read();
    } else {
        ShuffleConvs_0_Downs_4_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        ShuffleConvs_0_Downs_4_ce0 = grp_subconv_3x3_32_strid_1_fu_24887_ShuffleConvs_0_Downs_4_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_4_ce0 = grp_subconv_1x1_32_p_fu_23314_ShuffleConvs_0_Downs_4_ce0.read();
    } else {
        ShuffleConvs_0_Downs_4_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_4_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_4_ce1 = grp_subconv_1x1_32_p_fu_23314_ShuffleConvs_0_Downs_4_ce1.read();
    } else {
        ShuffleConvs_0_Downs_4_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_4_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_4_we0 = grp_subconv_1x1_32_p_fu_23314_ShuffleConvs_0_Downs_4_we0.read();
    } else {
        ShuffleConvs_0_Downs_4_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_4_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_4_we1 = grp_subconv_1x1_32_p_fu_23314_ShuffleConvs_0_Downs_4_we1.read();
    } else {
        ShuffleConvs_0_Downs_4_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        ShuffleConvs_0_Downs_5_address0 = grp_subconv_3x3_32_strid_1_fu_24887_ShuffleConvs_0_Downs_5_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_5_address0 = grp_subconv_1x1_32_p_fu_23314_ShuffleConvs_0_Downs_5_address0.read();
    } else {
        ShuffleConvs_0_Downs_5_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        ShuffleConvs_0_Downs_5_ce0 = grp_subconv_3x3_32_strid_1_fu_24887_ShuffleConvs_0_Downs_5_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_5_ce0 = grp_subconv_1x1_32_p_fu_23314_ShuffleConvs_0_Downs_5_ce0.read();
    } else {
        ShuffleConvs_0_Downs_5_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_5_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_5_ce1 = grp_subconv_1x1_32_p_fu_23314_ShuffleConvs_0_Downs_5_ce1.read();
    } else {
        ShuffleConvs_0_Downs_5_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_5_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_5_we0 = grp_subconv_1x1_32_p_fu_23314_ShuffleConvs_0_Downs_5_we0.read();
    } else {
        ShuffleConvs_0_Downs_5_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_5_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_5_we1 = grp_subconv_1x1_32_p_fu_23314_ShuffleConvs_0_Downs_5_we1.read();
    } else {
        ShuffleConvs_0_Downs_5_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        ShuffleConvs_0_Downs_6_address0 = grp_subconv_3x3_32_strid_1_fu_24887_ShuffleConvs_0_Downs_6_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_6_address0 = grp_subconv_1x1_32_p_fu_23314_ShuffleConvs_0_Downs_6_address0.read();
    } else {
        ShuffleConvs_0_Downs_6_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        ShuffleConvs_0_Downs_6_ce0 = grp_subconv_3x3_32_strid_1_fu_24887_ShuffleConvs_0_Downs_6_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_6_ce0 = grp_subconv_1x1_32_p_fu_23314_ShuffleConvs_0_Downs_6_ce0.read();
    } else {
        ShuffleConvs_0_Downs_6_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_6_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_6_ce1 = grp_subconv_1x1_32_p_fu_23314_ShuffleConvs_0_Downs_6_ce1.read();
    } else {
        ShuffleConvs_0_Downs_6_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_6_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_6_we0 = grp_subconv_1x1_32_p_fu_23314_ShuffleConvs_0_Downs_6_we0.read();
    } else {
        ShuffleConvs_0_Downs_6_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_6_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_6_we1 = grp_subconv_1x1_32_p_fu_23314_ShuffleConvs_0_Downs_6_we1.read();
    } else {
        ShuffleConvs_0_Downs_6_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_7_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        ShuffleConvs_0_Downs_7_address0 = grp_subconv_3x3_32_strid_1_fu_24887_ShuffleConvs_0_Downs_7_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_7_address0 = grp_subconv_1x1_32_p_fu_23314_ShuffleConvs_0_Downs_7_address0.read();
    } else {
        ShuffleConvs_0_Downs_7_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_7_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        ShuffleConvs_0_Downs_7_ce0 = grp_subconv_3x3_32_strid_1_fu_24887_ShuffleConvs_0_Downs_7_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_7_ce0 = grp_subconv_1x1_32_p_fu_23314_ShuffleConvs_0_Downs_7_ce0.read();
    } else {
        ShuffleConvs_0_Downs_7_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_7_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_7_ce1 = grp_subconv_1x1_32_p_fu_23314_ShuffleConvs_0_Downs_7_ce1.read();
    } else {
        ShuffleConvs_0_Downs_7_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_7_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_7_we0 = grp_subconv_1x1_32_p_fu_23314_ShuffleConvs_0_Downs_7_we0.read();
    } else {
        ShuffleConvs_0_Downs_7_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_7_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_7_we1 = grp_subconv_1x1_32_p_fu_23314_ShuffleConvs_0_Downs_7_we1.read();
    } else {
        ShuffleConvs_0_Downs_7_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_8_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        ShuffleConvs_0_Downs_8_address0 = grp_subconv_3x3_32_strid_1_fu_24887_ShuffleConvs_0_Downs_8_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_8_address0 = grp_subconv_1x1_32_p_fu_23314_ShuffleConvs_0_Downs_8_address0.read();
    } else {
        ShuffleConvs_0_Downs_8_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_8_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        ShuffleConvs_0_Downs_8_ce0 = grp_subconv_3x3_32_strid_1_fu_24887_ShuffleConvs_0_Downs_8_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_8_ce0 = grp_subconv_1x1_32_p_fu_23314_ShuffleConvs_0_Downs_8_ce0.read();
    } else {
        ShuffleConvs_0_Downs_8_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_8_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_8_ce1 = grp_subconv_1x1_32_p_fu_23314_ShuffleConvs_0_Downs_8_ce1.read();
    } else {
        ShuffleConvs_0_Downs_8_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_8_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_8_we0 = grp_subconv_1x1_32_p_fu_23314_ShuffleConvs_0_Downs_8_we0.read();
    } else {
        ShuffleConvs_0_Downs_8_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_8_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_8_we1 = grp_subconv_1x1_32_p_fu_23314_ShuffleConvs_0_Downs_8_we1.read();
    } else {
        ShuffleConvs_0_Downs_8_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_9_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        ShuffleConvs_0_Downs_9_address0 = grp_subconv_3x3_32_strid_1_fu_24887_ShuffleConvs_0_Downs_9_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_9_address0 = grp_subconv_1x1_32_p_fu_23314_ShuffleConvs_0_Downs_9_address0.read();
    } else {
        ShuffleConvs_0_Downs_9_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_9_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        ShuffleConvs_0_Downs_9_ce0 = grp_subconv_3x3_32_strid_1_fu_24887_ShuffleConvs_0_Downs_9_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_9_ce0 = grp_subconv_1x1_32_p_fu_23314_ShuffleConvs_0_Downs_9_ce0.read();
    } else {
        ShuffleConvs_0_Downs_9_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_9_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_9_ce1 = grp_subconv_1x1_32_p_fu_23314_ShuffleConvs_0_Downs_9_ce1.read();
    } else {
        ShuffleConvs_0_Downs_9_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_9_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_9_we0 = grp_subconv_1x1_32_p_fu_23314_ShuffleConvs_0_Downs_9_we0.read();
    } else {
        ShuffleConvs_0_Downs_9_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_9_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_9_we1 = grp_subconv_1x1_32_p_fu_23314_ShuffleConvs_0_Downs_9_we1.read();
    } else {
        ShuffleConvs_0_Downs_9_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        ShuffleConvs_0_Downs_address0 = grp_subconv_3x3_32_strid_1_fu_24887_ShuffleConvs_0_Downs_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_address0 = grp_subconv_1x1_32_p_fu_23314_ShuffleConvs_0_Downs_address0.read();
    } else {
        ShuffleConvs_0_Downs_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        ShuffleConvs_0_Downs_ce0 = grp_subconv_3x3_32_strid_1_fu_24887_ShuffleConvs_0_Downs_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_ce0 = grp_subconv_1x1_32_p_fu_23314_ShuffleConvs_0_Downs_ce0.read();
    } else {
        ShuffleConvs_0_Downs_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_ce1 = grp_subconv_1x1_32_p_fu_23314_ShuffleConvs_0_Downs_ce1.read();
    } else {
        ShuffleConvs_0_Downs_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_we0 = grp_subconv_1x1_32_p_fu_23314_ShuffleConvs_0_Downs_we0.read();
    } else {
        ShuffleConvs_0_Downs_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_we1 = grp_subconv_1x1_32_p_fu_23314_ShuffleConvs_0_Downs_we1.read();
    } else {
        ShuffleConvs_0_Downs_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_10_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state423.read())) {
        ShuffleConvs_1_Downs_10_address0 = grp_subconv_3x3_16_strid_fu_24564_ShuffleConvs_1_Downs_10_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_10_address0 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_10_address0.read();
    } else {
        ShuffleConvs_1_Downs_10_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_10_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state423.read())) {
        ShuffleConvs_1_Downs_10_ce0 = grp_subconv_3x3_16_strid_fu_24564_ShuffleConvs_1_Downs_10_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_10_ce0 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_10_ce0.read();
    } else {
        ShuffleConvs_1_Downs_10_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_10_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_10_ce1 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_10_ce1.read();
    } else {
        ShuffleConvs_1_Downs_10_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_10_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_10_we0 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_10_we0.read();
    } else {
        ShuffleConvs_1_Downs_10_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_10_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_10_we1 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_10_we1.read();
    } else {
        ShuffleConvs_1_Downs_10_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_11_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state423.read())) {
        ShuffleConvs_1_Downs_11_address0 = grp_subconv_3x3_16_strid_fu_24564_ShuffleConvs_1_Downs_11_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_11_address0 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_11_address0.read();
    } else {
        ShuffleConvs_1_Downs_11_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_11_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state423.read())) {
        ShuffleConvs_1_Downs_11_ce0 = grp_subconv_3x3_16_strid_fu_24564_ShuffleConvs_1_Downs_11_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_11_ce0 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_11_ce0.read();
    } else {
        ShuffleConvs_1_Downs_11_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_11_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_11_ce1 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_11_ce1.read();
    } else {
        ShuffleConvs_1_Downs_11_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_11_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_11_we0 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_11_we0.read();
    } else {
        ShuffleConvs_1_Downs_11_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_11_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_11_we1 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_11_we1.read();
    } else {
        ShuffleConvs_1_Downs_11_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_12_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state423.read())) {
        ShuffleConvs_1_Downs_12_address0 = grp_subconv_3x3_16_strid_fu_24564_ShuffleConvs_1_Downs_12_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_12_address0 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_12_address0.read();
    } else {
        ShuffleConvs_1_Downs_12_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_12_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state423.read())) {
        ShuffleConvs_1_Downs_12_ce0 = grp_subconv_3x3_16_strid_fu_24564_ShuffleConvs_1_Downs_12_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_12_ce0 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_12_ce0.read();
    } else {
        ShuffleConvs_1_Downs_12_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_12_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_12_ce1 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_12_ce1.read();
    } else {
        ShuffleConvs_1_Downs_12_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_12_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_12_we0 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_12_we0.read();
    } else {
        ShuffleConvs_1_Downs_12_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_12_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_12_we1 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_12_we1.read();
    } else {
        ShuffleConvs_1_Downs_12_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_13_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state423.read())) {
        ShuffleConvs_1_Downs_13_address0 = grp_subconv_3x3_16_strid_fu_24564_ShuffleConvs_1_Downs_13_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_13_address0 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_13_address0.read();
    } else {
        ShuffleConvs_1_Downs_13_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_13_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state423.read())) {
        ShuffleConvs_1_Downs_13_ce0 = grp_subconv_3x3_16_strid_fu_24564_ShuffleConvs_1_Downs_13_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_13_ce0 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_13_ce0.read();
    } else {
        ShuffleConvs_1_Downs_13_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_13_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_13_ce1 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_13_ce1.read();
    } else {
        ShuffleConvs_1_Downs_13_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_13_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_13_we0 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_13_we0.read();
    } else {
        ShuffleConvs_1_Downs_13_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_13_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_13_we1 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_13_we1.read();
    } else {
        ShuffleConvs_1_Downs_13_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_14_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state423.read())) {
        ShuffleConvs_1_Downs_14_address0 = grp_subconv_3x3_16_strid_fu_24564_ShuffleConvs_1_Downs_14_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_14_address0 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_14_address0.read();
    } else {
        ShuffleConvs_1_Downs_14_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_14_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state423.read())) {
        ShuffleConvs_1_Downs_14_ce0 = grp_subconv_3x3_16_strid_fu_24564_ShuffleConvs_1_Downs_14_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_14_ce0 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_14_ce0.read();
    } else {
        ShuffleConvs_1_Downs_14_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_14_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_14_ce1 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_14_ce1.read();
    } else {
        ShuffleConvs_1_Downs_14_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_14_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_14_we0 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_14_we0.read();
    } else {
        ShuffleConvs_1_Downs_14_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_14_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_14_we1 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_14_we1.read();
    } else {
        ShuffleConvs_1_Downs_14_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_15_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state423.read())) {
        ShuffleConvs_1_Downs_15_address0 = grp_subconv_3x3_16_strid_fu_24564_ShuffleConvs_1_Downs_15_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_15_address0 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_15_address0.read();
    } else {
        ShuffleConvs_1_Downs_15_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_15_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state423.read())) {
        ShuffleConvs_1_Downs_15_ce0 = grp_subconv_3x3_16_strid_fu_24564_ShuffleConvs_1_Downs_15_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_15_ce0 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_15_ce0.read();
    } else {
        ShuffleConvs_1_Downs_15_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_15_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_15_ce1 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_15_ce1.read();
    } else {
        ShuffleConvs_1_Downs_15_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_15_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_15_we0 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_15_we0.read();
    } else {
        ShuffleConvs_1_Downs_15_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_15_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_15_we1 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_15_we1.read();
    } else {
        ShuffleConvs_1_Downs_15_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_16_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state423.read())) {
        ShuffleConvs_1_Downs_16_address0 = grp_subconv_3x3_16_strid_fu_24564_ShuffleConvs_1_Downs_16_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_16_address0 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_16_address0.read();
    } else {
        ShuffleConvs_1_Downs_16_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_16_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state423.read())) {
        ShuffleConvs_1_Downs_16_ce0 = grp_subconv_3x3_16_strid_fu_24564_ShuffleConvs_1_Downs_16_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_16_ce0 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_16_ce0.read();
    } else {
        ShuffleConvs_1_Downs_16_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_16_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_16_ce1 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_16_ce1.read();
    } else {
        ShuffleConvs_1_Downs_16_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_16_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_16_we0 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_16_we0.read();
    } else {
        ShuffleConvs_1_Downs_16_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_16_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_16_we1 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_16_we1.read();
    } else {
        ShuffleConvs_1_Downs_16_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_17_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state423.read())) {
        ShuffleConvs_1_Downs_17_address0 = grp_subconv_3x3_16_strid_fu_24564_ShuffleConvs_1_Downs_17_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_17_address0 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_17_address0.read();
    } else {
        ShuffleConvs_1_Downs_17_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_17_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state423.read())) {
        ShuffleConvs_1_Downs_17_ce0 = grp_subconv_3x3_16_strid_fu_24564_ShuffleConvs_1_Downs_17_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_17_ce0 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_17_ce0.read();
    } else {
        ShuffleConvs_1_Downs_17_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_17_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_17_ce1 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_17_ce1.read();
    } else {
        ShuffleConvs_1_Downs_17_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_17_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_17_we0 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_17_we0.read();
    } else {
        ShuffleConvs_1_Downs_17_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_17_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_17_we1 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_17_we1.read();
    } else {
        ShuffleConvs_1_Downs_17_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_18_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state423.read())) {
        ShuffleConvs_1_Downs_18_address0 = grp_subconv_3x3_16_strid_fu_24564_ShuffleConvs_1_Downs_18_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_18_address0 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_18_address0.read();
    } else {
        ShuffleConvs_1_Downs_18_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_18_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state423.read())) {
        ShuffleConvs_1_Downs_18_ce0 = grp_subconv_3x3_16_strid_fu_24564_ShuffleConvs_1_Downs_18_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_18_ce0 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_18_ce0.read();
    } else {
        ShuffleConvs_1_Downs_18_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_18_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_18_ce1 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_18_ce1.read();
    } else {
        ShuffleConvs_1_Downs_18_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_18_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_18_we0 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_18_we0.read();
    } else {
        ShuffleConvs_1_Downs_18_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_18_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_18_we1 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_18_we1.read();
    } else {
        ShuffleConvs_1_Downs_18_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_19_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state423.read())) {
        ShuffleConvs_1_Downs_19_address0 = grp_subconv_3x3_16_strid_fu_24564_ShuffleConvs_1_Downs_19_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_19_address0 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_19_address0.read();
    } else {
        ShuffleConvs_1_Downs_19_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_19_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state423.read())) {
        ShuffleConvs_1_Downs_19_ce0 = grp_subconv_3x3_16_strid_fu_24564_ShuffleConvs_1_Downs_19_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_19_ce0 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_19_ce0.read();
    } else {
        ShuffleConvs_1_Downs_19_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_19_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_19_ce1 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_19_ce1.read();
    } else {
        ShuffleConvs_1_Downs_19_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_19_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_19_we0 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_19_we0.read();
    } else {
        ShuffleConvs_1_Downs_19_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_19_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_19_we1 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_19_we1.read();
    } else {
        ShuffleConvs_1_Downs_19_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state423.read())) {
        ShuffleConvs_1_Downs_1_address0 = grp_subconv_3x3_16_strid_fu_24564_ShuffleConvs_1_Downs_1_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_1_address0 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_1_address0.read();
    } else {
        ShuffleConvs_1_Downs_1_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state423.read())) {
        ShuffleConvs_1_Downs_1_ce0 = grp_subconv_3x3_16_strid_fu_24564_ShuffleConvs_1_Downs_1_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_1_ce0 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_1_ce0.read();
    } else {
        ShuffleConvs_1_Downs_1_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_1_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_1_ce1 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_1_ce1.read();
    } else {
        ShuffleConvs_1_Downs_1_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_1_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_1_we0 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_1_we0.read();
    } else {
        ShuffleConvs_1_Downs_1_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_1_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_1_we1 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_1_we1.read();
    } else {
        ShuffleConvs_1_Downs_1_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_20_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state423.read())) {
        ShuffleConvs_1_Downs_20_address0 = grp_subconv_3x3_16_strid_fu_24564_ShuffleConvs_1_Downs_20_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_20_address0 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_20_address0.read();
    } else {
        ShuffleConvs_1_Downs_20_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_20_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state423.read())) {
        ShuffleConvs_1_Downs_20_ce0 = grp_subconv_3x3_16_strid_fu_24564_ShuffleConvs_1_Downs_20_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_20_ce0 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_20_ce0.read();
    } else {
        ShuffleConvs_1_Downs_20_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_20_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_20_ce1 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_20_ce1.read();
    } else {
        ShuffleConvs_1_Downs_20_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_20_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_20_we0 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_20_we0.read();
    } else {
        ShuffleConvs_1_Downs_20_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_20_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_20_we1 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_20_we1.read();
    } else {
        ShuffleConvs_1_Downs_20_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_21_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state423.read())) {
        ShuffleConvs_1_Downs_21_address0 = grp_subconv_3x3_16_strid_fu_24564_ShuffleConvs_1_Downs_21_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_21_address0 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_21_address0.read();
    } else {
        ShuffleConvs_1_Downs_21_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_21_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state423.read())) {
        ShuffleConvs_1_Downs_21_ce0 = grp_subconv_3x3_16_strid_fu_24564_ShuffleConvs_1_Downs_21_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_21_ce0 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_21_ce0.read();
    } else {
        ShuffleConvs_1_Downs_21_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_21_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_21_ce1 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_21_ce1.read();
    } else {
        ShuffleConvs_1_Downs_21_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_21_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_21_we0 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_21_we0.read();
    } else {
        ShuffleConvs_1_Downs_21_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_21_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_21_we1 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_21_we1.read();
    } else {
        ShuffleConvs_1_Downs_21_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_22_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state423.read())) {
        ShuffleConvs_1_Downs_22_address0 = grp_subconv_3x3_16_strid_fu_24564_ShuffleConvs_1_Downs_22_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_22_address0 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_22_address0.read();
    } else {
        ShuffleConvs_1_Downs_22_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_22_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state423.read())) {
        ShuffleConvs_1_Downs_22_ce0 = grp_subconv_3x3_16_strid_fu_24564_ShuffleConvs_1_Downs_22_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_22_ce0 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_22_ce0.read();
    } else {
        ShuffleConvs_1_Downs_22_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_22_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_22_ce1 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_22_ce1.read();
    } else {
        ShuffleConvs_1_Downs_22_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_22_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_22_we0 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_22_we0.read();
    } else {
        ShuffleConvs_1_Downs_22_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_22_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_22_we1 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_22_we1.read();
    } else {
        ShuffleConvs_1_Downs_22_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_23_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state423.read())) {
        ShuffleConvs_1_Downs_23_address0 = grp_subconv_3x3_16_strid_fu_24564_ShuffleConvs_1_Downs_23_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_23_address0 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_23_address0.read();
    } else {
        ShuffleConvs_1_Downs_23_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_23_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state423.read())) {
        ShuffleConvs_1_Downs_23_ce0 = grp_subconv_3x3_16_strid_fu_24564_ShuffleConvs_1_Downs_23_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_23_ce0 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_23_ce0.read();
    } else {
        ShuffleConvs_1_Downs_23_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_23_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_23_ce1 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_23_ce1.read();
    } else {
        ShuffleConvs_1_Downs_23_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_23_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_23_we0 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_23_we0.read();
    } else {
        ShuffleConvs_1_Downs_23_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_23_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_23_we1 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_23_we1.read();
    } else {
        ShuffleConvs_1_Downs_23_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_24_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state423.read())) {
        ShuffleConvs_1_Downs_24_address0 = grp_subconv_3x3_16_strid_fu_24564_ShuffleConvs_1_Downs_24_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_24_address0 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_24_address0.read();
    } else {
        ShuffleConvs_1_Downs_24_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_24_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state423.read())) {
        ShuffleConvs_1_Downs_24_ce0 = grp_subconv_3x3_16_strid_fu_24564_ShuffleConvs_1_Downs_24_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_24_ce0 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_24_ce0.read();
    } else {
        ShuffleConvs_1_Downs_24_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_24_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_24_ce1 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_24_ce1.read();
    } else {
        ShuffleConvs_1_Downs_24_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_24_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_24_we0 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_24_we0.read();
    } else {
        ShuffleConvs_1_Downs_24_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_24_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_24_we1 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_24_we1.read();
    } else {
        ShuffleConvs_1_Downs_24_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_25_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state423.read())) {
        ShuffleConvs_1_Downs_25_address0 = grp_subconv_3x3_16_strid_fu_24564_ShuffleConvs_1_Downs_25_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_25_address0 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_25_address0.read();
    } else {
        ShuffleConvs_1_Downs_25_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_25_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state423.read())) {
        ShuffleConvs_1_Downs_25_ce0 = grp_subconv_3x3_16_strid_fu_24564_ShuffleConvs_1_Downs_25_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_25_ce0 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_25_ce0.read();
    } else {
        ShuffleConvs_1_Downs_25_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_25_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_25_ce1 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_25_ce1.read();
    } else {
        ShuffleConvs_1_Downs_25_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_25_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_25_we0 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_25_we0.read();
    } else {
        ShuffleConvs_1_Downs_25_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_25_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_25_we1 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_25_we1.read();
    } else {
        ShuffleConvs_1_Downs_25_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_26_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state423.read())) {
        ShuffleConvs_1_Downs_26_address0 = grp_subconv_3x3_16_strid_fu_24564_ShuffleConvs_1_Downs_26_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_26_address0 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_26_address0.read();
    } else {
        ShuffleConvs_1_Downs_26_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_26_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state423.read())) {
        ShuffleConvs_1_Downs_26_ce0 = grp_subconv_3x3_16_strid_fu_24564_ShuffleConvs_1_Downs_26_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_26_ce0 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_26_ce0.read();
    } else {
        ShuffleConvs_1_Downs_26_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_26_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_26_ce1 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_26_ce1.read();
    } else {
        ShuffleConvs_1_Downs_26_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_26_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_26_we0 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_26_we0.read();
    } else {
        ShuffleConvs_1_Downs_26_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_26_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_26_we1 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_26_we1.read();
    } else {
        ShuffleConvs_1_Downs_26_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_27_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state423.read())) {
        ShuffleConvs_1_Downs_27_address0 = grp_subconv_3x3_16_strid_fu_24564_ShuffleConvs_1_Downs_27_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_27_address0 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_27_address0.read();
    } else {
        ShuffleConvs_1_Downs_27_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_27_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state423.read())) {
        ShuffleConvs_1_Downs_27_ce0 = grp_subconv_3x3_16_strid_fu_24564_ShuffleConvs_1_Downs_27_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_27_ce0 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_27_ce0.read();
    } else {
        ShuffleConvs_1_Downs_27_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_27_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_27_ce1 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_27_ce1.read();
    } else {
        ShuffleConvs_1_Downs_27_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_27_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_27_we0 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_27_we0.read();
    } else {
        ShuffleConvs_1_Downs_27_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_27_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_27_we1 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_27_we1.read();
    } else {
        ShuffleConvs_1_Downs_27_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_28_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state423.read())) {
        ShuffleConvs_1_Downs_28_address0 = grp_subconv_3x3_16_strid_fu_24564_ShuffleConvs_1_Downs_28_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_28_address0 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_28_address0.read();
    } else {
        ShuffleConvs_1_Downs_28_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_28_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state423.read())) {
        ShuffleConvs_1_Downs_28_ce0 = grp_subconv_3x3_16_strid_fu_24564_ShuffleConvs_1_Downs_28_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_28_ce0 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_28_ce0.read();
    } else {
        ShuffleConvs_1_Downs_28_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_28_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_28_ce1 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_28_ce1.read();
    } else {
        ShuffleConvs_1_Downs_28_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_28_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_28_we0 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_28_we0.read();
    } else {
        ShuffleConvs_1_Downs_28_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_28_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_28_we1 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_28_we1.read();
    } else {
        ShuffleConvs_1_Downs_28_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_29_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state423.read())) {
        ShuffleConvs_1_Downs_29_address0 = grp_subconv_3x3_16_strid_fu_24564_ShuffleConvs_1_Downs_29_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_29_address0 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_29_address0.read();
    } else {
        ShuffleConvs_1_Downs_29_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_29_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state423.read())) {
        ShuffleConvs_1_Downs_29_ce0 = grp_subconv_3x3_16_strid_fu_24564_ShuffleConvs_1_Downs_29_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_29_ce0 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_29_ce0.read();
    } else {
        ShuffleConvs_1_Downs_29_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_29_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_29_ce1 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_29_ce1.read();
    } else {
        ShuffleConvs_1_Downs_29_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_29_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_29_we0 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_29_we0.read();
    } else {
        ShuffleConvs_1_Downs_29_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_29_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_29_we1 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_29_we1.read();
    } else {
        ShuffleConvs_1_Downs_29_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state423.read())) {
        ShuffleConvs_1_Downs_2_address0 = grp_subconv_3x3_16_strid_fu_24564_ShuffleConvs_1_Downs_2_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_2_address0 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_2_address0.read();
    } else {
        ShuffleConvs_1_Downs_2_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state423.read())) {
        ShuffleConvs_1_Downs_2_ce0 = grp_subconv_3x3_16_strid_fu_24564_ShuffleConvs_1_Downs_2_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_2_ce0 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_2_ce0.read();
    } else {
        ShuffleConvs_1_Downs_2_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_2_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_2_ce1 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_2_ce1.read();
    } else {
        ShuffleConvs_1_Downs_2_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_2_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_2_we0 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_2_we0.read();
    } else {
        ShuffleConvs_1_Downs_2_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_2_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_2_we1 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_2_we1.read();
    } else {
        ShuffleConvs_1_Downs_2_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_30_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state423.read())) {
        ShuffleConvs_1_Downs_30_address0 = grp_subconv_3x3_16_strid_fu_24564_ShuffleConvs_1_Downs_30_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_30_address0 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_30_address0.read();
    } else {
        ShuffleConvs_1_Downs_30_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_30_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state423.read())) {
        ShuffleConvs_1_Downs_30_ce0 = grp_subconv_3x3_16_strid_fu_24564_ShuffleConvs_1_Downs_30_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_30_ce0 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_30_ce0.read();
    } else {
        ShuffleConvs_1_Downs_30_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_30_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_30_ce1 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_30_ce1.read();
    } else {
        ShuffleConvs_1_Downs_30_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_30_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_30_we0 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_30_we0.read();
    } else {
        ShuffleConvs_1_Downs_30_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_30_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_30_we1 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_30_we1.read();
    } else {
        ShuffleConvs_1_Downs_30_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_31_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state423.read())) {
        ShuffleConvs_1_Downs_31_address0 = grp_subconv_3x3_16_strid_fu_24564_ShuffleConvs_1_Downs_31_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_31_address0 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_31_address0.read();
    } else {
        ShuffleConvs_1_Downs_31_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_31_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state423.read())) {
        ShuffleConvs_1_Downs_31_ce0 = grp_subconv_3x3_16_strid_fu_24564_ShuffleConvs_1_Downs_31_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_31_ce0 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_31_ce0.read();
    } else {
        ShuffleConvs_1_Downs_31_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_31_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_31_ce1 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_31_ce1.read();
    } else {
        ShuffleConvs_1_Downs_31_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_31_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_31_we0 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_31_we0.read();
    } else {
        ShuffleConvs_1_Downs_31_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_31_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_31_we1 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_31_we1.read();
    } else {
        ShuffleConvs_1_Downs_31_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_32_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state423.read())) {
        ShuffleConvs_1_Downs_32_address0 = grp_subconv_3x3_16_strid_fu_24564_ShuffleConvs_1_Downs_32_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_32_address0 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_32_address0.read();
    } else {
        ShuffleConvs_1_Downs_32_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_32_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state423.read())) {
        ShuffleConvs_1_Downs_32_ce0 = grp_subconv_3x3_16_strid_fu_24564_ShuffleConvs_1_Downs_32_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_32_ce0 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_32_ce0.read();
    } else {
        ShuffleConvs_1_Downs_32_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_32_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_32_ce1 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_32_ce1.read();
    } else {
        ShuffleConvs_1_Downs_32_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_32_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_32_we0 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_32_we0.read();
    } else {
        ShuffleConvs_1_Downs_32_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_32_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_32_we1 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_32_we1.read();
    } else {
        ShuffleConvs_1_Downs_32_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_33_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state423.read())) {
        ShuffleConvs_1_Downs_33_address0 = grp_subconv_3x3_16_strid_fu_24564_ShuffleConvs_1_Downs_33_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_33_address0 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_33_address0.read();
    } else {
        ShuffleConvs_1_Downs_33_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_33_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state423.read())) {
        ShuffleConvs_1_Downs_33_ce0 = grp_subconv_3x3_16_strid_fu_24564_ShuffleConvs_1_Downs_33_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_33_ce0 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_33_ce0.read();
    } else {
        ShuffleConvs_1_Downs_33_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_33_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_33_ce1 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_33_ce1.read();
    } else {
        ShuffleConvs_1_Downs_33_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_33_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_33_we0 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_33_we0.read();
    } else {
        ShuffleConvs_1_Downs_33_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_33_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_33_we1 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_33_we1.read();
    } else {
        ShuffleConvs_1_Downs_33_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_34_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state423.read())) {
        ShuffleConvs_1_Downs_34_address0 = grp_subconv_3x3_16_strid_fu_24564_ShuffleConvs_1_Downs_34_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_34_address0 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_34_address0.read();
    } else {
        ShuffleConvs_1_Downs_34_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_34_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state423.read())) {
        ShuffleConvs_1_Downs_34_ce0 = grp_subconv_3x3_16_strid_fu_24564_ShuffleConvs_1_Downs_34_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_34_ce0 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_34_ce0.read();
    } else {
        ShuffleConvs_1_Downs_34_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_34_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_34_ce1 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_34_ce1.read();
    } else {
        ShuffleConvs_1_Downs_34_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_34_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_34_we0 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_34_we0.read();
    } else {
        ShuffleConvs_1_Downs_34_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_34_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_34_we1 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_34_we1.read();
    } else {
        ShuffleConvs_1_Downs_34_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_35_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state423.read())) {
        ShuffleConvs_1_Downs_35_address0 = grp_subconv_3x3_16_strid_fu_24564_ShuffleConvs_1_Downs_35_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_35_address0 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_35_address0.read();
    } else {
        ShuffleConvs_1_Downs_35_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_35_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state423.read())) {
        ShuffleConvs_1_Downs_35_ce0 = grp_subconv_3x3_16_strid_fu_24564_ShuffleConvs_1_Downs_35_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_35_ce0 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_35_ce0.read();
    } else {
        ShuffleConvs_1_Downs_35_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_35_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_35_ce1 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_35_ce1.read();
    } else {
        ShuffleConvs_1_Downs_35_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_35_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_35_we0 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_35_we0.read();
    } else {
        ShuffleConvs_1_Downs_35_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_35_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_35_we1 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_35_we1.read();
    } else {
        ShuffleConvs_1_Downs_35_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_36_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state423.read())) {
        ShuffleConvs_1_Downs_36_address0 = grp_subconv_3x3_16_strid_fu_24564_ShuffleConvs_1_Downs_36_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_36_address0 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_36_address0.read();
    } else {
        ShuffleConvs_1_Downs_36_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_36_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state423.read())) {
        ShuffleConvs_1_Downs_36_ce0 = grp_subconv_3x3_16_strid_fu_24564_ShuffleConvs_1_Downs_36_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_36_ce0 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_36_ce0.read();
    } else {
        ShuffleConvs_1_Downs_36_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_36_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_36_ce1 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_36_ce1.read();
    } else {
        ShuffleConvs_1_Downs_36_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_36_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_36_we0 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_36_we0.read();
    } else {
        ShuffleConvs_1_Downs_36_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_36_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_36_we1 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_36_we1.read();
    } else {
        ShuffleConvs_1_Downs_36_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_37_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state423.read())) {
        ShuffleConvs_1_Downs_37_address0 = grp_subconv_3x3_16_strid_fu_24564_ShuffleConvs_1_Downs_37_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_37_address0 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_37_address0.read();
    } else {
        ShuffleConvs_1_Downs_37_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_37_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state423.read())) {
        ShuffleConvs_1_Downs_37_ce0 = grp_subconv_3x3_16_strid_fu_24564_ShuffleConvs_1_Downs_37_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_37_ce0 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_37_ce0.read();
    } else {
        ShuffleConvs_1_Downs_37_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_37_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_37_ce1 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_37_ce1.read();
    } else {
        ShuffleConvs_1_Downs_37_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_37_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_37_we0 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_37_we0.read();
    } else {
        ShuffleConvs_1_Downs_37_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_37_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_37_we1 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_37_we1.read();
    } else {
        ShuffleConvs_1_Downs_37_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_38_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state423.read())) {
        ShuffleConvs_1_Downs_38_address0 = grp_subconv_3x3_16_strid_fu_24564_ShuffleConvs_1_Downs_38_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_38_address0 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_38_address0.read();
    } else {
        ShuffleConvs_1_Downs_38_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_38_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state423.read())) {
        ShuffleConvs_1_Downs_38_ce0 = grp_subconv_3x3_16_strid_fu_24564_ShuffleConvs_1_Downs_38_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_38_ce0 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_38_ce0.read();
    } else {
        ShuffleConvs_1_Downs_38_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_38_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_38_ce1 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_38_ce1.read();
    } else {
        ShuffleConvs_1_Downs_38_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_38_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_38_we0 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_38_we0.read();
    } else {
        ShuffleConvs_1_Downs_38_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_38_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_38_we1 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_38_we1.read();
    } else {
        ShuffleConvs_1_Downs_38_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_39_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state423.read())) {
        ShuffleConvs_1_Downs_39_address0 = grp_subconv_3x3_16_strid_fu_24564_ShuffleConvs_1_Downs_39_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_39_address0 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_39_address0.read();
    } else {
        ShuffleConvs_1_Downs_39_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_39_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state423.read())) {
        ShuffleConvs_1_Downs_39_ce0 = grp_subconv_3x3_16_strid_fu_24564_ShuffleConvs_1_Downs_39_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_39_ce0 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_39_ce0.read();
    } else {
        ShuffleConvs_1_Downs_39_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_39_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_39_ce1 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_39_ce1.read();
    } else {
        ShuffleConvs_1_Downs_39_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_39_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_39_we0 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_39_we0.read();
    } else {
        ShuffleConvs_1_Downs_39_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_39_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_39_we1 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_39_we1.read();
    } else {
        ShuffleConvs_1_Downs_39_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state423.read())) {
        ShuffleConvs_1_Downs_3_address0 = grp_subconv_3x3_16_strid_fu_24564_ShuffleConvs_1_Downs_3_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_3_address0 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_3_address0.read();
    } else {
        ShuffleConvs_1_Downs_3_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state423.read())) {
        ShuffleConvs_1_Downs_3_ce0 = grp_subconv_3x3_16_strid_fu_24564_ShuffleConvs_1_Downs_3_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_3_ce0 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_3_ce0.read();
    } else {
        ShuffleConvs_1_Downs_3_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_3_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_3_ce1 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_3_ce1.read();
    } else {
        ShuffleConvs_1_Downs_3_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_3_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_3_we0 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_3_we0.read();
    } else {
        ShuffleConvs_1_Downs_3_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_3_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_3_we1 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_3_we1.read();
    } else {
        ShuffleConvs_1_Downs_3_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_40_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state423.read())) {
        ShuffleConvs_1_Downs_40_address0 = grp_subconv_3x3_16_strid_fu_24564_ShuffleConvs_1_Downs_40_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_40_address0 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_40_address0.read();
    } else {
        ShuffleConvs_1_Downs_40_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_40_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state423.read())) {
        ShuffleConvs_1_Downs_40_ce0 = grp_subconv_3x3_16_strid_fu_24564_ShuffleConvs_1_Downs_40_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_40_ce0 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_40_ce0.read();
    } else {
        ShuffleConvs_1_Downs_40_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_40_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_40_ce1 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_40_ce1.read();
    } else {
        ShuffleConvs_1_Downs_40_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_40_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_40_we0 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_40_we0.read();
    } else {
        ShuffleConvs_1_Downs_40_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_40_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_40_we1 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_40_we1.read();
    } else {
        ShuffleConvs_1_Downs_40_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_41_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state423.read())) {
        ShuffleConvs_1_Downs_41_address0 = grp_subconv_3x3_16_strid_fu_24564_ShuffleConvs_1_Downs_41_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_41_address0 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_41_address0.read();
    } else {
        ShuffleConvs_1_Downs_41_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_41_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state423.read())) {
        ShuffleConvs_1_Downs_41_ce0 = grp_subconv_3x3_16_strid_fu_24564_ShuffleConvs_1_Downs_41_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_41_ce0 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_41_ce0.read();
    } else {
        ShuffleConvs_1_Downs_41_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_41_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_41_ce1 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_41_ce1.read();
    } else {
        ShuffleConvs_1_Downs_41_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_41_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_41_we0 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_41_we0.read();
    } else {
        ShuffleConvs_1_Downs_41_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_41_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_41_we1 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_41_we1.read();
    } else {
        ShuffleConvs_1_Downs_41_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_42_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state423.read())) {
        ShuffleConvs_1_Downs_42_address0 = grp_subconv_3x3_16_strid_fu_24564_ShuffleConvs_1_Downs_42_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_42_address0 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_42_address0.read();
    } else {
        ShuffleConvs_1_Downs_42_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_42_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state423.read())) {
        ShuffleConvs_1_Downs_42_ce0 = grp_subconv_3x3_16_strid_fu_24564_ShuffleConvs_1_Downs_42_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_42_ce0 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_42_ce0.read();
    } else {
        ShuffleConvs_1_Downs_42_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_42_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_42_ce1 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_42_ce1.read();
    } else {
        ShuffleConvs_1_Downs_42_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_42_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_42_we0 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_42_we0.read();
    } else {
        ShuffleConvs_1_Downs_42_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_42_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_42_we1 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_42_we1.read();
    } else {
        ShuffleConvs_1_Downs_42_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_43_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state423.read())) {
        ShuffleConvs_1_Downs_43_address0 = grp_subconv_3x3_16_strid_fu_24564_ShuffleConvs_1_Downs_43_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_43_address0 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_43_address0.read();
    } else {
        ShuffleConvs_1_Downs_43_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_43_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state423.read())) {
        ShuffleConvs_1_Downs_43_ce0 = grp_subconv_3x3_16_strid_fu_24564_ShuffleConvs_1_Downs_43_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_43_ce0 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_43_ce0.read();
    } else {
        ShuffleConvs_1_Downs_43_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_43_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_43_ce1 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_43_ce1.read();
    } else {
        ShuffleConvs_1_Downs_43_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_43_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_43_we0 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_43_we0.read();
    } else {
        ShuffleConvs_1_Downs_43_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_43_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_43_we1 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_43_we1.read();
    } else {
        ShuffleConvs_1_Downs_43_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_44_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state423.read())) {
        ShuffleConvs_1_Downs_44_address0 = grp_subconv_3x3_16_strid_fu_24564_ShuffleConvs_1_Downs_44_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_44_address0 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_44_address0.read();
    } else {
        ShuffleConvs_1_Downs_44_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_44_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state423.read())) {
        ShuffleConvs_1_Downs_44_ce0 = grp_subconv_3x3_16_strid_fu_24564_ShuffleConvs_1_Downs_44_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_44_ce0 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_44_ce0.read();
    } else {
        ShuffleConvs_1_Downs_44_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_44_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_44_ce1 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_44_ce1.read();
    } else {
        ShuffleConvs_1_Downs_44_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_44_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_44_we0 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_44_we0.read();
    } else {
        ShuffleConvs_1_Downs_44_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_44_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_44_we1 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_44_we1.read();
    } else {
        ShuffleConvs_1_Downs_44_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_45_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state423.read())) {
        ShuffleConvs_1_Downs_45_address0 = grp_subconv_3x3_16_strid_fu_24564_ShuffleConvs_1_Downs_45_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_45_address0 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_45_address0.read();
    } else {
        ShuffleConvs_1_Downs_45_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_45_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state423.read())) {
        ShuffleConvs_1_Downs_45_ce0 = grp_subconv_3x3_16_strid_fu_24564_ShuffleConvs_1_Downs_45_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_45_ce0 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_45_ce0.read();
    } else {
        ShuffleConvs_1_Downs_45_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_45_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_45_ce1 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_45_ce1.read();
    } else {
        ShuffleConvs_1_Downs_45_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_45_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_45_we0 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_45_we0.read();
    } else {
        ShuffleConvs_1_Downs_45_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_45_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_45_we1 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_45_we1.read();
    } else {
        ShuffleConvs_1_Downs_45_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_46_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state423.read())) {
        ShuffleConvs_1_Downs_46_address0 = grp_subconv_3x3_16_strid_fu_24564_ShuffleConvs_1_Downs_46_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_46_address0 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_46_address0.read();
    } else {
        ShuffleConvs_1_Downs_46_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_46_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state423.read())) {
        ShuffleConvs_1_Downs_46_ce0 = grp_subconv_3x3_16_strid_fu_24564_ShuffleConvs_1_Downs_46_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_46_ce0 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_46_ce0.read();
    } else {
        ShuffleConvs_1_Downs_46_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_46_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_46_ce1 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_46_ce1.read();
    } else {
        ShuffleConvs_1_Downs_46_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_46_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_46_we0 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_46_we0.read();
    } else {
        ShuffleConvs_1_Downs_46_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_46_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_46_we1 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_46_we1.read();
    } else {
        ShuffleConvs_1_Downs_46_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_47_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state423.read())) {
        ShuffleConvs_1_Downs_47_address0 = grp_subconv_3x3_16_strid_fu_24564_ShuffleConvs_1_Downs_47_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_47_address0 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_47_address0.read();
    } else {
        ShuffleConvs_1_Downs_47_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_47_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state423.read())) {
        ShuffleConvs_1_Downs_47_ce0 = grp_subconv_3x3_16_strid_fu_24564_ShuffleConvs_1_Downs_47_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_47_ce0 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_47_ce0.read();
    } else {
        ShuffleConvs_1_Downs_47_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_47_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_47_ce1 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_47_ce1.read();
    } else {
        ShuffleConvs_1_Downs_47_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_47_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_47_we0 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_47_we0.read();
    } else {
        ShuffleConvs_1_Downs_47_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_47_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_47_we1 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_47_we1.read();
    } else {
        ShuffleConvs_1_Downs_47_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state423.read())) {
        ShuffleConvs_1_Downs_4_address0 = grp_subconv_3x3_16_strid_fu_24564_ShuffleConvs_1_Downs_4_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_4_address0 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_4_address0.read();
    } else {
        ShuffleConvs_1_Downs_4_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state423.read())) {
        ShuffleConvs_1_Downs_4_ce0 = grp_subconv_3x3_16_strid_fu_24564_ShuffleConvs_1_Downs_4_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_4_ce0 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_4_ce0.read();
    } else {
        ShuffleConvs_1_Downs_4_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_4_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_4_ce1 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_4_ce1.read();
    } else {
        ShuffleConvs_1_Downs_4_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_4_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_4_we0 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_4_we0.read();
    } else {
        ShuffleConvs_1_Downs_4_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_4_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_4_we1 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_4_we1.read();
    } else {
        ShuffleConvs_1_Downs_4_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state423.read())) {
        ShuffleConvs_1_Downs_5_address0 = grp_subconv_3x3_16_strid_fu_24564_ShuffleConvs_1_Downs_5_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_5_address0 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_5_address0.read();
    } else {
        ShuffleConvs_1_Downs_5_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state423.read())) {
        ShuffleConvs_1_Downs_5_ce0 = grp_subconv_3x3_16_strid_fu_24564_ShuffleConvs_1_Downs_5_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_5_ce0 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_5_ce0.read();
    } else {
        ShuffleConvs_1_Downs_5_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_5_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_5_ce1 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_5_ce1.read();
    } else {
        ShuffleConvs_1_Downs_5_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_5_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_5_we0 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_5_we0.read();
    } else {
        ShuffleConvs_1_Downs_5_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_5_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_5_we1 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_5_we1.read();
    } else {
        ShuffleConvs_1_Downs_5_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state423.read())) {
        ShuffleConvs_1_Downs_6_address0 = grp_subconv_3x3_16_strid_fu_24564_ShuffleConvs_1_Downs_6_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_6_address0 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_6_address0.read();
    } else {
        ShuffleConvs_1_Downs_6_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state423.read())) {
        ShuffleConvs_1_Downs_6_ce0 = grp_subconv_3x3_16_strid_fu_24564_ShuffleConvs_1_Downs_6_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_6_ce0 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_6_ce0.read();
    } else {
        ShuffleConvs_1_Downs_6_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_6_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_6_ce1 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_6_ce1.read();
    } else {
        ShuffleConvs_1_Downs_6_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_6_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_6_we0 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_6_we0.read();
    } else {
        ShuffleConvs_1_Downs_6_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_6_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_6_we1 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_6_we1.read();
    } else {
        ShuffleConvs_1_Downs_6_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_7_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state423.read())) {
        ShuffleConvs_1_Downs_7_address0 = grp_subconv_3x3_16_strid_fu_24564_ShuffleConvs_1_Downs_7_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_7_address0 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_7_address0.read();
    } else {
        ShuffleConvs_1_Downs_7_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_7_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state423.read())) {
        ShuffleConvs_1_Downs_7_ce0 = grp_subconv_3x3_16_strid_fu_24564_ShuffleConvs_1_Downs_7_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_7_ce0 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_7_ce0.read();
    } else {
        ShuffleConvs_1_Downs_7_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_7_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_7_ce1 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_7_ce1.read();
    } else {
        ShuffleConvs_1_Downs_7_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_7_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_7_we0 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_7_we0.read();
    } else {
        ShuffleConvs_1_Downs_7_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_7_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_7_we1 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_7_we1.read();
    } else {
        ShuffleConvs_1_Downs_7_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_8_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state423.read())) {
        ShuffleConvs_1_Downs_8_address0 = grp_subconv_3x3_16_strid_fu_24564_ShuffleConvs_1_Downs_8_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_8_address0 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_8_address0.read();
    } else {
        ShuffleConvs_1_Downs_8_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_8_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state423.read())) {
        ShuffleConvs_1_Downs_8_ce0 = grp_subconv_3x3_16_strid_fu_24564_ShuffleConvs_1_Downs_8_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_8_ce0 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_8_ce0.read();
    } else {
        ShuffleConvs_1_Downs_8_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_8_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_8_ce1 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_8_ce1.read();
    } else {
        ShuffleConvs_1_Downs_8_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_8_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_8_we0 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_8_we0.read();
    } else {
        ShuffleConvs_1_Downs_8_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_8_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_8_we1 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_8_we1.read();
    } else {
        ShuffleConvs_1_Downs_8_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_9_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state423.read())) {
        ShuffleConvs_1_Downs_9_address0 = grp_subconv_3x3_16_strid_fu_24564_ShuffleConvs_1_Downs_9_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_9_address0 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_9_address0.read();
    } else {
        ShuffleConvs_1_Downs_9_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_9_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state423.read())) {
        ShuffleConvs_1_Downs_9_ce0 = grp_subconv_3x3_16_strid_fu_24564_ShuffleConvs_1_Downs_9_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_9_ce0 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_9_ce0.read();
    } else {
        ShuffleConvs_1_Downs_9_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_9_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_9_ce1 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_9_ce1.read();
    } else {
        ShuffleConvs_1_Downs_9_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_9_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_9_we0 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_9_we0.read();
    } else {
        ShuffleConvs_1_Downs_9_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_9_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_9_we1 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_9_we1.read();
    } else {
        ShuffleConvs_1_Downs_9_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state423.read())) {
        ShuffleConvs_1_Downs_address0 = grp_subconv_3x3_16_strid_fu_24564_ShuffleConvs_1_Downs_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_address0 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_address0.read();
    } else {
        ShuffleConvs_1_Downs_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state423.read())) {
        ShuffleConvs_1_Downs_ce0 = grp_subconv_3x3_16_strid_fu_24564_ShuffleConvs_1_Downs_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_ce0 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_ce0.read();
    } else {
        ShuffleConvs_1_Downs_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_ce1 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_ce1.read();
    } else {
        ShuffleConvs_1_Downs_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_we0 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_we0.read();
    } else {
        ShuffleConvs_1_Downs_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_we1 = grp_subconv_1x1_16p_p_fu_23114_ShuffleConvs_1_Downs_we1.read();
    } else {
        ShuffleConvs_1_Downs_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_10_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_10_address0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_10_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_10_address0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_10_address0.read();
    } else {
        ShuffleConvs_2_Downs_10_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_10_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_10_ce0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_10_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_10_ce0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_10_ce0.read();
    } else {
        ShuffleConvs_2_Downs_10_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_10_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_10_ce1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_10_ce1.read();
    } else {
        ShuffleConvs_2_Downs_10_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_10_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_10_we0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_10_we0.read();
    } else {
        ShuffleConvs_2_Downs_10_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_10_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_10_we1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_10_we1.read();
    } else {
        ShuffleConvs_2_Downs_10_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_11_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_11_address0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_11_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_11_address0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_11_address0.read();
    } else {
        ShuffleConvs_2_Downs_11_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_11_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_11_ce0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_11_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_11_ce0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_11_ce0.read();
    } else {
        ShuffleConvs_2_Downs_11_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_11_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_11_ce1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_11_ce1.read();
    } else {
        ShuffleConvs_2_Downs_11_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_11_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_11_we0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_11_we0.read();
    } else {
        ShuffleConvs_2_Downs_11_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_11_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_11_we1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_11_we1.read();
    } else {
        ShuffleConvs_2_Downs_11_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_12_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_12_address0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_12_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_12_address0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_12_address0.read();
    } else {
        ShuffleConvs_2_Downs_12_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_12_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_12_ce0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_12_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_12_ce0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_12_ce0.read();
    } else {
        ShuffleConvs_2_Downs_12_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_12_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_12_ce1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_12_ce1.read();
    } else {
        ShuffleConvs_2_Downs_12_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_12_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_12_we0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_12_we0.read();
    } else {
        ShuffleConvs_2_Downs_12_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_12_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_12_we1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_12_we1.read();
    } else {
        ShuffleConvs_2_Downs_12_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_13_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_13_address0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_13_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_13_address0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_13_address0.read();
    } else {
        ShuffleConvs_2_Downs_13_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_13_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_13_ce0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_13_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_13_ce0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_13_ce0.read();
    } else {
        ShuffleConvs_2_Downs_13_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_13_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_13_ce1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_13_ce1.read();
    } else {
        ShuffleConvs_2_Downs_13_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_13_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_13_we0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_13_we0.read();
    } else {
        ShuffleConvs_2_Downs_13_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_13_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_13_we1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_13_we1.read();
    } else {
        ShuffleConvs_2_Downs_13_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_14_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_14_address0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_14_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_14_address0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_14_address0.read();
    } else {
        ShuffleConvs_2_Downs_14_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_14_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_14_ce0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_14_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_14_ce0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_14_ce0.read();
    } else {
        ShuffleConvs_2_Downs_14_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_14_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_14_ce1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_14_ce1.read();
    } else {
        ShuffleConvs_2_Downs_14_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_14_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_14_we0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_14_we0.read();
    } else {
        ShuffleConvs_2_Downs_14_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_14_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_14_we1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_14_we1.read();
    } else {
        ShuffleConvs_2_Downs_14_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_15_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_15_address0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_15_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_15_address0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_15_address0.read();
    } else {
        ShuffleConvs_2_Downs_15_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_15_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_15_ce0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_15_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_15_ce0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_15_ce0.read();
    } else {
        ShuffleConvs_2_Downs_15_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_15_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_15_ce1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_15_ce1.read();
    } else {
        ShuffleConvs_2_Downs_15_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_15_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_15_we0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_15_we0.read();
    } else {
        ShuffleConvs_2_Downs_15_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_15_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_15_we1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_15_we1.read();
    } else {
        ShuffleConvs_2_Downs_15_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_16_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_16_address0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_16_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_16_address0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_16_address0.read();
    } else {
        ShuffleConvs_2_Downs_16_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_16_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_16_ce0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_16_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_16_ce0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_16_ce0.read();
    } else {
        ShuffleConvs_2_Downs_16_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_16_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_16_ce1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_16_ce1.read();
    } else {
        ShuffleConvs_2_Downs_16_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_16_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_16_we0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_16_we0.read();
    } else {
        ShuffleConvs_2_Downs_16_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_16_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_16_we1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_16_we1.read();
    } else {
        ShuffleConvs_2_Downs_16_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_17_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_17_address0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_17_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_17_address0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_17_address0.read();
    } else {
        ShuffleConvs_2_Downs_17_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_17_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_17_ce0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_17_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_17_ce0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_17_ce0.read();
    } else {
        ShuffleConvs_2_Downs_17_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_17_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_17_ce1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_17_ce1.read();
    } else {
        ShuffleConvs_2_Downs_17_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_17_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_17_we0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_17_we0.read();
    } else {
        ShuffleConvs_2_Downs_17_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_17_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_17_we1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_17_we1.read();
    } else {
        ShuffleConvs_2_Downs_17_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_18_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_18_address0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_18_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_18_address0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_18_address0.read();
    } else {
        ShuffleConvs_2_Downs_18_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_18_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_18_ce0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_18_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_18_ce0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_18_ce0.read();
    } else {
        ShuffleConvs_2_Downs_18_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_18_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_18_ce1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_18_ce1.read();
    } else {
        ShuffleConvs_2_Downs_18_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_18_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_18_we0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_18_we0.read();
    } else {
        ShuffleConvs_2_Downs_18_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_18_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_18_we1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_18_we1.read();
    } else {
        ShuffleConvs_2_Downs_18_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_19_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_19_address0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_19_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_19_address0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_19_address0.read();
    } else {
        ShuffleConvs_2_Downs_19_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_19_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_19_ce0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_19_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_19_ce0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_19_ce0.read();
    } else {
        ShuffleConvs_2_Downs_19_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_19_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_19_ce1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_19_ce1.read();
    } else {
        ShuffleConvs_2_Downs_19_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_19_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_19_we0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_19_we0.read();
    } else {
        ShuffleConvs_2_Downs_19_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_19_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_19_we1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_19_we1.read();
    } else {
        ShuffleConvs_2_Downs_19_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_1_address0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_1_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_1_address0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_1_address0.read();
    } else {
        ShuffleConvs_2_Downs_1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_1_ce0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_1_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_1_ce0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_1_ce0.read();
    } else {
        ShuffleConvs_2_Downs_1_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_1_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_1_ce1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_1_ce1.read();
    } else {
        ShuffleConvs_2_Downs_1_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_1_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_1_we0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_1_we0.read();
    } else {
        ShuffleConvs_2_Downs_1_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_1_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_1_we1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_1_we1.read();
    } else {
        ShuffleConvs_2_Downs_1_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_20_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_20_address0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_20_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_20_address0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_20_address0.read();
    } else {
        ShuffleConvs_2_Downs_20_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_20_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_20_ce0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_20_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_20_ce0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_20_ce0.read();
    } else {
        ShuffleConvs_2_Downs_20_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_20_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_20_ce1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_20_ce1.read();
    } else {
        ShuffleConvs_2_Downs_20_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_20_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_20_we0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_20_we0.read();
    } else {
        ShuffleConvs_2_Downs_20_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_20_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_20_we1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_20_we1.read();
    } else {
        ShuffleConvs_2_Downs_20_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_21_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_21_address0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_21_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_21_address0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_21_address0.read();
    } else {
        ShuffleConvs_2_Downs_21_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_21_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_21_ce0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_21_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_21_ce0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_21_ce0.read();
    } else {
        ShuffleConvs_2_Downs_21_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_21_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_21_ce1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_21_ce1.read();
    } else {
        ShuffleConvs_2_Downs_21_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_21_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_21_we0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_21_we0.read();
    } else {
        ShuffleConvs_2_Downs_21_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_21_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_21_we1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_21_we1.read();
    } else {
        ShuffleConvs_2_Downs_21_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_22_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_22_address0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_22_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_22_address0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_22_address0.read();
    } else {
        ShuffleConvs_2_Downs_22_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_22_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_22_ce0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_22_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_22_ce0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_22_ce0.read();
    } else {
        ShuffleConvs_2_Downs_22_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_22_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_22_ce1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_22_ce1.read();
    } else {
        ShuffleConvs_2_Downs_22_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_22_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_22_we0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_22_we0.read();
    } else {
        ShuffleConvs_2_Downs_22_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_22_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_22_we1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_22_we1.read();
    } else {
        ShuffleConvs_2_Downs_22_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_23_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_23_address0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_23_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_23_address0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_23_address0.read();
    } else {
        ShuffleConvs_2_Downs_23_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_23_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_23_ce0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_23_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_23_ce0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_23_ce0.read();
    } else {
        ShuffleConvs_2_Downs_23_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_23_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_23_ce1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_23_ce1.read();
    } else {
        ShuffleConvs_2_Downs_23_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_23_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_23_we0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_23_we0.read();
    } else {
        ShuffleConvs_2_Downs_23_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_23_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_23_we1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_23_we1.read();
    } else {
        ShuffleConvs_2_Downs_23_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_24_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_24_address0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_24_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_24_address0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_24_address0.read();
    } else {
        ShuffleConvs_2_Downs_24_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_24_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_24_ce0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_24_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_24_ce0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_24_ce0.read();
    } else {
        ShuffleConvs_2_Downs_24_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_24_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_24_ce1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_24_ce1.read();
    } else {
        ShuffleConvs_2_Downs_24_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_24_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_24_we0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_24_we0.read();
    } else {
        ShuffleConvs_2_Downs_24_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_24_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_24_we1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_24_we1.read();
    } else {
        ShuffleConvs_2_Downs_24_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_25_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_25_address0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_25_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_25_address0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_25_address0.read();
    } else {
        ShuffleConvs_2_Downs_25_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_25_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_25_ce0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_25_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_25_ce0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_25_ce0.read();
    } else {
        ShuffleConvs_2_Downs_25_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_25_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_25_ce1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_25_ce1.read();
    } else {
        ShuffleConvs_2_Downs_25_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_25_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_25_we0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_25_we0.read();
    } else {
        ShuffleConvs_2_Downs_25_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_25_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_25_we1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_25_we1.read();
    } else {
        ShuffleConvs_2_Downs_25_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_26_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_26_address0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_26_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_26_address0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_26_address0.read();
    } else {
        ShuffleConvs_2_Downs_26_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_26_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_26_ce0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_26_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_26_ce0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_26_ce0.read();
    } else {
        ShuffleConvs_2_Downs_26_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_26_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_26_ce1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_26_ce1.read();
    } else {
        ShuffleConvs_2_Downs_26_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_26_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_26_we0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_26_we0.read();
    } else {
        ShuffleConvs_2_Downs_26_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_26_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_26_we1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_26_we1.read();
    } else {
        ShuffleConvs_2_Downs_26_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_27_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_27_address0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_27_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_27_address0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_27_address0.read();
    } else {
        ShuffleConvs_2_Downs_27_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_27_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_27_ce0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_27_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_27_ce0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_27_ce0.read();
    } else {
        ShuffleConvs_2_Downs_27_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_27_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_27_ce1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_27_ce1.read();
    } else {
        ShuffleConvs_2_Downs_27_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_27_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_27_we0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_27_we0.read();
    } else {
        ShuffleConvs_2_Downs_27_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_27_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_27_we1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_27_we1.read();
    } else {
        ShuffleConvs_2_Downs_27_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_28_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_28_address0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_28_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_28_address0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_28_address0.read();
    } else {
        ShuffleConvs_2_Downs_28_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_28_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_28_ce0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_28_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_28_ce0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_28_ce0.read();
    } else {
        ShuffleConvs_2_Downs_28_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_28_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_28_ce1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_28_ce1.read();
    } else {
        ShuffleConvs_2_Downs_28_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_28_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_28_we0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_28_we0.read();
    } else {
        ShuffleConvs_2_Downs_28_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_28_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_28_we1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_28_we1.read();
    } else {
        ShuffleConvs_2_Downs_28_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_29_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_29_address0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_29_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_29_address0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_29_address0.read();
    } else {
        ShuffleConvs_2_Downs_29_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_29_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_29_ce0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_29_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_29_ce0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_29_ce0.read();
    } else {
        ShuffleConvs_2_Downs_29_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_29_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_29_ce1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_29_ce1.read();
    } else {
        ShuffleConvs_2_Downs_29_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_29_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_29_we0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_29_we0.read();
    } else {
        ShuffleConvs_2_Downs_29_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_29_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_29_we1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_29_we1.read();
    } else {
        ShuffleConvs_2_Downs_29_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_2_address0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_2_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_2_address0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_2_address0.read();
    } else {
        ShuffleConvs_2_Downs_2_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_2_ce0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_2_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_2_ce0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_2_ce0.read();
    } else {
        ShuffleConvs_2_Downs_2_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_2_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_2_ce1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_2_ce1.read();
    } else {
        ShuffleConvs_2_Downs_2_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_2_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_2_we0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_2_we0.read();
    } else {
        ShuffleConvs_2_Downs_2_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_2_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_2_we1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_2_we1.read();
    } else {
        ShuffleConvs_2_Downs_2_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_30_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_30_address0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_30_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_30_address0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_30_address0.read();
    } else {
        ShuffleConvs_2_Downs_30_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_30_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_30_ce0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_30_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_30_ce0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_30_ce0.read();
    } else {
        ShuffleConvs_2_Downs_30_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_30_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_30_ce1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_30_ce1.read();
    } else {
        ShuffleConvs_2_Downs_30_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_30_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_30_we0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_30_we0.read();
    } else {
        ShuffleConvs_2_Downs_30_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_30_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_30_we1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_30_we1.read();
    } else {
        ShuffleConvs_2_Downs_30_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_31_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_31_address0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_31_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_31_address0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_31_address0.read();
    } else {
        ShuffleConvs_2_Downs_31_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_31_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_31_ce0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_31_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_31_ce0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_31_ce0.read();
    } else {
        ShuffleConvs_2_Downs_31_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_31_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_31_ce1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_31_ce1.read();
    } else {
        ShuffleConvs_2_Downs_31_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_31_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_31_we0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_31_we0.read();
    } else {
        ShuffleConvs_2_Downs_31_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_31_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_31_we1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_31_we1.read();
    } else {
        ShuffleConvs_2_Downs_31_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_32_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_32_address0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_32_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_32_address0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_32_address0.read();
    } else {
        ShuffleConvs_2_Downs_32_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_32_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_32_ce0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_32_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_32_ce0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_32_ce0.read();
    } else {
        ShuffleConvs_2_Downs_32_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_32_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_32_ce1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_32_ce1.read();
    } else {
        ShuffleConvs_2_Downs_32_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_32_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_32_we0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_32_we0.read();
    } else {
        ShuffleConvs_2_Downs_32_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_32_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_32_we1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_32_we1.read();
    } else {
        ShuffleConvs_2_Downs_32_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_33_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_33_address0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_33_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_33_address0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_33_address0.read();
    } else {
        ShuffleConvs_2_Downs_33_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_33_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_33_ce0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_33_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_33_ce0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_33_ce0.read();
    } else {
        ShuffleConvs_2_Downs_33_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_33_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_33_ce1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_33_ce1.read();
    } else {
        ShuffleConvs_2_Downs_33_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_33_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_33_we0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_33_we0.read();
    } else {
        ShuffleConvs_2_Downs_33_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_33_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_33_we1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_33_we1.read();
    } else {
        ShuffleConvs_2_Downs_33_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_34_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_34_address0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_34_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_34_address0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_34_address0.read();
    } else {
        ShuffleConvs_2_Downs_34_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_34_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_34_ce0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_34_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_34_ce0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_34_ce0.read();
    } else {
        ShuffleConvs_2_Downs_34_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_34_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_34_ce1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_34_ce1.read();
    } else {
        ShuffleConvs_2_Downs_34_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_34_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_34_we0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_34_we0.read();
    } else {
        ShuffleConvs_2_Downs_34_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_34_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_34_we1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_34_we1.read();
    } else {
        ShuffleConvs_2_Downs_34_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_35_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_35_address0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_35_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_35_address0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_35_address0.read();
    } else {
        ShuffleConvs_2_Downs_35_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_35_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_35_ce0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_35_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_35_ce0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_35_ce0.read();
    } else {
        ShuffleConvs_2_Downs_35_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_35_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_35_ce1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_35_ce1.read();
    } else {
        ShuffleConvs_2_Downs_35_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_35_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_35_we0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_35_we0.read();
    } else {
        ShuffleConvs_2_Downs_35_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_35_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_35_we1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_35_we1.read();
    } else {
        ShuffleConvs_2_Downs_35_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_36_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_36_address0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_36_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_36_address0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_36_address0.read();
    } else {
        ShuffleConvs_2_Downs_36_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_36_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_36_ce0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_36_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_36_ce0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_36_ce0.read();
    } else {
        ShuffleConvs_2_Downs_36_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_36_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_36_ce1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_36_ce1.read();
    } else {
        ShuffleConvs_2_Downs_36_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_36_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_36_we0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_36_we0.read();
    } else {
        ShuffleConvs_2_Downs_36_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_36_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_36_we1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_36_we1.read();
    } else {
        ShuffleConvs_2_Downs_36_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_37_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_37_address0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_37_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_37_address0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_37_address0.read();
    } else {
        ShuffleConvs_2_Downs_37_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_37_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_37_ce0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_37_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_37_ce0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_37_ce0.read();
    } else {
        ShuffleConvs_2_Downs_37_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_37_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_37_ce1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_37_ce1.read();
    } else {
        ShuffleConvs_2_Downs_37_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_37_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_37_we0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_37_we0.read();
    } else {
        ShuffleConvs_2_Downs_37_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_37_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_37_we1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_37_we1.read();
    } else {
        ShuffleConvs_2_Downs_37_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_38_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_38_address0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_38_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_38_address0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_38_address0.read();
    } else {
        ShuffleConvs_2_Downs_38_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_38_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_38_ce0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_38_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_38_ce0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_38_ce0.read();
    } else {
        ShuffleConvs_2_Downs_38_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_38_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_38_ce1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_38_ce1.read();
    } else {
        ShuffleConvs_2_Downs_38_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_38_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_38_we0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_38_we0.read();
    } else {
        ShuffleConvs_2_Downs_38_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_38_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_38_we1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_38_we1.read();
    } else {
        ShuffleConvs_2_Downs_38_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_39_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_39_address0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_39_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_39_address0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_39_address0.read();
    } else {
        ShuffleConvs_2_Downs_39_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_39_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_39_ce0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_39_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_39_ce0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_39_ce0.read();
    } else {
        ShuffleConvs_2_Downs_39_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_39_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_39_ce1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_39_ce1.read();
    } else {
        ShuffleConvs_2_Downs_39_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_39_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_39_we0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_39_we0.read();
    } else {
        ShuffleConvs_2_Downs_39_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_39_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_39_we1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_39_we1.read();
    } else {
        ShuffleConvs_2_Downs_39_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_3_address0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_3_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_3_address0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_3_address0.read();
    } else {
        ShuffleConvs_2_Downs_3_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_3_ce0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_3_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_3_ce0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_3_ce0.read();
    } else {
        ShuffleConvs_2_Downs_3_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_3_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_3_ce1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_3_ce1.read();
    } else {
        ShuffleConvs_2_Downs_3_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_3_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_3_we0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_3_we0.read();
    } else {
        ShuffleConvs_2_Downs_3_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_3_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_3_we1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_3_we1.read();
    } else {
        ShuffleConvs_2_Downs_3_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_40_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_40_address0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_40_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_40_address0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_40_address0.read();
    } else {
        ShuffleConvs_2_Downs_40_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_40_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_40_ce0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_40_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_40_ce0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_40_ce0.read();
    } else {
        ShuffleConvs_2_Downs_40_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_40_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_40_ce1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_40_ce1.read();
    } else {
        ShuffleConvs_2_Downs_40_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_40_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_40_we0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_40_we0.read();
    } else {
        ShuffleConvs_2_Downs_40_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_40_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_40_we1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_40_we1.read();
    } else {
        ShuffleConvs_2_Downs_40_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_41_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_41_address0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_41_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_41_address0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_41_address0.read();
    } else {
        ShuffleConvs_2_Downs_41_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_41_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_41_ce0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_41_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_41_ce0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_41_ce0.read();
    } else {
        ShuffleConvs_2_Downs_41_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_41_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_41_ce1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_41_ce1.read();
    } else {
        ShuffleConvs_2_Downs_41_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_41_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_41_we0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_41_we0.read();
    } else {
        ShuffleConvs_2_Downs_41_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_41_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_41_we1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_41_we1.read();
    } else {
        ShuffleConvs_2_Downs_41_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_42_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_42_address0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_42_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_42_address0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_42_address0.read();
    } else {
        ShuffleConvs_2_Downs_42_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_42_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_42_ce0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_42_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_42_ce0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_42_ce0.read();
    } else {
        ShuffleConvs_2_Downs_42_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_42_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_42_ce1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_42_ce1.read();
    } else {
        ShuffleConvs_2_Downs_42_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_42_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_42_we0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_42_we0.read();
    } else {
        ShuffleConvs_2_Downs_42_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_42_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_42_we1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_42_we1.read();
    } else {
        ShuffleConvs_2_Downs_42_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_43_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_43_address0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_43_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_43_address0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_43_address0.read();
    } else {
        ShuffleConvs_2_Downs_43_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_43_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_43_ce0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_43_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_43_ce0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_43_ce0.read();
    } else {
        ShuffleConvs_2_Downs_43_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_43_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_43_ce1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_43_ce1.read();
    } else {
        ShuffleConvs_2_Downs_43_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_43_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_43_we0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_43_we0.read();
    } else {
        ShuffleConvs_2_Downs_43_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_43_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_43_we1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_43_we1.read();
    } else {
        ShuffleConvs_2_Downs_43_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_44_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_44_address0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_44_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_44_address0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_44_address0.read();
    } else {
        ShuffleConvs_2_Downs_44_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_44_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_44_ce0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_44_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_44_ce0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_44_ce0.read();
    } else {
        ShuffleConvs_2_Downs_44_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_44_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_44_ce1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_44_ce1.read();
    } else {
        ShuffleConvs_2_Downs_44_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_44_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_44_we0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_44_we0.read();
    } else {
        ShuffleConvs_2_Downs_44_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_44_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_44_we1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_44_we1.read();
    } else {
        ShuffleConvs_2_Downs_44_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_45_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_45_address0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_45_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_45_address0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_45_address0.read();
    } else {
        ShuffleConvs_2_Downs_45_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_45_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_45_ce0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_45_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_45_ce0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_45_ce0.read();
    } else {
        ShuffleConvs_2_Downs_45_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_45_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_45_ce1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_45_ce1.read();
    } else {
        ShuffleConvs_2_Downs_45_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_45_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_45_we0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_45_we0.read();
    } else {
        ShuffleConvs_2_Downs_45_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_45_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_45_we1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_45_we1.read();
    } else {
        ShuffleConvs_2_Downs_45_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_46_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_46_address0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_46_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_46_address0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_46_address0.read();
    } else {
        ShuffleConvs_2_Downs_46_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_46_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_46_ce0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_46_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_46_ce0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_46_ce0.read();
    } else {
        ShuffleConvs_2_Downs_46_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_46_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_46_ce1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_46_ce1.read();
    } else {
        ShuffleConvs_2_Downs_46_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_46_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_46_we0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_46_we0.read();
    } else {
        ShuffleConvs_2_Downs_46_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_46_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_46_we1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_46_we1.read();
    } else {
        ShuffleConvs_2_Downs_46_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_47_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_47_address0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_47_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_47_address0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_47_address0.read();
    } else {
        ShuffleConvs_2_Downs_47_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_47_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_47_ce0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_47_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_47_ce0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_47_ce0.read();
    } else {
        ShuffleConvs_2_Downs_47_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_47_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_47_ce1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_47_ce1.read();
    } else {
        ShuffleConvs_2_Downs_47_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_47_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_47_we0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_47_we0.read();
    } else {
        ShuffleConvs_2_Downs_47_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_47_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_47_we1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_47_we1.read();
    } else {
        ShuffleConvs_2_Downs_47_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_48_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_48_address0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_48_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_48_address0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_48_address0.read();
    } else {
        ShuffleConvs_2_Downs_48_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_48_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_48_ce0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_48_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_48_ce0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_48_ce0.read();
    } else {
        ShuffleConvs_2_Downs_48_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_48_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_48_ce1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_48_ce1.read();
    } else {
        ShuffleConvs_2_Downs_48_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_48_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_48_we0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_48_we0.read();
    } else {
        ShuffleConvs_2_Downs_48_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_48_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_48_we1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_48_we1.read();
    } else {
        ShuffleConvs_2_Downs_48_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_49_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_49_address0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_49_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_49_address0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_49_address0.read();
    } else {
        ShuffleConvs_2_Downs_49_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_49_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_49_ce0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_49_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_49_ce0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_49_ce0.read();
    } else {
        ShuffleConvs_2_Downs_49_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_49_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_49_ce1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_49_ce1.read();
    } else {
        ShuffleConvs_2_Downs_49_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_49_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_49_we0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_49_we0.read();
    } else {
        ShuffleConvs_2_Downs_49_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_49_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_49_we1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_49_we1.read();
    } else {
        ShuffleConvs_2_Downs_49_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_4_address0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_4_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_4_address0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_4_address0.read();
    } else {
        ShuffleConvs_2_Downs_4_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_4_ce0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_4_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_4_ce0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_4_ce0.read();
    } else {
        ShuffleConvs_2_Downs_4_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_4_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_4_ce1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_4_ce1.read();
    } else {
        ShuffleConvs_2_Downs_4_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_4_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_4_we0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_4_we0.read();
    } else {
        ShuffleConvs_2_Downs_4_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_4_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_4_we1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_4_we1.read();
    } else {
        ShuffleConvs_2_Downs_4_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_50_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_50_address0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_50_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_50_address0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_50_address0.read();
    } else {
        ShuffleConvs_2_Downs_50_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_50_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_50_ce0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_50_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_50_ce0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_50_ce0.read();
    } else {
        ShuffleConvs_2_Downs_50_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_50_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_50_ce1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_50_ce1.read();
    } else {
        ShuffleConvs_2_Downs_50_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_50_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_50_we0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_50_we0.read();
    } else {
        ShuffleConvs_2_Downs_50_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_50_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_50_we1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_50_we1.read();
    } else {
        ShuffleConvs_2_Downs_50_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_51_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_51_address0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_51_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_51_address0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_51_address0.read();
    } else {
        ShuffleConvs_2_Downs_51_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_51_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_51_ce0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_51_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_51_ce0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_51_ce0.read();
    } else {
        ShuffleConvs_2_Downs_51_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_51_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_51_ce1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_51_ce1.read();
    } else {
        ShuffleConvs_2_Downs_51_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_51_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_51_we0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_51_we0.read();
    } else {
        ShuffleConvs_2_Downs_51_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_51_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_51_we1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_51_we1.read();
    } else {
        ShuffleConvs_2_Downs_51_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_52_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_52_address0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_52_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_52_address0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_52_address0.read();
    } else {
        ShuffleConvs_2_Downs_52_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_52_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_52_ce0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_52_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_52_ce0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_52_ce0.read();
    } else {
        ShuffleConvs_2_Downs_52_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_52_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_52_ce1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_52_ce1.read();
    } else {
        ShuffleConvs_2_Downs_52_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_52_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_52_we0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_52_we0.read();
    } else {
        ShuffleConvs_2_Downs_52_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_52_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_52_we1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_52_we1.read();
    } else {
        ShuffleConvs_2_Downs_52_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_53_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_53_address0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_53_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_53_address0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_53_address0.read();
    } else {
        ShuffleConvs_2_Downs_53_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_53_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_53_ce0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_53_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_53_ce0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_53_ce0.read();
    } else {
        ShuffleConvs_2_Downs_53_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_53_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_53_ce1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_53_ce1.read();
    } else {
        ShuffleConvs_2_Downs_53_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_53_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_53_we0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_53_we0.read();
    } else {
        ShuffleConvs_2_Downs_53_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_53_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_53_we1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_53_we1.read();
    } else {
        ShuffleConvs_2_Downs_53_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_54_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_54_address0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_54_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_54_address0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_54_address0.read();
    } else {
        ShuffleConvs_2_Downs_54_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_54_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_54_ce0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_54_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_54_ce0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_54_ce0.read();
    } else {
        ShuffleConvs_2_Downs_54_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_54_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_54_ce1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_54_ce1.read();
    } else {
        ShuffleConvs_2_Downs_54_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_54_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_54_we0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_54_we0.read();
    } else {
        ShuffleConvs_2_Downs_54_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_54_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_54_we1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_54_we1.read();
    } else {
        ShuffleConvs_2_Downs_54_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_55_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_55_address0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_55_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_55_address0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_55_address0.read();
    } else {
        ShuffleConvs_2_Downs_55_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_55_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_55_ce0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_55_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_55_ce0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_55_ce0.read();
    } else {
        ShuffleConvs_2_Downs_55_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_55_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_55_ce1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_55_ce1.read();
    } else {
        ShuffleConvs_2_Downs_55_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_55_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_55_we0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_55_we0.read();
    } else {
        ShuffleConvs_2_Downs_55_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_55_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_55_we1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_55_we1.read();
    } else {
        ShuffleConvs_2_Downs_55_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_56_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_56_address0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_56_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_56_address0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_56_address0.read();
    } else {
        ShuffleConvs_2_Downs_56_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_56_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_56_ce0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_56_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_56_ce0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_56_ce0.read();
    } else {
        ShuffleConvs_2_Downs_56_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_56_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_56_ce1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_56_ce1.read();
    } else {
        ShuffleConvs_2_Downs_56_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_56_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_56_we0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_56_we0.read();
    } else {
        ShuffleConvs_2_Downs_56_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_56_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_56_we1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_56_we1.read();
    } else {
        ShuffleConvs_2_Downs_56_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_57_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_57_address0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_57_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_57_address0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_57_address0.read();
    } else {
        ShuffleConvs_2_Downs_57_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_57_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_57_ce0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_57_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_57_ce0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_57_ce0.read();
    } else {
        ShuffleConvs_2_Downs_57_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_57_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_57_ce1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_57_ce1.read();
    } else {
        ShuffleConvs_2_Downs_57_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_57_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_57_we0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_57_we0.read();
    } else {
        ShuffleConvs_2_Downs_57_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_57_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_57_we1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_57_we1.read();
    } else {
        ShuffleConvs_2_Downs_57_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_58_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_58_address0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_58_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_58_address0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_58_address0.read();
    } else {
        ShuffleConvs_2_Downs_58_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_58_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_58_ce0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_58_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_58_ce0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_58_ce0.read();
    } else {
        ShuffleConvs_2_Downs_58_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_58_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_58_ce1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_58_ce1.read();
    } else {
        ShuffleConvs_2_Downs_58_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_58_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_58_we0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_58_we0.read();
    } else {
        ShuffleConvs_2_Downs_58_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_58_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_58_we1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_58_we1.read();
    } else {
        ShuffleConvs_2_Downs_58_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_59_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_59_address0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_59_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_59_address0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_59_address0.read();
    } else {
        ShuffleConvs_2_Downs_59_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_59_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_59_ce0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_59_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_59_ce0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_59_ce0.read();
    } else {
        ShuffleConvs_2_Downs_59_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_59_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_59_ce1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_59_ce1.read();
    } else {
        ShuffleConvs_2_Downs_59_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_59_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_59_we0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_59_we0.read();
    } else {
        ShuffleConvs_2_Downs_59_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_59_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_59_we1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_59_we1.read();
    } else {
        ShuffleConvs_2_Downs_59_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_5_address0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_5_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_5_address0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_5_address0.read();
    } else {
        ShuffleConvs_2_Downs_5_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_5_ce0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_5_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_5_ce0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_5_ce0.read();
    } else {
        ShuffleConvs_2_Downs_5_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_5_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_5_ce1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_5_ce1.read();
    } else {
        ShuffleConvs_2_Downs_5_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_5_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_5_we0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_5_we0.read();
    } else {
        ShuffleConvs_2_Downs_5_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_5_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_5_we1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_5_we1.read();
    } else {
        ShuffleConvs_2_Downs_5_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_60_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_60_address0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_60_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_60_address0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_60_address0.read();
    } else {
        ShuffleConvs_2_Downs_60_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_60_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_60_ce0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_60_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_60_ce0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_60_ce0.read();
    } else {
        ShuffleConvs_2_Downs_60_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_60_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_60_ce1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_60_ce1.read();
    } else {
        ShuffleConvs_2_Downs_60_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_60_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_60_we0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_60_we0.read();
    } else {
        ShuffleConvs_2_Downs_60_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_60_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_60_we1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_60_we1.read();
    } else {
        ShuffleConvs_2_Downs_60_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_61_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_61_address0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_61_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_61_address0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_61_address0.read();
    } else {
        ShuffleConvs_2_Downs_61_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_61_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_61_ce0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_61_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_61_ce0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_61_ce0.read();
    } else {
        ShuffleConvs_2_Downs_61_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_61_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_61_ce1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_61_ce1.read();
    } else {
        ShuffleConvs_2_Downs_61_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_61_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_61_we0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_61_we0.read();
    } else {
        ShuffleConvs_2_Downs_61_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_61_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_61_we1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_61_we1.read();
    } else {
        ShuffleConvs_2_Downs_61_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_62_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_62_address0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_62_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_62_address0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_62_address0.read();
    } else {
        ShuffleConvs_2_Downs_62_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_62_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_62_ce0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_62_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_62_ce0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_62_ce0.read();
    } else {
        ShuffleConvs_2_Downs_62_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_62_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_62_ce1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_62_ce1.read();
    } else {
        ShuffleConvs_2_Downs_62_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_62_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_62_we0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_62_we0.read();
    } else {
        ShuffleConvs_2_Downs_62_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_62_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_62_we1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_62_we1.read();
    } else {
        ShuffleConvs_2_Downs_62_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_63_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_63_address0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_63_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_63_address0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_63_address0.read();
    } else {
        ShuffleConvs_2_Downs_63_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_63_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_63_ce0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_63_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_63_ce0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_63_ce0.read();
    } else {
        ShuffleConvs_2_Downs_63_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_63_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_63_ce1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_63_ce1.read();
    } else {
        ShuffleConvs_2_Downs_63_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_63_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_63_we0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_63_we0.read();
    } else {
        ShuffleConvs_2_Downs_63_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_63_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_63_we1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_63_we1.read();
    } else {
        ShuffleConvs_2_Downs_63_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_64_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_64_address0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_64_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_64_address0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_64_address0.read();
    } else {
        ShuffleConvs_2_Downs_64_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_64_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_64_ce0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_64_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_64_ce0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_64_ce0.read();
    } else {
        ShuffleConvs_2_Downs_64_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_64_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_64_ce1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_64_ce1.read();
    } else {
        ShuffleConvs_2_Downs_64_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_64_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_64_we0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_64_we0.read();
    } else {
        ShuffleConvs_2_Downs_64_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_64_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_64_we1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_64_we1.read();
    } else {
        ShuffleConvs_2_Downs_64_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_65_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_65_address0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_65_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_65_address0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_65_address0.read();
    } else {
        ShuffleConvs_2_Downs_65_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_65_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_65_ce0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_65_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_65_ce0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_65_ce0.read();
    } else {
        ShuffleConvs_2_Downs_65_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_65_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_65_ce1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_65_ce1.read();
    } else {
        ShuffleConvs_2_Downs_65_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_65_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_65_we0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_65_we0.read();
    } else {
        ShuffleConvs_2_Downs_65_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_65_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_65_we1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_65_we1.read();
    } else {
        ShuffleConvs_2_Downs_65_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_66_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_66_address0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_66_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_66_address0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_66_address0.read();
    } else {
        ShuffleConvs_2_Downs_66_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_66_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_66_ce0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_66_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_66_ce0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_66_ce0.read();
    } else {
        ShuffleConvs_2_Downs_66_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_66_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_66_ce1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_66_ce1.read();
    } else {
        ShuffleConvs_2_Downs_66_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_66_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_66_we0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_66_we0.read();
    } else {
        ShuffleConvs_2_Downs_66_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_66_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_66_we1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_66_we1.read();
    } else {
        ShuffleConvs_2_Downs_66_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_67_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_67_address0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_67_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_67_address0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_67_address0.read();
    } else {
        ShuffleConvs_2_Downs_67_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_67_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_67_ce0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_67_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_67_ce0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_67_ce0.read();
    } else {
        ShuffleConvs_2_Downs_67_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_67_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_67_ce1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_67_ce1.read();
    } else {
        ShuffleConvs_2_Downs_67_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_67_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_67_we0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_67_we0.read();
    } else {
        ShuffleConvs_2_Downs_67_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_67_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_67_we1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_67_we1.read();
    } else {
        ShuffleConvs_2_Downs_67_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_68_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_68_address0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_68_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_68_address0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_68_address0.read();
    } else {
        ShuffleConvs_2_Downs_68_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_68_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_68_ce0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_68_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_68_ce0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_68_ce0.read();
    } else {
        ShuffleConvs_2_Downs_68_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_68_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_68_ce1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_68_ce1.read();
    } else {
        ShuffleConvs_2_Downs_68_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_68_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_68_we0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_68_we0.read();
    } else {
        ShuffleConvs_2_Downs_68_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_68_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_68_we1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_68_we1.read();
    } else {
        ShuffleConvs_2_Downs_68_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_69_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_69_address0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_69_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_69_address0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_69_address0.read();
    } else {
        ShuffleConvs_2_Downs_69_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_69_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_69_ce0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_69_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_69_ce0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_69_ce0.read();
    } else {
        ShuffleConvs_2_Downs_69_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_69_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_69_ce1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_69_ce1.read();
    } else {
        ShuffleConvs_2_Downs_69_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_69_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_69_we0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_69_we0.read();
    } else {
        ShuffleConvs_2_Downs_69_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_69_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_69_we1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_69_we1.read();
    } else {
        ShuffleConvs_2_Downs_69_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_6_address0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_6_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_6_address0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_6_address0.read();
    } else {
        ShuffleConvs_2_Downs_6_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_6_ce0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_6_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_6_ce0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_6_ce0.read();
    } else {
        ShuffleConvs_2_Downs_6_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_6_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_6_ce1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_6_ce1.read();
    } else {
        ShuffleConvs_2_Downs_6_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_6_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_6_we0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_6_we0.read();
    } else {
        ShuffleConvs_2_Downs_6_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_6_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_6_we1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_6_we1.read();
    } else {
        ShuffleConvs_2_Downs_6_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_70_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_70_address0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_70_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_70_address0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_70_address0.read();
    } else {
        ShuffleConvs_2_Downs_70_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_70_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_70_ce0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_70_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_70_ce0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_70_ce0.read();
    } else {
        ShuffleConvs_2_Downs_70_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_70_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_70_ce1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_70_ce1.read();
    } else {
        ShuffleConvs_2_Downs_70_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_70_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_70_we0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_70_we0.read();
    } else {
        ShuffleConvs_2_Downs_70_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_70_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_70_we1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_70_we1.read();
    } else {
        ShuffleConvs_2_Downs_70_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_71_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_71_address0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_71_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_71_address0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_71_address0.read();
    } else {
        ShuffleConvs_2_Downs_71_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_71_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_71_ce0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_71_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_71_ce0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_71_ce0.read();
    } else {
        ShuffleConvs_2_Downs_71_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_71_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_71_ce1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_71_ce1.read();
    } else {
        ShuffleConvs_2_Downs_71_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_71_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_71_we0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_71_we0.read();
    } else {
        ShuffleConvs_2_Downs_71_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_71_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_71_we1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_71_we1.read();
    } else {
        ShuffleConvs_2_Downs_71_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_72_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_72_address0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_72_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_72_address0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_72_address0.read();
    } else {
        ShuffleConvs_2_Downs_72_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_72_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_72_ce0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_72_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_72_ce0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_72_ce0.read();
    } else {
        ShuffleConvs_2_Downs_72_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_72_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_72_ce1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_72_ce1.read();
    } else {
        ShuffleConvs_2_Downs_72_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_72_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_72_we0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_72_we0.read();
    } else {
        ShuffleConvs_2_Downs_72_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_72_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_72_we1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_72_we1.read();
    } else {
        ShuffleConvs_2_Downs_72_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_73_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_73_address0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_73_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_73_address0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_73_address0.read();
    } else {
        ShuffleConvs_2_Downs_73_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_73_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_73_ce0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_73_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_73_ce0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_73_ce0.read();
    } else {
        ShuffleConvs_2_Downs_73_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_73_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_73_ce1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_73_ce1.read();
    } else {
        ShuffleConvs_2_Downs_73_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_73_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_73_we0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_73_we0.read();
    } else {
        ShuffleConvs_2_Downs_73_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_73_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_73_we1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_73_we1.read();
    } else {
        ShuffleConvs_2_Downs_73_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_74_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_74_address0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_74_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_74_address0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_74_address0.read();
    } else {
        ShuffleConvs_2_Downs_74_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_74_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_74_ce0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_74_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_74_ce0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_74_ce0.read();
    } else {
        ShuffleConvs_2_Downs_74_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_74_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_74_ce1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_74_ce1.read();
    } else {
        ShuffleConvs_2_Downs_74_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_74_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_74_we0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_74_we0.read();
    } else {
        ShuffleConvs_2_Downs_74_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_74_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_74_we1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_74_we1.read();
    } else {
        ShuffleConvs_2_Downs_74_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_75_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_75_address0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_75_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_75_address0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_75_address0.read();
    } else {
        ShuffleConvs_2_Downs_75_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_75_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_75_ce0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_75_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_75_ce0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_75_ce0.read();
    } else {
        ShuffleConvs_2_Downs_75_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_75_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_75_ce1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_75_ce1.read();
    } else {
        ShuffleConvs_2_Downs_75_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_75_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_75_we0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_75_we0.read();
    } else {
        ShuffleConvs_2_Downs_75_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_75_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_75_we1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_75_we1.read();
    } else {
        ShuffleConvs_2_Downs_75_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_76_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_76_address0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_76_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_76_address0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_76_address0.read();
    } else {
        ShuffleConvs_2_Downs_76_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_76_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_76_ce0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_76_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_76_ce0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_76_ce0.read();
    } else {
        ShuffleConvs_2_Downs_76_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_76_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_76_ce1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_76_ce1.read();
    } else {
        ShuffleConvs_2_Downs_76_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_76_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_76_we0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_76_we0.read();
    } else {
        ShuffleConvs_2_Downs_76_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_76_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_76_we1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_76_we1.read();
    } else {
        ShuffleConvs_2_Downs_76_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_77_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_77_address0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_77_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_77_address0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_77_address0.read();
    } else {
        ShuffleConvs_2_Downs_77_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_77_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_77_ce0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_77_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_77_ce0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_77_ce0.read();
    } else {
        ShuffleConvs_2_Downs_77_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_77_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_77_ce1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_77_ce1.read();
    } else {
        ShuffleConvs_2_Downs_77_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_77_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_77_we0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_77_we0.read();
    } else {
        ShuffleConvs_2_Downs_77_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_77_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_77_we1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_77_we1.read();
    } else {
        ShuffleConvs_2_Downs_77_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_78_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_78_address0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_78_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_78_address0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_78_address0.read();
    } else {
        ShuffleConvs_2_Downs_78_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_78_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_78_ce0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_78_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_78_ce0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_78_ce0.read();
    } else {
        ShuffleConvs_2_Downs_78_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_78_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_78_ce1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_78_ce1.read();
    } else {
        ShuffleConvs_2_Downs_78_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_78_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_78_we0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_78_we0.read();
    } else {
        ShuffleConvs_2_Downs_78_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_78_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_78_we1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_78_we1.read();
    } else {
        ShuffleConvs_2_Downs_78_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_79_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_79_address0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_79_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_79_address0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_79_address0.read();
    } else {
        ShuffleConvs_2_Downs_79_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_79_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_79_ce0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_79_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_79_ce0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_79_ce0.read();
    } else {
        ShuffleConvs_2_Downs_79_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_79_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_79_ce1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_79_ce1.read();
    } else {
        ShuffleConvs_2_Downs_79_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_79_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_79_we0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_79_we0.read();
    } else {
        ShuffleConvs_2_Downs_79_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_79_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_79_we1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_79_we1.read();
    } else {
        ShuffleConvs_2_Downs_79_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_7_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_7_address0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_7_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_7_address0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_7_address0.read();
    } else {
        ShuffleConvs_2_Downs_7_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_7_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_7_ce0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_7_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_7_ce0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_7_ce0.read();
    } else {
        ShuffleConvs_2_Downs_7_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_7_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_7_ce1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_7_ce1.read();
    } else {
        ShuffleConvs_2_Downs_7_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_7_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_7_we0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_7_we0.read();
    } else {
        ShuffleConvs_2_Downs_7_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_7_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_7_we1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_7_we1.read();
    } else {
        ShuffleConvs_2_Downs_7_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_80_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_80_address0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_80_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_80_address0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_80_address0.read();
    } else {
        ShuffleConvs_2_Downs_80_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_80_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_80_ce0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_80_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_80_ce0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_80_ce0.read();
    } else {
        ShuffleConvs_2_Downs_80_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_80_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_80_ce1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_80_ce1.read();
    } else {
        ShuffleConvs_2_Downs_80_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_80_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_80_we0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_80_we0.read();
    } else {
        ShuffleConvs_2_Downs_80_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_80_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_80_we1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_80_we1.read();
    } else {
        ShuffleConvs_2_Downs_80_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_81_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_81_address0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_81_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_81_address0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_81_address0.read();
    } else {
        ShuffleConvs_2_Downs_81_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_81_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_81_ce0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_81_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_81_ce0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_81_ce0.read();
    } else {
        ShuffleConvs_2_Downs_81_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_81_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_81_ce1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_81_ce1.read();
    } else {
        ShuffleConvs_2_Downs_81_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_81_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_81_we0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_81_we0.read();
    } else {
        ShuffleConvs_2_Downs_81_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_81_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_81_we1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_81_we1.read();
    } else {
        ShuffleConvs_2_Downs_81_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_82_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_82_address0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_82_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_82_address0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_82_address0.read();
    } else {
        ShuffleConvs_2_Downs_82_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_82_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_82_ce0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_82_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_82_ce0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_82_ce0.read();
    } else {
        ShuffleConvs_2_Downs_82_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_82_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_82_ce1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_82_ce1.read();
    } else {
        ShuffleConvs_2_Downs_82_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_82_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_82_we0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_82_we0.read();
    } else {
        ShuffleConvs_2_Downs_82_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_82_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_82_we1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_82_we1.read();
    } else {
        ShuffleConvs_2_Downs_82_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_83_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_83_address0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_83_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_83_address0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_83_address0.read();
    } else {
        ShuffleConvs_2_Downs_83_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_83_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_83_ce0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_83_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_83_ce0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_83_ce0.read();
    } else {
        ShuffleConvs_2_Downs_83_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_83_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_83_ce1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_83_ce1.read();
    } else {
        ShuffleConvs_2_Downs_83_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_83_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_83_we0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_83_we0.read();
    } else {
        ShuffleConvs_2_Downs_83_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_83_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_83_we1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_83_we1.read();
    } else {
        ShuffleConvs_2_Downs_83_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_84_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_84_address0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_84_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_84_address0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_84_address0.read();
    } else {
        ShuffleConvs_2_Downs_84_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_84_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_84_ce0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_84_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_84_ce0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_84_ce0.read();
    } else {
        ShuffleConvs_2_Downs_84_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_84_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_84_ce1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_84_ce1.read();
    } else {
        ShuffleConvs_2_Downs_84_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_84_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_84_we0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_84_we0.read();
    } else {
        ShuffleConvs_2_Downs_84_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_84_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_84_we1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_84_we1.read();
    } else {
        ShuffleConvs_2_Downs_84_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_85_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_85_address0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_85_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_85_address0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_85_address0.read();
    } else {
        ShuffleConvs_2_Downs_85_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_85_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_85_ce0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_85_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_85_ce0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_85_ce0.read();
    } else {
        ShuffleConvs_2_Downs_85_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_85_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_85_ce1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_85_ce1.read();
    } else {
        ShuffleConvs_2_Downs_85_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_85_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_85_we0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_85_we0.read();
    } else {
        ShuffleConvs_2_Downs_85_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_85_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_85_we1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_85_we1.read();
    } else {
        ShuffleConvs_2_Downs_85_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_86_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_86_address0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_86_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_86_address0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_86_address0.read();
    } else {
        ShuffleConvs_2_Downs_86_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_86_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_86_ce0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_86_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_86_ce0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_86_ce0.read();
    } else {
        ShuffleConvs_2_Downs_86_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_86_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_86_ce1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_86_ce1.read();
    } else {
        ShuffleConvs_2_Downs_86_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_86_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_86_we0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_86_we0.read();
    } else {
        ShuffleConvs_2_Downs_86_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_86_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_86_we1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_86_we1.read();
    } else {
        ShuffleConvs_2_Downs_86_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_87_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_87_address0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_87_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_87_address0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_87_address0.read();
    } else {
        ShuffleConvs_2_Downs_87_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_87_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_87_ce0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_87_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_87_ce0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_87_ce0.read();
    } else {
        ShuffleConvs_2_Downs_87_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_87_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_87_ce1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_87_ce1.read();
    } else {
        ShuffleConvs_2_Downs_87_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_87_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_87_we0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_87_we0.read();
    } else {
        ShuffleConvs_2_Downs_87_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_87_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_87_we1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_87_we1.read();
    } else {
        ShuffleConvs_2_Downs_87_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_88_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_88_address0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_88_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_88_address0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_88_address0.read();
    } else {
        ShuffleConvs_2_Downs_88_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_88_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_88_ce0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_88_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_88_ce0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_88_ce0.read();
    } else {
        ShuffleConvs_2_Downs_88_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_88_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_88_ce1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_88_ce1.read();
    } else {
        ShuffleConvs_2_Downs_88_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_88_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_88_we0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_88_we0.read();
    } else {
        ShuffleConvs_2_Downs_88_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_88_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_88_we1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_88_we1.read();
    } else {
        ShuffleConvs_2_Downs_88_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_89_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_89_address0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_89_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_89_address0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_89_address0.read();
    } else {
        ShuffleConvs_2_Downs_89_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_89_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_89_ce0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_89_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_89_ce0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_89_ce0.read();
    } else {
        ShuffleConvs_2_Downs_89_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_89_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_89_ce1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_89_ce1.read();
    } else {
        ShuffleConvs_2_Downs_89_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_89_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_89_we0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_89_we0.read();
    } else {
        ShuffleConvs_2_Downs_89_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_89_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_89_we1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_89_we1.read();
    } else {
        ShuffleConvs_2_Downs_89_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_8_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_8_address0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_8_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_8_address0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_8_address0.read();
    } else {
        ShuffleConvs_2_Downs_8_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_8_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_8_ce0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_8_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_8_ce0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_8_ce0.read();
    } else {
        ShuffleConvs_2_Downs_8_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_8_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_8_ce1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_8_ce1.read();
    } else {
        ShuffleConvs_2_Downs_8_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_8_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_8_we0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_8_we0.read();
    } else {
        ShuffleConvs_2_Downs_8_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_8_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_8_we1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_8_we1.read();
    } else {
        ShuffleConvs_2_Downs_8_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_90_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_90_address0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_90_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_90_address0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_90_address0.read();
    } else {
        ShuffleConvs_2_Downs_90_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_90_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_90_ce0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_90_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_90_ce0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_90_ce0.read();
    } else {
        ShuffleConvs_2_Downs_90_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_90_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_90_ce1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_90_ce1.read();
    } else {
        ShuffleConvs_2_Downs_90_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_90_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_90_we0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_90_we0.read();
    } else {
        ShuffleConvs_2_Downs_90_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_90_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_90_we1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_90_we1.read();
    } else {
        ShuffleConvs_2_Downs_90_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_91_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_91_address0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_91_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_91_address0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_91_address0.read();
    } else {
        ShuffleConvs_2_Downs_91_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_91_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_91_ce0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_91_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_91_ce0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_91_ce0.read();
    } else {
        ShuffleConvs_2_Downs_91_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_91_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_91_ce1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_91_ce1.read();
    } else {
        ShuffleConvs_2_Downs_91_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_91_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_91_we0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_91_we0.read();
    } else {
        ShuffleConvs_2_Downs_91_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_91_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_91_we1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_91_we1.read();
    } else {
        ShuffleConvs_2_Downs_91_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_92_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_92_address0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_92_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_92_address0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_92_address0.read();
    } else {
        ShuffleConvs_2_Downs_92_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_92_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_92_ce0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_92_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_92_ce0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_92_ce0.read();
    } else {
        ShuffleConvs_2_Downs_92_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_92_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_92_ce1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_92_ce1.read();
    } else {
        ShuffleConvs_2_Downs_92_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_92_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_92_we0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_92_we0.read();
    } else {
        ShuffleConvs_2_Downs_92_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_92_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_92_we1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_92_we1.read();
    } else {
        ShuffleConvs_2_Downs_92_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_93_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_93_address0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_93_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_93_address0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_93_address0.read();
    } else {
        ShuffleConvs_2_Downs_93_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_93_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_93_ce0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_93_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_93_ce0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_93_ce0.read();
    } else {
        ShuffleConvs_2_Downs_93_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_93_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_93_ce1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_93_ce1.read();
    } else {
        ShuffleConvs_2_Downs_93_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_93_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_93_we0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_93_we0.read();
    } else {
        ShuffleConvs_2_Downs_93_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_93_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_93_we1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_93_we1.read();
    } else {
        ShuffleConvs_2_Downs_93_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_94_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_94_address0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_94_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_94_address0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_94_address0.read();
    } else {
        ShuffleConvs_2_Downs_94_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_94_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_94_ce0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_94_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_94_ce0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_94_ce0.read();
    } else {
        ShuffleConvs_2_Downs_94_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_94_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_94_ce1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_94_ce1.read();
    } else {
        ShuffleConvs_2_Downs_94_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_94_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_94_we0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_94_we0.read();
    } else {
        ShuffleConvs_2_Downs_94_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_94_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_94_we1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_94_we1.read();
    } else {
        ShuffleConvs_2_Downs_94_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_95_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_95_address0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_95_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_95_address0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_95_address0.read();
    } else {
        ShuffleConvs_2_Downs_95_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_95_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_95_ce0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_95_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_95_ce0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_95_ce0.read();
    } else {
        ShuffleConvs_2_Downs_95_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_95_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_95_ce1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_95_ce1.read();
    } else {
        ShuffleConvs_2_Downs_95_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_95_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_95_we0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_95_we0.read();
    } else {
        ShuffleConvs_2_Downs_95_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_95_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_95_we1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_95_we1.read();
    } else {
        ShuffleConvs_2_Downs_95_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_9_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_9_address0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_9_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_9_address0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_9_address0.read();
    } else {
        ShuffleConvs_2_Downs_9_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_9_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_9_ce0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_9_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_9_ce0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_9_ce0.read();
    } else {
        ShuffleConvs_2_Downs_9_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_9_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_9_ce1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_9_ce1.read();
    } else {
        ShuffleConvs_2_Downs_9_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_9_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_9_we0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_9_we0.read();
    } else {
        ShuffleConvs_2_Downs_9_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_9_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_9_we1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_9_we1.read();
    } else {
        ShuffleConvs_2_Downs_9_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_address0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_address0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_address0.read();
    } else {
        ShuffleConvs_2_Downs_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_ce0 = grp_subconv_3x3_8_stride_fu_23549_ShuffleConvs_2_Downs_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_ce0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_ce0.read();
    } else {
        ShuffleConvs_2_Downs_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_ce1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_ce1.read();
    } else {
        ShuffleConvs_2_Downs_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_we0 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_we0.read();
    } else {
        ShuffleConvs_2_Downs_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_we1 = grp_subconv_1x1_8p_p_fu_22722_ShuffleConvs_2_Downs_we1.read();
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

void ShuffleNetV2::thread_ap_CS_fsm_state103() {
    ap_CS_fsm_state103 = ap_CS_fsm.read()[102];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1035() {
    ap_CS_fsm_state1035 = ap_CS_fsm.read()[1034];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1036() {
    ap_CS_fsm_state1036 = ap_CS_fsm.read()[1035];
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

void ShuffleNetV2::thread_ap_CS_fsm_state1048() {
    ap_CS_fsm_state1048 = ap_CS_fsm.read()[1047];
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

void ShuffleNetV2::thread_ap_CS_fsm_state107() {
    ap_CS_fsm_state107 = ap_CS_fsm.read()[106];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1071() {
    ap_CS_fsm_state1071 = ap_CS_fsm.read()[1070];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1072() {
    ap_CS_fsm_state1072 = ap_CS_fsm.read()[1071];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1073() {
    ap_CS_fsm_state1073 = ap_CS_fsm.read()[1072];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1074() {
    ap_CS_fsm_state1074 = ap_CS_fsm.read()[1073];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1075() {
    ap_CS_fsm_state1075 = ap_CS_fsm.read()[1074];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1076() {
    ap_CS_fsm_state1076 = ap_CS_fsm.read()[1075];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1077() {
    ap_CS_fsm_state1077 = ap_CS_fsm.read()[1076];
}

void ShuffleNetV2::thread_ap_CS_fsm_state108() {
    ap_CS_fsm_state108 = ap_CS_fsm.read()[107];
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

void ShuffleNetV2::thread_ap_CS_fsm_state1112() {
    ap_CS_fsm_state1112 = ap_CS_fsm.read()[1111];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1113() {
    ap_CS_fsm_state1113 = ap_CS_fsm.read()[1112];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1114() {
    ap_CS_fsm_state1114 = ap_CS_fsm.read()[1113];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1115() {
    ap_CS_fsm_state1115 = ap_CS_fsm.read()[1114];
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

void ShuffleNetV2::thread_ap_CS_fsm_state1126() {
    ap_CS_fsm_state1126 = ap_CS_fsm.read()[1125];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1127() {
    ap_CS_fsm_state1127 = ap_CS_fsm.read()[1126];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1128() {
    ap_CS_fsm_state1128 = ap_CS_fsm.read()[1127];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1129() {
    ap_CS_fsm_state1129 = ap_CS_fsm.read()[1128];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1130() {
    ap_CS_fsm_state1130 = ap_CS_fsm.read()[1129];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1131() {
    ap_CS_fsm_state1131 = ap_CS_fsm.read()[1130];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1132() {
    ap_CS_fsm_state1132 = ap_CS_fsm.read()[1131];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1139() {
    ap_CS_fsm_state1139 = ap_CS_fsm.read()[1138];
}

void ShuffleNetV2::thread_ap_CS_fsm_state114() {
    ap_CS_fsm_state114 = ap_CS_fsm.read()[113];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1140() {
    ap_CS_fsm_state1140 = ap_CS_fsm.read()[1139];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1141() {
    ap_CS_fsm_state1141 = ap_CS_fsm.read()[1140];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1142() {
    ap_CS_fsm_state1142 = ap_CS_fsm.read()[1141];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1143() {
    ap_CS_fsm_state1143 = ap_CS_fsm.read()[1142];
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

void ShuffleNetV2::thread_ap_CS_fsm_state116() {
    ap_CS_fsm_state116 = ap_CS_fsm.read()[115];
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

void ShuffleNetV2::thread_ap_CS_fsm_state1167() {
    ap_CS_fsm_state1167 = ap_CS_fsm.read()[1166];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1168() {
    ap_CS_fsm_state1168 = ap_CS_fsm.read()[1167];
}

void ShuffleNetV2::thread_ap_CS_fsm_state117() {
    ap_CS_fsm_state117 = ap_CS_fsm.read()[116];
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

}

