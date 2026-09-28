#include "basetypes.h"

typedef struct {
    f32 x;
    f32 y;
    f32 z;
} Vec3;

f32 func_80241718(void *arg0, f32 arg1, f32 arg2) {
    Vec3 normal;
    Vec3 point;

    normal = *(Vec3 *) ((char *) arg0 + 0x48);
    if (normal.y == 0.0f) {
        return *(f32 *) ((char *) arg0 + 0x1C);
    }
    point = *(Vec3 *) ((char *) arg0 + 0x18);
    return (((point.z - arg2) * normal.z) + ((point.x - arg1) * normal.x) + (point.y * normal.y)) / normal.y;
}
