#include "basetypes.h"

/* Allocates a block sized for the entries of the list the parameters point at through func_802533DC, builds it with func_80440F10 from the list's own value and three parameters, registers it with func_80255C58 and advances the owner's rotating counter below four, returning the block or zero. Adapted from func_80442934 with the list read from the parameters at 0x18, a null list returning zero, and the first value read from the list at 0x20 instead of the parameters at 0x14 changed. */
struct Entry {
    s16 type;
    char pad[0x22];
};

struct List {
    struct Entry *entries;
    s16 count;
    char pad6[0x1A];
    s32 value;
};

struct Params {
    char pad[0x18];
    struct List *list;
    s32 b;
    s32 c;
    s32 d;
};

struct Owner {
    char pad[0x14];
    s16 counter;
};

extern char D_800E2518[];
extern void **func_802533DC(s32, s32, s32, char *);
extern void func_80440F10(void *, void **, struct List *, s32, s32, s32, s32, struct Owner *);
extern void func_80255C58(struct Owner *, void *);

void *func_80442020(struct Owner *owner, struct Params *params) {
    struct List *list = params->list;
    s32 a;
    s32 b;
    s32 c;
    s32 d;
    s32 size;
    s32 i;
    void **block;
    void *first;

    if (list != 0) {
        a = list->value;
        b = params->b;
        c = params->c;
        d = params->d;
        size = list->count * 40 + 0x1D8;
        for (i = 0; i < list->count; i++) {
            s32 extra = 0;
            if (list->entries[i].type == 3) {
                extra = 0x480;
            }
            size += extra;
        }
        block = func_802533DC(0, size, 0x3B, D_800E2518 + 4);
        if (block == 0) {
            return 0;
        }
        first = *block;
        if (first != 0) {
            func_80440F10(first, block, list, a, b, c, d, owner);
            func_80255C58(owner, first);
            if (++owner->counter >= 4) {
                owner->counter = 0;
            }
            return first;
        }
    }
    return 0;
}
