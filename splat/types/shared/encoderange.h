#ifndef SHARED_SHARED_ENCODERANGE_H
#define SHARED_SHARED_ENCODERANGE_H

#include "basetypes.h"

typedef struct Shared_EncodeRange Shared_EncodeRange;
struct Shared_EncodeRange {
    u32 width; /* +0x0: src/func_80260A7C.c */
    f32 base; /* +0x4: src/func_80260A7C.c */
    f32 scale; /* +0x8: src/func_80260A7C.c */
};
typedef char Shared_EncodeRange_size_check[(sizeof(Shared_EncodeRange) == 0xC) ? 1 : -1];

#endif
