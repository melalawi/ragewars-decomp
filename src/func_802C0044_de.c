#include "span_1000/code_802C4604.h"
#include "span_C76B0/data.h"
#include "types.h"






s16 func_802C0044_de(f32 arg0) {
    f32 f0;
    f32 f12;

    if (arg0 >= 0.0f) {
        f12 = arg0 + D_800C7CE8_de;
        f0 = D_800C7CEC_de;
        if (f0 < f12) {
            f12 = f0;
        }
    } else {
        f12 = arg0 - D_800C7CF0_de;
        f0 = D_800C7CF4_de;
        if (f12 < f0) {
            f12 = f0;
        }
    }
    return (s16)(s32)f12;
}
