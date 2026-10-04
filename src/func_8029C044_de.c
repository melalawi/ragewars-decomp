#include "span_1000/code_8029AC80.h"
#include "types.h"
/* Returns the angle of the vector (x, y) in radians, atan2(y, x): both components within 1e-6 of zero are snapped to zero, the axes return exact multiples of pi/2, and otherwise the arctangent of |y/x| comes from the (t - 1)/(t + 1) series around pi/4, negated for a negative ratio and offset by the quadrant's term from D_800D2B60. */

extern f32 D_800CD8F0_de[4];

f32 func_8029C044_de(f32 y, f32 x) {
    s32 quadrant;
    f32 ratio;
    f32 magnitude;
    f32 t;
    f32 t2;
    f32 angle;

    if (-1e-6f < x && x < 1e-6f) {
        x = 0.0f;
    }
    if (-1e-6f < y && y < 1e-6f) {
        y = 0.0f;
    }
    if (x == 0.0f && y == 0.0f) {
        return 0.0f;
    }
    if (x == 0.0f) {
        if (y >= 0.0f) {
            return 1.5707964f;
        }
        return -1.5707964f;
    }
    if (y == 0.0f) {
        if (x >= 0.0f) {
            return 0.0f;
        }
        return 3.1415927f;
    }
    quadrant = 0;
    if (x < 0.0f) {
        quadrant = 1;
    }
    if (y < 0.0f) {
        quadrant |= 2;
    }
    ratio = y / x;
    magnitude = ratio;
    if (quadrant != 0 && quadrant != 3) {
        magnitude = -ratio;
    }
    if (magnitude < 1e-6f) {
        return D_800CD8F0_de[quadrant];
    }
    magnitude = ratio;
    if (ratio < 0.0f) {
        magnitude = -ratio;
    }
    t = (magnitude - 1.0f) / (magnitude + 1.0f);
    t2 = t * t;
    angle = (((((((-0.004054058f * t2 + 0.021861229f) * t2 - 0.055909887f) * t2 + 0.09642004f) * t2
                 - 0.13908534f) * t2 + 0.19946536f) * t2 - 0.33329856f) * t2 + 0.99999934f) * t
            + 0.7853982f;
    if (ratio < 0.0f) {
        angle = -angle;
    }
    return angle + D_800CD8F0_de[quadrant];
}
