#include "basetypes.h"

extern s32 func_802BC380(f32 arg0);

s32 func_80272768(f32 *a, f32 *b) {
    f32 dx = a[0] - b[0];
    f32 dy = a[1] - b[1];
    f32 dz = a[2] - b[2];
    return func_802BC380((dx * dx) + (dy * dy) + (dz * dz));
}
