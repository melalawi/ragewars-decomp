#include "basetypes.h"

extern float D_800C8140;
extern s32 func_80214178(void *, void *, s32);

typedef struct func_8023330C_S1 func_8023330C_S1;
struct func_8023330C_S1 {
    char pad0[0x148];
    float unk148;
};

void func_8023330C(void *arg0, void *arg1) {
    ((func_8023330C_S1 *)(arg1))->unk148 = D_800C8140;
    func_80214178(arg0, arg1, 8);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C2F80_4 = 300.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C8140_4 = 300.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C3300_4 = 300.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C3340_4 = 300.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C3050_4 = 300.0f;
#endif
