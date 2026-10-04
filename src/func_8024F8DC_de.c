#include "span_1000/code_8024E6C8.h"
#include "types.h"

extern s32 func_802784C0_de(s32 a, s32 b, void *c, s32 d, s32 e, void *f);
extern void func_80253E64_de(s32 a, s32 **b, s32 c);
extern s32 D_800CD72C;




void func_8024F8DC_de(void *arg0, s32 **arg1) {
    s32 new_var;
    new_var = **arg1;
    func_80253E64_de(0, arg1, func_802784C0_de(new_var, *((func_8024F8CC_S1 *)(arg0))->unk60, &((func_8024F8CC_S1 *)(arg0))->unk17C, (s32)((char *)arg0 + ((D_800CD72C << 6) + 0x68)), 0, arg0));
}
