#include "basetypes.h"

typedef struct Vector3 {
    f32 x;
    f32 y;
    f32 z;
} Vector3;

typedef struct RangeNode {
    char pad0[4];
    struct RangeNode *next;
    u16 *radius;
    char padC[4];
    s16 x;
    s16 y;
    s16 z;
    s16 active;
} RangeNode;

extern f32 D_800C9580;
extern f32 D_800C9584;
extern void func_802720EC(f32 *);
extern void func_8027200C(void *, void *, f32);
extern void func_80271FA4(Vector3 *, Vector3 *, Vector3 *);

void func_80268A40(RangeNode **arg0, u32 arg1, u32 arg2, u32 arg3,
                   Vector3 *arg4, f32 *arg5) {
    Vector3 delta;
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f3;
    f32 var_f2;
    f32 var_f2_2;
    f32 var_f2_3;
    RangeNode *node;
    u16 *radius_ptr;

    node = *arg0;
    if (node != 0) {
        do {
            if (node->active != 0) {
                var_f2 = *(f32 *)&arg1 - (f32)node->x;
                radius_ptr = node->radius;
                if (var_f2 < 0.0f) {
                    var_f2 = -var_f2;
                }
                temp_f1 = *(f32 *)&arg2 - (f32)node->y;
                if (temp_f1 < 0.0f) {
                    var_f2_2 = var_f2 - temp_f1;
                } else {
                    var_f2_2 = var_f2 + temp_f1;
                }
                temp_f0 = *(f32 *)&arg3 - (f32)node->z;
                if (temp_f0 < 0.0f) {
                    var_f2_3 = var_f2_2 - temp_f0;
                } else {
                    var_f2_3 = var_f2_2 + temp_f0;
                }
                temp_f3 = (f32)*radius_ptr;
                if (var_f2_3 < temp_f3) {
                    delta.x = (f32)node->x - *(f32 *)&arg1;
                    delta.y = (f32)node->y - *(f32 *)&arg2;
                    delta.z = (f32)node->z - *(f32 *)&arg3;
                    temp_f20 = D_800C9580 - (var_f2_3 / temp_f3);
                    func_802720EC(&delta);
                    temp_f20_2 = temp_f20 * D_800C9584;
                    func_8027200C(&delta, &delta, temp_f20_2);
                    func_80271FA4(arg4, arg4, &delta);
                    *arg5 -= temp_f20_2;
                }
            }
            node = node->next;
        } while (node != 0);
    }
}
