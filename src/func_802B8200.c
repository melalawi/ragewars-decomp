#include "basetypes.h"

#define FIELD(base, type, offset) (*(type *)((char *)(base) + (offset)))

extern void func_802B7520(void *arg0);
extern void func_802B7550(void *arg0, void **arg1);

s32 func_802B8200(void *arg0, void **arg1, s16 arg2) {
    s16 var_a2;
    s32 var_s2;
    s32 var_v0;
    void *var_s0;

    var_a2 = arg2;
    var_s0 = FIELD(arg0, void *, 0x14);
    var_s2 = 0;
    if ((var_s0 != 0) || (var_s0 = FIELD(arg0, void *, 4), (var_s0 != 0))) {
        *arg1 = var_s0;
        func_802B7520(var_s0);
        func_802B7550(var_s0, (void **)((char *)arg0 + 0xC));
    } else {
        var_s0 = FIELD(arg0, void *, 0xC);
        var_v0 = var_s2;
        if (var_s0 != 0) {
            do {
                if ((var_a2 >= FIELD(FIELD(var_s0, void *, 8), s16, 0x16)) &&
                    (FIELD(var_s0, s32, 0xD8) == 0)) {
                    *arg1 = var_s0;
                    var_s2 = 1;
                    var_a2 = (s16)(u16)FIELD(FIELD(var_s0, void *, 8), s16, 0x16);
                }
                var_s0 = FIELD(var_s0, void *, 0);
                var_v0 = var_s2;
            } while (var_s0 != 0);
        }
    }
    return var_s2;
}
