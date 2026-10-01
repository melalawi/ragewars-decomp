#ifndef SHARED_SHARED_FUNC_802ACBCC_S2_H
#define SHARED_SHARED_FUNC_802ACBCC_S2_H

#include "basetypes.h"

typedef struct Shared_func_802ACBCC_S2 Shared_func_802ACBCC_S2;
struct Shared_func_802ACBCC_S2 {
    u8 ** unk0; /* +0x0: src/func_802ACBCC.c */
    s16 unk4; /* +0x4: src/func_802ACBCC.c */
    s16 unk6; /* +0x6: src/func_802ACBCC.c */
    s16 unk8; /* +0x8: src/func_802ACBCC.c */
    char padA[0x2];
};
typedef char Shared_func_802ACBCC_S2_size_check[(sizeof(Shared_func_802ACBCC_S2) == 0xC) ? 1 : -1];

#endif
