/* Returns an actor's aiming orientation: a controlled actor turns a quarter turn about the vertical from its
 * weapon's orientation at 0x140, or from the player's own orientation from func_80226C3C when unarmed; an
 * actor of kind 4 composes a pitch from 0x294 with a yaw from its heading 0x6C and applies them to its body
 * orientation from func_80203848; any other actor turns its orientation at 0x5C by its heading. Quaternions
 * are composed through func_80274108, keeping the latest sine in D_80115DEC. */
#include "basetypes.h"

typedef struct {
    f32 x;
    f32 y;
    f32 z;
    f32 w;
} Quat;

extern f32 D_80115DEC;
extern f32 func_802BC200(f32);
extern f32 func_802BB630(f32);
extern void func_80274108(Quat *, Quat *, Quat *);
extern void func_80226C3C(void *, Quat *);
extern void func_80203848(Quat *, void *, void *);

Quat func_8024795C(char *actor) {
    Quat result;
    Quat pitch;
    Quat yaw;
    Quat both;
    Quat base;
    Quat own;
    char *player;
    char *weapon;
    f32 angle;
    f32 sine;

    if (*(s32 *)(actor + 0x100) & 0x300000) {
        player = *(char **)(actor + 0x1D8);
        weapon = *(char **)(player + 0x5DC);
        if (weapon != 0) {
            angle = 1.5707964f;
            D_80115DEC = func_802BC200(angle);
            yaw.x = 0.0f;
            yaw.y = D_80115DEC;
            yaw.z = 0.0f;
            yaw.w = func_802BB630(angle);
            func_80274108(&result, &yaw, (Quat *)(weapon + 0x140));
        } else {
            angle = 1.5707964f;
            func_80226C3C(player, &own);
            D_80115DEC = func_802BC200(angle);
            yaw.x = 0.0f;
            yaw.y = D_80115DEC;
            yaw.z = 0.0f;
            yaw.w = func_802BB630(angle);
            func_80274108(&result, &yaw, &own);
        }
    } else if (**(s32 **)(actor + 0x18) == 4) {
        sine = func_802BC200(*(f32 *)(actor + 0x294) * 0.5f);
        pitch.x = sine;
        pitch.y = 0.0f;
        pitch.z = 0.0f;
        angle = *(f32 *)(actor + 0x294) * 0.5f;
        D_80115DEC = sine;
        pitch.w = func_802BB630(angle);
        sine = func_802BC200((*(f32 *)(actor + 0x6C) + 3.1415927f) * 0.5f);
        yaw.x = 0.0f;
        yaw.y = sine;
        yaw.z = 0.0f;
        angle = (*(f32 *)(actor + 0x6C) + 3.1415927f) * 0.5f;
        D_80115DEC = sine;
        yaw.w = func_802BB630(angle);
        func_80274108(&both, &pitch, &yaw);
        func_80203848(&base, actor, actor + 0x170);
        func_80274108(&result, &both, &base);
    } else {
        sine = func_802BC200((*(f32 *)(actor + 0x6C) + 3.1415927f) * 0.5f);
        yaw.x = 0.0f;
        yaw.y = sine;
        yaw.z = 0.0f;
        angle = (*(f32 *)(actor + 0x6C) + 3.1415927f) * 0.5f;
        D_80115DEC = sine;
        yaw.w = func_802BB630(angle);
        func_80274108(&result, &yaw, (Quat *)(actor + 0x5C));
    }
    return result;
}
