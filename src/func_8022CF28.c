#include "basetypes.h"

typedef struct Vec3 {
    f32 x;
    f32 y;
    f32 z;
} Vec3;

extern const f32 D_800C7E84;
extern const f32 D_800C7E88;

extern void func_8023912C(void *arg0);
extern void func_80218464();
extern s32 func_8025DE74(s16 arg0, Vec3 arg1, s32 arg4, s32 arg5);

void func_8022CF28(void *arg0, void *arg1) {
    f32 value;
    f32 minimum;
    *(f32 *)((char *)arg0 + 0x6C0) *= D_800C7E84;
    *(f32 *)((char *)arg0 + 0x6C4) *= D_800C7E84;

    value = *(f32 *)((char *)arg1 + 0x20) * D_800C7E88;
    minimum = *(&D_800C7E88 + 1);
    *(f32 *)((char *)arg1 + 0x20) = value;
    if (value < minimum) {
        *(f32 *)((char *)arg1 + 0x20) = minimum;
    }

    *(s32 *)((char *)arg0 + 0x848) = 0;
    func_8023912C(*(void **)((char *)arg0 + 0x5DC));
    func_80218464((char *)arg0 + 0x938);

    if (*(s32 *)((char *)arg1 + 0x38) & 0x8000) {
        func_8025DE74(0x2DA, *(Vec3 *)((char *)arg1 + 8), 0, -1);
    } else {
        func_8025DE74(0x2DC, *(Vec3 *)((char *)arg1 + 8), 0, -1);
    }
}
