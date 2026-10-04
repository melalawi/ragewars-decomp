#include "common/types.h"
#include "span_1000/code_8026E5DC.h"
#include "types.h"



/** Intersect a line segment with a horizontal plane and write the point. */
void func_80272104_de(Vec3 *out, Vec3 *a, Vec3 *b, f32 y) {
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
