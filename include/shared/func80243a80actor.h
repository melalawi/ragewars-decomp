#ifndef SHARED_SHARED_FUNC80243A80ACTOR_H
#define SHARED_SHARED_FUNC80243A80ACTOR_H

#include "basetypes.h"

typedef struct Shared_Func80243A80Actor Shared_Func80243A80Actor;
struct Shared_Func80243A80Actor {
    u8 type; /* +0x0: src/func_80243A80.c */
    u8 pad1[7]; /* +0x1: src/func_80243A80.c */
    f32 x; /* +0x8: src/func_80243A80.c */
    f32 y; /* +0xC: src/func_80243A80.c */
    f32 z; /* +0x10: src/func_80243A80.c */
    u16 * collision; /* +0x14: src/func_80243A80.c */
    u8 pad18[4]; /* +0x18: src/func_80243A80.c */
    s32 room; /* +0x1C: src/func_80243A80.c */
    f32 velY; /* +0x20: src/func_80243A80.c */
    s32 room2; /* +0x24: src/func_80243A80.c */
    u8 pad28[12]; /* +0x28: src/func_80243A80.c */
    void * attached; /* +0x34: src/func_80243A80.c */
    u32 flags; /* +0x38: src/func_80243A80.c */
    u8 pad3C[4]; /* +0x3C: src/func_80243A80.c */
    f32 groundY; /* +0x40: src/func_80243A80.c */
    f32 contactX; /* +0x44: src/func_80243A80.c */
    f32 contactBits; /* +0x48: src/func_80243A80.c */
    f32 contactZ; /* +0x4C: src/func_80243A80.c */
    u8 pad50[28]; /* +0x50: src/func_80243A80.c */
    f32 angle; /* +0x6C: src/func_80243A80.c */
    u8 pad70[144]; /* +0x70: src/func_80243A80.c */
    u32 status; /* +0x100: src/func_80243A80.c */
};
typedef char Shared_Func80243A80Actor_size_check[(sizeof(Shared_Func80243A80Actor) == 0x104) ? 1 : -1];

#endif
