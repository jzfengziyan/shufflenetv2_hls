#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /home/ziyan/ziyan/ece527/shufflenetv2_master/sufflenetv3_vivado/acceleartor_padding/acceleartor_hls_padding/add_adding_engine/.autopilot/db/a.g.bc ${1+"$@"}
