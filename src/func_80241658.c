#include "basetypes.h"

/* Tests whether a point lies inside an object's four-sided footprint: for each edge of the corners at 0x18 it checks the side the point falls on in the x-z plane, walking the edges in reverse when the winding value at 0x4C is negative. */

typedef struct Vec3 {
    f32 x, y, z;
} Vec3;

typedef struct Footprint {
    char pad0[0x18];
    Vec3 corner[4];
    f32 pad48;
    f32 winding;
} Footprint;

s32 func_80241658(Footprint *fp, Vec3 *p)
{
    s32 i;
    Vec3 *a;
    Vec3 *b;
    f32 ax;

    for (i = 0; i < 4; i++) {
        if (fp->winding < 0.0f) {
            b = &fp->corner[i];
            a = &fp->corner[(i + 1) & 3];
        } else {
            a = &fp->corner[i];
            b = &fp->corner[(i + 1) & 3];
        }
        ax = a->x;
        if (0.0f < (b->z - a->z) * (p->x - ax) + (ax - b->x) * (p->z - a->z)) {
            return 0;
        }
    }
    return 1;
}
