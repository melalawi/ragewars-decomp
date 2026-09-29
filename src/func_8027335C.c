#include "basetypes.h"

typedef struct {
    f32 x;
    f32 y;
    f32 z;
} Vector3;

extern f32 func_802BC380(f32);

typedef struct func_8027335C_S1 func_8027335C_S1;
struct func_8027335C_S1 {
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

void func_8027335C(void *arg0, f32 *arg1) {
    char *m = (char *)arg0;
    Vector3 tmp;

    tmp.x = ((func_8027335C_S1 *)(m))->unk0;
    tmp.y = ((func_8027335C_S1 *)(m))->unk4;
    tmp.z = ((func_8027335C_S1 *)(m))->unk8;
    arg1[0] = func_802BC380((tmp.x * tmp.x) + (tmp.y * tmp.y) + (tmp.z * tmp.z));

    tmp.x = ((func_8027335C_S1 *)(m))->unk10;
    tmp.y = ((func_8027335C_S1 *)(m))->unk14;
    tmp.z = ((func_8027335C_S1 *)(m))->unk18;
    arg1[1] = func_802BC380((tmp.x * tmp.x) + (tmp.y * tmp.y) + (tmp.z * tmp.z));

    tmp.x = ((func_8027335C_S1 *)(m))->unk20;
    tmp.y = ((func_8027335C_S1 *)(m))->unk24;
    tmp.z = ((func_8027335C_S1 *)(m))->unk28;
    arg1[2] = func_802BC380((tmp.x * tmp.x) + (tmp.y * tmp.y) + (tmp.z * tmp.z));
}
