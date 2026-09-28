#include "basetypes.h"

/* Steers a computer player toward a point: measures the heading error to the point through func_80216F44 plus an offset, wrapped to -pi..pi, and when it exceeds the turn rate in degrees sets the player's steering at 0x69C to full lock beyond 60 degrees or to a half, quarter, eighth or tenth of lock beyond 30, 10 and 4 degrees, in the error's direction; then passes the brain's speed sum (by the player's gear at 0x594) in radians and the turn rate to func_80209910 and returns the heading error. */
typedef struct {
    f32 x;
    f32 y;
    f32 z;
} Vec3;

typedef struct {
    char pad0[0x594];
    s32 gear;
    char pad598[0x104];
    f32 steer;
} Player;

typedef struct {
    Player *player;
    char pad4[0x244];
    f32 speed[4];
} Brain;

extern f32 func_80216F44(Player *, Vec3);
extern void func_80209910(Brain *, f32, s32);

f32 func_80209308(Brain *brain, Vec3 *target, f32 rate, f32 offset) {
    f32 angle;
    f32 direction;
    f32 limit;
    f32 scale;

    angle = func_80216F44(brain->player, *target) + offset;
    if (angle > 3.141593f) {
        angle -= 6.283186f;
    } else if (angle < -3.141593f) {
        angle += 6.283186f;
    }
    direction = -1.0f;
    if (angle > 0.0f) {
        direction = 1.0f;
    }
    limit = rate * 0.017453294f;
    if (angle < 0.0f ? limit < -angle : limit < angle) {
        if (angle < 0.0f ? 1.0471977f < -angle : 1.0471977f < angle) {
            brain->player->steer = direction;
        } else {
            if (angle < 0.0f ? 0.52359885f < -angle : 0.52359885f < angle) {
                scale = 0.5f;
            } else if (angle < 0.0f ? 0.17453295f < -angle : 0.17453295f < angle) {
                scale = 0.25f;
            } else if (angle < 0.0f ? 0.06981318f < -angle : 0.06981318f < angle) {
                scale = 0.125f;
            } else {
                scale = 0.1f;
            }
            brain->player->steer = direction * scale;
        }
    }
    func_80209910(brain, (brain->player->gear == 2 ? brain->speed[1] + brain->speed[3] : brain->speed[0] + brain->speed[2]) * 0.017453294f, rate);
    return angle;
}
