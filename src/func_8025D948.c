#include "basetypes.h"

extern void func_802B5030(s32 arg0, s16 arg1);
extern void func_802B5060(s32 arg0);
extern f32 D_800C90F0;
extern f32 D_800C90F4;

void func_8025D948(void *arg0) {
    char *o = (char *) arg0;
    f32 temp_f1;
    f32 temp_f2;
    f32 var_f0;
    s32 temp_f3;

    if (*(s32 *) (o + 0x1C) & 2) {
        func_802B5030(*(s32 *) (o + 0x14), *(s16 *) (o + 0x22));
        temp_f3 = (s32) ((f32) *(s32 *) (o + 0x20) - *(f32 *) (o + 0x34));
        *(s32 *) (o + 0x20) = temp_f3;
        if (temp_f3 <= 0) {
            *(s32 *) (o + 0x20) = 0;
            func_802B5060(*(s32 *) (o + 0x14));
            *(s32 *) (o + 0x1C) |= 4;
        }
    } else if (*(s32 *) (o + 0x38) != 0) {
        temp_f1 = *(f32 *) (o + 0x3C);
        temp_f2 = *(f32 *) (o + 0x40);
        if (temp_f2 < temp_f1) {
            var_f0 = temp_f1 - D_800C90F0;
            if (temp_f2 <= var_f0) {
                goto store;
            }
            goto clamp;
        }
        if (temp_f1 < temp_f2) {
            var_f0 = temp_f1 + D_800C90F4;
            if (var_f0 <= temp_f2) {
                goto store;
            }
clamp:
            var_f0 = temp_f2;
store:
            *(f32 *) (o + 0x3C) = var_f0;
        }
    }
}
