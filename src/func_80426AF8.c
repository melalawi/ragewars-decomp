/* Per-frame update of the results screen D_800E4690: delivers a pending pause event from
   D_80154020 (dimming the banner) or resumes, then runs the screen state: sliding its two panels in
   (1) or out (2, then leaving to screen 3 or 7), requesting the next match once (3), waiting on
   the prompt (4), closing the prompt and saving records (5), leaving to event 0xB (8) or opening
   the records view (9). While idle in state 3 it advances the clock by delta and pulses the
   prompt's alpha with a sine. Returns zero. */
#include "basetypes.h"

#define CLAMP(value, low, high) ((value) < (low) ? (low) : (value) > (high) ? (high) : (value))

struct Sprite {
    char pad0[0x10];
    u8 alpha;
    char pad11[0x14 - 0x11];
    s16 x;
};

struct Screen {
    char pad0[0x978];
    struct Sprite *left;
    char pad97C[2];
    u16 leftSpeed;
    struct Sprite *right;
    char pad984[2];
    u16 rightSpeed;
    s32 state;
    s32 timer;
    void *prompt;
    void *button;
    char pad998[0xA48 - 0x998];
    struct Sprite *pulse;
    char padA4C[4];
    struct Sprite *banner;
    s32 clock;
    s32 requested;
};

extern struct Screen *D_800E4690;
extern s32 D_80154020[];
extern u8 D_801462D5;

extern void func_8029A73C(void);
extern void func_80299368(s32);
extern void func_8025DF54(s32);
extern void func_8040E958(void *, s32);
extern void func_80419FD8(void *, s32);
extern void func_802A3358(void);
extern s32 func_80419FB8(void *);
extern void func_80419FA4(void *);
extern void func_80428388(void);
extern void func_804275B4(void);
extern void func_8042EB68(s32);
extern void func_804271E8(void);
extern f32 func_802BB630(f32);

s32 func_80426AF8(void *arg0, void *arg1, s32 delta) {
    s32 clock;

    if (D_80154020[1] == 1) {
        D_80154020[1] = 0;
        if (D_80154020[0] != -1) {
            D_800E4690->banner->alpha = 0x5A;
            func_8029A73C();
            func_80299368(D_80154020[0]);
            return 0;
        }
        D_800E4690->banner->alpha = 0xFF;
        D_800E4690->state = 9;
    }
    switch (D_800E4690->state) {
    case 1:
        D_800E4690->left->x += D_800E4690->leftSpeed;
        D_800E4690->right->x -= D_800E4690->rightSpeed;
        if (--D_800E4690->timer > 0) {
            break;
        }
        func_8025DF54(0xE79);
        func_8040E958(D_800E4690->button, 1);
        func_80419FD8(D_800E4690->prompt, 4);
        D_800E4690->state = 4;
        D_800E4690->timer = 4;
        break;
    case 2:
        D_800E4690->left->x -= D_800E4690->leftSpeed;
        D_800E4690->right->x += D_800E4690->rightSpeed;
        if (--D_800E4690->timer > 0) {
            break;
        }
        D_800E4690->state = 3;
        func_8029A73C();
        if (D_801462D5 == 4) {
            func_80299368(3);
        } else {
            func_80299368(7);
        }
        return 0;
    case 3:
        if (D_800E4690->requested == 0) {
            func_802A3358();
            D_800E4690->requested = 1;
        }
        break;
    case 4:
        D_800E4690->timer = CLAMP(D_800E4690->timer - 1, 0, D_800E4690->timer);
        if (D_800E4690->timer <= 0 && func_80419FB8(D_800E4690->prompt) != 0) {
            func_80419FA4(D_800E4690->prompt);
            D_800E4690->state = 3;
        }
        break;
    case 5:
        func_8025DF54(0xE78);
        func_8040E958(D_800E4690->button, 0);
        switch (D_801462D5) {
        case 1:
        case 3:
        case 4:
            func_80428388();
        }
        func_804275B4();
        D_800E4690->state = 2;
        D_800E4690->timer = 4;
        break;
    case 8:
        D_800E4690->state = 3;
        func_804275B4();
        func_8042EB68(0xB);
        return 0;
    case 9:
        D_800E4690->state = 3;
        func_804271E8();
        break;
    }
    if (D_800E4690->state == 3) {
        clock = D_800E4690->clock + delta;
        D_800E4690->clock = clock;
        if (D_80154020[0] == -1) {
            D_800E4690->pulse->alpha = (u32)(func_802BB630(clock * 0.005f) * 100.0f + 150.0f);
        }
    }
    return 0;
}
