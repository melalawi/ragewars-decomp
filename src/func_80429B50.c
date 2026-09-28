#include "basetypes.h"

/* Calls func_80429834 with 1 when the fourth argument is zero, and returns zero;
   func_80429B2C and func_80429B50 are the same function. */
extern void func_80429834(s32);

s32 func_80429B50(void *first, void *second, void *third, s32 fourth) {
    if (fourth == 0) {
        func_80429834(1);
        return 0;
    }
    return 0;
}
