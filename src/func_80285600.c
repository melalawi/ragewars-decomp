#include "basetypes.h"

extern s32 D_80115DE4;
extern f64 D_800C9FA0;
extern f32 D_800C9FA8;

f32 func_80285600(s32 arg0) {
    s32 sp0;
    s32 sp4;
    u32 seed;
    s32 idx;
    f64 var_f2;

    sp0 = (s32) (*(u16 *) &arg0) << 16;
    if (*((u16 *) &arg0 + 1) == 0) {
        return *(f32 *) &sp0;
    }
    sp4 = (s32) (*((u16 *) &arg0 + 1)) << 16;
    seed = (D_80115DE4 * (s32) 0xA84A5B53) + (s32) 0x58348C2D;
    idx = (s32) ((seed >> 16) & 0x7FFF);
    var_f2 = (f64) idx;
    D_80115DE4 = seed;
    if (idx < 0) {
        var_f2 += D_800C9FA0;
    }
    return *(f32 *) &sp0 + (((f32) var_f2 * *(f32 *) &sp4) * D_800C9FA8);
}
