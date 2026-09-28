/* alEvtqPostEvent, drafted from ultralib src/audio/event.c: take an item from the free list, copy
   the event into it and link it into the allocated list at its delta time, adjusting the delta of
   the item it is inserted before; AL_EVTQ_END posts at the end with no delta. */
#include "basetypes.h"

typedef struct ALLink_s {
    struct ALLink_s *next;
    struct ALLink_s *prev;
} ALLink;

typedef struct {
    s16 type;
    char msg[14];
} ALEvent;

typedef struct {
    ALLink node;
    s32 delta;
    ALEvent evt;
} ALEventListItem;

typedef struct {
    ALLink freeList;
    ALLink allocList;
    s32 eventCount;
} ALEventQueue;

extern s32 func_802C2260(s32);                  /* osSetIntMask */
extern void func_802B7520(ALLink *);            /* alUnlink */
extern void func_802B7550(ALLink *, ALLink *);  /* alLink */
extern void func_802B53E0(void *, void *, s32); /* alCopy */

void func_802B51A4(ALEventQueue *evtq, ALEvent *evt, s32 delta)
{
    ALEventListItem *item;
    ALEventListItem *nextItem;
    ALLink *node;
    s32 postAtEnd = 0;
    s32 mask;

    mask = func_802C2260(1);

    item = (ALEventListItem *)evtq->freeList.next;
    if (!item) {
        func_802C2260(mask);
        return;
    }

    func_802B7520((ALLink *)item);
    func_802B53E0(evt, &item->evt, sizeof(*evt));

    if (delta == 0x7FFFFFFF)
        postAtEnd = -1;

    for (node = &evtq->allocList; node != 0; node = node->next) {
        if (!node->next) {
            if (postAtEnd)
                item->delta = 0;
            else
                item->delta = delta;
            func_802B7550((ALLink *)item, node);
            break;
        } else {
            nextItem = (ALEventListItem *)node->next;

            if (delta < nextItem->delta) {
                item->delta = delta;
                nextItem->delta -= delta;

                func_802B7550((ALLink *)item, node);
                break;
            }

            delta -= nextItem->delta;
        }
    }

    func_802C2260(mask);
}
