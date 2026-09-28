#include "basetypes.h"

f32 func_80217290(void *arg0, s32 arg1, volatile s32 arg2, s32 arg3) {
    f32 a1 = *(f32 *)&arg1;
    f32 a3 = *(f32 *)&arg3;
    f32 dx = a1 - *(f32 *)((char *)arg0 + 8);
    f32 dz = a3 - *(f32 *)((char *)arg0 + 0x10);
    return dx * dx + dz * dz;
}
