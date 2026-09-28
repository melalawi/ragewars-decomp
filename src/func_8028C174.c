#include "basetypes.h"

extern int func_8028FE08(int *arg0, int arg1, int arg2);

s32 func_8028C174(void *arg0, s32 arg1) {
    s32 *temp_a0 = *(s32 **)((char *)arg0 + 0x54);

    if (arg1 < *temp_a0) {
        return func_8028FE08(temp_a0, *(s32 *)((char *)arg0 + 0x24), arg1);
    }
    return 0;
}
