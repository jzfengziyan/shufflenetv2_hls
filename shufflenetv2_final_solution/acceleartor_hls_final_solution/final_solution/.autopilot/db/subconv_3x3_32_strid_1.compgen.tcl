# This script segment is generated automatically by AutoPilot

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
    id 90 \
    name weight_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_V \
    op interface \
    ports { weight_V_address0 { O 8 vector } weight_V_ce0 { O 1 bit } weight_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 91 \
    name bias_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bias_V \
    op interface \
    ports { bias_V_address0 { O 5 vector } bias_V_ce0 { O 1 bit } bias_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bias_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 92 \
    name output_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename output_V \
    op interface \
    ports { output_V_address0 { O 13 vector } output_V_ce0 { O 1 bit } output_V_we0 { O 1 bit } output_V_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'output_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 93 \
    name ShuffleConvs_0_Downs_23 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_0_Downs_23 \
    op interface \
    ports { ShuffleConvs_0_Downs_23_address0 { O 11 vector } ShuffleConvs_0_Downs_23_ce0 { O 1 bit } ShuffleConvs_0_Downs_23_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_0_Downs_23'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 94 \
    name ShuffleConvs_0_Downs_22 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_0_Downs_22 \
    op interface \
    ports { ShuffleConvs_0_Downs_22_address0 { O 11 vector } ShuffleConvs_0_Downs_22_ce0 { O 1 bit } ShuffleConvs_0_Downs_22_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_0_Downs_22'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 95 \
    name ShuffleConvs_0_Downs_11 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_0_Downs_11 \
    op interface \
    ports { ShuffleConvs_0_Downs_11_address0 { O 11 vector } ShuffleConvs_0_Downs_11_ce0 { O 1 bit } ShuffleConvs_0_Downs_11_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_0_Downs_11'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 96 \
    name ShuffleConvs_0_Downs_6 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_0_Downs_6 \
    op interface \
    ports { ShuffleConvs_0_Downs_6_address0 { O 11 vector } ShuffleConvs_0_Downs_6_ce0 { O 1 bit } ShuffleConvs_0_Downs_6_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_0_Downs_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 97 \
    name ShuffleConvs_0_Downs_5 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_0_Downs_5 \
    op interface \
    ports { ShuffleConvs_0_Downs_5_address0 { O 11 vector } ShuffleConvs_0_Downs_5_ce0 { O 1 bit } ShuffleConvs_0_Downs_5_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_0_Downs_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 98 \
    name ShuffleConvs_0_Downs_4 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_0_Downs_4 \
    op interface \
    ports { ShuffleConvs_0_Downs_4_address0 { O 11 vector } ShuffleConvs_0_Downs_4_ce0 { O 1 bit } ShuffleConvs_0_Downs_4_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_0_Downs_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 99 \
    name ShuffleConvs_0_Downs_3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_0_Downs_3 \
    op interface \
    ports { ShuffleConvs_0_Downs_3_address0 { O 11 vector } ShuffleConvs_0_Downs_3_ce0 { O 1 bit } ShuffleConvs_0_Downs_3_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_0_Downs_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 100 \
    name ShuffleConvs_0_Downs_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_0_Downs_2 \
    op interface \
    ports { ShuffleConvs_0_Downs_2_address0 { O 11 vector } ShuffleConvs_0_Downs_2_ce0 { O 1 bit } ShuffleConvs_0_Downs_2_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_0_Downs_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 101 \
    name ShuffleConvs_0_Downs_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_0_Downs_1 \
    op interface \
    ports { ShuffleConvs_0_Downs_1_address0 { O 11 vector } ShuffleConvs_0_Downs_1_ce0 { O 1 bit } ShuffleConvs_0_Downs_1_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_0_Downs_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 102 \
    name ShuffleConvs_0_Downs \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_0_Downs \
    op interface \
    ports { ShuffleConvs_0_Downs_address0 { O 11 vector } ShuffleConvs_0_Downs_ce0 { O 1 bit } ShuffleConvs_0_Downs_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_0_Downs'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 103 \
    name ShuffleConvs_0_Downs_21 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_0_Downs_21 \
    op interface \
    ports { ShuffleConvs_0_Downs_21_address0 { O 11 vector } ShuffleConvs_0_Downs_21_ce0 { O 1 bit } ShuffleConvs_0_Downs_21_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_0_Downs_21'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 104 \
    name ShuffleConvs_0_Downs_20 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_0_Downs_20 \
    op interface \
    ports { ShuffleConvs_0_Downs_20_address0 { O 11 vector } ShuffleConvs_0_Downs_20_ce0 { O 1 bit } ShuffleConvs_0_Downs_20_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_0_Downs_20'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 105 \
    name ShuffleConvs_0_Downs_19 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_0_Downs_19 \
    op interface \
    ports { ShuffleConvs_0_Downs_19_address0 { O 11 vector } ShuffleConvs_0_Downs_19_ce0 { O 1 bit } ShuffleConvs_0_Downs_19_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_0_Downs_19'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 106 \
    name ShuffleConvs_0_Downs_18 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_0_Downs_18 \
    op interface \
    ports { ShuffleConvs_0_Downs_18_address0 { O 11 vector } ShuffleConvs_0_Downs_18_ce0 { O 1 bit } ShuffleConvs_0_Downs_18_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_0_Downs_18'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 107 \
    name ShuffleConvs_0_Downs_17 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_0_Downs_17 \
    op interface \
    ports { ShuffleConvs_0_Downs_17_address0 { O 11 vector } ShuffleConvs_0_Downs_17_ce0 { O 1 bit } ShuffleConvs_0_Downs_17_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_0_Downs_17'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 108 \
    name ShuffleConvs_0_Downs_16 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_0_Downs_16 \
    op interface \
    ports { ShuffleConvs_0_Downs_16_address0 { O 11 vector } ShuffleConvs_0_Downs_16_ce0 { O 1 bit } ShuffleConvs_0_Downs_16_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_0_Downs_16'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 109 \
    name ShuffleConvs_0_Downs_15 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_0_Downs_15 \
    op interface \
    ports { ShuffleConvs_0_Downs_15_address0 { O 11 vector } ShuffleConvs_0_Downs_15_ce0 { O 1 bit } ShuffleConvs_0_Downs_15_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_0_Downs_15'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 110 \
    name ShuffleConvs_0_Downs_14 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_0_Downs_14 \
    op interface \
    ports { ShuffleConvs_0_Downs_14_address0 { O 11 vector } ShuffleConvs_0_Downs_14_ce0 { O 1 bit } ShuffleConvs_0_Downs_14_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_0_Downs_14'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 111 \
    name ShuffleConvs_0_Downs_13 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_0_Downs_13 \
    op interface \
    ports { ShuffleConvs_0_Downs_13_address0 { O 11 vector } ShuffleConvs_0_Downs_13_ce0 { O 1 bit } ShuffleConvs_0_Downs_13_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_0_Downs_13'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 112 \
    name ShuffleConvs_0_Downs_12 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_0_Downs_12 \
    op interface \
    ports { ShuffleConvs_0_Downs_12_address0 { O 11 vector } ShuffleConvs_0_Downs_12_ce0 { O 1 bit } ShuffleConvs_0_Downs_12_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_0_Downs_12'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 113 \
    name ShuffleConvs_0_Downs_10 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_0_Downs_10 \
    op interface \
    ports { ShuffleConvs_0_Downs_10_address0 { O 11 vector } ShuffleConvs_0_Downs_10_ce0 { O 1 bit } ShuffleConvs_0_Downs_10_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_0_Downs_10'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 114 \
    name ShuffleConvs_0_Downs_9 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_0_Downs_9 \
    op interface \
    ports { ShuffleConvs_0_Downs_9_address0 { O 11 vector } ShuffleConvs_0_Downs_9_ce0 { O 1 bit } ShuffleConvs_0_Downs_9_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_0_Downs_9'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 115 \
    name ShuffleConvs_0_Downs_8 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_0_Downs_8 \
    op interface \
    ports { ShuffleConvs_0_Downs_8_address0 { O 11 vector } ShuffleConvs_0_Downs_8_ce0 { O 1 bit } ShuffleConvs_0_Downs_8_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_0_Downs_8'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 116 \
    name ShuffleConvs_0_Downs_7 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_0_Downs_7 \
    op interface \
    ports { ShuffleConvs_0_Downs_7_address0 { O 11 vector } ShuffleConvs_0_Downs_7_ce0 { O 1 bit } ShuffleConvs_0_Downs_7_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_0_Downs_7'"
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


