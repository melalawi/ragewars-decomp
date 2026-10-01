#include "basetypes.h"

/* Points a field's text at the label for the state word D_80153778: one of 4 strings through the jump table
   jtbl_800E1068 for states 0 to 4, and D_800D79A8 for any other state. Returns zero. */
struct Field {
    char pad[0x14];
    char *text;
};

extern u32 D_80153778;
extern void *jtbl_800E1068[];
extern char D_800D79A8[];
extern char D_800D79BC[];
extern char D_800D79D0[];
extern char D_800D79E4[];
extern char D_800D79F8[];

s32 func_8040BAD8(struct Field *field) {
    static void *labels[0] __attribute__((section(".sdata"))) = {
        &&case_1, &&case_2, &&case_3, &&case_4
    };
    u32 state = D_80153778;

    if (state >= 5) {
        goto state_other;
    }
    goto *jtbl_800E1068[state];
state_other:
    field->text = D_800D79A8;
    goto done;
case_1:
    field->text = D_800D79BC;
    goto done;
case_2:
    field->text = D_800D79D0;
    goto done;
case_3:
    field->text = D_800D79E4;
    goto done;
case_4:
    field->text = D_800D79F8;
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
