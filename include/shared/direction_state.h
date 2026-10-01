#ifndef RAGEWARS_SHARED_DIRECTION_STATE_H
#define RAGEWARS_SHARED_DIRECTION_STATE_H

#include "player_types.h"

typedef struct SharedDirectionState {
    char padding[0x14];
    Vec3f direction;
    s32 ready;
} SharedDirectionState;

#endif
