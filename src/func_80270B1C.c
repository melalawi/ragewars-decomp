#include "basetypes.h"

typedef struct {
    f32 x;
    f32 y;
    f32 z;
    f32 w;
} Vec4;

extern f32 D_800C98C8;
extern f32 func_80274640(f32 value);
extern f32 func_802BC200(f32 value);

void func_80270B1C(Vec4 *out, f32 amount, Vec4 *a, Vec4 *b) {
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

    angle = func_80274640(dot);
    sine = func_802BC200(angle);
    if (sine == 0.0f) {
        *out = *a;
        return;
    }

    inverseSine = *(&D_800C98C8 + 1) / sine;
    scaleA = func_802BC200((*(&D_800C98C8 + 1) - amount) * angle) * inverseSine;
    scaleB = func_802BC200(amount * angle) * inverseSine;
    if (dot < negativeDot) {
        other = &negative;
    }

    out->x = (scaleA * a->x) + (scaleB * other->x);
    out->y = (scaleA * a->y) + (scaleB * other->y);
    out->z = (scaleA * a->z) + (scaleB * other->z);
    out->w = (scaleA * a->w) + (scaleB * other->w);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C470C_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C98CC_4 = 1.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C4A8C_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C4ACC_4 = 1.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C47DC_4 = 1.0f;
#endif
