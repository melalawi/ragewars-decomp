/* Probes one of a vehicle's eight wheel rays: casts from the vehicle position to its scaled wheel offset
 * through func_8024490C and stores the wheel's reach as the XZ distance to whatever was hit (diagonals
 * scaled by 1/sqrt 2, components tested against the zeroed y), or the full ray length on a miss. */
#include "basetypes.h"

#define ABS(x, zero) ((x) < (zero) ? -(x) : (x))

typedef struct {
    f32 x;
    f32 y;
    f32 z;
} Vec3f;

typedef struct {
    char pad0[0xE4];
    Vec3f pos;
} Hit;

typedef struct {
    char pad0[0x1D0];
    f32 reach[8];
    char pad1F0[0x20];
    f32 length;
} Wheels;

typedef struct {
    char pad0[8];
    Vec3f pos;
    char pad14[0x1440];
    Wheels *wheels;
} Vehicle;

extern Vec3f D_800CDAF0[8];
extern Hit *D_80103FCC;
extern char D_80103FD0[];
extern f32 func_8024E454(Vehicle *);
extern f32 func_8024D388(Vehicle *);
extern f32 func_8024D274(Vehicle *);
extern f32 func_8024E410(Vehicle *);
extern s32 func_8024490C(Vehicle *, Vec3f, Vec3f, char *, f32, f32, f32, f32);

void func_802106E0(Vehicle *vehicle, s32 wheel) {
    Vec3f from;
    Vec3f to;
    Vec3f delta;
    f32 a;
    f32 b;
    f32 c;

    from = vehicle->pos;
    to = D_800CDAF0[wheel];
    to.x *= vehicle->wheels->length;
    to.y *= vehicle->wheels->length;
    to.z *= vehicle->wheels->length;
    to.x += from.x;
    to.y += from.y;
    to.z += from.z;
    from.y += 61.44f;
    a = func_8024E454(vehicle);
    b = func_8024D388(vehicle);
    c = func_8024D274(vehicle);
    if (func_8024490C(vehicle, from, to, D_80103FD0, a, b, c, func_8024E410(vehicle))) {
        delta = D_80103FCC->pos;
        delta.x -= from.x;
        delta.y = 0.0f;
        delta.z -= from.z;
        if (delta.x != delta.y) {
            if (delta.z == delta.y) {
                vehicle->wheels->reach[wheel] = ABS(delta.x, delta.y);
            } else {
                vehicle->wheels->reach[wheel] = (ABS(delta.x, delta.y) + ABS(delta.z, delta.y)) * 0.70710677f;
            }
        } else if (delta.z != delta.y) {
            vehicle->wheels->reach[wheel] = ABS(delta.z, delta.y);
        }
    } else {
        vehicle->wheels->reach[wheel] = vehicle->wheels->length;
    }
}
