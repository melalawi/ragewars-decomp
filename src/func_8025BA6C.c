#include "basetypes.h"

/* Returns whether any of the sixteen occupied slots of a record, other than the one its header marks as local, holds the given value at slot offset 0xA8. */

typedef struct {
    char pad[0x102];
    s16 local;
} Header;

typedef struct {
    char pad0[8];
    s32 used;
    char pad[0x9C];
    s32 value;
    char pad2[0x20];
} Slot;

typedef struct {
    Header *header;
    Slot slots[17];
} Record;

s32 func_8025BA6C(Record *record, s32 value) {
    s32 i;
    Slot *slot = record->slots;

    for (i = 0; i < 16; i++, slot++) {
        if (slot->used != -1 && record->header->local != i && slot->value == value) {
            return 1;
        }
    }
    return 0;
}
