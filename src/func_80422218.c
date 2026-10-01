#include "basetypes.h"

/* Calls func_80245A10 with 1, func_802459F0 with the pooled constant D_800E1648 and
   func_80245A4C with 0x43, 0x4F, 0x12 and 0x80. */
extern f32 D_800E1648;
extern void func_80245A10(s32);
extern void func_802459F0(f32);
extern void func_80245A4C(s32, s32, s32, s32);

void func_80422218(void) {
    func_80245A10(1);
    func_802459F0(D_800E1648);
    func_80245A4C(0x43, 0x4F, 0x12, 0x80);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800DC2C8_4 = 45.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800E1648_4 = 45.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800EDC98_4 = 45.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800E8E58_4 = 45.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800DD618_4 = 45.0f;
#endif
