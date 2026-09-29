#include "basetypes.h"

extern void func_80255E78(void *, s32);
extern s32 func_80255CB4(void *, s32);

typedef struct { void *slot; char pad[0x10]; } Slot;
typedef struct func_802A6D28_S1 func_802A6D28_S1;
typedef struct func_802A6D28_S2 func_802A6D28_S2;
struct func_802A6D28_S1 {
    char pad0[0x94E0];
    Slot slots[10];
    char pad95A8[0x10];
    s32 unk95B8;
};
struct func_802A6D28_S2 {
    char pad0[0x4];
    void* unk4;
    char pad4[0x48 - 0x4 - sizeof(void*)];
    s32 unk48;
};

void func_802A6D28(void *arg0, s32 arg1) {
    s32 count;
    s32 offset;
    s32 list_offset;
    void **slot;
    void *node;
    void *next;

    if (((func_802A6D28_S1 *)(arg0))->unk95B8 != 0x64) {
        count = 0;
        list_offset = 0x95A8;
        offset = 0x94E0;
        do {
            slot = &((func_802A6D28_S1 *)arg0)->slots[count].slot;
            node = *slot;
            if (node != 0) {
                do {
                    next = ((func_802A6D28_S2 *)(node))->unk4;
                    if (((func_802A6D28_S2 *)(node))->unk48 == arg1) {
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
