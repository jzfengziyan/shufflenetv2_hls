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
    id 692 \
    name weight_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_V \
    op interface \
    ports { weight_V_address0 { O 10 vector } weight_V_ce0 { O 1 bit } weight_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 693 \
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
    id 694 \
    name output_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename output_V \
    op interface \
    ports { output_V_address0 { O 12 vector } output_V_ce0 { O 1 bit } output_V_we0 { O 1 bit } output_V_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'output_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 695 \
    name buffer1_1_96_4x4_p_V_24 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_96_4x4_p_V_24 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_24_address0 { O 8 vector } buffer1_1_96_4x4_p_V_24_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_24_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_24'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 696 \
    name buffer1_1_96_4x4_p_V_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_96_4x4_p_V_1 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_1_address0 { O 8 vector } buffer1_1_96_4x4_p_V_1_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_1_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 697 \
    name buffer1_1_96_4x4_p_V_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_96_4x4_p_V_2 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_2_address0 { O 8 vector } buffer1_1_96_4x4_p_V_2_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_2_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 698 \
    name buffer1_1_96_4x4_p_V_3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_96_4x4_p_V_3 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_3_address0 { O 8 vector } buffer1_1_96_4x4_p_V_3_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_3_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 699 \
    name buffer1_1_96_4x4_p_V_4 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_96_4x4_p_V_4 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_4_address0 { O 8 vector } buffer1_1_96_4x4_p_V_4_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_4_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 700 \
    name buffer1_1_96_4x4_p_V_5 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_96_4x4_p_V_5 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_5_address0 { O 8 vector } buffer1_1_96_4x4_p_V_5_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_5_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 701 \
    name buffer1_1_96_4x4_p_V_6 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_96_4x4_p_V_6 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_6_address0 { O 8 vector } buffer1_1_96_4x4_p_V_6_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_6_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 702 \
    name buffer1_1_96_4x4_p_V_7 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_96_4x4_p_V_7 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_7_address0 { O 8 vector } buffer1_1_96_4x4_p_V_7_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_7_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_7'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 703 \
    name buffer1_1_96_4x4_p_V_8 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_96_4x4_p_V_8 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_8_address0 { O 8 vector } buffer1_1_96_4x4_p_V_8_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_8_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_8'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 704 \
    name buffer1_1_96_4x4_p_V_9 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_96_4x4_p_V_9 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_9_address0 { O 8 vector } buffer1_1_96_4x4_p_V_9_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_9_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_9'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 705 \
    name buffer1_1_96_4x4_p_V_10 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_96_4x4_p_V_10 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_10_address0 { O 8 vector } buffer1_1_96_4x4_p_V_10_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_10_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_10'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 706 \
    name buffer1_1_96_4x4_p_V_11 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_96_4x4_p_V_11 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_11_address0 { O 8 vector } buffer1_1_96_4x4_p_V_11_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_11_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_11'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 707 \
    name buffer1_1_96_4x4_p_V_12 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_96_4x4_p_V_12 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_12_address0 { O 8 vector } buffer1_1_96_4x4_p_V_12_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_12_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_12'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 708 \
    name buffer1_1_96_4x4_p_V_13 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_96_4x4_p_V_13 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_13_address0 { O 8 vector } buffer1_1_96_4x4_p_V_13_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_13_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_13'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 709 \
    name buffer1_1_96_4x4_p_V_14 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_96_4x4_p_V_14 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_14_address0 { O 8 vector } buffer1_1_96_4x4_p_V_14_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_14_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_14'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 710 \
    name buffer1_1_96_4x4_p_V_15 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_96_4x4_p_V_15 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_15_address0 { O 8 vector } buffer1_1_96_4x4_p_V_15_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_15_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_15'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 711 \
    name buffer1_1_96_4x4_p_V_16 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_96_4x4_p_V_16 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_16_address0 { O 8 vector } buffer1_1_96_4x4_p_V_16_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_16_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_16'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 712 \
    name buffer1_1_96_4x4_p_V_17 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_96_4x4_p_V_17 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_17_address0 { O 8 vector } buffer1_1_96_4x4_p_V_17_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_17_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_17'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 713 \
    name buffer1_1_96_4x4_p_V_18 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_96_4x4_p_V_18 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_18_address0 { O 8 vector } buffer1_1_96_4x4_p_V_18_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_18_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_18'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 714 \
    name buffer1_1_96_4x4_p_V_19 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_96_4x4_p_V_19 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_19_address0 { O 8 vector } buffer1_1_96_4x4_p_V_19_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_19_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_19'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 715 \
    name buffer1_1_96_4x4_p_V_20 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_96_4x4_p_V_20 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_20_address0 { O 8 vector } buffer1_1_96_4x4_p_V_20_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_20_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_20'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 716 \
    name buffer1_1_96_4x4_p_V_21 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_96_4x4_p_V_21 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_21_address0 { O 8 vector } buffer1_1_96_4x4_p_V_21_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_21_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_21'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 717 \
    name buffer1_1_96_4x4_p_V_22 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_96_4x4_p_V_22 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_22_address0 { O 8 vector } buffer1_1_96_4x4_p_V_22_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_22_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_22'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 718 \
    name buffer1_1_96_4x4_p_V_23 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_96_4x4_p_V_23 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_23_address0 { O 8 vector } buffer1_1_96_4x4_p_V_23_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_23_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_23'"
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


