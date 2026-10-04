#ifndef UNBAKE_SPAN_1000_CODE_802BF740_H
#define UNBAKE_SPAN_1000_CODE_802BF740_H
#include "acmd.h"
#include "common/types.h"
#include "span_1000/types.h"
#include "../types.h"
struct OSThreadContext;
typedef struct OSThreadContext OSThreadContext;

struct OSThread_s;
typedef struct OSThread_s OSThread_s;

struct OSViCommonRegs;
typedef struct OSViCommonRegs OSViCommonRegs;

struct OSViFieldRegs;
typedef struct OSViFieldRegs OSViFieldRegs;

struct OSViMode;
typedef struct OSViMode OSViMode;

struct OSViMode_func_802BA910_de;
typedef struct OSViMode_func_802BA910_de OSViMode_func_802BA910_de;

struct ObjectLinks18_2;
typedef struct ObjectLinks18_2 ObjectLinks18_2;

struct ObjectState28;
typedef struct ObjectState28 ObjectState28;

struct Rec_func_802BA650_de;
typedef struct Rec_func_802BA650_de Rec_func_802BA650_de;

struct State_func_802BA700_de;
typedef struct State_func_802BA700_de State_func_802BA700_de;

struct __OSViContext_func_802BA6B0_de;
typedef struct __OSViContext_func_802BA6B0_de __OSViContext_func_802BA6B0_de;

struct __OSViContext_func_802BA910_de;
typedef struct __OSViContext_func_802BA910_de __OSViContext_func_802BA910_de;

struct __OSViScale;
typedef struct __OSViScale __OSViScale;

struct OSThreadContext;
struct OSThreadContext {
    u64 at;
    u64 v0;
    u64 v1;
    u64 a0;
    u64 a1;
    u64 a2;
    u64 a3;
    u64 t0;
    u64 t1;
    u64 t2;
    u64 t3;
    u64 t4;
    u64 t5;
    u64 t6;
    u64 t7;
    u64 s0;
    u64 s1;
    u64 s2;
    u64 s3;
    u64 s4;
    u64 s5;
    u64 s6;
    u64 s7;
    u64 t8;
    u64 t9;
    u64 gp;
    u64 sp;
    u64 s8;
    u64 ra;
    u64 lo;
    u64 hi;
    u32 sr;
    u32 pc;
    u32 cause;
    u32 badvaddr;
    u32 rcp;
    u32 fpcsr;
};
struct OSThread_s;
struct OSThread_s {
    struct OSThread_s *next;
    s32 priority;
    struct OSThread_s **queue;
    struct OSThread_s *tlnext;
    u16 state;
    u16 flags;
    s32 id;
    int fp;
    OSThreadContext context;
};
struct OSViCommonRegs;
struct OSViCommonRegs {
    u32 ctrl;
    u32 width;
    u32 burst;
    u32 vSync;
    u32 hSync;
    u32 leap;
    u32 hStart;
    u32 xScale;
    u32 vCurrent;
};
struct OSViFieldRegs;
struct OSViFieldRegs {
    u32 origin;
    u32 yScale;
    u32 vStart;
    u32 vBurst;
    u32 vIntr;
};
struct OSViMode;
struct OSViMode {
    u8 type;
    Awords comRegs;
};
struct OSViMode_func_802BA910_de;
struct OSViMode_func_802BA910_de {
    u8 type;
    OSViCommonRegs comRegs;
    OSViFieldRegs fldRegs[2];
};
struct ObjectLinks18_2;
struct ObjectLinks18_2 {
    s32 *unk_0;
    s32 *unk_4;
    s32 unk_8;
    s32 unk_C;
    s32 unk_10;
    s32 unk_14;
};
struct ObjectState28;
struct ObjectState28 {
    u16 unk_0;
    unsigned char padding_2[34];
    f32 unk_24;
};
struct Rec_func_802BA650_de;
struct Rec_func_802BA650_de {
    char pad0[2];
    s16 f2;
    char pad4[0xC];
    s32 f10;
    s32 f14;
};
struct State_func_802BA700_de;
struct State_func_802BA700_de {
    u16 status;
    u16 pad2;
    u32 word4;
    Awords *inner;
    u32 flags;
};
struct OSViMode;
struct __OSViContext_func_802BA6B0_de;
struct __OSViContext_func_802BA6B0_de {
    u16 state;
    u16 retraceCount;
    void *framep;
    struct OSViMode *modep;
    u32 control;
};
struct __OSViScale;
struct __OSViScale {
    f32 factor;
    u16 offset;
    u32 scale;
};
struct OSViMode_func_802BA910_de;
struct __OSViContext_func_802BA910_de;
struct __OSViContext_func_802BA910_de {
    u16 state;
    u16 retraceCount;
    void *framep;
    struct OSViMode_func_802BA910_de *modep;
    u32 control;
    void *msgq;
    void *msg;
    __OSViScale x;
    __OSViScale y;
};
extern void func_802BA700_de(s32 arg0);
extern void func_802BA870_de(f32 arg0);
extern void func_802BA910_de(void);
extern void func_802BAE40_de(void);
#endif
