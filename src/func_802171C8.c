#include "basetypes.h"

typedef struct {
    void *base;
    u16 *cur;
} Cursor802171C8;

/** Read the next u16 from the cursor stream, wrapping back to base on the -1 sentinel. */
s16 func_802171C8(Cursor802171C8 *arg0) {
    u16 *cur;
    u16 value;

    cur = arg0->cur;
    value = *cur;
    cur += 1;
    arg0->cur = cur;
    if (*(s16 *) cur == -1) {
        arg0->cur = arg0->base;
    }
    return (s16) value;
}
