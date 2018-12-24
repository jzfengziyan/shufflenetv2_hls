############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
############################################################
open_project acceleartor_hls_final_solution
set_top ShuffleNetV2
add_files acceleartor_hls_final_solution/vivado_hls.app
add_files acceleartor_hls_final_solution/test.cpp
add_files acceleartor_hls_final_solution/shufflenet.h
add_files acceleartor_hls_final_solution/shufflenet.cpp
add_files acceleartor_hls_final_solution/shuffle_conv_3x3.bin
add_files acceleartor_hls_final_solution/shuffle_conv_1x1.bin
add_files acceleartor_hls_final_solution/plane.bin
add_files acceleartor_hls_final_solution/fc_weight.bin
add_files acceleartor_hls_final_solution/conv_last_weight.bin
add_files acceleartor_hls_final_solution/conv1_weight.bin
add_files acceleartor_hls_final_solution/components.cpp
add_files bias.bin
add_files -tb acceleartor_hls_final_solution/test.cpp
open_solution "optimization_sub_1x1+3x3"
set_part {xc7z020clg484-1} -tool vivado
create_clock -period 10 -name default
#source "./acceleartor_hls_final_solution/optimization_sub_1x1+3x3/directives.tcl"
csim_design -compiler clang
csynth_design
cosim_design -O
export_design -flow syn -rtl verilog -format ip_catalog
