#include "basetypes.h"
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;
M2C_UNK func_80262CA8();
void func_80203C08(void *arg0, void *arg1) {
    if (((*(s8 *)((s8 *)(arg1) + (0xCB))) != 0) && ((*(s32 *)((s8 *)(arg0) + (0x100))) & 0x80000)) {
        func_80262CA8();
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C1A40_4 = 1.0f;
const float unbake_rodata_800C1A44_4 = 1.10000002f;
const float unbake_rodata_800C1A48_4 = 0.25f;
const float unbake_rodata_800C1A4C_4 = 1.20000005f;
const float unbake_rodata_800C1A50_4 = 1.29999995f;
const float unbake_rodata_800C1A54_4 = 0.0666666701f;
#elif defined(VERSION_US_REV1)
const unsigned int unbake_rodata_800C6BE0_14[] = {0x00206A74U, 0x00206BDCU, 0x00206C9CU, 0x00206B3CU, 0x00206D14U};
const float unbake_rodata_800C6BF4_4 = (-0.512000024f);
const float unbake_rodata_800C6BF8_4 = 0.512000024f;
const float unbake_rodata_800C6BFC_4 = 45.0f;
#elif defined(VERSION_EU)
const double unbake_rodata_800C1D78_8 = 4294967296.0;
#elif defined(VERSION_EU_X)
const double unbake_rodata_800C1DB8_8 = 4294967296.0;
#elif defined(VERSION_DE)
const double unbake_rodata_800C1AD8_8 = 4294967296.0;
#endif
