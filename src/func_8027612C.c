#include "basetypes.h"

extern f32 func_802BC380(f32);
extern f32 func_80274640(f32 arg0);

f32 func_8027612C(void *arg0, s32 arg1) {
    char *a0 = (char *)arg0;
    void *v0;
    s32 address;
    s32 scale;
    void *v1;
    f32 dx, dz;
    f32 mag;
    f32 result;

    address = (s32)a0 + arg1 * 4 + 4;
    v1 = *(void **)address;
    scale = 4;
    v0 = *(void **)(a0 + ((arg1 + 1) % 3) * scale + scale);
    dx = *(f32 *)((char *)v0 + 0) - *(f32 *)((char *)v1 + 0);
    dz = *(f32 *)((char *)v0 + 8) - *(f32 *)((char *)v1 + 8);
    mag = func_802BC380((dx * dx) + (dz * dz));
    if (mag == 0.0f) {
        return 0.0f;
    }
    result = func_80274640(dx / mag);
    if (!(dz < 0.0f)) {
        result = -result;
    }
    return result;
}
