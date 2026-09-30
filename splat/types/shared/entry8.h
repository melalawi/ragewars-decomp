#ifndef SHARED_SHARED_ENTRY8_H
#define SHARED_SHARED_ENTRY8_H

#include "basetypes.h"

typedef struct Shared_Entry8 Shared_Entry8;
struct Shared_Entry8 {
    s32 a; /* +0x0: src/func_8042D2F8.c */
    s32 b; /* +0x4: src/func_8042D2F8.c */
};
typedef char Shared_Entry8_size_check[(sizeof(Shared_Entry8) == 0x8) ? 1 : -1];

#endif
