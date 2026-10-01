#include "basetypes.h"

extern f32 func_8040184C(f32 arg0);
extern void *D_800E2830;
extern f32 D_800C88C4;
extern f32 D_800C88C8;

typedef struct func_80245990_S1 func_80245990_S1;
struct func_80245990_S1 {
    char pad0[0x1C];
    f32 unk1C;
    char pad1C[0x38 - 0x1C - sizeof(f32)];
    int unk38;
    char pad38[0x100 - 0x38 - sizeof(int)];
    f32 unk100;
};

f32 func_80245990(void) {
    void *record = D_800E2830;
    f32 temp_f1;

    if (((func_80245990_S1 *)(record))->unk38 == 0) {
        return D_800C88C4;
    }
    temp_f1 = ((func_80245990_S1 *)(record))->unk100;
    if (!(D_800C88C8 < temp_f1)) {
        return func_8040184C(((func_80245990_S1 *)(record))->unk1C);
    }
    return temp_f1;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C3704_4 = 47.5f;
const float unbake_rodata_800C3708_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C88C4_4 = 47.5f;
const float unbake_rodata_800C88C8_4 = 1.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C3A84_4 = 47.5f;
const float unbake_rodata_800C3A88_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C3AC4_4 = 47.5f;
const float unbake_rodata_800C3AC8_4 = 1.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C37D4_4 = 47.5f;
const float unbake_rodata_800C37D8_4 = 1.0f;
#endif
