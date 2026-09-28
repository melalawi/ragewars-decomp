/* Moves an object horizontally to (x, z) through the collision mover func_80243A80 while keeping its
 * height above the ground: the velocity at 0x1C is zeroed for the move and the global D_801040D0 is
 * preserved, then both are restored. */
#include "basetypes.h"

typedef struct {
    f32 x;
    f32 y;
    f32 z;
} Vec3;

typedef struct {
    s32 w[20];
} InstanceHdr;

extern s32 D_801040D0;
extern f32 func_80275E44(s32, f32, f32);
extern s32 func_80243A80(InstanceHdr *, Vec3, s32 *);

void func_802461D8(InstanceHdr *arg0, f32 x, f32 z) {
    char *o = (char *)arg0;
    Vec3 saved;
    Vec3 pos;
    s32 keep;
    s32 *mask = &D_801040D0;
    f32 height;

    height = *(f32 *)(o + 0xC) - func_80275E44(*(s32 *)(o + 0x14), *(f32 *)(o + 0x8), *(f32 *)(o + 0x10));
    saved = *(Vec3 *)(o + 0x1C);
    *(f32 *)(o + 0x1C) = *(f32 *)(o + 0x20) = *(f32 *)(o + 0x24) = 0.0f;
    pos.x = x;
    pos.y = *(f32 *)(o + 0xC);
    pos.z = z;
    keep = *mask;
    func_80243A80(arg0, pos, mask);
    *mask = keep;
    *(Vec3 *)(o + 0x1C) = saved;
    *(f32 *)(o + 0xC) = func_80275E44(*(s32 *)(o + 0x14), *(f32 *)(o + 0x8), *(f32 *)(o + 0x10)) + height;
}
