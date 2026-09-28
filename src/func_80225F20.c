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

#define ABS(x) ((x) < 0.0f ? -(x) : (x))
#define MAX(a, b) ((a) > (b) ? (a) : (b))

typedef struct {
    f32 x;
    f32 y;
    f32 z;
} Vec3f;

typedef struct {
    s32 x;
    s32 y;
    s32 z;
} Triple;

typedef struct {
    f32 m[16];
} Matrix;

typedef struct {
    char pad0[0x170];
    char state[0x1A4 - 0x170];
    s8 action;
} Mount;

typedef struct {
    char pad0[8];
    Triple position;
    char pad14[0x6C - 0x14];
    f32 heading;
} Body;

typedef struct {
    char pad0[0x5DC];
    void *view;
    char pad5E0[0x69C - 0x5E0];
    f32 stick;
    char pad6A0[0x6B8 - 0x6A0];
    s32 input;
    char pad6BC[0x6C0 - 0x6BC];
    f32 speed;
    f32 side;
    char pad6C8[0x704 - 0x6C8];
    f32 lift;
    char pad708[0x72C - 0x708];
    f32 lean;
    char pad730[0x73C - 0x730];
    Vec3f weapon;
    char pad748[0x80C - 0x748];
    Mount *mount;
    s32 kind;
    Triple offset;
    char pad820[0x838 - 0x820];
    f32 rideTime;
    f32 bump;
} Player;

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

    mount = player->mount;
    sway = player->stick * (((func_802BB630(player->rideTime * 0.2792527f) + 1.0f) * 0.01f + 0.06f) * 80.0f)
        * 0.017453294f;
    player->rideTime += D_800D2988;
    heading = body->heading;
    func_802748E0(&body->heading, heading + sway, 0.9f);
    func_802748E0(&player->lean, ((heading - body->heading) + player->stick * 8.0f) * 0.017453294f, 0.1f);
    func_802231B0(player, body, &D_800CE814);
    offset = 0;
    if (player->input & 8) {
        func_80214178(mount, mount->state, 0x2E);
        player->lift = 90.0f;
        player->speed = 2.0f * D_800CE758;
    }
    bump = player->bump + MAX(ABS(player->speed), ABS(2.0f * player->side));
    player->bump = bump;
    if (*(f32 *) (&D_800CF228 + 1) < bump) {
        player->bump = bump - *(f32 *) (&D_800CF228 + 1);
        if (mount->action != 0x2E) {
            player->speed *= 0.5f;
            player->side *= 0.5f;
        }
        shake = ABS(player->speed) * 2.5f;
        if (50.0f < shake) {
            shake = 50.0f;
        }
        if (player->view != 0) {
            func_80239314(player->view, 0.0f, shake, 0.0f, 1.0f, 1, body->position);
        }
    }
    if (player->speed > 0.0f) {
        func_802233CC(player, body, &D_800CE754);
    } else {
        func_802233CC(player, body, &D_800CE778);
    }
    if (10.24f < ABS(player->speed)) {
        player->lift = 15.0f;
    }
    if (player->kind == 0x136) {
        offset = &D_800CE714;
        player->offset = D_800CE720;
    }
    if (offset != 0) {
        func_80273744(&matrix, body->heading);
        func_80272908(&matrix, offset, &player->weapon);
        func_8027200C(&player->weapon, &player->weapon, 10.24f);
    }
}
