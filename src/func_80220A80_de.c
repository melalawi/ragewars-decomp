#include "common/types.h"
#include "span_1000/code_80219480.h"
#include "span_C76B0/data.h"
#include "types.h"
/* Aims a player's view camera and updates the player: with a view at 0x5DC, camera mode 1 at 0x5D0
   looks from the player's eye (the body position plus the eye offset at 0x73C, raised at least 40.96)
   along the body heading with the player's angles and sway and the aim zoom at 0x7EC, and mode 2 orbits the player at the angle
   D_800C9FA0_de and distance D_800CAB88_eu, which input bits 0x200 and 0x100 turn and 0x800 and 0x400 pull
   in and push out; the camera is set through func_80238F24_de and the view refreshed through
   func_80234FEC_de before the player is updated through func_8021D774_de. */
#define AT_LEAST(value, low) ((value) < (low) ? (low) : (value))












extern void func_80238F24_de(void *, s32, f32, f32, f32, f32, f32, f32, f32, f32, Shared_Quad, s32, f32, f32);
extern void func_80234FEC_de(void *);
extern void func_8021D774_de(Player_func_80220A80_de *);
extern f32 func_802B7130_de(f32);
extern f32 func_802B6560_de(f32);

void func_80220A80_de(Player_func_80220A80_de *player, Body_func_80220A80_de *body) {
    void *view;
    f32 angle;
    f32 x;

    view = player->view;
    if (view != 0) {
        if (player->cameraMode == 1) {
            func_80238F24_de(view, 0, body->heading, player->angles[0] + player->sway[0] - player->pitchBase,
                          player->angles[1] + player->sway[1], player->angles[2] + player->sway[2],
                          body->x + player->eye[0], body->y, body->z + player->eye[2],
                          AT_LEAST(player->eye[1] + player->eyeOffset - player->crouch - player->duck, 40.96f), body->rotation, body->room, player->zoom,
                          3.0f);
        } else if (player->cameraMode == 2) {
            if (player->input & 0x200) {
                D_800C9FA0_de += 0.06981318f;
            } else if (player->input & 0x100) {
                D_800C9FA0_de -= 0.06981318f;
            } else if (player->input & 0x800) {
                D_800CAB88_eu -= 4.096f;
            } else if (player->input & 0x400) {
                D_800CAB88_eu += 4.096f;
            }
            angle = body->heading + D_800C9FA0_de;
            x = body->x + D_800CAB88_eu * func_802B7130_de(angle);
            func_80238F24_de(view, 1, angle, 0.0f, 0.0f, 0.0f, x, body->y + 81.92f,
                          body->z + D_800CAB88_eu * func_802B6560_de(angle), 0.0f, body->rotation, body->room,
                          0.0f, 3.0f);
        }
        func_80234FEC_de(view);
    }
    func_8021D774_de(player);
}
