/* Runs a player's floating movement state for its body: sets the movement mode at 0x650 to 11 when
   still and 12 when moving (speed at 0x6C8), turns the view through func_802231B0 with tuning
   D_800CE874, sways the weapon on three sine waves of the state time at 0x658, moves the body through
   func_802238BC with tuning D_800CE850, and once the state time passes 2 without the body's flag
   0x1000 it ends the state: clears the strokes at 0x938 and the body's 0x20, plays sound 0x2DE, clears
   0x840 and hands the player to func_802227D0 (mode 2 when body flags 3 are set, else 10); it then
   picks the animation at 0x86C from the vertical speed at 0x6C0 (kept while idle animation 0x1144
   plays) and, while moving faster than 5.12, plays the tuning's stroke sound and sound 0x2E0 whenever
   the sound timer at 0x11C4 passes 45, restarting it at a random value below 15. */
#include "basetypes.h"

typedef struct {
    char pad0[8];
    s32 x;
    s32 y;
    s32 z;
    char pad14[0x20 - 0x14];
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
    char pad65C[0x6C0 - 0x65C];
    f32 climb;
    char pad6C4[0x6C8 - 0x6C4];
    f32 speed;
    char pad6CC[0x730 - 0x6CC];
    f32 sway[3];
    char pad73C[0x840 - 0x73C];
    s32 surfaced;
    char pad844[0x86C - 0x844];
    s32 animation;
    char pad870[0x938 - 0x870];
    char strokes[0x11C4 - 0x938];
    f32 soundTime;
} Player;

typedef struct {
    char pad0[0x22];
    s16 strokeSound;
} Tuning;

extern s32 D_800CE47C;
extern Tuning D_800CE850;
extern char D_800CE874;
extern f32 D_800D2988;
extern void func_802231B0(Player *, Body *, char *);
extern f32 func_802BC200(f32);
extern void func_802238BC(Player *, Body *, Tuning *);
extern void func_80218464(char *);
extern s32 func_8025DE74(s16, s32, s32, s32, s32, s32);
extern void func_802227D0(Player *, Body *, s32);
extern f32 func_802745D4(f32);

void func_80224F38(Player *player, Body *body) {
    s32 idle;

    if (player->speed == 0.0f) {
        player->mode = 0xB;
    } else {
        player->mode = 0xC;
    }
    func_802231B0(player, body, &D_800CE874);
    player->sway[0] = 2.0f * func_802BC200(player->swimTime * 0.06981318f) * 0.017453294f;
    player->sway[1] = 2.0f * func_802BC200(player->swimTime * 0.08726647496f) * 0.017453294f;
    player->sway[2] = 2.0f * func_802BC200(player->swimTime * 0.10471976548f) * 0.017453294f;
    func_802238BC(player, body, &D_800CE850);
    if (!(body->flags & 0x1000) && 2.0f < player->swimTime) {
        func_80218464(player->strokes);
        body->stroke = 0;
        func_8025DE74(0x2DE, body->x, body->y, body->z, 0, -1);
        player->surfaced = 0;
        if (body->flags & 3) {
            func_802227D0(player, body, 2);
        } else {
            func_802227D0(player, body, 0xA);
        }
    }
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
    if (5.12f < player->speed && 45.0f < player->soundTime) {
        player->soundTime = func_802745D4(15.0f);
        func_8025DE74(D_800CE850.strokeSound, body->x, body->y, body->z, 0, -1);
        func_8025DE74(0x2E0, body->x, body->y, body->z, 0, -1);
    }
}
