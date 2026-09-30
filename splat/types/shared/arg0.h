#ifndef SHARED_SHARED_ARG0_H
#define SHARED_SHARED_ARG0_H

#include "basetypes.h"

typedef struct Shared_Arg0 Shared_Arg0;
struct Shared_Arg0 {
    s32 * unk0; /* +0x0: src/func_8020AA40.c */
    char pad4[0x20];
    struct Shared_Node * unk24; /* +0x24: src/func_8020AA40.c */
};
typedef char Shared_Arg0_size_check[(sizeof(Shared_Arg0) == 0x28) ? 1 : -1];

#endif
