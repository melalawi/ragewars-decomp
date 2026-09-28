#include "basetypes.h"

typedef struct Queue {
    void **head;
    s32 unk04;
    s32 count;
    s32 index;
    s32 capacity;
    void **entries;
} Queue;

typedef struct OSScClientWork {
    struct OSScClientWork *next;
    Queue *queue;
} OSScClientWork;

typedef struct OSScTask_s {
    struct OSScTask_s *next;
    u32 state;
    u32 flags;
    void *framebuffer;
    struct { s32 type; } list;
} OSScTask;

typedef struct OSSched {
    char pad0[0x2E0];
    OSScClientWork *clientList;
    OSScTask *audioListHead;
    OSScTask *gfxListHead;
    OSScTask *audioListTail;
    OSScTask *gfxListTail;
    OSScTask *curRSPTask;
    OSScTask *curRDPTask;
    u32 frameCount;
    s32 doAudio;
} OSSched;

typedef struct FrameSchedule {
    char pad0[0x110];
    s32 task;
    char pad114[0x10];
    u32 duration;
} FrameSchedule;

extern s32 func_802C0390(void *, void *, s32);
extern void func_802C06E0(void *, s32);
extern void func_8028F934(void *, void *);
extern void func_802BF9B0(s32);
extern void func_8028ED80(void *);
extern void func_8028FBB8(void *);
extern s32 func_8028F524(void *, s32 *, s32 *, s32);
extern void func_8028FA40(void *, s32, s32);
extern s32 func_802C0510(Queue *, s32, s32);
extern void func_80263B14(void);

extern s32 D_800D2950, D_800D2954, D_800D2B1C, D_800E28A0, D_8010A248;
extern s32 D_8011FAB4, D_801469E0, D_80146CF0, D_80146CF8, D_8014AD88, D_8014AD90;
extern FrameSchedule *D_80146970[];

/** Handle one scheduler retrace, recover a lost yielded-task completion, and notify clients. */
void func_8028EAAC(OSSched *sc) {
    OSScTask *event = 0;
    s32 value1 = 0;
    s32 value2 = 0;
    s32 flags;
    OSScTask *pending;
    OSScClientWork *work;
    FrameSchedule *schedule;

    if (D_800D2954 != 0) {
        D_800D2954--;
        if (D_800D2954 == 0) func_802C06E0(&D_8010A248, D_800D2B1C);
    }
    sc->frameCount++;
    while (func_802C0390((char *)sc + 0x78, &event, 0) != -1) func_8028F934(sc, event);
    D_801469E0++;
    if (D_8014AD88 != 0) {
        D_801469E0 = 0;
        D_8014AD88 = 0;
        D_80146CF8 = D_80146CF0;
        D_80146CF0 = 0;
    }
    if (D_8014AD90 != 0) {
        schedule = D_80146970[D_8011FAB4];
        if ((u32)(D_801469E0 + 1) >= schedule->duration) {
            D_80146CF0 = schedule->task;
            func_802BF9B0(schedule->task);
            D_8014AD90--;
            D_8014AD88++;
            D_8011FAB4++;
            if ((u32)D_8011FAB4 >= (u32)D_800E28A0) D_8011FAB4 = 0;
        }
    }
    if (sc->curRSPTask == 0 && sc->curRDPTask == 0) {
        pending = sc->gfxListHead;
        if (pending != 0 && pending->list.type == 1 && pending->state == 0x32) {
            pending->state = 2;
            sc->curRSPTask = sc->gfxListHead;
            sc->gfxListHead = sc->gfxListHead->next;
            if (sc->gfxListHead == 0) sc->gfxListTail = 0;
            func_8028ED80(sc);
        }
    }
    D_800D2950++;
    if (D_800D2950 == 0x4B0) *(char *)0 = 0;
    if (sc->doAudio != 0 && sc->curRSPTask != 0) func_8028FBB8(sc);
    else {
        flags = (sc->curRSPTask == 0) * 2 | (sc->curRDPTask == 0);
        if (func_8028F524(sc, &value1, &value2, flags) != flags) func_8028FA40(sc, value1, value2);
    }
    work = sc->clientList;
    while (work != 0) {
        if (work->queue->count < 2) func_802C0510(work->queue, (s32)sc, 0);
        work = work->next;
    }
    func_80263B14();
}
