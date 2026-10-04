#include "span_1000/code_8020570C.h"
#include "span_1000/types.h"
#include "types.h"

extern s32 D_8011BDC8;
extern void func_80285DB0_de(void *, void *, s32);




void func_802067BC_de(void *arg0) {
    s32 v = ((func_80203C40_S1 *)(arg0))->unk100;
    v &= ~0x2000;
    v &= ~0x100;
    ((func_80203C40_S1 *)(arg0))->unk100 = v;
    func_80285DB0_de(&D_8011BDC8, arg0, 1);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C28D0_4 = 5.11999989f;
const float unbake_rodata_800C28D4_4 = 11.25f;
const float unbake_rodata_800C28D8_4 = 12.0f;
const float unbake_rodata_800C28DC_4 = 21.0f;
const float unbake_rodata_800C28E0_4 = 0.0174532942f;
const float unbake_rodata_800C28E4_4 = (-0.0174532942f);
const float unbake_rodata_800C28E8_4 = 0.0174532942f;
const float unbake_rodata_800C28EC_4 = (-0.0174532942f);
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C796C_4 = 0.99000001f;
const float unbake_rodata_800C7970_4 = 0.0078125f;
const float unbake_rodata_800C7974_4 = 1.0f;
const float unbake_rodata_800C7978_4 = 0.5f;
const float unbake_rodata_800C797C_4 = 0.875f;
const float unbake_rodata_800C7980_4 = 0.400000006f;
const float unbake_rodata_800C7984_4 = 0.600000024f;
const float unbake_rodata_800C7988_4 = 0.800000012f;
const float unbake_rodata_800C798C_4 = 80.0f;
const float unbake_rodata_800C7990_4 = 0.0174532942f;
const float unbake_rodata_800C7994_4 = 80.0f;
const float unbake_rodata_800C7998_4 = (-0.716197133f);
const float unbake_rodata_800C799C_4 = 0.716197133f;
const float unbake_rodata_800C79A0_4 = 0.0174532942f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C2A44_4 = 40.9599991f;
const float unbake_rodata_800C2A48_4 = 3.0f;
const float unbake_rodata_800C2A4C_4 = 0.069813177f;
const float unbake_rodata_800C2A50_4 = 0.069813177f;
const float unbake_rodata_800C2A54_4 = 4.09600019f;
const float unbake_rodata_800C2A58_4 = 4.09600019f;
const float unbake_rodata_800C2A5C_4 = 81.9199982f;
const float unbake_rodata_800C2A60_4 = 3.0f;
#elif defined(VERSION_EU_X)
const unsigned char unbake_rodata_800C28DC_3[] = {0x25, 0x73, 0x00};
const float unbake_rodata_800C28E0_4 = 1.5f;
const float unbake_rodata_800C28E4_4 = 1.0f;
const float unbake_rodata_800C28E8_4 = 3.0f;
const float unbake_rodata_800C28EC_4 = 4.0f;
const float unbake_rodata_800C28F0_4 = 255.0f;
const float unbake_rodata_800C28F4_4 = 50.0f;
const float unbake_rodata_800C28F8_4 = 255.0f;
const float unbake_rodata_800C28FC_4 = 12.0f;
const float unbake_rodata_800C2900_4 = 0.512000024f;
const float unbake_rodata_800C2904_4 = 0.791999996f;
const float unbake_rodata_800C2908_4 = 0.136000007f;
const float unbake_rodata_800C290C_4 = 128.0f;
const float unbake_rodata_800C2910_4 = 198.0f;
const float unbake_rodata_800C2914_4 = 34.0f;
const float unbake_rodata_800C2918_4 = 253.0f;
const float unbake_rodata_800C291C_4 = 1.01199996f;
const float unbake_rodata_800C2920_4 = 0.419999987f;
const float unbake_rodata_800C2924_4 = 0.716000021f;
const float unbake_rodata_800C2928_4 = 105.0f;
const float unbake_rodata_800C292C_4 = 179.0f;
const float unbake_rodata_800C2930_4 = 0.5f;
const float unbake_rodata_800C2934_4 = 1.5f;
const float unbake_rodata_800C2938_4 = 12.0f;
const float unbake_rodata_800C293C_4 = 0.5f;
const float unbake_rodata_800C2940_4 = 2.14748365e+09f;
const float unbake_rodata_800C2944_4 = 1.5f;
const float unbake_rodata_800C2948_4 = 1.0f;
const float unbake_rodata_800C294C_4 = 0.75f;
const float unbake_rodata_800C2950_4 = 18.0f;
const float unbake_rodata_800C2954_4 = 28.0f;
const float unbake_rodata_800C2958_4 = 30.0f;
const float unbake_rodata_800C295C_4 = 24.0f;
const float unbake_rodata_800C2960_4 = 22.0f;
const float unbake_rodata_800C2964_4 = 20.0f;
const float unbake_rodata_800C2968_4 = 16.0f;
const float unbake_rodata_800C296C_4 = 1.5f;
const float unbake_rodata_800C2970_4 = 40.0f;
const float unbake_rodata_800C2974_4 = 11.0f;
const float unbake_rodata_800C2978_4 = 255.0f;
const float unbake_rodata_800C297C_4 = 200.0f;
const float unbake_rodata_800C2980_4 = 12.0f;
const float unbake_rodata_800C2984_4 = 48.0f;
const float unbake_rodata_800C2988_4 = 22.0f;
const float unbake_rodata_800C298C_4 = 11.0f;
const float unbake_rodata_800C2990_4 = 1.5f;
const float unbake_rodata_800C2994_4 = 8.0f;
const float unbake_rodata_800C2998_4 = 16.0f;
const float unbake_rodata_800C299C_4 = 1.5f;
const float unbake_rodata_800C29A0_4 = 8.0f;
const float unbake_rodata_800C29A4_4 = 16.0f;
const float unbake_rodata_800C29A8_4 = 1.5f;
const float unbake_rodata_800C29AC_4 = 11.0f;
const float unbake_rodata_800C29B0_4 = 1.5f;
const float unbake_rodata_800C29B4_4 = 8.0f;
const float unbake_rodata_800C29B8_4 = 16.0f;
const float unbake_rodata_800C29BC_4 = 1.5f;
const float unbake_rodata_800C29C0_4 = 8.0f;
const float unbake_rodata_800C29C4_4 = 16.0f;
const float unbake_rodata_800C29C8_4 = 1.5f;
const float unbake_rodata_800C29CC_4 = 1.0f;
const float unbake_rodata_800C29D0_4 = 0.5f;
const float unbake_rodata_800C29D4_4 = 16.0f;
const float unbake_rodata_800C29D8_4 = 0.75f;
const float unbake_rodata_800C29DC_4 = 1.0f;
const float unbake_rodata_800C29E0_4 = 12.0f;
const float unbake_rodata_800C29E4_4 = 4.0f;
const float unbake_rodata_800C29E8_4 = 200.0f;
const float unbake_rodata_800C29EC_4 = 12.0f;
const float unbake_rodata_800C29F0_4 = 48.0f;
const float unbake_rodata_800C29F4_4 = 20.0f;
const float unbake_rodata_800C29F8_4 = 8.0f;
const float unbake_rodata_800C29FC_4 = 16.0f;
const float unbake_rodata_800C2A00_4 = 8.0f;
const float unbake_rodata_800C2A04_4 = 16.0f;
const float unbake_rodata_800C2A08_4 = 200.0f;
const float unbake_rodata_800C2A0C_4 = 12.0f;
const float unbake_rodata_800C2A10_4 = 48.0f;
const float unbake_rodata_800C2A14_4 = 20.0f;
const float unbake_rodata_800C2A18_4 = 8.0f;
const float unbake_rodata_800C2A1C_4 = 16.0f;
const float unbake_rodata_800C2A20_4 = 1.5f;
const float unbake_rodata_800C2A24_4 = 8.0f;
const float unbake_rodata_800C2A28_4 = 16.0f;
const float unbake_rodata_800C2A2C_4 = 1.5f;
const float unbake_rodata_800C2A30_4 = 5.0f;
const float unbake_rodata_800C2A34_4 = 255.0f;
const float unbake_rodata_800C2A38_4 = 0.5f;
const float unbake_rodata_800C2A3C_4 = 31.0f;
const float unbake_rodata_800C2A40_4 = 32.0f;
const float unbake_rodata_800C2A44_4 = 1.70000005f;
const float unbake_rodata_800C2A48_4 = 255.0f;
const float unbake_rodata_800C2A4C_4 = 5.0f;
const float unbake_rodata_800C2A50_4 = 255.0f;
const float unbake_rodata_800C2A54_4 = 255.0f;
const float unbake_rodata_800C2A58_4 = 70.0f;
const float unbake_rodata_800C2A5C_4 = 140.0f;
const float unbake_rodata_800C2A60_4 = 1.0f;
const float unbake_rodata_800C2A64_4 = 0.25f;
const float unbake_rodata_800C2A68_4 = 10.0f;
const float unbake_rodata_800C2A6C_4 = 140.0f;
const float unbake_rodata_800C2A70_4 = 0.25f;
const float unbake_rodata_800C2A74_4 = 10.0f;
const float unbake_rodata_800C2A78_4 = 140.0f;
const float unbake_rodata_800C2A7C_4 = 0.5f;
const float unbake_rodata_800C2A80_4 = 64.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C287C_4 = 0.99000001f;
const float unbake_rodata_800C2880_4 = 0.0078125f;
const float unbake_rodata_800C2884_4 = 1.0f;
const float unbake_rodata_800C2888_4 = 0.5f;
const float unbake_rodata_800C288C_4 = 0.875f;
const float unbake_rodata_800C2890_4 = 0.400000006f;
const float unbake_rodata_800C2894_4 = 0.600000024f;
const float unbake_rodata_800C2898_4 = 0.800000012f;
const float unbake_rodata_800C289C_4 = 80.0f;
const float unbake_rodata_800C28A0_4 = 0.0174532942f;
const float unbake_rodata_800C28A4_4 = 80.0f;
const float unbake_rodata_800C28A8_4 = (-0.716197133f);
const float unbake_rodata_800C28AC_4 = 0.716197133f;
const float unbake_rodata_800C28B0_4 = 0.0174532942f;
#endif
