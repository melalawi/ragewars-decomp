#include "span_1000/code_802AB720.h"
#include "span_1000/types.h"
#include "types.h"
typedef struct Handler Handler;
/* Dispatches an item effect with the given id to an actor that can receive it: looks the id up in each item handler table in turn (D_800D31D0, D_800D3230, D_800D32A8, D_800D3368, D_800D34C0, D_800D33C0 and D_800D3390) and returns the first nonzero handler result, clearing the given target from every actor's two lock-on slots after the D_800D34C0 handler. */





extern char D_800CDEF0;
extern char D_800CDF50;
extern char D_800CDFC8_de;
extern char D_800CE088;
extern char D_800CE0B0;
extern char D_800CE0E0;
extern char D_800CE1E0_de;
extern Actor_func_802AB6EC_de *D_80140FA0;

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

s32 func_802AB6EC_de(Actor_func_802AB6EC_de *actor, s32 target, s32 id) {
    Handler *entry;
    Actor_func_802AB6EC_de *other;
    s32 result;

    result = 0;
    if (actor->enabled != 0) {
        entry = find_handler(&D_800CDEF0, 3, 0x18, id);
        if (entry != 0) {
            result = entry->handle14(actor, entry);
        }
        if (result != 0) {
            return result;
        }
        entry = find_handler(&D_800CDF50, 5, 0x14, id);
        if (entry != 0) {
            result = entry->handle10(actor, entry);
        }
        if (result != 0) {
            return result;
        }
        entry = find_handler(&D_800CDFC8_de, 7, 0x18, id);
        if (entry != 0) {
            result = entry->handle14(actor, entry);
        }
        if (result != 0) {
            return result;
        }
        entry = find_handler(&D_800CE088, 1, 0x14, id);
        if (entry != 0) {
            result = entry->handle10(actor, entry);
        }
        if (result != 0) {
            return result;
        }
        entry = find_handler(&D_800CE1E0_de, 15, 0x18, id);
        if (entry != 0) {
            result = entry->handle14(actor, entry);
        }
        for (other = D_80140FA0; other != 0; other = other->next) {
            if (other->lockOn[0] == target) {
                other->lockOn[0] = 0;
            } else if (other->lockOn[1] == target) {
                other->lockOn[1] = 0;
            }
        }
        if (result != 0) {
            return result;
        }
        entry = find_handler(&D_800CE0E0, 15, 0x10, id);
        if (entry != 0) {
            result = entry->handleC.targeted(actor, entry, target);
        }
        if (result != 0) {
            return result;
        }
        entry = find_handler(&D_800CE0B0, 2, 0x10, id);
        if (entry != 0) {
            result = entry->handleC.plain(actor, entry);
        }
    }
    return result;
}
