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
    id 380 \
    name input_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename input_V \
    op interface \
    ports { input_V_address0 { O 13 vector } input_V_ce0 { O 1 bit } input_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'input_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 381 \
    name weight_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_0_V \
    op interface \
    ports { weight_0_V_address0 { O 7 vector } weight_0_V_ce0 { O 1 bit } weight_0_V_q0 { I 8 vector } weight_0_V_address1 { O 7 vector } weight_0_V_ce1 { O 1 bit } weight_0_V_q1 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 382 \
    name weight_1_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_1_V \
    op interface \
    ports { weight_1_V_address0 { O 7 vector } weight_1_V_ce0 { O 1 bit } weight_1_V_q0 { I 8 vector } weight_1_V_address1 { O 7 vector } weight_1_V_ce1 { O 1 bit } weight_1_V_q1 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 383 \
    name weight_2_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_2_V \
    op interface \
    ports { weight_2_V_address0 { O 7 vector } weight_2_V_ce0 { O 1 bit } weight_2_V_q0 { I 8 vector } weight_2_V_address1 { O 7 vector } weight_2_V_ce1 { O 1 bit } weight_2_V_q1 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 384 \
    name weight_3_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_3_V \
    op interface \
    ports { weight_3_V_address0 { O 7 vector } weight_3_V_ce0 { O 1 bit } weight_3_V_q0 { I 8 vector } weight_3_V_address1 { O 7 vector } weight_3_V_ce1 { O 1 bit } weight_3_V_q1 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_3_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 385 \
    name weight_4_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_4_V \
    op interface \
    ports { weight_4_V_address0 { O 7 vector } weight_4_V_ce0 { O 1 bit } weight_4_V_q0 { I 8 vector } weight_4_V_address1 { O 7 vector } weight_4_V_ce1 { O 1 bit } weight_4_V_q1 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_4_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 386 \
    name weight_5_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_5_V \
    op interface \
    ports { weight_5_V_address0 { O 7 vector } weight_5_V_ce0 { O 1 bit } weight_5_V_q0 { I 8 vector } weight_5_V_address1 { O 7 vector } weight_5_V_ce1 { O 1 bit } weight_5_V_q1 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_5_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 387 \
    name weight_6_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_6_V \
    op interface \
    ports { weight_6_V_address0 { O 7 vector } weight_6_V_ce0 { O 1 bit } weight_6_V_q0 { I 8 vector } weight_6_V_address1 { O 7 vector } weight_6_V_ce1 { O 1 bit } weight_6_V_q1 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_6_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 388 \
    name weight_7_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_7_V \
    op interface \
    ports { weight_7_V_address0 { O 7 vector } weight_7_V_ce0 { O 1 bit } weight_7_V_q0 { I 8 vector } weight_7_V_address1 { O 7 vector } weight_7_V_ce1 { O 1 bit } weight_7_V_q1 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_7_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 389 \
    name weight_8_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_8_V \
    op interface \
    ports { weight_8_V_address0 { O 7 vector } weight_8_V_ce0 { O 1 bit } weight_8_V_q0 { I 8 vector } weight_8_V_address1 { O 7 vector } weight_8_V_ce1 { O 1 bit } weight_8_V_q1 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_8_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 390 \
    name weight_9_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_9_V \
    op interface \
    ports { weight_9_V_address0 { O 7 vector } weight_9_V_ce0 { O 1 bit } weight_9_V_q0 { I 8 vector } weight_9_V_address1 { O 7 vector } weight_9_V_ce1 { O 1 bit } weight_9_V_q1 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_9_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 391 \
    name weight_10_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_10_V \
    op interface \
    ports { weight_10_V_address0 { O 7 vector } weight_10_V_ce0 { O 1 bit } weight_10_V_q0 { I 8 vector } weight_10_V_address1 { O 7 vector } weight_10_V_ce1 { O 1 bit } weight_10_V_q1 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_10_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 392 \
    name weight_11_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_11_V \
    op interface \
    ports { weight_11_V_address0 { O 7 vector } weight_11_V_ce0 { O 1 bit } weight_11_V_q0 { I 8 vector } weight_11_V_address1 { O 7 vector } weight_11_V_ce1 { O 1 bit } weight_11_V_q1 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_11_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 393 \
    name weight_12_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_12_V \
    op interface \
    ports { weight_12_V_address0 { O 7 vector } weight_12_V_ce0 { O 1 bit } weight_12_V_q0 { I 8 vector } weight_12_V_address1 { O 7 vector } weight_12_V_ce1 { O 1 bit } weight_12_V_q1 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_12_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 394 \
    name weight_13_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_13_V \
    op interface \
    ports { weight_13_V_address0 { O 7 vector } weight_13_V_ce0 { O 1 bit } weight_13_V_q0 { I 8 vector } weight_13_V_address1 { O 7 vector } weight_13_V_ce1 { O 1 bit } weight_13_V_q1 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_13_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 395 \
    name weight_14_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_14_V \
    op interface \
    ports { weight_14_V_address0 { O 7 vector } weight_14_V_ce0 { O 1 bit } weight_14_V_q0 { I 8 vector } weight_14_V_address1 { O 7 vector } weight_14_V_ce1 { O 1 bit } weight_14_V_q1 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_14_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 396 \
    name weight_15_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_15_V \
    op interface \
    ports { weight_15_V_address0 { O 7 vector } weight_15_V_ce0 { O 1 bit } weight_15_V_q0 { I 8 vector } weight_15_V_address1 { O 7 vector } weight_15_V_ce1 { O 1 bit } weight_15_V_q1 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_15_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 397 \
    name weight_16_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_16_V \
    op interface \
    ports { weight_16_V_address0 { O 7 vector } weight_16_V_ce0 { O 1 bit } weight_16_V_q0 { I 8 vector } weight_16_V_address1 { O 7 vector } weight_16_V_ce1 { O 1 bit } weight_16_V_q1 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_16_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 398 \
    name weight_17_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_17_V \
    op interface \
    ports { weight_17_V_address0 { O 7 vector } weight_17_V_ce0 { O 1 bit } weight_17_V_q0 { I 8 vector } weight_17_V_address1 { O 7 vector } weight_17_V_ce1 { O 1 bit } weight_17_V_q1 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_17_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 399 \
    name weight_18_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_18_V \
    op interface \
    ports { weight_18_V_address0 { O 7 vector } weight_18_V_ce0 { O 1 bit } weight_18_V_q0 { I 8 vector } weight_18_V_address1 { O 7 vector } weight_18_V_ce1 { O 1 bit } weight_18_V_q1 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_18_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 400 \
    name weight_19_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_19_V \
    op interface \
    ports { weight_19_V_address0 { O 7 vector } weight_19_V_ce0 { O 1 bit } weight_19_V_q0 { I 8 vector } weight_19_V_address1 { O 7 vector } weight_19_V_ce1 { O 1 bit } weight_19_V_q1 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_19_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 401 \
    name weight_20_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_20_V \
    op interface \
    ports { weight_20_V_address0 { O 7 vector } weight_20_V_ce0 { O 1 bit } weight_20_V_q0 { I 8 vector } weight_20_V_address1 { O 7 vector } weight_20_V_ce1 { O 1 bit } weight_20_V_q1 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_20_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 402 \
    name weight_21_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_21_V \
    op interface \
    ports { weight_21_V_address0 { O 7 vector } weight_21_V_ce0 { O 1 bit } weight_21_V_q0 { I 8 vector } weight_21_V_address1 { O 7 vector } weight_21_V_ce1 { O 1 bit } weight_21_V_q1 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_21_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 403 \
    name weight_22_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_22_V \
    op interface \
    ports { weight_22_V_address0 { O 7 vector } weight_22_V_ce0 { O 1 bit } weight_22_V_q0 { I 8 vector } weight_22_V_address1 { O 7 vector } weight_22_V_ce1 { O 1 bit } weight_22_V_q1 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_22_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 404 \
    name weight_23_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_23_V \
    op interface \
    ports { weight_23_V_address0 { O 7 vector } weight_23_V_ce0 { O 1 bit } weight_23_V_q0 { I 8 vector } weight_23_V_address1 { O 7 vector } weight_23_V_ce1 { O 1 bit } weight_23_V_q1 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_23_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 405 \
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
    id 406 \
    name buffer1_1_48_8x8_p_V_24 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_48_8x8_p_V_24 \
    op interface \
    ports { buffer1_1_48_8x8_p_V_24_address0 { O 8 vector } buffer1_1_48_8x8_p_V_24_ce0 { O 1 bit } buffer1_1_48_8x8_p_V_24_we0 { O 1 bit } buffer1_1_48_8x8_p_V_24_d0 { O 8 vector } buffer1_1_48_8x8_p_V_24_q0 { I 8 vector } buffer1_1_48_8x8_p_V_24_address1 { O 8 vector } buffer1_1_48_8x8_p_V_24_ce1 { O 1 bit } buffer1_1_48_8x8_p_V_24_we1 { O 1 bit } buffer1_1_48_8x8_p_V_24_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_48_8x8_p_V_24'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 407 \
    name buffer1_1_48_8x8_p_V_1 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_48_8x8_p_V_1 \
    op interface \
    ports { buffer1_1_48_8x8_p_V_1_address0 { O 8 vector } buffer1_1_48_8x8_p_V_1_ce0 { O 1 bit } buffer1_1_48_8x8_p_V_1_we0 { O 1 bit } buffer1_1_48_8x8_p_V_1_d0 { O 8 vector } buffer1_1_48_8x8_p_V_1_q0 { I 8 vector } buffer1_1_48_8x8_p_V_1_address1 { O 8 vector } buffer1_1_48_8x8_p_V_1_ce1 { O 1 bit } buffer1_1_48_8x8_p_V_1_we1 { O 1 bit } buffer1_1_48_8x8_p_V_1_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_48_8x8_p_V_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 408 \
    name buffer1_1_48_8x8_p_V_2 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_48_8x8_p_V_2 \
    op interface \
    ports { buffer1_1_48_8x8_p_V_2_address0 { O 8 vector } buffer1_1_48_8x8_p_V_2_ce0 { O 1 bit } buffer1_1_48_8x8_p_V_2_we0 { O 1 bit } buffer1_1_48_8x8_p_V_2_d0 { O 8 vector } buffer1_1_48_8x8_p_V_2_q0 { I 8 vector } buffer1_1_48_8x8_p_V_2_address1 { O 8 vector } buffer1_1_48_8x8_p_V_2_ce1 { O 1 bit } buffer1_1_48_8x8_p_V_2_we1 { O 1 bit } buffer1_1_48_8x8_p_V_2_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_48_8x8_p_V_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 409 \
    name buffer1_1_48_8x8_p_V_3 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_48_8x8_p_V_3 \
    op interface \
    ports { buffer1_1_48_8x8_p_V_3_address0 { O 8 vector } buffer1_1_48_8x8_p_V_3_ce0 { O 1 bit } buffer1_1_48_8x8_p_V_3_we0 { O 1 bit } buffer1_1_48_8x8_p_V_3_d0 { O 8 vector } buffer1_1_48_8x8_p_V_3_q0 { I 8 vector } buffer1_1_48_8x8_p_V_3_address1 { O 8 vector } buffer1_1_48_8x8_p_V_3_ce1 { O 1 bit } buffer1_1_48_8x8_p_V_3_we1 { O 1 bit } buffer1_1_48_8x8_p_V_3_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_48_8x8_p_V_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 410 \
    name buffer1_1_48_8x8_p_V_4 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_48_8x8_p_V_4 \
    op interface \
    ports { buffer1_1_48_8x8_p_V_4_address0 { O 8 vector } buffer1_1_48_8x8_p_V_4_ce0 { O 1 bit } buffer1_1_48_8x8_p_V_4_we0 { O 1 bit } buffer1_1_48_8x8_p_V_4_d0 { O 8 vector } buffer1_1_48_8x8_p_V_4_q0 { I 8 vector } buffer1_1_48_8x8_p_V_4_address1 { O 8 vector } buffer1_1_48_8x8_p_V_4_ce1 { O 1 bit } buffer1_1_48_8x8_p_V_4_we1 { O 1 bit } buffer1_1_48_8x8_p_V_4_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_48_8x8_p_V_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 411 \
    name buffer1_1_48_8x8_p_V_5 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_48_8x8_p_V_5 \
    op interface \
    ports { buffer1_1_48_8x8_p_V_5_address0 { O 8 vector } buffer1_1_48_8x8_p_V_5_ce0 { O 1 bit } buffer1_1_48_8x8_p_V_5_we0 { O 1 bit } buffer1_1_48_8x8_p_V_5_d0 { O 8 vector } buffer1_1_48_8x8_p_V_5_q0 { I 8 vector } buffer1_1_48_8x8_p_V_5_address1 { O 8 vector } buffer1_1_48_8x8_p_V_5_ce1 { O 1 bit } buffer1_1_48_8x8_p_V_5_we1 { O 1 bit } buffer1_1_48_8x8_p_V_5_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_48_8x8_p_V_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 412 \
    name buffer1_1_48_8x8_p_V_6 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_48_8x8_p_V_6 \
    op interface \
    ports { buffer1_1_48_8x8_p_V_6_address0 { O 8 vector } buffer1_1_48_8x8_p_V_6_ce0 { O 1 bit } buffer1_1_48_8x8_p_V_6_we0 { O 1 bit } buffer1_1_48_8x8_p_V_6_d0 { O 8 vector } buffer1_1_48_8x8_p_V_6_q0 { I 8 vector } buffer1_1_48_8x8_p_V_6_address1 { O 8 vector } buffer1_1_48_8x8_p_V_6_ce1 { O 1 bit } buffer1_1_48_8x8_p_V_6_we1 { O 1 bit } buffer1_1_48_8x8_p_V_6_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_48_8x8_p_V_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 413 \
    name buffer1_1_48_8x8_p_V_7 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_48_8x8_p_V_7 \
    op interface \
    ports { buffer1_1_48_8x8_p_V_7_address0 { O 8 vector } buffer1_1_48_8x8_p_V_7_ce0 { O 1 bit } buffer1_1_48_8x8_p_V_7_we0 { O 1 bit } buffer1_1_48_8x8_p_V_7_d0 { O 8 vector } buffer1_1_48_8x8_p_V_7_q0 { I 8 vector } buffer1_1_48_8x8_p_V_7_address1 { O 8 vector } buffer1_1_48_8x8_p_V_7_ce1 { O 1 bit } buffer1_1_48_8x8_p_V_7_we1 { O 1 bit } buffer1_1_48_8x8_p_V_7_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_48_8x8_p_V_7'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 414 \
    name buffer1_1_48_8x8_p_V_8 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_48_8x8_p_V_8 \
    op interface \
    ports { buffer1_1_48_8x8_p_V_8_address0 { O 8 vector } buffer1_1_48_8x8_p_V_8_ce0 { O 1 bit } buffer1_1_48_8x8_p_V_8_we0 { O 1 bit } buffer1_1_48_8x8_p_V_8_d0 { O 8 vector } buffer1_1_48_8x8_p_V_8_q0 { I 8 vector } buffer1_1_48_8x8_p_V_8_address1 { O 8 vector } buffer1_1_48_8x8_p_V_8_ce1 { O 1 bit } buffer1_1_48_8x8_p_V_8_we1 { O 1 bit } buffer1_1_48_8x8_p_V_8_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_48_8x8_p_V_8'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 415 \
    name buffer1_1_48_8x8_p_V_9 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_48_8x8_p_V_9 \
    op interface \
    ports { buffer1_1_48_8x8_p_V_9_address0 { O 8 vector } buffer1_1_48_8x8_p_V_9_ce0 { O 1 bit } buffer1_1_48_8x8_p_V_9_we0 { O 1 bit } buffer1_1_48_8x8_p_V_9_d0 { O 8 vector } buffer1_1_48_8x8_p_V_9_q0 { I 8 vector } buffer1_1_48_8x8_p_V_9_address1 { O 8 vector } buffer1_1_48_8x8_p_V_9_ce1 { O 1 bit } buffer1_1_48_8x8_p_V_9_we1 { O 1 bit } buffer1_1_48_8x8_p_V_9_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_48_8x8_p_V_9'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 416 \
    name buffer1_1_48_8x8_p_V_10 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_48_8x8_p_V_10 \
    op interface \
    ports { buffer1_1_48_8x8_p_V_10_address0 { O 8 vector } buffer1_1_48_8x8_p_V_10_ce0 { O 1 bit } buffer1_1_48_8x8_p_V_10_we0 { O 1 bit } buffer1_1_48_8x8_p_V_10_d0 { O 8 vector } buffer1_1_48_8x8_p_V_10_q0 { I 8 vector } buffer1_1_48_8x8_p_V_10_address1 { O 8 vector } buffer1_1_48_8x8_p_V_10_ce1 { O 1 bit } buffer1_1_48_8x8_p_V_10_we1 { O 1 bit } buffer1_1_48_8x8_p_V_10_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_48_8x8_p_V_10'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 417 \
    name buffer1_1_48_8x8_p_V_11 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_48_8x8_p_V_11 \
    op interface \
    ports { buffer1_1_48_8x8_p_V_11_address0 { O 8 vector } buffer1_1_48_8x8_p_V_11_ce0 { O 1 bit } buffer1_1_48_8x8_p_V_11_we0 { O 1 bit } buffer1_1_48_8x8_p_V_11_d0 { O 8 vector } buffer1_1_48_8x8_p_V_11_q0 { I 8 vector } buffer1_1_48_8x8_p_V_11_address1 { O 8 vector } buffer1_1_48_8x8_p_V_11_ce1 { O 1 bit } buffer1_1_48_8x8_p_V_11_we1 { O 1 bit } buffer1_1_48_8x8_p_V_11_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_48_8x8_p_V_11'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 418 \
    name buffer1_1_48_8x8_p_V_12 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_48_8x8_p_V_12 \
    op interface \
    ports { buffer1_1_48_8x8_p_V_12_address0 { O 8 vector } buffer1_1_48_8x8_p_V_12_ce0 { O 1 bit } buffer1_1_48_8x8_p_V_12_we0 { O 1 bit } buffer1_1_48_8x8_p_V_12_d0 { O 8 vector } buffer1_1_48_8x8_p_V_12_q0 { I 8 vector } buffer1_1_48_8x8_p_V_12_address1 { O 8 vector } buffer1_1_48_8x8_p_V_12_ce1 { O 1 bit } buffer1_1_48_8x8_p_V_12_we1 { O 1 bit } buffer1_1_48_8x8_p_V_12_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_48_8x8_p_V_12'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 419 \
    name buffer1_1_48_8x8_p_V_13 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_48_8x8_p_V_13 \
    op interface \
    ports { buffer1_1_48_8x8_p_V_13_address0 { O 8 vector } buffer1_1_48_8x8_p_V_13_ce0 { O 1 bit } buffer1_1_48_8x8_p_V_13_we0 { O 1 bit } buffer1_1_48_8x8_p_V_13_d0 { O 8 vector } buffer1_1_48_8x8_p_V_13_q0 { I 8 vector } buffer1_1_48_8x8_p_V_13_address1 { O 8 vector } buffer1_1_48_8x8_p_V_13_ce1 { O 1 bit } buffer1_1_48_8x8_p_V_13_we1 { O 1 bit } buffer1_1_48_8x8_p_V_13_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_48_8x8_p_V_13'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 420 \
    name buffer1_1_48_8x8_p_V_14 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_48_8x8_p_V_14 \
    op interface \
    ports { buffer1_1_48_8x8_p_V_14_address0 { O 8 vector } buffer1_1_48_8x8_p_V_14_ce0 { O 1 bit } buffer1_1_48_8x8_p_V_14_we0 { O 1 bit } buffer1_1_48_8x8_p_V_14_d0 { O 8 vector } buffer1_1_48_8x8_p_V_14_q0 { I 8 vector } buffer1_1_48_8x8_p_V_14_address1 { O 8 vector } buffer1_1_48_8x8_p_V_14_ce1 { O 1 bit } buffer1_1_48_8x8_p_V_14_we1 { O 1 bit } buffer1_1_48_8x8_p_V_14_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_48_8x8_p_V_14'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 421 \
    name buffer1_1_48_8x8_p_V_15 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_48_8x8_p_V_15 \
    op interface \
    ports { buffer1_1_48_8x8_p_V_15_address0 { O 8 vector } buffer1_1_48_8x8_p_V_15_ce0 { O 1 bit } buffer1_1_48_8x8_p_V_15_we0 { O 1 bit } buffer1_1_48_8x8_p_V_15_d0 { O 8 vector } buffer1_1_48_8x8_p_V_15_q0 { I 8 vector } buffer1_1_48_8x8_p_V_15_address1 { O 8 vector } buffer1_1_48_8x8_p_V_15_ce1 { O 1 bit } buffer1_1_48_8x8_p_V_15_we1 { O 1 bit } buffer1_1_48_8x8_p_V_15_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_48_8x8_p_V_15'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 422 \
    name buffer1_1_48_8x8_p_V_16 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_48_8x8_p_V_16 \
    op interface \
    ports { buffer1_1_48_8x8_p_V_16_address0 { O 8 vector } buffer1_1_48_8x8_p_V_16_ce0 { O 1 bit } buffer1_1_48_8x8_p_V_16_we0 { O 1 bit } buffer1_1_48_8x8_p_V_16_d0 { O 8 vector } buffer1_1_48_8x8_p_V_16_q0 { I 8 vector } buffer1_1_48_8x8_p_V_16_address1 { O 8 vector } buffer1_1_48_8x8_p_V_16_ce1 { O 1 bit } buffer1_1_48_8x8_p_V_16_we1 { O 1 bit } buffer1_1_48_8x8_p_V_16_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_48_8x8_p_V_16'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 423 \
    name buffer1_1_48_8x8_p_V_17 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_48_8x8_p_V_17 \
    op interface \
    ports { buffer1_1_48_8x8_p_V_17_address0 { O 8 vector } buffer1_1_48_8x8_p_V_17_ce0 { O 1 bit } buffer1_1_48_8x8_p_V_17_we0 { O 1 bit } buffer1_1_48_8x8_p_V_17_d0 { O 8 vector } buffer1_1_48_8x8_p_V_17_q0 { I 8 vector } buffer1_1_48_8x8_p_V_17_address1 { O 8 vector } buffer1_1_48_8x8_p_V_17_ce1 { O 1 bit } buffer1_1_48_8x8_p_V_17_we1 { O 1 bit } buffer1_1_48_8x8_p_V_17_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_48_8x8_p_V_17'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 424 \
    name buffer1_1_48_8x8_p_V_18 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_48_8x8_p_V_18 \
    op interface \
    ports { buffer1_1_48_8x8_p_V_18_address0 { O 8 vector } buffer1_1_48_8x8_p_V_18_ce0 { O 1 bit } buffer1_1_48_8x8_p_V_18_we0 { O 1 bit } buffer1_1_48_8x8_p_V_18_d0 { O 8 vector } buffer1_1_48_8x8_p_V_18_q0 { I 8 vector } buffer1_1_48_8x8_p_V_18_address1 { O 8 vector } buffer1_1_48_8x8_p_V_18_ce1 { O 1 bit } buffer1_1_48_8x8_p_V_18_we1 { O 1 bit } buffer1_1_48_8x8_p_V_18_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_48_8x8_p_V_18'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 425 \
    name buffer1_1_48_8x8_p_V_19 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_48_8x8_p_V_19 \
    op interface \
    ports { buffer1_1_48_8x8_p_V_19_address0 { O 8 vector } buffer1_1_48_8x8_p_V_19_ce0 { O 1 bit } buffer1_1_48_8x8_p_V_19_we0 { O 1 bit } buffer1_1_48_8x8_p_V_19_d0 { O 8 vector } buffer1_1_48_8x8_p_V_19_q0 { I 8 vector } buffer1_1_48_8x8_p_V_19_address1 { O 8 vector } buffer1_1_48_8x8_p_V_19_ce1 { O 1 bit } buffer1_1_48_8x8_p_V_19_we1 { O 1 bit } buffer1_1_48_8x8_p_V_19_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_48_8x8_p_V_19'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 426 \
    name buffer1_1_48_8x8_p_V_20 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_48_8x8_p_V_20 \
    op interface \
    ports { buffer1_1_48_8x8_p_V_20_address0 { O 8 vector } buffer1_1_48_8x8_p_V_20_ce0 { O 1 bit } buffer1_1_48_8x8_p_V_20_we0 { O 1 bit } buffer1_1_48_8x8_p_V_20_d0 { O 8 vector } buffer1_1_48_8x8_p_V_20_q0 { I 8 vector } buffer1_1_48_8x8_p_V_20_address1 { O 8 vector } buffer1_1_48_8x8_p_V_20_ce1 { O 1 bit } buffer1_1_48_8x8_p_V_20_we1 { O 1 bit } buffer1_1_48_8x8_p_V_20_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_48_8x8_p_V_20'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 427 \
    name buffer1_1_48_8x8_p_V_21 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_48_8x8_p_V_21 \
    op interface \
    ports { buffer1_1_48_8x8_p_V_21_address0 { O 8 vector } buffer1_1_48_8x8_p_V_21_ce0 { O 1 bit } buffer1_1_48_8x8_p_V_21_we0 { O 1 bit } buffer1_1_48_8x8_p_V_21_d0 { O 8 vector } buffer1_1_48_8x8_p_V_21_q0 { I 8 vector } buffer1_1_48_8x8_p_V_21_address1 { O 8 vector } buffer1_1_48_8x8_p_V_21_ce1 { O 1 bit } buffer1_1_48_8x8_p_V_21_we1 { O 1 bit } buffer1_1_48_8x8_p_V_21_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_48_8x8_p_V_21'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 428 \
    name buffer1_1_48_8x8_p_V_22 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_48_8x8_p_V_22 \
    op interface \
    ports { buffer1_1_48_8x8_p_V_22_address0 { O 8 vector } buffer1_1_48_8x8_p_V_22_ce0 { O 1 bit } buffer1_1_48_8x8_p_V_22_we0 { O 1 bit } buffer1_1_48_8x8_p_V_22_d0 { O 8 vector } buffer1_1_48_8x8_p_V_22_q0 { I 8 vector } buffer1_1_48_8x8_p_V_22_address1 { O 8 vector } buffer1_1_48_8x8_p_V_22_ce1 { O 1 bit } buffer1_1_48_8x8_p_V_22_we1 { O 1 bit } buffer1_1_48_8x8_p_V_22_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_48_8x8_p_V_22'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 429 \
    name buffer1_1_48_8x8_p_V_23 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_48_8x8_p_V_23 \
    op interface \
    ports { buffer1_1_48_8x8_p_V_23_address0 { O 8 vector } buffer1_1_48_8x8_p_V_23_ce0 { O 1 bit } buffer1_1_48_8x8_p_V_23_we0 { O 1 bit } buffer1_1_48_8x8_p_V_23_d0 { O 8 vector } buffer1_1_48_8x8_p_V_23_q0 { I 8 vector } buffer1_1_48_8x8_p_V_23_address1 { O 8 vector } buffer1_1_48_8x8_p_V_23_ce1 { O 1 bit } buffer1_1_48_8x8_p_V_23_we1 { O 1 bit } buffer1_1_48_8x8_p_V_23_d1 { O 8 vector } } \
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


