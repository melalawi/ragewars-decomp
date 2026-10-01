#include "basetypes.h"

extern int func_80245788(void);
extern void func_802472E0(void *arg0);
extern void func_80285D80(void *, void *, s32);
extern s32 D_8011FE88;

typedef struct func_8020682C_S1 func_8020682C_S1;
struct func_8020682C_S1 {
    char pad0[0x100];
    s32 unk100;
};

void func_8020682C(void *arg0, s32 *arg1) {
    ((func_8020682C_S1 *)(arg0))->unk100 |= 0x2100;
    if (func_80245788() != 0) {
        *arg1 |= 0x200;
    }
    func_802472E0(arg0);
    func_80285D80(&D_8011FE88, arg0, 0);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C2930_4 = 57.2957764f;
const float unbake_rodata_800C2934_4 = (-40.0f);
const float unbake_rodata_800C2938_4 = 10.2399998f;
const float unbake_rodata_800C293C_4 = 0.069813177f;
const float unbake_rodata_800C2940_4 = 0.0436332375f;
const float unbake_rodata_800C2944_4 = 0.087266475f;
const float unbake_rodata_800C2948_4 = 0.104719765f;
const float unbake_rodata_800C294C_4 = 11.25f;
const float unbake_rodata_800C2950_4 = 1.02400005f;
const float unbake_rodata_800C2954_4 = (-1.02400005f);
const float unbake_rodata_800C2958_4 = 5.11999989f;
const float unbake_rodata_800C295C_4 = 11.25f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C79D0_4 = 0.5f;
const float unbake_rodata_800C79D4_4 = 0.5f;
const float unbake_rodata_800C79D8_4 = 0.75f;
const float unbake_rodata_800C79DC_4 = 0.75f;
const float unbake_rodata_800C79E0_4 = 0.5f;
const float unbake_rodata_800C79E4_4 = 0.75f;
const float unbake_rodata_800C79E8_4 = 0.75f;
const float unbake_rodata_800C79EC_4 = 0.75f;
const float unbake_rodata_800C79F0_4 = 4.0f;
const float unbake_rodata_800C79F4_4 = 1.79999995f;
const float unbake_rodata_800C79F8_4 = 16.0f;
const float unbake_rodata_800C79FC_4 = 0.0174532942f;
const float unbake_rodata_800C7A00_4 = 7.5f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C2B00_4 = 3.14159274f;
const float unbake_rodata_800C2B04_4 = 20.0f;
const float unbake_rodata_800C2B08_4 = 30.0f;
const float unbake_rodata_800C2B0C_4 = 1.0f;
const float unbake_rodata_800C2B10_4 = 50.0f;
const float unbake_rodata_800C2B14_4 = 1.0f;
const float unbake_rodata_800C2B18_4 = 30.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C2AB4_4 = 0.25f;
const float unbake_rodata_800C2AB8_4 = 1.33333337f;
const float unbake_rodata_800C2ABC_4 = 0.00100000005f;
const float unbake_rodata_800C2AC0_4 = 1024.0f;
const float unbake_rodata_800C2AC4_4 = 0.0009765625f;
const float unbake_rodata_800C2AC8_4 = 1.0f;
const float unbake_rodata_800C2ACC_4 = 0.0210000016f;
const float unbake_rodata_800C2AD0_4 = 0.000100000005f;
const float unbake_rodata_800C2AD4_4 = (-51.1999969f);
const float unbake_rodata_800C2AD8_4 = 0.785398245f;
const float unbake_rodata_800C2ADC_4 = 0.699999988f;
const float unbake_rodata_800C2AE0_4 = 0.00999999978f;
const float unbake_rodata_800C2AE4_4 = 40.9599991f;
const float unbake_rodata_800C2AE8_4 = 40.9599991f;
const float unbake_rodata_800C2AEC_4 = (-10.2399998f);
const float unbake_rodata_800C2AF0_4 = 10.2399998f;
const float unbake_rodata_800C2AF4_4 = 66.5599976f;
const float unbake_rodata_800C2AF8_4 = 0.042857144f;
const float unbake_rodata_800C2AFC_4 = 5120.0f;
const float unbake_rodata_800C2B00_4 = 100.0f;
const float unbake_rodata_800C2B04_4 = 0.400000006f;
const float unbake_rodata_800C2B08_4 = 1.0f;
const float unbake_rodata_800C2B0C_4 = 75.0f;
const float unbake_rodata_800C2B10_4 = 15.0f;
const float unbake_rodata_800C2B14_4 = 30.0f;
const float unbake_rodata_800C2B18_4 = 20.0f;
const float unbake_rodata_800C2B1C_4 = 75.0f;
const float unbake_rodata_800C2B20_4 = 150.0f;
const float unbake_rodata_800C2B24_4 = 600.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C28E0_4 = 0.5f;
const float unbake_rodata_800C28E4_4 = 0.5f;
const float unbake_rodata_800C28E8_4 = 0.75f;
const float unbake_rodata_800C28EC_4 = 0.75f;
const float unbake_rodata_800C28F0_4 = 0.5f;
const float unbake_rodata_800C28F4_4 = 0.75f;
const float unbake_rodata_800C28F8_4 = 0.75f;
const float unbake_rodata_800C28FC_4 = 0.75f;
const float unbake_rodata_800C2900_4 = 4.0f;
const float unbake_rodata_800C2904_4 = 1.79999995f;
const float unbake_rodata_800C2908_4 = 16.0f;
const float unbake_rodata_800C290C_4 = 0.0174532942f;
const float unbake_rodata_800C2910_4 = 7.5f;
#endif
