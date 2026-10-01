#ifndef RAGEWARS_SHARED_SPAWN_DISPATCH_H
#define RAGEWARS_SHARED_SPAWN_DISPATCH_H
#include "shared/player_types.h"
#include "shared/motionoutput.h"

typedef struct SpawnDefinition {
    s32 flags;
    s32 kind;
    char pad8[0xC];
    s16 id;
    s16 selector;
    Vec3 velocity;
    s16 count;
} SpawnDefinition;

typedef struct SpawnDispatchObject {
    char pad0[8];
    Vec3 position;
    void *world;
    char *definition;
    Vec3 rotation;
    char pad28[0x34];
    Shared_MotionOutput motion;
    f32 scale;
} SpawnDispatchObject;

typedef struct SpawnDispatchOwner {
    char pad0[0x124];
    s32 spawn;
    s32 remaining;
} SpawnDispatchOwner;

typedef struct SpawnDispatchActor {
    char pad0[8];
    Vec3 position;
    char pad14[4];
    s32 *definition;
    char pad1C[0x184];
    s32 state;
    char pad1A4[0x148];
    struct SpawnDispatchActor *next;
} SpawnDispatchActor;

typedef struct SpawnChoice {
    s16 id;
    s16 weight;
} SpawnChoice;
typedef struct SpawnDispatchConfig {
    u8 pad0[0x1D];
    u8 enabled;
} SpawnDispatchConfig;
#endif
