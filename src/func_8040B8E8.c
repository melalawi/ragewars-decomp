#include "basetypes.h"

/* Points a field's text at the label for the state word D_80153778: one of four strings through the
   jump table jtbl_800E1008 for states 0 to 4, and D_800D7998 for any other state. Returns zero. */
struct Field {
    char pad[0x14];
    char *text;
};

extern u32 D_80153778;
extern void *jtbl_800E1008[];
extern char D_800D7998[];
extern char D_800D79AC[];
extern char D_800D79C0[];
extern char D_800D79D4[];
extern char D_800D79E8[];

s32 func_8040B8E8(struct Field *field) {
    static void *labels[0] __attribute__((section(".sdata"))) = {
        &&state_1, &&state_2, &&state_3, &&state_4
    };
    u32 state = D_80153778;

    if (state >= 5) {
        goto state_other;
    }
    goto *jtbl_800E1008[state];
state_other:
    field->text = D_800D7998;
    goto done;
state_1:
    field->text = D_800D79AC;
    goto done;
state_2:
    field->text = D_800D79C0;
    goto done;
state_3:
    field->text = D_800D79D4;
    goto done;
state_4:
    field->text = D_800D79E8;
done:
    return 0;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned int unbake_rodata_800DBC88_14[] = {0x0040B910U, 0x0040B920U, 0x0040B930U, 0x0040B940U, 0x0040B950U};
#elif defined(VERSION_US_REV1)
const unsigned int unbake_rodata_800E1008_14[] = {0x0040B910U, 0x0040B920U, 0x0040B930U, 0x0040B940U, 0x0040B950U};
#elif defined(VERSION_EU)
const unsigned int unbake_rodata_800ED658_14[] = {0x0040BCD0U, 0x0040BCE0U, 0x0040BCF0U, 0x0040BD00U, 0x0040BD10U};
#elif defined(VERSION_EU_X)
const unsigned int unbake_rodata_800E8818_14[] = {0x0040BCD0U, 0x0040BCE0U, 0x0040BCF0U, 0x0040BD00U, 0x0040BD10U};
#elif defined(VERSION_DE)
const unsigned int unbake_rodata_800DCFD8_14[] = {0x0040B890U, 0x0040B8A0U, 0x0040B8B0U, 0x0040B8C0U, 0x0040B8D0U};
#endif
