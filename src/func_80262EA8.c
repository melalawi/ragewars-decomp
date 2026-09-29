/* Culls a scene's active effects against the view box: effects whose bounds overlap the box ending at
 * D_801031F8 + 4 are passed to func_8028C910 and, when idle, drop their counted reference; the others are
 * reset, release their reference, and are unlinked from the active list (func_80255E78) and returned to
 * the free list (func_80255CB4). */
#include "basetypes.h"

typedef struct Effect {
    char pad0[0xE8];
    f32 min[3];
    f32 max[3];
    char pad100[0];
    s32 flags;
    char pad104[0x70];
    s32 busy;
    char pad178[0x2EC - 0x178];
    struct Effect *next;
    s32 *ref;
} Effect;

extern f32 D_801031F8;
extern void func_8028C910(s32, Effect *);
extern void func_80255E78(void *, Effect *);
extern void func_80255CB4(void *, Effect *);

static inline s32 overlaps(Effect *effect, f32 *max) {
    if (max[0] > effect->min[0] && max[-3] < effect->max[0] && max[2] > effect->min[2] &&
        max[-1] < effect->max[2] && max[1] > effect->min[1] && max[-2] < effect->max[1]) {
        return 1;
    }
    return 0;
}

typedef struct func_80262EA8_S1 func_80262EA8_S1;
typedef struct func_80262EA8_S2 func_80262EA8_S2;
typedef union func_80262EA8_S1_U5F14 { Effect* v0; char v1; } func_80262EA8_S1_U5F14;
struct func_80262EA8_S1 {
    char pad0[0x5F00];
    char unk5F00;
    char pad5F00[0x5F14 - 0x5F00 - sizeof(char)];
    func_80262EA8_S1_U5F14 unk5F14;
};
struct func_80262EA8_S2 {
    char pad0[0x4];
    f32 unk4;
};

void func_80262EA8(void *scene, s32 arg1) {
    Effect *effect;
    Effect *next;
    f32 *max;

    effect = ((func_80262EA8_S1 *)(scene))->unk5F14.v0;
    if (effect == 0) {
        return;
    }
    do {
        max = &((func_80262EA8_S2 *)(&D_801031F8))->unk4;
    next_effect:
        next = effect->next;
        if (overlaps(effect, max)) {
            func_8028C910(arg1, effect);
            if (effect->ref != 0 && effect->busy == 0) {
                *effect->ref -= 1;
                effect->ref = 0;
            }
        } else {
            effect->busy = 0;
            effect->flags &= ~0x200;
            if (effect->ref != 0) {
                *effect->ref -= 1;
            }
            func_80255E78(&((func_80262EA8_S1 *)(scene))->unk5F14.v1, effect);
            func_80255CB4(&((func_80262EA8_S1 *)(scene))->unk5F00, effect);
        }
        effect = next;
    } while (0);
    if (effect != 0) {
        goto next_effect;
    }
}
