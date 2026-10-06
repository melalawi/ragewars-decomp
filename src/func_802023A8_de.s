# func_802023A8_de: original asm (cop0: cache at +0x8).
# Written by unbake from the ROM and recorded in unbake-original-asm.json.
.set noreorder
.set noat
.text
.globl func_802023A8_de
func_802023A8_de:
    lui $t0,0x8000
    addiu $t1,$t0,16352
.L8:
    cache 0x0,0($t0)
    bne $t0,$t1,.L8
    addiu $t0,$t0,32
    jr $ra
    nop
