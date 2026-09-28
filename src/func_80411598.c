/* Unloads entry index of the pool at D_80153C20: releases the data of every loaded slot (flag 1) in
   each of the entry's slot ns (the n count comes from the entry's definition) through
   func_804196A4 and clears the flag, frees the entry's buffer through func_80254784 and clears the
   buffer table when one is held, and marks the entry inactive. */
#include "basetypes.h"

typedef struct {
    char pad0[8];
    u16 flags;
    char padA[2];
    char data[0x20];
} Slot;

typedef struct {
    char pad0[0xE];
    s16 nCount;
} Definition;

typedef struct {
    s32 active;
    char pad4[0x300];
    void *buffers[0x60];
    Slot **ns;
    char pad488[4];
    Definition *def;
    char pad490[0xC];
} Entry;

typedef struct {
    s16 count;
    char pad2[6];
    Entry *entries;
} Pool;

extern Pool D_80153C20;

extern void func_804196A4(char *data);
extern void func_80254784(void *buffer);

void func_80411598(s32 index) {
    s32 n;
    s32 i;
    Slot *slot;

    for (n = 0; n < D_80153C20.entries[index].def->nCount; n++) {
        slot = D_80153C20.entries[index].ns[n];
        for (i = 0; i < 0x60; i++) {
            if (slot[i].flags & 1) {
                func_804196A4(slot[i].data);
                slot[i].flags &= ~1;
            }
        }
    }
    if (D_80153C20.entries[index].buffers[0] != 0) {
        func_80254784(D_80153C20.entries[index].buffers[0]);
        D_80153C20.entries[index].buffers[0] = 0;
        for (n = 0; n < 0x60; n++) {
            D_80153C20.entries[index].buffers[n] = 0;
        }
    }
    D_80153C20.entries[index].active = 0;
}
