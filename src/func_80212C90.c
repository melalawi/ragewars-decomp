#include "basetypes.h"
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;
void func_80212C90(void *arg0) {
    void *temp_s0;
    temp_s0 = (*(void **)((s8 *)((*(void **)((s8 *)(arg0) + (0x1D8)))) + (0x1454)));
    (*(s32 *)((s8 *)(temp_s0) + (0x220))) = 0;
    func_80209988(temp_s0);
    (*(s32 *)((s8 *)(temp_s0) + (0x2FC))) = 0;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C40EC_4 = 9.58767268e-05f;
const float unbake_rodata_800C40F0_4 = 0.0666666701f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C9268_4 = 0.5f;
#elif defined(VERSION_EU)
const double unbake_rodata_800C4250_8 = 4294967296.0;
const float unbake_rodata_800C4258_4 = 0.00999999978f;
const float unbake_rodata_800C425C_4 = 4.53514731e-05f;
const float unbake_rodata_800C4260_4 = 2.14748365e+09f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C4228_4 = 3072.0f;
const float unbake_rodata_800C422C_4 = 0.5f;
const float unbake_rodata_800C4230_4 = 0.25f;
const float unbake_rodata_800C4234_4 = 0.5f;
const float unbake_rodata_800C4238_4 = 1.0f;
const float unbake_rodata_800C423C_4 = 1.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C4168_4 = 0.5f;
#endif
