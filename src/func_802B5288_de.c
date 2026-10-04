#include "span_1000/code_802BA18C.h"
#include "span_C76B0/data.h"
#include "types.h"




f32 func_802B5288_de(f32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
    f32 base;
    f32 result;
    s32 n;
    s32 i;

    n = arg1 >> 3;
    i = 0;
    if (n == 0) {
        return arg0;
    }

    base = (f32)(arg2 << 16);
    base += (f32)(arg3 & 0xFFFF);
    base *= D_800C7708_de;
    result = D_800C770C_de;
    do {
        if (n & 1) {
            result *= base;
        }
        n >>= 1;
        i++;
        if (n == 0) {
            break;
        }
        base *= base;
    } while (i < 0x20);

    return arg0 * result;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C7628_4 = 1.52587891e-05f;
const float unbake_rodata_800C762C_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800CC958_4 = 1.52587891e-05f;
const float unbake_rodata_800CC95C_4 = 1.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C82F8_4 = 1.52587891e-05f;
const float unbake_rodata_800C82FC_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C8CC8_4 = 1.52587891e-05f;
const float unbake_rodata_800C8CCC_4 = 1.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C7708_4 = 1.52587891e-05f;
const float unbake_rodata_800C770C_4 = 1.0f;
#endif
