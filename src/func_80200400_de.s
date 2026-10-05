# func_80200400_de: original asm (cop0: mfc0 at +0xC).
# Written by unbake from the ROM and recorded in unbake-original-asm.json.
.set noreorder
.set noat
.text
.globl func_80200400_de
func_80200400_de:
    lui $sp,0x803f
    ori $sp,$sp,0xffc0
    li $a0,30
.LC:
    mfc0 $t0,$10
    mtc0 $a0,$0
    lui $t1,0x8000
    mtc0 $t1,$10
    mtc0 $zero,$2
    mtc0 $zero,$3
    nop
    tlbwi
    nop
    nop
    nop
    nop
    mtc0 $t0,$10
    nop
    bnez $a0,.LC
    addi $a0,$a0,-1
    li $a0,31
    lui $a1,0x1f
    ori $a1,$a1,0xe000
    lui $a2,0x20
    li $a3,0
    lui $t1,0x10
    sw $t1,16($sp)
    li $t0,7
    .word 0x0C000122  # jal 0x80000488
    sw $t0,20($sp)
    lui $a0,0x2a
    addiu $a0,$a0,29120
    jalr $a0
    nop
    break 0x1,0x2
    lw $t8,16($sp)
    addi $t0,$zero,7
    lw $t9,20($sp)
    addi $t7,$zero,-1
    and $t9,$t9,$t0
    ori $t9,$t9,0x18
    mfc0 $t0,$10
    mtc0 $a0,$0
    mtc0 $a1,$5
    mtc0 $a2,$10
    beq $a3,$t7,.LC8
    addi $t6,$zero,1
    srl $t5,$a3,0x6
    or $t5,$t5,$t9
    b .LCC
    mtc0 $t5,$2
.LC8:
    mtc0 $t6,$2
.LCC:
    beq $t8,$t7,.LE0
    mtc0 $t6,$3
    srl $t5,$t8,0x6
    or $t5,$t5,$t9
    mtc0 $t5,$3
.LE0:
    tlbwi
    nop
    nop
    nop
    nop
    mtc0 $t0,$10
    jr $ra
    nop
