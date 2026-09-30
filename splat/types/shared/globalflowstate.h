#ifndef SHARED_SHARED_GLOBALFLOWSTATE_H
#define SHARED_SHARED_GLOBALFLOWSTATE_H

#include "basetypes.h"

typedef struct Shared_GlobalFlowState Shared_GlobalFlowState;
struct Shared_GlobalFlowState {
    char pad0[0x78];
    s32 transition; /* +0x78: src/func_8021B468.c */
    char pad7C[0x4];
    s32 reset; /* +0x80: src/func_8021B468.c */
    char pad84[0x14];
    s32 active; /* +0x98: src/func_8021B468.c */
    s32 count; /* +0x9C: src/func_8021B468.c */
};
typedef char Shared_GlobalFlowState_size_check[(sizeof(Shared_GlobalFlowState) == 0xA0) ? 1 : -1];

#endif
