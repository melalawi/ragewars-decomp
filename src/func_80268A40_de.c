#include "common/types.h"
#include "span_1000/code_802688AC.h"
#include "span_C76B0/data.h"
#include "types.h"







extern void func_8027207C_de(f32 *);
extern void func_80271F9C_de(void *, void *, f32);
extern void func_80271F34_de(Vec3 *, Vec3 *, Vec3 *);

void func_80268A40_de(RangeNode **arg0, u32 arg1, u32 arg2, u32 arg3,
                   Vec3 *arg4, f32 *arg5) {
    Vec3 delta;
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
                    temp_f20 = D_800C4490_de - (var_f2_3 / temp_f3);
                    func_8027207C_de(&delta);
                    temp_f20_2 = temp_f20 * D_800C4494_de;
                    func_80271F9C_de(&delta, &delta, temp_f20_2);
                    func_80271F34_de(arg4, arg4, &delta);
                    *arg5 -= temp_f20_2;
                }
            }
            node = node->next;
        } while (node != 0);
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C43C0_4 = 1.0f;
const float unbake_rodata_800C43C4_4 = 0.400000006f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C9580_4 = 1.0f;
const float unbake_rodata_800C9584_4 = 0.400000006f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C4740_4 = 1.0f;
const float unbake_rodata_800C4744_4 = 0.400000006f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C4780_4 = 1.0f;
const float unbake_rodata_800C4784_4 = 0.400000006f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C4490_4 = 1.0f;
const float unbake_rodata_800C4494_4 = 0.400000006f;
#endif
