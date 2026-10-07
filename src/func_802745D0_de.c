#include "span_1000/code_8027451C.h"
#include "shared/func_802745D0_de_closed.h"

f32 func_802745D0_de(f32 arg0) {
    f32 temp_f1;
    f32 temp_f2;
    f32 temp_f2_2;
    s32 temp_f4;
    s32 var_v1;

    var_v1 = 1;
    if (arg0 < 0.0f) {
        temp_f1 = arg0 * D_800C494C_de;
    } else {
        temp_f1 = arg0 * D_800C4950_de;
        var_v1 = 0;
    }
    temp_f4 = (s32) temp_f1;
    if ((f32) temp_f4 < D_800C4954_de) {
        temp_f2_2 = D_800CC3DC[temp_f4];
        temp_f2 = temp_f2_2 + ((temp_f1 - (f32) temp_f4) * (D_800CC3E0[temp_f4] - temp_f2_2));
        if (var_v1 != 0) {
            return D_800C4958_de - temp_f2;
        }
        return temp_f2;
    }
    if (var_v1 != 0) {
        temp_f1 = D_800CD3D8;
        return D_800C495C_de - temp_f1;
    }
    return D_800CD3D8;
}
