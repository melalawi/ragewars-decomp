#include "basetypes.h"

extern s32 func_802469F8(void *, s32, s32);
extern s32 func_8024B6E4(void *arg0, s32 arg1, s32 arg2);

s32 func_8024B690(void *a, s32 c, s32 flag) {
    s32 temp_v0 = func_802469F8(a, c, -1);

    if (temp_v0 != -1) {
        return func_8024B6E4(a, temp_v0, flag);
    }
    return 0;
}
