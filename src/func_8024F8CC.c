#include "basetypes.h"

extern s32 func_80278530(s32 a, s32 b, void *c, s32 d, s32 e, void *f);
extern void func_80253E04(s32 a, s32 **b, s32 c);
extern s32 D_800D297C;

void func_8024F8CC(void *arg0, s32 **arg1) {
    s32 new_var;
    new_var = **arg1;
    func_80253E04(0, arg1, func_80278530(new_var, **(s32 **)((char *)arg0 + 0x60), (char *)arg0 + 0x17C, (s32)((char *)arg0 + ((D_800D297C << 6) + 0x68)), 0, arg0));
}
