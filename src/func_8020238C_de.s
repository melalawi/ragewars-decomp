# func_8020238C_de: original asm (cop0: cache at +0x8).
# Written by unbake from the ROM and recorded in unbake-original-asm.json.
.set noreorder
.set noat
.text
.globl func_8020238C_de
func_8020238C_de:
    lui $t0,0x8000
    addiu $t1,$t0,8176
.L8:
    cache 0x1,0($t0)
    bne $t0,$t1,.L8
    addiu $t0,$t0,16
    jr $ra
    nop
