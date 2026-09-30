#ifndef SHARED_SHARED_FUNC_802ACBCC_S7_H
#define SHARED_SHARED_FUNC_802ACBCC_S7_H

#include "basetypes.h"

typedef struct Shared_func_802ACBCC_S7 Shared_func_802ACBCC_S7;
struct Shared_func_802ACBCC_S7 {
    char pad0[0x5DC];
    void * unk5DC; /* +0x5DC: src/func_802ACBCC.c */
    char pad5E0[0x1100];
    void * unk16E0; /* +0x16E0: src/func_802ACBCC.c */
};
typedef char Shared_func_802ACBCC_S7_size_check[(sizeof(Shared_func_802ACBCC_S7) == 0x16E4) ? 1 : -1];

#endif
