/* Builds a player's aiming marker matrices for the current view D_800D297C and turns the marker on at
   0x1214: a beam from the eye (the view position at 0x128, or func_8022B134 without a view) toward the
   target point, pitched straight up or down when nearly vertical, is stored in the table at 0x1480; the
   laser from the weapon muzzle at 0x260 to the aim point at 0x1464 (lowered by the view's height above
   the muzzle) in the table at 0x1500; and with a surface normal given, a dot flattened against the
   surface and lifted along the normal is stored in the table at 0x1580. */
#define ABS(x) ((x) < 0.0f ? -(x) : (x))

#include "basetypes.h"
#include "../splat/types/shared/player.h"
typedef SharedPlayer Player;

typedef struct {
    f32 x;
    f32 y;
    f32 z;
    f32 w;
} Quat;

typedef struct View {
    char pad0[0x128];
    Vec3f position;
} View;


extern f32 D_800CF1B4;
extern s32 D_800D297C;
extern void func_8022B134(Player *, Vec3f *);
extern void func_80271FD8(Vec3f *, Vec3f *, Vec3f *);
extern void func_802720EC(Vec3f *);
extern void func_80272848(Matrix *);
extern void func_80272EAC(Matrix *, f32, f32, f32);
extern void func_80273208(Matrix *, Vec3f *);
extern void func_802734B8(Matrix *, Vec3f);
extern void func_80273424(Matrix *, f32, f32, f32);
extern void func_802734EC(Matrix *, f32, f32, f32);
extern f32 func_80272768(Vec3f *, Vec3f *);
extern void func_802702EC(Matrix *, Matrix *);
extern void func_80271888(Quat *, Vec3f *);
extern void func_802742B4(Quat *, Matrix *);
extern void func_80273860(Matrix *, f32);
extern void func_8027200C(Vec3f *, Vec3f *, f32);
extern void func_80271FA4(Vec3f *, Vec3f *, Vec3f *);

void func_8021D3E4(Player *player, Vec3f *target, Vec3f *normal) {
    Vec3f to;
    Vec3f eye;
    Vec3f lift;
    Vec3f direction;
    Vec3f aim;
    Vec3f origin;
    Matrix matrix;
    Quat turn;
    f32 scale;

    if (player->views5DC.view5DC_2.view != 0) {
        origin = player->views5DC.view5DC_2.view->position;
    } else {
        func_8022B134(player, &origin);
    }
    eye = origin;
    to = *target;
    func_80271FD8(&direction, &to, &eye);
    func_802720EC(&direction);
    func_80272848(&matrix);
    if (0.99999899f <= direction.y) {
        func_80272EAC(&matrix, -1.57079649f, player->views1C.view6C_5.heading, 0.0f);
    } else if (direction.y <= -0.99999899f) {
        func_80272EAC(&matrix, 1.57079649f, player->views1C.view6C_5.heading, 0.0f);
    } else {
        func_80273208(&matrix, &direction);
    }
    func_802734B8(&matrix, eye);
    func_80273424(&matrix, 0.0f, 0.0f, D_800CF1B4);
    func_802734EC(&matrix, 0.05f, 1.0f, D_800CF1B4 - func_80272768(&eye, &to));
    func_802702EC(&matrix, &player->views1480.view1480_1.beams[D_800D297C]);

    aim = player->views1464.view1464_1.aim;
    if (player->views5DC.view5DC_2.view != 0) {
        aim.y -= ABS(player->views5DC.view5DC_2.view->position.y - player->views1C.view260_26.muzzle.y);
    }
    func_80271FD8(&direction, &aim, &player->views1C.view260_26.muzzle);
    func_802720EC(&direction);
    func_80272848(&matrix);
    func_80273208(&matrix, &direction);
    func_802734B8(&matrix, player->views1C.view260_26.muzzle);
    scale = 1.0f;
    func_802734EC(&matrix, scale, scale, -func_80272768(&origin, &player->views1464.view1464_1.aim));
    func_802702EC(&matrix, &player->views1500.view1500_1.lasers[D_800D297C]);

    if (normal != 0) {
        lift = *normal;
        func_80271888(&turn, &lift);
        func_802742B4(&turn, &matrix);
        func_80273860(&matrix, 1.57079649f);
        func_802720EC(&lift);
        func_8027200C(&lift, &lift, 2.048f);
        func_80271FA4(&eye, &eye, &lift);
        func_802734B8(&matrix, to);
        func_802734EC(&matrix, 1.536f, scale, 1.536f);
        func_802702EC(&matrix, &player->views1580.view1580_1.dots[D_800D297C]);
    }
    player->views5E8.view1214_155.marker = 1;
}
