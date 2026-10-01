#include "unbake_gbi.h"
/* Draws an actor's player model with its status tint: sets the other-mode lighting command and render
   mode 2, gives the model the team colour byte (the match rule D_801468A0's colour at 0x73 when team
   colours apply to the player, else the model's own at 0xE), and by the player's tint mode at 0x1238
   sets a colour override (flag D_800D15E0, colour D_800D15E4) that fades with the tint time at 0x1230:
   mode 0 draws through func_8024A3A0 in yellow fading from full alpha and then draws the second pass
   through func_8026CBA4 with 255 less twice that alpha, mode 1 draws only the second pass in fading
   yellow starting at alpha 128, and mode 3 draws through func_8024A3A0 with an alpha rising with the
   time; the override is switched off afterwards. */
#define CLAMP0(x) ((x) < 0.0f ? 0.0f : (x))

#include "basetypes.h"

#include "basetypes.h"
#include "n64sdk.h"

typedef struct {
    f32 r;
    f32 g;
    f32 b;
    f32 a;
} Colour;

typedef struct {
    char pad0[0x8F];
    u8 teamColours;
} Controls;

typedef struct {
    char pad0[0x5D8];
    Controls *controls;
    char pad5DC[0x1230 - 0x5DC];
    f32 tintTime;
    char pad1234[0x1238 - 0x1234];
    s32 tintMode;
} Player;

typedef struct {
    char pad0[0xE];
    u8 colour;
} ModelDef;

typedef struct {
    char pad0[0xC];
    void *model;
} Draw;

typedef struct {
    char pad0;
    u8 colour;
    char pad2[0x18 - 0x2];
    ModelDef *def;
    char pad1C[0xB4 - 0x1C];
    s32 animation;
    char padB8[0x140 - 0xB8];
    char views[0x18];
    char pad158[0x1D8 - 0x158];
    Player *player;
} Actor;

typedef struct {
    char pad0[0x54];
    s32 teams;
    char pad58[0x73 - 0x58];
    u8 colour;
} Rules;

extern Gfx *D_80110634;
extern Rules D_801468A0[];
extern s32 D_800D15E0;
extern Colour D_800D15E4;
extern s32 D_800D297C;
extern void func_80268CE0(s32);
extern void func_8024A3A0(Actor *, Player *, s32, Draw *);
extern void func_8026CBA4(void *, Player *, s32, s32, char *, s32, s32);

void func_80228F94(Actor *actor, s32 arg1, Draw *draw) {
    Player *player;
    Gfx *gfx;

    if (actor != 0) {
        player = actor->player;
        if (player != 0) {
            gDPSetRenderMode(D_80110634++, 0xC4404B50, 0);
            func_80268CE0(2);
            if (D_801468A0->teams != 0 && player->controls->teamColours != 0) {
                actor->colour = D_801468A0->colour;
            } else {
                actor->colour = actor->def->colour;
            }
            if (player->tintMode == 0) {
                Colour *colour;

                D_800D15E0 = 1;
                colour = &D_800D15E4;
                colour->r = CLAMP0(255.0f - player->tintTime * 17.0f);
                colour->g = CLAMP0(255.0f - player->tintTime * 17.0f);
                colour->b = 0.0f;
                colour->a = CLAMP0(255.0f - player->tintTime * 8.533334f);
                func_8024A3A0(actor, player, arg1, draw);
                colour->a = CLAMP0(255.0f - colour->a * 2.0f);
                func_8026CBA4(draw->model, player, actor->animation, 1,
                              &actor->views[D_800D297C * 0x18], 0, -1);
            } else if (player->tintMode == 1) {
                Colour *colour;

                D_800D15E0 = 1;
                colour = &D_800D15E4;
                colour->r = CLAMP0(255.0f - player->tintTime * 17.0f);
                colour->g = CLAMP0(255.0f - player->tintTime * 17.0f);
                colour->b = 0.0f;
                colour->a = CLAMP0(128.0f - player->tintTime * 8.533334f);
                func_8026CBA4(draw->model, player, actor->animation, 1,
                              &actor->views[D_800D297C * 0x18], 0, -1);
            } else if (player->tintMode == 3) {
                D_800D15E0 = 1;
                D_800D15E4.a = CLAMP0(player->tintTime * 0.425f);
                func_8024A3A0(actor, player, arg1, draw);
            }
            D_800D15E0 = 0;
        }
    }
}
