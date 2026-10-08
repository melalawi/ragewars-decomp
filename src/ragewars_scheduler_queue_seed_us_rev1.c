#include "types.h"

/* Shared sentinel used to initialize message wait queues in 802BAC60.
 * The scheduler run-queue and active-thread heads start at this sentinel.
 * 802BC508 orders the queue through its next pointer and priority word;
 * 802BAC90 links created threads through the active head. ROM D9E90..D9EA0. */
struct ResidentThreadQueueNode {
    struct ResidentThreadQueueNode *next;
    s32 priority;
};
struct ResidentThreadQueueNode D_800D5260 = {0, -1};
struct ResidentThreadQueueNode *D_800D5268_de = &D_800D5260;
struct ResidentThreadQueueNode *D_800D526C = &D_800D5260;
