#include "basetypes.h"

extern f32 D_800C9078;
extern f32 D_800D0D10;

f32 func_8025C12C(f32 *a, f32 *b) {
    f32 dx = a[0] - b[0];
    f32 dy = a[1] - b[1];
    f32 dz = a[2] - b[2];
    f32 distSq = (dx * dx) + (dy * dy) + (dz * dz);
    if (D_800D0D10 <= distSq) {
        return 0.0f;
    }
    return D_800C9078 - (distSq / D_800D0D10);
}
