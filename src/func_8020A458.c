#include "basetypes.h"

extern f32 D_800C6E0C;
extern f32 D_800C6E10;
extern f32 D_800C6E14;
extern char D_80121990;

extern void func_8028509C(void *arg0, void *arg1, f32 *arg2);
extern f32 func_802745D4(f32 arg0);
extern f32 func_80216F44(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
extern f32 func_8020AA0C(void *arg0);
extern void func_8020A95C(void *arg0, void *arg1);

void func_8020A458(void *arg0, void *arg1) {
    s32 timer;
    s32 minus_one;
    void *record;
    f32 distance;

    if (arg0 == 0) {
        return;
    }

    timer = *(s32 *) ((u8 *) arg0 + 0x2EC);
    if (timer == 0) {
        f32 value;

        func_8028509C(&D_80121990, *(void **) arg0, &value);
        if (value < D_800C6E0C) {
            f32 k = D_800C6E14;
            f32 threshold = func_802745D4(D_800C6E10) + k;

            if ((f32) *(s32 *) ((u8 *) arg1 + 0x34) < threshold) {
                s32 base = *(s32 *) ((u8 *) arg1 + 0x24);
                *(s32 *) ((u8 *) arg0 + 0x240) =
                    (s32) ((f32) base + func_802745D4(k) * (f32) *(s32 *) ((u8 *) arg1 + 0x28));
            }
            *(s32 *) ((u8 *) arg0 + 0x2EC) = *(s32 *) ((u8 *) arg1 + 0x2C);
            *(s32 *) ((u8 *) arg0 + 0x2EC) =
                (s32) ((f32) *(s32 *) ((u8 *) arg0 + 0x2EC) +
                       func_802745D4(k) * (f32) *(s32 *) ((u8 *) arg1 + 0x30));
            *(s32 *) ((u8 *) arg0 + 0x2EC) += *(s32 *) ((u8 *) arg0 + 0x240);
        }
    } else {
        *(s32 *) ((u8 *) arg0 + 0x2EC) = timer - 1;
    }

    timer = *(s32 *) ((u8 *) arg0 + 0x2E4);
    if (timer > 0) {
        *(s32 *) ((u8 *) arg0 + 0x2E4) = timer - 1;
        return;
    }
    minus_one = -1;
    if (timer == minus_one) {
        *(s32 *) ((u8 *) arg0 + 0x23C) = 1;
        *(s32 *) ((u8 *) arg0 + 0x2E8) += minus_one;
    } else {
        record = *(void **)((u8 *)*(void **)((u8 *) arg0 + 0x64) + 0x1D8);
        distance = func_80216F44(*(s32 *)arg0,
                                 *(s32 *)((u8 *)record + 8),
                                 *(s32 *)((u8 *)record + 0xC),
                                 *(s32 *)((u8 *)record + 0x10));
        if (func_8020AA0C(arg0) < distance) {
            return;
        }
        *(s32 *) ((u8 *) arg0 + 0x23C) = 1;
        *(s32 *) ((u8 *) arg0 + 0x2E4) = minus_one;
    }
    if (*(s32 *) ((u8 *) arg0 + 0x2E8) == 0) {
        *(s32 *) ((u8 *) arg0 + 0x23C) = 0;
        func_8020A95C(arg0, arg1);
    }
}
