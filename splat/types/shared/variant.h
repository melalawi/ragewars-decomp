#ifndef SHARED_SHARED_VARIANT_H
#define SHARED_SHARED_VARIANT_H

#include "basetypes.h"

typedef struct Shared_Variant Shared_Variant;
struct Shared_Variant {
    u8 pad[14]; /* +0x0: src/func_8021A2D4.c */
    u8 color; /* +0xE: src/func_8021A2D4.c */
};
typedef char Shared_Variant_size_check[(sizeof(Shared_Variant) == 0xF) ? 1 : -1];

#endif
