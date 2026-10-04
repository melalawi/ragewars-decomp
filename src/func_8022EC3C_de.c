#include "span_1000/code_8022E120.h"
#include "span_C76B0/data.h"
/** Update the object's state code from identity, mode, and height bounds. */







void func_8022EC3C_de(void *object) {
    int suppress = 0;
    float value;

    if (((func_8022EC2C_S1 *)(object))->unk86C == 0x1144) {
        suppress = ((func_8022EC2C_S1 *)(object))->unk10E == 0;
    }
    if (((func_8022EC2C_S1 *)(object))->unkE4 == D_800C922C) {
        ((func_8022EC2C_S1 *)(object))->unk86C = 0x8A2;
        return;
    }
    if (!suppress) {
        value = ((func_8022EC2C_S1 *)(object))->unk6C0;
        if (D_800C2E88_de <= value) {
            ((func_8022EC2C_S1 *)(object))->unk86C = 0x8A2;
            return;
        }
        if (value <= D_800C2E8C_de) {
            ((func_8022EC2C_S1 *)(object))->unk86C = 0x8A7;
            return;
        }
        ((func_8022EC2C_S1 *)(object))->unk86C = 0x14;
    }
}

/** Empty adjacent entry point included in func_8022EC3C_de's Splat span. */
void func_8022ECC4_de(void) {
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C2DB8_4 = 1.02400005f;
const float unbake_rodata_800C2DBC_4 = (-1.02400005f);
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C7F78_4 = 1.02400005f;
const float unbake_rodata_800C7F7C_4 = (-1.02400005f);
#elif defined(VERSION_EU)
const float unbake_rodata_800C3130_4 = 1.02400005f;
const float unbake_rodata_800C3134_4 = (-1.02400005f);
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C3170_4 = 1.02400005f;
const float unbake_rodata_800C3174_4 = (-1.02400005f);
#elif defined(VERSION_DE)
const float unbake_rodata_800C2E88_4 = 1.02400005f;
const float unbake_rodata_800C2E8C_4 = (-1.02400005f);
#endif
