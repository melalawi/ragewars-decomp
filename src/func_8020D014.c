#include "basetypes.h"

extern f32 D_800C6E88;
extern f32 D_800C6E8C;

typedef struct func_8020D014_S1 func_8020D014_S1;
typedef struct func_8020D014_S2 func_8020D014_S2;
struct func_8020D014_S1 {
    char pad0[0x1C];
    f32 unk1C;
    char pad1C[0x20 - 0x1C - sizeof(f32)];
    s32 unk20;
    char pad20[0x24 - 0x20 - sizeof(s32)];
    void* unk24;
};
struct func_8020D014_S2 {
    char pad0[0x4];
    f32 unk4;
    char pad4[0x8 - 0x4 - sizeof(f32)];
    s32 unk8;
    char pad8[0x10 - 0x8 - sizeof(s32)];
    void* unk10;
    char pad10[0x18 - 0x10 - sizeof(void*)];
    s32 unk18;
    char pad18[0x1C - 0x18 - sizeof(s32)];
    s32 unk1C;
    char pad1C[0x20 - 0x1C - sizeof(s32)];
    s32 unk20;
    char pad20[0x24 - 0x20 - sizeof(s32)];
    s32 unk24;
    char pad24[0x28 - 0x24 - sizeof(s32)];
    s32 unk28;
    char pad28[0x2C - 0x28 - sizeof(s32)];
    s32 unk2C;
    char pad2C[0x30 - 0x2C - sizeof(s32)];
    s32 unk30;
};

void func_8020D014(void *arg0) {
    void *var_v0;
    f32 k;

    var_v0 = ((func_8020D014_S1 *)(arg0))->unk24;
    if (var_v0 != 0) {
        k = D_800C6E88;
        do {
            ((func_8020D014_S2 *)(var_v0))->unk4 = k;
            ((func_8020D014_S2 *)(var_v0))->unk8 = -1;
            ((func_8020D014_S2 *)(var_v0))->unk18 = 0;
            ((func_8020D014_S2 *)(var_v0))->unk1C = 0;
            ((func_8020D014_S2 *)(var_v0))->unk20 = 0;
            ((func_8020D014_S2 *)(var_v0))->unk24 = 0;
            ((func_8020D014_S2 *)(var_v0))->unk28 = 0;
            ((func_8020D014_S2 *)(var_v0))->unk2C = 0;
            ((func_8020D014_S2 *)(var_v0))->unk30 = 0;
            var_v0 = ((func_8020D014_S2 *)(var_v0))->unk10;
        } while (var_v0 != 0);
    }
    ((func_8020D014_S1 *)(arg0))->unk1C = D_800C6E8C;
    ((func_8020D014_S1 *)(arg0))->unk20 = -1;
}
