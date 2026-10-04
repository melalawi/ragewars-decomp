#include "span_1000/code_8028B64C.h"
#include "types.h"

/* Searches the counted pointer list at offset 0x1B664 of a world record for the first entry whose definition id at 0x18->0xC equals the given id, returning it or null. Adapted from func_8028C108_de with the list offset changed to 0x1B664. */







Entry_func_8028C108_de *func_8028C7E0_de(World_func_8028C7E0_de *world, s32 id) {
    s32 i;
    Entry_func_8028C108_de *found = 0;

    for (i = 0; i < world->count; i++) {
        if (world->list[i]->def->unkC == id) {
            found = world->list[i];
            break;
        }
    }
    return found;
}
