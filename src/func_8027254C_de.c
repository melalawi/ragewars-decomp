#include "span_1000/code_8027230C.h"
#include "types.h"

extern f32 func_802B72B0_de(f32);

s32 func_8027254C_de(f32 *arg0, f32 arg1) {
    f32 magSq;
    f32 mag;
    f32 scale;

    magSq = (arg0[0] * arg0[0]) + (arg0[1] * arg0[1]) + (arg0[2] * arg0[2]);
    if ((arg1 * arg1) < magSq) {
        mag = func_802B72B0_de(magSq);
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
