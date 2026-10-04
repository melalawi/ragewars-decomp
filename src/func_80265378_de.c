#include "span_1000/code_802647BC.h"
#include "types.h"

void func_80265378_de(u8 *arg0, u8 *arg1, s32 arg2) {
    u8 *var_a3;
    u8 *var_a3_2;
    s32 temp_v0;

    if (arg2 != 0) {
        var_a3 = arg0;
        if (((u32)arg1 | (u32)arg0 | arg2) & 3) {
            var_a3_2 = arg1;
            if (arg0 < arg1) {
                do {
                    *var_a3 = *var_a3_2;
                    var_a3_2++;
                    arg2--;
                    var_a3++;
                } while (arg2 != 0);
            } else {
                temp_v0 = arg2 - 1;
                var_a3 = arg0 + temp_v0;
                var_a3_2 = arg1 + temp_v0;
                do {
                    *var_a3 = *var_a3_2;
                    var_a3_2--;
                    arg2--;
                    var_a3--;
                } while (arg2 != 0);
            }
        } else {
            if (arg0 < arg1) {
                arg2 >>= 2;
                do {
                    *(u32 *)arg0 = *(u32 *)arg1;
                    arg1 += 4;
                    arg2--;
                    arg0 += 4;
                } while (arg2 != 0);
            } else {
                arg2 >>= 2;
                arg0 += (arg2 * 4) - 4;
                arg1 += (arg2 * 4) - 4;
                do {
                    *(u32 *)arg0 = *(u32 *)arg1;
                    arg1 -= 4;
                    arg2--;
                    arg0 -= 4;
                } while (arg2 != 0);
            }
        }
    }
}
