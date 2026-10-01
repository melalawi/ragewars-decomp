# Split

`ragewars.yaml` splits the North America Rev 1 ROM with splat; `symbol_addrs.txt` and the
`undefined_*` files name its symbols; `include/` and `types/` hold the headers authored C uses.
`make` extracts the assembly from your ROM into `artifacts/<version>/extracted/`, one file per function in
`asm/nonmatchings/`. Disassembly is never committed.
