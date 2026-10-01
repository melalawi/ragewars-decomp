#include "basetypes.h"
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;
void func_8022B030(void *arg0, s32 arg1) {
    (*(s32 *)((s8 *)(arg0) + (0x16D0))) = arg1;
    func_802227D0(arg0, arg0, 0x10);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C5CE8_4 = 1.69014084f;
const float unbake_rodata_800C5CEC_4 = 1.62162161f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800CAF54_4 = 3.14159274f;
const float unbake_rodata_800CAF58_4 = 0.5f;
const float unbake_rodata_800CAF5C_4 = 1.0f;
const float unbake_rodata_800CAF60_4 = 2.14748365e+09f;
#elif defined(VERSION_EU)
const double unbake_rodata_800C5920_8 = 1000.0;
#elif defined(VERSION_EU_X)
const unsigned int unbake_rodata_800C58C0_40[] = {0x00297AA0U, 0x00297AD8U, 0x00297B2CU, 0x00297B2CU, 0x00297A80U, 0x00297A80U, 0x00297A80U, 0x00297A80U, 0x00297B2CU, 0x00297B2CU, 0x00297B2CU, 0x00297B2CU, 0x00297B2CU, 0x00297B2CU, 0x00297AFCU, 0x00297B14U};
#elif defined(VERSION_DE)
const float unbake_rodata_800C5B04_4 = 1.0f;
const float unbake_rodata_800C5B08_4 = 1.0f;
#endif
