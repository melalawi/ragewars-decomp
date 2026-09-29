#include "basetypes.h"

typedef struct {
    s32 handle;
    s32 ambient;
    s32 cue0;
    s32 cue1;
    char pad10[4];
    s32 unk14;
    s32 state;
} HudCue;

extern HudCue *D_800E58A0;
extern u8 D_801462E0[2];

extern HudCue *func_80252FFC(s32 size);
extern s32 func_8041A300(s32 a0, s32 a1);
extern s32 func_8041A600(s32 a0, s32 a1, s32 a2);
extern void func_8041A76C(s32 cue, s32 volume);
extern void func_8041B190(s32 id);
extern s32 func_80419ED4(s32 a0, s32 a1);

/* Allocates the HUD-cue object D_800E58A0, opens its handle for 0x6C/0x6D, starts its two timed cues at the volumes in D_801462E0 and its ambient loop, then arms state 3; returns 0. */
s32 func_804390F0(void) {
    s32 cue;

    D_800E58A0 = func_80252FFC(0x1C);
    D_800E58A0->handle = func_8041A300(0x6C, 0x6D);
    cue = func_8041A600(0x6F, 0x70, 0xFF);
    D_800E58A0->cue0 = cue;
    func_8041A76C(cue, D_801462E0[0]);
    cue = func_8041A600(0x71, 0x72, 0xFF);
    D_800E58A0->cue1 = cue;
    func_8041A76C(cue, D_801462E0[1]);
    func_8041B190(0x73);
    cue = func_80419ED4(0x6E, 0x6E);
    D_800E58A0->state = 3;
    D_800E58A0->ambient = cue;
    D_800E58A0->unk14 = -1;
    return 0;
}
