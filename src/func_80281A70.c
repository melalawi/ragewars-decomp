#include "basetypes.h"
#include "../include/shared/player.h"
typedef SharedPlayer Player;

/* Sets an actor's field 0x14C to 1 when something is near it: a world object from D_8011FE88 whose field 0x174 is positive within 256 units, a player from the D_80145060 list other than the actor's owner whose field 0x5E4 is positive within 256 units, or another actor of type 0xC or 0x22 from the given list within 512 units (all compared as squared distances). */

typedef struct Object {
    char pad0[8];
    Vec3 position;
    char pad14[0x160];
    s32 count;
} Object;


typedef struct Actor {
    char pad0[4];
    u16 type;
    char pad6[2];
    Vec3 position;
    char pad14[0x118];
    Player *owner;
    char pad130[0x1C];
    s16 crowded;
} Actor;

typedef struct World {
    char pad0[0xE54];
    Object *objects[64];
    s32 objectCount;
} World;

extern World D_8011FE88;
extern Player *D_80145060;
extern void func_80271FD8(Vec3 *out, Vec3 *a, Vec3 *b);

void func_80281A70(s32 unused, Actor *actor, Actor **others, s32 count) {
    Vec3 delta;
    World *world;
    Player *player;
    s32 i;
    s32 objectCount;

    world = &D_8011FE88;
    objectCount = world->objectCount;
    for (i = 0; i < objectCount; i++) {
        if (world->objects[i]->count > 0) {
            func_80271FD8(&delta, &world->objects[i]->position, &actor->position);
            if (delta.x * delta.x + delta.y * delta.y + delta.z * delta.z <= 65536.0f) {
                actor->crowded = 1;
                return;
            }
        }
    }
    for (player = D_80145060; player != 0; player = player->views16E0.view16E0_1.next) {
        if (actor->owner != player && player->views5E4.view5E4_2.health > 0) {
            func_80271FD8(&delta, &player->views0.view8_4.position, &actor->position);
            if (delta.x * delta.x + delta.y * delta.y + delta.z * delta.z <= 65536.0f) {
                actor->crowded = 1;
                return;
            }
        }
    }
    for (i = 0; i < count; i++) {
        if (others[i] != actor && (others[i]->type == 0xC || others[i]->type == 0x22)) {
            func_80271FD8(&delta, &others[i]->position, &actor->position);
            if (delta.x * delta.x + delta.y * delta.y + delta.z * delta.z <= 262144.0f) {
                actor->crowded = 1;
                return;
            }
        }
    }
}
