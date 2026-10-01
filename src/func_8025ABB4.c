/* Ramps a voice pitch toward its target, interpolates the pitch curve and applies its scaled value to the context channel. */
#include "basetypes.h"

typedef struct Angles {
    u16 heading;
    u16 pitch;
    u16 target;
    s16 steps;
    s16 delay;
    s16 pad0A;
} Angles;

typedef struct Motion {
    char pad0[0x14];
    f32 heading;
    char pad18[0x24 - 0x18];
    f32 factor;
} Motion;

typedef struct Context {
    char pad0[0x84];
    char channels[0xDC - 0x84];
    s16 slots[16];
    char padFC[0x104 - 0xFC];
    s32 frame;
} Context;

typedef struct View {
    s32 slot;
    char pad4[0xC];
    Motion motion;
    char pad38[0x60 - 0x38];
    Angles angles;
    f32 pitch;
    f32 pitchStep;
    char pad74[0xA4 - 0x74];
    s32 flags;
    char padA8[0xB0 - 0xA8];
    Context *context;
    char padB4[4];
    f32 scale;
} View;

extern f32 D_800C9050;
extern f32 D_800D0B28;

extern void func_8025AA4C(View *);
extern f32 func_802B2350(s32);
extern void func_802B7FD0(char *, s32);
extern void func_802B7F50(char *, f32);

static inline char *selectChannel(Context *context, s32 slot) {
    func_802B7FD0(context->channels, context->slots[slot]);
    return context->channels;
}

static inline void apply(Context *context, s32 slot, f32 value, View *view) {
    char *channel = context->channels;

    func_802B7FD0(channel, context->slots[slot]);
    value *= view->motion.factor;
    value *= view->scale;
    func_802B7F50(channel, value);
}

void func_8025ABB4(View *view) {
    Motion *motion;
    Angles *angles;
    s32 refreshed;
    s32 falling;
    f32 position;
    s32 truncated;
    s16 index;
    s16 next;
    f32 base;
    f32 result;
    char *channel;
    Context *context;

    refreshed = 0;
    motion = &view->motion;
    angles = &view->angles;
    context = view->context;
    if ((view->flags & 0x400) && !(context->frame & 3)) {
        func_8025AA4C(view);
        refreshed = 1;
    }
    if ((view->flags & 0xA) == 0xA) {
        if (view->angles.delay > 0) {
            view->angles.delay--;
        } else {
            falling = 0;
            if (view->pitchStep < 0.0f) {
                falling = 1;
            }
            if (falling ? view->pitch < func_802B2350(angles->target) : func_802B2350(angles->target) < view->pitch) {
                view->pitch -= view->pitchStep;
                if (falling) {
                    if (!(func_802B2350(angles->target) < view->pitch)) goto clamp_done;
                } else {
                    if (!(view->pitch < func_802B2350(angles->target))) goto clamp_done;
                }
                view->pitch = func_802B2350(angles->target);
clamp_done:;

                position = (view->pitch + D_800C9050) * *(&D_800C9050 + 1);
                truncated = position;
                index = (s16)truncated;
                if (index != position) {
                    next = truncated + 1;
                    base = (&D_800D0B28 + 1)[index];
                    result = base + (position - index) * ((&D_800D0B28 + 1)[next] - base);
                } else {
                    result = (&D_800D0B28 + 1)[index];
                }
                motion->heading = result;
                channel = selectChannel(view->context, view->slot);
                func_802B7F50(channel, result * view->motion.factor * view->scale);
                return;
            }
        }
    }
    if (refreshed) {
        apply(view->context, view->slot, motion->heading, view);
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C3E90_4 = 6000.0f;
const float unbake_rodata_800C3E94_4 = 0.0166666675f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C9050_4 = 6000.0f;
const float unbake_rodata_800C9054_4 = 0.0166666675f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C4210_4 = 6000.0f;
const float unbake_rodata_800C4214_4 = 0.0166666675f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C4250_4 = 6000.0f;
const float unbake_rodata_800C4254_4 = 0.0166666675f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C3F60_4 = 6000.0f;
const float unbake_rodata_800C3F64_4 = 0.0166666675f;
#endif
