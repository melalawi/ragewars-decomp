#include "basetypes.h"

extern f32 D_800C7DD8;

void *func_8022A4F4(void *arg0, s32 arg1, s32 arg2, s32 arg3, void *arg4) {
    f32 var_f3;
    void *var_v1;
    void *var_a1;
    f32 dx, dy, dz, distSq;

    var_f3 = D_800C7DD8;
    var_v1 = *(void **)((char *)arg0 + 0x20);
    var_a1 = 0;
    if (var_v1 != 0) {
        do {
            if (*(s32 *)((char *)var_v1 + 0x5E4) != 0 && var_v1 != arg4) {
                dx = *(f32 *)((char *)var_v1 + 8) - *(f32 *)&arg1;
                dx = dx * dx;
                dy = *(f32 *)((char *)var_v1 + 0xC) - *(f32 *)&arg2;
                dy = dy * dy;
                dz = *(f32 *)((char *)var_v1 + 0x10) - *(f32 *)&arg3;
                dz = dz * dz;
                distSq = (dx + dy) + dz;
                if (distSq < var_f3) {
                    var_f3 = distSq;
                    var_a1 = var_v1;
                }
            }
            var_v1 = *(void **)((char *)var_v1 + 0x16E0);
        } while (var_v1 != 0);
    }
    return var_a1;
}
