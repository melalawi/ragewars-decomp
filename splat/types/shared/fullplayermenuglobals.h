#ifndef SHARED_SHARED_FULLPLAYERMENUGLOBALS_H
#define SHARED_SHARED_FULLPLAYERMENUGLOBALS_H

#include "basetypes.h"
#include "fullplayermenuglobals_types.h"

typedef struct Shared_FullPlayerMenuGlobals Shared_FullPlayerMenuGlobals;
struct Shared_FullPlayerMenuGlobals {
    struct Shared_func_802ACBCC_S8 * entries; /* +0x0: src/func_802ACBCC.c */
    Shared_PlayerMenuGlobals tail; /* +0x4: src/func_802ACBCC.c */
};
typedef char Shared_FullPlayerMenuGlobals_size_check[(sizeof(Shared_FullPlayerMenuGlobals) == 0x18E4) ? 1 : -1];

#endif
