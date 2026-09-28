#include "basetypes.h"

s32 func_80241604(void *arg0, void *arg1, f32 arg2, void *arg3) {
    f32 dx = *(f32 *)arg1 - *(f32 *)arg3;
    f32 dz = *(f32 *)((char *)arg1 + 8) - *(f32 *)((char *)arg3 + 8);
    s32 result = 1;
    if (!((dx * dx + dz * dz) <= (arg2 * arg2))) {
        result = 0;
    }
    return result;
}
