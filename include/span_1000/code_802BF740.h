#ifndef UNBAKE_SPAN_1000_CODE_802BF740_H
#define UNBAKE_SPAN_1000_CODE_802BF740_H
#include "acmd.h"
#include "../types.h"
struct OSThreadContext;
struct OSThreadContext;
typedef struct OSThreadContext OSThreadContext;

/* unbake evidence input: c3RydWN0IE9TVGhyZWFkQ29udGV4dDsKdHlwZWRlZiBzdHJ1Y3QgT1NUaHJlYWRDb250ZXh0IE9TVGhyZWFkQ29udGV4dDsK */

struct OSThread_s;
struct OSThread_s;
typedef struct OSThread_s OSThread_s;

/* unbake evidence input: c3RydWN0IE9TVGhyZWFkX3M7CnR5cGVkZWYgc3RydWN0IE9TVGhyZWFkX3MgT1NUaHJlYWRfczsK */

struct ObjectLinks18_2;
struct ObjectLinks18_2;
typedef struct ObjectLinks18_2 ObjectLinks18_2;

/* unbake evidence input: c3RydWN0IE9iamVjdExpbmtzMThfMjsKdHlwZWRlZiBzdHJ1Y3QgT2JqZWN0TGlua3MxOF8yIE9iamVjdExpbmtzMThfMjsK */

struct ObjectState28;
struct ObjectState28;
typedef struct ObjectState28 ObjectState28;

/* unbake evidence input: c3RydWN0IE9iamVjdFN0YXRlMjg7CnR5cGVkZWYgc3RydWN0IE9iamVjdFN0YXRlMjggT2JqZWN0U3RhdGUyODsK */

struct Rec_func_802BA650_de;
struct Rec_func_802BA650_de;
typedef struct Rec_func_802BA650_de Rec_func_802BA650_de;

/* unbake evidence input: c3RydWN0IFJlY19mdW5jXzgwMkJBNjUwX2RlOwp0eXBlZGVmIHN0cnVjdCBSZWNfZnVuY184MDJCQTY1MF9kZSBSZWNfZnVuY184MDJCQTY1MF9kZTsK */

struct State_func_802BA700_de;
struct State_func_802BA700_de;
typedef struct State_func_802BA700_de State_func_802BA700_de;

/* unbake evidence input: c3RydWN0IFN0YXRlX2Z1bmNfODAyQkE3MDBfZGU7CnR5cGVkZWYgc3RydWN0IFN0YXRlX2Z1bmNfODAyQkE3MDBfZGUgU3RhdGVfZnVuY184MDJCQTcwMF9kZTsK */

struct OSViMode;
struct OSViMode {
    u8 type;
    Awords comRegs;
};
/* unbake evidence input: c3RydWN0IE9TVmlNb2RlIHsKICAgIHU4IHR5cGU7CiAgICBBd29yZHMgY29tUmVnczsKfTs= */

struct OSViMode;
struct __OSViContext_func_802BA6B0_de;
struct __OSViContext_func_802BA6B0_de {
    u16 state;
    u16 retraceCount;
    void *framep;
    struct OSViMode *modep;
    u32 control;
};
/* unbake evidence input: c3RydWN0IF9fT1NWaUNvbnRleHRfZnVuY184MDJCQTZCMF9kZSB7CiAgICB1MTYgc3RhdGU7CiAgICB1MTYgcmV0cmFjZUNvdW50OwogICAgdm9pZCAqZnJhbWVwOwogICAgc3RydWN0IE9TVmlNb2RlICptb2RlcDsKICAgIHUzMiBjb250cm9sOwp9Ow== */

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
/* unbake evidence input: c3RydWN0IE9TVmlDb21tb25SZWdzIHsKICAgIHUzMiBjdHJsOwogICAgdTMyIHdpZHRoOwogICAgdTMyIGJ1cnN0OwogICAgdTMyIHZTeW5jOwogICAgdTMyIGhTeW5jOwogICAgdTMyIGxlYXA7CiAgICB1MzIgaFN0YXJ0OwogICAgdTMyIHhTY2FsZTsKICAgIHUzMiB2Q3VycmVudDsKfTs= */

struct OSViFieldRegs;
struct OSViFieldRegs {
    u32 origin;
    u32 yScale;
    u32 vStart;
    u32 vBurst;
    u32 vIntr;
};
/* unbake evidence input: c3RydWN0IE9TVmlGaWVsZFJlZ3MgewogICAgdTMyIG9yaWdpbjsKICAgIHUzMiB5U2NhbGU7CiAgICB1MzIgdlN0YXJ0OwogICAgdTMyIHZCdXJzdDsKICAgIHUzMiB2SW50cjsKfTs= */

struct __OSViScale;
struct __OSViScale {
    f32 factor;
    u16 offset;
    u32 scale;
};
/* unbake evidence input: c3RydWN0IF9fT1NWaVNjYWxlIHsKICAgIGYzMiBmYWN0b3I7CiAgICB1MTYgb2Zmc2V0OwogICAgdTMyIHNjYWxlOwp9Ow== */

struct OSViCommonRegs;
typedef struct OSViCommonRegs OSViCommonRegs;
struct OSViFieldRegs;
typedef struct OSViFieldRegs OSViFieldRegs;
struct OSViMode_func_802BA910_de;
struct OSViMode_func_802BA910_de {
    u8 type;
    OSViCommonRegs comRegs;
    OSViFieldRegs fldRegs[2];
};
/* unbake evidence input: c3RydWN0IE9TVmlNb2RlX2Z1bmNfODAyQkE5MTBfZGUgewogICAgdTggdHlwZTsKICAgIE9TVmlDb21tb25SZWdzIGNvbVJlZ3M7CiAgICBPU1ZpRmllbGRSZWdzIGZsZFJlZ3NbMl07Cn07 */

struct __OSViScale;
typedef struct __OSViScale __OSViScale;
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
/* unbake evidence input: c3RydWN0IF9fT1NWaUNvbnRleHRfZnVuY184MDJCQTkxMF9kZSB7CiAgICB1MTYgc3RhdGU7CiAgICB1MTYgcmV0cmFjZUNvdW50OwogICAgdm9pZCAqZnJhbWVwOwogICAgc3RydWN0IE9TVmlNb2RlX2Z1bmNfODAyQkE5MTBfZGUgKm1vZGVwOwogICAgdTMyIGNvbnRyb2w7CiAgICB2b2lkICptc2dxOwogICAgdm9pZCAqbXNnOwogICAgX19PU1ZpU2NhbGUgeDsKICAgIF9fT1NWaVNjYWxlIHk7Cn07 */

struct OSThreadContext;
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

/* unbake evidence input: c3RydWN0IE9TVGhyZWFkQ29udGV4dDsKc3RydWN0IE9TVGhyZWFkQ29udGV4dCB7CiAgICB1NjQgYXQ7CiAgICB1NjQgdjA7CiAgICB1NjQgdjE7CiAgICB1NjQgYTA7CiAgICB1NjQgYTE7CiAgICB1NjQgYTI7CiAgICB1NjQgYTM7CiAgICB1NjQgdDA7CiAgICB1NjQgdDE7CiAgICB1NjQgdDI7CiAgICB1NjQgdDM7CiAgICB1NjQgdDQ7CiAgICB1NjQgdDU7CiAgICB1NjQgdDY7CiAgICB1NjQgdDc7CiAgICB1NjQgczA7CiAgICB1NjQgczE7CiAgICB1NjQgczI7CiAgICB1NjQgczM7CiAgICB1NjQgczQ7CiAgICB1NjQgczU7CiAgICB1NjQgczY7CiAgICB1NjQgczc7CiAgICB1NjQgdDg7CiAgICB1NjQgdDk7CiAgICB1NjQgZ3A7CiAgICB1NjQgc3A7CiAgICB1NjQgczg7CiAgICB1NjQgcmE7CiAgICB1NjQgbG87CiAgICB1NjQgaGk7CiAgICB1MzIgc3I7CiAgICB1MzIgcGM7CiAgICB1MzIgY2F1c2U7CiAgICB1MzIgYmFkdmFkZHI7CiAgICB1MzIgcmNwOwogICAgdTMyIGZwY3NyOwp9Owo= */

struct OSThread_s;
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

/* unbake evidence input: c3RydWN0IE9TVGhyZWFkX3M7CnN0cnVjdCBPU1RocmVhZF9zIHsKICAgIHN0cnVjdCBPU1RocmVhZF9zICpuZXh0OwogICAgczMyIHByaW9yaXR5OwogICAgc3RydWN0IE9TVGhyZWFkX3MgKipxdWV1ZTsKICAgIHN0cnVjdCBPU1RocmVhZF9zICp0bG5leHQ7CiAgICB1MTYgc3RhdGU7CiAgICB1MTYgZmxhZ3M7CiAgICBzMzIgaWQ7CiAgICBpbnQgZnA7CiAgICBPU1RocmVhZENvbnRleHQgY29udGV4dDsKfTsK */

struct ObjectLinks18_2;
struct ObjectLinks18_2;
struct ObjectLinks18_2 {
    s32 *unk_0;
    s32 *unk_4;
    s32 unk_8;
    s32 unk_C;
    s32 unk_10;
    s32 unk_14;
};

/* unbake evidence input: c3RydWN0IE9iamVjdExpbmtzMThfMjsKc3RydWN0IE9iamVjdExpbmtzMThfMiB7CiAgICBzMzIgKnVua18wOwogICAgczMyICp1bmtfNDsKICAgIHMzMiB1bmtfODsKICAgIHMzMiB1bmtfQzsKICAgIHMzMiB1bmtfMTA7CiAgICBzMzIgdW5rXzE0Owp9Owo= */

struct ObjectState28;
struct ObjectState28;
struct ObjectState28 {
    u16 unk_0;
    unsigned char padding_2[34];
    f32 unk_24;
};

/* unbake evidence input: c3RydWN0IE9iamVjdFN0YXRlMjg7CnN0cnVjdCBPYmplY3RTdGF0ZTI4IHsKICAgIHUxNiB1bmtfMDsKICAgIHVuc2lnbmVkIGNoYXIgcGFkZGluZ18yWzM0XTsKICAgIGYzMiB1bmtfMjQ7Cn07Cg== */

struct Rec_func_802BA650_de;
struct Rec_func_802BA650_de;
struct Rec_func_802BA650_de {
    char pad0[2];
    s16 f2;
    char pad4[0xC];
    s32 f10;
    s32 f14;
};

/* unbake evidence input: c3RydWN0IFJlY19mdW5jXzgwMkJBNjUwX2RlOwpzdHJ1Y3QgUmVjX2Z1bmNfODAyQkE2NTBfZGUgewogICAgY2hhciBwYWQwWzJdOwogICAgczE2IGYyOwogICAgY2hhciBwYWQ0WzB4Q107CiAgICBzMzIgZjEwOwogICAgczMyIGYxNDsKfTsK */

struct State_func_802BA700_de;
struct State_func_802BA700_de;
struct State_func_802BA700_de {
    u16 status;
    u16 pad2;
    u32 word4;
    Awords *inner;
    u32 flags;
};

/* unbake evidence input: c3RydWN0IFN0YXRlX2Z1bmNfODAyQkE3MDBfZGU7CnN0cnVjdCBTdGF0ZV9mdW5jXzgwMkJBNzAwX2RlIHsKICAgIHUxNiBzdGF0dXM7CiAgICB1MTYgcGFkMjsKICAgIHUzMiB3b3JkNDsKICAgIEF3b3JkcyAqaW5uZXI7CiAgICB1MzIgZmxhZ3M7Cn07Cg== */

struct OSViMode;
typedef struct OSViMode OSViMode;
struct OSViMode_func_802BA910_de;
typedef struct OSViMode_func_802BA910_de OSViMode_func_802BA910_de;
struct __OSViContext_func_802BA6B0_de;
typedef struct __OSViContext_func_802BA6B0_de __OSViContext_func_802BA6B0_de;
struct __OSViContext_func_802BA910_de;
typedef struct __OSViContext_func_802BA910_de __OSViContext_func_802BA910_de;
extern void func_802BA700_de(s32 arg0);
extern void func_802BA870_de(f32 arg0);
extern void func_802BA910_de(void);
extern void func_802BAE40_de(void);
#endif
