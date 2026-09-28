/* Drives combat pursuit, retreat and strafing while refreshing target visibility, routes and fire timing. */
#include "basetypes.h"

typedef struct {
    f32 x;
    f32 y;
    f32 z;
} Vec3;

struct Brain;

typedef struct Actor {
    char pad0[8];
    Vec3 pos;
    char pad14[0x24];
    s32 flags;
    char pad3C[0x30];
    f32 yaw;
    char pad70[0x168];
    struct Actor *self;
    char pad1DC[0x3F8];
    s32 slot;
    char pad5D8[0xCC];
    f32 strafe;
    f32 forward; s32 w6AC,buttons; char pad6B4[0xDA0];
    struct Brain *brain;
} Actor;

typedef struct Brain {
    Actor *player;
    s32 route;
    s32 w8,destination;
    s32 node;
    s32 w14;
    char pad18[0x4C];
    Actor *target;
    char pad68[0x188];
    f32 walk[8];
    char pad210[0x20];
    s32 combat;
    char pad234[0xA4];
    s32 timer;
    s32 pattern;
    s32 distance;char pad2E4[0x34];
    s32 frames;
    s32 visible,fireTimer;
} Brain;

extern s32 D_800D297C;
extern char D_8013B364[];

extern void func_80211020(Brain *);
extern s32 func_802099B4(Brain *, Actor *);
extern void func_80209874(Brain *, s32);
extern f32 func_8027272C(Vec3 *, Vec3 *);
extern f32 func_80209BE0(Brain *);
extern s32 func_80274544(void);
extern f32 func_80209DAC(Brain *);
extern f32 func_80209308(Brain *, Vec3 *, f32, f32);
extern s32 func_80210EFC(f32);
extern void func_80210964(Actor *, s32);
extern void func_80209E80(Brain *);
extern s32 func_8020D1CC(char *, s32, s32);


extern void func_80208410(Brain *),func_80208AAC(Brain *),func_8020FA10(Brain *);
extern struct {char pad[0xC];unsigned short flags;} *func_8020C994(char *,int);
extern float D_800C7120[];
void func_80211470(Actor *actor);
void func_80211470(Actor *actor) {
 char *routes;int mine,theirs,dir; Actor *player;
    Actor *temp_a1;
    Actor *temp_s0;
    Actor *temp_v1_3;
    Brain *temp_s1;
    Vec3 *temp_s0_2;
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f20;
    f32 temp_f21;
    f32 temp_f2;
    f32 temp_f2_2;
    s32 temp_s2;
    s32 temp_v0;
    s32 temp_v0_6;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_a1;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v0_4;
    s32 var_v0_5;

    temp_s1 = actor->self->brain;
    func_80211020(temp_s1);
    temp_a1 = temp_s1->target;routes=D_8013B364;
    if (temp_a1 != 0) {
        if (!(temp_s1->frames & 3)) {
            temp_s1->visible = func_802099B4(temp_s1, temp_a1);
        }
        temp_s1->frames += 1;
        temp_s0 = temp_s1->target->self;
        mine=temp_s1->player->flags&0x3000;theirs=(temp_s0->flags&0x3000)!=0;
        if (mine && !theirs) {
            func_80209874(temp_s1,12);return;
        }
        temp_s2 = temp_s0->brain->route;
        if (func_8020C994(routes, temp_s2)->flags & 0x400) {
            temp_s1->target = 0;
            func_8020FA10(temp_s1);
            return;
        }
        if (temp_s1->visible != 0) {
            temp_f21 = func_80209BE0(temp_s1);
            temp_v0 = temp_s1->timer - 1;
            temp_f20 = temp_f21 * 0.6f;
            temp_s1->timer = temp_v0;
            if (temp_v0 <= 0) {
                temp_s1->timer=func_80274544()%4+12;
                temp_s1->pattern = func_80274544() % 2;
                temp_s1->distance = (func_80274544() % 250000) + 0x57E40;
            }
            temp_s0_2 = &temp_s0->pos;
            func_80209308(temp_s1, temp_s0_2, 2.0f, func_80209DAC(temp_s1));
            temp_f0 = func_8027272C(temp_s0_2, &temp_s1->player->pos);
            temp_f1 = temp_f0 + 10000.0f;
            temp_f2 = (f32) temp_s1->distance;
            if (temp_f1 < 0.0f) {
                if (temp_f2 < -temp_f1) {
                    goto block_19;
                }
                goto block_23;
            }
            if (temp_f2 < temp_f1) {
block_19:
                dir = func_80210EFC(temp_s1->player->yaw - 3.1415927f);
                player = temp_s1->player;
                if ((player->slot % 2) == D_800D297C) {
                    func_80210964(player, dir);
                }
                if (!(temp_s1->walk[dir] < 100.0f)) {
                    temp_s1->player->forward = 1.0f;
                } else {
                    goto block_31;
                }
            } else {
block_23:
                temp_f1_2 = temp_f0 - 10000.0f;
                temp_f2_2 = (f32) temp_s1->distance;
                if (temp_f1_2 < 0.0f) {
                    if (-temp_f1_2 < temp_f2_2) {
                        goto block_27;
                    }
                    goto block_31;
                }
                if (temp_f1_2 < temp_f2_2) {
block_27:
                    dir = func_80210EFC(temp_s1->player->yaw);
                    player = temp_s1->player;
                    if ((player->slot % 2) == D_800D297C) {
                        func_80210964(player, dir);
                    }
                    if (!(temp_s1->walk[dir] < 100.0f)) {
                        temp_s1->player->forward = -1.0f;
                    } else {
                        goto block_31;
                    }
                } else {
block_31:
                    temp_s1->player->forward = 0.0f;
                }
            }
            temp_v1_2 = temp_s1->pattern;
            if (temp_v1_2 == 0) {
                dir = func_80210EFC((temp_s1->player->yaw - 3.1415927f) - 1.5707964f);
                player = temp_s1->player;
                if ((player->slot % 2) == D_800D297C) {
                    func_80210964(player, dir);
                }
                if (!(temp_s1->walk[dir] < 100.0f)) {
                    temp_s1->player->strafe = -temp_f20;
                } else {
                    goto block_41;
                }
            } else if (temp_v1_2 == 1) {
                dir = func_80210EFC((temp_s1->player->yaw - 3.1415927f) + 1.5707964f);
                player = temp_s1->player;
                if ((player->slot % 2) == D_800D297C) {
                    func_80210964(player, dir);
                }
                if (temp_s1->walk[dir] < 100.0f) {
block_41:
                    temp_s1->player->strafe = 0.0f;
                    temp_s1->pattern = 2;
                } else {
                    temp_s1->player->strafe = temp_f20;
                }
            } else {
                temp_s1->player->strafe = 0.0f;
            }
            temp_s1->w14 = -1;
            temp_v0_6 = temp_s1->fireTimer - 1;
            temp_s1->fireTimer = temp_v0_6;
            if ((temp_v0_6 == 0) && ((func_80274544() % 100) < (s32) temp_f21)) {
                temp_v1_3 = temp_s1->player;
                temp_v1_3->buttons |= 0x10;
            }
            if (temp_s1->fireTimer < 0) {
                temp_s1->fireTimer = ((func_80274544() % 2) + 2) * 0xF;
            }
            func_80209E80(temp_s1);
        } else {
            temp_s1->destination = temp_s2;
            func_80208410(temp_s1);
            func_80208AAC(temp_s1);
        }
        if (temp_s2 != temp_s1->node) {
            temp_s1->node = temp_s2;
            if (func_8020D1CC(routes, temp_s1->route, temp_s2) == 0) {
                func_80209874(temp_s1,1);
            }
        }
    }
}
