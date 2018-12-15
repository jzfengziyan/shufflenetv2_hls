############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
############################################################
open_project acceleartor_hls_padding
set_top ShuffleNetV2
add_files acceleartor_hls_padding/bias.bin
add_files acceleartor_hls_padding/components.cpp
add_files acceleartor_hls_padding/conv1_weight.bin
add_files acceleartor_hls_padding/conv_last_weight.bin
add_files acceleartor_hls_padding/fc_weight.bin
add_files acceleartor_hls_padding/plane.bin
add_files acceleartor_hls_padding/shuffle_conv_1x1.bin
add_files acceleartor_hls_padding/shuffle_conv_3x3.bin
add_files acceleartor_hls_padding/shufflenet.cpp
add_files acceleartor_hls_padding/shufflenet.h
add_files -tb acceleartor_hls_padding/test.cpp
open_solution "naive"
set_part {xc7z020clg484-1}
create_clock -period 10 -name default
#source "./acceleartor_hls_padding/naive/directives.tcl"
csim_design -compiler clang
csynth_design
cosim_design -O
export_design -rtl verilog -format ip_catalog
