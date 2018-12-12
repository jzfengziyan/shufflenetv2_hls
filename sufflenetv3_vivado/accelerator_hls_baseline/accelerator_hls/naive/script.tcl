############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
############################################################
open_project accelerator_hls
set_top ShuffleNetV2
add_files accelerator_hls/accelerator.cpp
add_files accelerator_hls/components.cpp
add_files accelerator_hls/shufflenet.cpp
add_files accelerator_hls/shufflenet.h
add_files -tb accelerator_hls/test.cpp
open_solution "naive"
set_part {xc7z020clg484-1} -tool vivado
create_clock -period 10 -name default
#source "./accelerator_hls/naive/directives.tcl"
csim_design -compiler clang
csynth_design
cosim_design
export_design -format ip_catalog
