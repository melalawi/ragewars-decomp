#ifndef SHARED_SHARED_PLAYERMENUDATA_H
#define SHARED_SHARED_PLAYERMENUDATA_H

#include "basetypes.h"

typedef struct Shared_PlayerMenuData Shared_PlayerMenuData;
struct Shared_PlayerMenuData {
    u8 pad0[16]; /* +0x0: src/func_802ACBCC.c */
    s32 amount; /* +0x10: src/func_802ACBCC.c */
    s8 bonus14; /* +0x14: src/func_802ACBCC.c */
    s8 bonus15; /* +0x15: src/func_802ACBCC.c */
    s8 bonus16; /* +0x16: src/func_802ACBCC.c */
    s8 bonus17; /* +0x17: src/func_802ACBCC.c */
    u8 pad18[376]; /* +0x18: src/func_802ACBCC.c */
};
typedef char Shared_PlayerMenuData_size_check[(sizeof(Shared_PlayerMenuData) == 0x190) ? 1 : -1];

#endif
