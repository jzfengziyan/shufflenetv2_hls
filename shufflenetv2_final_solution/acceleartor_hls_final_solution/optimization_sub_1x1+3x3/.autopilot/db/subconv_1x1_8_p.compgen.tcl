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
    id 408 \
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
    id 409 \
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
    id 410 \
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
    id 411 \
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
    id 412 \
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
    id 413 \
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
    id 414 \
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
    id 415 \
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
    id 416 \
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
    id 417 \
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
    id 418 \
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
    id 419 \
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
    id 420 \
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
    id 421 \
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
    id 422 \
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
    id 423 \
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
    id 424 \
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
    id 425 \
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
    id 426 \
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
    id 427 \
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
    id 428 \
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
    id 429 \
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
    id 430 \
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
    id 431 \
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
    id 432 \
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
    id 433 \
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
    id 434 \
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
    id 435 \
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
    id 436 \
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
    id 437 \
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
    id 438 \
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
    id 439 \
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
    id 440 \
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
    id 441 \
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
    id 442 \
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
    id 443 \
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
    id 444 \
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
    id 445 \
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
    id 446 \
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
    id 447 \
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
    id 448 \
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
    id 449 \
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
    id 450 \
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
    id 451 \
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
    id 452 \
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
    id 453 \
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
    id 454 \
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
    id 455 \
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
    id 456 \
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
    id 457 \
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
    id 458 \
    name buffer1_1_48_8x8_p_V_48 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_48_8x8_p_V_48 \
    op interface \
    ports { buffer1_1_48_8x8_p_V_48_address0 { O 7 vector } buffer1_1_48_8x8_p_V_48_ce0 { O 1 bit } buffer1_1_48_8x8_p_V_48_we0 { O 1 bit } buffer1_1_48_8x8_p_V_48_d0 { O 8 vector } buffer1_1_48_8x8_p_V_48_q0 { I 8 vector } buffer1_1_48_8x8_p_V_48_address1 { O 7 vector } buffer1_1_48_8x8_p_V_48_ce1 { O 1 bit } buffer1_1_48_8x8_p_V_48_we1 { O 1 bit } buffer1_1_48_8x8_p_V_48_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_48_8x8_p_V_48'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 459 \
    name buffer1_1_48_8x8_p_V_24 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_48_8x8_p_V_24 \
    op interface \
    ports { buffer1_1_48_8x8_p_V_24_address0 { O 7 vector } buffer1_1_48_8x8_p_V_24_ce0 { O 1 bit } buffer1_1_48_8x8_p_V_24_we0 { O 1 bit } buffer1_1_48_8x8_p_V_24_d0 { O 8 vector } buffer1_1_48_8x8_p_V_24_q0 { I 8 vector } buffer1_1_48_8x8_p_V_24_address1 { O 7 vector } buffer1_1_48_8x8_p_V_24_ce1 { O 1 bit } buffer1_1_48_8x8_p_V_24_we1 { O 1 bit } buffer1_1_48_8x8_p_V_24_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_48_8x8_p_V_24'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 460 \
    name buffer1_1_48_8x8_p_V_1 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_48_8x8_p_V_1 \
    op interface \
    ports { buffer1_1_48_8x8_p_V_1_address0 { O 7 vector } buffer1_1_48_8x8_p_V_1_ce0 { O 1 bit } buffer1_1_48_8x8_p_V_1_we0 { O 1 bit } buffer1_1_48_8x8_p_V_1_d0 { O 8 vector } buffer1_1_48_8x8_p_V_1_q0 { I 8 vector } buffer1_1_48_8x8_p_V_1_address1 { O 7 vector } buffer1_1_48_8x8_p_V_1_ce1 { O 1 bit } buffer1_1_48_8x8_p_V_1_we1 { O 1 bit } buffer1_1_48_8x8_p_V_1_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_48_8x8_p_V_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 461 \
    name buffer1_1_48_8x8_p_V_25 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_48_8x8_p_V_25 \
    op interface \
    ports { buffer1_1_48_8x8_p_V_25_address0 { O 7 vector } buffer1_1_48_8x8_p_V_25_ce0 { O 1 bit } buffer1_1_48_8x8_p_V_25_we0 { O 1 bit } buffer1_1_48_8x8_p_V_25_d0 { O 8 vector } buffer1_1_48_8x8_p_V_25_q0 { I 8 vector } buffer1_1_48_8x8_p_V_25_address1 { O 7 vector } buffer1_1_48_8x8_p_V_25_ce1 { O 1 bit } buffer1_1_48_8x8_p_V_25_we1 { O 1 bit } buffer1_1_48_8x8_p_V_25_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_48_8x8_p_V_25'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 462 \
    name buffer1_1_48_8x8_p_V_2 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_48_8x8_p_V_2 \
    op interface \
    ports { buffer1_1_48_8x8_p_V_2_address0 { O 7 vector } buffer1_1_48_8x8_p_V_2_ce0 { O 1 bit } buffer1_1_48_8x8_p_V_2_we0 { O 1 bit } buffer1_1_48_8x8_p_V_2_d0 { O 8 vector } buffer1_1_48_8x8_p_V_2_q0 { I 8 vector } buffer1_1_48_8x8_p_V_2_address1 { O 7 vector } buffer1_1_48_8x8_p_V_2_ce1 { O 1 bit } buffer1_1_48_8x8_p_V_2_we1 { O 1 bit } buffer1_1_48_8x8_p_V_2_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_48_8x8_p_V_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 463 \
    name buffer1_1_48_8x8_p_V_26 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_48_8x8_p_V_26 \
    op interface \
    ports { buffer1_1_48_8x8_p_V_26_address0 { O 7 vector } buffer1_1_48_8x8_p_V_26_ce0 { O 1 bit } buffer1_1_48_8x8_p_V_26_we0 { O 1 bit } buffer1_1_48_8x8_p_V_26_d0 { O 8 vector } buffer1_1_48_8x8_p_V_26_q0 { I 8 vector } buffer1_1_48_8x8_p_V_26_address1 { O 7 vector } buffer1_1_48_8x8_p_V_26_ce1 { O 1 bit } buffer1_1_48_8x8_p_V_26_we1 { O 1 bit } buffer1_1_48_8x8_p_V_26_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_48_8x8_p_V_26'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 464 \
    name buffer1_1_48_8x8_p_V_3 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_48_8x8_p_V_3 \
    op interface \
    ports { buffer1_1_48_8x8_p_V_3_address0 { O 7 vector } buffer1_1_48_8x8_p_V_3_ce0 { O 1 bit } buffer1_1_48_8x8_p_V_3_we0 { O 1 bit } buffer1_1_48_8x8_p_V_3_d0 { O 8 vector } buffer1_1_48_8x8_p_V_3_q0 { I 8 vector } buffer1_1_48_8x8_p_V_3_address1 { O 7 vector } buffer1_1_48_8x8_p_V_3_ce1 { O 1 bit } buffer1_1_48_8x8_p_V_3_we1 { O 1 bit } buffer1_1_48_8x8_p_V_3_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_48_8x8_p_V_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 465 \
    name buffer1_1_48_8x8_p_V_27 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_48_8x8_p_V_27 \
    op interface \
    ports { buffer1_1_48_8x8_p_V_27_address0 { O 7 vector } buffer1_1_48_8x8_p_V_27_ce0 { O 1 bit } buffer1_1_48_8x8_p_V_27_we0 { O 1 bit } buffer1_1_48_8x8_p_V_27_d0 { O 8 vector } buffer1_1_48_8x8_p_V_27_q0 { I 8 vector } buffer1_1_48_8x8_p_V_27_address1 { O 7 vector } buffer1_1_48_8x8_p_V_27_ce1 { O 1 bit } buffer1_1_48_8x8_p_V_27_we1 { O 1 bit } buffer1_1_48_8x8_p_V_27_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_48_8x8_p_V_27'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 466 \
    name buffer1_1_48_8x8_p_V_4 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_48_8x8_p_V_4 \
    op interface \
    ports { buffer1_1_48_8x8_p_V_4_address0 { O 7 vector } buffer1_1_48_8x8_p_V_4_ce0 { O 1 bit } buffer1_1_48_8x8_p_V_4_we0 { O 1 bit } buffer1_1_48_8x8_p_V_4_d0 { O 8 vector } buffer1_1_48_8x8_p_V_4_q0 { I 8 vector } buffer1_1_48_8x8_p_V_4_address1 { O 7 vector } buffer1_1_48_8x8_p_V_4_ce1 { O 1 bit } buffer1_1_48_8x8_p_V_4_we1 { O 1 bit } buffer1_1_48_8x8_p_V_4_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_48_8x8_p_V_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 467 \
    name buffer1_1_48_8x8_p_V_28 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_48_8x8_p_V_28 \
    op interface \
    ports { buffer1_1_48_8x8_p_V_28_address0 { O 7 vector } buffer1_1_48_8x8_p_V_28_ce0 { O 1 bit } buffer1_1_48_8x8_p_V_28_we0 { O 1 bit } buffer1_1_48_8x8_p_V_28_d0 { O 8 vector } buffer1_1_48_8x8_p_V_28_q0 { I 8 vector } buffer1_1_48_8x8_p_V_28_address1 { O 7 vector } buffer1_1_48_8x8_p_V_28_ce1 { O 1 bit } buffer1_1_48_8x8_p_V_28_we1 { O 1 bit } buffer1_1_48_8x8_p_V_28_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_48_8x8_p_V_28'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 468 \
    name buffer1_1_48_8x8_p_V_5 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_48_8x8_p_V_5 \
    op interface \
    ports { buffer1_1_48_8x8_p_V_5_address0 { O 7 vector } buffer1_1_48_8x8_p_V_5_ce0 { O 1 bit } buffer1_1_48_8x8_p_V_5_we0 { O 1 bit } buffer1_1_48_8x8_p_V_5_d0 { O 8 vector } buffer1_1_48_8x8_p_V_5_q0 { I 8 vector } buffer1_1_48_8x8_p_V_5_address1 { O 7 vector } buffer1_1_48_8x8_p_V_5_ce1 { O 1 bit } buffer1_1_48_8x8_p_V_5_we1 { O 1 bit } buffer1_1_48_8x8_p_V_5_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_48_8x8_p_V_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 469 \
    name buffer1_1_48_8x8_p_V_29 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_48_8x8_p_V_29 \
    op interface \
    ports { buffer1_1_48_8x8_p_V_29_address0 { O 7 vector } buffer1_1_48_8x8_p_V_29_ce0 { O 1 bit } buffer1_1_48_8x8_p_V_29_we0 { O 1 bit } buffer1_1_48_8x8_p_V_29_d0 { O 8 vector } buffer1_1_48_8x8_p_V_29_q0 { I 8 vector } buffer1_1_48_8x8_p_V_29_address1 { O 7 vector } buffer1_1_48_8x8_p_V_29_ce1 { O 1 bit } buffer1_1_48_8x8_p_V_29_we1 { O 1 bit } buffer1_1_48_8x8_p_V_29_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_48_8x8_p_V_29'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 470 \
    name buffer1_1_48_8x8_p_V_6 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_48_8x8_p_V_6 \
    op interface \
    ports { buffer1_1_48_8x8_p_V_6_address0 { O 7 vector } buffer1_1_48_8x8_p_V_6_ce0 { O 1 bit } buffer1_1_48_8x8_p_V_6_we0 { O 1 bit } buffer1_1_48_8x8_p_V_6_d0 { O 8 vector } buffer1_1_48_8x8_p_V_6_q0 { I 8 vector } buffer1_1_48_8x8_p_V_6_address1 { O 7 vector } buffer1_1_48_8x8_p_V_6_ce1 { O 1 bit } buffer1_1_48_8x8_p_V_6_we1 { O 1 bit } buffer1_1_48_8x8_p_V_6_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_48_8x8_p_V_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 471 \
    name buffer1_1_48_8x8_p_V_30 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_48_8x8_p_V_30 \
    op interface \
    ports { buffer1_1_48_8x8_p_V_30_address0 { O 7 vector } buffer1_1_48_8x8_p_V_30_ce0 { O 1 bit } buffer1_1_48_8x8_p_V_30_we0 { O 1 bit } buffer1_1_48_8x8_p_V_30_d0 { O 8 vector } buffer1_1_48_8x8_p_V_30_q0 { I 8 vector } buffer1_1_48_8x8_p_V_30_address1 { O 7 vector } buffer1_1_48_8x8_p_V_30_ce1 { O 1 bit } buffer1_1_48_8x8_p_V_30_we1 { O 1 bit } buffer1_1_48_8x8_p_V_30_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_48_8x8_p_V_30'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 472 \
    name buffer1_1_48_8x8_p_V_7 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_48_8x8_p_V_7 \
    op interface \
    ports { buffer1_1_48_8x8_p_V_7_address0 { O 7 vector } buffer1_1_48_8x8_p_V_7_ce0 { O 1 bit } buffer1_1_48_8x8_p_V_7_we0 { O 1 bit } buffer1_1_48_8x8_p_V_7_d0 { O 8 vector } buffer1_1_48_8x8_p_V_7_q0 { I 8 vector } buffer1_1_48_8x8_p_V_7_address1 { O 7 vector } buffer1_1_48_8x8_p_V_7_ce1 { O 1 bit } buffer1_1_48_8x8_p_V_7_we1 { O 1 bit } buffer1_1_48_8x8_p_V_7_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_48_8x8_p_V_7'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 473 \
    name buffer1_1_48_8x8_p_V_31 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_48_8x8_p_V_31 \
    op interface \
    ports { buffer1_1_48_8x8_p_V_31_address0 { O 7 vector } buffer1_1_48_8x8_p_V_31_ce0 { O 1 bit } buffer1_1_48_8x8_p_V_31_we0 { O 1 bit } buffer1_1_48_8x8_p_V_31_d0 { O 8 vector } buffer1_1_48_8x8_p_V_31_q0 { I 8 vector } buffer1_1_48_8x8_p_V_31_address1 { O 7 vector } buffer1_1_48_8x8_p_V_31_ce1 { O 1 bit } buffer1_1_48_8x8_p_V_31_we1 { O 1 bit } buffer1_1_48_8x8_p_V_31_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_48_8x8_p_V_31'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 474 \
    name buffer1_1_48_8x8_p_V_8 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_48_8x8_p_V_8 \
    op interface \
    ports { buffer1_1_48_8x8_p_V_8_address0 { O 7 vector } buffer1_1_48_8x8_p_V_8_ce0 { O 1 bit } buffer1_1_48_8x8_p_V_8_we0 { O 1 bit } buffer1_1_48_8x8_p_V_8_d0 { O 8 vector } buffer1_1_48_8x8_p_V_8_q0 { I 8 vector } buffer1_1_48_8x8_p_V_8_address1 { O 7 vector } buffer1_1_48_8x8_p_V_8_ce1 { O 1 bit } buffer1_1_48_8x8_p_V_8_we1 { O 1 bit } buffer1_1_48_8x8_p_V_8_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_48_8x8_p_V_8'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 475 \
    name buffer1_1_48_8x8_p_V_32 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_48_8x8_p_V_32 \
    op interface \
    ports { buffer1_1_48_8x8_p_V_32_address0 { O 7 vector } buffer1_1_48_8x8_p_V_32_ce0 { O 1 bit } buffer1_1_48_8x8_p_V_32_we0 { O 1 bit } buffer1_1_48_8x8_p_V_32_d0 { O 8 vector } buffer1_1_48_8x8_p_V_32_q0 { I 8 vector } buffer1_1_48_8x8_p_V_32_address1 { O 7 vector } buffer1_1_48_8x8_p_V_32_ce1 { O 1 bit } buffer1_1_48_8x8_p_V_32_we1 { O 1 bit } buffer1_1_48_8x8_p_V_32_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_48_8x8_p_V_32'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 476 \
    name buffer1_1_48_8x8_p_V_9 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_48_8x8_p_V_9 \
    op interface \
    ports { buffer1_1_48_8x8_p_V_9_address0 { O 7 vector } buffer1_1_48_8x8_p_V_9_ce0 { O 1 bit } buffer1_1_48_8x8_p_V_9_we0 { O 1 bit } buffer1_1_48_8x8_p_V_9_d0 { O 8 vector } buffer1_1_48_8x8_p_V_9_q0 { I 8 vector } buffer1_1_48_8x8_p_V_9_address1 { O 7 vector } buffer1_1_48_8x8_p_V_9_ce1 { O 1 bit } buffer1_1_48_8x8_p_V_9_we1 { O 1 bit } buffer1_1_48_8x8_p_V_9_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_48_8x8_p_V_9'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 477 \
    name buffer1_1_48_8x8_p_V_33 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_48_8x8_p_V_33 \
    op interface \
    ports { buffer1_1_48_8x8_p_V_33_address0 { O 7 vector } buffer1_1_48_8x8_p_V_33_ce0 { O 1 bit } buffer1_1_48_8x8_p_V_33_we0 { O 1 bit } buffer1_1_48_8x8_p_V_33_d0 { O 8 vector } buffer1_1_48_8x8_p_V_33_q0 { I 8 vector } buffer1_1_48_8x8_p_V_33_address1 { O 7 vector } buffer1_1_48_8x8_p_V_33_ce1 { O 1 bit } buffer1_1_48_8x8_p_V_33_we1 { O 1 bit } buffer1_1_48_8x8_p_V_33_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_48_8x8_p_V_33'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 478 \
    name buffer1_1_48_8x8_p_V_10 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_48_8x8_p_V_10 \
    op interface \
    ports { buffer1_1_48_8x8_p_V_10_address0 { O 7 vector } buffer1_1_48_8x8_p_V_10_ce0 { O 1 bit } buffer1_1_48_8x8_p_V_10_we0 { O 1 bit } buffer1_1_48_8x8_p_V_10_d0 { O 8 vector } buffer1_1_48_8x8_p_V_10_q0 { I 8 vector } buffer1_1_48_8x8_p_V_10_address1 { O 7 vector } buffer1_1_48_8x8_p_V_10_ce1 { O 1 bit } buffer1_1_48_8x8_p_V_10_we1 { O 1 bit } buffer1_1_48_8x8_p_V_10_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_48_8x8_p_V_10'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 479 \
    name buffer1_1_48_8x8_p_V_34 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_48_8x8_p_V_34 \
    op interface \
    ports { buffer1_1_48_8x8_p_V_34_address0 { O 7 vector } buffer1_1_48_8x8_p_V_34_ce0 { O 1 bit } buffer1_1_48_8x8_p_V_34_we0 { O 1 bit } buffer1_1_48_8x8_p_V_34_d0 { O 8 vector } buffer1_1_48_8x8_p_V_34_q0 { I 8 vector } buffer1_1_48_8x8_p_V_34_address1 { O 7 vector } buffer1_1_48_8x8_p_V_34_ce1 { O 1 bit } buffer1_1_48_8x8_p_V_34_we1 { O 1 bit } buffer1_1_48_8x8_p_V_34_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_48_8x8_p_V_34'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 480 \
    name buffer1_1_48_8x8_p_V_11 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_48_8x8_p_V_11 \
    op interface \
    ports { buffer1_1_48_8x8_p_V_11_address0 { O 7 vector } buffer1_1_48_8x8_p_V_11_ce0 { O 1 bit } buffer1_1_48_8x8_p_V_11_we0 { O 1 bit } buffer1_1_48_8x8_p_V_11_d0 { O 8 vector } buffer1_1_48_8x8_p_V_11_q0 { I 8 vector } buffer1_1_48_8x8_p_V_11_address1 { O 7 vector } buffer1_1_48_8x8_p_V_11_ce1 { O 1 bit } buffer1_1_48_8x8_p_V_11_we1 { O 1 bit } buffer1_1_48_8x8_p_V_11_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_48_8x8_p_V_11'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 481 \
    name buffer1_1_48_8x8_p_V_35 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_48_8x8_p_V_35 \
    op interface \
    ports { buffer1_1_48_8x8_p_V_35_address0 { O 7 vector } buffer1_1_48_8x8_p_V_35_ce0 { O 1 bit } buffer1_1_48_8x8_p_V_35_we0 { O 1 bit } buffer1_1_48_8x8_p_V_35_d0 { O 8 vector } buffer1_1_48_8x8_p_V_35_q0 { I 8 vector } buffer1_1_48_8x8_p_V_35_address1 { O 7 vector } buffer1_1_48_8x8_p_V_35_ce1 { O 1 bit } buffer1_1_48_8x8_p_V_35_we1 { O 1 bit } buffer1_1_48_8x8_p_V_35_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_48_8x8_p_V_35'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 482 \
    name buffer1_1_48_8x8_p_V_12 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_48_8x8_p_V_12 \
    op interface \
    ports { buffer1_1_48_8x8_p_V_12_address0 { O 7 vector } buffer1_1_48_8x8_p_V_12_ce0 { O 1 bit } buffer1_1_48_8x8_p_V_12_we0 { O 1 bit } buffer1_1_48_8x8_p_V_12_d0 { O 8 vector } buffer1_1_48_8x8_p_V_12_q0 { I 8 vector } buffer1_1_48_8x8_p_V_12_address1 { O 7 vector } buffer1_1_48_8x8_p_V_12_ce1 { O 1 bit } buffer1_1_48_8x8_p_V_12_we1 { O 1 bit } buffer1_1_48_8x8_p_V_12_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_48_8x8_p_V_12'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 483 \
    name buffer1_1_48_8x8_p_V_36 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_48_8x8_p_V_36 \
    op interface \
    ports { buffer1_1_48_8x8_p_V_36_address0 { O 7 vector } buffer1_1_48_8x8_p_V_36_ce0 { O 1 bit } buffer1_1_48_8x8_p_V_36_we0 { O 1 bit } buffer1_1_48_8x8_p_V_36_d0 { O 8 vector } buffer1_1_48_8x8_p_V_36_q0 { I 8 vector } buffer1_1_48_8x8_p_V_36_address1 { O 7 vector } buffer1_1_48_8x8_p_V_36_ce1 { O 1 bit } buffer1_1_48_8x8_p_V_36_we1 { O 1 bit } buffer1_1_48_8x8_p_V_36_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_48_8x8_p_V_36'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 484 \
    name buffer1_1_48_8x8_p_V_13 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_48_8x8_p_V_13 \
    op interface \
    ports { buffer1_1_48_8x8_p_V_13_address0 { O 7 vector } buffer1_1_48_8x8_p_V_13_ce0 { O 1 bit } buffer1_1_48_8x8_p_V_13_we0 { O 1 bit } buffer1_1_48_8x8_p_V_13_d0 { O 8 vector } buffer1_1_48_8x8_p_V_13_q0 { I 8 vector } buffer1_1_48_8x8_p_V_13_address1 { O 7 vector } buffer1_1_48_8x8_p_V_13_ce1 { O 1 bit } buffer1_1_48_8x8_p_V_13_we1 { O 1 bit } buffer1_1_48_8x8_p_V_13_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_48_8x8_p_V_13'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 485 \
    name buffer1_1_48_8x8_p_V_37 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_48_8x8_p_V_37 \
    op interface \
    ports { buffer1_1_48_8x8_p_V_37_address0 { O 7 vector } buffer1_1_48_8x8_p_V_37_ce0 { O 1 bit } buffer1_1_48_8x8_p_V_37_we0 { O 1 bit } buffer1_1_48_8x8_p_V_37_d0 { O 8 vector } buffer1_1_48_8x8_p_V_37_q0 { I 8 vector } buffer1_1_48_8x8_p_V_37_address1 { O 7 vector } buffer1_1_48_8x8_p_V_37_ce1 { O 1 bit } buffer1_1_48_8x8_p_V_37_we1 { O 1 bit } buffer1_1_48_8x8_p_V_37_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_48_8x8_p_V_37'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 486 \
    name buffer1_1_48_8x8_p_V_14 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_48_8x8_p_V_14 \
    op interface \
    ports { buffer1_1_48_8x8_p_V_14_address0 { O 7 vector } buffer1_1_48_8x8_p_V_14_ce0 { O 1 bit } buffer1_1_48_8x8_p_V_14_we0 { O 1 bit } buffer1_1_48_8x8_p_V_14_d0 { O 8 vector } buffer1_1_48_8x8_p_V_14_q0 { I 8 vector } buffer1_1_48_8x8_p_V_14_address1 { O 7 vector } buffer1_1_48_8x8_p_V_14_ce1 { O 1 bit } buffer1_1_48_8x8_p_V_14_we1 { O 1 bit } buffer1_1_48_8x8_p_V_14_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_48_8x8_p_V_14'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 487 \
    name buffer1_1_48_8x8_p_V_38 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_48_8x8_p_V_38 \
    op interface \
    ports { buffer1_1_48_8x8_p_V_38_address0 { O 7 vector } buffer1_1_48_8x8_p_V_38_ce0 { O 1 bit } buffer1_1_48_8x8_p_V_38_we0 { O 1 bit } buffer1_1_48_8x8_p_V_38_d0 { O 8 vector } buffer1_1_48_8x8_p_V_38_q0 { I 8 vector } buffer1_1_48_8x8_p_V_38_address1 { O 7 vector } buffer1_1_48_8x8_p_V_38_ce1 { O 1 bit } buffer1_1_48_8x8_p_V_38_we1 { O 1 bit } buffer1_1_48_8x8_p_V_38_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_48_8x8_p_V_38'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 488 \
    name buffer1_1_48_8x8_p_V_15 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_48_8x8_p_V_15 \
    op interface \
    ports { buffer1_1_48_8x8_p_V_15_address0 { O 7 vector } buffer1_1_48_8x8_p_V_15_ce0 { O 1 bit } buffer1_1_48_8x8_p_V_15_we0 { O 1 bit } buffer1_1_48_8x8_p_V_15_d0 { O 8 vector } buffer1_1_48_8x8_p_V_15_q0 { I 8 vector } buffer1_1_48_8x8_p_V_15_address1 { O 7 vector } buffer1_1_48_8x8_p_V_15_ce1 { O 1 bit } buffer1_1_48_8x8_p_V_15_we1 { O 1 bit } buffer1_1_48_8x8_p_V_15_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_48_8x8_p_V_15'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 489 \
    name buffer1_1_48_8x8_p_V_39 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_48_8x8_p_V_39 \
    op interface \
    ports { buffer1_1_48_8x8_p_V_39_address0 { O 7 vector } buffer1_1_48_8x8_p_V_39_ce0 { O 1 bit } buffer1_1_48_8x8_p_V_39_we0 { O 1 bit } buffer1_1_48_8x8_p_V_39_d0 { O 8 vector } buffer1_1_48_8x8_p_V_39_q0 { I 8 vector } buffer1_1_48_8x8_p_V_39_address1 { O 7 vector } buffer1_1_48_8x8_p_V_39_ce1 { O 1 bit } buffer1_1_48_8x8_p_V_39_we1 { O 1 bit } buffer1_1_48_8x8_p_V_39_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_48_8x8_p_V_39'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 490 \
    name buffer1_1_48_8x8_p_V_16 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_48_8x8_p_V_16 \
    op interface \
    ports { buffer1_1_48_8x8_p_V_16_address0 { O 7 vector } buffer1_1_48_8x8_p_V_16_ce0 { O 1 bit } buffer1_1_48_8x8_p_V_16_we0 { O 1 bit } buffer1_1_48_8x8_p_V_16_d0 { O 8 vector } buffer1_1_48_8x8_p_V_16_q0 { I 8 vector } buffer1_1_48_8x8_p_V_16_address1 { O 7 vector } buffer1_1_48_8x8_p_V_16_ce1 { O 1 bit } buffer1_1_48_8x8_p_V_16_we1 { O 1 bit } buffer1_1_48_8x8_p_V_16_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_48_8x8_p_V_16'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 491 \
    name buffer1_1_48_8x8_p_V_40 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_48_8x8_p_V_40 \
    op interface \
    ports { buffer1_1_48_8x8_p_V_40_address0 { O 7 vector } buffer1_1_48_8x8_p_V_40_ce0 { O 1 bit } buffer1_1_48_8x8_p_V_40_we0 { O 1 bit } buffer1_1_48_8x8_p_V_40_d0 { O 8 vector } buffer1_1_48_8x8_p_V_40_q0 { I 8 vector } buffer1_1_48_8x8_p_V_40_address1 { O 7 vector } buffer1_1_48_8x8_p_V_40_ce1 { O 1 bit } buffer1_1_48_8x8_p_V_40_we1 { O 1 bit } buffer1_1_48_8x8_p_V_40_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_48_8x8_p_V_40'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 492 \
    name buffer1_1_48_8x8_p_V_17 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_48_8x8_p_V_17 \
    op interface \
    ports { buffer1_1_48_8x8_p_V_17_address0 { O 7 vector } buffer1_1_48_8x8_p_V_17_ce0 { O 1 bit } buffer1_1_48_8x8_p_V_17_we0 { O 1 bit } buffer1_1_48_8x8_p_V_17_d0 { O 8 vector } buffer1_1_48_8x8_p_V_17_q0 { I 8 vector } buffer1_1_48_8x8_p_V_17_address1 { O 7 vector } buffer1_1_48_8x8_p_V_17_ce1 { O 1 bit } buffer1_1_48_8x8_p_V_17_we1 { O 1 bit } buffer1_1_48_8x8_p_V_17_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_48_8x8_p_V_17'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 493 \
    name buffer1_1_48_8x8_p_V_41 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_48_8x8_p_V_41 \
    op interface \
    ports { buffer1_1_48_8x8_p_V_41_address0 { O 7 vector } buffer1_1_48_8x8_p_V_41_ce0 { O 1 bit } buffer1_1_48_8x8_p_V_41_we0 { O 1 bit } buffer1_1_48_8x8_p_V_41_d0 { O 8 vector } buffer1_1_48_8x8_p_V_41_q0 { I 8 vector } buffer1_1_48_8x8_p_V_41_address1 { O 7 vector } buffer1_1_48_8x8_p_V_41_ce1 { O 1 bit } buffer1_1_48_8x8_p_V_41_we1 { O 1 bit } buffer1_1_48_8x8_p_V_41_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_48_8x8_p_V_41'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 494 \
    name buffer1_1_48_8x8_p_V_18 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_48_8x8_p_V_18 \
    op interface \
    ports { buffer1_1_48_8x8_p_V_18_address0 { O 7 vector } buffer1_1_48_8x8_p_V_18_ce0 { O 1 bit } buffer1_1_48_8x8_p_V_18_we0 { O 1 bit } buffer1_1_48_8x8_p_V_18_d0 { O 8 vector } buffer1_1_48_8x8_p_V_18_q0 { I 8 vector } buffer1_1_48_8x8_p_V_18_address1 { O 7 vector } buffer1_1_48_8x8_p_V_18_ce1 { O 1 bit } buffer1_1_48_8x8_p_V_18_we1 { O 1 bit } buffer1_1_48_8x8_p_V_18_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_48_8x8_p_V_18'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 495 \
    name buffer1_1_48_8x8_p_V_42 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_48_8x8_p_V_42 \
    op interface \
    ports { buffer1_1_48_8x8_p_V_42_address0 { O 7 vector } buffer1_1_48_8x8_p_V_42_ce0 { O 1 bit } buffer1_1_48_8x8_p_V_42_we0 { O 1 bit } buffer1_1_48_8x8_p_V_42_d0 { O 8 vector } buffer1_1_48_8x8_p_V_42_q0 { I 8 vector } buffer1_1_48_8x8_p_V_42_address1 { O 7 vector } buffer1_1_48_8x8_p_V_42_ce1 { O 1 bit } buffer1_1_48_8x8_p_V_42_we1 { O 1 bit } buffer1_1_48_8x8_p_V_42_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_48_8x8_p_V_42'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 496 \
    name buffer1_1_48_8x8_p_V_19 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_48_8x8_p_V_19 \
    op interface \
    ports { buffer1_1_48_8x8_p_V_19_address0 { O 7 vector } buffer1_1_48_8x8_p_V_19_ce0 { O 1 bit } buffer1_1_48_8x8_p_V_19_we0 { O 1 bit } buffer1_1_48_8x8_p_V_19_d0 { O 8 vector } buffer1_1_48_8x8_p_V_19_q0 { I 8 vector } buffer1_1_48_8x8_p_V_19_address1 { O 7 vector } buffer1_1_48_8x8_p_V_19_ce1 { O 1 bit } buffer1_1_48_8x8_p_V_19_we1 { O 1 bit } buffer1_1_48_8x8_p_V_19_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_48_8x8_p_V_19'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 497 \
    name buffer1_1_48_8x8_p_V_43 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_48_8x8_p_V_43 \
    op interface \
    ports { buffer1_1_48_8x8_p_V_43_address0 { O 7 vector } buffer1_1_48_8x8_p_V_43_ce0 { O 1 bit } buffer1_1_48_8x8_p_V_43_we0 { O 1 bit } buffer1_1_48_8x8_p_V_43_d0 { O 8 vector } buffer1_1_48_8x8_p_V_43_q0 { I 8 vector } buffer1_1_48_8x8_p_V_43_address1 { O 7 vector } buffer1_1_48_8x8_p_V_43_ce1 { O 1 bit } buffer1_1_48_8x8_p_V_43_we1 { O 1 bit } buffer1_1_48_8x8_p_V_43_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_48_8x8_p_V_43'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 498 \
    name buffer1_1_48_8x8_p_V_20 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_48_8x8_p_V_20 \
    op interface \
    ports { buffer1_1_48_8x8_p_V_20_address0 { O 7 vector } buffer1_1_48_8x8_p_V_20_ce0 { O 1 bit } buffer1_1_48_8x8_p_V_20_we0 { O 1 bit } buffer1_1_48_8x8_p_V_20_d0 { O 8 vector } buffer1_1_48_8x8_p_V_20_q0 { I 8 vector } buffer1_1_48_8x8_p_V_20_address1 { O 7 vector } buffer1_1_48_8x8_p_V_20_ce1 { O 1 bit } buffer1_1_48_8x8_p_V_20_we1 { O 1 bit } buffer1_1_48_8x8_p_V_20_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_48_8x8_p_V_20'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 499 \
    name buffer1_1_48_8x8_p_V_44 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_48_8x8_p_V_44 \
    op interface \
    ports { buffer1_1_48_8x8_p_V_44_address0 { O 7 vector } buffer1_1_48_8x8_p_V_44_ce0 { O 1 bit } buffer1_1_48_8x8_p_V_44_we0 { O 1 bit } buffer1_1_48_8x8_p_V_44_d0 { O 8 vector } buffer1_1_48_8x8_p_V_44_q0 { I 8 vector } buffer1_1_48_8x8_p_V_44_address1 { O 7 vector } buffer1_1_48_8x8_p_V_44_ce1 { O 1 bit } buffer1_1_48_8x8_p_V_44_we1 { O 1 bit } buffer1_1_48_8x8_p_V_44_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_48_8x8_p_V_44'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 500 \
    name buffer1_1_48_8x8_p_V_21 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_48_8x8_p_V_21 \
    op interface \
    ports { buffer1_1_48_8x8_p_V_21_address0 { O 7 vector } buffer1_1_48_8x8_p_V_21_ce0 { O 1 bit } buffer1_1_48_8x8_p_V_21_we0 { O 1 bit } buffer1_1_48_8x8_p_V_21_d0 { O 8 vector } buffer1_1_48_8x8_p_V_21_q0 { I 8 vector } buffer1_1_48_8x8_p_V_21_address1 { O 7 vector } buffer1_1_48_8x8_p_V_21_ce1 { O 1 bit } buffer1_1_48_8x8_p_V_21_we1 { O 1 bit } buffer1_1_48_8x8_p_V_21_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_48_8x8_p_V_21'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 501 \
    name buffer1_1_48_8x8_p_V_45 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_48_8x8_p_V_45 \
    op interface \
    ports { buffer1_1_48_8x8_p_V_45_address0 { O 7 vector } buffer1_1_48_8x8_p_V_45_ce0 { O 1 bit } buffer1_1_48_8x8_p_V_45_we0 { O 1 bit } buffer1_1_48_8x8_p_V_45_d0 { O 8 vector } buffer1_1_48_8x8_p_V_45_q0 { I 8 vector } buffer1_1_48_8x8_p_V_45_address1 { O 7 vector } buffer1_1_48_8x8_p_V_45_ce1 { O 1 bit } buffer1_1_48_8x8_p_V_45_we1 { O 1 bit } buffer1_1_48_8x8_p_V_45_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_48_8x8_p_V_45'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 502 \
    name buffer1_1_48_8x8_p_V_22 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_48_8x8_p_V_22 \
    op interface \
    ports { buffer1_1_48_8x8_p_V_22_address0 { O 7 vector } buffer1_1_48_8x8_p_V_22_ce0 { O 1 bit } buffer1_1_48_8x8_p_V_22_we0 { O 1 bit } buffer1_1_48_8x8_p_V_22_d0 { O 8 vector } buffer1_1_48_8x8_p_V_22_q0 { I 8 vector } buffer1_1_48_8x8_p_V_22_address1 { O 7 vector } buffer1_1_48_8x8_p_V_22_ce1 { O 1 bit } buffer1_1_48_8x8_p_V_22_we1 { O 1 bit } buffer1_1_48_8x8_p_V_22_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_48_8x8_p_V_22'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 503 \
    name buffer1_1_48_8x8_p_V_46 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_48_8x8_p_V_46 \
    op interface \
    ports { buffer1_1_48_8x8_p_V_46_address0 { O 7 vector } buffer1_1_48_8x8_p_V_46_ce0 { O 1 bit } buffer1_1_48_8x8_p_V_46_we0 { O 1 bit } buffer1_1_48_8x8_p_V_46_d0 { O 8 vector } buffer1_1_48_8x8_p_V_46_q0 { I 8 vector } buffer1_1_48_8x8_p_V_46_address1 { O 7 vector } buffer1_1_48_8x8_p_V_46_ce1 { O 1 bit } buffer1_1_48_8x8_p_V_46_we1 { O 1 bit } buffer1_1_48_8x8_p_V_46_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_48_8x8_p_V_46'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 504 \
    name buffer1_1_48_8x8_p_V_23 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_48_8x8_p_V_23 \
    op interface \
    ports { buffer1_1_48_8x8_p_V_23_address0 { O 7 vector } buffer1_1_48_8x8_p_V_23_ce0 { O 1 bit } buffer1_1_48_8x8_p_V_23_we0 { O 1 bit } buffer1_1_48_8x8_p_V_23_d0 { O 8 vector } buffer1_1_48_8x8_p_V_23_q0 { I 8 vector } buffer1_1_48_8x8_p_V_23_address1 { O 7 vector } buffer1_1_48_8x8_p_V_23_ce1 { O 1 bit } buffer1_1_48_8x8_p_V_23_we1 { O 1 bit } buffer1_1_48_8x8_p_V_23_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_48_8x8_p_V_23'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 505 \
    name buffer1_1_48_8x8_p_V_47 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_48_8x8_p_V_47 \
    op interface \
    ports { buffer1_1_48_8x8_p_V_47_address0 { O 7 vector } buffer1_1_48_8x8_p_V_47_ce0 { O 1 bit } buffer1_1_48_8x8_p_V_47_we0 { O 1 bit } buffer1_1_48_8x8_p_V_47_d0 { O 8 vector } buffer1_1_48_8x8_p_V_47_q0 { I 8 vector } buffer1_1_48_8x8_p_V_47_address1 { O 7 vector } buffer1_1_48_8x8_p_V_47_ce1 { O 1 bit } buffer1_1_48_8x8_p_V_47_we1 { O 1 bit } buffer1_1_48_8x8_p_V_47_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_48_8x8_p_V_47'"
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


