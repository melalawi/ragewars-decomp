#include "basetypes.h"

/* Points a field's text at the label for the state word D_80153778: one of 3 strings through the jump table
   jtbl_800E1080 for states 0 to 4, and D_800D7A08 for any other state. Returns zero. */
struct Field {
    char pad[0x14];
    char *text;
};

extern u32 D_80153778;
extern void *jtbl_800E1080[];
extern char D_800D7A00[];
extern char D_800D7A08[];

s32 func_8040BB54(struct Field *field) {
    static void *labels[0] __attribute__((section(".sdata"))) = {
        &&case_1, &&case_2, &&case_3
    };
    u32 state = D_80153778;

    if (state >= 5) {
        goto state_other;
    }
    goto *jtbl_800E1080[state];
state_other:
    field->text = D_800D7A08;
    goto done;
case_1:
    field->text = D_800D7A08;
    goto done;
case_2:
    field->text = D_800D7A08;
    goto done;
case_3:
    field->text = D_800D7A00;
done:
    return 0;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned int unbake_rodata_800DBD00_14[] = {0x0040BB7CU, 0x0040BBACU, 0x0040BBACU, 0x0040BB8CU, 0x0040BB9CU};
#elif defined(VERSION_US_REV1)
const unsigned int unbake_rodata_800E1080_14[] = {0x0040BB7CU, 0x0040BBACU, 0x0040BBACU, 0x0040BB8CU, 0x0040BB9CU};
#elif defined(VERSION_EU)
const unsigned int unbake_rodata_800ED6D0_14[] = {0x0040BF3CU, 0x0040BF6CU, 0x0040BF6CU, 0x0040BF4CU, 0x0040BF5CU};
#elif defined(VERSION_EU_X)
const unsigned int unbake_rodata_800E8890_14[] = {0x0040BF3CU, 0x0040BF6CU, 0x0040BF6CU, 0x0040BF4CU, 0x0040BF5CU};
#elif defined(VERSION_DE)
const unsigned int unbake_rodata_800DD050_14[] = {0x0040BAFCU, 0x0040BB2CU, 0x0040BB2CU, 0x0040BB0CU, 0x0040BB1CU};
#endif
