#include "basetypes.h"

extern f32 func_802752CC(void *arg0, s32 arg1, s32 arg2);
extern f32 func_80275E44(s32, s32, s32);
extern void func_8025E460(f32 arg0);

extern f32 D_800C7F14;
extern f32 D_800C7F18;
extern f32 D_800C7F1C;

void func_8022EA2C(void *arg0, void *arg1) {
    f32 first;
    f32 amount;

    if (arg0 != 0 && arg1 != 0 &&
        (*(u16 *)((char *)arg0 + 2) & 0x40)) {
        first = func_802752CC(arg0,
            *(s32 *)((char *)arg1 + 0), *(s32 *)((char *)arg1 + 8));
        amount = (f32)(s32)(first - func_80275E44(arg0,
            *(s32 *)((char *)arg1 + 0), *(s32 *)((char *)arg1 + 8)));
        if (amount < D_800C7F14) {
            func_8025E460(D_800C7F1C - (amount * D_800C7F18));
            return;
        }
    }
    func_8025E460(0.0f);
}
