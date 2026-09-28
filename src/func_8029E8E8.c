#include "basetypes.h"

extern f32 D_800CAC9C;
extern f32 func_802BC380(void);

f32 func_8029E8E8(f32 arg0) {
    f32 var_f0;

    if (arg0 <= 0.0f) {
        var_f0 = 0.0f;
    } else {
        var_f0 = func_802BC380();
    }
    return D_800CAC9C / var_f0;
}
