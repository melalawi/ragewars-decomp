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
