#include "basetypes.h"
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;
M2C_UNK func_8020EA10();
extern s32 D_80146918;
s32 func_8020EAB4(void) {
    if (D_80146918 != 0) {
        func_8020EA10();
    }
    return 1;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C39E8_4 = 0.100000001f;
const float unbake_rodata_800C39EC_4 = 0.5f;
const float unbake_rodata_800C39F0_4 = 15.3599997f;
const float unbake_rodata_800C39F4_4 = 0.699999988f;
const float unbake_rodata_800C39F8_4 = 1.22070312f;
const float unbake_rodata_800C39FC_4 = 200.0f;
const float unbake_rodata_800C3A00_4 = 255.0f;
const float unbake_rodata_800C3A04_4 = 2.14748365e+09f;
const float unbake_rodata_800C3A08_4 = 0.5f;
const float unbake_rodata_800C3A0C_4 = 2.14748365e+09f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C8A90_4 = 1.0f;
const float unbake_rodata_800C8A94_4 = 1.5f;
const float unbake_rodata_800C8A98_4 = 65536.0f;
const float unbake_rodata_800C8A9C_4 = 3.05185094e-05f;
const float unbake_rodata_800C8AA0_4 = 2.0f;
const float unbake_rodata_800C8AA4_4 = 2.14748365e+09f;
const float unbake_rodata_800C8AA8_4 = 1.0f;
const float unbake_rodata_800C8AAC_4 = 0.5f;
const float unbake_rodata_800C8AB0_4 = 0.300000012f;
const float unbake_rodata_800C8AB4_4 = (-2.0f);
const float unbake_rodata_800C8AB8_4 = 3.0f;
const float unbake_rodata_800C8ABC_4 = 0.970000029f;
const float unbake_rodata_800C8AC0_4 = 0.0299999993f;
const float unbake_rodata_800C8AC4_4 = 1.52587891e-05f;
const float unbake_rodata_800C8AC8_4 = 0.5f;
const float unbake_rodata_800C8ACC_4 = 65536.0f;
const float unbake_rodata_800C8AD0_4 = 0.5f;
#elif defined(VERSION_EU)
const unsigned char unbake_rodata_800C39B8_11[] = {0x61, 0x6E, 0x69, 0x6D, 0x20, 0x6F, 0x62, 0x6A, 0x65, 0x63, 0x74, 0x20, 0x69, 0x6E, 0x66, 0x6F, 0x00};
const float unbake_rodata_800C39CC_4 = 1.5f;
const float unbake_rodata_800C39D0_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C39D0_4 = (-1.0f);
const float unbake_rodata_800C39D4_4 = 1.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C3984_4 = 1.0f;
const float unbake_rodata_800C3988_4 = 0.5f;
const float unbake_rodata_800C398C_4 = 0.5f;
const float unbake_rodata_800C3990_4 = 0.5f;
const float unbake_rodata_800C3994_4 = 0.5f;
const float unbake_rodata_800C3998_4 = 0.699999988f;
const float unbake_rodata_800C399C_4 = (-1.0f);
#endif
