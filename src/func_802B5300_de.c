#include "span_1000/code_802BA18C.h"
#include "types.h"

extern const f64 D_800C7710_de;
extern const f64 D_800C7718_de;
extern const f64 D_800C7720_de;
extern const f64 D_800C7728_de;
extern const f64 D_800C7730_de;

f64 func_802B5300_de(f64 arg0, s32 *arg2) {
    f64 value;

    *arg2 = 0;
    if (arg0 == D_800C7710_de) {
        return arg0;
    }
    value = __builtin_fabs(arg0);
    if (D_800C7718_de <= value) {
        do {
            value *= D_800C7720_de;
            *arg2 += 1;
        } while (D_800C7718_de <= value);
    }
    if (value < D_800C7728_de) {
        do {
            value += value;
            *arg2 -= 1;
        } while (value < D_800C7728_de);
    }
    if (!(D_800C7730_de < arg0)) {
        value = -value;
    }
    return value;
}
