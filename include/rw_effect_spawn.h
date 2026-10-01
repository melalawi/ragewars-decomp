#ifndef RAGEWARS_RW_EFFECT_SPAWN_H
#define RAGEWARS_RW_EFFECT_SPAWN_H

#include "basetypes.h"

/* Effect spawning layouts, recovered from func_80280094 (us-rev1). Offsets are
 * explicit; a field whose meaning is not evident keeps an unkXX name. */

typedef struct {
    f32 x, y, z;
} EffectVec3;

typedef struct {
    f32 x, y, z, w;
} EffectQuat;

typedef struct {
    f32 m[4][4];
} EffectMtx;

/* A float stored as two halves; func_80285600 takes it by value. */
typedef struct {
    u16 hi;
    u16 lo;
} PackedF;

typedef struct EffectParams {
    /* 0x00 */ s16 lifeBase;
    /* 0x02 */ s16 lifeRange;
    /* 0x04 */ s8 chance;
    /* 0x05 */ s8 unk5;
    /* 0x06 */ s8 countBase;
    /* 0x07 */ s8 countRange;
    /* 0x08 */ s8 listIndex;
    /* 0x09 */ char pad9[2];
    /* 0x0B */ s8 unkB;
    /* 0x0C */ char padC;
    /* 0x0D */ s8 unkD;
    /* 0x0E */ s8 unkE;
} EffectParams;

typedef struct EffectColorParams {
    /* 0x00 */ u8 rgb0[3];
    /* 0x03 */ u8 rgb1[3];
    /* 0x06 */ char pad6[6];
    /* 0x0C */ s8 hueRange;
    /* 0x0D */ s8 unkD;
    /* 0x0E */ s8 unkE;
} EffectColorParams;

typedef struct EffectMotion {
    /* 0x00 */ PackedF unk0;
    /* 0x04 */ PackedF speed;
    /* 0x08 */ u16 unk8;
    /* 0x0A */ u16 unkA;
    /* 0x0C */ u16 unkC;
    /* 0x0E */ u16 unkE;
} EffectMotion;

/* One row of D_800D1384, indexed by EffectModel.unk94. */
typedef struct EffectModelInfo {
    /* 0x00 */ s32 flags;
    /* 0x04 */ char pad4[4];
} EffectModelInfo;

typedef struct EffectModel {
    /* 0x00 */ char pad0[0x94];
    /* 0x94 */ u16 unk94;
} EffectModel;

/* One spawn template, 0x3C bytes. */
typedef struct EffectEntry {
    /* 0x00 */ u32 flags;
    /* 0x04 */ s16 unk4;
    /* 0x06 */ s8 unk6;
    /* 0x07 */ s8 unk7;
    /* 0x08 */ s8 unk8;
    /* 0x09 */ u8 unk9;
    /* 0x0A */ u8 unkA;
    /* 0x0B */ u8 unkB;
    /* 0x0C */ s16 sound;
    /* 0x0E */ char padE[4];
    /* 0x12 */ u8 playerMask;
    /* 0x13 */ char pad13;
    /* 0x14 */ s32 unk14;
    /* 0x18 */ EffectModel *model;
    /* 0x1C */ PackedF *offset;
    /* 0x20 */ PackedF *unk20;
    /* 0x24 */ PackedF *unk24;
    /* 0x28 */ PackedF *direction;
    /* 0x2C */ PackedF *unk2C;
    /* 0x30 */ EffectMotion *motion;
    /* 0x34 */ EffectColorParams *color;
    /* 0x38 */ EffectParams *params;
} EffectEntry;

typedef struct EffectBlock {
    /* 0x00 */ s32 unk0;
    /* 0x04 */ s32 count;
    /* 0x08 */ EffectEntry entries[1];
} EffectBlock;

/* Render state copied from a template at 0x1B4 of an Effect, 0x1C bytes. */
typedef struct EffectRender {
    /* 0x00 */ u32 flags;
    /* 0x04 */ s8 unk4;
    /* 0x05 */ s8 unk5;
    /* 0x06 */ s8 unk6;
    /* 0x07 */ char pad7;
    /* 0x08 */ f32 unk8;
    /* 0x0C */ f32 unkC;
    /* 0x10 */ f32 unk10;
    /* 0x14 */ f32 unk14;
    /* 0x18 */ f32 unk18;
} EffectRender;

typedef struct EffectActor EffectActor;
typedef struct EffectList EffectList;

typedef struct EffectActorModel {
    /* 0x00 */ u32 flags;
    /* 0x04 */ char pad4[0x10];
    /* 0x14 */ s32 unk14;
} EffectActorModel;

/* The fields of the game's actor that effect spawning reads. */
struct EffectActor {
    /* 0x000 */ u8 type;
    /* 0x001 */ char pad1[7];
    /* 0x008 */ EffectVec3 pos;
    /* 0x014 */ char pad14[0x48];
    /* 0x05C */ u32 flags;
    /* 0x060 */ union {
        EffectMtx matrices[2];
        struct {
            char pad[0x54];
            EffectMtx *matrixArray; /* 0x0B4: the aim target's per-frame matrices */
            char padB8[0x18];
            void *owner; /* 0x0D0: an actor of type 0 names its owner here */
        } link;
    } u60;
    /* 0x0E0 */ char padE0[0x20];
    /* 0x100 */ u32 unk100;
    /* 0x104 */ char pad104[0x14];
    /* 0x118 */ EffectActorModel *model;
    /* 0x11C */ char pad11C[0x38];
    /* 0x154 */ f32 unk154;
    /* 0x158 */ f32 unk158;
    /* 0x15C */ char pad15C[0x18];
    /* 0x174 */ EffectVec3 unk174;
    /* 0x180 */ char pad180[0x50];
    /* 0x1D0 */ s8 unk1D0;
    /* 0x1D1 */ char pad1D1[7];
    /* 0x1D8 */ s32 unk1D8;
};

typedef struct Effect Effect;
struct Effect {
    /* 0x000 */ char pad0[4];
    /* 0x004 */ u16 kind;
    /* 0x006 */ char pad6[2];
    /* 0x008 */ EffectVec3 pos;
    /* 0x014 */ s32 unk14;
    /* 0x018 */ char pad18[4];
    /* 0x01C */ EffectVec3 velocity;
    /* 0x028 */ char pad28[0x28];
    /* 0x050 */ EffectVec3 unk50;
    /* 0x05C */ u32 flags;
    /* 0x060 */ char pad60[0xB0];
    /* 0x110 */ s32 unk110;
    /* 0x114 */ s32 unk114;
    /* 0x118 */ EffectEntry *entry;
    /* 0x11C */ u32 unk11C;
    /* 0x120 */ char pad120[4];
    /* 0x124 */ void *ownerId;
    /* 0x128 */ EffectActor *source;
    /* 0x12C */ EffectActor *owner;
    /* 0x130 */ s32 *refCount;
    /* 0x134 */ s32 unk134;
    /* 0x138 */ s32 unk138;
    /* 0x13C */ s32 unk13C;
    /* 0x140 */ f32 unk140;
    /* 0x144 */ f32 unk144;
    /* 0x148 */ f32 unk148;
    /* 0x14C */ s16 life;
    /* 0x14E */ u8 unk14E;
    /* 0x14F */ s8 unk14F;
    /* 0x150 */ f32 unk150[6];
    /* 0x168 */ EffectVec3 unk168;
    /* 0x174 */ EffectVec3 direction;
    /* 0x180 */ f32 unk180[6];
    /* 0x198 */ f32 alpha;
    /* 0x19C */ f32 unk19C[6];
    /* 0x1B4 */ EffectRender render;
    /* 0x1D0 */ s8 mode;
    /* 0x1D1 */ u8 unk1D1;
    /* 0x1D2 */ u8 rgb0[3];
    /* 0x1D5 */ u8 rgb1[3];
    /* 0x1D8 */ u8 unk1D8;
    /* 0x1D9 */ u8 unk1D9;
    /* 0x1DA */ char pad1DA[6];
    /* 0x1E0 */ f32 unk1E0;
    /* 0x1E4 */ EffectList *list;
    /* 0x1E8 */ char pad1E8[4];
    /* 0x1EC */ Effect *next;
    /* 0x1F0 */ s32 unk1F0;
    /* 0x1F4 */ Effect *groupNext;
};

struct EffectList {
    /* 0x00 */ Effect *head;
    /* 0x04 */ Effect *tail;
    /* 0x08 */ char pad8[0xC];
};

/* Effect pools; the object lives at an offset of 0xFC00 inside a larger system. */
typedef struct EffectSystem {
    /* 0x0000 */ char pad0[0xFC00];
    /* 0xFC00 */ EffectList free;
    /* 0xFC14 */ EffectList groups;
    /* 0xFC28 */ EffectList lists[3];
    /* 0xFC64 */ s32 resource;
    /* 0xFC68 */ Effect *last;
} EffectSystem;

/* The aim target that D_80103FCC points at while effects spawn; 0x108 bytes. */
typedef struct EffectTarget {
    /* 0x00 */ EffectActor *actor;
    /* 0x04 */ char pad4[4];
    /* 0x08 */ EffectVec3 pos;
    /* 0x14 */ s32 matrixIndex;
    /* 0x18 */ char pad18[0x66];
    /* 0x7E */ u8 unk7E;
    /* 0x7F */ char pad7F[0x89];
} EffectTarget;

#endif
