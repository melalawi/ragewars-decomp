#include "common/types.h"
#include "span_1000/code_8026E5DC.h"
#include "span_1000/types.h"
#include "types.h"








void *func_80272180_de(void *arg0, void *arg1, void *arg2, f32 arg3) {
    Vec3 tmp;
    f32 temp_f2;
    f32 temp_f3;
    f32 temp_f4;
    f32 temp_f5;

    temp_f5 = ((func_8024C864_S1 *)(arg1))->unk0;
    temp_f4 = ((func_8024C864_S1 *)(arg2))->unk0;
    temp_f3 = (temp_f5 * temp_f4) + (((func_8024C864_S1 *)(arg1))->unk4 * ((func_8024C864_S1 *)(arg2))->unk4) + (((func_8024C864_S1 *)(arg1))->unk8 * ((func_8024C864_S1 *)(arg2))->unk8);
    temp_f2 = (arg3 * temp_f3) + temp_f3;
    tmp.x = temp_f5 - (temp_f2 * temp_f4);
    tmp.y = ((func_8024C864_S1 *)(arg1))->unk4 - (temp_f2 * ((func_8024C864_S1 *)(arg2))->unk4);
    tmp.z = ((func_8024C864_S1 *)(arg1))->unk8 - (temp_f2 * ((func_8024C864_S1 *)(arg2))->unk8);
    *(Vec3 *)arg0 = tmp;
    return arg0;
}
