#ifndef SHARED_SHARED_BIGOBJ_H
#define SHARED_SHARED_BIGOBJ_H

#include "basetypes.h"
#include "bigobj_types.h"

typedef struct Shared_BigObj Shared_BigObj;
struct Shared_BigObj {
    char pad0[0xF0];
    s32 slot[8]; /* +0xF0: src/func_8042D2F8.c */
    Shared_Entry8 arr2[8]; /* +0x110: src/func_8042D2F8.c */
};
typedef char Shared_BigObj_size_check[(sizeof(Shared_BigObj) == 0x150) ? 1 : -1];

#endif
