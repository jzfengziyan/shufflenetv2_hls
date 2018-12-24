# This script segment is generated automatically by AutoPilot

set id 679
set name ShuffleNetV2_mux_zec
set corename simcore_mux
set op mux
set stage_num 1
set max_latency -1
set registered_input 1
set in1_width 8
set in1_signed 0
set in2_width 8
set in2_signed 0
set in3_width 8
set in3_signed 0
set in4_width 8
set in4_signed 0
set in5_width 8
set in5_signed 0
set in6_width 8
set in6_signed 0
set in7_width 8
set in7_signed 0
set in8_width 8
set in8_signed 0
set in9_width 3
set in9_signed 0
set out_width 8
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mux] == "ap_gen_simcore_mux"} {
eval "ap_gen_simcore_mux { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    in2_width ${in2_width} \
    in2_signed ${in2_signed} \
    in3_width ${in3_width} \
    in3_signed ${in3_signed} \
    in4_width ${in4_width} \
    in4_signed ${in4_signed} \
    in5_width ${in5_width} \
    in5_signed ${in5_signed} \
    in6_width ${in6_width} \
    in6_signed ${in6_signed} \
    in7_width ${in7_width} \
    in7_signed ${in7_signed} \
    in8_width ${in8_width} \
    in8_signed ${in8_signed} \
    in9_width ${in9_width} \
    in9_signed ${in9_signed} \
    out_width ${out_width} \
}"
} else {
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_mux, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op mux
set corename MuxnS
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_pipemux] == "::AESL_LIB_VIRTEX::xil_gen_pipemux"} {
eval "::AESL_LIB_VIRTEX::xil_gen_pipemux { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    in2_width ${in2_width} \
    in2_signed ${in2_signed} \
    in3_width ${in3_width} \
    in3_signed ${in3_signed} \
    in4_width ${in4_width} \
    in4_signed ${in4_signed} \
    in5_width ${in5_width} \
    in5_signed ${in5_signed} \
    in6_width ${in6_width} \
    in6_signed ${in6_signed} \
    in7_width ${in7_width} \
    in7_signed ${in7_signed} \
    in8_width ${in8_width} \
    in8_signed ${in8_signed} \
    in9_width ${in9_width} \
    in9_signed ${in9_signed} \
    out_width ${out_width} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_pipemux, check your platform lib"
}
}


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
    id 680 \
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
    id 690 \
    name bias_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bias_V \
    op interface \
    ports { bias_V_address0 { O 9 vector } bias_V_ce0 { O 1 bit } bias_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bias_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 691 \
    name conv_last_output_V_0 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename conv_last_output_V_0 \
    op interface \
    ports { conv_last_output_V_0_address0 { O 10 vector } conv_last_output_V_0_ce0 { O 1 bit } conv_last_output_V_0_we0 { O 1 bit } conv_last_output_V_0_d0 { O 8 vector } conv_last_output_V_0_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'conv_last_output_V_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 692 \
    name conv_last_output_V_1 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename conv_last_output_V_1 \
    op interface \
    ports { conv_last_output_V_1_address0 { O 10 vector } conv_last_output_V_1_ce0 { O 1 bit } conv_last_output_V_1_we0 { O 1 bit } conv_last_output_V_1_d0 { O 8 vector } conv_last_output_V_1_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'conv_last_output_V_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 693 \
    name conv_last_output_V_2 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename conv_last_output_V_2 \
    op interface \
    ports { conv_last_output_V_2_address0 { O 10 vector } conv_last_output_V_2_ce0 { O 1 bit } conv_last_output_V_2_we0 { O 1 bit } conv_last_output_V_2_d0 { O 8 vector } conv_last_output_V_2_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'conv_last_output_V_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 694 \
    name conv_last_output_V_3 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename conv_last_output_V_3 \
    op interface \
    ports { conv_last_output_V_3_address0 { O 10 vector } conv_last_output_V_3_ce0 { O 1 bit } conv_last_output_V_3_we0 { O 1 bit } conv_last_output_V_3_d0 { O 8 vector } conv_last_output_V_3_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'conv_last_output_V_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 695 \
    name conv_last_output_V_4 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename conv_last_output_V_4 \
    op interface \
    ports { conv_last_output_V_4_address0 { O 10 vector } conv_last_output_V_4_ce0 { O 1 bit } conv_last_output_V_4_we0 { O 1 bit } conv_last_output_V_4_d0 { O 8 vector } conv_last_output_V_4_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'conv_last_output_V_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 696 \
    name conv_last_output_V_5 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename conv_last_output_V_5 \
    op interface \
    ports { conv_last_output_V_5_address0 { O 10 vector } conv_last_output_V_5_ce0 { O 1 bit } conv_last_output_V_5_we0 { O 1 bit } conv_last_output_V_5_d0 { O 8 vector } conv_last_output_V_5_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'conv_last_output_V_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 697 \
    name conv_last_output_V_6 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename conv_last_output_V_6 \
    op interface \
    ports { conv_last_output_V_6_address0 { O 10 vector } conv_last_output_V_6_ce0 { O 1 bit } conv_last_output_V_6_we0 { O 1 bit } conv_last_output_V_6_d0 { O 8 vector } conv_last_output_V_6_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'conv_last_output_V_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 698 \
    name conv_last_output_V_7 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename conv_last_output_V_7 \
    op interface \
    ports { conv_last_output_V_7_address0 { O 10 vector } conv_last_output_V_7_ce0 { O 1 bit } conv_last_output_V_7_we0 { O 1 bit } conv_last_output_V_7_d0 { O 8 vector } conv_last_output_V_7_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'conv_last_output_V_7'"
}
}


# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 681 \
    name weight_0_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_0_V \
    op interface \
    ports { m_axi_weight_0_V_AWVALID { O 1 bit } m_axi_weight_0_V_AWREADY { I 1 bit } m_axi_weight_0_V_AWADDR { O 32 vector } m_axi_weight_0_V_AWID { O 1 vector } m_axi_weight_0_V_AWLEN { O 32 vector } m_axi_weight_0_V_AWSIZE { O 3 vector } m_axi_weight_0_V_AWBURST { O 2 vector } m_axi_weight_0_V_AWLOCK { O 2 vector } m_axi_weight_0_V_AWCACHE { O 4 vector } m_axi_weight_0_V_AWPROT { O 3 vector } m_axi_weight_0_V_AWQOS { O 4 vector } m_axi_weight_0_V_AWREGION { O 4 vector } m_axi_weight_0_V_AWUSER { O 1 vector } m_axi_weight_0_V_WVALID { O 1 bit } m_axi_weight_0_V_WREADY { I 1 bit } m_axi_weight_0_V_WDATA { O 8 vector } m_axi_weight_0_V_WSTRB { O 1 vector } m_axi_weight_0_V_WLAST { O 1 bit } m_axi_weight_0_V_WID { O 1 vector } m_axi_weight_0_V_WUSER { O 1 vector } m_axi_weight_0_V_ARVALID { O 1 bit } m_axi_weight_0_V_ARREADY { I 1 bit } m_axi_weight_0_V_ARADDR { O 32 vector } m_axi_weight_0_V_ARID { O 1 vector } m_axi_weight_0_V_ARLEN { O 32 vector } m_axi_weight_0_V_ARSIZE { O 3 vector } m_axi_weight_0_V_ARBURST { O 2 vector } m_axi_weight_0_V_ARLOCK { O 2 vector } m_axi_weight_0_V_ARCACHE { O 4 vector } m_axi_weight_0_V_ARPROT { O 3 vector } m_axi_weight_0_V_ARQOS { O 4 vector } m_axi_weight_0_V_ARREGION { O 4 vector } m_axi_weight_0_V_ARUSER { O 1 vector } m_axi_weight_0_V_RVALID { I 1 bit } m_axi_weight_0_V_RREADY { O 1 bit } m_axi_weight_0_V_RDATA { I 8 vector } m_axi_weight_0_V_RLAST { I 1 bit } m_axi_weight_0_V_RID { I 1 vector } m_axi_weight_0_V_RUSER { I 1 vector } m_axi_weight_0_V_RRESP { I 2 vector } m_axi_weight_0_V_BVALID { I 1 bit } m_axi_weight_0_V_BREADY { O 1 bit } m_axi_weight_0_V_BRESP { I 2 vector } m_axi_weight_0_V_BID { I 1 vector } m_axi_weight_0_V_BUSER { I 1 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 682 \
    name conv_last_weight_0_V9 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_conv_last_weight_0_V9 \
    op interface \
    ports { conv_last_weight_0_V9 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 683 \
    name conv_last_weight_1_V11 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_conv_last_weight_1_V11 \
    op interface \
    ports { conv_last_weight_1_V11 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 684 \
    name conv_last_weight_2_V13 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_conv_last_weight_2_V13 \
    op interface \
    ports { conv_last_weight_2_V13 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 685 \
    name conv_last_weight_3_V15 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_conv_last_weight_3_V15 \
    op interface \
    ports { conv_last_weight_3_V15 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 686 \
    name conv_last_weight_4_V17 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_conv_last_weight_4_V17 \
    op interface \
    ports { conv_last_weight_4_V17 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 687 \
    name conv_last_weight_5_V19 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_conv_last_weight_5_V19 \
    op interface \
    ports { conv_last_weight_5_V19 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 688 \
    name conv_last_weight_6_V21 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_conv_last_weight_6_V21 \
    op interface \
    ports { conv_last_weight_6_V21 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 689 \
    name conv_last_weight_7_V23 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_conv_last_weight_7_V23 \
    op interface \
    ports { conv_last_weight_7_V23 { I 32 vector } } \
} "
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


