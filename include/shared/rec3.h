#ifndef SHARED_SHARED_REC3_H
#define SHARED_SHARED_REC3_H

#include "basetypes.h"

typedef struct Shared_Rec3 Shared_Rec3;
struct Shared_Rec3 {
    char pad0[0x91];
    u8 flag; /* +0x91: src/func_8042D2F8.c */
    char pad92[0x4];
};
typedef char Shared_Rec3_size_check[(sizeof(Shared_Rec3) == 0x96) ? 1 : -1];

#endif
