// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2017.2
// Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module shuffle_9621 (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        left_0_address0,
        left_0_ce0,
        left_0_q0,
        right_0_address0,
        right_0_ce0,
        right_0_q0,
        output_r_address0,
        output_r_ce0,
        output_r_we0,
        output_r_d0
);

parameter    ap_ST_fsm_state1 = 5'd1;
parameter    ap_ST_fsm_state2 = 5'd2;
parameter    ap_ST_fsm_state3 = 5'd4;
parameter    ap_ST_fsm_state4 = 5'd8;
parameter    ap_ST_fsm_state5 = 5'd16;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
output  [10:0] left_0_address0;
output   left_0_ce0;
input  [31:0] left_0_q0;
output  [10:0] right_0_address0;
output   right_0_ce0;
input  [31:0] right_0_q0;
output  [11:0] output_r_address0;
output   output_r_ce0;
output   output_r_we0;
output  [31:0] output_r_d0;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg left_0_ce0;
reg right_0_ce0;
reg output_r_ce0;
reg output_r_we0;

(* fsm_encoding = "none" *) reg   [4:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
wire   [0:0] tmp_94_fu_122_p1;
reg   [0:0] tmp_94_reg_259;
wire    ap_CS_fsm_state2;
wire   [7:0] co_13_fu_132_p2;
reg   [7:0] co_13_reg_266;
wire   [9:0] tmp_219_cast_fu_156_p1;
reg   [9:0] tmp_219_cast_reg_271;
wire   [0:0] exitcond2_fu_126_p2;
wire   [10:0] tmp_221_cast_fu_168_p1;
reg   [10:0] tmp_221_cast_reg_276;
wire   [2:0] h_13_fu_178_p2;
reg   [2:0] h_13_reg_284;
wire    ap_CS_fsm_state3;
wire   [11:0] tmp_224_cast_fu_197_p3;
reg   [11:0] tmp_224_cast_reg_289;
wire   [0:0] exitcond1_fu_172_p2;
wire   [12:0] tmp_227_cast_fu_210_p3;
reg   [12:0] tmp_227_cast_reg_294;
wire   [2:0] w_13_fu_224_p2;
reg   [2:0] w_13_reg_302;
wire    ap_CS_fsm_state4;
wire   [0:0] exitcond_fu_218_p2;
reg   [11:0] output_addr_reg_317;
reg   [7:0] co_reg_77;
reg   [2:0] h_reg_88;
reg   [2:0] w_reg_99;
wire    ap_CS_fsm_state5;
reg   [31:0] storemerge_phi_fu_113_p4;
wire   [63:0] tmp_228_cast_fu_243_p1;
wire   [63:0] tmp_229_cast_fu_254_p1;
wire   [6:0] tmp_fu_138_p4;
wire   [8:0] tmp_s_fu_148_p3;
wire   [9:0] tmp_141_fu_160_p3;
wire   [9:0] tmp_cast_fu_188_p1;
wire   [9:0] tmp_142_fu_192_p2;
wire   [10:0] tmp_cast2_fu_184_p1;
wire   [10:0] tmp_143_fu_205_p2;
wire   [11:0] tmp_97_cast_fu_234_p1;
wire   [11:0] tmp_144_fu_238_p2;
wire   [12:0] tmp_97_cast1_fu_230_p1;
wire   [12:0] tmp_145_fu_249_p2;
reg   [4:0] ap_NS_fsm;

// power-on initialization
initial begin
#0 ap_CS_fsm = 5'd1;
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state3) & (exitcond1_fu_172_p2 == 1'd1))) begin
        co_reg_77 <= co_13_reg_266;
    end else if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        co_reg_77 <= 8'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state4) & (exitcond_fu_218_p2 == 1'd1))) begin
        h_reg_88 <= h_13_reg_284;
    end else if (((1'b1 == ap_CS_fsm_state2) & (exitcond2_fu_126_p2 == 1'd0))) begin
        h_reg_88 <= 3'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state3) & (1'd0 == exitcond1_fu_172_p2))) begin
        w_reg_99 <= 3'd0;
    end else if ((1'b1 == ap_CS_fsm_state5)) begin
        w_reg_99 <= w_13_reg_302;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        co_13_reg_266 <= co_13_fu_132_p2;
        tmp_94_reg_259 <= tmp_94_fu_122_p1;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        h_13_reg_284 <= h_13_fu_178_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state4) & (1'd0 == exitcond_fu_218_p2))) begin
        output_addr_reg_317 <= tmp_229_cast_fu_254_p1;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state2) & (exitcond2_fu_126_p2 == 1'd0))) begin
        tmp_219_cast_reg_271[8 : 2] <= tmp_219_cast_fu_156_p1[8 : 2];
        tmp_221_cast_reg_276[9 : 2] <= tmp_221_cast_fu_168_p1[9 : 2];
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state3) & (1'd0 == exitcond1_fu_172_p2))) begin
        tmp_224_cast_reg_289[11 : 2] <= tmp_224_cast_fu_197_p3[11 : 2];
        tmp_227_cast_reg_294[12 : 2] <= tmp_227_cast_fu_210_p3[12 : 2];
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state4)) begin
        w_13_reg_302 <= w_13_fu_224_p2;
    end
end

always @ (*) begin
    if ((((1'b0 == ap_start) & (1'b1 == ap_CS_fsm_state1)) | ((1'b1 == ap_CS_fsm_state2) & (exitcond2_fu_126_p2 == 1'd1)))) begin
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
    if (((1'b1 == ap_CS_fsm_state2) & (exitcond2_fu_126_p2 == 1'd1))) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state4)) begin
        left_0_ce0 = 1'b1;
    end else begin
        left_0_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state5)) begin
        output_r_ce0 = 1'b1;
    end else begin
        output_r_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state5)) begin
        output_r_we0 = 1'b1;
    end else begin
        output_r_we0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state4)) begin
        right_0_ce0 = 1'b1;
    end else begin
        right_0_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state5)) begin
        if ((tmp_94_reg_259 == 1'd1)) begin
            storemerge_phi_fu_113_p4 = right_0_q0;
        end else if ((tmp_94_reg_259 == 1'd0)) begin
            storemerge_phi_fu_113_p4 = left_0_q0;
        end else begin
            storemerge_phi_fu_113_p4 = 'bx;
        end
    end else begin
        storemerge_phi_fu_113_p4 = 'bx;
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
            if (((1'b1 == ap_CS_fsm_state2) & (exitcond2_fu_126_p2 == 1'd1))) begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end
        end
        ap_ST_fsm_state3 : begin
            if (((1'b1 == ap_CS_fsm_state3) & (exitcond1_fu_172_p2 == 1'd1))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state4;
            end
        end
        ap_ST_fsm_state4 : begin
            if (((1'b1 == ap_CS_fsm_state4) & (exitcond_fu_218_p2 == 1'd1))) begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state5;
            end
        end
        ap_ST_fsm_state5 : begin
            ap_NS_fsm = ap_ST_fsm_state4;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_state3 = ap_CS_fsm[32'd2];

assign ap_CS_fsm_state4 = ap_CS_fsm[32'd3];

assign ap_CS_fsm_state5 = ap_CS_fsm[32'd4];

assign co_13_fu_132_p2 = (8'd1 + co_reg_77);

assign exitcond1_fu_172_p2 = ((h_reg_88 == 3'd4) ? 1'b1 : 1'b0);

assign exitcond2_fu_126_p2 = ((co_reg_77 == 8'd192) ? 1'b1 : 1'b0);

assign exitcond_fu_218_p2 = ((w_reg_99 == 3'd4) ? 1'b1 : 1'b0);

assign h_13_fu_178_p2 = (h_reg_88 + 3'd1);

assign left_0_address0 = tmp_228_cast_fu_243_p1;

assign output_r_address0 = output_addr_reg_317;

assign output_r_d0 = storemerge_phi_fu_113_p4;

assign right_0_address0 = tmp_228_cast_fu_243_p1;

assign tmp_141_fu_160_p3 = {{co_reg_77}, {2'd0}};

assign tmp_142_fu_192_p2 = (tmp_cast_fu_188_p1 + tmp_219_cast_reg_271);

assign tmp_143_fu_205_p2 = (tmp_cast2_fu_184_p1 + tmp_221_cast_reg_276);

assign tmp_144_fu_238_p2 = (tmp_224_cast_reg_289 + tmp_97_cast_fu_234_p1);

assign tmp_145_fu_249_p2 = (tmp_227_cast_reg_294 + tmp_97_cast1_fu_230_p1);

assign tmp_219_cast_fu_156_p1 = tmp_s_fu_148_p3;

assign tmp_221_cast_fu_168_p1 = tmp_141_fu_160_p3;

assign tmp_224_cast_fu_197_p3 = {{tmp_142_fu_192_p2}, {2'd0}};

assign tmp_227_cast_fu_210_p3 = {{tmp_143_fu_205_p2}, {2'd0}};

assign tmp_228_cast_fu_243_p1 = tmp_144_fu_238_p2;

assign tmp_229_cast_fu_254_p1 = tmp_145_fu_249_p2;

assign tmp_94_fu_122_p1 = co_reg_77[0:0];

assign tmp_97_cast1_fu_230_p1 = w_reg_99;

assign tmp_97_cast_fu_234_p1 = w_reg_99;

assign tmp_cast2_fu_184_p1 = h_reg_88;

assign tmp_cast_fu_188_p1 = h_reg_88;

assign tmp_fu_138_p4 = {{co_reg_77[7:1]}};

assign tmp_s_fu_148_p3 = {{tmp_fu_138_p4}, {2'd0}};

assign w_13_fu_224_p2 = (w_reg_99 + 3'd1);

always @ (posedge ap_clk) begin
    tmp_219_cast_reg_271[1:0] <= 2'b00;
    tmp_219_cast_reg_271[9] <= 1'b0;
    tmp_221_cast_reg_276[1:0] <= 2'b00;
    tmp_221_cast_reg_276[10] <= 1'b0;
    tmp_224_cast_reg_289[1:0] <= 2'b00;
    tmp_227_cast_reg_294[1:0] <= 2'b00;
end

endmodule //shuffle_9621