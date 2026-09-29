/* Returns 1 when each of the six planes has at least one of the n points on or inside it (normal dot point <= plane distance), else 0. */
#include "basetypes.h"

typedef struct {
    f32 x, y, z;
} Vec3f;

typedef struct {
    f32 nx, ny, nz;
    f32 d;
} Plane;

s32 func_80297A48(Plane *planes, s32 n, Vec3f *points) {
    s32 i;
    s32 j;
    s32 inside;

    for (i = 0; i < 6; i++) {
        inside = 0;
        for (j = 0; j < n; j++) {
            if (planes[i].nx * points[j].x + planes[i].ny * points[j].y + planes[i].nz * points[j].z <= planes[i].d) {
                inside = 1;
                break;
            }
        }
        if (!inside) {
            return 0;
        }
    }
    return 1;
}
