#ifndef SHARED_SHARED_FUNC_80227014_S9_H
#define SHARED_SHARED_FUNC_80227014_S9_H

#include "basetypes.h"

typedef struct Shared_func_80227014_S9 Shared_func_80227014_S9;
struct Shared_func_80227014_S9 {
    char pad0[0x29C];
    f32 unk29C; /* +0x29C: src/func_80227014.c */
    f32 unk2A0; /* +0x2A0: src/func_80227014.c */
    f32 unk2A4; /* +0x2A4: src/func_80227014.c */
    f32 unk2A8; /* +0x2A8: src/func_80227014.c */
    char pad2AC[0x2B8];
    s32 unk564; /* +0x564: src/func_80227014.c */
};
typedef char Shared_func_80227014_S9_size_check[(sizeof(Shared_func_80227014_S9) == 0x568) ? 1 : -1];

#endif
