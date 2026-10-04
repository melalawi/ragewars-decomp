#include "span_1000/code_8024C444.h"
#include "span_1000/types.h"
#include "span_C76B0/data.h"
#include "types.h"
/* Converts the twelve used entries of a 4x4 float matrix to unsigned integers, splitting each pair into the high and low halfword arrays of a packed matrix and setting the final high word's low bit. Adapted from func_8027027C_de with the per-entry scale multiplies removed, the converted value scoped to each conversion block, and the D_800C8C70 thresholds changed. */










void func_8024CC30_de(f32 *src, PackedMatrixWords *dst) {
    u32 *upper = dst->upper;
    u32 *lower = dst->lower;
    s32 a;
    s32 b;

#define CONVERT(out, input, limit) { \
    f32 value = (input); \
    if (!((limit) <= value)) { \
        (out) = (s32)value; \
    } else { \
        (out) = (s32)(value - (limit)); \
        (out) |= 0x80000000; \
    } }

    CONVERT(a, src[0], D_800C3B80);
    CONVERT(b, src[1], *(&D_800C3B80 + 1));
    *upper = (a & 0xFFFF0000) | ((u32)b >> 16);
    *lower = (a << 16) | (b & 0xFFFF);
    upper++;
    lower++;

    CONVERT(a, src[2], D_800C3B88);
    *upper = a & 0xFFFF0000;
    *lower = a << 16;
    upper++;
    lower++;

    CONVERT(a, src[4], *(&D_800C3B88 + 1));
    CONVERT(b, src[5], D_800C3B90);
    *upper = (a & 0xFFFF0000) | ((u32)b >> 16);
    *lower = (a << 16) | (b & 0xFFFF);
    upper++;
    lower++;

    CONVERT(a, src[6], *(&D_800C3B90 + 1));
    *upper = a & 0xFFFF0000;
    *lower = a << 16;
    upper++;
    lower++;

    CONVERT(a, src[8], D_800C3B98);
    CONVERT(b, src[9], *(&D_800C3B98 + 1));
    *upper = (a & 0xFFFF0000) | ((u32)b >> 16);
    *lower = (a << 16) | (b & 0xFFFF);
    upper++;
    lower++;

    CONVERT(a, src[10], D_800C3BA0_de);
    *upper = a & 0xFFFF0000;
    *lower = a << 16;
    upper++;
    lower++;

    CONVERT(a, src[12], *(&D_800C3BA0_de + 1));
    CONVERT(b, src[13], D_800C3BA8);
    *upper = (a & 0xFFFF0000) | ((u32)b >> 16);
    *lower = (a << 16) | (b & 0xFFFF);
    upper++;
    lower++;

    CONVERT(a, src[14], *(&D_800C3BA8 + 1));
    *upper = (a & 0xFFFF0000) | 1;
    *lower = a << 16;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C3AB0_4 = 2.14748365e+09f;
const float unbake_rodata_800C3AB4_4 = 2.14748365e+09f;
const float unbake_rodata_800C3AB8_4 = 2.14748365e+09f;
const float unbake_rodata_800C3ABC_4 = 2.14748365e+09f;
const float unbake_rodata_800C3AC0_4 = 2.14748365e+09f;
const float unbake_rodata_800C3AC4_4 = 2.14748365e+09f;
const float unbake_rodata_800C3AC8_4 = 2.14748365e+09f;
const float unbake_rodata_800C3ACC_4 = 2.14748365e+09f;
const float unbake_rodata_800C3AD0_4 = 2.14748365e+09f;
const float unbake_rodata_800C3AD4_4 = 2.14748365e+09f;
const float unbake_rodata_800C3AD8_4 = 2.14748365e+09f;
const float unbake_rodata_800C3ADC_4 = 2.14748365e+09f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C8C70_4 = 2.14748365e+09f;
const float unbake_rodata_800C8C74_4 = 2.14748365e+09f;
const float unbake_rodata_800C8C78_4 = 2.14748365e+09f;
const float unbake_rodata_800C8C7C_4 = 2.14748365e+09f;
const float unbake_rodata_800C8C80_4 = 2.14748365e+09f;
const float unbake_rodata_800C8C84_4 = 2.14748365e+09f;
const float unbake_rodata_800C8C88_4 = 2.14748365e+09f;
const float unbake_rodata_800C8C8C_4 = 2.14748365e+09f;
const float unbake_rodata_800C8C90_4 = 2.14748365e+09f;
const float unbake_rodata_800C8C94_4 = 2.14748365e+09f;
const float unbake_rodata_800C8C98_4 = 2.14748365e+09f;
const float unbake_rodata_800C8C9C_4 = 2.14748365e+09f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C3E30_4 = 2.14748365e+09f;
const float unbake_rodata_800C3E34_4 = 2.14748365e+09f;
const float unbake_rodata_800C3E38_4 = 2.14748365e+09f;
const float unbake_rodata_800C3E3C_4 = 2.14748365e+09f;
const float unbake_rodata_800C3E40_4 = 2.14748365e+09f;
const float unbake_rodata_800C3E44_4 = 2.14748365e+09f;
const float unbake_rodata_800C3E48_4 = 2.14748365e+09f;
const float unbake_rodata_800C3E4C_4 = 2.14748365e+09f;
const float unbake_rodata_800C3E50_4 = 2.14748365e+09f;
const float unbake_rodata_800C3E54_4 = 2.14748365e+09f;
const float unbake_rodata_800C3E58_4 = 2.14748365e+09f;
const float unbake_rodata_800C3E5C_4 = 2.14748365e+09f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C3E70_4 = 2.14748365e+09f;
const float unbake_rodata_800C3E74_4 = 2.14748365e+09f;
const float unbake_rodata_800C3E78_4 = 2.14748365e+09f;
const float unbake_rodata_800C3E7C_4 = 2.14748365e+09f;
const float unbake_rodata_800C3E80_4 = 2.14748365e+09f;
const float unbake_rodata_800C3E84_4 = 2.14748365e+09f;
const float unbake_rodata_800C3E88_4 = 2.14748365e+09f;
const float unbake_rodata_800C3E8C_4 = 2.14748365e+09f;
const float unbake_rodata_800C3E90_4 = 2.14748365e+09f;
const float unbake_rodata_800C3E94_4 = 2.14748365e+09f;
const float unbake_rodata_800C3E98_4 = 2.14748365e+09f;
const float unbake_rodata_800C3E9C_4 = 2.14748365e+09f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C3B80_4 = 2.14748365e+09f;
const float unbake_rodata_800C3B84_4 = 2.14748365e+09f;
const float unbake_rodata_800C3B88_4 = 2.14748365e+09f;
const float unbake_rodata_800C3B8C_4 = 2.14748365e+09f;
const float unbake_rodata_800C3B90_4 = 2.14748365e+09f;
const float unbake_rodata_800C3B94_4 = 2.14748365e+09f;
const float unbake_rodata_800C3B98_4 = 2.14748365e+09f;
const float unbake_rodata_800C3B9C_4 = 2.14748365e+09f;
const float unbake_rodata_800C3BA0_4 = 2.14748365e+09f;
const float unbake_rodata_800C3BA4_4 = 2.14748365e+09f;
const float unbake_rodata_800C3BA8_4 = 2.14748365e+09f;
const float unbake_rodata_800C3BAC_4 = 2.14748365e+09f;
#endif
