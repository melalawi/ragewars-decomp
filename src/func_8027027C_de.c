#include "span_1000/code_8026E5DC.h"
#include "span_1000/types.h"
#include "span_C76B0/data.h"
#include "types.h"
















void func_8027027C_de(f32 *src, PackedMatrixWords *dst) {
    u32 *upper = dst->upper;
    u32 *lower = dst->lower;
    f32 value;
    s32 a;
    s32 b;

#define CONVERT_A(out, input, scale) \
    value = (input) * (scale); \
    if (!(*(&(scale) + 1) <= value)) { \
        (out) = (s32)value; \
    } else { \
        (out) = (s32)(value - *(&(scale) + 1)); \
        (out) |= 0x80000000; \
    }
#define CONVERT_B(out, input, scale) \
    value = (input) * (scale); \
    if (!(*(&(scale) + 1) <= value)) { \
        (out) = (s32)value; \
    } else { \
        (out) = (s32)(value - *(&(scale) + 1)); \
        (out) |= 0x80000000; \
    }

    CONVERT_A(a, src[0], D_800C4770_de);
    CONVERT_B(b, src[1], D_800C4778_de);
    *upper = (a & 0xFFFF0000) | ((u32)b >> 16);
    *lower = (a << 16) | (b & 0xFFFF);
    upper++;
    lower++;

    CONVERT_A(a, src[2], D_800C4780_de);
    *upper = a & 0xFFFF0000;
    *lower = a << 16;
    upper++;
    lower++;

    CONVERT_A(a, src[4], D_800C4788_de);
    CONVERT_B(b, src[5], D_800C4790_de);
    *upper = (a & 0xFFFF0000) | ((u32)b >> 16);
    *lower = (a << 16) | (b & 0xFFFF);
    upper++;
    lower++;

    CONVERT_A(a, src[6], D_800C4798_de);
    *upper = a & 0xFFFF0000;
    *lower = a << 16;
    upper++;
    lower++;

    CONVERT_A(a, src[8], D_800C47A0_de);
    CONVERT_B(b, src[9], D_800C47A8_de);
    *upper = (a & 0xFFFF0000) | ((u32)b >> 16);
    *lower = (a << 16) | (b & 0xFFFF);
    upper++;
    lower++;

    CONVERT_A(a, src[10], D_800C47B0_de);
    *upper = a & 0xFFFF0000;
    *lower = a << 16;
    upper++;
    lower++;

    CONVERT_A(a, src[12], D_800C47B8_de);
    CONVERT_B(b, src[13], D_800C47C0_de);
    *upper = (a & 0xFFFF0000) | ((u32)b >> 16);
    *lower = (a << 16) | (b & 0xFFFF);
    upper++;
    lower++;

    CONVERT_A(a, src[14], D_800C47C8_de);
    *upper = (a & 0xFFFF0000) | 1;
    *lower = a << 16;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C46A0_4 = 65536.0f;
const float unbake_rodata_800C46A4_4 = 2.14748365e+09f;
const float unbake_rodata_800C46A8_4 = 65536.0f;
const float unbake_rodata_800C46AC_4 = 2.14748365e+09f;
const float unbake_rodata_800C46B0_4 = 65536.0f;
const float unbake_rodata_800C46B4_4 = 2.14748365e+09f;
const float unbake_rodata_800C46B8_4 = 65536.0f;
const float unbake_rodata_800C46BC_4 = 2.14748365e+09f;
const float unbake_rodata_800C46C0_4 = 65536.0f;
const float unbake_rodata_800C46C4_4 = 2.14748365e+09f;
const float unbake_rodata_800C46C8_4 = 65536.0f;
const float unbake_rodata_800C46CC_4 = 2.14748365e+09f;
const float unbake_rodata_800C46D0_4 = 65536.0f;
const float unbake_rodata_800C46D4_4 = 2.14748365e+09f;
const float unbake_rodata_800C46D8_4 = 65536.0f;
const float unbake_rodata_800C46DC_4 = 2.14748365e+09f;
const float unbake_rodata_800C46E0_4 = 65536.0f;
const float unbake_rodata_800C46E4_4 = 2.14748365e+09f;
const float unbake_rodata_800C46E8_4 = 65536.0f;
const float unbake_rodata_800C46EC_4 = 2.14748365e+09f;
const float unbake_rodata_800C46F0_4 = 65536.0f;
const float unbake_rodata_800C46F4_4 = 2.14748365e+09f;
const float unbake_rodata_800C46F8_4 = 65536.0f;
const float unbake_rodata_800C46FC_4 = 2.14748365e+09f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C9860_4 = 65536.0f;
const float unbake_rodata_800C9864_4 = 2.14748365e+09f;
const float unbake_rodata_800C9868_4 = 65536.0f;
const float unbake_rodata_800C986C_4 = 2.14748365e+09f;
const float unbake_rodata_800C9870_4 = 65536.0f;
const float unbake_rodata_800C9874_4 = 2.14748365e+09f;
const float unbake_rodata_800C9878_4 = 65536.0f;
const float unbake_rodata_800C987C_4 = 2.14748365e+09f;
const float unbake_rodata_800C9880_4 = 65536.0f;
const float unbake_rodata_800C9884_4 = 2.14748365e+09f;
const float unbake_rodata_800C9888_4 = 65536.0f;
const float unbake_rodata_800C988C_4 = 2.14748365e+09f;
const float unbake_rodata_800C9890_4 = 65536.0f;
const float unbake_rodata_800C9894_4 = 2.14748365e+09f;
const float unbake_rodata_800C9898_4 = 65536.0f;
const float unbake_rodata_800C989C_4 = 2.14748365e+09f;
const float unbake_rodata_800C98A0_4 = 65536.0f;
const float unbake_rodata_800C98A4_4 = 2.14748365e+09f;
const float unbake_rodata_800C98A8_4 = 65536.0f;
const float unbake_rodata_800C98AC_4 = 2.14748365e+09f;
const float unbake_rodata_800C98B0_4 = 65536.0f;
const float unbake_rodata_800C98B4_4 = 2.14748365e+09f;
const float unbake_rodata_800C98B8_4 = 65536.0f;
const float unbake_rodata_800C98BC_4 = 2.14748365e+09f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C4A20_4 = 65536.0f;
const float unbake_rodata_800C4A24_4 = 2.14748365e+09f;
const float unbake_rodata_800C4A28_4 = 65536.0f;
const float unbake_rodata_800C4A2C_4 = 2.14748365e+09f;
const float unbake_rodata_800C4A30_4 = 65536.0f;
const float unbake_rodata_800C4A34_4 = 2.14748365e+09f;
const float unbake_rodata_800C4A38_4 = 65536.0f;
const float unbake_rodata_800C4A3C_4 = 2.14748365e+09f;
const float unbake_rodata_800C4A40_4 = 65536.0f;
const float unbake_rodata_800C4A44_4 = 2.14748365e+09f;
const float unbake_rodata_800C4A48_4 = 65536.0f;
const float unbake_rodata_800C4A4C_4 = 2.14748365e+09f;
const float unbake_rodata_800C4A50_4 = 65536.0f;
const float unbake_rodata_800C4A54_4 = 2.14748365e+09f;
const float unbake_rodata_800C4A58_4 = 65536.0f;
const float unbake_rodata_800C4A5C_4 = 2.14748365e+09f;
const float unbake_rodata_800C4A60_4 = 65536.0f;
const float unbake_rodata_800C4A64_4 = 2.14748365e+09f;
const float unbake_rodata_800C4A68_4 = 65536.0f;
const float unbake_rodata_800C4A6C_4 = 2.14748365e+09f;
const float unbake_rodata_800C4A70_4 = 65536.0f;
const float unbake_rodata_800C4A74_4 = 2.14748365e+09f;
const float unbake_rodata_800C4A78_4 = 65536.0f;
const float unbake_rodata_800C4A7C_4 = 2.14748365e+09f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C4A60_4 = 65536.0f;
const float unbake_rodata_800C4A64_4 = 2.14748365e+09f;
const float unbake_rodata_800C4A68_4 = 65536.0f;
const float unbake_rodata_800C4A6C_4 = 2.14748365e+09f;
const float unbake_rodata_800C4A70_4 = 65536.0f;
const float unbake_rodata_800C4A74_4 = 2.14748365e+09f;
const float unbake_rodata_800C4A78_4 = 65536.0f;
const float unbake_rodata_800C4A7C_4 = 2.14748365e+09f;
const float unbake_rodata_800C4A80_4 = 65536.0f;
const float unbake_rodata_800C4A84_4 = 2.14748365e+09f;
const float unbake_rodata_800C4A88_4 = 65536.0f;
const float unbake_rodata_800C4A8C_4 = 2.14748365e+09f;
const float unbake_rodata_800C4A90_4 = 65536.0f;
const float unbake_rodata_800C4A94_4 = 2.14748365e+09f;
const float unbake_rodata_800C4A98_4 = 65536.0f;
const float unbake_rodata_800C4A9C_4 = 2.14748365e+09f;
const float unbake_rodata_800C4AA0_4 = 65536.0f;
const float unbake_rodata_800C4AA4_4 = 2.14748365e+09f;
const float unbake_rodata_800C4AA8_4 = 65536.0f;
const float unbake_rodata_800C4AAC_4 = 2.14748365e+09f;
const float unbake_rodata_800C4AB0_4 = 65536.0f;
const float unbake_rodata_800C4AB4_4 = 2.14748365e+09f;
const float unbake_rodata_800C4AB8_4 = 65536.0f;
const float unbake_rodata_800C4ABC_4 = 2.14748365e+09f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C4770_4 = 65536.0f;
const float unbake_rodata_800C4774_4 = 2.14748365e+09f;
const float unbake_rodata_800C4778_4 = 65536.0f;
const float unbake_rodata_800C477C_4 = 2.14748365e+09f;
const float unbake_rodata_800C4780_4 = 65536.0f;
const float unbake_rodata_800C4784_4 = 2.14748365e+09f;
const float unbake_rodata_800C4788_4 = 65536.0f;
const float unbake_rodata_800C478C_4 = 2.14748365e+09f;
const float unbake_rodata_800C4790_4 = 65536.0f;
const float unbake_rodata_800C4794_4 = 2.14748365e+09f;
const float unbake_rodata_800C4798_4 = 65536.0f;
const float unbake_rodata_800C479C_4 = 2.14748365e+09f;
const float unbake_rodata_800C47A0_4 = 65536.0f;
const float unbake_rodata_800C47A4_4 = 2.14748365e+09f;
const float unbake_rodata_800C47A8_4 = 65536.0f;
const float unbake_rodata_800C47AC_4 = 2.14748365e+09f;
const float unbake_rodata_800C47B0_4 = 65536.0f;
const float unbake_rodata_800C47B4_4 = 2.14748365e+09f;
const float unbake_rodata_800C47B8_4 = 65536.0f;
const float unbake_rodata_800C47BC_4 = 2.14748365e+09f;
const float unbake_rodata_800C47C0_4 = 65536.0f;
const float unbake_rodata_800C47C4_4 = 2.14748365e+09f;
const float unbake_rodata_800C47C8_4 = 65536.0f;
const float unbake_rodata_800C47CC_4 = 2.14748365e+09f;
#endif
