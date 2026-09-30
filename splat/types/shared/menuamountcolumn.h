#ifndef SHARED_SHARED_MENUAMOUNTCOLUMN_H
#define SHARED_SHARED_MENUAMOUNTCOLUMN_H

#include "basetypes.h"

typedef struct Shared_MenuAmountColumn Shared_MenuAmountColumn;
struct Shared_MenuAmountColumn {
    s32 value; /* +0x0: src/func_802ACBCC.c */
    u8 rest[396]; /* +0x4: src/func_802ACBCC.c */
};
typedef char Shared_MenuAmountColumn_size_check[(sizeof(Shared_MenuAmountColumn) == 0x190) ? 1 : -1];

#endif
