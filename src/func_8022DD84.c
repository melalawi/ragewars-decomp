#include "basetypes.h"

extern void func_802748E0(f32 *, f32, f32);
extern f32 D_800C7EE8[2];
extern f32 D_800C7EF0;

void func_8022DD84(void *arg0) {
    f32 sp10;
    f32 var_f1;
    f32 var_f2;

    var_f1 = 0.0f;
    if ((u32)(*(u16 *)((char *)arg0 + 0x650) - 9) < 4U) {
        var_f1 = D_800C7EE8[0];
    }
    sp10 = *(f32 *)((char *)arg0 + 0x720);
    func_802748E0(&sp10, var_f1, 0.25f);
    var_f2 = sp10 - *(f32 *)((char *)arg0 + 0x720);
    if (var_f2 < 0.0f) {
        if (-var_f2 < D_800C7EE8[1]) {
            goto clamp;
        }
    } else if (var_f2 < D_800C7EF0) {
clamp:
        var_f2 = 0.0f;
    }
    *(f32 *)((char *)arg0 + 0x720) = *(f32 *)((char *)arg0 + 0x720) + var_f2;
}
