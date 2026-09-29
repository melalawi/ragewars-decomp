#include "basetypes.h"

extern f32 D_800C73B4;
extern f32 D_800CE3C8;

typedef struct func_80219124_S1 func_80219124_S1;
typedef struct func_80219124_S2 func_80219124_S2;
struct func_80219124_S1 {
    char pad0[0x4];
    f32 unk4;
};
struct func_80219124_S2 {
    char pad0[0x1C];
    volatile s32 unk1C;
    char pad1C[0x20 - 0x1C - sizeof(volatile s32)];
    volatile s32 unk20;
    char pad20[0x24 - 0x20 - sizeof(volatile s32)];
    volatile f32 unk24;
    char pad24[0x28 - 0x24 - sizeof(volatile f32)];
    volatile s32 unk28;
    char pad28[0x2C - 0x28 - sizeof(volatile s32)];
    volatile f32 unk2C;
    char pad2C[0x6C - 0x2C - sizeof(volatile f32)];
    volatile s32 unk6C;
};

/** Initialize the four records attached to an object. */
void func_80219124(volatile char *arg0) {
    s32 i;
    f32 scale = D_800C73B4;
    f32 value = ((func_80219124_S1 *)(&D_800CE3C8))->unk4;

    ((func_80219124_S2 *)(arg0))->unk6C = -1;
    for (i = 0; i < 4; i++, arg0 += 0x14) {
        ((func_80219124_S2 *)(arg0))->unk1C = i;
        ((func_80219124_S2 *)(arg0))->unk20 = 1;
        ((func_80219124_S2 *)(arg0))->unk28 = 0;
        ((func_80219124_S2 *)(arg0))->unk2C = value;
        ((func_80219124_S2 *)(arg0))->unk24 = i * scale;
    }
}
