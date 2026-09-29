#include "basetypes.h"

typedef struct Vec3 {
    f32 x;
    f32 y;
    f32 z;
} Vec3;

extern f32 D_800C9F80;
typedef struct { f32 first; f32 second; } D_800C9F80_Pair;
typedef struct { void * unk0; } func_80284AF4_G2;
extern func_80284AF4_G2 D_80145060;

extern f32 func_8024D274(void *arg0);
extern f32 func_8027272C(f32 *arg0, f32 *arg1);
extern void func_80282E6C(void *arg0, void *arg1);

typedef struct func_80284AF4_S1 func_80284AF4_S1;
typedef struct func_80284AF4_S2 func_80284AF4_S2;
typedef struct func_80284AF4_S3 func_80284AF4_S3;
struct func_80284AF4_S1 {
    char pad0[0x4];
    u16 unk4;
    char pad4[0x8 - 0x4 - sizeof(u16)];
    f32 unk8;
    char pad8[0x118 - 0x8 - sizeof(f32)];
    void* unk118;
};
struct func_80284AF4_S2 {
    char pad0[0x10];
    s16 unk10;
};
struct func_80284AF4_S3 {
    char pad0[0x8];
    Vec3 unk8;
    char pad8[0x16E0 - 0x8 - sizeof(Vec3)];
    void* unk16E0;
};

void func_80284AF4(void *arg0) {
    Vec3 point;
    void *node;
    void *point_ptr;
    int actor_id;
    s16 amount;
    int stop;
    f32 radius_sq;
    f32 height_scale;

    amount = ((func_80284AF4_S2 *)(((func_80284AF4_S1 *)(arg0))->unk118))->unk10;
    radius_sq = (f32)amount;
    if (radius_sq <= 0.0f) {
        return;
    }
    radius_sq *= D_800C9F80;
    node = D_80145060.unk0;
    radius_sq *= radius_sq;
    if (node == 0) {
        return;
    }

    point_ptr = &point;
    actor_id = 0x40F;
    height_scale = (&D_800C9F80)[1];
    do {
        point = ((func_80284AF4_S3 *)(node))->unk8;
        stop = 0;
        if (((func_80284AF4_S1 *)(arg0))->unk4 != actor_id) {
            point.y += func_8024D274(node) * height_scale;
        }
        if (func_8027272C(&((func_80284AF4_S1 *)(arg0))->unk8, point_ptr) < radius_sq) {
            func_80282E6C(arg0, node);
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
