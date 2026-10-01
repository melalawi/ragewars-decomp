#include "basetypes.h"

extern f32 D_800C9A08;
extern f32 D_800C9A10;
extern f32 D_800C9A18;

void func_80274090(f32 *value)
{
    {
        f32 val;
        f32 limit;
        f32 step;

        val = *value;
        limit = *(&D_800C9A08 + 1);
        if (val < limit) {
            step = D_800C9A10;
            do {
                val += step;
                *value = val;
            } while (val < limit);
        }
    }
    {
        f32 val;
        f32 limit;
        f32 step;

        val = *value;
        limit = *(&D_800C9A10 + 1);
        if (limit <= val) {
            step = D_800C9A18;
            do {
                val -= step;
                *value = val;
            } while (limit <= val);
        }
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C484C_4 = (-3.14159274f);
const float unbake_rodata_800C4850_4 = 6.28318548f;
const float unbake_rodata_800C4854_4 = 3.14159274f;
const float unbake_rodata_800C4858_4 = 6.28318548f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C9A0C_4 = (-3.14159274f);
const float unbake_rodata_800C9A10_4 = 6.28318548f;
const float unbake_rodata_800C9A14_4 = 3.14159274f;
const float unbake_rodata_800C9A18_4 = 6.28318548f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C4BCC_4 = (-3.14159274f);
const float unbake_rodata_800C4BD0_4 = 6.28318548f;
const float unbake_rodata_800C4BD4_4 = 3.14159274f;
const float unbake_rodata_800C4BD8_4 = 6.28318548f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C4C0C_4 = (-3.14159274f);
const float unbake_rodata_800C4C10_4 = 6.28318548f;
const float unbake_rodata_800C4C14_4 = 3.14159274f;
const float unbake_rodata_800C4C18_4 = 6.28318548f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C491C_4 = (-3.14159274f);
const float unbake_rodata_800C4920_4 = 6.28318548f;
const float unbake_rodata_800C4924_4 = 3.14159274f;
const float unbake_rodata_800C4928_4 = 6.28318548f;
#endif
