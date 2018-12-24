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
    id 356 \
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
    id 357 \
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
    id 358 \
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
    id 359 \
    name ShuffleConvs_1_Downs_47 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_1_Downs_47 \
    op interface \
    ports { ShuffleConvs_1_Downs_47_address0 { O 9 vector } ShuffleConvs_1_Downs_47_ce0 { O 1 bit } ShuffleConvs_1_Downs_47_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_1_Downs_47'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 360 \
    name ShuffleConvs_1_Downs_46 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_1_Downs_46 \
    op interface \
    ports { ShuffleConvs_1_Downs_46_address0 { O 9 vector } ShuffleConvs_1_Downs_46_ce0 { O 1 bit } ShuffleConvs_1_Downs_46_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_1_Downs_46'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 361 \
    name ShuffleConvs_1_Downs_35 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_1_Downs_35 \
    op interface \
    ports { ShuffleConvs_1_Downs_35_address0 { O 9 vector } ShuffleConvs_1_Downs_35_ce0 { O 1 bit } ShuffleConvs_1_Downs_35_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_1_Downs_35'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 362 \
    name ShuffleConvs_1_Downs_24 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_1_Downs_24 \
    op interface \
    ports { ShuffleConvs_1_Downs_24_address0 { O 9 vector } ShuffleConvs_1_Downs_24_ce0 { O 1 bit } ShuffleConvs_1_Downs_24_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_1_Downs_24'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 363 \
    name ShuffleConvs_1_Downs_13 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_1_Downs_13 \
    op interface \
    ports { ShuffleConvs_1_Downs_13_address0 { O 9 vector } ShuffleConvs_1_Downs_13_ce0 { O 1 bit } ShuffleConvs_1_Downs_13_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_1_Downs_13'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 364 \
    name ShuffleConvs_1_Downs_4 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_1_Downs_4 \
    op interface \
    ports { ShuffleConvs_1_Downs_4_address0 { O 9 vector } ShuffleConvs_1_Downs_4_ce0 { O 1 bit } ShuffleConvs_1_Downs_4_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_1_Downs_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 365 \
    name ShuffleConvs_1_Downs_3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_1_Downs_3 \
    op interface \
    ports { ShuffleConvs_1_Downs_3_address0 { O 9 vector } ShuffleConvs_1_Downs_3_ce0 { O 1 bit } ShuffleConvs_1_Downs_3_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_1_Downs_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 366 \
    name ShuffleConvs_1_Downs_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_1_Downs_2 \
    op interface \
    ports { ShuffleConvs_1_Downs_2_address0 { O 9 vector } ShuffleConvs_1_Downs_2_ce0 { O 1 bit } ShuffleConvs_1_Downs_2_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_1_Downs_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 367 \
    name ShuffleConvs_1_Downs_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_1_Downs_1 \
    op interface \
    ports { ShuffleConvs_1_Downs_1_address0 { O 9 vector } ShuffleConvs_1_Downs_1_ce0 { O 1 bit } ShuffleConvs_1_Downs_1_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_1_Downs_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 368 \
    name ShuffleConvs_1_Downs \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_1_Downs \
    op interface \
    ports { ShuffleConvs_1_Downs_address0 { O 9 vector } ShuffleConvs_1_Downs_ce0 { O 1 bit } ShuffleConvs_1_Downs_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_1_Downs'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 369 \
    name ShuffleConvs_1_Downs_45 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_1_Downs_45 \
    op interface \
    ports { ShuffleConvs_1_Downs_45_address0 { O 9 vector } ShuffleConvs_1_Downs_45_ce0 { O 1 bit } ShuffleConvs_1_Downs_45_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_1_Downs_45'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 370 \
    name ShuffleConvs_1_Downs_44 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_1_Downs_44 \
    op interface \
    ports { ShuffleConvs_1_Downs_44_address0 { O 9 vector } ShuffleConvs_1_Downs_44_ce0 { O 1 bit } ShuffleConvs_1_Downs_44_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_1_Downs_44'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 371 \
    name ShuffleConvs_1_Downs_43 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_1_Downs_43 \
    op interface \
    ports { ShuffleConvs_1_Downs_43_address0 { O 9 vector } ShuffleConvs_1_Downs_43_ce0 { O 1 bit } ShuffleConvs_1_Downs_43_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_1_Downs_43'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 372 \
    name ShuffleConvs_1_Downs_42 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_1_Downs_42 \
    op interface \
    ports { ShuffleConvs_1_Downs_42_address0 { O 9 vector } ShuffleConvs_1_Downs_42_ce0 { O 1 bit } ShuffleConvs_1_Downs_42_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_1_Downs_42'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 373 \
    name ShuffleConvs_1_Downs_41 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_1_Downs_41 \
    op interface \
    ports { ShuffleConvs_1_Downs_41_address0 { O 9 vector } ShuffleConvs_1_Downs_41_ce0 { O 1 bit } ShuffleConvs_1_Downs_41_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_1_Downs_41'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 374 \
    name ShuffleConvs_1_Downs_40 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_1_Downs_40 \
    op interface \
    ports { ShuffleConvs_1_Downs_40_address0 { O 9 vector } ShuffleConvs_1_Downs_40_ce0 { O 1 bit } ShuffleConvs_1_Downs_40_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_1_Downs_40'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 375 \
    name ShuffleConvs_1_Downs_39 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_1_Downs_39 \
    op interface \
    ports { ShuffleConvs_1_Downs_39_address0 { O 9 vector } ShuffleConvs_1_Downs_39_ce0 { O 1 bit } ShuffleConvs_1_Downs_39_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_1_Downs_39'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 376 \
    name ShuffleConvs_1_Downs_38 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_1_Downs_38 \
    op interface \
    ports { ShuffleConvs_1_Downs_38_address0 { O 9 vector } ShuffleConvs_1_Downs_38_ce0 { O 1 bit } ShuffleConvs_1_Downs_38_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_1_Downs_38'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 377 \
    name ShuffleConvs_1_Downs_37 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_1_Downs_37 \
    op interface \
    ports { ShuffleConvs_1_Downs_37_address0 { O 9 vector } ShuffleConvs_1_Downs_37_ce0 { O 1 bit } ShuffleConvs_1_Downs_37_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_1_Downs_37'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 378 \
    name ShuffleConvs_1_Downs_36 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_1_Downs_36 \
    op interface \
    ports { ShuffleConvs_1_Downs_36_address0 { O 9 vector } ShuffleConvs_1_Downs_36_ce0 { O 1 bit } ShuffleConvs_1_Downs_36_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_1_Downs_36'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 379 \
    name ShuffleConvs_1_Downs_34 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_1_Downs_34 \
    op interface \
    ports { ShuffleConvs_1_Downs_34_address0 { O 9 vector } ShuffleConvs_1_Downs_34_ce0 { O 1 bit } ShuffleConvs_1_Downs_34_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_1_Downs_34'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 380 \
    name ShuffleConvs_1_Downs_33 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_1_Downs_33 \
    op interface \
    ports { ShuffleConvs_1_Downs_33_address0 { O 9 vector } ShuffleConvs_1_Downs_33_ce0 { O 1 bit } ShuffleConvs_1_Downs_33_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_1_Downs_33'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 381 \
    name ShuffleConvs_1_Downs_32 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_1_Downs_32 \
    op interface \
    ports { ShuffleConvs_1_Downs_32_address0 { O 9 vector } ShuffleConvs_1_Downs_32_ce0 { O 1 bit } ShuffleConvs_1_Downs_32_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_1_Downs_32'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 382 \
    name ShuffleConvs_1_Downs_31 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_1_Downs_31 \
    op interface \
    ports { ShuffleConvs_1_Downs_31_address0 { O 9 vector } ShuffleConvs_1_Downs_31_ce0 { O 1 bit } ShuffleConvs_1_Downs_31_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_1_Downs_31'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 383 \
    name ShuffleConvs_1_Downs_30 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_1_Downs_30 \
    op interface \
    ports { ShuffleConvs_1_Downs_30_address0 { O 9 vector } ShuffleConvs_1_Downs_30_ce0 { O 1 bit } ShuffleConvs_1_Downs_30_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_1_Downs_30'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 384 \
    name ShuffleConvs_1_Downs_29 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_1_Downs_29 \
    op interface \
    ports { ShuffleConvs_1_Downs_29_address0 { O 9 vector } ShuffleConvs_1_Downs_29_ce0 { O 1 bit } ShuffleConvs_1_Downs_29_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_1_Downs_29'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 385 \
    name ShuffleConvs_1_Downs_28 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_1_Downs_28 \
    op interface \
    ports { ShuffleConvs_1_Downs_28_address0 { O 9 vector } ShuffleConvs_1_Downs_28_ce0 { O 1 bit } ShuffleConvs_1_Downs_28_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_1_Downs_28'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 386 \
    name ShuffleConvs_1_Downs_27 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_1_Downs_27 \
    op interface \
    ports { ShuffleConvs_1_Downs_27_address0 { O 9 vector } ShuffleConvs_1_Downs_27_ce0 { O 1 bit } ShuffleConvs_1_Downs_27_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_1_Downs_27'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 387 \
    name ShuffleConvs_1_Downs_26 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_1_Downs_26 \
    op interface \
    ports { ShuffleConvs_1_Downs_26_address0 { O 9 vector } ShuffleConvs_1_Downs_26_ce0 { O 1 bit } ShuffleConvs_1_Downs_26_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_1_Downs_26'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 388 \
    name ShuffleConvs_1_Downs_25 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_1_Downs_25 \
    op interface \
    ports { ShuffleConvs_1_Downs_25_address0 { O 9 vector } ShuffleConvs_1_Downs_25_ce0 { O 1 bit } ShuffleConvs_1_Downs_25_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_1_Downs_25'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 389 \
    name ShuffleConvs_1_Downs_23 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_1_Downs_23 \
    op interface \
    ports { ShuffleConvs_1_Downs_23_address0 { O 9 vector } ShuffleConvs_1_Downs_23_ce0 { O 1 bit } ShuffleConvs_1_Downs_23_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_1_Downs_23'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 390 \
    name ShuffleConvs_1_Downs_22 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_1_Downs_22 \
    op interface \
    ports { ShuffleConvs_1_Downs_22_address0 { O 9 vector } ShuffleConvs_1_Downs_22_ce0 { O 1 bit } ShuffleConvs_1_Downs_22_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_1_Downs_22'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 391 \
    name ShuffleConvs_1_Downs_21 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_1_Downs_21 \
    op interface \
    ports { ShuffleConvs_1_Downs_21_address0 { O 9 vector } ShuffleConvs_1_Downs_21_ce0 { O 1 bit } ShuffleConvs_1_Downs_21_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_1_Downs_21'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 392 \
    name ShuffleConvs_1_Downs_20 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_1_Downs_20 \
    op interface \
    ports { ShuffleConvs_1_Downs_20_address0 { O 9 vector } ShuffleConvs_1_Downs_20_ce0 { O 1 bit } ShuffleConvs_1_Downs_20_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_1_Downs_20'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 393 \
    name ShuffleConvs_1_Downs_19 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_1_Downs_19 \
    op interface \
    ports { ShuffleConvs_1_Downs_19_address0 { O 9 vector } ShuffleConvs_1_Downs_19_ce0 { O 1 bit } ShuffleConvs_1_Downs_19_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_1_Downs_19'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 394 \
    name ShuffleConvs_1_Downs_18 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_1_Downs_18 \
    op interface \
    ports { ShuffleConvs_1_Downs_18_address0 { O 9 vector } ShuffleConvs_1_Downs_18_ce0 { O 1 bit } ShuffleConvs_1_Downs_18_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_1_Downs_18'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 395 \
    name ShuffleConvs_1_Downs_17 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_1_Downs_17 \
    op interface \
    ports { ShuffleConvs_1_Downs_17_address0 { O 9 vector } ShuffleConvs_1_Downs_17_ce0 { O 1 bit } ShuffleConvs_1_Downs_17_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_1_Downs_17'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 396 \
    name ShuffleConvs_1_Downs_16 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_1_Downs_16 \
    op interface \
    ports { ShuffleConvs_1_Downs_16_address0 { O 9 vector } ShuffleConvs_1_Downs_16_ce0 { O 1 bit } ShuffleConvs_1_Downs_16_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_1_Downs_16'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 397 \
    name ShuffleConvs_1_Downs_15 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_1_Downs_15 \
    op interface \
    ports { ShuffleConvs_1_Downs_15_address0 { O 9 vector } ShuffleConvs_1_Downs_15_ce0 { O 1 bit } ShuffleConvs_1_Downs_15_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_1_Downs_15'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 398 \
    name ShuffleConvs_1_Downs_14 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_1_Downs_14 \
    op interface \
    ports { ShuffleConvs_1_Downs_14_address0 { O 9 vector } ShuffleConvs_1_Downs_14_ce0 { O 1 bit } ShuffleConvs_1_Downs_14_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_1_Downs_14'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 399 \
    name ShuffleConvs_1_Downs_12 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_1_Downs_12 \
    op interface \
    ports { ShuffleConvs_1_Downs_12_address0 { O 9 vector } ShuffleConvs_1_Downs_12_ce0 { O 1 bit } ShuffleConvs_1_Downs_12_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_1_Downs_12'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 400 \
    name ShuffleConvs_1_Downs_11 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_1_Downs_11 \
    op interface \
    ports { ShuffleConvs_1_Downs_11_address0 { O 9 vector } ShuffleConvs_1_Downs_11_ce0 { O 1 bit } ShuffleConvs_1_Downs_11_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_1_Downs_11'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 401 \
    name ShuffleConvs_1_Downs_10 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_1_Downs_10 \
    op interface \
    ports { ShuffleConvs_1_Downs_10_address0 { O 9 vector } ShuffleConvs_1_Downs_10_ce0 { O 1 bit } ShuffleConvs_1_Downs_10_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_1_Downs_10'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 402 \
    name ShuffleConvs_1_Downs_9 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_1_Downs_9 \
    op interface \
    ports { ShuffleConvs_1_Downs_9_address0 { O 9 vector } ShuffleConvs_1_Downs_9_ce0 { O 1 bit } ShuffleConvs_1_Downs_9_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_1_Downs_9'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 403 \
    name ShuffleConvs_1_Downs_8 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_1_Downs_8 \
    op interface \
    ports { ShuffleConvs_1_Downs_8_address0 { O 9 vector } ShuffleConvs_1_Downs_8_ce0 { O 1 bit } ShuffleConvs_1_Downs_8_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_1_Downs_8'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 404 \
    name ShuffleConvs_1_Downs_7 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_1_Downs_7 \
    op interface \
    ports { ShuffleConvs_1_Downs_7_address0 { O 9 vector } ShuffleConvs_1_Downs_7_ce0 { O 1 bit } ShuffleConvs_1_Downs_7_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_1_Downs_7'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 405 \
    name ShuffleConvs_1_Downs_6 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_1_Downs_6 \
    op interface \
    ports { ShuffleConvs_1_Downs_6_address0 { O 9 vector } ShuffleConvs_1_Downs_6_ce0 { O 1 bit } ShuffleConvs_1_Downs_6_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_1_Downs_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 406 \
    name ShuffleConvs_1_Downs_5 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_1_Downs_5 \
    op interface \
    ports { ShuffleConvs_1_Downs_5_address0 { O 9 vector } ShuffleConvs_1_Downs_5_ce0 { O 1 bit } ShuffleConvs_1_Downs_5_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_1_Downs_5'"
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


