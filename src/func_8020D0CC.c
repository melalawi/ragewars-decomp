#include "basetypes.h"

extern void func_8020C5A0(void *arg0, void *node);

/** Find a keyed node in the object's list and pass it to func_8020C5A0. */
void func_8020D0CC(void *arg0, s32 key) {
    void *node = *(void **)((char *)arg0 + 0x24);

    if (node == 0) {
        goto not_found;
    }
loop:
    if (*(s32 *)node == key) {
        goto found;
    }
    node = *(void **)((char *)node + 0x10);
    if (node != 0) {
        goto loop;
    }
not_found:
    node = 0;
found:
    func_8020C5A0(arg0, node);
}
