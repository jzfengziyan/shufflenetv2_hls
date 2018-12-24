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
    id 1012 \
    name input_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename input_V \
    op interface \
    ports { input_V_address0 { O 12 vector } input_V_ce0 { O 1 bit } input_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'input_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1013 \
    name weight_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_0_V \
    op interface \
    ports { weight_0_V_address0 { O 7 vector } weight_0_V_ce0 { O 1 bit } weight_0_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1014 \
    name weight_1_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_1_V \
    op interface \
    ports { weight_1_V_address0 { O 7 vector } weight_1_V_ce0 { O 1 bit } weight_1_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1015 \
    name weight_2_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_2_V \
    op interface \
    ports { weight_2_V_address0 { O 7 vector } weight_2_V_ce0 { O 1 bit } weight_2_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1016 \
    name weight_3_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_3_V \
    op interface \
    ports { weight_3_V_address0 { O 7 vector } weight_3_V_ce0 { O 1 bit } weight_3_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_3_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1017 \
    name weight_4_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_4_V \
    op interface \
    ports { weight_4_V_address0 { O 7 vector } weight_4_V_ce0 { O 1 bit } weight_4_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_4_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1018 \
    name weight_5_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_5_V \
    op interface \
    ports { weight_5_V_address0 { O 7 vector } weight_5_V_ce0 { O 1 bit } weight_5_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_5_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1019 \
    name weight_6_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_6_V \
    op interface \
    ports { weight_6_V_address0 { O 7 vector } weight_6_V_ce0 { O 1 bit } weight_6_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_6_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1020 \
    name weight_7_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_7_V \
    op interface \
    ports { weight_7_V_address0 { O 7 vector } weight_7_V_ce0 { O 1 bit } weight_7_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_7_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1021 \
    name weight_8_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_8_V \
    op interface \
    ports { weight_8_V_address0 { O 7 vector } weight_8_V_ce0 { O 1 bit } weight_8_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_8_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1022 \
    name weight_9_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_9_V \
    op interface \
    ports { weight_9_V_address0 { O 7 vector } weight_9_V_ce0 { O 1 bit } weight_9_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_9_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1023 \
    name weight_10_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_10_V \
    op interface \
    ports { weight_10_V_address0 { O 7 vector } weight_10_V_ce0 { O 1 bit } weight_10_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_10_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1024 \
    name weight_11_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_11_V \
    op interface \
    ports { weight_11_V_address0 { O 7 vector } weight_11_V_ce0 { O 1 bit } weight_11_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_11_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1025 \
    name weight_12_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_12_V \
    op interface \
    ports { weight_12_V_address0 { O 7 vector } weight_12_V_ce0 { O 1 bit } weight_12_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_12_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1026 \
    name weight_13_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_13_V \
    op interface \
    ports { weight_13_V_address0 { O 7 vector } weight_13_V_ce0 { O 1 bit } weight_13_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_13_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1027 \
    name weight_14_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_14_V \
    op interface \
    ports { weight_14_V_address0 { O 7 vector } weight_14_V_ce0 { O 1 bit } weight_14_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_14_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1028 \
    name weight_15_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_15_V \
    op interface \
    ports { weight_15_V_address0 { O 7 vector } weight_15_V_ce0 { O 1 bit } weight_15_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_15_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1029 \
    name weight_16_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_16_V \
    op interface \
    ports { weight_16_V_address0 { O 7 vector } weight_16_V_ce0 { O 1 bit } weight_16_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_16_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1030 \
    name weight_17_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_17_V \
    op interface \
    ports { weight_17_V_address0 { O 7 vector } weight_17_V_ce0 { O 1 bit } weight_17_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_17_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1031 \
    name weight_18_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_18_V \
    op interface \
    ports { weight_18_V_address0 { O 7 vector } weight_18_V_ce0 { O 1 bit } weight_18_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_18_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1032 \
    name weight_19_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_19_V \
    op interface \
    ports { weight_19_V_address0 { O 7 vector } weight_19_V_ce0 { O 1 bit } weight_19_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_19_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1033 \
    name weight_20_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_20_V \
    op interface \
    ports { weight_20_V_address0 { O 7 vector } weight_20_V_ce0 { O 1 bit } weight_20_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_20_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1034 \
    name weight_21_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_21_V \
    op interface \
    ports { weight_21_V_address0 { O 7 vector } weight_21_V_ce0 { O 1 bit } weight_21_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_21_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1035 \
    name weight_22_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_22_V \
    op interface \
    ports { weight_22_V_address0 { O 7 vector } weight_22_V_ce0 { O 1 bit } weight_22_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_22_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1036 \
    name weight_23_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_23_V \
    op interface \
    ports { weight_23_V_address0 { O 7 vector } weight_23_V_ce0 { O 1 bit } weight_23_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_23_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1037 \
    name weight_24_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_24_V \
    op interface \
    ports { weight_24_V_address0 { O 7 vector } weight_24_V_ce0 { O 1 bit } weight_24_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_24_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1038 \
    name weight_25_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_25_V \
    op interface \
    ports { weight_25_V_address0 { O 7 vector } weight_25_V_ce0 { O 1 bit } weight_25_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_25_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1039 \
    name weight_26_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_26_V \
    op interface \
    ports { weight_26_V_address0 { O 7 vector } weight_26_V_ce0 { O 1 bit } weight_26_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_26_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1040 \
    name weight_27_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_27_V \
    op interface \
    ports { weight_27_V_address0 { O 7 vector } weight_27_V_ce0 { O 1 bit } weight_27_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_27_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1041 \
    name weight_28_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_28_V \
    op interface \
    ports { weight_28_V_address0 { O 7 vector } weight_28_V_ce0 { O 1 bit } weight_28_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_28_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1042 \
    name weight_29_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_29_V \
    op interface \
    ports { weight_29_V_address0 { O 7 vector } weight_29_V_ce0 { O 1 bit } weight_29_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_29_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1043 \
    name weight_30_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_30_V \
    op interface \
    ports { weight_30_V_address0 { O 7 vector } weight_30_V_ce0 { O 1 bit } weight_30_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_30_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1044 \
    name weight_31_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_31_V \
    op interface \
    ports { weight_31_V_address0 { O 7 vector } weight_31_V_ce0 { O 1 bit } weight_31_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_31_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1045 \
    name weight_32_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_32_V \
    op interface \
    ports { weight_32_V_address0 { O 7 vector } weight_32_V_ce0 { O 1 bit } weight_32_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_32_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1046 \
    name weight_33_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_33_V \
    op interface \
    ports { weight_33_V_address0 { O 7 vector } weight_33_V_ce0 { O 1 bit } weight_33_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_33_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1047 \
    name weight_34_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_34_V \
    op interface \
    ports { weight_34_V_address0 { O 7 vector } weight_34_V_ce0 { O 1 bit } weight_34_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_34_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1048 \
    name weight_35_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_35_V \
    op interface \
    ports { weight_35_V_address0 { O 7 vector } weight_35_V_ce0 { O 1 bit } weight_35_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_35_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1049 \
    name weight_36_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_36_V \
    op interface \
    ports { weight_36_V_address0 { O 7 vector } weight_36_V_ce0 { O 1 bit } weight_36_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_36_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1050 \
    name weight_37_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_37_V \
    op interface \
    ports { weight_37_V_address0 { O 7 vector } weight_37_V_ce0 { O 1 bit } weight_37_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_37_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1051 \
    name weight_38_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_38_V \
    op interface \
    ports { weight_38_V_address0 { O 7 vector } weight_38_V_ce0 { O 1 bit } weight_38_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_38_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1052 \
    name weight_39_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_39_V \
    op interface \
    ports { weight_39_V_address0 { O 7 vector } weight_39_V_ce0 { O 1 bit } weight_39_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_39_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1053 \
    name weight_40_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_40_V \
    op interface \
    ports { weight_40_V_address0 { O 7 vector } weight_40_V_ce0 { O 1 bit } weight_40_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_40_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1054 \
    name weight_41_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_41_V \
    op interface \
    ports { weight_41_V_address0 { O 7 vector } weight_41_V_ce0 { O 1 bit } weight_41_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_41_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1055 \
    name weight_42_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_42_V \
    op interface \
    ports { weight_42_V_address0 { O 7 vector } weight_42_V_ce0 { O 1 bit } weight_42_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_42_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1056 \
    name weight_43_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_43_V \
    op interface \
    ports { weight_43_V_address0 { O 7 vector } weight_43_V_ce0 { O 1 bit } weight_43_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_43_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1057 \
    name weight_44_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_44_V \
    op interface \
    ports { weight_44_V_address0 { O 7 vector } weight_44_V_ce0 { O 1 bit } weight_44_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_44_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1058 \
    name weight_45_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_45_V \
    op interface \
    ports { weight_45_V_address0 { O 7 vector } weight_45_V_ce0 { O 1 bit } weight_45_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_45_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1059 \
    name weight_46_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_46_V \
    op interface \
    ports { weight_46_V_address0 { O 7 vector } weight_46_V_ce0 { O 1 bit } weight_46_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_46_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1060 \
    name weight_47_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_47_V \
    op interface \
    ports { weight_47_V_address0 { O 7 vector } weight_47_V_ce0 { O 1 bit } weight_47_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_47_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1061 \
    name weight_48_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_48_V \
    op interface \
    ports { weight_48_V_address0 { O 7 vector } weight_48_V_ce0 { O 1 bit } weight_48_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_48_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1062 \
    name weight_49_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_49_V \
    op interface \
    ports { weight_49_V_address0 { O 7 vector } weight_49_V_ce0 { O 1 bit } weight_49_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_49_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1063 \
    name weight_50_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_50_V \
    op interface \
    ports { weight_50_V_address0 { O 7 vector } weight_50_V_ce0 { O 1 bit } weight_50_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_50_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1064 \
    name weight_51_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_51_V \
    op interface \
    ports { weight_51_V_address0 { O 7 vector } weight_51_V_ce0 { O 1 bit } weight_51_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_51_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1065 \
    name weight_52_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_52_V \
    op interface \
    ports { weight_52_V_address0 { O 7 vector } weight_52_V_ce0 { O 1 bit } weight_52_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_52_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1066 \
    name weight_53_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_53_V \
    op interface \
    ports { weight_53_V_address0 { O 7 vector } weight_53_V_ce0 { O 1 bit } weight_53_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_53_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1067 \
    name weight_54_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_54_V \
    op interface \
    ports { weight_54_V_address0 { O 7 vector } weight_54_V_ce0 { O 1 bit } weight_54_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_54_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1068 \
    name weight_55_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_55_V \
    op interface \
    ports { weight_55_V_address0 { O 7 vector } weight_55_V_ce0 { O 1 bit } weight_55_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_55_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1069 \
    name weight_56_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_56_V \
    op interface \
    ports { weight_56_V_address0 { O 7 vector } weight_56_V_ce0 { O 1 bit } weight_56_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_56_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1070 \
    name weight_57_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_57_V \
    op interface \
    ports { weight_57_V_address0 { O 7 vector } weight_57_V_ce0 { O 1 bit } weight_57_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_57_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1071 \
    name weight_58_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_58_V \
    op interface \
    ports { weight_58_V_address0 { O 7 vector } weight_58_V_ce0 { O 1 bit } weight_58_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_58_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1072 \
    name weight_59_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_59_V \
    op interface \
    ports { weight_59_V_address0 { O 7 vector } weight_59_V_ce0 { O 1 bit } weight_59_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_59_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1073 \
    name weight_60_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_60_V \
    op interface \
    ports { weight_60_V_address0 { O 7 vector } weight_60_V_ce0 { O 1 bit } weight_60_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_60_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1074 \
    name weight_61_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_61_V \
    op interface \
    ports { weight_61_V_address0 { O 7 vector } weight_61_V_ce0 { O 1 bit } weight_61_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_61_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1075 \
    name weight_62_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_62_V \
    op interface \
    ports { weight_62_V_address0 { O 7 vector } weight_62_V_ce0 { O 1 bit } weight_62_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_62_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1076 \
    name weight_63_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_63_V \
    op interface \
    ports { weight_63_V_address0 { O 7 vector } weight_63_V_ce0 { O 1 bit } weight_63_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_63_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1077 \
    name weight_64_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_64_V \
    op interface \
    ports { weight_64_V_address0 { O 7 vector } weight_64_V_ce0 { O 1 bit } weight_64_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_64_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1078 \
    name weight_65_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_65_V \
    op interface \
    ports { weight_65_V_address0 { O 7 vector } weight_65_V_ce0 { O 1 bit } weight_65_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_65_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1079 \
    name weight_66_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_66_V \
    op interface \
    ports { weight_66_V_address0 { O 7 vector } weight_66_V_ce0 { O 1 bit } weight_66_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_66_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1080 \
    name weight_67_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_67_V \
    op interface \
    ports { weight_67_V_address0 { O 7 vector } weight_67_V_ce0 { O 1 bit } weight_67_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_67_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1081 \
    name weight_68_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_68_V \
    op interface \
    ports { weight_68_V_address0 { O 7 vector } weight_68_V_ce0 { O 1 bit } weight_68_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_68_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1082 \
    name weight_69_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_69_V \
    op interface \
    ports { weight_69_V_address0 { O 7 vector } weight_69_V_ce0 { O 1 bit } weight_69_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_69_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1083 \
    name weight_70_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_70_V \
    op interface \
    ports { weight_70_V_address0 { O 7 vector } weight_70_V_ce0 { O 1 bit } weight_70_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_70_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1084 \
    name weight_71_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_71_V \
    op interface \
    ports { weight_71_V_address0 { O 7 vector } weight_71_V_ce0 { O 1 bit } weight_71_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_71_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1085 \
    name weight_72_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_72_V \
    op interface \
    ports { weight_72_V_address0 { O 7 vector } weight_72_V_ce0 { O 1 bit } weight_72_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_72_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1086 \
    name weight_73_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_73_V \
    op interface \
    ports { weight_73_V_address0 { O 7 vector } weight_73_V_ce0 { O 1 bit } weight_73_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_73_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1087 \
    name weight_74_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_74_V \
    op interface \
    ports { weight_74_V_address0 { O 7 vector } weight_74_V_ce0 { O 1 bit } weight_74_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_74_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1088 \
    name weight_75_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_75_V \
    op interface \
    ports { weight_75_V_address0 { O 7 vector } weight_75_V_ce0 { O 1 bit } weight_75_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_75_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1089 \
    name weight_76_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_76_V \
    op interface \
    ports { weight_76_V_address0 { O 7 vector } weight_76_V_ce0 { O 1 bit } weight_76_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_76_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1090 \
    name weight_77_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_77_V \
    op interface \
    ports { weight_77_V_address0 { O 7 vector } weight_77_V_ce0 { O 1 bit } weight_77_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_77_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1091 \
    name weight_78_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_78_V \
    op interface \
    ports { weight_78_V_address0 { O 7 vector } weight_78_V_ce0 { O 1 bit } weight_78_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_78_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1092 \
    name weight_79_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_79_V \
    op interface \
    ports { weight_79_V_address0 { O 7 vector } weight_79_V_ce0 { O 1 bit } weight_79_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_79_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1093 \
    name weight_80_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_80_V \
    op interface \
    ports { weight_80_V_address0 { O 7 vector } weight_80_V_ce0 { O 1 bit } weight_80_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_80_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1094 \
    name weight_81_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_81_V \
    op interface \
    ports { weight_81_V_address0 { O 7 vector } weight_81_V_ce0 { O 1 bit } weight_81_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_81_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1095 \
    name weight_82_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_82_V \
    op interface \
    ports { weight_82_V_address0 { O 7 vector } weight_82_V_ce0 { O 1 bit } weight_82_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_82_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1096 \
    name weight_83_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_83_V \
    op interface \
    ports { weight_83_V_address0 { O 7 vector } weight_83_V_ce0 { O 1 bit } weight_83_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_83_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1097 \
    name weight_84_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_84_V \
    op interface \
    ports { weight_84_V_address0 { O 7 vector } weight_84_V_ce0 { O 1 bit } weight_84_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_84_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1098 \
    name weight_85_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_85_V \
    op interface \
    ports { weight_85_V_address0 { O 7 vector } weight_85_V_ce0 { O 1 bit } weight_85_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_85_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1099 \
    name weight_86_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_86_V \
    op interface \
    ports { weight_86_V_address0 { O 7 vector } weight_86_V_ce0 { O 1 bit } weight_86_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_86_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1100 \
    name weight_87_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_87_V \
    op interface \
    ports { weight_87_V_address0 { O 7 vector } weight_87_V_ce0 { O 1 bit } weight_87_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_87_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1101 \
    name weight_88_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_88_V \
    op interface \
    ports { weight_88_V_address0 { O 7 vector } weight_88_V_ce0 { O 1 bit } weight_88_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_88_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1102 \
    name weight_89_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_89_V \
    op interface \
    ports { weight_89_V_address0 { O 7 vector } weight_89_V_ce0 { O 1 bit } weight_89_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_89_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1103 \
    name weight_90_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_90_V \
    op interface \
    ports { weight_90_V_address0 { O 7 vector } weight_90_V_ce0 { O 1 bit } weight_90_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_90_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1104 \
    name weight_91_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_91_V \
    op interface \
    ports { weight_91_V_address0 { O 7 vector } weight_91_V_ce0 { O 1 bit } weight_91_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_91_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1105 \
    name weight_92_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_92_V \
    op interface \
    ports { weight_92_V_address0 { O 7 vector } weight_92_V_ce0 { O 1 bit } weight_92_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_92_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1106 \
    name weight_93_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_93_V \
    op interface \
    ports { weight_93_V_address0 { O 7 vector } weight_93_V_ce0 { O 1 bit } weight_93_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_93_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1107 \
    name weight_94_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_94_V \
    op interface \
    ports { weight_94_V_address0 { O 7 vector } weight_94_V_ce0 { O 1 bit } weight_94_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_94_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1108 \
    name weight_95_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_95_V \
    op interface \
    ports { weight_95_V_address0 { O 7 vector } weight_95_V_ce0 { O 1 bit } weight_95_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_95_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1109 \
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
    id 1110 \
    name buffer1_1_96_4x4_p_V_96 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_96_4x4_p_V_96 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_96_address0 { O 6 vector } buffer1_1_96_4x4_p_V_96_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_96_we0 { O 1 bit } buffer1_1_96_4x4_p_V_96_d0 { O 8 vector } buffer1_1_96_4x4_p_V_96_q0 { I 8 vector } buffer1_1_96_4x4_p_V_96_address1 { O 6 vector } buffer1_1_96_4x4_p_V_96_ce1 { O 1 bit } buffer1_1_96_4x4_p_V_96_we1 { O 1 bit } buffer1_1_96_4x4_p_V_96_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_96'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1111 \
    name buffer1_1_96_4x4_p_V_48 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_96_4x4_p_V_48 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_48_address0 { O 6 vector } buffer1_1_96_4x4_p_V_48_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_48_we0 { O 1 bit } buffer1_1_96_4x4_p_V_48_d0 { O 8 vector } buffer1_1_96_4x4_p_V_48_q0 { I 8 vector } buffer1_1_96_4x4_p_V_48_address1 { O 6 vector } buffer1_1_96_4x4_p_V_48_ce1 { O 1 bit } buffer1_1_96_4x4_p_V_48_we1 { O 1 bit } buffer1_1_96_4x4_p_V_48_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_48'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1112 \
    name buffer1_1_96_4x4_p_V_1 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_96_4x4_p_V_1 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_1_address0 { O 6 vector } buffer1_1_96_4x4_p_V_1_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_1_we0 { O 1 bit } buffer1_1_96_4x4_p_V_1_d0 { O 8 vector } buffer1_1_96_4x4_p_V_1_q0 { I 8 vector } buffer1_1_96_4x4_p_V_1_address1 { O 6 vector } buffer1_1_96_4x4_p_V_1_ce1 { O 1 bit } buffer1_1_96_4x4_p_V_1_we1 { O 1 bit } buffer1_1_96_4x4_p_V_1_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1113 \
    name buffer1_1_96_4x4_p_V_49 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_96_4x4_p_V_49 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_49_address0 { O 6 vector } buffer1_1_96_4x4_p_V_49_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_49_we0 { O 1 bit } buffer1_1_96_4x4_p_V_49_d0 { O 8 vector } buffer1_1_96_4x4_p_V_49_q0 { I 8 vector } buffer1_1_96_4x4_p_V_49_address1 { O 6 vector } buffer1_1_96_4x4_p_V_49_ce1 { O 1 bit } buffer1_1_96_4x4_p_V_49_we1 { O 1 bit } buffer1_1_96_4x4_p_V_49_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_49'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1114 \
    name buffer1_1_96_4x4_p_V_2 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_96_4x4_p_V_2 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_2_address0 { O 6 vector } buffer1_1_96_4x4_p_V_2_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_2_we0 { O 1 bit } buffer1_1_96_4x4_p_V_2_d0 { O 8 vector } buffer1_1_96_4x4_p_V_2_q0 { I 8 vector } buffer1_1_96_4x4_p_V_2_address1 { O 6 vector } buffer1_1_96_4x4_p_V_2_ce1 { O 1 bit } buffer1_1_96_4x4_p_V_2_we1 { O 1 bit } buffer1_1_96_4x4_p_V_2_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1115 \
    name buffer1_1_96_4x4_p_V_50 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_96_4x4_p_V_50 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_50_address0 { O 6 vector } buffer1_1_96_4x4_p_V_50_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_50_we0 { O 1 bit } buffer1_1_96_4x4_p_V_50_d0 { O 8 vector } buffer1_1_96_4x4_p_V_50_q0 { I 8 vector } buffer1_1_96_4x4_p_V_50_address1 { O 6 vector } buffer1_1_96_4x4_p_V_50_ce1 { O 1 bit } buffer1_1_96_4x4_p_V_50_we1 { O 1 bit } buffer1_1_96_4x4_p_V_50_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_50'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1116 \
    name buffer1_1_96_4x4_p_V_3 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_96_4x4_p_V_3 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_3_address0 { O 6 vector } buffer1_1_96_4x4_p_V_3_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_3_we0 { O 1 bit } buffer1_1_96_4x4_p_V_3_d0 { O 8 vector } buffer1_1_96_4x4_p_V_3_q0 { I 8 vector } buffer1_1_96_4x4_p_V_3_address1 { O 6 vector } buffer1_1_96_4x4_p_V_3_ce1 { O 1 bit } buffer1_1_96_4x4_p_V_3_we1 { O 1 bit } buffer1_1_96_4x4_p_V_3_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1117 \
    name buffer1_1_96_4x4_p_V_51 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_96_4x4_p_V_51 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_51_address0 { O 6 vector } buffer1_1_96_4x4_p_V_51_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_51_we0 { O 1 bit } buffer1_1_96_4x4_p_V_51_d0 { O 8 vector } buffer1_1_96_4x4_p_V_51_q0 { I 8 vector } buffer1_1_96_4x4_p_V_51_address1 { O 6 vector } buffer1_1_96_4x4_p_V_51_ce1 { O 1 bit } buffer1_1_96_4x4_p_V_51_we1 { O 1 bit } buffer1_1_96_4x4_p_V_51_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_51'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1118 \
    name buffer1_1_96_4x4_p_V_4 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_96_4x4_p_V_4 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_4_address0 { O 6 vector } buffer1_1_96_4x4_p_V_4_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_4_we0 { O 1 bit } buffer1_1_96_4x4_p_V_4_d0 { O 8 vector } buffer1_1_96_4x4_p_V_4_q0 { I 8 vector } buffer1_1_96_4x4_p_V_4_address1 { O 6 vector } buffer1_1_96_4x4_p_V_4_ce1 { O 1 bit } buffer1_1_96_4x4_p_V_4_we1 { O 1 bit } buffer1_1_96_4x4_p_V_4_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1119 \
    name buffer1_1_96_4x4_p_V_52 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_96_4x4_p_V_52 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_52_address0 { O 6 vector } buffer1_1_96_4x4_p_V_52_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_52_we0 { O 1 bit } buffer1_1_96_4x4_p_V_52_d0 { O 8 vector } buffer1_1_96_4x4_p_V_52_q0 { I 8 vector } buffer1_1_96_4x4_p_V_52_address1 { O 6 vector } buffer1_1_96_4x4_p_V_52_ce1 { O 1 bit } buffer1_1_96_4x4_p_V_52_we1 { O 1 bit } buffer1_1_96_4x4_p_V_52_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_52'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1120 \
    name buffer1_1_96_4x4_p_V_5 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_96_4x4_p_V_5 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_5_address0 { O 6 vector } buffer1_1_96_4x4_p_V_5_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_5_we0 { O 1 bit } buffer1_1_96_4x4_p_V_5_d0 { O 8 vector } buffer1_1_96_4x4_p_V_5_q0 { I 8 vector } buffer1_1_96_4x4_p_V_5_address1 { O 6 vector } buffer1_1_96_4x4_p_V_5_ce1 { O 1 bit } buffer1_1_96_4x4_p_V_5_we1 { O 1 bit } buffer1_1_96_4x4_p_V_5_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1121 \
    name buffer1_1_96_4x4_p_V_53 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_96_4x4_p_V_53 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_53_address0 { O 6 vector } buffer1_1_96_4x4_p_V_53_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_53_we0 { O 1 bit } buffer1_1_96_4x4_p_V_53_d0 { O 8 vector } buffer1_1_96_4x4_p_V_53_q0 { I 8 vector } buffer1_1_96_4x4_p_V_53_address1 { O 6 vector } buffer1_1_96_4x4_p_V_53_ce1 { O 1 bit } buffer1_1_96_4x4_p_V_53_we1 { O 1 bit } buffer1_1_96_4x4_p_V_53_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_53'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1122 \
    name buffer1_1_96_4x4_p_V_6 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_96_4x4_p_V_6 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_6_address0 { O 6 vector } buffer1_1_96_4x4_p_V_6_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_6_we0 { O 1 bit } buffer1_1_96_4x4_p_V_6_d0 { O 8 vector } buffer1_1_96_4x4_p_V_6_q0 { I 8 vector } buffer1_1_96_4x4_p_V_6_address1 { O 6 vector } buffer1_1_96_4x4_p_V_6_ce1 { O 1 bit } buffer1_1_96_4x4_p_V_6_we1 { O 1 bit } buffer1_1_96_4x4_p_V_6_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1123 \
    name buffer1_1_96_4x4_p_V_54 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_96_4x4_p_V_54 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_54_address0 { O 6 vector } buffer1_1_96_4x4_p_V_54_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_54_we0 { O 1 bit } buffer1_1_96_4x4_p_V_54_d0 { O 8 vector } buffer1_1_96_4x4_p_V_54_q0 { I 8 vector } buffer1_1_96_4x4_p_V_54_address1 { O 6 vector } buffer1_1_96_4x4_p_V_54_ce1 { O 1 bit } buffer1_1_96_4x4_p_V_54_we1 { O 1 bit } buffer1_1_96_4x4_p_V_54_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_54'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1124 \
    name buffer1_1_96_4x4_p_V_7 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_96_4x4_p_V_7 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_7_address0 { O 6 vector } buffer1_1_96_4x4_p_V_7_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_7_we0 { O 1 bit } buffer1_1_96_4x4_p_V_7_d0 { O 8 vector } buffer1_1_96_4x4_p_V_7_q0 { I 8 vector } buffer1_1_96_4x4_p_V_7_address1 { O 6 vector } buffer1_1_96_4x4_p_V_7_ce1 { O 1 bit } buffer1_1_96_4x4_p_V_7_we1 { O 1 bit } buffer1_1_96_4x4_p_V_7_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_7'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1125 \
    name buffer1_1_96_4x4_p_V_55 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_96_4x4_p_V_55 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_55_address0 { O 6 vector } buffer1_1_96_4x4_p_V_55_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_55_we0 { O 1 bit } buffer1_1_96_4x4_p_V_55_d0 { O 8 vector } buffer1_1_96_4x4_p_V_55_q0 { I 8 vector } buffer1_1_96_4x4_p_V_55_address1 { O 6 vector } buffer1_1_96_4x4_p_V_55_ce1 { O 1 bit } buffer1_1_96_4x4_p_V_55_we1 { O 1 bit } buffer1_1_96_4x4_p_V_55_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_55'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1126 \
    name buffer1_1_96_4x4_p_V_8 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_96_4x4_p_V_8 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_8_address0 { O 6 vector } buffer1_1_96_4x4_p_V_8_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_8_we0 { O 1 bit } buffer1_1_96_4x4_p_V_8_d0 { O 8 vector } buffer1_1_96_4x4_p_V_8_q0 { I 8 vector } buffer1_1_96_4x4_p_V_8_address1 { O 6 vector } buffer1_1_96_4x4_p_V_8_ce1 { O 1 bit } buffer1_1_96_4x4_p_V_8_we1 { O 1 bit } buffer1_1_96_4x4_p_V_8_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_8'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1127 \
    name buffer1_1_96_4x4_p_V_56 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_96_4x4_p_V_56 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_56_address0 { O 6 vector } buffer1_1_96_4x4_p_V_56_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_56_we0 { O 1 bit } buffer1_1_96_4x4_p_V_56_d0 { O 8 vector } buffer1_1_96_4x4_p_V_56_q0 { I 8 vector } buffer1_1_96_4x4_p_V_56_address1 { O 6 vector } buffer1_1_96_4x4_p_V_56_ce1 { O 1 bit } buffer1_1_96_4x4_p_V_56_we1 { O 1 bit } buffer1_1_96_4x4_p_V_56_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_56'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1128 \
    name buffer1_1_96_4x4_p_V_9 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_96_4x4_p_V_9 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_9_address0 { O 6 vector } buffer1_1_96_4x4_p_V_9_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_9_we0 { O 1 bit } buffer1_1_96_4x4_p_V_9_d0 { O 8 vector } buffer1_1_96_4x4_p_V_9_q0 { I 8 vector } buffer1_1_96_4x4_p_V_9_address1 { O 6 vector } buffer1_1_96_4x4_p_V_9_ce1 { O 1 bit } buffer1_1_96_4x4_p_V_9_we1 { O 1 bit } buffer1_1_96_4x4_p_V_9_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_9'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1129 \
    name buffer1_1_96_4x4_p_V_57 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_96_4x4_p_V_57 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_57_address0 { O 6 vector } buffer1_1_96_4x4_p_V_57_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_57_we0 { O 1 bit } buffer1_1_96_4x4_p_V_57_d0 { O 8 vector } buffer1_1_96_4x4_p_V_57_q0 { I 8 vector } buffer1_1_96_4x4_p_V_57_address1 { O 6 vector } buffer1_1_96_4x4_p_V_57_ce1 { O 1 bit } buffer1_1_96_4x4_p_V_57_we1 { O 1 bit } buffer1_1_96_4x4_p_V_57_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_57'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1130 \
    name buffer1_1_96_4x4_p_V_10 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_96_4x4_p_V_10 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_10_address0 { O 6 vector } buffer1_1_96_4x4_p_V_10_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_10_we0 { O 1 bit } buffer1_1_96_4x4_p_V_10_d0 { O 8 vector } buffer1_1_96_4x4_p_V_10_q0 { I 8 vector } buffer1_1_96_4x4_p_V_10_address1 { O 6 vector } buffer1_1_96_4x4_p_V_10_ce1 { O 1 bit } buffer1_1_96_4x4_p_V_10_we1 { O 1 bit } buffer1_1_96_4x4_p_V_10_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_10'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1131 \
    name buffer1_1_96_4x4_p_V_58 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_96_4x4_p_V_58 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_58_address0 { O 6 vector } buffer1_1_96_4x4_p_V_58_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_58_we0 { O 1 bit } buffer1_1_96_4x4_p_V_58_d0 { O 8 vector } buffer1_1_96_4x4_p_V_58_q0 { I 8 vector } buffer1_1_96_4x4_p_V_58_address1 { O 6 vector } buffer1_1_96_4x4_p_V_58_ce1 { O 1 bit } buffer1_1_96_4x4_p_V_58_we1 { O 1 bit } buffer1_1_96_4x4_p_V_58_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_58'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1132 \
    name buffer1_1_96_4x4_p_V_11 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_96_4x4_p_V_11 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_11_address0 { O 6 vector } buffer1_1_96_4x4_p_V_11_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_11_we0 { O 1 bit } buffer1_1_96_4x4_p_V_11_d0 { O 8 vector } buffer1_1_96_4x4_p_V_11_q0 { I 8 vector } buffer1_1_96_4x4_p_V_11_address1 { O 6 vector } buffer1_1_96_4x4_p_V_11_ce1 { O 1 bit } buffer1_1_96_4x4_p_V_11_we1 { O 1 bit } buffer1_1_96_4x4_p_V_11_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_11'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1133 \
    name buffer1_1_96_4x4_p_V_59 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_96_4x4_p_V_59 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_59_address0 { O 6 vector } buffer1_1_96_4x4_p_V_59_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_59_we0 { O 1 bit } buffer1_1_96_4x4_p_V_59_d0 { O 8 vector } buffer1_1_96_4x4_p_V_59_q0 { I 8 vector } buffer1_1_96_4x4_p_V_59_address1 { O 6 vector } buffer1_1_96_4x4_p_V_59_ce1 { O 1 bit } buffer1_1_96_4x4_p_V_59_we1 { O 1 bit } buffer1_1_96_4x4_p_V_59_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_59'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1134 \
    name buffer1_1_96_4x4_p_V_12 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_96_4x4_p_V_12 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_12_address0 { O 6 vector } buffer1_1_96_4x4_p_V_12_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_12_we0 { O 1 bit } buffer1_1_96_4x4_p_V_12_d0 { O 8 vector } buffer1_1_96_4x4_p_V_12_q0 { I 8 vector } buffer1_1_96_4x4_p_V_12_address1 { O 6 vector } buffer1_1_96_4x4_p_V_12_ce1 { O 1 bit } buffer1_1_96_4x4_p_V_12_we1 { O 1 bit } buffer1_1_96_4x4_p_V_12_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_12'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1135 \
    name buffer1_1_96_4x4_p_V_60 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_96_4x4_p_V_60 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_60_address0 { O 6 vector } buffer1_1_96_4x4_p_V_60_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_60_we0 { O 1 bit } buffer1_1_96_4x4_p_V_60_d0 { O 8 vector } buffer1_1_96_4x4_p_V_60_q0 { I 8 vector } buffer1_1_96_4x4_p_V_60_address1 { O 6 vector } buffer1_1_96_4x4_p_V_60_ce1 { O 1 bit } buffer1_1_96_4x4_p_V_60_we1 { O 1 bit } buffer1_1_96_4x4_p_V_60_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_60'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1136 \
    name buffer1_1_96_4x4_p_V_13 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_96_4x4_p_V_13 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_13_address0 { O 6 vector } buffer1_1_96_4x4_p_V_13_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_13_we0 { O 1 bit } buffer1_1_96_4x4_p_V_13_d0 { O 8 vector } buffer1_1_96_4x4_p_V_13_q0 { I 8 vector } buffer1_1_96_4x4_p_V_13_address1 { O 6 vector } buffer1_1_96_4x4_p_V_13_ce1 { O 1 bit } buffer1_1_96_4x4_p_V_13_we1 { O 1 bit } buffer1_1_96_4x4_p_V_13_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_13'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1137 \
    name buffer1_1_96_4x4_p_V_61 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_96_4x4_p_V_61 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_61_address0 { O 6 vector } buffer1_1_96_4x4_p_V_61_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_61_we0 { O 1 bit } buffer1_1_96_4x4_p_V_61_d0 { O 8 vector } buffer1_1_96_4x4_p_V_61_q0 { I 8 vector } buffer1_1_96_4x4_p_V_61_address1 { O 6 vector } buffer1_1_96_4x4_p_V_61_ce1 { O 1 bit } buffer1_1_96_4x4_p_V_61_we1 { O 1 bit } buffer1_1_96_4x4_p_V_61_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_61'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1138 \
    name buffer1_1_96_4x4_p_V_14 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_96_4x4_p_V_14 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_14_address0 { O 6 vector } buffer1_1_96_4x4_p_V_14_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_14_we0 { O 1 bit } buffer1_1_96_4x4_p_V_14_d0 { O 8 vector } buffer1_1_96_4x4_p_V_14_q0 { I 8 vector } buffer1_1_96_4x4_p_V_14_address1 { O 6 vector } buffer1_1_96_4x4_p_V_14_ce1 { O 1 bit } buffer1_1_96_4x4_p_V_14_we1 { O 1 bit } buffer1_1_96_4x4_p_V_14_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_14'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1139 \
    name buffer1_1_96_4x4_p_V_62 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_96_4x4_p_V_62 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_62_address0 { O 6 vector } buffer1_1_96_4x4_p_V_62_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_62_we0 { O 1 bit } buffer1_1_96_4x4_p_V_62_d0 { O 8 vector } buffer1_1_96_4x4_p_V_62_q0 { I 8 vector } buffer1_1_96_4x4_p_V_62_address1 { O 6 vector } buffer1_1_96_4x4_p_V_62_ce1 { O 1 bit } buffer1_1_96_4x4_p_V_62_we1 { O 1 bit } buffer1_1_96_4x4_p_V_62_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_62'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1140 \
    name buffer1_1_96_4x4_p_V_15 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_96_4x4_p_V_15 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_15_address0 { O 6 vector } buffer1_1_96_4x4_p_V_15_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_15_we0 { O 1 bit } buffer1_1_96_4x4_p_V_15_d0 { O 8 vector } buffer1_1_96_4x4_p_V_15_q0 { I 8 vector } buffer1_1_96_4x4_p_V_15_address1 { O 6 vector } buffer1_1_96_4x4_p_V_15_ce1 { O 1 bit } buffer1_1_96_4x4_p_V_15_we1 { O 1 bit } buffer1_1_96_4x4_p_V_15_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_15'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1141 \
    name buffer1_1_96_4x4_p_V_63 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_96_4x4_p_V_63 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_63_address0 { O 6 vector } buffer1_1_96_4x4_p_V_63_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_63_we0 { O 1 bit } buffer1_1_96_4x4_p_V_63_d0 { O 8 vector } buffer1_1_96_4x4_p_V_63_q0 { I 8 vector } buffer1_1_96_4x4_p_V_63_address1 { O 6 vector } buffer1_1_96_4x4_p_V_63_ce1 { O 1 bit } buffer1_1_96_4x4_p_V_63_we1 { O 1 bit } buffer1_1_96_4x4_p_V_63_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_63'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1142 \
    name buffer1_1_96_4x4_p_V_16 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_96_4x4_p_V_16 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_16_address0 { O 6 vector } buffer1_1_96_4x4_p_V_16_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_16_we0 { O 1 bit } buffer1_1_96_4x4_p_V_16_d0 { O 8 vector } buffer1_1_96_4x4_p_V_16_q0 { I 8 vector } buffer1_1_96_4x4_p_V_16_address1 { O 6 vector } buffer1_1_96_4x4_p_V_16_ce1 { O 1 bit } buffer1_1_96_4x4_p_V_16_we1 { O 1 bit } buffer1_1_96_4x4_p_V_16_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_16'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1143 \
    name buffer1_1_96_4x4_p_V_64 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_96_4x4_p_V_64 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_64_address0 { O 6 vector } buffer1_1_96_4x4_p_V_64_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_64_we0 { O 1 bit } buffer1_1_96_4x4_p_V_64_d0 { O 8 vector } buffer1_1_96_4x4_p_V_64_q0 { I 8 vector } buffer1_1_96_4x4_p_V_64_address1 { O 6 vector } buffer1_1_96_4x4_p_V_64_ce1 { O 1 bit } buffer1_1_96_4x4_p_V_64_we1 { O 1 bit } buffer1_1_96_4x4_p_V_64_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_64'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1144 \
    name buffer1_1_96_4x4_p_V_17 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_96_4x4_p_V_17 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_17_address0 { O 6 vector } buffer1_1_96_4x4_p_V_17_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_17_we0 { O 1 bit } buffer1_1_96_4x4_p_V_17_d0 { O 8 vector } buffer1_1_96_4x4_p_V_17_q0 { I 8 vector } buffer1_1_96_4x4_p_V_17_address1 { O 6 vector } buffer1_1_96_4x4_p_V_17_ce1 { O 1 bit } buffer1_1_96_4x4_p_V_17_we1 { O 1 bit } buffer1_1_96_4x4_p_V_17_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_17'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1145 \
    name buffer1_1_96_4x4_p_V_65 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_96_4x4_p_V_65 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_65_address0 { O 6 vector } buffer1_1_96_4x4_p_V_65_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_65_we0 { O 1 bit } buffer1_1_96_4x4_p_V_65_d0 { O 8 vector } buffer1_1_96_4x4_p_V_65_q0 { I 8 vector } buffer1_1_96_4x4_p_V_65_address1 { O 6 vector } buffer1_1_96_4x4_p_V_65_ce1 { O 1 bit } buffer1_1_96_4x4_p_V_65_we1 { O 1 bit } buffer1_1_96_4x4_p_V_65_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_65'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1146 \
    name buffer1_1_96_4x4_p_V_18 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_96_4x4_p_V_18 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_18_address0 { O 6 vector } buffer1_1_96_4x4_p_V_18_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_18_we0 { O 1 bit } buffer1_1_96_4x4_p_V_18_d0 { O 8 vector } buffer1_1_96_4x4_p_V_18_q0 { I 8 vector } buffer1_1_96_4x4_p_V_18_address1 { O 6 vector } buffer1_1_96_4x4_p_V_18_ce1 { O 1 bit } buffer1_1_96_4x4_p_V_18_we1 { O 1 bit } buffer1_1_96_4x4_p_V_18_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_18'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1147 \
    name buffer1_1_96_4x4_p_V_66 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_96_4x4_p_V_66 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_66_address0 { O 6 vector } buffer1_1_96_4x4_p_V_66_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_66_we0 { O 1 bit } buffer1_1_96_4x4_p_V_66_d0 { O 8 vector } buffer1_1_96_4x4_p_V_66_q0 { I 8 vector } buffer1_1_96_4x4_p_V_66_address1 { O 6 vector } buffer1_1_96_4x4_p_V_66_ce1 { O 1 bit } buffer1_1_96_4x4_p_V_66_we1 { O 1 bit } buffer1_1_96_4x4_p_V_66_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_66'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1148 \
    name buffer1_1_96_4x4_p_V_19 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_96_4x4_p_V_19 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_19_address0 { O 6 vector } buffer1_1_96_4x4_p_V_19_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_19_we0 { O 1 bit } buffer1_1_96_4x4_p_V_19_d0 { O 8 vector } buffer1_1_96_4x4_p_V_19_q0 { I 8 vector } buffer1_1_96_4x4_p_V_19_address1 { O 6 vector } buffer1_1_96_4x4_p_V_19_ce1 { O 1 bit } buffer1_1_96_4x4_p_V_19_we1 { O 1 bit } buffer1_1_96_4x4_p_V_19_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_19'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1149 \
    name buffer1_1_96_4x4_p_V_67 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_96_4x4_p_V_67 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_67_address0 { O 6 vector } buffer1_1_96_4x4_p_V_67_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_67_we0 { O 1 bit } buffer1_1_96_4x4_p_V_67_d0 { O 8 vector } buffer1_1_96_4x4_p_V_67_q0 { I 8 vector } buffer1_1_96_4x4_p_V_67_address1 { O 6 vector } buffer1_1_96_4x4_p_V_67_ce1 { O 1 bit } buffer1_1_96_4x4_p_V_67_we1 { O 1 bit } buffer1_1_96_4x4_p_V_67_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_67'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1150 \
    name buffer1_1_96_4x4_p_V_20 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_96_4x4_p_V_20 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_20_address0 { O 6 vector } buffer1_1_96_4x4_p_V_20_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_20_we0 { O 1 bit } buffer1_1_96_4x4_p_V_20_d0 { O 8 vector } buffer1_1_96_4x4_p_V_20_q0 { I 8 vector } buffer1_1_96_4x4_p_V_20_address1 { O 6 vector } buffer1_1_96_4x4_p_V_20_ce1 { O 1 bit } buffer1_1_96_4x4_p_V_20_we1 { O 1 bit } buffer1_1_96_4x4_p_V_20_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_20'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1151 \
    name buffer1_1_96_4x4_p_V_68 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_96_4x4_p_V_68 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_68_address0 { O 6 vector } buffer1_1_96_4x4_p_V_68_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_68_we0 { O 1 bit } buffer1_1_96_4x4_p_V_68_d0 { O 8 vector } buffer1_1_96_4x4_p_V_68_q0 { I 8 vector } buffer1_1_96_4x4_p_V_68_address1 { O 6 vector } buffer1_1_96_4x4_p_V_68_ce1 { O 1 bit } buffer1_1_96_4x4_p_V_68_we1 { O 1 bit } buffer1_1_96_4x4_p_V_68_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_68'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1152 \
    name buffer1_1_96_4x4_p_V_21 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_96_4x4_p_V_21 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_21_address0 { O 6 vector } buffer1_1_96_4x4_p_V_21_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_21_we0 { O 1 bit } buffer1_1_96_4x4_p_V_21_d0 { O 8 vector } buffer1_1_96_4x4_p_V_21_q0 { I 8 vector } buffer1_1_96_4x4_p_V_21_address1 { O 6 vector } buffer1_1_96_4x4_p_V_21_ce1 { O 1 bit } buffer1_1_96_4x4_p_V_21_we1 { O 1 bit } buffer1_1_96_4x4_p_V_21_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_21'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1153 \
    name buffer1_1_96_4x4_p_V_69 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_96_4x4_p_V_69 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_69_address0 { O 6 vector } buffer1_1_96_4x4_p_V_69_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_69_we0 { O 1 bit } buffer1_1_96_4x4_p_V_69_d0 { O 8 vector } buffer1_1_96_4x4_p_V_69_q0 { I 8 vector } buffer1_1_96_4x4_p_V_69_address1 { O 6 vector } buffer1_1_96_4x4_p_V_69_ce1 { O 1 bit } buffer1_1_96_4x4_p_V_69_we1 { O 1 bit } buffer1_1_96_4x4_p_V_69_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_69'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1154 \
    name buffer1_1_96_4x4_p_V_22 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_96_4x4_p_V_22 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_22_address0 { O 6 vector } buffer1_1_96_4x4_p_V_22_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_22_we0 { O 1 bit } buffer1_1_96_4x4_p_V_22_d0 { O 8 vector } buffer1_1_96_4x4_p_V_22_q0 { I 8 vector } buffer1_1_96_4x4_p_V_22_address1 { O 6 vector } buffer1_1_96_4x4_p_V_22_ce1 { O 1 bit } buffer1_1_96_4x4_p_V_22_we1 { O 1 bit } buffer1_1_96_4x4_p_V_22_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_22'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1155 \
    name buffer1_1_96_4x4_p_V_70 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_96_4x4_p_V_70 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_70_address0 { O 6 vector } buffer1_1_96_4x4_p_V_70_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_70_we0 { O 1 bit } buffer1_1_96_4x4_p_V_70_d0 { O 8 vector } buffer1_1_96_4x4_p_V_70_q0 { I 8 vector } buffer1_1_96_4x4_p_V_70_address1 { O 6 vector } buffer1_1_96_4x4_p_V_70_ce1 { O 1 bit } buffer1_1_96_4x4_p_V_70_we1 { O 1 bit } buffer1_1_96_4x4_p_V_70_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_70'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1156 \
    name buffer1_1_96_4x4_p_V_23 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_96_4x4_p_V_23 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_23_address0 { O 6 vector } buffer1_1_96_4x4_p_V_23_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_23_we0 { O 1 bit } buffer1_1_96_4x4_p_V_23_d0 { O 8 vector } buffer1_1_96_4x4_p_V_23_q0 { I 8 vector } buffer1_1_96_4x4_p_V_23_address1 { O 6 vector } buffer1_1_96_4x4_p_V_23_ce1 { O 1 bit } buffer1_1_96_4x4_p_V_23_we1 { O 1 bit } buffer1_1_96_4x4_p_V_23_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_23'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1157 \
    name buffer1_1_96_4x4_p_V_71 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_96_4x4_p_V_71 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_71_address0 { O 6 vector } buffer1_1_96_4x4_p_V_71_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_71_we0 { O 1 bit } buffer1_1_96_4x4_p_V_71_d0 { O 8 vector } buffer1_1_96_4x4_p_V_71_q0 { I 8 vector } buffer1_1_96_4x4_p_V_71_address1 { O 6 vector } buffer1_1_96_4x4_p_V_71_ce1 { O 1 bit } buffer1_1_96_4x4_p_V_71_we1 { O 1 bit } buffer1_1_96_4x4_p_V_71_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_71'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1158 \
    name buffer1_1_96_4x4_p_V_24 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_96_4x4_p_V_24 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_24_address0 { O 6 vector } buffer1_1_96_4x4_p_V_24_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_24_we0 { O 1 bit } buffer1_1_96_4x4_p_V_24_d0 { O 8 vector } buffer1_1_96_4x4_p_V_24_q0 { I 8 vector } buffer1_1_96_4x4_p_V_24_address1 { O 6 vector } buffer1_1_96_4x4_p_V_24_ce1 { O 1 bit } buffer1_1_96_4x4_p_V_24_we1 { O 1 bit } buffer1_1_96_4x4_p_V_24_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_24'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1159 \
    name buffer1_1_96_4x4_p_V_72 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_96_4x4_p_V_72 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_72_address0 { O 6 vector } buffer1_1_96_4x4_p_V_72_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_72_we0 { O 1 bit } buffer1_1_96_4x4_p_V_72_d0 { O 8 vector } buffer1_1_96_4x4_p_V_72_q0 { I 8 vector } buffer1_1_96_4x4_p_V_72_address1 { O 6 vector } buffer1_1_96_4x4_p_V_72_ce1 { O 1 bit } buffer1_1_96_4x4_p_V_72_we1 { O 1 bit } buffer1_1_96_4x4_p_V_72_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_72'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1160 \
    name buffer1_1_96_4x4_p_V_25 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_96_4x4_p_V_25 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_25_address0 { O 6 vector } buffer1_1_96_4x4_p_V_25_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_25_we0 { O 1 bit } buffer1_1_96_4x4_p_V_25_d0 { O 8 vector } buffer1_1_96_4x4_p_V_25_q0 { I 8 vector } buffer1_1_96_4x4_p_V_25_address1 { O 6 vector } buffer1_1_96_4x4_p_V_25_ce1 { O 1 bit } buffer1_1_96_4x4_p_V_25_we1 { O 1 bit } buffer1_1_96_4x4_p_V_25_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_25'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1161 \
    name buffer1_1_96_4x4_p_V_73 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_96_4x4_p_V_73 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_73_address0 { O 6 vector } buffer1_1_96_4x4_p_V_73_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_73_we0 { O 1 bit } buffer1_1_96_4x4_p_V_73_d0 { O 8 vector } buffer1_1_96_4x4_p_V_73_q0 { I 8 vector } buffer1_1_96_4x4_p_V_73_address1 { O 6 vector } buffer1_1_96_4x4_p_V_73_ce1 { O 1 bit } buffer1_1_96_4x4_p_V_73_we1 { O 1 bit } buffer1_1_96_4x4_p_V_73_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_73'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1162 \
    name buffer1_1_96_4x4_p_V_26 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_96_4x4_p_V_26 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_26_address0 { O 6 vector } buffer1_1_96_4x4_p_V_26_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_26_we0 { O 1 bit } buffer1_1_96_4x4_p_V_26_d0 { O 8 vector } buffer1_1_96_4x4_p_V_26_q0 { I 8 vector } buffer1_1_96_4x4_p_V_26_address1 { O 6 vector } buffer1_1_96_4x4_p_V_26_ce1 { O 1 bit } buffer1_1_96_4x4_p_V_26_we1 { O 1 bit } buffer1_1_96_4x4_p_V_26_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_26'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1163 \
    name buffer1_1_96_4x4_p_V_74 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_96_4x4_p_V_74 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_74_address0 { O 6 vector } buffer1_1_96_4x4_p_V_74_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_74_we0 { O 1 bit } buffer1_1_96_4x4_p_V_74_d0 { O 8 vector } buffer1_1_96_4x4_p_V_74_q0 { I 8 vector } buffer1_1_96_4x4_p_V_74_address1 { O 6 vector } buffer1_1_96_4x4_p_V_74_ce1 { O 1 bit } buffer1_1_96_4x4_p_V_74_we1 { O 1 bit } buffer1_1_96_4x4_p_V_74_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_74'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1164 \
    name buffer1_1_96_4x4_p_V_27 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_96_4x4_p_V_27 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_27_address0 { O 6 vector } buffer1_1_96_4x4_p_V_27_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_27_we0 { O 1 bit } buffer1_1_96_4x4_p_V_27_d0 { O 8 vector } buffer1_1_96_4x4_p_V_27_q0 { I 8 vector } buffer1_1_96_4x4_p_V_27_address1 { O 6 vector } buffer1_1_96_4x4_p_V_27_ce1 { O 1 bit } buffer1_1_96_4x4_p_V_27_we1 { O 1 bit } buffer1_1_96_4x4_p_V_27_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_27'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1165 \
    name buffer1_1_96_4x4_p_V_75 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_96_4x4_p_V_75 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_75_address0 { O 6 vector } buffer1_1_96_4x4_p_V_75_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_75_we0 { O 1 bit } buffer1_1_96_4x4_p_V_75_d0 { O 8 vector } buffer1_1_96_4x4_p_V_75_q0 { I 8 vector } buffer1_1_96_4x4_p_V_75_address1 { O 6 vector } buffer1_1_96_4x4_p_V_75_ce1 { O 1 bit } buffer1_1_96_4x4_p_V_75_we1 { O 1 bit } buffer1_1_96_4x4_p_V_75_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_75'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1166 \
    name buffer1_1_96_4x4_p_V_28 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_96_4x4_p_V_28 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_28_address0 { O 6 vector } buffer1_1_96_4x4_p_V_28_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_28_we0 { O 1 bit } buffer1_1_96_4x4_p_V_28_d0 { O 8 vector } buffer1_1_96_4x4_p_V_28_q0 { I 8 vector } buffer1_1_96_4x4_p_V_28_address1 { O 6 vector } buffer1_1_96_4x4_p_V_28_ce1 { O 1 bit } buffer1_1_96_4x4_p_V_28_we1 { O 1 bit } buffer1_1_96_4x4_p_V_28_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_28'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1167 \
    name buffer1_1_96_4x4_p_V_76 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_96_4x4_p_V_76 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_76_address0 { O 6 vector } buffer1_1_96_4x4_p_V_76_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_76_we0 { O 1 bit } buffer1_1_96_4x4_p_V_76_d0 { O 8 vector } buffer1_1_96_4x4_p_V_76_q0 { I 8 vector } buffer1_1_96_4x4_p_V_76_address1 { O 6 vector } buffer1_1_96_4x4_p_V_76_ce1 { O 1 bit } buffer1_1_96_4x4_p_V_76_we1 { O 1 bit } buffer1_1_96_4x4_p_V_76_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_76'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1168 \
    name buffer1_1_96_4x4_p_V_29 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_96_4x4_p_V_29 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_29_address0 { O 6 vector } buffer1_1_96_4x4_p_V_29_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_29_we0 { O 1 bit } buffer1_1_96_4x4_p_V_29_d0 { O 8 vector } buffer1_1_96_4x4_p_V_29_q0 { I 8 vector } buffer1_1_96_4x4_p_V_29_address1 { O 6 vector } buffer1_1_96_4x4_p_V_29_ce1 { O 1 bit } buffer1_1_96_4x4_p_V_29_we1 { O 1 bit } buffer1_1_96_4x4_p_V_29_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_29'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1169 \
    name buffer1_1_96_4x4_p_V_77 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_96_4x4_p_V_77 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_77_address0 { O 6 vector } buffer1_1_96_4x4_p_V_77_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_77_we0 { O 1 bit } buffer1_1_96_4x4_p_V_77_d0 { O 8 vector } buffer1_1_96_4x4_p_V_77_q0 { I 8 vector } buffer1_1_96_4x4_p_V_77_address1 { O 6 vector } buffer1_1_96_4x4_p_V_77_ce1 { O 1 bit } buffer1_1_96_4x4_p_V_77_we1 { O 1 bit } buffer1_1_96_4x4_p_V_77_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_77'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1170 \
    name buffer1_1_96_4x4_p_V_30 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_96_4x4_p_V_30 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_30_address0 { O 6 vector } buffer1_1_96_4x4_p_V_30_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_30_we0 { O 1 bit } buffer1_1_96_4x4_p_V_30_d0 { O 8 vector } buffer1_1_96_4x4_p_V_30_q0 { I 8 vector } buffer1_1_96_4x4_p_V_30_address1 { O 6 vector } buffer1_1_96_4x4_p_V_30_ce1 { O 1 bit } buffer1_1_96_4x4_p_V_30_we1 { O 1 bit } buffer1_1_96_4x4_p_V_30_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_30'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1171 \
    name buffer1_1_96_4x4_p_V_78 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_96_4x4_p_V_78 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_78_address0 { O 6 vector } buffer1_1_96_4x4_p_V_78_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_78_we0 { O 1 bit } buffer1_1_96_4x4_p_V_78_d0 { O 8 vector } buffer1_1_96_4x4_p_V_78_q0 { I 8 vector } buffer1_1_96_4x4_p_V_78_address1 { O 6 vector } buffer1_1_96_4x4_p_V_78_ce1 { O 1 bit } buffer1_1_96_4x4_p_V_78_we1 { O 1 bit } buffer1_1_96_4x4_p_V_78_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_78'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1172 \
    name buffer1_1_96_4x4_p_V_31 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_96_4x4_p_V_31 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_31_address0 { O 6 vector } buffer1_1_96_4x4_p_V_31_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_31_we0 { O 1 bit } buffer1_1_96_4x4_p_V_31_d0 { O 8 vector } buffer1_1_96_4x4_p_V_31_q0 { I 8 vector } buffer1_1_96_4x4_p_V_31_address1 { O 6 vector } buffer1_1_96_4x4_p_V_31_ce1 { O 1 bit } buffer1_1_96_4x4_p_V_31_we1 { O 1 bit } buffer1_1_96_4x4_p_V_31_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_31'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1173 \
    name buffer1_1_96_4x4_p_V_79 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_96_4x4_p_V_79 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_79_address0 { O 6 vector } buffer1_1_96_4x4_p_V_79_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_79_we0 { O 1 bit } buffer1_1_96_4x4_p_V_79_d0 { O 8 vector } buffer1_1_96_4x4_p_V_79_q0 { I 8 vector } buffer1_1_96_4x4_p_V_79_address1 { O 6 vector } buffer1_1_96_4x4_p_V_79_ce1 { O 1 bit } buffer1_1_96_4x4_p_V_79_we1 { O 1 bit } buffer1_1_96_4x4_p_V_79_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_79'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1174 \
    name buffer1_1_96_4x4_p_V_32 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_96_4x4_p_V_32 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_32_address0 { O 6 vector } buffer1_1_96_4x4_p_V_32_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_32_we0 { O 1 bit } buffer1_1_96_4x4_p_V_32_d0 { O 8 vector } buffer1_1_96_4x4_p_V_32_q0 { I 8 vector } buffer1_1_96_4x4_p_V_32_address1 { O 6 vector } buffer1_1_96_4x4_p_V_32_ce1 { O 1 bit } buffer1_1_96_4x4_p_V_32_we1 { O 1 bit } buffer1_1_96_4x4_p_V_32_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_32'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1175 \
    name buffer1_1_96_4x4_p_V_80 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_96_4x4_p_V_80 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_80_address0 { O 6 vector } buffer1_1_96_4x4_p_V_80_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_80_we0 { O 1 bit } buffer1_1_96_4x4_p_V_80_d0 { O 8 vector } buffer1_1_96_4x4_p_V_80_q0 { I 8 vector } buffer1_1_96_4x4_p_V_80_address1 { O 6 vector } buffer1_1_96_4x4_p_V_80_ce1 { O 1 bit } buffer1_1_96_4x4_p_V_80_we1 { O 1 bit } buffer1_1_96_4x4_p_V_80_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_80'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1176 \
    name buffer1_1_96_4x4_p_V_33 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_96_4x4_p_V_33 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_33_address0 { O 6 vector } buffer1_1_96_4x4_p_V_33_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_33_we0 { O 1 bit } buffer1_1_96_4x4_p_V_33_d0 { O 8 vector } buffer1_1_96_4x4_p_V_33_q0 { I 8 vector } buffer1_1_96_4x4_p_V_33_address1 { O 6 vector } buffer1_1_96_4x4_p_V_33_ce1 { O 1 bit } buffer1_1_96_4x4_p_V_33_we1 { O 1 bit } buffer1_1_96_4x4_p_V_33_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_33'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1177 \
    name buffer1_1_96_4x4_p_V_81 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_96_4x4_p_V_81 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_81_address0 { O 6 vector } buffer1_1_96_4x4_p_V_81_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_81_we0 { O 1 bit } buffer1_1_96_4x4_p_V_81_d0 { O 8 vector } buffer1_1_96_4x4_p_V_81_q0 { I 8 vector } buffer1_1_96_4x4_p_V_81_address1 { O 6 vector } buffer1_1_96_4x4_p_V_81_ce1 { O 1 bit } buffer1_1_96_4x4_p_V_81_we1 { O 1 bit } buffer1_1_96_4x4_p_V_81_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_81'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1178 \
    name buffer1_1_96_4x4_p_V_34 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_96_4x4_p_V_34 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_34_address0 { O 6 vector } buffer1_1_96_4x4_p_V_34_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_34_we0 { O 1 bit } buffer1_1_96_4x4_p_V_34_d0 { O 8 vector } buffer1_1_96_4x4_p_V_34_q0 { I 8 vector } buffer1_1_96_4x4_p_V_34_address1 { O 6 vector } buffer1_1_96_4x4_p_V_34_ce1 { O 1 bit } buffer1_1_96_4x4_p_V_34_we1 { O 1 bit } buffer1_1_96_4x4_p_V_34_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_34'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1179 \
    name buffer1_1_96_4x4_p_V_82 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_96_4x4_p_V_82 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_82_address0 { O 6 vector } buffer1_1_96_4x4_p_V_82_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_82_we0 { O 1 bit } buffer1_1_96_4x4_p_V_82_d0 { O 8 vector } buffer1_1_96_4x4_p_V_82_q0 { I 8 vector } buffer1_1_96_4x4_p_V_82_address1 { O 6 vector } buffer1_1_96_4x4_p_V_82_ce1 { O 1 bit } buffer1_1_96_4x4_p_V_82_we1 { O 1 bit } buffer1_1_96_4x4_p_V_82_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_82'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1180 \
    name buffer1_1_96_4x4_p_V_35 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_96_4x4_p_V_35 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_35_address0 { O 6 vector } buffer1_1_96_4x4_p_V_35_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_35_we0 { O 1 bit } buffer1_1_96_4x4_p_V_35_d0 { O 8 vector } buffer1_1_96_4x4_p_V_35_q0 { I 8 vector } buffer1_1_96_4x4_p_V_35_address1 { O 6 vector } buffer1_1_96_4x4_p_V_35_ce1 { O 1 bit } buffer1_1_96_4x4_p_V_35_we1 { O 1 bit } buffer1_1_96_4x4_p_V_35_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_35'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1181 \
    name buffer1_1_96_4x4_p_V_83 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_96_4x4_p_V_83 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_83_address0 { O 6 vector } buffer1_1_96_4x4_p_V_83_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_83_we0 { O 1 bit } buffer1_1_96_4x4_p_V_83_d0 { O 8 vector } buffer1_1_96_4x4_p_V_83_q0 { I 8 vector } buffer1_1_96_4x4_p_V_83_address1 { O 6 vector } buffer1_1_96_4x4_p_V_83_ce1 { O 1 bit } buffer1_1_96_4x4_p_V_83_we1 { O 1 bit } buffer1_1_96_4x4_p_V_83_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_83'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1182 \
    name buffer1_1_96_4x4_p_V_36 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_96_4x4_p_V_36 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_36_address0 { O 6 vector } buffer1_1_96_4x4_p_V_36_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_36_we0 { O 1 bit } buffer1_1_96_4x4_p_V_36_d0 { O 8 vector } buffer1_1_96_4x4_p_V_36_q0 { I 8 vector } buffer1_1_96_4x4_p_V_36_address1 { O 6 vector } buffer1_1_96_4x4_p_V_36_ce1 { O 1 bit } buffer1_1_96_4x4_p_V_36_we1 { O 1 bit } buffer1_1_96_4x4_p_V_36_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_36'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1183 \
    name buffer1_1_96_4x4_p_V_84 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_96_4x4_p_V_84 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_84_address0 { O 6 vector } buffer1_1_96_4x4_p_V_84_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_84_we0 { O 1 bit } buffer1_1_96_4x4_p_V_84_d0 { O 8 vector } buffer1_1_96_4x4_p_V_84_q0 { I 8 vector } buffer1_1_96_4x4_p_V_84_address1 { O 6 vector } buffer1_1_96_4x4_p_V_84_ce1 { O 1 bit } buffer1_1_96_4x4_p_V_84_we1 { O 1 bit } buffer1_1_96_4x4_p_V_84_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_84'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1184 \
    name buffer1_1_96_4x4_p_V_37 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_96_4x4_p_V_37 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_37_address0 { O 6 vector } buffer1_1_96_4x4_p_V_37_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_37_we0 { O 1 bit } buffer1_1_96_4x4_p_V_37_d0 { O 8 vector } buffer1_1_96_4x4_p_V_37_q0 { I 8 vector } buffer1_1_96_4x4_p_V_37_address1 { O 6 vector } buffer1_1_96_4x4_p_V_37_ce1 { O 1 bit } buffer1_1_96_4x4_p_V_37_we1 { O 1 bit } buffer1_1_96_4x4_p_V_37_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_37'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1185 \
    name buffer1_1_96_4x4_p_V_85 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_96_4x4_p_V_85 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_85_address0 { O 6 vector } buffer1_1_96_4x4_p_V_85_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_85_we0 { O 1 bit } buffer1_1_96_4x4_p_V_85_d0 { O 8 vector } buffer1_1_96_4x4_p_V_85_q0 { I 8 vector } buffer1_1_96_4x4_p_V_85_address1 { O 6 vector } buffer1_1_96_4x4_p_V_85_ce1 { O 1 bit } buffer1_1_96_4x4_p_V_85_we1 { O 1 bit } buffer1_1_96_4x4_p_V_85_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_85'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1186 \
    name buffer1_1_96_4x4_p_V_38 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_96_4x4_p_V_38 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_38_address0 { O 6 vector } buffer1_1_96_4x4_p_V_38_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_38_we0 { O 1 bit } buffer1_1_96_4x4_p_V_38_d0 { O 8 vector } buffer1_1_96_4x4_p_V_38_q0 { I 8 vector } buffer1_1_96_4x4_p_V_38_address1 { O 6 vector } buffer1_1_96_4x4_p_V_38_ce1 { O 1 bit } buffer1_1_96_4x4_p_V_38_we1 { O 1 bit } buffer1_1_96_4x4_p_V_38_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_38'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1187 \
    name buffer1_1_96_4x4_p_V_86 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_96_4x4_p_V_86 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_86_address0 { O 6 vector } buffer1_1_96_4x4_p_V_86_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_86_we0 { O 1 bit } buffer1_1_96_4x4_p_V_86_d0 { O 8 vector } buffer1_1_96_4x4_p_V_86_q0 { I 8 vector } buffer1_1_96_4x4_p_V_86_address1 { O 6 vector } buffer1_1_96_4x4_p_V_86_ce1 { O 1 bit } buffer1_1_96_4x4_p_V_86_we1 { O 1 bit } buffer1_1_96_4x4_p_V_86_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_86'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1188 \
    name buffer1_1_96_4x4_p_V_39 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_96_4x4_p_V_39 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_39_address0 { O 6 vector } buffer1_1_96_4x4_p_V_39_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_39_we0 { O 1 bit } buffer1_1_96_4x4_p_V_39_d0 { O 8 vector } buffer1_1_96_4x4_p_V_39_q0 { I 8 vector } buffer1_1_96_4x4_p_V_39_address1 { O 6 vector } buffer1_1_96_4x4_p_V_39_ce1 { O 1 bit } buffer1_1_96_4x4_p_V_39_we1 { O 1 bit } buffer1_1_96_4x4_p_V_39_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_39'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1189 \
    name buffer1_1_96_4x4_p_V_87 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_96_4x4_p_V_87 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_87_address0 { O 6 vector } buffer1_1_96_4x4_p_V_87_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_87_we0 { O 1 bit } buffer1_1_96_4x4_p_V_87_d0 { O 8 vector } buffer1_1_96_4x4_p_V_87_q0 { I 8 vector } buffer1_1_96_4x4_p_V_87_address1 { O 6 vector } buffer1_1_96_4x4_p_V_87_ce1 { O 1 bit } buffer1_1_96_4x4_p_V_87_we1 { O 1 bit } buffer1_1_96_4x4_p_V_87_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_87'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1190 \
    name buffer1_1_96_4x4_p_V_40 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_96_4x4_p_V_40 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_40_address0 { O 6 vector } buffer1_1_96_4x4_p_V_40_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_40_we0 { O 1 bit } buffer1_1_96_4x4_p_V_40_d0 { O 8 vector } buffer1_1_96_4x4_p_V_40_q0 { I 8 vector } buffer1_1_96_4x4_p_V_40_address1 { O 6 vector } buffer1_1_96_4x4_p_V_40_ce1 { O 1 bit } buffer1_1_96_4x4_p_V_40_we1 { O 1 bit } buffer1_1_96_4x4_p_V_40_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_40'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1191 \
    name buffer1_1_96_4x4_p_V_88 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_96_4x4_p_V_88 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_88_address0 { O 6 vector } buffer1_1_96_4x4_p_V_88_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_88_we0 { O 1 bit } buffer1_1_96_4x4_p_V_88_d0 { O 8 vector } buffer1_1_96_4x4_p_V_88_q0 { I 8 vector } buffer1_1_96_4x4_p_V_88_address1 { O 6 vector } buffer1_1_96_4x4_p_V_88_ce1 { O 1 bit } buffer1_1_96_4x4_p_V_88_we1 { O 1 bit } buffer1_1_96_4x4_p_V_88_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_88'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1192 \
    name buffer1_1_96_4x4_p_V_41 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_96_4x4_p_V_41 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_41_address0 { O 6 vector } buffer1_1_96_4x4_p_V_41_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_41_we0 { O 1 bit } buffer1_1_96_4x4_p_V_41_d0 { O 8 vector } buffer1_1_96_4x4_p_V_41_q0 { I 8 vector } buffer1_1_96_4x4_p_V_41_address1 { O 6 vector } buffer1_1_96_4x4_p_V_41_ce1 { O 1 bit } buffer1_1_96_4x4_p_V_41_we1 { O 1 bit } buffer1_1_96_4x4_p_V_41_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_41'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1193 \
    name buffer1_1_96_4x4_p_V_89 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_96_4x4_p_V_89 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_89_address0 { O 6 vector } buffer1_1_96_4x4_p_V_89_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_89_we0 { O 1 bit } buffer1_1_96_4x4_p_V_89_d0 { O 8 vector } buffer1_1_96_4x4_p_V_89_q0 { I 8 vector } buffer1_1_96_4x4_p_V_89_address1 { O 6 vector } buffer1_1_96_4x4_p_V_89_ce1 { O 1 bit } buffer1_1_96_4x4_p_V_89_we1 { O 1 bit } buffer1_1_96_4x4_p_V_89_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_89'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1194 \
    name buffer1_1_96_4x4_p_V_42 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_96_4x4_p_V_42 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_42_address0 { O 6 vector } buffer1_1_96_4x4_p_V_42_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_42_we0 { O 1 bit } buffer1_1_96_4x4_p_V_42_d0 { O 8 vector } buffer1_1_96_4x4_p_V_42_q0 { I 8 vector } buffer1_1_96_4x4_p_V_42_address1 { O 6 vector } buffer1_1_96_4x4_p_V_42_ce1 { O 1 bit } buffer1_1_96_4x4_p_V_42_we1 { O 1 bit } buffer1_1_96_4x4_p_V_42_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_42'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1195 \
    name buffer1_1_96_4x4_p_V_90 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_96_4x4_p_V_90 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_90_address0 { O 6 vector } buffer1_1_96_4x4_p_V_90_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_90_we0 { O 1 bit } buffer1_1_96_4x4_p_V_90_d0 { O 8 vector } buffer1_1_96_4x4_p_V_90_q0 { I 8 vector } buffer1_1_96_4x4_p_V_90_address1 { O 6 vector } buffer1_1_96_4x4_p_V_90_ce1 { O 1 bit } buffer1_1_96_4x4_p_V_90_we1 { O 1 bit } buffer1_1_96_4x4_p_V_90_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_90'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1196 \
    name buffer1_1_96_4x4_p_V_43 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_96_4x4_p_V_43 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_43_address0 { O 6 vector } buffer1_1_96_4x4_p_V_43_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_43_we0 { O 1 bit } buffer1_1_96_4x4_p_V_43_d0 { O 8 vector } buffer1_1_96_4x4_p_V_43_q0 { I 8 vector } buffer1_1_96_4x4_p_V_43_address1 { O 6 vector } buffer1_1_96_4x4_p_V_43_ce1 { O 1 bit } buffer1_1_96_4x4_p_V_43_we1 { O 1 bit } buffer1_1_96_4x4_p_V_43_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_43'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1197 \
    name buffer1_1_96_4x4_p_V_91 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_96_4x4_p_V_91 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_91_address0 { O 6 vector } buffer1_1_96_4x4_p_V_91_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_91_we0 { O 1 bit } buffer1_1_96_4x4_p_V_91_d0 { O 8 vector } buffer1_1_96_4x4_p_V_91_q0 { I 8 vector } buffer1_1_96_4x4_p_V_91_address1 { O 6 vector } buffer1_1_96_4x4_p_V_91_ce1 { O 1 bit } buffer1_1_96_4x4_p_V_91_we1 { O 1 bit } buffer1_1_96_4x4_p_V_91_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_91'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1198 \
    name buffer1_1_96_4x4_p_V_44 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_96_4x4_p_V_44 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_44_address0 { O 6 vector } buffer1_1_96_4x4_p_V_44_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_44_we0 { O 1 bit } buffer1_1_96_4x4_p_V_44_d0 { O 8 vector } buffer1_1_96_4x4_p_V_44_q0 { I 8 vector } buffer1_1_96_4x4_p_V_44_address1 { O 6 vector } buffer1_1_96_4x4_p_V_44_ce1 { O 1 bit } buffer1_1_96_4x4_p_V_44_we1 { O 1 bit } buffer1_1_96_4x4_p_V_44_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_44'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1199 \
    name buffer1_1_96_4x4_p_V_92 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_96_4x4_p_V_92 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_92_address0 { O 6 vector } buffer1_1_96_4x4_p_V_92_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_92_we0 { O 1 bit } buffer1_1_96_4x4_p_V_92_d0 { O 8 vector } buffer1_1_96_4x4_p_V_92_q0 { I 8 vector } buffer1_1_96_4x4_p_V_92_address1 { O 6 vector } buffer1_1_96_4x4_p_V_92_ce1 { O 1 bit } buffer1_1_96_4x4_p_V_92_we1 { O 1 bit } buffer1_1_96_4x4_p_V_92_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_92'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1200 \
    name buffer1_1_96_4x4_p_V_45 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_96_4x4_p_V_45 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_45_address0 { O 6 vector } buffer1_1_96_4x4_p_V_45_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_45_we0 { O 1 bit } buffer1_1_96_4x4_p_V_45_d0 { O 8 vector } buffer1_1_96_4x4_p_V_45_q0 { I 8 vector } buffer1_1_96_4x4_p_V_45_address1 { O 6 vector } buffer1_1_96_4x4_p_V_45_ce1 { O 1 bit } buffer1_1_96_4x4_p_V_45_we1 { O 1 bit } buffer1_1_96_4x4_p_V_45_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_45'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1201 \
    name buffer1_1_96_4x4_p_V_93 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_96_4x4_p_V_93 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_93_address0 { O 6 vector } buffer1_1_96_4x4_p_V_93_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_93_we0 { O 1 bit } buffer1_1_96_4x4_p_V_93_d0 { O 8 vector } buffer1_1_96_4x4_p_V_93_q0 { I 8 vector } buffer1_1_96_4x4_p_V_93_address1 { O 6 vector } buffer1_1_96_4x4_p_V_93_ce1 { O 1 bit } buffer1_1_96_4x4_p_V_93_we1 { O 1 bit } buffer1_1_96_4x4_p_V_93_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_93'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1202 \
    name buffer1_1_96_4x4_p_V_46 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_96_4x4_p_V_46 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_46_address0 { O 6 vector } buffer1_1_96_4x4_p_V_46_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_46_we0 { O 1 bit } buffer1_1_96_4x4_p_V_46_d0 { O 8 vector } buffer1_1_96_4x4_p_V_46_q0 { I 8 vector } buffer1_1_96_4x4_p_V_46_address1 { O 6 vector } buffer1_1_96_4x4_p_V_46_ce1 { O 1 bit } buffer1_1_96_4x4_p_V_46_we1 { O 1 bit } buffer1_1_96_4x4_p_V_46_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_46'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1203 \
    name buffer1_1_96_4x4_p_V_94 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_96_4x4_p_V_94 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_94_address0 { O 6 vector } buffer1_1_96_4x4_p_V_94_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_94_we0 { O 1 bit } buffer1_1_96_4x4_p_V_94_d0 { O 8 vector } buffer1_1_96_4x4_p_V_94_q0 { I 8 vector } buffer1_1_96_4x4_p_V_94_address1 { O 6 vector } buffer1_1_96_4x4_p_V_94_ce1 { O 1 bit } buffer1_1_96_4x4_p_V_94_we1 { O 1 bit } buffer1_1_96_4x4_p_V_94_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_94'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1204 \
    name buffer1_1_96_4x4_p_V_47 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_96_4x4_p_V_47 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_47_address0 { O 6 vector } buffer1_1_96_4x4_p_V_47_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_47_we0 { O 1 bit } buffer1_1_96_4x4_p_V_47_d0 { O 8 vector } buffer1_1_96_4x4_p_V_47_q0 { I 8 vector } buffer1_1_96_4x4_p_V_47_address1 { O 6 vector } buffer1_1_96_4x4_p_V_47_ce1 { O 1 bit } buffer1_1_96_4x4_p_V_47_we1 { O 1 bit } buffer1_1_96_4x4_p_V_47_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_96_4x4_p_V_47'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1205 \
    name buffer1_1_96_4x4_p_V_95 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_96_4x4_p_V_95 \
    op interface \
    ports { buffer1_1_96_4x4_p_V_95_address0 { O 6 vector } buffer1_1_96_4x4_p_V_95_ce0 { O 1 bit } buffer1_1_96_4x4_p_V_95_we0 { O 1 bit } buffer1_1_96_4x4_p_V_95_d0 { O 8 vector } buffer1_1_96_4x4_p_V_95_q0 { I 8 vector } buffer1_1_96_4x4_p_V_95_address1 { O 6 vector } buffer1_1_96_4x4_p_V_95_ce1 { O 1 bit } buffer1_1_96_4x4_p_V_95_we1 { O 1 bit } buffer1_1_96_4x4_p_V_95_d1 { O 8 vector } } \
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


