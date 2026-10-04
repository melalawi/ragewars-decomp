#include "span_1000/code_8023940C.h"
#include "types.h"

extern f32 D_800C359C_de;
extern f32 D_800C35A0_de;
extern f32 D_800FF220[];

extern s32 func_80264B6C_de(void);

f32 func_8023A294_de(s32 arg0, f32 value, f32 target, f32 step) {
    if (func_80264B6C_de() != 0) {
        value = target;
    }
    if (value < target) {
        value += step;
        D_800FF220[1] = D_800C359C_de;
        if (target < value) {
            value = target;
        }
    } else if (target < value) {
        value -= step;
        D_800FF220[1] = D_800C35A0_de;
        if (value < target) {
            value = target;
        }
    }
    return value;
}
