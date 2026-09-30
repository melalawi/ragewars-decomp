/* Runs a player's standing and walking state for its body: settles the weapon sway through
   func_80223E10, turns the view through func_802231B0 with the crouching tuning D_800CE7FC while the
   crouch at 0x718 is past 5.12 or the standing tuning D_800CE7E4 otherwise, and unless a jump releases
   the player into mode 5 it hands strafing at 0x6A4 or lifting at 0x6A8 (outside zoom mode 2) to mode
   3; then, unless an unfinished pickup, reload or wave animation is playing, it picks the animation at
   0x86C: for the idle character D_800CE47C the fidget animations 1 and 2 alternate after 12 and 21 time
   units at 0x104, and otherwise the turning animations follow the heading change this frame (0xA28
   while the body is falling, with a separate set for the character D_800CED30). */
#include "basetypes.h"
#include "../splat/types/shared/player.h"
typedef SharedPlayer Player;

typedef struct {
    char pad0[0x14];
    s32 flags;
} Surface;

typedef struct Body {
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
    if (player->views5E8.view7E8_106.zoomed == 0 && !(11.25f < player->views5E8.view6E4_62.depth) && !(body->flags & 0xC0000)
        && (body->surface->flags & 2) && (player->views5E8.view6B0_47.input & 0x10) && player->views5E8.view11D8_149.stun <= 0.0f) {
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
    crouching = 5.12f < player->views5E8.view718_70.crouch;
    if (crouching) {
        func_802231B0(player, body, &D_800CE7FC);
    } else {
        func_802231B0(player, body, &D_800CE7E4);
    }
    heading = body->heading - heading;
    if (try_jump(player, body)) {
        return;
    }
    if (player->views5E8.view6A4_42.strafe != 0.0f || (player->views5E8.view7E8_106.zoomed != 2 && player->views5E8.view6A8_44.lift != 0.0f)) {
        func_802227D0(player, body, 3);
    }
    animate = 1;
    if ((player->views5E8.view86C_127.animation == 0x1130 || player->views5E8.view86C_127.animation == 0x1135) && player->views1C.view10E_13.idle == 0) {
        animate = 0;
    }
    if ((player->views5E8.view86C_127.animation == 0x5E56 || player->views5E8.view86C_127.animation == 0x5E5E) && player->views1C.view10E_13.idle == 0) {
        animate = 0;
    }
    if ((player->views5E8.view86C_127.animation == 0xFA0 || player->views5E8.view86C_127.animation == 0x1004) && player->views1C.view10E_13.idle == 0) {
        animate = 0;
    }
    if (animate) {
        if (player->views1C.viewE4_7.kind == D_800CE47C) {
            if (player->views5E8.view86C_127.animation == 1 && 12.0f <= player->views1C.view104_11.idleTime) {
                player->views5E8.view86C_127.animation = 2;
            } else if (player->views5E8.view86C_127.animation == 2 && 21.0f <= player->views1C.view104_11.idleTime) {
                player->views5E8.view86C_127.animation = 1;
            } else if ((u32) (player->views5E8.view86C_127.animation - 1) >= 2) {
                player->views5E8.view86C_127.animation = 1;
            }
        } else if (player->views13B4.view13B4_3.character == &D_800CED30) {
            if (body->flags & 0xC0000) {
                player->views5E8.view86C_127.animation = 0xA28;
            } else if (0.017453294f < heading) {
                player->views5E8.view86C_127.animation = 0x5E26;
            } else if (heading < -0.017453294f) {
                player->views5E8.view86C_127.animation = 0x5E25;
            } else {
                player->views5E8.view86C_127.animation = 0x5E24;
            }
        } else {
            if (body->flags & 0xC0000) {
                player->views5E8.view86C_127.animation = 0xA28;
            } else if (0.017453294f < heading) {
                player->views5E8.view86C_127.animation = 0xB5E;
            } else if (heading < -0.017453294f) {
                player->views5E8.view86C_127.animation = 0xB54;
            } else {
                player->views5E8.view86C_127.animation = 1;
            }
        }
    }
}
