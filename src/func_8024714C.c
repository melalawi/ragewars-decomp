#include "basetypes.h"

typedef struct {
    f32 x;
    f32 y;
    f32 z;
} Vec3;

typedef struct {
    s32 w[8];
} CollisionInfo;

typedef struct {
    u8 *active0;
} CollisionState;

extern CollisionInfo D_801043D8;
extern CollisionState D_801041F0;
extern s32 func_80243A80(void *arg0, Vec3 arg1, CollisionInfo *arg2);
extern void func_80278E74(s32 arg0, s32 arg1, void *arg2);
extern void func_80278DE8(void *arg0, s32 arg1, void *arg2);

typedef struct func_8024714C_S1 func_8024714C_S1;
typedef struct func_8024714C_S2 func_8024714C_S2;
typedef struct func_8024714C_S3 func_8024714C_S3;
typedef union func_8024714C_S3_U8 { f32 v0; s32 v1; } func_8024714C_S3_U8;
struct func_8024714C_S1 {
    char pad0[0x8];
    Vec3 unk8;
    char pad8[0x14 - 0x8 - sizeof(Vec3)];
    u16* unk14;
    char pad14[0x18 - 0x14 - sizeof(u16*)];
    s32* unk18;
    char pad18[0x100 - 0x18 - sizeof(s32*)];
    s32 unk100;
    char pad100[0x1A0 - 0x100 - sizeof(s32)];
    void* unk1A0;
    char pad1A0[0x1F4 - 0x1A0 - sizeof(void*)];
    u16* unk1F4;
    char pad1F4[0x238 - 0x1F4 - sizeof(u16*)];
    u16 unk238;
};
struct func_8024714C_S2 {
    char pad0[0xC];
    CollisionInfo* unkC;
};
struct func_8024714C_S3 {
    char pad0[0x8];
    func_8024714C_S3_U8 unk8;
};

void func_8024714C(char *arg0, Vec3 *arg1) {
    CollisionInfo *collision;
    u16 *old_contact;
    s32 collided;
    f32 saved;
    void (*callback)(void *, void *, CollisionInfo *);

    if ((((func_8024714C_S1 *)(arg0))->unk100 & 0x10000) && ((func_8024714C_S1 *)(arg0))->unk1A0 != 0) {
        collision = ((func_8024714C_S2 *)(((func_8024714C_S1 *)(arg0))->unk1A0))->unkC;
        if (collision == 0) {
            collision = &D_801043D8;
        }
        saved = ((func_8024714C_S3 *)(collision))->unk8.v0;
        if ((u32)(((func_8024714C_S1 *)(arg0))->unk238 - 0x2B0C) < 8) {
            ((func_8024714C_S3 *)(collision))->unk8.v1 = 0;
        }
        old_contact = ((func_8024714C_S1 *)(arg0))->unk14;
        collided = func_80243A80(arg0, *arg1, collision);
        if (old_contact != ((func_8024714C_S1 *)(arg0))->unk14) {
            ((func_8024714C_S1 *)(arg0))->unk1F4 = old_contact;
        }
        ((func_8024714C_S3 *)(collision))->unk8.v0 = saved;
        if (old_contact != 0 && ((func_8024714C_S1 *)(arg0))->unk14 != 0 &&
                *old_contact != *((func_8024714C_S1 *)(arg0))->unk14 &&
                *((func_8024714C_S1 *)(arg0))->unk18 == 1) {
            func_80278E74((s32)old_contact, 0x80, arg0);
            func_80278E74((s32)((func_8024714C_S1 *)(arg0))->unk14, 0x40, arg0);
        }
        if (collided != 0 && !(((func_8024714C_S1 *)(arg0))->unk100 & 0x300000) &&
                *((func_8024714C_S1 *)(arg0))->unk18 == 1 && D_801041F0.active0 != 0 &&
                *D_801041F0.active0 == 1) {
            func_80278DE8(D_801041F0.active0, 0x20, arg0);
        }
        callback = *(void (**)(void *, void *, CollisionInfo *))((char *)arg0 + 0x284);
        if (callback != 0) {
            callback(arg0, arg0 + 0x170, collision);
        }
    } else {
        ((func_8024714C_S1 *)(arg0))->unk8 = *arg1;
    }
}
