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
