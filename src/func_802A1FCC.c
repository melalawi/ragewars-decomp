#include "basetypes.h"

typedef s32 (*FuncPtr)(s32, u8 *, s32);
extern FuncPtr D_800D2B9C;

s32 func_802A1FCC(s32 arg0) {
    u8 sp10;
    s32 result;

    if (D_800D2B9C(arg0, &sp10, 1) != 0) {
        result = sp10;
    } else {
        result = -1;
    }
    return result;
}
