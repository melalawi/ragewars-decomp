#ifndef SHARED_SHARED_BODY_H
#define SHARED_SHARED_BODY_H

#include "basetypes.h"

typedef struct Shared_Body Shared_Body;
struct Shared_Body {
    char pad0[0xC];
    s16 kind; /* +0xC: src/func_80220EB0.c */
    char padE[0xE6];
    f32 ceiling; /* +0xF4: src/func_80220EB0.c */
};
typedef char Shared_Body_size_check[(sizeof(Shared_Body) == 0xF8) ? 1 : -1];

#endif
