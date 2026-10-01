#ifndef SHARED_SHARED_FUNC80243A80GLOBAL_H
#define SHARED_SHARED_FUNC80243A80GLOBAL_H

#include "basetypes.h"

typedef struct Shared_Func80243A80Global Shared_Func80243A80Global;
struct Shared_Func80243A80Global {
    u8 pad[216]; /* +0x0: src/func_80243A80.c */
    s32 x; /* +0xD8: src/func_80243A80.c */
    f32 y; /* +0xDC: src/func_80243A80.c */
    s32 z; /* +0xE0: src/func_80243A80.c */
};
typedef char Shared_Func80243A80Global_size_check[(sizeof(Shared_Func80243A80Global) == 0xE4) ? 1 : -1];

#endif
