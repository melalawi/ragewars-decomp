#include "span_1000/code_8029AC80.h"
#include "span_C76B0/data.h"
#include "types.h"









extern f64 func_8029B278_de(f64, f64);

f32 func_8029B9FC_de(f32 arg0) {
    f32 temp_f2;
    f32 var_f0;
    f32 var_f1;
    f32 var_f20;
    s32 var_s0;

    var_f20 = arg0;
    var_s0 = 1;
    var_f1 = var_f20;
    if ((D_800C58B8_de < var_f20) || (var_f20 < (-25.13274383544922f))) {
        func_8029B278_de((f64)var_f20, D_800C58C0_de);
    } else {
        if (D_800C58C8_de < var_f20) {
            do {
                var_f1 -= D_800C58C8_de;
            } while (D_800C58C8_de < var_f1);
        }
        var_f0 = 0.0f;
        if (var_f1 < var_f0) {
            do {
                var_f1 += (6.283185958862305f);
            } while (var_f1 < var_f0);
        }
    }
    if (var_f20 < D_800C58D0_de) {
        do {
            var_f20 += *(&D_800C58D0_de + 1);
        } while (var_f20 < D_800C58D0_de);
    }
    if (D_800C58D8_de < var_f20) {
        do {
            var_f20 -= *(&D_800C58D8_de + 1);
        } while (D_800C58D8_de < var_f20);
    }
    if (D_800C58E0_de < var_f20) {
        var_s0 = -1;
        var_f20 -= (3.1415927410125732f);
    }
    temp_f2 = var_f20 * var_f20;
    var_f0 = (((((((temp_f2 * D_800C58E8_de) - *(&D_800C58E8_de + 1)) * temp_f2) + D_800C58F0_de) * temp_f2) - *(&D_800C58F0_de + 1)) * temp_f2 * var_f20) + var_f20;
    if (var_s0 < 0) {
        var_f0 = -var_f0;
    }
    return var_f0;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C57E8_4 = 25.1327438f;
const float unbake_rodata_800C57EC_4 = (-25.1327438f);
const double unbake_rodata_800C57F0_8 = 6.2831859588623047;
const float unbake_rodata_800C57F8_4 = 6.28318596f;
const float unbake_rodata_800C57FC_4 = 6.28318596f;
const float unbake_rodata_800C5800_4 = (-1.57079637f);
const float unbake_rodata_800C5804_4 = 6.28318548f;
const float unbake_rodata_800C5808_4 = 4.71238899f;
const float unbake_rodata_800C580C_4 = 6.28318548f;
const float unbake_rodata_800C5810_4 = 1.57079637f;
const float unbake_rodata_800C5814_4 = 3.14159274f;
const float unbake_rodata_800C5818_4 = 2.75573188e-06f;
const float unbake_rodata_800C581C_4 = 0.000198412701f;
const float unbake_rodata_800C5820_4 = 0.00833333377f;
const float unbake_rodata_800C5824_4 = 0.166666672f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800CAA48_4 = 25.1327438f;
const float unbake_rodata_800CAA4C_4 = (-25.1327438f);
const double unbake_rodata_800CAA50_8 = 6.2831859588623047;
const float unbake_rodata_800CAA58_4 = 6.28318596f;
const float unbake_rodata_800CAA5C_4 = 6.28318596f;
const float unbake_rodata_800CAA60_4 = (-1.57079637f);
const float unbake_rodata_800CAA64_4 = 6.28318548f;
const float unbake_rodata_800CAA68_4 = 4.71238899f;
const float unbake_rodata_800CAA6C_4 = 6.28318548f;
const float unbake_rodata_800CAA70_4 = 1.57079637f;
const float unbake_rodata_800CAA74_4 = 3.14159274f;
const float unbake_rodata_800CAA78_4 = 2.75573188e-06f;
const float unbake_rodata_800CAA7C_4 = 0.000198412701f;
const float unbake_rodata_800CAA80_4 = 0.00833333377f;
const float unbake_rodata_800CAA84_4 = 0.166666672f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C5B58_4 = 25.1327438f;
const float unbake_rodata_800C5B5C_4 = (-25.1327438f);
const double unbake_rodata_800C5B60_8 = 6.2831859588623047;
const float unbake_rodata_800C5B68_4 = 6.28318596f;
const float unbake_rodata_800C5B6C_4 = 6.28318596f;
const float unbake_rodata_800C5B70_4 = (-1.57079637f);
const float unbake_rodata_800C5B74_4 = 6.28318548f;
const float unbake_rodata_800C5B78_4 = 4.71238899f;
const float unbake_rodata_800C5B7C_4 = 6.28318548f;
const float unbake_rodata_800C5B80_4 = 1.57079637f;
const float unbake_rodata_800C5B84_4 = 3.14159274f;
const float unbake_rodata_800C5B88_4 = 2.75573188e-06f;
const float unbake_rodata_800C5B8C_4 = 0.000198412701f;
const float unbake_rodata_800C5B90_4 = 0.00833333377f;
const float unbake_rodata_800C5B94_4 = 0.166666672f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C5B98_4 = 25.1327438f;
const float unbake_rodata_800C5B9C_4 = (-25.1327438f);
const double unbake_rodata_800C5BA0_8 = 6.2831859588623047;
const float unbake_rodata_800C5BA8_4 = 6.28318596f;
const float unbake_rodata_800C5BAC_4 = 6.28318596f;
const float unbake_rodata_800C5BB0_4 = (-1.57079637f);
const float unbake_rodata_800C5BB4_4 = 6.28318548f;
const float unbake_rodata_800C5BB8_4 = 4.71238899f;
const float unbake_rodata_800C5BBC_4 = 6.28318548f;
const float unbake_rodata_800C5BC0_4 = 1.57079637f;
const float unbake_rodata_800C5BC4_4 = 3.14159274f;
const float unbake_rodata_800C5BC8_4 = 2.75573188e-06f;
const float unbake_rodata_800C5BCC_4 = 0.000198412701f;
const float unbake_rodata_800C5BD0_4 = 0.00833333377f;
const float unbake_rodata_800C5BD4_4 = 0.166666672f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C58B8_4 = 25.1327438f;
const float unbake_rodata_800C58BC_4 = (-25.1327438f);
const double unbake_rodata_800C58C0_8 = 6.2831859588623047;
const float unbake_rodata_800C58C8_4 = 6.28318596f;
const float unbake_rodata_800C58CC_4 = 6.28318596f;
const float unbake_rodata_800C58D0_4 = (-1.57079637f);
const float unbake_rodata_800C58D4_4 = 6.28318548f;
const float unbake_rodata_800C58D8_4 = 4.71238899f;
const float unbake_rodata_800C58DC_4 = 6.28318548f;
const float unbake_rodata_800C58E0_4 = 1.57079637f;
const float unbake_rodata_800C58E4_4 = 3.14159274f;
const float unbake_rodata_800C58E8_4 = 2.75573188e-06f;
const float unbake_rodata_800C58EC_4 = 0.000198412701f;
const float unbake_rodata_800C58F0_4 = 0.00833333377f;
const float unbake_rodata_800C58F4_4 = 0.166666672f;
#endif
