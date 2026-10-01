#include "basetypes.h"

extern f32 D_800CB030[2];

void func_802A6B3C(f32 *arg0) {
    f32 new_var;
    f32 new_var2;

    new_var2 = (new_var2 = *arg0);
    if (*arg0 < 0.0f) {
        *arg0 = 0.0f;
    } else {
        new_var = D_800CB030[1];
        if (new_var < new_var2) {
            *arg0 = new_var;
        }
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C5DD4_4 = 255.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800CB034_4 = 255.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C6144_4 = 255.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C6184_4 = 255.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C5EA4_4 = 255.0f;
#endif
