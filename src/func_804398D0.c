#include "basetypes.h"

/* On event 3 with value 0xD, calls func_8029A73C and func_80299368 with 3. Returns zero. */
extern void func_8029A73C();
extern void func_80299368(s32);

s32 func_804398D0(void *first, void *second, u32 event, s32 value) {
    if ((event >> 16) == 3) {
        if (value != 0xD) {
            return 0;
        }
        func_8029A73C();
        func_80299368(3);
    }
    return 0;
}
