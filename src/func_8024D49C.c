/* Returns the rotation that turns an actor's aim toward a target point: a player's forward axis is its
 * aiming orientation from func_8024795C applied to +z, anyone else looks along +z; the target is the
 * player's lock-on at 0x1F0 or else whatever func_8022A470 finds at the point, and with no target the
 * identity is returned. Otherwise the forward axis turns about its cross product with the direction from
 * the point up to three quarters of the target's height, by half the angle between them, composed with the
 * player's aiming orientation; the sine is kept in D_80115DEC. */
#include "basetypes.h"

typedef struct {
    f32 x;
    f32 y;
    f32 z;
} Vec3;

typedef struct {
    f32 x;
    f32 y;
    f32 z;
    f32 w;
} Quat;

extern char D_80145040;
extern f32 D_80115DEC;
extern Quat func_8024795C(char *);
extern void func_802742B4(Quat *, f32 *);
extern void func_80272908(f32 *, Vec3 *, Vec3 *);
extern char *func_8022A470(void *, Vec3);
extern f32 func_8024D274(char *);
extern void func_80271FD8(Vec3 *, Vec3 *, Vec3 *);
extern void func_802720EC(Vec3 *);
extern void func_80272088(Vec3 *, Vec3 *, Vec3 *);
extern f32 func_80274640(f32);
extern f32 func_802BC200(f32);
extern f32 func_802BB630(f32);
extern void func_80274108(Quat *, Quat *, Quat *);

typedef struct func_8024D49C_S1 func_8024D49C_S1;
typedef struct func_8024D49C_S2 func_8024D49C_S2;
struct func_8024D49C_S1 {
    char pad0[0x1F0];
    char* unk1F0;
};
struct func_8024D49C_S2 {
    char pad0[0x8];
    Vec3 unk8;
    char pad8[0x70 - 0x8 - sizeof(Vec3)];
    f32 unk70;
};

Quat func_8024D49C(char *actor, Vec3 point) {
    Vec3 origin;
    Vec3 dir;
    Vec3 forward;
    Vec3 local;
    Vec3 axis;
    Quat turn;
    Quat aim;
    Quat result;
    f32 matrix[16];
    char *target;
    char *found;
    f32 angle;
    f32 scale;

    target = 0;
    if (actor != 0 && *(u8 *)actor == 1) {
        target = ((func_8024D49C_S1 *)(actor))->unk1F0;
        aim = func_8024795C(actor);
        func_802742B4(&aim, matrix);
        local.x = 0.0f;
        local.y = 0.0f;
        local.z = 1.0f;
        func_80272908(matrix, &local, &forward);
    } else {
        forward.x = 0.0f;
        forward.y = 0.0f;
        forward.z = 1.0f;
    }
    if (target == 0) {
        found = func_8022A470(&D_80145040, point);
        if (found != 0) {
            target = found;
        }
        if (target == 0) {
            result.x = result.y = result.z = 0.0f;
            result.w = 1.0f;
            return result;
        }
    }
    origin = ((func_8024D49C_S2 *)(target))->unk8;
    origin.y += ((func_8024D49C_S2 *)(target))->unk70;
    origin.y += func_8024D274(target) * 0.75f;
    func_80271FD8(&dir, &origin, &point);
    func_802720EC(&dir);
    func_80272088(&axis, &forward, &dir);
    func_802720EC(&axis);
    angle = func_80274640(forward.x * dir.x + forward.y * dir.y + forward.z * dir.z) * 0.5f;
    scale = func_802BC200(angle);
    turn.x = axis.x * scale;
    turn.y = axis.y * scale;
    turn.z = axis.z * scale;
    D_80115DEC = scale;
    turn.w = func_802BB630(angle);
    if (actor != 0 && *(u8 *)actor == 1) {
        func_80274108(&result, &aim, &turn);
    } else {
        result = turn;
    }
    return result;
}
