#ifndef SHARED_SHARED_ENTRY190_H
#define SHARED_SHARED_ENTRY190_H

#include "basetypes.h"

typedef struct Shared_Entry190 Shared_Entry190;
struct Shared_Entry190 {
    s32 value; /* +0x0: src/func_80227014.c */
    u8 pad[396]; /* +0x4: src/func_80227014.c */
};
typedef char Shared_Entry190_size_check[(sizeof(Shared_Entry190) == 0x190) ? 1 : -1];

#endif
