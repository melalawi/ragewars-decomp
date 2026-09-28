#include "basetypes.h"

/* Searches the counted pointer list at offset 0x1B620 of a world record for the first entry whose definition id at 0x18->0xC equals the given id, returning it or null. */

typedef struct {
    char pad[0xC];
    s16 id;
} Def;

typedef struct {
    char pad[0x18];
    Def *def;
} Entry;

typedef struct {
    char pad[0x1B620];
    Entry *list[16];
    s32 count;
} World;

Entry *func_8028C0E4(World *world, s32 id) {
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
