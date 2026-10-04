#include "span_1000/code_80206DD4.h"
#include "span_1000/types.h"
#include "types.h"

extern s32 func_80214178_de(void *, void *, s32);
extern s32 func_80285F58_de(void *, void *);
extern s32 D_8011BDC8;






void func_80207890_de(void *arg0, void *arg1) {
    ((func_80207890_S1 *)(arg1))->unk37 = 0;
    func_80214178_de(arg0, arg1, 0);
    if (((func_80207890_S1 *)(arg1))->unk94 == 1) {
        ((func_80207890_S1 *)(arg1))->unk98 = ((func_80207890_S1 *)(arg1))->unk96;
        func_80214178_de(arg0, arg1, 4);
    }
    if (func_80285F58_de(&D_8011BDC8, arg0) == 0) {
        ((func_80203C40_S1 *)(arg0))->unk100 &= ~0x100;
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C2BF4_4 = 0.00390625f;
const float unbake_rodata_800C2BF8_4 = 0.25f;
const float unbake_rodata_800C2BFC_4 = 256.0f;
const float unbake_rodata_800C2C00_4 = 0.00390625f;
const float unbake_rodata_800C2C04_4 = 0.600000024f;
const float unbake_rodata_800C2C08_4 = 0.00390625f;
const float unbake_rodata_800C2C0C_4 = 0.800000012f;
const float unbake_rodata_800C2C10_4 = 256.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C7C60_4 = 0.5f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C2D80_4 = 6.28318548f;
const float unbake_rodata_800C2D84_4 = 6.28318548f;
const float unbake_rodata_800C2D88_4 = 0.200000003f;
const float unbake_rodata_800C2D8C_4 = 0.200000003f;
const float unbake_rodata_800C2D90_4 = 4.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C2D38_4 = 2.0480001f;
const float unbake_rodata_800C2D3C_4 = 0.100000001f;
const float unbake_rodata_800C2D40_4 = 0.0625f;
const float unbake_rodata_800C2D44_4 = 1.0f;
const float unbake_rodata_800C2D48_4 = (-1.0f);
const float unbake_rodata_800C2D4C_4 = 0.785398245f;
const float unbake_rodata_800C2D50_4 = 100.0f;
const float unbake_rodata_800C2D54_4 = (-90.0f);
const float unbake_rodata_800C2D58_4 = 90.0f;
const float unbake_rodata_800C2D5C_4 = 0.0174532942f;
const float unbake_rodata_800C2D60_4 = 11.25f;
const float unbake_rodata_800C2D64_4 = 1.57079649f;
const float unbake_rodata_800C2D68_4 = 3.14159298f;
const float unbake_rodata_800C2D6C_4 = (-1.57079649f);
const float unbake_rodata_800C2D70_4 = 3.14159298f;
const float unbake_rodata_800C2D74_4 = 6.28318548f;
const float unbake_rodata_800C2D78_4 = 384.0f;
const float unbake_rodata_800C2D7C_4 = 1.57079649f;
const float unbake_rodata_800C2D80_4 = 3.14159298f;
const float unbake_rodata_800C2D84_4 = (-1.57079649f);
const float unbake_rodata_800C2D88_4 = 3.14159298f;
const float unbake_rodata_800C2D8C_4 = 0.069813177f;
const float unbake_rodata_800C2D90_4 = 6.14400005f;
const float unbake_rodata_800C2D94_4 = 20.4799995f;
const float unbake_rodata_800C2D98_4 = 20.4799995f;
const float unbake_rodata_800C2D9C_4 = 4.09600019f;
const float unbake_rodata_800C2DA0_4 = 6.14400005f;
const float unbake_rodata_800C2DA4_4 = 20.4799995f;
const float unbake_rodata_800C2DA8_4 = 20.4799995f;
const float unbake_rodata_800C2DAC_4 = 4.09600019f;
const float unbake_rodata_800C2DB0_4 = 8.4375f;
const float unbake_rodata_800C2DB4_4 = 0.100000001f;
const float unbake_rodata_800C2DB8_4 = 1.57079637f;
const float unbake_rodata_800C2DBC_4 = 1.5f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C2B70_4 = 0.5f;
#endif
