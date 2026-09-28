/* Settles a player's weapon sway and applies its walking bob unless the player is recoiling at 0x11D8:
   eases the kick angles at 0x72C and 0x728 and the three sway angles at 0x730 to 0x738 back to rest,
   caps the bob speed at 0x75C and bob strength at 0x758 and decays both, clearing them once the
   strength falls below 0.06, then advances the bob phase from the stride at 0x658 and eases the
   weapon height at 0x740 (from the model's height at 0xF4 or a default) and its side and forward
   offsets at 0x73C and 0x744 along the camera's heading. */
#include "basetypes.h"

typedef struct {
    char pad0[0xF4];
    f32 height;
} Model;

typedef struct {
    char pad0[0x18];
    Model *model;
    char pad1C[0x658 - 0x1C];
    f32 stride;
    char pad65C[0x728 - 0x65C];
    f32 kickPitch;
    f32 kickRoll;
    f32 sway[3];
    f32 side;
    f32 height;
    f32 forward;
    char pad748[0x758 - 0x748];
    f32 bobStrength;
    f32 bobSpeed;
    char pad760[0x11D8 - 0x760];
    f32 recoil;
} Player;

typedef struct {
    char pad0[0x6C];
    f32 heading;
} Camera;

extern void func_802748E0(f32 *, f32, f32);
extern f32 func_80274810(f32, f32);
extern f32 func_802BC200(f32);
extern f32 func_802BB630(f32);

void func_80223E10(Player *player, Camera *camera) {
    f32 step;
    f32 phase;
    f32 height;
    f32 rate;
    f32 amount;

    if (!(player->recoil > 0.0f)) {
        func_802748E0(&player->kickRoll, 0.0f, 0.25f);
        func_802748E0(&player->kickPitch, 0.0f, 0.5f);
        step = 0.08726647496f;
        player->sway[0] = func_80274810(player->sway[0], step);
        player->sway[1] = func_80274810(player->sway[1], step);
        player->sway[2] = func_80274810(player->sway[2], step);
        if (21.0f < player->bobSpeed) {
            player->bobSpeed = 21.0f;
        }
        if (0.1f < player->bobStrength) {
            player->bobStrength = 0.1f;
        }
        player->bobSpeed = func_80274810(player->bobSpeed, 0.11666667f);
        player->bobStrength = func_80274810(player->bobStrength, 0.00055555557f);
        if (player->bobStrength < 0.06f) {
            player->bobSpeed = player->bobStrength = 0.0f;
        }
        phase = player->stride * player->bobSpeed * 0.017453294f;
        if (player->model != 0) {
            height = player->model->height * 0.9f;
        } else {
            height = 82.94399261f;
        }
        rate = 0.5f;
        func_802748E0(&player->height, height + player->bobStrength * (func_802BC200(phase) * 10.24f), rate);
        amount = player->bobStrength * (func_802BB630(phase) * 8.192f);
        func_802748E0(&player->side, -func_802BC200(camera->heading + 3.1415927f) * amount, rate);
        func_802748E0(&player->forward, -func_802BB630(camera->heading + 3.1415927f) * amount, rate);
    }
}
