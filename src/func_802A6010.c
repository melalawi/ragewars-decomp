#include "basetypes.h"

typedef struct {
    f32 x;
    f32 y;
    f32 z;
} Vec3;

typedef struct {
    f32 x;
    f32 y;
    f32 z;
    f32 w;
} Vec4;

extern f32 D_800CB018;
extern f32 D_80115DEC;
extern void func_80272088(Vec3 *out, Vec3 *a, Vec3 *b);
extern f32 func_802BC380(f32);
extern void func_8027200C(Vec3 *out, Vec3 *in, f32 scale);
extern f32 func_80274640(f32 arg0);
extern f32 func_802BC200(f32 arg0);
extern f32 func_802BB630(f32 arg0);

Vec4 *func_802A6010(Vec4 *out, u32 bx, u32 by, u32 bz) {
    Vec3 axis;
    Vec3 cross;
    Vec4 result;
    f32 one;
    f32 magnitude;
    f32 angle;
    f32 trig;

    one = D_800CB018;
    axis.x = 0.0f;
    axis.y = one;
    axis.z = 0.0f;
    func_80272088(&cross, &axis, (Vec3 *)&bx);

    magnitude = func_802BC380((cross.x * cross.x) +
                              (cross.y * cross.y) +
                              (cross.z * cross.z));
    if (magnitude == 0.0f) {
        result.z = 0.0f;
        result.y = 0.0f;
        result.x = 0.0f;
        result.w = one;
    } else {
        func_8027200C(&cross, &cross, one / magnitude);
        angle = func_80274640((axis.x * *(f32 *)&bx) +
                              (axis.y * *(f32 *)&by) +
                              (axis.z * *(f32 *)&bz));
        angle *= *((f32 *)&D_800CB018 + 1);
        trig = func_802BC200(angle);
        result.x = cross.x * trig;
        result.y = cross.y * trig;
        result.z = cross.z * trig;
        D_80115DEC = trig;
        result.w = func_802BB630(angle);
    }
    *out = result;
    return out;
}
