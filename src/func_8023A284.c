#include "basetypes.h"

extern f32 D_800C868C;
extern f32 D_800C8690;
extern f32 D_80103220[];

extern s32 func_80264B8C(void);

f32 func_8023A284(s32 arg0, f32 value, f32 target, f32 step) {
    if (func_80264B8C() != 0) {
        value = target;
    }
    if (value < target) {
        value += step;
        D_80103220[1] = D_800C868C;
        if (target < value) {
            value = target;
        }
    } else if (target < value) {
        value -= step;
        D_80103220[1] = D_800C8690;
        if (value < target) {
            value = target;
        }
    }
    return value;
}
