#ifndef SHARED_SHARED_PLAYERMENUGLOBALS_H
#define SHARED_SHARED_PLAYERMENUGLOBALS_H

#include "basetypes.h"
#include "playermenuglobals_types.h"

typedef struct Shared_PlayerMenuGlobals Shared_PlayerMenuGlobals;
struct Shared_PlayerMenuGlobals {
    s32 count; /* +0x0: src/func_802ACBCC.c */
    u8 padToPlayers[20]; /* +0x4: src/func_802ACBCC.c */
    Shared_PlayerListMenuGlobals list; /* +0x18: src/func_802ACBCC.c */
};
typedef char Shared_PlayerMenuGlobals_size_check[(sizeof(Shared_PlayerMenuGlobals) == 0x18E0) ? 1 : -1];

#endif
