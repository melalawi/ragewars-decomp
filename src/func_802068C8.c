#include "basetypes.h"

extern void func_80402FB4(s32, s32);
extern void func_80285D80(void *, void *, s32);
extern s32 D_8011FE88;

typedef struct func_802068C8_S1 func_802068C8_S1;
struct func_802068C8_S1 {
    char pad0[0x100];
    s32 unk100;
};

void func_802068C8(void *arg0, s32 arg1, s32 arg2) {
    func_80402FB4(arg0, arg2);
    ((func_802068C8_S1 *)(arg0))->unk100 |= 0x2100;
    func_80285D80(&D_8011FE88, arg0, 0);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C2988_4 = 2.0480001f;
const float unbake_rodata_800C298C_4 = 0.100000001f;
const float unbake_rodata_800C2990_4 = 0.0625f;
const float unbake_rodata_800C2994_4 = 1.0f;
const float unbake_rodata_800C2998_4 = (-1.0f);
const float unbake_rodata_800C299C_4 = 0.785398245f;
const float unbake_rodata_800C29A0_4 = 100.0f;
const float unbake_rodata_800C29A4_4 = (-90.0f);
const float unbake_rodata_800C29A8_4 = 90.0f;
const float unbake_rodata_800C29AC_4 = 0.0174532942f;
const float unbake_rodata_800C29B0_4 = 11.25f;
const float unbake_rodata_800C29B4_4 = 1.57079649f;
const float unbake_rodata_800C29B8_4 = 3.14159298f;
const float unbake_rodata_800C29BC_4 = (-1.57079649f);
const float unbake_rodata_800C29C0_4 = 3.14159298f;
const float unbake_rodata_800C29C4_4 = 6.28318548f;
const float unbake_rodata_800C29C8_4 = 384.0f;
const float unbake_rodata_800C29CC_4 = 1.57079649f;
const float unbake_rodata_800C29D0_4 = 3.14159298f;
const float unbake_rodata_800C29D4_4 = (-1.57079649f);
const float unbake_rodata_800C29D8_4 = 3.14159298f;
const float unbake_rodata_800C29DC_4 = 0.069813177f;
const float unbake_rodata_800C29E0_4 = 6.14400005f;
const float unbake_rodata_800C29E4_4 = 20.4799995f;
const float unbake_rodata_800C29E8_4 = 20.4799995f;
const float unbake_rodata_800C29EC_4 = 4.09600019f;
const float unbake_rodata_800C29F0_4 = 6.14400005f;
const float unbake_rodata_800C29F4_4 = 20.4799995f;
const float unbake_rodata_800C29F8_4 = 20.4799995f;
const float unbake_rodata_800C29FC_4 = 4.09600019f;
const float unbake_rodata_800C2A00_4 = 8.4375f;
const float unbake_rodata_800C2A04_4 = 0.100000001f;
const float unbake_rodata_800C2A08_4 = 1.57079637f;
const float unbake_rodata_800C2A0C_4 = 1.5f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C7A90_4 = 5.11999989f;
const float unbake_rodata_800C7A94_4 = 11.25f;
const float unbake_rodata_800C7A98_4 = 12.0f;
const float unbake_rodata_800C7A9C_4 = 21.0f;
const float unbake_rodata_800C7AA0_4 = 0.0174532942f;
const float unbake_rodata_800C7AA4_4 = (-0.0174532942f);
const float unbake_rodata_800C7AA8_4 = 0.0174532942f;
const float unbake_rodata_800C7AAC_4 = (-0.0174532942f);
#elif defined(VERSION_EU)
const float unbake_rodata_800C2B54_4 = 0.5f;
const float unbake_rodata_800C2B58_4 = 3.14159274f;
const float unbake_rodata_800C2B5C_4 = 0.5f;
const float unbake_rodata_800C2B60_4 = 1.57079637f;
const float unbake_rodata_800C2B64_4 = 0.5f;
const float unbake_rodata_800C2B68_4 = 3.14159274f;
const float unbake_rodata_800C2B6C_4 = 0.75f;
const float unbake_rodata_800C2B70_4 = 0.75f;
const float unbake_rodata_800C2B74_4 = 0.75f;
const float unbake_rodata_800C2B78_4 = 1.57079637f;
const float unbake_rodata_800C2B7C_4 = 7.5f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C2B5C_4 = 0.99000001f;
const float unbake_rodata_800C2B60_4 = 0.0078125f;
const float unbake_rodata_800C2B64_4 = 1.0f;
const float unbake_rodata_800C2B68_4 = 0.5f;
const float unbake_rodata_800C2B6C_4 = 0.875f;
const float unbake_rodata_800C2B70_4 = 0.400000006f;
const float unbake_rodata_800C2B74_4 = 0.600000024f;
const float unbake_rodata_800C2B78_4 = 0.800000012f;
const float unbake_rodata_800C2B7C_4 = 80.0f;
const float unbake_rodata_800C2B80_4 = 0.0174532942f;
const float unbake_rodata_800C2B84_4 = 80.0f;
const float unbake_rodata_800C2B88_4 = (-0.716197133f);
const float unbake_rodata_800C2B8C_4 = 0.716197133f;
const float unbake_rodata_800C2B90_4 = 0.0174532942f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C29A0_4 = 5.11999989f;
const float unbake_rodata_800C29A4_4 = 11.25f;
const float unbake_rodata_800C29A8_4 = 12.0f;
const float unbake_rodata_800C29AC_4 = 21.0f;
const float unbake_rodata_800C29B0_4 = 0.0174532942f;
const float unbake_rodata_800C29B4_4 = (-0.0174532942f);
const float unbake_rodata_800C29B8_4 = 0.0174532942f;
const float unbake_rodata_800C29BC_4 = (-0.0174532942f);
#endif
