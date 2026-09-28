/* Updates a voice pan from its sweep, position or centered fallback and applies it to the owner sound. */
#include "basetypes.h"

typedef struct {
    char pad0[0x84];
    char sound[0x58];
    s16 samples[20];
    char pad2[0x2B98 - 0xDC - 40];
    void *listener;
} Owner;

typedef struct {
    char pad0[0x18];
    s16 pan;
    char pad1A[0x1A];
} Params;

typedef struct {
    s32 index;
    char pad4[0xC];
    Params params;
    char position[0x44];
    s32 sweeping;
    char pad8C[4];
    u16 target;
    char pad92[2];
    s16 delay;
    char pad96[2];
    f32 value;
    f32 step;
    char padA0[4];
    s32 flags;
    char padA8[8];
    Owner *owner;
    char padB4[0xC];
    s32 fixed;
} Voice;

extern s32 func_80258D4C(Owner *);
extern s16 func_80259B30(void *, void *);
extern f32 func_802B2350(s32);
extern void func_802B7FD0(void *, s16);
extern void func_802B7F00(void *, s32);

static inline void apply_pan(Voice *voice, u8 pan) {
    Owner *owner = voice->owner;
    char *sound = owner->sound;

    func_802B7FD0(sound, owner->samples[voice->index]);
    func_802B7F00(sound, pan);
}

void func_8025A864(Voice *voice) {
    s32 rising;
    Params *params;

    params = &voice->params;
    if (func_80258D4C(voice->owner) == 0) {
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
            if (rising ? voice->value < func_802B2350(voice->target) : func_802B2350(voice->target) < voice->value) {
                voice->value -= voice->step;
                if (rising) {
                    if (!(func_802B2350(voice->target) < voice->value)) goto clamp_done;
                } else {
                    if (!(voice->value < func_802B2350(voice->target))) goto clamp_done;
                }
                voice->value = func_802B2350(voice->target);
clamp_done:
                ;
            }
        }
        params->pan = voice->value;
        goto apply;
    }
    if ((voice->flags & 0x400) && voice->fixed == 0) {
        params->pan = func_80259B30(voice->position, voice->owner->listener);
    apply:
        apply_pan(voice, params->pan);
        return;
    }
    params->pan = 0x40;
}
