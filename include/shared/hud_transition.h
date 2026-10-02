#ifndef RAGEWARS_SHARED_HUD_TRANSITION_H
#define RAGEWARS_SHARED_HUD_TRANSITION_H
#include "basetypes.h"
typedef struct HudTransitionState HudTransitionState;
struct HudTransitionState {
    char pad0[0x1B410];
    s32 unk1B410;
    s32 unk1B414;
    f32 unk1B418;
    s32 unk1B41C;
    char unk1B420;
    char pad1B421[0x1B430-0x1B421];
    s16 unk1B430;
    char pad1B432[2];
    s32 unk1B434;
    s32 unk1B438;
    char pad1B43C[0x10];
    s32 unk1B44C;
};

#endif
