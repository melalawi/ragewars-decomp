#include "basetypes.h"

typedef struct {
    f32 x;
    f32 y;
    f32 z;
} Vector3;

extern f32 func_802BC380(f32);

static __inline__ Vector3 project(Vector3 *arg0, Vector3 *arg1) {
    Vector3 projected;
    f32 dot;

    dot = (arg0->x * arg1->x) + (arg0->y * arg1->y) + (arg0->z * arg1->z);
    projected.x = arg0->x - (dot * arg1->x);
    projected.y = arg0->y - (dot * arg1->y);
    projected.z = arg0->z - (dot * arg1->z);
    return projected;
}

Vector3 func_8027246C(Vector3 *arg0, Vector3 *arg1) {
    Vector3 projected;
    f32 projectedMagnitude;
    f32 magnitudeRatio;

    projected = project(arg0, arg1);

    projectedMagnitude = func_802BC380((projected.x * projected.x) +
                                       (projected.y * projected.y) +
                                       (projected.z * projected.z));
    if (projectedMagnitude != 0.0f) {
        magnitudeRatio = func_802BC380((arg0->x * arg0->x) +
                                       (arg0->y * arg0->y) +
                                       (arg0->z * arg0->z)) / projectedMagnitude;

        projected.x *= magnitudeRatio;
        projected.y *= magnitudeRatio;
        projected.z *= magnitudeRatio;
    }

    return projected;
}
