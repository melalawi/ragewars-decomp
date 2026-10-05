#include "span_1000/code_8020D370.h"
#include "types.h"

extern void func_8020DCA0_de(void);
extern void func_8020DC60_de(void *arg0);




s32 func_8020DC10_de(void *arg0) {
    if (((func_8020DC10_S1 *)(arg0))->unk64 != 0) {
        if ((u32) (((func_8020DC10_S1 *)(arg0))->unk21C - 3) < 3U) {
            func_8020DCA0_de();
            return 1;
        }
        func_8020DC60_de(arg0);
        return 1;
    }
    return 1;
}
