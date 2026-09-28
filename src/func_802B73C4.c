#include "basetypes.h"

extern s32 func_802B742C(void *arg0);

s32 func_802B73C4(void *arg0, s32 *arg1) {
    u32 field8;

    field8 = *(u32 *)((char *)arg0 + 8);
    if (!(field8 < (u32)(*(s32 *)((char *)arg0 + 0) + *(s32 *)((char *)arg0 + 0x10)))) {
        return 0;
    }
    *arg1 = func_802B742C(arg0);
    *(u32 *)((char *)arg0 + 8) = field8;
    return 1;
}
