#include "span_1000/code_802646F4.h"
#include "types.h"

/* Restores every actor from the global replay table: copies its 0x70-byte block back to 0x5E0 and, when
 * the table's mode is 1, also restores its position, its value at 0x6C and its identifier resolved from the
 * saved handle through func_8028B394_de. Adapted from the snapshot writer func_80264CE0_de, reading both tables
 * through local pointers and re-taking the actor list address in the loop increment. */










extern ActorList D_80140F80;
extern Snapshot D_8010BC40;
extern char D_8011BDC8;
extern s32 func_8028B394_de(void *table, s32 handle);

void func_80264B8C_de(void) {
    s32 i;
    Actor_func_80264B8C_de *actor;
    Snapshot *snapshot;
    ActorList *list;

    list = &D_80140F80;
    snapshot = &D_8010BC40;
    for (i = 0; i < list->count; i++, list = &D_80140F80) {
        actor = &list->actors[i];
        actor->block = snapshot->blocks[i];
        if (snapshot->mode == 1) {
            actor->position = snapshot->positions[i];
            actor->field6C = snapshot->values[i];
            actor->id = func_8028B394_de(&D_8011BDC8, snapshot->handles[i]);
        }
    }
}
