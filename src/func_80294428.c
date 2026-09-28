#include "basetypes.h"

extern s32 D_800D29C0;
extern f32 D_800CA5B8[];

extern void func_8028D8E8(void);
extern void func_802459F0(f32 arg0);
extern void func_8029397C(s32 arg0, s32 arg1);

void func_80294428(s32 arg0) {
    D_800D29C0 += 1;
    func_8028D8E8();
    func_802459F0(D_800CA5B8[1]);
    func_8029397C(arg0, 0x6F);
}
