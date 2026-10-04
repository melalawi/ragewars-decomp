#include "span_1000/code_80273744.h"
#include "span_C76B0/data.h"
#include "types.h"


extern f32 D_800C4918_de[];

extern void func_80274020_de(f32 *);

f32 func_80273F94_de(f32 arg0, f32 arg1) {
    f32 var_f3;

    func_80274020_de(&arg0);
    func_80274020_de(&arg1);
    if (arg0 > arg1) {
        var_f3 = arg1 + D_800C4914_de;
        if ((var_f3 - arg0) < (arg0 - arg1)) {
            arg1 = var_f3;
        }
    } else {
        var_f3 = arg1 - D_800C4918_de[0];
        if ((arg0 - var_f3) < (arg1 - arg0)) {
            arg1 = var_f3;
        }
    }
    return arg0 - arg1;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C4844_4 = 6.28318548f;
const float unbake_rodata_800C4848_4 = 6.28318548f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C9A04_4 = 6.28318548f;
const float unbake_rodata_800C9A08_4 = 6.28318548f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C4BC4_4 = 6.28318548f;
const float unbake_rodata_800C4BC8_4 = 6.28318548f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C4C04_4 = 6.28318548f;
const float unbake_rodata_800C4C08_4 = 6.28318548f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C4914_4 = 6.28318548f;
const float unbake_rodata_800C4918_4 = 6.28318548f;
#endif
