#ifndef SHARED_SHARED_POSE_H
#define SHARED_SHARED_POSE_H

#include "basetypes.h"
#include "player_types.h"
#include "quat.h"

/* Row-major float matrix used by the pose builder. A 2D array (not a flat
 * f32[16]) so stores keep the same alias class as the original. */
typedef f32 Shared_MtxF[4][4];

typedef struct Shared_PoseJointRef Shared_PoseJointRef;
struct Shared_PoseJointRef {
    s16 pos; /* +0x0: src/func_802484A0.c, -1 = use the default frame */
    s16 rot; /* +0x2: src/func_802484A0.c, -1 = use the default frame */
};
typedef char Shared_PoseJointRef_size_check[(sizeof(Shared_PoseJointRef) == 0x4) ? 1 : -1];

typedef struct Shared_PoseDefaultFrame Shared_PoseDefaultFrame;
struct Shared_PoseDefaultFrame {
    Vec3f pos;  /* +0x0: src/func_802484A0.c */
    s16 rot[4]; /* +0xC: src/func_802484A0.c, quaternion scaled by 32767 */
};
typedef char Shared_PoseDefaultFrame_size_check[(sizeof(Shared_PoseDefaultFrame) == 0x14) ? 1 : -1];

typedef struct Shared_PoseTrack Shared_PoseTrack;
struct Shared_PoseTrack {
    Shared_PoseJointRef *joints;     /* +0x0: src/func_802484A0.c */
    Shared_PoseDefaultFrame *frames; /* +0x4: src/func_802484A0.c */
    void *posTable;                  /* +0x8: src/func_802484A0.c */
    void *rotTable;                  /* +0xC: src/func_802484A0.c */
    s32 rotFrame0;                   /* +0x10: src/func_802484A0.c */
    s32 rotFrame1;                   /* +0x14: src/func_802484A0.c */
    s32 posFrame0;                   /* +0x18: src/func_802484A0.c */
    s32 posFrame1;                   /* +0x1C: src/func_802484A0.c */
    f32 blend;                       /* +0x20: src/func_802484A0.c */
};
typedef char Shared_PoseTrack_size_check[(sizeof(Shared_PoseTrack) == 0x24) ? 1 : -1];

typedef struct Shared_PosePartEntry Shared_PosePartEntry;
struct Shared_PosePartEntry {
    char pad0[0x64];
    union {
        struct {
            s8 parent; /* +0x64: src/func_802484A0.c */
            u8 flags;  /* +0x65: src/func_802484A0.c */
        } b;
        struct {
            u32 parent : 8; /* +0x64: src/func_802484A0.c */
            u32 kind : 2;   /* +0x65 bits 7-6: src/func_802484A0.c */
            u32 phase : 3;  /* +0x65 bits 5-3: src/func_802484A0.c */
            u32 still : 1;  /* +0x65 bit 2: src/func_802484A0.c */
            u32 sway : 2;   /* +0x65 bits 1-0: src/func_802484A0.c */
        } f;
    } u;
};
typedef char Shared_PosePartEntry_size_check[(sizeof(Shared_PosePartEntry) == 0x68) ? 1 : -1];

typedef struct Shared_PosePartTable Shared_PosePartTable;
struct Shared_PosePartTable {
    s32 stride; /* +0x0: src/func_802484A0.c */
    s32 count;  /* +0x4: src/func_802484A0.c */
    u8 data[1]; /* +0x8: src/func_802484A0.c, count entries of stride bytes */
};

typedef struct Shared_AnimState Shared_AnimState;
struct Shared_AnimState {
    char pad0[0xB];
    s8 unkB; /* +0xB: src/func_802484A0.c */
    char padC[0x8];
};
typedef char Shared_AnimState_size_check[(sizeof(Shared_AnimState) == 0x14) ? 1 : -1];

typedef struct Shared_PoseFlags Shared_PoseFlags;
struct Shared_PoseFlags {
    s32 frame; /* +0x0: src/func_802484A0.c */
    s32 blend; /* +0x4: src/func_802484A0.c */
    s32 mode;  /* +0x8: src/func_802484A0.c */
};
typedef char Shared_PoseFlags_size_check[(sizeof(Shared_PoseFlags) == 0xC) ? 1 : -1];

typedef struct Shared_PoseSurface Shared_PoseSurface;
struct Shared_PoseSurface {
    u16 unk0; /* +0x0: src/func_802484A0.c */
    u16 unk2; /* +0x2: src/func_802484A0.c */
};
typedef char Shared_PoseSurface_size_check[(sizeof(Shared_PoseSurface) == 0x4) ? 1 : -1];

typedef struct Shared_PoseModel Shared_PoseModel;
struct Shared_PoseModel {
    s32 kind; /* +0x0: src/func_802484A0.c */
    char pad4[0x34];
    f32 unk38; /* +0x38: src/func_802484A0.c */
};
typedef char Shared_PoseModel_size_check[(sizeof(Shared_PoseModel) == 0x3C) ? 1 : -1];

typedef struct Shared_PoseWorld Shared_PoseWorld;
struct Shared_PoseWorld {
    char pad0[0x1218];
    s32 unk1218; /* +0x1218: src/func_802484A0.c */
    char pad121C[0xA4];
    f32 scale; /* +0x12C0: src/func_802484A0.c */
};
typedef char Shared_PoseWorld_size_check[(sizeof(Shared_PoseWorld) == 0x12C4) ? 1 : -1];

typedef struct Shared_PosePart Shared_PosePart;
struct Shared_PosePart {
    char pad0[0xC];
    s32 unkC; /* +0xC: src/func_802484A0.c, hidden-part bit mask */
    char pad10[0x2];
    s8 unk12; /* +0x12: src/func_802484A0.c */
    char pad13[0x1];
    s8 unk14[4];  /* +0x14: src/func_802484A0.c, twisted part indices */
    Vec3f unk18;  /* +0x18: src/func_802484A0.c */
    char pad24[0x44];
};
typedef char Shared_PosePart_size_check[(sizeof(Shared_PosePart) == 0x68) ? 1 : -1];

struct Shared_PoseContext;

typedef struct Shared_PoseActor Shared_PoseActor;
struct Shared_PoseActor {
    char pad0[0x1];
    s8 unk1; /* +0x1: src/func_802484A0.c */
    char pad2[0x6];
    Vec3f pos;                   /* +0x8: src/func_802484A0.c */
    Shared_PoseSurface *surface; /* +0x14: src/func_802484A0.c */
    Shared_PoseModel *model;     /* +0x18: src/func_802484A0.c */
    char pad1C[0x54];
    f32 unk70;       /* +0x70: src/func_802484A0.c */
    Shared_MtxF mtx; /* +0x74: src/func_802484A0.c */
    s32 handle;      /* +0xB4: src/func_802484A0.c */
    u8 *unkB8;       /* +0xB8: src/func_802484A0.c, packed bone matrices */
    char padBC[0xC];
    s32 unkC8; /* +0xC8: src/func_802484A0.c */
    char padCC[0x1A];
    s8 unkE6; /* +0xE6: src/func_802484A0.c */
    char padE7[0x19];
    s32 flags;              /* +0x100: src/func_802484A0.c */
    Shared_AnimState animA; /* +0x104: src/func_802484A0.c */
    Shared_AnimState animB; /* +0x118: src/func_802484A0.c */
    char pad12C[0x4];
    f32 unk130; /* +0x130: src/func_802484A0.c */
    char pad134[0x7];
    u8 unk13B; /* +0x13B: src/func_802484A0.c */
    char pad13C[0x4];
    u8 unk140[2][24];          /* +0x140: src/func_802484A0.c */
    Shared_PosePart part;      /* +0x170: src/func_802484A0.c */
    Shared_PoseWorld *world;   /* +0x1D8: src/func_802484A0.c */
    char pad1DC[0xB4];
    void (*callback)(Shared_MtxF, struct Shared_PoseContext *); /* +0x290: src/func_802484A0.c */
    char pad294[0x4C];
    s32 unk2E0; /* +0x2E0: src/func_802484A0.c */
};
typedef char Shared_PoseActor_size_check[(sizeof(Shared_PoseActor) == 0x2E4) ? 1 : -1];

/* Passed to the actor callback for every part (lives on the caller's stack). */
typedef struct Shared_PoseContext Shared_PoseContext;
struct Shared_PoseContext {
    Shared_PosePartEntry *part;  /* +0x0: src/func_802484A0.c */
    s32 index;                   /* +0x4: src/func_802484A0.c */
    Shared_PoseActor *actor;     /* +0x8: src/func_802484A0.c */
    s32 handle;                  /* +0xC: src/func_802484A0.c */
    Shared_MtxF *mtx;            /* +0x10: src/func_802484A0.c */
    Shared_PosePartTable *parts; /* +0x14: src/func_802484A0.c */
    void *arg1;                  /* +0x18: src/func_802484A0.c */
    s32 arg2;                    /* +0x1C: src/func_802484A0.c */
    Shared_AnimState *animA;     /* +0x20: src/func_802484A0.c */
    Shared_AnimState *animB;     /* +0x24: src/func_802484A0.c */
};
typedef char Shared_PoseContext_size_check[(sizeof(Shared_PoseContext) == 0x28) ? 1 : -1];

/* Frame timing totals at D_80104530. */
typedef struct Shared_FrameProfile Shared_FrameProfile;
struct Shared_FrameProfile {
    u64 start; /* +0x0: src/func_802484A0.c */
    char pad8[0x8];
    s32 frame;     /* +0x10: src/func_802484A0.c */
    s32 prevCount; /* +0x14: src/func_802484A0.c */
    s32 count;     /* +0x18: src/func_802484A0.c */
    char pad1C[0x4];
    f32 prev; /* +0x20: src/func_802484A0.c */
    f32 cur;  /* +0x24: src/func_802484A0.c */
    f32 avg;  /* +0x28: src/func_802484A0.c */
};
typedef char Shared_FrameProfile_size_check[(sizeof(Shared_FrameProfile) == 0x30) ? 1 : -1];

#endif
