#include "basetypes.h"

typedef struct func_80274BEC_S1 func_80274BEC_S1;
typedef struct func_80274BEC_S2 func_80274BEC_S2;
typedef struct func_80274BEC_S3 func_80274BEC_S3;
typedef union func_80274BEC_S1_U0 { s32 v0; f32 v1; } func_80274BEC_S1_U0;
typedef union func_80274BEC_S1_U4 { s32 v0; f32 v1; } func_80274BEC_S1_U4;
typedef union func_80274BEC_S1_U8 { s32 v0; f32 v1; } func_80274BEC_S1_U8;
typedef union func_80274BEC_S3_U0 { s32 v0; f32 v1; } func_80274BEC_S3_U0;
typedef union func_80274BEC_S3_U4 { s32 v0; f32 v1; } func_80274BEC_S3_U4;
typedef union func_80274BEC_S3_U8 { s32 v0; f32 v1; } func_80274BEC_S3_U8;
struct func_80274BEC_S1 {
    func_80274BEC_S1_U0 unk0;
    char pad0[0x4 - 0x0 - sizeof(func_80274BEC_S1_U0)];
    func_80274BEC_S1_U4 unk4;
    char pad4[0x8 - 0x4 - sizeof(func_80274BEC_S1_U4)];
    func_80274BEC_S1_U8 unk8;
};
struct func_80274BEC_S2 {
    s32 unk0;
    char pad0[0x4 - 0x0 - sizeof(s32)];
    s32 unk4;
    char pad4[0x8 - 0x4 - sizeof(s32)];
    s32 unk8;
    char pad8[0xC - 0x8 - sizeof(s32)];
    s32 unkC;
    char padC[0x10 - 0xC - sizeof(s32)];
    s32 unk10;
    char pad10[0x14 - 0x10 - sizeof(s32)];
    s32 unk14;
    char pad14[0x18 - 0x14 - sizeof(s32)];
    f32 unk18;
    char pad18[0x1C - 0x18 - sizeof(f32)];
    f32 unk1C;
    char pad1C[0x20 - 0x1C - sizeof(f32)];
    f32 unk20;
    char pad20[0x30 - 0x20 - sizeof(f32)];
    f32 unk30;
    char pad30[0x34 - 0x30 - sizeof(f32)];
    s32 unk34;
    char pad34[0x38 - 0x34 - sizeof(s32)];
    f32 unk38;
};
struct func_80274BEC_S3 {
    func_80274BEC_S3_U0 unk0;
    char pad0[0x4 - 0x0 - sizeof(func_80274BEC_S3_U0)];
    func_80274BEC_S3_U4 unk4;
    char pad4[0x8 - 0x4 - sizeof(func_80274BEC_S3_U4)];
    func_80274BEC_S3_U8 unk8;
};

/** Copy two 3-vectors, then derive an edge vector, its z-component twice, and a negated x. */
void func_80274BEC(void *arg0, void *arg1, void *arg2) {
    u8 *dst = (u8 *)arg0;
    u8 *a = (u8 *)arg1;
    u8 *b = (u8 *)arg2;
    s32 a0, a1, a2;
    s32 b0, b1, b2;
    f32 zdiff;

    a0 = ((func_80274BEC_S1 *)(a))->unk0.v0;
    a1 = ((func_80274BEC_S1 *)(a))->unk4.v0;
    a2 = ((func_80274BEC_S1 *)(a))->unk8.v0;
    ((func_80274BEC_S2 *)(dst))->unk0 = a0;
    ((func_80274BEC_S2 *)(dst))->unk4 = a1;
    ((func_80274BEC_S2 *)(dst))->unk8 = a2;
    b0 = ((func_80274BEC_S3 *)(b))->unk0.v0;
    b1 = ((func_80274BEC_S3 *)(b))->unk4.v0;
    b2 = ((func_80274BEC_S3 *)(b))->unk8.v0;
    ((func_80274BEC_S2 *)(dst))->unkC = b0;
    ((func_80274BEC_S2 *)(dst))->unk10 = b1;
    ((func_80274BEC_S2 *)(dst))->unk14 = b2;
    ((func_80274BEC_S2 *)(dst))->unk18 = ((func_80274BEC_S3 *)(b))->unk0.v1 - ((func_80274BEC_S1 *)(a))->unk0.v1;
    ((func_80274BEC_S2 *)(dst))->unk1C = ((func_80274BEC_S3 *)(b))->unk4.v1 - ((func_80274BEC_S1 *)(a))->unk4.v1;
    zdiff = ((func_80274BEC_S3 *)(b))->unk8.v1 - ((func_80274BEC_S1 *)(a))->unk8.v1;
    ((func_80274BEC_S2 *)(dst))->unk34 = 0;
    ((func_80274BEC_S2 *)(dst))->unk38 = -((func_80274BEC_S2 *)(dst))->unk18;
    ((func_80274BEC_S2 *)(dst))->unk20 = zdiff;
    ((func_80274BEC_S2 *)(dst))->unk30 = zdiff;
}
