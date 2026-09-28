/* osCreateThread, drafted from ultralib src/os/createthread.c (2.0I-J, no thread profile). */
#include "basetypes.h"

typedef struct {
    u64 at, v0, v1, a0, a1, a2, a3;
    u64 t0, t1, t2, t3, t4, t5, t6, t7;
    u64 s0, s1, s2, s3, s4, s5, s6, s7;
    u64 t8, t9;
    u64 gp, sp, s8, ra;
    u64 lo, hi;
    u32 sr, pc, cause, badvaddr, rcp;
    u32 fpcsr;
} OSThreadContext;

typedef struct OSThread_s {
    struct OSThread_s *next;
    s32 priority;
    struct OSThread_s **queue;
    struct OSThread_s *tlnext;
    u16 state;
    u16 flags;
    s32 id;
    int fp;
    OSThreadContext context;
} OSThread;

extern OSThread *D_800D929C;
extern void D_2C185C(void);
extern u32 func_802C2020(void);
extern void func_802C2040(u32 mask);

void func_802BFD80(OSThread *t, s32 id, void (*entry)(void *), void *arg, void *sp, s32 p)
{
    register u32 saveMask;
    u32 mask;
    OSThread **active;

    t->id = id;
    t->priority = p;
    t->next = 0;
    t->queue = 0;
    t->context.pc = (u32)entry;
    t->context.a0 = (s64)(s32)arg;
    t->context.sp = (s64)(s32)sp - 16;
    t->context.ra = (s64)(s32)D_2C185C;
    mask = 0x3FFF01;
    t->context.sr = (mask & 0xFF01) | 0x04000002;
    t->context.rcp = (mask & 0x3F0000) >> 16;
    t->context.fpcsr = 0x01000800;
    t->fp = 0;
    t->state = 1;
    t->flags = 0;

    saveMask = func_802C2020();
    active = &D_800D929C;
    t->tlnext = *active;
    *active = t;
    func_802C2040(saveMask);
}
