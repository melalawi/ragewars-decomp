#include "basetypes.h"

typedef struct func_8029FBE4_S1 func_8029FBE4_S1;
typedef struct func_8029FBE4_S2 func_8029FBE4_S2;
struct func_8029FBE4_S1 {
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
    char pad28[0x30 - 0x28 - sizeof(f32)];
    f32 unk30;
    char pad30[0x34 - 0x30 - sizeof(f32)];
    f32 unk34;
    char pad34[0x38 - 0x34 - sizeof(f32)];
    f32 unk38;
};
struct func_8029FBE4_S2 {
    f32 unk0;
    char pad0[0x4 - 0x0 - sizeof(f32)];
    f32 unk4;
    char pad4[0x8 - 0x4 - sizeof(f32)];
    f32 unk8;
};

void func_8029FBE4(void *arg0, void *arg1) {
    char *m = (char *) arg0;
    char *v = (char *) arg1;

    ((func_8029FBE4_S1 *)(m))->unk0 = ((func_8029FBE4_S1 *)(m))->unk0 * ((func_8029FBE4_S2 *)(v))->unk0;
    ((func_8029FBE4_S1 *)(m))->unk10 = ((func_8029FBE4_S1 *)(m))->unk10 * ((func_8029FBE4_S2 *)(v))->unk0;
    ((func_8029FBE4_S1 *)(m))->unk20 = ((func_8029FBE4_S1 *)(m))->unk20 * ((func_8029FBE4_S2 *)(v))->unk0;
    ((func_8029FBE4_S1 *)(m))->unk4 = ((func_8029FBE4_S1 *)(m))->unk4 * ((func_8029FBE4_S2 *)(v))->unk4;
    ((func_8029FBE4_S1 *)(m))->unk14 = ((func_8029FBE4_S1 *)(m))->unk14 * ((func_8029FBE4_S2 *)(v))->unk4;
    ((func_8029FBE4_S1 *)(m))->unk24 = ((func_8029FBE4_S1 *)(m))->unk24 * ((func_8029FBE4_S2 *)(v))->unk4;
    ((func_8029FBE4_S1 *)(m))->unk8 = ((func_8029FBE4_S1 *)(m))->unk8 * ((func_8029FBE4_S2 *)(v))->unk8;
    ((func_8029FBE4_S1 *)(m))->unk18 = ((func_8029FBE4_S1 *)(m))->unk18 * ((func_8029FBE4_S2 *)(v))->unk8;
    ((func_8029FBE4_S1 *)(m))->unk28 = ((func_8029FBE4_S1 *)(m))->unk28 * ((func_8029FBE4_S2 *)(v))->unk8;
    ((func_8029FBE4_S1 *)(m))->unk30 = ((func_8029FBE4_S1 *)(m))->unk30 * ((func_8029FBE4_S2 *)(v))->unk0;
    ((func_8029FBE4_S1 *)(m))->unk34 = ((func_8029FBE4_S1 *)(m))->unk34 * ((func_8029FBE4_S2 *)(v))->unk4;
    ((func_8029FBE4_S1 *)(m))->unk38 = ((func_8029FBE4_S1 *)(m))->unk38 * ((func_8029FBE4_S2 *)(v))->unk8;
}
