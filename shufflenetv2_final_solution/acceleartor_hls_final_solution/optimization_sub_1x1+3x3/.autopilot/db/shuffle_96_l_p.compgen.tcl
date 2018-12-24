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
    id 1207 \
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
    id 1208 \
    name buffer1_1_96_4x4_p_V_96 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_96_4x4_p_V_96 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_96_address0 { O 6 vector } buffer1_1_96_4x4_p_V_96_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_96_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_96'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1209 \
    name buffer1_1_96_4x4_p_V_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_96_4x4_p_V_1 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_1_address0 { O 6 vector } buffer1_1_96_4x4_p_V_1_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_1_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1210 \
    name buffer1_1_96_4x4_p_V_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_96_4x4_p_V_2 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_2_address0 { O 6 vector } buffer1_1_96_4x4_p_V_2_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_2_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1211 \
    name buffer1_1_96_4x4_p_V_3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_96_4x4_p_V_3 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_3_address0 { O 6 vector } buffer1_1_96_4x4_p_V_3_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_3_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1212 \
    name buffer1_1_96_4x4_p_V_4 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_96_4x4_p_V_4 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_4_address0 { O 6 vector } buffer1_1_96_4x4_p_V_4_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_4_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1213 \
    name buffer1_1_96_4x4_p_V_5 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_96_4x4_p_V_5 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_5_address0 { O 6 vector } buffer1_1_96_4x4_p_V_5_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_5_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1214 \
    name buffer1_1_96_4x4_p_V_6 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_96_4x4_p_V_6 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_6_address0 { O 6 vector } buffer1_1_96_4x4_p_V_6_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_6_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1215 \
    name buffer1_1_96_4x4_p_V_7 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_96_4x4_p_V_7 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_7_address0 { O 6 vector } buffer1_1_96_4x4_p_V_7_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_7_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_7'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1216 \
    name buffer1_1_96_4x4_p_V_8 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_96_4x4_p_V_8 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_8_address0 { O 6 vector } buffer1_1_96_4x4_p_V_8_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_8_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_8'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1217 \
    name buffer1_1_96_4x4_p_V_9 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_96_4x4_p_V_9 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_9_address0 { O 6 vector } buffer1_1_96_4x4_p_V_9_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_9_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_9'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1218 \
    name buffer1_1_96_4x4_p_V_10 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_96_4x4_p_V_10 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_10_address0 { O 6 vector } buffer1_1_96_4x4_p_V_10_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_10_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_10'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1219 \
    name buffer1_1_96_4x4_p_V_11 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_96_4x4_p_V_11 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_11_address0 { O 6 vector } buffer1_1_96_4x4_p_V_11_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_11_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_11'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1220 \
    name buffer1_1_96_4x4_p_V_12 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_96_4x4_p_V_12 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_12_address0 { O 6 vector } buffer1_1_96_4x4_p_V_12_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_12_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_12'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1221 \
    name buffer1_1_96_4x4_p_V_13 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_96_4x4_p_V_13 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_13_address0 { O 6 vector } buffer1_1_96_4x4_p_V_13_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_13_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_13'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1222 \
    name buffer1_1_96_4x4_p_V_14 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_96_4x4_p_V_14 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_14_address0 { O 6 vector } buffer1_1_96_4x4_p_V_14_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_14_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_14'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1223 \
    name buffer1_1_96_4x4_p_V_15 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_96_4x4_p_V_15 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_15_address0 { O 6 vector } buffer1_1_96_4x4_p_V_15_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_15_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_15'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1224 \
    name buffer1_1_96_4x4_p_V_16 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_96_4x4_p_V_16 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_16_address0 { O 6 vector } buffer1_1_96_4x4_p_V_16_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_16_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_16'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1225 \
    name buffer1_1_96_4x4_p_V_17 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_96_4x4_p_V_17 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_17_address0 { O 6 vector } buffer1_1_96_4x4_p_V_17_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_17_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_17'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1226 \
    name buffer1_1_96_4x4_p_V_18 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_96_4x4_p_V_18 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_18_address0 { O 6 vector } buffer1_1_96_4x4_p_V_18_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_18_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_18'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1227 \
    name buffer1_1_96_4x4_p_V_19 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_96_4x4_p_V_19 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_19_address0 { O 6 vector } buffer1_1_96_4x4_p_V_19_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_19_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_19'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1228 \
    name buffer1_1_96_4x4_p_V_20 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_96_4x4_p_V_20 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_20_address0 { O 6 vector } buffer1_1_96_4x4_p_V_20_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_20_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_20'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1229 \
    name buffer1_1_96_4x4_p_V_21 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_96_4x4_p_V_21 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_21_address0 { O 6 vector } buffer1_1_96_4x4_p_V_21_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_21_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_21'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1230 \
    name buffer1_1_96_4x4_p_V_22 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_96_4x4_p_V_22 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_22_address0 { O 6 vector } buffer1_1_96_4x4_p_V_22_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_22_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_22'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1231 \
    name buffer1_1_96_4x4_p_V_23 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_96_4x4_p_V_23 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_23_address0 { O 6 vector } buffer1_1_96_4x4_p_V_23_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_23_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_23'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1232 \
    name buffer1_1_96_4x4_p_V_24 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_96_4x4_p_V_24 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_24_address0 { O 6 vector } buffer1_1_96_4x4_p_V_24_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_24_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_24'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1233 \
    name buffer1_1_96_4x4_p_V_25 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_96_4x4_p_V_25 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_25_address0 { O 6 vector } buffer1_1_96_4x4_p_V_25_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_25_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_25'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1234 \
    name buffer1_1_96_4x4_p_V_26 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_96_4x4_p_V_26 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_26_address0 { O 6 vector } buffer1_1_96_4x4_p_V_26_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_26_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_26'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1235 \
    name buffer1_1_96_4x4_p_V_27 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_96_4x4_p_V_27 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_27_address0 { O 6 vector } buffer1_1_96_4x4_p_V_27_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_27_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_27'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1236 \
    name buffer1_1_96_4x4_p_V_28 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_96_4x4_p_V_28 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_28_address0 { O 6 vector } buffer1_1_96_4x4_p_V_28_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_28_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_28'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1237 \
    name buffer1_1_96_4x4_p_V_29 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_96_4x4_p_V_29 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_29_address0 { O 6 vector } buffer1_1_96_4x4_p_V_29_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_29_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_29'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1238 \
    name buffer1_1_96_4x4_p_V_30 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_96_4x4_p_V_30 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_30_address0 { O 6 vector } buffer1_1_96_4x4_p_V_30_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_30_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_30'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1239 \
    name buffer1_1_96_4x4_p_V_31 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_96_4x4_p_V_31 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_31_address0 { O 6 vector } buffer1_1_96_4x4_p_V_31_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_31_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_31'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1240 \
    name buffer1_1_96_4x4_p_V_32 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_96_4x4_p_V_32 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_32_address0 { O 6 vector } buffer1_1_96_4x4_p_V_32_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_32_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_32'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1241 \
    name buffer1_1_96_4x4_p_V_33 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_96_4x4_p_V_33 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_33_address0 { O 6 vector } buffer1_1_96_4x4_p_V_33_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_33_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_33'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1242 \
    name buffer1_1_96_4x4_p_V_34 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_96_4x4_p_V_34 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_34_address0 { O 6 vector } buffer1_1_96_4x4_p_V_34_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_34_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_34'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1243 \
    name buffer1_1_96_4x4_p_V_35 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_96_4x4_p_V_35 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_35_address0 { O 6 vector } buffer1_1_96_4x4_p_V_35_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_35_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_35'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1244 \
    name buffer1_1_96_4x4_p_V_36 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_96_4x4_p_V_36 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_36_address0 { O 6 vector } buffer1_1_96_4x4_p_V_36_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_36_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_36'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1245 \
    name buffer1_1_96_4x4_p_V_37 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_96_4x4_p_V_37 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_37_address0 { O 6 vector } buffer1_1_96_4x4_p_V_37_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_37_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_37'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1246 \
    name buffer1_1_96_4x4_p_V_38 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_96_4x4_p_V_38 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_38_address0 { O 6 vector } buffer1_1_96_4x4_p_V_38_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_38_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_38'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1247 \
    name buffer1_1_96_4x4_p_V_39 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_96_4x4_p_V_39 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_39_address0 { O 6 vector } buffer1_1_96_4x4_p_V_39_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_39_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_39'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1248 \
    name buffer1_1_96_4x4_p_V_40 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_96_4x4_p_V_40 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_40_address0 { O 6 vector } buffer1_1_96_4x4_p_V_40_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_40_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_40'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1249 \
    name buffer1_1_96_4x4_p_V_41 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_96_4x4_p_V_41 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_41_address0 { O 6 vector } buffer1_1_96_4x4_p_V_41_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_41_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_41'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1250 \
    name buffer1_1_96_4x4_p_V_42 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_96_4x4_p_V_42 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_42_address0 { O 6 vector } buffer1_1_96_4x4_p_V_42_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_42_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_42'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1251 \
    name buffer1_1_96_4x4_p_V_43 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_96_4x4_p_V_43 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_43_address0 { O 6 vector } buffer1_1_96_4x4_p_V_43_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_43_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_43'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1252 \
    name buffer1_1_96_4x4_p_V_44 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_96_4x4_p_V_44 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_44_address0 { O 6 vector } buffer1_1_96_4x4_p_V_44_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_44_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_44'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1253 \
    name buffer1_1_96_4x4_p_V_45 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_96_4x4_p_V_45 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_45_address0 { O 6 vector } buffer1_1_96_4x4_p_V_45_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_45_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_45'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1254 \
    name buffer1_1_96_4x4_p_V_46 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_96_4x4_p_V_46 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_46_address0 { O 6 vector } buffer1_1_96_4x4_p_V_46_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_46_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_46'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1255 \
    name buffer1_1_96_4x4_p_V_47 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_96_4x4_p_V_47 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_47_address0 { O 6 vector } buffer1_1_96_4x4_p_V_47_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_47_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_47'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1256 \
    name buffer1_1_96_4x4_p_V_48 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_96_4x4_p_V_48 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_48_address0 { O 6 vector } buffer1_1_96_4x4_p_V_48_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_48_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_48'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1257 \
    name buffer1_1_96_4x4_p_V_49 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_96_4x4_p_V_49 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_49_address0 { O 6 vector } buffer1_1_96_4x4_p_V_49_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_49_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_49'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1258 \
    name buffer1_1_96_4x4_p_V_50 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_96_4x4_p_V_50 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_50_address0 { O 6 vector } buffer1_1_96_4x4_p_V_50_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_50_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_50'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1259 \
    name buffer1_1_96_4x4_p_V_51 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_96_4x4_p_V_51 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_51_address0 { O 6 vector } buffer1_1_96_4x4_p_V_51_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_51_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_51'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1260 \
    name buffer1_1_96_4x4_p_V_52 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_96_4x4_p_V_52 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_52_address0 { O 6 vector } buffer1_1_96_4x4_p_V_52_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_52_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_52'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1261 \
    name buffer1_1_96_4x4_p_V_53 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_96_4x4_p_V_53 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_53_address0 { O 6 vector } buffer1_1_96_4x4_p_V_53_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_53_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_53'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1262 \
    name buffer1_1_96_4x4_p_V_54 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_96_4x4_p_V_54 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_54_address0 { O 6 vector } buffer1_1_96_4x4_p_V_54_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_54_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_54'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1263 \
    name buffer1_1_96_4x4_p_V_55 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_96_4x4_p_V_55 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_55_address0 { O 6 vector } buffer1_1_96_4x4_p_V_55_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_55_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_55'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1264 \
    name buffer1_1_96_4x4_p_V_56 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_96_4x4_p_V_56 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_56_address0 { O 6 vector } buffer1_1_96_4x4_p_V_56_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_56_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_56'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1265 \
    name buffer1_1_96_4x4_p_V_57 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_96_4x4_p_V_57 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_57_address0 { O 6 vector } buffer1_1_96_4x4_p_V_57_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_57_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_57'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1266 \
    name buffer1_1_96_4x4_p_V_58 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_96_4x4_p_V_58 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_58_address0 { O 6 vector } buffer1_1_96_4x4_p_V_58_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_58_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_58'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1267 \
    name buffer1_1_96_4x4_p_V_59 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_96_4x4_p_V_59 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_59_address0 { O 6 vector } buffer1_1_96_4x4_p_V_59_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_59_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_59'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1268 \
    name buffer1_1_96_4x4_p_V_60 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_96_4x4_p_V_60 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_60_address0 { O 6 vector } buffer1_1_96_4x4_p_V_60_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_60_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_60'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1269 \
    name buffer1_1_96_4x4_p_V_61 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_96_4x4_p_V_61 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_61_address0 { O 6 vector } buffer1_1_96_4x4_p_V_61_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_61_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_61'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1270 \
    name buffer1_1_96_4x4_p_V_62 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_96_4x4_p_V_62 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_62_address0 { O 6 vector } buffer1_1_96_4x4_p_V_62_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_62_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_62'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1271 \
    name buffer1_1_96_4x4_p_V_63 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_96_4x4_p_V_63 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_63_address0 { O 6 vector } buffer1_1_96_4x4_p_V_63_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_63_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_63'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1272 \
    name buffer1_1_96_4x4_p_V_64 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_96_4x4_p_V_64 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_64_address0 { O 6 vector } buffer1_1_96_4x4_p_V_64_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_64_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_64'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1273 \
    name buffer1_1_96_4x4_p_V_65 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_96_4x4_p_V_65 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_65_address0 { O 6 vector } buffer1_1_96_4x4_p_V_65_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_65_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_65'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1274 \
    name buffer1_1_96_4x4_p_V_66 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_96_4x4_p_V_66 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_66_address0 { O 6 vector } buffer1_1_96_4x4_p_V_66_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_66_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_66'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1275 \
    name buffer1_1_96_4x4_p_V_67 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_96_4x4_p_V_67 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_67_address0 { O 6 vector } buffer1_1_96_4x4_p_V_67_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_67_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_67'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1276 \
    name buffer1_1_96_4x4_p_V_68 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_96_4x4_p_V_68 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_68_address0 { O 6 vector } buffer1_1_96_4x4_p_V_68_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_68_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_68'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1277 \
    name buffer1_1_96_4x4_p_V_69 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_96_4x4_p_V_69 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_69_address0 { O 6 vector } buffer1_1_96_4x4_p_V_69_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_69_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_69'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1278 \
    name buffer1_1_96_4x4_p_V_70 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_96_4x4_p_V_70 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_70_address0 { O 6 vector } buffer1_1_96_4x4_p_V_70_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_70_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_70'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1279 \
    name buffer1_1_96_4x4_p_V_71 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_96_4x4_p_V_71 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_71_address0 { O 6 vector } buffer1_1_96_4x4_p_V_71_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_71_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_71'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1280 \
    name buffer1_1_96_4x4_p_V_72 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_96_4x4_p_V_72 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_72_address0 { O 6 vector } buffer1_1_96_4x4_p_V_72_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_72_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_72'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1281 \
    name buffer1_1_96_4x4_p_V_73 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_96_4x4_p_V_73 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_73_address0 { O 6 vector } buffer1_1_96_4x4_p_V_73_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_73_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_73'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1282 \
    name buffer1_1_96_4x4_p_V_74 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_96_4x4_p_V_74 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_74_address0 { O 6 vector } buffer1_1_96_4x4_p_V_74_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_74_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_74'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1283 \
    name buffer1_1_96_4x4_p_V_75 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_96_4x4_p_V_75 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_75_address0 { O 6 vector } buffer1_1_96_4x4_p_V_75_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_75_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_75'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1284 \
    name buffer1_1_96_4x4_p_V_76 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_96_4x4_p_V_76 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_76_address0 { O 6 vector } buffer1_1_96_4x4_p_V_76_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_76_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_76'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1285 \
    name buffer1_1_96_4x4_p_V_77 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_96_4x4_p_V_77 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_77_address0 { O 6 vector } buffer1_1_96_4x4_p_V_77_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_77_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_77'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1286 \
    name buffer1_1_96_4x4_p_V_78 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_96_4x4_p_V_78 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_78_address0 { O 6 vector } buffer1_1_96_4x4_p_V_78_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_78_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_78'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1287 \
    name buffer1_1_96_4x4_p_V_79 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_96_4x4_p_V_79 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_79_address0 { O 6 vector } buffer1_1_96_4x4_p_V_79_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_79_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_79'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1288 \
    name buffer1_1_96_4x4_p_V_80 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_96_4x4_p_V_80 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_80_address0 { O 6 vector } buffer1_1_96_4x4_p_V_80_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_80_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_80'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1289 \
    name buffer1_1_96_4x4_p_V_81 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_96_4x4_p_V_81 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_81_address0 { O 6 vector } buffer1_1_96_4x4_p_V_81_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_81_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_81'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1290 \
    name buffer1_1_96_4x4_p_V_82 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_96_4x4_p_V_82 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_82_address0 { O 6 vector } buffer1_1_96_4x4_p_V_82_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_82_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_82'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1291 \
    name buffer1_1_96_4x4_p_V_83 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_96_4x4_p_V_83 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_83_address0 { O 6 vector } buffer1_1_96_4x4_p_V_83_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_83_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_83'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1292 \
    name buffer1_1_96_4x4_p_V_84 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_96_4x4_p_V_84 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_84_address0 { O 6 vector } buffer1_1_96_4x4_p_V_84_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_84_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_84'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1293 \
    name buffer1_1_96_4x4_p_V_85 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_96_4x4_p_V_85 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_85_address0 { O 6 vector } buffer1_1_96_4x4_p_V_85_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_85_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_85'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1294 \
    name buffer1_1_96_4x4_p_V_86 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_96_4x4_p_V_86 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_86_address0 { O 6 vector } buffer1_1_96_4x4_p_V_86_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_86_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_86'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1295 \
    name buffer1_1_96_4x4_p_V_87 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_96_4x4_p_V_87 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_87_address0 { O 6 vector } buffer1_1_96_4x4_p_V_87_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_87_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_87'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1296 \
    name buffer1_1_96_4x4_p_V_88 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_96_4x4_p_V_88 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_88_address0 { O 6 vector } buffer1_1_96_4x4_p_V_88_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_88_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_88'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1297 \
    name buffer1_1_96_4x4_p_V_89 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_96_4x4_p_V_89 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_89_address0 { O 6 vector } buffer1_1_96_4x4_p_V_89_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_89_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_89'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1298 \
    name buffer1_1_96_4x4_p_V_90 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_96_4x4_p_V_90 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_90_address0 { O 6 vector } buffer1_1_96_4x4_p_V_90_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_90_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_90'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1299 \
    name buffer1_1_96_4x4_p_V_91 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_96_4x4_p_V_91 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_91_address0 { O 6 vector } buffer1_1_96_4x4_p_V_91_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_91_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_91'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1300 \
    name buffer1_1_96_4x4_p_V_92 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_96_4x4_p_V_92 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_92_address0 { O 6 vector } buffer1_1_96_4x4_p_V_92_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_92_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_92'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1301 \
    name buffer1_1_96_4x4_p_V_93 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_96_4x4_p_V_93 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_93_address0 { O 6 vector } buffer1_1_96_4x4_p_V_93_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_93_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_93'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1302 \
    name buffer1_1_96_4x4_p_V_94 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_96_4x4_p_V_94 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_94_address0 { O 6 vector } buffer1_1_96_4x4_p_V_94_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_94_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_94'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1303 \
    name buffer1_1_96_4x4_p_V_95 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename buffer1_1_96_4x4_p_V_95 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_95_address0 { O 6 vector } buffer1_1_96_4x4_p_V_95_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_95_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_95'"
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


