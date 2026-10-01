#include "basetypes.h"
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;
void func_8022B10C(void *arg0, s32 arg1) {
    u16 temp_v0;
    u16 var_v1;
    temp_v0 = (*(u16 *)((s8 *)(arg0) + (0x16D8))) + arg1;
    var_v1 = temp_v0;
    (*(u16 *)((s8 *)(arg0) + (0x16D8))) = temp_v0;
    if ((u32) (var_v1 & 0xFFFF) >= 0x65U) {
        var_v1 = 0x64;
    }
    (*(u16 *)((s8 *)(arg0) + (0x16D8))) = var_v1;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C5D20_4 = 0.00999999978f;
const float unbake_rodata_800C5D24_4 = 0.292571425f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800CAF88_4 = 3.125f;
const float unbake_rodata_800CAF8C_4 = 32.0f;
const float unbake_rodata_800CAF90_4 = 1.0f;
const float unbake_rodata_800CAF94_4 = 1.0f;
#elif defined(VERSION_EU)
const unsigned char unbake_rodata_800C5978_8[] = {0xFF, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const double unbake_rodata_800C5980_8 = 0.0;
const double unbake_rodata_800C5988_8 = 0.70710676908493042;
const double unbake_rodata_800C5990_8 = 0.5;
const double unbake_rodata_800C5998_8 = 0.5;
const double unbake_rodata_800C59A0_8 = (-0.78956115245819092);
const double unbake_rodata_800C59A8_8 = 16.383943557739258;
const double unbake_rodata_800C59B0_8 = 35.667976379394531;
const double unbake_rodata_800C59B8_8 = 312.0322265625;
const double unbake_rodata_800C59C0_8 = 64.124946594238281;
const double unbake_rodata_800C59C8_8 = 769.49932861328125;
const double unbake_rodata_800C59D0_8 = (-0.00021219444170128557);
const double unbake_rodata_800C59D8_8 = 0.693359375;
#elif defined(VERSION_EU_X)
const double unbake_rodata_800C5960_8 = 1000.0;
#elif defined(VERSION_DE)
const float unbake_rodata_800C5D70_4 = (-100000000.0f);
const float unbake_rodata_800C5D74_4 = 100000000.0f;
#endif
