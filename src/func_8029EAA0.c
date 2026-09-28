#include "basetypes.h"

extern f64 func_8029E9DC(f64 arg0);
extern const f64 D_800CACD8;
extern const f64 D_800CACE0;
extern const f64 D_800CACE8;

f64 func_8029EAA0(f64 arg0, f64 *arg2) {
    f64 temp;
    f64 integral;
    f64 limit;

    limit = D_800CACD8;
    if (limit <= arg0) {
        integral = arg0;
    } else {
        if (arg0 < D_800CACE0) {
            integral = -func_8029E9DC(-arg0);
        } else {
            temp = arg0;
            temp += limit;
            temp -= limit;
            if (arg0 < temp) {
                integral = temp - D_800CACE8;
            } else {
                integral = temp;
            }
        }
    }
    *arg2 = integral;
    return arg0 - integral;
}
