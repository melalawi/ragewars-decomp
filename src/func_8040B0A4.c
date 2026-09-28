#include "basetypes.h"

/* Points a field's text at the label for the state word D_80153788: one of 15 strings through the jump table
   jtbl_800E0F48 for states 0 to 15, and D_800D7838 for any other state. Returns zero. */
struct Field {
    char pad[0x14];
    char *text;
};

extern u32 D_80153788;
extern void *jtbl_800E0F48[];
extern char D_800D7838[];
extern char D_800D784C[];
extern char D_800D7860[];
extern char D_800D7874[];
extern char D_800D7888[];
extern char D_800D789C[];
extern char D_800D78B0[];
extern char D_800D78C4[];
extern char D_800D78D8[];
extern char D_800D78EC[];
extern char D_800D7900[];
extern char D_800D7914[];
extern char D_800D7928[];
extern char D_800D793C[];
extern char D_800D7950[];
extern char D_800D7964[];

s32 func_8040B0A4(struct Field *field) {
    static void *labels[0] __attribute__((section(".sdata"))) = {
        &&case_1, &&case_2, &&case_3, &&case_4, &&case_5, &&case_6, &&case_7, &&case_8, &&case_9, &&case_10, &&case_11, &&case_12, &&case_13, &&case_14, &&case_15
    };
    u32 state = D_80153788;

    if (state >= 16) {
        goto state_other;
    }
    goto *jtbl_800E0F48[state];
state_other:
    field->text = D_800D7838;
    goto done;
case_1:
    field->text = D_800D784C;
    goto done;
case_2:
    field->text = D_800D7860;
    goto done;
case_3:
    field->text = D_800D7888;
    goto done;
case_4:
    field->text = D_800D7874;
    goto done;
case_5:
    field->text = D_800D789C;
    goto done;
case_6:
    field->text = D_800D78B0;
    goto done;
case_7:
    field->text = D_800D78C4;
    goto done;
case_8:
    field->text = D_800D78D8;
    goto done;
case_9:
    field->text = D_800D78EC;
    goto done;
case_10:
    field->text = D_800D7900;
    goto done;
case_11:
    field->text = D_800D7914;
    goto done;
case_12:
    field->text = D_800D7928;
    goto done;
case_13:
    field->text = D_800D793C;
    goto done;
case_14:
    field->text = D_800D7950;
    goto done;
case_15:
    field->text = D_800D7964;
done:
    return 0;
}
