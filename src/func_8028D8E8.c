#include "basetypes.h"

extern f32 D_800CA428;
extern s32 D_800E28D8;

extern void func_80245A10(s32 arg0);
extern void func_802459F0(f32 arg0);
extern void func_80245A4C(s32 arg0, s32 arg1, s32 arg2, s32 arg3);

void func_8028D8E8(void) {
    s32 var_a0;
    s32 var_a1;

    func_80245A10(0);
    func_802459F0(D_800CA428);
    var_a0 = 0x1E0;
    if (D_800E28D8 == 0) {
        var_a0 = 0x17C;
        var_a1 = 0xDC;
    } else {
        var_a1 = 0x168;
    }
    func_80245A4C(var_a0, var_a1, 0, 0);
}
