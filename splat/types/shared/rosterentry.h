#ifndef SHARED_SHARED_ROSTERENTRY_H
#define SHARED_SHARED_ROSTERENTRY_H

#include "basetypes.h"

typedef struct Shared_RosterEntry Shared_RosterEntry;
struct Shared_RosterEntry {
    char pad0[0x78];
    u8 active; /* +0x78: src/func_8042BD40.c */
    char pad79[0x18];
    u8 computer; /* +0x91: src/func_8042BD40.c */
    char pad92[0x4];
};
typedef char Shared_RosterEntry_size_check[(sizeof(Shared_RosterEntry) == 0x96) ? 1 : -1];

#endif
