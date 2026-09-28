#include "basetypes.h"
f64 func_8029C278(f64, f64);
f32 func_8029E924(f32 arg0, f32 arg1) {
    f32 var_f0;
    var_f0 = (f32) func_8029C278((f64) arg0, (f64) arg1);
    if (var_f0 < arg1) {
        var_f0 += arg1;
    }
    return var_f0;
}
