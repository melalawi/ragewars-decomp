#include "basetypes.h"

extern f32 func_802BC380(f32);

s32 func_802725BC(f32 *arg0, f32 arg1) {
    f32 magSq;
    f32 mag;
    f32 scale;

    magSq = (arg0[0] * arg0[0]) + (arg0[1] * arg0[1]) + (arg0[2] * arg0[2]);
    if ((arg1 * arg1) < magSq) {
        mag = func_802BC380(magSq);
        if (mag == 0.0f) {
            return 0;
        }
        scale = arg1 / mag;
        arg0[0] = arg0[0] * scale;
        arg0[1] = arg0[1] * scale;
        arg0[2] = arg0[2] * scale;
        return 1;
    }
    return 0;
}
