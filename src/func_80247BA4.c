/* Returns an actor's aim with auto-aim applied: with no assist cone the actor's aiming orientation from
 * func_8024795C is returned unchanged; otherwise, of the live entities other than the actor (not flagged 1,
 * with a body at 0x174), the one whose aim point (half its height above its top) lies most nearly along the
 * aim direction from the given point, within the cone (in degrees, halved), pulls the aim toward it by an
 * angle that fades with the fourth root of how far off-axis it is. The applied correction is also written
 * to the optional assist quaternion (identity when nothing is in range). */
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

extern char *D_80120AD8[];
extern s32 D_80120CD8;
extern f32 D_80115DEC;
extern Quat func_8024795C(char *);
extern void func_802742B4(Quat *, f32 *);
extern void func_80272908(f32 *, Vec3 *, Vec3 *);
extern f32 func_8024D274(char *);
extern void func_80271FD8(Vec3 *, Vec3 *, Vec3 *);
extern void func_802720EC(Vec3 *);
extern void func_80272088(Vec3 *, Vec3 *, Vec3 *);
extern f32 func_80274640(f32);
extern f32 func_802BC380(f32);
extern f32 func_802BC200(f32);
extern f32 func_802BB630(f32);
extern void func_80274108(Quat *, Quat *, Quat *);

Quat func_80247BA4(char *actor, Vec3 point, Quat *assist, f32 cone) {
    Vec3 dir;
    Vec3 local;
    Vec3 aim;
    Vec3 axis;
    Vec3 best;
    Vec3 center;
    Quat base;
    Quat turn;
    Quat result;
    f32 matrix[16];
    char *entity;
    char *target;
    s32 count;
    s32 i;
    f32 bestDot;
    f32 dot;
    f32 angle;

    local.x = 0.0f;
    local.y = 0.0f;
    local.z = 1.0f;
    base = func_8024795C(actor);
    if (cone == 0.0f) {
        if (assist != 0) {
            assist->x = assist->y = assist->z = 0.0f;
            assist->w = 1.0f;
        }
        return base;
    }
    func_802742B4(&base, matrix);
    func_80272908(matrix, &local, &aim);
    i = 0;
    target = 0;
    bestDot = func_802BB630(cone * 0.008726647f);
    count = D_80120CD8;
    for (; i < count; i++) {
        entity = D_80120AD8[i];
        if (entity == actor || (*(s32 *)(entity + 0x100) & 1) || *(s32 *)(entity + 0x174) == 0) {
            continue;
        }
        center = *(Vec3 *)(entity + 0x8);
        center.y += *(f32 *)(entity + 0x70);
        center.y += func_8024D274(entity) * 0.5f;
        func_80271FD8(&dir, &center, &point);
        func_802720EC(&dir);
        dot = aim.x * dir.x + aim.y * dir.y + aim.z * dir.z;
        if (bestDot < dot) {
            bestDot = dot;
            best = dir;
            target = entity;
        }
    }
    if (target != 0) {
        func_80272088(&axis, &aim, &best);
        func_802720EC(&axis);
        angle = func_80274640(bestDot);
        angle *= func_802BC380(func_802BC380(1.0f - angle / (cone * 0.008726647f)));
        angle *= 0.5f;
        D_80115DEC = func_802BC200(angle);
        turn.x = axis.x * D_80115DEC;
        turn.y = axis.y * D_80115DEC;
        turn.z = axis.z * D_80115DEC;
        turn.w = func_802BB630(angle);
        func_80274108(&result, &base, &turn);
        if (assist != 0) {
            *assist = turn;
        }
        return result;
    }
    if (assist != 0) {
        assist->x = assist->y = assist->z = 0.0f;
        assist->w = 1.0f;
    }
    return base;
}
