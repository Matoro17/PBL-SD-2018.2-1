onerror {exit -code 1}
vlib work
vlog -work work Tests_PBL-SD-1.vo
vlog -work work Waveform.vwf.vt
vsim -novopt -c -t 1ps -L cycloneive_ver -L altera_ver -L altera_mf_ver -L 220model_ver -L sgate work.lcd_driver_vlg_vec_tst -voptargs="+acc"
vcd file -direction Tests_PBL-SD-1.msim.vcd
vcd add -internal lcd_driver_vlg_vec_tst/*
vcd add -internal lcd_driver_vlg_vec_tst/i1/*
run -all
quit -f
