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
    id 56 \
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
    id 57 \
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
    id 58 \
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
    id 59 \
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
    id 60 \
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
    id 61 \
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
    id 62 \
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
    id 63 \
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
    id 64 \
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
    id 65 \
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
    id 66 \
    name buffer1_1_24_16x16_p_7 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_24_16x16_p_7 \
    op interface \
    ports { buffer1_1_24_16x16_p_7_address0 { O 10 vector } buffer1_1_24_16x16_p_7_ce0 { O 1 bit } buffer1_1_24_16x16_p_7_we0 { O 1 bit } buffer1_1_24_16x16_p_7_d0 { O 8 vector } buffer1_1_24_16x16_p_7_q0 { I 8 vector } buffer1_1_24_16x16_p_7_address1 { O 10 vector } buffer1_1_24_16x16_p_7_ce1 { O 1 bit } buffer1_1_24_16x16_p_7_we1 { O 1 bit } buffer1_1_24_16x16_p_7_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_24_16x16_p_7'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 67 \
    name buffer1_1_24_16x16_p_6 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_24_16x16_p_6 \
    op interface \
    ports { buffer1_1_24_16x16_p_6_address0 { O 10 vector } buffer1_1_24_16x16_p_6_ce0 { O 1 bit } buffer1_1_24_16x16_p_6_we0 { O 1 bit } buffer1_1_24_16x16_p_6_d0 { O 8 vector } buffer1_1_24_16x16_p_6_q0 { I 8 vector } buffer1_1_24_16x16_p_6_address1 { O 10 vector } buffer1_1_24_16x16_p_6_ce1 { O 1 bit } buffer1_1_24_16x16_p_6_we1 { O 1 bit } buffer1_1_24_16x16_p_6_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_24_16x16_p_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 68 \
    name buffer1_1_24_16x16_p_5 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_24_16x16_p_5 \
    op interface \
    ports { buffer1_1_24_16x16_p_5_address0 { O 10 vector } buffer1_1_24_16x16_p_5_ce0 { O 1 bit } buffer1_1_24_16x16_p_5_we0 { O 1 bit } buffer1_1_24_16x16_p_5_d0 { O 8 vector } buffer1_1_24_16x16_p_5_q0 { I 8 vector } buffer1_1_24_16x16_p_5_address1 { O 10 vector } buffer1_1_24_16x16_p_5_ce1 { O 1 bit } buffer1_1_24_16x16_p_5_we1 { O 1 bit } buffer1_1_24_16x16_p_5_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_24_16x16_p_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 69 \
    name buffer1_1_24_16x16_p_4 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_24_16x16_p_4 \
    op interface \
    ports { buffer1_1_24_16x16_p_4_address0 { O 10 vector } buffer1_1_24_16x16_p_4_ce0 { O 1 bit } buffer1_1_24_16x16_p_4_we0 { O 1 bit } buffer1_1_24_16x16_p_4_d0 { O 8 vector } buffer1_1_24_16x16_p_4_q0 { I 8 vector } buffer1_1_24_16x16_p_4_address1 { O 10 vector } buffer1_1_24_16x16_p_4_ce1 { O 1 bit } buffer1_1_24_16x16_p_4_we1 { O 1 bit } buffer1_1_24_16x16_p_4_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_24_16x16_p_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 70 \
    name buffer1_1_24_16x16_p_3 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_24_16x16_p_3 \
    op interface \
    ports { buffer1_1_24_16x16_p_3_address0 { O 10 vector } buffer1_1_24_16x16_p_3_ce0 { O 1 bit } buffer1_1_24_16x16_p_3_we0 { O 1 bit } buffer1_1_24_16x16_p_3_d0 { O 8 vector } buffer1_1_24_16x16_p_3_q0 { I 8 vector } buffer1_1_24_16x16_p_3_address1 { O 10 vector } buffer1_1_24_16x16_p_3_ce1 { O 1 bit } buffer1_1_24_16x16_p_3_we1 { O 1 bit } buffer1_1_24_16x16_p_3_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_24_16x16_p_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 71 \
    name buffer1_1_24_16x16_p_2 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_24_16x16_p_2 \
    op interface \
    ports { buffer1_1_24_16x16_p_2_address0 { O 10 vector } buffer1_1_24_16x16_p_2_ce0 { O 1 bit } buffer1_1_24_16x16_p_2_we0 { O 1 bit } buffer1_1_24_16x16_p_2_d0 { O 8 vector } buffer1_1_24_16x16_p_2_q0 { I 8 vector } buffer1_1_24_16x16_p_2_address1 { O 10 vector } buffer1_1_24_16x16_p_2_ce1 { O 1 bit } buffer1_1_24_16x16_p_2_we1 { O 1 bit } buffer1_1_24_16x16_p_2_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_24_16x16_p_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 72 \
    name buffer1_1_24_16x16_p_1 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_24_16x16_p_1 \
    op interface \
    ports { buffer1_1_24_16x16_p_1_address0 { O 10 vector } buffer1_1_24_16x16_p_1_ce0 { O 1 bit } buffer1_1_24_16x16_p_1_we0 { O 1 bit } buffer1_1_24_16x16_p_1_d0 { O 8 vector } buffer1_1_24_16x16_p_1_q0 { I 8 vector } buffer1_1_24_16x16_p_1_address1 { O 10 vector } buffer1_1_24_16x16_p_1_ce1 { O 1 bit } buffer1_1_24_16x16_p_1_we1 { O 1 bit } buffer1_1_24_16x16_p_1_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_24_16x16_p_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 73 \
    name buffer1_1_24_16x16_p \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename buffer1_1_24_16x16_p \
    op interface \
    ports { buffer1_1_24_16x16_p_address0 { O 10 vector } buffer1_1_24_16x16_p_ce0 { O 1 bit } buffer1_1_24_16x16_p_we0 { O 1 bit } buffer1_1_24_16x16_p_d0 { O 8 vector } buffer1_1_24_16x16_p_q0 { I 8 vector } buffer1_1_24_16x16_p_address1 { O 10 vector } buffer1_1_24_16x16_p_ce1 { O 1 bit } buffer1_1_24_16x16_p_we1 { O 1 bit } buffer1_1_24_16x16_p_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'buffer1_1_24_16x16_p'"
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


