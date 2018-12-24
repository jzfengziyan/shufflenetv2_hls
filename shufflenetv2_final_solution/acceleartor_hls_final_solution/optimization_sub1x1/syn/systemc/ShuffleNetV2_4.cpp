#include "ShuffleNetV2.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void ShuffleNetV2::thread_DATA_BIAS_ARADDR() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1636.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_59_reg_43480.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1610.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_58_reg_43323.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1582.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_57_reg_43180.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1546.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_56_reg_42925.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1519.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_55_reg_42768.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1491.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_54_reg_42625.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1455.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_53_reg_42370.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1428.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_52_reg_42213.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1400.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_51_reg_42070.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1367.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_50_reg_41859.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1340.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_49_reg_41702.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1310.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_48_reg_41559.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1283.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_47_reg_41402.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1255.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_46_reg_41259.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1223.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_45_reg_41058.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1196.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_44_reg_40901.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1168.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_43_reg_40758.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1132.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_42_reg_40503.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1105.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_41_reg_40346.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1077.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_40_reg_40203.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1041.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_39_reg_39948.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1014.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_38_reg_39791.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state986.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_37_reg_39648.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state950.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_36_reg_39393.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state923.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_35_reg_39236.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state895.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_34_reg_39093.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state859.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_33_reg_38838.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state832.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_32_reg_38681.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state804.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_31_reg_38538.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state768.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_30_reg_38283.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state741.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_29_reg_38126.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state713.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_28_reg_37983.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state677.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_27_reg_37728.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state650.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_26_reg_37571.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state622.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_25_reg_37428.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state586.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_24_reg_37173.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state559.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_23_reg_37016.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state531.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_22_reg_36873.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state498.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_21_reg_36662.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state471.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_20_reg_36505.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state441.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_19_reg_36362.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state414.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_18_reg_36205.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state386.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_17_reg_36062.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state354.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_16_reg_35796.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state333.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_15_reg_35730.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state312.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_14_reg_35706.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state281.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_13_reg_35458.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state260.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_12_reg_35392.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state239.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_11_reg_35303.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state209.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_10_reg_35185.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state187.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_9_reg_35054.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state166.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_8_reg_34965.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state139.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_7_reg_34826.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state118.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_6_reg_34806.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_5_reg_34671.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state73.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_4_reg_34611.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_3_reg_34527.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_2_reg_34438.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
            DATA_BIAS_ARADDR = DATA_BIAS_addr_1_reg_34424.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
            DATA_BIAS_ARADDR =  (sc_lv<32>) (tmp_561_fu_9180_p1.read());
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
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_fu_9202_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_fu_9202_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, DATA_BIAS_RVALID.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond40_fu_9234_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond40_fu_9234_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, DATA_BIAS_RVALID.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond41_fu_9266_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond41_fu_9266_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, DATA_BIAS_RVALID.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond45_fu_9580_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond45_fu_9580_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, DATA_BIAS_RVALID.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state80.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond49_fu_9725_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond49_fu_9725_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, DATA_BIAS_RVALID.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state101.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond53_fu_9905_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond53_fu_9905_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, DATA_BIAS_RVALID.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state125.read()) && 
          esl_seteq<1,1,1>(DATA_BIAS_RVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state146.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond60_fu_10297_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond60_fu_10297_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, DATA_BIAS_RVALID.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state173.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond65_fu_10680_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond65_fu_10680_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, DATA_BIAS_RVALID.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state194.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond69_fu_10880_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond69_fu_10880_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, DATA_BIAS_RVALID.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state216.read()) && 
          esl_seteq<1,1,1>(DATA_BIAS_RVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state246.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond81_fu_11580_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond81_fu_11580_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, DATA_BIAS_RVALID.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state267.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond85_fu_11780_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond85_fu_11780_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, DATA_BIAS_RVALID.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state288.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond89_fu_11960_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond89_fu_11960_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, DATA_BIAS_RVALID.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state319.read()) && 
          esl_seteq<1,1,1>(DATA_BIAS_RVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state340.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond101_fu_12686_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond101_fu_12686_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, DATA_BIAS_RVALID.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state361.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond105_fu_12868_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond105_fu_12868_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, DATA_BIAS_RVALID.read()))) || 
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
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_fu_9202_p2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond40_fu_9234_p2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond41_fu_9266_p2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond45_fu_9580_p2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state80.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond49_fu_9725_p2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state101.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond53_fu_9905_p2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state125.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state146.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond60_fu_10297_p2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state173.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond65_fu_10680_p2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state194.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond69_fu_10880_p2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state216.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state246.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond81_fu_11580_p2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state267.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond85_fu_11780_p2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state288.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond89_fu_11960_p2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state319.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state340.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond101_fu_12686_p2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state361.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond105_fu_12868_p2.read())) || 
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
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1658.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1659.read()))) {
        DATA_INPUT_OUTPUT_AWVALID = grp_fc_fu_9125_m_axi_output_V_AWVALID.read();
    } else {
        DATA_INPUT_OUTPUT_AWVALID = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_DATA_INPUT_OUTPUT_BREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1658.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1659.read()))) {
        DATA_INPUT_OUTPUT_BREADY = grp_fc_fu_9125_m_axi_output_V_BREADY.read();
    } else {
        DATA_INPUT_OUTPUT_BREADY = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_DATA_INPUT_OUTPUT_RREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) && 
         esl_seteq<1,1,1>(exitcond47_fu_9402_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(exitcond47_fu_9402_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, DATA_INPUT_OUTPUT_RVALID.read())))) {
        DATA_INPUT_OUTPUT_RREADY = ap_const_logic_1;
    } else {
        DATA_INPUT_OUTPUT_RREADY = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_DATA_INPUT_OUTPUT_WVALID() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1658.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1659.read()))) {
        DATA_INPUT_OUTPUT_WVALID = grp_fc_fu_9125_m_axi_output_V_WVALID.read();
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
         esl_seteq<1,1,1>(exitcond47_fu_9402_p2.read(), ap_const_lv1_0))) {
        DATA_INPUT_OUTPUT_blk_n_R = m_axi_DATA_INPUT_OUTPUT_RVALID.read();
    } else {
        DATA_INPUT_OUTPUT_blk_n_R = ap_const_logic_1;
    }
}

void ShuffleNetV2::thread_DATA_OTHER_WEIGHTS_ARADDR() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1658.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1659.read()))) {
        DATA_OTHER_WEIGHTS_ARADDR = grp_fc_fu_9125_m_axi_weight_V_ARADDR.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1651.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_1, exitcond301_fu_34075_p2.read())) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1655.read()))) {
        DATA_OTHER_WEIGHTS_ARADDR = grp_conv_last_fu_8419_m_axi_weight_V_ARADDR.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_1, exitcond42_fu_9283_p2.read())))) {
        DATA_OTHER_WEIGHTS_ARADDR = grp_conv1_p_fu_8392_m_axi_weight_V_ARADDR.read();
    } else {
        DATA_OTHER_WEIGHTS_ARADDR = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void ShuffleNetV2::thread_DATA_OTHER_WEIGHTS_ARBURST() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1658.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1659.read()))) {
        DATA_OTHER_WEIGHTS_ARBURST = grp_fc_fu_9125_m_axi_weight_V_ARBURST.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1651.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_1, exitcond301_fu_34075_p2.read())) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1655.read()))) {
        DATA_OTHER_WEIGHTS_ARBURST = grp_conv_last_fu_8419_m_axi_weight_V_ARBURST.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_1, exitcond42_fu_9283_p2.read())))) {
        DATA_OTHER_WEIGHTS_ARBURST = grp_conv1_p_fu_8392_m_axi_weight_V_ARBURST.read();
    } else {
        DATA_OTHER_WEIGHTS_ARBURST =  (sc_lv<2>) ("XX");
    }
}

void ShuffleNetV2::thread_DATA_OTHER_WEIGHTS_ARCACHE() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1658.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1659.read()))) {
        DATA_OTHER_WEIGHTS_ARCACHE = grp_fc_fu_9125_m_axi_weight_V_ARCACHE.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1651.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_1, exitcond301_fu_34075_p2.read())) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1655.read()))) {
        DATA_OTHER_WEIGHTS_ARCACHE = grp_conv_last_fu_8419_m_axi_weight_V_ARCACHE.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_1, exitcond42_fu_9283_p2.read())))) {
        DATA_OTHER_WEIGHTS_ARCACHE = grp_conv1_p_fu_8392_m_axi_weight_V_ARCACHE.read();
    } else {
        DATA_OTHER_WEIGHTS_ARCACHE =  (sc_lv<4>) ("XXXX");
    }
}

void ShuffleNetV2::thread_DATA_OTHER_WEIGHTS_ARID() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1658.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1659.read()))) {
        DATA_OTHER_WEIGHTS_ARID = grp_fc_fu_9125_m_axi_weight_V_ARID.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1651.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_1, exitcond301_fu_34075_p2.read())) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1655.read()))) {
        DATA_OTHER_WEIGHTS_ARID = grp_conv_last_fu_8419_m_axi_weight_V_ARID.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_1, exitcond42_fu_9283_p2.read())))) {
        DATA_OTHER_WEIGHTS_ARID = grp_conv1_p_fu_8392_m_axi_weight_V_ARID.read();
    } else {
        DATA_OTHER_WEIGHTS_ARID =  (sc_lv<1>) ("X");
    }
}

void ShuffleNetV2::thread_DATA_OTHER_WEIGHTS_ARLEN() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1658.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1659.read()))) {
        DATA_OTHER_WEIGHTS_ARLEN = grp_fc_fu_9125_m_axi_weight_V_ARLEN.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1651.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_1, exitcond301_fu_34075_p2.read())) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1655.read()))) {
        DATA_OTHER_WEIGHTS_ARLEN = grp_conv_last_fu_8419_m_axi_weight_V_ARLEN.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_1, exitcond42_fu_9283_p2.read())))) {
        DATA_OTHER_WEIGHTS_ARLEN = grp_conv1_p_fu_8392_m_axi_weight_V_ARLEN.read();
    } else {
        DATA_OTHER_WEIGHTS_ARLEN = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void ShuffleNetV2::thread_DATA_OTHER_WEIGHTS_ARLOCK() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1658.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1659.read()))) {
        DATA_OTHER_WEIGHTS_ARLOCK = grp_fc_fu_9125_m_axi_weight_V_ARLOCK.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1651.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_1, exitcond301_fu_34075_p2.read())) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1655.read()))) {
        DATA_OTHER_WEIGHTS_ARLOCK = grp_conv_last_fu_8419_m_axi_weight_V_ARLOCK.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_1, exitcond42_fu_9283_p2.read())))) {
        DATA_OTHER_WEIGHTS_ARLOCK = grp_conv1_p_fu_8392_m_axi_weight_V_ARLOCK.read();
    } else {
        DATA_OTHER_WEIGHTS_ARLOCK =  (sc_lv<2>) ("XX");
    }
}

void ShuffleNetV2::thread_DATA_OTHER_WEIGHTS_ARPROT() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1658.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1659.read()))) {
        DATA_OTHER_WEIGHTS_ARPROT = grp_fc_fu_9125_m_axi_weight_V_ARPROT.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1651.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_1, exitcond301_fu_34075_p2.read())) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1655.read()))) {
        DATA_OTHER_WEIGHTS_ARPROT = grp_conv_last_fu_8419_m_axi_weight_V_ARPROT.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_1, exitcond42_fu_9283_p2.read())))) {
        DATA_OTHER_WEIGHTS_ARPROT = grp_conv1_p_fu_8392_m_axi_weight_V_ARPROT.read();
    } else {
        DATA_OTHER_WEIGHTS_ARPROT =  (sc_lv<3>) ("XXX");
    }
}

void ShuffleNetV2::thread_DATA_OTHER_WEIGHTS_ARQOS() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1658.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1659.read()))) {
        DATA_OTHER_WEIGHTS_ARQOS = grp_fc_fu_9125_m_axi_weight_V_ARQOS.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1651.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_1, exitcond301_fu_34075_p2.read())) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1655.read()))) {
        DATA_OTHER_WEIGHTS_ARQOS = grp_conv_last_fu_8419_m_axi_weight_V_ARQOS.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_1, exitcond42_fu_9283_p2.read())))) {
        DATA_OTHER_WEIGHTS_ARQOS = grp_conv1_p_fu_8392_m_axi_weight_V_ARQOS.read();
    } else {
        DATA_OTHER_WEIGHTS_ARQOS =  (sc_lv<4>) ("XXXX");
    }
}

void ShuffleNetV2::thread_DATA_OTHER_WEIGHTS_ARREGION() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1658.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1659.read()))) {
        DATA_OTHER_WEIGHTS_ARREGION = grp_fc_fu_9125_m_axi_weight_V_ARREGION.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1651.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_1, exitcond301_fu_34075_p2.read())) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1655.read()))) {
        DATA_OTHER_WEIGHTS_ARREGION = grp_conv_last_fu_8419_m_axi_weight_V_ARREGION.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_1, exitcond42_fu_9283_p2.read())))) {
        DATA_OTHER_WEIGHTS_ARREGION = grp_conv1_p_fu_8392_m_axi_weight_V_ARREGION.read();
    } else {
        DATA_OTHER_WEIGHTS_ARREGION =  (sc_lv<4>) ("XXXX");
    }
}

void ShuffleNetV2::thread_DATA_OTHER_WEIGHTS_ARSIZE() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1658.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1659.read()))) {
        DATA_OTHER_WEIGHTS_ARSIZE = grp_fc_fu_9125_m_axi_weight_V_ARSIZE.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1651.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_1, exitcond301_fu_34075_p2.read())) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1655.read()))) {
        DATA_OTHER_WEIGHTS_ARSIZE = grp_conv_last_fu_8419_m_axi_weight_V_ARSIZE.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_1, exitcond42_fu_9283_p2.read())))) {
        DATA_OTHER_WEIGHTS_ARSIZE = grp_conv1_p_fu_8392_m_axi_weight_V_ARSIZE.read();
    } else {
        DATA_OTHER_WEIGHTS_ARSIZE =  (sc_lv<3>) ("XXX");
    }
}

void ShuffleNetV2::thread_DATA_OTHER_WEIGHTS_ARUSER() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1658.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1659.read()))) {
        DATA_OTHER_WEIGHTS_ARUSER = grp_fc_fu_9125_m_axi_weight_V_ARUSER.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1651.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_1, exitcond301_fu_34075_p2.read())) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1655.read()))) {
        DATA_OTHER_WEIGHTS_ARUSER = grp_conv_last_fu_8419_m_axi_weight_V_ARUSER.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_1, exitcond42_fu_9283_p2.read())))) {
        DATA_OTHER_WEIGHTS_ARUSER = grp_conv1_p_fu_8392_m_axi_weight_V_ARUSER.read();
    } else {
        DATA_OTHER_WEIGHTS_ARUSER =  (sc_lv<1>) ("X");
    }
}

void ShuffleNetV2::thread_DATA_OTHER_WEIGHTS_ARVALID() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1658.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1659.read()))) {
        DATA_OTHER_WEIGHTS_ARVALID = grp_fc_fu_9125_m_axi_weight_V_ARVALID.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1651.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_1, exitcond301_fu_34075_p2.read())) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1655.read()))) {
        DATA_OTHER_WEIGHTS_ARVALID = grp_conv_last_fu_8419_m_axi_weight_V_ARVALID.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_1, exitcond42_fu_9283_p2.read())))) {
        DATA_OTHER_WEIGHTS_ARVALID = grp_conv1_p_fu_8392_m_axi_weight_V_ARVALID.read();
    } else {
        DATA_OTHER_WEIGHTS_ARVALID = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_DATA_OTHER_WEIGHTS_RREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1658.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1659.read()))) {
        DATA_OTHER_WEIGHTS_RREADY = grp_fc_fu_9125_m_axi_weight_V_RREADY.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1651.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_1, exitcond301_fu_34075_p2.read())) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1655.read()))) {
        DATA_OTHER_WEIGHTS_RREADY = grp_conv_last_fu_8419_m_axi_weight_V_RREADY.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_1, exitcond42_fu_9283_p2.read())))) {
        DATA_OTHER_WEIGHTS_RREADY = grp_conv1_p_fu_8392_m_axi_weight_V_RREADY.read();
    } else {
        DATA_OTHER_WEIGHTS_RREADY = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        ShuffleConvs_0_Downs_1_address0 = grp_subconv_3x3_32_strid_fu_8700_input_6_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_1_address0 = grp_subconv_1x1_32_p_fu_8446_ShuffleConvs_0_Downs_1_address0.read();
    } else {
        ShuffleConvs_0_Downs_1_address0 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        ShuffleConvs_0_Downs_1_ce0 = grp_subconv_3x3_32_strid_fu_8700_input_6_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_1_ce0 = grp_subconv_1x1_32_p_fu_8446_ShuffleConvs_0_Downs_1_ce0.read();
    } else {
        ShuffleConvs_0_Downs_1_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_1_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_1_ce1 = grp_subconv_1x1_32_p_fu_8446_ShuffleConvs_0_Downs_1_ce1.read();
    } else {
        ShuffleConvs_0_Downs_1_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_1_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_1_we0 = grp_subconv_1x1_32_p_fu_8446_ShuffleConvs_0_Downs_1_we0.read();
    } else {
        ShuffleConvs_0_Downs_1_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_1_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_1_we1 = grp_subconv_1x1_32_p_fu_8446_ShuffleConvs_0_Downs_1_we1.read();
    } else {
        ShuffleConvs_0_Downs_1_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        ShuffleConvs_0_Downs_2_address0 = grp_subconv_3x3_32_strid_fu_8700_input_5_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_2_address0 = grp_subconv_1x1_32_p_fu_8446_ShuffleConvs_0_Downs_2_address0.read();
    } else {
        ShuffleConvs_0_Downs_2_address0 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        ShuffleConvs_0_Downs_2_ce0 = grp_subconv_3x3_32_strid_fu_8700_input_5_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_2_ce0 = grp_subconv_1x1_32_p_fu_8446_ShuffleConvs_0_Downs_2_ce0.read();
    } else {
        ShuffleConvs_0_Downs_2_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_2_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_2_ce1 = grp_subconv_1x1_32_p_fu_8446_ShuffleConvs_0_Downs_2_ce1.read();
    } else {
        ShuffleConvs_0_Downs_2_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_2_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_2_we0 = grp_subconv_1x1_32_p_fu_8446_ShuffleConvs_0_Downs_2_we0.read();
    } else {
        ShuffleConvs_0_Downs_2_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_2_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_2_we1 = grp_subconv_1x1_32_p_fu_8446_ShuffleConvs_0_Downs_2_we1.read();
    } else {
        ShuffleConvs_0_Downs_2_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        ShuffleConvs_0_Downs_3_address0 = grp_subconv_3x3_32_strid_fu_8700_input_4_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_3_address0 = grp_subconv_1x1_32_p_fu_8446_ShuffleConvs_0_Downs_3_address0.read();
    } else {
        ShuffleConvs_0_Downs_3_address0 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        ShuffleConvs_0_Downs_3_ce0 = grp_subconv_3x3_32_strid_fu_8700_input_4_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_3_ce0 = grp_subconv_1x1_32_p_fu_8446_ShuffleConvs_0_Downs_3_ce0.read();
    } else {
        ShuffleConvs_0_Downs_3_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_3_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_3_ce1 = grp_subconv_1x1_32_p_fu_8446_ShuffleConvs_0_Downs_3_ce1.read();
    } else {
        ShuffleConvs_0_Downs_3_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_3_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_3_we0 = grp_subconv_1x1_32_p_fu_8446_ShuffleConvs_0_Downs_3_we0.read();
    } else {
        ShuffleConvs_0_Downs_3_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_3_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_3_we1 = grp_subconv_1x1_32_p_fu_8446_ShuffleConvs_0_Downs_3_we1.read();
    } else {
        ShuffleConvs_0_Downs_3_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        ShuffleConvs_0_Downs_4_address0 = grp_subconv_3x3_32_strid_fu_8700_input_3_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_4_address0 = grp_subconv_1x1_32_p_fu_8446_ShuffleConvs_0_Downs_4_address0.read();
    } else {
        ShuffleConvs_0_Downs_4_address0 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        ShuffleConvs_0_Downs_4_ce0 = grp_subconv_3x3_32_strid_fu_8700_input_3_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_4_ce0 = grp_subconv_1x1_32_p_fu_8446_ShuffleConvs_0_Downs_4_ce0.read();
    } else {
        ShuffleConvs_0_Downs_4_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_4_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_4_ce1 = grp_subconv_1x1_32_p_fu_8446_ShuffleConvs_0_Downs_4_ce1.read();
    } else {
        ShuffleConvs_0_Downs_4_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_4_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_4_we0 = grp_subconv_1x1_32_p_fu_8446_ShuffleConvs_0_Downs_4_we0.read();
    } else {
        ShuffleConvs_0_Downs_4_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_4_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_4_we1 = grp_subconv_1x1_32_p_fu_8446_ShuffleConvs_0_Downs_4_we1.read();
    } else {
        ShuffleConvs_0_Downs_4_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        ShuffleConvs_0_Downs_5_address0 = grp_subconv_3x3_32_strid_fu_8700_input_2_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_5_address0 = grp_subconv_1x1_32_p_fu_8446_ShuffleConvs_0_Downs_5_address0.read();
    } else {
        ShuffleConvs_0_Downs_5_address0 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        ShuffleConvs_0_Downs_5_ce0 = grp_subconv_3x3_32_strid_fu_8700_input_2_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_5_ce0 = grp_subconv_1x1_32_p_fu_8446_ShuffleConvs_0_Downs_5_ce0.read();
    } else {
        ShuffleConvs_0_Downs_5_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_5_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_5_ce1 = grp_subconv_1x1_32_p_fu_8446_ShuffleConvs_0_Downs_5_ce1.read();
    } else {
        ShuffleConvs_0_Downs_5_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_5_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_5_we0 = grp_subconv_1x1_32_p_fu_8446_ShuffleConvs_0_Downs_5_we0.read();
    } else {
        ShuffleConvs_0_Downs_5_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_5_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_5_we1 = grp_subconv_1x1_32_p_fu_8446_ShuffleConvs_0_Downs_5_we1.read();
    } else {
        ShuffleConvs_0_Downs_5_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        ShuffleConvs_0_Downs_6_address0 = grp_subconv_3x3_32_strid_fu_8700_input_1_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_6_address0 = grp_subconv_1x1_32_p_fu_8446_ShuffleConvs_0_Downs_6_address0.read();
    } else {
        ShuffleConvs_0_Downs_6_address0 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        ShuffleConvs_0_Downs_6_ce0 = grp_subconv_3x3_32_strid_fu_8700_input_1_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_6_ce0 = grp_subconv_1x1_32_p_fu_8446_ShuffleConvs_0_Downs_6_ce0.read();
    } else {
        ShuffleConvs_0_Downs_6_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_6_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_6_ce1 = grp_subconv_1x1_32_p_fu_8446_ShuffleConvs_0_Downs_6_ce1.read();
    } else {
        ShuffleConvs_0_Downs_6_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_6_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_6_we0 = grp_subconv_1x1_32_p_fu_8446_ShuffleConvs_0_Downs_6_we0.read();
    } else {
        ShuffleConvs_0_Downs_6_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_6_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_6_we1 = grp_subconv_1x1_32_p_fu_8446_ShuffleConvs_0_Downs_6_we1.read();
    } else {
        ShuffleConvs_0_Downs_6_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_7_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        ShuffleConvs_0_Downs_7_address0 = grp_subconv_3x3_32_strid_fu_8700_input_0_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_7_address0 = grp_subconv_1x1_32_p_fu_8446_ShuffleConvs_0_Downs_7_address0.read();
    } else {
        ShuffleConvs_0_Downs_7_address0 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_7_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        ShuffleConvs_0_Downs_7_ce0 = grp_subconv_3x3_32_strid_fu_8700_input_0_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_7_ce0 = grp_subconv_1x1_32_p_fu_8446_ShuffleConvs_0_Downs_7_ce0.read();
    } else {
        ShuffleConvs_0_Downs_7_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_7_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_7_ce1 = grp_subconv_1x1_32_p_fu_8446_ShuffleConvs_0_Downs_7_ce1.read();
    } else {
        ShuffleConvs_0_Downs_7_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_7_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_7_we0 = grp_subconv_1x1_32_p_fu_8446_ShuffleConvs_0_Downs_7_we0.read();
    } else {
        ShuffleConvs_0_Downs_7_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_7_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_7_we1 = grp_subconv_1x1_32_p_fu_8446_ShuffleConvs_0_Downs_7_we1.read();
    } else {
        ShuffleConvs_0_Downs_7_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        ShuffleConvs_0_Downs_address0 = grp_subconv_3x3_32_strid_fu_8700_input_7_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_address0 = grp_subconv_1x1_32_p_fu_8446_ShuffleConvs_0_Downs_address0.read();
    } else {
        ShuffleConvs_0_Downs_address0 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        ShuffleConvs_0_Downs_ce0 = grp_subconv_3x3_32_strid_fu_8700_input_7_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_ce0 = grp_subconv_1x1_32_p_fu_8446_ShuffleConvs_0_Downs_ce0.read();
    } else {
        ShuffleConvs_0_Downs_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_ce1 = grp_subconv_1x1_32_p_fu_8446_ShuffleConvs_0_Downs_ce1.read();
    } else {
        ShuffleConvs_0_Downs_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_we0 = grp_subconv_1x1_32_p_fu_8446_ShuffleConvs_0_Downs_we0.read();
    } else {
        ShuffleConvs_0_Downs_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_0_Downs_we1 = grp_subconv_1x1_32_p_fu_8446_ShuffleConvs_0_Downs_we1.read();
    } else {
        ShuffleConvs_0_Downs_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state423.read())) {
        ShuffleConvs_1_Downs_1_address0 = grp_subconv_3x3_16_strid_fu_8786_ShuffleConvs_1_Downs_1_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_1_address0 = grp_subconv_1x1_16p_p_fu_8540_ShuffleConvs_1_Downs_1_address0.read();
    } else {
        ShuffleConvs_1_Downs_1_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state423.read())) {
        ShuffleConvs_1_Downs_1_ce0 = grp_subconv_3x3_16_strid_fu_8786_ShuffleConvs_1_Downs_1_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_1_ce0 = grp_subconv_1x1_16p_p_fu_8540_ShuffleConvs_1_Downs_1_ce0.read();
    } else {
        ShuffleConvs_1_Downs_1_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_1_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_1_ce1 = grp_subconv_1x1_16p_p_fu_8540_ShuffleConvs_1_Downs_1_ce1.read();
    } else {
        ShuffleConvs_1_Downs_1_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_1_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_1_we0 = grp_subconv_1x1_16p_p_fu_8540_ShuffleConvs_1_Downs_1_we0.read();
    } else {
        ShuffleConvs_1_Downs_1_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_1_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_1_we1 = grp_subconv_1x1_16p_p_fu_8540_ShuffleConvs_1_Downs_1_we1.read();
    } else {
        ShuffleConvs_1_Downs_1_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state423.read())) {
        ShuffleConvs_1_Downs_2_address0 = grp_subconv_3x3_16_strid_fu_8786_ShuffleConvs_1_Downs_2_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_2_address0 = grp_subconv_1x1_16p_p_fu_8540_ShuffleConvs_1_Downs_2_address0.read();
    } else {
        ShuffleConvs_1_Downs_2_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state423.read())) {
        ShuffleConvs_1_Downs_2_ce0 = grp_subconv_3x3_16_strid_fu_8786_ShuffleConvs_1_Downs_2_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_2_ce0 = grp_subconv_1x1_16p_p_fu_8540_ShuffleConvs_1_Downs_2_ce0.read();
    } else {
        ShuffleConvs_1_Downs_2_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_2_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_2_ce1 = grp_subconv_1x1_16p_p_fu_8540_ShuffleConvs_1_Downs_2_ce1.read();
    } else {
        ShuffleConvs_1_Downs_2_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_2_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_2_we0 = grp_subconv_1x1_16p_p_fu_8540_ShuffleConvs_1_Downs_2_we0.read();
    } else {
        ShuffleConvs_1_Downs_2_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_2_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_2_we1 = grp_subconv_1x1_16p_p_fu_8540_ShuffleConvs_1_Downs_2_we1.read();
    } else {
        ShuffleConvs_1_Downs_2_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state423.read())) {
        ShuffleConvs_1_Downs_3_address0 = grp_subconv_3x3_16_strid_fu_8786_ShuffleConvs_1_Downs_3_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_3_address0 = grp_subconv_1x1_16p_p_fu_8540_ShuffleConvs_1_Downs_3_address0.read();
    } else {
        ShuffleConvs_1_Downs_3_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state423.read())) {
        ShuffleConvs_1_Downs_3_ce0 = grp_subconv_3x3_16_strid_fu_8786_ShuffleConvs_1_Downs_3_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_3_ce0 = grp_subconv_1x1_16p_p_fu_8540_ShuffleConvs_1_Downs_3_ce0.read();
    } else {
        ShuffleConvs_1_Downs_3_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_3_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_3_ce1 = grp_subconv_1x1_16p_p_fu_8540_ShuffleConvs_1_Downs_3_ce1.read();
    } else {
        ShuffleConvs_1_Downs_3_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_3_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_3_we0 = grp_subconv_1x1_16p_p_fu_8540_ShuffleConvs_1_Downs_3_we0.read();
    } else {
        ShuffleConvs_1_Downs_3_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_3_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_3_we1 = grp_subconv_1x1_16p_p_fu_8540_ShuffleConvs_1_Downs_3_we1.read();
    } else {
        ShuffleConvs_1_Downs_3_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state423.read())) {
        ShuffleConvs_1_Downs_4_address0 = grp_subconv_3x3_16_strid_fu_8786_ShuffleConvs_1_Downs_4_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_4_address0 = grp_subconv_1x1_16p_p_fu_8540_ShuffleConvs_1_Downs_4_address0.read();
    } else {
        ShuffleConvs_1_Downs_4_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state423.read())) {
        ShuffleConvs_1_Downs_4_ce0 = grp_subconv_3x3_16_strid_fu_8786_ShuffleConvs_1_Downs_4_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_4_ce0 = grp_subconv_1x1_16p_p_fu_8540_ShuffleConvs_1_Downs_4_ce0.read();
    } else {
        ShuffleConvs_1_Downs_4_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_4_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_4_ce1 = grp_subconv_1x1_16p_p_fu_8540_ShuffleConvs_1_Downs_4_ce1.read();
    } else {
        ShuffleConvs_1_Downs_4_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_4_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_4_we0 = grp_subconv_1x1_16p_p_fu_8540_ShuffleConvs_1_Downs_4_we0.read();
    } else {
        ShuffleConvs_1_Downs_4_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_4_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_4_we1 = grp_subconv_1x1_16p_p_fu_8540_ShuffleConvs_1_Downs_4_we1.read();
    } else {
        ShuffleConvs_1_Downs_4_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state423.read())) {
        ShuffleConvs_1_Downs_5_address0 = grp_subconv_3x3_16_strid_fu_8786_ShuffleConvs_1_Downs_5_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_5_address0 = grp_subconv_1x1_16p_p_fu_8540_ShuffleConvs_1_Downs_5_address0.read();
    } else {
        ShuffleConvs_1_Downs_5_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state423.read())) {
        ShuffleConvs_1_Downs_5_ce0 = grp_subconv_3x3_16_strid_fu_8786_ShuffleConvs_1_Downs_5_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_5_ce0 = grp_subconv_1x1_16p_p_fu_8540_ShuffleConvs_1_Downs_5_ce0.read();
    } else {
        ShuffleConvs_1_Downs_5_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_5_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_5_ce1 = grp_subconv_1x1_16p_p_fu_8540_ShuffleConvs_1_Downs_5_ce1.read();
    } else {
        ShuffleConvs_1_Downs_5_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_5_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_5_we0 = grp_subconv_1x1_16p_p_fu_8540_ShuffleConvs_1_Downs_5_we0.read();
    } else {
        ShuffleConvs_1_Downs_5_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_5_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_5_we1 = grp_subconv_1x1_16p_p_fu_8540_ShuffleConvs_1_Downs_5_we1.read();
    } else {
        ShuffleConvs_1_Downs_5_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state423.read())) {
        ShuffleConvs_1_Downs_6_address0 = grp_subconv_3x3_16_strid_fu_8786_ShuffleConvs_1_Downs_6_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_6_address0 = grp_subconv_1x1_16p_p_fu_8540_ShuffleConvs_1_Downs_6_address0.read();
    } else {
        ShuffleConvs_1_Downs_6_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state423.read())) {
        ShuffleConvs_1_Downs_6_ce0 = grp_subconv_3x3_16_strid_fu_8786_ShuffleConvs_1_Downs_6_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_6_ce0 = grp_subconv_1x1_16p_p_fu_8540_ShuffleConvs_1_Downs_6_ce0.read();
    } else {
        ShuffleConvs_1_Downs_6_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_6_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_6_ce1 = grp_subconv_1x1_16p_p_fu_8540_ShuffleConvs_1_Downs_6_ce1.read();
    } else {
        ShuffleConvs_1_Downs_6_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_6_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_6_we0 = grp_subconv_1x1_16p_p_fu_8540_ShuffleConvs_1_Downs_6_we0.read();
    } else {
        ShuffleConvs_1_Downs_6_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_6_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_6_we1 = grp_subconv_1x1_16p_p_fu_8540_ShuffleConvs_1_Downs_6_we1.read();
    } else {
        ShuffleConvs_1_Downs_6_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_7_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state423.read())) {
        ShuffleConvs_1_Downs_7_address0 = grp_subconv_3x3_16_strid_fu_8786_ShuffleConvs_1_Downs_7_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_7_address0 = grp_subconv_1x1_16p_p_fu_8540_ShuffleConvs_1_Downs_7_address0.read();
    } else {
        ShuffleConvs_1_Downs_7_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_7_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state423.read())) {
        ShuffleConvs_1_Downs_7_ce0 = grp_subconv_3x3_16_strid_fu_8786_ShuffleConvs_1_Downs_7_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_7_ce0 = grp_subconv_1x1_16p_p_fu_8540_ShuffleConvs_1_Downs_7_ce0.read();
    } else {
        ShuffleConvs_1_Downs_7_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_7_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_7_ce1 = grp_subconv_1x1_16p_p_fu_8540_ShuffleConvs_1_Downs_7_ce1.read();
    } else {
        ShuffleConvs_1_Downs_7_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_7_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_7_we0 = grp_subconv_1x1_16p_p_fu_8540_ShuffleConvs_1_Downs_7_we0.read();
    } else {
        ShuffleConvs_1_Downs_7_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_7_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_7_we1 = grp_subconv_1x1_16p_p_fu_8540_ShuffleConvs_1_Downs_7_we1.read();
    } else {
        ShuffleConvs_1_Downs_7_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state423.read())) {
        ShuffleConvs_1_Downs_address0 = grp_subconv_3x3_16_strid_fu_8786_ShuffleConvs_1_Downs_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_address0 = grp_subconv_1x1_16p_p_fu_8540_ShuffleConvs_1_Downs_address0.read();
    } else {
        ShuffleConvs_1_Downs_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state423.read())) {
        ShuffleConvs_1_Downs_ce0 = grp_subconv_3x3_16_strid_fu_8786_ShuffleConvs_1_Downs_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_ce0 = grp_subconv_1x1_16p_p_fu_8540_ShuffleConvs_1_Downs_ce0.read();
    } else {
        ShuffleConvs_1_Downs_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_ce1 = grp_subconv_1x1_16p_p_fu_8540_ShuffleConvs_1_Downs_ce1.read();
    } else {
        ShuffleConvs_1_Downs_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_we0 = grp_subconv_1x1_16p_p_fu_8540_ShuffleConvs_1_Downs_we0.read();
    } else {
        ShuffleConvs_1_Downs_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        ShuffleConvs_1_Downs_we1 = grp_subconv_1x1_16p_p_fu_8540_ShuffleConvs_1_Downs_we1.read();
    } else {
        ShuffleConvs_1_Downs_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_1_address0 = grp_subconv_3x3_8_stride_fu_8760_ShuffleConvs_2_Downs_1_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_1_address0 = grp_subconv_1x1_8p_p_fu_8580_ShuffleConvs_2_Downs_1_address0.read();
    } else {
        ShuffleConvs_2_Downs_1_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_1_ce0 = grp_subconv_3x3_8_stride_fu_8760_ShuffleConvs_2_Downs_1_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_1_ce0 = grp_subconv_1x1_8p_p_fu_8580_ShuffleConvs_2_Downs_1_ce0.read();
    } else {
        ShuffleConvs_2_Downs_1_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_1_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_1_ce1 = grp_subconv_1x1_8p_p_fu_8580_ShuffleConvs_2_Downs_1_ce1.read();
    } else {
        ShuffleConvs_2_Downs_1_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_1_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_1_we0 = grp_subconv_1x1_8p_p_fu_8580_ShuffleConvs_2_Downs_1_we0.read();
    } else {
        ShuffleConvs_2_Downs_1_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_1_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_1_we1 = grp_subconv_1x1_8p_p_fu_8580_ShuffleConvs_2_Downs_1_we1.read();
    } else {
        ShuffleConvs_2_Downs_1_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_2_address0 = grp_subconv_3x3_8_stride_fu_8760_ShuffleConvs_2_Downs_2_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_2_address0 = grp_subconv_1x1_8p_p_fu_8580_ShuffleConvs_2_Downs_2_address0.read();
    } else {
        ShuffleConvs_2_Downs_2_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_2_ce0 = grp_subconv_3x3_8_stride_fu_8760_ShuffleConvs_2_Downs_2_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_2_ce0 = grp_subconv_1x1_8p_p_fu_8580_ShuffleConvs_2_Downs_2_ce0.read();
    } else {
        ShuffleConvs_2_Downs_2_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_2_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_2_ce1 = grp_subconv_1x1_8p_p_fu_8580_ShuffleConvs_2_Downs_2_ce1.read();
    } else {
        ShuffleConvs_2_Downs_2_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_2_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_2_we0 = grp_subconv_1x1_8p_p_fu_8580_ShuffleConvs_2_Downs_2_we0.read();
    } else {
        ShuffleConvs_2_Downs_2_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_2_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_2_we1 = grp_subconv_1x1_8p_p_fu_8580_ShuffleConvs_2_Downs_2_we1.read();
    } else {
        ShuffleConvs_2_Downs_2_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_3_address0 = grp_subconv_3x3_8_stride_fu_8760_ShuffleConvs_2_Downs_3_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_3_address0 = grp_subconv_1x1_8p_p_fu_8580_ShuffleConvs_2_Downs_3_address0.read();
    } else {
        ShuffleConvs_2_Downs_3_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_3_ce0 = grp_subconv_3x3_8_stride_fu_8760_ShuffleConvs_2_Downs_3_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_3_ce0 = grp_subconv_1x1_8p_p_fu_8580_ShuffleConvs_2_Downs_3_ce0.read();
    } else {
        ShuffleConvs_2_Downs_3_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_3_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_3_ce1 = grp_subconv_1x1_8p_p_fu_8580_ShuffleConvs_2_Downs_3_ce1.read();
    } else {
        ShuffleConvs_2_Downs_3_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_3_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_3_we0 = grp_subconv_1x1_8p_p_fu_8580_ShuffleConvs_2_Downs_3_we0.read();
    } else {
        ShuffleConvs_2_Downs_3_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_3_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_3_we1 = grp_subconv_1x1_8p_p_fu_8580_ShuffleConvs_2_Downs_3_we1.read();
    } else {
        ShuffleConvs_2_Downs_3_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_4_address0 = grp_subconv_3x3_8_stride_fu_8760_ShuffleConvs_2_Downs_4_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_4_address0 = grp_subconv_1x1_8p_p_fu_8580_ShuffleConvs_2_Downs_4_address0.read();
    } else {
        ShuffleConvs_2_Downs_4_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_4_ce0 = grp_subconv_3x3_8_stride_fu_8760_ShuffleConvs_2_Downs_4_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_4_ce0 = grp_subconv_1x1_8p_p_fu_8580_ShuffleConvs_2_Downs_4_ce0.read();
    } else {
        ShuffleConvs_2_Downs_4_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_4_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_4_ce1 = grp_subconv_1x1_8p_p_fu_8580_ShuffleConvs_2_Downs_4_ce1.read();
    } else {
        ShuffleConvs_2_Downs_4_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_4_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_4_we0 = grp_subconv_1x1_8p_p_fu_8580_ShuffleConvs_2_Downs_4_we0.read();
    } else {
        ShuffleConvs_2_Downs_4_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_4_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_4_we1 = grp_subconv_1x1_8p_p_fu_8580_ShuffleConvs_2_Downs_4_we1.read();
    } else {
        ShuffleConvs_2_Downs_4_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_5_address0 = grp_subconv_3x3_8_stride_fu_8760_ShuffleConvs_2_Downs_5_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_5_address0 = grp_subconv_1x1_8p_p_fu_8580_ShuffleConvs_2_Downs_5_address0.read();
    } else {
        ShuffleConvs_2_Downs_5_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_5_ce0 = grp_subconv_3x3_8_stride_fu_8760_ShuffleConvs_2_Downs_5_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_5_ce0 = grp_subconv_1x1_8p_p_fu_8580_ShuffleConvs_2_Downs_5_ce0.read();
    } else {
        ShuffleConvs_2_Downs_5_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_5_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_5_ce1 = grp_subconv_1x1_8p_p_fu_8580_ShuffleConvs_2_Downs_5_ce1.read();
    } else {
        ShuffleConvs_2_Downs_5_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_5_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_5_we0 = grp_subconv_1x1_8p_p_fu_8580_ShuffleConvs_2_Downs_5_we0.read();
    } else {
        ShuffleConvs_2_Downs_5_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_5_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_5_we1 = grp_subconv_1x1_8p_p_fu_8580_ShuffleConvs_2_Downs_5_we1.read();
    } else {
        ShuffleConvs_2_Downs_5_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_6_address0 = grp_subconv_3x3_8_stride_fu_8760_ShuffleConvs_2_Downs_6_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_6_address0 = grp_subconv_1x1_8p_p_fu_8580_ShuffleConvs_2_Downs_6_address0.read();
    } else {
        ShuffleConvs_2_Downs_6_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_6_ce0 = grp_subconv_3x3_8_stride_fu_8760_ShuffleConvs_2_Downs_6_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_6_ce0 = grp_subconv_1x1_8p_p_fu_8580_ShuffleConvs_2_Downs_6_ce0.read();
    } else {
        ShuffleConvs_2_Downs_6_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_6_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_6_ce1 = grp_subconv_1x1_8p_p_fu_8580_ShuffleConvs_2_Downs_6_ce1.read();
    } else {
        ShuffleConvs_2_Downs_6_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_6_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_6_we0 = grp_subconv_1x1_8p_p_fu_8580_ShuffleConvs_2_Downs_6_we0.read();
    } else {
        ShuffleConvs_2_Downs_6_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_6_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_6_we1 = grp_subconv_1x1_8p_p_fu_8580_ShuffleConvs_2_Downs_6_we1.read();
    } else {
        ShuffleConvs_2_Downs_6_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_7_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_7_address0 = grp_subconv_3x3_8_stride_fu_8760_ShuffleConvs_2_Downs_7_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_7_address0 = grp_subconv_1x1_8p_p_fu_8580_ShuffleConvs_2_Downs_7_address0.read();
    } else {
        ShuffleConvs_2_Downs_7_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_7_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_7_ce0 = grp_subconv_3x3_8_stride_fu_8760_ShuffleConvs_2_Downs_7_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_7_ce0 = grp_subconv_1x1_8p_p_fu_8580_ShuffleConvs_2_Downs_7_ce0.read();
    } else {
        ShuffleConvs_2_Downs_7_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_7_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_7_ce1 = grp_subconv_1x1_8p_p_fu_8580_ShuffleConvs_2_Downs_7_ce1.read();
    } else {
        ShuffleConvs_2_Downs_7_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_7_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_7_we0 = grp_subconv_1x1_8p_p_fu_8580_ShuffleConvs_2_Downs_7_we0.read();
    } else {
        ShuffleConvs_2_Downs_7_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_7_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_7_we1 = grp_subconv_1x1_8p_p_fu_8580_ShuffleConvs_2_Downs_7_we1.read();
    } else {
        ShuffleConvs_2_Downs_7_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_address0 = grp_subconv_3x3_8_stride_fu_8760_ShuffleConvs_2_Downs_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_address0 = grp_subconv_1x1_8p_p_fu_8580_ShuffleConvs_2_Downs_address0.read();
    } else {
        ShuffleConvs_2_Downs_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        ShuffleConvs_2_Downs_ce0 = grp_subconv_3x3_8_stride_fu_8760_ShuffleConvs_2_Downs_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_ce0 = grp_subconv_1x1_8p_p_fu_8580_ShuffleConvs_2_Downs_ce0.read();
    } else {
        ShuffleConvs_2_Downs_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_ce1 = grp_subconv_1x1_8p_p_fu_8580_ShuffleConvs_2_Downs_ce1.read();
    } else {
        ShuffleConvs_2_Downs_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_we0 = grp_subconv_1x1_8p_p_fu_8580_ShuffleConvs_2_Downs_we0.read();
    } else {
        ShuffleConvs_2_Downs_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        ShuffleConvs_2_Downs_we1 = grp_subconv_1x1_8p_p_fu_8580_ShuffleConvs_2_Downs_we1.read();
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

void ShuffleNetV2::thread_ap_CS_fsm_state1195() {
    ap_CS_fsm_state1195 = ap_CS_fsm.read()[1194];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1196() {
    ap_CS_fsm_state1196 = ap_CS_fsm.read()[1195];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1203() {
    ap_CS_fsm_state1203 = ap_CS_fsm.read()[1202];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1204() {
    ap_CS_fsm_state1204 = ap_CS_fsm.read()[1203];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1205() {
    ap_CS_fsm_state1205 = ap_CS_fsm.read()[1204];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1206() {
    ap_CS_fsm_state1206 = ap_CS_fsm.read()[1205];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1207() {
    ap_CS_fsm_state1207 = ap_CS_fsm.read()[1206];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1208() {
    ap_CS_fsm_state1208 = ap_CS_fsm.read()[1207];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1209() {
    ap_CS_fsm_state1209 = ap_CS_fsm.read()[1208];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1210() {
    ap_CS_fsm_state1210 = ap_CS_fsm.read()[1209];
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

void ShuffleNetV2::thread_ap_CS_fsm_state1221() {
    ap_CS_fsm_state1221 = ap_CS_fsm.read()[1220];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1222() {
    ap_CS_fsm_state1222 = ap_CS_fsm.read()[1221];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1223() {
    ap_CS_fsm_state1223 = ap_CS_fsm.read()[1222];
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

void ShuffleNetV2::thread_ap_CS_fsm_state1233() {
    ap_CS_fsm_state1233 = ap_CS_fsm.read()[1232];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1234() {
    ap_CS_fsm_state1234 = ap_CS_fsm.read()[1233];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1235() {
    ap_CS_fsm_state1235 = ap_CS_fsm.read()[1234];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1236() {
    ap_CS_fsm_state1236 = ap_CS_fsm.read()[1235];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1237() {
    ap_CS_fsm_state1237 = ap_CS_fsm.read()[1236];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1238() {
    ap_CS_fsm_state1238 = ap_CS_fsm.read()[1237];
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

void ShuffleNetV2::thread_ap_CS_fsm_state126() {
    ap_CS_fsm_state126 = ap_CS_fsm.read()[125];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1262() {
    ap_CS_fsm_state1262 = ap_CS_fsm.read()[1261];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1263() {
    ap_CS_fsm_state1263 = ap_CS_fsm.read()[1262];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1264() {
    ap_CS_fsm_state1264 = ap_CS_fsm.read()[1263];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1265() {
    ap_CS_fsm_state1265 = ap_CS_fsm.read()[1264];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1266() {
    ap_CS_fsm_state1266 = ap_CS_fsm.read()[1265];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1267() {
    ap_CS_fsm_state1267 = ap_CS_fsm.read()[1266];
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

void ShuffleNetV2::thread_ap_CS_fsm_state1297() {
    ap_CS_fsm_state1297 = ap_CS_fsm.read()[1296];
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

void ShuffleNetV2::thread_ap_CS_fsm_state1317() {
    ap_CS_fsm_state1317 = ap_CS_fsm.read()[1316];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1318() {
    ap_CS_fsm_state1318 = ap_CS_fsm.read()[1317];
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

void ShuffleNetV2::thread_ap_CS_fsm_state1325() {
    ap_CS_fsm_state1325 = ap_CS_fsm.read()[1324];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1326() {
    ap_CS_fsm_state1326 = ap_CS_fsm.read()[1325];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1327() {
    ap_CS_fsm_state1327 = ap_CS_fsm.read()[1326];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1328() {
    ap_CS_fsm_state1328 = ap_CS_fsm.read()[1327];
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

void ShuffleNetV2::thread_ap_CS_fsm_state137() {
    ap_CS_fsm_state137 = ap_CS_fsm.read()[136];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1374() {
    ap_CS_fsm_state1374 = ap_CS_fsm.read()[1373];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1375() {
    ap_CS_fsm_state1375 = ap_CS_fsm.read()[1374];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1376() {
    ap_CS_fsm_state1376 = ap_CS_fsm.read()[1375];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1377() {
    ap_CS_fsm_state1377 = ap_CS_fsm.read()[1376];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1378() {
    ap_CS_fsm_state1378 = ap_CS_fsm.read()[1377];
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

void ShuffleNetV2::thread_ap_CS_fsm_state1385() {
    ap_CS_fsm_state1385 = ap_CS_fsm.read()[1384];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1386() {
    ap_CS_fsm_state1386 = ap_CS_fsm.read()[1385];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1387() {
    ap_CS_fsm_state1387 = ap_CS_fsm.read()[1386];
}

void ShuffleNetV2::thread_ap_CS_fsm_state139() {
    ap_CS_fsm_state139 = ap_CS_fsm.read()[138];
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

void ShuffleNetV2::thread_ap_CS_fsm_state1415() {
    ap_CS_fsm_state1415 = ap_CS_fsm.read()[1414];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1416() {
    ap_CS_fsm_state1416 = ap_CS_fsm.read()[1415];
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

void ShuffleNetV2::thread_ap_CS_fsm_state1449() {
    ap_CS_fsm_state1449 = ap_CS_fsm.read()[1448];
}

void ShuffleNetV2::thread_ap_CS_fsm_state145() {
    ap_CS_fsm_state145 = ap_CS_fsm.read()[144];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1450() {
    ap_CS_fsm_state1450 = ap_CS_fsm.read()[1449];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1451() {
    ap_CS_fsm_state1451 = ap_CS_fsm.read()[1450];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1452() {
    ap_CS_fsm_state1452 = ap_CS_fsm.read()[1451];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1453() {
    ap_CS_fsm_state1453 = ap_CS_fsm.read()[1452];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1454() {
    ap_CS_fsm_state1454 = ap_CS_fsm.read()[1453];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1455() {
    ap_CS_fsm_state1455 = ap_CS_fsm.read()[1454];
}

void ShuffleNetV2::thread_ap_CS_fsm_state146() {
    ap_CS_fsm_state146 = ap_CS_fsm.read()[145];
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

void ShuffleNetV2::thread_ap_CS_fsm_state1467() {
    ap_CS_fsm_state1467 = ap_CS_fsm.read()[1466];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1468() {
    ap_CS_fsm_state1468 = ap_CS_fsm.read()[1467];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1469() {
    ap_CS_fsm_state1469 = ap_CS_fsm.read()[1468];
}

void ShuffleNetV2::thread_ap_CS_fsm_state147() {
    ap_CS_fsm_state147 = ap_CS_fsm.read()[146];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1470() {
    ap_CS_fsm_state1470 = ap_CS_fsm.read()[1469];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1471() {
    ap_CS_fsm_state1471 = ap_CS_fsm.read()[1470];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1472() {
    ap_CS_fsm_state1472 = ap_CS_fsm.read()[1471];
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

void ShuffleNetV2::thread_ap_CS_fsm_state151() {
    ap_CS_fsm_state151 = ap_CS_fsm.read()[150];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1514() {
    ap_CS_fsm_state1514 = ap_CS_fsm.read()[1513];
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

void ShuffleNetV2::thread_ap_CS_fsm_state155() {
    ap_CS_fsm_state155 = ap_CS_fsm.read()[154];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1553() {
    ap_CS_fsm_state1553 = ap_CS_fsm.read()[1552];
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

void ShuffleNetV2::thread_ap_CS_fsm_state1564() {
    ap_CS_fsm_state1564 = ap_CS_fsm.read()[1563];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1565() {
    ap_CS_fsm_state1565 = ap_CS_fsm.read()[1564];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1566() {
    ap_CS_fsm_state1566 = ap_CS_fsm.read()[1565];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1567() {
    ap_CS_fsm_state1567 = ap_CS_fsm.read()[1566];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1568() {
    ap_CS_fsm_state1568 = ap_CS_fsm.read()[1567];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1569() {
    ap_CS_fsm_state1569 = ap_CS_fsm.read()[1568];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1576() {
    ap_CS_fsm_state1576 = ap_CS_fsm.read()[1575];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1577() {
    ap_CS_fsm_state1577 = ap_CS_fsm.read()[1576];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1578() {
    ap_CS_fsm_state1578 = ap_CS_fsm.read()[1577];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1579() {
    ap_CS_fsm_state1579 = ap_CS_fsm.read()[1578];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1580() {
    ap_CS_fsm_state1580 = ap_CS_fsm.read()[1579];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1581() {
    ap_CS_fsm_state1581 = ap_CS_fsm.read()[1580];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1582() {
    ap_CS_fsm_state1582 = ap_CS_fsm.read()[1581];
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

void ShuffleNetV2::thread_ap_CS_fsm_state1605() {
    ap_CS_fsm_state1605 = ap_CS_fsm.read()[1604];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1606() {
    ap_CS_fsm_state1606 = ap_CS_fsm.read()[1605];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1607() {
    ap_CS_fsm_state1607 = ap_CS_fsm.read()[1606];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1608() {
    ap_CS_fsm_state1608 = ap_CS_fsm.read()[1607];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1609() {
    ap_CS_fsm_state1609 = ap_CS_fsm.read()[1608];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1610() {
    ap_CS_fsm_state1610 = ap_CS_fsm.read()[1609];
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

void ShuffleNetV2::thread_ap_CS_fsm_state163() {
    ap_CS_fsm_state163 = ap_CS_fsm.read()[162];
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

void ShuffleNetV2::thread_ap_CS_fsm_state164() {
    ap_CS_fsm_state164 = ap_CS_fsm.read()[163];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1643() {
    ap_CS_fsm_state1643 = ap_CS_fsm.read()[1642];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1644() {
    ap_CS_fsm_state1644 = ap_CS_fsm.read()[1643];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1645() {
    ap_CS_fsm_state1645 = ap_CS_fsm.read()[1644];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1646() {
    ap_CS_fsm_state1646 = ap_CS_fsm.read()[1645];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1647() {
    ap_CS_fsm_state1647 = ap_CS_fsm.read()[1646];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1648() {
    ap_CS_fsm_state1648 = ap_CS_fsm.read()[1647];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1649() {
    ap_CS_fsm_state1649 = ap_CS_fsm.read()[1648];
}

void ShuffleNetV2::thread_ap_CS_fsm_state165() {
    ap_CS_fsm_state165 = ap_CS_fsm.read()[164];
}

void ShuffleNetV2::thread_ap_CS_fsm_state1650() {
    ap_CS_fsm_state1650 = ap_CS_fsm.read()[1649];
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

void ShuffleNetV2::thread_ap_CS_fsm_state17() {
    ap_CS_fsm_state17 = ap_CS_fsm.read()[16];
}

void ShuffleNetV2::thread_ap_CS_fsm_state172() {
    ap_CS_fsm_state172 = ap_CS_fsm.read()[171];
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

void ShuffleNetV2::thread_ap_CS_fsm_state219() {
    ap_CS_fsm_state219 = ap_CS_fsm.read()[218];
}

void ShuffleNetV2::thread_ap_CS_fsm_state220() {
    ap_CS_fsm_state220 = ap_CS_fsm.read()[219];
}

void ShuffleNetV2::thread_ap_CS_fsm_state221() {
    ap_CS_fsm_state221 = ap_CS_fsm.read()[220];
}

void ShuffleNetV2::thread_ap_CS_fsm_state222() {
    ap_CS_fsm_state222 = ap_CS_fsm.read()[221];
}

void ShuffleNetV2::thread_ap_CS_fsm_state223() {
    ap_CS_fsm_state223 = ap_CS_fsm.read()[222];
}

void ShuffleNetV2::thread_ap_CS_fsm_state224() {
    ap_CS_fsm_state224 = ap_CS_fsm.read()[223];
}

void ShuffleNetV2::thread_ap_CS_fsm_state225() {
    ap_CS_fsm_state225 = ap_CS_fsm.read()[224];
}

void ShuffleNetV2::thread_ap_CS_fsm_state226() {
    ap_CS_fsm_state226 = ap_CS_fsm.read()[225];
}

void ShuffleNetV2::thread_ap_CS_fsm_state227() {
    ap_CS_fsm_state227 = ap_CS_fsm.read()[226];
}

void ShuffleNetV2::thread_ap_CS_fsm_state228() {
    ap_CS_fsm_state228 = ap_CS_fsm.read()[227];
}

void ShuffleNetV2::thread_ap_CS_fsm_state229() {
    ap_CS_fsm_state229 = ap_CS_fsm.read()[228];
}

void ShuffleNetV2::thread_ap_CS_fsm_state235() {
    ap_CS_fsm_state235 = ap_CS_fsm.read()[234];
}

void ShuffleNetV2::thread_ap_CS_fsm_state236() {
    ap_CS_fsm_state236 = ap_CS_fsm.read()[235];
}

void ShuffleNetV2::thread_ap_CS_fsm_state237() {
    ap_CS_fsm_state237 = ap_CS_fsm.read()[236];
}

void ShuffleNetV2::thread_ap_CS_fsm_state238() {
    ap_CS_fsm_state238 = ap_CS_fsm.read()[237];
}

void ShuffleNetV2::thread_ap_CS_fsm_state239() {
    ap_CS_fsm_state239 = ap_CS_fsm.read()[238];
}

void ShuffleNetV2::thread_ap_CS_fsm_state245() {
    ap_CS_fsm_state245 = ap_CS_fsm.read()[244];
}

void ShuffleNetV2::thread_ap_CS_fsm_state246() {
    ap_CS_fsm_state246 = ap_CS_fsm.read()[245];
}

void ShuffleNetV2::thread_ap_CS_fsm_state247() {
    ap_CS_fsm_state247 = ap_CS_fsm.read()[246];
}

void ShuffleNetV2::thread_ap_CS_fsm_state248() {
    ap_CS_fsm_state248 = ap_CS_fsm.read()[247];
}

void ShuffleNetV2::thread_ap_CS_fsm_state249() {
    ap_CS_fsm_state249 = ap_CS_fsm.read()[248];
}

void ShuffleNetV2::thread_ap_CS_fsm_state250() {
    ap_CS_fsm_state250 = ap_CS_fsm.read()[249];
}

void ShuffleNetV2::thread_ap_CS_fsm_state251() {
    ap_CS_fsm_state251 = ap_CS_fsm.read()[250];
}

void ShuffleNetV2::thread_ap_CS_fsm_state257() {
    ap_CS_fsm_state257 = ap_CS_fsm.read()[256];
}

void ShuffleNetV2::thread_ap_CS_fsm_state258() {
    ap_CS_fsm_state258 = ap_CS_fsm.read()[257];
}

void ShuffleNetV2::thread_ap_CS_fsm_state259() {
    ap_CS_fsm_state259 = ap_CS_fsm.read()[258];
}

void ShuffleNetV2::thread_ap_CS_fsm_state26() {
    ap_CS_fsm_state26 = ap_CS_fsm.read()[25];
}

void ShuffleNetV2::thread_ap_CS_fsm_state260() {
    ap_CS_fsm_state260 = ap_CS_fsm.read()[259];
}

void ShuffleNetV2::thread_ap_CS_fsm_state266() {
    ap_CS_fsm_state266 = ap_CS_fsm.read()[265];
}

void ShuffleNetV2::thread_ap_CS_fsm_state267() {
    ap_CS_fsm_state267 = ap_CS_fsm.read()[266];
}

void ShuffleNetV2::thread_ap_CS_fsm_state268() {
    ap_CS_fsm_state268 = ap_CS_fsm.read()[267];
}

void ShuffleNetV2::thread_ap_CS_fsm_state269() {
    ap_CS_fsm_state269 = ap_CS_fsm.read()[268];
}

void ShuffleNetV2::thread_ap_CS_fsm_state27() {
    ap_CS_fsm_state27 = ap_CS_fsm.read()[26];
}

void ShuffleNetV2::thread_ap_CS_fsm_state270() {
    ap_CS_fsm_state270 = ap_CS_fsm.read()[269];
}

void ShuffleNetV2::thread_ap_CS_fsm_state271() {
    ap_CS_fsm_state271 = ap_CS_fsm.read()[270];
}

void ShuffleNetV2::thread_ap_CS_fsm_state277() {
    ap_CS_fsm_state277 = ap_CS_fsm.read()[276];
}

void ShuffleNetV2::thread_ap_CS_fsm_state278() {
    ap_CS_fsm_state278 = ap_CS_fsm.read()[277];
}

void ShuffleNetV2::thread_ap_CS_fsm_state279() {
    ap_CS_fsm_state279 = ap_CS_fsm.read()[278];
}

void ShuffleNetV2::thread_ap_CS_fsm_state28() {
    ap_CS_fsm_state28 = ap_CS_fsm.read()[27];
}

void ShuffleNetV2::thread_ap_CS_fsm_state280() {
    ap_CS_fsm_state280 = ap_CS_fsm.read()[279];
}

void ShuffleNetV2::thread_ap_CS_fsm_state281() {
    ap_CS_fsm_state281 = ap_CS_fsm.read()[280];
}

void ShuffleNetV2::thread_ap_CS_fsm_state287() {
    ap_CS_fsm_state287 = ap_CS_fsm.read()[286];
}

void ShuffleNetV2::thread_ap_CS_fsm_state288() {
    ap_CS_fsm_state288 = ap_CS_fsm.read()[287];
}

void ShuffleNetV2::thread_ap_CS_fsm_state289() {
    ap_CS_fsm_state289 = ap_CS_fsm.read()[288];
}

void ShuffleNetV2::thread_ap_CS_fsm_state29() {
    ap_CS_fsm_state29 = ap_CS_fsm.read()[28];
}

void ShuffleNetV2::thread_ap_CS_fsm_state290() {
    ap_CS_fsm_state290 = ap_CS_fsm.read()[289];
}

void ShuffleNetV2::thread_ap_CS_fsm_state291() {
    ap_CS_fsm_state291 = ap_CS_fsm.read()[290];
}

void ShuffleNetV2::thread_ap_CS_fsm_state292() {
    ap_CS_fsm_state292 = ap_CS_fsm.read()[291];
}

void ShuffleNetV2::thread_ap_CS_fsm_state293() {
    ap_CS_fsm_state293 = ap_CS_fsm.read()[292];
}

void ShuffleNetV2::thread_ap_CS_fsm_state294() {
    ap_CS_fsm_state294 = ap_CS_fsm.read()[293];
}

void ShuffleNetV2::thread_ap_CS_fsm_state295() {
    ap_CS_fsm_state295 = ap_CS_fsm.read()[294];
}

void ShuffleNetV2::thread_ap_CS_fsm_state296() {
    ap_CS_fsm_state296 = ap_CS_fsm.read()[295];
}

void ShuffleNetV2::thread_ap_CS_fsm_state297() {
    ap_CS_fsm_state297 = ap_CS_fsm.read()[296];
}

void ShuffleNetV2::thread_ap_CS_fsm_state298() {
    ap_CS_fsm_state298 = ap_CS_fsm.read()[297];
}

void ShuffleNetV2::thread_ap_CS_fsm_state299() {
    ap_CS_fsm_state299 = ap_CS_fsm.read()[298];
}

void ShuffleNetV2::thread_ap_CS_fsm_state30() {
    ap_CS_fsm_state30 = ap_CS_fsm.read()[29];
}

void ShuffleNetV2::thread_ap_CS_fsm_state300() {
    ap_CS_fsm_state300 = ap_CS_fsm.read()[299];
}

void ShuffleNetV2::thread_ap_CS_fsm_state301() {
    ap_CS_fsm_state301 = ap_CS_fsm.read()[300];
}

void ShuffleNetV2::thread_ap_CS_fsm_state307() {
    ap_CS_fsm_state307 = ap_CS_fsm.read()[306];
}

void ShuffleNetV2::thread_ap_CS_fsm_state308() {
    ap_CS_fsm_state308 = ap_CS_fsm.read()[307];
}

void ShuffleNetV2::thread_ap_CS_fsm_state309() {
    ap_CS_fsm_state309 = ap_CS_fsm.read()[308];
}

void ShuffleNetV2::thread_ap_CS_fsm_state31() {
    ap_CS_fsm_state31 = ap_CS_fsm.read()[30];
}

void ShuffleNetV2::thread_ap_CS_fsm_state310() {
    ap_CS_fsm_state310 = ap_CS_fsm.read()[309];
}

void ShuffleNetV2::thread_ap_CS_fsm_state311() {
    ap_CS_fsm_state311 = ap_CS_fsm.read()[310];
}

void ShuffleNetV2::thread_ap_CS_fsm_state312() {
    ap_CS_fsm_state312 = ap_CS_fsm.read()[311];
}

void ShuffleNetV2::thread_ap_CS_fsm_state319() {
    ap_CS_fsm_state319 = ap_CS_fsm.read()[318];
}

void ShuffleNetV2::thread_ap_CS_fsm_state320() {
    ap_CS_fsm_state320 = ap_CS_fsm.read()[319];
}

void ShuffleNetV2::thread_ap_CS_fsm_state321() {
    ap_CS_fsm_state321 = ap_CS_fsm.read()[320];
}

void ShuffleNetV2::thread_ap_CS_fsm_state322() {
    ap_CS_fsm_state322 = ap_CS_fsm.read()[321];
}

void ShuffleNetV2::thread_ap_CS_fsm_state323() {
    ap_CS_fsm_state323 = ap_CS_fsm.read()[322];
}

void ShuffleNetV2::thread_ap_CS_fsm_state324() {
    ap_CS_fsm_state324 = ap_CS_fsm.read()[323];
}

void ShuffleNetV2::thread_ap_CS_fsm_state330() {
    ap_CS_fsm_state330 = ap_CS_fsm.read()[329];
}

void ShuffleNetV2::thread_ap_CS_fsm_state331() {
    ap_CS_fsm_state331 = ap_CS_fsm.read()[330];
}

void ShuffleNetV2::thread_ap_CS_fsm_state332() {
    ap_CS_fsm_state332 = ap_CS_fsm.read()[331];
}

void ShuffleNetV2::thread_ap_CS_fsm_state333() {
    ap_CS_fsm_state333 = ap_CS_fsm.read()[332];
}

void ShuffleNetV2::thread_ap_CS_fsm_state339() {
    ap_CS_fsm_state339 = ap_CS_fsm.read()[338];
}

void ShuffleNetV2::thread_ap_CS_fsm_state340() {
    ap_CS_fsm_state340 = ap_CS_fsm.read()[339];
}

void ShuffleNetV2::thread_ap_CS_fsm_state341() {
    ap_CS_fsm_state341 = ap_CS_fsm.read()[340];
}

void ShuffleNetV2::thread_ap_CS_fsm_state342() {
    ap_CS_fsm_state342 = ap_CS_fsm.read()[341];
}

void ShuffleNetV2::thread_ap_CS_fsm_state343() {
    ap_CS_fsm_state343 = ap_CS_fsm.read()[342];
}

void ShuffleNetV2::thread_ap_CS_fsm_state344() {
    ap_CS_fsm_state344 = ap_CS_fsm.read()[343];
}

void ShuffleNetV2::thread_ap_CS_fsm_state350() {
    ap_CS_fsm_state350 = ap_CS_fsm.read()[349];
}

void ShuffleNetV2::thread_ap_CS_fsm_state351() {
    ap_CS_fsm_state351 = ap_CS_fsm.read()[350];
}

void ShuffleNetV2::thread_ap_CS_fsm_state352() {
    ap_CS_fsm_state352 = ap_CS_fsm.read()[351];
}

void ShuffleNetV2::thread_ap_CS_fsm_state353() {
    ap_CS_fsm_state353 = ap_CS_fsm.read()[352];
}

void ShuffleNetV2::thread_ap_CS_fsm_state354() {
    ap_CS_fsm_state354 = ap_CS_fsm.read()[353];
}

void ShuffleNetV2::thread_ap_CS_fsm_state360() {
    ap_CS_fsm_state360 = ap_CS_fsm.read()[359];
}

void ShuffleNetV2::thread_ap_CS_fsm_state361() {
    ap_CS_fsm_state361 = ap_CS_fsm.read()[360];
}

void ShuffleNetV2::thread_ap_CS_fsm_state362() {
    ap_CS_fsm_state362 = ap_CS_fsm.read()[361];
}

void ShuffleNetV2::thread_ap_CS_fsm_state363() {
    ap_CS_fsm_state363 = ap_CS_fsm.read()[362];
}

void ShuffleNetV2::thread_ap_CS_fsm_state364() {
    ap_CS_fsm_state364 = ap_CS_fsm.read()[363];
}

void ShuffleNetV2::thread_ap_CS_fsm_state365() {
    ap_CS_fsm_state365 = ap_CS_fsm.read()[364];
}

void ShuffleNetV2::thread_ap_CS_fsm_state366() {
    ap_CS_fsm_state366 = ap_CS_fsm.read()[365];
}

void ShuffleNetV2::thread_ap_CS_fsm_state367() {
    ap_CS_fsm_state367 = ap_CS_fsm.read()[366];
}

void ShuffleNetV2::thread_ap_CS_fsm_state368() {
    ap_CS_fsm_state368 = ap_CS_fsm.read()[367];
}

void ShuffleNetV2::thread_ap_CS_fsm_state369() {
    ap_CS_fsm_state369 = ap_CS_fsm.read()[368];
}

void ShuffleNetV2::thread_ap_CS_fsm_state37() {
    ap_CS_fsm_state37 = ap_CS_fsm.read()[36];
}

void ShuffleNetV2::thread_ap_CS_fsm_state370() {
    ap_CS_fsm_state370 = ap_CS_fsm.read()[369];
}

void ShuffleNetV2::thread_ap_CS_fsm_state371() {
    ap_CS_fsm_state371 = ap_CS_fsm.read()[370];
}

void ShuffleNetV2::thread_ap_CS_fsm_state372() {
    ap_CS_fsm_state372 = ap_CS_fsm.read()[371];
}

void ShuffleNetV2::thread_ap_CS_fsm_state373() {
    ap_CS_fsm_state373 = ap_CS_fsm.read()[372];
}

void ShuffleNetV2::thread_ap_CS_fsm_state38() {
    ap_CS_fsm_state38 = ap_CS_fsm.read()[37];
}

void ShuffleNetV2::thread_ap_CS_fsm_state380() {
    ap_CS_fsm_state380 = ap_CS_fsm.read()[379];
}

void ShuffleNetV2::thread_ap_CS_fsm_state381() {
    ap_CS_fsm_state381 = ap_CS_fsm.read()[380];
}

void ShuffleNetV2::thread_ap_CS_fsm_state382() {
    ap_CS_fsm_state382 = ap_CS_fsm.read()[381];
}

void ShuffleNetV2::thread_ap_CS_fsm_state383() {
    ap_CS_fsm_state383 = ap_CS_fsm.read()[382];
}

void ShuffleNetV2::thread_ap_CS_fsm_state384() {
    ap_CS_fsm_state384 = ap_CS_fsm.read()[383];
}

void ShuffleNetV2::thread_ap_CS_fsm_state385() {
    ap_CS_fsm_state385 = ap_CS_fsm.read()[384];
}

void ShuffleNetV2::thread_ap_CS_fsm_state386() {
    ap_CS_fsm_state386 = ap_CS_fsm.read()[385];
}

void ShuffleNetV2::thread_ap_CS_fsm_state39() {
    ap_CS_fsm_state39 = ap_CS_fsm.read()[38];
}

void ShuffleNetV2::thread_ap_CS_fsm_state393() {
    ap_CS_fsm_state393 = ap_CS_fsm.read()[392];
}

void ShuffleNetV2::thread_ap_CS_fsm_state394() {
    ap_CS_fsm_state394 = ap_CS_fsm.read()[393];
}

void ShuffleNetV2::thread_ap_CS_fsm_state395() {
    ap_CS_fsm_state395 = ap_CS_fsm.read()[394];
}

void ShuffleNetV2::thread_ap_CS_fsm_state396() {
    ap_CS_fsm_state396 = ap_CS_fsm.read()[395];
}

void ShuffleNetV2::thread_ap_CS_fsm_state397() {
    ap_CS_fsm_state397 = ap_CS_fsm.read()[396];
}

void ShuffleNetV2::thread_ap_CS_fsm_state398() {
    ap_CS_fsm_state398 = ap_CS_fsm.read()[397];
}

void ShuffleNetV2::thread_ap_CS_fsm_state399() {
    ap_CS_fsm_state399 = ap_CS_fsm.read()[398];
}

void ShuffleNetV2::thread_ap_CS_fsm_state40() {
    ap_CS_fsm_state40 = ap_CS_fsm.read()[39];
}

void ShuffleNetV2::thread_ap_CS_fsm_state400() {
    ap_CS_fsm_state400 = ap_CS_fsm.read()[399];
}

void ShuffleNetV2::thread_ap_CS_fsm_state401() {
    ap_CS_fsm_state401 = ap_CS_fsm.read()[400];
}

void ShuffleNetV2::thread_ap_CS_fsm_state402() {
    ap_CS_fsm_state402 = ap_CS_fsm.read()[401];
}

void ShuffleNetV2::thread_ap_CS_fsm_state409() {
    ap_CS_fsm_state409 = ap_CS_fsm.read()[408];
}

void ShuffleNetV2::thread_ap_CS_fsm_state41() {
    ap_CS_fsm_state41 = ap_CS_fsm.read()[40];
}

void ShuffleNetV2::thread_ap_CS_fsm_state410() {
    ap_CS_fsm_state410 = ap_CS_fsm.read()[409];
}

void ShuffleNetV2::thread_ap_CS_fsm_state411() {
    ap_CS_fsm_state411 = ap_CS_fsm.read()[410];
}

void ShuffleNetV2::thread_ap_CS_fsm_state412() {
    ap_CS_fsm_state412 = ap_CS_fsm.read()[411];
}

void ShuffleNetV2::thread_ap_CS_fsm_state413() {
    ap_CS_fsm_state413 = ap_CS_fsm.read()[412];
}

void ShuffleNetV2::thread_ap_CS_fsm_state414() {
    ap_CS_fsm_state414 = ap_CS_fsm.read()[413];
}

void ShuffleNetV2::thread_ap_CS_fsm_state42() {
    ap_CS_fsm_state42 = ap_CS_fsm.read()[41];
}

void ShuffleNetV2::thread_ap_CS_fsm_state421() {
    ap_CS_fsm_state421 = ap_CS_fsm.read()[420];
}

void ShuffleNetV2::thread_ap_CS_fsm_state422() {
    ap_CS_fsm_state422 = ap_CS_fsm.read()[421];
}

void ShuffleNetV2::thread_ap_CS_fsm_state423() {
    ap_CS_fsm_state423 = ap_CS_fsm.read()[422];
}

void ShuffleNetV2::thread_ap_CS_fsm_state424() {
    ap_CS_fsm_state424 = ap_CS_fsm.read()[423];
}

void ShuffleNetV2::thread_ap_CS_fsm_state425() {
    ap_CS_fsm_state425 = ap_CS_fsm.read()[424];
}

void ShuffleNetV2::thread_ap_CS_fsm_state426() {
    ap_CS_fsm_state426 = ap_CS_fsm.read()[425];
}

void ShuffleNetV2::thread_ap_CS_fsm_state427() {
    ap_CS_fsm_state427 = ap_CS_fsm.read()[426];
}

void ShuffleNetV2::thread_ap_CS_fsm_state428() {
    ap_CS_fsm_state428 = ap_CS_fsm.read()[427];
}

void ShuffleNetV2::thread_ap_CS_fsm_state435() {
    ap_CS_fsm_state435 = ap_CS_fsm.read()[434];
}

void ShuffleNetV2::thread_ap_CS_fsm_state436() {
    ap_CS_fsm_state436 = ap_CS_fsm.read()[435];
}

void ShuffleNetV2::thread_ap_CS_fsm_state437() {
    ap_CS_fsm_state437 = ap_CS_fsm.read()[436];
}

void ShuffleNetV2::thread_ap_CS_fsm_state438() {
    ap_CS_fsm_state438 = ap_CS_fsm.read()[437];
}

void ShuffleNetV2::thread_ap_CS_fsm_state439() {
    ap_CS_fsm_state439 = ap_CS_fsm.read()[438];
}

void ShuffleNetV2::thread_ap_CS_fsm_state440() {
    ap_CS_fsm_state440 = ap_CS_fsm.read()[439];
}

void ShuffleNetV2::thread_ap_CS_fsm_state441() {
    ap_CS_fsm_state441 = ap_CS_fsm.read()[440];
}

void ShuffleNetV2::thread_ap_CS_fsm_state448() {
    ap_CS_fsm_state448 = ap_CS_fsm.read()[447];
}

void ShuffleNetV2::thread_ap_CS_fsm_state449() {
    ap_CS_fsm_state449 = ap_CS_fsm.read()[448];
}

void ShuffleNetV2::thread_ap_CS_fsm_state450() {
    ap_CS_fsm_state450 = ap_CS_fsm.read()[449];
}

void ShuffleNetV2::thread_ap_CS_fsm_state451() {
    ap_CS_fsm_state451 = ap_CS_fsm.read()[450];
}

void ShuffleNetV2::thread_ap_CS_fsm_state452() {
    ap_CS_fsm_state452 = ap_CS_fsm.read()[451];
}

void ShuffleNetV2::thread_ap_CS_fsm_state453() {
    ap_CS_fsm_state453 = ap_CS_fsm.read()[452];
}

void ShuffleNetV2::thread_ap_CS_fsm_state454() {
    ap_CS_fsm_state454 = ap_CS_fsm.read()[453];
}

void ShuffleNetV2::thread_ap_CS_fsm_state455() {
    ap_CS_fsm_state455 = ap_CS_fsm.read()[454];
}

void ShuffleNetV2::thread_ap_CS_fsm_state456() {
    ap_CS_fsm_state456 = ap_CS_fsm.read()[455];
}

void ShuffleNetV2::thread_ap_CS_fsm_state457() {
    ap_CS_fsm_state457 = ap_CS_fsm.read()[456];
}

void ShuffleNetV2::thread_ap_CS_fsm_state458() {
    ap_CS_fsm_state458 = ap_CS_fsm.read()[457];
}

void ShuffleNetV2::thread_ap_CS_fsm_state459() {
    ap_CS_fsm_state459 = ap_CS_fsm.read()[458];
}

void ShuffleNetV2::thread_ap_CS_fsm_state466() {
    ap_CS_fsm_state466 = ap_CS_fsm.read()[465];
}

void ShuffleNetV2::thread_ap_CS_fsm_state467() {
    ap_CS_fsm_state467 = ap_CS_fsm.read()[466];
}

void ShuffleNetV2::thread_ap_CS_fsm_state468() {
    ap_CS_fsm_state468 = ap_CS_fsm.read()[467];
}

void ShuffleNetV2::thread_ap_CS_fsm_state469() {
    ap_CS_fsm_state469 = ap_CS_fsm.read()[468];
}

void ShuffleNetV2::thread_ap_CS_fsm_state470() {
    ap_CS_fsm_state470 = ap_CS_fsm.read()[469];
}

void ShuffleNetV2::thread_ap_CS_fsm_state471() {
    ap_CS_fsm_state471 = ap_CS_fsm.read()[470];
}

void ShuffleNetV2::thread_ap_CS_fsm_state478() {
    ap_CS_fsm_state478 = ap_CS_fsm.read()[477];
}

void ShuffleNetV2::thread_ap_CS_fsm_state479() {
    ap_CS_fsm_state479 = ap_CS_fsm.read()[478];
}

void ShuffleNetV2::thread_ap_CS_fsm_state48() {
    ap_CS_fsm_state48 = ap_CS_fsm.read()[47];
}

void ShuffleNetV2::thread_ap_CS_fsm_state480() {
    ap_CS_fsm_state480 = ap_CS_fsm.read()[479];
}

void ShuffleNetV2::thread_ap_CS_fsm_state481() {
    ap_CS_fsm_state481 = ap_CS_fsm.read()[480];
}

void ShuffleNetV2::thread_ap_CS_fsm_state482() {
    ap_CS_fsm_state482 = ap_CS_fsm.read()[481];
}

void ShuffleNetV2::thread_ap_CS_fsm_state483() {
    ap_CS_fsm_state483 = ap_CS_fsm.read()[482];
}

void ShuffleNetV2::thread_ap_CS_fsm_state484() {
    ap_CS_fsm_state484 = ap_CS_fsm.read()[483];
}

void ShuffleNetV2::thread_ap_CS_fsm_state485() {
    ap_CS_fsm_state485 = ap_CS_fsm.read()[484];
}

void ShuffleNetV2::thread_ap_CS_fsm_state49() {
    ap_CS_fsm_state49 = ap_CS_fsm.read()[48];
}

void ShuffleNetV2::thread_ap_CS_fsm_state492() {
    ap_CS_fsm_state492 = ap_CS_fsm.read()[491];
}

void ShuffleNetV2::thread_ap_CS_fsm_state493() {
    ap_CS_fsm_state493 = ap_CS_fsm.read()[492];
}

void ShuffleNetV2::thread_ap_CS_fsm_state494() {
    ap_CS_fsm_state494 = ap_CS_fsm.read()[493];
}

void ShuffleNetV2::thread_ap_CS_fsm_state495() {
    ap_CS_fsm_state495 = ap_CS_fsm.read()[494];
}

void ShuffleNetV2::thread_ap_CS_fsm_state496() {
    ap_CS_fsm_state496 = ap_CS_fsm.read()[495];
}

void ShuffleNetV2::thread_ap_CS_fsm_state497() {
    ap_CS_fsm_state497 = ap_CS_fsm.read()[496];
}

void ShuffleNetV2::thread_ap_CS_fsm_state498() {
    ap_CS_fsm_state498 = ap_CS_fsm.read()[497];
}

void ShuffleNetV2::thread_ap_CS_fsm_state50() {
    ap_CS_fsm_state50 = ap_CS_fsm.read()[49];
}

void ShuffleNetV2::thread_ap_CS_fsm_state505() {
    ap_CS_fsm_state505 = ap_CS_fsm.read()[504];
}

void ShuffleNetV2::thread_ap_CS_fsm_state506() {
    ap_CS_fsm_state506 = ap_CS_fsm.read()[505];
}

void ShuffleNetV2::thread_ap_CS_fsm_state507() {
    ap_CS_fsm_state507 = ap_CS_fsm.read()[506];
}

void ShuffleNetV2::thread_ap_CS_fsm_state508() {
    ap_CS_fsm_state508 = ap_CS_fsm.read()[507];
}

void ShuffleNetV2::thread_ap_CS_fsm_state509() {
    ap_CS_fsm_state509 = ap_CS_fsm.read()[508];
}

void ShuffleNetV2::thread_ap_CS_fsm_state51() {
    ap_CS_fsm_state51 = ap_CS_fsm.read()[50];
}

void ShuffleNetV2::thread_ap_CS_fsm_state510() {
    ap_CS_fsm_state510 = ap_CS_fsm.read()[509];
}

void ShuffleNetV2::thread_ap_CS_fsm_state511() {
    ap_CS_fsm_state511 = ap_CS_fsm.read()[510];
}

void ShuffleNetV2::thread_ap_CS_fsm_state512() {
    ap_CS_fsm_state512 = ap_CS_fsm.read()[511];
}

void ShuffleNetV2::thread_ap_CS_fsm_state513() {
    ap_CS_fsm_state513 = ap_CS_fsm.read()[512];
}

void ShuffleNetV2::thread_ap_CS_fsm_state514() {
    ap_CS_fsm_state514 = ap_CS_fsm.read()[513];
}

void ShuffleNetV2::thread_ap_CS_fsm_state515() {
    ap_CS_fsm_state515 = ap_CS_fsm.read()[514];
}

void ShuffleNetV2::thread_ap_CS_fsm_state516() {
    ap_CS_fsm_state516 = ap_CS_fsm.read()[515];
}

void ShuffleNetV2::thread_ap_CS_fsm_state517() {
    ap_CS_fsm_state517 = ap_CS_fsm.read()[516];
}

void ShuffleNetV2::thread_ap_CS_fsm_state518() {
    ap_CS_fsm_state518 = ap_CS_fsm.read()[517];
}

void ShuffleNetV2::thread_ap_CS_fsm_state52() {
    ap_CS_fsm_state52 = ap_CS_fsm.read()[51];
}

void ShuffleNetV2::thread_ap_CS_fsm_state525() {
    ap_CS_fsm_state525 = ap_CS_fsm.read()[524];
}

void ShuffleNetV2::thread_ap_CS_fsm_state526() {
    ap_CS_fsm_state526 = ap_CS_fsm.read()[525];
}

void ShuffleNetV2::thread_ap_CS_fsm_state527() {
    ap_CS_fsm_state527 = ap_CS_fsm.read()[526];
}

void ShuffleNetV2::thread_ap_CS_fsm_state528() {
    ap_CS_fsm_state528 = ap_CS_fsm.read()[527];
}

void ShuffleNetV2::thread_ap_CS_fsm_state529() {
    ap_CS_fsm_state529 = ap_CS_fsm.read()[528];
}

void ShuffleNetV2::thread_ap_CS_fsm_state530() {
    ap_CS_fsm_state530 = ap_CS_fsm.read()[529];
}

void ShuffleNetV2::thread_ap_CS_fsm_state531() {
    ap_CS_fsm_state531 = ap_CS_fsm.read()[530];
}

void ShuffleNetV2::thread_ap_CS_fsm_state538() {
    ap_CS_fsm_state538 = ap_CS_fsm.read()[537];
}

void ShuffleNetV2::thread_ap_CS_fsm_state539() {
    ap_CS_fsm_state539 = ap_CS_fsm.read()[538];
}

void ShuffleNetV2::thread_ap_CS_fsm_state540() {
    ap_CS_fsm_state540 = ap_CS_fsm.read()[539];
}

void ShuffleNetV2::thread_ap_CS_fsm_state541() {
    ap_CS_fsm_state541 = ap_CS_fsm.read()[540];
}

void ShuffleNetV2::thread_ap_CS_fsm_state542() {
    ap_CS_fsm_state542 = ap_CS_fsm.read()[541];
}

void ShuffleNetV2::thread_ap_CS_fsm_state543() {
    ap_CS_fsm_state543 = ap_CS_fsm.read()[542];
}

void ShuffleNetV2::thread_ap_CS_fsm_state544() {
    ap_CS_fsm_state544 = ap_CS_fsm.read()[543];
}

void ShuffleNetV2::thread_ap_CS_fsm_state545() {
    ap_CS_fsm_state545 = ap_CS_fsm.read()[544];
}

void ShuffleNetV2::thread_ap_CS_fsm_state546() {
    ap_CS_fsm_state546 = ap_CS_fsm.read()[545];
}

void ShuffleNetV2::thread_ap_CS_fsm_state547() {
    ap_CS_fsm_state547 = ap_CS_fsm.read()[546];
}

void ShuffleNetV2::thread_ap_CS_fsm_state554() {
    ap_CS_fsm_state554 = ap_CS_fsm.read()[553];
}

void ShuffleNetV2::thread_ap_CS_fsm_state555() {
    ap_CS_fsm_state555 = ap_CS_fsm.read()[554];
}

void ShuffleNetV2::thread_ap_CS_fsm_state556() {
    ap_CS_fsm_state556 = ap_CS_fsm.read()[555];
}

void ShuffleNetV2::thread_ap_CS_fsm_state557() {
    ap_CS_fsm_state557 = ap_CS_fsm.read()[556];
}

void ShuffleNetV2::thread_ap_CS_fsm_state558() {
    ap_CS_fsm_state558 = ap_CS_fsm.read()[557];
}

void ShuffleNetV2::thread_ap_CS_fsm_state559() {
    ap_CS_fsm_state559 = ap_CS_fsm.read()[558];
}

void ShuffleNetV2::thread_ap_CS_fsm_state566() {
    ap_CS_fsm_state566 = ap_CS_fsm.read()[565];
}

void ShuffleNetV2::thread_ap_CS_fsm_state567() {
    ap_CS_fsm_state567 = ap_CS_fsm.read()[566];
}

void ShuffleNetV2::thread_ap_CS_fsm_state568() {
    ap_CS_fsm_state568 = ap_CS_fsm.read()[567];
}

void ShuffleNetV2::thread_ap_CS_fsm_state569() {
    ap_CS_fsm_state569 = ap_CS_fsm.read()[568];
}

void ShuffleNetV2::thread_ap_CS_fsm_state570() {
    ap_CS_fsm_state570 = ap_CS_fsm.read()[569];
}

void ShuffleNetV2::thread_ap_CS_fsm_state571() {
    ap_CS_fsm_state571 = ap_CS_fsm.read()[570];
}

void ShuffleNetV2::thread_ap_CS_fsm_state572() {
    ap_CS_fsm_state572 = ap_CS_fsm.read()[571];
}

void ShuffleNetV2::thread_ap_CS_fsm_state573() {
    ap_CS_fsm_state573 = ap_CS_fsm.read()[572];
}

void ShuffleNetV2::thread_ap_CS_fsm_state58() {
    ap_CS_fsm_state58 = ap_CS_fsm.read()[57];
}

void ShuffleNetV2::thread_ap_CS_fsm_state580() {
    ap_CS_fsm_state580 = ap_CS_fsm.read()[579];
}

void ShuffleNetV2::thread_ap_CS_fsm_state581() {
    ap_CS_fsm_state581 = ap_CS_fsm.read()[580];
}

void ShuffleNetV2::thread_ap_CS_fsm_state582() {
    ap_CS_fsm_state582 = ap_CS_fsm.read()[581];
}

void ShuffleNetV2::thread_ap_CS_fsm_state583() {
    ap_CS_fsm_state583 = ap_CS_fsm.read()[582];
}

void ShuffleNetV2::thread_ap_CS_fsm_state584() {
    ap_CS_fsm_state584 = ap_CS_fsm.read()[583];
}

void ShuffleNetV2::thread_ap_CS_fsm_state585() {
    ap_CS_fsm_state585 = ap_CS_fsm.read()[584];
}

void ShuffleNetV2::thread_ap_CS_fsm_state586() {
    ap_CS_fsm_state586 = ap_CS_fsm.read()[585];
}

void ShuffleNetV2::thread_ap_CS_fsm_state59() {
    ap_CS_fsm_state59 = ap_CS_fsm.read()[58];
}

void ShuffleNetV2::thread_ap_CS_fsm_state593() {
    ap_CS_fsm_state593 = ap_CS_fsm.read()[592];
}

void ShuffleNetV2::thread_ap_CS_fsm_state594() {
    ap_CS_fsm_state594 = ap_CS_fsm.read()[593];
}

void ShuffleNetV2::thread_ap_CS_fsm_state595() {
    ap_CS_fsm_state595 = ap_CS_fsm.read()[594];
}

void ShuffleNetV2::thread_ap_CS_fsm_state596() {
    ap_CS_fsm_state596 = ap_CS_fsm.read()[595];
}

void ShuffleNetV2::thread_ap_CS_fsm_state597() {
    ap_CS_fsm_state597 = ap_CS_fsm.read()[596];
}

void ShuffleNetV2::thread_ap_CS_fsm_state598() {
    ap_CS_fsm_state598 = ap_CS_fsm.read()[597];
}

void ShuffleNetV2::thread_ap_CS_fsm_state599() {
    ap_CS_fsm_state599 = ap_CS_fsm.read()[598];
}

void ShuffleNetV2::thread_ap_CS_fsm_state60() {
    ap_CS_fsm_state60 = ap_CS_fsm.read()[59];
}

void ShuffleNetV2::thread_ap_CS_fsm_state600() {
    ap_CS_fsm_state600 = ap_CS_fsm.read()[599];
}

void ShuffleNetV2::thread_ap_CS_fsm_state601() {
    ap_CS_fsm_state601 = ap_CS_fsm.read()[600];
}

void ShuffleNetV2::thread_ap_CS_fsm_state602() {
    ap_CS_fsm_state602 = ap_CS_fsm.read()[601];
}

void ShuffleNetV2::thread_ap_CS_fsm_state603() {
    ap_CS_fsm_state603 = ap_CS_fsm.read()[602];
}

void ShuffleNetV2::thread_ap_CS_fsm_state604() {
    ap_CS_fsm_state604 = ap_CS_fsm.read()[603];
}

void ShuffleNetV2::thread_ap_CS_fsm_state605() {
    ap_CS_fsm_state605 = ap_CS_fsm.read()[604];
}

void ShuffleNetV2::thread_ap_CS_fsm_state606() {
    ap_CS_fsm_state606 = ap_CS_fsm.read()[605];
}

void ShuffleNetV2::thread_ap_CS_fsm_state607() {
    ap_CS_fsm_state607 = ap_CS_fsm.read()[606];
}

void ShuffleNetV2::thread_ap_CS_fsm_state608() {
    ap_CS_fsm_state608 = ap_CS_fsm.read()[607];
}

void ShuffleNetV2::thread_ap_CS_fsm_state609() {
    ap_CS_fsm_state609 = ap_CS_fsm.read()[608];
}

void ShuffleNetV2::thread_ap_CS_fsm_state61() {
    ap_CS_fsm_state61 = ap_CS_fsm.read()[60];
}

void ShuffleNetV2::thread_ap_CS_fsm_state616() {
    ap_CS_fsm_state616 = ap_CS_fsm.read()[615];
}

void ShuffleNetV2::thread_ap_CS_fsm_state617() {
    ap_CS_fsm_state617 = ap_CS_fsm.read()[616];
}

void ShuffleNetV2::thread_ap_CS_fsm_state618() {
    ap_CS_fsm_state618 = ap_CS_fsm.read()[617];
}

void ShuffleNetV2::thread_ap_CS_fsm_state619() {
    ap_CS_fsm_state619 = ap_CS_fsm.read()[618];
}

void ShuffleNetV2::thread_ap_CS_fsm_state62() {
    ap_CS_fsm_state62 = ap_CS_fsm.read()[61];
}

void ShuffleNetV2::thread_ap_CS_fsm_state620() {
    ap_CS_fsm_state620 = ap_CS_fsm.read()[619];
}

void ShuffleNetV2::thread_ap_CS_fsm_state621() {
    ap_CS_fsm_state621 = ap_CS_fsm.read()[620];
}

void ShuffleNetV2::thread_ap_CS_fsm_state622() {
    ap_CS_fsm_state622 = ap_CS_fsm.read()[621];
}

void ShuffleNetV2::thread_ap_CS_fsm_state629() {
    ap_CS_fsm_state629 = ap_CS_fsm.read()[628];
}

void ShuffleNetV2::thread_ap_CS_fsm_state63() {
    ap_CS_fsm_state63 = ap_CS_fsm.read()[62];
}

void ShuffleNetV2::thread_ap_CS_fsm_state630() {
    ap_CS_fsm_state630 = ap_CS_fsm.read()[629];
}

void ShuffleNetV2::thread_ap_CS_fsm_state631() {
    ap_CS_fsm_state631 = ap_CS_fsm.read()[630];
}

void ShuffleNetV2::thread_ap_CS_fsm_state632() {
    ap_CS_fsm_state632 = ap_CS_fsm.read()[631];
}

void ShuffleNetV2::thread_ap_CS_fsm_state633() {
    ap_CS_fsm_state633 = ap_CS_fsm.read()[632];
}

void ShuffleNetV2::thread_ap_CS_fsm_state634() {
    ap_CS_fsm_state634 = ap_CS_fsm.read()[633];
}

void ShuffleNetV2::thread_ap_CS_fsm_state635() {
    ap_CS_fsm_state635 = ap_CS_fsm.read()[634];
}

void ShuffleNetV2::thread_ap_CS_fsm_state636() {
    ap_CS_fsm_state636 = ap_CS_fsm.read()[635];
}

void ShuffleNetV2::thread_ap_CS_fsm_state637() {
    ap_CS_fsm_state637 = ap_CS_fsm.read()[636];
}

void ShuffleNetV2::thread_ap_CS_fsm_state638() {
    ap_CS_fsm_state638 = ap_CS_fsm.read()[637];
}

void ShuffleNetV2::thread_ap_CS_fsm_state64() {
    ap_CS_fsm_state64 = ap_CS_fsm.read()[63];
}

void ShuffleNetV2::thread_ap_CS_fsm_state645() {
    ap_CS_fsm_state645 = ap_CS_fsm.read()[644];
}

void ShuffleNetV2::thread_ap_CS_fsm_state646() {
    ap_CS_fsm_state646 = ap_CS_fsm.read()[645];
}

void ShuffleNetV2::thread_ap_CS_fsm_state647() {
    ap_CS_fsm_state647 = ap_CS_fsm.read()[646];
}

void ShuffleNetV2::thread_ap_CS_fsm_state648() {
    ap_CS_fsm_state648 = ap_CS_fsm.read()[647];
}

void ShuffleNetV2::thread_ap_CS_fsm_state649() {
    ap_CS_fsm_state649 = ap_CS_fsm.read()[648];
}

void ShuffleNetV2::thread_ap_CS_fsm_state650() {
    ap_CS_fsm_state650 = ap_CS_fsm.read()[649];
}

void ShuffleNetV2::thread_ap_CS_fsm_state657() {
    ap_CS_fsm_state657 = ap_CS_fsm.read()[656];
}

void ShuffleNetV2::thread_ap_CS_fsm_state658() {
    ap_CS_fsm_state658 = ap_CS_fsm.read()[657];
}

void ShuffleNetV2::thread_ap_CS_fsm_state659() {
    ap_CS_fsm_state659 = ap_CS_fsm.read()[658];
}

void ShuffleNetV2::thread_ap_CS_fsm_state660() {
    ap_CS_fsm_state660 = ap_CS_fsm.read()[659];
}

void ShuffleNetV2::thread_ap_CS_fsm_state661() {
    ap_CS_fsm_state661 = ap_CS_fsm.read()[660];
}

void ShuffleNetV2::thread_ap_CS_fsm_state662() {
    ap_CS_fsm_state662 = ap_CS_fsm.read()[661];
}

void ShuffleNetV2::thread_ap_CS_fsm_state663() {
    ap_CS_fsm_state663 = ap_CS_fsm.read()[662];
}

void ShuffleNetV2::thread_ap_CS_fsm_state664() {
    ap_CS_fsm_state664 = ap_CS_fsm.read()[663];
}

void ShuffleNetV2::thread_ap_CS_fsm_state671() {
    ap_CS_fsm_state671 = ap_CS_fsm.read()[670];
}

void ShuffleNetV2::thread_ap_CS_fsm_state672() {
    ap_CS_fsm_state672 = ap_CS_fsm.read()[671];
}

void ShuffleNetV2::thread_ap_CS_fsm_state673() {
    ap_CS_fsm_state673 = ap_CS_fsm.read()[672];
}

void ShuffleNetV2::thread_ap_CS_fsm_state674() {
    ap_CS_fsm_state674 = ap_CS_fsm.read()[673];
}

void ShuffleNetV2::thread_ap_CS_fsm_state675() {
    ap_CS_fsm_state675 = ap_CS_fsm.read()[674];
}

void ShuffleNetV2::thread_ap_CS_fsm_state676() {
    ap_CS_fsm_state676 = ap_CS_fsm.read()[675];
}

void ShuffleNetV2::thread_ap_CS_fsm_state677() {
    ap_CS_fsm_state677 = ap_CS_fsm.read()[676];
}

void ShuffleNetV2::thread_ap_CS_fsm_state684() {
    ap_CS_fsm_state684 = ap_CS_fsm.read()[683];
}

void ShuffleNetV2::thread_ap_CS_fsm_state685() {
    ap_CS_fsm_state685 = ap_CS_fsm.read()[684];
}

void ShuffleNetV2::thread_ap_CS_fsm_state686() {
    ap_CS_fsm_state686 = ap_CS_fsm.read()[685];
}

void ShuffleNetV2::thread_ap_CS_fsm_state687() {
    ap_CS_fsm_state687 = ap_CS_fsm.read()[686];
}

void ShuffleNetV2::thread_ap_CS_fsm_state688() {
    ap_CS_fsm_state688 = ap_CS_fsm.read()[687];
}

void ShuffleNetV2::thread_ap_CS_fsm_state689() {
    ap_CS_fsm_state689 = ap_CS_fsm.read()[688];
}

void ShuffleNetV2::thread_ap_CS_fsm_state690() {
    ap_CS_fsm_state690 = ap_CS_fsm.read()[689];
}

void ShuffleNetV2::thread_ap_CS_fsm_state691() {
    ap_CS_fsm_state691 = ap_CS_fsm.read()[690];
}

void ShuffleNetV2::thread_ap_CS_fsm_state692() {
    ap_CS_fsm_state692 = ap_CS_fsm.read()[691];
}

void ShuffleNetV2::thread_ap_CS_fsm_state693() {
    ap_CS_fsm_state693 = ap_CS_fsm.read()[692];
}

void ShuffleNetV2::thread_ap_CS_fsm_state694() {
    ap_CS_fsm_state694 = ap_CS_fsm.read()[693];
}

void ShuffleNetV2::thread_ap_CS_fsm_state695() {
    ap_CS_fsm_state695 = ap_CS_fsm.read()[694];
}

void ShuffleNetV2::thread_ap_CS_fsm_state696() {
    ap_CS_fsm_state696 = ap_CS_fsm.read()[695];
}

void ShuffleNetV2::thread_ap_CS_fsm_state697() {
    ap_CS_fsm_state697 = ap_CS_fsm.read()[696];
}

void ShuffleNetV2::thread_ap_CS_fsm_state698() {
    ap_CS_fsm_state698 = ap_CS_fsm.read()[697];
}

void ShuffleNetV2::thread_ap_CS_fsm_state699() {
    ap_CS_fsm_state699 = ap_CS_fsm.read()[698];
}

void ShuffleNetV2::thread_ap_CS_fsm_state70() {
    ap_CS_fsm_state70 = ap_CS_fsm.read()[69];
}

void ShuffleNetV2::thread_ap_CS_fsm_state700() {
    ap_CS_fsm_state700 = ap_CS_fsm.read()[699];
}

void ShuffleNetV2::thread_ap_CS_fsm_state707() {
    ap_CS_fsm_state707 = ap_CS_fsm.read()[706];
}

void ShuffleNetV2::thread_ap_CS_fsm_state708() {
    ap_CS_fsm_state708 = ap_CS_fsm.read()[707];
}

void ShuffleNetV2::thread_ap_CS_fsm_state709() {
    ap_CS_fsm_state709 = ap_CS_fsm.read()[708];
}

void ShuffleNetV2::thread_ap_CS_fsm_state71() {
    ap_CS_fsm_state71 = ap_CS_fsm.read()[70];
}

void ShuffleNetV2::thread_ap_CS_fsm_state710() {
    ap_CS_fsm_state710 = ap_CS_fsm.read()[709];
}

void ShuffleNetV2::thread_ap_CS_fsm_state711() {
    ap_CS_fsm_state711 = ap_CS_fsm.read()[710];
}

void ShuffleNetV2::thread_ap_CS_fsm_state712() {
    ap_CS_fsm_state712 = ap_CS_fsm.read()[711];
}

void ShuffleNetV2::thread_ap_CS_fsm_state713() {
    ap_CS_fsm_state713 = ap_CS_fsm.read()[712];
}

void ShuffleNetV2::thread_ap_CS_fsm_state72() {
    ap_CS_fsm_state72 = ap_CS_fsm.read()[71];
}

void ShuffleNetV2::thread_ap_CS_fsm_state720() {
    ap_CS_fsm_state720 = ap_CS_fsm.read()[719];
}

void ShuffleNetV2::thread_ap_CS_fsm_state721() {
    ap_CS_fsm_state721 = ap_CS_fsm.read()[720];
}

void ShuffleNetV2::thread_ap_CS_fsm_state722() {
    ap_CS_fsm_state722 = ap_CS_fsm.read()[721];
}

void ShuffleNetV2::thread_ap_CS_fsm_state723() {
    ap_CS_fsm_state723 = ap_CS_fsm.read()[722];
}

void ShuffleNetV2::thread_ap_CS_fsm_state724() {
    ap_CS_fsm_state724 = ap_CS_fsm.read()[723];
}

void ShuffleNetV2::thread_ap_CS_fsm_state725() {
    ap_CS_fsm_state725 = ap_CS_fsm.read()[724];
}

void ShuffleNetV2::thread_ap_CS_fsm_state726() {
    ap_CS_fsm_state726 = ap_CS_fsm.read()[725];
}

void ShuffleNetV2::thread_ap_CS_fsm_state727() {
    ap_CS_fsm_state727 = ap_CS_fsm.read()[726];
}

void ShuffleNetV2::thread_ap_CS_fsm_state728() {
    ap_CS_fsm_state728 = ap_CS_fsm.read()[727];
}

void ShuffleNetV2::thread_ap_CS_fsm_state729() {
    ap_CS_fsm_state729 = ap_CS_fsm.read()[728];
}

void ShuffleNetV2::thread_ap_CS_fsm_state73() {
    ap_CS_fsm_state73 = ap_CS_fsm.read()[72];
}

void ShuffleNetV2::thread_ap_CS_fsm_state736() {
    ap_CS_fsm_state736 = ap_CS_fsm.read()[735];
}

void ShuffleNetV2::thread_ap_CS_fsm_state737() {
    ap_CS_fsm_state737 = ap_CS_fsm.read()[736];
}

void ShuffleNetV2::thread_ap_CS_fsm_state738() {
    ap_CS_fsm_state738 = ap_CS_fsm.read()[737];
}

void ShuffleNetV2::thread_ap_CS_fsm_state739() {
    ap_CS_fsm_state739 = ap_CS_fsm.read()[738];
}

void ShuffleNetV2::thread_ap_CS_fsm_state740() {
    ap_CS_fsm_state740 = ap_CS_fsm.read()[739];
}

void ShuffleNetV2::thread_ap_CS_fsm_state741() {
    ap_CS_fsm_state741 = ap_CS_fsm.read()[740];
}

void ShuffleNetV2::thread_ap_CS_fsm_state748() {
    ap_CS_fsm_state748 = ap_CS_fsm.read()[747];
}

void ShuffleNetV2::thread_ap_CS_fsm_state749() {
    ap_CS_fsm_state749 = ap_CS_fsm.read()[748];
}

void ShuffleNetV2::thread_ap_CS_fsm_state750() {
    ap_CS_fsm_state750 = ap_CS_fsm.read()[749];
}

void ShuffleNetV2::thread_ap_CS_fsm_state751() {
    ap_CS_fsm_state751 = ap_CS_fsm.read()[750];
}

void ShuffleNetV2::thread_ap_CS_fsm_state752() {
    ap_CS_fsm_state752 = ap_CS_fsm.read()[751];
}

void ShuffleNetV2::thread_ap_CS_fsm_state753() {
    ap_CS_fsm_state753 = ap_CS_fsm.read()[752];
}

void ShuffleNetV2::thread_ap_CS_fsm_state754() {
    ap_CS_fsm_state754 = ap_CS_fsm.read()[753];
}

void ShuffleNetV2::thread_ap_CS_fsm_state755() {
    ap_CS_fsm_state755 = ap_CS_fsm.read()[754];
}

void ShuffleNetV2::thread_ap_CS_fsm_state762() {
    ap_CS_fsm_state762 = ap_CS_fsm.read()[761];
}

void ShuffleNetV2::thread_ap_CS_fsm_state763() {
    ap_CS_fsm_state763 = ap_CS_fsm.read()[762];
}

void ShuffleNetV2::thread_ap_CS_fsm_state764() {
    ap_CS_fsm_state764 = ap_CS_fsm.read()[763];
}

void ShuffleNetV2::thread_ap_CS_fsm_state765() {
    ap_CS_fsm_state765 = ap_CS_fsm.read()[764];
}

void ShuffleNetV2::thread_ap_CS_fsm_state766() {
    ap_CS_fsm_state766 = ap_CS_fsm.read()[765];
}

void ShuffleNetV2::thread_ap_CS_fsm_state767() {
    ap_CS_fsm_state767 = ap_CS_fsm.read()[766];
}

void ShuffleNetV2::thread_ap_CS_fsm_state768() {
    ap_CS_fsm_state768 = ap_CS_fsm.read()[767];
}

void ShuffleNetV2::thread_ap_CS_fsm_state775() {
    ap_CS_fsm_state775 = ap_CS_fsm.read()[774];
}

void ShuffleNetV2::thread_ap_CS_fsm_state776() {
    ap_CS_fsm_state776 = ap_CS_fsm.read()[775];
}

void ShuffleNetV2::thread_ap_CS_fsm_state777() {
    ap_CS_fsm_state777 = ap_CS_fsm.read()[776];
}

void ShuffleNetV2::thread_ap_CS_fsm_state778() {
    ap_CS_fsm_state778 = ap_CS_fsm.read()[777];
}

void ShuffleNetV2::thread_ap_CS_fsm_state779() {
    ap_CS_fsm_state779 = ap_CS_fsm.read()[778];
}

void ShuffleNetV2::thread_ap_CS_fsm_state780() {
    ap_CS_fsm_state780 = ap_CS_fsm.read()[779];
}

void ShuffleNetV2::thread_ap_CS_fsm_state781() {
    ap_CS_fsm_state781 = ap_CS_fsm.read()[780];
}

void ShuffleNetV2::thread_ap_CS_fsm_state782() {
    ap_CS_fsm_state782 = ap_CS_fsm.read()[781];
}

void ShuffleNetV2::thread_ap_CS_fsm_state783() {
    ap_CS_fsm_state783 = ap_CS_fsm.read()[782];
}

void ShuffleNetV2::thread_ap_CS_fsm_state784() {
    ap_CS_fsm_state784 = ap_CS_fsm.read()[783];
}

void ShuffleNetV2::thread_ap_CS_fsm_state785() {
    ap_CS_fsm_state785 = ap_CS_fsm.read()[784];
}

void ShuffleNetV2::thread_ap_CS_fsm_state786() {
    ap_CS_fsm_state786 = ap_CS_fsm.read()[785];
}

void ShuffleNetV2::thread_ap_CS_fsm_state787() {
    ap_CS_fsm_state787 = ap_CS_fsm.read()[786];
}

void ShuffleNetV2::thread_ap_CS_fsm_state788() {
    ap_CS_fsm_state788 = ap_CS_fsm.read()[787];
}

void ShuffleNetV2::thread_ap_CS_fsm_state789() {
    ap_CS_fsm_state789 = ap_CS_fsm.read()[788];
}

void ShuffleNetV2::thread_ap_CS_fsm_state79() {
    ap_CS_fsm_state79 = ap_CS_fsm.read()[78];
}

void ShuffleNetV2::thread_ap_CS_fsm_state790() {
    ap_CS_fsm_state790 = ap_CS_fsm.read()[789];
}

void ShuffleNetV2::thread_ap_CS_fsm_state791() {
    ap_CS_fsm_state791 = ap_CS_fsm.read()[790];
}

void ShuffleNetV2::thread_ap_CS_fsm_state798() {
    ap_CS_fsm_state798 = ap_CS_fsm.read()[797];
}

void ShuffleNetV2::thread_ap_CS_fsm_state799() {
    ap_CS_fsm_state799 = ap_CS_fsm.read()[798];
}

void ShuffleNetV2::thread_ap_CS_fsm_state8() {
    ap_CS_fsm_state8 = ap_CS_fsm.read()[7];
}

void ShuffleNetV2::thread_ap_CS_fsm_state80() {
    ap_CS_fsm_state80 = ap_CS_fsm.read()[79];
}

void ShuffleNetV2::thread_ap_CS_fsm_state800() {
    ap_CS_fsm_state800 = ap_CS_fsm.read()[799];
}

void ShuffleNetV2::thread_ap_CS_fsm_state801() {
    ap_CS_fsm_state801 = ap_CS_fsm.read()[800];
}

void ShuffleNetV2::thread_ap_CS_fsm_state802() {
    ap_CS_fsm_state802 = ap_CS_fsm.read()[801];
}

void ShuffleNetV2::thread_ap_CS_fsm_state803() {
    ap_CS_fsm_state803 = ap_CS_fsm.read()[802];
}

void ShuffleNetV2::thread_ap_CS_fsm_state804() {
    ap_CS_fsm_state804 = ap_CS_fsm.read()[803];
}

void ShuffleNetV2::thread_ap_CS_fsm_state81() {
    ap_CS_fsm_state81 = ap_CS_fsm.read()[80];
}

}

