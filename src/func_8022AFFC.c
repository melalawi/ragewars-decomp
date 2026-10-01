#include "basetypes.h"
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;
M2C_UNK func_8025CA44(s32, s32);
s32 func_8025CC8C();
void func_8022AFFC(void *arg0) {
    func_8025CA44(func_8025CC8C(), (*(s32 *)((s8 *)(arg0) + (0x11C0))));
    (*(s32 *)((s8 *)(arg0) + (0x11C0))) = 0;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C5CA0_4 = (-100000000.0f);
const float unbake_rodata_800C5CA4_4 = 100000000.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800CAF48_4 = 1.69014084f;
const float unbake_rodata_800CAF4C_4 = 1.62162161f;
#elif defined(VERSION_EU)
const double unbake_rodata_800C5910_8 = 1000.0;
#elif defined(VERSION_EU_X)
const unsigned int unbake_rodata_800C5880_40[] = {0x002976D8U, 0x00297710U, 0x00297764U, 0x00297764U, 0x002976B8U, 0x002976B8U, 0x002976B8U, 0x002976B8U, 0x00297764U, 0x00297764U, 0x00297764U, 0x00297764U, 0x00297764U, 0x00297764U, 0x00297734U, 0x0029774CU};
#elif defined(VERSION_DE)
const float unbake_rodata_800C5AF4_4 = 1.0f;
const float unbake_rodata_800C5AF8_4 = 1.0f;
#endif
