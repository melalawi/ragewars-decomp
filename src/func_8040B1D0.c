#include "basetypes.h"

/* Points a field's text at the label for the state word D_80153788: one of 15 strings through the jump table
   jtbl_800E0F88 for states 0 to 15, and D_800D783C for any other state. Returns zero. */
struct Field {
    char pad[0x14];
    char *text;
};

extern u32 D_80153788;
extern void *jtbl_800E0F88[];
extern char D_800D783C[];
extern char D_800D7850[];
extern char D_800D7864[];
extern char D_800D7878[];
extern char D_800D788C[];
extern char D_800D78A0[];
extern char D_800D78B4[];
extern char D_800D78C8[];
extern char D_800D78DC[];
extern char D_800D78F0[];
extern char D_800D7904[];
extern char D_800D7918[];
extern char D_800D792C[];
extern char D_800D7940[];
extern char D_800D7954[];
extern char D_800D7968[];

s32 func_8040B1D0(struct Field *field) {
    static void *labels[0] __attribute__((section(".sdata"))) = {
        &&case_1, &&case_2, &&case_3, &&case_4, &&case_5, &&case_6, &&case_7, &&case_8, &&case_9, &&case_10, &&case_11, &&case_12, &&case_13, &&case_14, &&case_15
    };
    u32 state = D_80153788;

    if (state >= 16) {
        goto state_other;
    }
    goto *jtbl_800E0F88[state];
state_other:
    field->text = D_800D783C;
    goto done;
case_1:
    field->text = D_800D7850;
    goto done;
case_2:
    field->text = D_800D7864;
    goto done;
case_3:
    field->text = D_800D788C;
    goto done;
case_4:
    field->text = D_800D7878;
    goto done;
case_5:
    field->text = D_800D78A0;
    goto done;
case_6:
    field->text = D_800D78B4;
    goto done;
case_7:
    field->text = D_800D78C8;
    goto done;
case_8:
    field->text = D_800D78DC;
    goto done;
case_9:
    field->text = D_800D78F0;
    goto done;
case_10:
    field->text = D_800D7904;
    goto done;
case_11:
    field->text = D_800D7918;
    goto done;
case_12:
    field->text = D_800D792C;
    goto done;
case_13:
    field->text = D_800D7940;
    goto done;
case_14:
    field->text = D_800D7954;
    goto done;
case_15:
    field->text = D_800D7968;
done:
    return 0;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned int unbake_rodata_800DBC08_40[] = {0x0040B1F8U, 0x0040B208U, 0x0040B218U, 0x0040B228U, 0x0040B238U, 0x0040B248U, 0x0040B258U, 0x0040B268U, 0x0040B278U, 0x0040B288U, 0x0040B298U, 0x0040B2A8U, 0x0040B2B8U, 0x0040B2C8U, 0x0040B2D8U, 0x0040B2E8U};
#elif defined(VERSION_US_REV1)
const unsigned int unbake_rodata_800E0F88_40[] = {0x0040B1F8U, 0x0040B208U, 0x0040B218U, 0x0040B228U, 0x0040B238U, 0x0040B248U, 0x0040B258U, 0x0040B268U, 0x0040B278U, 0x0040B288U, 0x0040B298U, 0x0040B2A8U, 0x0040B2B8U, 0x0040B2C8U, 0x0040B2D8U, 0x0040B2E8U};
#elif defined(VERSION_EU)
const unsigned int unbake_rodata_800ED5D8_40[] = {0x0040B5A8U, 0x0040B5B8U, 0x0040B5C8U, 0x0040B5D8U, 0x0040B5E8U, 0x0040B5F8U, 0x0040B608U, 0x0040B618U, 0x0040B628U, 0x0040B638U, 0x0040B648U, 0x0040B658U, 0x0040B668U, 0x0040B678U, 0x0040B688U, 0x0040B698U};
#elif defined(VERSION_EU_X)
const unsigned int unbake_rodata_800E8798_40[] = {0x0040B5A8U, 0x0040B5B8U, 0x0040B5C8U, 0x0040B5D8U, 0x0040B5E8U, 0x0040B5F8U, 0x0040B608U, 0x0040B618U, 0x0040B628U, 0x0040B638U, 0x0040B648U, 0x0040B658U, 0x0040B668U, 0x0040B678U, 0x0040B688U, 0x0040B698U};
#elif defined(VERSION_DE)
const unsigned int unbake_rodata_800DCF58_40[] = {0x0040B178U, 0x0040B188U, 0x0040B198U, 0x0040B1A8U, 0x0040B1B8U, 0x0040B1C8U, 0x0040B1D8U, 0x0040B1E8U, 0x0040B1F8U, 0x0040B208U, 0x0040B218U, 0x0040B228U, 0x0040B238U, 0x0040B248U, 0x0040B258U, 0x0040B268U};
#endif
