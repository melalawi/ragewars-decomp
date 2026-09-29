#include "basetypes.h"

typedef struct {
    s32 x;
    s32 y;
    s32 z;
} Triple;

typedef struct {
    s32 x;
    s32 y;
    s32 z;
    s32 w;
} Quad;

typedef struct {
    u8 pad000[0x100];
    s32 flags;
    u8 pad104[0x1DC];
    s32 value;
} Block;

typedef struct {
    u8 pad000[0x3E8];
    s32 flags;
    u8 pad3EC[0x480];
    s32 value86C;
} Actor;

extern f32 D_800D2988;
extern s32 D_8014687C;
extern s32 D_80146894;
extern s32 func_80245788(void);
extern void *func_8025CC8C(void);
extern s32 func_8025CA44(void *, void *);
extern void func_8024BE2C(void *arg0);
extern void func_80246E34(char *);

typedef struct func_802285C4_S1 func_802285C4_S1;
typedef struct func_802285C4_S2 func_802285C4_S2;
typedef struct func_802285C4_S3 func_802285C4_S3;
typedef struct func_802285C4_S4 func_802285C4_S4;
typedef union func_802285C4_S2_U11BC { void* v0; s32 v1; } func_802285C4_S2_U11BC;
typedef union func_802285C4_S2_U11C0 { void* v0; s32 v1; } func_802285C4_S2_U11C0;
struct func_802285C4_S1 {
    char pad0[0x20];
    char* unk20;
};
struct func_802285C4_S2 {
    char pad0[0x8];
    Triple unk8;
    char pad8[0x14 - 0x8 - sizeof(Triple)];
    s32 unk14;
    char pad14[0x5C - 0x14 - sizeof(s32)];
    Quad unk5C;
    char pad5C[0x6C - 0x5C - sizeof(Quad)];
    f32 unk6C;
    char pad6C[0x10E - 0x6C - sizeof(f32)];
    u8 unk10E;
    char pad10E[0x2E8 - 0x10E - sizeof(u8)];
    Block unk2E8;
    char pad2E8[0x5DC - 0x2E8 - sizeof(Block)];
    void* unk5DC;
    char pad5DC[0x5EA - 0x5DC - sizeof(void*)];
    s16 unk5EA;
    char pad5EA[0x86C - 0x5EA - sizeof(s16)];
    s32 unk86C;
    char pad86C[0x11BC - 0x86C - sizeof(s32)];
    func_802285C4_S2_U11BC unk11BC;
    char pad11BC[0x11C0 - 0x11BC - sizeof(func_802285C4_S2_U11BC)];
    func_802285C4_S2_U11C0 unk11C0;
    char pad11C0[0x11D8 - 0x11C0 - sizeof(func_802285C4_S2_U11C0)];
    f32 unk11D8;
    char pad11D8[0x16E0 - 0x11D8 - sizeof(f32)];
    char* unk16E0;
};
struct func_802285C4_S3 {
    char pad0[0x564];
    s32 unk564;
};
struct func_802285C4_S4 {
    char pad0[0x2F0];
    Triple unk2F0;
    char pad2F0[0x2FC - 0x2F0 - sizeof(Triple)];
    s32 unk2FC;
    char pad2FC[0x344 - 0x2FC - sizeof(s32)];
    Quad unk344;
    char pad344[0x354 - 0x344 - sizeof(Quad)];
    f32 unk354;
    char pad354[0x3E8 - 0x354 - sizeof(f32)];
    s32 unk3E8;
};

void func_802285C4(char *arg0) {
    char *actor;

    if (D_8014687C == 11 || D_8014687C == 8) {
        return;
    }
    actor = ((func_802285C4_S1 *)(arg0))->unk20;
    while (actor != 0) {
        if (func_80245788() != 0 || ((func_802285C4_S2 *)(actor))->unk5EA == 0) {
            void *work;

            work = func_8025CC8C();
            func_8025CA44(work, ((func_802285C4_S2 *)(actor))->unk11BC.v0);
            ((func_802285C4_S2 *)(actor))->unk11BC.v1 = 0;
            work = func_8025CC8C();
            func_8025CA44(work, ((func_802285C4_S2 *)(actor))->unk11C0.v0);
            ((func_802285C4_S2 *)(actor))->unk11C0.v1 = 0;
        } else if (D_80146894 == 0) {
            void *owner = ((func_802285C4_S2 *)(actor))->unk5DC;
            s32 blocked;

            if (owner == 0) {
                blocked = 0;
            } else {
                blocked = ((func_802285C4_S3 *)(owner))->unk564 != 0;
            }
            if (blocked == 0) {
                Block *base;
                s32 old_value;
                s32 new_value;
                f32 saved_value;

                base = &((func_802285C4_S2 *)(actor))->unk2E8;
                old_value = ((Actor *)actor)->value86C;
                saved_value = D_800D2988;
                ((Actor *)actor)->flags |= 0x200;
                base->value = 0x10;
                base->flags &= 0xFFFDFFFF;
                func_8024BE2C(base);
                if (((func_802285C4_S2 *)(actor))->unk11D8 <= 0.0f) {
                    func_80246E34((char *)base);
                }
                new_value = ((func_802285C4_S2 *)(actor))->unk86C;
                D_800D2988 = saved_value;
                if (old_value != new_value) {
                    ((func_802285C4_S2 *)(actor))->unk10E = 0;
                }
                ((func_802285C4_S4 *)(actor))->unk2F0 = ((func_802285C4_S2 *)(actor))->unk8;
                ((func_802285C4_S4 *)(actor))->unk354 = ((func_802285C4_S2 *)(actor))->unk6C;
                ((func_802285C4_S4 *)(actor))->unk2FC = ((func_802285C4_S2 *)(actor))->unk14;
                ((func_802285C4_S4 *)(actor))->unk344 = ((func_802285C4_S2 *)(actor))->unk5C;
                ((func_802285C4_S4 *)(actor))->unk3E8 &= ~0x200;
            }
        }
        actor = ((func_802285C4_S2 *)(actor))->unk16E0;
    }
}
