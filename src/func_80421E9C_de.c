#include "span_16E000/code_80421A88.h"
#include "span_16E000/types.h"
#include "span_C76B0/data.h"
#include "types.h"
/* Advances a filling or draining bar by the step and writes its level byte at 0x10 of the bar at
   0xC: while rising it scales the amount for the display and, at or above the wrap point, stores
   the remainder with the high bit set, and it finishes at 1000 by storing 0xFF, marking 0x4 and
   calling func_802A2360_de; while falling it does the same from the other pair of constants and
   finishes at zero. Returns the finished flag. */







extern void func_802A2360_de();

s32 func_80421E9C_de(struct Meter *meter, s32 step) {
    struct Resource_func_80419E54_de *bar;
    s32 level;
    f32 value;

    if (meter->done == 0) {
        if (meter->falling == 0) {
            if (meter->amount < 0x3E8) {
                value = (f32)meter->amount * D_800DD600;
                bar = meter->bar;
                if (!(value >= *(&D_800DD600 + 1))) {
                    level = (s32)value;
                } else {
                    level = (s32)(value - *(&D_800DD600 + 1)) | 0x80000000;
                }
                bar->value = level;
            } else {
                meter->bar->value = 0xFF;
                meter->done = 1;
                func_802A2360_de();
            }
            meter->amount = meter->amount + step;
        } else {
            if (meter->amount > 0) {
                value = (f32)meter->amount * D_800DD608;
                bar = meter->bar;
                if (!(value >= *(&D_800DD608 + 1))) {
                    level = (s32)value;
                } else {
                    level = (s32)(value - *(&D_800DD608 + 1)) | 0x80000000;
                }
                bar->value = level;
            } else {
                meter->bar->value = 0;
                meter->done = 1;
                func_802A2360_de();
            }
            meter->amount = meter->amount - step;
        }
    }
    return meter->done;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800DC2B0_4 = 0.255000025f;
const float unbake_rodata_800DC2B4_4 = 2.14748365e+09f;
const float unbake_rodata_800DC2B8_4 = 0.255000025f;
const float unbake_rodata_800DC2BC_4 = 2.14748365e+09f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800E1630_4 = 0.255000025f;
const float unbake_rodata_800E1634_4 = 2.14748365e+09f;
const float unbake_rodata_800E1638_4 = 0.255000025f;
const float unbake_rodata_800E163C_4 = 2.14748365e+09f;
#elif defined(VERSION_EU)
const float unbake_rodata_800EDC80_4 = 0.255000025f;
const float unbake_rodata_800EDC84_4 = 2.14748365e+09f;
const float unbake_rodata_800EDC88_4 = 0.255000025f;
const float unbake_rodata_800EDC8C_4 = 2.14748365e+09f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800E8E40_4 = 0.255000025f;
const float unbake_rodata_800E8E44_4 = 2.14748365e+09f;
const float unbake_rodata_800E8E48_4 = 0.255000025f;
const float unbake_rodata_800E8E4C_4 = 2.14748365e+09f;
#elif defined(VERSION_DE)
const float unbake_rodata_800DD600_4 = 0.255000025f;
const float unbake_rodata_800DD604_4 = 2.14748365e+09f;
const float unbake_rodata_800DD608_4 = 0.255000025f;
const float unbake_rodata_800DD60C_4 = 2.14748365e+09f;
#endif
