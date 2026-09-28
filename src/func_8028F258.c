#include "basetypes.h"

typedef struct OSScTask {
    struct OSScTask *next;
    u32 state;
    u32 flags;
    void *framebuffer;
    s32 type;
} OSScTask;

typedef struct OSSched {
    char pad0[0x2F4];
    OSScTask *curRSPTask;
    OSScTask *curRDPTask;
} OSSched;

typedef struct FrameSchedule {
    char pad0[0x110];
    s32 task;
    char pad114[0x10];
    u32 duration;
    char pad128[0x18];
} FrameSchedule;

extern u64 func_802BFEB0(void);
extern void func_802BF9B0(s32);
extern void func_802909EC(FrameSchedule *);
extern void func_8028F9EC(OSSched *, OSScTask *);
extern s32 func_8028F524(OSSched *, s32 *, s32 *, s32);
extern void func_8028FA40(OSSched *, s32, s32);

extern u64 D_8011F2A8;
extern f32 D_800CA454;
extern f32 D_800D29A4;
extern FrameSchedule D_8011FAC0[];
extern u32 D_80146CF4, D_8014696C, D_8011FAB8, D_80146D64, D_801469E0;
extern s32 D_80146CF0, D_8014AD88, D_8014AD90;
extern u32 D_8014AD8C, D_800E28A0;
extern FrameSchedule *D_80146970[];

/** Complete the current RDP task, time it, queue or swap its frame buffer, and schedule more work. */
void func_8028F258(OSSched *sc)
{
    s32 value1 = 0;
    s32 value2 = 0;
    OSScTask *task = sc->curRDPTask;
    void *framebuffer;
    FrameSchedule *schedule;
    FrameSchedule *schedules;
    s32 flags;

    task->state &= ~1;
    if (task->type == 1) {
        if ((task->flags & 0x20) != 0) {
            D_800D29A4 = (f32)(((func_802BFEB0() - D_8011F2A8) << 6) / 3) * D_800CA454;
        }
        sc->curRDPTask = 0;
        if ((task->flags & 0x20) != 0) {
            schedules = D_8011FAC0;
            framebuffer = task->framebuffer;
            if (framebuffer == (void *)schedules[0].task) {
                schedule = &schedules[0];
            } else if (framebuffer == (void *)schedules[1].task) {
                schedule = &schedules[1];
            } else if (framebuffer == (void *)schedules[2].task) {
                schedule = &schedules[2];
            } else {
                schedule = &schedules[0];
            }
            D_80146CF4 = D_8014696C;
            D_8014696C = D_8011FAB8;
            D_8011FAB8 = D_80146D64;
            D_80146D64 = D_801469E0 + 1;
            if (D_80146D64 >= schedule->duration && D_8014AD90 == 0 && D_8014AD88 == 0) {
                D_80146CF0 = schedule->task;
                func_802BF9B0(schedule->task);
                D_8014AD88++;
            } else {
                D_8014AD90++;
                D_80146970[D_8014AD8C] = schedule;
                D_8014AD8C++;
                if (D_8014AD8C >= D_800E28A0) {
                    D_8014AD8C = 0;
                }
            }
            func_802909EC(schedule);
        }
    }
    func_8028F9EC(sc, task);
    flags = (sc->curRSPTask == 0) * 2 | (sc->curRDPTask == 0);
    if (func_8028F524(sc, &value1, &value2, flags) != flags) {
        func_8028FA40(sc, value1, value2);
    }
}
