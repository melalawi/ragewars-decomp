#ifndef SHARED_SHARED_FUNC_804069F4_S1_H
#define SHARED_SHARED_FUNC_804069F4_S1_H

#include "basetypes.h"

typedef struct Shared_func_804069F4_S1 Shared_func_804069F4_S1;
struct Shared_func_804069F4_S1 {
    char pad0[0x1C];
    s32 first; /* +0x1C: src/func_804069F4.c */
    struct Shared_func_804069F4_S2 * second; /* +0x20: src/func_804069F4.c */
};
typedef char Shared_func_804069F4_S1_size_check[(sizeof(Shared_func_804069F4_S1) == 0x24) ? 1 : -1];

#endif
