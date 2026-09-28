#include "basetypes.h"

typedef struct Vec3Words {
    s32 x;
    s32 y;
    s32 z;
} Vec3Words;

extern void func_8028FFB0(s32, s32, s32, Vec3Words, Vec3Words, s32, f32);

void func_8028BFB4(s32 arg0, s32 arg1, Vec3Words arg2, s32 arg5, f32 arg6) {
    Vec3Words zero;

    zero.x = 0;
    zero.y = 0;
    zero.z = 0;
    func_8028FFB0(arg0 + 0x11778, 0, arg5, zero, arg2, arg1, arg6);
}
