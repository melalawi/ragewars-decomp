#include "span_1000/code_8025DB64.h"
#include "span_C76B0/data.h"
#include "types.h"


extern void func_802AFF60_de(s32 arg0, s16 arg1);




void func_8025DC34_de(void *arg0, f32 arg1) {
    f32 f20 = arg1;
    f32 f0 = f20 * D_800C4020_de;
    func_802AFF60_de(((func_8025DC54_S1 *)(arg0))->unk14, (s16)(s32) f0);
    ((func_8025DC54_S1 *)(arg0))->unk2C = f20;
}
