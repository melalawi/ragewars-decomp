/* Spawns the effect of an item variant: resolves the variant's effect id, loads its descriptor and first record, takes the effect count from the record's model and turns the colour vector by the record's angle, then spawns the effect through the inline spawner of func_80262ABC with the given owner, position, scale, direction and counted reference, releasing both resources. Adapted from func_80262ABC with the descriptor loading added. */
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
extern struct Pool {
    char pad0[0x24];
    s32 count;
    char pad28[0x54 - 0x28];
    s32 table;
} D_8011FE88;
extern char D_800C9350;
extern char D_800C9364;
extern s32 func_8028FE08(s32, s32, s32);
extern void **func_802518DC(s32, s32, s32, s32, s32, s32, s32, void *, s32);
extern s32 func_8028FE1C(void *, s32, s32, s32 *);
extern void *func_8028FD94(void *, s32);
extern s32 func_8028CF48(void *, s32);
extern f32 func_802B2350(s32);
extern void func_8027200C(Vec3f *, Vec3f *, f32);
extern void func_802536F4(s32, void **);
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

typedef struct Record {
    char pad0[0x1C];
    u16 count;
    u16 angle;
} Record;

Effect *func_802627C0(void *scene, s32 variant, s32 owner, Vec3f position, f32 scale, Vec3f direction,
                      Vec3f color, s32 *ref) {
    Effect *effect;
    s32 id;
    s32 key;
    void **descriptor;
    void **resource;
    Record *record;
    s32 count;
    s32 size;
    s32 clip;

    effect = 0;
    id = func_8028B1F8(&D_8011FE88, variant);
    if (id != -1) {
        key = func_8028FE08(D_8011FE88.table, D_8011FE88.count, id);
        descriptor = func_802518DC(0, key, key, 0x18, 0, 0, 0, &D_800C9350, 1);
        if (descriptor != 0) {
            clip = func_8028FE1C(*descriptor, key, 0, &size);
            resource = func_802518DC(0, clip, clip, size, 0, 0, 0, &D_800C9364, 1);
            if (resource != 0) {
                record = func_8028FD94(*resource, 0);
                count = func_8028CF48(&D_8011FE88, record->count);
                func_8027200C(&color, &color, func_802B2350(record->angle));
                effect = spawn_effect(scene, id, variant, count, owner, position, scale, direction, color, ref);
                func_802536F4(0, resource);
            }
            func_802536F4(0, descriptor);
        }
    }
    return effect;
}
