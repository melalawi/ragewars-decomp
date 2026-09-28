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

void func_8024714C(char *arg0, Vec3 *arg1) {
    CollisionInfo *collision;
    u16 *old_contact;
    s32 collided;
    f32 saved;
    void (*callback)(void *, void *, CollisionInfo *);

    if ((*(s32 *)(arg0 + 0x100) & 0x10000) && *(void **)(arg0 + 0x1A0) != 0) {
        collision = *(CollisionInfo **)((char *)*(void **)(arg0 + 0x1A0) + 0xC);
        if (collision == 0) {
            collision = &D_801043D8;
        }
        saved = *(f32 *)((char *)collision + 8);
        if ((u32)(*(u16 *)(arg0 + 0x238) - 0x2B0C) < 8) {
            *(s32 *)((char *)collision + 8) = 0;
        }
        old_contact = *(u16 **)(arg0 + 0x14);
        collided = func_80243A80(arg0, *arg1, collision);
        if (old_contact != *(u16 **)(arg0 + 0x14)) {
            *(u16 **)(arg0 + 0x1F4) = old_contact;
        }
        *(f32 *)((char *)collision + 8) = saved;
        if (old_contact != 0 && *(u16 **)(arg0 + 0x14) != 0 &&
                *old_contact != **(u16 **)(arg0 + 0x14) &&
                **(s32 **)(arg0 + 0x18) == 1) {
            func_80278E74((s32)old_contact, 0x80, arg0);
            func_80278E74((s32)*(u16 **)(arg0 + 0x14), 0x40, arg0);
        }
        if (collided != 0 && !(*(s32 *)(arg0 + 0x100) & 0x300000) &&
                **(s32 **)(arg0 + 0x18) == 1 && D_801041F0.active0 != 0 &&
                *D_801041F0.active0 == 1) {
            func_80278DE8(D_801041F0.active0, 0x20, arg0);
        }
        callback = *(void (**)(void *, void *, CollisionInfo *))(arg0 + 0x284);
        if (callback != 0) {
            callback(arg0, arg0 + 0x170, collision);
        }
    } else {
        *(Vec3 *)(arg0 + 8) = *arg1;
    }
}
