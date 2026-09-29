/* Updates a rotor: while the control mask bit is held its throttle at 0x208 rises by the descriptor rate up
 * to D_800C86E0, otherwise it falls to zero (returning 1 once idle); the value phase advances, the two wrap
 * angles at 0x1C and 0x20 advance and wrap at D_800C86E8, and the speed at 0x210 becomes the descriptor
 * base plus trim, plus the boost when requested and the host is not stalled, or else the host's speed
 * scaled by the descriptor (flag 1) or the fallback speed (flag 2). Returns 0 while active. */
#include "basetypes.h"

typedef struct {
    char pad0[8];
    f32 spinRate;
    char padC[4];
    f32 phaseRate;
    f32 baseSpeed;
    char pad18[4];
    f32 hostScale;
    f32 throttleRate;
    char pad24[5];
    u8 flags;
} Descriptor;

typedef struct {
    char pad0[0xC];
    Descriptor *descriptor;
    u16 mask;
    char pad12[0xA];
    f32 angleA;
    f32 angleB;
    char pad24[0x1E4];
    f32 throttle;
    f32 phase;
    f32 speed;
    f32 phaseScale;
    char pad218[4];
    f32 trim;
} Rotor;

typedef struct {
    char pad0[0x24];
    s32 stalled;
    char pad28[0x104];
    f32 speed;
} Host;

extern f32 D_800C86E0;
extern f32 D_800C86E4;
extern f32 D_800C86E8;
extern f32 D_800D2988;
extern f32 D_800D2994;

typedef struct func_8023B708_S1 func_8023B708_S1;
struct func_8023B708_S1 {
    char pad0[0x4];
    f32 unk4;
};

s32 func_8023B708(Rotor *rotor, s32 mask, f32 fallback, s32 boosting, f32 boost, Host *host) {
    Descriptor *descriptor;
    f32 throttle;
    f32 value;
    f32 angle;
    f32 speed;
    f32 lowered;
    f32 zero;
    f32 wrap;

    descriptor = rotor->descriptor;
    if (rotor->mask & mask) {
        throttle = rotor->throttle + descriptor->throttleRate * D_800D2988;
        if (D_800C86E0 < throttle) {
            throttle = D_800C86E0;
        }
        rotor->throttle = throttle;
    } else {
        zero = 0.0f;
        value = rotor->throttle;
        if (value == zero) {
            return 1;
        }
        lowered = value - descriptor->throttleRate * D_800D2988;
        if (lowered < zero) {
            lowered = zero;
        }
        rotor->throttle = lowered;
    }
    rotor->phase += D_800D2988 * descriptor->phaseRate * rotor->phaseScale;
    value = D_800D2988 * D_800D2994 * descriptor->spinRate;
    angle = rotor->angleA + value * D_800C86E4;
    wrap = D_800C86E8;
    rotor->angleA = angle;
    if (wrap < angle) {
        rotor->angleA = angle - wrap;
    }
    angle = rotor->angleB + value * ((func_8023B708_S1 *)(&D_800C86E8))->unk4;
    rotor->angleB = angle;
    if (wrap < angle) {
        rotor->angleB = angle - wrap;
    }
    speed = descriptor->baseSpeed + rotor->trim;
    if (boosting != 0 && host->stalled == 0) {
        speed += boost;
    } else if (descriptor->flags & 1) {
        speed += host->speed * descriptor->hostScale;
    } else if (descriptor->flags & 2) {
        speed += fallback;
    }
    rotor->speed = speed;
    return 0;
}
