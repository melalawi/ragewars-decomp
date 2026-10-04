#include "span_1000/code_802647BC.h"
#include "types.h"

s32 func_80265550_de(u32 *arg0, s32 arg1, u32 arg2, s32 *arg3, s32 *arg4) {
    u32 temp_v1;
    u32 var_a3;
    s32 var_t0;
    s32 found;

    if (arg1 != 0) {
        var_t0 = arg1 - 1;
        var_a3 = 0;
        if (var_t0 != 0) {
            do {
                temp_v1 = (u32)(var_a3 + var_t0) >> 1;
                if (arg0[temp_v1] < arg2) {
                    var_a3 = temp_v1 + 1;
                } else {
                    var_t0 = temp_v1;
                }
            } while (var_a3 < (u32)var_t0);
        }
        if (arg0[var_a3] == arg2) {
            found = var_a3;
        } else {
            found = -1;
        }
    } else {
        found = -1;
    }

    if (found == -1) {
        return 0;
    }

    var_t0 = found - 1;
    while ((var_t0 != -1) && (arg0[var_t0] == arg2)) {
        var_t0--;
    }
    *arg3 = var_t0 + 1;

    found++;
    while ((found < arg1) && (arg0[found] == arg2)) {
        found++;
    }
    *arg4 = found - 1;
    return 1;
}
