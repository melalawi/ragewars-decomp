#include "basetypes.h"

typedef struct {
    f32 x;
    f32 y;
    f32 z;
} Vec3;

extern void func_80271FD8(Vec3 *out, void *arg1, void *arg2);

typedef struct func_8020CB3C_S1 func_8020CB3C_S1;
struct func_8020CB3C_S1 {
    void* unk0;
    char pad0[0x4 - 0x0 - sizeof(void*)];
    s32 unk4;
};

s32 func_8020CB3C(void *arg0, void *arg1) {
    Vec3 sp10;
    f32 temp_f2;
    f32 var_f20;
    void *items;
    s32 stride;
    s32 var_s0;
    s32 var_s1;

    var_s1 = -1;
    var_f20 = 0.0f;
    var_s0 = 0;
    if (((func_8020CB3C_S1 *)(arg0))->unk4 > 0) {
        do {
            items = ((func_8020CB3C_S1 *)(arg0))->unk0;
            stride = *(s32 *)items;
            func_80271FD8(&sp10, arg1, (char *)items + (var_s0 * stride + 8));
            temp_f2 = (sp10.x * sp10.x) + (sp10.y * sp10.y) + (sp10.z * sp10.z);
            if ((var_s1 < 0) || (temp_f2 < var_f20)) {
                var_s1 = var_s0;
                var_f20 = temp_f2;
            }
            var_s0 += 1;
        } while (var_s0 < ((func_8020CB3C_S1 *)(arg0))->unk4);
    }
    return var_s1;
}
