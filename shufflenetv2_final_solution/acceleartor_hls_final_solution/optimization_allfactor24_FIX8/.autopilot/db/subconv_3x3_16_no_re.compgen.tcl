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
    id 197 \
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
    id 198 \
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
    id 199 \
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
    id 200 \
    name buffer1_1_24_16x16_p_23 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_24_16x16_p_23 \
    op interface \
    ports { buffer1_1_24_16x16_p_23_address0 { O 9 vector } buffer1_1_24_16x16_p_23_ce0 { O 1 bit } buffer1_1_24_16x16_p_23_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_24_16x16_p_23'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 201 \
    name buffer1_1_24_16x16_p_22 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_24_16x16_p_22 \
    op interface \
    ports { buffer1_1_24_16x16_p_22_address0 { O 9 vector } buffer1_1_24_16x16_p_22_ce0 { O 1 bit } buffer1_1_24_16x16_p_22_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_24_16x16_p_22'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 202 \
    name buffer1_1_24_16x16_p_11 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_24_16x16_p_11 \
    op interface \
    ports { buffer1_1_24_16x16_p_11_address0 { O 9 vector } buffer1_1_24_16x16_p_11_ce0 { O 1 bit } buffer1_1_24_16x16_p_11_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_24_16x16_p_11'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 203 \
    name buffer1_1_24_16x16_p_6 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_24_16x16_p_6 \
    op interface \
    ports { buffer1_1_24_16x16_p_6_address0 { O 9 vector } buffer1_1_24_16x16_p_6_ce0 { O 1 bit } buffer1_1_24_16x16_p_6_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_24_16x16_p_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 204 \
    name buffer1_1_24_16x16_p_5 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_24_16x16_p_5 \
    op interface \
    ports { buffer1_1_24_16x16_p_5_address0 { O 9 vector } buffer1_1_24_16x16_p_5_ce0 { O 1 bit } buffer1_1_24_16x16_p_5_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_24_16x16_p_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 205 \
    name buffer1_1_24_16x16_p_4 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_24_16x16_p_4 \
    op interface \
    ports { buffer1_1_24_16x16_p_4_address0 { O 9 vector } buffer1_1_24_16x16_p_4_ce0 { O 1 bit } buffer1_1_24_16x16_p_4_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_24_16x16_p_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 206 \
    name buffer1_1_24_16x16_p_3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_24_16x16_p_3 \
    op interface \
    ports { buffer1_1_24_16x16_p_3_address0 { O 9 vector } buffer1_1_24_16x16_p_3_ce0 { O 1 bit } buffer1_1_24_16x16_p_3_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_24_16x16_p_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 207 \
    name buffer1_1_24_16x16_p_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_24_16x16_p_2 \
    op interface \
    ports { buffer1_1_24_16x16_p_2_address0 { O 9 vector } buffer1_1_24_16x16_p_2_ce0 { O 1 bit } buffer1_1_24_16x16_p_2_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_24_16x16_p_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 208 \
    name buffer1_1_24_16x16_p_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_24_16x16_p_1 \
    op interface \
    ports { buffer1_1_24_16x16_p_1_address0 { O 9 vector } buffer1_1_24_16x16_p_1_ce0 { O 1 bit } buffer1_1_24_16x16_p_1_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_24_16x16_p_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 209 \
    name buffer1_1_24_16x16_p \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_24_16x16_p \
    op interface \
    ports { buffer1_1_24_16x16_p_address0 { O 9 vector } buffer1_1_24_16x16_p_ce0 { O 1 bit } buffer1_1_24_16x16_p_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_24_16x16_p'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 210 \
    name buffer1_1_24_16x16_p_21 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_24_16x16_p_21 \
    op interface \
    ports { buffer1_1_24_16x16_p_21_address0 { O 9 vector } buffer1_1_24_16x16_p_21_ce0 { O 1 bit } buffer1_1_24_16x16_p_21_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_24_16x16_p_21'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 211 \
    name buffer1_1_24_16x16_p_20 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_24_16x16_p_20 \
    op interface \
    ports { buffer1_1_24_16x16_p_20_address0 { O 9 vector } buffer1_1_24_16x16_p_20_ce0 { O 1 bit } buffer1_1_24_16x16_p_20_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_24_16x16_p_20'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 212 \
    name buffer1_1_24_16x16_p_19 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_24_16x16_p_19 \
    op interface \
    ports { buffer1_1_24_16x16_p_19_address0 { O 9 vector } buffer1_1_24_16x16_p_19_ce0 { O 1 bit } buffer1_1_24_16x16_p_19_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_24_16x16_p_19'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 213 \
    name buffer1_1_24_16x16_p_18 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_24_16x16_p_18 \
    op interface \
    ports { buffer1_1_24_16x16_p_18_address0 { O 9 vector } buffer1_1_24_16x16_p_18_ce0 { O 1 bit } buffer1_1_24_16x16_p_18_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_24_16x16_p_18'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 214 \
    name buffer1_1_24_16x16_p_17 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_24_16x16_p_17 \
    op interface \
    ports { buffer1_1_24_16x16_p_17_address0 { O 9 vector } buffer1_1_24_16x16_p_17_ce0 { O 1 bit } buffer1_1_24_16x16_p_17_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_24_16x16_p_17'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 215 \
    name buffer1_1_24_16x16_p_16 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_24_16x16_p_16 \
    op interface \
    ports { buffer1_1_24_16x16_p_16_address0 { O 9 vector } buffer1_1_24_16x16_p_16_ce0 { O 1 bit } buffer1_1_24_16x16_p_16_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_24_16x16_p_16'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 216 \
    name buffer1_1_24_16x16_p_15 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_24_16x16_p_15 \
    op interface \
    ports { buffer1_1_24_16x16_p_15_address0 { O 9 vector } buffer1_1_24_16x16_p_15_ce0 { O 1 bit } buffer1_1_24_16x16_p_15_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_24_16x16_p_15'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 217 \
    name buffer1_1_24_16x16_p_14 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_24_16x16_p_14 \
    op interface \
    ports { buffer1_1_24_16x16_p_14_address0 { O 9 vector } buffer1_1_24_16x16_p_14_ce0 { O 1 bit } buffer1_1_24_16x16_p_14_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_24_16x16_p_14'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 218 \
    name buffer1_1_24_16x16_p_13 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_24_16x16_p_13 \
    op interface \
    ports { buffer1_1_24_16x16_p_13_address0 { O 9 vector } buffer1_1_24_16x16_p_13_ce0 { O 1 bit } buffer1_1_24_16x16_p_13_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_24_16x16_p_13'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 219 \
    name buffer1_1_24_16x16_p_12 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_24_16x16_p_12 \
    op interface \
    ports { buffer1_1_24_16x16_p_12_address0 { O 9 vector } buffer1_1_24_16x16_p_12_ce0 { O 1 bit } buffer1_1_24_16x16_p_12_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_24_16x16_p_12'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 220 \
    name buffer1_1_24_16x16_p_10 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_24_16x16_p_10 \
    op interface \
    ports { buffer1_1_24_16x16_p_10_address0 { O 9 vector } buffer1_1_24_16x16_p_10_ce0 { O 1 bit } buffer1_1_24_16x16_p_10_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_24_16x16_p_10'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 221 \
    name buffer1_1_24_16x16_p_9 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_24_16x16_p_9 \
    op interface \
    ports { buffer1_1_24_16x16_p_9_address0 { O 9 vector } buffer1_1_24_16x16_p_9_ce0 { O 1 bit } buffer1_1_24_16x16_p_9_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_24_16x16_p_9'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 222 \
    name buffer1_1_24_16x16_p_8 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_24_16x16_p_8 \
    op interface \
    ports { buffer1_1_24_16x16_p_8_address0 { O 9 vector } buffer1_1_24_16x16_p_8_ce0 { O 1 bit } buffer1_1_24_16x16_p_8_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_24_16x16_p_8'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 223 \
    name buffer1_1_24_16x16_p_7 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_24_16x16_p_7 \
    op interface \
    ports { buffer1_1_24_16x16_p_7_address0 { O 9 vector } buffer1_1_24_16x16_p_7_ce0 { O 1 bit } buffer1_1_24_16x16_p_7_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_24_16x16_p_7'"
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


