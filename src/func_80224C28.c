/* Runs a player's wading state for its body: sets the movement mode at 0x650 to 9 when still and 10
   when moving, settles the roll kick at 0x72C, turns the view and moves the body through func_802231B0
   and func_802233CC with tunings D_800CE7E4 and D_800CE82C, and leaves the state (clearing the strokes
   at 0x938, release mode 3) once the body loses surface flag 0x2000; otherwise looking down past 40
   degrees while lifting at 0x6A8 lowers the eye height at 0x6EC and sets flag 0x100000 of D_80104418
   (cleared otherwise), the weapon sways on three sine waves of the state time at 0x658, a jump input
   0x10 in shallow enough ground that allows it releases the player into mode 5, and otherwise the
   animation at 0x86C follows the vertical speed and a moving player plays the tuning's step sound
   whenever the step timer at 0x11C4 passes 11.25. Adapted from func_80224F38 with the jump check as
   an inline function and the D_80104418 flags read as an array. */
#include "basetypes.h"

typedef struct {
    char pad0[0x14];
    s32 flags;
} Surface;

typedef struct {
    char pad0[8];
    s32 x;
    s32 y;
    s32 z;
    char pad14[0x18 - 0x14];
    Surface *surface;
    char pad1C[0x20 - 0x1C];
    s32 stroke;
    char pad24[0x38 - 0x24];
    s32 flags;
} Body;

typedef struct {
    char pad0[0xE4];
    u16 kind;
    char padE6[0x10E - 0xE6];
    s8 idle;
    char pad10F[0x650 - 0x10F];
    s16 mode;
    char pad652[0x658 - 0x652];
    f32 swimTime;
    char pad65C[0x6A8 - 0x65C];
    f32 lift;
    char pad6AC[0x6B0 - 0x6AC];
    s32 input;
    char pad6B4[0x6C0 - 0x6B4];
    f32 climb;
    char pad6C4[0x6C8 - 0x6C4];
    f32 speed;
    char pad6CC[0x6E4 - 0x6CC];
    f32 depth;
    char pad6E8[0x6EC - 0x6E8];
    f32 height;
    char pad6F0[0x724 - 0x6F0];
    f32 pitch;
    char pad728[0x72C - 0x728];
    f32 kickRoll;
    f32 sway[3];
    char pad73C[0x7E8 - 0x73C];
    s32 zoomed;
    char pad7EC[0x86C - 0x7EC];
    s32 animation;
    char pad870[0x938 - 0x870];
    char strokes[0x11C4 - 0x938];
    f32 soundTime;
    char pad11C8[0x11D8 - 0x11C8];
    f32 stun;
} Player;

typedef struct {
    char pad0[0x22];
    s16 strokeSound;
} Tuning;

extern s32 D_800CE47C;
extern char D_800CE7E4;
extern Tuning D_800CE82C;
extern s32 D_80104418[];
extern f32 D_800D2988;
extern void func_802748E0(f32 *, f32, f32);
extern void func_802231B0(Player *, Body *, char *);
extern void func_802233CC(Player *, Body *, Tuning *);
extern f32 func_802BC200(f32);
extern void func_80218464(char *);
extern s32 func_8025DE74(s16, s32, s32, s32, s32, s32);
extern void func_802227D0(Player *, Body *, s32);

static inline s32 try_jump(Player *player, Body *body) {
    if (player->zoomed == 0 && !(11.25f < player->depth) && !(body->flags & 0xC0000)
        && (body->surface->flags & 2) && (player->input & 0x10) && player->stun <= 0.0f) {
        func_802227D0(player, body, 5);
        return 1;
    }
    return 0;
}

void func_80224C28(Player *player, Body *body) {
    s32 idle;

    if (player->speed == 0.0f) {
        player->mode = 9;
    } else {
        player->mode = 0xA;
    }
    func_802748E0(&player->kickRoll, 0.0f, 0.25f);
    func_802231B0(player, body, &D_800CE7E4);
    func_802233CC(player, body, &D_800CE82C);
    if (!(body->flags & 0x2000)) {
        func_80218464(player->strokes);
        func_802227D0(player, body, 3);
        return;
    }
    if (player->pitch * 57.295776f < -40.0f && player->lift > 0.0f) {
        player->height -= 10.24f;
        D_80104418[0] |= 0x100000;
    } else {
        D_80104418[0] &= ~0x100000;
    }
    player->sway[0] = func_802BC200(player->swimTime * 0.06981318f) * 0.043633237f;
    player->sway[1] = func_802BC200(player->swimTime * 0.08726647496f) * 0.043633237f;
    player->sway[2] = func_802BC200(player->swimTime * 0.10471976548f) * 0.043633237f;
    if (!try_jump(player, body)) {
        idle = 0;
        if (player->animation == 0x1144) {
            idle = player->idle == 0;
        }
        if (player->kind == D_800CE47C) {
            player->animation = 0x8A2;
        } else if (!idle) {
            if (1.024f <= player->climb) {
                player->animation = 0x8A2;
            } else if (player->climb <= -1.024f) {
                player->animation = 0x8A7;
            } else {
                player->animation = 0x14;
            }
        }
        player->soundTime += D_800D2988;
        if (5.12f < player->speed && 11.25f < player->soundTime) {
            player->soundTime = 0.0f;
            func_8025DE74(D_800CE82C.strokeSound, body->x, body->y, body->z, 0, -1);
        }
    }
}
