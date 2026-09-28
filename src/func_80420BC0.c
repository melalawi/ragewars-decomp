#include "basetypes.h"

/* Calls func_802A33BC with 1 and func_8025DF54 with 0xE78, and returns zero. */
extern void func_802A33BC(s32);
extern void func_8025DF54(s32);

s32 func_80420BC0(void) {
    func_802A33BC(1);
    func_8025DF54(0xE78);
    return 0;
}
