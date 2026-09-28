#include "basetypes.h"

/* Runs the sound options screen D_800E58A0 each frame: when its menu reports 4 it calls
   func_8029A73C and leaves through func_80299368 with the stored target or func_8029A8A8 when
   that is -1; otherwise it copies the effects slider into option byte D_801462E1, playing sound
   0x460 when it changed, and the music slider into D_801462E0, stopping the music through
   func_8025E2F4(0) below 5 or starting track 0x34 when func_8025E2E4 reports none playing.
   Returns zero. */

struct State {
    void *menu;
    char pad4[0x8 - 0x4];
    void *music;
    void *effects;
    char pad10[0x14 - 0x10];
    s32 target;
};

extern struct State *D_800E58A0;
extern u8 D_801462E1;
extern s32 func_8041A4F0(void *);
extern s32 func_8041A760(void *);
extern void func_8029A73C();
extern void func_80299368(s32);
extern void func_8029A8A8();
extern void func_8025DF54(s32);
extern s32 func_8025E2E4(s32);
extern void func_8025E2F4(s32);

s32 func_804391F8(void) {
    u8 *options;
    s32 value;
    s32 track;

    switch (func_8041A4F0(D_800E58A0->menu)) {
    case 3:
        break;
    case 4:
        func_8029A73C();
        if (D_800E58A0->target != -1) {
            func_80299368(D_800E58A0->target);
            return 0;
        }
        func_8029A8A8();
        return 0;
    }
    value = func_8041A760(D_800E58A0->effects);
    options = &D_801462E1;
    if (value != options[0]) {
        options[0] = value;
        func_8025DF54(0x460);
    }
    value = func_8041A760(D_800E58A0->music);
    if (value != options[-1]) {
        options[-1] = value;
        track = 0;
        if ((u8)value >= 5) {
            if (func_8025E2E4(0) != 0) {
                return 0;
            }
            track = 0x34;
        }
        func_8025E2F4(track);
    }
    return 0;
}
