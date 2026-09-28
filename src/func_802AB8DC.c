#include "basetypes.h"

typedef struct {
    s32 offset;
    u8 pad4[4];
} Entry802AB8DC;

typedef struct {
    s16 count;
    u8 pad2[6];
    Entry802AB8DC entries[1];
} Table802AB8DC;

void func_802AB8DC(Table802AB8DC **handle, s32 index, void **out, u8 *tag) {
    Table802AB8DC *table;
    Entry802AB8DC *entry;
    void *result;
    u8 entryTag;
    s32 remainder;

    *out = 0;
    if (handle != 0) {
        table = *handle;
        entry = (Entry802AB8DC *)((u8 *)table + 8);
        remainder = index % table->count;
        remainder *= 8;
        remainder += (s32)entry;
        entry = (Entry802AB8DC *)remainder;
        entryTag = entry->pad4[0];
        result = (u8 *)table + entry->offset;
        *tag = entryTag;
        *out = result;
    }
}
