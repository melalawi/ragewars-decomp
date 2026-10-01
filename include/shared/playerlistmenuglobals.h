#ifndef SHARED_SHARED_PLAYERLISTMENUGLOBALS_H
#define SHARED_SHARED_PLAYERLISTMENUGLOBALS_H

#include "basetypes.h"
#include "playerlistmenuglobals_types.h"

typedef struct Shared_PlayerListMenuGlobals Shared_PlayerListMenuGlobals;
struct Shared_PlayerListMenuGlobals {
    void * players; /* +0x0: src/func_802ACBCC.c */
    u8 padToMenu[6204]; /* +0x4: src/func_802ACBCC.c */
    Shared_func_802ACBCC_S5 menu; /* +0x1840: src/func_802ACBCC.c */
};
typedef char Shared_PlayerListMenuGlobals_size_check[(sizeof(Shared_PlayerListMenuGlobals) == 0x18C8) ? 1 : -1];

#endif
