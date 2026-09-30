#ifndef SHARED_SHARED_FUNC_80227014_S16_H
#define SHARED_SHARED_FUNC_80227014_S16_H

#include "basetypes.h"

typedef struct Shared_func_80227014_S16 Shared_func_80227014_S16;
struct Shared_func_80227014_S16 {
    char pad0[0x80];
    s8 unk80; /* +0x80: src/func_80227014.c */
    char pad81[0xE];
    u8 unk8F; /* +0x8F: src/func_80227014.c */
    char pad90[0x4];
    u8 unk94; /* +0x94: src/func_80227014.c */
};
typedef char Shared_func_80227014_S16_size_check[(sizeof(Shared_func_80227014_S16) == 0x95) ? 1 : -1];

#endif
