#include "basetypes.h"

extern f32 func_802752CC(void *arg0, s32 arg1, s32 arg2);
extern f32 func_80275E44(s32, s32, s32);
extern void func_8025E460(f32 arg0);

extern f32 D_800C7F14;
extern f32 D_800C7F18;
extern f32 D_800C7F1C;

typedef struct func_8022EA2C_S1 func_8022EA2C_S1;
typedef struct func_8022EA2C_S2 func_8022EA2C_S2;
struct func_8022EA2C_S1 {
    char pad0[0x2];
    u16 unk2;
};
struct func_8022EA2C_S2 {
    s32 unk0;
    char pad0[0x8 - 0x0 - sizeof(s32)];
    s32 unk8;
};

void func_8022EA2C(void *arg0, void *arg1) {
    f32 first;
    f32 amount;

    if (arg0 != 0 && arg1 != 0 &&
        (((func_8022EA2C_S1 *)(arg0))->unk2 & 0x40)) {
        first = func_802752CC(arg0,
            ((func_8022EA2C_S2 *)(arg1))->unk0, ((func_8022EA2C_S2 *)(arg1))->unk8);
        amount = (f32)(s32)(first - func_80275E44(arg0,
            ((func_8022EA2C_S2 *)(arg1))->unk0, ((func_8022EA2C_S2 *)(arg1))->unk8));
        if (amount < D_800C7F14) {
            func_8025E460(D_800C7F1C - (amount * D_800C7F18));
            return;
        }
    }
    func_8025E460(0.0f);
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
