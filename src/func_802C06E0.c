/* osSetThreadPri, drafted from ultralib src/os/setthreadpri.c (2.0I-L, non-debug). */
#include "basetypes.h"

typedef struct OSThread_s {
    struct OSThread_s *next;
    s32 priority;
    struct OSThread_s **queue;
    struct OSThread_s *tlnext;
    u16 state;
} OSThread;

extern OSThread *D_800D9298;
extern OSThread *D_800D92A0;
extern u32 func_802C2020(void);
extern void func_802C2040(u32 mask);
extern void func_802C0960(OSThread **queue, OSThread *t);
extern void func_802C15F8(OSThread **queue, OSThread *t);
extern void func_802C145C(OSThread **queue);

void func_802C06E0(OSThread *t, s32 pri)
{
    register u32 saveMask;
    OSThread **runQueue;

    saveMask = func_802C2020();

    if (t == 0) {
        t = D_800D92A0;
    }

    if (t->priority != pri) {
        t->priority = pri;

        if (t != D_800D92A0 && t->state != 1) {
            func_802C0960(t->queue, t);
            func_802C15F8(t->queue, t);
        }

        runQueue = &D_800D9298;
        if (D_800D92A0->priority < (*runQueue)->priority) {
            D_800D92A0->state = 2;
            func_802C145C(runQueue);
        }
    }

    func_802C2040(saveMask);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned char unbake_rodata_800D3F18_4[] = {0x80, 0x0D, 0x3F, 0x10};
#endif
