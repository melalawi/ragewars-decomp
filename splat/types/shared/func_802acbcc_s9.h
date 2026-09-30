#ifndef SHARED_SHARED_FUNC_802ACBCC_S9_H
#define SHARED_SHARED_FUNC_802ACBCC_S9_H

#include "basetypes.h"

typedef struct Shared_func_802ACBCC_S9 Shared_func_802ACBCC_S9;
struct Shared_func_802ACBCC_S9 {
    char pad0[0x92];
    u8 unk92; /* +0x92: src/func_802ACBCC.c */
};
typedef char Shared_func_802ACBCC_S9_size_check[(sizeof(Shared_func_802ACBCC_S9) == 0x93) ? 1 : -1];

#endif
