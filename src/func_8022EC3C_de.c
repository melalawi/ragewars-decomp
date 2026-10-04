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
