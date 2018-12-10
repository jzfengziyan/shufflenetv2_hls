############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
############################################################
open_project accelerator_hls
set_top vector_multiplier
add_files accelerator_hls/accelerator.cpp
open_solution "vector_multiplier"
set_part {xc7z020clg484-1} -tool vivado
create_clock -period 10 -name default
#source "./accelerator_hls/vector_multiplier/directives.tcl"
#csim_design
csynth_design
#cosim_design
export_design -rtl verilog -format ip_catalog
