#ifndef MATCHKIT_SHARED_SHAREDMOVEMENT_H
#define MATCHKIT_SHARED_SHAREDMOVEMENT_H

#include "basetypes.h"

typedef struct SharedMovement SharedMovement;
struct SharedMovement {
    f32 unk0; /* +0x0: src/func_802233CC.c, src/func_802238BC.c */
    f32 unk4; /* +0x4: src/func_802233CC.c, src/func_802238BC.c */
    f32 unk8; /* +0x8: src/func_802233CC.c, src/func_802238BC.c */
    f32 unkC; /* +0xC: src/func_802233CC.c, src/func_802238BC.c */
    f32 unk10; /* +0x10: src/func_802233CC.c, src/func_802238BC.c */
    f32 unk14; /* +0x14: src/func_802233CC.c, src/func_802238BC.c */
    f32 unk18; /* +0x18: src/func_802233CC.c, src/func_802238BC.c */
    f32 unk1C; /* +0x1C: src/func_802233CC.c, src/func_802238BC.c */
    char pad20[0x2];
    s16 unk22; /* +0x22: src/func_802233CC.c, src/func_802238BC.c */
};
typedef char SharedMovement_size_check[(sizeof(SharedMovement) == 0x24) ? 1 : -1];

#endif
