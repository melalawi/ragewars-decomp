#include "span_16E000/code_8040AC98.h"
#include "span_16E000/types.h"
#include "types.h"

/* Points a field's text at the label for the state word D_80153778: one of 4 strings through the jump table
   jtbl_800E1068 for states 0 to 4, and D_800D79A8 for any other state. Returns zero. */


extern u32 D_8014D4E8;
extern void *jtbl_800DD038[];
extern char D_800D397C[];
extern char D_800D3990[];
extern char D_800D39A4[];
extern char D_800D39B8[];
extern char D_800D39CC[];

s32 func_8040BA58_de(struct Field_func_8040A4A0_de *field) {
    static void *labels[0] __attribute__((section(".sdata"))) = {
        &&case_1, &&case_2, &&case_3, &&case_4
    };
    u32 state = D_8014D4E8;

    if (state >= 5) {
        goto state_other;
    }
    goto *jtbl_800DD038[state];
state_other:
    field->text = D_800D397C;
    goto done;
case_1:
    field->text = D_800D3990;
    goto done;
case_2:
    field->text = D_800D39A4;
    goto done;
case_3:
    field->text = D_800D39B8;
    goto done;
case_4:
    field->text = D_800D39CC;
done:
    return 0;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned int unbake_rodata_800DBCE8_14[] = {0x0040BB00U, 0x0040BB10U, 0x0040BB20U, 0x0040BB30U, 0x0040BB40U};
#elif defined(VERSION_US_REV1)
const unsigned int unbake_rodata_800E1068_14[] = {0x0040BB00U, 0x0040BB10U, 0x0040BB20U, 0x0040BB30U, 0x0040BB40U};
#elif defined(VERSION_EU)
const unsigned int unbake_rodata_800ED6B8_14[] = {0x0040BEC0U, 0x0040BED0U, 0x0040BEE0U, 0x0040BEF0U, 0x0040BF00U};
#elif defined(VERSION_EU_X)
const unsigned int unbake_rodata_800E8878_14[] = {0x0040BEC0U, 0x0040BED0U, 0x0040BEE0U, 0x0040BEF0U, 0x0040BF00U};
#elif defined(VERSION_DE)
const unsigned int unbake_rodata_800DD038_14[] = {0x0040BA80U, 0x0040BA90U, 0x0040BAA0U, 0x0040BAB0U, 0x0040BAC0U};
#endif
