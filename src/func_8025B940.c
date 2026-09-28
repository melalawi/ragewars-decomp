/* Finds and releases the first occupied nonlocal sound slot with matching value, identifier and flag 0x40, returning its index or -1. */
#include "basetypes.h"

typedef struct {
    char pad[0x102];
    s16 local;
} Header;

typedef struct {
    char pad[0x84];
    char sound[0x58];
    s16 samples[20];
    char pad2[0x104 - 0xDC - 40];
    s32 key;
} Owner;

typedef struct {
    s32 index;
    s32 state;
    s32 used;
    char pad0[4];
    s32 key;
    char pad1[0x26];
    s16 id;
    char pad1b[0x14];
    s32 flag;
    char pad2[0x50];
    s32 mode;
    s32 value;
    s32 active;
    Owner *owner;
    char pad3[0x18];
} Slot;

typedef struct {
    Header *header;
    Slot slots[17];
} Record;

extern void func_802B7FD0(void *sound, s16 sample);
extern s32 func_802B76F0(void *sound);
extern void func_802B8030(void *sound);

static __inline__ void release(Slot *slot) {
    Owner *owner = slot->owner;
    void *sound;

    slot->active = 1;
    slot->flag = 0;
    if (slot->key != owner->key) {
        sound = owner->sound;
        func_802B7FD0(sound, owner->samples[slot->index]);
        if (func_802B76F0(sound) != 0) {
            func_802B8030(sound);
        }
        slot->state = -1;
    }
}

s32 func_8025B940(Record *record, s16 value, s16 id) {
    s32 i;
    Slot *cur = record->slots;

    for (i = 0; i < 16; cur++, i++) {
        if (cur->used != -1 && record->header->local != i && cur->value == value && (cur->mode & 0x40) &&
            cur->id == id) {
            release(&record->slots[(s16)i]);
            return (s16)i;
        }
    }
    return -1;
}
