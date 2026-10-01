#include "basetypes.h"

/* Points a field's text at the label for the state word D_80153778: one of 4 strings through the jump table
   jtbl_800E1050 for states 0 to 4, and D_800D79A4 for any other state. Returns zero. */
struct Field {
    char pad[0x14];
    char *text;
};

extern u32 D_80153778;
extern void *jtbl_800E1050[];
extern char D_800D79A4[];
extern char D_800D79B8[];
extern char D_800D79CC[];
extern char D_800D79E0[];
extern char D_800D79F4[];

s32 func_8040BA5C(struct Field *field) {
    static void *labels[0] __attribute__((section(".sdata"))) = {
        &&case_1, &&case_2, &&case_3, &&case_4
    };
    u32 state = D_80153778;

    if (state >= 5) {
        goto state_other;
    }
    goto *jtbl_800E1050[state];
state_other:
    field->text = D_800D79A4;
    goto done;
case_1:
    field->text = D_800D79B8;
    goto done;
case_2:
    field->text = D_800D79CC;
    goto done;
case_3:
    field->text = D_800D79E0;
    goto done;
case_4:
    field->text = D_800D79F4;
done:
    return 0;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned int unbake_rodata_800DBCD0_14[] = {0x0040BA84U, 0x0040BA94U, 0x0040BAA4U, 0x0040BAB4U, 0x0040BAC4U};
#elif defined(VERSION_US_REV1)
const unsigned int unbake_rodata_800E1050_14[] = {0x0040BA84U, 0x0040BA94U, 0x0040BAA4U, 0x0040BAB4U, 0x0040BAC4U};
#elif defined(VERSION_EU)
const unsigned int unbake_rodata_800ED6A0_14[] = {0x0040BE44U, 0x0040BE54U, 0x0040BE64U, 0x0040BE74U, 0x0040BE84U};
#elif defined(VERSION_EU_X)
const unsigned int unbake_rodata_800E8860_14[] = {0x0040BE44U, 0x0040BE54U, 0x0040BE64U, 0x0040BE74U, 0x0040BE84U};
#elif defined(VERSION_DE)
const unsigned int unbake_rodata_800DD020_14[] = {0x0040BA04U, 0x0040BA14U, 0x0040BA24U, 0x0040BA34U, 0x0040BA44U};
#endif
