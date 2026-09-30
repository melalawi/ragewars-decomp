#ifndef SHARED_SHARED_GLOBALRUNTIMESTATE_H
#define SHARED_SHARED_GLOBALRUNTIMESTATE_H

#include "basetypes.h"
#include "globalruntimestate_types.h"

typedef struct Shared_GlobalRuntimeState Shared_GlobalRuntimeState;
struct Shared_GlobalRuntimeState {
    void * actorList; /* +0x0: src/func_8021B468.c */
    char pad4[0x183C];
    Shared_GlobalFlowState flow; /* +0x1840: src/func_8021B468.c */
};
typedef char Shared_GlobalRuntimeState_size_check[(sizeof(Shared_GlobalRuntimeState) == 0x18E0) ? 1 : -1];

#endif
