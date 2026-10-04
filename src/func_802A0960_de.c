#include "span_1000/code_802A137C.h"
#include "types.h"
/* Builds a path from drive, directory, filename and extension components. */
#define NULL 0
void func_802A0960_de(u8 *arg0, u8 *arg1, u8 *arg2, u8 *arg3, u8 *arg4) {
    u8 *extension = arg4;
    u8 *var_a0;
    u8 *var_a2;
    u8 temp_a1;
    u8 temp_a2;
    u8 temp_v0;
    u8 temp_v0_2;
    u8 var_v0;
    u8 var_v0_2;

    var_a0 = arg0;
    var_a2 = arg2;
    if (arg1 != NULL) {
        temp_a1 = *arg1;
        if (temp_a1 != 0) {
            *var_a0++ = temp_a1;
            *var_a0++ = 0x3A;
        }
    }
    if ((var_a2 != NULL) && (*var_a2 != 0)) {
        do {
            temp_v0 = *var_a2;
            var_a2 += 1;
            *var_a0 = temp_v0;
            var_a0 += 1;
        } while (var_a2[0] != 0);
        temp_a2 = var_a2[-1];
        if ((temp_a2 != 0x2F) && (temp_a2 != 0x5C)) {
            *var_a0 = 0x5C;
            var_a0 += 1;
        }
    }
    if (arg3 != NULL) {
        var_v0 = *arg3;
        var_a2 = arg3;
        if (var_v0 != 0) {
            do {
                var_a2 += 1;
                *var_a0 = var_v0;
                var_v0 = *var_a2;
                var_a0 += 1;
            } while (var_v0 != 0);
        }
    }
    if (extension != NULL) {
        var_a2 = extension;
        temp_v0_2 = *var_a2;
        if (temp_v0_2 != 0) {
            if (temp_v0_2 != 0x2E) {
                *var_a0 = 0x2E;
                var_a0 += 1;
            }
            var_v0_2 = *var_a2;
            if (var_v0_2 != 0) {
                do {
                    var_a2 += 1;
                    *var_a0 = var_v0_2;
                    var_v0_2 = *var_a2;
                    var_a0 += 1;
                } while (var_v0_2 != 0);
            }
        }
    }
    *var_a0 = 0;
}
