#include "span_1000/code_8025A3EC.h"
#include "span_1000/code_8025A3EC.h"
#include "common/unused.h"
#include "types.h"
#include "common/types_06e4f7ef1f9e.h"
#include "packed_float.h"

/* Updates a voice pan from its sweep, position or centered fallback and applies it to the owner sound. */

extern s32 func_80258D2C_de(Owner_func_8025A844_de *);
extern s16 func_80259B10_de(void *, void *);

extern void func_802B2F00_de(void *, s16);
extern void func_802B2E30_de(void *, s32);

static inline void apply_pan(Voice_func_8025A844_de *voice, u8 pan) {
    Owner_func_8025A844_de *owner = voice->owner;
    char *sound = owner->sound;

    func_802B2F00_de(sound, owner->samples[voice->index]);
    func_802B2E30_de(sound, pan);
}

void func_8025A844_de(Voice_func_8025A844_de *voice) {
    s32 rising;
    Params_func_8025A844_de *params;

    params = &voice->params;
    if (func_80258D2C_de(voice->owner) == 0) {
        apply_pan(voice, 0x40);
        return;
    }
    if (voice->sweeping != 0) {
        if (voice->delay > 0) {
            voice->delay--;
        } else {
            rising = 0;
            if (voice->step < 0.0f) {
                rising = 1;
            }
            if (rising ? voice->value < RW_BITS_TO_FLOAT(voice->target) : RW_BITS_TO_FLOAT(voice->target) < voice->value) {
                voice->value -= voice->step;
                if (rising) {
                    if (!(RW_BITS_TO_FLOAT(voice->target) < voice->value)) goto clamp_done;
                } else {
                    if (!(voice->value < RW_BITS_TO_FLOAT(voice->target))) goto clamp_done;
                }
                voice->value = RW_BITS_TO_FLOAT(voice->target);
clamp_done:
                ;
            }
        }
        params->pan = voice->value;
        goto apply;
    }
    if ((voice->flags & 0x400) && voice->fixed == 0) {
        params->pan = func_80259B10_de(voice->position, voice->owner->listener);
    apply:
        apply_pan(voice, params->pan);
        return;
    }
    params->pan = 0x40;
}

/* Fades emitter 0x8AC with the listener's distance: optionally resets its level, stores the squared
 * distance to the listener, lowers the level by a step while the distance grows and raises it while it
 * shrinks (clamped to the D_800C9048 range, remembering the distance), and otherwise eases the level one
 * step toward the rest level D_800C9044. */
void func_8025AA2C_de(Emitter *emitter) {
    char *listener;
    f32 dx;
    f32 dy;
    f32 dz;
    f32 distance;
    f32 level;
    f32 current;

    if (emitter->id != 0x8AC) {
        return;
    }
    if (emitter->reset != 0) {
        emitter->level = D_800C3F50_de;
    }
    listener = ((func_8025AA4C_S1 *)(emitter->scene))->unk2B98;
    dx = emitter->x - ((func_8025AA4C_S2 *)(listener))->unk128;
    dy = emitter->y - ((func_8025AA4C_S2 *)(listener))->unk12C;
    dz = emitter->z - ((func_8025AA4C_S2 *)(listener))->unk130;
    distance = dx * dx + dy * dy + dz * dz;
    emitter->distance = distance;
    if (emitter->lastDistance < distance) {
        emitter->level -= (0.0035000001080334187f);
    } else if (distance < emitter->lastDistance) {
        emitter->level += (0.0035000001080334187f);
    } else {
        current = emitter->level;
        if (D_800C3F54_de < current) {
            level = current - (0.0035000001080334187f);
            if (level < D_800C3F54_de) {
                level = D_800C3F54_de;
            }
            emitter->level = level;
        } else if (current < D_800C3F54_de) {
            level = current + (0.0035000001080334187f);
            if (D_800C3F54_de < level) {
                level = D_800C3F54_de;
            }
            emitter->level = level;
        }
        return;
    }
    level = emitter->level;
    if (D_800C3F58_de < level) {
        emitter->level = D_800C3F58_de;
    } else if (level < ((func_802077F4_S2 *)(&D_800C3F58_de))->unk4) {
        emitter->level = ((func_802077F4_S2 *)(&D_800C3F58_de))->unk4;
    }
    emitter->lastDistance = emitter->distance;
}
