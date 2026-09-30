#ifndef SHARED_SHARED_ACTORPOSITIONVIEW_H
#define SHARED_SHARED_ACTORPOSITIONVIEW_H

#include "basetypes.h"
#include "actorpositionview_types.h"

typedef struct Shared_ActorPositionView Shared_ActorPositionView;
struct Shared_ActorPositionView {
    char pad0[0x8];
    Shared_SpawnPosition position; /* +0x8: src/func_8021B468.c */
};
typedef char Shared_ActorPositionView_size_check[(sizeof(Shared_ActorPositionView) == 0x14) ? 1 : -1];

#endif
