#include "basetypes.h"

typedef struct {
    s32 a;
    s32 b;
    s32 c;
} IntTriple;

typedef struct {
    s16 x;
    s16 y;
    s16 z;
    s16 w;
} Vec4s;

extern s32 func_802394AC(void *arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, s32 arg5, IntTriple arg6);
extern char D_80145088;
extern f32 D_800C9540[2];

void func_80267DC4(s32 arg0, s32 arg1, s32 arg2, IntTriple t, Vec4s v) {
    func_802394AC(&D_80145088, (f32) v.x, (f32) v.y, (f32) v.z, (f32) v.w * D_800C9540[1], 1, t);
}
