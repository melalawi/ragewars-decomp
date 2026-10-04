#include "span_1000/code_8022A8E0.h"
#include "types.h"

extern void *D_800CB2EC[];








s16 func_8022AB20_de(void *arg0, s32 arg1) {
    s16 *var_v0;
    s32 temp_v1;
    void *temp_v0;

    if ((arg1 == 1) && (((func_8022AB10_S1 *)(arg0))->unk604 != 0)) {
        return -1;
    }
    temp_v0 = D_800CB2EC[arg1];
    if (((func_8022AB10_S1 *)(arg0))->unk594 == 1) {
        var_v0 = ((func_8022AAC4_S2 *)(temp_v0))->unk20;
    } else {
        var_v0 = ((func_8022AAC4_S2 *)(temp_v0))->unk24;
    }
    if (var_v0 != 0) {
        temp_v1 = *var_v0;
    } else {
        temp_v1 = -1;
    }
    if (temp_v1 != -1) {
        return ((Actor_func_8022AB20_de *)arg0)->table[temp_v1];
    }
    return -1;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C5940_4 = (-9.99999997e-07f);
const float unbake_rodata_800C5944_4 = 9.99999997e-07f;
const float unbake_rodata_800C5948_4 = (-9.99999997e-07f);
const float unbake_rodata_800C594C_4 = 9.99999997e-07f;
const float unbake_rodata_800C5950_4 = 1.57079637f;
const float unbake_rodata_800C5954_4 = (-1.57079637f);
const float unbake_rodata_800C5958_4 = 3.14159274f;
const float unbake_rodata_800C595C_4 = 9.99999997e-07f;
const float unbake_rodata_800C5960_4 = 1.0f;
const float unbake_rodata_800C5964_4 = (-0.00405405788f);
const float unbake_rodata_800C5968_4 = 0.0218612291f;
const float unbake_rodata_800C596C_4 = 0.055909887f;
const float unbake_rodata_800C5970_4 = 0.0964200422f;
const float unbake_rodata_800C5974_4 = 0.139085338f;
const float unbake_rodata_800C5978_4 = 0.199465364f;
const float unbake_rodata_800C597C_4 = 0.333298564f;
const float unbake_rodata_800C5980_4 = 0.999999344f;
const float unbake_rodata_800C5984_4 = 0.785398185f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800CAC20_4 = 1.0f;
const float unbake_rodata_800CAC24_4 = 1.0f;
const float unbake_rodata_800CAC28_4 = 1.0f;
const float unbake_rodata_800CAC2C_4 = 1.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C5774_4 = 0.75f;
const float unbake_rodata_800C5778_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C575C_4 = 9.99999997e-07f;
const float unbake_rodata_800C5760_4 = 15.0f;
#elif defined(VERSION_DE)
const unsigned char unbake_rodata_800C56D8_8[] = {0xFF, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const double unbake_rodata_800C56E0_8 = 0.0;
const double unbake_rodata_800C56E8_8 = 0.70710676908493042;
const double unbake_rodata_800C56F0_8 = 0.5;
const double unbake_rodata_800C56F8_8 = 0.5;
const double unbake_rodata_800C5700_8 = (-0.78956115245819092);
const double unbake_rodata_800C5708_8 = 16.383943557739258;
const double unbake_rodata_800C5710_8 = 35.667976379394531;
const double unbake_rodata_800C5718_8 = 312.0322265625;
const double unbake_rodata_800C5720_8 = 64.124946594238281;
const double unbake_rodata_800C5728_8 = 769.49932861328125;
const double unbake_rodata_800C5730_8 = (-0.00021219444170128557);
const double unbake_rodata_800C5738_8 = 0.693359375;
#endif
