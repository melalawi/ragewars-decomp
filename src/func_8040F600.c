/* Releases every loaded slot of the active, referenced entries of the pool at D_80153C20: each
   loaded slot (flag 1) has its data released through func_804196A4, its flags and owner cleared and
   the entry's reference count decremented, and an entry left without references is unloaded
   through func_80411598 and marked inactive. Pool layout and indexed slot access follow func_80411598. */
#include "basetypes.h"

typedef struct {
    char pad0[4];
    s32 owner;
    u16 flags;
    char padA[2];
    char data[0x20];
} Slot;

typedef struct {
    char pad0[0xE];
    s16 pageCount;
} Definition;

typedef struct {
    s32 active;
    char pad4[0x300];
    void *buffers[0x60];
    Slot **pages;
    char pad488[4];
    Definition *def;
    unsigned char refCount;
    char pad491[0xB];
} Entry;

typedef struct {
    s16 count;
    char pad2[6];
    Entry *entries;
} Pool;

extern Pool D_80153C20;

extern void func_804196A4(char *data);
extern void func_80411598(s32 index);

void func_8040F600(void) {
    s32 e;
    s32 n;
    s32 i;
    Slot *slot;

    for (e = 0; e < D_80153C20.count; e++) {
        if (D_80153C20.entries[e].refCount != 0 && D_80153C20.entries[e].active != 0) {
            for (n = 0; n < D_80153C20.entries[e].def->pageCount; n++) {
                slot = D_80153C20.entries[e].pages[n];
                for (i = 0; i < 0x60; i++) {
                    if (slot[i].flags & 1) {
                        func_804196A4(slot[i].data);
                        slot[i].flags = 0;
                        slot[i].owner = 0;
                        D_80153C20.entries[e].refCount--;
                    }
                }
            }
            if (D_80153C20.entries[e].refCount == 0) {
                func_80411598(e);
                D_80153C20.entries[e].active = 0;
            }
        }
    }
}
