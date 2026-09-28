#include "basetypes.h"

/* Releases every occupied slot of a record, other than the one its header marks as local, whose value at slot offset 0xA8 equals the given value: marks it active, clears its flag and, when its key differs from its owner's, restarts the owner's sound with the slot's sample and invalidates the slot. */

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
    char pad1[0x3C];
    s32 flag;
    char pad2[0x54];
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

void func_8025BE28(Record *record, s32 value) {
    s32 i;
    Slot *slot = record->slots;

    for (i = 0; i < 17; slot++, i++) {
        if (slot->used != -1 && record->header->local != i && slot->value == value) {
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
    }
}
