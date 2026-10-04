#include "span_16E000/code_8040AC98.h"
#include "span_16E000/types.h"
#include "types.h"

/* Points a field's text at the label for the state word D_80153788: the second string through the jump table
   jtbl_800E0FC8 for states 0 to 15, and D_800D7824 for any other state. Returns zero. An earlier attempt misjudged this switch as a dispatch head whose
   cases lay outside the interval; its case bodies are inside it. */


extern u32 D_8014D4F8;
extern void *jtbl_800DCF98[];
extern char D_800D37F8[];
extern char D_800D37FC[];

s32 func_8040B27C_de(struct Field_func_8040A4A0_de *field) {
    static void *labels[0] __attribute__((section(".sdata"))) = {
        &&case_1
    };
    u32 state = D_8014D4F8;

    if (state >= 16) {
        goto state_other;
    }
    goto *jtbl_800DCF98[state];
state_other:
    field->text = D_800D37F8;
    goto done;
case_1:
    field->text = D_800D37FC;
done:
    return 0;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned int unbake_rodata_800DBC48_40[] = {0x0040B324U, 0x0040B324U, 0x0040B324U, 0x0040B324U, 0x0040B324U, 0x0040B324U, 0x0040B324U, 0x0040B324U, 0x0040B334U, 0x0040B324U, 0x0040B324U, 0x0040B324U, 0x0040B324U, 0x0040B324U, 0x0040B324U, 0x0040B324U};
#elif defined(VERSION_US_REV1)
const unsigned int unbake_rodata_800E0FC8_40[] = {0x0040B324U, 0x0040B324U, 0x0040B324U, 0x0040B324U, 0x0040B324U, 0x0040B324U, 0x0040B324U, 0x0040B324U, 0x0040B334U, 0x0040B324U, 0x0040B324U, 0x0040B324U, 0x0040B324U, 0x0040B324U, 0x0040B324U, 0x0040B324U};
#elif defined(VERSION_EU)
const unsigned int unbake_rodata_800ED618_40[] = {0x0040B6D4U, 0x0040B6D4U, 0x0040B6D4U, 0x0040B6D4U, 0x0040B6D4U, 0x0040B6D4U, 0x0040B6D4U, 0x0040B6D4U, 0x0040B6E4U, 0x0040B6D4U, 0x0040B6D4U, 0x0040B6D4U, 0x0040B6D4U, 0x0040B6D4U, 0x0040B6D4U, 0x0040B6D4U};
#elif defined(VERSION_EU_X)
const unsigned int unbake_rodata_800E87D8_40[] = {0x0040B6D4U, 0x0040B6D4U, 0x0040B6D4U, 0x0040B6D4U, 0x0040B6D4U, 0x0040B6D4U, 0x0040B6D4U, 0x0040B6D4U, 0x0040B6E4U, 0x0040B6D4U, 0x0040B6D4U, 0x0040B6D4U, 0x0040B6D4U, 0x0040B6D4U, 0x0040B6D4U, 0x0040B6D4U};
#elif defined(VERSION_DE)
const unsigned int unbake_rodata_800DCF98_40[] = {0x0040B2A4U, 0x0040B2A4U, 0x0040B2A4U, 0x0040B2A4U, 0x0040B2A4U, 0x0040B2A4U, 0x0040B2A4U, 0x0040B2A4U, 0x0040B2B4U, 0x0040B2A4U, 0x0040B2A4U, 0x0040B2A4U, 0x0040B2A4U, 0x0040B2A4U, 0x0040B2A4U, 0x0040B2A4U};
#endif
