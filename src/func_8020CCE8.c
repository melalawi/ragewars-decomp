#include "basetypes.h"

typedef struct {
    s32 stride;
    s32 pad4;
} EntryTable8020CCE8;

typedef struct {
    s32 pad0[2];
    EntryTable8020CCE8 *table;
    s32 count;
} EntryList8020CCE8;

s32 func_8020CCE8(EntryList8020CCE8 *list, s32 value, s32 *partners, s32 *indices) {
    s32 i;
    s32 found;

    i = 0;
    found = 0;
    if (list->count > 0) {
        do {
            s32 product = i * list->table->stride;
            s32 offset = product + 8;
            u16 *entry;
            u16 *other_entry;

            entry = (u16 *)((char *)list->table + offset);
            other_entry = entry;

            if (entry[0] == value) {
                found++;
                *partners = entry[1];
                *indices = i;
                indices++;
                partners++;
            }
            if (other_entry[1] == value) {
                found++;
                *partners = other_entry[0];
                *indices = i;
                indices++;
                partners++;
            }
            i++;
        } while (i < list->count);
    }
    return found;
}
