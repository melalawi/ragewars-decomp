#define MIN(a,b) ((a)>(b)?(b):(a))
#define MAX(a,b) ((a)<(b)?(b):(a))
/* Returns the signed angle between an actor's facing and the direction to a point on the ground plane:
   normalises the offset from the actor at 0x8 to the point, takes its dot product with the facing
   built from the sine and cosine of the yaw at 0x6C, clamps it to -1..1, converts it through the arc
   cosine func_80274640 and negates it when the point lies on the other side, or returns zero when the
   point is at the actor. Scheduler lever, disclosed: the sine read sits in a do-while(0) block. */
#include "basetypes.h"

typedef struct {
    f32 x, y, z;
} Vec3;

extern f32 func_802BC380(f32);
extern f32 func_802BC200(f32);
extern f32 func_802BB630(f32);
extern f32 func_80274640(f32);

typedef struct func_80216F44_S1 func_80216F44_S1;
struct func_80216F44_S1 {
    char pad0[0x8];
    f32 unk8;
    char pad8[0x10 - 0x8 - sizeof(f32)];
    f32 unk10;
    char pad10[0x6C - 0x10 - sizeof(f32)];
    f32 unk6C;
};

f32 func_80216F44(void *actor, Vec3 point) {
    f32 dx;
    f32 dz;
    f32 dist;
    f32 s;
    f32 c;
    f32 dot;
    f32 angle;

    dx = point.x - ((func_80216F44_S1 *)(actor))->unk8;
    dz = point.z - ((func_80216F44_S1 *)(actor))->unk10;
    dist = func_802BC380(dx * dx + dz * dz);
    if (dist == 0.0f) {
        return 0.0f;
    }
    do {
        s = func_802BC200(((func_80216F44_S1 *)(actor))->unk6C);
    } while (0);
    c = -func_802BB630(((func_80216F44_S1 *)(actor))->unk6C);
    dot = (dx * -s + dz * c) / dist;
    dot = MAX(MIN(dot, 1.0f), (-1.0f));
    angle = func_80274640(dot);
    if (dx * c + dz * s > 0.0f) {
        return angle;
    }
    return -angle;
}
