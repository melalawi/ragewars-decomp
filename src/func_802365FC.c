/* Eases a camera's four framing values at 0x29C, 0x2A0, 0x2A4 and 0x2A8 toward their targets by 16 each
 * frame, snapping to the targets when func_80264B8C reports a cut and recording the easing rate 30 in
 * D_80103220[1] whenever a value moves. Adapted from func_8023A284 as a static helper.
 */
#include "basetypes.h"

extern f32 D_80103220[];
extern s32 func_80264B8C(void);

static inline f32 approach(f32 value, f32 target, f32 step) {
    if (func_80264B8C() != 0) {
        value = target;
    }
    if (value < target) {
        value += step;
        D_80103220[1] = 30.0f;
        if (target < value) {
            value = target;
        }
    } else if (target < value) {
        value -= step;
        D_80103220[1] = 30.0f;
        if (value < target) {
            value = target;
        }
    }
    return value;
}

typedef struct func_802365FC_S1 func_802365FC_S1;
struct func_802365FC_S1 {
    char pad0[0x29C];
    f32 unk29C;
    char pad29C[0x2A0 - 0x29C - sizeof(f32)];
    f32 unk2A0;
    char pad2A0[0x2A4 - 0x2A0 - sizeof(f32)];
    f32 unk2A4;
    char pad2A4[0x2A8 - 0x2A4 - sizeof(f32)];
    f32 unk2A8;
};

void func_802365FC(char *camera, f32 a, f32 b, f32 c, f32 d) {
    ((func_802365FC_S1 *)(camera))->unk29C = approach(((func_802365FC_S1 *)(camera))->unk29C, a, 16.0f);
    ((func_802365FC_S1 *)(camera))->unk2A0 = approach(((func_802365FC_S1 *)(camera))->unk2A0, b, 16.0f);
    ((func_802365FC_S1 *)(camera))->unk2A4 = approach(((func_802365FC_S1 *)(camera))->unk2A4, c, 16.0f);
    ((func_802365FC_S1 *)(camera))->unk2A8 = approach(((func_802365FC_S1 *)(camera))->unk2A8, d, 16.0f);
}
