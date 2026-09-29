#include "basetypes.h"

extern f32 D_800C7398;
extern f32 D_800CE3C8;

typedef struct func_80218E98_S1 func_80218E98_S1;
typedef struct func_80218E98_S2 func_80218E98_S2;
typedef struct func_80218E98_S3 func_80218E98_S3;
struct func_80218E98_S1 {
    char pad0[0x4];
    f32 unk4;
};
struct func_80218E98_S2 {
    char pad0[0x4];
    f32 unk4;
};
struct func_80218E98_S3 {
    volatile s32 unk0;
    char pad0[0x4 - 0x0 - sizeof(volatile s32)];
    volatile s32 unk4;
    char pad4[0x8 - 0x4 - sizeof(volatile s32)];
    volatile s32 unk8;
    char pad8[0xC - 0x8 - sizeof(volatile s32)];
    volatile s32 unkC;
    char padC[0x14 - 0xC - sizeof(volatile s32)];
    volatile s32 unk14;
    char pad14[0x18 - 0x14 - sizeof(volatile s32)];
    volatile s32 unk18;
    char pad18[0x24 - 0x18 - sizeof(volatile s32)];
    volatile f32 unk24;
    char pad24[0x28 - 0x24 - sizeof(volatile f32)];
    volatile s32 unk28;
    char pad28[0x2C - 0x28 - sizeof(volatile s32)];
    volatile f32 unk2C;
    char pad2C[0x6C - 0x2C - sizeof(volatile f32)];
    volatile s32 unk6C;
    char pad6C[0x70 - 0x6C - sizeof(volatile s32)];
    volatile s32 unk70;
};

/** Reset the object and initialize its four descending-offset records. */
void func_80218E98(volatile char *arg0) {
    s32 i;
    s32 minus_one = -1;
    f32 scale = ((func_80218E98_S1 *)(&D_800C7398))->unk4;
    f32 value = ((func_80218E98_S2 *)(&D_800CE3C8))->unk4;

    ((func_80218E98_S3 *)(arg0))->unk0 = 0;
    ((func_80218E98_S3 *)(arg0))->unk4 = 0;
    ((func_80218E98_S3 *)(arg0))->unk8 = 0;
    ((func_80218E98_S3 *)(arg0))->unkC = 0;
    ((func_80218E98_S3 *)(arg0))->unk14 = 0;
    ((func_80218E98_S3 *)(arg0))->unk6C = minus_one;
    ((func_80218E98_S3 *)(arg0))->unk18 = 4;
    ((func_80218E98_S3 *)(arg0))->unk70 = minus_one;

    for (i = 0; i < 4; i++, arg0 += 0x14) {
        f32 scaled = i * scale;
        ((func_80218E98_S3 *)(arg0))->unk28 = 0;
        ((func_80218E98_S3 *)(arg0))->unk2C = value;
        ((func_80218E98_S3 *)(arg0))->unk24 = -scaled;
    }
}
