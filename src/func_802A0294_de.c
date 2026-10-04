#include "span_1000/code_8029FF18.h"
#include "types.h"

/** strncpy: copy up to arg2 bytes from arg1 to arg0, NUL-padding the remainder. */
u8 *func_802A0294_de(u8 *arg0, u8 *arg1, s32 arg2) {
    s32 var_a2;
    u8 *temp_v1;
    u8 *var_a0;
    u8 *var_a1;
    u8 temp_v0;

    var_a0 = arg0;
    var_a1 = arg1;
    var_a2 = arg2;
    temp_v1 = var_a0;
    if (var_a2 != 0) {
    loop_1:
        temp_v0 = *var_a1;
        var_a1 += 1;
        *var_a0 = temp_v0;
        var_a0 += 1;
        if (temp_v0 & 0xFF) {
            var_a2 -= 1;
            if (var_a2 != 0) {
                goto loop_1;
            }
        }
        if (var_a2 != 0) {
            var_a2 -= 1;
            if (var_a2 != 0) {
                do {
                    *var_a0 = 0;
                    var_a2 -= 1;
                    var_a0 += 1;
                } while (var_a2 != 0);
            }
        }
    }
    return temp_v1;
}
