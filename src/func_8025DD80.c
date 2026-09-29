#include "basetypes.h"

extern f32 D_800C9120[];
extern f32 D_800C9128;

extern void func_802B3688(s32 arg0, s32 arg1);
extern void func_802B5000(s32 arg0, s32 arg1);
extern void func_802B4F80(s32 arg0, s32 arg1);
extern void func_802B4FB0(s32 arg0, s32 arg1, s8 arg2);
extern void func_802B5030(s32 arg0, s16 arg1);

typedef struct func_8025DD80_S1 func_8025DD80_S1;
typedef struct func_8025DD80_S2 func_8025DD80_S2;
typedef struct func_8025DD80_S3 func_8025DD80_S3;
struct func_8025DD80_S1 {
    char pad0[0x8];
    void* unk8;
    char pad8[0xC - 0x8 - sizeof(void*)];
    s32 unkC;
    char padC[0x10 - 0xC - sizeof(s32)];
    s32 unk10;
    char pad10[0x14 - 0x10 - sizeof(s32)];
    s32 unk14;
    char pad14[0x24 - 0x14 - sizeof(s32)];
    s32 unk24;
    char pad24[0x2C - 0x24 - sizeof(s32)];
    f32 unk2C;
};
struct func_8025DD80_S2 {
    char pad0[0x4];
    s32 unk4;
};
struct func_8025DD80_S3 {
    char pad0[0x2BA4];
    f32 unk2BA4;
};

void func_8025DD80(void *arg0) {
    s32 i;
    f32 scaled;

    i = 0;
    func_802B3688(((func_8025DD80_S1 *)(arg0))->unk10, ((func_8025DD80_S1 *)(arg0))->unkC);
    func_802B5000(((func_8025DD80_S1 *)(arg0))->unk14, ((func_8025DD80_S1 *)(arg0))->unk10);
    func_802B4F80(((func_8025DD80_S1 *)(arg0))->unk14,
                  ((func_8025DD80_S2 *)(((func_8025DD80_S1 *)(arg0))->unk8))->unk4);
    do {
        func_802B4FB0(((func_8025DD80_S1 *)(arg0))->unk14, i & 0xFF, 0);
        i++;
    } while (i < 0x14);

    scaled = (f32)((func_8025DD80_S1 *)(arg0))->unk24 *
             (((func_8025DD80_S3 *)(*(void **)arg0))->unk2BA4 * D_800C9120[1]);
    func_802B5030(((func_8025DD80_S1 *)(arg0))->unk14, (s16)(s32)(scaled * D_800C9128));
    ((func_8025DD80_S1 *)(arg0))->unk2C = scaled;
}
