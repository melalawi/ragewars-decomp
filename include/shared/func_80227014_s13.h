#ifndef SHARED_SHARED_FUNC_80227014_S13_H
#define SHARED_SHARED_FUNC_80227014_S13_H

#include "basetypes.h"

typedef struct Shared_func_80227014_S13 Shared_func_80227014_S13;
struct Shared_func_80227014_S13 {
    char pad0[0x8];
    s32 unk8; /* +0x8: src/func_80227014.c */
    s32 unkC; /* +0xC: src/func_80227014.c */
    s32 unk10; /* +0x10: src/func_80227014.c */
    char pad14[0x4];
    struct Shared_func_80227014_S17 * unk18; /* +0x18: src/func_80227014.c */
    char pad1C[0x158];
    s32 unk174; /* +0x174: src/func_80227014.c */
    char pad178[0x170];
    s8 unk2E8; /* +0x2E8: src/func_80227014.c */
    char pad2E9[0x16F];
    s8 unk458; /* +0x458: src/func_80227014.c */
    char pad459[0x17B];
    s32 unk5D4; /* +0x5D4: src/func_80227014.c */
    struct Shared_func_80227014_S15 * unk5D8; /* +0x5D8: src/func_80227014.c */
    void * unk5DC; /* +0x5DC: src/func_80227014.c */
    char pad5E0[0x4];
    s32 unk5E4; /* +0x5E4: src/func_80227014.c */
    char pad5E8[0x4];
    s32 unk5EC; /* +0x5EC: src/func_80227014.c */
    char pad5F0[0x348];
    char unk938[2172]; /* +0x938: src/func_80227014.c */
    s32 unk11B4; /* +0x11B4: src/func_80227014.c */
    char pad11B8[0x298];
    s32 unk1450; /* +0x1450: src/func_80227014.c */
};
typedef char Shared_func_80227014_S13_size_check[(sizeof(Shared_func_80227014_S13) == 0x1454) ? 1 : -1];

#endif
