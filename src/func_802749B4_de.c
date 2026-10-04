#include "span_1000/code_80274A24.h"
#include "span_C76B0/data.h"
#include "types.h"






f32 func_802749B4_de(f32 arg0, f32 arg1) {
    f32 var_f0;
    f32 var_f14;

    var_f14 = arg1;
    if (var_f14 < D_800C4978_de) {
        do {
            var_f14 += *(&D_800C4978_de + 1);
        } while (var_f14 < D_800C4978_de);
    }
    if (D_800C4980_de < var_f14) {
        do {
            var_f14 -= *(&D_800C4980_de + 1);
        } while (D_800C4980_de < var_f14);
    }
    var_f0 = arg0 - var_f14;
    if (var_f0 < D_800C4988_de) {
        do {
            var_f0 += *(&D_800C4988_de + 1);
        } while (var_f0 < D_800C4988_de);
    }
    if (D_800C4990_de < var_f0) {
        do {
            var_f0 -= *(&D_800C4990_de + 1);
        } while (D_800C4990_de < var_f0);
    }
    return -var_f0;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C48A8_4 = (-3.14159274f);
const float unbake_rodata_800C48AC_4 = 6.28318548f;
const float unbake_rodata_800C48B0_4 = 3.14159274f;
const float unbake_rodata_800C48B4_4 = 6.28318548f;
const float unbake_rodata_800C48B8_4 = (-3.14159274f);
const float unbake_rodata_800C48BC_4 = 6.28318548f;
const float unbake_rodata_800C48C0_4 = 3.14159274f;
const float unbake_rodata_800C48C4_4 = 6.28318548f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C9A68_4 = (-3.14159274f);
const float unbake_rodata_800C9A6C_4 = 6.28318548f;
const float unbake_rodata_800C9A70_4 = 3.14159274f;
const float unbake_rodata_800C9A74_4 = 6.28318548f;
const float unbake_rodata_800C9A78_4 = (-3.14159274f);
const float unbake_rodata_800C9A7C_4 = 6.28318548f;
const float unbake_rodata_800C9A80_4 = 3.14159274f;
const float unbake_rodata_800C9A84_4 = 6.28318548f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C4C28_4 = (-3.14159274f);
const float unbake_rodata_800C4C2C_4 = 6.28318548f;
const float unbake_rodata_800C4C30_4 = 3.14159274f;
const float unbake_rodata_800C4C34_4 = 6.28318548f;
const float unbake_rodata_800C4C38_4 = (-3.14159274f);
const float unbake_rodata_800C4C3C_4 = 6.28318548f;
const float unbake_rodata_800C4C40_4 = 3.14159274f;
const float unbake_rodata_800C4C44_4 = 6.28318548f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C4C68_4 = (-3.14159274f);
const float unbake_rodata_800C4C6C_4 = 6.28318548f;
const float unbake_rodata_800C4C70_4 = 3.14159274f;
const float unbake_rodata_800C4C74_4 = 6.28318548f;
const float unbake_rodata_800C4C78_4 = (-3.14159274f);
const float unbake_rodata_800C4C7C_4 = 6.28318548f;
const float unbake_rodata_800C4C80_4 = 3.14159274f;
const float unbake_rodata_800C4C84_4 = 6.28318548f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C4978_4 = (-3.14159274f);
const float unbake_rodata_800C497C_4 = 6.28318548f;
const float unbake_rodata_800C4980_4 = 3.14159274f;
const float unbake_rodata_800C4984_4 = 6.28318548f;
const float unbake_rodata_800C4988_4 = (-3.14159274f);
const float unbake_rodata_800C498C_4 = 6.28318548f;
const float unbake_rodata_800C4990_4 = 3.14159274f;
const float unbake_rodata_800C4994_4 = 6.28318548f;
#endif
