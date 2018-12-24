# This script segment is generated automatically by AutoPilot

set id 385
set name ShuffleNetV2_uremg8j
set corename simcore_urem_seq
set op urem
set stage_num 10
set max_latency -1
set registered_input 1
set in0_width 6
set in0_signed 0
set in1_width 6
set in1_signed 0
set out_width 6
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_urem] == "ap_gen_simcore_urem"} {
eval "ap_gen_simcore_urem { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    out_width ${out_width} \
}"
} else {
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_urem, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op urem
set corename DivnS_SEQ
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_div] == "::AESL_LIB_VIRTEX::xil_gen_div"} {
eval "::AESL_LIB_VIRTEX::xil_gen_div { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    out_width ${out_width} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_div, check your platform lib"
}
}


set id 386
set name ShuffleNetV2_mux_hbi
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
    id 387 \
    name output_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename output_V \
    op interface \
    ports { output_V_address0 { O 14 vector } output_V_ce0 { O 1 bit } output_V_we0 { O 1 bit } output_V_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'output_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 388 \
    name buffer1_1_48_8x8_p_V_24 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_48_8x8_p_V_24 \
    op interface \
    ports { buffer1_1_48_8x8_p_V_24_address0 { O 8 vector } buffer1_1_48_8x8_p_V_24_ce0 { O 1 bit } buffer1_1_48_8x8_p_V_24_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_48_8x8_p_V_24'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 389 \
    name buffer1_1_48_8x8_p_V_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_48_8x8_p_V_1 \
    op interface \
    ports { buffer1_1_48_8x8_p_V_1_address0 { O 8 vector } buffer1_1_48_8x8_p_V_1_ce0 { O 1 bit } buffer1_1_48_8x8_p_V_1_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_48_8x8_p_V_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 390 \
    name buffer1_1_48_8x8_p_V_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_48_8x8_p_V_2 \
    op interface \
    ports { buffer1_1_48_8x8_p_V_2_address0 { O 8 vector } buffer1_1_48_8x8_p_V_2_ce0 { O 1 bit } buffer1_1_48_8x8_p_V_2_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_48_8x8_p_V_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 391 \
    name buffer1_1_48_8x8_p_V_3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_48_8x8_p_V_3 \
    op interface \
    ports { buffer1_1_48_8x8_p_V_3_address0 { O 8 vector } buffer1_1_48_8x8_p_V_3_ce0 { O 1 bit } buffer1_1_48_8x8_p_V_3_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_48_8x8_p_V_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 392 \
    name buffer1_1_48_8x8_p_V_4 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_48_8x8_p_V_4 \
    op interface \
    ports { buffer1_1_48_8x8_p_V_4_address0 { O 8 vector } buffer1_1_48_8x8_p_V_4_ce0 { O 1 bit } buffer1_1_48_8x8_p_V_4_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_48_8x8_p_V_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 393 \
    name buffer1_1_48_8x8_p_V_5 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_48_8x8_p_V_5 \
    op interface \
    ports { buffer1_1_48_8x8_p_V_5_address0 { O 8 vector } buffer1_1_48_8x8_p_V_5_ce0 { O 1 bit } buffer1_1_48_8x8_p_V_5_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_48_8x8_p_V_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 394 \
    name buffer1_1_48_8x8_p_V_6 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_48_8x8_p_V_6 \
    op interface \
    ports { buffer1_1_48_8x8_p_V_6_address0 { O 8 vector } buffer1_1_48_8x8_p_V_6_ce0 { O 1 bit } buffer1_1_48_8x8_p_V_6_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_48_8x8_p_V_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 395 \
    name buffer1_1_48_8x8_p_V_7 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_48_8x8_p_V_7 \
    op interface \
    ports { buffer1_1_48_8x8_p_V_7_address0 { O 8 vector } buffer1_1_48_8x8_p_V_7_ce0 { O 1 bit } buffer1_1_48_8x8_p_V_7_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_48_8x8_p_V_7'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 396 \
    name buffer1_1_48_8x8_p_V_8 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_48_8x8_p_V_8 \
    op interface \
    ports { buffer1_1_48_8x8_p_V_8_address0 { O 8 vector } buffer1_1_48_8x8_p_V_8_ce0 { O 1 bit } buffer1_1_48_8x8_p_V_8_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_48_8x8_p_V_8'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 397 \
    name buffer1_1_48_8x8_p_V_9 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_48_8x8_p_V_9 \
    op interface \
    ports { buffer1_1_48_8x8_p_V_9_address0 { O 8 vector } buffer1_1_48_8x8_p_V_9_ce0 { O 1 bit } buffer1_1_48_8x8_p_V_9_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_48_8x8_p_V_9'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 398 \
    name buffer1_1_48_8x8_p_V_10 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_48_8x8_p_V_10 \
    op interface \
    ports { buffer1_1_48_8x8_p_V_10_address0 { O 8 vector } buffer1_1_48_8x8_p_V_10_ce0 { O 1 bit } buffer1_1_48_8x8_p_V_10_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_48_8x8_p_V_10'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 399 \
    name buffer1_1_48_8x8_p_V_11 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_48_8x8_p_V_11 \
    op interface \
    ports { buffer1_1_48_8x8_p_V_11_address0 { O 8 vector } buffer1_1_48_8x8_p_V_11_ce0 { O 1 bit } buffer1_1_48_8x8_p_V_11_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_48_8x8_p_V_11'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 400 \
    name buffer1_1_48_8x8_p_V_12 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_48_8x8_p_V_12 \
    op interface \
    ports { buffer1_1_48_8x8_p_V_12_address0 { O 8 vector } buffer1_1_48_8x8_p_V_12_ce0 { O 1 bit } buffer1_1_48_8x8_p_V_12_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_48_8x8_p_V_12'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 401 \
    name buffer1_1_48_8x8_p_V_13 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_48_8x8_p_V_13 \
    op interface \
    ports { buffer1_1_48_8x8_p_V_13_address0 { O 8 vector } buffer1_1_48_8x8_p_V_13_ce0 { O 1 bit } buffer1_1_48_8x8_p_V_13_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_48_8x8_p_V_13'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 402 \
    name buffer1_1_48_8x8_p_V_14 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_48_8x8_p_V_14 \
    op interface \
    ports { buffer1_1_48_8x8_p_V_14_address0 { O 8 vector } buffer1_1_48_8x8_p_V_14_ce0 { O 1 bit } buffer1_1_48_8x8_p_V_14_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_48_8x8_p_V_14'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 403 \
    name buffer1_1_48_8x8_p_V_15 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_48_8x8_p_V_15 \
    op interface \
    ports { buffer1_1_48_8x8_p_V_15_address0 { O 8 vector } buffer1_1_48_8x8_p_V_15_ce0 { O 1 bit } buffer1_1_48_8x8_p_V_15_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_48_8x8_p_V_15'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 404 \
    name buffer1_1_48_8x8_p_V_16 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_48_8x8_p_V_16 \
    op interface \
    ports { buffer1_1_48_8x8_p_V_16_address0 { O 8 vector } buffer1_1_48_8x8_p_V_16_ce0 { O 1 bit } buffer1_1_48_8x8_p_V_16_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_48_8x8_p_V_16'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 405 \
    name buffer1_1_48_8x8_p_V_17 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_48_8x8_p_V_17 \
    op interface \
    ports { buffer1_1_48_8x8_p_V_17_address0 { O 8 vector } buffer1_1_48_8x8_p_V_17_ce0 { O 1 bit } buffer1_1_48_8x8_p_V_17_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_48_8x8_p_V_17'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 406 \
    name buffer1_1_48_8x8_p_V_18 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_48_8x8_p_V_18 \
    op interface \
    ports { buffer1_1_48_8x8_p_V_18_address0 { O 8 vector } buffer1_1_48_8x8_p_V_18_ce0 { O 1 bit } buffer1_1_48_8x8_p_V_18_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_48_8x8_p_V_18'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 407 \
    name buffer1_1_48_8x8_p_V_19 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_48_8x8_p_V_19 \
    op interface \
    ports { buffer1_1_48_8x8_p_V_19_address0 { O 8 vector } buffer1_1_48_8x8_p_V_19_ce0 { O 1 bit } buffer1_1_48_8x8_p_V_19_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_48_8x8_p_V_19'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 408 \
    name buffer1_1_48_8x8_p_V_20 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_48_8x8_p_V_20 \
    op interface \
    ports { buffer1_1_48_8x8_p_V_20_address0 { O 8 vector } buffer1_1_48_8x8_p_V_20_ce0 { O 1 bit } buffer1_1_48_8x8_p_V_20_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_48_8x8_p_V_20'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 409 \
    name buffer1_1_48_8x8_p_V_21 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_48_8x8_p_V_21 \
    op interface \
    ports { buffer1_1_48_8x8_p_V_21_address0 { O 8 vector } buffer1_1_48_8x8_p_V_21_ce0 { O 1 bit } buffer1_1_48_8x8_p_V_21_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_48_8x8_p_V_21'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 410 \
    name buffer1_1_48_8x8_p_V_22 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_48_8x8_p_V_22 \
    op interface \
    ports { buffer1_1_48_8x8_p_V_22_address0 { O 8 vector } buffer1_1_48_8x8_p_V_22_ce0 { O 1 bit } buffer1_1_48_8x8_p_V_22_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_48_8x8_p_V_22'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 411 \
    name buffer1_1_48_8x8_p_V_23 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_48_8x8_p_V_23 \
    op interface \
    ports { buffer1_1_48_8x8_p_V_23_address0 { O 8 vector } buffer1_1_48_8x8_p_V_23_ce0 { O 1 bit } buffer1_1_48_8x8_p_V_23_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_48_8x8_p_V_23'"
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


