#include "basetypes.h"

typedef struct Queue {
    void *mtqueue;
    void *fullqueue;
    s32 validCount;
    s32 first;
    s32 msgCount;
    void **msg;
} Queue;

typedef struct Thread {
    char pad0[0x10];
    u16 state;
} Thread;

extern Thread *D_800D92A0;
extern u32 func_802C2020(void);
extern void func_802C2040(u32);
extern void func_802C145C(void *);
extern void *func_802C1648(void *);
extern void func_802C0840(void *);

s32 func_802C0390(Queue *queue, void **message, s32 block)
{
    u32 mask = func_802C2020();

    while (queue->validCount == 0) {
        if (!block) {
            func_802C2040(mask);
            return -1;
        }
        D_800D92A0->state = 8;
        func_802C145C(&queue->mtqueue);
    }

    if (message != 0) {
        *message = queue->msg[queue->first];
    }
    queue->first = (queue->first + 1) % queue->msgCount;
    queue->validCount--;
    if (*(void **)queue->fullqueue != 0) {
        func_802C0840(func_802C1648(&queue->fullqueue));
    }
    func_802C2040(mask);
    return 0;
}

/* Preserve the cartridge object's trailing alignment word. */
static const unsigned int func_802C0390_end
    __attribute__((section(".text"), aligned(4))) = { 0 };
