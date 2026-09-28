#include "basetypes.h"

extern f32 D_800C9080[];
extern f32 D_800C9088;
extern f32 func_802745D4(f32 arg0);

f32 func_8025C30C(u8 arg0, u8 arg1) {
    f32 first;
    f32 second;

    first = arg0 * D_800C9080[1];
    second = arg1 * D_800C9080[1];
    if (first == D_800C9088) {
        return D_800C9088;
    }
    if (second == first) {
        return first;
    }
    return first + func_802745D4(second - first);
}
