#include "basetypes.h"

typedef struct {
    f32 x;
    f32 y;
    f32 z;
    f32 w;
} Vec4;

extern f32 D_800C98D0;
extern f32 D_800C98D8;
extern f32 func_80274640(f32 value);
extern f32 func_802BC200(f32 value);
extern f32 func_802BC380(f32);

void func_80270D40(Vec4 *out, f32 amount, Vec4 *a, Vec4 *b) {
    Vec4 negative;
    Vec4 *other;
    f32 dot;
    f32 negativeDot;
    f32 angle;
    f32 sine;
    f32 inverseSine;
    f32 scaleA;
    f32 scaleB;

    other = b;
    negative = *b;
    negative.x = -negative.x;
    negative.y = -negative.y;
    negative.z = -negative.z;
    negative.w = -negative.w;

    dot = (a->x * b->x) + (a->y * b->y) + (a->z * b->z) + (a->w * b->w);
    negativeDot = (a->x * negative.x) + (a->y * negative.y) +
                  (a->z * negative.z) + (a->w * negative.w);
    if (dot < negativeDot) {
        dot = negativeDot;
        other = &negative;
    }

    if (D_800C98D0 < dot) {
        f32 magnitude;
        f32 scale;

        out->x = a->x + amount * (other->x - a->x);
        out->y = a->y + amount * (other->y - a->y);
        out->z = a->z + amount * (other->z - a->z);
        out->w = a->w + amount * (other->w - a->w);
        magnitude = func_802BC380((out->x * out->x) + (out->y * out->y) +
                                  (out->z * out->z) + (out->w * out->w));
        if (magnitude != 0.0f) {
            scale = *(&D_800C98D0 + 1) / magnitude;
            out->x *= scale;
            out->y *= scale;
            out->z *= scale;
            out->w *= scale;
        }
    } else {
        angle = func_80274640(dot);
        sine = func_802BC200(angle);
        if (sine == 0.0f) {
            *out = *a;
            return;
        }

        inverseSine = D_800C98D8 / sine;
        scaleA = func_802BC200((D_800C98D8 - amount) * angle) * inverseSine;
        scaleB = func_802BC200(amount * angle) * inverseSine;
        if (dot < negativeDot) {
            other = &negative;
        }

        out->x = (scaleA * a->x) + (scaleB * other->x);
        out->y = (scaleA * a->y) + (scaleB * other->y);
        out->z = (scaleA * a->z) + (scaleB * other->z);
        out->w = (scaleA * a->w) + (scaleB * other->w);
    }
}
