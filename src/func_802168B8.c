#include "basetypes.h"

typedef struct Vec3 {
    s32 unk0;
    s32 unk4;
    f32 x;
    f32 y;
    f32 z;
} Vec3;

extern f32 func_80215868(void *arg0, f32 arg1, f32 arg2, f32 arg3,
                        void *arg4, f32 arg5);
extern void func_80217074(void *arg0, f32 arg1);
extern f32 D_800C72B8;
extern f32 D_800D2988;

void func_802168B8(void *arg0, s32 arg1, Vec3 *arg2, f32 arg3) {
    f32 f0;
    f32 f1;
    f32 f2;
    f32 f3;

    if (arg2 != 0) {
        f1 = func_80215868(arg0, arg2->x, arg2->y, arg2->z,
                           arg2, D_800C72B8);
        f3 = f1;
        if (arg3 < f1) {
            f1 = arg3;
        } else {
            f0 = -arg3;
            if (f1 < f0) {
                f1 = f0;
            }
        }
        f1 = f1 * D_800D2988;
        f2 = f1;
        if (f1 < 0.0f) {
            f2 = -f1;
        }
        if (f3 < 0.0f) {
            if (-f3 < f2) {
                goto clamp;
            }
        } else if (f3 < f2) {
clamp:
            f1 = f3;
        }
        func_80217074(arg0, f1);
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C20F8_4 = 1.5f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C72B8_4 = 1.5f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C2468_4 = 1.5f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C24A8_4 = 1.5f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C21C8_4 = 1.5f;
#endif
