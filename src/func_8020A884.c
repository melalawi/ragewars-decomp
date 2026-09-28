#include "basetypes.h"

extern f32 D_800C6E18;
extern f32 D_800C6E1C;
extern f32 func_802745D4(f32 arg0);
extern void func_8020A95C(void *arg0, void *arg1);

void func_8020A884(void *arg0, void *arg1) {
    u8 *o = (u8 *) arg0;
    u8 *i = (u8 *) arg1;
    s32 timer = *(s32 *) (o + 0x2EC);

    if (timer == 0) {
        if (*(s32 *) (o + 0x23C) == 0 && *(s32 *) (o + 0x240) <= 0) {
            f32 k = D_800C6E1C;
            f32 threshold = func_802745D4(D_800C6E18) + k;

            if ((f32) *(s32 *) (i + 0x18) < threshold) {
                *(s32 *) (o + 0x240) = 1;
                func_8020A95C(arg0, arg1);
            }
            *(s32 *) (o + 0x2EC) = *(s32 *) (i + 0x10);
            *(s32 *) (o + 0x2EC) =
                (s32) ((f32) *(s32 *) (o + 0x2EC) +
                       func_802745D4(k) * (f32) *(s32 *) (i + 0x14));
        }
    } else {
        *(s32 *) (o + 0x2EC) = timer - 1;
    }
}
