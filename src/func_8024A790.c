#include "basetypes.h"

/* Sets the actor's team mask, optionally runs func_8024AA08, then loads the actor's model resource, decodes its colour block if needed, starts it through func_8026DA4C and, when the resulting animation node is flagged, spawns an effect at the actor raised by its height and scaled to its size, releasing the resource at the end. Adapted from func_8024A598 with the mask store, the resource load and release around func_8026DA4C, and the height and scale constants D_800C8B60[1] and D_800C8B68 changed, and the D_800D15E0 clear removed. */

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
    char pad0;
    s8 team;
    char pad2;
    s8 field3;
    u32 pad4;
    Vec3f position0;
    u32 pad14[2];
    Vec3f position1;
    u32 pad28[13];
    Quat rotation;
    char pad6C[0xB4 - 0x6C];
    s32 fieldB4;
    char padB8[0x17C - 0xB8];
    s32 mask;
    char pad180[0x2E4 - 0x180];
    s32 flags2E4;
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

extern s32 D_800D2640;
extern char D_24D0F8;
extern char D_800C8B54;
extern f32 D_800C8B60;
extern f32 D_800C8B68;
extern char D_80121990;

extern void func_8024AA08(Actor *actor, s32 arg, Params *params);
extern s32 func_80251F0C(s32, s32, void *, s32, s32, void *, void *, void *, s32);
extern void func_80253B5C(s32, s32);
extern void func_8027899C(void *object, void *colors);
extern void func_8026DA4C(void **value, s32 arg1, s32 arg2, s32 arg3, void *arg4, s32 arg5);
extern void func_802536F4(s32, s32);
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
    position.y += func_8024D274(actor) * *(&D_800C8B60 + 1);
    func_80280094(&D_80121990, actor, actor, 0, 0, 0x94,
                  actor->position1, actor->rotation, position, 0, -1, 0);
}

void func_8024A790(Actor *actor, s32 arg1, Params *params) {
    Effect *effect;
    f32 scale;
    s32 *node;
    s32 resource;
    s32 *header;
    char *data;

    actor->mask = 1 << actor->team;
    if (params->trigger != 0) {
        func_8024AA08(actor, arg1, params);
    }
    if (params->active == 0) {
        return;
    }
    resource = func_80251F0C(0, actor->flags2E4 | D_800D2640, params->value, 0, 0,
                             actor, &D_24D0F8, &D_800C8B54, 1);
    if (resource == 0) {
        return;
    }
    func_80253B5C(0, resource);
    header = *(s32 **)resource;
    if (header[0] == 1) {
        char *object = (char *)header + header[1];

        func_8027899C(object, (char *)header + header[2]);
        data = object;
    } else {
        data = (char *)(header + 2);
    }
    func_8026DA4C(params->value, actor->fieldB4, 1, 0, data, actor->field3);
    if (func_8026E340() != 0) {
        node = func_8028FD94(*params->value, 2);
        if ((*node != 0) &&
            (*func_8028FD94(func_8028FD94(node, 0), 0) & 0x8000)) {
            spawn(actor);
            effect = func_8028308C(&D_80121990);
            if (effect != 0) {
                scale = D_800C8B68;
                effect->field150 = func_8024D388(actor) * scale;
                effect->field154 = func_8024D274(actor) * scale;
            }
        }
    }
    func_802536F4(0, resource);
}
