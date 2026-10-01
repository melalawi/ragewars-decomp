#include "basetypes.h"

extern char *func_8028FD94(s32 *, s32);
extern void func_80270B1C(void *arg0, s32 arg1, void *arg2, void *arg3);
extern f32 D_800C9258;

typedef struct func_80260570_S1 func_80260570_S1;
typedef struct func_80260570_S2 func_80260570_S2;
typedef struct func_80260570_S3 func_80260570_S3;
typedef struct func_80260570_S4 func_80260570_S4;
struct func_80260570_S1 {
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
    s32 unk20;
};
struct func_80260570_S2 {
    char pad0[0x4];
    f32 unk4;
};
struct func_80260570_S3 {
    f32 unk0;
    char pad0[0x4 - 0x0 - sizeof(f32)];
    f32 unk4;
    char pad4[0x8 - 0x4 - sizeof(f32)];
    f32 unk8;
    char pad8[0xC - 0x8 - sizeof(f32)];
    f32 unkC;
};
struct func_80260570_S4 {
    char pad0[0xC];
    s16 unkC;
    char padC[0xE - 0xC - sizeof(s16)];
    s16 unkE;
    char padE[0x10 - 0xE - sizeof(s16)];
    s16 unk10;
    char pad10[0x12 - 0x10 - sizeof(s16)];
    s16 unk12;
};

void func_80260570(void *arg0, s32 arg1, void *arg2) {
    char *o = (char *)arg0;
    s16 idx;
    char *rec;
    void *base;
    f32 scale;

    idx = *(s16 *)(((func_80260570_S1 *)(o))->unk0 + arg1 * 4 + 2);
    if (idx == -1) {
        rec = ((func_80260570_S1 *)(o))->unk4 + arg1 * 0x14;
        scale = ((func_80260570_S2 *)(&D_800C9258))->unk4;
        ((func_80260570_S3 *)(arg2))->unk0 = (f32)(((func_80260570_S4 *)(rec))->unkC) * scale;
        ((func_80260570_S3 *)(arg2))->unk4 = (f32)(((func_80260570_S4 *)(rec))->unkE) * scale;
        ((func_80260570_S3 *)(arg2))->unk8 = (f32)(((func_80260570_S4 *)(rec))->unk10) * scale;
        ((func_80260570_S3 *)(arg2))->unkC = (f32)(((func_80260570_S4 *)(rec))->unk12) * scale;
        return;
    }
    base = func_8028FD94(((func_80260570_S1 *)(o))->unkC, (s32) idx);
    func_80270B1C(arg2, ((func_80260570_S1 *)(o))->unk20,
                  (char *)base + (((func_80260570_S1 *)(o))->unk10) * 4,
                  (char *)base + (((func_80260570_S1 *)(o))->unk14) * 4);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C409C_4 = 3.05185094e-05f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C925C_4 = 3.05185094e-05f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C441C_4 = 3.05185094e-05f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C445C_4 = 3.05185094e-05f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C416C_4 = 3.05185094e-05f;
#endif
