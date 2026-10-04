#include "common/types.h"
#include "span_1000/code_8022E120.h"
#include "span_1000/code_8025E35C.h"
#include "span_C76B0/data.h"
#include "types.h"

extern f32 func_8027525C_de(void *arg0, s32 arg1, s32 arg2);
extern f32 func_80275DD4_de(s32, s32, s32);











void func_8022EA3C_de(void *arg0, void *arg1) {
    f32 first;
    f32 amount;

    if (arg0 != 0 && arg1 != 0 &&
        (((func_8022EA2C_S1 *)(arg0))->unk2 & 0x40)) {
        first = func_8027525C_de(arg0,
            ((func_8022EA2C_S2 *)(arg1))->unk0, ((func_8022EA2C_S2 *)(arg1))->unk8);
        amount = (f32)(s32)(first - func_80275DD4_de(arg0,
            ((func_8022EA2C_S2 *)(arg1))->unk0, ((func_8022EA2C_S2 *)(arg1))->unk8));
        if (amount < D_800C2E24_de) {
            func_8025E440_de(D_800C2E2C_de - (amount * D_800C2E28_de));
            return;
        }
    }
    func_8025E440_de(0.0f);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C2D54_4 = 1024.0f;
const float unbake_rodata_800C2D58_4 = 0.0009765625f;
const float unbake_rodata_800C2D5C_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C7F14_4 = 1024.0f;
const float unbake_rodata_800C7F18_4 = 0.0009765625f;
const float unbake_rodata_800C7F1C_4 = 1.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C30C8_4 = 1024.0f;
const float unbake_rodata_800C30CC_4 = 0.0009765625f;
const float unbake_rodata_800C30D0_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C3108_4 = 1024.0f;
const float unbake_rodata_800C310C_4 = 0.0009765625f;
const float unbake_rodata_800C3110_4 = 1.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C2E24_4 = 1024.0f;
const float unbake_rodata_800C2E28_4 = 0.0009765625f;
const float unbake_rodata_800C2E2C_4 = 1.0f;
#endif
