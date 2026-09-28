#include "basetypes.h"

/* Points a field's text at the label for the state word D_80153778: one of 4 strings through the jump table
   jtbl_800E1020 for states 0 to 4, and D_800D799C for any other state. Returns zero. */
struct Field {
    char pad[0x14];
    char *text;
};

extern u32 D_80153778;
extern void *jtbl_800E1020[];
extern char D_800D799C[];
extern char D_800D79B0[];
extern char D_800D79C4[];
extern char D_800D79D8[];
extern char D_800D79EC[];

s32 func_8040B964(struct Field *field) {
    static void *labels[0] __attribute__((section(".sdata"))) = {
        &&case_1, &&case_2, &&case_3, &&case_4
    };
    u32 state = D_80153778;

    if (state >= 5) {
        goto state_other;
    }
    goto *jtbl_800E1020[state];
state_other:
    field->text = D_800D799C;
    goto done;
case_1:
    field->text = D_800D79B0;
    goto done;
case_2:
    field->text = D_800D79C4;
    goto done;
case_3:
    field->text = D_800D79D8;
    goto done;
case_4:
    field->text = D_800D79EC;
done:
    return 0;
}
