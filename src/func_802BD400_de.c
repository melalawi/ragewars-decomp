#include "span_1000/code_802C224C.h"
#include "types.h"
s32 func_802BD400_de(u8 *arg0) {
    u8 *var_v1;
    var_v1 = arg0;
    if (*arg0 != 0) {
        do {
            var_v1 += 1;
        } while (*var_v1 != 0);
    }
    return var_v1 - arg0;
}
