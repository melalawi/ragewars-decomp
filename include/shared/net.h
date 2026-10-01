#ifndef SHARED_SHARED_NET_H
#define SHARED_SHARED_NET_H

#include "basetypes.h"

typedef struct Shared_Net Shared_Net;
struct Shared_Net {
    char pad0[0x54];
    s32 linked; /* +0x54: src/func_80220EB0.c */
    char pad58[0x10];
    s32 host; /* +0x68: src/func_80220EB0.c */
};
typedef char Shared_Net_size_check[(sizeof(Shared_Net) == 0x6C) ? 1 : -1];

#endif
