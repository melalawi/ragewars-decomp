#ifndef SHARED_REACTION_STATISTICS_H
#define SHARED_REACTION_STATISTICS_H
#include "basetypes.h"

/* Actor, interaction and score views used to select reactions and record statistics. */

typedef struct ReactionActor ReactionActor;
typedef struct ReactionPlayer ReactionPlayer;
typedef struct ReactionFlags ReactionFlags;
typedef struct ReactionInteraction ReactionInteraction;
typedef struct ReactionObjectKind ReactionObjectKind;
typedef struct ReactionFloatValue ReactionFloatValue;
typedef struct ReactionSource ReactionSource;
typedef struct ReactionAttribution ReactionAttribution;
typedef struct ReactionPlayerIndex ReactionPlayerIndex;
typedef struct ReactionMatchState ReactionMatchState;
typedef struct ReactionStatistics ReactionStatistics;
typedef struct ReactionScoreCounter ReactionScoreCounter;
typedef struct ReactionObjectStatistics ReactionObjectStatistics;
typedef struct ReactionPlayerRecord ReactionPlayerRecord;

struct ReactionActor {
    char pad0[0x6C];
    f32 unk6C;
    char pad6C[0x168];
    ReactionPlayer *unk1D8;
};

struct ReactionPlayer {
    u8 unk0;
    char pad0[0x7];
    f32 unk8;
    char pad8[0x4];
    f32 unk10;
    u16* unk14;
    char pad14[0xCC];
    u16 unkE4;
    char padE4[0x1A];
    s32 unk100;
    char pad100[0xD4];
    ReactionPlayer *unk1D8;
    char pad1D8[0x3F8];
    s32 unk5D4;
    ReactionStatistics * unk5D8;
    char pad5D8[0x8];
    s32 unk5E4;
    char pad5E4[0x68];
    s16 unk650;
    char pad650[0xB8E];
    f32 unk11E0;
    char pad11E0[0x48];
    s32 unk122C;
    char pad122C[0x94];
    ReactionPlayer *unk12C4;
    ReactionPlayer *unk12C8;
    ReactionPlayer *unk12CC[8];
    ReactionPlayer *unk12EC;
    s32 unk12F0;
    s32 unk12F4[8];
    char pad1314[0x24];
    s32 unk1338;
    char pad1338[0x88];
    s8 unk13C4;
    char pad13C4[0x8B];
    s32 unk1450;
    ReactionPlayerRecord * unk1454;
};

struct ReactionFlags {
    char pad0[0x52];
    u16 unk52;
};

struct ReactionInteraction {
    void* unk0;
    s32 unk4;
    char pad4[0x4];
    s32 unkC;
};

struct ReactionObjectKind {
    u8 unk0;
    char pad0[0x3];
    u16 unk4;
};

struct ReactionFloatValue {
    char pad0[0x4];
    f32 unk4;
};

struct ReactionSource {
    u8 unk0;
    char pad0[0x3];
    u16 unk4;
    char pad4[0x2];
    f32 unk8;
    char pad8[0x4];
    f32 unk10;
    char pad10[0xEC];
    s32 unk100;
    char pad100[0x28];
    ReactionPlayer *unk12C;
    char pad12C[0xA8];
    ReactionPlayer *unk1D8;
};

struct ReactionAttribution {
    u8 unk0;
    char pad0[0x3];
    u16 unk4;
    char pad4[0xFA];
    s32 unk100;
    char pad100[0xD4];
    ReactionPlayerIndex * unk1D8;
};

struct ReactionPlayerIndex {
    char pad0[0x5D4];
    s32 unk5D4;
};

struct ReactionMatchState {
    char pad0[0x18B4];
    s32 unk18B4;
};

struct ReactionStatistics {
    u16 deaths_self;
    u16 deaths_other;
    u16 score;
    u16 special_kills;
    u16 pad8;
    u16 special_hits;
    u16 kills_special[8];
    u16 deaths_special[8];
    u16 kills_normal[8];
    u16 deaths_normal[8];
    char pad4C[0x41];
    u8 counted;
    char pad8E[0x1];
    u8 unk8F;
    char pad8F[0x2];
    u8 unk92;
};

struct ReactionScoreCounter {
    char pad0[0x4];
    volatile u16 unk4; /* FAKEMATCH: preserve the counter-store order. */
};

struct ReactionObjectStatistics {
    char pad0[0x38];
    s32 unk38;
    s32 unk3C;
};

struct ReactionPlayerRecord {
    char pad0[0x4];
    s32 unk4;
    char pad8[0x31C];
    s32 unk324;
    ReactionPlayer *unk328;
};

#endif
