#include "basetypes.h"

typedef void (*Callback)(void *arg0, s32 arg1);

s32 func_80209874(void *arg0, s32 arg1) {
    void *node;
    s32 *entry;
    s32 *found;
    Callback callback;

    node = *(void **)((char *)arg0 + 0x214);
    found = 0;
    *(s32 *)((char *)arg0 + 0x21C) = arg1;
    while (node != 0) {
        entry = (s32 *)((char *)node + 0x20);
        if (*entry != -1) {
            while (*entry != -1) {
                if (*entry == arg1) {
                    found = entry;
                    node = 0;
                    break;
                }
                entry += 8;
            }
        }
        if (node != 0) {
            node = *(void **)node;
        }
    }
    if (found == 0) {
        return 0;
    }
    *(s32 **)((char *)arg0 + 0x218) = found;
    callback = *(Callback *)(found + 1);
    if (callback != 0) {
        callback(*(void **)arg0, 0);
    }
    return 1;
}
