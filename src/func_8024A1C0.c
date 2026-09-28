/* Refreshes the actor's animation from the lookup through func_8024AA08 and func_8026DA4C and, when the lookup's third node carries flag 0x8000, spawns a 0x94 effect at the actor scaled by its size, then clears D_800D15E0. Adapted from func_8024C444 with its body moved into a static inline helper, the func_8024B8DC update calls added before it, the D_800C8B38 scale constants and the trailing D_800D15E0 clear changed. */
#include "basetypes.h"

typedef struct Vec3f {
    f32 x;
    f32 y;
    f32 z;
} Vec3f;

typedef struct Quat {
    f32 x;
    f32 y;
    f32 z;
    f32 w;
} Quat;

typedef struct Actor {
    u32 pad0[2];
    Vec3f position0;
    u32 pad14[2];
    Vec3f position1;
    u32 pad28[13];
    Quat rotation;
} Actor;

typedef struct Lookup {
    s32 unk0;
    s32 unk4;
    u32 pad8;
    void **value;
} Lookup;

typedef struct Effect {
    unsigned char pad0[0x150];
    f32 field150;
    f32 field154;
} Effect;

extern f32 D_800C8B38[];
extern f32 D_800C8B40;
extern char D_80121990;
extern s32 D_800D297C;
extern s32 D_800D15E0;

extern void func_8024AA08(void *arg0, void *arg1, void *arg2);
extern void func_8026DA4C();
extern s32 func_8026E340(void);
extern s32 *func_8028FD94(void *value, s32 index);
extern f32 func_8024D274(Actor *actor);
extern void func_80280094(void *system, Actor *source, Actor *owner,
                          s32 arg3, s32 arg4, s32 arg5, Vec3f position,
                          Quat rotation, Vec3f position2, s32 arg15,
                          s32 arg16, s32 arg17);
extern Effect *func_8028308C(void *system);
extern f32 func_8024D388(Actor *actor);

static inline void func_8024A1C0_spawn(Actor *actor, Lookup *lookup) {
    Vec3f position;
    Effect *effect;
    f32 scale;
    s32 *node;

    if (func_8026E340() != 0) {
        node = func_8028FD94(*lookup->value, 2);
        if ((*node != 0) &&
            (*func_8028FD94(func_8028FD94(node, 0), 0) & 0x8000)) {
            position = actor->position0;
            position.y += func_8024D274(actor) * D_800C8B38[1];
            func_80280094(&D_80121990, actor, actor, 0, 0, 0x94,
                          actor->position1, actor->rotation, position, 0, -1, 0);
            effect = func_8028308C(&D_80121990);
            if (effect != 0) {
                scale = D_800C8B40;
                effect->field150 = func_8024D388(actor) * scale;
                effect->field154 = func_8024D274(actor) * scale;
            }
        }
    }
}

void func_8024A1C0(Actor *actor, void *arg1, Lookup *lookup) {
    s32 one;

    if (lookup->unk4 != 0) {
        func_8024AA08(actor, arg1, lookup);
    }
    if (lookup->unk0 != 0) {
        one = 1;
        func_8026DA4C((s32)lookup->value, *(s32 *)((char *)actor + 0xB4), one,
                      (char *)actor + ((((D_800D297C << one) + D_800D297C) << 3) + 0x140),
                      0, *(s8 *)((char *)actor + 3));
        func_8024A1C0_spawn(actor, lookup);
    }
    D_800D15E0 = 0;
}
