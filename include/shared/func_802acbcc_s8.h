#ifndef SHARED_SHARED_FUNC_802ACBCC_S8_H
#define SHARED_SHARED_FUNC_802ACBCC_S8_H

#include "basetypes.h"

typedef struct Shared_func_802ACBCC_S8 Shared_func_802ACBCC_S8;
struct Shared_func_802ACBCC_S8 {
    char pad0[0x5D8];
    struct Shared_func_802ACBCC_S9 * unk5D8; /* +0x5D8: src/func_802ACBCC.c */
    void * unk5DC; /* +0x5DC: src/func_802ACBCC.c */
    char pad5E0[0xBFC];
    f32 unk11DC; /* +0x11DC: src/func_802ACBCC.c */
    char pad11E0[0x4C];
    s32 unk122C; /* +0x122C: src/func_802ACBCC.c */
    char pad1230[0x4B0];
    struct Shared_func_802ACBCC_S8 * unk16E0; /* +0x16E0: src/func_802ACBCC.c */
    char pad16E4[0x4];
};
typedef char Shared_func_802ACBCC_S8_size_check[(sizeof(Shared_func_802ACBCC_S8) == 0x16E8) ? 1 : -1];

#endif
