#include "common/types.h"
#include "span_1000/code_80228934.h"
#include "n64sdk.h"
#include "gbi.h"
#include "types.h"
#include "n64sdk.h"


/* Draws an actor's player model with its status tint: sets the other-mode lighting command and render
   mode 2, gives the model the team colour byte (the match rule D_801468A0's colour at 0x73 when team
   colours apply to the player, else the model's own at 0xE), and by the player's tint mode at 0x1238
   sets a colour override (flag D_800D15E0, colour D_800D15E4) that fades with the tint time at 0x1230:
   mode 0 draws through func_8024A3B0_de in yellow fading from full alpha and then draws the second pass
   through func_8026CBA4_de with 255 less twice that alpha, mode 1 draws only the second pass in fading
   yellow starting at alpha 128, and mode 3 draws through func_8024A3B0_de with an alpha rising with the
   time; the override is switched off afterwards. */
#define CLAMP0(x) ((x) < 0.0f ? 0.0f : (x))

















extern Gfx *D_8010C574;
extern Rules_func_80228FB8_de D_801427E0[];
extern s32 D_800CC390;
extern Vector4f D_800CC394_de;
extern s32 D_800CD72C;
extern void func_80268CE0_de(s32);
extern void func_8024A3B0_de(Actor_func_80228FB8_de *, Player_func_80228FB8_de *, s32, Draw *);
extern void func_8026CBA4_de(void *, Player_func_80228FB8_de *, s32, s32, char *, s32, s32);

void func_80228FB8_de(Actor_func_80228FB8_de *actor, s32 arg1, Draw *draw) {
    Player_func_80228FB8_de *player;
    Gfx *gfx;

    if (actor != 0) {
        player = actor->player;
        if (player != 0) {
            gDPSetRenderMode(D_8010C574++, 0xC4404B50, 0);
            func_80268CE0_de(2);
            if (D_801427E0->teams != 0 && player->controls->unk8F != 0) {
                actor->colour = D_801427E0->colour;
            } else {
                actor->colour = actor->def->colour;
            }
            if (player->tintMode == 0) {
                Vector4f *colour;

                D_800CC390 = 1;
                colour = &D_800CC394_de;
                colour->x = CLAMP0(255.0f - player->tintTime * 17.0f);
                colour->y = CLAMP0(255.0f - player->tintTime * 17.0f);
                colour->z = 0.0f;
                colour->w = CLAMP0(255.0f - player->tintTime * 8.533334f);
                func_8024A3B0_de(actor, player, arg1, draw);
                colour->w = CLAMP0(255.0f - colour->w * 2.0f);
                func_8026CBA4_de(draw->model, player, actor->animation, 1,
                              &actor->views[D_800CD72C * 0x18], 0, -1);
            } else if (player->tintMode == 1) {
                Vector4f *colour;

                D_800CC390 = 1;
                colour = &D_800CC394_de;
                colour->x = CLAMP0(255.0f - player->tintTime * 17.0f);
                colour->y = CLAMP0(255.0f - player->tintTime * 17.0f);
                colour->z = 0.0f;
                colour->w = CLAMP0(128.0f - player->tintTime * 8.533334f);
                func_8026CBA4_de(draw->model, player, actor->animation, 1,
                              &actor->views[D_800CD72C * 0x18], 0, -1);
            } else if (player->tintMode == 3) {
                D_800CC390 = 1;
                D_800CC394_de.w = CLAMP0(player->tintTime * 0.425f);
                func_8024A3B0_de(actor, player, arg1, draw);
            }
            D_800CC390 = 0;
        }
    }
}
