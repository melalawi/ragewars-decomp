#include "common/types_8a8189af7b05.h"
#include "span_1000/code_802393F4.h"
#include "types.h"



extern void func_80271F68_de(Vec3 *out, void *arg1, void *arg2);
extern f32 func_802B72B0_de(f32);







f32 func_80239678_de(void *arg0, void *arg1) {
    Vec3 position;
    f32 sum;
    void *node;
    f64 divisor;
    s32 count;

    if (((func_80239668_S1 *)(arg0))->unk30 == 0) {
        return 0.0f;
    }
    node = ((func_80239668_S1 *)(arg0))->unk20;
    sum = 0.0f;
    if (node != 0) {
        do {
            func_80271F68_de(&position, &((func_80239668_S2 *)(node))->unk128, arg1);
            sum += func_802B72B0_de(
                (position.x * position.x) +
                (position.y * position.y) +
                (position.z * position.z));
            node = ((func_80239668_S2 *)(node))->unk4;
        } while (node != 0);
    }
    count = ((func_80239668_S1 *)(arg0))->unk30;
    divisor = (f64)count;
    if (count < 0) {
        divisor += D_800C3550_de;
    }
    return sum / (f32)divisor;
}
