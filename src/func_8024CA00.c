#include "basetypes.h"

extern char *func_8028FD94(s32 *, s32);
extern f32 D_800C8C68;

typedef struct func_8024CA00_S1 func_8024CA00_S1;
typedef struct func_8024CA00_S2 func_8024CA00_S2;
typedef struct func_8024CA00_S3 func_8024CA00_S3;
typedef struct func_8024CA00_S4 func_8024CA00_S4;
typedef struct func_8024CA00_S5 func_8024CA00_S5;
struct func_8024CA00_S1 {
    char* unk0;
    char pad0[0x4 - 0x0 - sizeof(char*)];
    char* unk4;
    char pad4[0xC - 0x4 - sizeof(char*)];
    void* unkC;
    char padC[0x10 - 0xC - sizeof(void*)];
    s32 unk10;
    char pad10[0x14 - 0x10 - sizeof(s32)];
    s32 unk14;
    char pad14[0x20 - 0x14 - sizeof(s32)];
    f32 unk20;
};
struct func_8024CA00_S2 {
    f32 unk0;
    char pad0[0x4 - 0x0 - sizeof(f32)];
    f32 unk4;
    char pad4[0x8 - 0x4 - sizeof(f32)];
    f32 unk8;
    char pad8[0xC - 0x8 - sizeof(f32)];
    f32 unkC;
};
struct func_8024CA00_S3 {
    char pad0[0xC];
    s16 unkC;
    char padC[0xE - 0xC - sizeof(s16)];
    s16 unkE;
    char padE[0x10 - 0xE - sizeof(s16)];
    s16 unk10;
    char pad10[0x12 - 0x10 - sizeof(s16)];
    s16 unk12;
};
struct func_8024CA00_S4 {
    f32 unk0;
    char pad0[0x4 - 0x0 - sizeof(f32)];
    f32 unk4;
    char pad4[0x8 - 0x4 - sizeof(f32)];
    f32 unk8;
    char pad8[0xC - 0x8 - sizeof(f32)];
    f32 unkC;
};
struct func_8024CA00_S5 {
    f32 unk0;
    char pad0[0x4 - 0x0 - sizeof(f32)];
    f32 unk4;
    char pad4[0x8 - 0x4 - sizeof(f32)];
    f32 unk8;
    char pad8[0xC - 0x8 - sizeof(f32)];
    f32 unkC;
};

void func_8024CA00(void *arg0, s32 arg1, void *arg2) {
    char *o = (char *)arg0;
    s16 idx;
    char *rec;
    void *base;
    char *a;

    idx = *(s16 *)(((func_8024CA00_S1 *)(o))->unk0 + arg1 * 4 + 2);
    if (idx == -1) {
        f32 scale;
        rec = ((func_8024CA00_S1 *)(o))->unk4 + arg1 * 0x14;
        scale = D_800C8C68;
        ((func_8024CA00_S2 *)(arg2))->unk0 = (f32)(((func_8024CA00_S3 *)(rec))->unkC) * scale;
        ((func_8024CA00_S2 *)(arg2))->unk4 = (f32)(((func_8024CA00_S3 *)(rec))->unkE) * scale;
        ((func_8024CA00_S2 *)(arg2))->unk8 = (f32)(((func_8024CA00_S3 *)(rec))->unk10) * scale;
        ((func_8024CA00_S2 *)(arg2))->unkC = (f32)(((func_8024CA00_S3 *)(rec))->unk12) * scale;
        return;
    }
    base = func_8028FD94(((func_8024CA00_S1 *)(o))->unkC, (s32)idx);
    a = (char *)base + (((func_8024CA00_S1 *)(o))->unk10) * 4;
    base = (char *)base + (((func_8024CA00_S1 *)(o))->unk14) * 4;
    {
        f32 scale;
        scale = ((func_8024CA00_S1 *)(o))->unk20;
        ((func_8024CA00_S2 *)(arg2))->unk0 = ((func_8024CA00_S4 *)(a))->unk0 + scale * (((func_8024CA00_S5 *)(base))->unk0 - ((func_8024CA00_S4 *)(a))->unk0);
        ((func_8024CA00_S2 *)(arg2))->unk4 = ((func_8024CA00_S4 *)(a))->unk4 + scale * (((func_8024CA00_S5 *)(base))->unk4 - ((func_8024CA00_S4 *)(a))->unk4);
        ((func_8024CA00_S2 *)(arg2))->unk8 = ((func_8024CA00_S4 *)(a))->unk8 + scale * (((func_8024CA00_S5 *)(base))->unk8 - ((func_8024CA00_S4 *)(a))->unk8);
        ((func_8024CA00_S2 *)(arg2))->unkC = ((func_8024CA00_S4 *)(a))->unkC + scale * (((func_8024CA00_S5 *)(base))->unkC - ((func_8024CA00_S4 *)(a))->unkC);
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C3AA8_4 = 3.05185094e-05f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C8C68_4 = 3.05185094e-05f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C3E28_4 = 3.05185094e-05f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C3E68_4 = 3.05185094e-05f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C3B78_4 = 3.05185094e-05f;
#endif
