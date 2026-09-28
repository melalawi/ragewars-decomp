#include "basetypes.h"

typedef struct {
    char pad00[0xC];
    s16 *definition;
    s16 mask;
    char pad12[0xA];
    s32 angle0;
    s32 angle1;
    char pad24[0x1E4];
    s32 timer;
    s32 velocity;
    char pad210[4];
    f32 scale;
    f32 offset0;
    f32 offset1;
    f32 offset2;
} Effect;

extern void func_80296DDC(s32 *arg0, s32 arg1);

void func_8023B684(Effect *effect, s16 *definition, s16 mask, f32 scale,
                   f32 offset0, f32 offset1, f32 offset2) {
    effect->definition = definition;
    effect->mask = mask;
    func_80296DDC((s32 *)((char *)effect + 0x14), *definition);
    effect->angle0 = 0;
    effect->angle1 = 0;
    effect->timer = 0;
    effect->velocity = 0;
    effect->scale = scale;
    effect->offset0 = offset0;
    effect->offset1 = offset1;
    effect->offset2 = offset2;
}
