#include "basetypes.h"

/* Optionally runs func_8024AA08, then starts the actor's current block through func_8026DD50 and, when the resulting animation node is flagged, spawns an effect at the actor raised by its height and scales it to the actor's size, always clearing D_800D15E0 at the end. Adapted from func_8024A3A0 with func_8026B6A0 changed to func_8026DD50 and the height and scale constants taken from D_800C8B48[1] and D_800C8B50. */

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

typedef struct Block {
    u32 words[6];
} Block;

typedef struct Actor {
    char pad0[3];
    s8 field3;
    u32 pad4;
    Vec3f position0;
    u32 pad14[2];
    Vec3f position1;
    u32 pad28[13];
    Quat rotation;
    char pad6C[0xB4 - 0x6C];
    s32 fieldB4;
    char padB8[0x140 - 0xB8];
    Block blocks[4];
} Actor;

typedef struct Params {
    s32 active;
    s32 trigger;
    u32 pad8;
    void **value;
} Params;

typedef struct Effect {
    unsigned char pad0[0x150];
    f32 field150;
    f32 field154;
} Effect;

extern s32 D_800D297C;
extern s32 D_800D15E0;
extern f32 D_800C8B48;
extern f32 D_800C8B50;
extern char D_80121990;

extern void func_8024AA08(Actor *actor, s32 arg, Params *params);
extern void func_8026DD50(void **value, s32 arg1, s32 arg2, s32 arg3, Block *block, s32 arg5, s32 arg6);
extern s32 func_8026E340(void);
extern s32 *func_8028FD94(void *value, s32 index);
extern f32 func_8024D274(Actor *actor);
extern void func_80280094(void *system, Actor *source, Actor *owner,
                          s32 arg3, s32 arg4, s32 arg5, Vec3f position,
                          Quat rotation, Vec3f position2, s32 arg15,
                          s32 arg16, s32 arg17);
extern Effect *func_8028308C(void *system);
extern f32 func_8024D388(Actor *actor);

static inline void spawn(Actor *actor) {
    Vec3f position;

    position = actor->position0;
    position.y += func_8024D274(actor) * *(&D_800C8B48 + 1);
    func_80280094(&D_80121990, actor, actor, 0, 0, 0x94,
                  actor->position1, actor->rotation, position, 0, -1, 0);
}

void func_8024A598(Actor *actor, s32 arg1, s32 arg2, Params *params) {
    Effect *effect;
    f32 scale;
    s32 *node;

    if (params->trigger != 0) {
        func_8024AA08(actor, arg2, params);
    }
    if (params->active != 0) {
        func_8026DD50(params->value, arg1, actor->fieldB4, 1, &actor->blocks[D_800D297C], 0, actor->field3);
        if (func_8026E340() != 0) {
            node = func_8028FD94(*params->value, 2);
            if ((*node != 0) &&
                (*func_8028FD94(func_8028FD94(node, 0), 0) & 0x8000)) {
                spawn(actor);
                effect = func_8028308C(&D_80121990);
                if (effect != 0) {
                    scale = D_800C8B50;
                    effect->field150 = func_8024D388(actor) * scale;
                    effect->field154 = func_8024D274(actor) * scale;
                }
            }
        }
    }
    D_800D15E0 = 0;
}
