/* Aims a player's view camera and updates the player: with a view at 0x5DC, camera mode 1 at 0x5D0
   looks from the player's eye (the body position plus the eye offset at 0x73C, raised at least 40.96)
   along the body heading with the player's angles and sway and the aim zoom at 0x7EC, and mode 2 orbits the player at the angle
   D_800CF1E4 and distance D_800CF1E8, which input bits 0x200 and 0x100 turn and 0x800 and 0x400 pull
   in and push out; the camera is set through func_80238F14 and the view refreshed through
   func_80234FDC before the player is updated through func_8021D750. */
#define AT_LEAST(value, low) ((value) < (low) ? (low) : (value))

#include "basetypes.h"

typedef struct {
    f32 x;
    f32 y;
    f32 z;
} Vec3f;

typedef struct {
    s32 w[4];
} Quad;

typedef struct {
    char pad0[8];
    f32 x;
    f32 y;
    f32 z;
    s32 room;
    char pad18[0x5C - 0x18];
    Quad rotation;
    f32 heading;
} Body;

typedef struct {
    char pad0[0x5D0];
    s32 cameraMode;
    char pad5D4[0x5DC - 0x5D4];
    void *view;
    char pad5E0[0x6AC - 0x5E0];
    s32 input;
    char pad6B0[0x708 - 0x6B0];
    f32 pitchBase;
    char pad70C[0x718 - 0x70C];
    f32 crouch;
    char pad71C[0x720 - 0x71C];
    f32 duck;
    f32 angles[3];
    f32 sway[3];
    f32 eye[3];
    char pad748[0x780 - 0x748];
    f32 eyeOffset;
    char pad784[0x7EC - 0x784];
    f32 zoom;
} Player;

extern f32 D_800CF1E4;
extern f32 D_800CF1E8;
extern void func_80238F14(void *, s32, f32, f32, f32, f32, f32, f32, f32, f32, Quad, s32, f32, f32);
extern void func_80234FDC(void *);
extern void func_8021D750(Player *);
extern f32 func_802BC200(f32);
extern f32 func_802BB630(f32);

void func_80220A5C(Player *player, Body *body) {
    void *view;
    f32 angle;
    f32 x;

    view = player->view;
    if (view != 0) {
        if (player->cameraMode == 1) {
            func_80238F14(view, 0, body->heading, player->angles[0] + player->sway[0] - player->pitchBase,
                          player->angles[1] + player->sway[1], player->angles[2] + player->sway[2],
                          body->x + player->eye[0], body->y, body->z + player->eye[2],
                          AT_LEAST(player->eye[1] + player->eyeOffset - player->crouch - player->duck, 40.96f), body->rotation, body->room, player->zoom,
                          3.0f);
        } else if (player->cameraMode == 2) {
            if (player->input & 0x200) {
                D_800CF1E4 += 0.06981318f;
            } else if (player->input & 0x100) {
                D_800CF1E4 -= 0.06981318f;
            } else if (player->input & 0x800) {
                D_800CF1E8 -= 4.096f;
            } else if (player->input & 0x400) {
                D_800CF1E8 += 4.096f;
            }
            angle = body->heading + D_800CF1E4;
            x = body->x + D_800CF1E8 * func_802BC200(angle);
            func_80238F14(view, 1, angle, 0.0f, 0.0f, 0.0f, x, body->y + 81.92f,
                          body->z + D_800CF1E8 * func_802BB630(angle), 0.0f, body->rotation, body->room,
                          0.0f, 3.0f);
        }
        func_80234FDC(view);
    }
    func_8021D750(player);
}
