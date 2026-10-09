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

extern f32 D_800C32F0_de, D_800C32F4_de, D_800C32F8_de, D_800C32FC_de, D_800C3300_de, D_800C3304_de;
extern f32 D_800C3308_de, D_800C330C_de, D_800C3310_de, D_800C3314_de, D_800C3318_de, D_800C331C_de;

void func_8023660C_de(char *camera, f32 a, f32 b, f32 c, f32 d) {
    {
        f32 step = D_800C32F0_de;
        f32 value = ((func_80219490_S2 *)(camera))->unk29C;

        if (func_80264B6C_de() != 0) {
            value = a;
        }
        if (value < a) {
            value += step;
            D_80103220[1] = D_800C32F4_de;
            if (a < value) {
                value = a;
            }
        } else if (a < value) {
            value -= step;
            D_80103220[1] = D_800C32F8_de;
            if (value < a) {
                value = a;
            }
        }
        ((func_80219490_S2 *)(camera))->unk29C = value;
    }
    {
        f32 step = D_800C32FC_de;
        f32 value = ((func_80219490_S2 *)(camera))->unk2A0;

        if (func_80264B6C_de() != 0) {
            value = b;
        }
        if (value < b) {
            value += step;
            D_80103220[1] = D_800C3300_de;
            if (b < value) {
                value = b;
            }
        } else if (b < value) {
            value -= step;
            D_80103220[1] = D_800C3304_de;
            if (value < b) {
                value = b;
            }
        }
        ((func_80219490_S2 *)(camera))->unk2A0 = value;
    }
    {
        f32 step = D_800C3308_de;
        f32 value = ((func_80219490_S2 *)(camera))->unk2A4;

        if (func_80264B6C_de() != 0) {
            value = c;
        }
        if (value < c) {
            value += step;
            D_80103220[1] = D_800C330C_de;
            if (c < value) {
                value = c;
            }
        } else if (c < value) {
            value -= step;
            D_80103220[1] = D_800C3310_de;
            if (value < c) {
                value = c;
            }
        }
        ((func_80219490_S2 *)(camera))->unk2A4 = value;
    }
    {
        f32 step = D_800C3314_de;
        f32 value = ((func_80219490_S2 *)(camera))->unk2A8;

        if (func_80264B6C_de() != 0) {
            value = d;
        }
        if (value < d) {
            value += step;
            D_80103220[1] = D_800C3318_de;
            if (d < value) {
                value = d;
            }
        } else if (d < value) {
            value -= step;
            D_80103220[1] = D_800C331C_de;
            if (value < d) {
                value = d;
            }
        }
        ((func_80219490_S2 *)(camera))->unk2A8 = value;
    }
}
