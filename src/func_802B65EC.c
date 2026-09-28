#include "basetypes.h"

void *func_802B65EC(void *arg0, s8 arg1, s8 arg2, s8 arg3) {
    void *node;
    void *next;
    void *tail;

    node = *(void **)((char *)arg0 + 0x6C);
    if (node != 0) {
        next = *(void **)node;
        *(void **)((char *)arg0 + 0x6C) = next;
        *(void **)node = 0;
        if (*(void **)((char *)arg0 + 0x64) == 0) {
            *(void **)((char *)arg0 + 0x64) = node;
        } else {
            tail = *(void **)((char *)arg0 + 0x68);
            *(void **)tail = node;
        }
        *(void **)((char *)arg0 + 0x68) = node;
        *(s8 *)((char *)node + 0x31) = arg3;
        *(s8 *)((char *)node + 0x32) = arg1;
        *(s8 *)((char *)node + 0x33) = arg2;
        *(void **)((char *)node + 0x14) = node;
    }
    return node;
}
