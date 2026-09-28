#include "basetypes.h"

/* Searches the counted pointer list at offset 0x1B664 of a world record for the first entry whose definition id at 0x18->0xC equals the given id, returning it or null. Adapted from func_8028C0E4 with the list offset changed to 0x1B664. */

typedef struct {
    char pad[0xC];
    s16 id;
} Def;

typedef struct {
    char pad[0x18];
    Def *def;
} Entry;

typedef struct {
    char pad[0x1B664];
    Entry *list[16];
    s32 count;
} World;

Entry *func_8028C7BC(World *world, s32 id) {
    s32 i;
    Entry *found = 0;

    for (i = 0; i < world->count; i++) {
        if (world->list[i]->def->id == id) {
            found = world->list[i];
            break;
        }
    }
    return found;
}
