makeit:
	#-W1, <-- sends command to linker (wasm-ld)
	#exports all symbols in the build target
	clang --target=wasm32 -nostdlib -Wl,--no-entry -Wl,--export-all -o add_raw.wasm add.c
	wasm-opt -Oz -o add.wasm add_raw.wasm

add:
	#this makes a smaller exe
	#there's also a programmatic way to add all a bunch of symbols from a list iirc
	clang --target=wasm32 -nostdlib -Wl,--entry=add -o add_raw.wasm add.c
	wasm-opt -Oz -o add.wasm add_raw.wasm
