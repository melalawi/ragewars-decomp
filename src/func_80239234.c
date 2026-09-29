#include "basetypes.h"

typedef struct {
    f32 x;
    f32 y;
    f32 z;
} Vector3f;

extern s32 D_800E28D0;
extern void func_80272A80(void *, void *, Vector3f *);

typedef struct func_80239234_S1 func_80239234_S1;
struct func_80239234_S1 {
    char pad0[0x4];
    s32 unk4;
};

void func_80239234(s32 arg0, s32 arg1, f32 *arg2, f32 *arg3) {
    Vector3f value;
    f32 half;

    func_80272A80(arg0 + 0x1E0, arg1, &value);
    half = (f32)(D_800E28D0 / 2);
    *arg2 = value.x * half + half;
    *arg3 = value.y * (f32)(-((func_80239234_S1 *)(&D_800E28D0))->unk4 / 2) +
            (f32)(((func_80239234_S1 *)(&D_800E28D0))->unk4 / 2);
}
