#ifndef SHARED_SHARED_INPUT_H
#define SHARED_SHARED_INPUT_H

#include "basetypes.h"

typedef struct Shared_Input Shared_Input;
struct Shared_Input {
    char pad0[0x10];
    struct Shared_Shadow * shadow; /* +0x10: src/func_80220EB0.c */
    char pad14[0x10];
    s32 held; /* +0x24: src/func_80220EB0.c */
    s32 pressed; /* +0x28: src/func_80220EB0.c */
    s32 unk2C; /* +0x2C: src/func_80220EB0.c */
    s32 unk30; /* +0x30: src/func_80220EB0.c */
    s32 unk34; /* +0x34: src/func_80220EB0.c */
};
typedef char Shared_Input_size_check[(sizeof(Shared_Input) == 0x38) ? 1 : -1];

#endif
