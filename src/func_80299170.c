#include "basetypes.h"

/* Returns the object loaded for an identifier in the current context: reuses a cached entry whose context and identifier match and whose object still carries that identifier, and otherwise loads it through func_8040ECB0, counts the load in D_8014D0A0 with its high-water mark in D_8014D09C, and records it while the cache holds fewer than 75 entries. */

typedef struct Loaded {
    char pad0[0xC];
    s16 id;
} Loaded;

typedef struct Entry {
    s32 id;
    Loaded *object;
    s32 context;
} Entry;

typedef struct Cache {
    char pad0[0x53C];
    Entry *entries;
    s32 count;
} Cache;

extern Cache *D_8014D080;
extern s32 D_8014D09C;
extern s32 D_8014D0A0;
extern s32 func_8029A958(void);
extern s32 func_80411E4C(s32 handle);
extern Loaded *func_8040ECB0(s32 context, s32 id);

Loaded *func_80299170(s32 id) {
    Loaded *object;
    s32 context;
    s32 i;

    context = func_80411E4C(func_8029A958());
    for (i = 0; i < D_8014D080->count; i++) {
        if (D_8014D080->entries[i].context == context && D_8014D080->entries[i].id == id
            && D_8014D080->entries[i].object != 0 && D_8014D080->entries[i].object->id == id) {
            return D_8014D080->entries[i].object;
        }
    }
    object = func_8040ECB0(context, id & 0xFFFF);
    D_8014D0A0++;
    if (D_8014D09C < D_8014D0A0) {
        D_8014D09C = D_8014D0A0;
    }
    if (D_8014D080->count < 75) {
        D_8014D080->entries[D_8014D080->count].id = id;
        D_8014D080->entries[D_8014D080->count].object = object;
        D_8014D080->entries[D_8014D080->count].context = context;
        D_8014D080->count++;
    }
    return object;
}
