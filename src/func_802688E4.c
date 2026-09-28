/* Damages the owner of a live actor (kind 1 with either blast bit of 0x300000 set) that is inside
   the blast: the radius is arg6 scaled by D_800C9570[1], and when the squared radius still covers
   the squared distance from the owner's position at 8 to arg1's position at 8, the remaining
   fraction of the squared radius times arg7 is applied through func_8022B10C. */
#include "basetypes.h"

typedef struct {
    f32 x;
    f32 y;
    f32 z;
} Vec3;

typedef struct {
    char pad0[8];
    Vec3 pos;
    char pad14[0x16D4 - 0x14];
    s32 alive;
} Owner;

typedef struct {
    u8 kind;
    char pad1[0x100 - 1];
    s32 flags;
    char pad104[0x1D8 - 0x104];
    Owner *owner;
} Actor;

typedef struct {
    char pad0[8];
    Vec3 pos;
} Node;

typedef struct {
    char pad0[0xC];
    s32 radius;
    s32 damage;
} Blast;

extern f32 D_800C9570[];
extern void func_80271FD8(Vec3 *, Vec3 *, Vec3 *);
extern void func_8022B10C(Owner *, s32);

void func_802688E4(Actor *arg0, Node *arg1, s32 arg2, Blast blast) {
    Vec3 delta;
    Owner *owner;
    f32 range;
    f32 dist;

    if (arg0->kind == 1 && (arg0->flags & 0x300000) != 0) {
        owner = arg0->owner;
        if (owner->alive != 0) {
            range = (f32)blast.radius * D_800C9570[1];
            func_80271FD8(&delta, &owner->pos, &arg1->pos);
            dist = delta.x * delta.x + delta.y * delta.y + delta.z * delta.z;
            range = range * range;
            if (range < dist) {
                return;
            }
            func_8022B10C(owner, (s32)(((range - dist) / range) * (f32)blast.damage) & 0xFFFF);
        }
    }
}
