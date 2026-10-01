#ifndef RAGEWARS_SHARED_ACTOR_NAVIGATION_H
#define RAGEWARS_SHARED_ACTOR_NAVIGATION_H

#include "basetypes.h"
#include "shared/player.h"

typedef struct NavigationState NavigationState;
typedef struct NavigationNode NavigationNode;
typedef struct NavigationLink NavigationLink;
typedef struct NavigationEndpoint NavigationEndpoint;
typedef struct NavigationWaypoint NavigationWaypoint;
typedef struct NavigationStatus NavigationStatus;
typedef union NavigationFlagWord { s32 v0; u16 v1; } NavigationFlagWord;
struct NavigationState {
    SharedPlayer * unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    char padC[0x4];
    s32 unk14;
    s32 unk18;
    char pad18[0x10];
    Triple pos;
    char pad34[0x178];
    Triple home;
    char pad1B8[0x144];
    s32 unk300;
    s32 unk304;
    s32 unk308;
    s32 unk30C;
    s32 unk310;
    s32 unk314;
    char pad314[0x14];
    s32 unk32C;
};
struct NavigationNode {
    Triple pos;
    NavigationFlagWord unkC;
};
struct NavigationLink {
    char pad0[0x4];
    u8 unk4;
};
struct NavigationEndpoint {
    char pad0[0x40];
    NavigationWaypoint * unk40;
    Triple pos;
};
struct NavigationWaypoint {
    char pad0[0x8];
    Triple pos;
};
struct NavigationStatus {
    char pad0[0x18];
    s32* unk18;
};

#endif
