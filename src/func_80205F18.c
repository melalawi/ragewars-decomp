#include "basetypes.h"

typedef struct { s32 flags; char pad4[4]; s16 duration; } ActionInfo;
typedef struct { char pad0[0x14]; ActionInfo info; } Descriptor;
typedef struct { char pad0[0x18]; Descriptor *desc; char pad1C[0xE4 - 0x1C]; u16 model; char padE6[0x100 - 0xE6]; s32 flags; } Actor;
typedef struct { char pad0[0x64]; f32 delay; char pad68[0x124 - 0x68]; s32 timer; s32 duration; } Action;
extern u8 D_801462E5[];
extern u8 D_801462E6;
extern f32 D_800C6BB8;
extern f32 D_800C6BBC;
extern f32 func_80274B00(f32 lo, f32 hi);
extern void func_80214178(Actor *actor, Action *action, s32 arg2);
/* Starts an eligible actor action with a random delay and descriptor duration, applies its flags and callback, then clears the pending flag when required. */
void func_80205F18(Actor *actor, Action *action) {
    ActionInfo *info = &actor->desc->info;
    if ((info->flags & 0x10) && (D_801462E5[0] == 0 || D_801462E5[1] != 1)) {
        actor->flags &= ~0x100;
        return;
    }
    action->delay = func_80274B00(D_800C6BB8, D_800C6BBC);
    action->timer = 0;
    action->duration = info->duration;
    if (actor->model == 0x644 || (info->flags & 8)) actor->flags &= ~0x2000;
    func_80214178(actor, action, 0);
    if (!(info->flags & 0x10) || D_801462E6 == 1) return;
    actor->flags &= ~0x100;
}
