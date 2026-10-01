#ifndef SHARED_SHARED_PARTICLE_H
#define SHARED_SHARED_PARTICLE_H

#include "basetypes.h"
#include "player_types.h"
#include "n64sdk.h"

/* Axis-aligned box around a point. */
typedef struct Shared_Bounds Shared_Bounds;
struct Shared_Bounds {
    Vec3 min; /* +0x0: src/func_8027B790.c */
    Vec3 max; /* +0xC: src/func_8027B790.c */
};

/* Fade and blend parameters of a particle descriptor. */
typedef struct Shared_ParticleFade Shared_ParticleFade;
struct Shared_ParticleFade {
    char pad0[0x5];
    s8 rangeMode; /* +0x5: src/func_8027ED40.c */
    char pad6[0x3];
    s8 fadeIn; /* +0x9: src/func_8027ED40.c */
    s8 fadeOut; /* +0xA: src/func_8027ED40.c */
    char padB[0x3];
    s8 unkE; /* +0xE: src/func_8027ED40.c */
};

/* Colour targets a particle blends towards over its life. */
typedef struct Shared_ParticleColors Shared_ParticleColors;
struct Shared_ParticleColors {
    char pad0[0x6];
    u8 prim[3]; /* +0x6: src/func_8027ED40.c */
    u8 env[3]; /* +0x9: src/func_8027ED40.c */
};

typedef struct Shared_ParticleDesc Shared_ParticleDesc;
struct Shared_ParticleDesc {
    s32 flags; /* +0x0: src/func_8027B790.c, src/func_8027ED40.c */
    char pad4[0x4];
    s8 animMode; /* +0x8: src/func_8027ED40.c */
    char pad9[0x7];
    s16 unk10; /* +0x10: src/func_8027B790.c */
    char pad12[0x22];
    Shared_ParticleColors *colors; /* +0x34: src/func_8027ED40.c */
    Shared_ParticleFade *fade; /* +0x38: src/func_8027ED40.c */
};

typedef struct Shared_ParticleOwnerState Shared_ParticleOwnerState;
struct Shared_ParticleOwnerState {
    char pad0[0x122C];
    s32 flags; /* +0x122C: src/func_8027B790.c */
};

typedef struct Shared_ParticleOwner Shared_ParticleOwner;
struct Shared_ParticleOwner {
    u8 kind; /* +0x0: src/func_8027B790.c */
    char pad1[0xFF];
    s32 flags; /* +0x100: src/func_8027B790.c */
    char pad104[0xD4];
    Shared_ParticleOwnerState *state; /* +0x1D8: src/func_8027B790.c */
};

typedef struct Shared_ParticleTarget Shared_ParticleTarget;
struct Shared_ParticleTarget {
    char pad0[0x100];
    s32 flags; /* +0x100: src/func_8027B790.c */
    char pad104[0x6C];
    s32 unk170; /* +0x170: src/func_8027B790.c */
    s32 unk174; /* +0x174: src/func_8027B790.c */
    char pad178[0x2C];
    s8 unk1A4; /* +0x1A4: src/func_8027B790.c */
};

/* The 0x50-byte instance header every placed object starts with. */
typedef struct Shared_ParticleInstance Shared_ParticleInstance;
struct Shared_ParticleInstance {
    char pad0[0x4];
    u16 type; /* +0x4: src/func_8027B790.c */
    char pad6[0x2];
    Vec3 pos; /* +0x8: src/func_8027B790.c, src/func_8027ED40.c */
    s32 unk14; /* +0x14: src/func_8027B790.c */
    char pad18[0x4];
    Vec3 velocity; /* +0x1C: src/func_8027B790.c */
    char pad28[0x10];
    s32 unk38; /* +0x38: src/func_8027B790.c */
    char pad3C[0x14];
};

typedef struct Shared_Particle Shared_Particle;
struct Shared_Particle {
    Shared_ParticleInstance inst; /* +0x0: src/func_8027B790.c, src/func_8027ED40.c */
    char pad50[0xC];
    s32 flags; /* +0x5C: src/func_8027B790.c, src/func_8027ED40.c */
    Matrix mtx[2]; /* +0x60: src/func_8027ED40.c */
    char padE0[0x38];
    Shared_ParticleDesc *desc; /* +0x118: src/func_8027B790.c, src/func_8027ED40.c */
    s32 model; /* +0x11C: src/func_8027ED40.c */
    char pad120[0xC];
    Shared_ParticleOwner *owner; /* +0x12C: src/func_8027B790.c */
    char pad130[0x4];
    Shared_ParticleTarget *target; /* +0x134: src/func_8027B790.c */
    char pad138[0x8];
    f32 time; /* +0x140: src/func_8027B790.c, src/func_8027ED40.c */
    f32 frame; /* +0x144: src/func_8027B790.c, src/func_8027ED40.c */
    f32 unk148; /* +0x148: src/func_8027B790.c */
    s16 life; /* +0x14C: src/func_8027B790.c, src/func_8027ED40.c */
    s8 unk14E; /* +0x14E: src/func_8027ED40.c */
    s8 unk14F; /* +0x14F: src/func_8027ED40.c */
    Vec3 size; /* +0x150: src/func_8027B790.c */
    Vec3 growth; /* +0x15C: src/func_8027B790.c */
    Vec3 prevPos; /* +0x168: src/func_8027B790.c */
    Vec3 unk174; /* +0x174: src/func_8027B790.c */
    Vec3 rot; /* +0x180: src/func_8027B790.c */
    Vec3 rotSpeed; /* +0x18C: src/func_8027B790.c */
    f32 alpha; /* +0x198: src/func_8027ED40.c */
    char pad19C[0x18];
    s32 unk1B4; /* +0x1B4: src/func_8027B790.c */
    char pad1B8[0x1];
    s8 unk1B9; /* +0x1B9: src/func_8027B790.c */
    char pad1BA[0x2];
    f32 unk1BC; /* +0x1BC: src/func_8027B790.c */
    char pad1C0[0x10];
    s8 unk1D0; /* +0x1D0: src/func_8027B790.c */
    s8 unk1D1; /* +0x1D1: src/func_8027B790.c */
    u8 prim[3]; /* +0x1D2: src/func_8027ED40.c */
    u8 env[3]; /* +0x1D5: src/func_8027ED40.c */
    u8 opacity; /* +0x1D8: src/func_8027ED40.c */
};

/* Result of the last func_80243A80 collision probe (D_801041F0). */
typedef struct Shared_CollisionResult Shared_CollisionResult;
struct Shared_CollisionResult {
    u8 *unk0; /* +0x0: src/func_8027B790.c */
    char pad4[0x4];
    char unk8[0x80]; /* +0x8: src/func_8027B790.c */
    s32 unk88; /* +0x88: src/func_8027B790.c */
    char pad8C[0x4];
    char unk90[0xC]; /* +0x90: src/func_8027B790.c */
    s32 unk9C; /* +0x9C: src/func_8027B790.c */
    char unkA0[0x10]; /* +0xA0: src/func_8027B790.c */
    s32 unkB0; /* +0xB0: src/func_8027B790.c */
    s32 unkB4; /* +0xB4: src/func_8027B790.c */
    char unkB8[0xC]; /* +0xB8: src/func_8027B790.c */
    s32 unkC4; /* +0xC4: src/func_8027B790.c */
    char unkC8[0x10]; /* +0xC8: src/func_8027B790.c */
    Vec3 unkD8; /* +0xD8: src/func_8027B790.c */
};

/* A view that particles are drawn for (D_801450A8 holds the active one). */
typedef struct Shared_ParticleView Shared_ParticleView;
struct Shared_ParticleView {
    char pad0[0x8];
    s32 unk8; /* +0x8: src/func_8027ED40.c */
    char padC[0x18];
    s32 unk24; /* +0x24: src/func_8027ED40.c */
    char pad28[0xF8];
    s32 grayscale; /* +0x120: src/func_8027ED40.c */
    char pad124[0x4];
    Vec3 unk128; /* +0x128: src/func_8027ED40.c */
    char pad134[0xEC];
    Matrix viewMtx; /* +0x220: src/func_8027ED40.c */
    char pad260[0x2C8];
    f32 fadeRange; /* +0x528: src/func_8027ED40.c */
};

/* Per-frame display list state (D_8011FE80). */
typedef struct Shared_DisplayFrame Shared_DisplayFrame;
struct Shared_DisplayFrame {
    char pad0[0x114];
    Gfx *commands; /* +0x114: src/func_8027ED40.c */
};

/* Output of func_80296F7C: frame count and the current frame record. */
typedef struct Shared_AnimFrame Shared_AnimFrame;
struct Shared_AnimFrame {
    u8 kind; /* +0x0: src/func_8027ED40.c */
    u8 divisor; /* +0x1: src/func_80269A80.c */
    u8 shiftS; /* +0x2: src/func_8027ED40.c */
    u8 shiftT; /* +0x3: src/func_8027ED40.c */
    u8 lod; /* +0x4: src/func_80269A80.c */
    u8 format; /* +0x5: src/func_80269A80.c, distinct from kind at +0 */
};

typedef struct Shared_AnimInfo Shared_AnimInfo;
struct Shared_AnimInfo {
    s32 count; /* +0x0: src/func_8027ED40.c */
    s32 unk4; /* +0x4: src/func_8027ED40.c; secondary count in func_80269A80 */
    Shared_AnimFrame *frame; /* +0x8: src/func_8027ED40.c */
};

typedef char Shared_Bounds_size_check[(sizeof(Shared_Bounds) == 0x18) ? 1 : -1];
typedef char Shared_ParticleFade_size_check[(sizeof(Shared_ParticleFade) == 0xF) ? 1 : -1];
typedef char Shared_ParticleDesc_size_check[(sizeof(Shared_ParticleDesc) == 0x3C) ? 1 : -1];
typedef char Shared_ParticleInstance_size_check[(sizeof(Shared_ParticleInstance) == 0x50) ? 1 : -1];
typedef char Shared_Particle_size_check[(sizeof(Shared_Particle) == 0x1DC) ? 1 : -1];
typedef char Shared_CollisionResult_size_check[(sizeof(Shared_CollisionResult) == 0xE4) ? 1 : -1];
typedef char Shared_ParticleView_size_check[(sizeof(Shared_ParticleView) == 0x52C) ? 1 : -1];
typedef char Shared_AnimInfo_size_check[(sizeof(Shared_AnimInfo) == 0xC) ? 1 : -1];

#endif
