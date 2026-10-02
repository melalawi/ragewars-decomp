#ifndef RAGEWARS_SHARED_ZOOMEFFECT_H
#define RAGEWARS_SHARED_ZOOMEFFECT_H

#include "basetypes.h"
#include "player_types.h"
#include "particle.h"

struct ZoomEffectGame {
    char pad0[0x20];
    char* unk20;
};


struct ZoomEffectPlayer {
    char pad0[0x5D0];
    s32 unk5D0;
    char pad5D0[0x11FC - 0x5D0 - sizeof(s32)];
    f32 unk11FC;
    char pad11FC[0x1200 - 0x11FC - sizeof(f32)];
    Vec3 unk1200;
    char pad1200[0x120C - 0x1200 - sizeof(Vec3)];
    s32 unk120C;
    char pad120C[0x16E0 - 0x120C - sizeof(s32)];
    char* unk16E0;
};

#endif
