#include "basetypes.h"

typedef struct func_802A01A0_S1 func_802A01A0_S1;
typedef struct func_802A01A0_S2 func_802A01A0_S2;
typedef struct func_802A01A0_S3 func_802A01A0_S3;
struct func_802A01A0_S1 {
    f32 unk0;
    char pad0[0x4 - 0x0 - sizeof(f32)];
    f32 unk4;
    char pad4[0x8 - 0x4 - sizeof(f32)];
    f32 unk8;
};
struct func_802A01A0_S2 {
    f32 unk0;
    char pad0[0x4 - 0x0 - sizeof(f32)];
    f32 unk4;
    char pad4[0x8 - 0x4 - sizeof(f32)];
    f32 unk8;
};
struct func_802A01A0_S3 {
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

void func_802A01A0(void *arg0, void *arg1, void *arg2, s32 arg3) {
    u8 *m = (u8 *) arg0;
    s32 i;
    f32 vx, vy, vz;

    i = 0;
    if (arg3 > 0) {
        do {
            u8 *v = (u8 *) arg2 + i * 0xC;
            u8 *out = (u8 *) arg1 + i * 0xC;

            vx = ((func_802A01A0_S1 *)(v))->unk0;
            vy = ((func_802A01A0_S1 *)(v))->unk4;
            vz = ((func_802A01A0_S1 *)(v))->unk8;
            ((func_802A01A0_S2 *)(out))->unk0 = (((func_802A01A0_S3 *)(m))->unk0 * vx) + (((func_802A01A0_S3 *)(m))->unk10 * vy) + (((func_802A01A0_S3 *)(m))->unk20 * vz) + ((func_802A01A0_S3 *)(m))->unk30;
            ((func_802A01A0_S2 *)(out))->unk4 = (((func_802A01A0_S3 *)(m))->unk4 * vx) + (((func_802A01A0_S3 *)(m))->unk14 * vy) + (((func_802A01A0_S3 *)(m))->unk24 * vz) + ((func_802A01A0_S3 *)(m))->unk34;
            ((func_802A01A0_S2 *)(out))->unk8 = (((func_802A01A0_S3 *)(m))->unk8 * vx) + (((func_802A01A0_S3 *)(m))->unk18 * vy) + (((func_802A01A0_S3 *)(m))->unk28 * vz) + ((func_802A01A0_S3 *)(m))->unk38;
            i += 1;
        } while (i < arg3);
    }
}
