#include "basetypes.h"

typedef struct {
    f32 x;
    f32 y;
    f32 z;
} Vector3f;

extern f32 func_802BC380(f32);

void func_802727B8(Vector3f *arg0, f32 arg1) {
    f32 magSq;
    f32 mag;
    f32 scale;

    magSq = (arg0->x * arg0->x) + (arg0->y * arg0->y) + (arg0->z * arg0->z);
    if ((arg1 * arg1) < magSq) {
        mag = func_802BC380(magSq);
        scale = arg1 / mag;
        arg0->x = arg0->x * scale;
        arg0->y = arg0->y * scale;
        arg0->z = arg0->z * scale;
    }
}
