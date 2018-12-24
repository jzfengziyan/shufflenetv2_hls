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
    id 345 \
    name weight_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_V \
    op interface \
    ports { weight_V_address0 { O 9 vector } weight_V_ce0 { O 1 bit } weight_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 346 \
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
    id 347 \
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
    id 348 \
    name ShuffleConvs_1_Downs_23 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_1_Downs_23 \
    op interface \
    ports { ShuffleConvs_1_Downs_23_address0 { O 10 vector } ShuffleConvs_1_Downs_23_ce0 { O 1 bit } ShuffleConvs_1_Downs_23_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_1_Downs_23'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 349 \
    name ShuffleConvs_1_Downs_22 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_1_Downs_22 \
    op interface \
    ports { ShuffleConvs_1_Downs_22_address0 { O 10 vector } ShuffleConvs_1_Downs_22_ce0 { O 1 bit } ShuffleConvs_1_Downs_22_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_1_Downs_22'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 350 \
    name ShuffleConvs_1_Downs_11 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_1_Downs_11 \
    op interface \
    ports { ShuffleConvs_1_Downs_11_address0 { O 10 vector } ShuffleConvs_1_Downs_11_ce0 { O 1 bit } ShuffleConvs_1_Downs_11_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_1_Downs_11'"
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
    dir I \
    corename ShuffleConvs_1_Downs_6 \
    op interface \
    ports { ShuffleConvs_1_Downs_6_address0 { O 10 vector } ShuffleConvs_1_Downs_6_ce0 { O 1 bit } ShuffleConvs_1_Downs_6_q0 { I 8 vector } } \
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
    name ShuffleConvs_1_Downs_5 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_1_Downs_5 \
    op interface \
    ports { ShuffleConvs_1_Downs_5_address0 { O 10 vector } ShuffleConvs_1_Downs_5_ce0 { O 1 bit } ShuffleConvs_1_Downs_5_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_1_Downs_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 353 \
    name ShuffleConvs_1_Downs_4 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_1_Downs_4 \
    op interface \
    ports { ShuffleConvs_1_Downs_4_address0 { O 10 vector } ShuffleConvs_1_Downs_4_ce0 { O 1 bit } ShuffleConvs_1_Downs_4_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_1_Downs_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 354 \
    name ShuffleConvs_1_Downs_3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_1_Downs_3 \
    op interface \
    ports { ShuffleConvs_1_Downs_3_address0 { O 10 vector } ShuffleConvs_1_Downs_3_ce0 { O 1 bit } ShuffleConvs_1_Downs_3_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_1_Downs_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 355 \
    name ShuffleConvs_1_Downs_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_1_Downs_2 \
    op interface \
    ports { ShuffleConvs_1_Downs_2_address0 { O 10 vector } ShuffleConvs_1_Downs_2_ce0 { O 1 bit } ShuffleConvs_1_Downs_2_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_1_Downs_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 356 \
    name ShuffleConvs_1_Downs_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_1_Downs_1 \
    op interface \
    ports { ShuffleConvs_1_Downs_1_address0 { O 10 vector } ShuffleConvs_1_Downs_1_ce0 { O 1 bit } ShuffleConvs_1_Downs_1_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_1_Downs_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 357 \
    name ShuffleConvs_1_Downs \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_1_Downs \
    op interface \
    ports { ShuffleConvs_1_Downs_address0 { O 10 vector } ShuffleConvs_1_Downs_ce0 { O 1 bit } ShuffleConvs_1_Downs_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_1_Downs'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 358 \
    name ShuffleConvs_1_Downs_21 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_1_Downs_21 \
    op interface \
    ports { ShuffleConvs_1_Downs_21_address0 { O 10 vector } ShuffleConvs_1_Downs_21_ce0 { O 1 bit } ShuffleConvs_1_Downs_21_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_1_Downs_21'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 359 \
    name ShuffleConvs_1_Downs_20 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_1_Downs_20 \
    op interface \
    ports { ShuffleConvs_1_Downs_20_address0 { O 10 vector } ShuffleConvs_1_Downs_20_ce0 { O 1 bit } ShuffleConvs_1_Downs_20_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_1_Downs_20'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 360 \
    name ShuffleConvs_1_Downs_19 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_1_Downs_19 \
    op interface \
    ports { ShuffleConvs_1_Downs_19_address0 { O 10 vector } ShuffleConvs_1_Downs_19_ce0 { O 1 bit } ShuffleConvs_1_Downs_19_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_1_Downs_19'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 361 \
    name ShuffleConvs_1_Downs_18 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_1_Downs_18 \
    op interface \
    ports { ShuffleConvs_1_Downs_18_address0 { O 10 vector } ShuffleConvs_1_Downs_18_ce0 { O 1 bit } ShuffleConvs_1_Downs_18_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_1_Downs_18'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 362 \
    name ShuffleConvs_1_Downs_17 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_1_Downs_17 \
    op interface \
    ports { ShuffleConvs_1_Downs_17_address0 { O 10 vector } ShuffleConvs_1_Downs_17_ce0 { O 1 bit } ShuffleConvs_1_Downs_17_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_1_Downs_17'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 363 \
    name ShuffleConvs_1_Downs_16 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_1_Downs_16 \
    op interface \
    ports { ShuffleConvs_1_Downs_16_address0 { O 10 vector } ShuffleConvs_1_Downs_16_ce0 { O 1 bit } ShuffleConvs_1_Downs_16_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_1_Downs_16'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 364 \
    name ShuffleConvs_1_Downs_15 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_1_Downs_15 \
    op interface \
    ports { ShuffleConvs_1_Downs_15_address0 { O 10 vector } ShuffleConvs_1_Downs_15_ce0 { O 1 bit } ShuffleConvs_1_Downs_15_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_1_Downs_15'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 365 \
    name ShuffleConvs_1_Downs_14 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_1_Downs_14 \
    op interface \
    ports { ShuffleConvs_1_Downs_14_address0 { O 10 vector } ShuffleConvs_1_Downs_14_ce0 { O 1 bit } ShuffleConvs_1_Downs_14_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_1_Downs_14'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 366 \
    name ShuffleConvs_1_Downs_13 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_1_Downs_13 \
    op interface \
    ports { ShuffleConvs_1_Downs_13_address0 { O 10 vector } ShuffleConvs_1_Downs_13_ce0 { O 1 bit } ShuffleConvs_1_Downs_13_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_1_Downs_13'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 367 \
    name ShuffleConvs_1_Downs_12 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_1_Downs_12 \
    op interface \
    ports { ShuffleConvs_1_Downs_12_address0 { O 10 vector } ShuffleConvs_1_Downs_12_ce0 { O 1 bit } ShuffleConvs_1_Downs_12_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_1_Downs_12'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 368 \
    name ShuffleConvs_1_Downs_10 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_1_Downs_10 \
    op interface \
    ports { ShuffleConvs_1_Downs_10_address0 { O 10 vector } ShuffleConvs_1_Downs_10_ce0 { O 1 bit } ShuffleConvs_1_Downs_10_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_1_Downs_10'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 369 \
    name ShuffleConvs_1_Downs_9 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_1_Downs_9 \
    op interface \
    ports { ShuffleConvs_1_Downs_9_address0 { O 10 vector } ShuffleConvs_1_Downs_9_ce0 { O 1 bit } ShuffleConvs_1_Downs_9_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_1_Downs_9'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 370 \
    name ShuffleConvs_1_Downs_8 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_1_Downs_8 \
    op interface \
    ports { ShuffleConvs_1_Downs_8_address0 { O 10 vector } ShuffleConvs_1_Downs_8_ce0 { O 1 bit } ShuffleConvs_1_Downs_8_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_1_Downs_8'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 371 \
    name ShuffleConvs_1_Downs_7 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_1_Downs_7 \
    op interface \
    ports { ShuffleConvs_1_Downs_7_address0 { O 10 vector } ShuffleConvs_1_Downs_7_ce0 { O 1 bit } ShuffleConvs_1_Downs_7_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_1_Downs_7'"
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


