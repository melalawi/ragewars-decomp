#ifndef SHARED_SHARED_FUNC_802ACBCC_S5_H
#define SHARED_SHARED_FUNC_802ACBCC_S5_H

#include "basetypes.h"

typedef struct Shared_func_802ACBCC_S5 Shared_func_802ACBCC_S5;
struct Shared_func_802ACBCC_S5 {
    char pad0[0x24];
    s32 unk24; /* +0x24: src/func_802ACBCC.c */
    char pad28[0x2C];
    s32 unk54; /* +0x54: src/func_802ACBCC.c */
    char pad58[0x1C];
    s32 unk74; /* +0x74: src/func_802ACBCC.c */
    char pad78[0x8];
    s32 unk80; /* +0x80: src/func_802ACBCC.c */
    s32 unk84; /* +0x84: src/func_802ACBCC.c */
};
typedef char Shared_func_802ACBCC_S5_size_check[(sizeof(Shared_func_802ACBCC_S5) == 0x88) ? 1 : -1];

#endif
