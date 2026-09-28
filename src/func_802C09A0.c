/* __osTimerInterrupt, drafted from ultralib src/os/timerintr.c (_FINALROM: no profiler). */
#include "basetypes.h"

typedef void *OSMesg;
typedef struct OSMesgQueue OSMesgQueue;

typedef struct OSTimer_s {
    struct OSTimer_s *next;
    struct OSTimer_s *prev;
    u64 interval;
    u64 value;
    OSMesgQueue *mq;
    OSMesg msg;
} OSTimer;

extern OSTimer *D_800D92B0;
extern u32 func_802C2020(void);
extern void func_802C2040(u32 mask);
extern u32 D_8014FE30;
extern u32 func_802C1FF0(void);
extern void func_802C2240(u32 compare);
extern void func_802C0B3C(u64 tim);
extern s32 func_802C0510(OSMesgQueue *mq, OSMesg msg, s32 flag);
extern u64 func_802C0B9C(OSTimer *t);

void func_802C09A0(void)
{
    OSTimer *t;
    u32 count;
    u32 elapsed_cycles;
    u32 *counter;

    if (D_800D92B0->next == D_800D92B0) {
        return;
    }
    counter = &D_8014FE30;
    for (;;) {
        t = D_800D92B0->next;

        if (t == D_800D92B0) {
            func_802C2240(0);
            D_8014FE30 = 0;
            break;
        }

        count = func_802C1FF0();
        elapsed_cycles = count - *counter;
        *counter = count;

        if (elapsed_cycles < t->value) {
            t->value -= elapsed_cycles;
            func_802C0B3C(t->value);
            break;
        }

        t->prev->next = t->next;
        t->next->prev = t->prev;
        t->next = 0;
        t->prev = 0;

        if (t->mq != 0) {
            func_802C0510(t->mq, t->msg, 0);
        }

        if (t->interval != 0) {
            t->value = t->interval;
            func_802C0B9C(t);
        }
    }
}
