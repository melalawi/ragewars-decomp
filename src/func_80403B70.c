#include "basetypes.h"

/* Returns the byte size of a block holding a 0x30-byte header and a 36-byte record for every entry
   counted at offset 4 of the two lists func_8028FD94 returns for an object with zero and with
   two. */
struct List {
    s32 pad0;
    s32 count;
};

extern struct List *func_8028FD94(void *, s32);

s32 func_80403B70(void *object) {
    struct List *first = func_8028FD94(object, 0);
    struct List *second = func_8028FD94(object, 2);
    s32 size = first->count * 36;

    return size + second->count * 36 + 0x30;
}
