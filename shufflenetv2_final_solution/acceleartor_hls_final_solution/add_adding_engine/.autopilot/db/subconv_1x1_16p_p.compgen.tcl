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
    id 163 \
    name input_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename input_V \
    op interface \
    ports { input_V_address0 { O 14 vector } input_V_ce0 { O 1 bit } input_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'input_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 164 \
    name weight_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_0_V \
    op interface \
    ports { weight_0_V_address0 { O 9 vector } weight_0_V_ce0 { O 1 bit } weight_0_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 165 \
    name weight_1_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_1_V \
    op interface \
    ports { weight_1_V_address0 { O 9 vector } weight_1_V_ce0 { O 1 bit } weight_1_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 166 \
    name weight_2_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_2_V \
    op interface \
    ports { weight_2_V_address0 { O 9 vector } weight_2_V_ce0 { O 1 bit } weight_2_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 167 \
    name weight_3_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_3_V \
    op interface \
    ports { weight_3_V_address0 { O 9 vector } weight_3_V_ce0 { O 1 bit } weight_3_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_3_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 168 \
    name weight_4_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_4_V \
    op interface \
    ports { weight_4_V_address0 { O 9 vector } weight_4_V_ce0 { O 1 bit } weight_4_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_4_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 169 \
    name weight_5_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_5_V \
    op interface \
    ports { weight_5_V_address0 { O 9 vector } weight_5_V_ce0 { O 1 bit } weight_5_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_5_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 170 \
    name weight_6_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_6_V \
    op interface \
    ports { weight_6_V_address0 { O 9 vector } weight_6_V_ce0 { O 1 bit } weight_6_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_6_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 171 \
    name weight_7_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weight_7_V \
    op interface \
    ports { weight_7_V_address0 { O 9 vector } weight_7_V_ce0 { O 1 bit } weight_7_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weight_7_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 172 \
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
    id 173 \
    name ShuffleConvs_1_Downs_7 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename ShuffleConvs_1_Downs_7 \
    op interface \
    ports { ShuffleConvs_1_Downs_7_address0 { O 11 vector } ShuffleConvs_1_Downs_7_ce0 { O 1 bit } ShuffleConvs_1_Downs_7_we0 { O 1 bit } ShuffleConvs_1_Downs_7_d0 { O 8 vector } ShuffleConvs_1_Downs_7_q0 { I 8 vector } ShuffleConvs_1_Downs_7_address1 { O 11 vector } ShuffleConvs_1_Downs_7_ce1 { O 1 bit } ShuffleConvs_1_Downs_7_we1 { O 1 bit } ShuffleConvs_1_Downs_7_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_1_Downs_7'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 174 \
    name ShuffleConvs_1_Downs_6 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename ShuffleConvs_1_Downs_6 \
    op interface \
    ports { ShuffleConvs_1_Downs_6_address0 { O 11 vector } ShuffleConvs_1_Downs_6_ce0 { O 1 bit } ShuffleConvs_1_Downs_6_we0 { O 1 bit } ShuffleConvs_1_Downs_6_d0 { O 8 vector } ShuffleConvs_1_Downs_6_q0 { I 8 vector } ShuffleConvs_1_Downs_6_address1 { O 11 vector } ShuffleConvs_1_Downs_6_ce1 { O 1 bit } ShuffleConvs_1_Downs_6_we1 { O 1 bit } ShuffleConvs_1_Downs_6_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_1_Downs_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 175 \
    name ShuffleConvs_1_Downs_5 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename ShuffleConvs_1_Downs_5 \
    op interface \
    ports { ShuffleConvs_1_Downs_5_address0 { O 11 vector } ShuffleConvs_1_Downs_5_ce0 { O 1 bit } ShuffleConvs_1_Downs_5_we0 { O 1 bit } ShuffleConvs_1_Downs_5_d0 { O 8 vector } ShuffleConvs_1_Downs_5_q0 { I 8 vector } ShuffleConvs_1_Downs_5_address1 { O 11 vector } ShuffleConvs_1_Downs_5_ce1 { O 1 bit } ShuffleConvs_1_Downs_5_we1 { O 1 bit } ShuffleConvs_1_Downs_5_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_1_Downs_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 176 \
    name ShuffleConvs_1_Downs_4 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename ShuffleConvs_1_Downs_4 \
    op interface \
    ports { ShuffleConvs_1_Downs_4_address0 { O 11 vector } ShuffleConvs_1_Downs_4_ce0 { O 1 bit } ShuffleConvs_1_Downs_4_we0 { O 1 bit } ShuffleConvs_1_Downs_4_d0 { O 8 vector } ShuffleConvs_1_Downs_4_q0 { I 8 vector } ShuffleConvs_1_Downs_4_address1 { O 11 vector } ShuffleConvs_1_Downs_4_ce1 { O 1 bit } ShuffleConvs_1_Downs_4_we1 { O 1 bit } ShuffleConvs_1_Downs_4_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_1_Downs_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 177 \
    name ShuffleConvs_1_Downs_3 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename ShuffleConvs_1_Downs_3 \
    op interface \
    ports { ShuffleConvs_1_Downs_3_address0 { O 11 vector } ShuffleConvs_1_Downs_3_ce0 { O 1 bit } ShuffleConvs_1_Downs_3_we0 { O 1 bit } ShuffleConvs_1_Downs_3_d0 { O 8 vector } ShuffleConvs_1_Downs_3_q0 { I 8 vector } ShuffleConvs_1_Downs_3_address1 { O 11 vector } ShuffleConvs_1_Downs_3_ce1 { O 1 bit } ShuffleConvs_1_Downs_3_we1 { O 1 bit } ShuffleConvs_1_Downs_3_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_1_Downs_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 178 \
    name ShuffleConvs_1_Downs_2 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename ShuffleConvs_1_Downs_2 \
    op interface \
    ports { ShuffleConvs_1_Downs_2_address0 { O 11 vector } ShuffleConvs_1_Downs_2_ce0 { O 1 bit } ShuffleConvs_1_Downs_2_we0 { O 1 bit } ShuffleConvs_1_Downs_2_d0 { O 8 vector } ShuffleConvs_1_Downs_2_q0 { I 8 vector } ShuffleConvs_1_Downs_2_address1 { O 11 vector } ShuffleConvs_1_Downs_2_ce1 { O 1 bit } ShuffleConvs_1_Downs_2_we1 { O 1 bit } ShuffleConvs_1_Downs_2_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_1_Downs_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 179 \
    name ShuffleConvs_1_Downs_1 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename ShuffleConvs_1_Downs_1 \
    op interface \
    ports { ShuffleConvs_1_Downs_1_address0 { O 11 vector } ShuffleConvs_1_Downs_1_ce0 { O 1 bit } ShuffleConvs_1_Downs_1_we0 { O 1 bit } ShuffleConvs_1_Downs_1_d0 { O 8 vector } ShuffleConvs_1_Downs_1_q0 { I 8 vector } ShuffleConvs_1_Downs_1_address1 { O 11 vector } ShuffleConvs_1_Downs_1_ce1 { O 1 bit } ShuffleConvs_1_Downs_1_we1 { O 1 bit } ShuffleConvs_1_Downs_1_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_1_Downs_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 180 \
    name ShuffleConvs_1_Downs \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename ShuffleConvs_1_Downs \
    op interface \
    ports { ShuffleConvs_1_Downs_address0 { O 11 vector } ShuffleConvs_1_Downs_ce0 { O 1 bit } ShuffleConvs_1_Downs_we0 { O 1 bit } ShuffleConvs_1_Downs_d0 { O 8 vector } ShuffleConvs_1_Downs_q0 { I 8 vector } ShuffleConvs_1_Downs_address1 { O 11 vector } ShuffleConvs_1_Downs_ce1 { O 1 bit } ShuffleConvs_1_Downs_we1 { O 1 bit } ShuffleConvs_1_Downs_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ShuffleConvs_1_Downs'"
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


