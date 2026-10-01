#ifndef SHARED_SHARED_MENUBONUSCOLUMN_H
#define SHARED_SHARED_MENUBONUSCOLUMN_H

#include "basetypes.h"

typedef struct Shared_MenuBonusColumn Shared_MenuBonusColumn;
struct Shared_MenuBonusColumn {
    u8 value; /* +0x0: src/func_802ACBCC.c */
    u8 rest[399]; /* +0x1: src/func_802ACBCC.c */
};
typedef char Shared_MenuBonusColumn_size_check[(sizeof(Shared_MenuBonusColumn) == 0x190) ? 1 : -1];

#endif
