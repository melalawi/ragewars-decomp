#include "basetypes.h"

/* Restores every actor from the global replay table: copies its 0x70-byte block back to 0x5E0 and, when
 * the table's mode is 1, also restores its position, its value at 0x6C and its identifier resolved from the
 * saved handle through func_8028B370. Adapted from the snapshot writer func_80264D00, reading both tables
 * through local pointers and re-taking the actor list address in the loop increment. */
typedef struct Vec3i {
    s32 x;
    s32 y;
    s32 z;
} Vec3i;

typedef struct Block70 {
    s32 w[28];
} Block70;

typedef struct Actor {
    char pad0[8];
    Vec3i position;
    s32 id;
    char pad18[0x6C - 0x18];
    f32 field6C;
    char pad70[0x5E0 - 0x70];
    Block70 block;
    char pad650[0x16E8 - 0x650];
} Actor;

typedef struct ActorList {
    s32 pad0;
    Actor *actors;
    s32 count;
} ActorList;

typedef struct Snapshot {
    s32 pad0;
    s32 mode;
    char pad8[0x8];
    Block70 blocks[8];
    Vec3i positions[8];
    f32 values[8];
    s32 handles[8];
} Snapshot;

extern ActorList D_80145040;
extern Snapshot D_8010FC40;
extern char D_8011FE88;
extern s32 func_8028B370(void *table, s32 handle);

void func_80264BAC(void) {
    s32 i;
    Actor *actor;
    Snapshot *snapshot;
    ActorList *list;

    list = &D_80145040;
    snapshot = &D_8010FC40;
    for (i = 0; i < list->count; i++, list = &D_80145040) {
        actor = &list->actors[i];
        actor->block = snapshot->blocks[i];
        if (snapshot->mode == 1) {
            actor->position = snapshot->positions[i];
            actor->field6C = snapshot->values[i];
            actor->id = func_8028B370(&D_8011FE88, snapshot->handles[i]);
        }
    }
}
