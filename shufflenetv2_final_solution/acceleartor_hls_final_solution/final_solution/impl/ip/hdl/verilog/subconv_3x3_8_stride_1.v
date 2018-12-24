// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2017.2
// Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module subconv_3x3_8_stride_1 (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        weight_V_address0,
        weight_V_ce0,
        weight_V_q0,
        bias_V_address0,
        bias_V_ce0,
        bias_V_q0,
        output_V_address0,
        output_V_ce0,
        output_V_we0,
        output_V_d0,
        ShuffleConvs_2_Downs_11_address0,
        ShuffleConvs_2_Downs_11_ce0,
        ShuffleConvs_2_Downs_11_q0,
        ShuffleConvs_2_Downs_10_address0,
        ShuffleConvs_2_Downs_10_ce0,
        ShuffleConvs_2_Downs_10_q0,
        ShuffleConvs_2_Downs_7_address0,
        ShuffleConvs_2_Downs_7_ce0,
        ShuffleConvs_2_Downs_7_q0,
        ShuffleConvs_2_Downs_6_address0,
        ShuffleConvs_2_Downs_6_ce0,
        ShuffleConvs_2_Downs_6_q0,
        ShuffleConvs_2_Downs_5_address0,
        ShuffleConvs_2_Downs_5_ce0,
        ShuffleConvs_2_Downs_5_q0,
        ShuffleConvs_2_Downs_4_address0,
        ShuffleConvs_2_Downs_4_ce0,
        ShuffleConvs_2_Downs_4_q0,
        ShuffleConvs_2_Downs_3_address0,
        ShuffleConvs_2_Downs_3_ce0,
        ShuffleConvs_2_Downs_3_q0,
        ShuffleConvs_2_Downs_2_address0,
        ShuffleConvs_2_Downs_2_ce0,
        ShuffleConvs_2_Downs_2_q0,
        ShuffleConvs_2_Downs_1_address0,
        ShuffleConvs_2_Downs_1_ce0,
        ShuffleConvs_2_Downs_1_q0,
        ShuffleConvs_2_Downs_address0,
        ShuffleConvs_2_Downs_ce0,
        ShuffleConvs_2_Downs_q0,
        ShuffleConvs_2_Downs_9_address0,
        ShuffleConvs_2_Downs_9_ce0,
        ShuffleConvs_2_Downs_9_q0,
        ShuffleConvs_2_Downs_8_address0,
        ShuffleConvs_2_Downs_8_ce0,
        ShuffleConvs_2_Downs_8_q0
);

parameter    ap_ST_fsm_state1 = 13'd1;
parameter    ap_ST_fsm_state2 = 13'd2;
parameter    ap_ST_fsm_state3 = 13'd4;
parameter    ap_ST_fsm_state4 = 13'd8;
parameter    ap_ST_fsm_state5 = 13'd16;
parameter    ap_ST_fsm_state6 = 13'd32;
parameter    ap_ST_fsm_state7 = 13'd64;
parameter    ap_ST_fsm_state8 = 13'd128;
parameter    ap_ST_fsm_state9 = 13'd256;
parameter    ap_ST_fsm_state10 = 13'd512;
parameter    ap_ST_fsm_state11 = 13'd1024;
parameter    ap_ST_fsm_state12 = 13'd2048;
parameter    ap_ST_fsm_state13 = 13'd4096;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
output  [9:0] weight_V_address0;
output   weight_V_ce0;
input  [7:0] weight_V_q0;
output  [6:0] bias_V_address0;
output   bias_V_ce0;
input  [7:0] bias_V_q0;
output  [11:0] output_V_address0;
output   output_V_ce0;
output   output_V_we0;
output  [7:0] output_V_d0;
output  [9:0] ShuffleConvs_2_Downs_11_address0;
output   ShuffleConvs_2_Downs_11_ce0;
input  [7:0] ShuffleConvs_2_Downs_11_q0;
output  [9:0] ShuffleConvs_2_Downs_10_address0;
output   ShuffleConvs_2_Downs_10_ce0;
input  [7:0] ShuffleConvs_2_Downs_10_q0;
output  [9:0] ShuffleConvs_2_Downs_7_address0;
output   ShuffleConvs_2_Downs_7_ce0;
input  [7:0] ShuffleConvs_2_Downs_7_q0;
output  [9:0] ShuffleConvs_2_Downs_6_address0;
output   ShuffleConvs_2_Downs_6_ce0;
input  [7:0] ShuffleConvs_2_Downs_6_q0;
output  [9:0] ShuffleConvs_2_Downs_5_address0;
output   ShuffleConvs_2_Downs_5_ce0;
input  [7:0] ShuffleConvs_2_Downs_5_q0;
output  [9:0] ShuffleConvs_2_Downs_4_address0;
output   ShuffleConvs_2_Downs_4_ce0;
input  [7:0] ShuffleConvs_2_Downs_4_q0;
output  [9:0] ShuffleConvs_2_Downs_3_address0;
output   ShuffleConvs_2_Downs_3_ce0;
input  [7:0] ShuffleConvs_2_Downs_3_q0;
output  [9:0] ShuffleConvs_2_Downs_2_address0;
output   ShuffleConvs_2_Downs_2_ce0;
input  [7:0] ShuffleConvs_2_Downs_2_q0;
output  [9:0] ShuffleConvs_2_Downs_1_address0;
output   ShuffleConvs_2_Downs_1_ce0;
input  [7:0] ShuffleConvs_2_Downs_1_q0;
output  [9:0] ShuffleConvs_2_Downs_address0;
output   ShuffleConvs_2_Downs_ce0;
input  [7:0] ShuffleConvs_2_Downs_q0;
output  [9:0] ShuffleConvs_2_Downs_9_address0;
output   ShuffleConvs_2_Downs_9_ce0;
input  [7:0] ShuffleConvs_2_Downs_9_q0;
output  [9:0] ShuffleConvs_2_Downs_8_address0;
output   ShuffleConvs_2_Downs_8_ce0;
input  [7:0] ShuffleConvs_2_Downs_8_q0;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg weight_V_ce0;
reg bias_V_ce0;
reg output_V_ce0;
reg output_V_we0;
reg ShuffleConvs_2_Downs_11_ce0;
reg ShuffleConvs_2_Downs_10_ce0;
reg ShuffleConvs_2_Downs_7_ce0;
reg ShuffleConvs_2_Downs_6_ce0;
reg ShuffleConvs_2_Downs_5_ce0;
reg ShuffleConvs_2_Downs_4_ce0;
reg ShuffleConvs_2_Downs_3_ce0;
reg ShuffleConvs_2_Downs_2_ce0;
reg ShuffleConvs_2_Downs_1_ce0;
reg ShuffleConvs_2_Downs_ce0;
reg ShuffleConvs_2_Downs_9_ce0;
reg ShuffleConvs_2_Downs_8_ce0;

(* fsm_encoding = "none" *) reg   [12:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
wire   [14:0] next_mul_fu_414_p2;
reg   [14:0] next_mul_reg_1131;
wire    ap_CS_fsm_state2;
wire  signed [10:0] tmp_14_cast_fu_447_p1;
reg  signed [10:0] tmp_14_cast_reg_1136;
wire  signed [11:0] tmp_17_cast_fu_481_p1;
reg  signed [11:0] tmp_17_cast_reg_1141;
wire   [6:0] co_1_fu_491_p2;
reg   [6:0] co_1_reg_1149;
wire   [31:0] arrayNo_cast_fu_497_p1;
reg   [31:0] arrayNo_cast_reg_1154;
wire   [0:0] exitcond1_fu_485_p2;
wire   [10:0] tmp_21_fu_535_p2;
reg   [10:0] tmp_21_reg_1159;
reg   [6:0] bias_V_addr_reg_1164;
wire   [12:0] tmp_24_fu_570_p2;
reg   [12:0] tmp_24_reg_1169;
wire    ap_CS_fsm_state3;
wire   [3:0] tmp_fu_582_p3;
reg   [3:0] tmp_reg_1177;
wire   [0:0] exitcond2_fu_576_p2;
wire   [6:0] idx_urem_fu_602_p3;
reg   [11:0] output_V_addr_reg_1187;
wire    ap_CS_fsm_state4;
wire   [3:0] tmp_2_fu_630_p3;
reg   [3:0] tmp_2_reg_1195;
wire   [0:0] exitcond3_fu_624_p2;
wire   [2:0] h_1_fu_638_p2;
wire   [10:0] tmp_29_fu_659_p2;
reg   [10:0] tmp_29_reg_1205;
wire    ap_CS_fsm_state5;
wire   [1:0] m_1_fu_671_p2;
reg   [1:0] m_1_reg_1213;
wire   [10:0] tmp_31_fu_713_p2;
reg   [10:0] tmp_31_reg_1218;
wire   [0:0] exitcond4_fu_665_p2;
wire   [2:0] w_1_fu_719_p2;
reg   [2:0] w_1_reg_1223;
wire    ap_CS_fsm_state6;
wire   [1:0] n_1_fu_745_p2;
reg   [1:0] n_1_reg_1236;
wire   [0:0] exitcond_fu_739_p2;
reg   [7:0] weight_V_load_reg_1301;
wire    ap_CS_fsm_state7;
wire   [7:0] tmp_1_fu_791_p14;
reg   [7:0] tmp_1_reg_1306;
wire   [15:0] p_Val2_5_fu_826_p2;
reg   [15:0] p_Val2_5_reg_1311;
wire    ap_CS_fsm_state8;
reg   [0:0] tmp_39_reg_1316;
wire   [15:0] p_Val2_6_fu_852_p2;
reg   [15:0] p_Val2_6_reg_1321;
wire    ap_CS_fsm_state9;
reg   [0:0] signbit_reg_1326;
wire   [7:0] p_Val2_8_fu_886_p2;
reg   [7:0] p_Val2_8_reg_1333;
wire   [0:0] newsignbit_fu_892_p3;
reg   [0:0] newsignbit_reg_1339;
wire   [0:0] carry_fu_906_p2;
reg   [0:0] carry_reg_1345;
reg   [1:0] tmp_12_reg_1352;
wire   [0:0] p_38_i_i_fu_964_p2;
reg   [0:0] p_38_i_i_reg_1358;
wire    ap_CS_fsm_state10;
wire   [0:0] tmp_13_fu_980_p2;
reg   [0:0] tmp_13_reg_1363;
wire   [0:0] brmerge40_demorgan_i_fu_991_p2;
reg   [0:0] brmerge40_demorgan_i_reg_1368;
wire   [0:0] underflow_fu_1008_p2;
reg   [0:0] underflow_reg_1373;
wire   [0:0] brmerge_i_i_i_fu_1013_p2;
reg   [0:0] brmerge_i_i_i_reg_1378;
wire   [7:0] sum_V_fu_1040_p3;
wire    ap_CS_fsm_state11;
reg   [0:0] isneg_reg_1388;
wire    ap_CS_fsm_state12;
wire   [7:0] result_V_fu_1070_p2;
reg   [7:0] result_V_reg_1395;
reg   [0:0] newsignbit_1_reg_1401;
reg   [6:0] co_reg_310;
reg   [14:0] phi_mul_reg_321;
reg   [6:0] phi_urem_reg_332;
reg   [2:0] h_reg_344;
reg   [2:0] w_reg_356;
wire    ap_CS_fsm_state13;
reg   [7:0] p_Val2_s_reg_368;
reg   [1:0] m_reg_380;
reg   [7:0] p_Val2_4_reg_391;
reg   [1:0] n_reg_403;
wire   [31:0] co_cast_fu_420_p1;
wire   [31:0] tmp_27_cast_fu_619_p1;
wire   [31:0] tmp_35_cast_fu_734_p1;
wire   [31:0] tmp_36_cast_fu_775_p1;
wire   [8:0] tmp_8_fu_429_p3;
wire   [9:0] p_shl2_cast_fu_437_p1;
wire   [9:0] co_cast_cast_fu_425_p1;
wire   [9:0] tmp_14_fu_441_p2;
wire   [9:0] tmp_15_fu_451_p3;
wire   [7:0] tmp_16_fu_463_p3;
wire   [10:0] p_shl_cast_fu_459_p1;
wire   [10:0] p_shl1_cast_fu_471_p1;
wire   [10:0] tmp_17_fu_475_p2;
wire   [3:0] tmp_18_fu_501_p4;
wire   [6:0] tmp_19_fu_511_p3;
wire   [4:0] tmp_20_fu_523_p3;
wire   [10:0] p_shl3_cast_fu_519_p1;
wire   [10:0] p_shl4_cast_fu_531_p1;
wire   [11:0] h_cast9_cast_fu_541_p1;
wire   [11:0] tmp_22_fu_545_p2;
wire   [9:0] tmp_23_fu_550_p1;
wire   [12:0] p_shl5_cast_fu_554_p3;
wire   [12:0] p_shl6_cast_fu_562_p3;
wire   [6:0] next_urem_fu_590_p2;
wire   [0:0] tmp_25_fu_596_p2;
wire   [12:0] w_cast8_cast_fu_610_p1;
wire   [12:0] tmp_26_fu_614_p2;
wire   [10:0] m_cast7_cast_fu_644_p1;
wire   [10:0] tmp_27_fu_648_p2;
wire   [10:0] tmp_28_fu_653_p2;
wire   [1:0] tmp2_fu_677_p2;
wire  signed [3:0] tmp2_cast_fu_683_p1;
wire   [3:0] tmp_s_fu_687_p2;
wire   [10:0] tmp_cast_cast_fu_692_p1;
wire   [10:0] tmp_30_fu_696_p2;
wire   [10:0] tmp_33_fu_701_p2;
wire   [10:0] tmp_37_fu_707_p2;
wire   [10:0] n_cast6_cast_fu_725_p1;
wire   [10:0] tmp_32_fu_729_p2;
wire   [1:0] tmp3_fu_751_p2;
wire  signed [3:0] tmp3_cast_fu_757_p1;
wire   [3:0] tmp_6_fu_761_p2;
wire   [10:0] tmp_6_cast_cast_fu_766_p1;
wire   [10:0] tmp_34_fu_770_p2;
wire  signed [7:0] p_Val2_5_fu_826_p0;
wire  signed [7:0] p_Val2_5_fu_826_p1;
wire   [13:0] tmp_7_fu_840_p3;
wire  signed [15:0] tmp_11_cast_fu_848_p1;
wire   [7:0] p_Val2_7_fu_865_p4;
wire   [7:0] tmp_9_fu_875_p1;
wire   [0:0] tmp_40_fu_878_p3;
wire   [0:0] tmp_10_fu_900_p2;
wire   [0:0] Range1_all_ones_fu_929_p2;
wire   [0:0] Range1_all_zeros_fu_934_p2;
wire   [0:0] tmp_42_fu_922_p3;
wire   [0:0] tmp_11_fu_946_p2;
wire   [0:0] p_41_i_i_fu_952_p2;
wire   [0:0] deleted_zeros_fu_939_p3;
wire   [0:0] p_not_i_i_fu_969_p2;
wire   [0:0] brmerge_i_i1_fu_975_p2;
wire   [0:0] deleted_ones_fu_957_p3;
wire   [0:0] tmp4_demorgan_fu_996_p2;
wire   [0:0] tmp4_fu_1002_p2;
wire   [0:0] overflow_fu_985_p2;
wire   [0:0] tmp5_fu_1019_p2;
wire   [0:0] underflow_not_fu_1023_p2;
wire   [7:0] p_Val2_8_mux_fu_1028_p3;
wire   [7:0] p_Val2_8_39_fu_1034_p3;
wire  signed [8:0] tmp_4_fu_1052_p1;
wire  signed [8:0] tmp_3_fu_1048_p1;
wire   [8:0] p_Val2_2_fu_1056_p2;
wire   [0:0] tmp_5_fu_1084_p2;
wire   [0:0] isneg_not_fu_1098_p2;
wire   [0:0] brmerge_i_i_fu_1094_p2;
wire   [0:0] underflow_1_fu_1089_p2;
wire   [0:0] brmerge9_fu_1103_p2;
wire   [7:0] result_V_mux_fu_1108_p3;
wire   [7:0] p_result_V_fu_1115_p3;
reg   [12:0] ap_NS_fsm;

// power-on initialization
initial begin
#0 ap_CS_fsm = 13'd1;
end

ShuffleNetV2_mux_pcA #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din1_WIDTH( 8 ),
    .din2_WIDTH( 8 ),
    .din3_WIDTH( 8 ),
    .din4_WIDTH( 8 ),
    .din5_WIDTH( 8 ),
    .din6_WIDTH( 8 ),
    .din7_WIDTH( 8 ),
    .din8_WIDTH( 8 ),
    .din9_WIDTH( 8 ),
    .din10_WIDTH( 8 ),
    .din11_WIDTH( 8 ),
    .din12_WIDTH( 8 ),
    .din13_WIDTH( 32 ),
    .dout_WIDTH( 8 ))
ShuffleNetV2_mux_pcA_x_U568(
    .din1(ShuffleConvs_2_Downs_11_q0),
    .din2(ShuffleConvs_2_Downs_10_q0),
    .din3(ShuffleConvs_2_Downs_7_q0),
    .din4(ShuffleConvs_2_Downs_6_q0),
    .din5(ShuffleConvs_2_Downs_5_q0),
    .din6(ShuffleConvs_2_Downs_4_q0),
    .din7(ShuffleConvs_2_Downs_3_q0),
    .din8(ShuffleConvs_2_Downs_2_q0),
    .din9(ShuffleConvs_2_Downs_1_q0),
    .din10(ShuffleConvs_2_Downs_q0),
    .din11(ShuffleConvs_2_Downs_9_q0),
    .din12(ShuffleConvs_2_Downs_8_q0),
    .din13(arrayNo_cast_reg_1154),
    .dout(tmp_1_fu_791_p14)
);

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state3) & (exitcond2_fu_576_p2 == 1'd1))) begin
        co_reg_310 <= co_1_reg_1149;
    end else if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        co_reg_310 <= 7'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state2) & (exitcond1_fu_485_p2 == 1'd0))) begin
        h_reg_344 <= 3'd1;
    end else if (((1'b1 == ap_CS_fsm_state4) & (1'd1 == exitcond3_fu_624_p2))) begin
        h_reg_344 <= h_1_fu_638_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state6) & (1'd1 == exitcond_fu_739_p2))) begin
        m_reg_380 <= m_1_reg_1213;
    end else if (((1'b1 == ap_CS_fsm_state4) & (1'd0 == exitcond3_fu_624_p2))) begin
        m_reg_380 <= 2'd0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state11)) begin
        n_reg_403 <= n_1_reg_1236;
    end else if (((1'b1 == ap_CS_fsm_state5) & (1'd0 == exitcond4_fu_665_p2))) begin
        n_reg_403 <= 2'd0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state11)) begin
        p_Val2_4_reg_391 <= sum_V_fu_1040_p3;
    end else if (((1'b1 == ap_CS_fsm_state5) & (1'd0 == exitcond4_fu_665_p2))) begin
        p_Val2_4_reg_391 <= p_Val2_s_reg_368;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state6) & (1'd1 == exitcond_fu_739_p2))) begin
        p_Val2_s_reg_368 <= p_Val2_4_reg_391;
    end else if (((1'b1 == ap_CS_fsm_state4) & (1'd0 == exitcond3_fu_624_p2))) begin
        p_Val2_s_reg_368 <= 8'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state3) & (exitcond2_fu_576_p2 == 1'd1))) begin
        phi_mul_reg_321 <= next_mul_reg_1131;
    end else if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        phi_mul_reg_321 <= 15'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state3) & (exitcond2_fu_576_p2 == 1'd1))) begin
        phi_urem_reg_332 <= idx_urem_fu_602_p3;
    end else if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        phi_urem_reg_332 <= 7'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state3) & (1'd0 == exitcond2_fu_576_p2))) begin
        w_reg_356 <= 3'd1;
    end else if ((1'b1 == ap_CS_fsm_state13)) begin
        w_reg_356 <= w_1_reg_1223;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state2) & (exitcond1_fu_485_p2 == 1'd0))) begin
        arrayNo_cast_reg_1154[6 : 0] <= arrayNo_cast_fu_497_p1[6 : 0];
        bias_V_addr_reg_1164 <= co_cast_fu_420_p1;
        tmp_21_reg_1159[10 : 1] <= tmp_21_fu_535_p2[10 : 1];
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state10)) begin
        brmerge40_demorgan_i_reg_1368 <= brmerge40_demorgan_i_fu_991_p2;
        brmerge_i_i_i_reg_1378 <= brmerge_i_i_i_fu_1013_p2;
        p_38_i_i_reg_1358 <= p_38_i_i_fu_964_p2;
        tmp_13_reg_1363 <= tmp_13_fu_980_p2;
        underflow_reg_1373 <= underflow_fu_1008_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state9)) begin
        carry_reg_1345 <= carry_fu_906_p2;
        newsignbit_reg_1339 <= p_Val2_8_fu_886_p2[32'd7];
        p_Val2_6_reg_1321 <= p_Val2_6_fu_852_p2;
        p_Val2_8_reg_1333 <= p_Val2_8_fu_886_p2;
        signbit_reg_1326 <= p_Val2_6_fu_852_p2[32'd15];
        tmp_12_reg_1352 <= {{p_Val2_6_fu_852_p2[15:14]}};
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        co_1_reg_1149 <= co_1_fu_491_p2;
        next_mul_reg_1131 <= next_mul_fu_414_p2;
        tmp_14_cast_reg_1136 <= tmp_14_cast_fu_447_p1;
        tmp_17_cast_reg_1141[11 : 1] <= tmp_17_cast_fu_481_p1[11 : 1];
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state12)) begin
        isneg_reg_1388 <= p_Val2_2_fu_1056_p2[32'd8];
        newsignbit_1_reg_1401 <= result_V_fu_1070_p2[32'd7];
        result_V_reg_1395 <= result_V_fu_1070_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state5)) begin
        m_1_reg_1213 <= m_1_fu_671_p2;
        tmp_29_reg_1205 <= tmp_29_fu_659_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        n_1_reg_1236 <= n_1_fu_745_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state4)) begin
        output_V_addr_reg_1187 <= tmp_27_cast_fu_619_p1;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state8)) begin
        p_Val2_5_reg_1311 <= p_Val2_5_fu_826_p2;
        tmp_39_reg_1316 <= p_Val2_5_fu_826_p2[32'd5];
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state7)) begin
        tmp_1_reg_1306 <= tmp_1_fu_791_p14;
        weight_V_load_reg_1301 <= weight_V_q0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        tmp_24_reg_1169[12 : 1] <= tmp_24_fu_570_p2[12 : 1];
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state4) & (1'd0 == exitcond3_fu_624_p2))) begin
        tmp_2_reg_1195[3 : 1] <= tmp_2_fu_630_p3[3 : 1];
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state5) & (1'd0 == exitcond4_fu_665_p2))) begin
        tmp_31_reg_1218[10 : 1] <= tmp_31_fu_713_p2[10 : 1];
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state3) & (1'd0 == exitcond2_fu_576_p2))) begin
        tmp_reg_1177[3 : 1] <= tmp_fu_582_p3[3 : 1];
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state5) & (1'd1 == exitcond4_fu_665_p2))) begin
        w_1_reg_1223 <= w_1_fu_719_p2;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        ShuffleConvs_2_Downs_10_ce0 = 1'b1;
    end else begin
        ShuffleConvs_2_Downs_10_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        ShuffleConvs_2_Downs_11_ce0 = 1'b1;
    end else begin
        ShuffleConvs_2_Downs_11_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        ShuffleConvs_2_Downs_1_ce0 = 1'b1;
    end else begin
        ShuffleConvs_2_Downs_1_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        ShuffleConvs_2_Downs_2_ce0 = 1'b1;
    end else begin
        ShuffleConvs_2_Downs_2_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        ShuffleConvs_2_Downs_3_ce0 = 1'b1;
    end else begin
        ShuffleConvs_2_Downs_3_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        ShuffleConvs_2_Downs_4_ce0 = 1'b1;
    end else begin
        ShuffleConvs_2_Downs_4_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        ShuffleConvs_2_Downs_5_ce0 = 1'b1;
    end else begin
        ShuffleConvs_2_Downs_5_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        ShuffleConvs_2_Downs_6_ce0 = 1'b1;
    end else begin
        ShuffleConvs_2_Downs_6_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        ShuffleConvs_2_Downs_7_ce0 = 1'b1;
    end else begin
        ShuffleConvs_2_Downs_7_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        ShuffleConvs_2_Downs_8_ce0 = 1'b1;
    end else begin
        ShuffleConvs_2_Downs_8_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        ShuffleConvs_2_Downs_9_ce0 = 1'b1;
    end else begin
        ShuffleConvs_2_Downs_9_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        ShuffleConvs_2_Downs_ce0 = 1'b1;
    end else begin
        ShuffleConvs_2_Downs_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((((1'b0 == ap_start) & (1'b1 == ap_CS_fsm_state1)) | ((1'b1 == ap_CS_fsm_state2) & (exitcond1_fu_485_p2 == 1'd1)))) begin
        ap_done = 1'b1;
    end else begin
        ap_done = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_start) & (1'b1 == ap_CS_fsm_state1))) begin
        ap_idle = 1'b1;
    end else begin
        ap_idle = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state2) & (exitcond1_fu_485_p2 == 1'd1))) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state5)) begin
        bias_V_ce0 = 1'b1;
    end else begin
        bias_V_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state13)) begin
        output_V_ce0 = 1'b1;
    end else begin
        output_V_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state13)) begin
        output_V_we0 = 1'b1;
    end else begin
        output_V_we0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        weight_V_ce0 = 1'b1;
    end else begin
        weight_V_ce0 = 1'b0;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_state1 : begin
            if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end
        end
        ap_ST_fsm_state2 : begin
            if (((1'b1 == ap_CS_fsm_state2) & (exitcond1_fu_485_p2 == 1'd1))) begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end
        end
        ap_ST_fsm_state3 : begin
            if (((1'b1 == ap_CS_fsm_state3) & (exitcond2_fu_576_p2 == 1'd1))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state4;
            end
        end
        ap_ST_fsm_state4 : begin
            if (((1'b1 == ap_CS_fsm_state4) & (1'd1 == exitcond3_fu_624_p2))) begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state5;
            end
        end
        ap_ST_fsm_state5 : begin
            if (((1'b1 == ap_CS_fsm_state5) & (1'd0 == exitcond4_fu_665_p2))) begin
                ap_NS_fsm = ap_ST_fsm_state6;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state12;
            end
        end
        ap_ST_fsm_state6 : begin
            if (((1'b1 == ap_CS_fsm_state6) & (1'd1 == exitcond_fu_739_p2))) begin
                ap_NS_fsm = ap_ST_fsm_state5;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state7;
            end
        end
        ap_ST_fsm_state7 : begin
            ap_NS_fsm = ap_ST_fsm_state8;
        end
        ap_ST_fsm_state8 : begin
            ap_NS_fsm = ap_ST_fsm_state9;
        end
        ap_ST_fsm_state9 : begin
            ap_NS_fsm = ap_ST_fsm_state10;
        end
        ap_ST_fsm_state10 : begin
            ap_NS_fsm = ap_ST_fsm_state11;
        end
        ap_ST_fsm_state11 : begin
            ap_NS_fsm = ap_ST_fsm_state6;
        end
        ap_ST_fsm_state12 : begin
            ap_NS_fsm = ap_ST_fsm_state13;
        end
        ap_ST_fsm_state13 : begin
            ap_NS_fsm = ap_ST_fsm_state4;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign Range1_all_ones_fu_929_p2 = ((tmp_12_reg_1352 == 2'd3) ? 1'b1 : 1'b0);

assign Range1_all_zeros_fu_934_p2 = ((tmp_12_reg_1352 == 2'd0) ? 1'b1 : 1'b0);

assign ShuffleConvs_2_Downs_10_address0 = tmp_36_cast_fu_775_p1;

assign ShuffleConvs_2_Downs_11_address0 = tmp_36_cast_fu_775_p1;

assign ShuffleConvs_2_Downs_1_address0 = tmp_36_cast_fu_775_p1;

assign ShuffleConvs_2_Downs_2_address0 = tmp_36_cast_fu_775_p1;

assign ShuffleConvs_2_Downs_3_address0 = tmp_36_cast_fu_775_p1;

assign ShuffleConvs_2_Downs_4_address0 = tmp_36_cast_fu_775_p1;

assign ShuffleConvs_2_Downs_5_address0 = tmp_36_cast_fu_775_p1;

assign ShuffleConvs_2_Downs_6_address0 = tmp_36_cast_fu_775_p1;

assign ShuffleConvs_2_Downs_7_address0 = tmp_36_cast_fu_775_p1;

assign ShuffleConvs_2_Downs_8_address0 = tmp_36_cast_fu_775_p1;

assign ShuffleConvs_2_Downs_9_address0 = tmp_36_cast_fu_775_p1;

assign ShuffleConvs_2_Downs_address0 = tmp_36_cast_fu_775_p1;

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state10 = ap_CS_fsm[32'd9];

assign ap_CS_fsm_state11 = ap_CS_fsm[32'd10];

assign ap_CS_fsm_state12 = ap_CS_fsm[32'd11];

assign ap_CS_fsm_state13 = ap_CS_fsm[32'd12];

assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_state3 = ap_CS_fsm[32'd2];

assign ap_CS_fsm_state4 = ap_CS_fsm[32'd3];

assign ap_CS_fsm_state5 = ap_CS_fsm[32'd4];

assign ap_CS_fsm_state6 = ap_CS_fsm[32'd5];

assign ap_CS_fsm_state7 = ap_CS_fsm[32'd6];

assign ap_CS_fsm_state8 = ap_CS_fsm[32'd7];

assign ap_CS_fsm_state9 = ap_CS_fsm[32'd8];

assign arrayNo_cast_fu_497_p1 = phi_urem_reg_332;

assign bias_V_address0 = bias_V_addr_reg_1164;

assign brmerge40_demorgan_i_fu_991_p2 = (newsignbit_reg_1339 & deleted_ones_fu_957_p3);

assign brmerge9_fu_1103_p2 = (newsignbit_1_reg_1401 | isneg_not_fu_1098_p2);

assign brmerge_i_i1_fu_975_p2 = (newsignbit_reg_1339 | p_not_i_i_fu_969_p2);

assign brmerge_i_i_fu_1094_p2 = (isneg_reg_1388 ^ newsignbit_1_reg_1401);

assign brmerge_i_i_i_fu_1013_p2 = (underflow_fu_1008_p2 | overflow_fu_985_p2);

assign carry_fu_906_p2 = (tmp_40_fu_878_p3 & tmp_10_fu_900_p2);

assign co_1_fu_491_p2 = (co_reg_310 + 7'd1);

assign co_cast_cast_fu_425_p1 = co_reg_310;

assign co_cast_fu_420_p1 = co_reg_310;

assign deleted_ones_fu_957_p3 = ((carry_reg_1345[0:0] === 1'b1) ? p_41_i_i_fu_952_p2 : Range1_all_ones_fu_929_p2);

assign deleted_zeros_fu_939_p3 = ((carry_reg_1345[0:0] === 1'b1) ? Range1_all_ones_fu_929_p2 : Range1_all_zeros_fu_934_p2);

assign exitcond1_fu_485_p2 = ((co_reg_310 == 7'd96) ? 1'b1 : 1'b0);

assign exitcond2_fu_576_p2 = ((h_reg_344 == 3'd5) ? 1'b1 : 1'b0);

assign exitcond3_fu_624_p2 = ((w_reg_356 == 3'd5) ? 1'b1 : 1'b0);

assign exitcond4_fu_665_p2 = ((m_reg_380 == 2'd3) ? 1'b1 : 1'b0);

assign exitcond_fu_739_p2 = ((n_reg_403 == 2'd3) ? 1'b1 : 1'b0);

assign h_1_fu_638_p2 = (h_reg_344 + 3'd1);

assign h_cast9_cast_fu_541_p1 = h_reg_344;

assign idx_urem_fu_602_p3 = ((tmp_25_fu_596_p2[0:0] === 1'b1) ? next_urem_fu_590_p2 : 7'd0);

assign isneg_not_fu_1098_p2 = (isneg_reg_1388 ^ 1'd1);

assign m_1_fu_671_p2 = (2'd1 + m_reg_380);

assign m_cast7_cast_fu_644_p1 = m_reg_380;

assign n_1_fu_745_p2 = (n_reg_403 + 2'd1);

assign n_cast6_cast_fu_725_p1 = n_reg_403;

assign newsignbit_fu_892_p3 = p_Val2_8_fu_886_p2[32'd7];

assign next_mul_fu_414_p2 = (phi_mul_reg_321 + 15'd171);

assign next_urem_fu_590_p2 = (phi_urem_reg_332 + 7'd1);

assign output_V_address0 = output_V_addr_reg_1187;

assign output_V_d0 = ((brmerge9_fu_1103_p2[0:0] === 1'b1) ? result_V_mux_fu_1108_p3 : p_result_V_fu_1115_p3);

assign overflow_fu_985_p2 = (brmerge_i_i1_fu_975_p2 & tmp_13_fu_980_p2);

assign p_38_i_i_fu_964_p2 = (carry_reg_1345 & Range1_all_ones_fu_929_p2);

assign p_41_i_i_fu_952_p2 = (signbit_reg_1326 & tmp_11_fu_946_p2);

assign p_Val2_2_fu_1056_p2 = ($signed(tmp_4_fu_1052_p1) + $signed(tmp_3_fu_1048_p1));

assign p_Val2_5_fu_826_p0 = weight_V_load_reg_1301;

assign p_Val2_5_fu_826_p1 = tmp_1_reg_1306;

assign p_Val2_5_fu_826_p2 = ($signed(p_Val2_5_fu_826_p0) * $signed(p_Val2_5_fu_826_p1));

assign p_Val2_6_fu_852_p2 = ($signed(tmp_11_cast_fu_848_p1) + $signed(p_Val2_5_reg_1311));

assign p_Val2_7_fu_865_p4 = {{p_Val2_6_fu_852_p2[13:6]}};

assign p_Val2_8_39_fu_1034_p3 = ((underflow_reg_1373[0:0] === 1'b1) ? 8'd128 : p_Val2_8_reg_1333);

assign p_Val2_8_fu_886_p2 = (p_Val2_7_fu_865_p4 + tmp_9_fu_875_p1);

assign p_Val2_8_mux_fu_1028_p3 = ((brmerge_i_i_i_reg_1378[0:0] === 1'b1) ? 8'd127 : p_Val2_8_reg_1333);

assign p_not_i_i_fu_969_p2 = (deleted_zeros_fu_939_p3 ^ 1'd1);

assign p_result_V_fu_1115_p3 = ((underflow_1_fu_1089_p2[0:0] === 1'b1) ? 8'd128 : result_V_reg_1395);

assign p_shl1_cast_fu_471_p1 = tmp_16_fu_463_p3;

assign p_shl2_cast_fu_437_p1 = tmp_8_fu_429_p3;

assign p_shl3_cast_fu_519_p1 = tmp_19_fu_511_p3;

assign p_shl4_cast_fu_531_p1 = tmp_20_fu_523_p3;

assign p_shl5_cast_fu_554_p3 = {{tmp_23_fu_550_p1}, {3'd0}};

assign p_shl6_cast_fu_562_p3 = {{tmp_22_fu_545_p2}, {1'd0}};

assign p_shl_cast_fu_459_p1 = tmp_15_fu_451_p3;

assign result_V_fu_1070_p2 = (bias_V_q0 + p_Val2_s_reg_368);

assign result_V_mux_fu_1108_p3 = ((brmerge_i_i_fu_1094_p2[0:0] === 1'b1) ? 8'd127 : result_V_reg_1395);

assign sum_V_fu_1040_p3 = ((underflow_not_fu_1023_p2[0:0] === 1'b1) ? p_Val2_8_mux_fu_1028_p3 : p_Val2_8_39_fu_1034_p3);

assign tmp2_cast_fu_683_p1 = $signed(tmp2_fu_677_p2);

assign tmp2_fu_677_p2 = (m_reg_380 ^ 2'd2);

assign tmp3_cast_fu_757_p1 = $signed(tmp3_fu_751_p2);

assign tmp3_fu_751_p2 = (n_reg_403 ^ 2'd2);

assign tmp4_demorgan_fu_996_p2 = (p_38_i_i_fu_964_p2 | brmerge40_demorgan_i_fu_991_p2);

assign tmp4_fu_1002_p2 = (tmp4_demorgan_fu_996_p2 ^ 1'd1);

assign tmp5_fu_1019_p2 = (brmerge40_demorgan_i_reg_1368 | tmp_13_reg_1363);

assign tmp_10_fu_900_p2 = (newsignbit_fu_892_p3 ^ 1'd1);

assign tmp_11_cast_fu_848_p1 = $signed(tmp_7_fu_840_p3);

assign tmp_11_fu_946_p2 = (tmp_42_fu_922_p3 ^ 1'd1);

assign tmp_13_fu_980_p2 = (signbit_reg_1326 ^ 1'd1);

assign tmp_14_cast_fu_447_p1 = $signed(tmp_14_fu_441_p2);

assign tmp_14_fu_441_p2 = (p_shl2_cast_fu_437_p1 - co_cast_cast_fu_425_p1);

assign tmp_15_fu_451_p3 = {{co_reg_310}, {3'd0}};

assign tmp_16_fu_463_p3 = {{co_reg_310}, {1'd0}};

assign tmp_17_cast_fu_481_p1 = $signed(tmp_17_fu_475_p2);

assign tmp_17_fu_475_p2 = (p_shl_cast_fu_459_p1 - p_shl1_cast_fu_471_p1);

assign tmp_18_fu_501_p4 = {{phi_mul_reg_321[14:11]}};

assign tmp_19_fu_511_p3 = {{tmp_18_fu_501_p4}, {3'd0}};

assign tmp_20_fu_523_p3 = {{tmp_18_fu_501_p4}, {1'd0}};

assign tmp_21_fu_535_p2 = (p_shl3_cast_fu_519_p1 + p_shl4_cast_fu_531_p1);

assign tmp_22_fu_545_p2 = ($signed(h_cast9_cast_fu_541_p1) + $signed(tmp_17_cast_reg_1141));

assign tmp_23_fu_550_p1 = tmp_22_fu_545_p2[9:0];

assign tmp_24_fu_570_p2 = (p_shl5_cast_fu_554_p3 - p_shl6_cast_fu_562_p3);

assign tmp_25_fu_596_p2 = ((next_urem_fu_590_p2 < 7'd12) ? 1'b1 : 1'b0);

assign tmp_26_fu_614_p2 = (tmp_24_reg_1169 + w_cast8_cast_fu_610_p1);

assign tmp_27_cast_fu_619_p1 = tmp_26_fu_614_p2;

assign tmp_27_fu_648_p2 = ($signed(m_cast7_cast_fu_644_p1) + $signed(tmp_14_cast_reg_1136));

assign tmp_28_fu_653_p2 = tmp_27_fu_648_p2 << 11'd2;

assign tmp_29_fu_659_p2 = (tmp_28_fu_653_p2 - tmp_27_fu_648_p2);

assign tmp_2_fu_630_p3 = {{w_reg_356}, {1'd0}};

assign tmp_30_fu_696_p2 = (tmp_cast_cast_fu_692_p1 + tmp_21_reg_1159);

assign tmp_31_fu_713_p2 = (tmp_33_fu_701_p2 + tmp_37_fu_707_p2);

assign tmp_32_fu_729_p2 = (tmp_29_reg_1205 + n_cast6_cast_fu_725_p1);

assign tmp_33_fu_701_p2 = tmp_30_fu_696_p2 << 11'd3;

assign tmp_34_fu_770_p2 = (tmp_6_cast_cast_fu_766_p1 + tmp_31_reg_1218);

assign tmp_35_cast_fu_734_p1 = tmp_32_fu_729_p2;

assign tmp_36_cast_fu_775_p1 = tmp_34_fu_770_p2;

assign tmp_37_fu_707_p2 = tmp_30_fu_696_p2 << 11'd1;

assign tmp_3_fu_1048_p1 = $signed(p_Val2_s_reg_368);

assign tmp_40_fu_878_p3 = p_Val2_6_fu_852_p2[32'd13];

assign tmp_42_fu_922_p3 = p_Val2_6_reg_1321[32'd14];

assign tmp_4_fu_1052_p1 = $signed(bias_V_q0);

assign tmp_5_fu_1084_p2 = (newsignbit_1_reg_1401 ^ 1'd1);

assign tmp_6_cast_cast_fu_766_p1 = tmp_6_fu_761_p2;

assign tmp_6_fu_761_p2 = ($signed(tmp3_cast_fu_757_p1) + $signed(tmp_2_reg_1195));

assign tmp_7_fu_840_p3 = {{p_Val2_4_reg_391}, {6'd0}};

assign tmp_8_fu_429_p3 = {{co_reg_310}, {2'd0}};

assign tmp_9_fu_875_p1 = tmp_39_reg_1316;

assign tmp_cast_cast_fu_692_p1 = tmp_s_fu_687_p2;

assign tmp_fu_582_p3 = {{h_reg_344}, {1'd0}};

assign tmp_s_fu_687_p2 = ($signed(tmp2_cast_fu_683_p1) + $signed(tmp_reg_1177));

assign underflow_1_fu_1089_p2 = (isneg_reg_1388 & tmp_5_fu_1084_p2);

assign underflow_fu_1008_p2 = (signbit_reg_1326 & tmp4_fu_1002_p2);

assign underflow_not_fu_1023_p2 = (tmp5_fu_1019_p2 | p_38_i_i_reg_1358);

assign w_1_fu_719_p2 = (w_reg_356 + 3'd1);

assign w_cast8_cast_fu_610_p1 = w_reg_356;

assign weight_V_address0 = tmp_35_cast_fu_734_p1;

always @ (posedge ap_clk) begin
    tmp_17_cast_reg_1141[0] <= 1'b0;
    arrayNo_cast_reg_1154[31:7] <= 25'b0000000000000000000000000;
    tmp_21_reg_1159[0] <= 1'b0;
    tmp_24_reg_1169[0] <= 1'b0;
    tmp_reg_1177[0] <= 1'b0;
    tmp_2_reg_1195[0] <= 1'b0;
    tmp_31_reg_1218[0] <= 1'b0;
end

endmodule //subconv_3x3_8_stride_1