/* Returns the projection of a vector onto the unit normal of two other vectors, the normal being their normalised cross product.
   Adapted from func_8027246C with the inlined cross product and normalisation of func_80272088 and func_802720EC replacing the plane projection and the scaled result read back through a pointer to the normal changed. */
#include "basetypes.h"

typedef struct {
    f32 x;
    f32 y;
    f32 z;
} Vector3;

extern f32 func_802BC380(f32);
extern f32 D_800C99A0;

static __inline__ void cross(Vector3 *out, Vector3 *a, Vector3 *b) {
    out->x = (a->y * b->z) - (a->z * b->y);
    out->y = (a->z * b->x) - (a->x * b->z);
    out->z = (a->x * b->y) - (a->y * b->x);
}

static __inline__ void normalize(Vector3 *v) {
    f32 mag;
    f32 scale;

    mag = func_802BC380((v->x * v->x) + (v->y * v->y) + (v->z * v->z));
    if (mag != 0.0f) {
        scale = D_800C99A0 / mag;
        v->x = v->x * scale;
        v->y = v->y * scale;
        v->z = v->z * scale;
    }
}

Vector3 func_8027230C(Vector3 *arg0, Vector3 *arg1, Vector3 *arg2) {
    Vector3 normal;
    Vector3 result;
    f32 dot;

    Vector3 *n = &normal;

    cross(n, arg1, arg2);
    normalize(n);
    dot = (arg0->x * normal.x) + (arg0->y * normal.y) + (arg0->z * normal.z);
    result.x = n->x * dot;
    result.y = n->y * dot;
    result.z = n->z * dot;
    return result;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C47E0_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C99A0_4 = 1.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C4B60_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C4BA0_4 = 1.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C48B0_4 = 1.0f;
#endif
