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
} Actor;

typedef struct Effect {
    unsigned char pad0[0x150];
    f32 field150;
    f32 field154;
} Effect;

extern f32 D_800C8E80;
extern f32 D_800C8E88;
extern char D_80121990;

extern s32 func_8026E340(void);
extern s32 *func_8028FD94(void *value, s32 index);
extern f32 func_8024D274(Actor *actor);
extern void func_80280094(void *system, Actor *source, Actor *owner,
                          s32 arg3, s32 arg4, s32 arg5, Vec3f position,
                          Quat rotation, Vec3f position2, s32 arg15,
                          s32 arg16, s32 arg17);
extern Effect *func_8028308C(void *system);
extern f32 func_8024D388(Actor *actor);

void func_8024ED80(Actor *actor, void **arg1) {
    Vec3f position;
    Quat rotation;
    Effect *effect;
    f32 scale;
    s32 *node;

    if (func_8026E340() != 0) {
        rotation.x = rotation.y = rotation.z = 0.0f;
        rotation.w = D_800C8E80;
        node = func_8028FD94(*arg1, 2);
        if ((*node != 0) &&
            (*func_8028FD94(func_8028FD94(node, 0), 0) & 0x8000)) {
            position = actor->position0;
            position.y += func_8024D274(actor) * *(&D_800C8E80 + 1);
            func_80280094(&D_80121990, actor, actor, 0, 0, 0x94,
                          actor->position1, rotation, position, 0, -1, 0);
            effect = func_8028308C(&D_80121990);
            if (effect != 0) {
                scale = D_800C8E88;
                effect->field150 = func_8024D388(actor) * scale;
                effect->field154 = func_8024D274(actor) * scale;
            }
        }
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C3CC0_4 = 1.0f;
const float unbake_rodata_800C3CC4_4 = 0.5f;
const float unbake_rodata_800C3CC8_4 = 0.100000001f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C8E80_4 = 1.0f;
const float unbake_rodata_800C8E84_4 = 0.5f;
const float unbake_rodata_800C8E88_4 = 0.100000001f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C4040_4 = 1.0f;
const float unbake_rodata_800C4044_4 = 0.5f;
const float unbake_rodata_800C4048_4 = 0.100000001f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C4080_4 = 1.0f;
const float unbake_rodata_800C4084_4 = 0.5f;
const float unbake_rodata_800C4088_4 = 0.100000001f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C3D90_4 = 1.0f;
const float unbake_rodata_800C3D94_4 = 0.5f;
const float unbake_rodata_800C3D98_4 = 0.100000001f;
#endif
