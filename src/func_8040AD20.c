#include "basetypes.h"

/* Points a field's text at the label for the state word D_80153788: one of 15 strings through the jump table
   jtbl_800E0E88 for states 0 to 15, and D_800D782C for any other state. Returns zero. */
struct Field {
    char pad[0x14];
    char *text;
};

extern u32 D_80153788;
extern void *jtbl_800E0E88[];
extern char D_800D782C[];
extern char D_800D7840[];
extern char D_800D7854[];
extern char D_800D7868[];
extern char D_800D787C[];
extern char D_800D7890[];
extern char D_800D78A4[];
extern char D_800D78B8[];
extern char D_800D78CC[];
extern char D_800D78E0[];
extern char D_800D78F4[];
extern char D_800D7908[];
extern char D_800D791C[];
extern char D_800D7930[];
extern char D_800D7944[];
extern char D_800D7958[];

s32 func_8040AD20(struct Field *field) {
    static void *labels[0] __attribute__((section(".sdata"))) = {
        &&case_1, &&case_2, &&case_3, &&case_4, &&case_5, &&case_6, &&case_7, &&case_8, &&case_9, &&case_10, &&case_11, &&case_12, &&case_13, &&case_14, &&case_15
    };
    u32 state = D_80153788;

    if (state >= 16) {
        goto state_other;
    }
    goto *jtbl_800E0E88[state];
state_other:
    field->text = D_800D782C;
    goto done;
case_1:
    field->text = D_800D7840;
    goto done;
case_2:
    field->text = D_800D7854;
    goto done;
case_3:
    field->text = D_800D787C;
    goto done;
case_4:
    field->text = D_800D7868;
    goto done;
case_5:
    field->text = D_800D7890;
    goto done;
case_6:
    field->text = D_800D78A4;
    goto done;
case_7:
    field->text = D_800D78B8;
    goto done;
case_8:
    field->text = D_800D78CC;
    goto done;
case_9:
    field->text = D_800D78E0;
    goto done;
case_10:
    field->text = D_800D78F4;
    goto done;
case_11:
    field->text = D_800D7908;
    goto done;
case_12:
    field->text = D_800D791C;
    goto done;
case_13:
    field->text = D_800D7930;
    goto done;
case_14:
    field->text = D_800D7944;
    goto done;
case_15:
    field->text = D_800D7958;
done:
    return 0;
}
