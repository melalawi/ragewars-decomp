#include "common/types_8a8189af7b05.h"
#include "span_1000/code_80246E34.h"
#include "types.h"
/* Returns an actor's aiming orientation: a controlled actor turns a quarter turn about the vertical from its
 * weapon's orientation at 0x140, or from the player's own orientation from func_80226C60_de when unarmed; an
 * actor of kind 4 composes a pitch from 0x294 with a yaw from its heading 0x6C and applies them to its body
 * orientation from func_80203848_de; any other actor turns its orientation at 0x5C by its heading. Quaternions
 * are composed through func_80274098_de, keeping the latest sine in D_80115DEC. */



extern f32 D_80111D2C;
extern f32 func_802B7130_de(f32);
extern f32 func_802B6560_de(f32);
extern void func_80274098_de(Vector4f *, Vector4f *, Vector4f *);
extern void func_80226C60_de(void *, Vector4f *);
extern void func_80203848_de(Vector4f *, void *, void *);








Vector4f func_8024796C_de(char *actor) {
    Vector4f result;
    Vector4f pitch;
    Vector4f yaw;
    Vector4f both;
    Vector4f base;
    Vector4f own;
    char *player;
    char *weapon;
    f32 angle;
    f32 sine;

    if (((func_8024795C_S1 *)(actor))->unk100 & 0x300000) {
        player = ((func_8024795C_S1 *)(actor))->unk1D8;
        weapon = ((func_8024795C_S2 *)(player))->unk5DC;
        if (weapon != 0) {
            angle = 1.5707964f;
            D_80111D2C = func_802B7130_de(angle);
            yaw.x = 0.0f;
            yaw.y = D_80111D2C;
            yaw.z = 0.0f;
            yaw.w = func_802B6560_de(angle);
            func_80274098_de(&result, &yaw, &((func_8024795C_S3 *)(weapon))->unk140);
        } else {
            angle = 1.5707964f;
            func_80226C60_de(player, &own);
            D_80111D2C = func_802B7130_de(angle);
            yaw.x = 0.0f;
            yaw.y = D_80111D2C;
            yaw.z = 0.0f;
            yaw.w = func_802B6560_de(angle);
            func_80274098_de(&result, &yaw, &own);
        }
    } else if (*((func_8024795C_S1 *)(actor))->unk18 == 4) {
        sine = func_802B7130_de(((func_8024795C_S1 *)(actor))->unk294 * 0.5f);
        pitch.x = sine;
        pitch.y = 0.0f;
        pitch.z = 0.0f;
        angle = ((func_8024795C_S1 *)(actor))->unk294 * 0.5f;
        D_80111D2C = sine;
        pitch.w = func_802B6560_de(angle);
        sine = func_802B7130_de((((func_8024795C_S1 *)(actor))->unk6C + 3.1415927f) * 0.5f);
        yaw.x = 0.0f;
        yaw.y = sine;
        yaw.z = 0.0f;
        angle = (((func_8024795C_S1 *)(actor))->unk6C + 3.1415927f) * 0.5f;
        D_80111D2C = sine;
        yaw.w = func_802B6560_de(angle);
        func_80274098_de(&both, &pitch, &yaw);
        func_80203848_de(&base, actor, (char *)actor + 0x170);
        func_80274098_de(&result, &both, &base);
    } else {
        sine = func_802B7130_de((((func_8024795C_S1 *)(actor))->unk6C + 3.1415927f) * 0.5f);
        yaw.x = 0.0f;
        yaw.y = sine;
        yaw.z = 0.0f;
        angle = (((func_8024795C_S1 *)(actor))->unk6C + 3.1415927f) * 0.5f;
        D_80111D2C = sine;
        yaw.w = func_802B6560_de(angle);
        func_80274098_de(&result, &yaw, &((func_8024795C_S1 *)(actor))->unk5C);
    }
    return result;
}
