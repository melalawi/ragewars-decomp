/* Returns the rotation that turns the up vector D_800C6AE0 onto a direction: normalises the direction
   through func_802720EC, gives the identity quaternion (w D_800C6AF0) when its height exceeds
   D_800C6AEC, a half turn about the x axis by D_800C6AF8 when below D_800C6AF4, and otherwise a turn
   about the normalised cross product of up and the direction by half (D_800C6AFC) of their angle from
   func_80274640, keeping the sine in D_80115DEC. */
#include "basetypes.h"

typedef struct {
    f32 x, y, z;
} Vec3;

typedef struct {
    f32 x, y, z, w;
} Quat;

extern Vec3 D_800C6AE0;
extern f32 D_800C6AEC;
extern f32 D_800C6AF0;
extern f32 D_800C6AF4;
extern f32 D_800C6AF8;
extern f32 D_800C6AFC;
extern f32 D_80115DEC;
extern void func_802720EC(Vec3 *);
extern f32 func_80274640(f32);
extern void func_80272088(Vec3 *, Vec3 *, Vec3 *);
extern f32 func_802BC200(f32);
extern f32 func_802BB630(f32);

Quat func_80202CA0(Vec3 *dir) {
    Quat q;
    Vec3 up;
    Vec3 axis;
    f32 angle;
    f32 turn;

    up = D_800C6AE0;
    func_802720EC(dir);
    if (dir->y > D_800C6AEC) {
        q.x = q.y = q.z = 0.0f;
        q.w = D_800C6AF0;
    } else if (dir->y < D_800C6AF4) {
        angle = D_800C6AF8;
        q.x = D_80115DEC = func_802BC200(angle);
        q.y = 0.0f;
        q.z = 0.0f;
        q.w = func_802BB630(angle);
    } else {
        turn = func_80274640(dir->x * up.x + dir->y * up.y + dir->z * up.z);
        func_80272088(&axis, &up, dir);
        func_802720EC(&axis);
        angle = turn * D_800C6AFC;
        D_80115DEC = func_802BC200(angle);
        q.x = axis.x * D_80115DEC;
        q.y = axis.y * D_80115DEC;
        q.z = axis.z * D_80115DEC;
        q.w = func_802BB630(angle);
    }
    return q;
}
