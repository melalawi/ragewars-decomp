#ifndef SHARED_SHARED_FUNC_802856B0_S2_H
#define SHARED_SHARED_FUNC_802856B0_S2_H

#include "basetypes.h"

typedef struct Shared_func_802856B0_S2 Shared_func_802856B0_S2;
struct Shared_func_802856B0_S2 {
    char pad0[0x4];
    void * unk4; /* +0x4: src/func_802856B0.c */
    char pad8[0x4];
    f32 unkC; /* +0xC: src/func_802856B0.c */
    f32 unk10; /* +0x10: src/func_802856B0.c */
    f32 unk14; /* +0x14: src/func_802856B0.c */
    f32 unk18; /* +0x18: src/func_802856B0.c */
    f32 unk1C; /* +0x1C: src/func_802856B0.c */
    f32 unk20; /* +0x20: src/func_802856B0.c */
    char pad24[0x8];
    f32 unk2C; /* +0x2C: src/func_802856B0.c */
};
typedef char Shared_func_802856B0_S2_size_check[(sizeof(Shared_func_802856B0_S2) == 0x30) ? 1 : -1];

#endif
