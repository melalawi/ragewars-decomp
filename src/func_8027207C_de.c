#include "common/types.h"
#include "span_1000/code_8026E5DC.h"
#include "types.h"

extern f32 func_802B72B0_de(f32);
extern char D_800C48A8_de;




void func_8027207C_de(f32 *arg0) {
    f32 mag;
    f32 scale;

    mag = func_802B72B0_de((arg0[0] * arg0[0]) + (arg0[1] * arg0[1]) + (arg0[2] * arg0[2]));
    if (mag != 0.0f) {
        scale = ((func_802077F4_S2 *)(&D_800C48A8_de))->unk4 / mag;
        arg0[0] = arg0[0] * scale;
        arg0[1] = arg0[1] * scale;
        arg0[2] = arg0[2] * scale;
    }
}
