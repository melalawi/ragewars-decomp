#ifndef SHARED_SHARED_TARGET_H
#define SHARED_SHARED_TARGET_H

#include "basetypes.h"

typedef struct Shared_Target Shared_Target;
struct Shared_Target {
    char pad0[0xC];
    u16 unkC; /* +0xC: src/func_8020AA40.c */
    u16 unkE; /* +0xE: src/func_8020AA40.c */
};
typedef char Shared_Target_size_check[(sizeof(Shared_Target) == 0x10) ? 1 : -1];

#endif
