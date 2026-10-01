#ifndef SHARED_SHARED_FUNC_802ACBCC_S4_H
#define SHARED_SHARED_FUNC_802ACBCC_S4_H

#include "basetypes.h"

typedef struct Shared_func_802ACBCC_S4 Shared_func_802ACBCC_S4;
struct Shared_func_802ACBCC_S4 {
    char pad0[0x8F];
    u8 unk8F; /* +0x8F: src/func_802ACBCC.c */
};
typedef char Shared_func_802ACBCC_S4_size_check[(sizeof(Shared_func_802ACBCC_S4) == 0x90) ? 1 : -1];

#endif
