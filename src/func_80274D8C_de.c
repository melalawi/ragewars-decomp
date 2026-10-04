#include "common/types.h"
#include "span_1000/code_80274A24.h"
#include "span_1000/types.h"
#include "types.h"








/** Half-plane test: is arg1 on the positive side of arg0's normal (at +0x30)? */
s32 func_80274D8C_de(void *arg0, void *arg1) {
    Vec3 normal;
    Vec3 delta;
    s32 result;

    normal = ((func_80274DFC_S1 *)(arg0))->unk30;
    delta.x = ((func_8024E58C_S1 *)(arg1))->unk0 - ((func_80274DFC_S1 *)(arg0))->unk0;
    delta.z = ((func_8024E58C_S1 *)(arg1))->unk8 - ((func_80274DFC_S1 *)(arg0))->unk8;
    result = 0;
    if (!(((normal.x * delta.x) + (normal.z * delta.z)) <= 0.0f)) {
        result = 1;
    }
    return result;
}
