#include "basetypes.h"

/* Moves a rider along its path segment: limits the throttle change by the segment's length over its radius, then either rocks the throttle back and forth between 0 and 1 (mode 1, flipping direction at the ends) or steers it toward a target's projected distance along the segment (mode 2), eases the change through func_80274878, clamps the throttle to 0..1 and places the rider at the segment's circle point for that throttle through func_80272038. */
typedef struct {
    f32 x;
    f32 y;
    f32 z;
} Vec3;

typedef struct {
    char pad0[0x5C];
    f32 rise;
    f32 radius;
    f32 angle;
    f32 length;
} Segment;

typedef struct {
    char pad0[0x18];
    char *track;
} Owner;

typedef struct {
    char pad0[0x37];
    s8 direction;
    char pad38[0x1C];
    char frame[0x10];
    f32 throttle;
    char pad68[0x38];
    Vec3 base;
    char padAC[0x7C];
    f32 change;
} Rider;

extern f32 func_802BC380(f32);
extern f32 func_802BC200(f32);
extern f32 func_802BB630(f32);
extern f32 func_80274878(f32, f32, f32);
extern void func_80271FD8(Vec3 *, char *, Vec3 *);
extern void func_80273744(f32 *, f32);
extern void func_80272908(f32 *, Vec3 *, Vec3 *);
extern void func_80272038(char *, f32, Vec3 *, Vec3 *);

void func_80202FDC(Owner *owner, Rider *rider, s32 mode, char *target) {
    Segment *segment;
    f32 throttle;
    f32 limit;
    f32 step;
    f32 goal;
    Vec3 position;
    Vec3 offset;
    Vec3 local;
    f32 matrix[16];

    segment = (Segment *)(owner->track + 0x14);
    throttle = rider->throttle;
    if (segment->radius != 0.0f || segment->rise != 0.0f) {
        limit = segment->length / func_802BC380(segment->radius * segment->radius + segment->rise * segment->rise);
    } else {
        limit = 0.0f;
    }
    switch (mode) {
    case 0:
        break;
    case 1:
        step = limit;
        if (rider->direction == mode) {
            step = -step;
        }
        rider->change = func_80274878(rider->change, step, 0.25f);
        throttle += rider->change;
        if (rider->direction == 0) {
            if (throttle > 1.0f) {
                rider->change = 0.0f;
                rider->direction = mode;
            }
        } else if (throttle < 0.0f) {
            rider->change = 0.0f;
            rider->direction = 0;
        }
        break;
    case 2:
        if (target != 0) {
            if (segment->angle != 0.0f) {
                func_80271FD8(&offset, target + 8, &rider->base);
                func_80273744(matrix, -segment->angle);
                func_80272908(matrix, &offset, &local);
                goal = local.z / segment->radius;
            } else {
                goal = 0.0f;
            }
            step = goal - throttle;
            if (step > limit) {
                step = limit;
            } else if (step < -limit) {
                step = -limit;
            }
            rider->change = func_80274878(rider->change, step, 0.25f);
            throttle += rider->change;
        }
        break;
    }
    if (throttle > 1.0f) {
        throttle = 1.0f;
    } else if (throttle < 0.0f) {
        throttle = 0.0f;
    }
    rider->throttle = throttle;
    position = rider->base;
    position.x += segment->radius * func_802BC200(segment->angle);
    position.y += segment->rise;
    position.z += segment->radius * func_802BB630(segment->angle);
    func_80272038(rider->frame, throttle, &rider->base, &position);
}
