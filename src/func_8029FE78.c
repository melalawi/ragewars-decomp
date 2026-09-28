#include "basetypes.h"

extern f32 D_800CAE54;
extern void func_8029CBB0(f32 arg0, f32 *arg1, f32 *arg2);
extern void func_802A1748(s32, s32, s32);
extern void func_8029DE3C(s32, s32, s32);

void func_8029FE78(s32 arg0, f32 arg1) {
    u8 sp10[0x40];
    f32 sp50;
    f32 sp54;
    u8 *p;

    if (arg1 != 0.0f) {
        func_8029CBB0(arg1, &sp50, &sp54);
        p = sp10;
        func_802A1748((s32) p, 0, 0x40);
        *(f32 *) (p + 0x0) = D_800CAE54;
        {
            f32 t54 = sp54;
            f32 t50 = sp50;
            f32 t50n;
            *(f32 *) (p + 0x14) = D_800CAE54;
            *(f32 *) (p + 0x28) = D_800CAE54;
            *(f32 *) (p + 0x3C) = D_800CAE54;
            t50n = -t50;
            *(f32 *) (sp10 + 0x20) = t50;
            *(f32 *) (sp10 + 0x0) = t54;
            *(f32 *) (sp10 + 0x8) = t50n;
            *(f32 *) (sp10 + 0x28) = t54;
        }
        func_8029DE3C(arg0, (s32) p, arg0);
    }
}
