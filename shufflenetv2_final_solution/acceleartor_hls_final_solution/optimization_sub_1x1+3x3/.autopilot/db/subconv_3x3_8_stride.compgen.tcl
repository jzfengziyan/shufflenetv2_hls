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
    id 912 \
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
    id 913 \
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
    id 914 \
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
    id 915 \
    name ShuffleConvs_2_Downs_95 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_2_Downs_95 \
    op interface \
    ports { ShuffleConvs_2_Downs_95_address0 { O 7 vector } ShuffleConvs_2_Downs_95_ce0 { O 1 bit } ShuffleConvs_2_Downs_95_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_2_Downs_95'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 916 \
    name ShuffleConvs_2_Downs_94 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_2_Downs_94 \
    op interface \
    ports { ShuffleConvs_2_Downs_94_address0 { O 7 vector } ShuffleConvs_2_Downs_94_ce0 { O 1 bit } ShuffleConvs_2_Downs_94_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_2_Downs_94'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 917 \
    name ShuffleConvs_2_Downs_83 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_2_Downs_83 \
    op interface \
    ports { ShuffleConvs_2_Downs_83_address0 { O 7 vector } ShuffleConvs_2_Downs_83_ce0 { O 1 bit } ShuffleConvs_2_Downs_83_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_2_Downs_83'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 918 \
    name ShuffleConvs_2_Downs_72 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_2_Downs_72 \
    op interface \
    ports { ShuffleConvs_2_Downs_72_address0 { O 7 vector } ShuffleConvs_2_Downs_72_ce0 { O 1 bit } ShuffleConvs_2_Downs_72_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_2_Downs_72'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 919 \
    name ShuffleConvs_2_Downs_61 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_2_Downs_61 \
    op interface \
    ports { ShuffleConvs_2_Downs_61_address0 { O 7 vector } ShuffleConvs_2_Downs_61_ce0 { O 1 bit } ShuffleConvs_2_Downs_61_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_2_Downs_61'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 920 \
    name ShuffleConvs_2_Downs_50 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_2_Downs_50 \
    op interface \
    ports { ShuffleConvs_2_Downs_50_address0 { O 7 vector } ShuffleConvs_2_Downs_50_ce0 { O 1 bit } ShuffleConvs_2_Downs_50_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_2_Downs_50'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 921 \
    name ShuffleConvs_2_Downs_39 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_2_Downs_39 \
    op interface \
    ports { ShuffleConvs_2_Downs_39_address0 { O 7 vector } ShuffleConvs_2_Downs_39_ce0 { O 1 bit } ShuffleConvs_2_Downs_39_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_2_Downs_39'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 922 \
    name ShuffleConvs_2_Downs_28 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_2_Downs_28 \
    op interface \
    ports { ShuffleConvs_2_Downs_28_address0 { O 7 vector } ShuffleConvs_2_Downs_28_ce0 { O 1 bit } ShuffleConvs_2_Downs_28_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_2_Downs_28'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 923 \
    name ShuffleConvs_2_Downs_17 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_2_Downs_17 \
    op interface \
    ports { ShuffleConvs_2_Downs_17_address0 { O 7 vector } ShuffleConvs_2_Downs_17_ce0 { O 1 bit } ShuffleConvs_2_Downs_17_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_2_Downs_17'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 924 \
    name ShuffleConvs_2_Downs_6 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_2_Downs_6 \
    op interface \
    ports { ShuffleConvs_2_Downs_6_address0 { O 7 vector } ShuffleConvs_2_Downs_6_ce0 { O 1 bit } ShuffleConvs_2_Downs_6_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_2_Downs_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 925 \
    name ShuffleConvs_2_Downs_93 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_2_Downs_93 \
    op interface \
    ports { ShuffleConvs_2_Downs_93_address0 { O 7 vector } ShuffleConvs_2_Downs_93_ce0 { O 1 bit } ShuffleConvs_2_Downs_93_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_2_Downs_93'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 926 \
    name ShuffleConvs_2_Downs_92 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_2_Downs_92 \
    op interface \
    ports { ShuffleConvs_2_Downs_92_address0 { O 7 vector } ShuffleConvs_2_Downs_92_ce0 { O 1 bit } ShuffleConvs_2_Downs_92_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_2_Downs_92'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 927 \
    name ShuffleConvs_2_Downs_91 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_2_Downs_91 \
    op interface \
    ports { ShuffleConvs_2_Downs_91_address0 { O 7 vector } ShuffleConvs_2_Downs_91_ce0 { O 1 bit } ShuffleConvs_2_Downs_91_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_2_Downs_91'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 928 \
    name ShuffleConvs_2_Downs_90 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_2_Downs_90 \
    op interface \
    ports { ShuffleConvs_2_Downs_90_address0 { O 7 vector } ShuffleConvs_2_Downs_90_ce0 { O 1 bit } ShuffleConvs_2_Downs_90_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_2_Downs_90'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 929 \
    name ShuffleConvs_2_Downs_89 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_2_Downs_89 \
    op interface \
    ports { ShuffleConvs_2_Downs_89_address0 { O 7 vector } ShuffleConvs_2_Downs_89_ce0 { O 1 bit } ShuffleConvs_2_Downs_89_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_2_Downs_89'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 930 \
    name ShuffleConvs_2_Downs_88 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_2_Downs_88 \
    op interface \
    ports { ShuffleConvs_2_Downs_88_address0 { O 7 vector } ShuffleConvs_2_Downs_88_ce0 { O 1 bit } ShuffleConvs_2_Downs_88_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_2_Downs_88'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 931 \
    name ShuffleConvs_2_Downs_87 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_2_Downs_87 \
    op interface \
    ports { ShuffleConvs_2_Downs_87_address0 { O 7 vector } ShuffleConvs_2_Downs_87_ce0 { O 1 bit } ShuffleConvs_2_Downs_87_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_2_Downs_87'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 932 \
    name ShuffleConvs_2_Downs_86 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_2_Downs_86 \
    op interface \
    ports { ShuffleConvs_2_Downs_86_address0 { O 7 vector } ShuffleConvs_2_Downs_86_ce0 { O 1 bit } ShuffleConvs_2_Downs_86_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_2_Downs_86'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 933 \
    name ShuffleConvs_2_Downs_85 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_2_Downs_85 \
    op interface \
    ports { ShuffleConvs_2_Downs_85_address0 { O 7 vector } ShuffleConvs_2_Downs_85_ce0 { O 1 bit } ShuffleConvs_2_Downs_85_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_2_Downs_85'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 934 \
    name ShuffleConvs_2_Downs_84 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_2_Downs_84 \
    op interface \
    ports { ShuffleConvs_2_Downs_84_address0 { O 7 vector } ShuffleConvs_2_Downs_84_ce0 { O 1 bit } ShuffleConvs_2_Downs_84_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_2_Downs_84'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 935 \
    name ShuffleConvs_2_Downs_82 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_2_Downs_82 \
    op interface \
    ports { ShuffleConvs_2_Downs_82_address0 { O 7 vector } ShuffleConvs_2_Downs_82_ce0 { O 1 bit } ShuffleConvs_2_Downs_82_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_2_Downs_82'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 936 \
    name ShuffleConvs_2_Downs_81 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_2_Downs_81 \
    op interface \
    ports { ShuffleConvs_2_Downs_81_address0 { O 7 vector } ShuffleConvs_2_Downs_81_ce0 { O 1 bit } ShuffleConvs_2_Downs_81_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_2_Downs_81'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 937 \
    name ShuffleConvs_2_Downs_80 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_2_Downs_80 \
    op interface \
    ports { ShuffleConvs_2_Downs_80_address0 { O 7 vector } ShuffleConvs_2_Downs_80_ce0 { O 1 bit } ShuffleConvs_2_Downs_80_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_2_Downs_80'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 938 \
    name ShuffleConvs_2_Downs_79 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_2_Downs_79 \
    op interface \
    ports { ShuffleConvs_2_Downs_79_address0 { O 7 vector } ShuffleConvs_2_Downs_79_ce0 { O 1 bit } ShuffleConvs_2_Downs_79_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_2_Downs_79'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 939 \
    name ShuffleConvs_2_Downs_78 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_2_Downs_78 \
    op interface \
    ports { ShuffleConvs_2_Downs_78_address0 { O 7 vector } ShuffleConvs_2_Downs_78_ce0 { O 1 bit } ShuffleConvs_2_Downs_78_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_2_Downs_78'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 940 \
    name ShuffleConvs_2_Downs_77 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_2_Downs_77 \
    op interface \
    ports { ShuffleConvs_2_Downs_77_address0 { O 7 vector } ShuffleConvs_2_Downs_77_ce0 { O 1 bit } ShuffleConvs_2_Downs_77_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_2_Downs_77'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 941 \
    name ShuffleConvs_2_Downs_76 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_2_Downs_76 \
    op interface \
    ports { ShuffleConvs_2_Downs_76_address0 { O 7 vector } ShuffleConvs_2_Downs_76_ce0 { O 1 bit } ShuffleConvs_2_Downs_76_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_2_Downs_76'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 942 \
    name ShuffleConvs_2_Downs_75 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_2_Downs_75 \
    op interface \
    ports { ShuffleConvs_2_Downs_75_address0 { O 7 vector } ShuffleConvs_2_Downs_75_ce0 { O 1 bit } ShuffleConvs_2_Downs_75_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_2_Downs_75'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 943 \
    name ShuffleConvs_2_Downs_74 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_2_Downs_74 \
    op interface \
    ports { ShuffleConvs_2_Downs_74_address0 { O 7 vector } ShuffleConvs_2_Downs_74_ce0 { O 1 bit } ShuffleConvs_2_Downs_74_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_2_Downs_74'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 944 \
    name ShuffleConvs_2_Downs_73 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_2_Downs_73 \
    op interface \
    ports { ShuffleConvs_2_Downs_73_address0 { O 7 vector } ShuffleConvs_2_Downs_73_ce0 { O 1 bit } ShuffleConvs_2_Downs_73_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_2_Downs_73'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 945 \
    name ShuffleConvs_2_Downs_71 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_2_Downs_71 \
    op interface \
    ports { ShuffleConvs_2_Downs_71_address0 { O 7 vector } ShuffleConvs_2_Downs_71_ce0 { O 1 bit } ShuffleConvs_2_Downs_71_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_2_Downs_71'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 946 \
    name ShuffleConvs_2_Downs_70 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_2_Downs_70 \
    op interface \
    ports { ShuffleConvs_2_Downs_70_address0 { O 7 vector } ShuffleConvs_2_Downs_70_ce0 { O 1 bit } ShuffleConvs_2_Downs_70_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_2_Downs_70'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 947 \
    name ShuffleConvs_2_Downs_69 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_2_Downs_69 \
    op interface \
    ports { ShuffleConvs_2_Downs_69_address0 { O 7 vector } ShuffleConvs_2_Downs_69_ce0 { O 1 bit } ShuffleConvs_2_Downs_69_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_2_Downs_69'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 948 \
    name ShuffleConvs_2_Downs_68 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_2_Downs_68 \
    op interface \
    ports { ShuffleConvs_2_Downs_68_address0 { O 7 vector } ShuffleConvs_2_Downs_68_ce0 { O 1 bit } ShuffleConvs_2_Downs_68_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_2_Downs_68'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 949 \
    name ShuffleConvs_2_Downs_67 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_2_Downs_67 \
    op interface \
    ports { ShuffleConvs_2_Downs_67_address0 { O 7 vector } ShuffleConvs_2_Downs_67_ce0 { O 1 bit } ShuffleConvs_2_Downs_67_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_2_Downs_67'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 950 \
    name ShuffleConvs_2_Downs_66 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_2_Downs_66 \
    op interface \
    ports { ShuffleConvs_2_Downs_66_address0 { O 7 vector } ShuffleConvs_2_Downs_66_ce0 { O 1 bit } ShuffleConvs_2_Downs_66_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_2_Downs_66'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 951 \
    name ShuffleConvs_2_Downs_65 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_2_Downs_65 \
    op interface \
    ports { ShuffleConvs_2_Downs_65_address0 { O 7 vector } ShuffleConvs_2_Downs_65_ce0 { O 1 bit } ShuffleConvs_2_Downs_65_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_2_Downs_65'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 952 \
    name ShuffleConvs_2_Downs_64 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_2_Downs_64 \
    op interface \
    ports { ShuffleConvs_2_Downs_64_address0 { O 7 vector } ShuffleConvs_2_Downs_64_ce0 { O 1 bit } ShuffleConvs_2_Downs_64_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_2_Downs_64'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 953 \
    name ShuffleConvs_2_Downs_63 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_2_Downs_63 \
    op interface \
    ports { ShuffleConvs_2_Downs_63_address0 { O 7 vector } ShuffleConvs_2_Downs_63_ce0 { O 1 bit } ShuffleConvs_2_Downs_63_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_2_Downs_63'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 954 \
    name ShuffleConvs_2_Downs_62 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_2_Downs_62 \
    op interface \
    ports { ShuffleConvs_2_Downs_62_address0 { O 7 vector } ShuffleConvs_2_Downs_62_ce0 { O 1 bit } ShuffleConvs_2_Downs_62_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_2_Downs_62'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 955 \
    name ShuffleConvs_2_Downs_60 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_2_Downs_60 \
    op interface \
    ports { ShuffleConvs_2_Downs_60_address0 { O 7 vector } ShuffleConvs_2_Downs_60_ce0 { O 1 bit } ShuffleConvs_2_Downs_60_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_2_Downs_60'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 956 \
    name ShuffleConvs_2_Downs_59 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_2_Downs_59 \
    op interface \
    ports { ShuffleConvs_2_Downs_59_address0 { O 7 vector } ShuffleConvs_2_Downs_59_ce0 { O 1 bit } ShuffleConvs_2_Downs_59_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_2_Downs_59'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 957 \
    name ShuffleConvs_2_Downs_58 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_2_Downs_58 \
    op interface \
    ports { ShuffleConvs_2_Downs_58_address0 { O 7 vector } ShuffleConvs_2_Downs_58_ce0 { O 1 bit } ShuffleConvs_2_Downs_58_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_2_Downs_58'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 958 \
    name ShuffleConvs_2_Downs_57 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_2_Downs_57 \
    op interface \
    ports { ShuffleConvs_2_Downs_57_address0 { O 7 vector } ShuffleConvs_2_Downs_57_ce0 { O 1 bit } ShuffleConvs_2_Downs_57_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_2_Downs_57'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 959 \
    name ShuffleConvs_2_Downs_56 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_2_Downs_56 \
    op interface \
    ports { ShuffleConvs_2_Downs_56_address0 { O 7 vector } ShuffleConvs_2_Downs_56_ce0 { O 1 bit } ShuffleConvs_2_Downs_56_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_2_Downs_56'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 960 \
    name ShuffleConvs_2_Downs_55 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_2_Downs_55 \
    op interface \
    ports { ShuffleConvs_2_Downs_55_address0 { O 7 vector } ShuffleConvs_2_Downs_55_ce0 { O 1 bit } ShuffleConvs_2_Downs_55_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_2_Downs_55'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 961 \
    name ShuffleConvs_2_Downs_54 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_2_Downs_54 \
    op interface \
    ports { ShuffleConvs_2_Downs_54_address0 { O 7 vector } ShuffleConvs_2_Downs_54_ce0 { O 1 bit } ShuffleConvs_2_Downs_54_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_2_Downs_54'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 962 \
    name ShuffleConvs_2_Downs_53 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_2_Downs_53 \
    op interface \
    ports { ShuffleConvs_2_Downs_53_address0 { O 7 vector } ShuffleConvs_2_Downs_53_ce0 { O 1 bit } ShuffleConvs_2_Downs_53_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_2_Downs_53'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 963 \
    name ShuffleConvs_2_Downs_52 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_2_Downs_52 \
    op interface \
    ports { ShuffleConvs_2_Downs_52_address0 { O 7 vector } ShuffleConvs_2_Downs_52_ce0 { O 1 bit } ShuffleConvs_2_Downs_52_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_2_Downs_52'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 964 \
    name ShuffleConvs_2_Downs_51 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_2_Downs_51 \
    op interface \
    ports { ShuffleConvs_2_Downs_51_address0 { O 7 vector } ShuffleConvs_2_Downs_51_ce0 { O 1 bit } ShuffleConvs_2_Downs_51_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_2_Downs_51'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 965 \
    name ShuffleConvs_2_Downs_49 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_2_Downs_49 \
    op interface \
    ports { ShuffleConvs_2_Downs_49_address0 { O 7 vector } ShuffleConvs_2_Downs_49_ce0 { O 1 bit } ShuffleConvs_2_Downs_49_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_2_Downs_49'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 966 \
    name ShuffleConvs_2_Downs_48 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_2_Downs_48 \
    op interface \
    ports { ShuffleConvs_2_Downs_48_address0 { O 7 vector } ShuffleConvs_2_Downs_48_ce0 { O 1 bit } ShuffleConvs_2_Downs_48_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_2_Downs_48'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 967 \
    name ShuffleConvs_2_Downs_47 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_2_Downs_47 \
    op interface \
    ports { ShuffleConvs_2_Downs_47_address0 { O 7 vector } ShuffleConvs_2_Downs_47_ce0 { O 1 bit } ShuffleConvs_2_Downs_47_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_2_Downs_47'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 968 \
    name ShuffleConvs_2_Downs_46 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_2_Downs_46 \
    op interface \
    ports { ShuffleConvs_2_Downs_46_address0 { O 7 vector } ShuffleConvs_2_Downs_46_ce0 { O 1 bit } ShuffleConvs_2_Downs_46_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_2_Downs_46'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 969 \
    name ShuffleConvs_2_Downs_45 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_2_Downs_45 \
    op interface \
    ports { ShuffleConvs_2_Downs_45_address0 { O 7 vector } ShuffleConvs_2_Downs_45_ce0 { O 1 bit } ShuffleConvs_2_Downs_45_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_2_Downs_45'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 970 \
    name ShuffleConvs_2_Downs_44 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_2_Downs_44 \
    op interface \
    ports { ShuffleConvs_2_Downs_44_address0 { O 7 vector } ShuffleConvs_2_Downs_44_ce0 { O 1 bit } ShuffleConvs_2_Downs_44_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_2_Downs_44'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 971 \
    name ShuffleConvs_2_Downs_43 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_2_Downs_43 \
    op interface \
    ports { ShuffleConvs_2_Downs_43_address0 { O 7 vector } ShuffleConvs_2_Downs_43_ce0 { O 1 bit } ShuffleConvs_2_Downs_43_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_2_Downs_43'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 972 \
    name ShuffleConvs_2_Downs_42 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_2_Downs_42 \
    op interface \
    ports { ShuffleConvs_2_Downs_42_address0 { O 7 vector } ShuffleConvs_2_Downs_42_ce0 { O 1 bit } ShuffleConvs_2_Downs_42_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_2_Downs_42'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 973 \
    name ShuffleConvs_2_Downs_41 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_2_Downs_41 \
    op interface \
    ports { ShuffleConvs_2_Downs_41_address0 { O 7 vector } ShuffleConvs_2_Downs_41_ce0 { O 1 bit } ShuffleConvs_2_Downs_41_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_2_Downs_41'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 974 \
    name ShuffleConvs_2_Downs_40 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_2_Downs_40 \
    op interface \
    ports { ShuffleConvs_2_Downs_40_address0 { O 7 vector } ShuffleConvs_2_Downs_40_ce0 { O 1 bit } ShuffleConvs_2_Downs_40_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_2_Downs_40'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 975 \
    name ShuffleConvs_2_Downs_38 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_2_Downs_38 \
    op interface \
    ports { ShuffleConvs_2_Downs_38_address0 { O 7 vector } ShuffleConvs_2_Downs_38_ce0 { O 1 bit } ShuffleConvs_2_Downs_38_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_2_Downs_38'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 976 \
    name ShuffleConvs_2_Downs_37 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_2_Downs_37 \
    op interface \
    ports { ShuffleConvs_2_Downs_37_address0 { O 7 vector } ShuffleConvs_2_Downs_37_ce0 { O 1 bit } ShuffleConvs_2_Downs_37_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_2_Downs_37'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 977 \
    name ShuffleConvs_2_Downs_36 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_2_Downs_36 \
    op interface \
    ports { ShuffleConvs_2_Downs_36_address0 { O 7 vector } ShuffleConvs_2_Downs_36_ce0 { O 1 bit } ShuffleConvs_2_Downs_36_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_2_Downs_36'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 978 \
    name ShuffleConvs_2_Downs_35 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_2_Downs_35 \
    op interface \
    ports { ShuffleConvs_2_Downs_35_address0 { O 7 vector } ShuffleConvs_2_Downs_35_ce0 { O 1 bit } ShuffleConvs_2_Downs_35_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_2_Downs_35'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 979 \
    name ShuffleConvs_2_Downs_34 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_2_Downs_34 \
    op interface \
    ports { ShuffleConvs_2_Downs_34_address0 { O 7 vector } ShuffleConvs_2_Downs_34_ce0 { O 1 bit } ShuffleConvs_2_Downs_34_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_2_Downs_34'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 980 \
    name ShuffleConvs_2_Downs_33 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_2_Downs_33 \
    op interface \
    ports { ShuffleConvs_2_Downs_33_address0 { O 7 vector } ShuffleConvs_2_Downs_33_ce0 { O 1 bit } ShuffleConvs_2_Downs_33_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_2_Downs_33'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 981 \
    name ShuffleConvs_2_Downs_32 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_2_Downs_32 \
    op interface \
    ports { ShuffleConvs_2_Downs_32_address0 { O 7 vector } ShuffleConvs_2_Downs_32_ce0 { O 1 bit } ShuffleConvs_2_Downs_32_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_2_Downs_32'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 982 \
    name ShuffleConvs_2_Downs_31 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_2_Downs_31 \
    op interface \
    ports { ShuffleConvs_2_Downs_31_address0 { O 7 vector } ShuffleConvs_2_Downs_31_ce0 { O 1 bit } ShuffleConvs_2_Downs_31_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_2_Downs_31'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 983 \
    name ShuffleConvs_2_Downs_30 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_2_Downs_30 \
    op interface \
    ports { ShuffleConvs_2_Downs_30_address0 { O 7 vector } ShuffleConvs_2_Downs_30_ce0 { O 1 bit } ShuffleConvs_2_Downs_30_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_2_Downs_30'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 984 \
    name ShuffleConvs_2_Downs_29 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_2_Downs_29 \
    op interface \
    ports { ShuffleConvs_2_Downs_29_address0 { O 7 vector } ShuffleConvs_2_Downs_29_ce0 { O 1 bit } ShuffleConvs_2_Downs_29_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_2_Downs_29'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 985 \
    name ShuffleConvs_2_Downs_27 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_2_Downs_27 \
    op interface \
    ports { ShuffleConvs_2_Downs_27_address0 { O 7 vector } ShuffleConvs_2_Downs_27_ce0 { O 1 bit } ShuffleConvs_2_Downs_27_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_2_Downs_27'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 986 \
    name ShuffleConvs_2_Downs_26 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_2_Downs_26 \
    op interface \
    ports { ShuffleConvs_2_Downs_26_address0 { O 7 vector } ShuffleConvs_2_Downs_26_ce0 { O 1 bit } ShuffleConvs_2_Downs_26_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_2_Downs_26'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 987 \
    name ShuffleConvs_2_Downs_25 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_2_Downs_25 \
    op interface \
    ports { ShuffleConvs_2_Downs_25_address0 { O 7 vector } ShuffleConvs_2_Downs_25_ce0 { O 1 bit } ShuffleConvs_2_Downs_25_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_2_Downs_25'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 988 \
    name ShuffleConvs_2_Downs_24 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_2_Downs_24 \
    op interface \
    ports { ShuffleConvs_2_Downs_24_address0 { O 7 vector } ShuffleConvs_2_Downs_24_ce0 { O 1 bit } ShuffleConvs_2_Downs_24_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_2_Downs_24'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 989 \
    name ShuffleConvs_2_Downs_23 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_2_Downs_23 \
    op interface \
    ports { ShuffleConvs_2_Downs_23_address0 { O 7 vector } ShuffleConvs_2_Downs_23_ce0 { O 1 bit } ShuffleConvs_2_Downs_23_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_2_Downs_23'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 990 \
    name ShuffleConvs_2_Downs_22 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_2_Downs_22 \
    op interface \
    ports { ShuffleConvs_2_Downs_22_address0 { O 7 vector } ShuffleConvs_2_Downs_22_ce0 { O 1 bit } ShuffleConvs_2_Downs_22_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_2_Downs_22'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 991 \
    name ShuffleConvs_2_Downs_21 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_2_Downs_21 \
    op interface \
    ports { ShuffleConvs_2_Downs_21_address0 { O 7 vector } ShuffleConvs_2_Downs_21_ce0 { O 1 bit } ShuffleConvs_2_Downs_21_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_2_Downs_21'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 992 \
    name ShuffleConvs_2_Downs_20 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_2_Downs_20 \
    op interface \
    ports { ShuffleConvs_2_Downs_20_address0 { O 7 vector } ShuffleConvs_2_Downs_20_ce0 { O 1 bit } ShuffleConvs_2_Downs_20_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_2_Downs_20'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 993 \
    name ShuffleConvs_2_Downs_19 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_2_Downs_19 \
    op interface \
    ports { ShuffleConvs_2_Downs_19_address0 { O 7 vector } ShuffleConvs_2_Downs_19_ce0 { O 1 bit } ShuffleConvs_2_Downs_19_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_2_Downs_19'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 994 \
    name ShuffleConvs_2_Downs_18 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_2_Downs_18 \
    op interface \
    ports { ShuffleConvs_2_Downs_18_address0 { O 7 vector } ShuffleConvs_2_Downs_18_ce0 { O 1 bit } ShuffleConvs_2_Downs_18_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_2_Downs_18'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 995 \
    name ShuffleConvs_2_Downs_16 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_2_Downs_16 \
    op interface \
    ports { ShuffleConvs_2_Downs_16_address0 { O 7 vector } ShuffleConvs_2_Downs_16_ce0 { O 1 bit } ShuffleConvs_2_Downs_16_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_2_Downs_16'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 996 \
    name ShuffleConvs_2_Downs_15 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_2_Downs_15 \
    op interface \
    ports { ShuffleConvs_2_Downs_15_address0 { O 7 vector } ShuffleConvs_2_Downs_15_ce0 { O 1 bit } ShuffleConvs_2_Downs_15_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_2_Downs_15'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 997 \
    name ShuffleConvs_2_Downs_14 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_2_Downs_14 \
    op interface \
    ports { ShuffleConvs_2_Downs_14_address0 { O 7 vector } ShuffleConvs_2_Downs_14_ce0 { O 1 bit } ShuffleConvs_2_Downs_14_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_2_Downs_14'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 998 \
    name ShuffleConvs_2_Downs_13 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_2_Downs_13 \
    op interface \
    ports { ShuffleConvs_2_Downs_13_address0 { O 7 vector } ShuffleConvs_2_Downs_13_ce0 { O 1 bit } ShuffleConvs_2_Downs_13_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_2_Downs_13'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 999 \
    name ShuffleConvs_2_Downs_12 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_2_Downs_12 \
    op interface \
    ports { ShuffleConvs_2_Downs_12_address0 { O 7 vector } ShuffleConvs_2_Downs_12_ce0 { O 1 bit } ShuffleConvs_2_Downs_12_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_2_Downs_12'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1000 \
    name ShuffleConvs_2_Downs_11 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_2_Downs_11 \
    op interface \
    ports { ShuffleConvs_2_Downs_11_address0 { O 7 vector } ShuffleConvs_2_Downs_11_ce0 { O 1 bit } ShuffleConvs_2_Downs_11_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_2_Downs_11'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1001 \
    name ShuffleConvs_2_Downs_10 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_2_Downs_10 \
    op interface \
    ports { ShuffleConvs_2_Downs_10_address0 { O 7 vector } ShuffleConvs_2_Downs_10_ce0 { O 1 bit } ShuffleConvs_2_Downs_10_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_2_Downs_10'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1002 \
    name ShuffleConvs_2_Downs_9 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_2_Downs_9 \
    op interface \
    ports { ShuffleConvs_2_Downs_9_address0 { O 7 vector } ShuffleConvs_2_Downs_9_ce0 { O 1 bit } ShuffleConvs_2_Downs_9_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_2_Downs_9'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1003 \
    name ShuffleConvs_2_Downs_8 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_2_Downs_8 \
    op interface \
    ports { ShuffleConvs_2_Downs_8_address0 { O 7 vector } ShuffleConvs_2_Downs_8_ce0 { O 1 bit } ShuffleConvs_2_Downs_8_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_2_Downs_8'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1004 \
    name ShuffleConvs_2_Downs_7 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_2_Downs_7 \
    op interface \
    ports { ShuffleConvs_2_Downs_7_address0 { O 7 vector } ShuffleConvs_2_Downs_7_ce0 { O 1 bit } ShuffleConvs_2_Downs_7_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_2_Downs_7'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1005 \
    name ShuffleConvs_2_Downs_5 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_2_Downs_5 \
    op interface \
    ports { ShuffleConvs_2_Downs_5_address0 { O 7 vector } ShuffleConvs_2_Downs_5_ce0 { O 1 bit } ShuffleConvs_2_Downs_5_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_2_Downs_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1006 \
    name ShuffleConvs_2_Downs_4 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_2_Downs_4 \
    op interface \
    ports { ShuffleConvs_2_Downs_4_address0 { O 7 vector } ShuffleConvs_2_Downs_4_ce0 { O 1 bit } ShuffleConvs_2_Downs_4_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_2_Downs_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1007 \
    name ShuffleConvs_2_Downs_3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_2_Downs_3 \
    op interface \
    ports { ShuffleConvs_2_Downs_3_address0 { O 7 vector } ShuffleConvs_2_Downs_3_ce0 { O 1 bit } ShuffleConvs_2_Downs_3_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_2_Downs_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1008 \
    name ShuffleConvs_2_Downs_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_2_Downs_2 \
    op interface \
    ports { ShuffleConvs_2_Downs_2_address0 { O 7 vector } ShuffleConvs_2_Downs_2_ce0 { O 1 bit } ShuffleConvs_2_Downs_2_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_2_Downs_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1009 \
    name ShuffleConvs_2_Downs_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_2_Downs_1 \
    op interface \
    ports { ShuffleConvs_2_Downs_1_address0 { O 7 vector } ShuffleConvs_2_Downs_1_ce0 { O 1 bit } ShuffleConvs_2_Downs_1_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_2_Downs_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1010 \
    name ShuffleConvs_2_Downs \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ShuffleConvs_2_Downs \
    op interface \
    ports { ShuffleConvs_2_Downs_address0 { O 7 vector } ShuffleConvs_2_Downs_ce0 { O 1 bit } ShuffleConvs_2_Downs_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_2_Downs'"
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


