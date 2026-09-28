/* Re-orthonormalises the rotation rows of a matrix: normalises the first and second rows (a zero length is left to divide by zero), rebuilds the third row as their cross product and the second as the cross product of the third and first, and writes the three rows back. */
#include "basetypes.h"

typedef struct {
    f32 x;
    f32 y;
    f32 z;
} Vec3f;

typedef struct {
    Vec3f v;
    f32 w;
} Row;

extern f32 func_802BC380(f32);

static inline f32 safe_sqrt(f32 x) {
    if (x <= 0.0f) {
        return 0.0f;
    }
    return func_802BC380(x);
}

static inline void normalize(Vec3f *v) {
    f32 scale;

    scale = 1.0f / safe_sqrt(v->x * v->x + v->y * v->y + v->z * v->z);
    v->x *= scale;
    v->y *= scale;
    v->z *= scale;
}

static inline Vec3f cross(Vec3f *a, Vec3f *b) {
    Vec3f r;

    r.x = a->y * b->z - a->z * b->y;
    r.y = a->z * b->x - a->x * b->z;
    r.z = a->x * b->y - a->y * b->x;
    return r;
}

void func_8029E000(Row *m) {
    Vec3f x;
    Vec3f y;
    Vec3f z;

    x.x = m[0].v.x;
    x.y = m[0].v.y;
    x.z = m[0].v.z;
    y.x = m[1].v.x;
    y.y = m[1].v.y;
    y.z = m[1].v.z;
    normalize(&x);
    normalize(&y);
    z = cross(&x, &y);
    y = cross(&z, &x);
    {
        Vec3f *p = &x;

        m[0].v.x = p->x;
        m[0].v.y = p->y;
        m[0].v.z = p->z;
    }
    m[1].v.x = y.x;
    m[1].v.y = y.y;
    m[1].v.z = y.z;
    m[2].v.x = z.x;
    m[2].v.y = z.y;
    m[2].v.z = z.z;
}
