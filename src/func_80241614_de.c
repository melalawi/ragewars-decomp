#include "common/types_8a8189af7b05.h"
#include "span_1000/code_802412C0.h"
#include "types.h"






s32 func_80241614_de(void *arg0, void *arg1, f32 arg2, void *arg3) {
    f32 dx = *(f32 *)arg1 - *(f32 *)arg3;
    f32 dz = ((func_80212828_S7 *)(arg1))->unk8 - ((func_80212828_S7 *)(arg3))->unk8;
    s32 result = 1;
    if (!((dx * dx + dz * dz) <= (arg2 * arg2))) {
        result = 0;
    }
    return result;
}
