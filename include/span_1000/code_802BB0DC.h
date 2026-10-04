#ifndef UNBAKE_SPAN_1000_CODE_802BB0DC_H
#define UNBAKE_SPAN_1000_CODE_802BB0DC_H
#include "acmd.h"
#include "common/types.h"
#include "span_1000/types.h"
#include "../types.h"
struct ALDelay;
typedef struct ALDelay ALDelay;

struct func_802BB32C_S1;
typedef struct func_802BB32C_S1 func_802BB32C_S1;

struct func_802BB32C_S2;
typedef struct func_802BB32C_S2 func_802BB32C_S2;

struct func_802BB590_S1;
typedef struct func_802BB590_S1 func_802BB590_S1;

struct ALDelay;
struct ALDelay {
    u32 input;
    u32 output;
    s16 ffcoef;
    s16 fbcoef;
    s16 gain;
    f32 rsinc;
    f32 rsval;
    s32 rsdelta;
    f32 rsgain;
    void *lp;
    void *rs;
};
struct func_802BB32C_S1;
struct func_802BB32C_S1 {
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
};
struct func_802BB32C_S2;
struct func_802BB32C_S2 {
    char pad0[0x2];
    u16 unk2;
    char pad2[0x28 - 0x2 - sizeof(u16)];
    s32 unk28;
    char pad28[0x2F - 0x28 - sizeof(s32)];
    u8 unk2F;
};
struct func_802BB590_S1;
struct func_802BB590_S1 {
    char pad0[0x30];
    void * unk30;
    char pad30[0x34 - 0x30 - sizeof(void*)];
    s32 unk34;
};
extern void *func_802B625C_de(void *arg0, s32 arg1, s32 arg2, void *arg3);
extern f32 func_802B6300_de(ALDelay *d, s32 count);
#endif
