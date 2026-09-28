/* Starts the configured action using the actor resource or the shared fallback. */
#include "basetypes.h"
#define NULL ((void *)0)
typedef struct { char a[0x5DC]; char *unk5DC; } Actor; typedef struct { char a[0x1C]; Actor *unk1C; s32 unk20,unk24; } Action;
void func_804426E4(void *, s32, void *, s32, s32);        /* extern */
extern s32 D_800E28C0;
extern char D_8014561C;
extern s32 D_8014ADA0;
extern s32 D_80153710;
extern s32 D_8015375C;

s32 func_8040B6C8(s32 arg0, Action *arg1) {
    void *var_a0;
    Actor *temp_v0;

    D_800E28C0 = 1;
    D_80153710 = 0;
    if (D_8015375C != 0) {
        D_8014ADA0 = 1;
    } else {
        temp_v0 = arg1->unk1C;
        if (temp_v0 != NULL) {
            var_a0 = temp_v0->unk5DC + 0x554;
        } else {
            var_a0 = &D_8014561C;
        }
        func_804426E4(var_a0, arg1->unk24, arg1->unk1C, arg1->unk20, 0);
    }
    return 1;
}
