#ifndef SHARED_SHARED_ENTITY_H
#define SHARED_SHARED_ENTITY_H

#include "basetypes.h"

typedef struct Shared_Entity Shared_Entity;
struct Shared_Entity {
    u8 pad0[228]; /* +0x0: src/func_8021A2D4.c */
    u16 animation; /* +0xE4: src/func_8021A2D4.c */
    u8 pad1[1266]; /* +0xE6: src/func_8021A2D4.c */
    struct Shared_Status * status; /* +0x5D8: src/func_8021A2D4.c */
    struct Shared_Control * control; /* +0x5DC: src/func_8021A2D4.c */
    s32 state; /* +0x5E0: src/func_8021A2D4.c */
    s32 action_state; /* +0x5E4: src/func_8021A2D4.c */
    u8 pad2[70]; /* +0x5E8: src/func_8021A2D4.c */
    s16 object_id; /* +0x62E: src/func_8021A2D4.c */
    u8 pad3[2984]; /* +0x630: src/func_8021A2D4.c */
    f32 active; /* +0x11D8: src/func_8021A2D4.c */
    u8 pad4[80]; /* +0x11DC: src/func_8021A2D4.c */
    s32 flags; /* +0x122C: src/func_8021A2D4.c */
    u8 pad5[12]; /* +0x1230: src/func_8021A2D4.c */
    u8 red; /* +0x123C: src/func_8021A2D4.c */
    u8 green; /* +0x123D: src/func_8021A2D4.c */
    u8 blue; /* +0x123E: src/func_8021A2D4.c */
    u8 pad6; /* +0x123F: src/func_8021A2D4.c */
    f32 effect_strength; /* +0x1240: src/func_8021A2D4.c */
    u8 pad7[388]; /* +0x1244: src/func_8021A2D4.c */
    s32 special; /* +0x13C8: src/func_8021A2D4.c */
    u8 pad8[132]; /* +0x13CC: src/func_8021A2D4.c */
    s32 fixed_color; /* +0x1450: src/func_8021A2D4.c */
};
typedef char Shared_Entity_size_check[(sizeof(Shared_Entity) == 0x1454) ? 1 : -1];

#endif
