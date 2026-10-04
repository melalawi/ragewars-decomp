#include "common/types.h"
#include "span_1000/code_8024E6C8.h"
#include "span_1000/types.h"
#include "span_C76B0/data.h"
#include "types.h"









extern f32 D_800C3D90_de;

extern char D_8011D8D0;

extern s32 func_8026E340_de(void);
extern s32 *func_8028FDB4_de(void *value, s32 index);
extern f32 func_8024D284_de(Actor_func_8024ED90_de *actor);
extern void func_802800C0_de(void *system, Actor_func_8024ED90_de *source, Actor_func_8024ED90_de *owner,
                          s32 arg3, s32 arg4, s32 arg5, Vec3 position,
                          Vector4f rotation, Vec3 position2, s32 arg15,
                          s32 arg16, s32 arg17);
extern Effect_func_8024A1D0_de *func_802830B8_de(void *system);
extern f32 func_8024D398_de(Actor_func_8024ED90_de *actor);

void func_8024ED90_de(Actor_func_8024ED90_de *actor, void **arg1) {
    Vec3 position;
    Vector4f rotation;
    Effect_func_8024A1D0_de *effect;
    f32 scale;
    s32 *node;

    if (func_8026E340_de() != 0) {
        rotation.x = rotation.y = rotation.z = 0.0f;
        rotation.w = D_800C3D90_de;
        node = func_8028FDB4_de(*arg1, 2);
        if ((*node != 0) &&
            (*func_8028FDB4_de(func_8028FDB4_de(node, 0), 0) & 0x8000)) {
            position = actor->position0;
            position.y += func_8024D284_de(actor) * *(&D_800C3D90_de + 1);
            func_802800C0_de(&D_8011D8D0, actor, actor, 0, 0, 0x94,
                          actor->position1, rotation, position, 0, -1, 0);
            effect = func_802830B8_de(&D_8011D8D0);
            if (effect != 0) {
                scale = D_800C3D98_de;
                effect->field150 = func_8024D398_de(actor) * scale;
                effect->field154 = func_8024D284_de(actor) * scale;
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
