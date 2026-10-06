#include "span_1000/code_802591C0.h"
#include "span_1000/code_802591C0.h"
#include "span_1000/code_8025A3EC.h"
/* Phase1 source candidate; contract holds and immutable inputs in per-function JSON. */
#include "common/unused.h"
#include "span_C76B0/data.h"
#include "types.h"
/* Updates a view's heading from its controller: clears its turn rates, takes the base angles from the controller's preset (or the heading from its default yaw), adds the stick turn derived from func_80274A90_de of the two stick axes, nudges it up for flag 0x40 and down for flag 0x80, caps it at the limit, optionally records the heading and the pitch step over the step count and the current pitch, and finally maps the heading through the 60-entry curve table D_800CB8EC with linear interpolation. The turn is truncated to 16 bits into an int, and the next table index is its own s16. */











extern struct Bytes12 *func_80258BDC_de(s32, s32);
extern s16 func_802AD270_de(f32);
#if defined(VERSION_EU)
extern f32 func_802AD520_eu(s32);
#define RW_BITS_TO_FLOAT func_802AD520_eu
#else
extern f32 func_802AD280_de(s32);
#define RW_BITS_TO_FLOAT func_802AD280_de
#endif
extern s32 func_8025E584_de(Controller_func_80259C5C_de *);
extern s32 func_8025E590_de(Controller_func_80259C5C_de *);
extern f32 func_80274A90_de(f32, f32);

#define ABS(x) ((x) < 0.0f ? -(x) : (x))

void func_80259C5C_de(View_func_80259C5C_de *view, Controller_func_80259C5C_de *controller, s32 flags) {
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
    struct Motion *motion;
    struct Angles *angles;

    motion = &view->motion;
    angles = &view->angles;
    motion->rate1 = motion->rate2 = 0.0f;
    if (controller->preset != -1) {
        *(struct Bytes12 *)angles = *func_80258BDC_de(view->presets, controller->preset);
    } else {
        angles->heading = func_802AD270_de(controller->yaw);
    }
    x = func_8025E584_de(controller);
    y = func_8025E590_de(controller);
    fy = y;
    fx = x;
    turn = (s16)(s32)(fx + ABS(func_80274A90_de(fy, fx)));
    angles->heading = func_802AD270_de(RW_BITS_TO_FLOAT(angles->heading) + turn);
    if (flags & 0x40) {
        angles->heading = func_802AD270_de(RW_BITS_TO_FLOAT(angles->heading) + D_800C3F0C_de);
    }
    if (flags & 0x80) {
        angles->heading = func_802AD270_de(RW_BITS_TO_FLOAT(angles->heading) - D_800C3F10_de);
    }
    if (RW_BITS_TO_FLOAT(angles->heading) >= D_800C3F14_de) {
        angles->heading = func_802AD270_de(D_800C3F14_de);
    }
    if (controller->flags & 2) {
        motion->heading = RW_BITS_TO_FLOAT(angles->heading);
        diff = RW_BITS_TO_FLOAT(angles->pitch);
        diff -= RW_BITS_TO_FLOAT(angles->target);
        if (angles->steps == 0) {
            view->pitchStep = 0.0f;
        } else {
            view->pitchStep = diff / angles->steps;
        }
        view->pitch = RW_BITS_TO_FLOAT(angles->pitch);
    }
    position = (RW_BITS_TO_FLOAT(angles->heading) + D_800C3F18_de) * D_800C3F1C_de;
    index = position;
    if (index != position) {
        next = index + 1;
        base = D_800CB8EC[index];
        result = base + (position - index) * (D_800CB8EC[next] - base);
    } else {
        result = D_800CB8EC[index];
    }
    motion->heading = result;
    angles->heading = func_802AD270_de(result);
}

