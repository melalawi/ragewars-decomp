/* Cycles the selected option, refreshes its label, and wraps at four choices. */
#include "basetypes.h"
typedef struct { char a[0x38]; void *unk38; } Label; typedef struct { char a[0x28]; s32 unk28; Label *unk2C; char text[1]; } State;
void func_8025DF54(s32);                                 /* extern */
void func_8029A73C();                                  /* extern */
void func_802A1C08(void *, s32, s32);                  /* extern */
void func_80436898(s32);                               /* extern */
void func_80436988(s32);                               /* extern */
extern s32 D_800D74EC;
extern State *D_800E5690;

s32 func_80436E74(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_v0;

    func_8029A73C();
    if (arg3 == 1) {
        func_80436988(D_800E5690->unk28);
        temp_v0 = D_800E5690->unk28 + 1;
        D_800E5690->unk28 = temp_v0;
        if (temp_v0 >= 4) {
            D_800E5690->unk28 = 0;
        }
        func_80436898(D_800E5690->unk28);
        func_802A1C08(D_800E5690->text, D_800D74EC, D_800E5690->unk28 + 1);
        D_800E5690->unk2C->unk38 = (void *) (D_800E5690->text);
        func_8025DF54(0xE81);
        return 0;
    }
    return 0;
}
