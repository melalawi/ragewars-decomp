#include "basetypes.h"

extern f64 func_8029E9DC(f64 arg0);
extern const f64 D_800CACA0;
extern const f64 D_800CACA8;
extern const f64 D_800CACB0;

f64 func_8029E964(f64 arg0) {
    f64 temp;
    f64 integral;
    f64 limit;

    limit = D_800CACA0;
    if (limit <= arg0) {
        return arg0;
    }
    if (arg0 < D_800CACA8) {
        return -func_8029E9DC(-arg0);
    }
    temp = arg0;
    temp += limit;
    temp -= limit;
    if (arg0 < temp) {
        integral = temp - D_800CACB0;
    } else {
        integral = temp;
    }
    return integral;
}
