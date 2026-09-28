/* Runs a player's standing and walking state for its body: settles the weapon sway through
   func_80223E10, turns the view through func_802231B0 with the crouching tuning D_800CE7FC while the
   crouch at 0x718 is past 5.12 or the standing tuning D_800CE7E4 otherwise, and unless a jump releases
   the player into mode 5 it hands strafing at 0x6A4 or lifting at 0x6A8 (outside zoom mode 2) to mode
   3; then, unless an unfinished pickup, reload or wave animation is playing, it picks the animation at
   0x86C: for the idle character D_800CE47C the fidget animations 1 and 2 alternate after 12 and 21 time
   units at 0x104, and otherwise the turning animations follow the heading change this frame (0xA28
   while the body is falling, with a separate set for the character D_800CED30). */
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
    char pad3C[0x6C - 0x3C];
    f32 heading;
} Body;

typedef struct {
    char pad0[0xE4];
    u16 kind;
    char padE6[0x104 - 0xE6];
    f32 idleTime;
    char pad108[0x10E - 0x108];
    s8 idle;
    char pad10F[0x650 - 0x10F];
    s16 mode;
    char pad652[0x658 - 0x652];
    f32 swimTime;
    char pad65C[0x6A4 - 0x65C];
    f32 strafe;
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
    char pad6F0[0x718 - 0x6F0];
    f32 crouch;
    char pad71C[0x724 - 0x71C];
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
    char pad11DC[0x13B4 - 0x11DC];
    void *character;
} Player;

typedef struct {
    char pad0[0x22];
    s16 strokeSound;
} Tuning;

extern s32 D_800CE47C;
extern char D_800CE7E4;
extern char D_800CE7FC;
extern char D_800CED30;
extern void func_80223E10(Player *, Body *);
extern void func_802231B0(Player *, Body *, char *);
extern void func_802227D0(Player *, Body *, s32);

static inline s32 try_jump(Player *player, Body *body) {
    if (player->zoomed == 0 && !(11.25f < player->depth) && !(body->flags & 0xC0000)
        && (body->surface->flags & 2) && (player->input & 0x10) && player->stun <= 0.0f) {
        func_802227D0(player, body, 5);
        return 1;
    }
    return 0;
}

void func_802243E4(Player *player, Body *body) {
    f32 heading;
    s32 crouching;
    s32 animate;

    func_80223E10(player, body);
    heading = body->heading;
    crouching = 5.12f < player->crouch;
    if (crouching) {
        func_802231B0(player, body, &D_800CE7FC);
    } else {
        func_802231B0(player, body, &D_800CE7E4);
    }
    heading = body->heading - heading;
    if (try_jump(player, body)) {
        return;
    }
    if (player->strafe != 0.0f || (player->zoomed != 2 && player->lift != 0.0f)) {
        func_802227D0(player, body, 3);
    }
    animate = 1;
    if ((player->animation == 0x1130 || player->animation == 0x1135) && player->idle == 0) {
        animate = 0;
    }
    if ((player->animation == 0x5E56 || player->animation == 0x5E5E) && player->idle == 0) {
        animate = 0;
    }
    if ((player->animation == 0xFA0 || player->animation == 0x1004) && player->idle == 0) {
        animate = 0;
    }
    if (animate) {
        if (player->kind == D_800CE47C) {
            if (player->animation == 1 && 12.0f <= player->idleTime) {
                player->animation = 2;
            } else if (player->animation == 2 && 21.0f <= player->idleTime) {
                player->animation = 1;
            } else if ((u32) (player->animation - 1) >= 2) {
                player->animation = 1;
            }
        } else if (player->character == &D_800CED30) {
            if (body->flags & 0xC0000) {
                player->animation = 0xA28;
            } else if (0.017453294f < heading) {
                player->animation = 0x5E26;
            } else if (heading < -0.017453294f) {
                player->animation = 0x5E25;
            } else {
                player->animation = 0x5E24;
            }
        } else {
            if (body->flags & 0xC0000) {
                player->animation = 0xA28;
            } else if (0.017453294f < heading) {
                player->animation = 0xB5E;
            } else if (heading < -0.017453294f) {
                player->animation = 0xB54;
            } else {
                player->animation = 1;
            }
        }
    }
}
