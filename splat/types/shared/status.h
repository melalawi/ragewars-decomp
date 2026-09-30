#ifndef SHARED_SHARED_STATUS_H
#define SHARED_SHARED_STATUS_H

#include "basetypes.h"

typedef struct Shared_Status Shared_Status;
struct Shared_Status {
    u8 pad[143]; /* +0x0: src/func_8021A2D4.c */
    u8 enabled; /* +0x8F: src/func_8021A2D4.c */
};
typedef char Shared_Status_size_check[(sizeof(Shared_Status) == 0x90) ? 1 : -1];

#endif
