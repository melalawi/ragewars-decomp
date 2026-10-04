#include "common/types.h"
#include "span_1000/code_802A776C.h"
#include "types.h"





void func_802A7180_de(void *arg0, void *arg1) {
    s32 temp_v0;
    temp_v0 = (((struct ObjectState30_2 *) ((s8 *) arg0))->unk_4) == 0;
    (((struct ObjectState30_2 *) ((s8 *) arg0))->unk_4) = temp_v0;
    if (temp_v0 != 0) {
        (((struct ObjectState30_2 *) ((s8 *) arg0))->unk_18) = 5;
        (((struct ObjectState30_2 *) ((s8 *) arg0))->unk_1C) = (s32) (((struct State_func_8042D8C4_de *) ((s8 *) arg1))->count);
        (((struct ObjectState30_2 *) ((s8 *) arg0))->unk_20) = (f32) (((struct ObjectState30_2 *) ((s8 *) arg0))->unk_28);
        (((struct ObjectState30_2 *) ((s8 *) arg0))->unk_24) = (s32) (((struct ObjectState30_2 *) ((s8 *) arg0))->unk_2C);
        return;
    }
    (((struct ObjectState30_2 *) ((s8 *) arg0))->unk_18) = -5;
}
