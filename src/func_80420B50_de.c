#include "span_16E000/code_8041F248.h"
#include "types.h"

/* Calls func_802A23C4_de with 1 and func_8025DF34_de with 0xE78, and returns zero. */
extern void func_802A23C4_de(s32);
extern void func_8025DF34_de(s32);

s32 func_80420B50_de(void) {
    func_802A23C4_de(1);
    func_8025DF34_de(0xE78);
    return 0;
}
