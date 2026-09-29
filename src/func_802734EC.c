#include "basetypes.h"

typedef struct func_802734EC_S1 func_802734EC_S1;
struct func_802734EC_S1 {
    f32 unk0;
    char pad0[0x4 - 0x0 - sizeof(f32)];
    f32 unk4;
    char pad4[0x8 - 0x4 - sizeof(f32)];
    f32 unk8;
    char pad8[0x10 - 0x8 - sizeof(f32)];
    f32 unk10;
    char pad10[0x14 - 0x10 - sizeof(f32)];
    f32 unk14;
    char pad14[0x18 - 0x14 - sizeof(f32)];
    f32 unk18;
    char pad18[0x20 - 0x18 - sizeof(f32)];
    f32 unk20;
    char pad20[0x24 - 0x20 - sizeof(f32)];
    f32 unk24;
    char pad24[0x28 - 0x24 - sizeof(f32)];
    f32 unk28;
};

/** Scale the first three rows of a matrix's basis columns by sx, sy, sz. */
void func_802734EC(void *arg0, f32 sx, f32 sy, f32 sz) {
    u8 *o = (u8 *)arg0;

    ((func_802734EC_S1 *)(o))->unk0 = ((func_802734EC_S1 *)(o))->unk0 * sx;
    ((func_802734EC_S1 *)(o))->unk4 = ((func_802734EC_S1 *)(o))->unk4 * sx;
    ((func_802734EC_S1 *)(o))->unk8 = ((func_802734EC_S1 *)(o))->unk8 * sx;
    ((func_802734EC_S1 *)(o))->unk10 = ((func_802734EC_S1 *)(o))->unk10 * sy;
    ((func_802734EC_S1 *)(o))->unk14 = ((func_802734EC_S1 *)(o))->unk14 * sy;
    ((func_802734EC_S1 *)(o))->unk18 = ((func_802734EC_S1 *)(o))->unk18 * sy;
    ((func_802734EC_S1 *)(o))->unk20 = ((func_802734EC_S1 *)(o))->unk20 * sz;
    ((func_802734EC_S1 *)(o))->unk24 = ((func_802734EC_S1 *)(o))->unk24 * sz;
    ((func_802734EC_S1 *)(o))->unk28 = ((func_802734EC_S1 *)(o))->unk28 * sz;
}
