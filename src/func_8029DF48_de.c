#include "span_1000/code_8029D984.h"
#include "span_C76B0/data.h"
#include "types.h"

/* Returns the arccosine of a value clamped to [-1, 1] as pi/2 minus the arcsine, which is computed by the polynomial approximation pi/2 - sqrt(1 - x) * p(x) on the magnitude with the sign restored. Adapted from func_8029DE48_de with the constants moved to D_800CADB4 through D_800CADD4 and the final subtraction from pi/2 added. */






extern f32 func_802B72B0_de(f32 value);

f32 func_8029DF48_de(f32 x) {
    s32 negative;
    f32 poly;
    f32 root;
    f32 result;

    if (*(&D_800C5C20_de + 1) < x) {
        x = *(&D_800C5C20_de + 1);
    }
    do {
        if (x < D_800C5C28_de) {
            x = D_800C5C28_de;
        }
        negative = 0;
        if (x < 0.0f) {
            negative = 1;
            x = -x;
        }
        poly = (((((x * (-0.011680527590215206f) + D_800C5C30_de) * x - *(&D_800C5C30_de + 1)) * x + D_800C5C38_de) * x
                 - *(&D_800C5C38_de + 1)) * x) + D_800C5C40_de;
        x = *(&D_800C5C20_de + 1) - x;
        if (x <= 0.0f) {
            root = 0.0f;
        } else {
            root = func_802B72B0_de(x);
        }
    } while (0);
    result = *(&D_800C5C40_de + 1) - root * poly;
    if (negative) {
        result = -result;
    }
    return *(&D_800C5C40_de + 1) - result;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C5B54_4 = 1.0f;
const float unbake_rodata_800C5B58_4 = (-1.0f);
const float unbake_rodata_800C5B5C_4 = (-0.0116805276f);
const float unbake_rodata_800C5B60_4 = 0.0308918804f;
const float unbake_rodata_800C5B64_4 = 0.0501743034f;
const float unbake_rodata_800C5B68_4 = 0.0889789909f;
const float unbake_rodata_800C5B6C_4 = 0.214598805f;
const float unbake_rodata_800C5B70_4 = 1.57079625f;
const float unbake_rodata_800C5B74_4 = 1.57079637f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800CADB4_4 = 1.0f;
const float unbake_rodata_800CADB8_4 = (-1.0f);
const float unbake_rodata_800CADBC_4 = (-0.0116805276f);
const float unbake_rodata_800CADC0_4 = 0.0308918804f;
const float unbake_rodata_800CADC4_4 = 0.0501743034f;
const float unbake_rodata_800CADC8_4 = 0.0889789909f;
const float unbake_rodata_800CADCC_4 = 0.214598805f;
const float unbake_rodata_800CADD0_4 = 1.57079625f;
const float unbake_rodata_800CADD4_4 = 1.57079637f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C5EC4_4 = 1.0f;
const float unbake_rodata_800C5EC8_4 = (-1.0f);
const float unbake_rodata_800C5ECC_4 = (-0.0116805276f);
const float unbake_rodata_800C5ED0_4 = 0.0308918804f;
const float unbake_rodata_800C5ED4_4 = 0.0501743034f;
const float unbake_rodata_800C5ED8_4 = 0.0889789909f;
const float unbake_rodata_800C5EDC_4 = 0.214598805f;
const float unbake_rodata_800C5EE0_4 = 1.57079625f;
const float unbake_rodata_800C5EE4_4 = 1.57079637f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C5F04_4 = 1.0f;
const float unbake_rodata_800C5F08_4 = (-1.0f);
const float unbake_rodata_800C5F0C_4 = (-0.0116805276f);
const float unbake_rodata_800C5F10_4 = 0.0308918804f;
const float unbake_rodata_800C5F14_4 = 0.0501743034f;
const float unbake_rodata_800C5F18_4 = 0.0889789909f;
const float unbake_rodata_800C5F1C_4 = 0.214598805f;
const float unbake_rodata_800C5F20_4 = 1.57079625f;
const float unbake_rodata_800C5F24_4 = 1.57079637f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C5C24_4 = 1.0f;
const float unbake_rodata_800C5C28_4 = (-1.0f);
const float unbake_rodata_800C5C2C_4 = (-0.0116805276f);
const float unbake_rodata_800C5C30_4 = 0.0308918804f;
const float unbake_rodata_800C5C34_4 = 0.0501743034f;
const float unbake_rodata_800C5C38_4 = 0.0889789909f;
const float unbake_rodata_800C5C3C_4 = 0.214598805f;
const float unbake_rodata_800C5C40_4 = 1.57079625f;
const float unbake_rodata_800C5C44_4 = 1.57079637f;
#endif
