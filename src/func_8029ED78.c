#include "basetypes.h"

extern f32 D_800CAD68;
extern f32 D_800CAD6C;
extern f32 D_800CAD70;
extern f32 D_800CAD78;
extern f32 D_800CAD80;
extern f32 D_800CAD88;

f32 func_8029ED78(f32 arg0) {
    f32 temp_f2;
    f32 temp_f3;
    f32 var_f0;
    f32 var_f1;

    var_f1 = arg0;
    if (arg0 < 0.0f) {
        var_f1 = -arg0;
    }
    temp_f3 = (var_f1 - D_800CAD68) / (var_f1 + D_800CAD68);
    temp_f2 = temp_f3 * temp_f3;
    var_f0 = (((((((((((((((temp_f2 * D_800CAD6C) + D_800CAD70) * temp_f2) - *(&D_800CAD70 + 1)) * temp_f2) + D_800CAD78) * temp_f2) - *(&D_800CAD78 + 1)) * temp_f2) + D_800CAD80) * temp_f2) - *(&D_800CAD80 + 1)) * temp_f2) + D_800CAD88) * temp_f3) + *(&D_800CAD88 + 1);
    if (arg0 < 0.0f) {
        var_f0 = -var_f0;
    }
    return var_f0;
}
