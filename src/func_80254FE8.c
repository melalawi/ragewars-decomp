#include "basetypes.h"

/* Finds an evictable entry of a list: skips entries flagged 0x702 and returns the first one untouched for at least five ticks of D_80105180, remembering the first recently used candidate in *recent when that slot is still empty; returns null when none qualifies. */

typedef struct Entry {
    char pad0[0xC];
    s32 flags;
    s32 stamp;
    s32 pad14;
    struct Entry *next;
} Entry;

typedef struct EntryList {
    s32 pad0;
    Entry *first;
} EntryList;

extern s32 D_80105180[];

Entry *func_80254FE8(s32 unused, EntryList *list, Entry **recent)
{
    Entry *e = list->first;

    if (*recent == 0) {
        for (; e != 0; e = e->next) {
            if (!(e->flags & 0x702)) {
                if ((u32)(D_80105180[0] - e->stamp) >= 5) {
                    return e;
                }
                *recent = e;
                break;
            }
        }
    }
    for (; e != 0; e = e->next) {
        if (!(e->flags & 0x702) && (u32)(D_80105180[0] - e->stamp) >= 5) {
            return e;
        }
    }
    return 0;
}
