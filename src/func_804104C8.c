/* Expires cached UI resources against the current tick from func_802A2934 unless the cache is
   locked: releases through func_80411B70 the first flagged entry whose unretained resource has an
   id below the tick and stops; otherwise, for each live chunk, clears every flagged slot whose time
   has passed (freeing its data through func_804196A4) and stops as soon as a chunk still holds live
   slots after one expires, freeing through func_80411598 and clearing each chunk left empty. */
#include "basetypes.h"

struct Entry {
    s32 unused;
    s32 flags;
    char rest[0x14];
};

struct Resource {
    s32 id;
    s16 retained;
    s16 unused;
};

struct Slot {
    char pad0[4];
    s32 time;
    u16 flags;
    char padA[2];
    char data[0x20];
};

struct Header {
    char pad0[0xE];
    s16 count;
};

struct Chunk {
    void *active;
    char pad4[0x480];
    struct Slot **slots;
    char pad488[4];
    struct Header *header;
    u8 live;
    char pad491[0xB];
};

struct State {
    char pad0[0x25C];
    s16 count;
    struct Entry *entries;
    char pad264[4];
    struct Resource *resources;
    char pad26C[4];
    s16 chunkCount;
    char pad272[6];
    struct Chunk *chunks;
    char pad27C[0x28];
    s32 locked;
};

extern struct State D_801539B0;

extern s32 func_802A2934(void);
extern void func_80411B70(s32 index);
extern void func_804196A4(char *data);
extern void func_80411598(s32 index);

void func_804104C8(void) {
    s32 now;
    s32 i;
    s32 j;
    s32 k;
    struct Slot *slot;
    struct Slot *slots;
    struct Resource *resource;

    now = func_802A2934();
    if (D_801539B0.locked != 0) {
        return;
    }
    for (i = 0; i < D_801539B0.count; i++) {
        if (D_801539B0.entries[i].flags & 1) {
            resource = &D_801539B0.resources[i];
            if (resource->id != -1 && resource->retained == 0 && resource->id < now) {
                func_80411B70(i);
                return;
            }
        }
    }
    for (i = 0; i < D_801539B0.chunkCount; i++) {
        if (D_801539B0.chunks[i].live != 0 && D_801539B0.chunks[i].active != 0) {
            for (j = 0; j < D_801539B0.chunks[i].header->count; j++) {
                slots = D_801539B0.chunks[i].slots[j];
                for (k = 0; k < 0x60; k++) {
                    slot = &slots[k];
                    if ((slot->flags & 1) && slot->time < now) {
                        func_804196A4(slot->data);
                        slot->time = 0;
                        slot->flags &= ~1;
                        D_801539B0.chunks[i].live--;
                        if (D_801539B0.chunks[i].live != 0) {
                            return;
                        }
                    }
                }
            }
            if (D_801539B0.chunks[i].live == 0) {
                func_80411598(i);
                D_801539B0.chunks[i].active = 0;
            }
        }
    }
}
