/* Dispatches an item effect with the given id to an actor that can receive it: looks the id up in each item handler table in turn (D_800D31D0, D_800D3230, D_800D32A8, D_800D3368, D_800D34C0, D_800D33C0 and D_800D3390) and returns the first nonzero handler result, clearing the given target from every actor's two lock-on slots after the D_800D34C0 handler. */
#include "basetypes.h"

typedef struct Handler {
    char pad0[4];
    s16 id;
    char pad6[6];
    union {
        s32 (*targeted)(void *actor, struct Handler *entry, s32 target);
        s32 (*plain)(void *actor, struct Handler *entry);
    } handleC;
    s32 (*handle10)(void *actor, struct Handler *entry);
    s32 (*handle14)(void *actor, struct Handler *entry);
} Handler;

typedef struct Actor {
    char pad0[0x5E4];
    s32 enabled;
    char pad5E8[0x1224 - 0x5E8];
    s32 lockOn[2];
    char pad122C[0x16E0 - 0x122C];
    struct Actor *next;
} Actor;

extern char D_800D31D0;
extern char D_800D3230;
extern char D_800D32A8;
extern char D_800D3368;
extern char D_800D3390;
extern char D_800D33C0;
extern char D_800D34C0;
extern Actor *D_80145060;

static inline Handler *find_handler(char *table, s32 count, s32 size, s32 id) {
    Handler *entry;
    s32 i;

    entry = (Handler *)table;
    i = count;
    do {
        if (entry->id == id) {
            return entry;
        }
        i--;
        entry = (Handler *)((char *)entry + size);
    } while (i != -1);
    return 0;
}

s32 func_802AC6DC(Actor *actor, s32 target, s32 id) {
    Handler *entry;
    Actor *other;
    s32 result;

    result = 0;
    if (actor->enabled != 0) {
        entry = find_handler(&D_800D31D0, 3, 0x18, id);
        if (entry != 0) {
            result = entry->handle14(actor, entry);
        }
        if (result != 0) {
            return result;
        }
        entry = find_handler(&D_800D3230, 5, 0x14, id);
        if (entry != 0) {
            result = entry->handle10(actor, entry);
        }
        if (result != 0) {
            return result;
        }
        entry = find_handler(&D_800D32A8, 7, 0x18, id);
        if (entry != 0) {
            result = entry->handle14(actor, entry);
        }
        if (result != 0) {
            return result;
        }
        entry = find_handler(&D_800D3368, 1, 0x14, id);
        if (entry != 0) {
            result = entry->handle10(actor, entry);
        }
        if (result != 0) {
            return result;
        }
        entry = find_handler(&D_800D34C0, 15, 0x18, id);
        if (entry != 0) {
            result = entry->handle14(actor, entry);
        }
        for (other = D_80145060; other != 0; other = other->next) {
            if (other->lockOn[0] == target) {
                other->lockOn[0] = 0;
            } else if (other->lockOn[1] == target) {
                other->lockOn[1] = 0;
            }
        }
        if (result != 0) {
            return result;
        }
        entry = find_handler(&D_800D33C0, 15, 0x10, id);
        if (entry != 0) {
            result = entry->handleC.targeted(actor, entry, target);
        }
        if (result != 0) {
            return result;
        }
        entry = find_handler(&D_800D3390, 2, 0x10, id);
        if (entry != 0) {
            result = entry->handleC.plain(actor, entry);
        }
    }
    return result;
}
