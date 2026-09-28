#include "basetypes.h"

typedef struct Vec3f {
    f32 x;
    f32 y;
    f32 z;
} Vec3f;

/** Intersect a line segment with a horizontal plane and write the point. */
void func_80272174(Vec3f *out, Vec3f *a, Vec3f *b, f32 y) {
    f32 dy = b->y - a->y;

    if (dy == 0.0f) {
        *out = *a;
        return;
    }

    {
        f32 t = (y - a->y) / dy;
        out->x = a->x + (t * (b->x - a->x));
        out->y = y;
        out->z = a->z + (t * (b->z - a->z));
    }
}
