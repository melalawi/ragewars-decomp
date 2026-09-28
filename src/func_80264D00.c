#include "basetypes.h"

/* Snapshots every actor into the global replay table: copies its 0x70-byte block at 0x5E0, its position, its value at 0x6C and the handle func_8028B32C finds for its identifier. */

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
    char pad0[0x10];
    Block70 blocks[8];
    Vec3i positions[8];
    f32 values[8];
    s32 handles[8];
} Snapshot;

extern ActorList D_80145040;
extern Snapshot D_8010FC40;
extern char D_8011FE88;
extern s32 func_8028B32C(void *table, s32 id);

void func_80264D00(void) {
    s32 i;
    Actor *actor;
    Snapshot *snapshot;
    ActorList *list;

    list = &D_80145040;
    snapshot = &D_8010FC40;
    for (i = 0; i < list->count; i++) {
        actor = &list->actors[i];
        snapshot->blocks[i] = actor->block;
        snapshot->positions[i] = actor->position;
        snapshot->values[i] = actor->field6C;
        snapshot->handles[i] = func_8028B32C(&D_8011FE88, actor->id);
        list = &D_80145040;
    }
}
