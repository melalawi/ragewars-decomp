#ifndef SHARED_SHARED_FUNC80243A80STATE_H
#define SHARED_SHARED_FUNC80243A80STATE_H

#include "basetypes.h"

typedef struct Shared_Func80243A80State Shared_Func80243A80State;
struct Shared_Func80243A80State {
    u32 flags; /* +0x0: src/func_80243A80.c */
    s32 w1; /* +0x4: src/func_80243A80.c */
    s32 w2; /* +0x8: src/func_80243A80.c */
    s32 w3; /* +0xC: src/func_80243A80.c */
    s32 w4; /* +0x10: src/func_80243A80.c */
    s32 w5; /* +0x14: src/func_80243A80.c */
    s32 w6; /* +0x18: src/func_80243A80.c */
};
typedef char Shared_Func80243A80State_size_check[(sizeof(Shared_Func80243A80State) == 0x1C) ? 1 : -1];

#endif
