#include "common/types.h"
#include "span_1000/code_80274A24.h"
#include "span_1000/types.h"
#include "types.h"

extern f32 func_802B72B0_de(f32);
extern f32 func_802745D0_de(f32 arg0);






f32 func_802760BC_de(void *arg0, s32 arg1) {
    char *a0 = (char *)arg0;
    void *v0;
    s32 address;
    s32 scale;
    void *v1;
    f32 dx, dz;
    f32 mag;
    f32 result;

    address = (s32)a0 + arg1 * 4 + 4;
    v1 = *(void **)address;
    scale = 4;
    v0 = ((struct func_80284AF4_G2 *) ((a0 + (((arg1 + 1) % 3) * scale)) + scale))->unk0;
    dx = ((func_8024E58C_S1 *)(v0))->unk0 - ((func_8024E58C_S1 *)(v1))->unk0;
    dz = ((func_8024E58C_S1 *)(v0))->unk8 - ((func_8024E58C_S1 *)(v1))->unk8;
    mag = func_802B72B0_de((dx * dx) + (dz * dz));
    if (mag == 0.0f) {
        return 0.0f;
    }
    result = func_802745D0_de(dx / mag);
    if (!(dz < 0.0f)) {
        result = -result;
    }
    return result;
}
