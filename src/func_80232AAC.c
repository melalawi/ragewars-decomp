#include "basetypes.h"

extern s32 func_80274544(void);
extern s32 func_8022EAFC(void *arg0, s32 arg1);

s32 func_80232AAC(void *arg0) {
    s32 var_s1;
    s32 var_s0;

    var_s1 = *(s16 *) ((char *) arg0 + 0x62E);
    var_s0 = func_80274544() % 22;
    if (var_s0 >= 0) {
        do {
            var_s1 += 1;
            if (var_s1 >= 0x10) {
                var_s1 = 0;
            }
            if (func_8022EAFC(arg0, var_s1) != 0) {
                var_s0 -= 1;
            }
        } while (var_s0 >= 0);
    }
    return var_s1;
}
