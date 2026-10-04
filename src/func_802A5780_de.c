#include "span_1000/code_802A6488.h"
#include "types.h"
typedef s32 M2C_UNK;





M2C_UNK func_80279508_de(s32, void *);
M2C_UNK func_80279550_de(void *, void *);
void func_802A5780_de(s32 arg0, void *arg1, void *arg2) {
    (((struct FloatState50 *) ((s8 *) arg1))->unk_4C) = (f32) ((((struct FloatState50 *) ((s8 *) arg1))->unk_4C) - (((struct FloatStateB0 *) ((s8 *) arg2))->unk_AC));
    func_80279550_de(arg1 + 0x40, arg2);
    func_80279508_de(arg0 + 0x6A90, arg2);
}
