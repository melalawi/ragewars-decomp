/* Returns the physical address of a cached copy of a data block: finds the cache entry keyed by the
 * block's address and refreshes the copy (and flushes it from the data cache) when the size changed;
 * otherwise reuses a free entry or allocates and links a new 0x90-byte one, copies the block into it and
 * marks it in use. */
#include "basetypes.h"

typedef struct CacheEntry {
    struct CacheEntry *next;
    void *key;
    u16 state;
    u16 size;
    s32 padC;
    char data[0x80];
} CacheEntry;

extern CacheEntry *D_8010BDFC;
extern void *D_8010BEA0;
extern s32 D_800D0954;
extern void *func_802C2490(void *destination, const void *source, int count);
extern void func_802C2370(void *, s32);
extern s32 func_802B5410(s32, s32, void *, s32, s32);
extern u32 func_802C0CB0(void *);

u32 func_802570E0(void *block, s32 size) {
    CacheEntry *entry;
    CacheEntry *unused;

    unused = 0;
    for (entry = D_8010BDFC; entry != 0; entry = entry->next) {
        if (entry->key == block) {
            entry->state = 3;
            if (entry->size != size) {
                entry->size = size;
                func_802C2490(entry->data, block, size);
                func_802C2370(entry->data, size);
            }
            return func_802C0CB0(entry->data);
        }
        if (entry->state == 0) {
            unused = entry;
        }
    }
    if (unused == 0) {
        unused = (CacheEntry *)func_802B5410(0, 0, D_8010BEA0, 1, 0x90);
        unused->next = D_8010BDFC;
        D_8010BDFC = unused;
        D_800D0954++;
    }
    unused->key = block;
    unused->state = 3;
    unused->size = size;
    func_802C2490(unused->data, block, size);
    return func_802C0CB0(unused->data);
}
