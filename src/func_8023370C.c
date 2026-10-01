#include "basetypes.h"

extern f32 func_80274878(f32, f32, s32);
extern s32 func_80214178(void *, void *, s32);
extern f32 D_800C8168;
extern s32 D_800CF9E0;

typedef struct func_8023370C_S1 func_8023370C_S1;
struct func_8023370C_S1 {
    char pad0[0x124];
    f32 unk124;
};

void func_8023370C(void *arg0, void *arg1) {
    f32 temp_f0;
    f32 temp_f20;

    temp_f20 = D_800C8168;
    temp_f0 = func_80274878(((func_8023370C_S1 *)(arg1))->unk124, temp_f20, D_800CF9E0);
    ((func_8023370C_S1 *)(arg1))->unk124 = temp_f0;
    if (temp_f20 <= temp_f0) {
        func_80214178(arg0, arg1, 2);
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C2FA8_4 = 600.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C8168_4 = 600.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C3328_4 = 600.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C3368_4 = 600.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C3078_4 = 600.0f;
#endif
