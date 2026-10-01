#include "basetypes.h"

extern void func_802227D0(void *, void *, s32);

typedef struct func_8022B974_S1 func_8022B974_S1;
struct func_8022B974_S1 {
    char pad0[0x1210];
    s32 unk1210;
    char pad1210[0x1214 - 0x1210 - sizeof(s32)];
    s32 unk1214;
};

void func_8022B974(void *arg0) {
    if (((func_8022B974_S1 *)(arg0))->unk1210 == 0) {
        func_802227D0(arg0, arg0, 0x27);
        ((func_8022B974_S1 *)(arg0))->unk1210 = 1;
        ((func_8022B974_S1 *)(arg0))->unk1214 = 0;
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned int unbake_rodata_800C5F98_1C[] = {0x002A8D04U, 0x002A8D14U, 0x002A8D44U, 0x002A8D24U, 0x002A8D34U, 0x002A8D34U, 0x002A8D44U};
#elif defined(VERSION_US_REV1)
const unsigned int unbake_rodata_800CB218_1C[] = {0x002A9DC4U, 0x002A9DD4U, 0x002A9E04U, 0x002A9DE4U, 0x002A9DF4U, 0x002A9DF4U, 0x002A9E04U};
#elif defined(VERSION_EU)
const float unbake_rodata_800C6074_4 = 3.14159274f;
const float unbake_rodata_800C6078_4 = 0.5f;
const float unbake_rodata_800C607C_4 = 1.0f;
const float unbake_rodata_800C6080_4 = 2.14748365e+09f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C6050_4 = (-100000000.0f);
const float unbake_rodata_800C6054_4 = 100000000.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C5F94_4 = 0.00100000005f;
const float unbake_rodata_800C5F98_4 = 0.00999999978f;
const float unbake_rodata_800C5F9C_4 = 0.100000001f;
const float unbake_rodata_800C5FA0_4 = 13.0f;
const float unbake_rodata_800C5FA4_4 = 13.0f;
const float unbake_rodata_800C5FA8_4 = 1.0f;
const float unbake_rodata_800C5FAC_4 = 0.699999988f;
#endif
