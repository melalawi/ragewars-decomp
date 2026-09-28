#include "basetypes.h"

/* Spawns an emitter record: takes the head of the free list at 0x11D8 into the active list at 0x11EC (or reuses the record at 0x11F0 when none is free) and fills its position, scale, shared value and three rates converted by D_800C8630. */

typedef struct Vec3 {
    f32 x, y, z;
} Vec3;

extern f32 D_800C8630[];
extern void func_80255E78(void *list, void *node);
extern void func_80255C58(void *list, void *node);

static inline void set_emitter(char *node, f32 a, f32 b, f32 c, f32 scale, s32 value, Vec3 pos)
{
    *(Vec3 *)(node + 0x8) = pos;
    *(f32 *)(node + 0x14) = scale;
    *(s32 *)(node + 0x18) = value;
    *(f32 *)(node + 0x1C) = a;
    *(s32 *)(node + 0x2C) = value;
    *(f32 *)(node + 0x30) = b;
    *(s32 *)(node + 0x40) = value;
    *(f32 *)(node + 0x44) = c;
}

void func_802394AC(char *obj, f32 a, f32 b, f32 c, f32 scale, s32 value, Vec3 pos)
{
    char *node = *(char **)(obj + 0x11D8);
    f32 k;

    if (node != 0) {
        func_80255E78(obj + 0x11D8, node);
        func_80255C58(obj + 0x11EC, node);
    } else {
        node = *(char **)(obj + 0x11F0);
    }
    k = D_800C8630[1];
    set_emitter(node, a * k, b * k, c * k, scale, value, pos);
}
