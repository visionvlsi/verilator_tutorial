
top_module=tb_ha
exe_name=V$(top_module)
verilator_option=-cc --binary --trace -j

sim:
	verilator $(verilator_option) --top-module $(top_module) -f flist.f
	./obj_dir/$(exe_name)
