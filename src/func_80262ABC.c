/* Spawns the effect a description asks for: the spawn of func_80262D00 (id resolution, free node, init
 * through func_80246690 and start) inlined with the id, variant, count, owner, position, scale, direction
 * and colour taken from the description record and no counted reference. Adapted from func_80262D00 with
 * the enabled and count tests as separate early returns. */
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

typedef struct {
    u8 id;
    char pad1[7];
    Vec3f position;
    s32 owner;
    s32 count;
    Vec3f direction;
    char pad28[0x28];
    Vec3f color;
    char pad5C[0x10];
    f32 scale;
    char pad70[0x74];
    u16 variant;
} EffectDesc;

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

typedef struct func_80262ABC_S1 func_80262ABC_S1;
typedef union func_80262ABC_S1_U5F00 { Effect* v0; char v1; } func_80262ABC_S1_U5F00;
struct func_80262ABC_S1 {
    char pad0[0x5F00];
    func_80262ABC_S1_U5F00 unk5F00;
    char pad5F00[0x5F14 - 0x5F00 - sizeof(func_80262ABC_S1_U5F00)];
    char unk5F14;
    char pad5F14[0x5F24 - 0x5F14 - sizeof(char)];
    s32 unk5F24;
};

static inline Effect *take_effect(void *scene, s32 *ref) {
    Effect *effect;

    if (D_8013B290 == 0 && (unsigned int)((func_80262ABC_S1 *)(scene))->unk5F24 >= 3) {
        return 0;
    }
    effect = ((func_80262ABC_S1 *)(scene))->unk5F00.v0;
    if (effect != 0) {
        func_80255E78(&((func_80262ABC_S1 *)(scene))->unk5F00.v1, effect);
        func_80255C58(&((func_80262ABC_S1 *)(scene))->unk5F14, effect);
        effect->ref = ref;
        if (ref != 0) {
            *ref += 1;
        }
    }
    return effect;
}

static inline Effect *spawn_effect(void *scene, s32 id, s32 variant, s32 count, s32 owner, Vec3f position,
                                   f32 scale, Vec3f direction, Vec3f color, s32 *ref) {
    Effect *effect;

    if (D_800D29B4 == 0) {
        return 0;
    }
    if (count == 0) {
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

Effect *func_80262ABC(void *scene, EffectDesc *desc) {
    return spawn_effect(scene, desc->id, desc->variant, desc->count, desc->owner, desc->position, desc->scale,
                        desc->direction, desc->color, 0);
}
