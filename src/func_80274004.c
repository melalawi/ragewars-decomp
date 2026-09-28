#include "basetypes.h"

extern f32 D_800C9A04;
extern f32 D_800C9A08[];

extern void func_80274090(f32 *);

f32 func_80274004(f32 arg0, f32 arg1) {
    f32 var_f3;

    func_80274090(&arg0);
    func_80274090(&arg1);
    if (arg0 > arg1) {
        var_f3 = arg1 + D_800C9A04;
        if ((var_f3 - arg0) < (arg0 - arg1)) {
            arg1 = var_f3;
        }
    } else {
        var_f3 = arg1 - D_800C9A08[0];
        if ((arg0 - var_f3) < (arg1 - arg0)) {
            arg1 = var_f3;
        }
    }
    return arg0 - arg1;
}
