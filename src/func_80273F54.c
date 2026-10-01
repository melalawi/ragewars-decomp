#include "basetypes.h"

extern f32 D_800C99F8;
extern f32 D_800C9A00;
extern void func_80274090(f32 *);

f32 func_80273F54(f32 fraction, f32 first, f32 second) {
    f32 var_f3;
    f32 result;

    func_80274090(&first);
    func_80274090(&second);
    if (first > second) {
        var_f3 = second + *(&D_800C99F8 + 1);
        if ((var_f3 - first) < (first - second)) {
            second = var_f3;
        }
    } else {
        var_f3 = second - D_800C9A00;
        if ((first - var_f3) < (second - first)) {
            second = var_f3;
        }
    }
    result = first + (fraction * (second - first));
    func_80274090(&result);
    return result;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C483C_4 = 6.28318548f;
const float unbake_rodata_800C4840_4 = 6.28318548f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C99FC_4 = 6.28318548f;
const float unbake_rodata_800C9A00_4 = 6.28318548f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C4BBC_4 = 6.28318548f;
const float unbake_rodata_800C4BC0_4 = 6.28318548f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C4BFC_4 = 6.28318548f;
const float unbake_rodata_800C4C00_4 = 6.28318548f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C490C_4 = 6.28318548f;
const float unbake_rodata_800C4910_4 = 6.28318548f;
#endif
