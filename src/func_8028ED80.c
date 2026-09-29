#include "basetypes.h"

typedef struct OSScTask {
    struct OSScTask *next;
    u32 state;
    u32 flags;
    void *framebuffer;
    s32 type;
    char pad14[0x3C];
    s32 msg50;
    s32 msg54;
} OSScTask;

typedef struct OSSched {
    char pad0[0x2E8];
    OSScTask *gfxListHead;
    char pad2EC[4];
    OSScTask *gfxListTail;
    OSScTask *curRSPTask;
    OSScTask *curRDPTask;
} OSSched;

typedef struct FrameSchedule {
    char pad0[0x114];
    s32 task;
} FrameSchedule;

extern s32 func_802BF230(void *);
extern u64 func_802BFEB0(void);
extern void func_8028F9EC(OSSched *, OSScTask *);
extern s32 func_8028F524(OSSched *, s32 *, s32 *, s32);
extern void func_8028FA40(OSSched *, s32, s32);
extern s32 func_802C0510(s32, s32, s32);
extern void func_80253C8C(s32, s32);

extern u64 D_8011F290;
extern f32 D_8011F298;
extern u64 D_8011F2A0;
extern f32 D_800CA440[];
extern f32 D_800CA448[];
extern f32 D_800CA450;
extern f32 D_800D299C;
extern f32 D_800D29A0;
extern s32 D_800D2950;
typedef struct func_8028ED80_S1 func_8028ED80_S1;
typedef struct func_8028ED80_S2 func_8028ED80_S2;
struct func_8028ED80_S1 {
    char pad0[0x110];
    void* unk110;
    char pad110[0x250 - 0x110 - sizeof(void*)];
    void* unk250;
    char pad250[0x390 - 0x250 - sizeof(void*)];
    void* unk390;
};
struct func_8028ED80_S2 {
    char pad0[0x140];
    FrameSchedule unk140;
    char pad140[0x280 - 0x140 - sizeof(FrameSchedule)];
    FrameSchedule unk280;
};

extern func_8028ED80_S1 D_8011FAC0;
extern s32 D_801536F4;

/** Finish a yielded graphics task, account for its elapsed RSP time, and schedule more work. */
void func_8028ED80(OSSched *sc)
{
    s32 value1 = 0;
    s32 value2 = 0;
    OSScTask *task = sc->curRSPTask;
    u64 ticks;
    f32 elapsed;
    void *framebuffer;
    void *scheduledFramebuffer;
    FrameSchedule *schedule;
    s32 flags;

    sc->curRSPTask = 0;
    if ((task->state & 0x10) != 0 && func_802BF230(&task->type) != 0) {
        task->state |= 0x20;
        if ((task->flags & 7) == 3) {
            task->next = sc->gfxListHead;
            sc->gfxListHead = task;
            if (sc->gfxListTail == 0) {
                sc->gfxListTail = task;
            }
        }
        if ((task->flags & 0x20) != 0) {
            ticks = ((func_802BFEB0() - D_8011F2A0) << 6) / 3;
            D_8011F298 += (f32)ticks * D_800CA440[1];
        }
    } else {
        task->state &= ~2;
        if (task->type == 1) {
            D_800D2950 = 0;
            if ((task->flags & 0x20) != 0) {
                ticks = ((func_802BFEB0() - D_8011F2A0) << 6) / 3;
                D_8011F298 += (f32)ticks * D_800CA448[0];
                D_800D29A0 = D_8011F298;

                ticks = ((func_802BFEB0() - D_8011F290) << 6) / 3;
                elapsed = (f32)ticks * D_800CA448[1];
                schedule = (FrameSchedule *)&D_8011FAC0;
                framebuffer = task->framebuffer;
                scheduledFramebuffer = D_8011FAC0.unk110;
                D_800D299C = elapsed;
                if (framebuffer == scheduledFramebuffer) {
                    goto schedule_selected;
                }
                if (framebuffer == D_8011FAC0.unk250) {
                    schedule = &((func_8028ED80_S2 *)(&D_8011FAC0))->unk140;
                    goto schedule_selected;
                }
                if (framebuffer == D_8011FAC0.unk390) {
                    schedule = &((func_8028ED80_S2 *)(&D_8011FAC0))->unk280;
                }
schedule_selected:
                func_80253C8C(0, (schedule->task == D_801536F4));
                if (func_802C0510(task->msg50, task->msg54, 1) == -1) {
                    *(char *)0 = 0;
                }
            }
            func_8028F9EC(sc, task);
        } else {
            ticks = ((func_802BFEB0() - D_8011F290) << 6) / 3;
            D_800D299C = (f32)ticks * D_800CA450;
            if (func_802C0510(task->msg50, task->msg54, 1) == -1) {
                *(char *)0 = 0;
            }
            func_8028F9EC(sc, task);
        }
    }

    flags = (sc->curRSPTask == 0) * 2 | (sc->curRDPTask == 0);
    if (func_8028F524(sc, &value1, &value2, flags) != flags) {
        func_8028FA40(sc, value1, value2);
    }
}
