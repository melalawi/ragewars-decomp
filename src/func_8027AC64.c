/* Steers toward a distant target; otherwise accelerates, clamps speed, and updates the actor. */
#include "basetypes.h"
typedef struct { f32 x, y, z; } Vec;
typedef struct { char pad[16]; u16 accel, limit; } Params;
typedef struct { char pad[48]; Params *params; } Link;
typedef struct { char pad[8]; Vec point; } Target;
typedef struct {
    char pad[28];
    Vec velocity;
    char gap[0x118 - 40];
    Link *link;
    char gap2[0x134 - 0x11c];
    Target *target;
    char gap3[0x140 - 0x138];
    f32 distance;
    char gap4[0x174 - 0x144];
    Vec direction;
} Obj;
f32 func_802B2350(u16);
f32 func_802BC380(f32);
void func_8027200C(Vec *, Vec *, f32);
void func_80271FA4(Vec *, Vec *, Vec *);
void func_8027A9B8(Obj *, Vec *);
void func_80279E40(void *, f32);

void func_8027AC64(Obj *arg0) {
    Vec delta, direction;
    Vec *velocity;
    f32 accel, length, limit;

    if (arg0->target != 0 && arg0->distance > 1.0f) {
        func_8027A9B8(arg0, &arg0->target->point);
        return;
    }
    accel = func_802B2350(arg0->link->params->accel);
    if (accel != 0.0f) {
        do {
            direction = arg0->direction;
            func_8027200C(&delta, &direction, accel);
            velocity = &arg0->velocity;
            func_80271FA4(velocity, velocity, &delta);
        } while (0);
        length = func_802BC380(arg0->velocity.x * arg0->velocity.x + arg0->velocity.y * arg0->velocity.y + arg0->velocity.z * arg0->velocity.z);
        limit = func_802B2350(arg0->link->params->limit);
        if (accel > 0.0f) {
            if (!(limit < length)) goto done;
        } else {
            if (!(length < limit)) goto done;
        }
        func_8027200C(velocity, &direction, limit);
done:;
    }
    func_80279E40(arg0, 1.0f);
}
