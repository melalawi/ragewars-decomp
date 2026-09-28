#include "basetypes.h"

extern f32 D_800C9A38;
extern f32 D_800C9A40;
extern f32 D_800C9A44;
extern f32 D_800C9A48;
extern f32 D_800C9A4C;
extern f32 D_800D162C;
extern f32 D_800D1630;
extern f32 D_800D2628;

f32 func_80274640(f32 arg0) {
    f32 temp_f1;
    f32 temp_f2;
    f32 temp_f2_2;
    s32 temp_f4;
    s32 var_v1;

    var_v1 = 1;
    if (arg0 < 0.0f) {
        temp_f1 = arg0 * *(&D_800C9A38 + 1);
    } else {
        temp_f1 = arg0 * D_800C9A40;
        var_v1 = 0;
    }
    temp_f4 = (s32) temp_f1;
    if ((f32) temp_f4 < D_800C9A44) {
        temp_f2_2 = (&D_800D162C)[temp_f4];
        temp_f2 = temp_f2_2 + ((temp_f1 - (f32) temp_f4) * ((&D_800D1630)[temp_f4] - temp_f2_2));
        if (var_v1 != 0) {
            return D_800C9A48 - temp_f2;
        }
        return temp_f2;
    }
    if (var_v1 != 0) {
        temp_f1 = D_800D2628;
        return D_800C9A4C - temp_f1;
    }
    return D_800D2628;
}
