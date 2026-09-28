/* Advances a filling or draining bar by the step and writes its level byte at 0x10 of the bar at
   0xC: while rising it scales the amount for the display and, at or above the wrap point, stores
   the remainder with the high bit set, and it finishes at 1000 by storing 0xFF, marking 0x4 and
   calling func_802A3358; while falling it does the same from the other pair of constants and
   finishes at zero. Returns the finished flag. */
#include "basetypes.h"

struct Bar {
    char pad0[0x10];
    u8 level;
};

struct Meter {
    s32 amount;
    s32 done;
    s32 falling;
    struct Bar *bar;
};

extern f32 D_800E1630;
extern f32 D_800E1638;
extern void func_802A3358();

s32 func_80421ECC(struct Meter *meter, s32 step) {
    struct Bar *bar;
    s32 level;
    f32 value;

    if (meter->done == 0) {
        if (meter->falling == 0) {
            if (meter->amount < 0x3E8) {
                value = (f32)meter->amount * D_800E1630;
                bar = meter->bar;
                if (!(value >= *(&D_800E1630 + 1))) {
                    level = (s32)value;
                } else {
                    level = (s32)(value - *(&D_800E1630 + 1)) | 0x80000000;
                }
                bar->level = level;
            } else {
                meter->bar->level = 0xFF;
                meter->done = 1;
                func_802A3358();
            }
            meter->amount = meter->amount + step;
        } else {
            if (meter->amount > 0) {
                value = (f32)meter->amount * D_800E1638;
                bar = meter->bar;
                if (!(value >= *(&D_800E1638 + 1))) {
                    level = (s32)value;
                } else {
                    level = (s32)(value - *(&D_800E1638 + 1)) | 0x80000000;
                }
                bar->level = level;
            } else {
                meter->bar->level = 0;
                meter->done = 1;
                func_802A3358();
            }
            meter->amount = meter->amount - step;
        }
    }
    return meter->done;
}
