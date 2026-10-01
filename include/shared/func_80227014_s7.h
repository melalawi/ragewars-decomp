#ifndef SHARED_SHARED_FUNC_80227014_S7_H
#define SHARED_SHARED_FUNC_80227014_S7_H

#include "basetypes.h"

typedef struct Shared_func_80227014_S7 Shared_func_80227014_S7;
struct Shared_func_80227014_S7 {
    char pad0[0x18];
    s32 unk18; /* +0x18: src/func_80227014.c */
};
typedef char Shared_func_80227014_S7_size_check[(sizeof(Shared_func_80227014_S7) == 0x1C) ? 1 : -1];

#endif
