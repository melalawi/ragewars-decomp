#include "basetypes.h"

typedef struct Queue {
    s32 *state;
    s32 unknown4;
    s32 count;
    s32 start;
    s32 capacity;
    s32 *entries;
} Queue;

typedef struct GlobalState {
    char pad0[0x10];
    s16 status;
} GlobalState;

extern GlobalState *D_800D92A0;
extern s32 func_802C2020(void);
extern void func_802C2040(s32 value);
extern void func_802C145C(void *queue_data);
extern void *func_802C1648(Queue *queue);
extern void func_802C0840(void *value);

s32 func_802C0510(Queue *queue, s32 entry, s32 mode) {
    s32 saved;

    saved = func_802C2020();
    while (queue->count >= queue->capacity) {
        if (mode != 1) {
            func_802C2040(saved);
            return -1;
        }
        D_800D92A0->status = 8;
        func_802C145C(&queue->unknown4);
    }
    queue->entries[(queue->start + queue->count) % queue->capacity] = entry;
    queue->count++;
    if (*queue->state != 0) {
        func_802C0840(func_802C1648(queue));
    }
    func_802C2040(saved);
    return 0;
}
