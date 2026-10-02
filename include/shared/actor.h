#ifndef SHARED_SHARED_ACTOR_H
#define SHARED_SHARED_ACTOR_H

#include "basetypes.h"
#include "actor_types.h"

typedef struct Shared_Actor Shared_Actor;
struct Shared_Actor {
    u8 pad0; /* +0x0: src/func_8021A2D4.c */
    u8 color; /* +0x1: src/func_8021A2D4.c */
    u8 pad1; /* +0x2: src/func_8021A2D4.c */
    s8 subtype; /* +0x3: src/func_8021A2D4.c */
    u8 pad2[20]; /* +0x4: src/func_8021A2D4.c */
    struct Shared_Variant * variant; /* +0x18: src/func_8021A2D4.c */
    u8 pad3[152]; /* +0x1C: src/func_8021A2D4.c */
    s32 action; /* +0xB4: src/func_8021A2D4.c */
    u8 pad4[0x100 - 0xB8];
    s32 weaponFlags; /* +0x100: weapon actor dispatch */
    u8 pad104[0x140 - 0x104]; /* +0xB8: src/func_8021A2D4.c */
    Shared_EffectEntry effects[6]; /* +0x140: src/func_8021A2D4.c */
    u8 pad5[8]; /* +0x1D0: src/func_8021A2D4.c */
    struct Shared_Entity * entity; /* +0x1D8: src/func_8021A2D4.c */
};
typedef char Shared_Actor_size_check[(sizeof(Shared_Actor) == 0x1DC) ? 1 : -1];

#endif
