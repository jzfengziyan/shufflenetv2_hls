# This script segment is generated automatically by AutoPilot

set id 255
set name ShuffleNetV2_mux_fYi
set corename simcore_mux
set op mux
set stage_num 1
set max_latency -1
set registered_input 1
set in1_width 8
set in1_signed 0
set in2_width 8
set in2_signed 0
set in3_width 8
set in3_signed 0
set in4_width 8
set in4_signed 0
set in5_width 8
set in5_signed 0
set in6_width 8
set in6_signed 0
set in7_width 8
set in7_signed 0
set in8_width 8
set in8_signed 0
set in9_width 8
set in9_signed 0
set in10_width 8
set in10_signed 0
set in11_width 8
set in11_signed 0
set in12_width 8
set in12_signed 0
set in13_width 8
set in13_signed 0
set in14_width 8
set in14_signed 0
set in15_width 8
set in15_signed 0
set in16_width 8
set in16_signed 0
set in17_width 8
set in17_signed 0
set in18_width 8
set in18_signed 0
set in19_width 8
set in19_signed 0
set in20_width 8
set in20_signed 0
set in21_width 8
set in21_signed 0
set in22_width 8
set in22_signed 0
set in23_width 8
set in23_signed 0
set in24_width 8
set in24_signed 0
set in25_width 8
set in25_signed 0
set in26_width 8
set in26_signed 0
set in27_width 8
set in27_signed 0
set in28_width 8
set in28_signed 0
set in29_width 8
set in29_signed 0
set in30_width 8
set in30_signed 0
set in31_width 8
set in31_signed 0
set in32_width 8
set in32_signed 0
set in33_width 8
set in33_signed 0
set in34_width 8
set in34_signed 0
set in35_width 8
set in35_signed 0
set in36_width 8
set in36_signed 0
set in37_width 8
set in37_signed 0
set in38_width 8
set in38_signed 0
set in39_width 8
set in39_signed 0
set in40_width 8
set in40_signed 0
set in41_width 8
set in41_signed 0
set in42_width 8
set in42_signed 0
set in43_width 8
set in43_signed 0
set in44_width 8
set in44_signed 0
set in45_width 8
set in45_signed 0
set in46_width 8
set in46_signed 0
set in47_width 8
set in47_signed 0
set in48_width 8
set in48_signed 0
set in49_width 6
set in49_signed 0
set out_width 8
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mux] == "ap_gen_simcore_mux"} {
eval "ap_gen_simcore_mux { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    in2_width ${in2_width} \
    in2_signed ${in2_signed} \
    in3_width ${in3_width} \
    in3_signed ${in3_signed} \
    in4_width ${in4_width} \
    in4_signed ${in4_signed} \
    in5_width ${in5_width} \
    in5_signed ${in5_signed} \
    in6_width ${in6_width} \
    in6_signed ${in6_signed} \
    in7_width ${in7_width} \
    in7_signed ${in7_signed} \
    in8_width ${in8_width} \
    in8_signed ${in8_signed} \
    in9_width ${in9_width} \
    in9_signed ${in9_signed} \
    in10_width ${in10_width} \
    in10_signed ${in10_signed} \
    in11_width ${in11_width} \
    in11_signed ${in11_signed} \
    in12_width ${in12_width} \
    in12_signed ${in12_signed} \
    in13_width ${in13_width} \
    in13_signed ${in13_signed} \
    in14_width ${in14_width} \
    in14_signed ${in14_signed} \
    in15_width ${in15_width} \
    in15_signed ${in15_signed} \
    in16_width ${in16_width} \
    in16_signed ${in16_signed} \
    in17_width ${in17_width} \
    in17_signed ${in17_signed} \
    in18_width ${in18_width} \
    in18_signed ${in18_signed} \
    in19_width ${in19_width} \
    in19_signed ${in19_signed} \
    in20_width ${in20_width} \
    in20_signed ${in20_signed} \
    in21_width ${in21_width} \
    in21_signed ${in21_signed} \
    in22_width ${in22_width} \
    in22_signed ${in22_signed} \
    in23_width ${in23_width} \
    in23_signed ${in23_signed} \
    in24_width ${in24_width} \
    in24_signed ${in24_signed} \
    in25_width ${in25_width} \
    in25_signed ${in25_signed} \
    in26_width ${in26_width} \
    in26_signed ${in26_signed} \
    in27_width ${in27_width} \
    in27_signed ${in27_signed} \
    in28_width ${in28_width} \
    in28_signed ${in28_signed} \
    in29_width ${in29_width} \
    in29_signed ${in29_signed} \
    in30_width ${in30_width} \
    in30_signed ${in30_signed} \
    in31_width ${in31_width} \
    in31_signed ${in31_signed} \
    in32_width ${in32_width} \
    in32_signed ${in32_signed} \
    in33_width ${in33_width} \
    in33_signed ${in33_signed} \
    in34_width ${in34_width} \
    in34_signed ${in34_signed} \
    in35_width ${in35_width} \
    in35_signed ${in35_signed} \
    in36_width ${in36_width} \
    in36_signed ${in36_signed} \
    in37_width ${in37_width} \
    in37_signed ${in37_signed} \
    in38_width ${in38_width} \
    in38_signed ${in38_signed} \
    in39_width ${in39_width} \
    in39_signed ${in39_signed} \
    in40_width ${in40_width} \
    in40_signed ${in40_signed} \
    in41_width ${in41_width} \
    in41_signed ${in41_signed} \
    in42_width ${in42_width} \
    in42_signed ${in42_signed} \
    in43_width ${in43_width} \
    in43_signed ${in43_signed} \
    in44_width ${in44_width} \
    in44_signed ${in44_signed} \
    in45_width ${in45_width} \
    in45_signed ${in45_signed} \
    in46_width ${in46_width} \
    in46_signed ${in46_signed} \
    in47_width ${in47_width} \
    in47_signed ${in47_signed} \
    in48_width ${in48_width} \
    in48_signed ${in48_signed} \
    in49_width ${in49_width} \
    in49_signed ${in49_signed} \
    out_width ${out_width} \
}"
} else {
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_mux, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op mux
set corename MuxnS
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_pipemux] == "::AESL_LIB_VIRTEX::xil_gen_pipemux"} {
eval "::AESL_LIB_VIRTEX::xil_gen_pipemux { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    in2_width ${in2_width} \
    in2_signed ${in2_signed} \
    in3_width ${in3_width} \
    in3_signed ${in3_signed} \
    in4_width ${in4_width} \
    in4_signed ${in4_signed} \
    in5_width ${in5_width} \
    in5_signed ${in5_signed} \
    in6_width ${in6_width} \
    in6_signed ${in6_signed} \
    in7_width ${in7_width} \
    in7_signed ${in7_signed} \
    in8_width ${in8_width} \
    in8_signed ${in8_signed} \
    in9_width ${in9_width} \
    in9_signed ${in9_signed} \
    in10_width ${in10_width} \
    in10_signed ${in10_signed} \
    in11_width ${in11_width} \
    in11_signed ${in11_signed} \
    in12_width ${in12_width} \
    in12_signed ${in12_signed} \
    in13_width ${in13_width} \
    in13_signed ${in13_signed} \
    in14_width ${in14_width} \
    in14_signed ${in14_signed} \
    in15_width ${in15_width} \
    in15_signed ${in15_signed} \
    in16_width ${in16_width} \
    in16_signed ${in16_signed} \
    in17_width ${in17_width} \
    in17_signed ${in17_signed} \
    in18_width ${in18_width} \
    in18_signed ${in18_signed} \
    in19_width ${in19_width} \
    in19_signed ${in19_signed} \
    in20_width ${in20_width} \
    in20_signed ${in20_signed} \
    in21_width ${in21_width} \
    in21_signed ${in21_signed} \
    in22_width ${in22_width} \
    in22_signed ${in22_signed} \
    in23_width ${in23_width} \
    in23_signed ${in23_signed} \
    in24_width ${in24_width} \
    in24_signed ${in24_signed} \
    in25_width ${in25_width} \
    in25_signed ${in25_signed} \
    in26_width ${in26_width} \
    in26_signed ${in26_signed} \
    in27_width ${in27_width} \
    in27_signed ${in27_signed} \
    in28_width ${in28_width} \
    in28_signed ${in28_signed} \
    in29_width ${in29_width} \
    in29_signed ${in29_signed} \
    in30_width ${in30_width} \
    in30_signed ${in30_signed} \
    in31_width ${in31_width} \
    in31_signed ${in31_signed} \
    in32_width ${in32_width} \
    in32_signed ${in32_signed} \
    in33_width ${in33_width} \
    in33_signed ${in33_signed} \
    in34_width ${in34_width} \
    in34_signed ${in34_signed} \
    in35_width ${in35_width} \
    in35_signed ${in35_signed} \
    in36_width ${in36_width} \
    in36_signed ${in36_signed} \
    in37_width ${in37_width} \
    in37_signed ${in37_signed} \
    in38_width ${in38_width} \
    in38_signed ${in38_signed} \
    in39_width ${in39_width} \
    in39_signed ${in39_signed} \
    in40_width ${in40_width} \
    in40_signed ${in40_signed} \
    in41_width ${in41_width} \
    in41_signed ${in41_signed} \
    in42_width ${in42_width} \
    in42_signed ${in42_signed} \
    in43_width ${in43_width} \
    in43_signed ${in43_signed} \
    in44_width ${in44_width} \
    in44_signed ${in44_signed} \
    in45_width ${in45_width} \
    in45_signed ${in45_signed} \
    in46_width ${in46_width} \
    in46_signed ${in46_signed} \
    in47_width ${in47_width} \
    in47_signed ${in47_signed} \
    in48_width ${in48_width} \
    in48_signed ${in48_signed} \
    in49_width ${in49_width} \
    in49_signed ${in49_signed} \
    out_width ${out_width} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_pipemux, check your platform lib"
}
}


# clear list
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_begin
    cg_default_interface_gen_bundle_begin
    AESL_LIB_XILADAPTER::native_axis_begin
}

# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 256 \
    name input_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename input_V \
    op interface \
    ports { input_V_address0 { O 14 vector } input_V_ce0 { O 1 bit } input_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'input_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 257 \
    name weight_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_0_V \
    op interface \
    ports { weight_0_V_address0 { O 6 vector } weight_0_V_ce0 { O 1 bit } weight_0_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 258 \
    name weight_1_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_1_V \
    op interface \
    ports { weight_1_V_address0 { O 6 vector } weight_1_V_ce0 { O 1 bit } weight_1_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 259 \
    name weight_2_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_2_V \
    op interface \
    ports { weight_2_V_address0 { O 6 vector } weight_2_V_ce0 { O 1 bit } weight_2_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 260 \
    name weight_3_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_3_V \
    op interface \
    ports { weight_3_V_address0 { O 6 vector } weight_3_V_ce0 { O 1 bit } weight_3_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_3_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 261 \
    name weight_4_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_4_V \
    op interface \
    ports { weight_4_V_address0 { O 6 vector } weight_4_V_ce0 { O 1 bit } weight_4_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_4_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 262 \
    name weight_5_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_5_V \
    op interface \
    ports { weight_5_V_address0 { O 6 vector } weight_5_V_ce0 { O 1 bit } weight_5_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_5_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 263 \
    name weight_6_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_6_V \
    op interface \
    ports { weight_6_V_address0 { O 6 vector } weight_6_V_ce0 { O 1 bit } weight_6_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_6_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 264 \
    name weight_7_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_7_V \
    op interface \
    ports { weight_7_V_address0 { O 6 vector } weight_7_V_ce0 { O 1 bit } weight_7_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_7_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 265 \
    name weight_8_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_8_V \
    op interface \
    ports { weight_8_V_address0 { O 6 vector } weight_8_V_ce0 { O 1 bit } weight_8_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_8_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 266 \
    name weight_9_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_9_V \
    op interface \
    ports { weight_9_V_address0 { O 6 vector } weight_9_V_ce0 { O 1 bit } weight_9_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_9_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 267 \
    name weight_10_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_10_V \
    op interface \
    ports { weight_10_V_address0 { O 6 vector } weight_10_V_ce0 { O 1 bit } weight_10_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_10_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 268 \
    name weight_11_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_11_V \
    op interface \
    ports { weight_11_V_address0 { O 6 vector } weight_11_V_ce0 { O 1 bit } weight_11_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_11_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 269 \
    name weight_12_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_12_V \
    op interface \
    ports { weight_12_V_address0 { O 6 vector } weight_12_V_ce0 { O 1 bit } weight_12_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_12_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 270 \
    name weight_13_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_13_V \
    op interface \
    ports { weight_13_V_address0 { O 6 vector } weight_13_V_ce0 { O 1 bit } weight_13_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_13_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 271 \
    name weight_14_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_14_V \
    op interface \
    ports { weight_14_V_address0 { O 6 vector } weight_14_V_ce0 { O 1 bit } weight_14_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_14_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 272 \
    name weight_15_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_15_V \
    op interface \
    ports { weight_15_V_address0 { O 6 vector } weight_15_V_ce0 { O 1 bit } weight_15_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_15_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 273 \
    name weight_16_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_16_V \
    op interface \
    ports { weight_16_V_address0 { O 6 vector } weight_16_V_ce0 { O 1 bit } weight_16_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_16_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 274 \
    name weight_17_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_17_V \
    op interface \
    ports { weight_17_V_address0 { O 6 vector } weight_17_V_ce0 { O 1 bit } weight_17_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_17_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 275 \
    name weight_18_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_18_V \
    op interface \
    ports { weight_18_V_address0 { O 6 vector } weight_18_V_ce0 { O 1 bit } weight_18_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_18_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 276 \
    name weight_19_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_19_V \
    op interface \
    ports { weight_19_V_address0 { O 6 vector } weight_19_V_ce0 { O 1 bit } weight_19_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_19_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 277 \
    name weight_20_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_20_V \
    op interface \
    ports { weight_20_V_address0 { O 6 vector } weight_20_V_ce0 { O 1 bit } weight_20_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_20_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 278 \
    name weight_21_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_21_V \
    op interface \
    ports { weight_21_V_address0 { O 6 vector } weight_21_V_ce0 { O 1 bit } weight_21_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_21_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 279 \
    name weight_22_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_22_V \
    op interface \
    ports { weight_22_V_address0 { O 6 vector } weight_22_V_ce0 { O 1 bit } weight_22_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_22_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 280 \
    name weight_23_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_23_V \
    op interface \
    ports { weight_23_V_address0 { O 6 vector } weight_23_V_ce0 { O 1 bit } weight_23_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_23_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 281 \
    name weight_24_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_24_V \
    op interface \
    ports { weight_24_V_address0 { O 6 vector } weight_24_V_ce0 { O 1 bit } weight_24_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_24_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 282 \
    name weight_25_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_25_V \
    op interface \
    ports { weight_25_V_address0 { O 6 vector } weight_25_V_ce0 { O 1 bit } weight_25_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_25_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 283 \
    name weight_26_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_26_V \
    op interface \
    ports { weight_26_V_address0 { O 6 vector } weight_26_V_ce0 { O 1 bit } weight_26_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_26_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 284 \
    name weight_27_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_27_V \
    op interface \
    ports { weight_27_V_address0 { O 6 vector } weight_27_V_ce0 { O 1 bit } weight_27_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_27_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 285 \
    name weight_28_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_28_V \
    op interface \
    ports { weight_28_V_address0 { O 6 vector } weight_28_V_ce0 { O 1 bit } weight_28_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_28_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 286 \
    name weight_29_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_29_V \
    op interface \
    ports { weight_29_V_address0 { O 6 vector } weight_29_V_ce0 { O 1 bit } weight_29_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_29_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 287 \
    name weight_30_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_30_V \
    op interface \
    ports { weight_30_V_address0 { O 6 vector } weight_30_V_ce0 { O 1 bit } weight_30_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_30_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 288 \
    name weight_31_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_31_V \
    op interface \
    ports { weight_31_V_address0 { O 6 vector } weight_31_V_ce0 { O 1 bit } weight_31_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_31_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 289 \
    name weight_32_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_32_V \
    op interface \
    ports { weight_32_V_address0 { O 6 vector } weight_32_V_ce0 { O 1 bit } weight_32_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_32_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 290 \
    name weight_33_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_33_V \
    op interface \
    ports { weight_33_V_address0 { O 6 vector } weight_33_V_ce0 { O 1 bit } weight_33_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_33_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 291 \
    name weight_34_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_34_V \
    op interface \
    ports { weight_34_V_address0 { O 6 vector } weight_34_V_ce0 { O 1 bit } weight_34_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_34_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 292 \
    name weight_35_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_35_V \
    op interface \
    ports { weight_35_V_address0 { O 6 vector } weight_35_V_ce0 { O 1 bit } weight_35_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_35_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 293 \
    name weight_36_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_36_V \
    op interface \
    ports { weight_36_V_address0 { O 6 vector } weight_36_V_ce0 { O 1 bit } weight_36_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_36_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 294 \
    name weight_37_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_37_V \
    op interface \
    ports { weight_37_V_address0 { O 6 vector } weight_37_V_ce0 { O 1 bit } weight_37_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_37_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 295 \
    name weight_38_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_38_V \
    op interface \
    ports { weight_38_V_address0 { O 6 vector } weight_38_V_ce0 { O 1 bit } weight_38_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_38_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 296 \
    name weight_39_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_39_V \
    op interface \
    ports { weight_39_V_address0 { O 6 vector } weight_39_V_ce0 { O 1 bit } weight_39_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_39_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 297 \
    name weight_40_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_40_V \
    op interface \
    ports { weight_40_V_address0 { O 6 vector } weight_40_V_ce0 { O 1 bit } weight_40_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_40_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 298 \
    name weight_41_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_41_V \
    op interface \
    ports { weight_41_V_address0 { O 6 vector } weight_41_V_ce0 { O 1 bit } weight_41_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_41_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 299 \
    name weight_42_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_42_V \
    op interface \
    ports { weight_42_V_address0 { O 6 vector } weight_42_V_ce0 { O 1 bit } weight_42_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_42_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 300 \
    name weight_43_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_43_V \
    op interface \
    ports { weight_43_V_address0 { O 6 vector } weight_43_V_ce0 { O 1 bit } weight_43_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_43_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 301 \
    name weight_44_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_44_V \
    op interface \
    ports { weight_44_V_address0 { O 6 vector } weight_44_V_ce0 { O 1 bit } weight_44_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_44_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 302 \
    name weight_45_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_45_V \
    op interface \
    ports { weight_45_V_address0 { O 6 vector } weight_45_V_ce0 { O 1 bit } weight_45_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_45_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 303 \
    name weight_46_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_46_V \
    op interface \
    ports { weight_46_V_address0 { O 6 vector } weight_46_V_ce0 { O 1 bit } weight_46_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_46_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 304 \
    name weight_47_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_47_V \
    op interface \
    ports { weight_47_V_address0 { O 6 vector } weight_47_V_ce0 { O 1 bit } weight_47_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_47_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 305 \
    name bias_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bias_V \
    op interface \
    ports { bias_V_address0 { O 6 vector } bias_V_ce0 { O 1 bit } bias_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bias_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 306 \
    name ShuffleConvs_1_Downs_47 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename ShuffleConvs_1_Downs_47 \
    op interface \
    ports { ShuffleConvs_1_Downs_47_address0 { O 9 vector } ShuffleConvs_1_Downs_47_ce0 { O 1 bit } ShuffleConvs_1_Downs_47_we0 { O 1 bit } ShuffleConvs_1_Downs_47_d0 { O 8 vector } ShuffleConvs_1_Downs_47_q0 { I 8 vector } ShuffleConvs_1_Downs_47_address1 { O 9 vector } ShuffleConvs_1_Downs_47_ce1 { O 1 bit } ShuffleConvs_1_Downs_47_we1 { O 1 bit } ShuffleConvs_1_Downs_47_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_1_Downs_47'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 307 \
    name ShuffleConvs_1_Downs_30 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename ShuffleConvs_1_Downs_30 \
    op interface \
    ports { ShuffleConvs_1_Downs_30_address0 { O 9 vector } ShuffleConvs_1_Downs_30_ce0 { O 1 bit } ShuffleConvs_1_Downs_30_we0 { O 1 bit } ShuffleConvs_1_Downs_30_d0 { O 8 vector } ShuffleConvs_1_Downs_30_q0 { I 8 vector } ShuffleConvs_1_Downs_30_address1 { O 9 vector } ShuffleConvs_1_Downs_30_ce1 { O 1 bit } ShuffleConvs_1_Downs_30_we1 { O 1 bit } ShuffleConvs_1_Downs_30_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_1_Downs_30'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 308 \
    name ShuffleConvs_1_Downs_46 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename ShuffleConvs_1_Downs_46 \
    op interface \
    ports { ShuffleConvs_1_Downs_46_address0 { O 9 vector } ShuffleConvs_1_Downs_46_ce0 { O 1 bit } ShuffleConvs_1_Downs_46_we0 { O 1 bit } ShuffleConvs_1_Downs_46_d0 { O 8 vector } ShuffleConvs_1_Downs_46_q0 { I 8 vector } ShuffleConvs_1_Downs_46_address1 { O 9 vector } ShuffleConvs_1_Downs_46_ce1 { O 1 bit } ShuffleConvs_1_Downs_46_we1 { O 1 bit } ShuffleConvs_1_Downs_46_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_1_Downs_46'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 309 \
    name ShuffleConvs_1_Downs_29 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename ShuffleConvs_1_Downs_29 \
    op interface \
    ports { ShuffleConvs_1_Downs_29_address0 { O 9 vector } ShuffleConvs_1_Downs_29_ce0 { O 1 bit } ShuffleConvs_1_Downs_29_we0 { O 1 bit } ShuffleConvs_1_Downs_29_d0 { O 8 vector } ShuffleConvs_1_Downs_29_q0 { I 8 vector } ShuffleConvs_1_Downs_29_address1 { O 9 vector } ShuffleConvs_1_Downs_29_ce1 { O 1 bit } ShuffleConvs_1_Downs_29_we1 { O 1 bit } ShuffleConvs_1_Downs_29_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_1_Downs_29'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 310 \
    name ShuffleConvs_1_Downs_35 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename ShuffleConvs_1_Downs_35 \
    op interface \
    ports { ShuffleConvs_1_Downs_35_address0 { O 9 vector } ShuffleConvs_1_Downs_35_ce0 { O 1 bit } ShuffleConvs_1_Downs_35_we0 { O 1 bit } ShuffleConvs_1_Downs_35_d0 { O 8 vector } ShuffleConvs_1_Downs_35_q0 { I 8 vector } ShuffleConvs_1_Downs_35_address1 { O 9 vector } ShuffleConvs_1_Downs_35_ce1 { O 1 bit } ShuffleConvs_1_Downs_35_we1 { O 1 bit } ShuffleConvs_1_Downs_35_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_1_Downs_35'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 311 \
    name ShuffleConvs_1_Downs_28 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename ShuffleConvs_1_Downs_28 \
    op interface \
    ports { ShuffleConvs_1_Downs_28_address0 { O 9 vector } ShuffleConvs_1_Downs_28_ce0 { O 1 bit } ShuffleConvs_1_Downs_28_we0 { O 1 bit } ShuffleConvs_1_Downs_28_d0 { O 8 vector } ShuffleConvs_1_Downs_28_q0 { I 8 vector } ShuffleConvs_1_Downs_28_address1 { O 9 vector } ShuffleConvs_1_Downs_28_ce1 { O 1 bit } ShuffleConvs_1_Downs_28_we1 { O 1 bit } ShuffleConvs_1_Downs_28_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_1_Downs_28'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 312 \
    name ShuffleConvs_1_Downs_24 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename ShuffleConvs_1_Downs_24 \
    op interface \
    ports { ShuffleConvs_1_Downs_24_address0 { O 9 vector } ShuffleConvs_1_Downs_24_ce0 { O 1 bit } ShuffleConvs_1_Downs_24_we0 { O 1 bit } ShuffleConvs_1_Downs_24_d0 { O 8 vector } ShuffleConvs_1_Downs_24_q0 { I 8 vector } ShuffleConvs_1_Downs_24_address1 { O 9 vector } ShuffleConvs_1_Downs_24_ce1 { O 1 bit } ShuffleConvs_1_Downs_24_we1 { O 1 bit } ShuffleConvs_1_Downs_24_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_1_Downs_24'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 313 \
    name ShuffleConvs_1_Downs_27 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename ShuffleConvs_1_Downs_27 \
    op interface \
    ports { ShuffleConvs_1_Downs_27_address0 { O 9 vector } ShuffleConvs_1_Downs_27_ce0 { O 1 bit } ShuffleConvs_1_Downs_27_we0 { O 1 bit } ShuffleConvs_1_Downs_27_d0 { O 8 vector } ShuffleConvs_1_Downs_27_q0 { I 8 vector } ShuffleConvs_1_Downs_27_address1 { O 9 vector } ShuffleConvs_1_Downs_27_ce1 { O 1 bit } ShuffleConvs_1_Downs_27_we1 { O 1 bit } ShuffleConvs_1_Downs_27_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_1_Downs_27'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 314 \
    name ShuffleConvs_1_Downs_13 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename ShuffleConvs_1_Downs_13 \
    op interface \
    ports { ShuffleConvs_1_Downs_13_address0 { O 9 vector } ShuffleConvs_1_Downs_13_ce0 { O 1 bit } ShuffleConvs_1_Downs_13_we0 { O 1 bit } ShuffleConvs_1_Downs_13_d0 { O 8 vector } ShuffleConvs_1_Downs_13_q0 { I 8 vector } ShuffleConvs_1_Downs_13_address1 { O 9 vector } ShuffleConvs_1_Downs_13_ce1 { O 1 bit } ShuffleConvs_1_Downs_13_we1 { O 1 bit } ShuffleConvs_1_Downs_13_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_1_Downs_13'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 315 \
    name ShuffleConvs_1_Downs_26 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename ShuffleConvs_1_Downs_26 \
    op interface \
    ports { ShuffleConvs_1_Downs_26_address0 { O 9 vector } ShuffleConvs_1_Downs_26_ce0 { O 1 bit } ShuffleConvs_1_Downs_26_we0 { O 1 bit } ShuffleConvs_1_Downs_26_d0 { O 8 vector } ShuffleConvs_1_Downs_26_q0 { I 8 vector } ShuffleConvs_1_Downs_26_address1 { O 9 vector } ShuffleConvs_1_Downs_26_ce1 { O 1 bit } ShuffleConvs_1_Downs_26_we1 { O 1 bit } ShuffleConvs_1_Downs_26_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_1_Downs_26'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 316 \
    name ShuffleConvs_1_Downs_4 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename ShuffleConvs_1_Downs_4 \
    op interface \
    ports { ShuffleConvs_1_Downs_4_address0 { O 9 vector } ShuffleConvs_1_Downs_4_ce0 { O 1 bit } ShuffleConvs_1_Downs_4_we0 { O 1 bit } ShuffleConvs_1_Downs_4_d0 { O 8 vector } ShuffleConvs_1_Downs_4_q0 { I 8 vector } ShuffleConvs_1_Downs_4_address1 { O 9 vector } ShuffleConvs_1_Downs_4_ce1 { O 1 bit } ShuffleConvs_1_Downs_4_we1 { O 1 bit } ShuffleConvs_1_Downs_4_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_1_Downs_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 317 \
    name ShuffleConvs_1_Downs_25 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename ShuffleConvs_1_Downs_25 \
    op interface \
    ports { ShuffleConvs_1_Downs_25_address0 { O 9 vector } ShuffleConvs_1_Downs_25_ce0 { O 1 bit } ShuffleConvs_1_Downs_25_we0 { O 1 bit } ShuffleConvs_1_Downs_25_d0 { O 8 vector } ShuffleConvs_1_Downs_25_q0 { I 8 vector } ShuffleConvs_1_Downs_25_address1 { O 9 vector } ShuffleConvs_1_Downs_25_ce1 { O 1 bit } ShuffleConvs_1_Downs_25_we1 { O 1 bit } ShuffleConvs_1_Downs_25_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_1_Downs_25'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 318 \
    name ShuffleConvs_1_Downs_3 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename ShuffleConvs_1_Downs_3 \
    op interface \
    ports { ShuffleConvs_1_Downs_3_address0 { O 9 vector } ShuffleConvs_1_Downs_3_ce0 { O 1 bit } ShuffleConvs_1_Downs_3_we0 { O 1 bit } ShuffleConvs_1_Downs_3_d0 { O 8 vector } ShuffleConvs_1_Downs_3_q0 { I 8 vector } ShuffleConvs_1_Downs_3_address1 { O 9 vector } ShuffleConvs_1_Downs_3_ce1 { O 1 bit } ShuffleConvs_1_Downs_3_we1 { O 1 bit } ShuffleConvs_1_Downs_3_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_1_Downs_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 319 \
    name ShuffleConvs_1_Downs_23 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename ShuffleConvs_1_Downs_23 \
    op interface \
    ports { ShuffleConvs_1_Downs_23_address0 { O 9 vector } ShuffleConvs_1_Downs_23_ce0 { O 1 bit } ShuffleConvs_1_Downs_23_we0 { O 1 bit } ShuffleConvs_1_Downs_23_d0 { O 8 vector } ShuffleConvs_1_Downs_23_q0 { I 8 vector } ShuffleConvs_1_Downs_23_address1 { O 9 vector } ShuffleConvs_1_Downs_23_ce1 { O 1 bit } ShuffleConvs_1_Downs_23_we1 { O 1 bit } ShuffleConvs_1_Downs_23_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_1_Downs_23'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 320 \
    name ShuffleConvs_1_Downs_2 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename ShuffleConvs_1_Downs_2 \
    op interface \
    ports { ShuffleConvs_1_Downs_2_address0 { O 9 vector } ShuffleConvs_1_Downs_2_ce0 { O 1 bit } ShuffleConvs_1_Downs_2_we0 { O 1 bit } ShuffleConvs_1_Downs_2_d0 { O 8 vector } ShuffleConvs_1_Downs_2_q0 { I 8 vector } ShuffleConvs_1_Downs_2_address1 { O 9 vector } ShuffleConvs_1_Downs_2_ce1 { O 1 bit } ShuffleConvs_1_Downs_2_we1 { O 1 bit } ShuffleConvs_1_Downs_2_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_1_Downs_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 321 \
    name ShuffleConvs_1_Downs_22 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename ShuffleConvs_1_Downs_22 \
    op interface \
    ports { ShuffleConvs_1_Downs_22_address0 { O 9 vector } ShuffleConvs_1_Downs_22_ce0 { O 1 bit } ShuffleConvs_1_Downs_22_we0 { O 1 bit } ShuffleConvs_1_Downs_22_d0 { O 8 vector } ShuffleConvs_1_Downs_22_q0 { I 8 vector } ShuffleConvs_1_Downs_22_address1 { O 9 vector } ShuffleConvs_1_Downs_22_ce1 { O 1 bit } ShuffleConvs_1_Downs_22_we1 { O 1 bit } ShuffleConvs_1_Downs_22_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_1_Downs_22'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 322 \
    name ShuffleConvs_1_Downs_1 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename ShuffleConvs_1_Downs_1 \
    op interface \
    ports { ShuffleConvs_1_Downs_1_address0 { O 9 vector } ShuffleConvs_1_Downs_1_ce0 { O 1 bit } ShuffleConvs_1_Downs_1_we0 { O 1 bit } ShuffleConvs_1_Downs_1_d0 { O 8 vector } ShuffleConvs_1_Downs_1_q0 { I 8 vector } ShuffleConvs_1_Downs_1_address1 { O 9 vector } ShuffleConvs_1_Downs_1_ce1 { O 1 bit } ShuffleConvs_1_Downs_1_we1 { O 1 bit } ShuffleConvs_1_Downs_1_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_1_Downs_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 323 \
    name ShuffleConvs_1_Downs_21 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename ShuffleConvs_1_Downs_21 \
    op interface \
    ports { ShuffleConvs_1_Downs_21_address0 { O 9 vector } ShuffleConvs_1_Downs_21_ce0 { O 1 bit } ShuffleConvs_1_Downs_21_we0 { O 1 bit } ShuffleConvs_1_Downs_21_d0 { O 8 vector } ShuffleConvs_1_Downs_21_q0 { I 8 vector } ShuffleConvs_1_Downs_21_address1 { O 9 vector } ShuffleConvs_1_Downs_21_ce1 { O 1 bit } ShuffleConvs_1_Downs_21_we1 { O 1 bit } ShuffleConvs_1_Downs_21_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_1_Downs_21'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 324 \
    name ShuffleConvs_1_Downs \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename ShuffleConvs_1_Downs \
    op interface \
    ports { ShuffleConvs_1_Downs_address0 { O 9 vector } ShuffleConvs_1_Downs_ce0 { O 1 bit } ShuffleConvs_1_Downs_we0 { O 1 bit } ShuffleConvs_1_Downs_d0 { O 8 vector } ShuffleConvs_1_Downs_q0 { I 8 vector } ShuffleConvs_1_Downs_address1 { O 9 vector } ShuffleConvs_1_Downs_ce1 { O 1 bit } ShuffleConvs_1_Downs_we1 { O 1 bit } ShuffleConvs_1_Downs_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_1_Downs'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 325 \
    name ShuffleConvs_1_Downs_20 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename ShuffleConvs_1_Downs_20 \
    op interface \
    ports { ShuffleConvs_1_Downs_20_address0 { O 9 vector } ShuffleConvs_1_Downs_20_ce0 { O 1 bit } ShuffleConvs_1_Downs_20_we0 { O 1 bit } ShuffleConvs_1_Downs_20_d0 { O 8 vector } ShuffleConvs_1_Downs_20_q0 { I 8 vector } ShuffleConvs_1_Downs_20_address1 { O 9 vector } ShuffleConvs_1_Downs_20_ce1 { O 1 bit } ShuffleConvs_1_Downs_20_we1 { O 1 bit } ShuffleConvs_1_Downs_20_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_1_Downs_20'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 326 \
    name ShuffleConvs_1_Downs_45 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename ShuffleConvs_1_Downs_45 \
    op interface \
    ports { ShuffleConvs_1_Downs_45_address0 { O 9 vector } ShuffleConvs_1_Downs_45_ce0 { O 1 bit } ShuffleConvs_1_Downs_45_we0 { O 1 bit } ShuffleConvs_1_Downs_45_d0 { O 8 vector } ShuffleConvs_1_Downs_45_q0 { I 8 vector } ShuffleConvs_1_Downs_45_address1 { O 9 vector } ShuffleConvs_1_Downs_45_ce1 { O 1 bit } ShuffleConvs_1_Downs_45_we1 { O 1 bit } ShuffleConvs_1_Downs_45_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_1_Downs_45'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 327 \
    name ShuffleConvs_1_Downs_19 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename ShuffleConvs_1_Downs_19 \
    op interface \
    ports { ShuffleConvs_1_Downs_19_address0 { O 9 vector } ShuffleConvs_1_Downs_19_ce0 { O 1 bit } ShuffleConvs_1_Downs_19_we0 { O 1 bit } ShuffleConvs_1_Downs_19_d0 { O 8 vector } ShuffleConvs_1_Downs_19_q0 { I 8 vector } ShuffleConvs_1_Downs_19_address1 { O 9 vector } ShuffleConvs_1_Downs_19_ce1 { O 1 bit } ShuffleConvs_1_Downs_19_we1 { O 1 bit } ShuffleConvs_1_Downs_19_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_1_Downs_19'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 328 \
    name ShuffleConvs_1_Downs_44 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename ShuffleConvs_1_Downs_44 \
    op interface \
    ports { ShuffleConvs_1_Downs_44_address0 { O 9 vector } ShuffleConvs_1_Downs_44_ce0 { O 1 bit } ShuffleConvs_1_Downs_44_we0 { O 1 bit } ShuffleConvs_1_Downs_44_d0 { O 8 vector } ShuffleConvs_1_Downs_44_q0 { I 8 vector } ShuffleConvs_1_Downs_44_address1 { O 9 vector } ShuffleConvs_1_Downs_44_ce1 { O 1 bit } ShuffleConvs_1_Downs_44_we1 { O 1 bit } ShuffleConvs_1_Downs_44_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_1_Downs_44'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 329 \
    name ShuffleConvs_1_Downs_18 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename ShuffleConvs_1_Downs_18 \
    op interface \
    ports { ShuffleConvs_1_Downs_18_address0 { O 9 vector } ShuffleConvs_1_Downs_18_ce0 { O 1 bit } ShuffleConvs_1_Downs_18_we0 { O 1 bit } ShuffleConvs_1_Downs_18_d0 { O 8 vector } ShuffleConvs_1_Downs_18_q0 { I 8 vector } ShuffleConvs_1_Downs_18_address1 { O 9 vector } ShuffleConvs_1_Downs_18_ce1 { O 1 bit } ShuffleConvs_1_Downs_18_we1 { O 1 bit } ShuffleConvs_1_Downs_18_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_1_Downs_18'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 330 \
    name ShuffleConvs_1_Downs_43 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename ShuffleConvs_1_Downs_43 \
    op interface \
    ports { ShuffleConvs_1_Downs_43_address0 { O 9 vector } ShuffleConvs_1_Downs_43_ce0 { O 1 bit } ShuffleConvs_1_Downs_43_we0 { O 1 bit } ShuffleConvs_1_Downs_43_d0 { O 8 vector } ShuffleConvs_1_Downs_43_q0 { I 8 vector } ShuffleConvs_1_Downs_43_address1 { O 9 vector } ShuffleConvs_1_Downs_43_ce1 { O 1 bit } ShuffleConvs_1_Downs_43_we1 { O 1 bit } ShuffleConvs_1_Downs_43_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_1_Downs_43'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 331 \
    name ShuffleConvs_1_Downs_17 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename ShuffleConvs_1_Downs_17 \
    op interface \
    ports { ShuffleConvs_1_Downs_17_address0 { O 9 vector } ShuffleConvs_1_Downs_17_ce0 { O 1 bit } ShuffleConvs_1_Downs_17_we0 { O 1 bit } ShuffleConvs_1_Downs_17_d0 { O 8 vector } ShuffleConvs_1_Downs_17_q0 { I 8 vector } ShuffleConvs_1_Downs_17_address1 { O 9 vector } ShuffleConvs_1_Downs_17_ce1 { O 1 bit } ShuffleConvs_1_Downs_17_we1 { O 1 bit } ShuffleConvs_1_Downs_17_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_1_Downs_17'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 332 \
    name ShuffleConvs_1_Downs_42 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename ShuffleConvs_1_Downs_42 \
    op interface \
    ports { ShuffleConvs_1_Downs_42_address0 { O 9 vector } ShuffleConvs_1_Downs_42_ce0 { O 1 bit } ShuffleConvs_1_Downs_42_we0 { O 1 bit } ShuffleConvs_1_Downs_42_d0 { O 8 vector } ShuffleConvs_1_Downs_42_q0 { I 8 vector } ShuffleConvs_1_Downs_42_address1 { O 9 vector } ShuffleConvs_1_Downs_42_ce1 { O 1 bit } ShuffleConvs_1_Downs_42_we1 { O 1 bit } ShuffleConvs_1_Downs_42_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_1_Downs_42'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 333 \
    name ShuffleConvs_1_Downs_16 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename ShuffleConvs_1_Downs_16 \
    op interface \
    ports { ShuffleConvs_1_Downs_16_address0 { O 9 vector } ShuffleConvs_1_Downs_16_ce0 { O 1 bit } ShuffleConvs_1_Downs_16_we0 { O 1 bit } ShuffleConvs_1_Downs_16_d0 { O 8 vector } ShuffleConvs_1_Downs_16_q0 { I 8 vector } ShuffleConvs_1_Downs_16_address1 { O 9 vector } ShuffleConvs_1_Downs_16_ce1 { O 1 bit } ShuffleConvs_1_Downs_16_we1 { O 1 bit } ShuffleConvs_1_Downs_16_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_1_Downs_16'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 334 \
    name ShuffleConvs_1_Downs_41 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename ShuffleConvs_1_Downs_41 \
    op interface \
    ports { ShuffleConvs_1_Downs_41_address0 { O 9 vector } ShuffleConvs_1_Downs_41_ce0 { O 1 bit } ShuffleConvs_1_Downs_41_we0 { O 1 bit } ShuffleConvs_1_Downs_41_d0 { O 8 vector } ShuffleConvs_1_Downs_41_q0 { I 8 vector } ShuffleConvs_1_Downs_41_address1 { O 9 vector } ShuffleConvs_1_Downs_41_ce1 { O 1 bit } ShuffleConvs_1_Downs_41_we1 { O 1 bit } ShuffleConvs_1_Downs_41_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_1_Downs_41'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 335 \
    name ShuffleConvs_1_Downs_15 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename ShuffleConvs_1_Downs_15 \
    op interface \
    ports { ShuffleConvs_1_Downs_15_address0 { O 9 vector } ShuffleConvs_1_Downs_15_ce0 { O 1 bit } ShuffleConvs_1_Downs_15_we0 { O 1 bit } ShuffleConvs_1_Downs_15_d0 { O 8 vector } ShuffleConvs_1_Downs_15_q0 { I 8 vector } ShuffleConvs_1_Downs_15_address1 { O 9 vector } ShuffleConvs_1_Downs_15_ce1 { O 1 bit } ShuffleConvs_1_Downs_15_we1 { O 1 bit } ShuffleConvs_1_Downs_15_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_1_Downs_15'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 336 \
    name ShuffleConvs_1_Downs_40 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename ShuffleConvs_1_Downs_40 \
    op interface \
    ports { ShuffleConvs_1_Downs_40_address0 { O 9 vector } ShuffleConvs_1_Downs_40_ce0 { O 1 bit } ShuffleConvs_1_Downs_40_we0 { O 1 bit } ShuffleConvs_1_Downs_40_d0 { O 8 vector } ShuffleConvs_1_Downs_40_q0 { I 8 vector } ShuffleConvs_1_Downs_40_address1 { O 9 vector } ShuffleConvs_1_Downs_40_ce1 { O 1 bit } ShuffleConvs_1_Downs_40_we1 { O 1 bit } ShuffleConvs_1_Downs_40_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_1_Downs_40'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 337 \
    name ShuffleConvs_1_Downs_14 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename ShuffleConvs_1_Downs_14 \
    op interface \
    ports { ShuffleConvs_1_Downs_14_address0 { O 9 vector } ShuffleConvs_1_Downs_14_ce0 { O 1 bit } ShuffleConvs_1_Downs_14_we0 { O 1 bit } ShuffleConvs_1_Downs_14_d0 { O 8 vector } ShuffleConvs_1_Downs_14_q0 { I 8 vector } ShuffleConvs_1_Downs_14_address1 { O 9 vector } ShuffleConvs_1_Downs_14_ce1 { O 1 bit } ShuffleConvs_1_Downs_14_we1 { O 1 bit } ShuffleConvs_1_Downs_14_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_1_Downs_14'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 338 \
    name ShuffleConvs_1_Downs_39 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename ShuffleConvs_1_Downs_39 \
    op interface \
    ports { ShuffleConvs_1_Downs_39_address0 { O 9 vector } ShuffleConvs_1_Downs_39_ce0 { O 1 bit } ShuffleConvs_1_Downs_39_we0 { O 1 bit } ShuffleConvs_1_Downs_39_d0 { O 8 vector } ShuffleConvs_1_Downs_39_q0 { I 8 vector } ShuffleConvs_1_Downs_39_address1 { O 9 vector } ShuffleConvs_1_Downs_39_ce1 { O 1 bit } ShuffleConvs_1_Downs_39_we1 { O 1 bit } ShuffleConvs_1_Downs_39_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_1_Downs_39'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 339 \
    name ShuffleConvs_1_Downs_12 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename ShuffleConvs_1_Downs_12 \
    op interface \
    ports { ShuffleConvs_1_Downs_12_address0 { O 9 vector } ShuffleConvs_1_Downs_12_ce0 { O 1 bit } ShuffleConvs_1_Downs_12_we0 { O 1 bit } ShuffleConvs_1_Downs_12_d0 { O 8 vector } ShuffleConvs_1_Downs_12_q0 { I 8 vector } ShuffleConvs_1_Downs_12_address1 { O 9 vector } ShuffleConvs_1_Downs_12_ce1 { O 1 bit } ShuffleConvs_1_Downs_12_we1 { O 1 bit } ShuffleConvs_1_Downs_12_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_1_Downs_12'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 340 \
    name ShuffleConvs_1_Downs_38 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename ShuffleConvs_1_Downs_38 \
    op interface \
    ports { ShuffleConvs_1_Downs_38_address0 { O 9 vector } ShuffleConvs_1_Downs_38_ce0 { O 1 bit } ShuffleConvs_1_Downs_38_we0 { O 1 bit } ShuffleConvs_1_Downs_38_d0 { O 8 vector } ShuffleConvs_1_Downs_38_q0 { I 8 vector } ShuffleConvs_1_Downs_38_address1 { O 9 vector } ShuffleConvs_1_Downs_38_ce1 { O 1 bit } ShuffleConvs_1_Downs_38_we1 { O 1 bit } ShuffleConvs_1_Downs_38_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_1_Downs_38'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 341 \
    name ShuffleConvs_1_Downs_11 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename ShuffleConvs_1_Downs_11 \
    op interface \
    ports { ShuffleConvs_1_Downs_11_address0 { O 9 vector } ShuffleConvs_1_Downs_11_ce0 { O 1 bit } ShuffleConvs_1_Downs_11_we0 { O 1 bit } ShuffleConvs_1_Downs_11_d0 { O 8 vector } ShuffleConvs_1_Downs_11_q0 { I 8 vector } ShuffleConvs_1_Downs_11_address1 { O 9 vector } ShuffleConvs_1_Downs_11_ce1 { O 1 bit } ShuffleConvs_1_Downs_11_we1 { O 1 bit } ShuffleConvs_1_Downs_11_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_1_Downs_11'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 342 \
    name ShuffleConvs_1_Downs_37 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename ShuffleConvs_1_Downs_37 \
    op interface \
    ports { ShuffleConvs_1_Downs_37_address0 { O 9 vector } ShuffleConvs_1_Downs_37_ce0 { O 1 bit } ShuffleConvs_1_Downs_37_we0 { O 1 bit } ShuffleConvs_1_Downs_37_d0 { O 8 vector } ShuffleConvs_1_Downs_37_q0 { I 8 vector } ShuffleConvs_1_Downs_37_address1 { O 9 vector } ShuffleConvs_1_Downs_37_ce1 { O 1 bit } ShuffleConvs_1_Downs_37_we1 { O 1 bit } ShuffleConvs_1_Downs_37_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_1_Downs_37'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 343 \
    name ShuffleConvs_1_Downs_10 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename ShuffleConvs_1_Downs_10 \
    op interface \
    ports { ShuffleConvs_1_Downs_10_address0 { O 9 vector } ShuffleConvs_1_Downs_10_ce0 { O 1 bit } ShuffleConvs_1_Downs_10_we0 { O 1 bit } ShuffleConvs_1_Downs_10_d0 { O 8 vector } ShuffleConvs_1_Downs_10_q0 { I 8 vector } ShuffleConvs_1_Downs_10_address1 { O 9 vector } ShuffleConvs_1_Downs_10_ce1 { O 1 bit } ShuffleConvs_1_Downs_10_we1 { O 1 bit } ShuffleConvs_1_Downs_10_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_1_Downs_10'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 344 \
    name ShuffleConvs_1_Downs_36 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename ShuffleConvs_1_Downs_36 \
    op interface \
    ports { ShuffleConvs_1_Downs_36_address0 { O 9 vector } ShuffleConvs_1_Downs_36_ce0 { O 1 bit } ShuffleConvs_1_Downs_36_we0 { O 1 bit } ShuffleConvs_1_Downs_36_d0 { O 8 vector } ShuffleConvs_1_Downs_36_q0 { I 8 vector } ShuffleConvs_1_Downs_36_address1 { O 9 vector } ShuffleConvs_1_Downs_36_ce1 { O 1 bit } ShuffleConvs_1_Downs_36_we1 { O 1 bit } ShuffleConvs_1_Downs_36_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_1_Downs_36'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 345 \
    name ShuffleConvs_1_Downs_9 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename ShuffleConvs_1_Downs_9 \
    op interface \
    ports { ShuffleConvs_1_Downs_9_address0 { O 9 vector } ShuffleConvs_1_Downs_9_ce0 { O 1 bit } ShuffleConvs_1_Downs_9_we0 { O 1 bit } ShuffleConvs_1_Downs_9_d0 { O 8 vector } ShuffleConvs_1_Downs_9_q0 { I 8 vector } ShuffleConvs_1_Downs_9_address1 { O 9 vector } ShuffleConvs_1_Downs_9_ce1 { O 1 bit } ShuffleConvs_1_Downs_9_we1 { O 1 bit } ShuffleConvs_1_Downs_9_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_1_Downs_9'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 346 \
    name ShuffleConvs_1_Downs_34 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename ShuffleConvs_1_Downs_34 \
    op interface \
    ports { ShuffleConvs_1_Downs_34_address0 { O 9 vector } ShuffleConvs_1_Downs_34_ce0 { O 1 bit } ShuffleConvs_1_Downs_34_we0 { O 1 bit } ShuffleConvs_1_Downs_34_d0 { O 8 vector } ShuffleConvs_1_Downs_34_q0 { I 8 vector } ShuffleConvs_1_Downs_34_address1 { O 9 vector } ShuffleConvs_1_Downs_34_ce1 { O 1 bit } ShuffleConvs_1_Downs_34_we1 { O 1 bit } ShuffleConvs_1_Downs_34_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_1_Downs_34'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 347 \
    name ShuffleConvs_1_Downs_8 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename ShuffleConvs_1_Downs_8 \
    op interface \
    ports { ShuffleConvs_1_Downs_8_address0 { O 9 vector } ShuffleConvs_1_Downs_8_ce0 { O 1 bit } ShuffleConvs_1_Downs_8_we0 { O 1 bit } ShuffleConvs_1_Downs_8_d0 { O 8 vector } ShuffleConvs_1_Downs_8_q0 { I 8 vector } ShuffleConvs_1_Downs_8_address1 { O 9 vector } ShuffleConvs_1_Downs_8_ce1 { O 1 bit } ShuffleConvs_1_Downs_8_we1 { O 1 bit } ShuffleConvs_1_Downs_8_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_1_Downs_8'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 348 \
    name ShuffleConvs_1_Downs_33 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename ShuffleConvs_1_Downs_33 \
    op interface \
    ports { ShuffleConvs_1_Downs_33_address0 { O 9 vector } ShuffleConvs_1_Downs_33_ce0 { O 1 bit } ShuffleConvs_1_Downs_33_we0 { O 1 bit } ShuffleConvs_1_Downs_33_d0 { O 8 vector } ShuffleConvs_1_Downs_33_q0 { I 8 vector } ShuffleConvs_1_Downs_33_address1 { O 9 vector } ShuffleConvs_1_Downs_33_ce1 { O 1 bit } ShuffleConvs_1_Downs_33_we1 { O 1 bit } ShuffleConvs_1_Downs_33_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_1_Downs_33'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 349 \
    name ShuffleConvs_1_Downs_7 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename ShuffleConvs_1_Downs_7 \
    op interface \
    ports { ShuffleConvs_1_Downs_7_address0 { O 9 vector } ShuffleConvs_1_Downs_7_ce0 { O 1 bit } ShuffleConvs_1_Downs_7_we0 { O 1 bit } ShuffleConvs_1_Downs_7_d0 { O 8 vector } ShuffleConvs_1_Downs_7_q0 { I 8 vector } ShuffleConvs_1_Downs_7_address1 { O 9 vector } ShuffleConvs_1_Downs_7_ce1 { O 1 bit } ShuffleConvs_1_Downs_7_we1 { O 1 bit } ShuffleConvs_1_Downs_7_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_1_Downs_7'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 350 \
    name ShuffleConvs_1_Downs_32 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename ShuffleConvs_1_Downs_32 \
    op interface \
    ports { ShuffleConvs_1_Downs_32_address0 { O 9 vector } ShuffleConvs_1_Downs_32_ce0 { O 1 bit } ShuffleConvs_1_Downs_32_we0 { O 1 bit } ShuffleConvs_1_Downs_32_d0 { O 8 vector } ShuffleConvs_1_Downs_32_q0 { I 8 vector } ShuffleConvs_1_Downs_32_address1 { O 9 vector } ShuffleConvs_1_Downs_32_ce1 { O 1 bit } ShuffleConvs_1_Downs_32_we1 { O 1 bit } ShuffleConvs_1_Downs_32_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_1_Downs_32'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 351 \
    name ShuffleConvs_1_Downs_6 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename ShuffleConvs_1_Downs_6 \
    op interface \
    ports { ShuffleConvs_1_Downs_6_address0 { O 9 vector } ShuffleConvs_1_Downs_6_ce0 { O 1 bit } ShuffleConvs_1_Downs_6_we0 { O 1 bit } ShuffleConvs_1_Downs_6_d0 { O 8 vector } ShuffleConvs_1_Downs_6_q0 { I 8 vector } ShuffleConvs_1_Downs_6_address1 { O 9 vector } ShuffleConvs_1_Downs_6_ce1 { O 1 bit } ShuffleConvs_1_Downs_6_we1 { O 1 bit } ShuffleConvs_1_Downs_6_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_1_Downs_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 352 \
    name ShuffleConvs_1_Downs_31 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename ShuffleConvs_1_Downs_31 \
    op interface \
    ports { ShuffleConvs_1_Downs_31_address0 { O 9 vector } ShuffleConvs_1_Downs_31_ce0 { O 1 bit } ShuffleConvs_1_Downs_31_we0 { O 1 bit } ShuffleConvs_1_Downs_31_d0 { O 8 vector } ShuffleConvs_1_Downs_31_q0 { I 8 vector } ShuffleConvs_1_Downs_31_address1 { O 9 vector } ShuffleConvs_1_Downs_31_ce1 { O 1 bit } ShuffleConvs_1_Downs_31_we1 { O 1 bit } ShuffleConvs_1_Downs_31_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_1_Downs_31'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 353 \
    name ShuffleConvs_1_Downs_5 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename ShuffleConvs_1_Downs_5 \
    op interface \
    ports { ShuffleConvs_1_Downs_5_address0 { O 9 vector } ShuffleConvs_1_Downs_5_ce0 { O 1 bit } ShuffleConvs_1_Downs_5_we0 { O 1 bit } ShuffleConvs_1_Downs_5_d0 { O 8 vector } ShuffleConvs_1_Downs_5_q0 { I 8 vector } ShuffleConvs_1_Downs_5_address1 { O 9 vector } ShuffleConvs_1_Downs_5_ce1 { O 1 bit } ShuffleConvs_1_Downs_5_we1 { O 1 bit } ShuffleConvs_1_Downs_5_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_1_Downs_5'"
}
}


# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id -1 \
    name ap_ctrl \
    type ap_ctrl \
    reset_level 1 \
    sync_rst true \
    corename ap_ctrl \
    op interface \
    ports { ap_start { I 1 bit } ap_ready { O 1 bit } ap_done { O 1 bit } ap_idle { O 1 bit } } \
} "
}


# Adapter definition:
set PortName ap_clk
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_clock] == "cg_default_interface_gen_clock"} {
eval "cg_default_interface_gen_clock { \
    id -2 \
    name ${PortName} \
    reset_level 1 \
    sync_rst true \
    corename apif_ap_clk \
    data_wd ${DataWd} \
    op interface \
}"
} else {
puts "@W \[IMPL-113\] Cannot find bus interface model in the library. Ignored generation of bus interface for '${PortName}'"
}
}


# Adapter definition:
set PortName ap_rst
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_reset] == "cg_default_interface_gen_reset"} {
eval "cg_default_interface_gen_reset { \
    id -3 \
    name ${PortName} \
    reset_level 1 \
    sync_rst true \
    corename apif_ap_rst \
    data_wd ${DataWd} \
    op interface \
}"
} else {
puts "@W \[IMPL-114\] Cannot find bus interface model in the library. Ignored generation of bus interface for '${PortName}'"
}
}



# merge
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_end
    cg_default_interface_gen_bundle_end
    AESL_LIB_XILADAPTER::native_axis_end
}


