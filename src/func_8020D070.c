#include "basetypes.h"

extern void func_8020D014(void *arg0);
extern void func_8020D1FC(s32);
extern void func_8020D220(void *, s32);
extern void func_8020D0CC(void *arg0, s32 arg1);

void func_8020D070(void *arg0, s32 arg1, s32 arg2) {
    func_8020D014(arg0);
    func_8020D1FC((s32) arg0);
    func_8020D220(arg0, arg2);
    func_8020D0CC(arg0, arg1);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C3610_4 = (-1.0f);
const float unbake_rodata_800C3614_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C8710_4 = 0.0666666701f;
const float unbake_rodata_800C8714_4 = 15.0f;
const float unbake_rodata_800C8718_4 = 1.0f;
const float unbake_rodata_800C871C_4 = 0.5f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C35DC_4 = 1.0f;
const float unbake_rodata_800C35E0_4 = 2.14748365e+09f;
const float unbake_rodata_800C35E4_4 = 2.0f;
const float unbake_rodata_800C35E8_4 = 2.14748365e+09f;
const float unbake_rodata_800C35EC_4 = 2.14748365e+09f;
const float unbake_rodata_800C35F0_4 = 2.14748365e+09f;
const float unbake_rodata_800C35F4_4 = 1.0f;
const float unbake_rodata_800C35F8_4 = 2.14748365e+09f;
const float unbake_rodata_800C35FC_4 = 1.0f;
const float unbake_rodata_800C3600_4 = 2.14748365e+09f;
const float unbake_rodata_800C3604_4 = 2.14748365e+09f;
const float unbake_rodata_800C3608_4 = 2.0f;
const float unbake_rodata_800C360C_4 = 2.14748365e+09f;
const float unbake_rodata_800C3610_4 = 2.0f;
const float unbake_rodata_800C3614_4 = 2.14748365e+09f;
const float unbake_rodata_800C3618_4 = 1.0f;
const float unbake_rodata_800C361C_4 = 2.14748365e+09f;
const float unbake_rodata_800C3620_4 = 2.14748365e+09f;
const float unbake_rodata_800C3624_4 = 2.14748365e+09f;
const float unbake_rodata_800C3628_4 = 1.0f;
const float unbake_rodata_800C362C_4 = 2.14748365e+09f;
const float unbake_rodata_800C3630_4 = 1.0f;
const float unbake_rodata_800C3634_4 = 2.14748365e+09f;
const float unbake_rodata_800C3638_4 = 2.0f;
const float unbake_rodata_800C363C_4 = 2.14748365e+09f;
const float unbake_rodata_800C3640_4 = 2.14748365e+09f;
const float unbake_rodata_800C3644_4 = 1.0f;
const float unbake_rodata_800C3648_4 = 2.14748365e+09f;
const float unbake_rodata_800C364C_4 = 2.14748365e+09f;
const float unbake_rodata_800C3650_4 = 2.14748365e+09f;
const float unbake_rodata_800C3654_4 = 2.14748365e+09f;
const float unbake_rodata_800C3658_4 = 1.0f;
const float unbake_rodata_800C365C_4 = 2.14748365e+09f;
const float unbake_rodata_800C3660_4 = 1.0f;
const float unbake_rodata_800C3664_4 = 2.14748365e+09f;
const float unbake_rodata_800C3668_4 = 2.14748365e+09f;
const float unbake_rodata_800C366C_4 = 1.0f;
const float unbake_rodata_800C3670_4 = 2.14748365e+09f;
const float unbake_rodata_800C3674_4 = 2.14748365e+09f;
const float unbake_rodata_800C3678_4 = 1.0f;
const float unbake_rodata_800C367C_4 = 2.14748365e+09f;
const float unbake_rodata_800C3680_4 = 2.14748365e+09f;
const float unbake_rodata_800C3684_4 = 2.14748365e+09f;
const float unbake_rodata_800C3688_4 = 2.14748365e+09f;
const float unbake_rodata_800C368C_4 = 1.0f;
const float unbake_rodata_800C3690_4 = 2.14748365e+09f;
const float unbake_rodata_800C3694_4 = 1.0f;
const float unbake_rodata_800C3698_4 = 2.14748365e+09f;
const float unbake_rodata_800C369C_4 = 2.14748365e+09f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C3614_4 = 30.0f;
const float unbake_rodata_800C3618_4 = 4.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C3620_4 = 0.0666666701f;
const float unbake_rodata_800C3624_4 = 15.0f;
const float unbake_rodata_800C3628_4 = 1.0f;
const float unbake_rodata_800C362C_4 = 0.5f;
#endif
