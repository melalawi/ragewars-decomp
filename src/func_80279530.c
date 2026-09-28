#include "basetypes.h"

/** Push a node onto the front of a doubly-linked list. */
void func_80279530(void *arg0, void *arg1) {
    if ((*(s32 *)((s8 *)(arg0) + (8))) == 0) {
        (*(void **)((s8 *)(arg0) + (0))) = arg1;
        (*(void **)((s8 *)(arg0) + (4))) = arg1;
        (*(s32 *)((s8 *)(arg1) + (0))) = 0;
        (*(s32 *)((s8 *)(arg1) + (4))) = 0;
    } else {
        (*(void **)((s8 *)(arg1) + (4))) = (*(void **)((s8 *)(arg0) + (0)));
        (*(s32 *)((s8 *)(arg1) + (0))) = 0;
        (*(void **)((s8 *)(*(void **)((s8 *)(arg0) + (0))) + (0))) = arg1;
        (*(void **)((s8 *)(arg0) + (0))) = arg1;
    }
    (*(s32 *)((s8 *)(arg0) + (8))) = (*(s32 *)((s8 *)(arg0) + (8))) + 1;
}
