#ifndef RAGEWARS_SHARED_WEAPON_FIRE_H
#define RAGEWARS_SHARED_WEAPON_FIRE_H
#include "shared/player.h"
#include "shared/actor.h"
typedef struct WeaponActionRecord { s16 action; char pad2[0x16]; } WeaponActionRecord;
typedef struct WeaponDefinition { char pad0[0x14]; s32 flags; } WeaponDefinition;
typedef struct WeaponFireState {
    char pad0[0x34];
    s8 variant;
    char pad35[0x124 - 0x35];
    union { f32 spinStep; s32 reset; };
    f32 spin;
    char pad12C[0x13C - 0x12C];
    s32 mode;
    char pad140[4];
    s32 rounds;
    char pad148[4];
    s32 triggered;
    s32 alternate;
} WeaponFireState;
typedef struct WeaponAnimationState { char pad0[0x168]; f32 speed; } WeaponAnimationState;
#endif
