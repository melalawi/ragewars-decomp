#include "basetypes.h"

extern void func_8020DCA0(void);
extern void func_8020DC60(void *arg0);

s32 func_8020DC10(void *arg0) {
    if (*(s32 *) ((char *) arg0 + 0x64) != 0) {
        if ((u32) (*(s32 *) ((char *) arg0 + 0x21C) - 3) < 3U) {
            func_8020DCA0();
            return 1;
        }
        func_8020DC60(arg0);
        return 1;
    }
    return 1;
}
