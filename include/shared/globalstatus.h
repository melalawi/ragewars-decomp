#ifndef SHARED_SHARED_GLOBALSTATUS_H
#define SHARED_SHARED_GLOBALSTATUS_H

#include "basetypes.h"

typedef struct Shared_GlobalStatus Shared_GlobalStatus;
struct Shared_GlobalStatus {
    u8 pad[84]; /* +0x0: src/func_8021A2D4.c */
    s32 active; /* +0x54: src/func_8021A2D4.c */
    u8 pad2[27]; /* +0x58: src/func_8021A2D4.c */
    u8 color; /* +0x73: src/func_8021A2D4.c */
};
typedef char Shared_GlobalStatus_size_check[(sizeof(Shared_GlobalStatus) == 0x74) ? 1 : -1];

#endif
