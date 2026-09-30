#ifndef SHARED_SHARED_PROFILEFLAG_H
#define SHARED_SHARED_PROFILEFLAG_H

#include "basetypes.h"

typedef struct Shared_ProfileFlag Shared_ProfileFlag;
struct Shared_ProfileFlag {
    s8 value; /* +0x0: src/func_8042BD40.c */
    char pad1[0x18F];
};
typedef char Shared_ProfileFlag_size_check[(sizeof(Shared_ProfileFlag) == 0x190) ? 1 : -1];

#endif
