/* Updates a view's heading from its controller: clears its turn rates, takes the base angles from the controller's preset (or the heading from its default yaw), adds the stick turn derived from func_80274B00 of the two stick axes, nudges it up for flag 0x40 and down for flag 0x80, caps it at the limit, optionally records the heading and the pitch step over the step count and the current pitch, and finally maps the heading through the 60-entry curve table D_800D0B2C with linear interpolation. The turn is truncated to 16 bits into an int, and the next table index is its own s16. */
#include "basetypes.h"

typedef struct Bytes12 {
    char bytes[12];
} Bytes12;

typedef struct Angles {
    u16 heading;
    u16 pitch;
    u16 target;
    s16 steps;
} Angles;

typedef struct Controller {
    char pad0[6];
    u16 flags;
    char pad8[2];
    s16 preset;
    char padC[4];
    s16 yaw;
} Controller;

typedef struct Motion {
    char pad0[0x14];
    f32 heading;
    char pad18[0x48 - 0x18];
    f32 rate1;
    f32 rate2;
} Motion;

typedef struct View {
    char pad0[0x10];
    Motion motion;
    Angles angles;
    char pad68[4];
    f32 pitch;
    f32 pitchStep;
    char pad74[0xB0 - 0x74];
    s32 presets;
} View;

extern f32 D_800C8FF8;
extern f32 D_800C9000;
extern f32 D_800C9004;
extern f32 D_800C9008;
extern f32 D_800D0B28;

extern Bytes12 *func_80258BFC(s32, s32);
extern s16 func_802B2340(f32);
extern f32 func_802B2350(s32);
extern s32 func_8025E5A4(Controller *);
extern s32 func_8025E5B0(Controller *);
extern f32 func_80274B00(f32, f32);

#define ABS(x) ((x) < 0.0f ? -(x) : (x))

void func_80259C7C(View *view, Controller *controller, s32 flags) {
    s16 x;
    s16 y;
    f32 fx;
    f32 fy;
    s32 turn;
    f32 diff;
    f32 position;
    s16 index;
    s16 next;
    f32 base;
    f32 result;
    Motion *motion;
    Angles *angles;

    motion = &view->motion;
    angles = &view->angles;
    motion->rate1 = motion->rate2 = 0.0f;
    if (controller->preset != -1) {
        *(Bytes12 *)angles = *func_80258BFC(view->presets, controller->preset);
    } else {
        angles->heading = func_802B2340(controller->yaw);
    }
    x = func_8025E5A4(controller);
    y = func_8025E5B0(controller);
    fy = y;
    fx = x;
    turn = (s16)(s32)(fx + ABS(func_80274B00(fy, fx)));
    angles->heading = func_802B2340(func_802B2350(angles->heading) + turn);
    if (flags & 0x40) {
        angles->heading = func_802B2340(func_802B2350(angles->heading) + *(&D_800C8FF8 + 1));
    }
    if (flags & 0x80) {
        angles->heading = func_802B2340(func_802B2350(angles->heading) - D_800C9000);
    }
    if (func_802B2350(angles->heading) >= D_800C9004) {
        angles->heading = func_802B2340(D_800C9004);
    }
    if (controller->flags & 2) {
        motion->heading = func_802B2350(angles->heading);
        diff = func_802B2350(angles->pitch);
        diff -= func_802B2350(angles->target);
        if (angles->steps == 0) {
            view->pitchStep = 0.0f;
        } else {
            view->pitchStep = diff / angles->steps;
        }
        view->pitch = func_802B2350(angles->pitch);
    }
    position = (func_802B2350(angles->heading) + D_800C9008) * *(&D_800C9008 + 1);
    index = position;
    if (index != position) {
        next = index + 1;
        base = (&D_800D0B28 + 1)[index];
        result = base + (position - index) * ((&D_800D0B28 + 1)[next] - base);
    } else {
        result = (&D_800D0B28 + 1)[index];
    }
    motion->heading = result;
    angles->heading = func_802B2340(result);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C3E3C_4 = 1000.0f;
const float unbake_rodata_800C3E40_4 = 1000.0f;
const float unbake_rodata_800C3E44_4 = 1200.0f;
const float unbake_rodata_800C3E48_4 = 6000.0f;
const float unbake_rodata_800C3E4C_4 = 0.0166666675f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C8FFC_4 = 1000.0f;
const float unbake_rodata_800C9000_4 = 1000.0f;
const float unbake_rodata_800C9004_4 = 1200.0f;
const float unbake_rodata_800C9008_4 = 6000.0f;
const float unbake_rodata_800C900C_4 = 0.0166666675f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C41BC_4 = 1000.0f;
const float unbake_rodata_800C41C0_4 = 1000.0f;
const float unbake_rodata_800C41C4_4 = 1200.0f;
const float unbake_rodata_800C41C8_4 = 6000.0f;
const float unbake_rodata_800C41CC_4 = 0.0166666675f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C41FC_4 = 1000.0f;
const float unbake_rodata_800C4200_4 = 1000.0f;
const float unbake_rodata_800C4204_4 = 1200.0f;
const float unbake_rodata_800C4208_4 = 6000.0f;
const float unbake_rodata_800C420C_4 = 0.0166666675f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C3F0C_4 = 1000.0f;
const float unbake_rodata_800C3F10_4 = 1000.0f;
const float unbake_rodata_800C3F14_4 = 1200.0f;
const float unbake_rodata_800C3F18_4 = 6000.0f;
const float unbake_rodata_800C3F1C_4 = 0.0166666675f;
#endif
