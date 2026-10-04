#ifndef UNBAKE_SPAN_16E000_CODE_80435CF0_H
#define UNBAKE_SPAN_16E000_CODE_80435CF0_H
#include "common/types.h"
#include "span_16E000/types.h"
#include "../types.h"
struct func_804360F4_S1;
typedef struct func_804360F4_S1 func_804360F4_S1;

struct func_80436488_S1;
typedef struct func_80436488_S1 func_80436488_S1;

struct State_func_804366B8_de;
struct State_func_804366B8_de {
    char pad0[8];
    void *c;
    void *d;
    void *b;
    void *a;
    void *e;
};
struct State_func_804368F8_de;
struct State_func_804368F8_de {
    void *c;
    void *d;
    void *b;
    void *a;
    void *e;
};
struct func_804360F4_S1;
struct func_804360F4_S1 {
    char pad0[0x17F0];
    s32 words17F0[8];
};
struct func_80436488_S1;
struct func_80436488_S1 {
    char pad0[0x180C];
    s32 unk180C;
};
extern void func_80435B10_de(void);
extern s32 func_80435D90_de(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
extern s32 func_8043612C_de(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
extern s32 func_80436454_de(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
#endif
