#include "common/types.h"
#include "span_1000/code_80283D24.h"
#include "span_C76B0/data.h"
#include "types.h"






extern func_80284AF4_G2 D_80140FA0;

extern f32 func_8024D284_de(void *arg0);
extern f32 func_802726BC_de(f32 *arg0, f32 *arg1);
extern void func_80282E98_de(void *arg0, void *arg1);








void func_80284B20_de(void *arg0) {
    Vec3 point;
    void *node;
    void *point_ptr;
    int actor_id;
    s16 amount;
    int stop;
    f32 radius_sq;
    f32 height_scale;

    amount = ((func_8025E58C_S1 *)(((func_80284AF4_S1 *)(arg0))->unk118))->unk10;
    radius_sq = (f32)amount;
    if (radius_sq <= 0.0f) {
        return;
    }
    radius_sq *= D_800C4E90_de;
    node = D_80140FA0.unk0;
    radius_sq *= radius_sq;
    if (node == 0) {
        return;
    }

    point_ptr = &point;
    actor_id = 0x40F;
    height_scale = (&D_800C4E90_de)[1];
    do {
        point = ((func_80284AF4_S3 *)(node))->unk8;
        stop = 0;
        if (((func_80284AF4_S1 *)(arg0))->unk4 != actor_id) {
            point.y += func_8024D284_de(node) * height_scale;
        }
        if (func_802726BC_de(&((func_80284AF4_S1 *)(arg0))->unk8, point_ptr) < radius_sq) {
            func_80282E98_de(arg0, node);
            if (((func_80284AF4_S1 *)(arg0))->unk4 == actor_id) {
                stop = 1;
            }
        }
        if (stop != 0) {
            node = 0;
        } else {
            node = ((func_80284AF4_S3 *)(node))->unk16E0;
        }
    } while (node != 0);
}
