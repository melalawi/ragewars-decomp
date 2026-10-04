#include "common/types.h"
#include "span_1000/code_8026E5DC.h"
#include "span_C76B0/data.h"
#include "types.h"




extern f32 func_802745D0_de(f32 value);
extern f32 func_802B7130_de(f32 value);

void func_80270AAC_de(Vector4f *out, f32 amount, Vector4f *a, Vector4f *b) {
    Vector4f negative;
    Vector4f *other;
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

    angle = func_802745D0_de(dot);
    sine = func_802B7130_de(angle);
    if (sine == 0.0f) {
        *out = *a;
        return;
    }

    inverseSine = *(&D_800C47D8_de + 1) / sine;
    scaleA = func_802B7130_de((*(&D_800C47D8_de + 1) - amount) * angle) * inverseSine;
    scaleB = func_802B7130_de(amount * angle) * inverseSine;
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
