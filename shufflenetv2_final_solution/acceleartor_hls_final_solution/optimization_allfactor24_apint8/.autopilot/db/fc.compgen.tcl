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
    id 782 \
    name bias_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bias_V \
    op interface \
    ports { bias_V_address0 { O 4 vector } bias_V_ce0 { O 1 bit } bias_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bias_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 785 \
    name avgpool_output_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename avgpool_output_V \
    op interface \
    ports { avgpool_output_V_address0 { O 9 vector } avgpool_output_V_ce0 { O 1 bit } avgpool_output_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'avgpool_output_V'"
}
}


# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 780 \
    name weight_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_V \
    op interface \
    ports { m_axi_weight_V_AWVALID { O 1 bit } m_axi_weight_V_AWREADY { I 1 bit } m_axi_weight_V_AWADDR { O 32 vector } m_axi_weight_V_AWID { O 1 vector } m_axi_weight_V_AWLEN { O 32 vector } m_axi_weight_V_AWSIZE { O 3 vector } m_axi_weight_V_AWBURST { O 2 vector } m_axi_weight_V_AWLOCK { O 2 vector } m_axi_weight_V_AWCACHE { O 4 vector } m_axi_weight_V_AWPROT { O 3 vector } m_axi_weight_V_AWQOS { O 4 vector } m_axi_weight_V_AWREGION { O 4 vector } m_axi_weight_V_AWUSER { O 1 vector } m_axi_weight_V_WVALID { O 1 bit } m_axi_weight_V_WREADY { I 1 bit } m_axi_weight_V_WDATA { O 8 vector } m_axi_weight_V_WSTRB { O 1 vector } m_axi_weight_V_WLAST { O 1 bit } m_axi_weight_V_WID { O 1 vector } m_axi_weight_V_WUSER { O 1 vector } m_axi_weight_V_ARVALID { O 1 bit } m_axi_weight_V_ARREADY { I 1 bit } m_axi_weight_V_ARADDR { O 32 vector } m_axi_weight_V_ARID { O 1 vector } m_axi_weight_V_ARLEN { O 32 vector } m_axi_weight_V_ARSIZE { O 3 vector } m_axi_weight_V_ARBURST { O 2 vector } m_axi_weight_V_ARLOCK { O 2 vector } m_axi_weight_V_ARCACHE { O 4 vector } m_axi_weight_V_ARPROT { O 3 vector } m_axi_weight_V_ARQOS { O 4 vector } m_axi_weight_V_ARREGION { O 4 vector } m_axi_weight_V_ARUSER { O 1 vector } m_axi_weight_V_RVALID { I 1 bit } m_axi_weight_V_RREADY { O 1 bit } m_axi_weight_V_RDATA { I 8 vector } m_axi_weight_V_RLAST { I 1 bit } m_axi_weight_V_RID { I 1 vector } m_axi_weight_V_RUSER { I 1 vector } m_axi_weight_V_RRESP { I 2 vector } m_axi_weight_V_BVALID { I 1 bit } m_axi_weight_V_BREADY { O 1 bit } m_axi_weight_V_BRESP { I 2 vector } m_axi_weight_V_BID { I 1 vector } m_axi_weight_V_BUSER { I 1 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 781 \
    name fc_weight_V11 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_fc_weight_V11 \
    op interface \
    ports { fc_weight_V11 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 783 \
    name output_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_output_V \
    op interface \
    ports { m_axi_output_V_AWVALID { O 1 bit } m_axi_output_V_AWREADY { I 1 bit } m_axi_output_V_AWADDR { O 32 vector } m_axi_output_V_AWID { O 1 vector } m_axi_output_V_AWLEN { O 32 vector } m_axi_output_V_AWSIZE { O 3 vector } m_axi_output_V_AWBURST { O 2 vector } m_axi_output_V_AWLOCK { O 2 vector } m_axi_output_V_AWCACHE { O 4 vector } m_axi_output_V_AWPROT { O 3 vector } m_axi_output_V_AWQOS { O 4 vector } m_axi_output_V_AWREGION { O 4 vector } m_axi_output_V_AWUSER { O 1 vector } m_axi_output_V_WVALID { O 1 bit } m_axi_output_V_WREADY { I 1 bit } m_axi_output_V_WDATA { O 8 vector } m_axi_output_V_WSTRB { O 1 vector } m_axi_output_V_WLAST { O 1 bit } m_axi_output_V_WID { O 1 vector } m_axi_output_V_WUSER { O 1 vector } m_axi_output_V_ARVALID { O 1 bit } m_axi_output_V_ARREADY { I 1 bit } m_axi_output_V_ARADDR { O 32 vector } m_axi_output_V_ARID { O 1 vector } m_axi_output_V_ARLEN { O 32 vector } m_axi_output_V_ARSIZE { O 3 vector } m_axi_output_V_ARBURST { O 2 vector } m_axi_output_V_ARLOCK { O 2 vector } m_axi_output_V_ARCACHE { O 4 vector } m_axi_output_V_ARPROT { O 3 vector } m_axi_output_V_ARQOS { O 4 vector } m_axi_output_V_ARREGION { O 4 vector } m_axi_output_V_ARUSER { O 1 vector } m_axi_output_V_RVALID { I 1 bit } m_axi_output_V_RREADY { O 1 bit } m_axi_output_V_RDATA { I 8 vector } m_axi_output_V_RLAST { I 1 bit } m_axi_output_V_RID { I 1 vector } m_axi_output_V_RUSER { I 1 vector } m_axi_output_V_RRESP { I 2 vector } m_axi_output_V_BVALID { I 1 bit } m_axi_output_V_BREADY { O 1 bit } m_axi_output_V_BRESP { I 2 vector } m_axi_output_V_BID { I 1 vector } m_axi_output_V_BUSER { I 1 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 784 \
    name fc_output_V15 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_fc_output_V15 \
    op interface \
    ports { fc_output_V15 { I 32 vector } } \
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


