#include "span_1000/code_80208410.h"
#include "span_1000/types.h"
#include "types.h"

/* Pops the front of a four-entry queue at offset 0x14 of a record: shifts the entries down one,
   marks the last empty with -1 and returns whether an entry remains at the front. */


s32 func_80209828_de(struct Queue *queue) {
    s32 i;

    for (i = 1; i < 4; i++) {
        queue->items[i - 1] = queue->items[i];
    }
    queue->items[3] = -1;
    return queue->items[0] != -1;
}
