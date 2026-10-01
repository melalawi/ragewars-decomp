#include "basetypes.h"

/* Points a field's text at the label for the state word D_80153778: one of 3 strings through the jump table
   jtbl_800E1098 for states 0 to 4, and D_800D7A0C for any other state. Returns zero. */
struct Field {
    char pad[0x14];
    char *text;
};

extern u32 D_80153778;
extern void *jtbl_800E1098[];
extern char D_800D7A04[];
extern char D_800D7A0C[];

s32 func_8040BBC0(struct Field *field) {
    static void *labels[0] __attribute__((section(".sdata"))) = {
        &&case_1, &&case_2, &&case_3
    };
    u32 state = D_80153778;

    if (state >= 5) {
        goto state_other;
    }
    goto *jtbl_800E1098[state];
state_other:
    field->text = D_800D7A0C;
    goto done;
case_1:
    field->text = D_800D7A0C;
    goto done;
case_2:
    field->text = D_800D7A0C;
    goto done;
case_3:
    field->text = D_800D7A04;
done:
    return 0;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned int unbake_rodata_800DBD18_14[] = {0x0040BBE8U, 0x0040BC18U, 0x0040BC18U, 0x0040BBF8U, 0x0040BC08U};
#elif defined(VERSION_US_REV1)
const unsigned int unbake_rodata_800E1098_18[] = {0x0040BBE8U, 0x0040BC18U, 0x0040BC18U, 0x0040BBF8U, 0x0040BC08U, 0x0043C5E4U};
#endif
