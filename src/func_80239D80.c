#include "basetypes.h"

extern f32 D_800C8660;

typedef struct func_80239D80_S1 func_80239D80_S1;
typedef struct func_80239D80_S2 func_80239D80_S2;
typedef struct func_80239D80_S3 func_80239D80_S3;
typedef struct func_80239D80_S4 func_80239D80_S4;
struct func_80239D80_S1 {
    char pad0[0x8];
    s32 unk8;
    char pad8[0xC - 0x8 - sizeof(s32)];
    s32 unkC;
    char padC[0x10 - 0xC - sizeof(s32)];
    s32 unk10;
    char pad10[0x14 - 0x10 - sizeof(s32)];
    f32 unk14;
};
struct func_80239D80_S2 {
    char pad0[0x4];
    s32 unk4;
    char pad4[0x8 - 0x4 - sizeof(s32)];
    s32 unk8;
    char pad8[0xC - 0x8 - sizeof(s32)];
    s32 unkC;
    char padC[0x10 - 0xC - sizeof(s32)];
    s32 unk10;
};
struct func_80239D80_S3 {
    char pad0[0x4];
    s32 unk4;
    char pad4[0x8 - 0x4 - sizeof(s32)];
    s32 unk8;
    char pad8[0xC - 0x8 - sizeof(s32)];
    s32 unkC;
    char padC[0x10 - 0xC - sizeof(s32)];
    s32 unk10;
};
struct func_80239D80_S4 {
    char pad0[0x4];
    s32 unk4;
    char pad4[0x8 - 0x4 - sizeof(s32)];
    s32 unk8;
    char pad8[0xC - 0x8 - sizeof(s32)];
    s32 unkC;
    char padC[0x10 - 0xC - sizeof(s32)];
    s32 unk10;
};

/** Zero the object's vector fields and reset the scale field to the default. */
void func_80239D80(void *arg0) {
    u8 *o = (u8 *)arg0;
    u8 *v0;
    u8 *v1;
    u8 *v2;
    f32 diag;

    diag = D_800C8660;
    v0 = o + 0x18;
    ((func_80239D80_S1 *)(o))->unk8 = 0;
    ((func_80239D80_S1 *)(o))->unkC = 0;
    ((func_80239D80_S1 *)(o))->unk10 = 0;
    ((func_80239D80_S1 *)(o))->unk14 = diag;
    ((func_80239D80_S2 *)(v0))->unk4 = 0;
    ((func_80239D80_S2 *)(v0))->unk8 = 0;
    ((func_80239D80_S2 *)(v0))->unkC = 0;
    ((func_80239D80_S2 *)(v0))->unk10 = 0;
    v1 = o + 0x2C;
    v2 = o + 0x40;
    ((func_80239D80_S3 *)(v1))->unk4 = 0;
    ((func_80239D80_S3 *)(v1))->unk8 = 0;
    ((func_80239D80_S3 *)(v1))->unkC = 0;
    ((func_80239D80_S3 *)(v1))->unk10 = 0;
    ((func_80239D80_S4 *)(v2))->unk4 = 0;
    ((func_80239D80_S4 *)(v2))->unk8 = 0;
    ((func_80239D80_S4 *)(v2))->unkC = 0;
    ((func_80239D80_S4 *)(v2))->unk10 = 0;
}
