#include "common/types.h"
#include "span_1000/code_8029D984.h"
#include "span_1000/types.h"
#include "types.h"
/* Re-orthonormalises the rotation rows of a matrix: normalises the first and second rows (a zero length is left to divide by zero), rebuilds the third row as their cross product and the second as the cross product of the third and first, and writes the three rows back. */





extern f32 func_802B72B0_de(f32);

static inline f32 safe_sqrt(f32 x) {
    if (x <= 0.0f) {
        return 0.0f;
    }
    return func_802B72B0_de(x);
}

static inline void normalize(Vec3 *v) {
    f32 scale;

    scale = 1.0f / safe_sqrt(v->x * v->x + v->y * v->y + v->z * v->z);
    v->x *= scale;
    v->y *= scale;
    v->z *= scale;
}

static inline Vec3 cross(Vec3 *a, Vec3 *b) {
    Vec3 r;

    r.x = a->y * b->z - a->z * b->y;
    r.y = a->z * b->x - a->x * b->z;
    r.z = a->x * b->y - a->y * b->x;
    return r;
}

void func_8029D000_de(Plane_func_802965B0_de *m) {
    Vec3 x;
    Vec3 y;
    Vec3 z;

    x.x = m[0].normal.x;
    x.y = m[0].normal.y;
    x.z = m[0].normal.z;
    y.x = m[1].normal.x;
    y.y = m[1].normal.y;
    y.z = m[1].normal.z;
    normalize(&x);
    normalize(&y);
    z = cross(&x, &y);
    y = cross(&z, &x);
    {
        Vec3 *p = &x;

        m[0].normal.x = p->x;
        m[0].normal.y = p->y;
        m[0].normal.z = p->z;
    }
    m[1].normal.x = y.x;
    m[1].normal.y = y.y;
    m[1].normal.z = y.z;
    m[2].normal.x = z.x;
    m[2].normal.y = z.y;
    m[2].normal.z = z.z;
}
