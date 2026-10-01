#include "basetypes.h"
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;
M2C_UNK func_8025CA44(s32, s32);
s32 func_8025CC8C();
void func_8022AF30(void *arg0) {
    func_8025CA44(func_8025CC8C(), (*(s32 *)((s8 *)(arg0) + (0x11BC))));
    (*(s32 *)((s8 *)(arg0) + (0x11BC))) = 0;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const double unbake_rodata_800C5BA0_8 = 6.2831859588623047;
const float unbake_rodata_800C5BA8_4 = 6.28318596f;
const float unbake_rodata_800C5BAC_4 = 6.28318596f;
const float unbake_rodata_800C5BB0_4 = 3.14159274f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800CAF00_4 = (-100000000.0f);
const float unbake_rodata_800CAF04_4 = 100000000.0f;
#elif defined(VERSION_EU)
const unsigned int unbake_rodata_800C5880_40[] = {0x00297A70U, 0x00297AA8U, 0x00297AFCU, 0x00297AFCU, 0x00297A50U, 0x00297A50U, 0x00297A50U, 0x00297A50U, 0x00297AFCU, 0x00297AFCU, 0x00297AFCU, 0x00297AFCU, 0x00297AFCU, 0x00297AFCU, 0x00297ACCU, 0x00297AE4U};
#elif defined(VERSION_EU_X)
const unsigned int unbake_rodata_800C57D8_18[] = {0x0029538CU, 0x002955F0U, 0x00295B34U, 0x00295840U, 0x00295D88U, 0x00295EA0U};
#elif defined(VERSION_DE)
const float unbake_rodata_800C5A90_4 = 1.0f;
const float unbake_rodata_800C5A94_4 = 1.0f;
const float unbake_rodata_800C5A98_4 = 1.0f;
const float unbake_rodata_800C5A9C_4 = 1.0f;
const float unbake_rodata_800C5AA0_4 = 1.0f;
#endif
