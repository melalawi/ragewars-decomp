#ifndef SHARED_SHARED_ACTORFLOATPOSITIONVIEW_H
#define SHARED_SHARED_ACTORFLOATPOSITIONVIEW_H

#include "basetypes.h"
#include "actorfloatpositionview_types.h"

typedef struct Shared_ActorFloatPositionView Shared_ActorFloatPositionView;
struct Shared_ActorFloatPositionView {
    char pad0[0x8];
    Shared_FloatPosition position; /* +0x8: src/func_8021B468.c */
};
typedef char Shared_ActorFloatPositionView_size_check[(sizeof(Shared_ActorFloatPositionView) == 0x14) ? 1 : -1];

#endif
