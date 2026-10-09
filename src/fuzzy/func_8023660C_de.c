#include "common/types_8fd754e1e915.h"
#include "span_1000/code_80233920.h"
#include "span_1000/code_8028FC98.h"
#include "n64sdk.h"
#include "gbi.h"
#include "types.h"

/* Eases a camera's four framing values at 0x29C, 0x2A0, 0x2A4 and 0x2A8 toward their targets by 16 each
 * frame, snapping to the targets when func_80264B6C_de reports a cut and recording the easing rate 30 in
 * D_80103220[1] whenever a value moves. Adapted from func_8023A294_de as a static helper.
 */

extern f32 D_80103220[];
extern s32 func_80264B6C_de(void);

static inline f32 approach(f32 value, f32 target, f32 step, f32 rise, f32 fall) {
    if (func_80264B6C_de() != 0) {
        value = target;
    }
    if (value < target) {
        value += step;
        D_80103220[1] = rise;
        if (target < value) {
            value = target;
        }
    } else if (target < value) {
        value -= step;
        D_80103220[1] = fall;
        if (value < target) {
            value = target;
        }
    }
    return value;
}

extern f32 D_800C32F0_de, D_800C32F4_de, D_800C32F8_de, D_800C32FC_de, D_800C3300_de, D_800C3304_de;
extern f32 D_800C3308_de, D_800C330C_de, D_800C3310_de, D_800C3314_de, D_800C3318_de, D_800C331C_de;

void func_8023660C_de(char *camera, f32 a, f32 b, f32 c, f32 d) {
    ((func_80219490_S2 *)(camera))->unk29C = approach(((func_80219490_S2 *)(camera))->unk29C, a, D_800C32F0_de, D_800C32F4_de, D_800C32F8_de);
    ((func_80219490_S2 *)(camera))->unk2A0 = approach(((func_80219490_S2 *)(camera))->unk2A0, b, D_800C32FC_de, D_800C3300_de, D_800C3304_de);
    ((func_80219490_S2 *)(camera))->unk2A4 = approach(((func_80219490_S2 *)(camera))->unk2A4, c, D_800C3308_de, D_800C330C_de, D_800C3310_de);
    ((func_80219490_S2 *)(camera))->unk2A8 = approach(((func_80219490_S2 *)(camera))->unk2A8, d, D_800C3314_de, D_800C3318_de, D_800C331C_de);
}
