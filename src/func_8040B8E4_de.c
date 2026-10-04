#include "span_16E000/code_8040AC98.h"
#include "span_16E000/types.h"
#include "types.h"

/* Points a field's text at the label for the state word D_80153778: one of 4 strings through the jump table
   jtbl_800E1020 for states 0 to 4, and D_800D799C for any other state. Returns zero. */


extern u32 D_8014D4E8;
extern void *jtbl_800DCFF0_de[];
extern char D_800D3970[];
extern char D_800D3984[];
extern char D_800D3998[];
extern char D_800D39AC[];
extern char D_800D39C0[];

s32 func_8040B8E4_de(struct Field_func_8040A4A0_de *field) {
    static void *labels[0] __attribute__((section(".sdata"))) = {
        &&case_1, &&case_2, &&case_3, &&case_4
    };
    u32 state = D_8014D4E8;

    if (state >= 5) {
        goto state_other;
    }
    goto *jtbl_800DCFF0_de[state];
state_other:
    field->text = D_800D3970;
    goto done;
case_1:
    field->text = D_800D3984;
    goto done;
case_2:
    field->text = D_800D3998;
    goto done;
case_3:
    field->text = D_800D39AC;
    goto done;
case_4:
    field->text = D_800D39C0;
done:
    return 0;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned int unbake_rodata_800DBCA0_14[] = {0x0040B98CU, 0x0040B99CU, 0x0040B9ACU, 0x0040B9BCU, 0x0040B9CCU};
#elif defined(VERSION_US_REV1)
const unsigned int unbake_rodata_800E1020_14[] = {0x0040B98CU, 0x0040B99CU, 0x0040B9ACU, 0x0040B9BCU, 0x0040B9CCU};
#elif defined(VERSION_EU)
const unsigned int unbake_rodata_800ED670_14[] = {0x0040BD4CU, 0x0040BD5CU, 0x0040BD6CU, 0x0040BD7CU, 0x0040BD8CU};
#elif defined(VERSION_EU_X)
const unsigned int unbake_rodata_800E8830_14[] = {0x0040BD4CU, 0x0040BD5CU, 0x0040BD6CU, 0x0040BD7CU, 0x0040BD8CU};
#elif defined(VERSION_DE)
const unsigned int unbake_rodata_800DCFF0_14[] = {0x0040B90CU, 0x0040B91CU, 0x0040B92CU, 0x0040B93CU, 0x0040B94CU};
#endif
