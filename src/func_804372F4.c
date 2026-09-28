/* Cycles the selected option, refreshes its label, and wraps at four choices. */
#include "basetypes.h"
typedef struct { char a[0x38]; void *unk38; } Label; typedef struct { char a[0x14]; s32 unk14; Label *unk18; char text[1]; } State;
void func_8029A73C();                                  /* extern */
void func_802A1C08(void *, s32, s32);                  /* extern */
void func_80436AD8(s32);                               /* extern */
void func_80436BC8(s32);                               /* extern */
extern s32 D_800D74EC;
extern State *D_800E5694;

s32 func_804372F4(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_v0;

    func_8029A73C();
    if (arg3 == 1) {
        func_80436BC8(D_800E5694->unk14);
        temp_v0 = D_800E5694->unk14 + 1;
        D_800E5694->unk14 = temp_v0;
        if (temp_v0 >= 4) {
            D_800E5694->unk14 = 0;
        }
        func_80436AD8(D_800E5694->unk14);
        func_802A1C08(D_800E5694->text, D_800D74EC, D_800E5694->unk14 + 1);
        D_800E5694->unk18->unk38 = (void *) (D_800E5694->text);
        return 0;
    }
    return 0;
}
