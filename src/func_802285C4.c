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

void func_802285C4(char *arg0) {
    char *actor;

    if (D_8014687C == 11 || D_8014687C == 8) {
        return;
    }
    actor = *(char **)(arg0 + 0x20);
    while (actor != 0) {
        if (func_80245788() != 0 || *(s16 *)(actor + 0x5EA) == 0) {
            void *work;

            work = func_8025CC8C();
            func_8025CA44(work, *(void **)(actor + 0x11BC));
            *(s32 *)(actor + 0x11BC) = 0;
            work = func_8025CC8C();
            func_8025CA44(work, *(void **)(actor + 0x11C0));
            *(s32 *)(actor + 0x11C0) = 0;
        } else if (D_80146894 == 0) {
            void *owner = *(void **)(actor + 0x5DC);
            s32 blocked;

            if (owner == 0) {
                blocked = 0;
            } else {
                blocked = *(s32 *)((char *)owner + 0x564) != 0;
            }
            if (blocked == 0) {
                Block *base;
                s32 old_value;
                s32 new_value;
                f32 saved_value;

                base = (Block *)(actor + 0x2E8);
                old_value = ((Actor *)actor)->value86C;
                saved_value = D_800D2988;
                ((Actor *)actor)->flags |= 0x200;
                base->value = 0x10;
                base->flags &= 0xFFFDFFFF;
                func_8024BE2C(base);
                if (*(f32 *)(actor + 0x11D8) <= 0.0f) {
                    func_80246E34((char *)base);
                }
                new_value = *(s32 *)(actor + 0x86C);
                D_800D2988 = saved_value;
                if (old_value != new_value) {
                    *(u8 *)(actor + 0x10E) = 0;
                }
                *(Triple *)(actor + 0x2F0) = *(Triple *)(actor + 8);
                *(f32 *)(actor + 0x354) = *(f32 *)(actor + 0x6C);
                *(s32 *)(actor + 0x2FC) = *(s32 *)(actor + 0x14);
                *(Quad *)(actor + 0x344) = *(Quad *)(actor + 0x5C);
                *(s32 *)(actor + 0x3E8) &= ~0x200;
            }
        }
        actor = *(char **)(actor + 0x16E0);
    }
}
