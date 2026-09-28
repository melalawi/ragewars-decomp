/* __osInsertTimer, drafted from ultralib src/os/timerintr.c. */
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

u64 func_802C0B9C(OSTimer *t)
{
    OSTimer *timep;
    u64 tim;
    u32 savedMask = func_802C2020();

    timep = D_800D92B0->next;
    tim = t->value;
    for (; timep != D_800D92B0 && tim > timep->value; timep = timep->next) {
        tim -= timep->value;
    }

    t->value = tim;

    if (timep != D_800D92B0) {
        timep->value -= tim;
    }

    t->next = timep;
    t->prev = timep->prev;
    timep->prev->next = t;
    timep->prev = t;
    func_802C2040(savedMask);
    return tim;
}
