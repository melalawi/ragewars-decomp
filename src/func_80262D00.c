/* Spawns an effect in a scene when effects are enabled and a count is given: resolves a missing effect id
 * from the variant (func_8028B1F8, giving up when unknown) and a default variant from the id
 * (func_8028B238), takes a node from the scene's free list when allowed (always with D_8013B290, otherwise
 * while fewer than three are active), moves it to the active list and attaches the counted reference, then
 * initialises it through func_80246690 with the position, scale, direction and colour vectors and starts it
 * with func_8024B2C0. Returns the effect or 0. */
#include "basetypes.h"

typedef struct {
    f32 x;
    f32 y;
    f32 z;
} Vec3f;

typedef struct {
    char pad0[0x2F0];
    s32 *ref;
} Effect;

extern s32 D_800D29B4;
extern s32 D_800D2B40;
extern s32 D_8013B290;
extern char D_8011FE88;
extern s32 func_8028B1F8(void *, s32);
extern s32 func_8028B238(void *, s32);
extern void func_80255E78(void *, Effect *);
extern void func_80255C58(void *, Effect *);
extern void func_80246690(Effect *, s32, s32, s32, s32, s32, s32, f32, Vec3f, s32, Vec3f, Vec3f, s32);
extern void func_8024B2C0(Effect *);

static inline Effect *take_effect(void *scene, s32 *ref) {
    Effect *effect;

    if (D_8013B290 == 0 && (unsigned int)*(s32 *)((char *)scene + 0x5F24) >= 3) {
        return 0;
    }
    effect = *(Effect **)((char *)scene + 0x5F00);
    if (effect != 0) {
        func_80255E78((char *)scene + 0x5F00, effect);
        func_80255C58((char *)scene + 0x5F14, effect);
        effect->ref = ref;
        if (ref != 0) {
            *ref += 1;
        }
    }
    return effect;
}

Effect *func_80262D00(void *scene, s32 id, s32 variant, s32 count, s32 owner, Vec3f position, f32 scale,
                      Vec3f direction, Vec3f color, s32 *ref) {
    Effect *effect;

    if (D_800D29B4 == 0 || count == 0) {
        return 0;
    }
    if (id == -1) {
        id = func_8028B1F8(&D_8011FE88, variant);
        if (id == -1) {
            return 0;
        }
    }
    if ((unsigned int)(variant + 1) < 2) {
        variant = func_8028B238(&D_8011FE88, id);
    }
    effect = take_effect(scene, ref);
    if (effect == 0) {
        return 0;
    }
    func_80246690(effect, id, variant, D_800D2B40, count, -1, owner, scale, position, 0x80000, color, direction, 0);
    func_8024B2C0(effect);
    return effect;
}
