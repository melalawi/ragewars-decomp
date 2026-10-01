#ifndef SHARED_SHARED_FUNC_802ACBCC_S6_H
#define SHARED_SHARED_FUNC_802ACBCC_S6_H

#include "basetypes.h"

typedef struct Shared_func_802ACBCC_S6 Shared_func_802ACBCC_S6;
struct Shared_func_802ACBCC_S6 {
    char pad0[0x8F];
    u8 unk8F; /* +0x8F: src/func_802ACBCC.c */
    u8 unk90; /* +0x90: src/func_802ACBCC.c */
    char pad91[0x1];
    u8 unk92; /* +0x92: src/func_802ACBCC.c */
};
typedef char Shared_func_802ACBCC_S6_size_check[(sizeof(Shared_func_802ACBCC_S6) == 0x93) ? 1 : -1];

#endif
