# This script segment is generated automatically by AutoPilot

set id 544
set name ShuffleNetV2_uremFfa
set corename simcore_urem
set op urem
set stage_num 11
set max_latency -1
set registered_input 1
set in0_width 7
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
set corename DivnS
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


set id 545
set name ShuffleNetV2_uremGfk
set corename simcore_urem
set op urem
set stage_num 11
set max_latency -1
set registered_input 1
set in0_width 7
set in0_signed 0
set in1_width 6
set in1_signed 0
set out_width 7
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
set corename DivnS
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
    id 547 \
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
    id 548 \
    name weight_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_0_V \
    op interface \
    ports { weight_0_V_address0 { O 9 vector } weight_0_V_ce0 { O 1 bit } weight_0_V_q0 { I 8 vector } weight_0_V_address1 { O 9 vector } weight_0_V_ce1 { O 1 bit } weight_0_V_q1 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 549 \
    name weight_1_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_1_V \
    op interface \
    ports { weight_1_V_address0 { O 9 vector } weight_1_V_ce0 { O 1 bit } weight_1_V_q0 { I 8 vector } weight_1_V_address1 { O 9 vector } weight_1_V_ce1 { O 1 bit } weight_1_V_q1 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 550 \
    name weight_2_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_2_V \
    op interface \
    ports { weight_2_V_address0 { O 9 vector } weight_2_V_ce0 { O 1 bit } weight_2_V_q0 { I 8 vector } weight_2_V_address1 { O 9 vector } weight_2_V_ce1 { O 1 bit } weight_2_V_q1 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 551 \
    name weight_3_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_3_V \
    op interface \
    ports { weight_3_V_address0 { O 9 vector } weight_3_V_ce0 { O 1 bit } weight_3_V_q0 { I 8 vector } weight_3_V_address1 { O 9 vector } weight_3_V_ce1 { O 1 bit } weight_3_V_q1 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_3_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 552 \
    name weight_4_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_4_V \
    op interface \
    ports { weight_4_V_address0 { O 9 vector } weight_4_V_ce0 { O 1 bit } weight_4_V_q0 { I 8 vector } weight_4_V_address1 { O 9 vector } weight_4_V_ce1 { O 1 bit } weight_4_V_q1 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_4_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 553 \
    name weight_5_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_5_V \
    op interface \
    ports { weight_5_V_address0 { O 9 vector } weight_5_V_ce0 { O 1 bit } weight_5_V_q0 { I 8 vector } weight_5_V_address1 { O 9 vector } weight_5_V_ce1 { O 1 bit } weight_5_V_q1 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_5_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 554 \
    name weight_6_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_6_V \
    op interface \
    ports { weight_6_V_address0 { O 9 vector } weight_6_V_ce0 { O 1 bit } weight_6_V_q0 { I 8 vector } weight_6_V_address1 { O 9 vector } weight_6_V_ce1 { O 1 bit } weight_6_V_q1 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_6_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 555 \
    name weight_7_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_7_V \
    op interface \
    ports { weight_7_V_address0 { O 9 vector } weight_7_V_ce0 { O 1 bit } weight_7_V_q0 { I 8 vector } weight_7_V_address1 { O 9 vector } weight_7_V_ce1 { O 1 bit } weight_7_V_q1 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_7_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 556 \
    name weight_8_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_8_V \
    op interface \
    ports { weight_8_V_address0 { O 9 vector } weight_8_V_ce0 { O 1 bit } weight_8_V_q0 { I 8 vector } weight_8_V_address1 { O 9 vector } weight_8_V_ce1 { O 1 bit } weight_8_V_q1 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_8_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 557 \
    name weight_9_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_9_V \
    op interface \
    ports { weight_9_V_address0 { O 9 vector } weight_9_V_ce0 { O 1 bit } weight_9_V_q0 { I 8 vector } weight_9_V_address1 { O 9 vector } weight_9_V_ce1 { O 1 bit } weight_9_V_q1 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_9_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 558 \
    name weight_10_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_10_V \
    op interface \
    ports { weight_10_V_address0 { O 9 vector } weight_10_V_ce0 { O 1 bit } weight_10_V_q0 { I 8 vector } weight_10_V_address1 { O 9 vector } weight_10_V_ce1 { O 1 bit } weight_10_V_q1 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_10_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 559 \
    name weight_11_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_11_V \
    op interface \
    ports { weight_11_V_address0 { O 9 vector } weight_11_V_ce0 { O 1 bit } weight_11_V_q0 { I 8 vector } weight_11_V_address1 { O 9 vector } weight_11_V_ce1 { O 1 bit } weight_11_V_q1 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_11_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 560 \
    name weight_12_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_12_V \
    op interface \
    ports { weight_12_V_address0 { O 9 vector } weight_12_V_ce0 { O 1 bit } weight_12_V_q0 { I 8 vector } weight_12_V_address1 { O 9 vector } weight_12_V_ce1 { O 1 bit } weight_12_V_q1 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_12_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 561 \
    name weight_13_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_13_V \
    op interface \
    ports { weight_13_V_address0 { O 9 vector } weight_13_V_ce0 { O 1 bit } weight_13_V_q0 { I 8 vector } weight_13_V_address1 { O 9 vector } weight_13_V_ce1 { O 1 bit } weight_13_V_q1 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_13_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 562 \
    name weight_14_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_14_V \
    op interface \
    ports { weight_14_V_address0 { O 9 vector } weight_14_V_ce0 { O 1 bit } weight_14_V_q0 { I 8 vector } weight_14_V_address1 { O 9 vector } weight_14_V_ce1 { O 1 bit } weight_14_V_q1 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_14_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 563 \
    name weight_15_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_15_V \
    op interface \
    ports { weight_15_V_address0 { O 9 vector } weight_15_V_ce0 { O 1 bit } weight_15_V_q0 { I 8 vector } weight_15_V_address1 { O 9 vector } weight_15_V_ce1 { O 1 bit } weight_15_V_q1 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_15_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 564 \
    name weight_16_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_16_V \
    op interface \
    ports { weight_16_V_address0 { O 9 vector } weight_16_V_ce0 { O 1 bit } weight_16_V_q0 { I 8 vector } weight_16_V_address1 { O 9 vector } weight_16_V_ce1 { O 1 bit } weight_16_V_q1 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_16_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 565 \
    name weight_17_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_17_V \
    op interface \
    ports { weight_17_V_address0 { O 9 vector } weight_17_V_ce0 { O 1 bit } weight_17_V_q0 { I 8 vector } weight_17_V_address1 { O 9 vector } weight_17_V_ce1 { O 1 bit } weight_17_V_q1 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_17_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 566 \
    name weight_18_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_18_V \
    op interface \
    ports { weight_18_V_address0 { O 9 vector } weight_18_V_ce0 { O 1 bit } weight_18_V_q0 { I 8 vector } weight_18_V_address1 { O 9 vector } weight_18_V_ce1 { O 1 bit } weight_18_V_q1 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_18_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 567 \
    name weight_19_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_19_V \
    op interface \
    ports { weight_19_V_address0 { O 9 vector } weight_19_V_ce0 { O 1 bit } weight_19_V_q0 { I 8 vector } weight_19_V_address1 { O 9 vector } weight_19_V_ce1 { O 1 bit } weight_19_V_q1 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_19_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 568 \
    name weight_20_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_20_V \
    op interface \
    ports { weight_20_V_address0 { O 9 vector } weight_20_V_ce0 { O 1 bit } weight_20_V_q0 { I 8 vector } weight_20_V_address1 { O 9 vector } weight_20_V_ce1 { O 1 bit } weight_20_V_q1 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_20_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 569 \
    name weight_21_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_21_V \
    op interface \
    ports { weight_21_V_address0 { O 9 vector } weight_21_V_ce0 { O 1 bit } weight_21_V_q0 { I 8 vector } weight_21_V_address1 { O 9 vector } weight_21_V_ce1 { O 1 bit } weight_21_V_q1 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_21_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 570 \
    name weight_22_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_22_V \
    op interface \
    ports { weight_22_V_address0 { O 9 vector } weight_22_V_ce0 { O 1 bit } weight_22_V_q0 { I 8 vector } weight_22_V_address1 { O 9 vector } weight_22_V_ce1 { O 1 bit } weight_22_V_q1 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_22_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 571 \
    name weight_23_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_23_V \
    op interface \
    ports { weight_23_V_address0 { O 9 vector } weight_23_V_ce0 { O 1 bit } weight_23_V_q0 { I 8 vector } weight_23_V_address1 { O 9 vector } weight_23_V_ce1 { O 1 bit } weight_23_V_q1 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_23_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 572 \
    name bias_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bias_V \
    op interface \
    ports { bias_V_address0 { O 7 vector } bias_V_ce0 { O 1 bit } bias_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bias_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 573 \
    name ShuffleConvs_2_Downs_23 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename ShuffleConvs_2_Downs_23 \
    op interface \
    ports { ShuffleConvs_2_Downs_23_address0 { O 9 vector } ShuffleConvs_2_Downs_23_ce0 { O 1 bit } ShuffleConvs_2_Downs_23_we0 { O 1 bit } ShuffleConvs_2_Downs_23_d0 { O 8 vector } ShuffleConvs_2_Downs_23_q0 { I 8 vector } ShuffleConvs_2_Downs_23_address1 { O 9 vector } ShuffleConvs_2_Downs_23_ce1 { O 1 bit } ShuffleConvs_2_Downs_23_we1 { O 1 bit } ShuffleConvs_2_Downs_23_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_2_Downs_23'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 574 \
    name ShuffleConvs_2_Downs_22 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename ShuffleConvs_2_Downs_22 \
    op interface \
    ports { ShuffleConvs_2_Downs_22_address0 { O 9 vector } ShuffleConvs_2_Downs_22_ce0 { O 1 bit } ShuffleConvs_2_Downs_22_we0 { O 1 bit } ShuffleConvs_2_Downs_22_d0 { O 8 vector } ShuffleConvs_2_Downs_22_q0 { I 8 vector } ShuffleConvs_2_Downs_22_address1 { O 9 vector } ShuffleConvs_2_Downs_22_ce1 { O 1 bit } ShuffleConvs_2_Downs_22_we1 { O 1 bit } ShuffleConvs_2_Downs_22_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_2_Downs_22'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 575 \
    name ShuffleConvs_2_Downs_11 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename ShuffleConvs_2_Downs_11 \
    op interface \
    ports { ShuffleConvs_2_Downs_11_address0 { O 9 vector } ShuffleConvs_2_Downs_11_ce0 { O 1 bit } ShuffleConvs_2_Downs_11_we0 { O 1 bit } ShuffleConvs_2_Downs_11_d0 { O 8 vector } ShuffleConvs_2_Downs_11_q0 { I 8 vector } ShuffleConvs_2_Downs_11_address1 { O 9 vector } ShuffleConvs_2_Downs_11_ce1 { O 1 bit } ShuffleConvs_2_Downs_11_we1 { O 1 bit } ShuffleConvs_2_Downs_11_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_2_Downs_11'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 576 \
    name ShuffleConvs_2_Downs_6 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename ShuffleConvs_2_Downs_6 \
    op interface \
    ports { ShuffleConvs_2_Downs_6_address0 { O 9 vector } ShuffleConvs_2_Downs_6_ce0 { O 1 bit } ShuffleConvs_2_Downs_6_we0 { O 1 bit } ShuffleConvs_2_Downs_6_d0 { O 8 vector } ShuffleConvs_2_Downs_6_q0 { I 8 vector } ShuffleConvs_2_Downs_6_address1 { O 9 vector } ShuffleConvs_2_Downs_6_ce1 { O 1 bit } ShuffleConvs_2_Downs_6_we1 { O 1 bit } ShuffleConvs_2_Downs_6_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_2_Downs_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 577 \
    name ShuffleConvs_2_Downs_5 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename ShuffleConvs_2_Downs_5 \
    op interface \
    ports { ShuffleConvs_2_Downs_5_address0 { O 9 vector } ShuffleConvs_2_Downs_5_ce0 { O 1 bit } ShuffleConvs_2_Downs_5_we0 { O 1 bit } ShuffleConvs_2_Downs_5_d0 { O 8 vector } ShuffleConvs_2_Downs_5_q0 { I 8 vector } ShuffleConvs_2_Downs_5_address1 { O 9 vector } ShuffleConvs_2_Downs_5_ce1 { O 1 bit } ShuffleConvs_2_Downs_5_we1 { O 1 bit } ShuffleConvs_2_Downs_5_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_2_Downs_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 578 \
    name ShuffleConvs_2_Downs_4 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename ShuffleConvs_2_Downs_4 \
    op interface \
    ports { ShuffleConvs_2_Downs_4_address0 { O 9 vector } ShuffleConvs_2_Downs_4_ce0 { O 1 bit } ShuffleConvs_2_Downs_4_we0 { O 1 bit } ShuffleConvs_2_Downs_4_d0 { O 8 vector } ShuffleConvs_2_Downs_4_q0 { I 8 vector } ShuffleConvs_2_Downs_4_address1 { O 9 vector } ShuffleConvs_2_Downs_4_ce1 { O 1 bit } ShuffleConvs_2_Downs_4_we1 { O 1 bit } ShuffleConvs_2_Downs_4_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_2_Downs_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 579 \
    name ShuffleConvs_2_Downs_3 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename ShuffleConvs_2_Downs_3 \
    op interface \
    ports { ShuffleConvs_2_Downs_3_address0 { O 9 vector } ShuffleConvs_2_Downs_3_ce0 { O 1 bit } ShuffleConvs_2_Downs_3_we0 { O 1 bit } ShuffleConvs_2_Downs_3_d0 { O 8 vector } ShuffleConvs_2_Downs_3_q0 { I 8 vector } ShuffleConvs_2_Downs_3_address1 { O 9 vector } ShuffleConvs_2_Downs_3_ce1 { O 1 bit } ShuffleConvs_2_Downs_3_we1 { O 1 bit } ShuffleConvs_2_Downs_3_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_2_Downs_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 580 \
    name ShuffleConvs_2_Downs_2 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename ShuffleConvs_2_Downs_2 \
    op interface \
    ports { ShuffleConvs_2_Downs_2_address0 { O 9 vector } ShuffleConvs_2_Downs_2_ce0 { O 1 bit } ShuffleConvs_2_Downs_2_we0 { O 1 bit } ShuffleConvs_2_Downs_2_d0 { O 8 vector } ShuffleConvs_2_Downs_2_q0 { I 8 vector } ShuffleConvs_2_Downs_2_address1 { O 9 vector } ShuffleConvs_2_Downs_2_ce1 { O 1 bit } ShuffleConvs_2_Downs_2_we1 { O 1 bit } ShuffleConvs_2_Downs_2_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_2_Downs_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 581 \
    name ShuffleConvs_2_Downs_1 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename ShuffleConvs_2_Downs_1 \
    op interface \
    ports { ShuffleConvs_2_Downs_1_address0 { O 9 vector } ShuffleConvs_2_Downs_1_ce0 { O 1 bit } ShuffleConvs_2_Downs_1_we0 { O 1 bit } ShuffleConvs_2_Downs_1_d0 { O 8 vector } ShuffleConvs_2_Downs_1_q0 { I 8 vector } ShuffleConvs_2_Downs_1_address1 { O 9 vector } ShuffleConvs_2_Downs_1_ce1 { O 1 bit } ShuffleConvs_2_Downs_1_we1 { O 1 bit } ShuffleConvs_2_Downs_1_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_2_Downs_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 582 \
    name ShuffleConvs_2_Downs \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename ShuffleConvs_2_Downs \
    op interface \
    ports { ShuffleConvs_2_Downs_address0 { O 9 vector } ShuffleConvs_2_Downs_ce0 { O 1 bit } ShuffleConvs_2_Downs_we0 { O 1 bit } ShuffleConvs_2_Downs_d0 { O 8 vector } ShuffleConvs_2_Downs_q0 { I 8 vector } ShuffleConvs_2_Downs_address1 { O 9 vector } ShuffleConvs_2_Downs_ce1 { O 1 bit } ShuffleConvs_2_Downs_we1 { O 1 bit } ShuffleConvs_2_Downs_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_2_Downs'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 583 \
    name ShuffleConvs_2_Downs_21 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename ShuffleConvs_2_Downs_21 \
    op interface \
    ports { ShuffleConvs_2_Downs_21_address0 { O 9 vector } ShuffleConvs_2_Downs_21_ce0 { O 1 bit } ShuffleConvs_2_Downs_21_we0 { O 1 bit } ShuffleConvs_2_Downs_21_d0 { O 8 vector } ShuffleConvs_2_Downs_21_q0 { I 8 vector } ShuffleConvs_2_Downs_21_address1 { O 9 vector } ShuffleConvs_2_Downs_21_ce1 { O 1 bit } ShuffleConvs_2_Downs_21_we1 { O 1 bit } ShuffleConvs_2_Downs_21_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_2_Downs_21'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 584 \
    name ShuffleConvs_2_Downs_20 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename ShuffleConvs_2_Downs_20 \
    op interface \
    ports { ShuffleConvs_2_Downs_20_address0 { O 9 vector } ShuffleConvs_2_Downs_20_ce0 { O 1 bit } ShuffleConvs_2_Downs_20_we0 { O 1 bit } ShuffleConvs_2_Downs_20_d0 { O 8 vector } ShuffleConvs_2_Downs_20_q0 { I 8 vector } ShuffleConvs_2_Downs_20_address1 { O 9 vector } ShuffleConvs_2_Downs_20_ce1 { O 1 bit } ShuffleConvs_2_Downs_20_we1 { O 1 bit } ShuffleConvs_2_Downs_20_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_2_Downs_20'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 585 \
    name ShuffleConvs_2_Downs_19 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename ShuffleConvs_2_Downs_19 \
    op interface \
    ports { ShuffleConvs_2_Downs_19_address0 { O 9 vector } ShuffleConvs_2_Downs_19_ce0 { O 1 bit } ShuffleConvs_2_Downs_19_we0 { O 1 bit } ShuffleConvs_2_Downs_19_d0 { O 8 vector } ShuffleConvs_2_Downs_19_q0 { I 8 vector } ShuffleConvs_2_Downs_19_address1 { O 9 vector } ShuffleConvs_2_Downs_19_ce1 { O 1 bit } ShuffleConvs_2_Downs_19_we1 { O 1 bit } ShuffleConvs_2_Downs_19_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_2_Downs_19'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 586 \
    name ShuffleConvs_2_Downs_18 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename ShuffleConvs_2_Downs_18 \
    op interface \
    ports { ShuffleConvs_2_Downs_18_address0 { O 9 vector } ShuffleConvs_2_Downs_18_ce0 { O 1 bit } ShuffleConvs_2_Downs_18_we0 { O 1 bit } ShuffleConvs_2_Downs_18_d0 { O 8 vector } ShuffleConvs_2_Downs_18_q0 { I 8 vector } ShuffleConvs_2_Downs_18_address1 { O 9 vector } ShuffleConvs_2_Downs_18_ce1 { O 1 bit } ShuffleConvs_2_Downs_18_we1 { O 1 bit } ShuffleConvs_2_Downs_18_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_2_Downs_18'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 587 \
    name ShuffleConvs_2_Downs_17 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename ShuffleConvs_2_Downs_17 \
    op interface \
    ports { ShuffleConvs_2_Downs_17_address0 { O 9 vector } ShuffleConvs_2_Downs_17_ce0 { O 1 bit } ShuffleConvs_2_Downs_17_we0 { O 1 bit } ShuffleConvs_2_Downs_17_d0 { O 8 vector } ShuffleConvs_2_Downs_17_q0 { I 8 vector } ShuffleConvs_2_Downs_17_address1 { O 9 vector } ShuffleConvs_2_Downs_17_ce1 { O 1 bit } ShuffleConvs_2_Downs_17_we1 { O 1 bit } ShuffleConvs_2_Downs_17_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_2_Downs_17'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 588 \
    name ShuffleConvs_2_Downs_16 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename ShuffleConvs_2_Downs_16 \
    op interface \
    ports { ShuffleConvs_2_Downs_16_address0 { O 9 vector } ShuffleConvs_2_Downs_16_ce0 { O 1 bit } ShuffleConvs_2_Downs_16_we0 { O 1 bit } ShuffleConvs_2_Downs_16_d0 { O 8 vector } ShuffleConvs_2_Downs_16_q0 { I 8 vector } ShuffleConvs_2_Downs_16_address1 { O 9 vector } ShuffleConvs_2_Downs_16_ce1 { O 1 bit } ShuffleConvs_2_Downs_16_we1 { O 1 bit } ShuffleConvs_2_Downs_16_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_2_Downs_16'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 589 \
    name ShuffleConvs_2_Downs_15 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename ShuffleConvs_2_Downs_15 \
    op interface \
    ports { ShuffleConvs_2_Downs_15_address0 { O 9 vector } ShuffleConvs_2_Downs_15_ce0 { O 1 bit } ShuffleConvs_2_Downs_15_we0 { O 1 bit } ShuffleConvs_2_Downs_15_d0 { O 8 vector } ShuffleConvs_2_Downs_15_q0 { I 8 vector } ShuffleConvs_2_Downs_15_address1 { O 9 vector } ShuffleConvs_2_Downs_15_ce1 { O 1 bit } ShuffleConvs_2_Downs_15_we1 { O 1 bit } ShuffleConvs_2_Downs_15_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_2_Downs_15'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 590 \
    name ShuffleConvs_2_Downs_14 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename ShuffleConvs_2_Downs_14 \
    op interface \
    ports { ShuffleConvs_2_Downs_14_address0 { O 9 vector } ShuffleConvs_2_Downs_14_ce0 { O 1 bit } ShuffleConvs_2_Downs_14_we0 { O 1 bit } ShuffleConvs_2_Downs_14_d0 { O 8 vector } ShuffleConvs_2_Downs_14_q0 { I 8 vector } ShuffleConvs_2_Downs_14_address1 { O 9 vector } ShuffleConvs_2_Downs_14_ce1 { O 1 bit } ShuffleConvs_2_Downs_14_we1 { O 1 bit } ShuffleConvs_2_Downs_14_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_2_Downs_14'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 591 \
    name ShuffleConvs_2_Downs_13 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename ShuffleConvs_2_Downs_13 \
    op interface \
    ports { ShuffleConvs_2_Downs_13_address0 { O 9 vector } ShuffleConvs_2_Downs_13_ce0 { O 1 bit } ShuffleConvs_2_Downs_13_we0 { O 1 bit } ShuffleConvs_2_Downs_13_d0 { O 8 vector } ShuffleConvs_2_Downs_13_q0 { I 8 vector } ShuffleConvs_2_Downs_13_address1 { O 9 vector } ShuffleConvs_2_Downs_13_ce1 { O 1 bit } ShuffleConvs_2_Downs_13_we1 { O 1 bit } ShuffleConvs_2_Downs_13_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_2_Downs_13'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 592 \
    name ShuffleConvs_2_Downs_12 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename ShuffleConvs_2_Downs_12 \
    op interface \
    ports { ShuffleConvs_2_Downs_12_address0 { O 9 vector } ShuffleConvs_2_Downs_12_ce0 { O 1 bit } ShuffleConvs_2_Downs_12_we0 { O 1 bit } ShuffleConvs_2_Downs_12_d0 { O 8 vector } ShuffleConvs_2_Downs_12_q0 { I 8 vector } ShuffleConvs_2_Downs_12_address1 { O 9 vector } ShuffleConvs_2_Downs_12_ce1 { O 1 bit } ShuffleConvs_2_Downs_12_we1 { O 1 bit } ShuffleConvs_2_Downs_12_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_2_Downs_12'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 593 \
    name ShuffleConvs_2_Downs_10 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename ShuffleConvs_2_Downs_10 \
    op interface \
    ports { ShuffleConvs_2_Downs_10_address0 { O 9 vector } ShuffleConvs_2_Downs_10_ce0 { O 1 bit } ShuffleConvs_2_Downs_10_we0 { O 1 bit } ShuffleConvs_2_Downs_10_d0 { O 8 vector } ShuffleConvs_2_Downs_10_q0 { I 8 vector } ShuffleConvs_2_Downs_10_address1 { O 9 vector } ShuffleConvs_2_Downs_10_ce1 { O 1 bit } ShuffleConvs_2_Downs_10_we1 { O 1 bit } ShuffleConvs_2_Downs_10_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_2_Downs_10'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 594 \
    name ShuffleConvs_2_Downs_9 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename ShuffleConvs_2_Downs_9 \
    op interface \
    ports { ShuffleConvs_2_Downs_9_address0 { O 9 vector } ShuffleConvs_2_Downs_9_ce0 { O 1 bit } ShuffleConvs_2_Downs_9_we0 { O 1 bit } ShuffleConvs_2_Downs_9_d0 { O 8 vector } ShuffleConvs_2_Downs_9_q0 { I 8 vector } ShuffleConvs_2_Downs_9_address1 { O 9 vector } ShuffleConvs_2_Downs_9_ce1 { O 1 bit } ShuffleConvs_2_Downs_9_we1 { O 1 bit } ShuffleConvs_2_Downs_9_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_2_Downs_9'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 595 \
    name ShuffleConvs_2_Downs_8 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename ShuffleConvs_2_Downs_8 \
    op interface \
    ports { ShuffleConvs_2_Downs_8_address0 { O 9 vector } ShuffleConvs_2_Downs_8_ce0 { O 1 bit } ShuffleConvs_2_Downs_8_we0 { O 1 bit } ShuffleConvs_2_Downs_8_d0 { O 8 vector } ShuffleConvs_2_Downs_8_q0 { I 8 vector } ShuffleConvs_2_Downs_8_address1 { O 9 vector } ShuffleConvs_2_Downs_8_ce1 { O 1 bit } ShuffleConvs_2_Downs_8_we1 { O 1 bit } ShuffleConvs_2_Downs_8_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_2_Downs_8'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 596 \
    name ShuffleConvs_2_Downs_7 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename ShuffleConvs_2_Downs_7 \
    op interface \
    ports { ShuffleConvs_2_Downs_7_address0 { O 9 vector } ShuffleConvs_2_Downs_7_ce0 { O 1 bit } ShuffleConvs_2_Downs_7_we0 { O 1 bit } ShuffleConvs_2_Downs_7_d0 { O 8 vector } ShuffleConvs_2_Downs_7_q0 { I 8 vector } ShuffleConvs_2_Downs_7_address1 { O 9 vector } ShuffleConvs_2_Downs_7_ce1 { O 1 bit } ShuffleConvs_2_Downs_7_we1 { O 1 bit } ShuffleConvs_2_Downs_7_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_2_Downs_7'"
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


