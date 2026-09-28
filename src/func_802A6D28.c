#include "basetypes.h"

extern void func_80255E78(void *, s32);
extern s32 func_80255CB4(void *, s32);

void func_802A6D28(void *arg0, s32 arg1) {
    s32 count;
    s32 offset;
    s32 list_offset;
    void **slot;
    void *node;
    void *next;

    if (*(s32 *)((char *)arg0 + 0x95B8) != 0x64) {
        count = 0;
        list_offset = 0x95A8;
        offset = 0x94E0;
        do {
            slot = (void **)((char *)arg0 + offset);
            node = *slot;
            if (node != 0) {
                do {
                    next = *(void **)((char *)node + 4);
                    if (*(s32 *)((char *)node + 0x48) == arg1) {
                        func_80255E78(slot, (s32) node);
                        func_80255CB4((char *)arg0 + list_offset, (s32) node);
                    }
                    node = next;
                } while (node != 0);
            }
            count += 1;
            offset += 0x14;
        } while (count < 0xA);
    }
}
