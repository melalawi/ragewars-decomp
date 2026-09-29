#include "basetypes.h"

typedef struct func_802A6AC0_S1 func_802A6AC0_S1;
typedef struct func_802A6AC0_S2 func_802A6AC0_S2;
typedef struct func_802A6AC0_S3 func_802A6AC0_S3;
struct func_802A6AC0_S1 {
    char pad0[0x14];
    f32 unk14;
    char pad14[0x24 - 0x14 - sizeof(f32)];
    f32 unk24;
    char pad24[0x34 - 0x24 - sizeof(f32)];
    f32 unk34;
    char pad34[0x38 - 0x34 - sizeof(f32)];
    f32 unk38;
    char pad38[0x3C - 0x38 - sizeof(f32)];
    f32 unk3C;
};
struct func_802A6AC0_S2 {
    char pad0[0x4];
    f32 unk4;
    char pad4[0x8 - 0x4 - sizeof(f32)];
    f32 unk8;
    char pad8[0xC - 0x8 - sizeof(f32)];
    f32 unkC;
    char padC[0x10 - 0xC - sizeof(f32)];
    f32 unk10;
};
struct func_802A6AC0_S3 {
    char pad0[0x4];
    f32 unk4;
};

extern func_802A6AC0_S2 D_800D15E0;
extern func_802A6AC0_S3 D_800D15F0;

void func_802A6AC0(void *arg0) {
    if (((func_802A6AC0_S1 *)(arg0))->unk24 != 0.0f) {
        D_800D15E0.unk4 += ((func_802A6AC0_S1 *)(arg0))->unk34;
        D_800D15E0.unk8 += ((func_802A6AC0_S1 *)(arg0))->unk38;
        D_800D15E0.unkC += ((func_802A6AC0_S1 *)(arg0))->unk3C;
        D_800D15E0.unk10 += ((func_802A6AC0_S1 *)(arg0))->unk24;
    }
    D_800D15F0.unk4 += ((func_802A6AC0_S1 *)(arg0))->unk14;
}
