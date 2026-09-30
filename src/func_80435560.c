/* Reads two values and reports whether the first reaches the rounded object size when the second is nonzero. */
#include "basetypes.h"

extern s32 func_80405160(void *a0, s32 *a1);
extern s32 func_804050CC(void *a0, s32 *a1);
extern s32 func_80435600(void);
extern s32 func_804057EC(s32 a0);

s32 func_80435560(void *arg0, s32 *out)
{
    s32 a, b;
    s32 ret;
    s32 val;

    *out = 0;

    ret = func_80405160(arg0, &a);
    if (ret == 0) {
        ret = func_804050CC(arg0, &b);
        if (ret == 0) {
            val = func_804057EC(func_80435600());
            if (b == 0) {
                *out = 0;
            } else if (a < val) {
                *out = 0;
            } else {
                *out = 1;
            }
        }
    }

    return ret;
}
