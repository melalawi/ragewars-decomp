#include "basetypes.h"

extern s32 func_80214178(void *, void *, s32);
extern s32 func_80285F28(void *, void *);
extern s32 D_8011FE88;
extern f32 D_800C6BD0;

typedef struct func_802066A4_S1 func_802066A4_S1;
typedef struct func_802066A4_S2 func_802066A4_S2;
typedef struct func_802066A4_S3 func_802066A4_S3;
struct func_802066A4_S1 {
    char pad0[0x124];
    s32 unk124;
    char pad124[0x128 - 0x124 - sizeof(s32)];
    f32 unk128;
    char pad128[0x12C - 0x128 - sizeof(f32)];
    f32 unk12C;
};
struct func_802066A4_S2 {
    char pad0[0x18];
    void* unk18;
    char pad18[0x100 - 0x18 - sizeof(void*)];
    s32 unk100;
};
struct func_802066A4_S3 {
    char pad0[0x18];
    s32 unk18;
};

void func_802066A4(void *arg0, void *arg1) {
    ((func_802066A4_S1 *)(arg1))->unk124 = ((func_802066A4_S3 *)(((func_802066A4_S2 *)(arg0))->unk18))->unk18;
    func_80214178(arg0, arg1, 0);
    ((func_802066A4_S1 *)(arg1))->unk128 = D_800C6BD0;
    ((func_802066A4_S1 *)(arg1))->unk12C = D_800C6BD0;
    if (func_80285F28(&D_8011FE88, arg0) == 1) {
        ((func_802066A4_S2 *)(arg0))->unk100 &= ~0x2000;
        ((func_802066A4_S2 *)(arg0))->unk100 &= ~0x100;
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C1A10_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C6BD0_4 = 1.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C1D80_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C1DC0_4 = 1.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C1AE0_4 = 1.0f;
#endif
