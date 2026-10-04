#include "span_1000/code_80260D98.h"
#include "types.h"

u32 func_80261614_de(s32 arg0) {
    u32 var_a1;
    u32 var_a2;
    u32 var_v1;

    var_a1 = 0;
    var_a2 = 0;
    var_v1 = 0;
    do {
        if (arg0 & (u32)(1 << var_v1)) {
            var_a1 += 1;
            var_a2 = var_v1;
        }
        var_v1 += 1;
    } while (var_v1 < 0x20U);
    if (var_a1 >= 2U) {
        return var_a2 + 1;
    }
    return var_a2;
}
