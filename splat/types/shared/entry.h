#ifndef SHARED_SHARED_ENTRY_H
#define SHARED_SHARED_ENTRY_H

#include "basetypes.h"

typedef struct Shared_Entry Shared_Entry;
struct Shared_Entry {
    s32 value; /* +0x0: src/func_8043CEB0.c */
    s32 timer; /* +0x4: src/func_8043CEB0.c */
    s32 count; /* +0x8: src/func_8043CEB0.c */
    u8 text[24]; /* +0xC: src/func_8043CEB0.c */
};
typedef char Shared_Entry_size_check[(sizeof(Shared_Entry) == 0x24) ? 1 : -1];

#endif
