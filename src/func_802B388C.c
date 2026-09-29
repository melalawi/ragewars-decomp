#include "basetypes.h"

extern f64 D_800CC560;
extern f64 D_800CC568;
extern f32 D_800CC570;

typedef struct func_802B388C_S1 func_802B388C_S1;
struct func_802B388C_S1 {
    char pad0[0x40];
    s32 unk40;
};

f32 func_802B388C(void **arg0, s32 arg1, s32 arg2) {
    f64 angle;
    f32 arg1f;
    f32 scaled;
    s32 temp_v0;
    f64 val;

    angle = (f64)arg2;
    arg1f = (f32)arg1;
    if (arg2 < 0) {
        angle += D_800CC560;
    }
    temp_v0 = ((func_802B388C_S1 *)((*arg0)))->unk40;
    scaled = arg1f * (f32)angle;
    val = (f64)temp_v0;
    if (temp_v0 < 0) {
        val += D_800CC568;
    }
    return scaled / ((f32)val * D_800CC570);
}
