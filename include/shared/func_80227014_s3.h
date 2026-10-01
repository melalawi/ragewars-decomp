#ifndef SHARED_SHARED_FUNC_80227014_S3_H
#define SHARED_SHARED_FUNC_80227014_S3_H

#include "basetypes.h"

typedef struct Shared_func_80227014_S3 Shared_func_80227014_S3;
struct Shared_func_80227014_S3 {
    char pad0[0x80];
    s8 unk80; /* +0x80: src/func_80227014.c */
    char pad81[0xF];
    u8 unk90; /* +0x90: src/func_80227014.c */
    char pad91[0x3];
    u8 unk94; /* +0x94: src/func_80227014.c */
};
typedef char Shared_func_80227014_S3_size_check[(sizeof(Shared_func_80227014_S3) == 0x95) ? 1 : -1];

#endif
