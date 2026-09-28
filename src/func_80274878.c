#include "basetypes.h"

extern f32 D_800D2988;

f32 func_80274878(f32 arg0, f32 arg1, f32 arg2) {
    f32 value;
    value = arg0;
    if (value < arg1) {
        value += arg2 * D_800D2988;
        if (arg1 < value) {
            value = arg1;
        }
    }
    else if (arg1 < value) {
        value -= arg2 * D_800D2988;
        if (value < arg1) {
            value = arg1;
        }
    }
    return value;
}
