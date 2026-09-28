#include "basetypes.h"

typedef struct {
    u8 pad0[0x7B];
    s8 unk7B;
} Target8043E458;

typedef struct {
    u8 pad0[0x5D8];
    Target8043E458 *unk5D8;
} Other8043E458;

typedef struct {
    u8 pad0[0x1C];
    Other8043E458 *unk1C;
} Outer8043E458;

extern s8 func_8044252C(Outer8043E458 *arg0, s8 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);

/** Runs a target's animation/state transition through func_8044252C and stores the new state. */
s32 func_8043E458(void *arg0, Outer8043E458 *arg1) {
    Target8043E458 *temp_s0;

    temp_s0 = arg1->unk1C->unk5D8;
    temp_s0->unk7B = func_8044252C(arg1, temp_s0->unk7B, 1, 0, 1, 1);
    return 0;
}
