#include "basetypes.h"

typedef struct Vec3 {
    f32 x;
    f32 y;
    f32 z;
} Vec3;

extern f32 D_800CAF50;
extern void *func_802A6724(void *arg0, s32 arg1);
extern void func_80273340(char *object, f32 *output);
extern void func_8027335C(void *arg0, f32 *arg1);
extern void func_802702EC(void *arg0, f32 *arg1);
extern void func_80271FD8(Vec3 *arg0, Vec3 *arg1, Vec3 *arg2);
extern f32 func_802BC380(f32);

void *func_802A35C0(void *arg0, void *arg1, void *arg2) {
    Vec3 sp10;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 var_f1;
    void *temp_s1;
    char *var_s0;
    char *temp_s2;

    temp_s2 = func_802A6724(arg0, (s32)arg1);
    var_s0 = temp_s2;
    if (temp_s2 != 0) {
        *(s32 *)((char *)arg1 + 0x50) = 0;
        *(f32 *)(var_s0 + 8) = *(f32 *)(*(char **)((char *)arg1 + 8) + 8);
        *(s32 *)(var_s0 + 0xB0) = 0;
        func_80273340(arg2, (f32 *)(var_s0 + 0x10));
        if (*(s32 *)((char *)arg1 + 0x3C) & 4) {
            func_8027335C(arg2, (f32 *)(var_s0 + 0x1C));
        } else {
            func_802702EC(arg2, (f32 *)(var_s0 + 0x28));
            func_802702EC(arg2, (f32 *)(var_s0 + 0x68));
        }
        temp_s1 = *(void **)var_s0;
        *(s32 *)(var_s0 + 0xAC) = 0;
        *(f32 *)(var_s0 + 0xA8) = 0.0f;
        if (temp_s1 != 0) {
            func_80271FD8(&sp10, (Vec3 *)(var_s0 + 0x10), (Vec3 *)((char *)temp_s1 + 0x10));
            temp_f0 = func_802BC380((sp10.x * sp10.x) + (sp10.y * sp10.y) + (sp10.z * sp10.z));
            *(f32 *)((char *)temp_s1 + 0xAC) = temp_f0;
            *(f32 *)((char *)arg1 + 0x4C) += temp_f0;
        }
        if (*(u8 *)(*(char **)((char *)arg1 + 8) + 0x1C) == 0) {
            if (*(f32 *)((char *)arg1 + 0x4C) > 0.0f) {
                var_f1 = 0.0f;
                var_s0 = *(char **)((char *)arg1 + 0x40);
                if (var_s0 != 0) {
                    do {
                        *(f32 *)(var_s0 + 0xA8) = var_f1 / *(f32 *)((char *)arg1 + 0x4C);
                        temp_f0_2 = *(f32 *)(var_s0 + 0xAC);
                        var_s0 = *(char **)(var_s0 + 4);
                        var_f1 += temp_f0_2;
                    } while (var_s0 != 0);
                }
            }
        } else {
            if (temp_s1 != 0) {
                *(f32 *)((char *)arg1 + 0x28) += *(f32 *)((char *)temp_s1 + 0xAC) * D_800CAF50;
            }
            *(f32 *)(var_s0 + 0xA8) = *(f32 *)((char *)arg1 + 0x28);
        }
    }
    return temp_s2;
}
