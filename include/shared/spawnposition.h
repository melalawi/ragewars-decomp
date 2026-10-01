#ifndef SHARED_SHARED_SPAWNPOSITION_H
#define SHARED_SHARED_SPAWNPOSITION_H

#include "basetypes.h"

typedef struct Shared_SpawnPosition Shared_SpawnPosition;
struct Shared_SpawnPosition {
    s32 x; /* +0x0: src/func_8021B468.c */
    f32 y; /* +0x4: src/func_8021B468.c */
    s32 z; /* +0x8: src/func_8021B468.c */
};
typedef char Shared_SpawnPosition_size_check[(sizeof(Shared_SpawnPosition) == 0xC) ? 1 : -1];

#endif
