#include "basetypes.h"

typedef struct Vec3 {
    f32 x;
    f32 y;
    f32 z;
} Vec3;

extern f32 D_800C9F80;
extern void *D_80145060;

extern f32 func_8024D274(void *arg0);
extern f32 func_8027272C(f32 *arg0, f32 *arg1);
extern void func_80282E6C(void *arg0, void *arg1);

void func_80284AF4(void *arg0) {
    Vec3 point;
    void *node;
    void *point_ptr;
    int actor_id;
    s16 amount;
    int stop;
    f32 radius_sq;
    f32 height_scale;

    amount = *(s16 *)((char *)*(void **)((char *)arg0 + 0x118) + 0x10);
    radius_sq = (f32)amount;
    if (radius_sq <= 0.0f) {
        return;
    }
    radius_sq *= D_800C9F80;
    node = D_80145060;
    radius_sq *= radius_sq;
    if (node == 0) {
        return;
    }

    point_ptr = &point;
    actor_id = 0x40F;
    height_scale = *(&D_800C9F80 + 1);
    do {
        point = *(Vec3 *)((char *)node + 8);
        stop = 0;
        if (*(u16 *)((char *)arg0 + 4) != actor_id) {
            point.y += func_8024D274(node) * height_scale;
        }
        if (func_8027272C((f32 *)((char *)arg0 + 8), point_ptr) < radius_sq) {
            func_80282E6C(arg0, node);
            if (*(u16 *)((char *)arg0 + 4) == actor_id) {
                stop = 1;
            }
        }
        if (stop != 0) {
            node = 0;
        } else {
            node = *(void **)((char *)node + 0x16E0);
        }
    } while (node != 0);
}
