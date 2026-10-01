/* Runs a player's riding state on the mount at 0x80C: sways the heading at 0x6C of the body with a
   slow cosine wave of the ride time at 0x838 scaled by the stick at 0x69C and leans the view at 0x72C
   into the turn, turns the view through func_802231B0 with D_800CE814, restarts the mount's ride action
   0x2E and launches forward (speed at 0x6C0 twice D_800CE758, lift 90 at 0x704) on input 0x8, adds the
   larger of the forward and doubled side speeds to the bump distance at 0x83C and, each full bump
   length (D_800CF228), halves the speeds unless the mount is in action 0x2E and shakes the view
   by the speed, moves the body
   through func_802233CC (D_800CE754 moving forward, D_800CE778 otherwise), lifts at 0x704 when faster
   than 10.24, and for mount kind 0x136 sets the rider offset at 0x814 and places the weapon at 0x73C
   along the body heading. */
#include "basetypes.h"
#include "shared/player.h"
typedef SharedPlayer Player;

#define ABS(x) ((x) < 0.0f ? -(x) : (x))
#define MAX(a, b) ((a) > (b) ? (a) : (b))

typedef struct Mount {
    char pad0[0x170];
    char state[0x1A4 - 0x170];
    s8 action;
} Mount;

typedef struct Body {
    char pad0[8];
    Triple position;
    char pad14[0x6C - 0x14];
    f32 heading;
} Body;


extern f32 D_800D2988;
extern f32 D_800CE758;
extern s32 D_800CF228;
extern char D_800CE754;
extern char D_800CE778;
extern char D_800CE814;
extern Vec3f D_800CE714;
extern Triple D_800CE720;
extern f32 func_802BB630(f32);
extern void func_802748E0(f32 *, f32, f32);
extern void func_802231B0(Player *, Body *, char *);
extern void func_80214178(Mount *, char *, s32);
extern void func_80239314(void *, f32, f32, f32, f32, s32, Triple);
extern void func_802233CC(Player *, Body *, char *);
extern void func_80273744(Matrix *, f32);
extern void func_80272908(Matrix *, Vec3f *, Vec3f *);
extern void func_8027200C(Vec3f *, Vec3f *, f32);

void func_80225F20(Player *player, Body *body) {
    Matrix matrix;
    Mount *mount;
    Vec3f *offset;
    f32 sway;
    f32 heading;
    f32 bump;
    f32 shake;

    mount = player->views5E8.view80C_108.mount;
    sway = player->views5E8.view69C_40.stick * (((func_802BB630(player->views5E8.view838_114.rideTime * 0.2792527f) + 1.0f) * 0.01f + 0.06f) * 80.0f)
        * 0.017453294f;
    player->views5E8.view838_114.rideTime += D_800D2988;
    heading = body->heading;
    func_802748E0(&body->heading, heading + sway, 0.9f);
    func_802748E0(&player->views5E8.view72C_77.lean, ((heading - body->heading) + player->views5E8.view69C_40.stick * 8.0f) * 0.017453294f, 0.1f);
    func_802231B0(player, body, &D_800CE814);
    offset = 0;
    if (player->views5E8.view6B8_50.input & 8) {
        func_80214178(mount, mount->state, 0x2E);
        player->views5E8.view704_68.lift = 90.0f;
        player->views5E8.view6C0_53.speed = 2.0f * D_800CE758;
    }
    bump = player->views5E8.view83C_116.bump + MAX(ABS(player->views5E8.view6C0_53.speed), ABS(2.0f * player->views5E8.view6C4_55.side));
    player->views5E8.view83C_116.bump = bump;
    if (*(f32 *) (&D_800CF228 + 1) < bump) {
        player->views5E8.view83C_116.bump = bump - *(f32 *) (&D_800CF228 + 1);
        if (mount->action != 0x2E) {
            player->views5E8.view6C0_53.speed *= 0.5f;
            player->views5E8.view6C4_55.side *= 0.5f;
        }
        shake = ABS(player->views5E8.view6C0_53.speed) * 2.5f;
        if (50.0f < shake) {
            shake = 50.0f;
        }
        if (player->views5DC.view5DC_1.view != 0) {
            func_80239314(player->views5DC.view5DC_1.view, 0.0f, shake, 0.0f, 1.0f, 1, body->position);
        }
    }
    if (player->views5E8.view6C0_53.speed > 0.0f) {
        func_802233CC(player, body, &D_800CE754);
    } else {
        func_802233CC(player, body, &D_800CE778);
    }
    if (10.24f < ABS(player->views5E8.view6C0_53.speed)) {
        player->views5E8.view704_68.lift = 15.0f;
    }
    if (player->views5E8.view810_110.kind == 0x136) {
        offset = &D_800CE714;
        player->views5E8.view814_112.offset = D_800CE720;
    }
    if (offset != 0) {
        func_80273744(&matrix, body->heading);
        func_80272908(&matrix, offset, &player->views5E8.view73C_82.weapon);
        func_8027200C(&player->views5E8.view73C_82.weapon, &player->views5E8.view73C_82.weapon, 10.24f);
    }
}
