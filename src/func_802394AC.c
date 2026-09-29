#include "basetypes.h"

/* Spawns an emitter record: takes the head of the free list at 0x11D8 into the active list at 0x11EC (or reuses the record at 0x11F0 when none is free) and fills its position, scale, shared value and three rates converted by D_800C8630. */

typedef struct Vec3 {
    f32 x, y, z;
} Vec3;

extern f32 D_800C8630[];
extern void func_80255E78(void *list, void *node);
extern void func_80255C58(void *list, void *node);

typedef struct func_802394AC_S1 func_802394AC_S1;
typedef struct func_802394AC_S2 func_802394AC_S2;
struct func_802394AC_S1 {
    char pad0[0x8];
    Vec3 unk8;
    char pad8[0x14 - 0x8 - sizeof(Vec3)];
    f32 unk14;
    char pad14[0x18 - 0x14 - sizeof(f32)];
    s32 unk18;
    char pad18[0x1C - 0x18 - sizeof(s32)];
    f32 unk1C;
    char pad1C[0x2C - 0x1C - sizeof(f32)];
    s32 unk2C;
    char pad2C[0x30 - 0x2C - sizeof(s32)];
    f32 unk30;
    char pad30[0x40 - 0x30 - sizeof(f32)];
    s32 unk40;
    char pad40[0x44 - 0x40 - sizeof(s32)];
    f32 unk44;
};
struct func_802394AC_S2 {
    char pad0[0x11D8];
    char* unk11D8;
    char pad11D8[0x11F0 - 0x11D8 - sizeof(char*)];
    char* unk11F0;
};

static inline void set_emitter(char *node, f32 a, f32 b, f32 c, f32 scale, s32 value, Vec3 pos)
{
    ((func_802394AC_S1 *)(node))->unk8 = pos;
    ((func_802394AC_S1 *)(node))->unk14 = scale;
    ((func_802394AC_S1 *)(node))->unk18 = value;
    ((func_802394AC_S1 *)(node))->unk1C = a;
    ((func_802394AC_S1 *)(node))->unk2C = value;
    ((func_802394AC_S1 *)(node))->unk30 = b;
    ((func_802394AC_S1 *)(node))->unk40 = value;
    ((func_802394AC_S1 *)(node))->unk44 = c;
}

void func_802394AC(char *obj, f32 a, f32 b, f32 c, f32 scale, s32 value, Vec3 pos)
{
    char *node = ((func_802394AC_S2 *)(obj))->unk11D8;
    f32 k;

    if (node != 0) {
        func_80255E78(obj + 0x11D8, node);
        func_80255C58(obj + 0x11EC, node);
    } else {
        node = ((func_802394AC_S2 *)(obj))->unk11F0;
    }
    k = D_800C8630[1];
    set_emitter(node, a * k, b * k, c * k, scale, value, pos);
}
