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
    id 518 \
    name left_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename left_V \
    op interface \
    ports { left_V_address0 { O 13 vector } left_V_ce0 { O 1 bit } left_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'left_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 519 \
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
    id 520 \
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
    id 521 \
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
    id 522 \
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
    id 523 \
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
    id 524 \
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
    id 525 \
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
    id 526 \
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
    id 527 \
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
    id 528 \
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
    id 529 \
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
    id 530 \
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
    id 531 \
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
    id 532 \
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
    id 533 \
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
    id 534 \
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
    id 535 \
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
    id 536 \
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
    id 537 \
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
    id 538 \
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
    id 539 \
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
    id 540 \
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
    id 541 \
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
    id 542 \
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
    id 543 \
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


