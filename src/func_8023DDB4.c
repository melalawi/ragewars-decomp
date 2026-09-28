/* Tests a ray's horizontal segment against a rectangle (min x/z at 0 and 4, max x/z at 8 and 12): a start
 * point inside gives parameter 0; otherwise the crossing of the x edge facing the start is tried first and
 * then the z edge, each accepted when nearer than the ray's current nearest hit at 0x17C and landing within
 * the other axis's extent (using the ray's direction at 0x5C/0x64); the accepted parameter is stored and 1
 * is returned, 0 when the segment misses. */
#include "basetypes.h"

typedef struct {
    f32 x;
    f32 y;
    f32 z;
} Vec3;

typedef struct {
    char pad0[0x44];
    Vec3 start;
    Vec3 end;
    Vec3 direction;
    char pad68[0x114];
    f32 nearest;
} Ray;

typedef struct {
    f32 minX;
    f32 minZ;
    f32 maxX;
    f32 maxZ;
} Rect;

s32 func_8023DDB4(Ray *ray, Rect *rect, f32 *t) {
    Vec3 *start;
    Vec3 *end;
    f32 a;
    f32 b;
    f32 param;
    Vec3 hit;

    start = &ray->start;
    end = &ray->end;
    if (rect->maxX >= start->x && rect->maxZ >= start->z && rect->minX <= start->x && rect->minZ <= start->z) {
        *t = 0.0f;
        return 1;
    }
    a = start->x;
    b = end->x;
    if (a != b) {
        if (a < b) {
            param = (rect->minX - a) / (b - a);
        } else {
            param = (a - rect->maxX) / (a - b);
        }
        if (param < ray->nearest) {
            hit.z = start->z + param * ray->direction.z;
            if (rect->minZ <= hit.z && hit.z <= rect->maxZ) {
                *t = param;
                return 1;
            }
        }
    }
    a = start->z;
    b = end->z;
    if (a == b) {
        return 0;
    }
    if (a < b) {
        param = (rect->minZ - a) / (b - a);
    } else {
        param = (a - rect->maxZ) / (a - b);
    }
    if (!(param < ray->nearest)) {
        return 0;
    }
    hit.x = start->x + param * ray->direction.x;
    if (rect->minX <= hit.x && hit.x <= rect->maxX) {
        *t = param;
        return 1;
    }
    return 0;
}
