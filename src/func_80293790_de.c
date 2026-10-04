#include "common/types.h"
#include "span_1000/code_8029193C.h"
#include "types.h"







extern func_802077F4_S2 D_800C5494;
extern int func_80264B6C_de(void);

void func_80293790_de(void *arg0, s32 arg1) {
    s32 saved;

    saved = ((func_80293774_S1 *)(arg0))->unk26DB8;
    ((func_80293774_S1 *)(arg0))->unk26DC1 = 1;
    ((func_80293774_S1 *)(arg0))->unk26DC4.v0 = 0;
    ((func_80293774_S1 *)(arg0))->unk26DB8 = 0x14;
    ((func_80293774_S1 *)(arg0))->unk26DBC = arg1;
    ((func_80293774_S1 *)(arg0))->unk26DB4 = saved;
    if (func_80264B6C_de() != 0) {
        ((func_80293774_S1 *)(arg0))->unk26DC4.v1 = D_800C5494.unk4;
    }
}
