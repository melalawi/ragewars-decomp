#include "basetypes.h"

/* Points a field's text at the label for the state word D_80153778: one of 4 strings through the jump table
   jtbl_800E1038 for states 0 to 4, and D_800D79A0 for any other state. Returns zero. */
struct Field {
    char pad[0x14];
    char *text;
};

extern u32 D_80153778;
extern void *jtbl_800E1038[];
extern char D_800D79A0[];
extern char D_800D79B4[];
extern char D_800D79C8[];
extern char D_800D79DC[];
extern char D_800D79F0[];

s32 func_8040B9E0(struct Field *field) {
    static void *labels[0] __attribute__((section(".sdata"))) = {
        &&case_1, &&case_2, &&case_3, &&case_4
    };
    u32 state = D_80153778;

    if (state >= 5) {
        goto state_other;
    }
    goto *jtbl_800E1038[state];
state_other:
    field->text = D_800D79A0;
    goto done;
case_1:
    field->text = D_800D79B4;
    goto done;
case_2:
    field->text = D_800D79C8;
    goto done;
case_3:
    field->text = D_800D79DC;
    goto done;
case_4:
    field->text = D_800D79F0;
done:
    return 0;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned int unbake_rodata_800DBCB8_14[] = {0x0040BA08U, 0x0040BA18U, 0x0040BA28U, 0x0040BA38U, 0x0040BA48U};
#elif defined(VERSION_US_REV1)
const unsigned int unbake_rodata_800E1038_14[] = {0x0040BA08U, 0x0040BA18U, 0x0040BA28U, 0x0040BA38U, 0x0040BA48U};
#elif defined(VERSION_EU)
const unsigned int unbake_rodata_800ED688_14[] = {0x0040BDC8U, 0x0040BDD8U, 0x0040BDE8U, 0x0040BDF8U, 0x0040BE08U};
#elif defined(VERSION_EU_X)
const unsigned int unbake_rodata_800E8848_14[] = {0x0040BDC8U, 0x0040BDD8U, 0x0040BDE8U, 0x0040BDF8U, 0x0040BE08U};
#elif defined(VERSION_DE)
const unsigned int unbake_rodata_800DD008_14[] = {0x0040B988U, 0x0040B998U, 0x0040B9A8U, 0x0040B9B8U, 0x0040B9C8U};
#endif
