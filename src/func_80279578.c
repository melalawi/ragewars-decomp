#include "basetypes.h"

/** Push a node onto the tail of a doubly-linked list; returns new count. */
s32 func_80279578(void *arg0, void *arg1) {
    s32 count;

    if ((*(s32 *)((s8 *)(arg0) + (8))) == 0) {
        (*(void **)((s8 *)(arg0) + (0))) = arg1;
        (*(void **)((s8 *)(arg0) + (4))) = arg1;
        (*(s32 *)((s8 *)(arg1) + (0))) = 0;
        (*(s32 *)((s8 *)(arg1) + (4))) = 0;
    } else {
        (*(void **)((s8 *)(arg1) + (0))) = (*(void **)((s8 *)(arg0) + (4)));
        (*(s32 *)((s8 *)(arg1) + (4))) = 0;
        (*(void **)((s8 *)(*(void **)((s8 *)(arg0) + (4))) + (4))) = arg1;
        (*(void **)((s8 *)(arg0) + (4))) = arg1;
    }
    count = (*(s32 *)((s8 *)(arg0) + (8))) + 1;
    (*(s32 *)((s8 *)(arg0) + (8))) = count;
    return count;
}
