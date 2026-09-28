#include "basetypes.h"

/* Pops the front of a four-entry queue at offset 0x14 of a record: shifts the entries down one,
   marks the last empty with -1 and returns whether an entry remains at the front. */
struct Queue {
    char pad[0x14];
    s32 items[4];
};

s32 func_80209828(struct Queue *queue) {
    s32 i;

    for (i = 1; i < 4; i++) {
        queue->items[i - 1] = queue->items[i];
    }
    queue->items[3] = -1;
    return queue->items[0] != -1;
}
