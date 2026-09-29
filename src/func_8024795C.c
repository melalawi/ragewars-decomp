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

typedef struct func_8024795C_S1 func_8024795C_S1;
typedef struct func_8024795C_S2 func_8024795C_S2;
typedef struct func_8024795C_S3 func_8024795C_S3;
struct func_8024795C_S1 {
    char pad0[0x18];
    s32* unk18;
    char pad18[0x5C - 0x18 - sizeof(s32*)];
    Quat unk5C;
    char pad5C[0x6C - 0x5C - sizeof(Quat)];
    f32 unk6C;
    char pad6C[0x100 - 0x6C - sizeof(f32)];
    s32 unk100;
    char pad100[0x1D8 - 0x100 - sizeof(s32)];
    char* unk1D8;
    char pad1D8[0x294 - 0x1D8 - sizeof(char*)];
    f32 unk294;
};
struct func_8024795C_S2 {
    char pad0[0x5DC];
    char* unk5DC;
};
struct func_8024795C_S3 {
    char pad0[0x140];
    Quat unk140;
};

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

    if (((func_8024795C_S1 *)(actor))->unk100 & 0x300000) {
        player = ((func_8024795C_S1 *)(actor))->unk1D8;
        weapon = ((func_8024795C_S2 *)(player))->unk5DC;
        if (weapon != 0) {
            angle = 1.5707964f;
            D_80115DEC = func_802BC200(angle);
            yaw.x = 0.0f;
            yaw.y = D_80115DEC;
            yaw.z = 0.0f;
            yaw.w = func_802BB630(angle);
            func_80274108(&result, &yaw, &((func_8024795C_S3 *)(weapon))->unk140);
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
    } else if (*((func_8024795C_S1 *)(actor))->unk18 == 4) {
        sine = func_802BC200(((func_8024795C_S1 *)(actor))->unk294 * 0.5f);
        pitch.x = sine;
        pitch.y = 0.0f;
        pitch.z = 0.0f;
        angle = ((func_8024795C_S1 *)(actor))->unk294 * 0.5f;
        D_80115DEC = sine;
        pitch.w = func_802BB630(angle);
        sine = func_802BC200((((func_8024795C_S1 *)(actor))->unk6C + 3.1415927f) * 0.5f);
        yaw.x = 0.0f;
        yaw.y = sine;
        yaw.z = 0.0f;
        angle = (((func_8024795C_S1 *)(actor))->unk6C + 3.1415927f) * 0.5f;
        D_80115DEC = sine;
        yaw.w = func_802BB630(angle);
        func_80274108(&both, &pitch, &yaw);
        func_80203848(&base, actor, (char *)actor + 0x170);
        func_80274108(&result, &both, &base);
    } else {
        sine = func_802BC200((((func_8024795C_S1 *)(actor))->unk6C + 3.1415927f) * 0.5f);
        yaw.x = 0.0f;
        yaw.y = sine;
        yaw.z = 0.0f;
        angle = (((func_8024795C_S1 *)(actor))->unk6C + 3.1415927f) * 0.5f;
        D_80115DEC = sine;
        yaw.w = func_802BB630(angle);
        func_80274108(&result, &yaw, &((func_8024795C_S1 *)(actor))->unk5C);
    }
    return result;
}
