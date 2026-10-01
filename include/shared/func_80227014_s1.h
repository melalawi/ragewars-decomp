#ifndef SHARED_SHARED_FUNC_80227014_S1_H
#define SHARED_SHARED_FUNC_80227014_S1_H

#include "basetypes.h"

typedef struct Shared_func_80227014_S1 Shared_func_80227014_S1;
struct Shared_func_80227014_S1 {
    char pad0[0x1C];
    s32 unk1C; /* +0x1C: src/func_80227014.c */
    char pad20[0x34];
    s32 unk54; /* +0x54: src/func_80227014.c */
    char pad58[0x4];
    s32 unk5C; /* +0x5C: src/func_80227014.c */
    s32 unk60; /* +0x60: src/func_80227014.c */
    s32 unk64; /* +0x64: src/func_80227014.c */
    s32 unk68; /* +0x68: src/func_80227014.c */
    s32 unk6C; /* +0x6C: src/func_80227014.c */
    char pad70[0x4];
    s32 unk74; /* +0x74: src/func_80227014.c */
};
typedef char Shared_func_80227014_S1_size_check[(sizeof(Shared_func_80227014_S1) == 0x78) ? 1 : -1];

#endif
