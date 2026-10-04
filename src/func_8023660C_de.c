#include "common/types.h"
#include "span_1000/code_80233C78.h"
#include "types.h"
/* Eases a camera's four framing values at 0x29C, 0x2A0, 0x2A4 and 0x2A8 toward their targets by 16 each
 * frame, snapping to the targets when func_80264B6C_de reports a cut and recording the easing rate 30 in
 * D_80103220[1] whenever a value moves. Adapted from func_8023A294_de as a static helper.
 */

extern f32 D_800FF220[];
extern s32 func_80264B6C_de(void);

static inline f32 approach(f32 value, f32 target, f32 step) {
    if (func_80264B6C_de() != 0) {
        value = target;
    }
    if (value < target) {
        value += step;
        D_800FF220[1] = 30.0f;
        if (target < value) {
            value = target;
        }
    } else if (target < value) {
        value -= step;
        D_800FF220[1] = 30.0f;
        if (value < target) {
            value = target;
        }
    }
    return value;
}




void func_8023660C_de(char *camera, f32 a, f32 b, f32 c, f32 d) {
    ((func_80219490_S2 *)(camera))->unk29C = approach(((func_80219490_S2 *)(camera))->unk29C, a, 16.0f);
    ((func_80219490_S2 *)(camera))->unk2A0 = approach(((func_80219490_S2 *)(camera))->unk2A0, b, 16.0f);
    ((func_80219490_S2 *)(camera))->unk2A4 = approach(((func_80219490_S2 *)(camera))->unk2A4, c, 16.0f);
    ((func_80219490_S2 *)(camera))->unk2A8 = approach(((func_80219490_S2 *)(camera))->unk2A8, d, 16.0f);
}
