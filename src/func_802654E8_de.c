#include "span_1000/code_802647BC.h"
#include "types.h"

s32 func_802654E8_de(void *arg0, s32 arg1, s32 arg2) {
    u32 temp_v1;
    u32 var_a3;

    if (arg1 != 0) {
        arg1--;
        var_a3 = 0;
        if (arg1 != 0) {
            do {
                temp_v1 = (u32)(var_a3 + arg1) >> 1;
                if ((u32)*((s32 *)arg0 + temp_v1) < (u32)arg2) {
                    var_a3 = temp_v1 + 1;
                } else {
                    arg1 = temp_v1;
                }
            } while (var_a3 < (u32)arg1);
        }
        if (*((s32 *)arg0 + var_a3) == arg2) {
            return (s32)var_a3;
        }
        return -1;
    }
    return -1;
}
