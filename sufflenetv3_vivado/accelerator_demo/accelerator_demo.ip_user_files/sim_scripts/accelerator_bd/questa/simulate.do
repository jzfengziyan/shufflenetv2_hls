onbreak {quit -f}
onerror {quit -f}

vsim -t 1ps -lib xil_defaultlib accelerator_bd_opt

do {wave.do}

view wave
view structure
view signals

do {accelerator_bd.udo}

run -all

quit -force
